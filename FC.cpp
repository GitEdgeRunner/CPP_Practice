#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main()
{
    string user_name;
    cout << "Please enter your first name here: ";
    cin >> user_name;
    cout << '\n'
         << "Hello, "
         << user_name
         << ".... and goodbye!\n";
    
    system("pause");
    return 0;
}