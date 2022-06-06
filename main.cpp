#include <iostream>

int main() {
    const int N = 8;
    srand(123);
    
    const char* str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const char* ss = ".,/!@#$%*";
    const char* sd = "1234567890";
    int count = strlen(str);
    char password[N + 1];
    for (size_t i = 0; i < N - 4; i++) {
        password[i] = str[rand() % 10];
    }
    password[N] = 0;
    password[N - 1] = ss[rand() % 10];
    password[N - 2] = sd[rand() % 10];
    password[N - 3] = sd[rand() % 10];
    password[N - 4] = sd[rand() % 10];

    std::cout << password << std::endl;
}