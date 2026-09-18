#include <iostream>
#include <limits>  // std::numeric_limits -> used when clearing bad input
#include <string>  // std::string

// Note: we write std::cout / std::cin / std::string instead of
// "using namespace std;" because pulling the whole std namespace in
// is bad practice (it can cause name clashes in bigger projects).

// ---------------------------------------------------------------------------
// DATA
// ---------------------------------------------------------------------------

// One row in a menu: the key the customer types, the item's name, and price.
// Money is stored as int (whole pesos), NOT float, because floats can't
// represent decimal money exactly (e.g. 0.1 + 0.2 != 0.3).
struct MenuItem {
    char        key;
    std::string name;
    int         price;
};

// A full menu page: a title plus a list of items.
struct Menu {
    std::string title;
    MenuItem    items[2];  // fixed size is fine for this small program
    int         count;     // how many items are actually used
};

// ---------------------------------------------------------------------------
// HELPERS
// ---------------------------------------------------------------------------

// Reads a whole number. Repeats until the user types something valid that is
// >= minimum. Handles the case where the user types letters (cin goes into a
// "failed" state and must be cleared before we can read again).
int readInt(const std::string& prompt, int minimum) {
    int value;
    while (true) {
        std::cout << prompt;
        std::cin >> value;

        if (std::cin.fail()) {  // user typed letters/symbols -> nothing stored
            std::cin.clear();   // reset the error flag so cin works again
            // throw away the bad line so it doesn't confuse the next read
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Please enter a number." << std::endl;
            continue;
        }

        if (value < minimum) {
            std::cout << "Value must be at least " << minimum << "." << std::endl;
            continue;
        }
        return value;
    }
}

// Prints a menu page and keeps asking until the customer picks a valid key.
char pickFromMenu(const Menu& menu) {
    std::cout << std::endl;
    std::cout << "===== " << menu.title << " =====" << std::endl;
    for (int i = 0; i < menu.count; ++i) {
        std::cout << "  " << menu.items[i].key << ". " << menu.items[i].name
                  << " | P" << menu.items[i].price << std::endl;
    }

    char choice;
    while (true) {
        std::cout << "Please Choose: ";
        std::cin >> choice;
        // flush the rest of the typed line (e.g. the Enter key / extra chars)
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        for (int i = 0; i < menu.count; ++i) {
            if (choice == menu.items[i].key) {
                return choice;  // found a match -> it's valid
            }
        }
        std::cout << "Invalid choice. Please try again." << std::endl;
    }
}

// Shared by EVERY item: quantity -> amount -> cash -> change -> goodbye.
// Before, this logic was copy-pasted ~12 times (once per switch case),
// which is where all the bugs came from. Now it exists in ONE place.
void processOrder(const MenuItem& item) {
    std::cout << std::endl;
    std::cout << "Your Order is: " << item.name << std::endl;

    int quantity = readInt("Please Enter Your Quantity: ", 1);
    int amount   = quantity * item.price;  // total bill in pesos

    std::cout << "The Amount To Be Paid Is: P" << amount << std::endl;

    // minimum = amount, so the customer can't pay less than the bill
    int cash   = readInt("Please Enter Your Cash Amount: P", amount);
    int change = cash - amount;

    std::cout << std::endl;
    std::cout << "Your Change is: P" << change
              << " Thank You For Ordering!!" << std::endl;
}

// ---------------------------------------------------------------------------
// MAIN
// ---------------------------------------------------------------------------

int main() {
    // The data is stored here, separate from the logic that prints it.
    // (In the original, the prices were hard-coded as "magic numbers"
    // scattered through every case.)
    Menu foodMenu    = {"Food Menu",
                        {{'a', "Fried Chicken w/ Rice", 50},
                         {'b', "Pork Chop w/ Rice",     45}},
                        2};
    Menu dessertMenu = {"Dessert Menu",
                        {{'a', "Chocolate Cake", 25},
                         {'b', "Ice Cream",      50}},
                        2};
    Menu drinksMenu  = {"Drinks Menu",
                        {{'1', "Coke",   18},
                         {'2', "Sprite", 20}},
                        2};

    // Index 0 = main menu key '1', index 1 = '2', index 2 = '3'
    Menu menus[3] = {foodMenu, dessertMenu, drinksMenu};

    std::cout << "Ordering System" << std::endl;

    bool ordering = true;
    while (ordering) {  // loop so the customer can order again / exit
        std::cout << std::endl;
        std::cout << "===== Main Menu =====" << std::endl;
        std::cout << "  1. Food Menu" << std::endl;
        std::cout << "  2. Desserts" << std::endl;
        std::cout << "  3. Drinks" << std::endl;
        std::cout << "  0. Exit" << std::endl;
        std::cout << "Please Choose: ";

        char mainChoice;
        std::cin >> mainChoice;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        if (mainChoice == '0') {  // exit the loop
            std::cout << "Goodbye!" << std::endl;
            ordering = false;
            continue;
        }

        if (mainChoice < '1' || mainChoice > '3') {
            std::cout << "Invalid Input. Please try again." << std::endl;
            continue;
        }

        // '1' -> index 0, '2' -> index 1, '3' -> index 2
        int menuIndex = mainChoice - '1';
        Menu& chosenMenu = menus[menuIndex];

        char key = pickFromMenu(chosenMenu);

        // find the item the customer chose and process its order
        for (int i = 0; i < chosenMenu.count; ++i) {
            if (chosenMenu.items[i].key == key) {
                processOrder(chosenMenu.items[i]);
                break;
            }
        }
    }

    return 0;
}
