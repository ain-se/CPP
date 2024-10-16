#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::islower;
int main()
{
    vector<string> str;
    string line;
    while(getline(cin, line)&&!line.empty())
	{
        str.push_back(line);
    }

    for (string &s:str)
	{
        for(char &ch:s)
		{
            if(ch==' ') 
			{
                ch='\n';
            }
			if(islower(ch)) 
			{
                ch=char(toupper(ch));
            }
        }
        cout<<s<<endl;
    }
    return 0;
}
