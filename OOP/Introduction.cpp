/*
    OBJECT ORIENTED PROGRAMMING IN C++
    ----------------------------------

    Object:
    ------
    The term object refers to the things that have state and behaviour,things that we can touch
    see things such as House,Vehicles,Trains,Dog,Cow,Human ect. In the Software world we can have
    the same model of objects using our own defined data and C++ gives us the right tool for this.

    In C++ we can model our own object by using the class or struct keyword.
    
    Class:
    ------
    Class is a blue print of an object,think of it as a map which shows how an object should
    be and behave.Class consists of a member functions which define the behaviour of the class
    and member variables/fields which define the properties of the class.

    Syntax of a class:

    class class_name{
        public:
        member functions

        private:
        member variables
    };

    In C++ you can also use another name for a class which is struct.

    example:

    struct class_name{
        public:
        member functions

        private:
        member variables;
    };

    the only deferent between struct and class is that in struct all members are public by default,
    while in class all members are private on default (more on private and public soon).

    All C++ objects are constructed from a class by the special function called constructor,
    this function must have the same name with it's class.

    example:

    class Dog{

        public:

        //constructor
        Dog(){
            
        }//end of constructor
    }

    Once the object is created it is stored on the heap memory for the rest of the program,so it
    holds up memory. Iam pretty sure that you want the object to be destroyed once the program
    terminates so that it release all the memory it held right...?. C++ introduces another term
    for object destroyer called Destructor,the destructor also must have the same name with the class
    but it must start with the tild(~).

    Example:

    class Dog{

        public:

        //constructor
        Dog(){

        }

        //destructor
        ~Dog(){

        }
    };

    Note:
    The body of the class must end with semicolon(;).

    Private,Public and Protected:
    -----------------------------
    In C++ if member of a class is declared int he private section of the class,then that
    member is inaccessible outside the class,the scope of the member is withing the class,
    if member is declared in the public section of the class then that member is accessible
    outside the class,the scope of the member is beyond the class. protected members behave as
    private. The defferent between private and protected is on the Inheritance(see inheritance).

    Accessing class Members:
    -----------------------
    C++ provides two ways to access a class member.

    -->By using Arrow operator(->)
    -->By using dot operator(.)

    Using Arrow(->) Operator:
    --------------------
    The arrow operator is used to access class members only when the class object
    is a pointer to the class.

    example:

    class Cat{
        public:

        void say_mew(){
            cout<<"Mew"<<endl<<endl;
        }
    };

    to access say_mew function of the class,first create a pointer to the class object.
    Cat *p_cat; //a pointer to cat object

    now:
    p_cat->say_mew(); //accessing say_mew() member function.

    Using Dot(.) Operator:
    ---------------------
    if you don't define a pointer to the class,then use the dot operator
    to access the class members.

    example:

    from the Cat class above if we want to access say_mew() member function using dot operator
    we first create an object of the class as follow.

    Cat cat{};

    Now:

    cat.say_mew();//accessing say_mew() member function

    Constructor and Arguments:
    -------------------------
    Just like any other function in C++,a constructor can have an arguments,these arguments
    can be default or non default arguments.

    example:
    ------
    class Person{

        public:
        //constructor with non default arguments
        Person(string name,unsigned int age){

        }
    };

    class Person{

        public:
        constructor with default arguments
        Person(string name="Chanoga",unsigned int age=27)
    };

    How to initialize member variables with Constructor:
    ---------------------------------------------------
    In C++ you can either initialize the member variables in the body of constructor
    or in the head of  constructor.

    example:
    initilize member variables within body of constructor
    class Person{

        public:
        Person(string n,unsigned int ag){
            name = n;
            age = ag;
        }

        private:
        string name;
        unsigned int age;
    };

    initilize member variables on the constructor head

    class Person{
        public:
        Person(string n,unsigned int ag) : name(n),age(ag){

        }
    };

    Using this Keyword:
    ------------------
   comming soon

    Default constructor and Constructor Overloading.
    ------------------------------------------------
    comming soon

    Explicity keyword:
    -----------------
    comming soon

    Scope Resolution(::) Operator:
    comming soon.

    Static Member functions:
    -----------------------
    comming soon
    
    Constant Objects:
    -----------------
    comming soon

    DemoOne:
    the demo one in the code below shows how to declare a class,constructor,destructor and member
    functions,what private,public and protected means in C++.
*/

#include<iostream>
using namespace std;

//DemoOne
class Dog{
    //public members
    public:
    //constructor
    Dog(){
        cout<<"This is a class constructor,i Create an object"<<endl<<endl;
    }//end of constructor

    //member functions
    void say_hello(){
        cout<<"Hello there..."<<endl<<endl;
    }

    void print_number(int number){
        cout<<"Number is "<<number<<endl<<endl;
    }

    static void say(){
        cout<<"Said"<<endl<<endl;
    }

    //destructor:
    ~Dog(){

        cout<<"Iam Destructor,my only job is to kill objects: "<<endl<<endl;
    }//end of destructor body

    //private members
    private:
    string s{"This is a string in private property"};

    protected:
    string ps{"This is a string from the Protected property..."};

};//end of class

//main function
int main(void){

    //create an object of class(class instantiation)
    Dog scooby;//valid way of creating object of class
    Dog snoopy{};//valid way of creating class object

    //accessing Dog class members.
    scooby.say_hello();
    scooby.print_number(100);

    //scooby.s; error, s is private cannot be accessed from here
    //scooby.ps; error, ps is private cannot be accessed from here
    Dog::say();

    return 0;
}