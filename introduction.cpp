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
    There are many character sets and character set encoding in use.C++ provides a variety
    of character types that reflect that.

    The following is character types supported by the C++ language:

    -->char : This is a default character type for program text and is usually 8bit(1 byte) long.

    -->signed char: like char but this type of character is guranteed to hold a negative and positive value
    as well(range: -127 to +127) Why not -128 to +127 as one might expect...?,well C++ standard leaves open
    the possibility of one's complement hardware and that eliminate one value.

    -->unsigned char: like char type but this type cannot hold a negative value only positive(range: 0 to 256)

    -->wchar_t: This is implementation defined and used to hold large character sets of large character
    set unicodes.

    -->char16_t: holds a 16bit character set(UTF-16)

    --char32_t: Holds a 32 bit character set.

    Note:
    Each character has an integer value in the character set used by the implementation
    example:
    'b' = 98 in the ASCII character set.

    Also character types are integral types,this means we can perform arithmetic and
    bitwise operations on characters.

    what type of character to use....?
    ---------------------------------
    Well for the plain char the answer is unclear,it's implementation defined whether a 
    plain character is considered signed or unsigned.This behaviour can lead to nasty
    supprises and implementation depencies.

    example:
    what will be the result on i in this example ?
    char c = 255;
    int i = c;

    Unfortunatily the answer is unclear/undefined on a machine where char is signed the result is -1 
    while on the machine where char is unsigned it is 255. some compiler might gives a warning 
    on this type of conversion but C++ does not offer a general mechanism to detect this kind of problem.
    The solution is to avoid using plain char and use either signed or unsigned char,unfortunately some
    standard library  functions such as strcmp() takes plain chars only.

    Also you cannot mix pointers to different characters.

    example:

    char *pc;
    unsigned char *pus;
    pc = pus; //error: no pointer conversion

    same for all other characters.
    but the variables of all char types can freely be assigned to one another,though assign a 
    too large value to variable of signed char is still undefined.

    character literal:
    ------------------
    Is a single value character enclosed in a single quote such as 'a','A','C','0','1' etc.
    the type of character literal is plain char.
    

    Integers:
    --------
    Just like char integer types comes in three forms which are:

    -->Plain integer
    -->Signed integers and
    -->Unsigned integers

    Also integer types come in four sizes which are:

    -->short int
    -->plain int
    -->long int and
    -->long long int

    those sizes can be abbreviated as:

    -->short
    -->int
    -->long
    -->long long

    Unlike plain char plain integer types are signed by default,the size of integer types in memory
    is implementation dependent but it always a short to have value that is less than integer and
    integer values are considered to be small that long int which also must be small than long long int.

    Integer Literals:
    ----------------
    Integer literal can be on one of the following fortmat:

    -->Decimal(base 10)
    -->Octal(base 8,usually starts with 0 e.g 027) and
    -->Hexa decimal(base 16,usually starts with 0x)

    Folating point values:
    ---------------------
    Floating point values represent floating point numbers,Floating point value is an approximation
    of a real number in a fixed area of memory.

    Floating point types:
    --------------------
    There are three floating point types which are:

    -->float(single precision)
    -->double(double precision)
    -->long double(extended precision)


    void type:
    ---------
    void type are used to denote that a function (see  function in FUNCTIONS section) are not
    intended to return anything.It can also used as part of more complex type,their is no object 
    of type void(see OOP for more details on objects).
    

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

   // for(char c; cin>>c;) cout<<c<<" = "<<int{c}<<" Keyboard key"<<"\t";

   char c = U'h';//char32_t
   char a = u'A';//char16_t

   wchar_t t = L'w';

   cout<<c<<int{c}<<endl;
   cout<<a<<int{a}<<endl;
   cout<<t<<int{t}<<endl;

    return 0;
}