#include <iostream>

using namespace std;

int main(){
    int N;
    
    cin >> N;
    //logic
    int k=2;

    while(N%k!=0){
        k++;
    }
    int sk1=N/k;
    int sk2=N-sk1;
    cout << sk2;
    return 0;
}
