#include<iostream>
using namespace std;
class y;
class x {
    int data;
    public:
    void setvalue( int value ){
    data = value ;
    }
 friend void add(x  , y  );
    

};
class y {
    int data;
    public:
    void setvalue( int value ){
        data = value ;
    }
    friend void add(x  , y  );
};
void add( x o1, y o2 ){
    cout<<"the  summing value of x and y is "<<o1.data + o2 .data<<endl;
}
int main()
{
    x a1;
   
    a1.setvalue( 3);
     y b1;
    b1.setvalue(4 );
    add(a1 , b1);
    return 0;
    }