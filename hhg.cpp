#include<iostream>

    using namespace std;
    int main()
    {
    char str[] = "university";
    char *s = str;
    cout<<++s+5;

    return 0;
    }

    
    
int main()
{
int a, b;
cout<<"\n Enter the value of a and b";
cin>>a>>b;
int *p,*q;
p=&a;
q=&b;
++p;
cout<<"\n value of p="<<p<<endl;
cout<<"\n value of q="<<q<<endl;
int res=p-q;//48-40=8/4
cout<<"\n Result of subtraction "<<res;//2
getch();
}

int main()
{
void *ptr;
int a=100;
float b=5.6;
char ch='X';
ptr=&a;
cout<<*(int*)ptr<<endl;
ptr=&b;
cout<<"\n float value is"<<*(float*)ptr;
ptr=&ch;
cout<<"\n char value is"<<*(char*)ptr;
getch();

}