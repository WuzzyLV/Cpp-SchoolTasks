#include <iostream>
using namespace std;

int main() {
	int runAmount, a,b;
    cin>>runAmount;
    while(runAmount--){
        cin>>a>>b;
        if(a%3==0 || b%3==0){
            cout<<0<<endl;
            continue;
        }
        if(a%3==1 && b%3==1){
            cout<<1<<endl;
            continue;
        }
        if(a%3==b%3){
            cout<<1<<endl;
            continue;
        }
        cout<<2<<endl;
    }
	return 0;
}
