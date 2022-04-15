#include <sys/stat.h>

int main() {
	struct stat buffer;
    std::string string = "Hello";//remember this is a folder
    
    if (stat(&string.c_str(), &buffer) != 0) {
    	std::cout << "'Hello' directory doesn't exist!";
    } else {
    	std::cout << "'Hello' directory exists!";
    }
}
