#include <iostream>
using namespace std;

long stonks(long n) {
    /*
    Stop at 12< because then its not worth it
    */
    if(n>=12){
        return stonks(n/2) + stonks(n/3)+ stonks( n/4);
    } else{
        return n;
    }
}

int main() {
	long x;
    while(cin>>x){
        cout<< stonks(x) << endl;
    }
	return 0;
}