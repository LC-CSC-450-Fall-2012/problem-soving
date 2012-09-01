/*

Author: John Horton
Purpose: Prints out the square root of the numbers recieved in reverse order.
Problem Link: http://acm.timus.ru/problem.aspx?space=1&num=1001
Execution Time: 0.484
Memory Used: 1 696 KB

*/

#include <iostream>
#include <math.h>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
    double num=0;
    vector <double> roots;

    while(cin>>num)
    {
        roots.push_back(sqrt(num));
    }

    int i = roots.size();
    while(i > 0)
    {
        i--;
        cout << fixed << setprecision(4) << roots.at(i) <<endl;
    }

    return 0;
}
