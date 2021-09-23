#include <iostream>

using namespace std;

int main()
{
    int i=0, k, m, n, x;
    for (k=0; k<5; k++)
          for (m=0; m<5; m++)
                 if (m>k)
                      for (n=0; n<5; n++)
                      {
                         if (n!=k && n>m)
                                     {i=i++;
                                     cout << i << " ";
                                     for (int y = 0; y<3; y++)
                                     {switch (y)
                                     {
                                         case 0: x=k; break;
                                         case 1: x=m; break;
                                         case 2: x=n; break;
                                     }
                                     switch (x)
                                     {
                                         case 0: cout << "red "; break;
                                         case 1: cout << "yellow "; break;
                                         case 2: cout << "blue "; break;
                                         case 3: cout << "white "; break;
                                         case 4: cout << "black "; break;

                                     }}
                                     cout << endl;}
                      }
                      cout << "There are "<<i<<" combinations in total"<< endl;
    return 0;
}
