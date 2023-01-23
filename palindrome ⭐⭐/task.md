
irpalin	Ir palindroms?	1 sek.
# Uzdevums
Par palindromu sauc tādu burtu virkni, kas vienādi lasāma gan no kreisās puses uz labo, gan no labās uz kreiso. Šajā uzdevumā interesēsimies tikai par burtiem - ja virknē būs citi simboli, tos vienkārši neņemsim vērā. Arī lielos un mazos burtus nešķirosim. Tā, piemēram, virknes "Ala", "Sile, putra, kartupelis" un "A man, a plan, a canal - PANAMA!" ir palindromi, bet "Alva", "Salas malas" un "Abrakadabra" - nav. Uzrakstiet programmu, kas ievadītai simbolu virknei nosaka, vai ievadītā virkne ir palindroms, vai nav!

 
# Ievaddati
Teksta faila irpalin.dat pirmajā rindā dots naturāls skaitlis, kura vērtība nepārsniedz 200 - ievadāmās simbolu virknes garums. Faila otrajā rindā dota simbolu virkne, kas var saturēt latviešu alfabēta burtus bez diakritiskajām zīmēm, tukšumsimbolus un pieturzīmes (punktus, komatus, domu zīmes, jautājuma zīmes un izsaukuma zīmes).

 
# Izvaddati
Teksta faila irpalin.rez vienīgajā rindā jāizvada vārds "IR", ja ievadītā virkne ir palindroms, vai "NAV", ja ievadītā virkne nav palindroms.

 
# Piemērs
## irpalin.dat	irpalin.rez
    23
    Sile, putra, kartupelis
    IR 
## irpalin.dat	irpalin.rez
    11
    Abrakadabra
    NAV

# Result
    8/10
    | Tests  |  Rezultāts   |
    | ------ | ------------ |
    |    1   |	Pareizs     |
    |    2   |	Pareizs     |
    |    3   |	Pareizs     |
    |    4   |	Nepareizs   |
    |    5	 |  Pareizs     |
    |    6	 |  Pareizs     |
    |    7	 |  Nepareizs   |
    |    8 	 |  Pareizs     |
    |    9 	 |  Pareizs     |
    |    10	 |  Pareizs     |
