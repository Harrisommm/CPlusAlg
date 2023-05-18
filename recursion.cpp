#include <iostream>
#include <string>
#include <cctype>

void treeRec(int n)
{
    if(n>0)
    {
        std::cout << n;
        treeRec(n-1);
        treeRec(n-1);
    }
}
void indiRecB(int m);
void indiRecA(int m)
{
    if(m>0)
    {
        std::cout << m;
        indiRecB(m-1);
    }
}
void indiRecB(int m)
{
    if (m>0)
    {
        std::cout << m;
        indiRecA(m/2);
    }
}

int nestedRec(int x)
{
    if(x>100)
        return x-10;
    return nestedRec(nestedRec(x+11));
}

int naturalSum(int y)
{
    if(y==0)
    {
        return y;
    }
    else
        return naturalSum(y-1)+y;
}

int Fac(int i)
{
    if(i==0)
    {
        return 1;
    }
    else
        return Fac(i-1)*i;
}
int main()
{
    int r = Fac(5);
    std::cout << r;
    
    return 0;

};  

