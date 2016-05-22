#include "apue.h"
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <unistd.h>

int
main(void)
{
    char    buf[MAXLINE];
    pid_t   pid;
    int     status;

    printf("%% ");
    while(fgets(buf, MAXLINE, stdin) != NULL) {
        // execlpはnull終端の引数である必要があるため改行文字をnullに置換
        if (buf[strlen(buf)-1] == '\n') {
            buf[strlen(buf)-1] = 0;
        }

        if ((pid = fork()) < 0) {
            err_sys("fork error");
        }

        // 子プロセス
        if (pid == 0) {
            execlp(buf, buf, (char *)0);
            err_ret("couldn't execute: %s", buf);
            exit(127);
        }

        // 親プロセス
        if ((pid = waitpid(pid, &status, 0)) < 0) {
            err_sys("waitpid error");
        }

        printf("%% ");
    }

    exit(0);
}
