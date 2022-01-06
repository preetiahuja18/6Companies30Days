int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        int ans = 0;
        int i = 0, j=0;
        long long prod = 1;
        
        while(j<n)
        {
            prod = prod*a[j];
            while(i<j and prod>=k)
            {
                prod/=a[i];
                i++;
            }
            
            if(prod<k)
            {
                int N = j-i+1;
                ans = ans + N;
            }
            j++;
           
        }
        return ans;
    }
