# [1342. Darbību skaits, lai vienkārši samazinātu skaitu līdz nullei](https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/)
Dots vesels skaitlis, atgrieziet soļu skaitu, lai to samazinātu līdz nullei.
Vienā solī, ja pašreizējais skaitlis ir pāra, jums tas ir jādala ar 2, pretējā gadījumā jums no tā ir jāatņem 1.

 

## 1. piemērs:
    Ievade: cipars = 14
    Izvade: 6
    Paskaidrojums:
    1. darbība) 14 ir pāra; dala ar 2 un iegūst 7.
    2. darbība) 7 ir nepāra; atņemiet 1 un iegūstiet 6.
    3. darbība) 6 ir pāra; dala ar 2 un iegūst 3.
    4. darbība) 3 ir nepāra; atņem 1 un iegūst 2.
    5. solis) 2 ir pāra; dala ar 2 un iegūst 1.
    6. solis) 1 ir nepāra; atņemiet 1 un iegūstiet 0.
## 2. piemērs:
    Ievade: cipars = 8
    Izvade: 4
    Paskaidrojums:
    1. darbība) 8 ir pāra; dala ar 2 un iegūst 4.
    2. darbība) 4 ir pāra; dala ar 2 un iegūst 2.
    3. solis) 2 ir pāra; dala ar 2 un iegūst 1.
    4. darbība) 1 ir nepāra; atņemiet 1 un iegūstiet 0.

## 3. piemērs:
    Ievade: cipars = 123
    Izvade: 12
 

### Ierobežojumi:
    0 <= cipars <= 106

# Rezultāts
    Izpildes laiks:
    0 ms
    Beats:
    100%
    Atmiņa:
    6 MB
    Beats:
    62,7%