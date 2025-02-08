#include <stdio.h>
#include <stdlib.h>
struct co 
{
   int beginnigh;
   int endingh;
};
int main(){    	
    int n,i,m,j;
    scanf("%d",&n);
    struct co clients[n];
    m=1;
    for (i=0;i<n;i++)
        {
            scanf("%d %d",&clients[i].beginningh,&clients[i].endingh);
        }

    i=0;
    for (int j=1;i<j && j<n;j++)
        {
          if (clients[i].endingh<=clients[j].beginningh)
             {
                  m=m+1;
                  i=j;
             }
                     
        }
    printf("%d",m);
    return 0;
}
