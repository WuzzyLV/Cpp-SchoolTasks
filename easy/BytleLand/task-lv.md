# [Problēma](https://www.codechef.com/problems/RECTSQ)
Santosh ir ferma Byteland. Viņam ir ļoti liela ģimene, par kuru jārūpējas. Viņa dzīvē notiek pēkšņs pavērsiens, un viņš nonāk finanšu krīzē. Atdevis visu naudu, kas viņam ir rokā, viņš nolemj pārdot savus zemes gabalus. Viņa zemes īpatnība ir tā, ka tai ir taisnstūrveida raksturs. Santosh uzzina, ka viņš iegūs vairāk naudas, ja pārdos kvadrātveida zemes gabalus. Tāpēc, paturot to prātā, viņš nolemj sadalīt savu zemi minimālā iespējamā skaitā kvadrātveida zemes gabalu tā, lai katram zemes gabalam būtu vienāda platība un zemes gabali lieliski sadalītu zemi. Viņš to dara, lai no tā gūtu maksimālu peļņu.

Tātad jūsu uzdevums ir atrast minimālo kvadrātveida zemes gabalu skaitu ar vienādu platību, ko var izveidot no taisnstūrveida zemes, lai tie to lieliski sadalītu.

## Ievades formāts
- Ievades pirmajā rindā ir T, testa gadījumu skaits. Tad seko T līnijas.
- Katra testa gadījuma pirmajā un vienīgajā rindā ir divi ar atstarpi atdalīti veseli skaitļi, N un M, attiecīgi zemes garums un platums.

## Izvades formāts
Katram testa gadījumam jaunā rindā izdrukājiet minimālo kvadrātveida zemes gabalu skaitu ar vienādu platību, lai tie perfekti sadalītu lauksaimniecības zemi.

## Ierobežojumi
- 1≤T≤20
- 1≤M≤10000
- 1≤N≤10000

## 1. paraugs:
Ievade | Izvade
-|-
2
10 15|6
4 6|6

```cpp 
#include <iostream>
using namespace std;
/*
Finds the largest number that can divide both a and b without a remainder
*/
int gcd(int x, int y) {
    if(y==0){
        return x;
    }
    return gcd(y, x%y);
}

int main() {
	int runAmount, x, y, gcdNum;
	cin>>runAmount;
	while(runAmount--){
	    cin>>x>>y;
        gcdNum=gcd(x,y);
        /*
        Calculates area then, gets the biggest square that can fit in the area
        and checks how many times it can fit, and done
        */
	    cout<<(x*y)/(gcdNum*gcdNum)<<endl;
	}
	return 0;
}

```