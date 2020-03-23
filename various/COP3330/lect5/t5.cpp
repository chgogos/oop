class IntHolder
{
public:
    IntHolder(int x);
    void Illegal() const;

private:
    int data;
};

IntHolder::IntHolder(int x)
{
    data = x;
}

void IntHolder::Illegal() const
{
    data = 1;
}

int main()
{
    IntHolder myInt(5);
}
