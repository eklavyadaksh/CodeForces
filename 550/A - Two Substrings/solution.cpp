#include <iostream>
#include <string>
 
bool check(const std::string& s) {
    size_t f_ab = s.find("AB");
    if (f_ab != std::string::npos) {
        if (s.find("BA", f_ab + 2) != std::string::npos) {
            return true;
        }
    }
 
    size_t f_ba = s.find("BA");
    if (f_ba != std::string::npos) {
        if (s.find("AB", f_ba + 2) != std::string::npos) {
            return true;
        }
    }
 
    return false;
}
 
int main() {
    std::string s;
    if (std::cin >> s) {
        if (check(s)) {
            std::cout << "YES
";
        } else {
            std::cout << "NO
";
        }
    }
    return 0;
}