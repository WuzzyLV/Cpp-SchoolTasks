
# Problēma
Pirmā kursa students atnāca uz jūsu koledžu. Tā kā jums ir labs seniors, jums viņam jāpasaka, vai viņam ir iespējams doties no koledžas galvenajiem vārtiem uz hosteli.

Koledžu var vizualizēt 2D plaknē. Pieņemsim, ka koledžas galvenie vārti atrodas sākuma punktā, t.i., pie koordinātām (0,0), un hostelis atrodas pie koordinātām (x, y).

Tā kā pirmā kursa students vēlas tālāk izpētīt koledžas pilsētiņu, viņš ar vienu kustību palielinās vai samazinās jebkuru koordinātu (vai nu x koordinātu, vai y koordinātu) par vērtību tieši K.

Vai pirmā kursa studentam ir iespēja nokļūt hostelī?

## Ievades formāts
- Pirmajā ievades rindā ir viens vesels skaitlis T, kas apzīmē testa gadījumu skaitu. Tad seko T testa gadījuma apraksts.
- Katrs testa gadījums satur vienu ievades rindiņu.
- Pirmajā rindā ir trīs veseli skaitļi x, y, K.

## Izvades formāts
Katram testa gadījumam ievadiet vienu rindiņu atbildi, kurā ir "JĀ" vai "NĒ" (bez pēdiņām).

Jūs varat drukāt katru katras virknes rakstzīmi ar lielajiem vai mazajiem burtiem (piemēram, virknes bez pēdiņām "YES", "yes", "Yes" un "YES" tiks uzskatītas par identiskām).

## Ierobežojumi
- 1≤T≤600
- –1000≤x,y≤1000
- 1≤K≤1000

## 1. paraugs:
|Ievade|Izvade|
-|-
4|
1 2 1|JĀ
3 -5 2|NĒ
-9 -6 3|JĀ
-18 12 5|NĒ

## Paskaidrojums:
- 1. pārbaudes gadījums: Šeit K=1, viens no ceļiem, pa kuru var iet pirmā kursa students, ir aprakstīts šādi: (0,0) līdz (1,0) līdz (1,1) līdz (1,2). Tādējādi viņš var sasniegt hosteļa koordinātu pie (x,y)=(1,2) ar ierobežojumu K=1.
- 2. pārbaudes gadījums: kā šeit K=2, var pierādīt, ka nav ceļa, lai pārvietotos no (0,0) uz (3,−5), tikai palielinot vai samazinot jebkuru koordinātu tieši par K=2.
- 3. pārbaudes gadījums: šeit K=3, viens no ceļiem, ko var iet pirmā kursa students, ir aprakstīts šādi: (0,0) līdz (-3,0) līdz (-3, -3) līdz (-3) ,−6) līdz (−6,−6) līdz (−9,−6). Tādējādi viņš var sasniegt hosteļa koordinātu pie (x,y)=(−9,−6) ar ierobežojumu K=3.