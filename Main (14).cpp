#include <iostream>

using namespace std;

int main() {
int chips = 3;
int chocolates = 2;
int sodas = 4;
int totalItems = chips + chocolates + sodas;
int costPerChip = 20;
int costPerChocolate = 50;
int costPerSoda = 30;
int totalCost = (chips * costPerChip) + (chocolates *
costPerChocolate) + (sodas * costPerSoda);
// Output the results
cout << "Total Number of Items: " << totalItems << endl;
cout << "Total Cost: " << totalCost << " Rupees" << endl;
return 0;
}