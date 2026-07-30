class Solution {
public:
    int strStr(string haystack, string needle) {
        int i=haystack.size(),j=needle.size();
        for(int k=0;k<=i-j;k++){
            if(haystack.substr(k,j)==needle) return k;
        }
        return -1;     
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna