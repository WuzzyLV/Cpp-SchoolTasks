[1603. Design Parking System](https://leetcode.com/problems/design-parking-system/description/)
Izstrādāt stāvvietu sistēmu autostāvvietai. Autostāvvietā ir trīs veidu stāvvietas: liela, vidēja un maza, ar noteiktu vietu skaitu katram izmēram.

Ieviesiet "ParkingSystem" klasi:

- `ParkingSystem(int big, int medium, int small)` Inicializē klases `ParkingSystem' objektu. Katrai autostāvvietai vietu skaits ir norādīts kā konstruktora daļa.
- `bool addCar(int carType)` Pārbauda, ​​vai automašīnai, kas vēlas iebraukt stāvvietā, ir `carType` stāvvieta. carType var būt trīs veidu: liels, vidējs vai mazs, kas tiek apzīmēti attiecīgi ar 1, 2 un 3. Automašīnu var novietot tikai sava "car Type" stāvvietā. Ja brīvas vietas nav, atgrieziet “false”, pretējā gadījumā novietojiet automašīnu tādā lieluma vietā un atgrieziet “true”.
 

## 1. piemērs:
```
Ievade
["ParkingSystem", "addCar", "addCar", "addCar", "addCar"]
[[1, 1, 0], [1], [2], [3], [1]]
Izvade
[nulle, patiesa, patiesa, nepatiesa, nepatiesa]

Paskaidrojums
ParkingSystem parkingSystem = new ParkingSystem(1, 1, 0);
parkingSystem.addCar(1); // atgriezt patiesu, jo lielai automašīnai ir pieejama 1 vieta
parkingSystem.addCar(2); // atgriezt patiesu, jo ir pieejama 1 vieta vidējai automašīnai
parkingSystem.addCar(3); // atgriež false, jo mazai automašīnai nav pieejams slots
parkingSystem.addCar(1); // atgriež false, jo lielai automašīnai nav pieejams slots. Tā jau ir aizņemta.
 ```

## Ierobežojumi:
- 0 <= liels, vidējs, mazs <= 1000
- automašīnas tips ir 1, 2 vai 3
- Uz addCar tiks veikti ne vairāk kā 1000 zvanu


# Rezultāts
```
Izpildes laiks 54 ms
Pārspēj 90,53%
Atmiņa 33 MB
Pārspēj 75,45%
```

## Kods
```cpp
#include <vector>
#include <iostream>

using namespace std;

class ParkingSystem {
public:
    int bigAmount, bigSlots, mediumAmount, mediumSlots, smallAmounts, smallSlots;
    
    ParkingSystem(int big, int medium, int small) {
        bigAmount = big;
        mediumAmount = medium;
        smallAmounts = small;
        bigSlots = 0;
        mediumSlots = 0;
        smallSlots = 0;
        
    }
    
    bool addCar(int carType) {
        if (carType == 1) {
            if (bigSlots < bigAmount) {
                bigSlots++;
                return true;
            }
        } else if (carType == 2) {
            if (mediumSlots < mediumAmount) {
                mediumSlots++;
                return true;
            }
        } else if (carType == 3) {
            if (smallSlots < smallAmounts) {
                smallSlots++;
                return true;
            }
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
```