#include <iostream>
using namespace std;
void checkOperators(string s)
{
    string f ="";
    int n=s.size();
    string op="+-*/%=";
    int m=op.size();
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(s[i]==op[j])
            {
                f=f+s[i];
            }
        }
    }
    if(f.length()>0)
        cout<<"Operators are: "<<f;
    else
        cout << "No operators";
}
int main()
{
    string str;
    cout<<"Input an Expression: ";
    cin>>str;
    checkOperators(str);
}
