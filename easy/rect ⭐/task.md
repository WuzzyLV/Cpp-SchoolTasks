Vilibalds nolēma sagriezt taisnstūrveida rūtiņu lapu, kuras izmēri bija n×m rūtiņas, kvadrātos. Vispirms viņš no taisnstūra ar taisnu griezienu nogrieza lielāko iespējamo kvadrātu. Pēc tam kvadrātu nolika malā un atkārtoja iepriekšējo darbību ar atlikušo taisnstūri. Tā (visu laiku nogriežot lielāko iespējamo kvadrātu) Vilibalds turpināja griezt, līdz kamēr arī atlikumā ieguva kvadrātu.

Uzrakstiet programmu, kas nolasa no faila taisnst.in naturālu skaitļu n un m vērtības 
## (n < 10000, m < 10000)
un nosaka, cik kvadrātus Vilibalds ieguva, sagriežot taisnstūri iepriekš aprakstītajā veidā.

## Kods
```cpp
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
```