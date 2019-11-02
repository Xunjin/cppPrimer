#include <iostream>

int main(int argc, char const *argv[])
{
    // legal
    std::cout << "/*";
    // legal
    std::cout << "*/";
    // not so legal
    std::cout << "/* " " */";
    // well yet not legal
    std::cout << /* "*/" /* "/*" */;
    return 0;
}
