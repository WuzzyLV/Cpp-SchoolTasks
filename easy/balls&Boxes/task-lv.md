# [Problēma](https://www.codechef.com/problems/BALLBOX)
Jums ir N bumbiņas un K kastes. Jūs vēlaties sadalīt N bumbiņas K lodziņos tā, lai:
- Katrā kastē ir >=1 bumbiņa.
- Nevienā no divām kastēm nav vienāds skaits bumbiņu.

Nosakiet, vai tas ir iespējams.

## Ievades formāts
- Pirmajā rindā ir viens vesels skaitlis T — testa gadījumu skaits. Tad seko pārbaudes gadījumi.
- Katra testa gadījuma pirmajā un vienīgajā rindā ir divi ar atstarpi atdalīti veseli skaitļi N un K — attiecīgi bumbiņu un lodziņu skaits.
## Izvades formāts
Katram testa gadījumam ievadiet JĀ, ja ir iespējams sadalīt N lodītes K lodziņos tā, lai nosacījumi būtu izpildīti. Pretējā gadījumā izvadiet NO.

Jūs varat drukāt katru YES un NO rakstzīmi ar lielajiem vai mazajiem burtiem (piemēram, jā, jā, jā tiks uzskatīts par identisku).

## Ierobežojumi
- $1≤T≤10^5$
- $1≤N≤10^9$
- $1≤K≤10^4$

## 1. paraugs:
Ievade|Izvade
-|-
4
3 4|NĒ
30 3|JĀ
2 2|NĒ
1 1|JĀ

## Paskaidrojums:
- 1. testa gadījums: nav iespējams sadalīt 3 bumbiņas 4 kastēs tā, lai katrā kastē būtu ≥1 bumbiņa.

- 2. pārbaudes gadījums: viens veids, kā sadalīt 30 bumbiņas 3 kastēs, ir šāds: [5,9,16].

- 3. pārbaudes gadījums: nav iespējams sadalīt 2 bumbiņas 2 kastēs tā, lai divās kastēs nebūtu vienāds skaits bumbiņu.

- 4. pārbaudes gadījums: mēs varam sadalīt 1 bumbiņu 1 kastē.

## Kods
```cpp
#include <iostream>
using namespace std;

int main() {
    int runAmount, balls, boxes, boxSum;
    cin>>runAmount;
	while(runAmount--){
        boxSum=0;
	    cin>>balls>>boxes;
        for(int i=1; i<=boxes; i++){
            boxSum+=i;
        }
        if(balls>=boxSum){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
	}

    main
	return 0;
}

```