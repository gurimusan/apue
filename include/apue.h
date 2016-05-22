#define MAXLINE 4096    /* max line length */


void err_ret(const char *, ...);
void err_quit(const char *, ...) __attribute__((noreturn));
void err_sys(const char *, ...) __attribute__((noreturn));
