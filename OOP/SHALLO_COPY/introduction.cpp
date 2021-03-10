/*
    SHALLO COPY:
    -----------
    C++ allow a programmer to copy one object to another object provided that
  the object are of the same type.Shallow copy is a mechanism that define a 
  member wise copy,meaning it copies each member of object into another object.
  The two copied object will have the same value and they will also refers to the
  same storage of their value,this means deleting one of the object will cuase the
  other object to have invalid data or program crush.
  
  example:
  
  class A{
  public:

  A(string n,int x) : name(n),age(x){

  }

  ~A(){

  }

  private:
  string name;
  int age;

};

void f(){

    A a{"crouch",10};
    A x{a}; //member wise copy
    A c = a; member wise copy
}

 How to Implement SHALLOW COPY:
 -----------------------------
 C++ provides two methods:

 -->Copy constructor: X(const X&) where X is a class

 -->Copy Assignment: X& operator = (const X&) little bit complicated coverred soon.

 Note:

 if you don't implement your own copy constructor the C++ compiler will
 create one for you.

 The reason you may want to implement a copy constructor is when you want to
 pass the Class object as an argument into a function.

 DemoOne bellow illustrate how to create a copy constructor 
 */
#include<iostream>

using namespace std;

//DemoOne

class CopyDemo{

    public:
    CopyDemo(string s,int n) : name{s}, number{n} {
        cout<<"I'am a  constructor:"<<endl<<endl;
    }

    void print_name()const{
        cout<<"Name: "<<this->name<<endl<<endl;
    }

    void print_number()const{
        cout<<"Number: "<<this->number<<endl<<endl;
    }

    void change_name(string new_name){
        this->name = new_name;
    }

    void change_number(int n){
        this->number = n;
    }

    void destroy(CopyDemo* c){
        this -> ~CopyDemo();
        delete c;
    }

    //our Shallow Copy constructor
    CopyDemo(const CopyDemo& ob) : name(ob.name),number(ob.number){
        cout<<"Shallow copy constructor called: "<<endl<<endl;
    }

     private:

    ~CopyDemo(){
        cout<<"End of Execution bye bye:"<<endl<<endl;
    }
   
    string name{};
    int number{0};
};

//this function takes a copy of CopyDemo as an argument
void make_copy(CopyDemo *source){

    cout<<"From make_copy: "<<endl<<endl;
    source->print_name();
    source->print_number();

    //changing the value of copied object,will it affect the actual object..?
    source->change_name("Panda");
    source->change_number(300);
}
int main(void){

    CopyDemo *d{new CopyDemo{"Scooby",100}};

    d->print_name();
    d->print_number();
   // d->destroy(d); calling this here will cause the program to crush as it deletes the object
   //to be copied from the heap memory
   //till now copy constructor will not be called since no copy operation has performed

    //now let's make a copy
    make_copy(d);//now the copy constructor will be called at this point to provide the service

    //try to see if d name and number has changed
    cout<<"After some changes in make_copy: "<<endl<<endl;
    d->print_name();
    d->print_number();

    d->destroy(d);//fine everything destroyed

    //d->print_name();//error d has destroyed
    return 0;
}