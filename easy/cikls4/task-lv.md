
# Cikls 4 iesācējiem (cikls4)
    Laika limits 1.00s
    Atmiņas limits 8.0 MB
    Grūtība 97%

## Rezultats: 5/5

## Definīcija
Izdrukāt visus skaitļus no 1 lidz dotajam skaitlim.

## Ievaddatu raksturojums
Ievaddatu vienīgajā rindā dots vesels skaitlis a (1<a<32000).

## Izvaddatu raksturojums
Izvaddati satur a rindas un tajās atrodas pēc kārtas visi veselie skaitļi no 1 līdz a.

## Paraugdati
| Stdin | Stdout |
-|-
3 | 
-| 1
-| 2
-| 3

## Kods
```cpp
#include <iostream>

using namespace std;

int main() {
    int max;
    cin>>max;
    for (int i = 1; i <= max; i++)
    {
        cout<<i <<endl;
    }
}
```