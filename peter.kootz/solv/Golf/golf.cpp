/*
    Name : golf.cpp
    Date : 9/9/2012 a.d.
    Author : Peter Kootz.
    Copyright : N/A
    Description : Reports golf score given the par for the hole, and number of strokes.
*/

#include <iostream>
#include <fstream>
using namespace std;

main()
{
    int n,i;
    int a,b,c;
    string m;
    ifstream infile;
    ofstream outfile;

    //Files
    infile.open("golf.in");
    outfile.open("golf.out");

    infile >> n;

    for(i=0;i<n;i++)
    {
        infile >> a;
        infile >> b;

        c = a-b;

        if(b == 1)
            m = "hole-in-one";
        else if(c == 3)
            m = "double-eagle";
        else if(c == 2)
            m = "eagle";
        else if(c == 1)
            m = "birdie";
        else if(c == 0)
            m = "par";
        else if(c == -1)
            m = "bogey";
        else if(c == -2)
            m = "double-bogey";
        else if(c == -3)
            m = "triple-bogey";
        else if(c == -4)
            m = "four-over-par";
        else if(c == -5)
            m = "five-over-par";
        else if(c == -6)
            m = "six-over-par";
        else if(c == -7)
            m = "seven-over-par";
        else
            m = "error";

        cout << m << endl;
        outfile << m << endl;
    }
}
