#include <iostream>
#include <cmath>

using namespace std;
int main(){

    int base;
    cin >> base;

    int size=0;
    int count=base;
    while(count>0){
        count/=10;
        size++;
    }

    int math=base;
    int res=0;
    while(math>0){
        int num=math%10;
        res+=pow(num, size);
        math/=10;
    }
    if(res==base){
        cout<< "IR" <<endl;
    } else{
        cout<< "NAV" <<endl;
    }

    return 0;
}