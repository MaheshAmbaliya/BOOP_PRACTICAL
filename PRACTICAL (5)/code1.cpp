#include<iostream>
using namespace std;

struct College_info{
    
    string college_name;
    int college_code;
    string department;
    int intake;
};

int main()
{
    College_info c1;
    
    c1.college_name = "Government Polytechnic Junagadh";
    c1.college_code = 619;
    c1.department = "Computer";
    c1.intake = 67;
   
    cout<< "college name :" << c1.college_name <<endl;
    cout<< "college code :" << c1.college_code <<endl;
    cout<< "department :" << c1.department << endl;
    cout<< "intake :" << c1.intake << endl;
   
    return 0;
}