# [Parveidot temperaturu](https://leetcode.com/problems/convert-the-temperature/description/)

Jums tiek dots nenegatīvs peldošā komata skaitlis, kas noapaļots līdz divām zīmēm aiz komata, un tas apzīmē temperatūru pēc Celsija.

Jums ir jāpārvērš Celsija par Kelvinu un Fārenheitu un jāatgriež kā masīvs "ans" = "[kelvins, fārenheits]".

Atgrieziet masīvu "ans". Tiks pieņemtas atbildes 10-5 robežās no faktiskās atbildes.

Pieraksti to:
- ``` Kelvins = Celsija + 273,15```
- ``` Fārenheita = Celsija * 1,80 + 32,00```
 

## 1. piemērs:
```
Ievade: celsija = 36,50
Izvade: [309.65000,97.70000]
Paskaidrojums: Temperatūra 36,50 pēc Celsija skalas, pārrēķinot Kelvinos, ir 309,65 un konvertējot Fārenheitā, ir 97,70.
```
## 2. piemērs:
``` Ievade: celsija = 122,11
Izvade: [395.26000,251.79800]
Paskaidrojums: Temperatūra pie 122,11 Celsija skalas, pārrēķinot Kelvinos, ir 395,26 un pārrēķinot Fārenheitā, ir 251,798.
```


# Rezultāts
- Izpildes laiks 0 ms
- pārspēj 100%
- Atmiņa 6 MB
- pārspēj 91,7%