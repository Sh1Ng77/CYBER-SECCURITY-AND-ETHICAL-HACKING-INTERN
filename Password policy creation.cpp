/*
Task [3]:Password policy creation:Create a password policy for a company that enforces strong and unique passwords.
*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isStrongPassword(const string& password)
{
    if (password.length() < 8)
    {
        return false;
    }

    bool hasUppercase = false;
    bool hasLowercase = false;
    bool hasDigit = false;
    bool hasSpecialChar = false;

    for (char c : password)
    {
        if (isupper(c)) 
        {
            hasUppercase = true;
        } 
        else if (islower(c)) 
        {
            hasLowercase = true;
        } 
        else if (isdigit(c)) 
        {
            hasDigit = true;
        } 
        else if (!isalnum(c)) 
        {
            hasSpecialChar = true;
        }
    }

    return hasUppercase && hasLowercase && hasDigit && hasSpecialChar;
}

int main()
{
    string password;
    cout << "Enter a password: ";
    cin >> password;

    if (isStrongPassword(password)) 
    {
        cout << "Password meets the strong password criteria." << endl;
    } 
    else 
    {
        cout << "Password is not strong. It should have at least 8 characters, including uppercase, lowercase, digits, and special characters." << endl;
    }

    return 0;
}
