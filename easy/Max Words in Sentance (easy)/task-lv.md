# [2114. Maksimālais teikumos atrasto vārdu skaits](https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/description/)

Teikums ir vārdu saraksts, kas ir atdalīti ar vienu atstarpi bez sākuma vai beigu atstarpēm.

Jums tiek dots virkņu teikumu masīvs, kur katrs teikums [i] apzīmē vienu teikumu.

Atgriezt maksimālo vārdu skaitu, kas parādās vienā teikumā.

 

## 1. piemērs:
```
Ievade: teikumi = ["Alise un Bobs mīl leetcode", "es arī tā domāju", "tas ir liels paldies"]
Izvade: 6
Paskaidrojums:
- Pirmajā teikumā "Alise un Bobs mīl leetcode" kopā ir 5 vārdi.
- Otrajā teikumā "arī es tā domāju" kopā ir 4 vārdi.
- Trešajā teikumā "tas ir liels paldies" kopā ir 6 vārdi.
Tādējādi maksimālais vārdu skaits vienā teikumā nāk no trešā teikuma, kurā ir 6 vārdi.
```
## 2. piemērs:
```
Ievade: teikumi = ["lūdzu, uzgaidiet", "turpiniet cīnīties", "turpiniet uzvarēt"]
Izvade: 3
Paskaidrojums: iespējams, ka vairākos teikumos ir vienāds vārdu skaits.
Šajā piemērā otrajā un trešajā teikumā (pasvītrots) ir vienāds vārdu skaits.
```
 

## Ierobežojumi:

- 1 <= teikumi.garums <= 100
- 1 <= teikumi[i].garums <= 100
- teikumi[i] sastāv tikai no mazajiem angļu burtiem un tikai " ".
- teikumos[i] nav sākuma vai beigu atstarpes.
- Visi vārdi teikumos [i] ir atdalīti ar vienu atstarpi.


# Rezultāts
```
Izpildes laiks 9 ms
Pārspēj 89,18%
Atmiņa 9,8 MB
Pārspēj 50,9%
```