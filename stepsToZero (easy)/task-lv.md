# [1342. darbību skaits, lai skaitli samazinātu līdz nullei vienkārši] (https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/)
Ja ir vesels skaitlis num, atgrieziet darbību skaitu, lai to samazinātu līdz nullei.
Vienā solī, ja pašreizējais skaitlis ir vienmērīgs, tas jādala ar 2, pretējā gadījumā no tā jāatņem 1.

 

# # 1. piemērs:
Ievade: num = 14
Izvade: 6
Paskaidrojums:
1. Solis) 14 ir vienmērīgs; dala ar 2 un iegūst 7.
2.) 7. darbība ir nepāra; atņem 1 un iegūst 6.
3. Solis) 6 ir vienmērīgs; dala ar 2 un iegūst 3.
4. Darbība) 3 ir nepāra; atņem 1 un iegūst 2.
5. Solis) 2 ir vienmērīgs; dala ar 2 un iegūst 1.
6. Darbība) 1 ir nepāra; atņem 1 un iegūst 0.
# # 2. piemērs:
Ievade: num = 8
Izvade: 4
Paskaidrojums:
1. Solis) 8 ir vienmērīgs; dala ar 2 un iegūst 4.
2. Solis) 4 ir vienmērīgs; dala ar 2 un iegūst 2.
3. Solis) 2 ir vienmērīgs; dala ar 2 un iegūst 1.
4. Darbība) 1 ir nepāra; atņem 1 un iegūst 0.

# # 3. piemērs:
Ievade: num = 123
Izvade: 12
 

# # # ierobežojumi:
0 < = num < = 106

# rezultāts
Izpildlaiks:
0 ms
Sitieni:
100%
Atmiņa:
6 MB
Sitieni:
62.7%