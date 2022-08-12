bool is_array_palindrome(int integers[], int length){
    bool palindrome = false;
    for (int i=1;i<length+1;i++){
        if(integers[i-1]==integers[length-i]){
            palindrome = true;
        } else if (integers[i-1]!=integers[length-i]){
            palindrome = false;
            return 0;
        }
    }
    if (length == 0){
        return false;
    }
    if (palindrome = true){
        return true;
    } else if (palindrome = false){
        return -2;
    }
}
int sum_integers(int integers[], int length){
    int sum = 0;
    for (int j=0;j<length;j++){
        sum += integers[j];
    }
    if(length==0){
        return -1;
    }
    return sum;
}
int palindrome_sum(int integers[],int length){
    is_array_palindrome(integers,length);
    sum_integers(integers,length);
}