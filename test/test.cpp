//
// Created by qianyong liu on 2017/10/19.
//
#include <iostream>

using namespace::std;

int main()
{
    int a,b,i=0;
    int output[10];
    while((cin>>a))
    {
        b = 10;
        output[i]= a+b;
        i++;

    }
    i =0;
    while(output[i])
    {
        cout<<output<<endl;
        i++;
    }
    return 0;
}
