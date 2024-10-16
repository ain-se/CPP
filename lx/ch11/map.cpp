#include<iostream>
#include<map>
#include<string>
using std::map;
using std::string;
using std::cout;
using std::endl;
using std::cin;
int main() 
{
    // 创建一个map，键是学生的名字，值是他们的成绩
    map<string,int> studentGrades;
    // 插入一些数据
    studentGrades["Alice"]=92;
    studentGrades["Bob"]=85;
    studentGrades["Charlie"]=78;
    // 打印所有学生的成绩
    cout<<"Grades:"<<endl;
    for(const auto& pair:studentGrades)
	{
        cout<<pair.first<<":"<<pair.second<<endl;
    }
    // 读取一个学生的名字并打印他们的成绩
    string name;
    cout<<"Enter a student's name to get their grade:";
    cin>>name;
    // 查找学生的成绩
    auto it=studentGrades.find(name);
    if(it!=studentGrades.end())
	{
        cout<<"Grade for "<<name<<":"<<it->second<<endl;
	}
	else
	{
		cout<<"No grade found for "<<name<<endl;
	}
    // 更新一个学生的成绩
    string updateName="Bob";
    int newGrade=88;
    cout<<"Updating grade for "<<updateName<<" to "<<newGrade<<endl;
    studentGrades[updateName]=newGrade;
    // 再次打印更新后的成绩
    cout<<"Updated Grades:"<<endl;
    for(const auto& pair:studentGrades)
	{
		cout<<pair.first<<":"<<pair.second<<endl;
	}
	return 0;
}
