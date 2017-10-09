#include <iostream>
#include <vector>
using namespace std;


vector<int> values;

void Multiply(int input)
{
	int newValue = 0;
	int carryValue = 0;	
	vector<int> newValues;
    for(int i = 0; i < values.size(); i++)
    {
    	newValue = (values[i] * input) + carryValue;         
       
        carryValue = (newValue/10);
        newValue = (newValue%10);       
        newValues.push_back(newValue%10);
    }

    while(carryValue > 0){
    	newValues.push_back(carryValue%10);
    	carryValue = carryValue/10;
    }

   
    values.clear();
    for(int i = 0; i < newValues.size(); i++){
    	values.push_back(newValues[i]);
    }
      newValues.clear();     
}

int main(){
    int size;
    cin >> size;
    values.push_back(1);
	for(int i = 1 ; i <= size; i++)
	{
       Multiply(i);
	}
    
    for(int i = values.size() - 1; i >= 0; i--)
    {
    	cout << values[i];
    }
    cout<<'\n';
}