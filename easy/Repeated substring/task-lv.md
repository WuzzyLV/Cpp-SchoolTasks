# 1365. Cik skaitļi ir mazāki par pašreizējo skaitli


## Rezultāts
```
Izpildes laiks 20 ms
Pārspēj 61,55%
Atmiņa 13,4 MB
Pārspēj 64,29%
```
Ņemot vērā virkni s, pārbaudiet, vai to var izveidot, paņemot no tās apakšvirkni un pievienojot vairākas apakšvirknes kopijas.

 

## 1. piemērs:
```
Ievade: s = "abab"
Rezultāts: patiess
Paskaidrojums: tā ir apakšvirkne "ab" divreiz.
```
## 2. piemērs:
```
Ievade: s = "aba"
Izvade: nepatiesa
```

## 3. piemērs:
```
Ievade: s = "abcabcabcabc"
Rezultāts: patiess
Paskaidrojums: tā ir apakšvirkne "abc" četras reizes vai apakšvirkne "abcabc" divas reizes.
  ```

## Ierobežojumi:

- 1 <= s.garums <= 10^4
- s sastāv no mazajiem angļu burtiem.

## Kods
```cpp
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> answer;
        for(int i=0;i<nums.size();i++){
            int a=0;
            for(int j=0;j<nums.size();j++){
                if(nums[i]>nums[j])
                a++;
            }
            answer.push_back(a);
        }
        return answer;
    }
};
```