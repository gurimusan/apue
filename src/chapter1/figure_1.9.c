#include "apue.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int
main(void)
{
    printf("uid = %d, gid = %d\n", getuid(), getgid());
    exit(0);
}
