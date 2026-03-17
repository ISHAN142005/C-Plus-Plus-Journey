#include <iostream>
using namespace std;

class Product
{
private:
    string name;
    float price;
    int quantity;

public:
    Product(string n, float p, int q)
    {
        name = n;
        price = p;
        quantity = q;
    }

    void totalCost()
    {
        cout << "Product: " << name << endl;
        cout << "Total Cost: " << price * quantity << endl;
    }

    ~Product()
    {
        cout << "Product removed from memory: " << name << endl;
    }
};

int main()
{
    Product p1("TELIVISION", 50000, 1);
    Product p2("WATCH", 2000, 2);

    p1.totalCost();
    p2.totalCost();

    return 0;
}