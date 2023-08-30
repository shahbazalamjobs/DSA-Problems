// 1. This program converts octal to binary by converting octal->decimal->binary

#include <iostream>
#include <cmath>
using namespace std;

int octal_to_binary(int octal) {
	
  // Converting Octal to Decimal
	int decimal = 0;
	int power = 0;
	
  while (octal != 0) {
		decimal += (octal % 10) * pow(8, power);
		octal /= 10;
		power++;
	}

	// Converting Decimal to Binary
	int binary = 0;
	int digit_place = 1;
	
  while (decimal != 0) {
		binary += (decimal % 2) * digit_place;
		decimal /= 2;
		digit_place *= 10;
	}

	return binary;
}

int main() {
	// Sample Input
	int octal_number = 777;

	// Octal to Binary Conversion
	int binary_number = octal_to_binary(octal_number);

	// Output
	cout << binary_number << endl;

	return 0;
}


// 2. O(N)

#include <iostream>
using namespace std;

// Function to convert an Octal to Binary Number
string OctToBin(string octnum)
{
	long int i = 0;

	string binary = "";

	while (octnum[i]) {
		switch (octnum[i]) {
		case '0':
			binary += "000";
			break;
		case '1':
			binary += "001";
			break;
		case '2':
			binary += "010";
			break;
		case '3':
			binary += "011";
			break;
		case '4':
			binary += "100";
			break;
		case '5':
			binary += "101";
			break;
		case '6':
			binary += "110";
			break;
		case '7':
			binary += "111";
			break;
		default:
			cout << "\nInvalid Octal Digit "
				<< octnum[i];
			break;
		}
		i++;
	}

	return binary;
}

int main()
{
	// Get the Hexadecimal number
	string octnum = "345";

	// Convert Octal to Binary
	cout << "Equivalent Binary Value = "
		<< OctToBin(octnum);

	return 0;
}
