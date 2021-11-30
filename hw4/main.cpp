#include "tou.h"
extern char a[30][80];
int main()
{
    int n, x;
    cout<< "Please input the number of lines: ";
    cin >> n;
    input (n);
    cout << endl<< "Please choose a sort method: sort word by word (1) or sort the whole sentence (2): ";
    cin>>x;
    cout << endl<< "Your lines after sorting: "<< endl;
    if (x==1)
    {
        sort1 (n);
        output1 (n);
    }
    if (x==2)
    {
        sort2 (n);
        output2 (n);
    }
    return 0;
}
