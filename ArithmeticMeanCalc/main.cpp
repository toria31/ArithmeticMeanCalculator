// made by toria
#define IDI_ICON1
#include <iostream>

// function to calculate arithmetic mean
int amCalculator(int arr2,float &sum2,int n2) {
	for (int i = 0; i < n2; i++) {
		std::cin >> arr2;
		sum2 += arr2;
	}
	return sum2;
}

int main() {
	// variables
	int n;
	float arr[50], sum = 0;
	float result;

	// title
	std::cout << R"(                                                           _          
  /\  ._ o _|_ |_  ._ _   _ _|_ o  _   |\/|  _   _. ._    /   _. |  _ 
 /--\ |  |  |_ | | | | | (/_ |_ | (_   |  | (/_ (_| | |   \_ (_| | (_ 
                                                                      )";
	std::cout << " " << "by toria\n\n";

	std::cout << "please, enter number of values >> ";
	std::cin >> n; // get number of values
	std::cout << "\nplease, enter values down below: \n";
	std::cout << "--------------------------------\n";
	
	// calculate arithmetic mean
	amCalculator(arr[50],sum,n);

	result = sum / n;

	// display result
	std::cout << "\nArithmetic Mean = " << result << std::endl << std::endl;

	system("pause");
	return 0;
}
