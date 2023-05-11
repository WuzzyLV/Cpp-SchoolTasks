# ``Kopējais rezultāts = 100,00%``

# [Problēma](https://www.codechef.com/status/LUCKYFR?usernames=wuzzy)
Karanam ļoti patīk cipars 4.

Šī skaitļa spēka iespaidā Karans ir sācis meklēt četrus gadījumus jebkur. Viņam ir T veselu skaitļu saraksts, katram no tiem viņš vēlas aprēķināt cipara 4 atkārtojumu skaitu decimāldaļā. Viņš tagad ir pārāk aizņemts, tāpēc, lūdzu, palīdziet viņam.

## Ievades formāts
Pirmā ievades rinda sastāv no viena vesela skaitļa T, kas apzīmē veselu skaitļu skaitu Karana sarakstā.

Pēc tam ir T rindas, katrā no tām ir viens vesels skaitlis no saraksta.

## Izvades formāts
Izvades T līnijas. Katrā no šīm rindām ir jāietver cipara 4 atkārtojumu skaits attiecīgajā veselajā skaitlī no Karana saraksta.

## Ierobežojumi
1 ≤ T ≤ 10^5 (1. apakšuzdevums): 0 ≤ Cipari no saraksta ≤ 9 - 33 punkti. (2.apakšuzdevums): 0 ≤ Cipari no saraksta ≤ 109 - 67 punkti.

## 1. paraugs:
| Ievade | Rezultāts |
---------|----
| 5 | - |
| 447474 | 4 |
| 228 | 0 |
| 6664 | 1 |
| 40 | 1 |
| 81 | 0 |

## Kods
```cpp
#include <iostream>
using namespace std;

int main() {
	int i, num, rem, count=0;
	cin >> i;

    for(int j=0; j<i; j++){
        cin >> num;
        while ( num != 0 ){
            rem=num%10;
            num=num/10;
            if(rem==4){
                count++;
            }
	    }
	    cout << count << endl;
	    count=0;
    }

	return 0;
}

```