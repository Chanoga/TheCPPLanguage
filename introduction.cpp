/*
    INTRODUCTION TO C++
    -------------------

    What is it...?
    --------------
    to that later

*/

/*
    Types:
    -----
    C++ language uses types to deferentiate among different types of data.
    for example for all non fractional numbers(decimal numbers),the language
    uses Integer,long integer,long long integer and short. For the floating point
    numbers(fractional numbers e.g 10.0,2898.4784) the language uses Double and Float,
    for all Characters such as 'a','A' the language uses Character types and for all text
    values the language uses String type.
    Each of this type corresponds to a certain of operations that can be conducted, for instance the Integer values can have the following operations:
    ->Addition(+)
    ->Subtraction(-)
    ->Multiplication(*)
    ->Division(/)
    ->Modulus(%)
    While Floating point values can have all the operations that Integer has except for the
    Modulus(%).When addition(+) is used with string(Text e.g "hello") it has a
    different meaning,we call this overloading(one operator has more than one meaning),
    it means add another string at the end of the given string. e.g s = "hello";s+"please"
    s will have the value "helloplease".String values do not support subtraction,division,
    multiplication nor modulus.The same applies to the characters.

    C++ Fundamental types:
    ----------------------------------
    C++ has a set of fundamental types corresponding to the most common basic
    storage units of a computer and the most common ways of using them to hold data.

    ->Boolean(bool)
    ->Integer (int)
    ->long integer(long or long int all the same)
    ->long long integer(long long or long long int)
    ->short integer(short int or just short)
    ->unsigned integer(unsigned int all numbers that are positive )
    ->unsigned long integer(unsigned long)
    ->unsigned long long integer( unsigned long long)
    ->unsigned short Integer(unsigned short)
    ->floating point (float)
    ->large floating point value (double)
    ->More larger floating point value(long double)
    ->character(char)
    ->text(string)
    ->wide character(wchar_t)
    ->void

    Note:
    ------
    All types are signed by default unless unsigned keyword is used,Signed means
    a type can hold both positive as well as negative values(numbers).
    
    From the fundamental types we can construct another types such as:

    ->Pointers (e.g int*,double*,float*,short*,char*) see getting along with pointer for
    more details on pointers.
    ->Arrays (e.g char[],int[],double[],float[],short[]) see getting along with arrays for
    more details on arrays.

    Integral,Arithmetic and User defined Types:
    ------------------------------------------
    Boolean types,integer types and character types are collectively called Integral types.
    when Integral types are combined with Floating point types collectively are called
    Arithmentic types.

    The user define types are:
    --------------------------
    ->Classes (see getting along with Object Oriented).
    ->Enumerations (see getting along with Enumerations).

    These types are called user defined because they must be defined by the user/programmer
    and they are not comming directly with the language.

    The Integral and floating-point types are provided in a variety of sizes to give the 
    programmer a choice of the amount of storage consumed.

    Note:
    --------
    Even though C++ offers such a wide range of types,for most applications we could use
    bool for logical values (see getting along with logics),char for character values,
    int for integer values and double for floating-point values.
    The remaining fundamental types are variations for optimizations,special needs and
    compatibility that are best ignored until such needs arise.

    Let's See each of the above fundamental types:
    ---------------------------------------------

    ->Boolean (bool):
    ----------------
    A boolean(bool) type can have one of the two values true(1) or false(0),
    a boolean is used to express the result o logical operations.

    Example:
    int number = 100;
    int n = 200;
    bool b = (number == n);
    if n and number are equal then the value hold by b will be true other wise false.
    By definition true has value of one(1) and false a value of zero(0) when converted to
    an integer,conversely integers can be implicitly converted to bool values. All nonzero integers converts to true and all zero integers converts to false.

    example:
    bool b2 = 100; here b2 becomes true
    bool b1 = 0; here b1 becomes false

    if you don't want to explicitly convert integer to boolean use {} initializer

    example: bool l{7}; error: narrowing conversion of '7' from 'int' to 'bool' [-Wnarrowing]

    A pointer also can be converted to boolean value,a non-null pointer converts to true
    while null pointer converts to false.

    Characters:
    -----------

    Type Identifier:
    ---------------
    In C++ every type needs a name inorder to be used in the C++ program,the process of
    giving a type a name is known as declaration,the name of the type is what known as identifier.
    Example:
    int number; here int is a type denoting Integer type and number is an identifier.Now Whenever C++ compiler sees the word number it knows that it is of type integer.

    Type Declaration:
    -----------------
    C++ programmer must know in advance what types his/her program is going to use and what operations are supported with that type.

    Example:
    int number;
    float f{100.4784};
    double d = 3983.4784;
    char c{'A'};
    char a = 'a';
    string s = "hello";
    string ss{"please"};

    from the above example, number is declared of type integer but it hasn't given any
    value so it's value is undefined, f is declared of type float and has initialized
    with value of 100.4784 so whenever you call f it will yield a value of 100.4784,d
    is declared of type double and initialized with a value of 3983.4784 and so on.C++ uses
    {} or assignment operator(=) to initialize a variable more on that on operator
    section later.
*/
#include<iostream>
#include<climits>
using namespace std;
int main(void){

    bool b{2};
    cout<<"Boolean: "<<b<<endl<<endl;
    return 0;
}