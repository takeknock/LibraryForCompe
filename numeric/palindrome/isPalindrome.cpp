bool isPalindrome(int x) {
    int remained = 0;
    int reverse = 0;
    int temporary = x;

    //generate reversed integer "reverse"
    while(temporary!=0) {
        remained = temporary % 10;      
        reverse = reverse * 10 + remained;
        temporary /= 10;
    }

    if (reverse == x)
        return true;

    return false;
}
