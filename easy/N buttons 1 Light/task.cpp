#include <iostream>
using namespace std;

int main() {
	int runAmount, n;
	bool light;
	string before,after;
	cin>>runAmount;

	while(runAmount--){
		light=true;
		cin>>n>>before>>after;
		for(int i=0; i<n; i++){
			if(before[i]!=after[i]){
				light=!light;
			}
		}
		if(light){
			cout<<"1"<<endl;
		}else{
			cout<<"0"<<endl;
		}
	}
	return 0;
}
