# 58. Pēdējā vārda garums

## Rezultāts
```
Izpildes laiks 0 ms
Pārspēj 100%
Atmiņa 6,6 MB
Pārspēj 55,53%
```
Dotā virknē s, kas sastāv no vārdiem un atstarpēm, atgriež virknes pēdējā vārda garumu.

Vārds ir maksimālā apakšvirkne, kas sastāv tikai no rakstzīmēm, kas nav atstarpes.

## 1. piemērs:
```
Ievade: s = "Sveika pasaule"
Izvade: 5
Paskaidrojums: Pēdējais vārds ir "Pasaule", kura garums ir 5.
```
## 2. piemērs:
```
Ievade: s = "aizlidot mani uz mēnesi"
Izvade: 4
Paskaidrojums: Pēdējais vārds ir "mēness", kura garums ir 4.
```
## 3. piemērs:
```
Ievade: s = "Luffy joprojām ir joyboy"
Izvade: 6
Paskaidrojums: Pēdējais vārds ir "joyboy", kura garums ir 6.
 ```

## Ierobežojumi:
- 1 <= s.garums <= 104
- s sastāv tikai no angļu valodas burtiem un atstarpēm " ".
- s būs vismaz viens vārds.

## Kods
```cpp
class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;

        if(s.size()==1) 
            return 1;
        
        for(int i=s.size()-1; i>=0; i--){
            if(i!=0){
                if(s[i]==' ')
                   continue;
                if(s[i]!=' ' && s[i-1]==' '){
                    count++;
                    break;
                } 
                else    
                    count++;
            }
            if(i==0){
                if(s[0]!=' ') count++;
            }
        }
        return count;
    }
};
```