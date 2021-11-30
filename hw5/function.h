#ifndef FUNCTION_H_INCLUDED
#define FUNCTION_H_INCLUDED
#include <iostream>
using namespace std;
class set
{
    friend ostream &operator<< (ostream &, const set &);
    friend istream &operator>> (istream &, set &);
    private:
    static const int max = 100;
    int intSet[max];
    public:
    set ();
    set operator+ (const set &);
    set operator* (const set &);
    set operator- (const set &);
    void operator/ (set &);
    void operator= (const set &);
    bool operator== (const set&);
};
#endif // FUNCTION_H_INCLUDED
