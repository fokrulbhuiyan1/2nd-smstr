/*Write a program that can take input Id and Semester of 3 students and also print output for these 3 students. Do the program in 6 different ways.
c) Using 1 dimensional array
*/
#include<iostream>

using namespace std;

int main(){
    int id[10];
    int sem[10];
    int i;

    for(i=0;i<3;i++){
    cin>>id[i];
    cin>>sem[i];
    cout<<id[i]<<endl;
    cout<<sem[i]<<endl;
    }
return 0;
}
