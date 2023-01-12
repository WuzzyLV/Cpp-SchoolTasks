#include <iostream>
#include <fstream>

using namespace std;

int main() {
  cout << "Bing bong starting..." << endl;
  ifstream inputFile("reiz.in");
  
  if(!inputFile.good()){
    ofstream inputFile("reiz.in");
    cout << "File doesnt exist making, please input a value!" << endl;
    return 0;
  }
  int N;
  cout << "File exists reading!!"<< endl;
  inputFile >> N;
  
  if(!(1 <= N && N <= 32000)){
    cout << "Number must be between 0 and 32000!" << endl;
    return 0;
  }

  ofstream outputFile("reiz.out");
  outputFile << N*2;

  cout<< "Program ran succesfully!" << endl;
  
  inputFile.close();
  outputFile.close();
}
