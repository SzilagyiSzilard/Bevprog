#include "std_lib_facilities.h"

int main()
{ 	cout << "Please enter your first name (followed by enter)\n";
	string name;
	cin >> name;
	

	cout << "Please enter the name of the person you want to write to.\n";
	string first_name;
	cin >> first_name;
	
	cout << "Please enter his/her age aswell:"<<endl;
	int age;
	cin >> age;
	if(age<=0 || age>=110)  simple_error("you're kidding!");
	
	
	cout <<"Please enter one of your other friends name.\n";
	string friend_name;
	cin >> friend_name;
	
	cout <<"Please specify the sex of the mentioned friend with f for female and m for male :\n";
	char friend_sex;
	cin >>friend_sex;
	
	
	
	
	cout << "Dear "<< first_name <<"!\n"<<endl<<endl;
	
	cout <<"How are you? I am fine. I miss you. "<<endl;
	cout <<"Have you seen "<< friend_name <<" lately ?"<<endl;
	
	if(friend_sex == 'f')
		cout <<"If you see "<< friend_name <<" please ask her to call me!"<<endl;
	if(friend_sex == 'm')
		cout <<"If you see "<< friend_name <<" please ask him to call me!"<<endl;
		
	if(age<=0 || age>=110)  simple_error("you're kidding!");
	cout<<"I hear you just had a birthday and you are "<< age << " years old."<<endl;	
	if(age<12) cout<<"Next year you will be "<< age+1 <<endl;
	if(age==17) cout<<"Next year you will be able to vote" << endl;
	if(age>70) cout<<"I hope you are enjoying retirement"<< endl;
	
	cout<< endl<< "Yours sincerely.\n\n\n"<< name <<endl;
		
	
	

	

return 0 ;}

