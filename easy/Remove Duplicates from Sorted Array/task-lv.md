# 26. Noņemiet dublikātus no sakārtotā masīva
## Rezultats: 
```Runtime 9 ms
Labāks par 81.9%
RAM 18.4 MB
Labāks par 76.33%
```
Ņemot vērā veselu skaitļu masīva numurus, kas sakārtoti nesamazināmā secībā, noņemiet dublikātus tā, lai katrs unikālais elements tiktu parādīts tikai vienu reizi. Elementu relatīvajai secībai jābūt tādai pašai. Pēc tam atgrieziet unikālo elementu skaitu skaitļos.

Apsveriet, cik unikālo skaitļu elementu skaits ir k, lai tiktu pieņemts, jums ir jāveic šādas darbības:
- Mainiet masīva numurus tā, lai pirmie k elementi nums satur unikālos elementus tādā secībā, kādā tie sākotnēji bija skaitļos. Pārējie skaitļu elementi nav svarīgi, kā arī skaitļu lielums.
- Atgriezties k.

## Pielāgots tiesnesis:
Tiesnesis pārbaudīs jūsu risinājumu ar šādu kodu:
```
int[] cipari = [...]; // Ievades masīvs
int[] gaidītaisNums = [...]; // Paredzamā atbilde ar pareizu garumu

int k = noņemtDublikāti(skaits); // Izsauc jūsu ieviešanu

apgalvot k == gaidītsNums.length;
for (int i = 0; i < k; i++) {
    apgalvot skaitļi[i] == paredzamie numuri[i];
}
```
Ja visi apgalvojumi tiks pieņemti, jūsu risinājums tiks pieņemts.

## 1. piemērs:
``` Ievade: cipari = [1,1,2]
Izvade: 2, skaitļi = [1,2,_]
Paskaidrojums: Jūsu funkcijai ir jāatgriež k = 2, kur pirmie divi skaitļu elementi ir attiecīgi 1 un 2.
Nav svarīgi, ko atstājat aiz atgrieztā k (tātad tie ir pasvītrojumi).
```
## 2. piemērs:
```
Ievade: cipari = [0,0,1,1,1,2,2,3,3,4]
Izvade: 5, skaitļi = [0,1,2,3,4,_,_,_,_,_]
Paskaidrojums: jūsu funkcijai ir jāatgriež k = 5, kur pirmie pieci skaitļu elementi ir attiecīgi 0, 1, 2, 3 un 4.
Nav svarīgi, ko atstājat aiz atgrieztā k (tātad tie ir pasvītrojumi).
```

### Ierobežojumi
- 1 <= cipari.garums <= 3 * 104
- -100 <= skaitļi[i] <= 100
- numurs ir sakārtots nesamazināmā secībā.

## Kods
```cpp
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 1;
        for(int i = 1; i < size(nums); ++i)
            if(nums[i] != nums[i - 1])  {  
                nums[j] = nums[i]; 
                j++; 
            }
        return j;
    }
};
```