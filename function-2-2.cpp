#include <cmath>
int bin_to_int(int binary_digits[], int number_of_digits){  
    int ans = 0;
    for(int i=0;i<number_of_digits;i++){
        if(binary_digits[i]!=0){
            ans += 1*pow(2,(number_of_digits-i-1));
        } else{
            ;
        }
    }
    return ans;
}