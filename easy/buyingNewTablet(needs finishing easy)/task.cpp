#include <iostream>
using namespace std;

int main() {
	int runTimes, tabletAmount, budget;
	cin>>runTimes;
	
	while(runTimes--){
	    cin>> tabletAmount >> budget;
	    int tablets[tabletAmount][3];//0 width 1 height 2 price
	    for(int i= 0;i<tabletAmount; i++){
	        cin>> tablets[i][0] >>tablets[i][1] >> tablets[i][2];
	        cout<<tablets[i][0] << tablets[i][2] <<tablets[i][2]<<endl;
	    }
	}
	
	return 0;
}

