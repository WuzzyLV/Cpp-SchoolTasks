# [IP adreses aizskaršana](https://leetcode.com/problems/defanging-an-ip-address/description/)

Ja ir norādīta derīga (IPv4) IP adrese, atgrieziet šīs IP adreses atveidotu versiju.
Sabojāta IP adrese katru punktu ""." aizstāj ar "[.]"".

 

## 1. piemērs:
```
Ievade: adrese = "1.1.1.1"
Izvade: "1[.]1[.]1[.]1"
```
## 2. piemērs:
```
Ievade: adrese = "255.100.50.0"
Izvade: "255[.]100[.]50[.]0"
```
## Ierobežojumi:
Norādītā "adrese" ir derīga IPv4 adrese.

# Rezultāts
``` Izpildlaiks 0 ms;
Pārspēj 100%;
Atmiņa 6 MB;
Pārspēj 28%
```
## Kods
```cpp
#include <vector>
#include <iostream>

using namespace std;
class Solution {
public:
    string defangIPaddr(string address) {
        for(int i =0;i<address.length();i++){
            if(address[i]=='.'){
                address.replace(i, 1, "[.]");
                i++;
            }
        }
        return address;
    }
};
```

