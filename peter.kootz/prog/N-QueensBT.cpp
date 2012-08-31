/*
    Name : N-Queens.cpp
    Date : 7/27/2012 a.d.
    Author : Peter Kootz
    Copyright : N/A
    Description : Backtracking algorithm for the n-queens problam.
*/

#include <iostream>
using namespace std;

int min(int a, int b)
{
    if (b>a)
        return a;
    else
        return b;
}

int max(int a, int b)
{
    if (a>b)
        return a;
    else
        return b;
}

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
    int i,j;
    int a;
    int mn = min(X[n], n);
    int mx = max(X[n], n);
    int P[2] = {(X[n] - mn),(n - mn)};
    int Q[2] = {(X[n] + mx),(n - mx)};

    //Left
    for(i=P[1];i<n;i++)
    {
        if(X[P[1]] == P[0])
        {
            return false;
        }

        P[0] += 1;
        P[1] += 1;
    }

    //Right
    if(Q[1]<0)
    {
        a = Q[1] * (-1);

        Q[0] -= a;
        Q[1] += a;
    }

    for(j=Q[1];j<n;j++)
    {
        if(X[Q[1]] == Q[0])
        {
            return false;
        }

        Q[0] -= 1;
        Q[1] += 1;
    }

    return true;
}


bool Solution(int X[], int n, int SIZE)
{
    int i;

    if(n == (SIZE))
    {
        for(i=0;i<SIZE;i++)
        {
            if(Check(X, i) == false)
                return false;
        }
        return true;
    }
    return false;
}

void bt(int X[], int n, int SIZE)
{
    int i;

    if(Solution(X, n, SIZE))
    {
        int j,k;

        cout << endl << "--SOLUTION--" << endl;

        for(j=0;j<SIZE;j++)
        {
            for(k=0;k<SIZE;k++)
            {
                if(X[j] == k)
                    cout << "Q  ";
                else
                    cout << "-  ";
            }
            cout << endl;
        }
        cout << endl;
    }
    else
    {
        for (i=0;i<SIZE;i++)
        {
            if(inArray(i, X, n) == false)
            {
                X[n] = i;

                if(Check(X,n))
                    bt(X, n+1, SIZE);
            }
        }
    }
}

main()
{
    int SIZE;
    cout << "Enter board size : ";
    cin >> SIZE;

    int X[SIZE];
    bt(X, 0, SIZE);
}
