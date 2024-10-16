#include <algorithm>
#include<iostream>
#include<string>
#include<fstream>
#include<sstream>
#include<map>
#include<set>
using std::string;
using std::cout;
using std::getline;
using std::cin;
using std::ifstream;
using std::cerr;
using std::endl;
using std::remove_if;
using std::map;
using std::set;
using std::istringstream;
using std::transform;
int main()
{
	string filename,target_word;
	cout<<"Enter the filename: ";
	getline(cin,filename);
	cout<<"Enter the word to search: ";
	getline(cin,target_word);
	ifstream file(filename);
	if(!file.is_open())
	{
		cerr<<"Error opening file."<<endl;
		return 1;
	}
	map<string,set<int>> word_line_map;
	string line;
	int line_number=0;
	while(getline(file,line))
	{
		++line_number;
		istringstream iss(line);
		string word;
		while(iss>>word)
		{
			word.erase(remove_if(word.begin(),word.end(),::ispunct),word.end());
			transform(word.begin(),word.end(),word.begin(),::tolower);
			if(word==target_word)
				word_line_map[word].insert(line_number);
		}
	}
	file.close();
	if(word_line_map.count(target_word)>0)
	{
		cout<<target_word<<" occurs "<<word_line_map[target_word].size()<<" times"<<endl;
		for(int line:word_line_map[target_word])
			cout<<"(line: "<<line<<")"<<endl;
	}
	else
		cout<<target_word<<" not found"<<endl;
	return 0;
}
