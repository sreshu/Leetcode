class Solution {
public:
    bool isPalindrome(int x) {
        
        if ( x < 0 ) return false;


        int arr[ 500 ], count = 0, tmp = x;
        bool isPalindrome = true;
        while ( tmp )
        {
            int d = tmp % 10;
            arr[ count ] = d;
            tmp /= 10; count++;
        }

        std::reverse( arr, arr + count );

        for ( int n = 0; n < count; n++ )
        {
            int d = x % 10;
            if ( arr[ n ] != d )
            {
                isPalindrome = false;
                break;
            }

            x /= 10;
        }

        return isPalindrome;
    }
};
