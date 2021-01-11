//https://repl.it/join/bbeuqhjx-orangenotebook
//I first deconstructed the problem and started working on getting input from a user
//After getting the two inputs i worked on concatonating the inputs together to show desired output
//Finally, i tried breaking my code by using special characters but couldn't manage to do so.

#include <iostream>
using namespace std;

int main() {
	string quote, author;

	cout << "What is the quote? ";
	getline(cin, quote);

	cout << "Who said it? ";
	getline(cin, author);

	cout << "\n" << author << " says: \"" << quote << "\"\n";

	return 0;
}
