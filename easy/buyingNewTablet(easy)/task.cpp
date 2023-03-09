#include <iostream>
using namespace std;

int main() {
	int runTimes, tabletAmount, budget, bestScreen;
	cin>>runTimes;
	int currW, currH, currScreen, currPrice;
	while(runTimes--){
	    bestScreen=0;
	    cin>> tabletAmount >> budget;
	    for(int i= 0;i<tabletAmount; i++){
            cin>>currW>>currH>>currPrice;
            if(currPrice>budget){
                continue;
            }
            currScreen=currH*currW;
            if(currScreen>bestScreen){
                bestScreen=currScreen;
            }
	    }
	    if(bestScreen==0){
	        cout<<"no tablet" <<endl;
	    }else{
	        cout<<bestScreen << endl;
	    }
	}
	
	return 0;
}

