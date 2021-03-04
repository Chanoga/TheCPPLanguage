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
    Modulus(%).When addition(+) is used with string(Text e.g "hello") it has a different meaning,we call this overloading(one operator has more than one meaning),it means add another string at the end of the given string. e.g s = "hello";s+"please" s will have the value "helloplease".String values do not support subtraction,division,multiplication nor modulus.The same applies to the characters.

    C++ Supports the following types:
    ----------------------------------
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
    ->character(char)
    ->text(string)
    ->wide character(wchar_t)

    The size of these types is machinde dependent,example integer on the 32bit machine may have size of 2byte and on the 64bit machine the size of 4byte.

    Type Identifier:
    ---------------
    In C++ every type needs a name inorder to be used in the C++ program,the process of giving a type a name is known as declaration,the name of the type is what known as identifier.
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