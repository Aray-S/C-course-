#include "function.h"
int main()
{
    set setA, setB, setC;
    char ch;
    cout << "Please input the number of elements of the group A: ";
    cin>>setA;
    cout << "Please input the number of elements of the group B: ";
    cin>>setB;
    cout<<"If you want to end the code, write Q";
    while (ch!='Q')
    {
        char p, q[2];
        cout<<endl<<"What operation do you want to do: A ? B? ";
        cin >> q;
        ch=q[0]; p=q[1];
        if (p=='=') cout << "Are A and B equal? "<<(setA == setB ? "yes" : "no");
        else
        switch (ch)
        {
            case '+':
            {
                cout<<"A+B: ";
                setC = setA + setB;
                cout << setC;
                break;
            }
            case '-':
            {
                cout<<"A-B: ";
                setC=setA - setB;
                cout << setC;
                break;
            }
            case '*':
            {
                cout<<"A*B: ";
                setC = setA * setB;
                cout << setC;
                break;
            }
            case '/':
            {
                cout<<"A/B: "<<endl;
                setA / setB;
                cout<<"They exchanged their contents"<<endl<<"Now A: "<<setA<<endl<<"And B: "<<setB;
                break;
            }
            case '=':
            {
                cout<<"A=B"<<endl;
                setA = setB;
                cout<<"A is changed. Now A: "<<setA;
                break;
            }
            default:
            {
                if (ch!='Q') cout<<"There is no such operation";
                break;
            }
        }
    }
    return 0;
}
