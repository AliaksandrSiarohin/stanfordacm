#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

template<class T>
void print_vec(vector<T> vec) {
	for (int i = 0; i < vec.size(); ++i)
		cout << vec[i] << " ";
	cout << endl;
}

template<class T>
void print_masked(vector<T> vec, unsigned int bitmask) {
	vector<int> subset;
	for(int j = 0; j < vec.size(); j++)
	{
		if(bitmask & (1<<j))
			subset.push_back(vec[j]);
	}
	print_vec(subset);
}

int main() {
	//All permutations
	vector<int> anagrama {1,2,3};	
	do {
	    print_vec(anagrama);
	} while (next_permutation(anagrama.begin(), anagrama.end()));
	//All subsets
	vector<int> set {20, 30, 40, 50, 60};
	unsigned int pow_set_size = 1 << set.size();
	for(int mask = 0; mask < pow_set_size; mask++)
	{
		print_masked(set, mask);
	}
	cout << endl;
	//All subsets of given size k
	int k = 4;
	unsigned int mask = (1 << k) - 1;
	unsigned int last = ((1 << k) - 1) << (set.size() - k);
	if (mask == 0) 
		print_masked(set, mask);
	else
		while (mask <= last) {
			print_masked(set, mask);
			unsigned int t = (mask | (mask - 1)) + 1;  
			mask = t | ((((t & -t) / (mask & -mask)) >> 1) - 1);  
		}
	
}
