#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int i, j, k, row;
    char triangle;

    cout << "Which Triangle Do You Want to Print?";
    cin >> triangle;
    cout << "Enter the number of rows of star you want to Print ";
    cin >> row;

    switch (triangle)
    {
    case 'A':
        for (i = 1; i <= row; i++)
        {
            for (j = 1; j <= i; j++)
            {
                cout << "* ";
            }
            cout << endl;
        }
        break;

    case 'B':

        for (i = row; i >= 1; i--)
        {
            for (j = i; j >= 1; j--)
            {
                cout << "* ";
            }
            cout << endl;
        }
        break;

    case 'C':
        for (i = row; i >= 1; i--)
        {
            for (j = i; j > 1; j--)
            {
                cout << " ";
            }
            for (k = row - i + 1; k >= 1; k--)
            {
                cout << "*";
            }
            cout << endl;
        }
        break;

    case 'D':

        for (i = row; i >= 1; i--)
        {
            for (j = i; j >= 1; j--)
            {
                cout << "* ";
            }
            cout << endl;
        }
        break;

    case 'E':

        for (i = row; i >= 1; i--)
        {
            for (j = i; j > 1; j--)
            {
                cout << " ";
            }
            for (k = row - i + 1; k >= 1; k--)
            {
                cout << "* ";
            }
            cout << endl;
        }
        break;

    case 'F':

        for (i = 1; i <= row; i++)
        {
            for (j = 1; j < i; j++)
            {
                cout << " ";
            }
            for (k = row - i; k >= 1; k--)
            {
                cout << "* ";
            }
            cout << endl;
        }
        break;

    default:
        cout << "Please Select an Option";
        break;
    }
}
