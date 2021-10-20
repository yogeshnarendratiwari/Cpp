#include <iostream>
using namespace std;

int *reverse(int *);

int main()
{
    int x[5] = {1, 2, 3, 4, 5};
    int *p;
    p = reverse(x);
    //------------------------------------------Output---------------------------------------------
    for (int i = 0; i < 5; i++)
    {
        cout << *(p+i) << " ";
    }
    return 0;
}

int* reverse (int * a){
    for(int i=0 ; i<3 ; i++){
        int temp=*(a+i);
        *(a+i) = *(a+4-i);
        *(a+4-i)=temp;
    }
    return a;
}