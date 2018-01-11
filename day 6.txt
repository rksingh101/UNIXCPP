1.Protected Inheritance Example Code






#include <iostream>

using namespace std;

class GrandParent{
public:
  void grandParentMethod( void ){ cout<<"Method in the grand parent class"<<endl; }
};

class Parent : protected GrandParent{
public:
  void parentMethod( void ){ cout<<"Method in the parent class"<<endl; }
};

class Child: protected Parent{
public:
  void 
  childMethod( void ){
    cout<<"Method in the child class"<<endl;
    parentMethod();
    grandParentMethod();
  }
};

int 
main( void ){

  Child C;
  C.childMethod();
  return 0;

}





2.Inline function



#include <iostream>
 
using namespace std;

inline int Maximum(int a, int b) {
   return (a > b)? a : b;
}

// Main function for the program
int main() {
   cout << "Maximum (20,10): " << Maximum(20,10) << endl;
   cout << "Maximum (0,200): " << Maximum(0,200) << endl;
   cout << "Maximum (100,1010): " << Maximum(100,1010) << endl;
   
   return 0;
}




3.Friend function



#include<iostream>
using namespace std;

class value {
    int val100, val200;
public:

    void get() {
        cout << "Enter two values:";
        cin >> val100>>val200;
    }
    friend float mean(value ob);
};

float mean(value ob) {
    return float(ob.val100 + ob.val200) / 2;
}

int main() {
    
    value obj;
    obj.get();
    cout << "\n Mean value is : " << mean(obj);
    return 0;
}




4.Single Inheritance


#include <iostream>
using namespace std;
 

class Vehicle {
  public:
    Vehicle()
    {
      cout << "This is a Vehicle" << endl;
    }
};
 

class Car: public Vehicle{
 
};
 
   int main()
{   
    
    Car obj;
    return 0;
}






5.Multiple Inheritance




#include <iostream>
using namespace std;
 

class Vehicle {
  public:
    Vehicle()
    {
      cout << "This is a Vehicle" << endl;
    }
};
 

class FourWheeler {
  public:
    FourWheeler()
    {
      cout << "This is a 4 wheeler Vehicle" << endl;
    }
};
 

class Car: public Vehicle, public FourWheeler {
 
};
 

int main()
{   
    
    Car obj;
    return 0;
}






6.Multilevel Inheritance




#include <iostream>
using namespace std;

class Vehicle 
{
  public:
    Vehicle()
    {
      cout << "This is a Vehicle" << endl;
    }
};
class fourWheeler: public Vehicle
{  public:
    fourWheeler()
    {
      cout<<"Objects with 4 wheels are vehicles"<<endl;
    }
};
class Car: public fourWheeler{
   public:
     car()
     {
       cout<<"Car has 4 Wheels"<<endl;
     }
};
 

int main()
{   
   
    Car obj;
    return 0;
}





7.Hierarchical Inheritance



#include <iostream>
using namespace std;
 

class Vehicle 
{
  public:
    Vehicle()
    {
      cout << "This is a Vehicle" << endl;
    }
};
 
 

class Car: public Vehicle
{
 
};
 

class Bus: public Vehicle
{
     
};

int main()
{   
    
    Car obj1;
    Bus obj2;
    return 0;
}



8.Hybrid Inheritance




#include <iostream>
using namespace std;
 
 
class Vehicle 
{
  public:
    Vehicle()
    {
      cout << "This is a Vehicle" << endl;
    }
};
 

class Fare
{
    public:
    Fare()
    {
        cout<<"Fare of Vehicle\n";
    }
};
 

class Car: public Vehicle
{
 
};
 

class Bus: public Vehicle, public Fare
{
     
};
 

int main()
{   
   
    Bus obj2;
    return 0;
}