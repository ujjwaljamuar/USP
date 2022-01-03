#include <stdio.h>
#include <unistd.h>

int main(){

int x;
x = 0;
fork();
x = 1;

printf("I am process %ld and y x is %d \n",(long)getpid(),x);

return 0;

}
