
# [Planšetdatora uzdevums](https://www.codechef.com/problems/TABLET)
Šefpavārs nolēma iegādāties jaunu planšetdatoru. Viņa budžets ir $B$, tāpēc viņš nevar nopirkt planšetdatoru, kura cena ir lielāka par $B$.

Izņemot to, viņam ir tikai viens kritērijs — planšetdatora ekrāna laukumam jābūt pēc iespējas lielākam. Protams, planšetdatora ekrāns vienmēr ir taisnstūris.

Šefpavārs ir apmeklējis dažus planšetdatoru veikalus un uzskaitījis visas savas iespējas. Kopumā ir pieejami $N$ planšetdatori, kas numurēti no 1 līdz $N$. Katram derīgajam $i$ $i$-th planšetdatoram ir platums $W_i$, $H_i$ un cena $P_i$.

Palīdziet šefpavāram izvēlēties planšetdatoru, kuru viņam vajadzētu iegādāties, un atrast šāda planšetdatora ekrāna laukumu vai noteikt, ka viņš nevar iegādāties planšetdatoru.

 
## Ievade
- Ievades pirmajā rindā ir viens vesels skaitlis $T$, kas apzīmē testa gadījumu skaitu. Tālāk ir sniegts $T$ testa gadījumu apraksts.
- Katra testa gadījuma pirmajā rindā ir divi ar atstarpi atdalīti veseli skaitļi $N$ un $B$.
- seko $N$ rindas. Katrai $i$(1 $≤$ a $≤$ N) šo rindu $i$-th satur trīs ar atstarpi atdalītus veselus skaitļus $W_i$, $H_i$ un $P_i$.

## Izvade
Katram testa gadījumam izdrukājiet vienu rindiņu. Ja šefpavārs nevar nopirkt nevienu planšetdatoru, tajā jāiekļauj virkne "nav planšetdatora" (bez pēdiņām). Pretējā gadījumā tajā ir jābūt vienam veselam skaitlim — maksimālajam planšetdatora ekrāna laukumam, ko šefpavārs var iegādāties.

## Ierobežojumi
- $1≤T≤100$
- $1≤N≤100$
- $1≤B≤1 000 000 $
- $1 ≤P_i≤1 000 000 $ par katru derīgo $i $
- $1 ≤W_i, H_i ≤10 000 $ par katru derīgo $i$
## 1. paraugs:
|Ievade| Izvade|
-|-
3|12
3 6|nav planšetdatora
3 4 4|25
5 5 7|
5 2 5|
2 6|
3 6 8|
5 4 9|
1 10|
5 5 10|

## Paskaidrojums:
- 1. gadījuma piemērs: pirmais planšetdators (ar ekrāna laukumu 3 ⋅ 4 = 12 $) ir labākais risinājums šefpavāram, jo ​​šefpavārs nevar atļauties otro, bet trešajam ir mazāks ekrāns.
- 2. gadījuma piemērs: šefpavāra budžets ir 6 $, taču visiem planšetdatoriem ir augstākas cenas, tāpēc šefpavārs nevar iegādāties nevienu planšetdatoru.
- 3. gadījuma piemērs: vienīgā planšetdatora cena ir precīzi vienāda ar šefpavāra budžetu, tāpēc viņš to var iegādāties.