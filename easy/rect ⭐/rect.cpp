#include <iostream>
#include <fstream>

using namespace std;

int main() {
    cout << "Bing bong starting..." << endl;
    ifstream inputFile("taisnst.in");
  
    if(!inputFile.good()){  
        ofstream inputFile("taisnst.in");
        cout << "File doesnt exist making, please input a value!" << endl;
        return 0;
    }
  
    cout << "File exists reading!!"<< endl;
    
    int n,m;
    inputFile >> n >> m; 

    if(!(n<10000 && m<10000 )){
        cout << "Number must be below 10000 " << endl;
        return 0;
    }
    
    cout<< "Program ran succesfully!" << endl;

    int i =1;
    while(!(n==m)){
        if(n>m){
            n-=m;
        }else {
            m-=n;
        }
        i++;
    }

    ofstream outputFile("taisnst.out");
    outputFile << i;
  
    inputFile.close();
    outputFile.close();
}