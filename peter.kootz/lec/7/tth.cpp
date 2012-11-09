#include <iostream>
#include <fstream>
#include <cmath>
#include <locale>
using namespace std;

int main()
{
    int run[4] = {0, 0, 0, 0};
    ifstream infile("tth.txt");
    int n, n1;
    int i, j, k, l, m, o;
    int x, y;
    string line, s = "";
    float len;
    char hash;

    cout << "TTH (Toy Tetragraph Hash)" << endl << endl;

    while(1)
    {
        //Input
        cout << ">>";
        getline(cin, line);

        //Quit
        if(line == "")
            return 0;

        //Every letter in the line
        for(j=0;j<line.length();j++)
        {
            //Is it a letter
            if(isalpha(line[j]))
            {
                //Make it uppercase
                s += toupper(line[j]);
            }
        }

        //How many arrays
        len = s.length();
        n1 = ceil(len / 16);
        int array[n1][4][4];

        //For every array
        for(k=0;k<n1;k++)
        {
            for(l=0;l<16;l++)
            {
                x = l%4;
                y = floor(l/4);

                if(((16 * k) + l) < s.length())
                    array[k][x][y] = s[(16 * k) + l] - 65;
                else
                    array[k][x][y] = 0;
            }
        }

        for(m=0;m<n1;m++)
        {
            //Round one
            run[0] = (run[0] + array[m][0][0] + array[m][0][1] + array[m][0][2] + array[m][0][3]) % 26;
            run[1] = (run[1] + array[m][1][0] + array[m][1][1] + array[m][1][2] + array[m][1][3]) % 26;
            run[2] = (run[2] + array[m][2][0] + array[m][2][1] + array[m][2][2] + array[m][2][3]) % 26;
            run[3] = (run[3] + array[m][3][0] + array[m][3][1] + array[m][3][2] + array[m][3][3]) % 26;

            //Round 2
            run[0] = (run[0] + array[m][1][0] + array[m][2][1] + array[m][3][2] + array[m][3][3]) % 26;
            run[1] = (run[1] + array[m][2][0] + array[m][3][1] + array[m][0][2] + array[m][2][3]) % 26;
            run[2] = (run[2] + array[m][3][0] + array[m][0][1] + array[m][1][2] + array[m][1][3]) % 26;
            run[3] = (run[3] + array[m][0][0] + array[m][1][1] + array[m][2][2] + array[m][0][3]) % 26;
        }

        for(o=0;o<4;o++)
        {
            hash = run[o] + 65;
            cout << hash;
            run[o] = 0;
        }
        cout << endl;
        line = "";
        s = "";
    }
}
