#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0, y = 0;
    cin >> t;
    for (y = 0; y < t; y++)
    {
        char T[3][3];
        int x = 0, o = 0, non = 0, winx = 0, wino = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> T[i][j];
                if (T[i][j] == 'X')
                {
                    x++;
                }
                if (T[i][j] == 'O')
                {
                    o++;
                }
                if (T[i][j] == '_')
                {
                    non++;
                }
            }
        }
        if (T[0][0] == T[0][1] && T[0][1] == T[0][2])
        {
            if (T[0][0] == 'X')
            {
                winx = 1;
            }
            if (T[0][0] == 'O')
            {
                wino = 1;
            }
        }
        if (T[1][0] == T[1][1] && T[1][1] == T[1][2])
        {
            if (T[1][0] == 'X')
            {
                winx = 1;
            }
            if (T[1][0] == 'O')
            {
                wino = 1;
            }
        }
        if (T[2][0] == T[2][1] && T[2][1] == T[2][2])
        {
            if (T[2][0] == 'X')
            {
                winx = 1;
            }
            if (T[2][0] == 'O')
            {
                wino = 1;
            }
        }
        if (T[0][0] == T[1][0] && T[1][0] == T[2][0])
        {
            if (T[0][0] == 'X')
            {
                winx = 1;
            }
            if (T[0][0] == 'O')
            {
                wino = 1;
            }
        }
        if (T[0][1] == T[1][1] && T[1][1] == T[2][1])
        {
            if (T[0][1] == 'X')
            {
                winx = 1;
            }
            if (T[0][1] == 'O')
            {
                wino = 1;
            }
        }
        if (T[0][2] == T[1][2] && T[1][2] == T[2][2])
        {
            if (T[0][2] == 'X')
            {
                winx = 1;
            }
            if (T[0][2] == 'O')
            {
                wino = 1;
            }
        }
        if (T[0][0] == T[1][1] && T[1][1] == T[2][2])
        {
            if (T[0][0] == 'X')
            {
                winx = 1;
            }
            if (T[0][0] == 'O')
            {
                wino = 1;
            }
        }
        if (T[0][2] == T[1][1] && T[1][1] == T[2][0])
        {
            if (T[0][2] == 'X')
            {
                winx = 1;
            }
            if (T[0][2] == 'O')
            {
                wino = 1;
            }
        }
        if (x - o < 0 || x-o >1 || (winx == 1 && wino == 1))
        {
            printf("3\n");
        }
        else if (winx == 1 && wino == 0 && x > o)
        {
            printf("1\n");
        }
        else if (wino == 1 && winx == 0 && x == o)
        {
            printf("1\n");
        }
        else if (winx == 0 && wino == 0 && non == 0)
        {
            printf("1\n");
        }
        else if (winx == 0 && wino == 0 && non != 0)
        {
            printf("2\n");
        }
        else if (winx == 0 && wino == 0 && non == 9)
        {
            printf("2\n");
        }
        else
        {
            printf("3\n");
        }
    }

    return 0;
}