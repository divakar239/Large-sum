#include <iostream>
#include<string>
#include <cstdlib>
#include <stdio.h>
using namespace std;

int main(int argc, char*argv[])
{
    string fn=argv[1];
    string sn=argv[2];
    
    cout<<fn[0];
    return 0;
}




/*
 //1. Seperating characters from argv inputs and storing them into arrays.
 
 string number1=argv[1];
 string number2=argv[2];
 
 int a=strlen(argv[1]);
 int b=strlen(argv[2]);
 
 cout<<number1[0]<<endl;
 //2. storing chars into int arrays.
 int array1[]={0};
 int array2[]={0};
 
 for(int i=0;i<a;i++)
 {
 array1[i]=number1[i]-'0';
 }
 
 for(int i=0;i<b;i++)
 {
 array2[i]=number2[i]-'0';
 }
 
 for(int j=0;j<a;j++){cout<<array1[j];}
 
 /* 3. adding each int 1 by 1


int sum1[a+1]; //array storing each element after adding.


//sum1[0]=array1[a-1]+number2[b-2];

//int sum2[b+1];
//sum2[0]=number[a-1]+number2[b-2];



for(int k=1;k<b;k++)
{
    sum1[a-k]=array1[a-k]+array2[b-k]; //adding right most elements
    
    if(sum1[a-1]>9)
    {
        sum1[a-k-1]=sum1[a-k-1]+1;     // adding one if sum of elements exceeds 9.
    }
}


for(int j=0;j<a;j++){cout<<sum1[j];}
    
    cout<<endl;*/
    
    
    //string name;
    // name=(string)argv[1];
    
    //char array1[10000000000]
    //cout<<name
    
