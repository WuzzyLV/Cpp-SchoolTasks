
# Problēma
"Tu netiksi pieķerts, ja paslēpsies aiz kāda."

Sang-Vū iesaka Gi-Hūnam paslēpties aiz kāda, lai netiktu nošauts.

Gi-Huns seko Sang-Woo padomam un slēpjas aiz Ali, kurš agrāk izglāba viņa dzīvību. Gi-Hun un Ali abiem ir vienāds augums,
K. Daudzi spēlētāji redzēja šo triku un arī sāka slēpties aiz Ali.

Tagad starp Gi-Hun un Ali stāv N spēlētāji taisnā līnijā, un i-tā spēlētāja augums ir $H_i$​

Gi-Hun vēlas uzzināt minimālo spēlētāju skaitu, kuriem jānošauj, lai Ali būtu redzams viņa redzeslokā.

### Piezīme:
- Redzes līnija ir taisna līnija, kas novilkta starp divu objektu augstāko punktu. Ali ir redzams Gi-Hun, ja neviens starp viņiem nešķērso šo līniju.
- Pat ja ir daži spēlētāji, kuriem ir tāds pats augums kā Gi-Hun un Ali, Ali būs redzams Gi-Hun redzeslokā.
- Gi-Hun un Ali ir vienāds augums.
## Ievades formāts
- Pirmajā ievades rindā ir viens vesels skaitlis
T, kas apzīmē testa gadījumu skaitu. Apraksts par
Tālāk seko T testa gadījumi.
- Katra testa gadījuma pirmajā rindā ir divi ar atstarpi atdalīti veseli skaitļi
N un
K, kas apzīmē kopējo spēlētāju skaitu starp Gi-Hun un Ali un attiecīgi abu augumu.
- Katra testa gadījuma otrā rinda satur
N ar atstarpi atdalīti veseli skaitļi, kas apzīmē spēlētāju augstumu starp Gi-Hun un Ali.

## Izvades formāts
Katram pārbaudes gadījumam vienā rindā ievadiet minimālo spēlētāju skaitu, kuriem jāšauj, lai Ali būtu redzams Gi-Hunas redzamības zonā.

## Ierobežojumi
 - $1≤T≤10^5$
 - $1≤N≤10^5$
 - $1≤K≤10^6$
 - $1≤H_i≤10^6$ par katru $1≤i≤N.$

## 1. paraugs:
Ievade | Izvade
-|-
3
4 10|2
2 13 416
5 8|1
9 3 8 8 4
4 6|0
1 2 3 4

## Paskaidrojums:
- 1. pārbaudes gadījums: Gi-Hun un Ali augums ir 10. Lai Ali būtu redzams Gi-Hun, ir jānošauj otrajai personai (ar augumu 13) un ceturtajai personai (ar augumu 16). Tādējādi minimālais spēlētāju skaits, kuriem jāiegūst sitiens, ir 2.

- 2. pārbaudes gadījums: Gi-Hun un Ali augums ir 8. Lai Ali būtu redzams Gi-Hun, ir jānošauj pirmajai personai (ar augumu 9). Tādējādi minimālais spēlētāju skaits, kuriem jāiegūst sitiens, ir 1.

- 3. pārbaudes gadījums. Nevienu nevajag nošaut, jo visi ir īsāki par Gi-Hun un Ali.