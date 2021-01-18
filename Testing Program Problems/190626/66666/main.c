#include<stdio.h>
#include"tools.h"



struct kongkuai

{

int startaddr;

int size;

int flag;

};

extern struct kongkuai kongxq[6];

int main()

{

int jobsize,start;

char end;

printf("\nIs there a job request,y or n:");

while((end=getchar())=='y')

{

printf("Initial free zone state:\n");

circle();

print();

printf("Please enter the requested free area job size:");

scanf("%d",&jobsize);

start=allocate(jobsize);

circle();

printf("The state of the allocated free zone:\n");

print();

if(!start)

printf("There is no suitable free area size\n");

else

printf("Job start address:%d\n",start);

printf("size of job:%d\n",jobsize);

callback();

circle();

print();

printf("Are there any other job requests, y or n:");

end=getchar();

}



}
