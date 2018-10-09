#include <iostream>
#include <random>
#include <time.h>
using namespace std;
void sudoku(){
    srand(time(nullptr));
    int i=0,j=0,k=0,b=0,c[9]={},z=0,a[9][9]={};


        for (i = 0; i < 9; i++) {
            b=0,z=0;
            for (k=0;k<9;k++){
                c[k]=0;
            }
            while(b!=45) {
                b=0;
                for (k=0;k<9;k++){
                    c[k]=0;
                }
                for (j = 0; j < 9; j++) {
                    do {
                            z=0;
                            a[i][j] = rand() % 9 + 1;
                            c[j] = a[i][j];
                            for (k = 0; k < 8; k++) {
                                if (j != 0) {
                                    if (a[i][j] == c[k]) {
                                        z += 1;
                                    }
                                }
                            }
                    }while(z>1);
                }

                for (j = 0; j < 9; j++) {
                    b += a[i][j];
                }
                }
        }
    //imprimir sudoku
        for (i = 0; i < 9; i++) {
            if (i % 3 == 0) {
                for (k = 0; k < 9; k++) {
                    cout << "---";
                }
                for (k = 0; k < 4; k++) {
                    cout << "-";
                }
                cout << endl;
            }
            for (j = 0; j < 9; j++) {
                if (j % 3 == 0) {
                    cout << "|";
                }
                cout << " " << a[i][j] << " ";
                if (j == 8) {
                    cout << "|";
                }
            }
            cout << endl;
            if (i == 8) {
                for (k = 0; k < 9; k++) {
                    cout << "---";
                }
                for (k = 0; k < 4; k++) {
                    cout << "-";
                }
                cout<<endl;
            }
        }
        //valores vacios
        for (i=0;i<27;i++){
            a[rand()%9][rand()%9]=0;
        }
    //imprimir sudoku
    for (i = 0; i < 9; i++) {
        if (i % 3 == 0) {
            for (k = 0; k < 9; k++) {
                cout << "---";
            }
            for (k = 0; k < 4; k++) {
                cout << "-";
            }
            cout << endl;
        }
        for (j = 0; j < 9; j++) {
            if (j % 3 == 0) {
                cout << "|";
            }
            cout << " " << a[i][j] << " ";
            if (j == 8) {
                cout << "|";
            }
        }
        cout << endl;
        if (i == 8) {
            for (k = 0; k < 9; k++) {
                cout << "---";
            }
            for (k = 0; k < 4; k++) {
                cout << "-";
            }
        }
    }
}

int main() {
    sudoku();
    return 0;
}