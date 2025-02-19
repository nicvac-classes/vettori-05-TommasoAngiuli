#include <iostream>
using namespace std;
int main() 
{
    srand(time(0));
    int n, somma, i, superiore;
    double media;
    do {
        cout << "inserisci la dimensione del vettore" << endl;
        cin >> n;
    } while (n <= 0);
    int v[n];
    for (i = 0; i <= n - 1; i++) {
        v[i] = rand() % 1001;
    }
    somma = 0;
    for (i = 0; i <= n - 1; i++) {
        somma = somma + v[i];
    }
    media = (double) somma / n;
    superiore = 0;
    for (i = 0; i <= n - 1; i++) {
        if (v[i] > media) {
            cout << v[i] << " è superiore alla media e si trova nella posizione " << i << endl;
            superiore = superiore + 1;
        }
    }
    cout << "la media dei valori è " << media << " e i valori superiori alla media sono " << superiore << endl;
}