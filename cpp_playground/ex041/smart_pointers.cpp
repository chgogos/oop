#include <memory>
#include <iostream>

int main()
{
    std::unique_ptr<int> up1 = std::make_unique<int>();
    *up1 = 42;
    std::cout << "unique pointer up1 points at memory=" << up1 << " and has value=" << *up1 << std::endl;

    std::shared_ptr<double> sp1 = std::make_shared<double>();
    std::shared_ptr<double> sp2 = sp1;
    std::shared_ptr<double> sp3 = sp1;
    *sp1 = 3.1415;
    std::cout << "shared pointer sp1 points at memory=" << sp1 << " and has value=" << *sp1 << std::endl;
    std::cout << "shared pointer sp2 points at memory=" << sp2 << " and has value=" << *sp2 << std::endl;
    std::cout << "shared pointer sp3 points at memory=" << sp3 << " and has value=" << *sp3 << std::endl;

    std::weak_ptr<double> wp1 = sp1;
    auto sp4 = wp1.lock();
    if (sp4)
    {
        *sp4 = 2.7182;
        std::cout << "weak pointer wp1 points at memory=" << sp4 << " and has value=" << *sp4 << std::endl;
    }
    else
    {
        std::cout << "weak pointer wp1 has expired" << std::endl;
    }
    std::cout << "shared pointer sp1 points at memory=" << sp1 << " and has value=" << *sp1 << std::endl;
    std::cout << "shared pointer sp2 points at memory=" << sp2 << " and has value=" << *sp2 << std::endl;
    std::cout << "shared pointer sp3 points at memory=" << sp3 << " and has value=" << *sp3 << std::endl;

    return 0;
}
