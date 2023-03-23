
# Problēma
Populārākā snapchat funkcija ir Snapchat Streak.
Sērija tiek saglabāta starp diviem cilvēkiem, ja abi nosūta viens otram vismaz vienu snap katru dienu.
Ja kādā dienā kāds aizmirst nosūtīt vismaz vienu snap, sērija pārtrūkst un sēriju skaits tiek iestatīts uz 0.

Šefpavāram un Čefīnai patīk saglabāt savu snapchat sēriju. Jūs novērojāt abu no tiem momentuzņēmumu skaitu N dienu pēc kārtas. $i_th$ dienā šefpavārs nosūtīja $A_i$ snaps Chefina, bet Chefina nosūtīja $B_i$ snaps Chef.

Atrodiet maksimālo sēriju skaitu, ko viņi sasniedza šajās N dienās.

## Ievades formāts
Pirmajā ievades rindā būs viens vesels skaitlis

T, kas apzīmē testa gadījumu skaitu.
Katrs testa gadījums sastāv no vairākām ievades rindām.
Katra testa gadījuma pirmajā rindā ir vesels skaitlis

N — novēroto dienu skaits.

Otrajā rindā ir N ar atstarpi atdalīti veseli skaitļi — $A_1$, $A_2$,…, $A_N$, snapu skaits, ko šefpavārs nosūtīja Čefinai $i_th$ dienā.
Trešās rindas satur

Trešā rinda satur N ar atstarpi atdalītus veselus skaitļus N ar atstarpi atdalītus veselus skaitļus — $B_1$, $B_2$,…, $B_N$, snaps, ko Čefina nosūtīja šefam $i_th$ dienā.

## Izvades formāts
Katram testa gadījumam izvadiet jaunā rindiņā maksimālo svītru skaitu, kas sasniegts šajās N dienās.

## Ierobežojumi
- $1≤1001≤T≤100$
- $1≤N≤1000$
- $0≤A_i,B_i≤100$

## 1. paraugs:
Ievade | Izvade
-|-
4|3
3|2
3 1 2|0
2 4 1|2
2|1
0 0
10 10
4
5 4 0 2
3 1 10
5
0 1 1 2 0
1 1 0 0 3

## Paskaidrojums:
- 1. pārbaudes gadījums: visiem
3 dienās gan šefpavārs, gan Čefina nosūtīja vismaz vienu snapu dienā. Tādējādi trešās dienas beigās sēriju skaits ir 3.

- 2. pārbaudes gadījums: šefpavārs nenosūtīja Čefinai nevienu momentuzņēmumu. Tādējādi sēriju skaits abās dienās paliek 0.

- 3. pārbaudes gadījums: pirmajās divās dienās gan šefpavārs, gan Chefina nosūta vismaz vienu snap dienā. Tādējādi otrās dienas beigās sēriju skaits ir
2 Trešās dienas beigās, tā kā šefs nav nosūtījis nevienu snap, sēriju skaits kļūst par 0. Ceturtās dienas beigās, tā kā Čefina nenosūtīja nevienu snap, sēriju skaits paliek 0.

- 4. pārbaudes gadījums:
    - Pirmās dienas beigās, tā kā šefpavārs neatsūtīja nevienu snap, sēriju skaits paliek 0.
    - Otrajā dienā gan šefpavārs, gan Čefina nosūtīja vismaz vienu snapu. Tādējādi sēriju skaits kļūst par 1.
    - Trešās dienas beigās, tā kā Čefina neatsūtīja nevienu snap, sēriju skaits kļūst par 0.
    - Ceturtās dienas beigās, tā kā Čefina neatsūtīja nevienu snapu, sēriju skaits paliek 0.
    - Piektās dienas beigās, tā kā šefs neatsūtīja nevienu snap, sēriju skaits paliek 0.
    
    Maksimālais sēriju skaits 5 dienās ir 1.