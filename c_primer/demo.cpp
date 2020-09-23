
#include<iostream>

using namespace std;

class Base
{
public:
    virtual double net_price(size_t n) const
    {
        return price * n;
    }
private:
    std::string isbn;
protected:
    double price;
};

class Child : public Base
{
public:
    double net_price(size_t cnt) const
    {
        if(cnt > min_qty)
            return cnt * (1 - discount) * price;
        else
            return cnt * price;
    }
private:
    std::size_t min_qty;
    double discount;
};

int main()
{
    Base *p = new Base();
    allocator<Base> a;
    a.allocate(100);
    cout<<"zhaoliang"<<endl;
    return 0;
}