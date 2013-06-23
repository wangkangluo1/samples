#include        <cstdlib>                                                    
#include    <cstdlib>
#include    <fstream>
#include    <iomanip>
#include    <iostream>

using namespace std;

class classA {
    public:
        classA() {
            int a = getColor();
        };
        getColor() {
            return 5;
        };
};

class classB : classA {
    public:
        classB() {
        };
        getColor() {
            return 6;
        };
};

    int                                                                      
main ( int argc, char *argv[] )        {
   classA a; 
                                                                             
    return EXIT_SUCCESS;                                                     
}       // ----------  end of function main  ----------
