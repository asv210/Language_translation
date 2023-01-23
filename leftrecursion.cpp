#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s, temp, com;
    char c;
    cout<<"Enter Your String :"<<endl;
    cout << "A ->";
    getline(cin, s);

    vector<string> v, ans;

    for (int i = 0; i < s.length(); i++)
    {

        if (s[i] == '|')
        {
            v.push_back(temp);
            temp.clear();
        }
        else
        {
            temp += s[i];
        }
    }
    v.push_back(temp);

    vector<string> a;
    vector<string> b;

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i][0] == 'A')
        {
            a.push_back(v[i]);
        }
        else
        {
            b.push_back(v[i]);
        }
    }

    cout<<"LEFT RECURSION :"<<endl;

    cout << "A -> ";
    for (int i = 0; i < b.size(); i++)
    {
        if (i != b.size() - 1)
        {
            cout << b[i] << "A'"
                 << "|";
        }
        else
        {
            cout << b[i] << "A'";
        }
    }
    cout << endl;
    cout << "A'-> ";
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 1; j < a[i].size(); j++)
        {
            cout << a[i][j];
        }
        cout << "A'|";
    }
    cout << "E" << endl;

}
