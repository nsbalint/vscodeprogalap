#include<stdio.h>
#include<stdlib.h>

int tikeletes(int num);

int main()
{
    int num;
    int count = 0;;
    scanf("%d", &num);
    

    for(int i = 1; i <= num; i++)
    {
       int a = tikeletes(i);
       if(a == 1)
       {
        count++;
       }
    }
    printf("%d darab tokeletes szamot talaltam %d-ig\n",count,num);
    return 0;
}

int tikeletes(int num)
{
    int osszeg = 0;
    for(int i = 1; i <= num/2; i++)
    {
        if(num % i == 0)
        {
            osszeg += i;
        }
    }

    if(osszeg == num)
    {
        printf("%d tokeletes \n",num);
        return 1;
    }
    else
    {
        printf("%d nem az\n",num);
        return 0;
    }
}