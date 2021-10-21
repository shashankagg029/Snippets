#include<stdio.h>

intshowarr(int*arr,int*size)
{
for(inti=0;i<*size;i++)
{
printf("%d",arr[i]);
}
printf("\n");
return 0;
}

intaddelement(int*arr,int*size,intindex,intvalue)
{
for(inti=*size;i>index;i--)
{
arr[i]=arr[i-1];
}
arr[index]=value;
*size+=1;
return 0;
}

intdelelement(int*arr,int*size,intindex)
{
for(inti=index;i<*size-1;i++)
{
arr[i]=arr[i+1];
}
*size-=1;
return 0;
}

intmain()
{
intsize;
intarr[20]={1,5,7,12};
size=4;
showarr(arr,&size);
addelement(arr,&size,3,6);
showarr(arr,&size);
delelement(arr,&size,2);
showarr(arr,&size);
return 0;
}
