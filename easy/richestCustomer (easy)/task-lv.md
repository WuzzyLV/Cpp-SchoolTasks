# [1672. Bagātākā klienta bagātība](https://leetcode.com/problems/richest-customer-wealth/description/) Vienkārši
Jums tiek dota vesela skaitļa režģa konti “m x n”, kur “konti[i][j]” ir naudas summa, kas i​​​​​​​​​​​ klientam ir j banka. Atdodiet bagātību, kas ir bagātākajam klientam.

Klienta bagātība ir naudas summa, kas viņam ir visos bankas kontos. Bagātākais klients ir tas, kuram ir vislielākā bagātība.

 

## 1. piemērs:
    Ievade: konti = [[1,2,3],[3,2,1]]
    Izvade: "6".
    Paskaidrojums:
    1. klientam ir bagātība = 1 + 2 + 3 = 6
    Otrajam klientam ir bagātība = 3 + 2 + 1 = 6
    Abi klienti tiek uzskatīti par bagātākajiem ar 6 bagātību katrs, tāpēc atdodiet 6.
    2. piemērs:

## Ievade: konti = [[1,5],[7,3], [3,5]]
    Izvade: 10
    Paskaidrojums:
    1. klientam ir bagātība = 6
    Otrajam klientam ir bagātība = 10
    Trešajam klientam ir bagātība = 8
    Otrais klients ir bagātākais ar 10 bagātību.

## 3. piemērs:
    Ievade: konti = [[2,8,7],[7,1,3],[1,9,5]]
    Rezultāts: 17