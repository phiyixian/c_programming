#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <windows.h>

int main(){

    //DIGITAL CLOCK
    time_t rawTime = 0; // Jan 1 1970 (Epoch)
    struct tm *pTime = NULL;
    bool isRunning = true;

    printf("DIGITAL CLOCK\n");

    while(isRunning){
        time(&rawTime);

        pTime = localtime(&rawTime); //convert raw time to local time

        printf("\r%02d:%02d:%02d ", 
        (*pTime).tm_hour,
        (*pTime).tm_min,
        (*pTime).tm_sec);

        Sleep(1000); //pause the program for 1000 milliseconds (1 second)
    }

    return 0;
}