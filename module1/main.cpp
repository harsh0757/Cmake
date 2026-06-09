#include<iostream>
#include "addition.h"
#include "division.h"
#include "print_result.h"

using namespace std;



int main(){

	float first_no, second_no, result_add, result_div;
	cout<<"Enter first number : "<<endl;
	cin>>first_no;
	cout<<"Enter second number : "<<endl;
	cin>>second_no;

	result_add = additon(first_no, second_no);
	result_div = division(first_no, second_no);

	print_result("Addition", result_add);
	print_result("Division", result_div);
	
	return 0;
}	
