#include<unistd.h>
#include<stdio.h>
int main(void){

int a = 1,b=5;

int diff = 4;

pid_t ppid;

ppid = getppid();

printf("the ppid is %d\n",ppid);

printf("the difference is %d\n",diff);


return 0;
}
