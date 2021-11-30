#include <iostream>

using namespace std;

void road (int a);

int main()
{
    int a;
    cout<< "Input one number ";
    cin >> a;
    road (a);
    return 0;
}
void road (int a)
{
   if (a/10!=0)
   {
     cout << a%10;
   a = a/10;
   road (a);
   }
   else cout << a;
    }

