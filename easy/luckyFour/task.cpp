#include <iostream>
using namespace std;

int main() {
	int i, num, rem, count=0;
	cin >> i;

    for(int j=0; j<i; j++){
        cin >> num;
        while ( num != 0 ){
            rem=num%10;
            num=num/10;
            if(rem==4){
                count++;
            }
	    }
	    cout << count << endl;
	    count=0;
    }

	return 0;
}
