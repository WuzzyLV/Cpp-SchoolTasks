# [9. Palindroma numurs vienkāršs](https://leetcode.com/problems/palindrom-number/description/)
Dots vesels skaitlis x, atgriež patiesu, ja x ir palindroms, un aplams pretējā gadījumā.

## 1. piemērs:
```
Ievade: x = 121
Rezultāts: patiess
Paskaidrojums: 121 skan kā 121 no kreisās puses uz labo un no labās uz kreiso.
```
## 2. piemērs:
```
Ievade: x = -121
Izvade: nepatiesa
Paskaidrojums: No kreisās puses uz labo tas skan -121. No labās puses uz kreiso tas kļūst par 121-. Tāpēc tas nav palindroms.
```
## 3. piemērs:
```
Ievade: x = 10
Izvade: nepatiesa
Paskaidrojums: skan 01 no labās puses uz kreiso. Tāpēc tas nav palindroms.
```

## Ierobežojumi:
```
-231 <= x <= 231 - 1
```

# Rezultāts
## Izmēģiniet 1
```
Izpildlaiks: 4 ms Uzvar: 97,77%
Atmiņa: 5,9 MB Uzvar: 62,67%
```

## Kods
```cpp
#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int num=x; long sum=0;
        while(num>0){
            sum=(sum*10)+(num%10);
            num=num/10;
        }
        return (sum==x);
    }
};


```