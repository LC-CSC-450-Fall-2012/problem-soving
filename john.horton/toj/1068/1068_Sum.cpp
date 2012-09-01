/*

Author: John Horton
Purpose: Find sum of all intergers between 1 and N.
Problem Link: http://acm.timus.ru/problem.aspx?space=1&num=1068
Execution Time: 0.031
Memory Used: 196 KB

*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a, sum;
    sum=0;
    cin >> a;

    for(int i=fabs((double)a); i>0; i--)
    {
        sum+=i;
    }

    a>0? cout << sum:cout <<(sum-1)*-1;

    return 0;
}
