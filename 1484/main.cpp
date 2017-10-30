//
// Created by qianyong liu on 2017/10/28.
//
#include <iostream>
#include <string>

using namespace::std;

string judge_code(string code)
{
    int ans = 0;
    int j=0;
    for (int i = 0;i<code.length()-1;i++)
    {
        if(code[i] != '-')
        {
            ans += (j+1)*(code[i]-'0');
            cout<<j<<endl;
            j+=1;
        }
    }
    ans %= 11;
    if (ans == (code[code.length()-1]-'0'))
        return "Right";
    else
        if (ans==10)
            code[code.length()-1]='X';
        else
            code[code.length()-1]=char(ans+'0');
    return code;
}

int main()
{
    string code;
    cin>>code;
    cout<<judge_code(code);
}
