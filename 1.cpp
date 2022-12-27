#include<iostream>

using namespace std;

class information{

    private:
    	
     int stu_id;
     char stu_name[100];
     int stu_age;
     char stu_course[100];
     char stu_email[100];
     char stu_city[100];
     char stu_college[100]; 
	 
	public:
	
	void setter(){
		
		cout<<"Enter id : ";
		cin>>stu_id;
		
		cout<<"Enter name : ";
		cin>>stu_name;
		
		cout<<"Enter age : ";
		cin>>stu_age;
		
		cout<<"Enter course : ";
		cin>>stu_course;
		
		cout<<"Enter email : ";
		cin>>stu_email;
		
		cout<<"Enter city : ";
		cin>>stu_city;
		
		cout<<"Enter college : ";
		cin>>stu_college;
		
	}     	
	
	void getter(){
		
		cout<<"Your value of id : "<<stu_id<<endl;	
		cout<<"Your value of name : "<<stu_name<<endl;	
 		cout<<"Your value of age : "<<stu_age<<endl;	
		cout<<"Your value of course : "<<stu_course<<endl;	
		cout<<"Your value of email : "<<stu_email<<endl;	
		cout<<"Your value of city : "<<stu_city<<endl;	
		cout<<"Your value of college : "<<stu_college<<endl;	

	}
};

main(){
	
	information i;
	
	i.setter();
	i.getter();
	

}

