//1. Vector

//Intitalisation

vector<int> v; /* Empty */
vector<int> v( size ); /* Vector with size 'size' */
vector<int> v( size, value ); /* Vector with size 'size' and all elements with value 'value' */
//Basic Inbuilt Functionalities

v.size(); /* Get size of vector */
v.resize( size, value ); /* Fills the additional size of vector with value 'value' */
v.empty(); /* returns true if vector is empty */
v.front(); or v[0]; /* Accessing first element */
v.back(); or v[v.size()-1]; /* Accessing last element */
//Insert an element or a range

v.push_back( ele ); /* Add an element 'ele' to the end */
v.insert( v.begin() + i, ele ); /* Inserting element 'ele' at index i | Use i = 0 for inserting at front */
v.insert( v.end(), v2.begin(), v2.end() ); /* Inserting the elements of vector 'v2' to the end of vector 'v' */
//Erase an element or range

v.pop_back(); /* Remove element at end */
v.erase( v.begin() + i ); /* Remove element at index i */
v.erase( v.begin() + i, v.begin() + j ); /* Remove elements from index i to j-1 */
v.erase( remove( v.begin(), v.end(), value ), v.end() ); /* Removes all elements with value 'value' from the vector */
//2. Strings

//Intitalisation

string s; /* Empty string */
string s_copy(s); or string s_copy = s; /* string with same value as s */
//Inbuilt Functionalities

/* All vector functionalities also apply to strings. */
s.find( search_string ); /* Finds first occurence of search_string in s, returns -1 if not present. */
s.find( search_string, start_pos ); /* Finds first occurence of search_string in s - starting from index start_pos , returns -1 if not present */
//String to Numbers and Vice Versa

string str = "12345";
int num_str = stoi(str); /* To convert str"s value into integer and store it in integer num_str */
/* Similarly for long long we have stoll(str)
For vice versa, we have: */
string str = to_string(num_str); /* To convert num_str's value into integer and store it in string str */
//String Streams

//Count words

string str = "Hello World";
stringstream ss (str); /* In this way, you can initialise a string stream with str's value */

int count = 0;
string word;
/* ss >> var will perform as if we are doing cin>>var with the input as the value of 'ss'
If you do ss >> word, think of it like ss throws it's first word into 'word' */
while( ss >> word ){
	cout<<word<<'-';
	count++;
}
cout<<count;
//Output : Hello-World-2
//Converting String to Numbers

string str = "12345";
stringstream ss (str);
/* ss >> var will perform as if we are doing cin>>var with the input as the value of 'ss' */
int x;
ss>>x; /* x will now have value 12345 */
//Split Functionality by changing delimiter

/* For this we take help of getline function to change the default delimiter from ' ' to  '-'
getline(istream& is, string& str, char delim); */
stringstream ss( "123-456-789");
vector<string> v;
string word;
while( getline(ss, word, '-') ){
	v.push_back(word);
}
/* v will now have value : {"123", "456", "789"} */
//3. STL Helper Functions

vector<Type> v;
//Sort

/* 
	Default sort behaviour : Increasing, by Type :
	int : by value 
	pair<int, int> : First by first value , then by second value
	vector<int> or string : Lexicographically
*/

sort( v.begin(), v.end() ); // Standard Increasing Sort

static bool customComparator(const Type &obj1, const Type &obj2 ){
	/* Think of obj1 and obj2 as two adjacent elements in the final sorted array
	  where obj1 comes before obj2, Just write the relation you want between obj1 and obj2.
	  For eg : Let the type be int If you want smaller value to come first, write : return obj1<obj2.
	  Another eg : Let the type be vector<int> and If you want the vector with larger value at
	  index 3 to come first write : return obj1[3] > obj2[3] */
	return * logic * ;
}
sort( v.begin(), v.end(), customComparator ); /* Sort with customComparator */
//Reverse

reverse( v.begin(), v.end() ); /* Reverse the vector/string */
//Minimum and Maximum Element

auto it = min_element( v.begin(), v.end() );
/* To get positon do it-v.begin()
   To get value do *it
   Similarly use max_element for maximum */
//Binary Search

/* The array must be sorted in increasing order for binary search */
lower_bound( v.begin(), v.end(), ele ); /* Lower Bound : Returns iterator to first element >=ele */
upper_bound( v.begin(), v.end(), ele ); /* Upper Bound : Returns iterator to first element >ele */
binary_search( v.begin(), v.end(), ele ); /* binary_search : Return true if element 'ele' is found */
//Sum

int array_sum = accumulate( v.begin(), v.end(), initial_sum ); /* Set initial_sum as 0 for taking sum of the array */
//Next Permutation

next_permutation( v.begin(), v.end() ); /* Shifts the vector/string to its next permutation in O(n) */
