#include <moca.h>

#include <stdio.h>
#include <stdlib.h>

#include <mocagendef.h>
#include <mocaerr.h>
#include <mislib.h>
#include <oslib.h>
#include <mxmllib.h>

#include <stdio.h>

int main(int argc, char *argv[])
{
    char temp[1000];

    memset(temp, 0, sizeof temp);
    sprintf(temp, "\n");

    printf("TEMP: %s\n", temp);
    printf("TEMP[0]: %d\n", temp[0]);
    printf("TEMP[1]: %d\n", temp[1]);
    printf("TEMP[2]: %d\n", temp[2]);

    exit(0);
}

