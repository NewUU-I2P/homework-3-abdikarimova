#include <string>
#include <sstream>
#include <map>

std::string problemSolution4(const std::string &macAddress) {
    if (macAddress[1] == 'F') {
        return "Broadcast";
    } else if (macAddress[1]%2 == 0) {
        return "Unicast";
    } else {
        return "Multicast";
    }
   
}
