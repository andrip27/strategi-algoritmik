#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    int s;
    int v;
    double srad;
    double jarak;

    cin >> s;
    cin >> v;
    srad = s * (3.14 / 180);
    jarak = v * v * sin(2 * srad);
    cout << jarak << endl;
    return 0;
}
