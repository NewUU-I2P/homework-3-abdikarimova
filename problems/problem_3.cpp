#include <string>

std::string problemSolution3(float height, char S) {
    if (S = 'F') {
        if (height < 160){
            cout << "Short" << endl;
        } else if (height >= 160 || height < 175) {
            cout << "Normal" << endl;
        } else if (height > 175) 
            cout << "Tall" << endl;
    } else {
        if (height < 170){
            cout << "Short" << endl;
        } else if (height >= 170 || height < 185) {
            cout << "Normal" << endl;
        } else if (height > 185) 
            cout << "Tall" << endl;
    }
}