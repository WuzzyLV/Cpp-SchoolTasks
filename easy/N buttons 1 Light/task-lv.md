
# Problēma
Kulyash paliek telpā, kurā ir viena spuldze un
N pogas. Spuldze sākotnēji ir ieslēgta.

Pogu sākotnējie stāvokļi tiek saglabāti binārā virknē S, kuras garums ir N — ja $S_i$ ir 0, i-tā poga ir izslēgta, un, ja $S_i$ ir 1, i-tā poga ir ieslēgta. Ja Kulyash pārslēdz jebkuru pogu, spuldzes stāvoklis mainās, t.i., spuldze iedegas, ja tā bija izslēgta, un otrādi.

Kulyash ir pārslēdzis dažas pogas, un pogu galīgie stāvokļi tiek saglabāti citā binārā virknē
R garums N. Viņš lūdz noteikt spuldzes galīgo stāvokli.

## Ievades formāts
Pirmajā ievades rindā būs viens vesels skaitlis T, kas apzīmē testa gadījumu skaitu.
Katrs testa gadījums sastāv no trim ievades rindām.
Katra testa gadījuma pirmajā rindā ir vesels skaitlis N — pogu skaits.
Katra testa gadījuma otrajā rindā ir bināra virkne S — pogu sākuma stāvokļi. Katra testa gadījuma trešajā rindā ir bināra virkne R — pogu galīgie stāvokļi.
## Izvades formāts
Katram testa gadījumam jaunā rindā izvadiet spuldzes galīgo stāvokli (0 — izslēgts un 1 — ieslēgts).

## Ierobežojumi
- $1≤T≤100$
- $1≤N≤100$
- S un R ir bināras virknes, t.i., satur tikai rakstzīmes 0 un 1.

## 1. paraugs
Ievade|Izvade
-|-
2
3
000
001 |0
2
00
11|1
## Paskaidrojums:
- 1. pārbaudes gadījums: visas pogas sākotnēji ir izslēgtas, un beidzot ir mainījies tikai vienas pogas stāvoklis, tāpēc spuldzes stāvoklis tiek mainīts, t.i., tā izslēdzas.
- 2. pārbaudes gadījums: visas pogas sākotnēji ir izslēgtas, un beidzot ir mainījušies divu pogu stāvokļi, tāpēc spuldzes stāvoklis mainās divreiz, t.i., tā paliek ieslēgta.

## Kods
```cpp
#include <iostream>
using namespace std;

int main() {
	int runAmount, n;
	bool light;
	string before,after;
	cin>>runAmount;

	while(runAmount--){
		light=true;
		cin>>n>>before>>after;
		for(int i=0; i<n; i++){
			if(before[i]!=after[i]){
				light=!light;
			}
		}
		if(light){
			cout<<"1"<<endl;
		}else{
			cout<<"0"<<endl;
		}
	}
	return 0;
}

```