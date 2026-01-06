#include <iostream>
using namespace std;

const int MAX_ITEMS = 100;

class Shop
{
private:
    int itemId[MAX_ITEMS];
    float itemPrice[MAX_ITEMS];
    int counter;

public:
    void initCounter()
    {
        counter = 0;
    }

    void addItem()
    {
        if (counter >= MAX_ITEMS)
        {
            cout << "Memory Full! Cannot add more items." << endl;
            return;
        }

        cout << "Enter ID of item no " << counter + 1 << ": ";
        cin >> itemId[counter];

        cout << "Enter Price of item no " << counter + 1 << ": ";
        cin >> itemPrice[counter];

        counter++;
    }

    void displayItems()
    {
        cout << "\n--- SHOP INVENTORY ---" << endl;
        for (int i = 0; i < counter; i++)
        {
            cout << "Item ID: " << itemId[i]
                 << " | Price: " << itemPrice[i] << endl;
        }
        cout << "----------------------" << endl;
    }
};

int main()
{
    Shop dukaan;
    dukaan.initCounter();

    int choice;

    while (true)
    {
        cout << "\n1. Add Item" << endl;
        cout << "2. Display Items" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            dukaan.addItem();
            break;
        case 2:
            dukaan.displayItems();
            break;
        case 3:
            cout << "Exiting Shop System..." << endl;
            return 0;
        default:
            cout << "Invalid Option! Try again." << endl;
        }
    }

    return 0;
}