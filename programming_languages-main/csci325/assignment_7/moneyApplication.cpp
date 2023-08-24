#include "money.h"




int main()
  {
    Money money1(5,50);
    Money money2(3,25);
    Money money3;

    cout<<"Amount 1 is:"<<money1<<endl;
    cout<<"Amount 2 is:"<<money2<<endl;
    cout<<"Amount 3 is:"<<money3<<endl;
    money3=money1;
    cout<<"Amount 3 is now "<<money3<<endl;
    cout<<endl;



  return 0;}
