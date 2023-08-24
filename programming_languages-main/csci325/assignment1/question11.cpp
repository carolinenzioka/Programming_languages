#include <iostream>
using namespace std;


int main()
{
  int row,col;
    int arr[4][10] = { {1},
            {2,3},
            {4,5,6},
            {7,8,9,10}
          };
cout<<"The array is:"<<endl<<endl;
for (int i=0; i<5 ;i++)
  {
      int count=1;
        for (int j=0; j< count;j++)
          {
            if(arr[i][j]>10)
            {
              cout<<"";
              count++;
            }
          else if(arr[i][j]<=0)
          {
            cout<<"";
            count++;

          }
            else
            {cout<<arr[i][j]<<" ";
            count++;}
      }

  }
cout<<"What row?: ";
cin>> row;
cout<<"What column?: ";
cin>>col;
cout<<"The number you chose was: "<<arr[row-1][col-1]<<endl;


return 0;}
