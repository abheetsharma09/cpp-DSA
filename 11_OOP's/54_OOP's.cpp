#include <iostream>
#include <vector>
#include <string>
using namespace std;
// DEFENITIONS//
/*
>> objects - objects are entities in real world
>> class - class is like a blueprint of these entities
>> method - functions that we create in the class
*/
class Teacher
{
private:
    float salary;

public:
    string name;
    string fatherName;
    string subject;

    float salaryPerAnnum(float income)
    {
        salary = income * 12;
        return salary;
    }
};

///////ACESS MODIFIERS/////
/*
>> private - data & methods accessible inside class //all the varibales and function declared
under private: keyword is inaccesable outside.
>> public - data & methods accesible to everyone // declared as public:
>> protected - data & methods accesible inside class & to its derived class
*/

/// PILLARS OF OOPs ///
/*
>> Encapsulation - wrapping up of data & memeber functions in a single unit called class.
>> Abstraction -
>> Inheritance -
>> Polymorphism -
*/

// Constructor Example
class BankAcc
{
private:
    string username;
    double password;

public:
    string name;
    string ifsc;
    bool isOpen;
    // DESTRUCTOR
    ~BankAcc()
    {
        cout << "";
    }
    // CONSTUCTOR
    BankAcc(string name, string ifsc, bool isOpen)
    { // this is a constructor function executes when class get called.
        /*
        ///// Types of Connstructor
        >> non-parameterize constructor
        >> parameterize constructor
        >> copy
        */
        this->name = name;
        this->ifsc = ifsc;
        this->isOpen = isOpen;
        /// Object value to constructor parameter
    }

    // COPY CONSTRUCTOR - A Special Constructor used to copy the Value of 1 object to other5
};

// int main(){
//     new int[5]; //now this int is going to be saved in a heap and that is called as DYNAMIC MEMORY ALLOCATION
//     Teacher Abheet;
//     cout << Abheet.salaryPerAnnum(1200) << endl;
//     //COPY CONSTRUCTOR - A Special Constructor used to copy the Value of 1 object to other5
//     BankAcc guhkesh("Abheet" ,"289iiwebf", true);
//     BankAcc guhkeshWife(guhkesh);
//     cout << guhkeshWife.ifsc << endl;
//     return 0;
// }

////// SHALLOW & DEEP COPY
// SHALLOW - copy of an object copies all of the meber values from one object to another.
// DEEP - copy, on the other hand, only copies the meber values but also makes copies any dynamically allocated memeory that the meber points to.

// DESTRUCTOR - called when the function ends that is declaring the object. It doesnot needs to be called it works fine even without calling.

///////////////////////////Inheritence - 1st Pillar of OOPs[code reusability]///////////////////////
class Inherit{
public:
    string Name;
    string Company;
    string dVal;
    Inherit(
        string Name,
        string Company,
        string dVal
        ){
        cout << "Hello..I am a Constructor of Parent Class" << endl;
    }
    ~Inherit(){
        cout << "This is a Deconstructor of Parent Class" << endl;
    }
};

class Employe : public Inherit{
public:
    Employe(
        string Name,
        string Company,
        string dVal
        ) : Inherit(Name, Company , dVal){
            this->Name = Name;
            this->Company = Company;
            this->dVal = dVal;
        cout << "This is the Constructor of Child Class" << endl;
    }
    ~Employe(){
        cout << "This is a Deconstructor of Child Class" << endl;
    }
    void getInfo(){
        cout << "Name:" << Name << endl;
        cout << "Company:" << Company << endl;
        cout << "dVal:" << dVal << endl;
    }
};

///////// Polymorphism //////////
/*
Definitions : It is the ability of objects to take an different forms or behave in different ways
depending on contest in which they are used.
Types of Polymorphism : Compile Time Polymorphism | Run time Polymorphism
Note : In the Polymorphism Concepts, Lets say we descibe two constructor with same name one with the parameter 
and one without then when we call it with parameter it calls the parameter one..This is called 
Constructor Overload.
Note : Constructor Overloading is the exmaple of the Complie Time Polymorphism.

A>>> Compile Time Polymorphism
Example 1 : Constructor Overloading[same name different param]
Example 2 : Function Overloading[same name different param]

B>>> Run Time Polymorphism
Example 1: Function Overridingdepends on inheritence - Parent and Child both contains the same 
function with different implementation.
Note : The parent class function is said to be overridden.
*/

////// Virtual Function //////
/*
A Virtual Function is a member function that you expect to be redefined in the derived class.
Properties : 
1>>> V.F are dynamic in nature.
2>>> Defined by the keyword "virtual" inside a base class and are always declared with the base class and overridden in child class.
3>>> A V.F is called during Runtime.
*/

////// Abstraction ///////
/*
Defenition : Hiding all unnecessary details or protected & showing only the important parts.
Ways : Acess Modifiers like private, public and protected. & Abstraction Classes.
*/

class Shape{
    virtual void draw() = 0;//pure virtual function
};

class Circle : public Shape{
public:
    void draw(){
        cout << "Drwing a Circle\n";
    }
};

////// Static Keyword ///////
/*
Static Variables : Variable declared as static in a function are created and initialized once for
 the lifetime of the program.// IN FUNCTION

Static Variables : Variables in a Class are created & initialized once. They are shared by all 
the objects of the class. // IN CLASS
*/


int main(){
    Employe doctor("Abheet" , "Private" , "syfb132");
    doctor.getInfo();
    return 0;
}