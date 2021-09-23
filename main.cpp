#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main()
{
    int a[3], i, z=0, j, b[3];
    srand (time (NULL));
    matrix: for (i=0; i<3; i++)
    {a[i] = rand()%10;
    }
      if ((a[0]==a[1])|| (a [0]==a[2]) || (a[1]== a[2]))
    goto matrix;

        cout << "Game started. Enter three different numbers. ";
    while (z<8)
    {
        mamba: for (j=0; j<3; j++)
       {
          cin >> b[j];
       }
    if ((b[0]==b[1])|| (b[0]==b[2]) || (b[1]== b[2]))
    {cout << endl<< "Enter three DIFFERENT numbers again"; goto mamba;}
    int k=0, t=0;
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            if (a[i]==b[j])
            {
              if (i==j) k=k+1;
              else t=t+1;
            }
        }
    }
    cout << k <<"A"<<t<<"B";
    if (k==3 && t==0) {cout << endl << "You win"; break;}
    if ((k!=3 || t!=0) && z<7) cout << endl<< "Enter three different numbers again";
    if ((k!=3 || t!=0) && z==7) cout << endl << "You are loser. The correct answer is "<< a[0] << " "<<a[1]<<" "<<a[2];
    z=z+1;
    }
    return 0;
}
