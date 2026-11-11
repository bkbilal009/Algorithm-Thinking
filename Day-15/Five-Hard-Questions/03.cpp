// prob : https://www.geeksforgeeks.org/problems/trailing-zeroes-in-factorial5134/1?utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab&utm_source=geeksforgeeks


class Solution {
  public:
    int trailingZeroes(int n) {
        
        int count=0;
        
        while(n >=5 )
        {
            count += n/5;
            n/=5;
        }
        return count;
        
    }
};
