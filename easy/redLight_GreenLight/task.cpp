#include <iostream>
using namespace std;

int main() {
	int runAmount, aliHeight, n, shotCount, currHeight;
	cin>>runAmount;
	while(runAmount--){
        shotCount=0;
	    cin>>n>>aliHeight;
	    for(int i =0;i<n;i++){
            cin>>currHeight;
	        if(currHeight >aliHeight){
                shotCount++;
            }
	    }
        cout<<shotCount<<endl;
	}
	return 0;
}
