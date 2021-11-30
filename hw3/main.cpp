#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    char c[80][80], b[6400], d[6400], e[80][80], shot [6400];
    int n, i, j, h, v, w, u=0, g=0, count [80], t=0;
    cout << "Please input the number of lines: ";
    cin >> n;
    cout << "Please input A and B:"<<endl;
    getchar ();
    for (int i=0; i<n; i++) gets(c[i]);
    for (i=0; i<n; i++)
        {
            for (j=0, h=0; c[i][j]!=' '; j++, h++) e[i][h]=c[i][j];
            e[i][h]=' ';
            count [i]=1;
        }
    for (i=0; i<n; i++)
    for (int q=i+1; q<n; q++)
        if (count [q]==1)
           if ((strlen(e[i])==strlen (e[q])) && (!strcmp (e[i], e[q])))
               count [q]=0;
    for (i=0; i<n; i++)
        if (count [i]==1) strcat (d, e[i]);
    for (i=0; i<n; i++)
    {
        j=4;
        while (c[i][j-4]!=' ') j++;
        int p=j;
        for (int j=p; c[i][j]!='\0'; j++, t++) b[t]=c[i][j];
        b[t] = ' ';
        t++;
    }
    cout << "Elements of group A: ";
    for (int x=0; d[x]!='\0'; x++)
        if (d[x+1]=='\0') cout << ".";
        else  if (d[x]==' ') cout <<",";
              else cout << d[x];
    cout << endl << "Elememts of group B without elements of group A: ";
    while (b[u]!='\0')
    {
        char s1 [6400]={};
        for (v=0; b[u]!=' '; v++)
                {
                    s1 [v] = b [u];
                    u++;
                }
        int k=0;
        while (d [k]!='\0')
        {
            char s2 [6400]={};
            for (w=0; d[k]!=' '; w++)
                {
                    s2 [w] = d[k];
                    k++;
                }
            if ((strlen(s2)==strlen (s1)) && (!strcmp (s1, s2))) goto dr;
            k++;
        }
        for (v=0; v<strlen (s1); v++)
        {
            shot [g]= s1 [v]; g++;
        }
        if ((b[u+1]=='\0') || (b[u+1+strlen(s1)]=='\0')) {shot [g]='.'; g++;}
        else {shot [g]=','; g++;}
        dr: u++;
    }
    cout << shot;
    return 0;
}
