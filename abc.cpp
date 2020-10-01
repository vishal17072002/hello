#include<iostream.h>
#include<conio.h>
class l_search
{
int i,pos,size,arr[10];
public:
void enter();
void search();
};
void l_search::enter()
{
cout<<"Enter how many elements you want to enter max 10 ";
cin>>size;
cout<<"\nenter the array";
for(i=0;i<size;i++)
cin>>arr[i];
}

void l_search::search()
{ 	int item;
cout<<"Enter which item you want to search ";
cin>>item;
int r=-1,pos=0;
for(i=0;i<size;i++)
{
if (arr[i]==item)
{
pos=i+1;
r=1;
}
}
if(r==-1)
cout<<"item not found";
else
cout<<"Item found at position"<<pos;
}

void main()
{
clrscr();
l_search obj;
obj.enter();
obj.search();
getch();
}
