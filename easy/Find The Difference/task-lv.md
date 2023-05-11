# 217. Satur dublikātu


## Rezultāts
```
Izpildes laiks 132 ms
Pārspēj 76,58%
Atmiņa 57,1 MB
Pārspēj 99,60%
```
Ņemot vērā veselu skaitļu masīva numurus, atgriež vērtību True, ja kāda vērtība masīvā parādās vismaz divas reizes, un atgriež vērtību false, ja katrs elements ir atšķirīgs.

 

## 1. piemērs:
```
Ievade: cipari = [1,2,3,1]
Rezultāts: patiess
```

## 2. piemērs:
```
Ievade: cipari = [1,2,3,4]
Izvade: nepatiesa
```
## 3. piemērs:
```
Ievade: cipari = [1,1,1,3,3,4,3,2,4,2]
Rezultāts: patiess
  ```

## Ierobežojumi:

- 1 <= nums.length <= 105
- -109 <= cipari[i] <= 109

## Kods
```cpp
class Solution {
public:
    char findTheDifference(string s, string t) {
        int len = s.length();
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        
        for(int i=0; i<len; i++){
            if(s[i]!=t[i])
            return t[i];
        }
        return t[len];
    }
};
```