#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    printf("Ez az uzenet azonnal megjelenik!\n");
    sleep(2);
    printf("Ez az uzenet ket masodperccel kesobb jelenik meg!\n");
    return 0;
}