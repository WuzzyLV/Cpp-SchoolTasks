# 231. Divu spēks


## Rezultāts
```
Izpildes laiks 0 ms
Pārspēj 100%
Atmiņa 5,8 MB
Pārspēj 97,59%
```

Dots vesels skaitlis n, atgriež patiesu, ja tas ir divi pakāpē. Pretējā gadījumā atgrieziet nepatiesu.

Vesels skaitlis n ir divnieks, ja eksistē tāds vesels skaitlis x, ka n == 2x.

 

## 1. piemērs:
```
Ievade: n = 1
Rezultāts: patiess
Paskaidrojums: 20 = 1
```
### 2. piemērs:
```
Ievade: n = 16
Rezultāts: patiess
Paskaidrojums: 24 = 16
```
### 3. piemērs:
```
Ievade: n = 3
Izvade: nepatiesa
  ```

### Ierobežojumi:
- -2^31 <= n <= 2^31 - 1

## Kods
```cpp
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n == 0) 
            return 0;
        while(n % 2 == 0) {
            n /= 2;
        }
        return n == 1;
    }
};
```