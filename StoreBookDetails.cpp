#include<iostream>
using namespace std;
struct book{
    string BookName;
    int Bookprice;
    string BookAuthername;
};

int main()
{
    book book;
    cout<<" Enter Book  Details: "<<endl;
    cout<<"-------------------------"<<endl;
    cout<<"Book Name: ";
    cin>>book.BookName;
    cout<<"Book price:  ";
    cin>>book.Bookprice;
    cout<<"Book auther Name: ";
    cin>>book.BookAuthername;
    
    cout<<"\nBook Details "<<endl;
    cout<<"book name: "<<book.BookName<<endl;
    cout<<"Book price: "<<book.Bookprice<<endl;
    cout<<"Book author Name: "<<book.BookAuthername<<endl;

return 0;

}

