#include <iostream>

using namespace std;

void menu() {
    cout << endl;
    cout << "Food Menu" << endl;

    char choice1c;
    float amt,quant,cash,change;

    cout << "a. Fried Chicken w/ Rice | P50 " << endl;
    cout << "b. Pork Chop w/ Rice     | P45 " << endl;

    cout << endl;
    cout << "Please Choose:  ";
    cin >> choice1c;

    switch (choice1c) {

        case 'a':
            cout << endl;
            cout << "Your Order is: Fried Chicken" << endl;
            cout << "Please Enter Your Quantity: ";
            cin >> quant;

            amt = quant * 50;

            cout << endl;
            cout << "The Amount To Be Paid Is: P" << amt << endl;

            cout << endl;
            cout << "Please Enter Your Cash Ammount: P";
            cin >> cash;

            change = cash - amt;

            cout << endl;
            cout << "Your Change is: P" << change << " Thank You For Ordering!!" << endl;
            break;
        
        case 'A':
            cout << endl;
            cout << "Your Order is: Fried Chicken" << endl;
            cout << "Please Enter Your Quantity: ";
            cin >> quant;

            amt = quant * 50;

            cout << endl;
            cout << "The Amount To Be Paid Is: P" << amt << endl;

            cout << endl;
            cout << "Please Enter Your Cash Ammount: P";
            cin >> cash;

            change = cash - amt;

            cout << endl;
            cout << "Your Change is: P" << change << " Thank You For Ordering!!" << endl;
            break;

        case 'b':
            cout << endl;
            cout << "Your Order is: Pork Chop" << endl;
            cout << "Please Enter Your Quantity: ";
            cin >> quant;

            amt = quant * 50;

            cout << endl;
            cout << "The Amount To Be Paid Is: P" << amt << endl;

            cout << endl;
            cout << "Please Enter Your Cash Ammount: P" << cash << endl;

            change = cash - amt;

            cout << endl;
            cout << "Your Change is: P" << change << " Thank You For Ordering!!" << endl;
            break;

        case 'B':
            cout << endl;
            cout << "Your Order is: Pork Chop" << endl;
            cout << "Please Enter Your Quantity: ";
            cin >> quant;

            amt = quant * 50;

            cout << endl;
            cout << "The Amount To Be Paid Is: P" << amt << endl;

            cout << endl;
            cout << "Please Enter Your Cash Ammount: P" << cash << endl;

            change = cash - amt;

            cout << endl;
            cout << "Your Change is: P" << change << " Thank You For Ordering!!" << endl;
            break;



    }

}

void dessert() {
    cout << endl;
    cout << "Dessert Menu" << endl;

    char choice1c;
    float amt,quant,cash,change;

    cout << "a. Chocolate Cake | P25 " << endl;
    cout << "b. Ice Cream      | P50 " << endl;

    cout << endl;
    cout << "Please Choose:  ";
    cin >> choice1c;

    switch (choice1c) {

        case 'a':
            cout << endl;
            cout << "Your Order is: Chocolate Cake" << endl;
            cout << "Please Enter Your Quantity: ";
            cin >> quant;

            amt = quant * 25;

            cout << endl;
            cout << "The Amount To Be Paid Is: P" << amt << endl;

            cout << endl;
            cout << "Please Enter Your Cash Ammount: P";
            cin >> cash;

            change = cash - amt;

            cout << endl;
            cout << "Your Change is: P" << change << " Thank You For Ordering!!" << endl;
            break;

        case 'A':
            cout << endl;
            cout << "Your Order is: Chocolate Cake" << endl;
            cout << "Please Enter Your Quantity: ";
            cin >> quant;

            amt = quant * 25;

            cout << endl;
            cout << "The Amount To Be Paid Is: P" << amt << endl;

            cout << endl;
            cout << "Please Enter Your Cash Ammount: P";
            cin >> cash;

            change = cash - amt;

            cout << endl;
            cout << "Your Change is: P" << change << " Thank You For Ordering!!" << endl;
            break;

        case 'B':
            cout << endl;
            cout << "Your Order is: Ice Cream" << endl;
            cout << "Please Enter Your Quantity: ";
            cin >> quant;

            amt = quant * 50;

            cout << endl;
            cout << "The Amount To Be Paid Is: P" << amt << endl;

            cout << endl;
            cout << "Please Enter Your Cash Ammount: P" << cash << endl;

            change = cash - amt;

            cout << endl;
            cout << "Your Change is: P" << change << " Thank You For Ordering!!" << endl;
            break;
        
        case 'b':
            cout << endl;
            cout << "Your Order is: Ice Cream" << endl;
            cout << "Please Enter Your Quantity: ";
            cin >> quant;

            amt = quant * 50;

            cout << endl;
            cout << "The Amount To Be Paid Is: P" << amt << endl;

            cout << endl;
            cout << "Please Enter Your Cash Ammount: P" << cash << endl;

            change = cash - amt;

            cout << endl;
            cout << "Your Change is: P" << change << " Thank You For Ordering!!" << endl;
            break;


    }

}

void drinks() {
    cout << endl;
    cout << "Drinks Menu" << endl;

    char choice1c;
    float amt,quant,cash,change;

    cout << "1. Coke   | P18 " << endl;
    cout << "2. Sprite | P20 " << endl;

    cout << endl;
    cout << "Please Choose:  ";
    cin >> choice1c;

    switch (choice1c) {

        case 'a':
            cout << endl;
            cout << "Your Order is: Coke" << endl;
            cout << "Please Enter Your Quantity: ";
            cin >> quant;

            amt = quant * 18;

            cout << endl;
            cout << "The Amount To Be Paid Is: P" << amt << endl;

            cout << endl;
            cout << "Please Enter Your Cash Ammount: P";
            cin >> cash;

            change = cash - amt;

            cout << endl;
            cout << "Your Change is: P" << change << " Thank You For Ordering!!" << endl;
            break;
        
        case 'A':
            cout << endl;
            cout << "Your Order is: Coke" << endl;
            cout << "Please Enter Your Quantity: ";
            cin >> quant;

            amt = quant * 18;

            cout << endl;
            cout << "The Amount To Be Paid Is: P" << amt << endl;

            cout << endl;
            cout << "Please Enter Your Cash Ammount: P";
            cin >> cash;

            change = cash - amt;

            cout << endl;
            cout << "Your Change is: P" << change << " Thank You For Ordering!!" << endl;
            break;

        case 'b':
            cout << endl;
            cout << "Your Order is: Sprite" << endl;
            cout << "Please Enter Your Quantity: ";
            cin >> quant;

            amt = quant * 20;

            cout << endl;
            cout << "The Amount To Be Paid Is: P" << amt << endl;

            cout << endl;
            cout << "Please Enter Your Cash Ammount: P" << cash << endl;

            change = cash - amt;

            cout << endl;
            cout << "Your Change is: P" << change << " Thank You For Ordering!!" << endl;
            break;
        
        case 'B':
            cout << endl;
            cout << "Your Order is: Sprite" << endl;
            cout << "Please Enter Your Quantity: ";
            cin >> quant;

            amt = quant * 20;

            cout << endl;
            cout << "The Amount To Be Paid Is: P" << amt << endl;

            cout << endl;
            cout << "Please Enter Your Cash Ammount: P" << cash << endl;

            change = cash - amt;

            cout << endl;
            cout << "Your Change is: P" << change << " Thank You For Ordering!!" << endl;
            break;


    }

}


int main(){

    cout << "Ordering System" << endl;

    int choice1;

    cout << "1. Food Menu" << endl;
    cout << "2. Desserts" << endl;
    cout << "3. Drinks" << endl;

    cout << "Please Choose:  ";
    cin >> choice1;

    switch(choice1) {

        case 1:
            menu();
            break;

        case 2:
            dessert();
            break;

        case 3:
            drinks();
            break;

        default:
            cout << "Invalid Input";
            break;
    }
    return 0;
}
