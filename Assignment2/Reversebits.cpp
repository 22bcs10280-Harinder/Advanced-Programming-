class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t result = 0;
        for (int i = 0; i < 32; i++) {
            int mask = n & 1;
            mask=mask<<31-i;
            result=result | mask;
            n=n>>1;        
        }
        return result;
    }
};