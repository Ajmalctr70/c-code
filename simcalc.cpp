#include <iostream>
using namespace std;

void first();
void calculator();
void converter();
void add();
void multiplication();
void subtraction();
void division();
void length();
void mass();
void temparature();
void time();
void cm();
void mkm();
void kmm();
void mcm();
void second();



int main(){
string name;
int option;
cout<<"\nSIMPCLAC";
cout<<"\n";
cout<<"\n";
cout<<"\nEnter your name:";
cin>>name;
cout << string(40, '\n');
cout<<"\n";
cout<<"\n";
cout<<"\nHi "<<name<<"\n";
cout<<"\n"; 
cout<<"\nWelcome to SIMPCALC. \n  ";
first();
/*
cout<<" \n \n select the operation you want to use :\n\n 1 calculator \n \n 2 converter\n" ;
cin>>option;

switch(option){
	case 1:
	cout<<"calculator\n";
	calculator();
	break;
	
	case 2:
	cout<<"converter\n";
	converter();
	break;
	
	default:
	cout<<"The selected option is invalid\n";
	
	break;
}*/
}



void calculator(){
	 int option;
	
	cout<<"\n\nselect the type of operation:";
	cout<<"\n\n1.ADDITION \n\n 2.SUBTRACTION \n\n3.MULTIPLICATION \n\n4.DIVISION\n\n";
	cin>>option;
	cout << string(40, '\n');
	cout<<"\n\n";
	
	switch(option){
		
		case 1:
			add();
		
		break;
		
		case 2:
		cout<<"\n subtraction";
		subtraction();
		  
		
		break;
		
		case 3:
		cout<<"\n multiplication";
		 multiplication();
		
		break;
		
		case 4:
		cout<<"division";
	    division();
		break;
		
		
		default:
		cout<<"the selected option is invalid";
		calculator();
		break;
		
	}
}

void add(){
	float n, sum = 0, i, number;  
cout <<"How many numbers you want to add: ";  
cin >> n;  
cout << "\nPlease enter the number one by one: \n";  
cout<<"\n( note:pls press enter after typing each number\n\n)";
for (i = 1; i <= n; i++)  
{  
cin >> number;  
sum = sum + number;  
}  
cout << "\n Sum of the numbers = "<< sum; 
cout<<"\n***************************";
cout<<"\n1.continue the same operation \n2.jump to calculator \n3.jump to  converter \n4.exit from simpcalc";
		second();
}  
	
void subtraction(){
	float number1,number2,difference;
	cout<<"\n\nEnter the first number";
	cin>>number1;
	cout<<"\nEnter the second number";
	cin>>number2;
difference=number1-number2;
cout<<"\nThe difference is "<<difference;
cout<<"\n*******************************";
cout<<"\n1.continue the same operation \n2.jump to calculator \n3.jump to  converter \n4.exit from simpcalc";
		second();
}

void division(){
	float number1,number2,quotient;
	cout<<"\nEnter the first number";
	cin>>number1;
	cout<<"\nEnter the second number";
	cin>>number2;
	quotient=number1/number2;
	cout<<"\nThe quotent is "<<quotient;
	cout<<"\n*****************************";
	cout<<"\n1.continue the same operation \n2.jump to calculator \n3.jump to  converter \n4.exit from simpcalc";
		second();
	
}

void multiplication(){
	float number1,number2,product;
	cout<<"\nenter the first number";
	cin>>number1;
	cout<<"\nEnter the second number";
	cin>>number2;
	product=number1*number2;
	cout<<"\nThe product is " <<product;
	cout<<"\n******************************";
	cout<<"\n1.continue the same operation \n2.jump to calculator \n3.jump to  converter \n4.exit from simpcalc";
		second();
	
	}
	
	void converter(){
		 int option;
		 cout << string(20, '\n');
	cout<<"\n\nselect the type of converter:";
	cout<<"\n\n1.LENGTH \n\n 2.MASS \n\n3.TEMPARATURE   \n\n4.TIME \n";
	cin>>option;
	
	switch(option){
		
		case 1:
		cout<<"LENGTH";
		length ();
		
		break;
		
		case 2:
		cout<<"\nMASS";
		void mass();
		  
		
		break;
		
		case 3:
		cout<<"\n TEMPARATURE";
		void temparature();
		
		break;
		
		case 4:
		cout<<"TIME";
		break;
		
		
		default:
		cout<<"the selected option is invalid";
		converter();
		break;
	}}


void length(){
	int option;
	cout<<"\nselect the type of length :\n";
	cout<<"\n1.centimeter to meter\n2.meter to centimeter\n3.meter to kilometer\n4.kilometer to meter\n";
	cin>>option;
	switch (option){
		case 1:
		cout<<"centimeter to meter";
		cm();
		cout<<"\nselect any one of the following options:";
		cout<<"\n1.continue the same operation \n2.jump to calculator \n3.jump to  converter \n4.exit from simpcalc";
		second();
		break;
		
		case 2:
		cout<<"\nmeter to centimeter\n";
		mcm();
		cout<<"\nselect any one of the following options:";
		cout<<"\n1.continue the same operation \n2.jump to calculator \n3.jump to  converter \n4.exit from simpcalc";
		second();
		  
		
		break;
		
		case 3:
		cout<<"\n meter to kilometer\n";
		mkm();
		cout<<"\nselect any one of the following options:";
		cout<<"\n1.jump to calculator \n2.jump to converter \n3.exit from simpcalc";
		second();
		break;
		
		case 4:
		cout<<"\n kilometer to meter";
		kmm();
		cout<<"\nselect any one of the following options:";
		cout<<" \n1.jump to calculator \n2.jump to converter \n3.exit from simpcalc";
		second();
		break;
		
		
		default:
		cout<<"\nthe selected option is invalid";
		length();
		break;}
	}
	
	void first(){
		int option;
	
	cout<<" \n \n select the operation you want to use :\n\n 1 calculator \n \n 2 converter\n\n" ;
	cin>>option;

switch(option){
	case 1:
	cout<<"calculator\n";
	cout << string(40, '\n');
	calculator();
	break;
	
	case 2:
	cout<<"converter\n";
	cout << string(40, '\n');
	converter();
	break;
	
	default:
	cout<<"The selected option is invalid\n";
	first();
	
	break;
}
	}
	
	
	void cm(){
		float cm,meter;
		cout<<"\n\nEnter the length in centi meter:\n\n";
		cin>>cm;
		meter=cm/100;
		cout<< meter;
		cout<<"meter";
		cout<<"********************************";
			}
	
	void mcm(){
		float centimeter, meter;
		cout<<"\nEnter the length in meter\n";
		cin>>meter;
		centimeter=meter*100;
		cout<<centimeter<<"meter\n";
		cout<<"********************************";
	}
	
	
	void mkm(){
		float meter,kilometer;
		cout<<"Enter the length in meter:";
		cin>>meter;
		kilometer=meter/1000;
		cout<<kilometer<<"kilometer\n";
		cout<<"********************************";
	}
	
	void kmm(){
		int meter,kilometer;
		cout<<"Enter the length in kilometer:";
		cin>>kilometer;
		meter=kilometer*1000;
		cout<<meter<<meter;
		cout<<"*********************************";
	}
	
	void second(){
	
		int option;
	
		cin>>option;
		switch (option){
			
				
			case 1:
			cout<<"jump to calculator:";
			calculator();
			break;
			
			case 2:
			cout<<"jump to other converter";
			converter();
			break;
			
			case 3:;
			cout << string(20, '\n');
			cout<<"thanks for using SIMPCALC";	
			break;
			
			default:
				cout<<"the selected option is invalid";
				
				break;
		}
	}
