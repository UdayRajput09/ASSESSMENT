#include<iostream>
using namespace std;

// Base class for handling user input
class abc1 {
public:
    string name;  // Member variable to store user's name

    // Function to prompt the user for their name and greet them
    void fun1() {
        // Display a welcome message and prompt for the user's name
        cout << "           ---------Tops Tech. Fast Food---------" << endl;
        cout << "Please Enter Your Name : ";
        cin >> name;  // Read the user's name from input
        cout << "Hello " << name << endl;  // Greet the user by name
    }
};


// Derived class for food ordering
// Derived class for food ordering, inheriting from abc1
class abc2 : public abc1 {
public:
    int choice, num, qun, total;

    // Function to display menu and take order
    void fun2() {
        cout << "\nWhat would you like to order?" << endl;
        cout << "              --------Menu----------" << endl;
        cout << "1) Pizza" << endl;
        cout << "2) Burgers" << endl;
        cout << "3) Sandwiches" << endl;
        cout << "4) Rolls" << endl;
        cout << "5) Biryani" << endl;

        cout << "\nPlease Enter your Choice:";
        cin >> choice;

        switch (choice) {
        case 1:
            // Menu for Pizza selection
            cout << "\n1. Margherita Pizza: Rs.210" << endl;
            cout << "2. Pepperoni Pizza: Rs.230" << endl;
            cout << "3. Neapolitan Pizza: Rs.250" << endl;

            cout << "\nPlease Enter which Pizza you would like to have ?:";
            cin >> num;

            switch (num) {
            case 1:
                // Calculate and display total bill for Margherita Pizza
                cout << "\nPlease Enter Quantity : ";
                cin >> qun;
                total = qun * 210;
                cout << "1. Margherita Pizza" << endl;
                cout << "Your Total Bill is :" << total << endl;
                cout << "Your Order Will be delivered in 40 Minutes" << endl;
                break;

            case 2:
                // Calculate and display total bill for Pepperoni Pizza
                cout << "\nPlease Enter Quantity : ";
                cin >> qun;
                total = qun * 230;
                cout << "2. Pepperoni Pizza" << endl;
                cout << "Your Total Bill is :" << total << endl;
                cout << "Your Order Will be delivered in 40 Minutes" << endl;
                break;

            case 3:
                // Calculate and display total bill for Neapolitan Pizza
                cout << "\nPlease Enter Quantity : ";
                cin >> qun;
                total = qun * 250;
                cout << "3. Neapolitan Pizza" << endl;
                cout << "Your Total Bill is :" << total << endl;
                cout << "Your Order Will be delivered in 40 Minutes" << endl;
                break;

            default:
                cout << "Invalid Choice" << endl;
                break;
            }
            break;

        case 2:
            // Menu for Burger selection
            cout << "\n1. Classic Cheeseburger: Rs.150" << endl;
            cout << "2. Bacon Cheeseburger: Rs.190" << endl;
            cout << "3. BBQ Burger: Rs.290" << endl;

            cout << "\nPlease Enter which Burger you would like to have ?:";
            cin >> num;

            switch (num) {
            case 1:
                // Calculate and display total bill for Classic Cheeseburger
                cout << "\nPlease Enter Quantity : ";
                cin >> qun;
                total = qun * 150;
                cout << "1. Classic Cheeseburger" << endl;
                cout << "Your Total Bill is :" << total << endl;
                cout << "Your Order Will be delivered in 40 Minutes" << endl;
                break;

            case 2:
                // Calculate and display total bill for Bacon Cheeseburger
                cout << "\nPlease Enter Quantity : ";
                cin >> qun;
                total = qun * 190;
                cout << "2. Bacon Cheeseburger" << endl;
                cout << "Your Total Bill is :" << total << endl;
                cout << "Your Order Will be delivered in 40 Minutes" << endl;
                break;

            case 3:
                // Calculate and display total bill for BBQ Burger
                cout << "\nPlease Enter Quantity : ";
                cin >> qun;
                total = qun * 290;
                cout << "3. BBQ Burger" << endl;
                cout << "Your Total Bill is :" << total << endl;
                cout << "Your Order Will be delivered in 40 Minutes" << endl;
                break;

            default:
                cout << "Invalid Choice" << endl;
                break;
            }
            break;

        case 3:
            // Menu for Sandwich selection
            cout << "\n1. BLT (Bacon, Lettuce, and Tomato) Sandwich: Rs.350" << endl;
            cout << "2. Grilled Cheese Sandwich: Rs.199" << endl;
            cout << "3. Club Sandwich: Rs.290" << endl;

            cout << "\nPlease Enter which Sandwich you would like to have ?:";
            cin >> num;

            switch (num) {
            case 1:
                // Calculate and display total bill for BLT Sandwich
                cout << "\nPlease Enter Quantity : ";
                cin >> qun;
                total = qun * 350;
                cout << "1. BLT (Bacon, Lettuce, and Tomato) Sandwich" << endl;
                cout << "Your Total Bill is :" << total << endl;
                cout << "Your Order Will be delivered in 40 Minutes" << endl;
                break;

            case 2:
                // Calculate and display total bill for Grilled Cheese Sandwich
                cout << "\nPlease Enter Quantity : ";
                cin >> qun;
                total = qun * 199;
                cout << "2. Grilled Cheese Sandwich" << endl;
                cout << "Your Total Bill is :" << total << endl;
                cout << "Your Order Will be delivered in 40 Minutes" << endl;
                break;

            case 3:
                // Calculate and display total bill for Club Sandwich
                cout << "\nPlease Enter Quantity : ";
                cin >> qun;
                total = qun * 290;
                cout << "3. Club Sandwich" << endl;
                cout << "Your Total Bill is :" << total << endl;
                cout << "Your Order Will be delivered in 40 Minutes" << endl;
                break;

            default:
                cout << "Invalid Choice" << endl;
                break;
            }
            break;

        case 4:
            // Menu for Roll selection
            cout << "\n1. Cinnamon Rolls: Rs.150" << endl;
            cout << "2. Sushi Rolls (Maki Rolls): Rs.199" << endl;
            cout << "3. Spring Rolls: Rs.198" << endl;

            cout << "\nPlease Enter which Roll you would like to have ?:";
            cin >> num;

            switch (num) {
            case 1:
                // Calculate and display total bill for Cinnamon Rolls
                cout << "\nPlease Enter Quantity : ";
                cin >> qun;
                total = qun * 150;
                cout << "1. Cinnamon Rolls" << endl;
                cout << "Your Total Bill is :" << total << endl;
                cout << "Your Order Will be delivered in 40 Minutes" << endl;
                break;

            case 2:
                // Calculate and display total bill for Sushi Rolls
                cout << "\nPlease Enter Quantity : ";
                cin >> qun;
                total = qun * 199;
                cout << "2. Sushi Rolls (Maki Rolls)" << endl;
                cout << "Your Total Bill is :" << total << endl;
                cout << "Your Order Will be delivered in 40 Minutes" << endl;
                break;

            case 3:
                // Calculate and display total bill for Spring Rolls
                cout << "\nPlease Enter Quantity : ";
                cin >> qun;
                total = qun * 198;
                cout << "3. Spring Rolls" << endl;
                cout << "Your Total Bill is :" << total << endl;
                cout << "Your Order Will be delivered in 40 Minutes" << endl;
                break;

            default:
                cout << "Invalid Choice" << endl;
                break;
            }
            break;

        case 5:
            // Menu for Biryani selection
            cout << "\n1. Hyderabadi Biryani: Rs.450" << endl;
            cout << "2. Lucknowi (Awadhi) Biryani: Rs.129" << endl;
            cout << "3. Kolkata Biryani: Rs.230" << endl;

            cout << "\nPlease Enter which Biryani you would like to have ?:";
            cin >> num;

            switch (num) {
            case 1:
                // Calculate and display total bill for Hyderabadi Biryani
                cout << "\nPlease Enter Quantity : ";
                cin >> qun;
                total = qun * 450;
                cout << "1. Hyderabadi Biryani" << endl;
                cout << "Your Total Bill is :" << total << endl;
                cout << "Your Order Will be delivered in 40 Minutes" << endl;
                break;

            case 2:
                // Calculate and display total bill for Lucknowi Biryani
                cout << "\nPlease Enter Quantity : ";
                cin >> qun;
                total = qun * 129;
                cout << "2. Lucknowi (Awadhi) Biryani" << endl;
                cout << "Your Total Bill is :" << total << endl;
                cout << "Your Order Will be delivered in 40 Minutes" << endl;
                break;

            case 3:
                // Calculate and display total bill for Kolkata Biryani
                cout << "\nPlease Enter Quantity : ";
                cin >> qun;
                total = qun * 230;
                cout << "3. Kolkata Biryani" << endl;
                cout << "Your Total Bill is :" << total << endl;
                cout << "Your Order Will be delivered in 40 Minutes" << endl;
                break;

            default:
                cout << "Invalid Choice" << endl;
                break;
            }
            break;

        default:
            cout << "Invalid Choice" << endl;
            break;
        }
    }
};

// Derived class abc3 inheriting from abc2 to handle repeat orders
class abc3 : public abc2 {
public:
    // Function to allow users to place multiple orders
    void fun3() {
        char loop;
        do {
            // Prompt the user if they want to order again
            cout << "Do you want to order again? (y/n): ";
            cin >> loop;

            // If the user wants to order again ('y' or 'Y'), invoke fun2() to place a new order
            if (loop == 'y' || loop == 'Y') {
                fun2(); // Call fun2() to place a new order
            } 
            // If the input is neither 'n' nor 'N', display an error message
            else if (loop != 'n' && loop != 'N') {
                cout << "Invalid Choice" << endl; // Display error message for invalid input
            }

        // Continue the loop until the user chooses to not order again (input 'n' or 'N')
        } while (loop != 'n' && loop != 'N');
    }
};


// Main function to interact with the food ordering system
int main() {
    abc3 obj;      // Create an instance of abc3 to access its functions
    obj.fun1();    // Prompt for user's name using fun1() from abc1
    obj.fun2();    // Place the initial order using fun2() from abc2

    // Allow the user to place multiple orders using fun3() from abc3
    obj.fun3();
}


