// Fibonacci Series
#include <iostream>
using namespace std;
class Fibonacci
{
public:
    int a, b, c;
    void generate(int);
};
void Fibonacci::generate(int n)
{
    a = 0;
    b = 1;
    cout << a << "" << b;
    for (int i = 1; i <= n - 2; i++)
    {
        c = a + b;
        cout << "" << c;
        a = b;
        b = c;
    }
}
int main()
{
    cout << "Hello World! Fibonacci series" << endl;
    cout << "Enter number of items you need in the series :";
    int n;
    cin >> n;
    Fibonacci fibonacci;
    fibonacci.generate(n);
    return 0;
}