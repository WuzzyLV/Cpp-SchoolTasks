# 171. Excel lapas kolonnas numurs


## Rezultāts
```
Izpildes laiks 0 ms
Pārspēj 100%
Atmiņa 5,9 MB
Pārspēj 69,66%
```
Ja ir norādīta virkne columnTitle, kas apzīmē kolonnas nosaukumu, kāds parādīts Excel lapā, atgrieziet tai atbilstošo kolonnas numuru.

Piemēram:
```
A -> 1
B -> 2
C -> 3
...
Z -> 26
AA —> 27
AB —> 28
...
```

### 1. piemērs:
```
Ievade: columnTitle = "A"
Izvade: 1
```
### 2. piemērs:
```
Ievade: columnTitle = "AB"
Rezultāts: 28
```
### 3. piemērs:
```
Ievade: columnTitle = "ZY"
Rezultāts: 701
```

### Ierobežojumi:

- 1 <= kolonnasTitle.length <= 7
- columnTitle sastāv tikai no lielajiem angļu burtiem.
- kolonnas nosaukums ir diapazonā ["A", "FXSHRXW"].