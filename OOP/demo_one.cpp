/**
 * The following program demonstrate how to create a class,
 * default constructor,destructor,private member variables,
 * public member functions and how to invoke them.
 * 
 * all members in this demonstratin are defined and implemented within
 * a class.
 */

#include<iostream>

using namespace std;

class Bank{

    public:
    Bank(){
        cout<<"This is a default constructor: "<<endl;
    }

    //member functions
    void set_account(string acc_name,string acc_type,string acc_number){
        this->acc_name = acc_name;
        this->acc_number = acc_number;
        this->acc_type = acc_type;
    }
    void check_balance()const{
        cout<<"This function only checks for the balance,but does not modify it"<<endl;
        cout<<"due to the \"const\" keyword\n\n Bank informations:"<<endl;
        cout<<"Account Name: "<<this->acc_name<<endl;
        cout<<"Account Number: "<<this->acc_number<<endl;
        cout<<"Account Type: "<<this->acc_type<<endl;
        cout<<"Balance: "<<this->balance<<endl<<endl;
    }

    double deposite(double balance){
        this->balance = balance;
        return this->balance;
    }

    double withdraw(double balance){

        if(this->balance < balance){
            cout<<"You don't have sufficient amount to withdraw"<<endl;
            return this->balance;
        }
        else{
            return (this->balance -= balance);
        }
    }

    //default constructor
    ~Bank(){
        
        cout<<"End of program execution,now clearing memory by destroying object of Bank"<<endl<<endl;
    }

    private:
    double balance{0.0};
    string acc_name{""},acc_type{""},acc_number{""};
};

//the main function
int main(void){

    //instance of the class
    Bank b{};//calling the defualt constructor

    //calling member functions using dot operator
    b.set_account("Chanoga","Savings","7382AG939");
    b.deposite(39494.8393);
    b.check_balance();
    b.withdraw(20000.00);
    b.check_balance();

    //pointer to the instance/class object
    Bank* bp{new Bank()};

    //calling member function using arrow operator
    bp->set_account("Joseph","Debt","7363388399389393");
    bp->deposite(20000.090);
    bp->withdraw(10000.090);
    bp->check_balance();

    return EXIT_SUCCESS;
}