#include "std_lib_facilities.h"

int main()
{	
	double larg,smal, mind11,largest_conveted_num =0,smallest_conveted_num =0,sum=0 ; 
	mind11=1;
	int error=0;
	char br;
	int num_of_ent_nums=0;
 	vector<double> szamok;	
	
	while (br!='|'){
		
		double number =0, converted_number =0;
		string unit;
		cout<<"Please write number and a value accepted units: cm, m ,ft, in \n";
		cin >> number;
		cin >>unit;
		
			
	
		
		if(unit == "cm") converted_number=number/100;
			else if(unit == "m") converted_number = number;
				else if(unit == "in") converted_number= number * 2.54 / 100;
					else if(unit == "ft")converted_number= number*2.54 * 12 /100; 
						else error=1;
			
		
		if(error == 1) {cout<<"Try anotther unit if you want ..accepted units: cm, m ,ft, in\n";
				error=0;
				}
			else{
				num_of_ent_nums++;
				sum = sum + converted_number;
				szamok.push_back(converted_number);
						
				if(mind11 == 1) {
					cout << number << unit <<" its the first number so it's largest and smallest number seen so far "<<endl;
					larg=converted_number;
					smal=converted_number;
					mind11=2;
					}
				else{ 
		
					cout << number<< unit ;
					if (converted_number <= smal){ 
						cout<<" smallest number seen so far\n";
						smal = converted_number;   
						}
					if (converted_number >= larg){ 
						cout<<" largest number seen so far\n";
						larg = converted_number;  
						}
		
		
		
		
		
			}	
	
		}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	/*double number1, number2;
	cin >> number1>> number2;
	//cout <<number1<<" "<<number2<<endl;

	
	if(number1 == number2) cout <<"the numbers are equal";
		else	if(number1 < number2){
				cout <<"the smaller value is: "<< number1 <<endl;
				cout <<"the bigger number is: "<< number2 <<endl;
				if(number2-number1 < 1/100) cout <<"the numers are almost equal\n"; 
			}
					else{
				cout <<"the smaller value is: "<< number2 <<endl;
				cout <<"the bigger number is: "<< number1 <<endl;
				if(number2-number1 < 1/100) cout <<"the numers are almost equal\n"; 
			}*/
	
	
	
	cout <<endl<<"Please write '|' in case you wanna quit and any other caracter to continue\n";
	cin>>br;
	}
	
	 
	cout<<"Largest number seen converted to m: "<<larg<< endl;
	cout<<"Smallest number seen converted to m: "<< smal << endl;
	cout<<"Sum of the entered numbers: "<< sum << endl;
	cout<<"Number of entered valid values: "<< num_of_ent_nums << endl;
	
	
	sort(szamok);
	cout<<"All the entered values converted to m and sorted in ascending order:\n";
	int n=szamok.size();
	for(double s : szamok)
		cout<<s<<" ";
	cout<<endl;	


return 0;	}

