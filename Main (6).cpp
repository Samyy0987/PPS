#include <iostream>
using namespace std;
int main() 
{
// Variable to store the temperature
int temperature;

// Prompt the user to enter the current temperature
cout << "Enter the current temperature (in Celsius): ";
cin >> temperature;

// Using if-else statements to give clothing recommendations
if (temperature <= 0)
{
cout << "It is freezing cold outside. You should wear a heavy
winter coat, scarf, gloves, and boots." << endl;
}
else if (temperature > 0 && temperature <= 10)
{
cout << "It is cold outside. You should wear a jacket and warm
clothing." << endl;
}
else if (temperature > 10 && temperature <= 15)
{
cout << "The weather is moderate. You should wear light layers,
such as a long-sleeve shirt or sweater." << endl;
}
else if (temperature > 15 && temperature <= 25)
{
cout << "It is warm outside. You should wear a t-shirt and
shorts." << endl;
}
else if (temperature > 25)
{
cout << "It is hot outside. You should wear light clothing, such
as a tank top and shorts, and stay hydrated." << endl;
}
return 0