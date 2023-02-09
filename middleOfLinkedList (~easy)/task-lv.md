# [876. Saistītā saraksta vidus viegli](https://leetcode.com/problems/middle-of-the-linked-list/)
Ņemot vērā atsevišķi saistītā saraksta galveni, atgrieziet saistītā saraksta vidējo mezglu.
Ja ir divi vidējie mezgli, atgrieziet otro vidējo mezglu.

## 1. piemērs:
    Ievade: galva = [1,2,3,4,5]
    Izvade: [3,4,5]
    Paskaidrojums: Saraksta vidējais mezgls ir 3. mezgls.
## 2. piemērs:
    Ievade: galva = [1,2,3,4,5,6]
    Izvade: [4,5,6]
    Paskaidrojums: Tā kā sarakstā ir divi vidējie mezgli ar vērtībām 3 un 4, mēs atgriežam otro.

### Ierobežojumi:
    Mezglu skaits sarakstā ir diapazonā [1, 100].
    1 <= Node.val <= 100


# Rezultāts
    Izpildes laiks:
    0 ms
    Pārspēj:
    100%
    Atmiņa:
    7,1 MB
    Pārspēj:
    78,46%