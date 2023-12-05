#include <iostream>
using namespace std;

void Bigger_Than_Small(char *cp);
void Smaller_Than_Big(char *cp);
void convert();

int main() { 
	convert();
	return 0;
}

void Bigger_Than_Small(char *cp) {
	*cp += 32;
}

void Smaller_Than_Big(char *cp){
	*cp -= 32;
}

	void convert() {
	char c;
	while(true) {
		cout << "Entry: ";
		cin >> c;
		if(c == '0')
			return;
		if(c >= 'A' && c <= 'Z'){
			Bigger_Than_Small(&c);
		}
		else {
			Smaller_Than_Big(&c);
		}
		cout << "Result: " << c << endl;
 	}
}












