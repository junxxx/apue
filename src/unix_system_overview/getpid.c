#include "../header/apue.h"
int main(void)
{
    printf("hello world from process ID %ld\n", (long)getpid());
    sleep(100);
    exit(0);
}
