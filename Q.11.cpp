#include <iostream>
using namespace std;
int func1 (int x , int y){
    if(x==0)
    return y;
    func1(x-1,x+y);
}
int func2 (int x , int y){
    if(x==0)
    return y;
    else
    return func2(x-1,x+y);
}
int main(){
int x,y;
cin>>x>>y;
cout<<func1(x,y)<<endl;
cout<<func2(x,y)<<endl;

}