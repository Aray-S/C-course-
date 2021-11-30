#include "function.h"

set::set ()
{
    for (int i=0; i<max; i++) intSet [i]=0;
}



set set::operator+ (const set &rset)
{
    set bot;
    for (int i=0; i<max; i++)
        if (intSet[i]==1||rset.intSet[i]==1)
            bot.intSet[i]=1;
    return bot;
}



set set::operator* (const set&rset)
{
    set bot;
    for (int i=0; i<max; i++)
        if (intSet [i]==1 && rset.intSet[i]==1)
            bot.intSet[i]=1;
    return bot;
}



set set::operator- (const set&rset)
{
    set bot;
    for (int i=0; i<max; i++)
        if (rset.intSet [i]==0&&intSet[i]==1)
            bot.intSet[i]=1;
    return bot;
}



void set::operator/ (set&rset)
{
    for (int i=0; i<max; i++)
    {
        int t=intSet[i];
        intSet[i]=rset.intSet[i];
        rset.intSet [i] = t;
    }
}



void set::operator= (const set &rset)
{
    for (int i=0; i<max; i++) intSet[i]=rset.intSet [i];
}



bool set::operator== (const set&rset)
{
    for (int i=0; i<max; i++)
        if (intSet[i]!=rset.intSet[i])
            return 0;
    return 1;
}



ostream &operator<< (ostream &os, const set &rset)
    {
    char a[200];
    int k=0;
    bool isEmpty = true;
    for (int i=0; i<100; i++)
        if (rset.intSet[i]==1)
        {
            if (i<10)
            {
                a[k]=i+'0'; k++;
                a[k]=' '; k++;
            }
            else
            {
                a[k]=i/10+'0'; k++;
                a[k]=i%10+'0'; k++;
                a[k]=' '; k++;
            }
            isEmpty=false;
        }
    a[k]='\0';
    if (isEmpty) os << "---";
    else os << a;
    return os;
}



istream &operator>> (istream &is, set &rset)
{
    int n, elements[100];
    cin >> n;
    cout << "Now input them: ";
    for (int i=0; i<n; i++) cin>>elements[i];
    for (int i=0; (i<n)&&(i<100); i++) rset.intSet [elements[i]]=1;
    return is;
}
