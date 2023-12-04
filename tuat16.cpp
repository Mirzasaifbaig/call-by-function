#include<iostream>
using namespace std;
// *******************------->function are call by two ways<----- *******************
// *************call by value************------**********call by reference***********
//***************---------------> call by value<-----------************* 
int sum(int a,int b){
        int c = a+b;
        return c;
    } 
    // // swap will not able to change the value 
    // void swap(int a,int b){
    //     int temp =a;
    //     a=b;
    //     b =temp;
    // ******************-------->call by refrence<---------**************
    void swappointer(int *a,int *b){
        int temp =*a;
        *a=*b;
        *b =temp;
    }
int main(){
    int a=5 ,b=4;
    // cout<< "chal chavala value " <<sum(4,5);
    cout<<"The value of a is "<<a<<" The value of b is"<<b<<endl;
    // swap(a ,b);
    swappointer (& a,& b);

    cout<<"The value of a is "<<a<<" The value of b is"<<b<<endl;
    

    return 0;
    
        
}
