#include <iostream>
using namespace std;

class AgeGradation 
{
public: static string GetStatus(int age) 
{
    if (age < 0)                    
        return "It is not born";            
    else if (age < 8)               
        return "This is a preschooler";        
    else if (age < 19)             
        return "This is a schoolboy";            
    else if (age < 31)              
        return "This is a young adult";       
    else if (age < 46)              
        return "This is a middle-aged adult"; 
    else if (age < 91)              
        return "This is a old adult";         
    else if (age <= 110)            
        return "This is a centenarian";        
    else if (age > 110)             
        return "Most likely dead";     
}
};

int main()
{
    int age; 
    cout << "Input an age and get it's classification\nEnter age: ";
    cin >> age; 
    cout << AgeGradation::GetStatus(age); 
}