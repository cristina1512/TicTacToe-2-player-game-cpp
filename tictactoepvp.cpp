#include <unordered_map>
#include "functions.h"

#include <iostream>
using namespace std;

int main()
{
    bool check = false;
    int ok = 2;
    unordered_map<int, char> symbols = {
        {1, 'X'},
        {2, 'O'}
    };

    char array[4][4];
    for (int i = 1; i <= 3; i++)
        for (int j = 1; j <= 3; j++)
            array[i][j] = ' ';

    while (check == false) {
        drawboard(array);
        int posi, posj;
        int cnt = 1;
        do {
            if (cnt > 1) {
                cout<<"Error!"<<endl;
            }
            cout << "Player " << ok << ", place the " << symbols[ok] << "." << endl;
            cin >> posi >> posj;

            if (cin.fail()) {
                cin.clear();
                cin.ignore(10000, '\n');
                posi = posj = -1;
            } else {
                cin.ignore(10000, '\n'); // nothing after the 2 positions will be taken into consideration
                if (posi < 1 || posi > 3)
                    posi = -1;
                if (posj < 1 || posj > 3)
                    posj = -1;
            }

            cnt++;
        } while (posi < 1 || posi > 3 || posj < 1 || posj > 3 || array[posi][posj] != ' ');

        array[posi][posj] = symbols[ok];

        if (checkscore(array)) {
            check = true;
            break;
        }

        if (checkoccupied(array) == 9) {
            drawboard(array);
            cout<<"IT'S A DRAW!"<<endl;
            return 0;
        }

        if (ok == 1) {
            ok++;
        } else {
            ok--;
        }
    }

    if(check == true) {
        drawboard(array);
        cout<<"PLAYER "<<ok<<" WINS!"<<endl;
    }

    return 0;
}