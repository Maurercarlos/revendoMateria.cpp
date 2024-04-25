#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

    int a = 0;

    while (a < 10) 
    {
        cout << "Número de 1 a 10, sequencial." << endl;
        a = a + 1;
    } if (a >= 10) {

        cout << "Número maior que 10. INCORRETO." << endl;
    }

    return 0;
}