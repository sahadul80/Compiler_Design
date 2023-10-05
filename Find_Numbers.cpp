#include <iostream>
using namespace std;
void checkOperators(string s)
{
    string f="";
    int n=s.size();
    string num="1234567890";;
    int m=num.size();
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(s[i]==num[j])
            {
                f=f+s[i];
            }
        }
    }
    if(f.length()==s.length())
    {
        cout<<s<<" is a Number."<<endl;
    }
    else
    {
        cout<<s<<" is not a Number!";
    }
}
int main()
{
    string str;
    cout<<"Input Anything: ";
    cin>>str;
    checkOperators(str);
}
