class Solution {
public:
    bool isPalindrome(int x) {
        // negative numbers or numbers ending in 0 (but not 0 itself) are not palindromes
        if (x < 0 || (x % 10 == 0 && x != 0)) return false;

        int reversedHalf = 0;
        while (x > reversedHalf) {
            reversedHalf = reversedHalf * 10 + x % 10;
            x /= 10;
        }

        // check for both even and odd length numbers
        return (x == reversedHalf || x == reversedHalf / 10);
    }
};

