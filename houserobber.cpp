 int n=nums.size();
        if(n>=2) nums[1]=max(nums[0],nums[1]);
        for(int i=2;i<n;i++) nums[i]=max(nums[i-1],nums[i-2]+nums[i]);
        return n>0?nums[n-1]:0;