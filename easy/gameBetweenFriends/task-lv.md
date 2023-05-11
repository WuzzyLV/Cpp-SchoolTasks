
# Problēma
Nitins un Sobhagya spēlēja spēli ar monētām. Ja Sobhagyam ir vairāk monētu, viņš uzvar, pretējā gadījumā uzvar Nitins. Ņemiet vērā, ka tas nozīmē, ja gan Nitin, gan Sobhagya ir vienāds monētu skaits, tad Nitin uzvar.

Sākotnēji Nitinam ir A monētas, savukārt Sobhagyai ir
B monētas. Tad atnāca Ritik un atdeva savu
C monētas spēlētājam, kurš šobrīd neuzvar, pēc tam atnāca Satjarts un atkārtoja to pašu procesu (iedeva savu
D monētas spēlētājam, kurš pašlaik neuzvar).

Atrodiet spēles galīgo uzvarētāju.

## Ievades formāts
- Ievades pirmajā rindā ir vesels skaitlis T — pārbaudes gadījumu skaits. Pēc tam seko pārbaudes gadījumi.
- Katra testa gadījuma vienīgajā rindā ir četri ar atstarpi atdalīti veseli skaitļi A, B, C un D.

## Izvades formāts
Katram pārbaudes gadījumam izvadiet vienā rindā N, ja Nitin ir spēles galīgais uzvarētājs, vai S, ja Sobhagya ir spēles galīgais uzvarētājs.

## Ierobežojumi
- 1≤T≤1000
- 0≤A,B,C,D≤$10^6$

## 1. paraugs:
Ievade |Izvade
-|-
3|
2 3 4 5| S
3 3 3 3| N
2 3 1 2| S

## Paskaidrojums:
- 1. pārbaudes gadījums
    - Sākotnēji Nitinam ir 2 monētas un Sobhagyai ir 3 monētas, tāpēc Sobhagya uzvar.
    - Tad Ritik atdod savas 4 monētas Nitinam. Tagad Nitinam ir 6 monētas un Sobhagyai ir 3 monētas, tāpēc Nitin uzvar.
    - Pēc tam Satjarts atdod savas 5 monētas Sobhagyai. Visbeidzot, Nitinam ir 6 monētas un Sobhagyai ir 8 monētas, tāpēc Sobhagya ir galīgais uzvarētājs.
- 2. pārbaudes gadījums:
    - Sākotnēji Nitinam ir 3 monētas un Sobhagyai ir 3 monētas, tāpēc Nitin uzvar.
    - Pēc tam Ritiks atdod savas 3 monētas Sobhagyai. Tagad Nitinam ir 3 monētas un Sobhagyai ir 6 monētas, tāpēc Sobhagya uzvar.
    - Tad Satjarts atdod savas 3 monētas Nitinam. Visbeidzot Nitinam ir 6 monētas un Sobhagyai ir 6 monētas, tāpēc Nitin ir galīgais uzvarētājs

## Kods
```cpp
#include <iostream>
using namespace std;

int giveToLoser(int a, int b, int x){
    if(a<b){
        a+=x;
    }else{
        b+=x;
    }
}

int main() {
	int runAmount, a,b,c,d;
	cin>>runAmount;
	while(runAmount--){
	    cin>>a>>b>>c>>d;
        giveToLoser(a,b,c);
        giveToLoser(a,b,d);
        if(a>=b){
            cout<<"N"<<endl;
        }else{
            cout<<"S"<<endl;
        }
	}
	return 0;
}

```