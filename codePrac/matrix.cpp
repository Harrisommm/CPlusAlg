struct Matrix
{
    int A[10];
    int n;
};

void Set(struct Matrix *m, int i, int j, int x)
{
    if(i==j)
        m -> A[i-1]=x;
}

void Get(struct Matrix m, int i, int j)
{
    if(i==j)
        return m.A[i-1];
    else
        return 0;
}



int main()
{
    struct Matrix m;


    return 0;
}