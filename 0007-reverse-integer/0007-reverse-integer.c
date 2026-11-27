int reverse(long x) {
    long final = 0;
       while (x != 0) {
        long rem = x % 10;        // Get the last digit.
        final = final * 10 + rem; // Build the reversed number.
        x = x / 10;               // Remove the last digit.
    }

    // Check if the original number is equal to the reversed number.
    if ((final<2147483647) && (final>-2147483648))
    { return final;}
    else 
    {return 0;}
}