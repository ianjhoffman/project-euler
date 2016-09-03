#include <iostream>
#include <ctime> // Timing implementation
#include <string>
using std::clock_t;
using std::clock;
using std::cout;
using std::endl;
using std::string;

int main(int argc, char** argv) {
	clock_t start;
 	double duration;
	start = clock();

	int currD = 7;
	int currLongest = 6;
	for (int i = 11; i < 1000; i++) {
		string currDecimal;
		int proc = 10;
		for (int j = 0; j < 100 && proc; j++) {
			if (proc < i) {
				proc *= 10;
				currDecimal.push_back('0');
			} else {
				currDecimal.push_back('0' + proc/i);
				proc %= i;
			}
		}
		cout << "1/" << i << " = 0." << currDecimal << endl;
	}

	duration = ( clock() - start ) / (double) CLOCKS_PER_SEC;
	cout << "1/" << currD << " has cycle length of " << currLongest << ",";
	cout << " calculated in " << duration << " seconds." << endl;
}