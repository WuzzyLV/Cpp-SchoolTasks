#include <iostream>
#include <cmath>

#include <chrono>

using namespace std;
int main(){

    int base;
    cin >> base;

    auto start = std::chrono::high_resolution_clock::now();

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

    auto end = std::chrono::high_resolution_clock::now();
 
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
    cout<< duration.count() << " ms" << endl;
    return 0;
}