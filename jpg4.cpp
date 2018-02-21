#include<iostream>
using namespace std;

int main(){
    int x,y,n,p,q;
    cout<<"Lest Year ";
    cin>> x;
    cout<<endl<<"Correct Year ";
    cin>>y;
    cout<<endl<<"Population of Lest Year ";
    cin>>n;
    p = y-x;
    q = n + (p*(.15*n));
    cout<<endl<<"Correct Population "<<q<<" Nember of Years "<<p<<endl;



return 0;
}
