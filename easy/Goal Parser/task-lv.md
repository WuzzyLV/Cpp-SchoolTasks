[1678. Mērķa parsētāja interpretācija](https://leetcode.com/problems/goal-parser-interpretation/description/)
Jums pieder mērķa parsētājs, kas var interpretēt virkni "komanda". “Komanda” sastāv no alfabēta “G”, “()” un/vai “(al)”” noteiktā secībā. Mērķa parsētājs interpretēs “G” kā virkni “G”, “()”” kā virkni “o” un “(al)”” kā virkni “al” . Pēc tam interpretētās virknes tiek savienotas sākotnējā secībā.

Ņemot vērā virkni “command”, atgrieziet mērķa parsētāja “komanda” interpretāciju.

 

## 1. piemērs:
```
Ievade: komanda = "G()(al)"
Rezultāts: "Mērķis"
Paskaidrojums: Mērķa parsētājs interpretē komandu šādi:
G -> G
() -> o
(al) -> al
Galīgais apvienotais rezultāts ir "Gols".
```
## 2. piemērs:
```
Ievade: komanda = "G()()()()(al)"
Izvade: "Gooooal"
```
## 3. piemērs:
```
Ievade: komanda = "(al)G(al)()()G"
Izvade: "alGalooG"
```
## Ierobežojumi:

- 1 <= komanda. garums <= 100
- komanda sastāv no "G", "()" un/vai "(al)" noteiktā secībā.

# Rezultāts
```
Izpildes laiks 0 ms
Pārspēj 100%
Atmiņa 6,2 MB
Pārspēj 23,35%
```

## Kods
```cpp
#include <iostream>

using namespace std;

class Solution {
public:
    string interpret(string command) {
        string result="";
        for(int i =0;i<command.length();i++){
            if(command[i]=='G'){
                result+='G';
            }
            else if(command[i]=='(' && command[i+1]==')'){
                result+='o';
                i++;
            }
            else if(command[i]=='(' && command[i+1]=='a'){
                result+="al";
                i+=3;
            }
        }
        return result;
        
    }
};
```