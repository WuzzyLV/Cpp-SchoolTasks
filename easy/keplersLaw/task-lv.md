
# Kopējais rezultāts = 100,00%.
# Problēma
Keplera likums nosaka, ka planētas pārvietojas ap sauli eliptiskās orbītās ar sauli vienā fokusā. Keplera trešais likums ir Periodu likums, saskaņā ar kuru:

Planētas laika perioda kvadrāts ir tieši proporcionāls tās orbītas puslielākās ass kubam.
Jums ir doti laika periodi ($T_1$,$T_2$) un puslielākās asis ($R_1$, $R_2$) divām planētām, kas riņķo ap vienu zvaigzni.

Lūdzu, nosakiet, vai Periodu likums ir izpildīts vai nē, t.i., vai abu planētu proporcionalitātes konstante ir vienāda.

## Izvades formāts
Drukāt "Yes" (bez pēdiņām), ja likums ir izpildīts, pretējā gadījumā drukāt "No".

## Ievades formāts
Pirmajā ievades rindā ir viens vesels skaitlis $T$, kas apzīmē testa gadījumu skaitu. Tālāk ir sniegts $T$ testa gadījumu apraksts. Katrs testa gadījums sastāv no vienas ievades rindas, kurā ir četri ar atstarpi atdalīti veseli skaitļi


## Izvades formāts
Katram testa gadījumam izvadiet vienu rindiņu, kurā ir viena virkne — "Yes" vai "No" (bez pēdiņām); atbilde uz problēmu.

Jūs varat drukāt katru atbildes rakstzīmi ar lielajiem vai mazajiem burtiem (piemēram, virknes "Yes", "Yes", "Yes" un "Yes" tiks uzskatītas par identiskām).

## Ierobežojumi

$1 $ <= $ T$ <= $ 10^4 $

$1$ <= $T_1$, $T_2$ <= $10$

 $1$ <= $R_1$, $R_2$ <= $10$

 ## 1. paraugs:
 | Ievade | Rezultāts |
 -|-
 |3 | -|
 |1 1 1 1| Yes|
 |1 2 3 4| No |
 |1 8 2 8| Yes |

 ## Paskaidrojums:
 - 1. pārbaudes gadījums: $1^2$/$1^3$ = $1^2$/$1^3$
 - 2. pārbaudes gadījums: $1^2$/$3^3$ = $2^2$/$4^3$
 - 3. pārbaudes gadījums: $1^2$/$2^3$ = $8^2$/$8^3$

 ## Kods
```cpp
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int dataCount, t1,t2,r1,r2;
    cin >> dataCount;
    
    for(int i =0; i<dataCount; i++){
        cin >> t1;  cin >> t2;
        cin >> r1;  cin >> r2;
        if(pow(t1, 2)/pow(r1, 3) == pow(t2, 2)/pow(r2, 3)){
            cout << "Yes" << endl;
            continue;
        }
        cout << "No" << endl;
    }
	return 0;
}

```