bool isPalindrome(long x) {
    if (x < 0) {
        return false;  // Negative numbers cannot be palindromes.
    }

    long original = x;  // Store the original number.
    long final = 0;

    while (x != 0) {
        long rem = x % 10;        // Get the last digit.
        final = final * 10 + rem; // Build the reversed number.
        x = x / 10;               // Remove the last digit.
    }

    // Check if the original number is equal to the reversed number.
    return final == original;
}