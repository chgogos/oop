template <class Object>
class MemoryCell
{
private:
    Object storedValue;

public:
    explicit MemoryCell(const Object &initialValue = Object()) : storedValue(initialValue) {}
    const Object &read() const
    {
        return storedValue;
    }
    void write(const Object &x)
    {
        storedValue = x;
    }
};

