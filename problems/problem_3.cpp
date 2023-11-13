#include <string>

std::string problemSolution3(float height, char S) {
    string result;
    if (S = 'F') {
        if (height < 160){
            result = "Short";
        } else if (height >= 160 || height < 175) {
            result = "Normal";
        } else if (height >= 175) 
            result = "Tall";
    } else {
        if (height < 170){
            result = "Short";
        } else if (height >= 170 || height < 185) {
            result = "Normal";
        } else if (height >= 185) 
            result = "Tall";
    }
    return result;
}