#include"tools.h"
#include<stdio.h>

struct kongkuai

{

int startaddr;

int size;

int flag;

};
extern struct kongkuai kongxq[6];



int allocate(int jobsize) {

struct kongxq;

int i;

int t=0;

for(i=0;i<6;i++)

if(kongxq[i].flag==1&&kongxq[i].size>jobsize)

{

kongxq[i].startaddr+=jobsize;

kongxq[i].size-=jobsize;

t=1;

return kongxq[i].startaddr-jobsize;

}

else

if(kongxq[i].flag==1&&kongxq[i].size==jobsize)

{

kongxq[i].flag=0;

t=1;

return kongxq[i].startaddr;

}

if(t==0)



return 1;

}

