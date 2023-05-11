# [Problēma](https://www.codechef.com/problems/MODULO3?tab=statement)
Stackam ļoti patīk cipars 3.

Viņam ir divi nenegatīvi veseli skaitļi A un B.
Vienā darbībā Stack var veikt kādu no šīm darbībām:
- A:= ∣A−B∣ (mainīt A uz ∣A−B∣)
- B:= ∣A−B∣ (mainīt B uz ∣A−B∣)

Ņemiet vērā, ka ∣X∣ apzīmē X absolūto vērtību. Piemēram, ∣−7∣=7 un ∣4∣=4.

Atrodiet minimālo darbību skaitu, pēc kuras vismaz viens vesels skaitlis no A un B dalās ar 3.

## Ievades formāts
- Pirmajā ievades rindā ir viens vesels skaitlis T, kas apzīmē pārbaudes gadījumu skaitu. Tālāk sniegts T testa gadījumu apraksts.
- Katra testa gadījuma vienīgajā rindā ir divi veseli skaitļi A un B.

## Izvades formāts
Katram testa gadījumam vienā rindā izvadiet minimālo darbību skaitu, pēc kurām vismaz viens vesels skaitlis no A un B dalās ar 3.

## Ierobežojumi
- $1≤T≤10^5$
- $0≤A,B≤10^9$

## 1. paraugs:
Ievade|Izvade
-|-
2
0 343|0
1 1|1

## Paskaidrojums:
- 1. pārbaudes gadījums: = 0 A=0 jau dalās ar 3.
- 2. pārbaudes gadījums: vienīgajā darbībā Stack var mainīt A=1 uz A=∣A−B∣=∣1−1∣=0. Tagad A=0 dalās ar 3.

## Kods
```cpp
#include <iostream>
using namespace std;

int main() {
	int runAmount, a,b;
    cin>>runAmount;
    while(runAmount--){
        cin>>a>>b;
        if(a%3==0 || b%3==0){
            cout<<0<<endl;
            continue;
        }
        if(a%3==1 && b%3==1){
            cout<<1<<endl;
            continue;
        }
        if(a%3==b%3){
            cout<<1<<endl;
            continue;
        }
        cout<<2<<endl;
    }
	return 0;
}

```