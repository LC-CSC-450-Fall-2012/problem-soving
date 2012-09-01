/*

Author: John Horton
Purpose: Get all stones into two piles with the min weight differnce.
Problem Link: http://acm.timus.ru/problem.aspx?space=1&num=1005
Execution Time: 0.015
Memory Used: 212 KB

*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
    int numOf=0;
    while(cin >> numOf)
    {
        vector<long> arr;
        int count_start=0, count_end=0;
        long nums=0, total=0, pile1=0, pile2=0, diff=0;

        for(int i=0; i<numOf; i++)
        {
            cin >> nums;
            arr.push_back(nums);
        }

        sort(arr.begin(), arr.end());

        for(int i=0; i<arr.size(); i++)
            total+=arr.at(i);

        diff=total;

        count_end=arr.size()-1;

      //  while(count_end>=0)
        //{
           for(int i=count_start; i<=count_end; count_start++)
           {
               for(int j=count_start; j<=count_end; j++)
               {
                    pile1+=arr.at(j);
                    pile2=total-pile1;

                    if(abs(pile1-pile2) < diff)
                        diff=abs(pile1-pile2);
               }

                count_end--;
                pile1=0;

           }
        //}

        cout << diff << endl;
    }

    return 0;
}
