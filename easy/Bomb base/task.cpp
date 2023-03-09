#include <iostream>
using namespace std;

// houses get destroyed systematically and yes
// 
int main() {
    int runAmount, n, bomb,closestHouse, housesDestroyed;
    cin>>runAmount;
	while(runAmount--){
        closestHouse=0;
        housesDestroyed=0;
        cin>>n>>bomb;
        int houses[n];
        for(int i =0;i<n;i++){
            cin>>houses[i];
            if(houses[i]>closestHouse &&houses[i]<=bomb){
                closestHouse=houses[i];
            }
        }
        cout<<"closestHouse: "<<closestHouse<<endl;
        if(closestHouse==0){
            cout<<0<<endl;
            continue;
        }
        housesDestroyed++;
        for(int i =0;i<n;i++){
            if(houses[i]<closestHouse){
                cout<<"houses[i]: "<<houses[i]<<"destroyed"<<endl;
                housesDestroyed++;
            }
        }

        cout<<housesDestroyed<<endl;
    }
	return 0;
}
