#include <bits/stdc++.h>

using namespace std;

void infixToPostfixConverter();
void infixToPrefixConverter();

string infixInput;

int main()
{
    int select;
    bool runApp = true;
    do
    {
        system("cls");
        cout << "~~~~~~~~~~~~ INFIX POSTFIX PREFIX CONVERTER ~~~~~~~~~~~~\n";
        cout << "1. Infix to Posfix\n";
        cout << "2. Infix to Prefix\n";
        cout << "3. Exit\n";
        cout << "Select = ";
        cin >> select;
        switch (select)
        {
        case 1:
            infixToPostfixConverter();
            break;

        case 2:
            infixToPrefixConverter();
            break;
        case 3:
            runApp = false;
            break;

        default:
            system("cls");
            cout << "Invalid Input" << endl;
            system("pause");
        }

    } while (runApp);

    system("cls");
    cout << "Nama   : Aulia Ilham Zukri\n";
    cout << "NIM    : 20190801368\n";
    system("pause");
    return 0;
}

bool isOperator(char a)
{
    return (!isalpha(a) && !isdigit(a));
}

int getPriority(char a)
{
    if (a == '+' || a == '-')
        return 2;
    else if (a == '*' || a == '/')
        return 3;
    else if (a == '^')
        return 4;
    return 0;
}

string convertToPosfix(string input)
{
    input = '(' + input + ')';
    int size = input.size();
    stack<char> stackChar;
    string result;
    string in;

    for (int i = 0; i < size; i++)
    {
        if (isalpha(input[i]) || isdigit(input[i]))
            result += input[i];
        else if (input[i] == '(')
            stackChar.push('(');
        else if (input[i] == ')')
        {
            while (stackChar.top() != '(')
            {
                result += stackChar.top();
                stackChar.pop();
            }
            stackChar.pop();
        }
        else
        {
            if (isOperator(stackChar.top()))
            {
                while (getPriority(input[i]) <= getPriority(stackChar.top()))
                {
                    result += stackChar.top();
                    stackChar.pop();
                }
                stackChar.push(input[i]);
            }
        }
    }
    return result;
}

string convertToPrefix(string input)
{
    int size = input.size();
    reverse(input.begin(), input.end());

    for (int i = 0; i < size; i++)
    {
        if (input[i] == '(')
        {
            input[i] = ')';
            i++;
        }
        else if (input[i] == ')')
        {
            input[i] = '(';
            i++;
        }
    }

    string prefixResult = convertToPosfix(input);

    reverse(prefixResult.begin(), prefixResult.end());
    return prefixResult;
}

void infixToPostfixConverter()
{
    system("cls");
    cout << "Masukkan ekspresi Infix : ";
    cin >> infixInput;
    cout << "Bentuk PostFix = " << convertToPosfix(infixInput) << endl;
    system("pause");
}

void infixToPrefixConverter()
{
    system("cls");
    cout << "Masukkan ekspresi Infix : ";
    cin >> infixInput;
    cout << "Bentuk Prefix = " << convertToPrefix(infixInput) << endl;
    system("pause");
}