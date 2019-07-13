#include<iostream>
#include<string>

using namespace std;

class ShopItemOrder {

private:
    string name;
    double price;
    int unit;

public:

    string getName() {
        return name;
    }

    double getPrice() {
        return price;
    }

    int getNumber() {
        return unit;
    }

    void setName(string name) {
        if (name.length() > 0) {
            this->name = name;
        }
    }

    void setPrice(double price) {
        if (price > 0.0) {
            this->price = price;
        }
    }

    void setNumber(int number) {
        if (unit > 0) {
            this->unit = number;
        }
    }

    double totalPrice() {
        return price * unit;
    }

    ShopItemOrder(string name, double price, int number) {
        this->name = name;
        this->price = price;
        this->unit = number;

    }

    void print (ShopItemOrder *order){
        cout << "You ordered: " << order->getName() << endl;
        cout << "Price for 1 db is: " << order->getPrice() << endl;
        cout << "Number of items ordered: " << order->getNumber() << endl;
        cout << "Total price for your order is: " << order->totalPrice() << endl;
    }

};


int main() {

    ShopItemOrder order("Keyboard", 40.9, 3);
    order.print(&order);

    return 0;
}
