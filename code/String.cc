// C++ program to demonstrate various function string class
#include <string>
#include <regex>
using namespace std;
 
int main()
{
    // initialization by part of another string : iteartor version
    string str5(str2.begin(), str2.begin() + 5); 
    // clear function deletes all character from string
    str4.clear(); 
    //  both size() and length() return length of string and
    //  they work as synonyms
    int len = str6.length(); // Same as "len = str6.size();"
    // a particular character can be accessed using at /
    // [] operator
    char ch = str6.at(2); //  Same as "ch = str6[2];"
    char ch_f = str6.front();  // Same as "ch_f = str6[0];"
    char ch_b = str6.back();   // Same as below
                               // "ch_b = str6[str6.length() - 1];"
 
    cout << "First char is : " << ch_f << ", Last char is : "
         << ch_b << endl;
 
    // c_str returns null terminated char array version of string
    const char* charstr = str6.c_str();
    printf("%s\n", charstr);
 
    // append add the argument string at the end
    str6.append(" extension");
    //  same as str6 += " extension"
 
    // another version of appends, which appends part of other
    // string
    str4.append(str6, 0, 6);  // at 0th position 6 character
  
    //  find returns index where pattern is found.
    //  Is pattern is not there it returns predefined constant npos
    //  whose value is -1 
    if (str6.find(str4) != string::npos)
        cout << "str4 found in str6 at " << str6.find(str4)
             << " pos" << endl;
    else
        cout << "str4 not found in str6" << endl;
 
    //  substr(a, b) function returns a substring of b length
    //  starting from index a
    cout << str6.substr(7, 3) << endl;
 
    //  if second argument is not passed, string till end is
    // taken as substring
    cout << str6.substr(7) << endl;
 
    //  erase(a, b) deletes b character at index a
    str6.erase(7, 4);
    cout << str6 << endl;
 
    //  iterator version of erase
    str6.erase(str6.begin() + 5, str6.end() - 3);
    cout << str6 << endl;
 
    str6 = "This is a examples"; 
    //  replace(a, b, str)  replaces b character from a index by str
    str6.replace(2, 7, "ese are test");
 	
    if (std::regex_match ("subject", std::regex("(sub)(.*)") ))
    	std::cout << "string literal matched\n";
    std::string s ("subject");
    std::regex e ("(sub)(.*)");
    std::smatch sm;    // same as std::match_results<const char*> cm;
    std::regex_match (s,sm,e);
    for (unsigned i=0; i<sm.size(); ++i) {
    	std::cout << "[" << sm[i] << "] ";
    }
    //Returns whether some sub-sequence in the target sequence (the subject) matches the regular expression rgx (the pattern).
    std::regex_search (s,m,e)
    //Makes a copy of the target sequence (the subject) with all matches of the regular expression rgx (the pattern) replaced by fmt (the replacement).
    //The target sequence is either s or the character sequence between first and last, depending on the version used.
    std::cout << std::regex_replace (s,e,"sub-$2");

 
    return 0;
}
