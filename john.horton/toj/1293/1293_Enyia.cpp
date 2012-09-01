/*

Author: John Horton
Purpose: Calculate weight of chemical in nanograms needed.
Problem Link: http://acm.timus.ru/problem.aspx?space=1&num=1293
Execution Time: 0.031
Memory Used: 196 KB

*/

#include <iostream>
using namespace std;

int main()
{
 int n,a,b;

 cin >> n >> a >> b;

 cout << n*(a*b)*2;

 return 0;
}
