#include<iostream>
#include<string>
using namespace std;

int gatherItems(string (&list)[5], int numItems);

int main()
{
  string list[5]; //array of 5 strings
  int numItems = 0;
  char input;

  cout<<"\n==GROCERY LIST MANAGER==";
  cout<<"\nEnter your choice: ";
  cout<<"\n (A)dd an item";
  cout<<"\n (Q)uit";
  cout<<"\nYour choice (A/Q): ";
  cin>>input;
  

	if(input == 'A') {
		numItems = gatherItems(list, numItems);
	}

	for(int i = 0; i < numItems; i++) {
		cout << "Item " << i + 1 << ": " << list[i] << endl;
	}
		

  return 0;
}

int gatherItems(string (&list)[5], int numItems) {
	string item = "";
	cout << "Enter an item:" << endl;
	while(cin >> item) {
//		cin.ignore();
		list[numItems] = item;
		numItems++;
		if(numItems == 5) {
			cout << "Exceeded max number of items" << endl;
			return numItems;
		}
		char input;
  		cout<<"\nEnter your choice: ";
  		cout<<"\n (A)dd an item";
  		cout<<"\n (Q)uit";
  		cout<<"\nYour choice (A/Q): ";
		cin >> input;
		//cin.ignore();
		if(input == 'Q') {
			return numItems;
		}
		cout << "Enter an item: ";
	}
	return numItems;
}
