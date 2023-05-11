```
Troļļu trepes (troll_stairs)
Laika limits: 0.10s
Atmiņas limits: 8.0 MB
Grūtība: 83%
```
# Definīcija
Burvju mežā dzīvo dažādas maģiskas būtnes, tai skaitā rūķi. Rūķis Brūķis vēlas nokļūt pie sava drauga troļļa. Taču viņa troļļu draugs dzīvo kalnā, kurā var uzkāpt tikai izmantojot troļļu trepes. Troļļu trepēm ir n pakāpieni. Katrs pakāpiens atrodas noteiktā augstumā, kas ir lielāks vai vienāds ar iepriekšējā pakāpiena augstumu. Brūķis atrodas uz pirmā pakāpiena. Viņš salīdzinājumā ar trepēm ir maziņš un tādēļ var tikt no viena pakāpiena uz nākošo tikai tad, ja to augstumu starpība nav lielāka par m.

Nosakiet vai Brūķis var tikt pie sava Troļļu drauga.

## Ievaddatu raksturojums
Pirmajā rindā doti divi veseli skaitļi n un m (2 <= n<=10000, 1<=m <= 10000).
Otrajā rindā doti n nenegatīvi veseli skaitļi atdalīti ar atstarpēm, pakāpienu augstumi.

## Izvaddatu raksturojums
Izvadiet: "Yey!" ja Brūķis var tikt pie sava troļļu drauga, vai "Oh, NO!" ja nevar.

### Piezīmes
Autors: Deins Egle

## Paraugdati
```
Stdin
5 2
2 4 4 6 7
Stdout
Yey!
```
```
Stdin
5 1
2 4 4 6 7
Stdout
Oh, NO!
```
# Result
    Laiks   ram     status      rezultats
    0.02	15.7	Pabeigts	8 / 8
## Kods
```cpp
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    //n = stair amount m= height
    int n,m;
    cin >> n >> m;
    //logic
    bool legal=true;
    int last=0, curr;
    for(int i=0; i<n; i++){
        cin>>curr;
        if(last==0){
            last=curr;
            continue;
        }
        if(curr-last>m){
            legal=false;
            break;
        }
        last=curr;
    }
    if(legal){
        cout<<"Yey!";
    }else{
        cout<<"Oh, NO!";
    }

    return 0;
}
```
