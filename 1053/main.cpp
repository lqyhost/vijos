//
// Created by qianyong liu on 2017/10/19.
//
#include <iostream>
#include <string>
using namespace::std;


int main()
{
    int p1 = 0, p2 = 0, p3 = 0;
    cin>>p1>>p2>>p3;
    string str;
    cin>>str;
    for (int i = 1; i < str.length()-1; i++)
    {
        if (str[i]=='-')
        {
            if (str[i+1]-str[i-1]>0)
            {
                if ((str[i+1]<='z')&&(str[i-1]>='a'))
                {
                    int s = 0;
                    if (p1 == 1)
                        s = 0;
                    else if (p1 == 2)
                        s = -32;
                    int num=(str[i+1]-str[i-1])*p2;
                    char *p=new char[str.length()+num];
                    for(int j=0;j<i;j++)
                        p[j]=str[j];
                    if (p3==1)
                    {
                        for(int j=i;j<i+num-p2;j++)
                        {
                            if (p1 == 3)
                                p[j]='*';
                            else
                                p[j]=str[i-1]+(j-i)/p2+1+s;
                        }
                    }
                    else if(p3 ==2)
                    {
                        for(int j=i;j<i+num-p2;j++)
                        {
                            if (p1 == 3)
                                p[j]='*';
                            else
                                p[j]=str[i-1]+(i+num-p2-j-1)/p2+1+s;
                        }
                    }
                    for(int j=i+num-p2;j<str.length()+num-p2-1;j++)
                        p[j]=str[j-num+p2+1];
                    str=p;
                    i=i+num-1;
                }
                else if ((str[i+1]<='9')&&(str[i-1]>='1'))
                {
                    int num=(str[i+1]-str[i-1])*p2;
                    char *p=new char[str.length()+num];
                    for(int j=0;j<i;j++)
                        p[j]=str[j];
                    if (p3 == 1)
                    {
                        for(int j=i;j<i+num-p2;j++)
                        {
                            if (p1 == 3)
                                p[j]='*';
                            else
                                p[j]=str[i-1]+(j-i)/p2+1;
                        }
                    }
                    else if (p3 == 2)
                    {
                        for(int j=i;j<i+num-p2;j++)
                        {
                            if (p1 == 3)
                                p[j]='*';
                            else
                                p[j]=str[i-1]+(i+num-p2-j-1)/p2+1;
                        }
                    }
                    for(int j=i+num-p2;j<str.length()+num-p2-1;j++)
                        p[j]=str[j-num+p2+1];
                    str=p;
                    i=i+num-1;
                }
            }
        }
    }
    cout<<str;
}
