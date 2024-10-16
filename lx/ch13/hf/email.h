#ifndef MAIL_SYSTEM_H
#define MAIL_SYSTEM_H
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<set>
using std::cout;
using std::string;
using std::endl;
using std::map;
using std::set;
using std::vector;
class Message
{
	public:
		Message(const string&sender,const string&receiver,const string&content):sender_(sender),receiver_(receiver),content_(content),is_read_(false){}
		void Read()
		{
			is_read_=true;
		}
		void Display()const
		{
			if(is_read_)
			{
				cout<<"From:"<<sender_<<", To:"<<receiver_<<", Content:"<<content_<<endl;
			}
			else
			{
				cout<<"From:"<<sender_<<", To:"<<receiver_<<", Content: [Unread]"<<endl;
			}
		}
		bool IsRead()const
		{
			return is_read_;
		}
	private:
		string sender_;
		string receiver_;
		string content_;
		bool is_read_;
};
class Folder
{
	public:
		void AddMessage(const Message& message)
		{
			messages_.push_back(message);
		}
		void DisplayMessages()const
		{
			for(const auto& message:messages_)
			{
				message.Display();
			}
		}
	private:
		vector<Message> messages_;
};
class User
{
	public:
		void AddFolder(const string& folder_name)
		{
			folders_[folder_name]=Folder();
		}
		void SendMessage(const string& folder_name,const Message& message)
		{
			if(folders_.find(folder_name)!=folders_.end())
			{
				folders_[folder_name].AddMessage(message);
			}
			else
			{
				cout<<"Folder not found."<<endl;
			}
		}
		void DisplayFolder(const string& folder_name)
		{
			if(folders_.find(folder_name)!=folders_.end())
			{
				folders_[folder_name].DisplayMessages();
			}
			else
			{
				cout<<"Folder not found."<<endl;
			}
		}
	private:
		map<string,Folder> folders_;
};
class MailSystem
{
	public:
		void AddUser(const string& user_name)
		{
			users_[user_name]=User();
		}
		void SendEmail(const string& sender,const string& recipient_folder,const string& content)
		{
			if(users_.find(sender)!=users_.end())
			{
				Message message(sender,"System",content);
				users_[sender].SendMessage(recipient_folder,message);
			}
			else
			{
				cout<<"Sender not found."<<endl;
			}
		}
		void ReceiveEmail(const string& recipient,const string& folder_name)
		{
			if(users_.find(recipient)!=users_.end())
			{
				users_[recipient].DisplayFolder(folder_name);
			}
			else
			{
				cout<<"Recipient not found."<<endl;
			}
		}
	private:
		map<string,User> users_;
};
#endif//MAIL_SYSTEM_H
