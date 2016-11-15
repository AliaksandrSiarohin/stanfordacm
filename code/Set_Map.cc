#include <iostream>
#include <regex>
 
using namespace std;
int main()
{
	std::set<int> myset;
	myset.insert(20);
	//Searches the container for an element equivalent to val and returns an iterator to it if found,
	// otherwise it returns an iterator to set::end.	
	it=myset.find(20);
	//Searches the container for elements equivalent to val and returns the number of matches.
	myset.count(i)
	//Returns an iterator pointing to the first element in the container which is not considered to go before val
	itlow=myset.lower_bound (30);
	//Returns an iterator pointing to the first element in the container which is considered to go after val.
	itup=myset.upper_bound (60);
	
	//Removes from the set container either a single element or a range of elements ([first,last)).
	myset.erase (myset.find(40));
	myset.erase(itlow,itup);
	
	//Returns the bounds of a range that includes all the elements in the container that are equivalent to val.
	auto ret = myset.equal_range(30); // pair of iterators
	//For map multiset and multimap all the same
	
}
