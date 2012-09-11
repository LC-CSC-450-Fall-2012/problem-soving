//CSC450
//8/30/12
//John Horton
//Cody Adams
//Dustin Foltz

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string temp,temp2;
    ifstream input( "numbers.txt");
    ofstream output("output.txt");

    if (!input)
    {
          cout << "Cannot open file \n";
    }

    while(getline(input, temp))
    {

          for(int i = 0; i <temp.length(); i++)
          {
                  if (isdigit(temp.at(i)))
                  temp2+=temp.at(i);
          }

          temp2.insert(0, "(");
          temp2.insert(4, ")");
          temp2.insert(5, " ");
          temp2.insert(9,"-");

          output << temp2 <<endl;
          temp2="";
    }

    output.close();

return 0;

}

