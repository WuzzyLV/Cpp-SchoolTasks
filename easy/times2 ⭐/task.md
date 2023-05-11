## Uzdevums
Šis ir ļoti vienkāršs uzdevums. Jūsu programmai ir jānolasa skaitlis no ievaddatu faila reiz.in un jāizvada šis skaitlis pareizināts ar 2 failā reiz.out.

## Ievaddati
Ievaddatu fails reiz.in satur 1 skaitli N (1 <= N <= 32000)

## Izvaddati
Izvaddatu failā reiz.out jāieraksta skaitlis 2 * N

## Piemērs
reiz.in	reiz.out
  5       10


## Kods
```cpp
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
```
