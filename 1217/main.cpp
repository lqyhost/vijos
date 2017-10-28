//
// Created by qianyong liu on 2017/10/21.
//

#include <iostream>
#include <string>

using namespace::std;

int main()
{
    string a(10000,' ');
    char e;
    int i=0;
    while((cin>>e)&&(e!='E'))
    {
        a[i]=e;
        i++;
    }
    int mark11a=0,mark11b=0,m11a=0,m11b=0,m21a=0,m21b=0;
    for (int j=0;a[j]!=' ';j++)
    {
        if(a[j]=='W')
            mark11a++;
        else if (a[j]=='L')
            mark11b++;
        if((mark11a>=11)&&((mark11a-mark11b)>1))
        {
            m11a++;
            cout<<mark11a<<':'<<mark11b<<endl;
            mark11a=0;
            mark11b=0;
        }
        else if ((mark11b==11)&&((mark11b-mark11a)>1))
        {
            m11b++;
            cout<<mark11a<<':'<<mark11b<<endl;
            mark11a=0;
            mark11b=0;
        }
    }
    if((mark11a+mark11b)>0)
        cout<<mark11a<<':'<<mark11b<<endl<<endl;
    else
        cout<<endl;
    int mark21a=0,mark21b=0;
    for (int j=0;a[j]!=' ';j++)
    {
        if(a[j]=='W')
            mark21a++;
        else if (a[j]=='L')
            mark21b++;
        if((mark21a>=21)&&((mark21a-mark21b)>1))
        {
            m21a++;
            cout<<mark21a<<':'<<mark21b<<endl;
            mark21a=0;
            mark21b=0;
        }
        else if ((mark21b==21)&&((mark21b-mark21a)>1))
        {
            m21b++;
            cout<<mark21a<<':'<<mark21b<<endl;
            mark21a=0;
            mark21b=0;
        }
    }
    if((mark21a+mark21b)>0)
        cout<<mark21a<<':'<<mark21b<<endl;
}
