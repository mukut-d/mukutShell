#include<stdio.h>
#include<unistd.h>
int main(void){
int a = 1,b=5;
int sum = a + b;

pid_t pid;

pid_t ppid;

ppid = getppid();

printf("the parent process id is %d\n",ppid);


pid = getpid();

printf("the process id is %d\n",pid);
printf("the sum of a and b is %d\n",sum);

return 0;

}
