# 7. Apgrieztais veselais skaitlis
## Rezultāts
```
Izpildes laiks 0 ms
Pārspēj 100%
Atmiņa 5,8 MB
Pārspēj 93,39%
```
Dots 32 bitu vesels skaitlis x ar zīmi, atgriež x ar apgrieztiem cipariem. Ja, apgriežot x, vērtība iziet ārpus 32 bitu veselo skaitļu diapazona [-2^31, 2^31 - 1], atgrieziet 0.

Pieņemsim, ka vide neļauj saglabāt 64 bitu veselus skaitļus (parakstītus vai neparakstītus).

## 1. piemērs:
```
Ievade: x = 123
Rezultāts: 321
```
## 2. piemērs:
```
Ievade: x = -123
Izvade: -321
```
## 3. piemērs:
```
Ievade: x = 120
Rezultāts: 21
```

## Ierobežojumi:

- -2^31 <= x <= 2^31 - 1

## Kods 
```cpp
class Solution {
public:
    int reverse(int x) {
        long reverse = 0;
        int num = x;
        while(x!=0){
            int digit = x%10;
            reverse = reverse*10 + digit;
            x = x/10;
        }
        if(reverse>INT_MAX || reverse<INT_MIN)
            return 0;
        return reverse;
    }
};
```
