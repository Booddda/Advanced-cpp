#include<iostream>
#include<string.h>
#include<vector>
#include <sstream>
using namespace std; 


class Invoice
{
    private: 
        string name;
        int item_number;
        double price; 
        int quantity;
    public:
        Invoice(const string &name, const int &item_number, const double &price, const int &quantity);
        Invoice()
        {
            this -> name = "";
            this -> item_number = 0;
            this -> price = 0;
            this -> quantity = 0;
        }
        void setName (string s);
        string getName();
        void setItemNum(int n);
        int getItemNum();
        void setPrice(double n);
        double getPrice();
        void setQuantity(int n);
        int getQuantity();
        double getTotalPrice();
        void print();
        string toString();
};



int main()
{
    Invoice In;
    In = Invoice("Laptop", 2, 50, 2);
    cout << In.toString() << endl;
    return 0;
}





Invoice::Invoice(const string &name, const int &item_number, const double &price, const int &quantity)
{
    this -> name = name;
    this -> item_number = item_number;
    this -> price = price;
    this -> quantity = quantity;
}


void Invoice::setName (string s)
{
    this -> name = s;
}
string Invoice::getName()
{
     return this -> name;
}
void Invoice::setItemNum(int n)
{
    item_number = n;
}
int Invoice::getItemNum()
{
    return item_number;
}
void Invoice::setPrice(double n)
{
     price = n;
}
double Invoice::getPrice()
{
    return price;
}
void Invoice::setQuantity(int n)
{
    quantity = n;
}
int Invoice::getQuantity()
{
    return quantity;
}
double Invoice::getTotalPrice()
{
    return getPrice()*getQuantity();
}
void Invoice::print()
{
    cout << "Item Name: " << getName() << "\n";
	cout << "Item Price: " << getPrice() << "\n";
	cout << "Item Quantity: " << getQuantity() << "\n";
	cout << "Item item number: " << getItemNum() << "\n";
	cout << "Item Total Price: " << getTotalPrice() << "\n";
}
string Invoice::toString()
{ 
    //why the first method printed garbage values ??? 
    //char buffer[200];
    //sprintf(buffer,"%s,%d,%lf,%d",getName(), getItemNum(), getPrice(),getQuantity());
    //return buffer; 
    ostringstream oss;
	oss << getName() << "," << getPrice() << "," << getQuantity() << "," << getItemNum();
	return oss.str();
}
        
