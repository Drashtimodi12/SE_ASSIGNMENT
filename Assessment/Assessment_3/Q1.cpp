/*Create a Project to demonstrate Simple Food Ordering Project which will help to order
foods . The Project should contain all the necessary requirements i.e need to use
conditional Statements, Loops, Function, SwitchCase and also A Program should use
the concept of OOP.*/

#include <iostream>
#include <string>
using namespace std;

class FoodOrdering
{
private:
    string customerName;
    int choice, subChoice, quantity;
    double totalBill;

public:
    FoodOrdering() : totalBill(0.0)
    {
    }

    void getCustomerName()
    {
        cout << "-----TOPS Tech. Fast Food-----" << endl;
        cout << "Enter your name: ";
        getline(cin, customerName);
        cout << "Hello " << customerName << endl;
        cout << "What would you like to order?";
    }

    void showMenu()
    {
        cout << "\n-----MENU-----\n";
        cout << "1. Pizza\n";
        cout << "2. Burger\n";
        cout << "3. Sandwich\n";
        cout << "4. Roll\n";
        cout << "5. Biryani\n";
        cout << "Please enter your choice: ";
        cin >> choice;
    }

    void handleOrder()
    {
        switch (choice)
        {
        case 1:
            showPizzaMenu();
            break;
        case 2:
            showBurgerMenu();
            break;
        case 3:
            showSandwichMenu();
            break;
        case 4:
            showRollMenu();
            break;
        case 5:
            showBiryaniMenu();
            break;
        default:
            cout << "Invalid choice. Please select a valid option.\n";
        }
    }

    void showPizzaMenu()
    {
        cout << "\nPizza Menu:\n";
        cout << "1. Veg Pizza - Rs. 300\n";
        cout << "2. Cheese Pizza - Rs. 350\n";
        cout << "3. Pepperoni Pizza - Rs. 400\n";
        cout << "Please select your pizza: ";
        cin >> subChoice;
        processOrder(300 + (subChoice - 1) * 50); // Prices: 300, 350, 400
    }

    void showBurgerMenu()
    {
        cout << "\nBurger Menu:\n";
        cout << "1. Veg Burger - Rs. 200\n";
        cout << "2. Cheese Burger - Rs. 250\n";
        cout << "3. Chicken Burger - Rs. 300\n";
        cout << "Please select your burger: ";
        cin >> subChoice;
        processOrder(200 + (subChoice - 1) * 50); // Prices: 200, 250, 300
    }

    void showSandwichMenu()
    {
        cout << "\nSandwich Menu:\n";
        cout << "1. Club Sandwich - Rs. 240\n";
        cout << "2. Veg Sandwich - Rs. 200\n";
        cout << "3. Grilled Sandwich - Rs. 300\n";
        cout << "Please select your sandwich: ";
        cin >> subChoice;
        processOrder(240 - (subChoice - 1) * 40); // Prices: 240, 200, 300
    }

    void showRollMenu()
    {
        cout << "\nRoll Menu:\n";
        cout << "1. Veg Roll - Rs. 50\n";
        cout << "2. Chicken Roll - Rs. 100\n";
        cout << "3. Egg Roll - Rs. 80\n";
        cout << "Please select your roll: ";
        cin >> subChoice;
        processOrder(50 + (subChoice - 1) * 30); // Prices: 50, 100, 80
    }

    void showBiryaniMenu()
    {
        cout << "\nBiryani Menu:\n";
        cout << "1. Veg Biryani - Rs. 200\n";
        cout << "2. Chicken Biryani - Rs. 300\n";
        cout << "3. Mutton Biryani - Rs. 400\n";
        cout << "Please select your biryani: ";
        cin >> subChoice;
        processOrder(200 + (subChoice - 1) * 100); // Prices: 200, 300, 400
    }

    void processOrder(double price)
    {
        cout << "Please enter the quantity: ";
        cin >> quantity;
        totalBill += price * quantity;
        cout << "Item added to your bill. Current Total: Rs. " << totalBill << endl;
    }

    void displayBill() const
    {
        cout << "\nFinal Bill for " << customerName << ":\n";
        cout << "Total Amount: Rs. " << totalBill << endl;
    }

    bool continueOrdering()
    {
        char choice;
        cout << "Do you want to order more? (y/n): ";
        cin >> choice;
        return choice == 'y' || choice == 'Y';
    }
};

int main()
{
    FoodOrdering order;
    order.getCustomerName();

    do
    {
        order.showMenu();
        order.handleOrder();
    } while (order.continueOrdering());

    order.displayBill();

    cout << "\nThank you for ordering from TOPS Tech Fast Food.\n";
}
