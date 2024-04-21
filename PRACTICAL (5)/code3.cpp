#include<iostream>
using namespace std;

class Converter {
public:

double cm;
double m;
double km;
double ft;
double inch;

double cm_m(){
     return cm * 0.01; 
}
double cm_km(){
     return cm * 0.00001;
}
double cm_ft(){
     return cm * 0.0328;
}
double cm_inch(){
     return cm * 0.3937;
}
};
int main()
{ 
    Converter c1;
    double m,km,ft,inch;
    cout << "Enter Value in centimetre: " << endl;
    cin >> c1.cm;
    
    m = c1.cm_m();
    km = c1.cm_km();
    ft = c1.cm_ft();
    inch = c1.cm_inch();
    
    cout << "CM to Meter is: " << m << endl;
    cout << "CM to Kilometre is: " << km << endl;
    cout << "CM to Feet is: " << ft << endl;
    cout << "CM to Inches is: " << inch << endl;
    
    return 0;
}