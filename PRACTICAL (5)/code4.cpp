#include<iostream>
using namespace std;

class Item{
private:
      double quantity;
      double cost;
      
      public:
      
      void put_data(){
      cout << "Item quantity is: " << quantity << endl;
      cout << "Item cost is: " << cost << endl;
      }
     void get_data(double q, double c);
  };
      void Item::get_data(double q, double c){
         quantity = q;
         cost = c;
      }   
      int main(){
 
      Item i1;
      i1.get_data(100,25.4);
      i1.put_data();
   
    return 0;
}