#include <iostream>
#include <cmath>

using namespace std;

int main(){
    //n = stair amount m= height
    int n,m;
    cin >> n >> m;
    //logic
    bool legal=true;
    int last=0, curr;
    for(int i=0; i<n; i++){
        cin>>curr;
        if(last==0){
            last=curr;
            continue;
        }
        if(curr-last>m){
            legal=false;
            break;
        }
        last=curr;
    }
    if(legal){
        cout<<"Yey!";
    }else{
        cout<<"Oh, NO!";
    }

    return 0;
}
