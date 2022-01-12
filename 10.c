#include <stdio.h>
int max(int C[], int N)
{
    int f;
    
    // Initialize maximum element
    int max = C[0];
 
    // Traverse array elements from second and
    // compare every element with current max 
    for (f = 1; f < N; f++)
        if (C[f] > max)
            max = C[f];
 
    return max;
}
int main()
{
    int T=0;
    scanf("%d",&T);
    int i=0;
    for(i=0;i<T;i++)
    {
        int N=0,M=0;
        scanf("%d %d",&N,&M);
        int H[N];
        int j=0;
        for(j=0;j<N;j++)
        {
            scanf("%d",&H[N]);
        }
        int m=0;
        for(m=0;m<M;m++)
        {
            int A=0,B=0;
            scanf("%d %d",&A,&B);
            int max1 = 0;
            if(A > B)
            {
                max1 = A;
            }
            else
            {
                max1 = B;
            }
            int k=0,l=0,count=0;
            for(k=H[max1+1];m<N;m++)
            {
                int C[N-max1],d=0;
                for(l=max1;l<k;l++)
                {
                    C[d] = H[l];
                    d++;
                }
                int h = max(C , N);
                if(h < k)
                {
                    count++;
                }
            }
            printf("%d",count);

        }
    }
    return 0;
}