#include <iostream>
#include <string>
#include <cctype>

// void treeRec(int n)
// {
//     if(n>0)
//     {
//         std::cout << n;
//         treeRec(n-1);
//         treeRec(n-1);
//     }
// }
// void indiRecB(int m);
// void indiRecA(int m)
// {
//     if(m>0)
//     {
//         std::cout << m;
//         indiRecB(m-1);
//     }
// }
// void indiRecB(int m)
// {
//     if (m>0)
//     {
//         std::cout << m;
//         indiRecA(m/2);
//     }
// }

// int nestedRec(int x)
// {
//     if(x>100)
//         return x-10;
//     return nestedRec(nestedRec(x+11));
// }

// int naturalSum(int y)
// {
//     if(y==0)
//     {
//         return y;
//     }
//     else
//         return naturalSum(y-1)+y;
// }

// int Fac(int i)
// {
//     if(i==0)
//     {
//         return 1;
//     }
//     else
//         return Fac(i-1)*i;
// }

// double taylor(int x, int n)
// {
//     static double s;
//     if(n==0)
//     {
//         return s;
//     }
//     else
//     {
//         s = 1.0 + x*s/n;
//         return taylor(x,n-1);
//     }
// }
int fib(int n)
{
    static int s;
    if(n<=1)
    {
        return n;
    }
    else
    {
        return (fib(n-2)+fib(n-1));
    }
}

int main()
{
    std::cout << fib(7);    
    return 0;

};  

