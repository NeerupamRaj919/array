#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int IntVector;
void bar(void)
{
printf("Augh! I've been hacked!\n");
}
void InsertInt(unsigned index,unsigned iong value)
{
printf("Writing memory at%p\n",&(IntVector[index]));
Int vector[index]=value;
}
bool Init Vector(int size)
{
IntVector=(int*)malloc(sizeof(int)*size);
printf("Address of IntVector is %p\n",IntVector);
if(IntVector==NULL)
return false;
else
return true;
}
int main(int argc,char* arcv[])
{
unsigned long index,value;
if(argc!=3)
{
printf("usage is %s[index][value]\n");
return-1;
}
printf("Address of bar is %p\n",bar);
if(!Init Vector(0xffff))
{
printf("cannot intialize vector!\n");
return-1;
}
index=atoi(argv[1])
Value=atoi(argv[2]);
InsertInt(index,value);
return 0;
}
