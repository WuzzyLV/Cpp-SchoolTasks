## Definīcija
Naturālu n ciparu skaitli sauc par Armstronga skaitli, ja tas sakrīt ar savu ciparu n-to pakāpju summu.
Uzrakstiet programmu, kas ievadītam skaitlim n nosaka, vai tas ir Armstronga skaitlis.

## Ievaddatu raksturojums
Ievaddatu pirmajā rindā dota naturāla skaitļa n vērtība. Zināms, ka skaitlim n ir ne vairāk kā 50 cipari.

## Izvaddatu raksturojums
Izvaddatu vienīgajā rindā jāizvada vārds IR, ja n ir Armstronga skaitlis vai NAV, ja ievadītais skaitlis nav Armstronga skaitlis.

 

## Piezīmes
Uzdevums izmantots Latvijas 9.informātikas olimpiādes II (rajona) kārtā. 

Autors: M.Opmanis

## Paraugdati
Stdout | Stdin
-|-
371 | IR

## Kods
```cpp
#include <iostream>
#include <cmath>

using namespace std;
int main(){

    int base;
    cin >> base;

    int size=0;
    int count=base;
    while(count>0){
        count/=10;
        size++;
    }

    int math=base;
    int res=0;
    while(math>0){
        int num=math%10;
        res+=pow(num, size);
        math/=10;
    }
    if(res==base){
        cout<< "IR" <<endl;
    } else{
        cout<< "NAV" <<endl;
    }

    return 0;
}
```