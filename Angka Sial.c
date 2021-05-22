#include <stdio.h>
int main()
{
    int T, F[1000], B[1000];


    scanf("%d", &T);
    for( int i = 1; i <= T; i++ )
    {
        scanf ("%d %d", &F[i], &B[i]);
     }
      for( int i = 1; i <= T; i++ )
    {
        int hasil = 0;
        for( int j = F[i]; j <= B[i]; j++ )
        {
            if (j % 10 == 4 || j % 10 == 3)
            {
                hasil++;
            }
        }
        printf("%d \n", hasil);
     }

    return 0;
}
