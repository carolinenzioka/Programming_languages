#include "money.h"

//-------------------------constructors-------------------------------------//
Money :: Money(double d,double c)//parameter constructors
:dollars(d),cents(c)//intializes dollars and cents
{
  if(cents>=100)
    {
      cents%=100;
      dollars +=1;
    }

}

Money:: Money(double d)//parameter constructor
:dollars(d)//onitializes dollars
{

}

Money:: Money()// default constructor
:dollars(0), cents(0)// intializes dollars and cents to 0
{

}

Money :: ~Money()//Destructor
{

}
//----------member operators--------------------------------//

// Assignment operator
Money& Money  :: operator=(const Money& right)
{
    if (*this != right)
    {
        dollars = right.dollars;
        cents = right.cents;
    }
    return *this;
}

// Compound Assignment operator(+=)
Money& Money :: operator+=(const Money& right)
{
  if((right/1)>0)
  {
    dollars=(right/1)+dollars;
    cents=(right%1)+cents;
  }
  else if((right/1)<0)
  {
    cents=(right%1)+cents;
  }

    return *this;
}


// Compound Assignment operator(-=)
Money& Money :: operator-=(const Money& right)
{
  if((right/1)>0)
  {
    dollars=(right/1)-dollars;
    cents=(right%1)-cents;
  }
  else if((right/1)<0)
  {
    cents=(right%1)-cents;
  }

    return *this;
}

// Compound Assignment operator(*=)
Money& Money :: operator*= (const Money& right)
  {
    dollars=dollars*right.dollars;
    cents=cents* right.dollars;

    if(cents>=100)
      {
        cents -=100;
        dollars+=1;
      }
      return *this;

  }

  // Compound Assignment operator (/=)
Money& Money :: operator/= (const Money& right)
  {
    dollars= dollars/right.dollars;
    cents= cents/right.dollars;
    if(cents>=100)
      {
        cents-=100;
        dollars-=1;
      }
    return *this;
  }
// Addition operator (friend)
const Money operator+(const Money& left, const Money&right)
  {
    int newd,newc;
     newd= left.dollars + right.dollars;
     newc=left.dollars + right.dollars;
     Money result (newd, newc);
     return result;

  }
// Subtraction operator (friend)
  const Money operator-(const Money& left, const Money&right)
    {
      int newd,newc;
       newd= left.dollars - right.dollars;
       newc=left.dollars - right.dollars;
       Money result (newd, newc);
       return result;

    }

// Multiplication operator (friend)
    const Money operator*(const Money& left, const Money&right)
      {
          double newd,newc;
           newd= left.dollars*right.dollars;
           newc=left.dollars*right.dollars;
           Money result (newd, newc);
           return result;

        }

// Division operator (friend)
      const Money operator/(const Money& left, const Money&right)
        {
          double newd,newc;
          newd= left.dollars/right.dollars;
          newc=left.dollars/right.dollars;
          Money result (newd, newc);
          return result;

        }
  ostream& operator<<(ostream& left, const Money &right)
    {
      left<<"$"<<right.dollars<<"."<<right.cents;
      return left;

    }
