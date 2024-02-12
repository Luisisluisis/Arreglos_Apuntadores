//Crear dos vectores de n cantidad de numeros que el usuario diligencie

#include <iostream>
#include <vector>

using namespace std;

int main (){ 
    int number;
    cout << "How many numbers do you want to include in the vector? ";
    cin >> number;

    vector <int> vector1 (number);
    vector <int> vector2 (number);

    cout << "Digit the elements for the first vector :" << endl;
    for (int i = 0; i < number; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> vector1[i];
    }

    cout << "Digit the elements for the second vector :" << endl;
    for (int i = 0; i < number; ++i) {
       cout << "Element " << i + 1 << ": ";
       cin >> vector2[i];
    }

    cout << "First vector: ";
    for (int i = 0; i < number; ++i) {
        cout << vector1[i] << " ";
    }
    cout << endl;

    cout << "Second vector: ";
    for (int i = 0; i < number; ++i) {
        cout << vector2[i] << " ";
    }
    cout << endl;

    return 0;
}

//Sumar los numeros diligenciados por el usuario en cada vector
    int additionVector1 = 0;
    int adittionVector2 = 0;

    for (int i = 0; i < number; ++i) {
        additionVector1 += vector1[i];
        additionVector2 += vector2[i];
    }

    cout << "The result of the addition of the elements given by the user of the first vector is: " << additionVector1 << endl;
    cout << "The result of the addition of the elements given by the user of the second vector is: " << additionVector2 << endl;

    return 0;
}
