#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdio>
using namespace std;
int main()
{
    int n, t=0, q=0, CountA [80], CountNewB[6400];
    char a[80][80], b[80][80], InputN [25], InputAandB [50], trash1, trash2[80][4], NewB [6400][80];
    ifstream fin ("input");
    fin.getline (InputN, 25, '\n');
    fin >> n >> trash1;
    fin.getline (InputAandB, 50, '\n');
    for (int i=0; i<n; i++)
    {
        fin.getline (a[i], 80, ' ');
        fin.getline (trash2 [i], 4, ' ');
        fin.getline (b[i], 80, '\n');
    }
    fin.close();
    for (int i=0; i<n; i++)
        for (int j=0; b[i][j]!='\0'; j++)
        {
            for (int k=0; ((b[i][j]!='\0')&&(b[i][j]!=' ')); k++)
            {
                NewB [t][k]= b[i][j];
                j++;
            }
            t++;
        }
    for (int i=0; i<n; i++) CountA[i]=1;
    for (int i=0; i<t; i++) CountNewB[i]=1;
    for (int i=0; i<n; i++)
        for (int j=i+1; j<n; j++)
            if ((strlen(a[i])==strlen(a[j]))&&(!strcmp(a[i], a[j]))) CountA [j]=0;
    for (int i=0; i<t; i++)
        for (int j=i+1; j<t; j++)
            if ((strlen(NewB[i])==strlen(NewB[j]))&&(!strcmp(NewB[i], NewB[j]))) CountNewB [j]=0;
    for (int i=0; i<t; i++)
        if (CountNewB[i]==1)
            for (int j=0; j<n; j++)
                if (CountA[j]==1)
                    if((strlen(NewB[i])==strlen(a[j]))&&(!strcmp(NewB[i], a[j]))) CountNewB[i]=0;
    while (CountNewB[q]==0) q++;
    ofstream fout ("output");
    fout << "Elements of group A: ";
    for (int i=0; i<n; i++)
        if (CountA[i]==1)
            if (i==0) fout << a[i];
            else fout << ", " << a[i];
    fout << '\n' << "Elements of group B without elements of group A: ";
    for (int i=0; i<t; i++)
        if (CountNewB[i]==1)
            if (i==q) fout << NewB[i];
            else fout << ", " << NewB[i];
    fout.close ();
    return 0;
}
