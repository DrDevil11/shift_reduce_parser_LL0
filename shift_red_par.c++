#include<iostream>
#include<string.h>
using namespace std;

// A -> A + A | A * A | A / A | A - A | A % A 
// A -> i
  
  string stack="";
  string input=""; 


void reducer()
{
    for(int i=0;stack[i]!='\0';i++)
    {
        if(stack[i]=='i')
        {
            cout<<"reducing i to A\n";
            stack[i]='A';
            cout<<"STACK "<<stack<<endl;
        }
    }
    if(stack=="A+A")
     {
        cout<<"reducing A+A to A\n";
        stack="A";
        cout<<"STACK "<<stack<<endl;
     }
     else if(stack=="A-A")
     {
        cout<<"reducing A-A to A\n";
        stack="A";
        cout<<"STACK "<<stack<<endl;
     }
     else if(stack=="A/A")
     {
        cout<<"reducing A/A to A\n";
        stack="A";
        cout<<"STACK "<<stack<<endl;
     }
     else if(stack=="A*A")
     {
        cout<<"reducing A*A to A\n";
        stack="A";
        cout<<"STACK "<<stack<<endl;
     }
     else if(stack=="A%A")
     {
        cout<<"reducing A%A to A\n";
        stack="A";
        cout<<"STACK "<<stack<<endl;
     }
}

void shifter()
{
 for(int i=0;input[i]!='\0';i++)
 {stack = stack + input[i];
  cout<<"shifting "<<input[i]<<" on to the stack\n";
  cout<<"STACK "<<stack<<endl;
  reducer();
 }
if(stack=="A")
    {cout<<"passed\n";}
else 
    {cout<<"failed\n";}
}



int main()
{ 
  

  cout<<"enter input string ";
  cin>>input;
  
  shifter();
}