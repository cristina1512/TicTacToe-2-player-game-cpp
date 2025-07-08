#include "functions.h"

void drawboard(char array[4][4]) {
    cout << " " << array[1][1] << " " << "|" << " " << array[1][2] << " " << "|" <<
    " " << array[1][3] << " " << endl;

    cout << "-----------" << endl;

    cout << " " << array[2][1] << " " << "|" << " " << array[2][2] << " " << "|" <<
    " " << array[2][3] << " " << endl;

    cout << "-----------" << endl;

    cout << " " << array[3][1] << " " << "|" << " " << array[3][2] << " " << "|" <<
    " " << array[3][3] << " " << endl;
}


bool checkscore(char array[4][4]) {
    if (array[1][1] == array[1][2] && array[1][2] == array[1][3] && array[1][1] != ' ')
        return true;

    else if (array[2][1] == array[2][2] && array[2][2] == array[2][3] && array[2][1] != ' ')
        return true;

    else if (array[3][1] == array[3][2] && array[3][2] == array[3][3] && array[3][1] != ' ')
        return true;

    else if (array[1][1] == array[2][1] && array[2][1] == array[3][1] && array[1][1] != ' ')
        return true;

    else if (array[1][2] == array[2][2] && array[2][2] == array[3][2] && array[1][2] != ' ')
        return true;

    else if (array[1][3] == array[2][3] && array[2][3] == array[3][3] && array[1][3] != ' ')
        return true;

    else if (array[1][1] == array[2][2] && array[2][2] == array[3][3] && array[1][1] != ' ')
        return true;

    else if (array[1][3] == array[2][2] && array[2][2] == array[3][1] && array[1][3] != ' ')
        return true;

    return false;
}


void placesymbol(char array[4][4], char symbol, int i, int j) {
    array[i][j] = symbol;
}


int checkoccupied(char array[4][4]) {
    int nr = 0;
    for (int i = 1; i < 4; i++)
    {
        for(int j = 1; j < 4; j++) {
            if (array[i][j] != ' ')
                nr++;
        }
    }
    return nr;
}