#include <iostream>

int main() {
    int i = 0;
    while (true) {
        system((std::string("git commit --allow-empty -m \"c") + std::to_string(i) + "\"").c_str());
        i++;
    }
    return 0;
}
