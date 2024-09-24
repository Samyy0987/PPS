#include <iostream>
#include<string>
using namespace std;

int main() {
  string str = "samruddha ";
  
  //concatenation
  string greeting = str + "shelke ";
  cout<< "concatenation:"<< greeting << endl ;
  
  //Substring
  string part = greeting.substr (9,7);// Extracts, "shelke"
  cout<< "Substring :" << part << endl ;
  
  //find
  size_t pos = greeting.find("shelke");
  cout<<"find: 'shelke' found at position " <<pos<<endl; 
  
  
  //Replace 
  string replaced = greeting;
  replaced.replace(pos, 7 , "sir");
  cout<<"replace:"<<replaced << endl ;
  
  //Erase
  string erased = greeting;
  erased.erase(9,7);// removes " shelke"
  cout<<"erase:"<<erased<<endl;
  
  // To uppercase 
  string uppercase = greeting ;
  for (char &C : uppercase)C = toupper(C);
  cout<<"to uppercase:"<<uppercase<<endl;
  
  // To lowercase 
  string lowercase = greeting ;
  for (char &C : lowercase)C = tolower(C);
  cout<<"to lowercase:"<<lowercase<<endl;
  
  
  
  
  
}