#include "tou.h"
extern char a[30][80];
void output2 (int n)
{
    for (int i=0; i<n; i++)
    {
        int p = strlen (a[i]);
        func (a[i], p-1);
        cout << endl;
    }
}
void output1 (int n)
{
    for (int i=0; i<n; i++)
    {
        int j=0;
        while (a[i][j]!='\0')
        {
            int start=j;
            while (a[i][j]!=' ')
            if (a[i][j]=='\0') break;
            else j++;
            int end=j-1;
            func (&a[i][start], end-start);
            j++;
            cout << " ";
        }
        cout << endl;
    }
}
void func (char *h, int s)
{
    if (s>=0)
    {
        cout << *(h+s);
        s--;
        func (h, s);
    }
}

