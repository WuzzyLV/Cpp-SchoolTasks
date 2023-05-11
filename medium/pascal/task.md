```
Pascal (pascal)
Laika limits: 1.00s
Atmiņas limits: 32.0 MB
Grūtība: 56%
```
# Definīcija
Mazais Pēteris iet jau desmitajā klasē, bet viņam vēl arvien ir grūtības ar Pascal programmēšanas valodu. Tādēļ skolotāja ir viņam uzdevusi mājasdarbu - viņa ir uzrakstījusi viņa burtnīcā sekojošo Pascal valodas programmu un Pēterim ir jānosaka iznākums programmai, ja dots vesels skaitlis N. Uzraksti programmu, kas atrisinās Pētera mājasdarbu.

```
readln(N);
counter:=0;
for i:=N-1 downto 1 do begin
counter:= counter + 1;
if N mod i = 0 then break;
end;
writeln(counter);
```
## Ievaddatu raksturojums
    Pirmā un vienīgā ievaddatu rinda saturēs veselu pozitīvu skaitli N(1<=N<=10^9).

## Izvaddatu raksturojums
    Pirmajā un vienīgajā rindā jāizvada atrisinājums.

## Paraugdati
| Stdin | Stdout |
| --------- | --------- |
|   25      |      20      |

# Resultats
    ram     Statuss     Vertejums
	23.5	Pabeigts	9 / 12
## Kods 
```cpp
#include <iostream>

using namespace std;

int main(){
    int N;
    
    cin >> N;
    //logic
    int k=2;

    while(N%k!=0){
        k++;
    }
    int sk1=N/k;
    int sk2=N-sk1;
    cout << sk2;
    return 0;
}
```
