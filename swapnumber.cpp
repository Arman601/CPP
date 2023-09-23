#include<iostream>
using namespace std;
/*int sum(int a, int b){
    int c = a+b;
    return c;
}*/
//This is the program of swap two number;
//is kahte hai call by refrence by using pointers
void swappointers(int* a, int* b){


int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a  = 5,b= 10;
    cout<<"Before swp: "<<endl;
    cout<<"the value of a = "<<a<<endl;
    cout<<"the value of b = "<<b<<endl;
    cout<<"After swp: "<<endl;
    swappointers(&a,&b);
    

    cout<<"the value of a is: "<<a<<endl;
    cout<<"the value of b is: "<<b<<endl;

    return 0;
}