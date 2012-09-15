/*
    Name : phone.cpp
    Date : 9/6/2012 a.d.
    Author : Peter Kootz, John Pope.
    Copyright : N/A
    Description : Checks for a phone number palindrome.
*/

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <locale>
using namespace std;

main()
{
    //Variables
    int n,i,j,k,l,m;
    ifstream infile;
    ofstream outfile;
    string temp,ns;
    char c[3];

    //Open files
    infile.open("phone.in");
    outfile.open("phone.out");

    //Read in size
    infile >> n;
    string s[n];

    //S to numbers
    for(i=0;i<n;i++)
    {
        infile >> s[i];

        //Grab string
        temp = s[i];

        //Convert to number
        for(j=0;j<temp.length();j++)
        {
            //Make sure lower case
            temp[j] = tolower(temp[j]);

            if((temp[j] == 'a') || (temp[j] == 'b') || (temp[j] == 'c'))
                temp[j] = '2';
            else if((temp[j] == 'd') || (temp[j] == 'e') || (temp[j] == 'f'))
                temp[j] = '3';
            else if((temp[j] == 'g') || (temp[j] == 'h') || (temp[j] == 'i'))
                temp[j] = '4';
            else if((temp[j] == 'j') || (temp[j] == 'k') || (temp[j] == 'l'))
                temp[j] = '5';
            else if((temp[j] == 'm') || (temp[j] == 'n') || (temp[j] == 'o'))
                temp[j] = '6';
            else if((temp[j] == 'p') || (temp[j] == 'q') || (temp[j] == 'r') || (temp[j] == 's'))
                temp[j] = '7';
            else if((temp[j] == 't') || (temp[j] == 'u') || (temp[j] == 'v'))
                temp[j] = '8';
            else if((temp[j] == 'w') || (temp[j] == 'x') || (temp[j] == 'y') || (temp[j] == 'z'))
                temp[j] = '9';
        }
        //Put back
        s[i] = temp;
    }

    //Check palindrome
    for(k=0;k<n;k++)
    {
        temp = "";

        //create reverse
        for(l=s[k].length()-1;l>-1;l--)
        {
            temp += s[k][l];
        }

        //final check
        if(temp == s[k])
        {
            cout << "YES" << endl;
            outfile << "YES" << endl;
        }
        else if(temp != s[k])
        {
            cout << "NO" << endl;
            outfile << "NO" << endl;
        }
    }

}
