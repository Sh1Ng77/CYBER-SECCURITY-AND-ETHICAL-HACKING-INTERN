/*
Task [1]:Network scanning:Use a tool like Nmap to scan a network for open ports and vulnerable services
*/
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    // The target IP address
    string target = "127.0.0.1"; // Replace target IP address

    // Construct the Nmap command
    string nmapCommand = "nmap " + target;

    // Nmap command using the system() function
    int result = system(nmapCommand.c_str());

    if (result == 0)
    {
        cout << "Nmap scan completed successfully." << endl;
    }
    else
    {
        cout << "Nmap scan failed." << endl;
    }

    return 0;
}
