#include <iostream>
using namespace std;
/*
Finds the largest number that can divide both a and b without a remainder
*/
int gcd(int x, int y) {
    if(y==0){
        return x;
    }
    return gcd(y, x%y);
}

int main() {
	int runAmount, x, y, gcdNum;
	cin>>runAmount;
	while(runAmount--){
	    cin>>x>>y;
        gcdNum=gcd(x,y);
        /*
        Calculates area then, gets the biggest square that can fit in the area
        and checks how many times it can fit, and done
        */
	    cout<<(x*y)/(gcdNum*gcdNum)<<endl;
	}
	return 0;
}
