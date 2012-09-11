/*Problem Solving Fall 2012
Project Three
Maxwell Person, Dustin Foltz, John Horton
9/6/2012
Pledged*/

#include <iostream>
#include <fstream>

using namespace std;

int main(){
    char useless;
    ifstream afile;
    int linecount;
    string inLines;
    
    afile.open("phone.txt");
    if (afile.is_open()){
      
      getline(afile, inLines);
      
      while (getline(afile, inLines)){
            
            string numpal="";
            
            for(int i=0; i < inLines.size(); i++)
            {
            inLines.at(i)=toupper(inLines.at(i));
            
            switch(inLines.at(i))
            {
                case 'A': numpal +='2';
                          break;
                          
                case 'B': numpal +='2';
                          break;
                          
                case 'C': numpal +='2';
                          break;
                          
                case 'D': numpal +='3';
                          break;
                          
                case 'E': numpal +='3';
                          break;
                          
                case 'F': numpal +='3';
                          break;
                          
                case 'G': numpal +='4';
                          break;
                
                case 'H': numpal +='4';
                          break;
                          
                case 'I': numpal +='4';
                          break;
                          
                case 'J': numpal +='5';
                          break;
                          
                case 'K': numpal +='5';
                          break;
                          
                case 'L': numpal +='5';
                          break;
                          
                case 'M': numpal +='6';
                          break;
                          
                case 'N': numpal +='6';
                          break;
                          
                case 'O': numpal +='6';
                          break;
                          
                case 'P': numpal +='7';
                          break;
                
                case 'Q': numpal +='7';
                          break;
                          
                case 'R': numpal +='7';
                          break;
                          
                case 'S': numpal +='7';
                          break;
                          
                case 'T': numpal +='8';
                          break;
                          
                case 'U': numpal +='8';
                          break;
                          
                case 'V': numpal +='8';
                          break;
                case 'W': numpal +='9';
                          break;
                          
                case 'X': numpal +='9';
                          break;
                          
                case 'Y': numpal +='9';
                          break;
                          
                case 'Z': numpal +='9';
                          break;
                          
                }
                          
                
            
            }
            
            
            string temp="";
            for(int i=0; i < numpal.size(); i++)
            {
                    temp+= numpal.at(numpal.size() - i -1);
            }
            
            if(temp == numpal)
                    cout << "YES" << endl;
            else
                cout << "NO" << endl;
            
           // cout << inLines << endl;
           // cout << numpal << endl;
           // cout << temp << endl;
      
      }
    }
    
    
    
    cin >> useless;
}
