# 1365. Cik skaitļi ir mazāki par pašreizējo skaitli


## Rezultāts
```
Izpildes laiks 3 ms Pārspēj 38,26%
Atmiņa 5,9 MB Pārspēj 92,93%
```
Dots vesels skaitlis n, atgriež starpību starp tā ciparu reizinājumu un tā ciparu summu.
 

## 1. piemērs:
```
Ievade: n = 234
Rezultāts: 15
Paskaidrojums:
Ciparu reizinājums = 2 * 3 * 4 = 24
Ciparu summa = 2 + 3 + 4 = 9
Rezultāts = 24 - 9 = 15
```
## 2. piemērs:
```
Ievade: n = 4421
Rezultāts: 21
Paskaidrojums:
Ciparu reizinājums = 4 * 4 * 2 * 1 = 32
Ciparu summa = 4 + 4 + 2 + 1 = 11
Rezultāts = 32 - 11 = 21
```

### Ierobežojumi:
- 1 <= n <= 10^5

## Kods
```cpp
class Solution {
public:
    int subtractProductAndSum(int n) {
        int digit,times = 1,sum=0;
        while(n!=0)
        {
            digit = n % 10;
            sum += digit;
            times *= digit;
            n = n/10;
        }
        int res = times - sum;
        return res;   
    }
};
```
