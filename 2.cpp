#include<iostream>

using namespace std;

class information{

    private:
    	
     int cust_id;
     char cust_name[100];
     int cust_age;
     char cust_telecome_brand_name[100];
     int cust_mobile_number;
     char cust_city[100];
     char cust_simcard_validity[100]; 
	 
	public:
	
	void setter(){
		
		cout<<"Enter id : ";
		cin>>cust_id;
		
		cout<<"Enter name : ";
		cin>>cust_name;
		
		cout<<"Enter age : ";
		cin>>cust_age;
		
		cout<<"Enter telecome brand name : ";
		cin>>cust_telecome_brand_name;
		
		cout<<"Enter mobile number : ";
		cin>>cust_mobile_number;
		
		cout<<"Enter city : ";
		cin>>cust_city;
		
		cout<<"Enter simcard validity : ";
		cin>>cust_simcard_validity;
		
	}     	
	
	void getter(){
		
		cout<<"Your value of id : "<<cust_id<<endl;	
		cout<<"Your value of name : "<<cust_name<<endl;	
 		cout<<"Your value of age : "<<cust_age<<endl;	
		cout<<"Your value of telecome brand name : "<<cust_telecome_brand_name<<endl;	
		cout<<"Your value of mobile number : "<<cust_mobile_number<<endl;	
		cout<<"Your value of city : "<<cust_city<<endl;	
		cout<<"Your value of simcard validity : "<<cust_simcard_validity<<endl;	

	}
};

main(){
	
	information i;
	
	i.setter();
	i.getter();

}
