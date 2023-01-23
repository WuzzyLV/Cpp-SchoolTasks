#include <iostream>
#include <fstream>

using namespace std;
int main() {
    cout << "Bing bong starting..." << endl;
    ifstream inputFile("irpalin.dat");
  
    if(!inputFile.good()){  
        ofstream inputFile("irpalin.dat");
        cout << "File doesnt exist making, please input a value!" << endl;
        return 0;
    }
  
    cout << "File exists reading!!"<< endl;
    
    int l;
    string in;
    inputFile>> l;
  
    if(!(l<200)){
        cout << "Number must be below 200 " << endl;
        return 0;
    }

    while (inputFile){
        string curr;
        inputFile>> curr;
        in+=(curr+" ");
    }
    //sets the string to the defined size
    in=in.substr(0,l);

    for(int i=0; i<in.length();i++){
        if(in[i]<=92 && in[i]>=65){
            in[i]+=32;
        }
        if(in[i]==' ' ||
        in[i] =='-' ||
        in[i]==',' ||
        in[i]=='!' ||
        in[i]=='?' ){
            in.erase(i,1);
            i--;
        }
    }
    
    string invertStr="";
    for(int i=in.length()-1; i<in.length();i--){
        invertStr+=in[i];
    }

    ofstream outputFile("irpalin.rez");
    if(in.compare(invertStr)==0){
        outputFile<<"IR";
        return 0;
    }
    outputFile<<"NAV";
    return 0;
}
