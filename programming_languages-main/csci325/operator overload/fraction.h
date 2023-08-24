/***************************************************************
 * The interface file for the Fraction file 			 		 *
 ***************************************************************/
#ifndef Fraction_H
#define Fraction_H
#include <iostream>
#include <cassert>
#include <iomanip>
#include <cmath>
using namespace std;

// Fraction class definition
class Fraction
{
    private:
        int numer;
        int denom;
        int gcd (int n, int m = 1); // Helper function
        void normalize (); // Helper function
    public:
        Fraction (int numer, int denom); // Parameter constructor
        Fraction (double value); // Parameter constructor
        Fraction (); // Default constructor
        Fraction (const Fraction& fract); // Copy constructor
        ~Fraction (); // Destructor
        // Member operators
        operator double (); // Conversion
        const Fraction operator+( ) const; // Unary plus
        const Fraction operator-( ) const; // Unary minus
        Fraction& operator++ ( ); // Prefix increment
        Fraction& operator-- ( ); // Prefix decrement
        const Fraction operator++ (int); // Postfix increment
        const Fraction operator-- (int); // Postfix decrement
        Fraction& operator= (const Fraction& right); // Assign
        Fraction& operator+= (const Fraction& right); // Compound Assign
        Fraction& operator-= (const Fraction& right); // Compound Assign
        Fraction& operator*= (const Fraction& right); // Compound Assign
        Fraction& operator/= (const Fraction& right); // Compound Assign
        // Friend arithmetic operators
        friend const Fraction operator+
        (const Fraction& left, const Fraction& right); //Addition
        friend const Fraction operator-
        (const Fraction& left, const Fraction& right); //Subtraction
        friend const Fraction operator*
        (const Fraction& left, const Fraction& right); //Multiplication
        friend const Fraction operator/
        (const Fraction& left, const Fraction& right); //Divsion
        // Friend relational operators
        friend bool operator==
        (const Fraction& left, const Fraction& right);
        friend bool operator!=
        (const Fraction& left, const Fraction& right);
        friend bool operator<
        (const Fraction& left, const Fraction& right);
        friend bool operator<=
        (const Fraction& left, const Fraction& right);
        friend bool operator>
        (const Fraction& left, const Fraction& right);
        friend bool operator>=
        (const Fraction& left, const Fraction& right);
        // Insertion and extraction operators
        friend istream& operator >> (istream& left, Fraction& right) ;
        friend ostream& operator << (ostream& left, const Fraction& right) ;
};

#endif
