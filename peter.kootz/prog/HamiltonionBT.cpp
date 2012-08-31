/*
    Name : HamiltonionBT.cpp
    Date : 4/25/2012 a.d.
    Author : Peter Kootz
    Copyright : N/A
    Description : Finds all hamiltonion cycles of the matrix M[][] and SIZE by backtracking.
*/

#include <iostream>
#define SIZE 8
using namespace std;

int M[SIZE][SIZE] = {{0,1,1,0,0,0,1,0},{1,0,1,1,0,0,0,0},{1,1,0,1,1,0,1,1},{0,1,1,0,1,1,0,0},
                     {0,0,1,1,0,1,0,1},{0,0,0,1,1,0,0,1},{1,0,1,0,0,0,0,1},{0,0,1,0,1,1,1,0}};

bool inArray(int k, int A[], int n)
{
    int i;

    for(i=0;i<n;i++)
    {
        if(A[i] == k)
            return true;
    }
    return false;
}

bool Check(int X[], int n)
{
    int i;

    for(i=1;i<n;i++)
    {
        if(M[(X[i-1] -1)][(X[i] -1)] == 0)
            return false;
    }
    return true;
}

bool Solution(int X[], int n)
{
    int i;

    if(n==8)
    {
        for(i=1;i<n;i++)
        {
            if(M[(X[i-1]) -1][(X[i]) -1] == 0)
                return false;
        }

        //check for path from last element to first
        if(M[(X[7]) -1][(X[0])-1] == 0)
        {
            return false;
        }
        return true;
    }

    return false;
}

int bt(int X[], int n)
{
    int i;

    if(Solution(X, n))
    {
        int j;

        cout << "Found Cycle : ";

        for(j=0;j<SIZE;j++)
            cout << X[j];

        cout << endl;
    }
    else
    {
        for(i=1;i<=SIZE;i++)
        {
            if(inArray(i,X,n) == false)
            {
                X[n] = i;

                if(Check(X,n+1))
                    bt(X, n+1);
            }
        }
    }
}

main()
{
    int X[SIZE];
    int n = 0;

    bt(X, n);
}
