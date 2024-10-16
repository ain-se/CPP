//创建vector<int> num
#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
int main()
{
    vector<int> d;
    int a;
    while(cin>>a)
        d.push_back(a);
    for (int b=0;b<d.size()-1;++b)
        cout<<d[b]+d[b+1]<<endl;
    cout << "---------------------------------" << endl;
    int c=0;
    int e=d.size()-1;
    while(c<e)
	{
        cout<<d[c]+d[e]<<endl;
        ++c;
        --e;
    }
    return 0;
}
