
Problēma
Tonmojam ir īpaša lāpa. Lāpai ir 4 līmeņi, kas numurēti no 1 līdz 4 un 2 stāvokļi (ieslēgts un izslēgts). 1., 2. un 3. līmenis atbilst Ieslēgts stāvoklim, bet 4. līmenis atbilst Izslēgts stāvoklim.

Lāpas līmeņus var mainīt šādi:
- 1. līmenis mainās uz 2. līmeni.
- 2. līmenis mainās uz 3. līmeni.
- 3. līmenis mainās uz 4. līmeni.
- 4. līmenis mainās uz 1. līmeni.

Ņemot vērā sākotnējo stāvokli kā K un līmeņos veikto izmaiņu skaitu kā N, atrodiet lāpas galīgo stāvokli. Ja galīgo stāvokli nevar noteikt, tā vietā drukājiet Neskaidrs.

## Ievades formāts
Pirmajā rindā būs T — testa gadījumu skaits. Tad seko pārbaudes gadījumi.
Katrs testa gadījums satur vienu ievades rindiņu, divus veselus skaitļus, N,K - izmaiņu skaitu, kas veiktas lāpas līmeņos un sākotnējā stāvoklī. Šeit K = 0 apzīmē izslēgtu stāvokli, bet K = 1 apzīmē ieslēgtu stāvokli.

## Izvades formāts
Katram testa gadījumam vienā rindā norādiet lāpas galīgo stāvokli, t.i., ieslēgts vai izslēgts. Ja galīgo stāvokli nevar noteikt, tā vietā drukājiet Neskaidrs.

$1 $ <= $ T$ <= $ 10^5 $

$1 $ <= $ N$ <= $ 10^9 $

$0 $ <= $ K $ <= $ 1 $

## 1. paraugs:
|Iekšā|Ārpus|
-|-
|3|-|
|4 0|Izslēgts|
|0 1|Ieslēgts |
|3 1|Neviennozīmīgs|

## Paskaidrojums:
### 1. pārbaudes gadījums: sākotnēji deglis ir izslēgtā stāvoklī. Tā kā tikai 4. līmenis atbilst izslēgtajam stāvoklim, lāpa sākotnēji ir 4. līmenī. Pēc 4 izmaiņām galīgais līmenis būtu 4. 4. līmenis atbilst izslēgtajam stāvoklim. Līdz ar to beidzot lāpa ir izslēgta.

### 2. testa gadījums: sākotnēji deglis ir ieslēgtā stāvoklī. Pēc 0 izmaiņām deglis paliek ieslēgtā stāvoklī.

### 3. pārbaudes gadījums: sākotnēji deglis ir ieslēgtā stāvoklī. Tas var atbilst jebkuram no pirmajiem 3 līmeņiem. Tādējādi mēs nevaram noteikt galīgo līmeni pēc 3 izmaiņām. Tādējādi galīgais stāvoklis ir neskaidrs.