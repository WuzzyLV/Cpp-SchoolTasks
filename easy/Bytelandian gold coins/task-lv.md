# [Problēma](https://www.codechef.com/problems/COINS?tab=statement)
Bytelandē viņiem ir ļoti dīvaina naudas sistēma.

Uz katras baitlandiešu zelta monētas ir uzrakstīts vesels skaitlis. Monētu n bankā var apmainīt pret trīs monētām: n/2, n/3 un n/4. Taču šie skaitļi ir noapaļoti uz leju (bankām ir jāgūst peļņa).

Jūs varat arī pārdot Bytelandian monētas par Amerikas dolāriem. Valūtas kurss ir 1:1. Bet jūs nevarat iegādāties Bytelandian monētas.

Jums ir viena zelta monēta. Kāda ir maksimālā ASV dolāru summa, ko par to varat saņemt?

## Ievades formāts
Ievadē būs vairāki pārbaudes gadījumi (ne vairāk kā 10).
Katrs tests ir viena rinda ar skaitli n, tas ir uz jūsu monētas uzrakstītais skaitlis.

## Izvades formāts
Katram testa gadījumam izvadiet vienu rindiņu, kas satur maksimālo iespējamo ASV dolāru summu.

## Ierobežojumi
- $0≤n≤10^9$

## 1. paraugs:
Ievade|Izvade
-|-
12|13
2|2

## Paskaidrojums:
- 1. pārbaudes gadījums: varat mainīt 12 uz 6, 4 un 3, un pēc tam tos mainīt uz 6+4+3=13.
- 2. pārbaudes gadījums: ja mēģināsiet nomainīt 2. monētu uz 3 mazākām monētām, jūs iegūsit 1, 0 un 0, un vēlāk varēsiet iegūt ne vairāk kā 1 no tām. Labāk ir vienkārši nomainīt 2 monētu tieši pret 2.

```cpp
#include <iostream>
using namespace std;

long stonks(long n) {
    /*
    Stop at 12< because then its not worth it
    */
    if(n>=12){
        return stonks(n/2) + stonks(n/3)+ stonks( n/4);
    } else{
        return n;
    }
}

int main() {
	long x;
    while(cin>>x){
        cout<< stonks(x) << endl;
    }
	return 0;
}
```
