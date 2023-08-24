#include<iostream>
#include <chrono>
using namespace std;
using namespace chrono;


int heap()
{
int *arr = new int[10];
for (int i=0;i<10;i++)
  {
    arr[i]=rand()%100;
  }
}


int stack(int size)
{

  int arr[size];
  for (int i=0;i<size;i++)
    {
      arr[i]=rand()%100;
    }
    /* code */
  }


int stat()
{
    int array2[10]={0,1,2,3,4,5,6,7,8,9};
}




int main()
{
  int size;
  cout<<"what is the size of the array?";
  cin>>size;


auto start1=high_resolution_clock::now();

for(int i;i<100000000;i++)
{
  stack(size);
}
auto stop1 = high_resolution_clock::now();
auto duration1= duration_cast<microseconds>(stop1-start1);
cout<<"time for stack took:"<< duration1.count()<<" microseconds."<<endl;


auto start2 =high_resolution_clock::now();

for(int i;i<100000000;i++)
{
  stat();
}
auto stop2 = high_resolution_clock::now();
auto duration2= duration_cast<microseconds>(stop2-start2);
cout<<"time for stat took:"<< duration2.count()<<" microseconds."<<endl;


auto start3=high_resolution_clock::now();

for(int i;i<100000000;i++)
{
  heap();
}
auto stop3 = high_resolution_clock::now();
auto duration3= duration_cast<microseconds>(stop3-start3);
cout<<"time for heap took:"<< duration3.count()<<" microseconds."<<endl;

return 0;
}
