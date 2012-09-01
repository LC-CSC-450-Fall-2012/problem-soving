/*

Author: John Horton
Purpose: Calculate value of expression.
Problem Link: http://acm.timus.ru/problem.aspx?space=1&num=1083
Execution Time: 0.031
Memory Used: 172 KB

*/

#include <iostream>

using namespace std;

int main()
{
    int n=-1, k=0;
    char ch;
    string s1;

    while(cin >> ch)
    {
        if(isdigit(ch))
            if(ch == '0')
            n=(int)ch-38;
            else
            n=(int)ch-48;
        else if(ch == '!')
            k++;
    }

    if(k==0)
        k=1;

    int result =1;

        for(int i=1; i <n ; i++)
            if(n%k==0)
                {
                if(n-k*i > 0)
                    result*=n-k*i;
                }
            else
                {
                    if(n-k*i > 0)
                    result*=n-k*i;
                }
        result *=n;

    cout << result;

    return 0;
}
