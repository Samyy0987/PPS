#include <iostream>
#include <string>
using namespace std;
int main() {
int numberOfItems;
// Prompt the user for the number of items they want to track
cout << "Enter the number of items to track in inventory: ";
cin >> numberOfItems;
// Variables to store item names and stock levels
string itemName;
int stockLevel;
// Use a for loop to get the details of each item
for (int i = 1; i <= numberOfItems; ++i) {
cout << "Enter the name of item " << i << ": ";
cin >> itemName;
cout << "Enter the stock level for " << itemName << ": ";
cin >> stockLevel;
// Display the inventory details for the current item
cout << "Item " << i << ": " << itemName << " - " << stockLevel
<< " units\n";
}
return 0;
}