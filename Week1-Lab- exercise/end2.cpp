#include<iostream>
using namespace std;
int main(){
int state=0,i=0;
char current,input[20];
cout<<"Enter input string \t :";
cin>>input;
while((current=input[i++])!='\0'){
switch(state)
{
case 0: if(current=='a')
state=1;
else if(current=='b')
state=2;
else
{
cout<<"Invalid token"<<endl;
exit(0);
}
break;
case 1: if(current=='a')
state=3;
else if(current=='b')
state=2;
else
{
cout<<"Invalid token"<<endl;
exit(0);
}
break;
case 2: if(current=='a')
state=1;
else if(current=='b')
state=4;
else
{
cout<<"Invalid token"<<endl;
exit(0);
}
break;
case 3: if(current=='a')
state=3;
else if(current=='b')
state=2;
else
{
cout<<"Invalid token"<<endl;

exit(0);
}
break;
case 4: if(current=='a')
state=1;
else if(current=='b')
state=4;
else
{
cout<<"Invalid token"<<endl;
exit(0);
}
break;
}
}
if(state==3||state==4)
cout<<"\n\nString accepted\n\n"<<endl;
else
cout<<"\n\nString not accepted\n\n"<<endl;
}
