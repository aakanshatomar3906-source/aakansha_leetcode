class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=0;
        int k=0;
        int j=nums.size()-1;
        while(k<=j){
            if(nums[k]==2){
                int temp=nums[k];
                nums[k]=nums[j];
                nums[j]=temp;
                j--;
            }else if(nums[k]==0){
                int rev=nums[k];
                nums[k]=nums[i];
                nums[i]=rev;
                i++;
                k++;
            }else{
                k++;
            }
        }
    }
};

// tc=> o(n)
// sc=> o(1)