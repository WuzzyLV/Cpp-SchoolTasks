#include <iostream>
using namespace std;

int main() {
    int runAmount, balls, boxes, boxSum;
    cin>>runAmount;
	while(runAmount--){
        boxSum=0;
	    cin>>balls>>boxes;
        for(int i=1; i<=boxes; i++){
            boxSum+=i;
        }
        if(balls>=boxSum){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
	}
	return 0;
}
