# [1929. Masīva savienošana](https://leetcode.com/problems/concatenation-of-array/description/)

Ņemot vērā veselu skaitļu masīvu “nums”, kura garums ir “n”, jūs vēlaties izveidot masīvu “ans” ar garumu 2n, kur “ans[i] == nums[i]” un “ans[i + n] == nums[ i]` 0 <= i < n` (0-indeksēts).

Konkrētāk, “ans” ir divu “nums” masīvu savienošana.
Atgrieziet masīvu "ans".

## 1. piemērs:

Ievade: cipari = `[1,2,1]`
Izvade: "[1,2,1,1,2,1]".
Paskaidrojums: masīvs ans tiek veidots šādi:
- `ans = [nums[0],nums[1],nums[2],nums[0],nums[1],nums[2]]`
- "ans = [1,2,1,1,2,1]".

## 2. piemērs:
Ievade: cipari = `[1,3,2,1]
Izvade: "[1,3,2,1,1,3,2,1]".
Paskaidrojums: masīvs ans tiek veidots šādi:
- ans =` [nums[0],nums[1],nums[2],nums[3],nums[0],nums[1],nums[2],nums[3]]`
- ans = `[1,3,2,1,1,3,2,1]
 

Ierobežojumi:

`n == skaitļi.garums`
`1 <= n <= 1000`
`1 <= skaitļi[i] <= 1000`


# Rezultāts
- Izpildes laiks 8 ms
- pārspēj 74,99%
- Atmiņa 12,9 MB
- pārspēj 23,49%


## Kods
```cpp
#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int len= nums.size();

        for(int i =0;i<len;i++){
            nums.push_back(nums[i]);
        }
        return nums;
    }
};

```
