// Obejct memory allocation and arrays in classes

#include <iostream>
#define n 100
using namespace std;

// Functions that are common in different objects , takes memory once not different for different objects

class Shop
{
    int itemId[n];
    int itemPrice[n];
    int counter;

public:
    void initCounter(void)
    {
        counter = 0;
    }
    void getPrice(void);
    void setPrice(void);
};

void Shop ::setPrice(void)
{
    
    cout << "Enter Id for your item " << counter+1 << " ";
    cin >> itemId[counter];
    cout << "Enter price for your item ";
    cin >> itemPrice[counter];
    counter++;
}

void Shop ::getPrice(void)
{
    cout << "itemId" << " : " << "itemPrice" << endl;
    for (int i = 0; i < counter; i++)
    {
        cout << itemId[i] << " : " << itemPrice[i] << endl;
    }
}
int main()
{   
    Shop s;
    // s.counter=0; --> Inaccessible because it is by default private
    s.initCounter();
    s.setPrice();
    s.setPrice();
    s.setPrice();
    s.getPrice();
    return 0;
}