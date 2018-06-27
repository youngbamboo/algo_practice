/*
* Linkedin interview question
*/


#include <iostream>
#include <string>
using namespace std;


string func(string& str, string& pattern, string& replace) {
	string rs;
	int pSize=pattern.size();
	for(int begin=0, end=0; end<str.size(); begin=end) {
		rs.push_back(str[end]);
		while(end+pSize-1<str.size() && str.substr(end,pSize)==pattern) {
			end += pSize;
		}
		if (begin!=end) {
			rs.pop_back();
			rs.append(replace);
		} else {
			end++;
		}
	}
	return rs;
}

int main() {
	// your code goes here
	string str = "abcdeffffgabcabcabsssabc";
	string pattern = "abc";
	string replace ="X";
	string rs = func(str,pattern,replace);
	cout<<rs<<endl;
	return 0;
}