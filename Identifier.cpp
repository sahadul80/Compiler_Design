#include <iostream>
using namespace std;
void checkIdentifiers(string s)
{
    string f ="";
    int n=s.size();
    string num="1234567890";
    string sc="+-*/\^%!@#^&()[]; ";
    int m=num.size();
    int p=sc.size();
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<m; j++)
        {
            for(int k=0; k<p; k++)
            {
                if(s[0]==num[j])
                {
                    f=f+s[0];
                }
                if(s[i]==sc[k])
                {
                    f=f+s[i];
                }
            }
        }
    }
    if(f.length()>0)
    {
        cout<<s<<" is not an Identifier."<<endl;
    }
    else
    {
        cout<<s<<" is an Identifier.";
    }
}
int main()
{
    string str;
    cout<<"Input an Identifier: ";
    cin>>str;
    checkIdentifiers(str);
}
