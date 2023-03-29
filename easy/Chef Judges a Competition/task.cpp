#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int runAmount, n, aHigh, bHigh, aTotal, bTotal;
	cin>>runAmount;
	while(runAmount--){
        cin>> n;
        int a[n];
        int b[n];
        aTotal=0; bTotal=0; aHigh=0; bHigh=0;
        // get input and find highest
        for(int i =0;i<n;i++){
            cin>>a[i];
            if(a[i]>a[aHigh]){
                aHigh=i;
            }
        }
        for(int i =0;i<n;i++){
            cin>>b[i];
            if(b[i]>b[bHigh]){
                bHigh=i;
            }
        }
        // Process data, find winner
        a[aHigh]=0; b[bHigh]=0;
        for(int i =0;i<n;i++){
            aTotal+=a[i];
            bTotal+=b[i];
        }
        if(aTotal<bTotal){
            cout<<"Alice"<<endl;
        }else if(bTotal<aTotal){
            cout<<"Bob"<<endl;
        }else{
            cout<<"Draw"<<endl;
        }
	}
	return 0;
}
