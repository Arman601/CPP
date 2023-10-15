#include<iostream>
using namespace std;
class binary{  
string s;   
public:

void read(void);           
void chk_bin(void);   
void ones_compliment(void); 
void display(void);  
};
void binary::read(void){
    cout<<"Enter the binary number"<<endl;
    cin>>s;
}
void  binary::chk_bin(void){
    for(int i = 0; i < s.length();i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1'){    
            cout<<"Encorrect binary formante"<<endl;  
            exit(0);

        }
}
}
void binary::display(void)
{
    cout<<"Display you binary number"<<endl;
    for(int  i = 0; i<s.length(); i++){
    cout<<s.at(i);
    }
    cout<<endl;


}

void binary:: ones_compliment(void){
    //chk_bin();

    for(int i =  0; i <s.length(); i++)
    {
        
       if(s.at(i) =='0')
       {
        s.at(i) =='1';
        }
        else
        {
         
        
        s.at(i) = '0';
        }

}
}

int main(){
binary b;
b.read();
b.chk_bin();
b.ones_compliment();
b.display();


return 0;
}

