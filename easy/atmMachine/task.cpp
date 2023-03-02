#include <iostream>
using namespace std;

int main() {
	int dataCount,pplCount,money,withdrawAmount;
	cin >> dataCount;
	
	for(int i =0; i<dataCount; i++){
	    cin >> pplCount >> money;
	    for(int j =0; j<pplCount; j++){
	       cin>>withdrawAmount;
	       
	       if(withdrawAmount>money){
	           cout<<0;
	           continue;
	       }
	       cout<<1;
	       money-=withdrawAmount;
	   }
	    cout<<endl;
	}
	
	return 0;
}
