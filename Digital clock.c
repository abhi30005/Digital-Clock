#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main() {
    time_t s;
    struct tm* ct;
printf("Date\t\tTime\n");
    while(1) {
        s = time(NULL);
        ct = localtime(&s);
        printf("\r%02d/%02d/%04d   %02d:%02d:%02d ",ct->tm_mday, ct->tm_mon + 1, ct->tm_year + 1900
		,ct->tm_hour,ct->tm_min,ct->tm_sec);
        fflush(stdout);
        usleep(1000000);
    }
    return 0;
}