#include <iostream>
using namespace std;

int giveToLoser(int a, int b, int x){
    if(a<b){
        a+=x;
    }else{
        b+=x;
    }
}

int main() {
	int runAmount, a,b,c,d;
	cin>>runAmount;
	while(runAmount--){
	    cin>>a>>b>>c>>d;
        giveToLoser(a,b,c);
        giveToLoser(a,b,d);
        if(a>=b){
            cout<<"N"<<endl;
        }else{
            cout<<"S"<<endl;
        }
	}
	return 0;
}
