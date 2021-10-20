#include <iostream>
using namespace std;
int main(){
    int x[5] ={1,2,3,5,6};
    int *p = x;
    for(int i=0 ; i<3 ; i++){
        int temp=*(p+i);
        *(p+i)=*(p+4-i);
        *(p+4-i)=temp;
    }
    for(int i=0 ; i<5 ;i++){
        cout<<x[i]<<" ";
    }

}