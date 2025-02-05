#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    bool a=false,b=false;
    for ( int i=0; i<n; i++)
        {
          scanf("%d",&arr[i]);
        }
    for ( int i=0;i<n;i++)
        {  if ( arr[i]%2==0)
             {
                a=!a;
                b=!b;
             }
           else
             {
               a=!a;
             }
         }
    printf("%d\n%d",a ,b);

    return 0;
}


