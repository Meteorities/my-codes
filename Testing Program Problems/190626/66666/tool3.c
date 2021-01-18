#include"tools.h"
#include<stdio.h>
struct kongkuai

{

int startaddr;

int size;

int flag;

};
extern struct kongkuai kongxq[6];


int circle()

{

int i,j;

struct kongkuai temp;

for(i=0;i<6;i++)

for(j=0;j<6;j++)

if(kongxq[j].size>kongxq[j+1].size)

{

temp.startaddr=kongxq[j].startaddr;

temp.size=kongxq[j].size;

temp.flag=kongxq[j].flag;

kongxq[j].startaddr=kongxq[j+1].startaddr;

kongxq[j].size=kongxq[j+1].size;

kongxq[j].flag=kongxq[j+1].flag;

kongxq[j+1].startaddr=temp.startaddr;

kongxq[j+1].size=temp.size;

kongxq[j+1].flag=temp.flag;

}

for(i=0;i<6;i++)

for(j=0;j<6;j++)

if(kongxq[j].flag==0&&kongxq[j+1].flag==1)

{

temp.startaddr=kongxq[j].startaddr;

temp.size=kongxq[j].size;

temp.flag=kongxq[j].flag;

kongxq[j].startaddr=kongxq[j+1].startaddr;

kongxq[j].size=kongxq[j+1].size;

kongxq[j].flag=kongxq[j+1].flag;

kongxq[j+1].startaddr=temp.startaddr;

kongxq[j+1].size=temp.size;

kongxq[j+1].flag=temp.flag;

}

return 1;

}



int callback()

{

int s,len,t1=0,t2=0,t3=0,i,j;

printf("Please enter the inital address of the recyling area :\n");

scanf("%d",&s);

printf("Please enter the size of recyling area:\n");

scanf("%d",&len);

for(i=0;i<6;i++)

{

if((kongxq[i].startaddr==s+len)&&(kongxq[i].flag==1))

{

len+=kongxq[i].size;

t1=1;

for(j=0;j<6;j++)

if((kongxq[j].startaddr+kongxq[j].size==s)&&(kongxq[j].flag==1))

{

kongxq[i].flag=0;



kongxq[j].size=kongxq[j].size+len;


t2=1;

break;

}

if(t2==0)

{

kongxq[i].startaddr=s;

kongxq[i].size=len;

break;

}

}

}

if(t1==0)

{

for(i=0;i<6;i++)

{

if((kongxq[i].startaddr+kongxq[i].size==s)&&(kongxq[i].flag==1))

{

kongxq[i].size+=len;

t3=1;

break;

}

if(t3==0)

for(j=0;j<6;j++)

if(kongxq[j].flag==0)

{

kongxq[j].startaddr=s;

kongxq[j].size=len;

kongxq[j].flag=1;

break;

}

}



}



return 1;

}



void print()

{

int i;

printf("\n inital address| size | sign\n\n");

for(i=0;i<6;i++)

{

printf(" %3d | %3d | %3d \n",

kongxq[i].startaddr,kongxq[i].size,kongxq[i].flag);

}

printf("\n");

}


