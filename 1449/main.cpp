//
// Created by qianyong liu on 2017/10/24.
//
#include <iostream>
#include <string>

using namespace::std;

void pt(int n, string str)
{
    for (int i=0;i<n;i++)
    {
        cout<<str[n-i-1];
    }
}

int main()
{
    int length = 0;
    cin>>length;
    //char str1[length], str2[length], str3[length],str4[length];
    string str1, str2, str3,str4;
    cin>>str1>>str2>>str3;
    int a = 0, b = 0, c = 0, d =0;
    a=int(str1[0]+str1[length-1]);
    b=int(str2[0]+str2[length-1]);
    c=int(str3[0]+str3[length-1]);
    if ((a != b)&&(b != c)&&(c != a))
    {

        if (a > b)
        {
            d = a; a = b; b =d;
            str4 = str1; str1 = str2; str2 = str4;
        }
        if (c < b )
        {
            d = c; c = b; b =d;
            str4 = str3; str3 = str2; str2 = str4;
        }
        if (a > b)
        {
            d = a; a = b; b = d;
            str4 = str1; str1 = str2; str2 = str4;
        }
        if ((a+c-2*b)==0)
            pt(length,str2);
        if(((b+c-2*a)==52)||((b+c-2*a)==26))
            pt(length,str1);
        if(((a+b-2*c)==52)||((2*c-a-b)==26))
            pt(length,str3);
    }
    else
    {
        for (int i=0;i<length;i++)
        {
            if (str1[i]!=str2[i])
            {
                if(str1[i]!=str3[i])
                {
                    pt(length,str1);
                    return 0;
                }
                else
                {
                    pt(length,str2);
                    return 0;
                }
            }
            else
            {
                pt(length,str3);
                return 0;
            }
        }
    }
    return 0;
}
