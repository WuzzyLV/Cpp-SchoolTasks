#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int N;
    
    cin >> N;
    //logic
    int counter =0;
    for(int i=(N-1); i>=1; i--){
        counter++;
        if((N%i) ==0){  break;   }
    }
    cout << counter << endl;
    return 0;
}
