//Connor Barber
#include <iostream>
#ifndef MY_INT
#define MY_INT

class my_int
{
public:
    //*********************************************************
    // Function: my_int
    // Purpose:  Constructor initializes the val to x
    // Params:   x - the value for the val
    // Calls:    none
    // Uses:     none
    //*********************************************************
    my_int(int x);

    //*********************************************************
    // Function: my_int       
    // Purpose:  Constructor initializes the val to 0      
    // Params:   none      
    // Calls:    none                                    
    // Uses:     none           
    //*********************************************************
    my_int();

    //*********************************************************
    // Function: set
    // Purpose:  Sets the val to x
    // Params:   x - the new value for the val
    // Calls:    none
    // Uses:     none
    //*********************************************************
    void set(int x);

    //*********************************************************************
    // Function: input
    // Purpose:  reads and stores a value from inp. if inp is a input 
    //           stream, then inp is already connected to a file.User enters 
    //           a value and ask the user to re-enter the data if the
    //           user enters an incorrect value.
    // Params:   inp -- the input stream
    // Calls:    none
    // Uses:     istream
    //*********************************************************************
    void input(istream& inp);

    //*********************************************************************
    // Function: output
    // Purpose:  display the val on fout. if fout is a  output stream
    //           then fout is already  connected to a file
    // Params:   fout -- the output stream
    // Calls:    none
    // Uses:     ostream
    //*********************************************************************
    void output(ostream& fout) const;

    //*********************************************************
    // Function: get_int
    // Purpose:  returns the val
    // Params:   none
    // Calls:    none
    // Uses:     none
    //*********************************************************
    int get_int() const;

    //*********************************************************
    // Function: operator 
    // Purpose:  check to make sure overload is working properly 
    // Params:   constants: valu1 and valu2
    // Calls:    none
    // Uses:     none
    //*********************************************************
    friend bool operator > (const my_int& valu1, const my_int& valu2);

    //*********************************************************
// Function: is_prime
// Purpose:  object num contains a valid positive value
//           returns true if num is prime; otherwise
//           returns false
// Params:   num  - the value to be checked for prime
// Calls:    sqrt
// Uses:     cmath 
//*********************************************************
    bool is_prime(const my_int& num); //

private:
    int val;  // Variable to hold value for class
};
#endif // !my_int

