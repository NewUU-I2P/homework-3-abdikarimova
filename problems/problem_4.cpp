#include <string>
#include <sstream>

std::string problemSolution4(const std::string &macAddress) {
    if ((macAddress[1]) % 2 == 0) {
        cout << "unicast" << endl;
    } else if ((macAddress[1]) % 2 == 1) {
        cout << "multicast" << endl;
    } else {
        cout << "broadcast" << endl;
    }
}
