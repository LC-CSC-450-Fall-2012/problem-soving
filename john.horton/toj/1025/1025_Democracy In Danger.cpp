/*

Author: John Horton
Purpose: Find min partition to mantain a party majority.
Problem Link: http://acm.timus.ru/problem.aspx?space=1&num=1025
Execution Time: 0.031
Memory Used: 212 KB

*/

#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int k, temp,min;
    min =0;
    vector <int> groups;

    cin >> k;

    while( cin >> temp)
    {
        groups.push_back(temp);
        //cout << groups.at(0) << endl;
    }

    //cout << groups.at(0)<< endl;
    //cout << groups.at(1)<< endl;
    //cout << groups.at(2)<< endl;
    sort(groups.begin(),groups.end());

    for(int i=0; i<ceil((double)k/2.0); i++)
    {
        min+= ceil((double)groups.at(i)/2.0);
        //cout << i << ' ' << ceil(groups.at(i)/2.0) << endl;
        //cout << i << ' ' << ceil(((double)k/2.0))<< endl;
    }

    cout << min;
}
