//This brings in the iostream library
#include <iostream>
#include "compile.h"

void tutorial2() {
    /*
     * This is a block comment that englobes multiple
     * lines of code
     */
    //This is going to print "Hello World"" to the console
    std::cout<<"Hello World 3"<<std::endl;
    // Run time error (can build even with this, doesn't print value, interrupted by signal 8:SIGFPE)
    //int value = 7/0;
    //std::cout<< "value: " << value << std::endl;

}
