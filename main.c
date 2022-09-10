#include <stdio.h>
#include <windows.h>
int main(){
    int hour,minute,second;
    int delay=1000;
    printf("set time\n");
    scanf("%d%d%d",&hour,&minute,&second);
    if(hour>12||minute>60||second>60){
        printf("ERROR \n");
        exit(0);
 
    }
    while(TRUE)
    {
        second++;
        if(second>59){
            minute++;
            second=0;

        }
        if(minute>59){
            hour++;
            minute=0;
            
        }
        if(hour>12){
            hour=1;
            
        }
        printf("\n CLOCK");
        printf("\n %02d: %02d: %02d",hour,minute,second);
        Sleep(delay);
        system("cls");
    }
    
}