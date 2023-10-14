#include<iostream>
using namespace std;
class employee{
    private:
    int a,b,c;
    public:
    int d,e;
    void setDeta(int a, int b, int c);
    void getDeta(){
        cout<<"the value of a "<<a<<endl;
        cout<<"the value of b "<<b<<endl;
        cout<<"the value of c "<<c<<endl;
        cout<<"the value of d "<<d<<endl;
        cout<<"the value of e "<<e<<endl;
             
    }
};
        void employee::setDeta(int a1, int b1, int c1){
            a = a1;
            b = b1 ;
            c = c1;
        };
        int main(){
            employee arman;
            arman.d = 299;
            arman.e = 677;
            arman.setDeta(1,3,4);
            arman.getDeta();
        }
   
