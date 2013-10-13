#include <iostream>

#define SCOPE 100

using namespace std;

int main() {
    int tab[SCOPE];
    int i = 0;

    for (i; i < SCOPE; i++) {
        tab[i] = i;
    }

    // Sieve of Eratosthenes
    for (i = 0; i < SCOPE; i++) {
        if ( tab[i] % 2 == 0 || tab[i] % 3 == 0 || tab[i] % 5 == 0 ) {
            // omits
        } else {
            cout << i << endl;
        }
    }

    return 0;
}