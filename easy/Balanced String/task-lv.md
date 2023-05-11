## [1221. Sadaliet virkni līdzsvarotās virknēs](https://leetcode.com/problems/split-a-string-in-balanced-strings/description/)

Līdzsvarotas virknes ir tādas, kurās ir vienāds L un R rakstzīmju skaits.

Ņemot vērā līdzsvarotu "virkni s", sadaliet to noteiktā skaitā apakšvirkņu, lai:

Katra apakšvirkne ir līdzsvarota.
Atgrieziet maksimālo līdzsvaroto virkņu skaitu, ko varat iegūt.

 

## 1. piemērs:
```
Ievade: s = "RLRRLLRLRL"
Izvade: 4
Paskaidrojums: s var sadalīt "RL", "RRLL", "RL", "RL", katrā apakšvirknē ir vienāds skaits "L" un "R".
```
## 2. piemērs:
```
Ievade: s = "RLRRRLLRLL"
Izvade: 2
Paskaidrojums: s var sadalīt "RL", "RRRLLRLL", katrā apakšvirknē ir vienāds skaits "L" un "R".
Ņemiet vērā, ka s nevar sadalīt "RL", "RR", "RL", "LR", "LL", jo 2. un 5. apakšvirkne nav līdzsvarotas.
```
## 3. piemērs:
```
Ievade: s = "LLLLRRRR"
Izvade: 1
Paskaidrojums: s var sadalīt "LLLLRRRR".
```
## Ierobežojumi:

- 2 <= s.garums <= 1000
- s[i] ir “L” vai “R”.
- s ir līdzsvarota virkne.

# Rezultāts
```
Izpildes laiks 0 ms
Pārspēj 100%
Atmiņa 6,2 MB
Pārspēj 90,43%
```

## Kods
```cpp
#include <iostream>

using namespace std;

class Solution {
public:
    int balancedStringSplit(string s) {
    int count = 0, balanced=0; 
    
    for (char c : s) {
        if (c == 'L') {
            count++;
        } else {
            count--;
        }
        if (count == 0) {
            balanced++;
        }
        
    }
    return balanced; 
    }
};
```