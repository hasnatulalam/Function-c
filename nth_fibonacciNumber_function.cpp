#include <iostream>
using namespace std;

int fib(int n)
{
    if (n == 1){
      return 0;

    }

    else if(n==2)
    {
        return 1;
    }
    else if(n==3)
    {
        return 1;
    }
    else  //recursive part
        return (fib(n - 1) + fib(n - 2));
}

int main()
{
    int n;
    cout << "Enter the term which you want to calculate\n";
    cin >> n;
    cout << "Answer:" << fib(n);
}
