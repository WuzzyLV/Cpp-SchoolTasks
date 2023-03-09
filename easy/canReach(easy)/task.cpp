#include <iostream>
using namespace std;

int main() {
	int runAmount, k, x,y;
	cin>>runAmount;
	while(runAmount--){
	    cin>>x>>y>>k;
	    if(x%k==0 && y%k==0){
	        cout<<"YES" <<endl;
	        continue;
	    }
	    cout<<"NO"<<endl;
	}
	return 0;
}
