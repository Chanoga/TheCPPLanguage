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
   This keyword is a pointer to the object of a class,it is 
   used to refer the object.

   example:

   class D{
       public D(string name){
           this->name = name; here name is the argument of the string as
           well as the variable of the class itself so if we were about to use
           name = name; the compiler will be confused,it will assume that we are
           assigning the value to the same argument variable,so this in this
           sense is like telling a compiler that we are using name defined in the 
           class or name which is a member variable of the class.
       }

       private:
       string name;
   }

   use this to access member variables or function of a class.


    Default constructor and Constructor Overloading.
    ------------------------------------------------
A default constructor is a constructor with no argument,if you don't provide this
constructor then the C++ compiler will gladly provide one for you.

example:

class A{

    public:
    A(){}//default constructor
};

Constructor Overloading
-------------------------
in C++,constructor overloading means to define more than one constructor
with different arguments.C++ allows a program to define as many constructor
as he/she wants provided that those constructors must have different arguments.

example:

class Dog{
    public:
    Dog(){
        this is a default constructor
    }

    constructor with only one argument
    Dog(string name){
        this->name = name;
    }

    constructor with more than one argument
    Dog(string name,int age): name(name),age(age){

    }


    private:
    string name;
    int age;
};

when creating an object of the class which has more than one constructor
overloaded,the C++ compiler will determine the type of constructor to call
depending on the value or argument given.For example from the above example

Dog d1{}; this will call/invoke the constructor with no argument/defualt constructor

Dog d2{"scooby"}; this will invoke the Dog constructor with one argument

Dog d3{"scooby",5}; will invoke the third constructor with three arguments

Note:

if you define the constructor with arguments,then you might not want to
define the default constructor as the constructor will be treated as defualt.Also
when you create a class with constructor that takes an argument then the compiler will
 not create a defualt constructor for you.

 example:

 class A{

     public:
     A(string name){
         //this will be treated as defualt constructor
     }
 };

 now:
 A a{};//error: not arguments provided
 A b{"scooby"};//ok one argument provided.


    Explicity keyword:
    -----------------
    comming soon

    Scope Resolution(::) Operator:
    -----------------------------
    The Scope resolution operator is used to access members of the class
    that are implemented outside the class definition and all the static members
    as well.This indicate that the function/method or variable belongs to the class.

    example:

    class D{
        public:
        D();
        void say_hi();

        private:
        string name;
    };

    the above class consists of the constructor D() and one member function say_hi(),
    both of this are defined but not implementd in the class.We ca implement these functions
    as follows:

    D::D(){
        //here :: is a scope resolution denoting that first D is a name of class
        and the second D is a name of construcor,so Second D defined and belongs to
        the first D.
    }

void D::say_hi(){
    //void is the function returning type,:: means this function is defined and
    belongs to the class whose name is D.
}

    Static Member functions:
    -----------------------
    All class member preceeded with static keywords are static members of the class.
    these members belongs to the class and not the object of the class.
    These means static members can be accessed with any object of the lass,but they 
    only belongs to the class,Static members are accessed by using scope resolution 
    operators but not dot nor this.

    example:
    class StaticDemo{

        public:
        StaticDemo(){

        }
        static void say_d(){
            static member function
        }

        private:
        static string name;//static member variable
    }
    
    to acess say_h:
    StaticDemo::say_hi(); no need to create an instance of StaticDemo;

    if you try:
    StaticDemo d{}; then d.say_hi(); it works as static members can be accessed
    by any class objects.The life cycle of any static member is depends on the life
    cycle of the program,they still exist as long as the program runs.

    Explicitly Calling Destructor:
    ------------------------------
    Sometimes you dont want the destructor for your class to be called implicitly,C++ offers
    a mechanism to handle this,and it can be done in one of the following methods:

    -->Using =delete

    -->using private

    Using =delete:
    --------------
    if you declare the destructor followed by =delete,then that destructor will not be
    called automatically,This means you will have to allocate memory for your object during
    object creation.

    Example:

    class A{

        public:
        A(){

        }
        void destroyer(){
            this-> ~A();//this function calls destructor,it is the one that is responsible for destroying object
        }

        destructor ~A will not be able to be invoked automatically
        ~A() = delete{

        }
    };

    void f(){
        A a; error: function "A::~A() noexcept" (declared at line 19) cannot be referenced -- it is a deleted functionC/C++(1776
        A *a{new A}; fine we have manually allocate memory for our object
        a->destroyer();//now we are releasing memory
    }

    Using Private:
    ------------
    From the Above example,instead of using =delete we can just declare the Destructor in the
    private section of the class and it will behave the same as it would have declared with delete.

    example:

    class A{
        public:
        A(){

        }
        void destroyer(){
            this -> ~A();
        }

        private:
        ~A(){

        }
    };

    void f(){
        A a; //same error
        A *a{new A}; //ok

        a->destroyer(); releasing memory
    }

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
    Dog s{};
    s.say();//fine accessing static member of a class using class object.


    return 0;
}