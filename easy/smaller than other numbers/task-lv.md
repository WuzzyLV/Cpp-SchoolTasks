# 1365. Cik skaitļi ir mazāki par pašreizējo skaitli


## Rezultāts
```
Izpildes laiks 4 ms
Pārspēj 57,44%
Atmiņa 6,8 MB
Pārspēj 27,84%
```
Ņemot vērā masīva numurus, katram skaitļam[i] noskaidrojiet, cik skaitļu masīvā ir mazāki par to. Tas nozīmē, ka katram skaitļam[i] ir jāsaskaita derīgo j skaits tā, lai j != i un skaitļi[j] < nums[i].

Atgrieziet atbildi masīvā.


## 1. piemērs:
```
Ievade: cipari = [8,1,2,2,3]
Izvade: [4,0,1,1,3]
Paskaidrojums:
Skaitļiem[0]=8 ir četri mazāki skaitļi par to (1, 2, 2 un 3).
Skaitļiem[1]=1 nepastāv mazāks skaitlis par to.
Skaitļiem[2]=2 ir par vienu mazāks skaitlis par to (1).
Skaitļiem[3]=2 ir par vienu mazāks skaitlis par to (1).
Skaitļiem[4]=3 ir trīs mazāki skaitļi par to (1, 2 un 2).
```
## 2. piemērs:
```
Ievade: cipari = [6,5,4,8]
Izvade: [2,1,0,3]
```
## 3. piemērs:
```
Ievade: cipari = [7,7,7,7]
Izvade: [0,0,0,0]
  ```

### Ierobežojumi:

- 2 <= nums.length <= 500
- 0 <= skaitļi[i] <= 100