#include <iostream>

using namespace std;

int main() {
int numValues;
// Prompt user for the number of values
cout << "Enter the number of values: ";
cin >> numValues;
// Validate user input
if (numValues <= 0) {
cout << "Error: Number of values must be a positive integer." <<
endl;
return 1; // Exit with an error code
}
int sum = 0;
int evenCount = 0;
int oddCount = 0;
int value;
// Loop to input values and calculate sum, even count, and odd count
for (int i = 0; i < numValues; ++i) {
cout << "Enter value " << (i + 1) << ": ";
cin >> value;
sum += value;
if (value % 2 == 0) {
++evenCount;
} else {
++oddCount;
}
}
// Calculate average
double average = static_cast<double>(sum) / numValues;// Display results
cout << "Sum: " << sum << endl;
cout << "Average: " << average << endl;
cout << "Count of Even Numbers: " << evenCount << endl;
cout << "Count of Odd Numbers: " << oddCount << endl;
return 0;
}