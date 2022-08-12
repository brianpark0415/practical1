#include <iostream>

using namespace std;

extern int bin_to_bin(int*, int);

int main(int argc, char **argv){
    int test_array[8] = {1,1,0,1,1,0,1,1};
    cout << bin_to_bin(test_array,8) << endl;
    return 0;
}