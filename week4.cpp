#include <iostream>
#include <string>
using namespace std;

char num1, num2, num3, num4, num5, num6, num7;
char hyphen;
int readDials(char& num1, char& num2, char& num3, char& num4, char& num5, char& num6, char& num7, char& hyphen);
int toDigit(char& return_type);
void AcknowledgeCall(char, char, char, char, char, char, char, char );


  

int readDials(char& num1, char& num2, char& num3, char& num4, char& num5, char& num6, char& num7, char& hyphen) {
	cout << "Enter a phone number (Q to quit): ";

	cin >> num1; 

	if (num1 == 'Q' || num1 == 'q') {
	
		return -5;
	}
	cin >> num2 >> num3 >> hyphen >> num4 >> num5 >> num6 >> num7;

	
	if (num1 && num2 && num3 == '5') {
		return -3;
	}
	else if (num1 == 0 || num1 == '0') {
		return -2;


	}



	if (toDigit(num1) == 2) {
		num1 = '2';
	
	}
	else if (toDigit(num1) == -1) {
		return -1;
	
	}
	else if (toDigit(num1) == 3) {
		num1 = '3';
	
	
	}
	else if (toDigit(num1) == 4) {
		num1 = '4';


	}
	else if (toDigit(num1) == 5) {
		num1 = '5';


	}
	else if (toDigit(num1) == 6) {
		num1 = '6';


	}
	else if (toDigit(num1) == 7) {
		num1 = '7';


	}
	else if (toDigit(num1) == 8) {
		num1 = '8';


	}
	else if (toDigit(num1) == 9) {
		num1 = '9';


	}

	if (toDigit(num2) == 2) {
		num2 = '2';

	}
	else if (toDigit(num2) == -1) {
		return -1;

	}
	else if (toDigit(num2) == 3) {
		num2 = '3';


	}
	else if (toDigit(num2) == 4) {
		num2 = '4';


	}
	else if (toDigit(num2) == 5) {
		num2 = '5';


	}
	else if (toDigit(num2) == 5) {
		num2 = '5';


	}
	else if (toDigit(num2) == 6) {
		num2 = '6';


	}
	else if (toDigit(num2) == 7) {
		num2 = '7';


	}
	else if (toDigit(num2) == 8) {
		num2 = '8';


	}
	else if (toDigit(num2) == 9) {
		num2 = '9';


	}


	if (toDigit(num3) == 2) {
		num3 = '2';

	}
	else if (toDigit(num3) == -1) {
		return -1;

	}
	else if (toDigit(num3) == 3) {
		num3 = '3';


	}
	else if (toDigit(num3) == 4) {
		num3 = '4';


	}
	else if (toDigit(num3) == 5) {
		num3 = '5';


	}
	else if (toDigit(num3) == 6) {
		num3 = '6';


	}
	else if (toDigit(num3) == 7) {
		num3 = '7';


	}
	else if (toDigit(num3) == 8) {
		num3 = '8';


	}
	else if (toDigit(num3) == 9) {
		num3 = '9';


	}

	if (toDigit(num4) == 2) {
		num4 = '2';

	}
	else if (toDigit(num4) == -1) {
		return -1;

	}
	else if (toDigit(num4) == 3) {
		num4 = '3';


	}
	else if (toDigit(num4) == 4) {
		num4 = '4';


	}
	else if (toDigit(num4) == 5) {
		num4 = '5';


	}
	else if (toDigit(num4) == 6) {
		num4 = '6';


	}
	else if (toDigit(num4) == 7) {
		num4 = '7';


	}
	else if (toDigit(num4) == 8) {
		num4 = '8';


	}
	else if (toDigit(num4) == 9) {
		num4 = '9';


	}

	if (toDigit(num5) == 2) {
		num5 = '2';

	}
	else if (toDigit(num5) == -1) {
		return -1;

	}
	else if (toDigit(num5) == 3) {
		num5 = '3';


	}
	else if (toDigit(num5) == 4) {
		num5 = '4';


	}
	else if (toDigit(num5) == 5) {
		num5 = '5';


	}
	else if (toDigit(num5) == 6) {
		num5 = '6';


	}
	else if (toDigit(num5) == 7) {
		num5 = '7';


	}
	else if (toDigit(num5) == 8) {
		num5 = '8';


	}
	else if (toDigit(num5) == 9) {
		num5 = '9';


	}

	if (toDigit(num6) == 2) {
		num6 = '2';

	}
	else if (toDigit(num6) == -1) {
		return -1;

	}
	else if (toDigit(num6) == 3) {
		num6 = '3';


	}
	else if (toDigit(num6) == 4) {
		num6 = '4';


	}
	else if (toDigit(num6) == 5) {
		num6 = '5';


	}
	else if (toDigit(num6) == 6) {
		num6 = '6';


	}
	else if (toDigit(num6) == 7) {
		num6 = '7';


	}
	else if (toDigit(num6) == 8) {
		num6 = '8';


	}
	else if (toDigit(num6) == 9) {
		num6 = '9';


	}

	if (toDigit(num7) == 2) {
		num7 = '2';

	}
	else if (toDigit(num7) == -1) {
		return -1;

	}
	else if (toDigit(num7) == 3) {
		num7 = '3';


	}
	else if (toDigit(num7) == 4) {
		num7 = '4';


	}
	else if (toDigit(num7) == 5) {
		num7 = '5';


	}
	else if (toDigit(num7) == 6) {
		num7 = '6';


	}
	else if (toDigit(num7) == 7) {
		num7 = '7';


	}
	else if (toDigit(num7) == 8) {
		num7 = '8';


	}
	else if (toDigit(num7) == 9) {
		num7 = '9';


	}





	if (hyphen != '-') {
	
		return -4;
	}
	
	
	
	return 0;

};



int toDigit(char& return_type) {
	char nums;
	char Uppernums;
	nums = return_type;
	Uppernums = toupper(nums);

	

	if (nums == '-') {
		return 0;
	}
	
	
	 if (nums > 'A' && nums < 'z') {
	
		
	switch (Uppernums) {
			
		case 'A':  return 2; break;
		case 'B': return 2; break;
		case 'C': return 2; break;
		case 'D': return 3; break;
		case 'E': return 3; break;
		case 'F': return 3; break;
		case 'G': return 4; break;
		case 'H': return 4; break;
		case 'I': return 4; break;
		case 'J': return 5; break;
		case 'K': return 5; break;
		case 'L': return 5; break;
		case 'M': return 6; break;
		case 'N': return 6; break;
		case 'O': return 6; break;
		case 'P': return 7; break;
		case 'Q': return 7; break;
		case 'R': return 7; break;
		case 'S': return 7; break;
		case 'T': return 8; break;
		case 'U': return 8; break;
		case 'V': return 8; break;
		case 'W': return 9; break;
		case 'X': return 9; break;
		case 'Y': return 9; break;
		case 'Z': return 9; break;
		
		default:
		
		
			break;
		
			
		}
	
	
	 }
	 else if (nums > '0' && nums < '10') {
		
		 return 0;
	 
	 }
	 else {
	
		 return -1;
	 }

		return 0;

};



void AcknowledgeCall(char num1, char num2, char num3, char num4, char num5, char num6, char num7, char hyphen) {

	cout << "Phone Number Dialed: " << num1 << num2 << num3 << hyphen << num4 << num5 << num6 << num7 << endl;


};

int main() {
	cout << "Student Name: Jacob Kyeyune \n";
	cout << "Student ID: 900875857 \n \n";

	int returnNum = 0;
	while (returnNum != -5) {
	returnNum =	readDials(num1, num2, num3, num4, num5, num6, num7, hyphen);

	switch (returnNum) {
	case 0: AcknowledgeCall(num1, num2, num3, num4, num5, num6, num7, hyphen); break;
	case -1: cout << "ERROR - An invalid character was entered \n"; break;
	case -2: cout << "ERROR - Phone number cannot begin with 0 \n"; break;
	case -3: cout << "ERROR - Phone number cannot begin with 555 \n"; break;
	case -4: cout << "ERROR - Hyphen is not in the correct position \n"; break;
	case -5: cout << "Press any key to continue . . .";
		cin.ignore();
		cin.get();
		
		break;
	default: break; 
	}
	
	}
	
	

	return 0;
};