//
// Created by qianyong liu on 2017/10/17.
//
#include <iostream>

using namespace::std;

int main()
{
    int a;
    cin>>a;
    int b[a];
    int i=0,out=0;
    while((i<a)&&(cin>>b[i])) {
        i++;
    }
    for (int i=0;i<a-1;i++)
    {
        for (int j=i+1;j<a;j++)
        {
            for (int k=0;k<a;k++)
            {
                if((b[i]+b[j])==b[k])
                    out++;
            }
        }
    }
    cout<<out;
    return 0;
}
