# Problēma
Ir bankomāts. Sākotnēji tajā kopā ir K naudas vienības. N cilvēki (no 1 līdz N) vēlas izņemt naudu; par katru derīgo i i-tā persona vēlas izņemt $A_i$ ​ naudas vienības.

Cilvēki ienāk un mēģina izņemt naudu pa vienam, pieaugošā indeksu secībā. Ikreiz, kad kāds mēģina izņemt naudu, ja automātā ir vismaz nepieciešamā naudas summa, tas izdos nepieciešamo summu. Pretējā gadījumā tas iemetīs kļūdu un neko neizdos; tādā gadījumā šī persona atgriezīsies mājās tieši, nemēģinot darīt neko citu.

Katrai personai nosakiet, vai viņš saņems nepieciešamo naudas summu vai nē.

## Ievade
- Ievades pirmajā rindā ir viens vesels skaitlis T, kas apzīmē testa gadījumu skaitu. Tālāk sniegts T testa gadījumu apraksts.
- Katra testa gadījuma pirmajā rindā ir divi ar atstarpi atdalīti veseli skaitļi N un K.
- Otrajā rindā ir N ar atstarpi atdalīti veseli skaitļi $A_1$ , $A_2$, …, $A_N$.

## Izvade
Katram pārbaudes gadījumam izdrukājiet vienu rindiņu, kurā ir virkne ar garumu N. Katram derīgajam i šīs virknes i-tajai rakstzīmei ir jābūt “1”, ja i-tā persona veiksmīgi izņems naudu, vai “0” pretējā gadījumā. .

## Ierobežojumi
- 1 ≤ T ≤ 100
- 1 ≤ N ≤ 100
- 1 ≤ $A_i$​ ≤ 1 000 000 par katru derīgo i
- 1 ≤ K ≤ 1 000,0 0 $

## 1. paraugs:
|Ievade| Izvade|
-|-
|2|-|
|5 10|-|
|35321|11010|
|4 6|-|
|10 8 6 4| 0010 |

## Paskaidrojums:
1. gadījuma piemērs: bankomātā sākotnēji ir 10 naudas vienības. Pirmais atnāk un izņem 3 vienības, tātad automātā paliek 7. Tad otrais izņem 5 vienības un atlikusī summa ir 2. Trešā grib izņemt 3 vienības, bet tā kā ir tikai 2 vienības naudu automātā, tas iemet kļūdu un trešajam jāiziet neko nesaņemot. Tad ceturtais izņem 2 vienības, kas automātā neko neatstāj, tātad pēdējam neko nesaņem.

2. gadījuma piemērs: bankomātā sākotnēji ir 6 naudas vienības, tāpēc tas neko nevar dot pirmajai un otrajai personai. Kad atnāk trešais, tas iedod visu naudu, kas tam ir, tāpēc arī pēdējais neko nesaņem.

## Kods
```cpp
#include <iostream>
using namespace std;

int main() {
	int dataCount,pplCount,money,withdrawAmount;
	cin >> dataCount;
	
	for(int i =0; i<dataCount; i++){
	    cin >> pplCount >> money;
	    for(int j =0; j<pplCount; j++){
	       cin>>withdrawAmount;
	       
	       if(withdrawAmount>money){
	           cout<<0;
	           continue;
	       }
	       cout<<1;
	       money-=withdrawAmount;
	   }
	    cout<<endl;
	}
	
	return 0;
}

```