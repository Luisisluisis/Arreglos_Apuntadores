#include <iostream>

using namespace std;

int main() {
    string calculator [5][3] =//aca creo la calculadora
     {{"1","2","3"},{"4","5","6"},{"7","8","9"},{"+","0","-"},{"*","=","√"}};

    for (int i=0; i<5; i++) {
        for (int j = 0; j < 3; j++) {
            cout << calculator[i][j] << "";
        }
    }
    return 0;
}