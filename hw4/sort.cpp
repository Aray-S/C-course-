#include "tou.h"
extern char a[30][80];
void sort2 (int n)
{
    char *j, *k, t;
    for (int i=0; i<n; i++)
        for (j=a[i]; *j; j++)
            for (k=j; *k; k++)
                if (*k<=*j)
                {
                    t=*j;
                    *j=*k;
                    *k=t;
                }
}

void sort1 (int n)
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
            for (int p=start; p<=end; p++)
                for (int k=p; k<=end; k++)
                    if (a[i][k]<=a[i][p])
                    {
                        char t=a[i][p];
                        a[i][p]=a[i][k];
                        a[i][k]=t;
                    }
            j++;
        }
    }
}
