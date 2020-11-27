template <class Object>
class MemoryCell
{
private:
    Object storedValue;

public:
    MemoryCell(const Object &initialValue = Object()) : storedValue(initialValue) {}
    const Object &read() const
    {
        return storedValue;
    }
    void write(const Object &x)
    {
        storedValue = x;
    }
};



class MyClassNotOK
{
public:
    int x;
    MyClassNotOK(int x) : x(x) {}
    MyClassNotOK(const MyClassNotOK &other) = delete;
    // MyClassNotOK& operator=(const MyClassNotOK &other) = delete;
};

class MyClassOK
{
public:
    int x;
    MyClassOK(int x) : x(x) {}
};