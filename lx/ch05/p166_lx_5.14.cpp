#include<iostream>
#include<string>
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;
using std::vector;
int main()
{
    string line,p_w="",m_f_w="";
	vector<size_t> s_i;
	int m_c=0,count=0;
	getline(cin,line);
	for(size_t i=0;i<line.size();++i)
		if(line[i]==' ')
			s_i.push_back(i);
	size_t w_s=0;
	for(size_t i=0;i<=s_i.size();++i)
	{
		size_t w_e=(i==s_i.size()?line.size():s_i[i]);
		string c_w="";
		for(size_t j=w_s;j<w_e;++j)
			c_w+=line[j];
		if(c_w==p_w)
		{
			count++;
			if(count>m_c)
			{
				m_c=count;
				m_f_w=c_w;
			}
		}
		else
		{
			count=1;
			p_w=c_w;
		}
		w_s=w_e+1;
	}
	cout<<m_f_w<<"："<<m_c<<endl;
	return 0;
}
