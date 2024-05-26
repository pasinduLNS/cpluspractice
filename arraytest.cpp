#include <iostream>
using namespace std;

int main() {
	// define the array
	int b[] = {2,4,6,7,8};
	int k = b[1] // accessing elements in the array
    	char word[] = {'c', 'h', 'a', 'm', 'p', 'i', 'o', 'n', 's', 'h', 'i', 'p'};
	char c = word[(sizeof(word)-1)]; // entering last element of the array

	// calculating with arrays
	int sum;
	for(int i=0;i<(sizeof(b));i++){
		sum+=b[i];
	}
	cout << sum << endl;

}