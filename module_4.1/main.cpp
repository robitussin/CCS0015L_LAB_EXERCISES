#include <iostream>
#include <stack>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string mystring;

    stack<char, vector<char>> iStack;

    cout << "Enter a string of braces: ";
    cin >> mystring;

    int openbracescounter = 0;
    int closebracescounter = 0;

    for (int x = 0; x < mystring.size(); x++)
    {
        cout << "Pushing " << mystring[x] << endl;

        char currentChar = mystring[x];

        if (currentChar == '{')
        {
            cout << "open brace" << endl;
            openbracescounter++;
        }
        else if (currentChar == '}')
        {
            cout << "close brace" << endl;
            closebracescounter++;
        }

        iStack.push(currentChar);
    }

    cout << "Open braces: " << openbracescounter << endl;
    cout << "Close braces: " << closebracescounter << endl;

    int replacements = openbracescounter - closebracescounter;
    cout << "Minimum of replacements required: " << replacements << endl;
}
