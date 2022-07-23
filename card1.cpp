#include <bits/stdc++.h>
using namespace std;

int main() {
    int numberOfCards;
    cin >> numberOfCards;
    int rows;
    int columns;
    

    for (int i = 0 ; i < numberOfCards ; i++){
        cin >> rows >> columns;
        cout << "Case #" << i + 1 << ":" << endl;
        // first two lines
        cout << "..";
        for (int k = 1; k < columns ; k++){
            cout << "+-";
        }
        cout << "+" << endl << "..";
        for (int k = 1; k < columns ; k++){
            cout << "|.";
        }
        cout << "|" << endl;
        // next lines
        for (int j = 1; j < rows ; j++){
            for (int k = 0; k < columns ; k++){
                cout << "+-";
            }
            cout << "+" << endl;
            for (int k = 0; k < columns ; k++){
                cout << "|.";
            }
            cout << "|" << endl;
        }
        for (int k = 0; k < columns ; k++){
            cout << "+-";
        }
        cout << "+" << endl;
    }
}