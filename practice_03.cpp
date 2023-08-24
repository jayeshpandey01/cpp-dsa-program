// variable ==> contener used to store a data (ex. hamra ghar me aalga aalga container hota hai jisme ham kuch store karta hai like sugar, wheat, rice, etc.)
// named that storage contain some value(value can be varied that why its know as a variable)
// variable has a unique 

// int apple = 5; here int are type of data is stored in variable
// rules for naming variable in c++
// * variable names should not begin with a number.
// * whitespace are not permitted in variable names.(apple day)
// * A c++ keyward(reserved word) cannot be used as a variable name.
// * while creating variables, it's prefereable to give them meaningful

// identifier ==> name given to a package, method, variables
// rule 1 - all identifiers should begin with a letter (A to Z or a to z), $ and _ and must be unique.
// rule 2 - After the first character letter, identifiers can have any combination of characters.
// rule 3 - The identifiers are case sensitive (apple or Apple they both are different)
// rule 4 - A keyward cannot be used as a identifier.
// rule 5 - whitespaces are not permitted.

// Basic memory unit 
// 1. Bit ==> most basic/ smallest unit of data that a computer can store or process(ex. 00110101; 0 = off(passice state), 1 = on(actice state))
// 2. 1Byte = 8 bits
// 3. 1kiloByte = 1024 Bytes
// 4. 1MegaByte = 1024 KB
// 5. 1GegaBYtes = 1024 MB

// Data type ==> 1. what types of data stored, 2. how much memory will be used, 3. range if value in variables

// primary(bulit in data type)      Derived (derive from primary)      user defined(define by users)
// Integer                                   Function                           Class
// Character                                  Array                           Structure
// Boolean                                   pointer                            union
// Floating point                           Reference     
// Double FLoating point
// void
// wide character

// data type     size            value                      primitive/reference
// boolean       1 bit        true or false                    primitive
// byte          1 bytes      -128 to 128                      primitive 
// short         2 bytes      -32768 to 32768                  primitive
// int           4 bytes  -2 billions to 2 billions            primitive 
// long          8 bytes  -9 quintillion to 9 quintillion      primitive
// float         4 bytes  fractional number up to 6-7 digit    primitive
// double        8 bytes  fraction number upto 15 digits     primitive
// string        varies   a sequance of the character        reference

// int ==> integer (ex. 2,3,-1,-400), 4 bytes = 4*8 = 32 bits,(Range = -2^32 to 2^31 - 1)
//  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _  
// | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | box that content the binary number (0,1) equation are +ve or -ve deside by the first block binary number(0 --> +ve, 1 --> -ve)

// char ==> Charcter (ex.'a', '$', '*'), 1bytes = 1*8 = 8 bits(Range = -2^8 to 2^7 - 1)

// bool ==> boolean (ex. true or false), 1bytes = 1*8 = 8 bits(Range = -2^8 to 2^7 - 1)

// float ==> Decimal (ex. 3.14, 6.08, etc) 7 decimal places, 4 bytes = 4*8 = 32 bits,(Range = -2^32 to 2^31 - 1)

// Double ==> Decimal (ex. 3.1485697856, 2.468946546849) 15 decimal places, 8 bytes = 8*8 = 64 bits (Range -2^64 to 2^63 - 1)

// string ==> 

#include <iostream>
using namespace std;
int main() {
    // int datatype
    int x = 10;
    // float datatype
    float y = 20.665;
    // double dtatype
    double sum = x+ y;
    cout << sum <<endl;
    cout << "size of sum is: " <<sizeof(sum)<<endl;
    cout << "size of sum is: " <<sizeof(y)<<endl;
    
    // char data type 
    char charcter = 'j';
    cout<<charcter<<endl;
    cout << "size of sum is: " <<sizeof(charcter)<<endl;

    // bool datatype
    bool booleanData = true;
    cout << booleanData <<endl;
    cout << "size of sum is: " <<sizeof(booleanData)<<endl;

    string name = "hello jayesh";
    cout << name <<endl;
    cout << "size of sum is: " <<sizeof(name)<<endl;

}
