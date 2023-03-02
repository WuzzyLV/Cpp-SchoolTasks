#include <iostream>
using namespace std;

int main() {
    int dataCount, turns;
    bool on=false;
    cin >> dataCount;

    for(int i =0; i<dataCount; i++){
        cin >> turns >> on;
        
        if(turns%4==0){
            cout<< ((on) ? "On" : "Off") <<endl; 
            continue;
        }
        cout<< ((on) ? "Ambiguous" : "On") <<endl; 
    }
	return 0;
}
