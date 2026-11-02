class Solution {
  public:
    bool checkYear(int n) {
        // code here
        if (n%400==0)
        return 1;
        else if(n%4==0 && n%100 != 0)
        return 1;
        else
        return 0;
    }
};

// here is prob link : https://www.geeksforgeeks.org/problems/leap-year0943/1?utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab&utm_source=geeksforgeeks
