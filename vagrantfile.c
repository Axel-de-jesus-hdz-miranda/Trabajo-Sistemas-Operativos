

















#include<unistd.h>
#include<stdio.h>

int main(void){

pid_t  prodicd;

printf("My current process id is %d \n", getpid());

procid = fork();

printf("Fork ID %d \n", procid);
printf("calling fork %d \n", getppid());

return 0;




}













































