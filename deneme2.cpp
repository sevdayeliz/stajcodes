#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
int number;
//int fibo[3];
//fibo[0]=0;
//fibo[1]=1;
//fibo[2]=1;
//int change[]={0,1,1};
std::cout<<"please enter an integer  number: "<<endl;
std::cin>>number;

if (number==0)
std::cout<<"wanted fibonacci number is: 0"<<endl;
else if (number<0)
std::cout<<"There is not a fibonacci number which is smaller than the number which was entered by yours."<<endl;
else if (number==1)
std::cout<<"wanted fibonaccinumbers is: [0,1,1]"<<endl;
else
{
int a,fibo1,fibo2,x;
fibo1=1;
fibo2=1;
cout<<"first three fibonacci numbers: 0,1,1"<<endl;
for(int x=0;x<number;x++)
{
a=fibo2;
fibo2=fibo1+fibo2;
if (fibo2<=number)
{
std::cout<<x+4<<".wanted fibonacci number is: "<<fibo2<<endl;
fibo1=a;
}
else
break;

}
}
return 0;
}

