#include<iostream>  
using namespace std;
void calculator(); 
void kmTom();
void mtocm();
void kgTogram();
void CelsiusToFahrenheit();

int main(){
	string name; //variable to store name 
	int option; //variable to store user option 
	
	
	while(1){
	cout<<"Hi, Welcome to universal convertor \n";
	cout<<"Enter your Name : ";
	cin>>name;
	cout<<"Hello "<<name<<"\n";  
	cout<<"choose your option "<<endl; 
	
	cout<< "1: calculator"<<endl;  
	cout<< "2: KM to M convertor"<<endl;
	cout<< "3: M to CM convertor"<<endl;
	cout<< "4: KG to Gram convertor"<<endl;
	cout<< "5: Celsius to Fahrenheit convertor "<<endl;
	cin>>option;
	
	
	
		switch(option){
		case 1:
			calculator(); //calling calculator  function
			break;
		case 2:
			kmTom(); //calling Killometer to Meter convertor function
			break;
		case 3:
			mtocm(); //calling Meter to CentiMeter convertor function
			break;
		case 4:
		    kgTogram(); //calling Killogram to Gram converter function
		    break;
		case 5:
			CelsiusToFahrenheit();//function to convert farenheit to celcius 
			 
			break;
		default:
			cout<<"Wrong option";
			break;
	}
} 
}

	void calculator(){ 
	int select;
	int num_1, num_2, answer;
	
	cout<<"choose your option "<<endl;
	cout<< "1: Addition "<<endl;
	cout<< "2: subtraction"<<endl;
	cout<< "3: Multiplication "<<endl;
	cout<< "4: Division "<<endl;
	cin>>select;
	switch(select){
		case 1:
		cout<<" Addition"<<endl;
			cout<<"Enter First number: " <<endl;
			cin>>num_1;
			cout<<"Enter second number: "<<endl;
			cin>>num_2;
			answer = num_1 + num_2;
			cout<<"Answer : "<<answer<<endl;
			break;
		case 2:
		cout<<" Subtraction"<<endl;
			cout<<"Enter First number: " <<endl;
			cin>>num_1;
			cout<<"Enter second number: "<<endl;
			cin>>num_2;
			answer = num_1 - num_2;
			cout<<"Answer : "<<answer<<endl;
			break;
		case 3:
		cout<<" Multiplication"<<endl;
			cout<<"Enter First number: " <<endl;
			cin>>num_1;
			cout<<"Enter second number: "<<endl;
			cin>>num_2;
			answer = num_1 * num_2;
			cout<<"Answer : "<<answer<<endl;
			break;
		case 4:
		cout<<" Division"<<endl;
			cout<<"Enter First number: " <<endl;
			cin>>num_1;
			cout<<"Enter second number: "<<endl;
			cin>>num_2;
			answer = num_1 / num_2;
			cout<<"Answer : "<<answer<<endl;
			break;
		default:
			break;
	}
}

void kmTom(){ //Kilometre to Meter fucntion 
	float km;
	float meter;
	cout<<"\n Enter value in Kilometre: ";
	cin>>km;
	meter = km * 1000;
	cout<<km<<" KM is equal to "<<meter << " Meter";
}

void mtocm(){
	float m;
	float cm;
	cout<<"\n Enter value in Meter: ";
	cin>>m;
	cm = m * 100;
	cout<<m<<" M is equal to "<<cm << " CM";
}
void kgTogram() {
	float kilograms;
	std::cout << "Please enter kilograms:";
	std::cin >> kilograms;
	float grams = kilograms * 1000;
	std::cout << grams << " Grams";
}
void CelsiusToFahrenheit() {
	 float f, c;
     cout << "Enter temperature in Celsius: ";
     cin >> c;
     f = (9.0*c/5.0)+32;
     cout << "Equivalent Fahrenheit temperature is: " << f;
}


