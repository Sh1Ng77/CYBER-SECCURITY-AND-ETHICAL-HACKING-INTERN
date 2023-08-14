/*
Task [2]: Email analysis::Take any email and analyze it, identify the red flags, and create a report on how to avoid such attacks

*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string email;
    cout << "Enter an email address: ";
    cin >> email;
    size_t atPos = email.find('@');

    if (atPos != string::npos)
    {
        string username = email.substr(0, atPos);
        string domain = email.substr(atPos + 1);
        cout << "Username: " << username << endl;
        cout << "Domain: " << domain << endl;
    }
    else
    {
        cout << "Invalid email address." << endl;
    }

    return 0;
}
