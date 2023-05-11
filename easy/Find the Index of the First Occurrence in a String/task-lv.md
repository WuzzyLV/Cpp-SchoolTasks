# 28. Atrodiet virknes pirmā atgadījuma indeksu
## Rezultāts
``` Izpildes laiks 4 ms
Pārspēj 39,35%
Atmiņa 6,3 MB
Pārspēj 66,37%
```

Ja adata un siena kaudze ir divas virknes, atgrieziet indeksu, kas norādīts pirmās adatas parādīšanās siena kaudzē, vai -1, ja adata nav siena kaudzē.

## 1. piemērs:
```
Ievade: siena kaudze = "sadbutsad", adata = "sad"
Izvade: 0
Paskaidrojums: "skumji" rodas indeksā 0 un 6.
Pirmais gadījums ir ar indeksu 0, tāpēc mēs atgriežam 0.
```
## 2. piemērs:
```
Ievade: siena kaudze = "leetcode", adata = "leeto"
Izvade: -1
Paskaidrojums: "leeto" nav noticis "leetcode", tāpēc mēs atgriežam -1.
```

### Ierobežojumi:

- 1 <= siena kaudze.garums, adata.garums <= 104
- siena kaudze un adata sastāv tikai no angļu valodas mazajiem burtiem.

## Kods
```cpp
class Solution {
public:
    int strStr(string haystack, string needle) {
        int m = needle.length();
        int n = haystack.length();

        for(int i=0; i<=n-m; i++) {
            int count = 0;
            for(int j=0; j<m; j++) {
                if(haystack[i+j] == needle[j]) {
                    count++;
                }
                else
                    break;
            }
            if(count == m)
                return i;
        }
        return -1;
    }
};
```