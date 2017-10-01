#include <iostream>
using namespace std; 

void TowerOfHanoi(int count, int source, int destination, int spare){
        cerr << "TowerOfHanoi(" << count << ", " << source << ", " << destination << ", " << spare << ")\n";
        if( count == 1){
                cout << "Move the top disk from " << source << " to " << destination << endl;
        }else{
                TowerOfHanoi( count-1, source, spare, destination );
                TowerOfHanoi( 1, source, destination, spare);
                TowerOfHanoi( count-1, spare, destination, source);
        }
}

int main(){
        int numRings = -1;
        int startingTower = 1;
        int spareTower = 2;
        int endingTower = 3;

        cin >> numRings;
        //            count     source         destination  spare
        TowerOfHanoi( numRings, startingTower, endingTower, spareTower);

        return 0;
} 
