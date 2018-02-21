#include<iostream>

using namespace std;

class student{
public:
int id;
int sem;
};

int main(){
student s;
int i;
cout<<"Enter id and semester ";
for(i=0;i<3;i++){
cin>>s.id;
cin>>s.sem;
cout<<s.id<<endl;
cout<<s.sem<<endl;
}
return 0;
}
