#include<iostream>

using namespace std;

class Employee{
    public:
      
   int number;
   string name;
   double Basic;
   double DA;
   double IT;
   double Net_s;
};

int main()
{
      Employee e1;

      e1.number = 36474747;
      e1.name = "Milan";
      e1.Basic = 85;
      e1.DA = 30;
      e1.IT =17;
      e1.Net_s = 2030;

     cout << "Employee Number = " << e1.number<<endl;
     cout << "Employee Name = " << e1.name<<endl;
     cout << "Employee Basic = " << e1.Basic<<endl;
    cout << "Employee DA = " << e1.DA<<endl;
    cout << "Employee IT = " << e1.IT<<endl;
    cout << "Employee NS = " << e1.Net_s<<endl;


    return 0;
}