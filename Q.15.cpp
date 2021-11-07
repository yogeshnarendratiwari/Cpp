// ----Nesting of member functions----
#include <iostream>
#include <string>
using namespace std;
class Yogesh
{
    string s;         // By default private
    void check(void); // private member function
public:
    void read(void);
    void ones(void);

} yogesh;

void Yogesh ::read(void)
{
    cout << "Enter a binary number ";
    cin >> s;
}

void Yogesh ::ones()
{
    check(); // Nesting
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            cout << '1';
        }
        if (s.at(i) == '1')
        {
            cout << '0';
        }
    }
}
void Yogesh ::check(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Entered number is not a binary number" << endl;
            exit(0);
        }
    }
}
int main()
{

    yogesh.read();
    // yogesh.check();
    yogesh.ones();
}