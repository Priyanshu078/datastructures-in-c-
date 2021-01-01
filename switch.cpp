#include <iostream>
using namespace std;
int main()
{
    float n1, n2;
    cout << "Enter two numbers";
    cin >> n1 >> n2;

    char op;
    cin >> op;

    // vowels

    // char op;
    // cin >> op;
    // switch (op)
    // {
    // case 'a':
    //     cout << "It is a vowel";
    //     break;
    // case 'e':
    //     cout << "It is a vowel";
    //     break;
    // case 'i':
    //     cout << "It is a vowel";
    //     break;
    // case 'o':
    //     cout << "It is also a vowel";
    //     break;
    // case 'u':
    //     cout << "It is a vowel";
    //     break;

    // default:
    //     cout << "It is not a vowel";
    //     break;
    // }

    //calculator
    switch (op)
    {
    case '+':
        cout << n1 + n2 << endl;
        break;
    case '-':
        cout << n1 - n2 << endl;
        break;
    case '*':
        cout << n1 * n2 << endl;
        break;
    case '/':
        cout << n1 / n2 << endl;
        break;

    default:
        cout << "Enter a correct operator";
        break;
    }
}