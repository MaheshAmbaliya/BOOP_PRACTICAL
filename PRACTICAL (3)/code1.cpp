#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double km;

    cout << "Enter distance in kilometers: ";
    cin >> km;

    double m_To_km = 1000.0;
    double cm_To_m = 100.0;
    double inch_To_m = 39.3701;
    double ft_To_m = 3.28084;
   

    double m = km * m_To_km;
    double cm = m * cm_To_m;
    double inch = m * inch_To_m;
    double ft = m * ft_To_m;

    cout << fixed;

    cout << setw(15) << "Kilometers:" << setw(15) << setprecision(2) << km << endl;
    cout << setw(15) << "Meters:" << setw(15) << setprecision(2) << m << endl;
    cout << setw(15) << "Centimeters:" << setw(15) << setprecision(2) << cm << endl;
    cout << setw(15) << "Inches:" << setw(15) << setprecision(2) << inch << endl;
    cout << setw(15) << "Feet:" << setw(15) << setprecision(2) << ft << endl;

    return 0;
}
