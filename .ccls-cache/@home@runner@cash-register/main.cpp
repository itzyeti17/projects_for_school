#include <iostream>
using namespace std; 
int main() {
  
  int item_1,item_2,item_3,total;
  
  cout << "welcome to the joci store" << endl;
  
  cout << "enter the price of your first item " << endl;
  cin >> item_1;
  cout << "your first item is " << item_1 << "$" << endl;
  
  cout << "enter the price of your second item " << endl; 
  cin >> item_2;
  cout << "your second item is " << item_2 << "$" << endl;
  
  cout << "enter the price of your third item" << endl;
  cin >> item_3;
  cout << "the price of your third item is " << item_3 << "$" << endl;
  
  total = item_1 + item_2 + item_3;
  cout << "Your total is " << total << "$" << " thank you for shopping here come back soon" << endl;
}