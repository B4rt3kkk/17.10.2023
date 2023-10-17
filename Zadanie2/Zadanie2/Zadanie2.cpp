#include <iostream>
using namespace std;
int main()
{
    int tablica[] = {10,20,30,1,2};
    int rozmiarTablicy = sizeof(tablica)/sizeof(int);

    for (int i = 0; i < rozmiarTablicy; i++) {
        cout << tablica[i] << endl;
    }
    // cout << tablica[0] << endl; -> wartość: 10 
    // cout << tablica[1] << endl; -> wartość: 20 
    // cout << tablica[2] << endl; -> wartość: 30 
    // cout << tablica[3] << endl; -> wartość: 1 
    // cout << tablica[4] << endl; -> wartość: 2 
    cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_" << endl;
    for (int i = rozmiarTablicy - 1; i >= 0; i--) {
        cout << tablica[i] << endl;
    }


}
