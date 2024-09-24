#include <iostream>
using namespace std;
int main() {
// Current temperature inside the refrigerator
float currentTemperature = 5.5;
// Safety threshold
float safeTemperature = 4.0;
// Check if the temperature is above the safe limit
if (currentTemperature > safeTemperature) {
cout << "Warning: The temperature is too high!" << endl;
} else {
cout << "The temperature is within the safe range." << endl;
}
return 0;
}