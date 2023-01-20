// Your First C++ Program

#include <iostream>
#include <fstream>

using namespace std;

string red = "\033[31m";
string green = "\033[32m";
string bold= "\033[1m";
string underl= "\033[4m";
string reset= "\033[0m";
int main() {
    system("clear");

    ifstream in("in.md");
    string text;
    while (getline (in, text)) {
        int counter=0;
        for(int i =0; i < text.length(); i++){
            if(text[i]=='#'){counter++;}
        }

        switch(counter){
            case 1:
                cout << green << underl << bold << text << reset <<endl;
                break;
            case 2:
                cout << green << text << reset <<endl;
                break;
            default:
                cout << text << "" << reset <<endl;
        }

    }

    cout << "\033" <<   reset << endl;
    return 0;
}
