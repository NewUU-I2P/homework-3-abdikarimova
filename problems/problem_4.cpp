#include <string>
#include <sstream>
#include <map>

std::string problemSolution4(const std::string &macAddress) {
    bool test = true; 
    string answer;  
    for(int i = 0; i <= 16; i++)
    {
        if(macAddress[i] != 'F' && macAddress[i] != ':')
        {
            test = false; 
            break; 
        } 
    }
    int number; 
    map <char, int> m; 
    m['0'] = 0; m['1'] = 1; m['2'] = 2; m['3'] = 3; m['4'] = 4; m['5'] = 5;
    m['6'] = 6; m['7'] = 7; m['8'] = 8; m['9'] = 9; m['A'] = 10; m['B'] = 11; 
    m['C'] = 12; m['D'] = 13; m['E'] = 14; m['F'] = 15; 
    number = m[macAddress[0]]*16 + m[macAddress[1]]; 
    if(test)
        answer = "broadcast";  
    else if(number%2==0)
        answer = "unicast";  
    else 
        answer = "multicast"; 

    return answer;
   
}
