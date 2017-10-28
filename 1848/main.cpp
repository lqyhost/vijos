#include <iostream>

using namespace std;

int count_number(const int big_int, const int little_int )
{
    int output = 0;
    int _big_int = big_int;
    while (_big_int > 0)
    {
        if (_big_int%10 == little_int)
            output +=1;
        _big_int /=10;
    }
    return output;
}

int count_number_by(const int big_int, const int little_int)
{
    int output = 0;
    int _big_int = big_int;
    while (_big_int >0)
    {
        output += count_number(_big_int,little_int);
        _big_int -=1;
    }
    return output;
}

int main()
{
    int a=0, b=0, c=0;
    cin>>a>>b;
    while (a>0)
    {
        int e =a;
        while (e>0)
        {
            if (e%10 == b)
                c ++;
            e /=10;
        }
        a --;
    }
    cout<<c;
    return 0;
}

