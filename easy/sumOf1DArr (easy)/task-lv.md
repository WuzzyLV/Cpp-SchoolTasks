# [1480. 1d masīva tekošā summa](https://leetcode.com/problems/running-sum-of-1d-array/) Viegli

Doti masīva numuri. Mēs definējam masīva tekošo summu kā darbībasSumma[i] = summa(nums[0]…nums[i]).
Atgriež tekošo skaitļu summu.

 

## 1. piemērs:
    Ievade: cipari = [1,2,3,4]
    Izvade: [1,3,6,10]
    Paskaidrojums: Ieskaites summu iegūst šādi: [1, 1+2, 1+2+3, 1+2+3+4].
## 2. piemērs:
    Ievade: cipari = [1,1,1,1,1]
    Izvade: [1,2,3,4,5]
    Paskaidrojums: Darbības summu iegūst šādi: [1, 1+1, 1+1+1, 1+1+1+1, 1+1+1+1+1].

## 3. piemērs:
    Ievade: cipari = [3,1,2,10,1]
    Izvade: [3,4,6,16,17]


### Ierobežojumi:
    1 <= nums.length <= 1000
    -10^6 <= cipari[i] <= 10^6

# Rezultāts
    Izpildlaiks (3. versijai)
    0 ms
    Beats
    100%
    Atmiņa
    8,5 MB
    Beats
    44,64%
    
    
## Kods
```cpp
#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {	
        int count=0;
        int size=nums.size();
        for(int i=0;i<size;i++){
            count=count+nums[i];
            nums[i]=count;
        }
        
    }
};
```
