int main() {
	//Non-modifying sequence operations:
	std::array<int,8> foo = {3,5,7,11,13,17,19,23};	
	// Same as any_of, none_of
	std::all_of(foo.begin(), foo.end(), [](int i){return i%2;}); // Return bool
	std::find (myints, myints+4, 30); // Return iterator
	// Same as find_if_not
	std::find_if (foo.begin(), foo.end(), [](int i){return i%2;}) // Return iterator to first
	// Searches the range [first1,last1) for the last occurrence of the sequence defined by [first2,last2)
	std::find_end (foo.begin(), foo.end(), foo.begin() + 5, foo.end(), [](int i, int j) {return i == j;});
	//Same as prev, but return first ocurence
	std::search (foo.begin(), foo.end(), foo.begin() + 5, foo.end(), [](int i, int j) {return i == j;});
	//Find first occurence of any ellement from 2-nd seq
	std:: find_first_of (haystack.begin(), haystack.end(),needle, needle+3, comp_case_insensitive);
	//Searches the range [first,last) for the first occurrence of two consecutive elements that match
	std::adjacent_find (foo.begin(), foo.end(), myfunction); //return iterator to first
	std::count (myvector.begin(), myvector.end(), 20); //return int
	std::count_if (myvector.begin(), myvector.end(), IsOdd); //return int
	// Compares the elements in the range [first1,last1) with those in the range beginning at first2,
	// and returns the first element of both sequences that does not match.
	std::mismatch (myvector.begin(), myvector.end(), myvector2.begin(), mypredicate); //Return pair of iterators
	//All elements the same
	std::equal (myvector.begin(), myvector.end(), myvector.begin(), mypredicate); //Return bool
	//All elements the same in different order
	std::is_permutation (foo.begin(), foo.end(), bar.begin());
	
	
	//Modifying sequence operations:
	//Copies the elements in the range [first,last) into the range beginning at result.	
	std::copy (myvector1.begin(), myvector2.begin()+7, myvector.begin());
	std::copy_n ( myvector1.begin(), 7, myvector.begin() );
	std::copy_if (foo.begin(), foo.end(), bar.begin(), [](int i){return !(i<0);} );
	//Copies the elements in the range [first,last) starting from the end into the range terminating at result.
	std::copy_backward (myvector.begin(), myvector.begin()+5, myvector.end());
	//Exchanges the values of each of the elements in the range [first1,last1) with those of their respective elements in the range beginning at first2.
	std::swap_ranges(foo.begin()+1, foo.end()-1, bar.begin());
	//Applies an operation sequentially to the elements
	bar.resize(foo.size());// allocate space
  	std::transform (foo.begin(), foo.end(), bar.begin(), op_increase);
	//Assigns new_value to all the elements in the range [first,last) that compare equal to old_value.
	std::replace (myvector.begin(), myvector.end(), 20, 99);
	std::replace_if (myvector.begin(), myvector.end(), IsOdd, 0);
	//Assigns val to all the elements in the range [first,last).
	std::fill (myvector.begin()+3,myvector.end()-2,8);
	std::fill_n (myvector.begin()+3,3,33);
	//Assigns the value returned by successive calls to gen to the elements in the range [first,last).
	std::generate (myvector.begin(), myvector.end(), RandomNumber);
	std::generate_n (myarray, 9, UniqueNumber);
	//Transforms the range [first,last) into a range with all the elements that compare equal to val removed,
	// and returns an iterator to the new end of that range.
	pend = std::remove (pbegin, pend, 20);  
	pend = std::remove_if (pbegin, pend, IsOdd); 
	//Removes all but the first element from every consecutive group of equivalent elements in the range [first,last).
	std::unique (myvector.begin(), myvector.end(), myfunction); //first sort
	std::reverse(myvector.begin(),myvector.end()); 
	// Rotates the order of the elements in the range [first,last),
	// in such a way that the element pointed by middle becomes the new first element.
	std::rotate(myvector.begin(),myvector.begin()+3,myvector.end());
	// Rearranges the elements in the range [first,last) randomly.
	std::random_shuffle ( myvector.begin(), myvector.end() );

	//Partitions
	//Returns true if all the elements in the range [first,last) for which pred returns true precede those for which it returns false.
	std::is_partitioned(foo.begin(),foo.end(),IsOdd)
	//Rearranges the elements from the range [first,last), in such a way that all the elements
	//for which pred returns true precede all those for which it returns false
	bound = std::partition (myvector.begin(), myvector.end(), IsOdd); // Return an iterator that points to the first element of the second group of elements
	std::stable_partition (myvector.begin(), myvector.end(), IsOdd);
	//Returns an iterator to the first element in the partitioned range [first,last)
	// for which pred is not true, indicating its partition point.
	std::partition_point(foo.begin(),foo.end(),IsOdd);

	//Sorting
  	std::sort (myvector.begin()+4, myvector.end(), [](int i, int j) {return i < j;});
	std::stable_sort (myvector.begin(), myvector.end());
	std::is_sorted(foo.begin(),foo.end());
	//Returns an iterator to the first element in the range [first,last) which does not follow an ascending order.
	std::is_sorted_until(foo.begin(),foo.end());
	//Rearranges the elements in the range [first,last), in such a way that the element 
	//at the nth position is the element that would be in that position in a sorted sequence
	std::nth_element (myvector.begin(), myvector.begin()+5, myvector.end(),myfunction);
	
	//Binary search
	//Returns an iterator pointing to the first element in the range [first,last) which does not compare less than val
	// 10 10 10 20 20 20 30 30	
	low =std::lower_bound (v.begin(), v.end(), 20); // 3
	//Returns an iterator pointing to the first element in the range [first,last) which compares greater than val.
  	up = std::upper_bound (v.begin(), v.end(), 20); // 6
	//Returns the bounds of the subrange that includes all the elements of the range [first,last) with values equivalent to val.
	bounds=std::equal_range (v.begin(), v.end(), 20); // return pair
	//Returns true if any element in the range [first,last) is equivalent to val, and false otherwise.
	std::binary_search (v.begin(), v.end(), 3);
	

	//Heap
	//Rearranges the elements in the range [first,last) in such a way that they form a heap.
	std::make_heap (v.begin(),v.end());
	std::pop_heap (v.begin(),v.end()); v.pop_back();
	v.push_back(99); std::push_heap (v.begin(),v.end());
	std::sort_heap (v.begin(),v.end());
	std::is_heap(foo.begin(),foo.end());
	
	//Min/Max
	//Returns an iterator pointing to the element with the smallest value in the range [first,last).	
	std::min_element(myints,myints+7,myfn);
	std::max_element(myints,myints+7,myfn);
	std::minmax_element (foo.begin(),foo.end()); // return pair
	
	//Other
	//Returns true if the range [first1,last1) compares lexicographically less than the range [first2,last2).
	std::lexicographical_compare(foo,foo+5,bar,bar+9);
	//Rearranges the elements in the range [first,last) into the next lexicographically greater permutation	
	do {
    		std::cout << myints[0] << ' ' << myints[1] << ' ' << myints[2] << '\n';
  	} while ( std::next_permutation(myints,myints+3) );
	std::prev_permutation(myints,myints+3)
	
	return -1;
}
