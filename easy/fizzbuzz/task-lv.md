# 412. Fizz Buzz


## Rezultāts
```
Izpildes laiks 4 ms
Pārspēj 45,43%
Atmiņa 7,9 MB
Pārspēj 71,2%
```
Ja ir dots vesels skaitlis n, atgrieziet virknes masīva atbildi (ar 1 indeksu), kur:

- atbilde[i] == "FizzBuzz", ja i dalās ar 3 un 5.
- atbilde[i] == "Fizz", ja i dalās ar 3.
- atbilde[i] == "Buzz", ja i dalās ar 5.
- atbilde[i] == i (kā virkne), ja neviens no iepriekš minētajiem nosacījumiem nav patiess.
 

## 1. piemērs:
```
Ievade: n = 3
Izvade: ["1", "2", "Fizz"]
```
## 2. piemērs:
```
Ievade: n = 5
Izvade: ["1", "2", "Fizz", "4", "Buzz"]
```
## 3. piemērs:
```
Ievade: n = 15
Izvade: ["1", "2", "Fizz", "4", "Buzz", "Fizz", "7", "8", "Fizz", "Buzz", "11", "Fizz" "13", "14", "FizzBuzz"]
```

## Kods
```cpp
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans;
        for (int i=1;i<=n;i++){
            if (i%3==0 && i%5==0){
                ans.push_back("FizzBuzz");
            }
            else if (i%5==0){
                ans.push_back("Buzz");
            }
            else if (i%3==0){
                ans.push_back("Fizz");
            }
            else {
                ans.push_back(to_string(i));
            }
       }
       return ans;
    }
};
```