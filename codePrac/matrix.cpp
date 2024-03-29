#include <iostream>

class Diagonal
{
private:
    int *A;
    int n;

public:
    Diagonal()
    {
        n=2;
        A=new int[2];
    }

    Diagonal(int n)
    {
        this->n = n;
        A = new int[n];
    }

    ~Diagonal()
    {
        delete []A;
    }

    void Set(int i, int j, int x);
    int Get(int i, int j);
    void Display();

};


void Diagonal::Set(int i, int j, int x)
{
    if(i==j)
        A[i-1]=x;
}

int Diagonal::Get(int i, int j)
{
    if(i==j)
        return A[i-1];
    return 0;
}

void Diagonal::Display()
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j)
                std::cout<<A[i] << " ";
            else    
                std::cout<< "0 ";
        }
        std::cout<<std::endl;
    }
}

class LowerTri
{
private:
    int *A;
    int n;
public:
    LowerTri()
    {
        n = 2;
        A = new int[2*(2+1)/2];
    }

    LowerTri(int n)
    {
        this->n = n;
        A = new int[n*(n+1)/2];
    }

    ~LowerTri()
    {
        delete[] A;
    }

    void Set(int i, int j, int x);
    int Get(int i, int j);
    void Display();
    int GetDimension() { return n; }
};

void LowerTri::Set(int i, int j, int x)
{
    if (i >= j)
        A[i*(i+1)/2+j] = x;
}

int LowerTri::Get(int i, int j)
{
    if (i >= j)
        return A[i*(i+1)/2+j];
    return 0;
}

void LowerTri::Display()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i >= j)
                std::cout << A[i*(i+1)/2+j] << " ";
            else
                std::cout << "0 ";
        }
        std::cout << std::endl;
    }
}

int main()
{
    int dimen;
    std::cout << "Enter Dimensions: ";
    std::cin >> dimen;
    LowerTri lm(dimen);

    int x;
    std::cout << "Enter All Elements: ";
    for (int i = 1; i <= dimen; i++)
    {
        for (int j = 1; j <= dimen; j++)
        {
            std::cin >> x;
            lm.Set(i, j, x);
        }
    }
    lm.Display();

    // Diagonal d(4);
    // d.Set(1,1,5);
    // d.Set(2,2,8);
    // d.Set(3,3,5);
    // d.Set(4,4,5);

    // d.Display();

    return 0;
}