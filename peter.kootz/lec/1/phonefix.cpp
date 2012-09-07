/*
    Name : phonefix.cpp
    Date : 8/30/2012 a.d.
    Author : Peter Kootz, Anlonso Gutierrez.
    Copyright : N/A
    Description : Changes an entered phone number to a universal format.
*/

#include <iostream>
#include <fstream>
using namespace std;

main()
{
    ifstream infile;
    ofstream outfile;
    char n[15];
    char symbol;
    int i;

    infile.open("numbers.txt");
    outfile.open("output.txt");

    while(!infile.eof())
    {
        i=0;

        //Read line
        do{
            infile.get(symbol);

            if(isdigit(symbol))
            {
                n[i] = symbol;

                i++;
            }
        }while(symbol != '\n');

        cout << "("<<n[0] << n[1] << n[2] << ")" << n[3] << n[4] << n[5] << "-" << n[6] << n[7] << n[8] << n[9] << endl;
        outfile << "("<<n[0] << n[1] << n[2] << ")" << n[3] << n[4] << n[5] << "-" << n[6] << n[7] << n[8] << n[9] << endl;


    }
    outfile.close();
    infile.close();
}
