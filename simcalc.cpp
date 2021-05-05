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



int main(){
string name;
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
cout << string(40, '\n');

}


void calculator(){
	 int option;
	 float n, sum = 0, i, number; 
	 float number1,number2,difference,quotient,product;
	 
	 cout << string(40, '\n');
	 
	
	cout<<"\n\nselect the type of operation:";
	cout<<"\n\n1.ADDITION \n\n 2.SUBTRACTION \n\n3.MULTIPLICATION \n\n4.DIVISION\n\n";
	cin>>option;
	cout << string(40, '\n');
	cout<<"\n\n";
	
	switch(option){
		
		case 1:
		cout << string(40, '\n');
		cout <<"How many numbers you want to add: ";  
		cin >> n;  
		cout << "\nPlease enter the number one by one: \n";  
		cout<<"\n( note:pls press enter after typing each number)\n\n";

			for (i = 1; i <= n; i++)  
				{  
				cin >> number;  
				sum = sum + number;  
				}  
				
		cout << "\n Sum of the numbers = "<< sum; 
		cout<<"\n***************************";
		
		break;
		
		case 2:
		
		cout << string(40, '\n');
		cout<<"\n subtraction";
		cout<<"\n\nEnter the first number";
		cin>>number1;
		cout<<"\nEnter the second number";
		cin>>number2;
		difference=number1-number2;
		cout<<"\nThe difference is "<<difference;
		cout<<"\n*******************************";

		break;
		
		case 3:
		cout << string(40, '\n');
		cout<<"\n multiplication";
		cout<<"\nenter the first number";
		cin>>number1;
		cout<<"\nEnter the second number";
		cin>>number2;
		product=number1*number2;
		cout<<"\nThe product is " <<product;
		cout<<"\n******************************";
	
	    break;
		
		case 4:
		cout << string(40, '\n');
		cout<<"division";
	    cout<<"\nEnter the first number";
		cin>>number1;
		cout<<"\nEnter the second number";
		cin>>number2;
		quotient=number1/number2;
		cout<<"\nThe quotient is "<<quotient;
		cout<<"\n*****************************";
		break;
		
		
		default:
		cout<<"the selected option is invalid";
		calculator();
		break;
		
	}
}

	void converter()
	{
	int option;
	cout << string(40, '\n');
	cout<<"\n\nselect the type of converter:";
	cout<<"\n\n1.LENGTH \n\n 2.MASS \n\n3.TEMPARATURE   \n\n4.TIME \n";
	cin>>option;
	
	switch(option)
		{
		
		case 1:
	
		cout<<"LENGTH";
		length ();
		break;
		
		case 2:
		cout<<"\nMASS";
		mass();
		break;
		
		case 3:
		cout<<"\n TEMPARATURE";
	    temparature();
		break;
		
		case 4:
		cout<<"TIME";
		time();
		break;
		
		
		default:
		cout<<"the selected option is invalid";
		converter();
		break;
	}}


void length()
	{
	int option;
	float centimeter,meter,kilometer;
	cout << string(40, '\n');
	cout<<"\nselect the type of length :\n";
	cout<<"\n1.centimeter to meter\n2.meter to centimeter\n3.meter to kilometer\n4.kilometer to meter\n";
	cin>>option;
	switch (option)
		{
		case 1:
	    cout << string(40, '\n');
		cout<<"centimeter to meter";
		cout<<"\n\nEnter the length in centi meter:\n\n";
		cin>>centimeter;
		meter=centimeter/100;
		cout<<"\n";
		cout<< centimeter<<" centimeter is equal to "<<meter<<"meter";
		cout<<"\n********************************\n\n";
		break;
		
		case 2:
	    cout << string(40, '\n');
		cout<<"\nmeter to centimeter\n";
		cout<<"\n\nEnter the length in meter\n\n";
		cin>>meter;
		centimeter=meter*100;
		cout<<"\n";
		cout<<meter<<" meter is equal to "<<centimeter<<"centimeter\n";
		cout<<"\n\n********************************\n\n";
		break;
		
		case 3:
		cout << string(40, '\n');
		cout<<"\n meter to kilometer\n";
		cout<<"\nEnter the length in meter:";
		cin>>meter;
		kilometer=meter/1000;
		cout<<"\n";
		cout<<meter<<" meter is equal to "<<kilometer<<"kilometer\n";
		cout<<"\n********************************\n\n";
	    break;
		
		case 4:
		cout << string(40, '\n');
		cout<<"\n kilometer to meter";
		cout<<"\nEnter the length in kilometer:";
		cin>>kilometer;
		meter=kilometer*1000;
		cout<<"\n";
		cout<<kilometer<<" kilometer is equal to "<<meter<<"meter";
		cout<<"\n*********************************";
		break;
		
		
		default:
		cout<<"\nthe selected option is invalid";
		length();
		break;}
	}
	
	
void first()
		{
		int option;
		while(1){
		cout<<" \n \n select the operation you want to use :\n\n 1 calculator \n \n 2 converter\n\n" ;
		cin>>option;

		switch(option)
		{
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
	}
	
void mass()
		{
		int option;
		float gram,kilogram,milligram;
		cout << string(40, '\n');
		cout<<"\nselect the type of mass:";
		cout<<"\n1.gram to kilogram\n2.kilogram to gram\n3.gram to milli gram\n4.milli gram to gram\n";
		cin>>option;
		
		switch(option){
			
			case 1:
			cout << string(40, '\n');	
			cout<<"\ngram to kilogram\n";
			cout<<"\nEnter te weight in gram:";
			cin>>gram;
			kilogram=gram/1000;
			cout<<"\n";
			cout<<"\n"<<gram<<" gram is equal to "<<kilogram <<"  kilogram";
			cout<<"\n****************************";
			break;
			 
			case 2: 
			cout << string(40, '\n');
			cout<<"\nkilogram to gram\n";
			cout<<"\nEnter the weight in kilogram:";
			cin>>kilogram;
			gram=kilogram*1000;
			cout<<"\n"<<kilogram<<" kilogram is equal to "<<gram<<" gram";
			cout<<"\n******************************"; 
			break;
			
			case 3:
		    cout << string(40, '\n');		
			cout<<"\ngram to milligram\n";
			cout<<"\nEnter the weight in gram:";
			cin>>gram;
		    milligram=gram*1000;
		    cout<<"\n"<<gram<<" gram is equal to "<<milligram<<" milli gram";
		    cout<<"\n********************************";
			break;
			
			case 4:
				
			cout << string(40, '\n');
			cout<<"\nmilli gram to gram";
			cout<<"\nEnter the weight in milli gram";
			cin>>milligram;
			gram=milligram/1000;
			cout<<"\n"<<milligram<<" milligram is equal to  "<<gram<<" gram";
			cout<<"\n**********************************";
			break;
			
			default:
				cout<<"The selected option is invalid:";
				mass();
			}}

	
	
void temparature(){
	int option;
	float fahrenheit,celsius;
	cout << string(40, '\n');
	cout<<"\nselect the type of temparature:";
	cout<<"\n\n1.celsius to fahrenheit\n\n2.fahrenheit to celsius\n";
	cin>>option;
	
	switch (option){
		case 1:
			cout << string(40, '\n');
			cout<<"\ncelsius to fahrenheit";
			cout<<"\n\nEnter the temparature in celsius:";
			cin>>celsius;
			fahrenheit=(celsius * 9.0) / 5.0 + 32;
			cout<<"\nThe temparature in "<<celsius<<" celsius"<<" is equal to "<<fahrenheit<<" fahrenheit";
			cout<<"\n***********************************";
			break;
			
			case 2:
				cout << string(40, '\n');
				cout<<"\n fahrenheit to celsius:";
				cout<<"\n\nEnter the temparature in fahrenheit:";
				cin>>fahrenheit;
				celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
				cout<<"\nThe temparature in "<<fahrenheit<<" fahrenheit"<<" is equal to "<<celsius<<" celsius";
				cout<<"\n*********************************";
				break;
				
			default:
				cout<<"The selected option is invalid";
				temparature();
			
	}
}

void time(){
	int option;
	float second,minute,hour;
	
	cout << string(40, '\n');
	cout<<"select the type unit of time:";
	cout<<"\n1.second to minute\n2.minute to second\n3.minute to hour\n4.hour to minute";
	cin>>option;
	
	switch (option){
		
		case 1:
			cout << string(40, '\n');
			cout<<"second to minute";
			cout<<"\n Enter the time in second:";
			cin>>second;
			minute=second/60;
			cout<<"\n"<<second<<" seconds is equal to "<<minute<<" minute";
			cout<<"\n******************************";
		break;
		
		case 2:
			cout << string(40, '\n');
			cout<<"minute to second";
		cout<<"\n Enter the time in minute:";
		cin>>minute;
		second=minute*60;
		cout<<"\n"<<minute<<" minute is equal to "<<second<<" seconds";
		cout<<"\n************************************";
		break;
		
		case 3:
			
			cout << string(40, '\n');
			cout<<"minute to hour";
			cout<<"\nEnter the time in minute:";
			cin>>minute;
			hour=minute/60;
			cout<<"\n"<<minute<<" minute is equal to "<<hour<<" hour";
			cout<<"\n**********************************";
			break;
			
		case 4:
			cout << string(40, '\n');
			cout<<"hour to minute";
			cout<<"\nEnter the time in hour:";
			cin>>hour;
			minute=hour*60;
			cout<<"\n"<<hour<<" hour is equal to "<<minute<<" minute";
			cout<<"\n**********************************";
			break;
			
			default:
				cout<<"The selected option is invalid";
				time();
			
			
	}
}
