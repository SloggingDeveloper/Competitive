#include <iostream>
#include <sstream>
#include <string>
#include <map>
#include <cstring>

using namespace std;

map<string, string> readInput(){
	int inputCount;
	string inputCountString;
	string firstNumber;
	string secondNumber;
	string name;
	map<string, string> dictionary;
	
	getline(cin, inputCountString);
    stringstream numberInput(inputCountString);

     numberInput >> inputCount;
     while(inputCount > 0)
     {
      string line;
	  getline(cin,line);
      stringstream inputStream(line);    
      inputStream >> firstNumber >> secondNumber >> name;    
      dictionary[firstNumber + " " + secondNumber] = name;      
      inputCount--;
     }

     return dictionary;
}

void printoutput(map<string, string> inputMap){
	int outputCount;
	string outputCountString;
	getline(cin, outputCountString);

	stringstream outputCountStream(outputCountString);

	outputCountStream >> outputCount;
	string questions[outputCount];

     int index = 0;
     int questionsCount = outputCount; 
        
	while(outputCount > 0){	 
	  getline(cin,questions[index++]);      
      outputCount--;
	}

    index = 0;
	while (questionsCount > 0){
       cout << inputMap[questions[index++]] << '\n';
       questionsCount--;
	}
}


int main(){
	map<string, string> inputMap = readInput();
     printoutput(inputMap); 
}