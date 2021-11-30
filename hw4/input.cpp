#include "tou.h"
char a[30][80];
void input (int n)
{
    char b[n][80];
    cout << endl<< "Please input the lines: "<< endl;
    getchar ();
    for (int i=0; i<n; i++)
        {
                cin.getline (a[i], 80, '@');
                cin.getline (b[i], 80);
        }
}
