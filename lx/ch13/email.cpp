#include"hf/email.h"
int main()
{
	MailSystem mail_system;
	mail_system.AddUser("Alice");
	mail_system.AddUser("Bob");
	mail_system.SendEmail("Alice","inbox","Hello,Bob");
	mail_system.SendEmail("Alice","inbox","How are you?");
	mail_system.ReceiveEmail("Bob","inbox");
	return 0;
}
