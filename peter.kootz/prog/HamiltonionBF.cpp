/*
    Name : HamiltonionBF.cpp
    Date : 4/23/2012 a.d.
    Author : Peter Kootz
    Copyright : N/A
    Description : Finds all hamiltonion cycles of the matrix M[][] and SIZE by brute force.
*/

#include <iostream>
#define SIZE 8
using namespace std;

int permutation[SIZE];
int M[SIZE][SIZE] = {{0,1,1,0,0,0,1,0},{1,0,1,1,0,0,0,0},{1,1,0,1,1,0,1,1},{0,1,1,0,1,1,0,0},
                     {0,0,1,1,0,1,0,1},{0,0,0,1,1,0,0,1},{1,0,1,0,0,0,0,1},{0,0,1,0,1,1,1,0}};


bool Check()
{
    int i;

    for(i=1;i<SIZE;i++)
    {
        if(M[(permutation[i-1]) -1][(permutation[i]) -1] == 0)
            return false;
    }

    //check for path from last element to first
    if(M[(permutation[7]) -1][(permutation[0])-1] == 0)
    {
        return false;
    }
    return true;
}

void Swap (int a, int b, int L[])
{
    int temp;

    temp = L[a];
    L[a] = L[b];
    L[b] = temp;
}

void Perm(int list[], int k, int m)
{
    int i,j;
    int sum;

    if (k == m)
    {
        for ( i = 0; i <= m; i++)
        {
            permutation[i] = list[i];
        }

        if(Check() == true)
        {
            cout << "Found Cycle : ";

            //print permutation
            for(j=0;j<SIZE;j++)
                cout << permutation[j];

            cout << endl;
        }
    }

    else
    {
        for (i = k; i <= m; i++)
        {
            Swap (k, i, list);
            Perm(list, k+1, m);
            Swap (k, i, list);
        }
    }
}

int main()
{
    int L[SIZE] = {1,2,3,4,5,6,7,8};
    Perm(L, 0, SIZE-1);
    return 0;
}
