#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct date
{
    int ev;
    int honap;
    int nap;
}Date;

void Beolvas(Date *date);
void Kiir(Date date);
Date RegebbiDatum(Date date1, Date date2);
int Eletkor(Date date);

int main()
{
    Date date1;
    Date date2;
    Beolvas(&date1);
    Beolvas(&date2);
    Date regebbi = RegebbiDatum(date1, date2);
    Kiir (regebbi);
    printf("Eletkora: %d", Eletkor(date1));
    return 0;
}

void Beolvas(Date *date)
{
    printf("Ev?\n");
    scanf("%d", &date->ev);
    printf("Honap?\n");
    scanf("%d", &date->honap);
    printf("Nap?\n");
    scanf("%d", &date->nap);
}

void Kiir(Date date)
{
    printf("%d.%d.%d.\n", date.ev, date.honap, date.nap);
}
Date RegebbiDatum(Date date1, Date date2)
{
    if (date1.ev == date2.ev)
    {
        if(date1.honap == date2.honap)
        {
            if(date1.nap < date2.nap)
            {
                return date1;
            }
        }
        else
        {
            if(date1.honap < date2.honap)
            {
                return date1;
            }
        }
    }
    else
    {
        if(date1.ev < date2.ev)
        {
            return date1;
        }
        return date2;
    }
    
}

int Eletkor(Date date)
{
    char honap[3];
    char string = 
    int ev, nap;
    sscanf(__DATE__, "%s %d %d", honap, &nap, &ev);

    switch (honap)
    {
    case 'Jan':
        return ev-date.ev;
        break;
    case 'Feb':
        return ev-date.ev;
        break;
    case 'Mar':
        return ev-date.ev;
        break;
    case 'Apr':
        return ev-date.ev;
        break;
    case 'May':
        return ev-date.ev;
        break;
    case 'Jun':
        return ev-date.ev;
        break;
    case 'Jul':
        return ev-date.ev;
        break;
    case 'Aug':
        return ev-date.ev;
        break;
    case 'Sep':
        return ev-date.ev;
        break;
    case 'Okt':
        return ev-date.ev;
        break;
    case 'Nov':
        if(nap > date.nap)
        {
            return (ev-date.ev)-1;
        }
        else
        {
            return ev-date.ev;
        }
        break;
    default:
        return (ev-date.ev)-1;
        break;
    }
    
    if (strcmp(honap, "Jan") == 0)
    {
        /* code */
    }
    
}   