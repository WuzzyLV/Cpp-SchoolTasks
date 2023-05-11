# Bombardējiet bāzi
## Problēma
Šeflendā ir $N$ mājas, kas numurētas no 1 līdz N, i-tajā mājā ir aizsardzības sistēma ar spēku $A_i$.

Šefpavāram ir aizdomas, ka ļoti drīz vienā no mājām nokritīs spridzeklis. Bumba ar uzbrukuma spēku X var iznīcināt i-to māju, ja i-tās mājas $A_i$ aizsardzības sistēma ir stingri mazāka par $X$.

Arī tad, kad bumbas dēļ tiek iznīcināta i-tā māja, tiek iznīcinātas arī visas mājas ar indeksiem j, ka 1≤ j <i neatkarīgi no to aizsardzības sistēmas.

Dota viena bumba ar uzbrukuma spēku X, atrodiet maksimālo māju skaitu, kuras var tikt iznīcinātas.

## Ievades formāts
- Pirmajā rindā būs T — testa gadījumu skaits. Tad seko pārbaudes gadījumi.
- Katra testa gadījuma pirmajā rindā ir 2 veseli skaitļi, N, X.
- Pārbaudes gadījuma otrajā rindā ir N ar atstarpi atdalīti veseli skaitļi $A_1$, $A_i$ ... $A_n$.
## Izvades formāts
Katrā testa gadījumā vienā rindā ievadiet maksimālo māju skaitu, kuras var tikt iznīcinātas, ja bumba var trāpīt jebkurā mājā.

## Ierobežojumi
  - 1≤T≤100
  - 1≤N≤10^5
  - 1≤X≤10^9
  - 1≤$A_i$≤10^9
  - N summa visos testa gadījumos nepārsniedz 10^5

  ## 1. paraugs:
Ievade | Izvade
-|-
2|6
8 6|0
4 1 6 1 6 5 6 8
2 1
3 5

## Paskaidrojums:
1. pārbaudes gadījums: bumba var iznīcināt tikai 1., 2., 4. un 6. māju.
- Ja tas ietriecas 1. mājā, tiek iznīcināta tikai 1. māja.
- Ja tas atduras pret 2. māju, 1. un 2. māja tiek iznīcināta.
- Ja tas atduras pret 4. māju, 1., 2., 3. un 4. mājas tiek iznīcinātas.
- Ja tas atduras pret 6. māju, 1., 2., 3., 4., 5. un 6. mājas tiek iznīcinātas.
Maksimālais iznīcināto māju skaits ir 6.

## 2. pārbaudes gadījums:
  Bumba nevar iznīcināt nevienu māju, jo katras mājas aizsardzības sistēma nav mazāka par bumbas uzbrukuma spēku. Tādējādi kopējais iznīcināto māju skaits ir 0.

 ```cpp
 #include <iostream>
using namespace std;

// houses get destroyed systematically and yes
// 
int main() {
    int runAmount, n, bomb,closestHouse, housesDestroyed;
    cin>>runAmount;
	while(runAmount--){
        closestHouse=0;
        housesDestroyed=0;
        cin>>n>>bomb;
        int houses[n];
        for(int i =0;i<n;i++){
            cin>>houses[i];
            if(houses[i]>closestHouse &&houses[i]<=bomb){
                closestHouse=houses[i];
            }
        }
        cout<<"closestHouse: "<<closestHouse<<endl;
        if(closestHouse==0){
            cout<<0<<endl;
            continue;
        }
        housesDestroyed++;
        for(int i =0;i<n;i++){
            if(houses[i]<closestHouse){
                cout<<"houses[i]: "<<houses[i]<<"destroyed"<<endl;
                housesDestroyed++;
            }
        }

        cout<<housesDestroyed<<endl;
    }
	return 0;
}

 ```