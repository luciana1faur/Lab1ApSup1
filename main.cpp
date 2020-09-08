#include <iostream>
using namespace std;
//Valoarea în km a unei lungimi date în mile. Lungimea în mile va fi citită de la tastatură. Relația de calcul este următoarea:
int main() {
  double Lmile;
  double Lkm;
  cout << "Lmile = "; cin >> Lmile;
  Lkm = Lmile * 1.609344;
  cout << "Lkm: " << Lkm << endl;
}

