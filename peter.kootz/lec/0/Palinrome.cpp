#include <iostream>
#include <ctype.h>
using namespace std;

int main()
{
    //Vars
    string n0;
    string n1="";
    int i;

    //Input
    cout << "Enter string : ";
    cin >> n0;

    n1 = n0;
    for (i=0;i<n0.length();i++)
    {
        n0.at(n0.length() - (i+1)) = tolower(n0.at(n0.length() - (i+1)));
        n1.at(i) = n0.at(n0.length() - (i+1));
    }

    if(n0 == n1)
        cout << "yes palindrome." << endl;
    else
        cout << "not palindrome." << endl;

    main();
}
