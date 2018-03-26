#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int number_needed(string a, string b) {

	int count = 0;
	
	vector<int> Occur(26, 0); // Creating a vector of size 26 because of the alphabet
	// Using ASCII interpretation to populate the vector, going through all of string a to find the amount of each character
	for (auto c : a) { ++Occur[c - 'a']; } 
	//If we find a duplicate in string b, decrease the amount of occurences of that char in the vector
	for (auto c : b) { --Occur[c - 'a']; }
	//Everything remaining in the vector is extra or doesnt have a match, so thats how many deletions we need.
	for (auto val : Occur) { count += abs(val); }

	return count;



}

int main() {
	string a;
	cin >> a;
	string b;
	cin >> b;
	cout << number_needed(a, b) << endl;
	system("pause");
	return 0;
}
