class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();

        int  i = 0;
        int  j = n-1;
        int index1;
        int index2;
        while(i<j){
            int sum = numbers[i] + numbers[j];
            if(sum < target){
                i++;
            } 
            else if(sum >target){
                j--;
            }   
            else{
                index1 = i+1;
                index2 = j+1;
                return{index1,index2};
            }
        }
        return{};
    }
};