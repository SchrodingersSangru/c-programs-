//using recursion


#include <stdio.h>
int main()
{


    int i,j,h,n,a[100];
    int hcf(int,int);
    //  clrscr();
    printf("Enter how many numbers :");
    scanf("%d",& n);
    for(i=0;i<n;i++)
        {
             printf("Enter a Number :");
             scanf("%d",& a[i]);
        }
             for(i=0;i<n-1;i++)
                {
                      h=hcf(a[i],a[i+1]);
                      a[i+1]=h;
                }
                      printf("The HCF is :  %d",h);
                    //   getch();

    return 0;
}


int hcf(int a,int b)
  {
       if(a%b==0)
        {
               return b;
        }
       else
       {
               return(hcf(b,a%b));
       }
  }
