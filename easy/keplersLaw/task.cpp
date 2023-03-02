#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int dataCount, t1,t2,r1,r2;
    cin >> dataCount;
    
    for(int i =0; i<dataCount; i++){
        cin >> t1;  cin >> t2;
        cin >> r1;  cin >> r2;
        if(pow(t1, 2)/pow(r1, 3) == pow(t2, 2)/pow(r2, 3)){
            cout << "Yes" << endl;
            continue;
        }
        cout << "No" << endl;
    }
	return 0;
}
