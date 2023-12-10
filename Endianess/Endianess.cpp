#include <iostream>
int main() {
    uint32_t num = 1;
    if (*reinterpret_cast<uint8_t*>(&num) == 1) std::cout << "Your system is little-endian." << std::endl;
    else std::cout << "Your system is big-endian." << std::endl;
    system("pause");
}
