#include <iostream>
#include <cmath>
#include <vector>

#include <chrono>

using namespace std;
int main(){
    int set[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 153, 370, 371, 407, 1634, 8208, 9474, 54748, 92727, 93084, 548834, 1741725, 4210818, 152212, 9800817, 9926315, 24678050, 24678051, 88593477, 146511208, 472335975, 534494836, 912985153 };

    int base;
    vector<int> timeRes;
    //cin >> base;
    for(int i=0;i<1000000;i++){

    int pick=(rand() % sizeof(set) / sizeof(int));
    base=set[pick];
    //cout<< base << endl;

    auto start = std::chrono::high_resolution_clock::now();

    vector<int> vec;
    int count=base;
    while(count>0){
        vec.push_back(count%10);
        count/=10;
    }
    int res=0;

    int size=vec.size();

    for(int i =0;i<size; i++){
        res+=pow(vec[i], size);
    }


    if(res==base){
        cout<< "IR" <<endl;
    } else{
        cout<< "NAV" <<endl;
    }

    auto end = std::chrono::high_resolution_clock::now();
 
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);

    cout<< duration.count() << endl;
    timeRes.push_back(duration.count());
    //cout<< duration.count() << " ms" << endl;
    }
    int avg=0;
    for(int i =0;i<timeRes.size();i++){
        avg+=timeRes[i];
    }
    avg/=timeRes.size();

    cout<< "AVERAGE RUNTIME: " <<avg << "ms" <<endl;


    return 0;
} 