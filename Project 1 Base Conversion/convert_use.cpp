#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <cmath>
#include <cstring>
#include <unordered_map>
using namespace std;
#include "convert.h"
​
int main() {
    int n, choice;
        cout << "1) Binary to Octal" << "\n";
        cout << "2) Octal to Binary" << "\n";
        cout << "3) Decimal to Octal" << "\n";
        cout << "4) Octal to Decimal" << "\n";
        cout << "5) Decimal to Hexadecimal" << "\n";
        cout << "6) Hexadecimal to Decimal" << "\n";
        cout << "7) Hexadecimal to Binary" << "\n";
        cout << "8) Binary to Hexadecimal" << "\n";
        cout << "9) Decimal to Binary" << "\n";
        cout << "10) Binary to Decimal" << "\n";
        cout << "11) Hexadecimal to Octal" << "\n";
        cout << "12) Octal to Hexadecimal" << "\n";
        cout << "Enter -1 to exit " << "\n";
    while (true) {
        cout << "Enter your choice : " << "\n";
        cin >> choice;
        if (choice == -1) {
            return -1;
        }
        if (choice > 12) {
            cout << "Invalid choice" << "\n";
            continue;
        }
        cout << "Enter no. " << "\n";
        if (choice != 6 && choice != 7 && choice != 8 && choice != 10) {
            cin >> n;
        }
        if (choice == 1) {
            convert<int> ob(n);
            cout << ob.convertBinarytoOctal(n) << "\n";
        }
        else if (choice == 2) {
            convert<int> ob(n);
            cout << ob.convertOctalToBinary(n) << "\n";
        }
        else if (choice == 3) {
            convert<int> ob(n);
            cout << ob.Decimal_T0_Octal(n) << "\n";
        }
        else if (choice == 4) {
            convert<int> ob(n);
            cout << ob.Octal_TO_Decimal(n) << "\n";
        }
        else if (choice == 5) {
            convert<int> ob(n);
            ob.decToHexa(n);
            cout << "\n";
        }
        else if (choice == 6) {
            char s[20];
            cin >> s;
            convert<string> ob(s);
            cout << ob.hexadecimalToDecimal(s) << "\n";
        }
        else if (choice == 7) {
            string s;
            cin >> s;
            convert<string> ob(s);
            cout << ob.hex_to_bin(s) << "\n";
        }
        else if (choice == 8) {
            string s;
            cin >> s;
            convert<string> ob(s);
            ob.bin_to_hex(s);
        }
        else if (choice == 9) {
            convert<int> ob(n);
            ob.dec_to_bin(n);
            cout << "\n";
        }
        else if (choice == 10) {
            string s;
            cin >> s;
            convert<string> ob(s);
            ob.Bin_to_dec(s);
            cout << "\n";
        }
​
        // system("cls");
    }
}