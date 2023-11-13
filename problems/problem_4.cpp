#include <string>
#include <sstream>

std::string problemSolution4(const std::string macAddress) {
    string result;
    if ((macAddress[1]) % 2 == 0) {
        result = "unicast";
    } else if ((macAddress[1]) % 2 == 1) {
        result = "multicast";
    } else {
        result = "broadcast";
    }
    return result;
}
