// Declearing the function Inside only

#include <iostream>
using namespace std;

class Employee{ // This is creating the class
    private: // This is creating the Private Class which cannot be accessed by external function
    int a, b , c;
    
    public://This is creating public class which can be accessed from any function.
    int d , e;
    
    void setData ( int a1, int b1, int c1); // This is Decleration 
    void getData(){ // We are defining the function here only
        cout << "The value of a is :- " << a << endl;
        cout << "The value of b is :- " << b << endl;
        cout << "The value of c is :- " << c << endl;
        cout << "The value of d is :- " << d << endl;
        cout << "The value of e is :- " << e << endl;
    }
};


void Employee :: setData(int a1, int b1,int c1) //Defining the function setData()
{
    a = a1;
    b = b1;
    c = c1;
}

int main (){
    Employee Pankaj;
    Pankaj.d=60; // We are accesing the data from the public class using getData () funcn.
    Pankaj.e=50;
    
    Pankaj.setData(60,90,100);
    Pankaj.getData();
    return 0;
}















// Declaring the function outside :-

#include <iostream>
using namespace std;

class Employee {
private:
    int a, b, c;

public:
    int d, e;

    void setData(int a1, int b1, int c1);
    void getData();
};

void Employee::setData(int a1, int b1, int c1) {
    a = a1;
    b = b1;
    c = c1;
}

void Employee::getData() {
    cout << "The value of a is :- " << a << endl;
    cout << "The value of b is :- " << b << endl;
    cout << "The value of c is :- " << c << endl;
    cout << "The value of d is :- " << d << endl;
    cout << "The value of e is :- " << e << endl;
}

int main() {
    Employee Pankaj;
    Pankaj.d = 60;
    Pankaj.e = 50;

    Pankaj.setData(60, 90, 100);
    Pankaj.getData();

    return 0;
}






