#include stdio.h
#include unistd.h
#include syswait.h
int
main(int argc, char argv)
{
 printf(a);
 fork();
 printf(b);
 fork();
 printf(c);
 fork();
 printf(d);
 wait(NULL);
 printf(e);
 return (0);
}