#include <bits/stdc++.h>
#include <string.h>

using namespace std;

char input[50];
int i, error;
void E(), Edash(), T(), Tdash(), F();

int main()
{
    i = 0;
    error = 0;

    cout<<"Enter an arithmetic expression (i.e. a+a*a) : ";

    cin>>input;

    E();

    if (strlen(input) == i && error == 0)
    {
        printf("Pare Tree has been generated.\n");
    }
    else
    {
        printf("Error generating Parse Tree.\n");
    }
    return 0;
}

void E()
{
    T();
    Edash();
    if(input[i]=='\0'){
        cout<<"string scanned successfully"<<endl;
    }
}

void Edash()
{
    if (input[i] == '+')
    {
        i++;
        T();
        Edash();
    }
    
}

void T()
{
    F();
    Tdash();
}

void Tdash()
{
    if (input[i] == '*')
    {
        i++;
        F();
        Tdash();
    }
    
}

void F()
{
    if (isalnum(input[i]))
    {
        i++;
    }

    else if (input[i] == '(')
    {
        i++;
        E();
        if (input[i] == ')')
        {
            i++;
        }
        else
        {
            error = 1;
        }
    }

    else
    {
        error = 1;
    }
}
