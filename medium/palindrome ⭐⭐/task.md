
irpalin	Ir palindroms?	1 sek.
# Uzdevums
Par palindromu sauc tādu burtu virkni, kas vienādi lasāma gan no kreisās puses uz labo, gan no labās uz kreiso. Šajā uzdevumā interesēsimies tikai par burtiem - ja virknē būs citi simboli, tos vienkārši neņemsim vērā. Arī lielos un mazos burtus nešķirosim. Tā, piemēram, virknes "Ala", "Sile, putra, kartupelis" un "A man, a plan, a canal - PANAMA!" ir palindromi, bet "Alva", "Salas malas" un "Abrakadabra" - nav. Uzrakstiet programmu, kas ievadītai simbolu virknei nosaka, vai ievadītā virkne ir palindroms, vai nav!

 
# Ievaddati
Teksta faila irpalin.dat pirmajā rindā dots naturāls skaitlis, kura vērtība nepārsniedz 200 - ievadāmās simbolu virknes garums. Faila otrajā rindā dota simbolu virkne, kas var saturēt latviešu alfabēta burtus bez diakritiskajām zīmēm, tukšumsimbolus un pieturzīmes (punktus, komatus, domu zīmes, jautājuma zīmes un izsaukuma zīmes).

 
# Izvaddati
Teksta faila irpalin.rez vienīgajā rindā jāizvada vārds "IR", ja ievadītā virkne ir palindroms, vai "NAV", ja ievadītā virkne nav palindroms.

 
# Piemērs
## irpalin.dat	irpalin.rez
    23
    Sile, putra, kartupelis
    IR 
## irpalin.dat	irpalin.rez
    11
    Abrakadabra
    NAV

# Result
> Score: 8/10

| Tests  |  Rezultāts   |
| ------ | ------------ |
|    1   |	Pareizs     |
|    2   |	Pareizs     |
|    3   |	Pareizs     |
|    4   |	Nepareizs   |
|    5	 |  Pareizs     |
|    6	 |  Pareizs     |
|    7	 |  Nepareizs   |
|    8 	 |  Pareizs     |
|    9 	 |  Pareizs     |
|    10	 |  Pareizs     |

## Kods
```cpp
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
        in+=(curr);
    }
    //sets the string to the defined size
    in=in.substr(0,l);

    for(int i=0; i<in.length();i++){
        if(in[i]<=92 && in[i]>=65){
            in[i]+=32;
        }
        if(in[i] =='-' ||
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
```
