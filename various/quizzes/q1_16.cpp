class Engine
{
private:
    int cc;
public:
    Engine(int _cc) : cc(_cc) {}
};
class Car
{
private:
    Engine engine;
public:
    Car(Engine eng) : engine(eng) {}
};
int main()
{
    Engine e(1600);
    Car c(e);
}