#include <iostream>

using namespace std;

int PeopleCount(double probability){
    double p = 1;
    int count = 1;
    
    while(p > probability){
        p = p*((365 - count)/365.0);
        count++;
    }
    return count;
}


int main(){
  
    cout << PeopleCount(1 - 0.999) << '\n';
    return 0;
}