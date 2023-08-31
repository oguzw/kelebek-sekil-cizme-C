#include <stdio.h>
#include <stdlib.h>

void ustkisim(int n)
{
    int i,j,x,yildizsayi;


    for(i=n; i>0; i--)
    {

        for(x=1;x<=i*2-1;x++)
            {
                printf("*");
            }

        printf("\n");
    }

}
void altkisim (int m)
{
    int i,j,x;
    for(i=1;i<=m;i++)
    {
        for(j=m-i-1;j>=0;j--)
        {
            printf(" ");
        }
        for(x=1;x<=i*2-1;x++)
        {
            printf("*");
        }
        printf("\n");
    }
}


int main()

{


    int girdi;
    printf("Kac satir olsun\n");
    scanf("%d",&girdi);
    ustkisim(girdi);
    altkisim(girdi);
    return 0;
}
