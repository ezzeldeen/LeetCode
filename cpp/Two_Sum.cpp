/*
class Solution 
{
  public:
    
    
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> result;
        
        for (int i =0; i < nums.size();i++)
        {
            for (int j =i+1; j < nums.size();j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                }
                else{}
            }
        }
         return result;
    }
       
    };    */   
        
class Solution 
{
  public:
    
    
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        
         unordered_map<int, int> m;
         vector<int> result;
        
         for(int i=0; i<nums.size(); i++)
         {
            // not found the second one
            if (m.find(target -nums[i])==m.end() ) 
            { 
                // store the first one position into the second one's key
                m[nums[i]] = i; 
            }
            else 
            { 
                   // found the second one
                   result.push_back(m[target -nums[i]]);
                   result.push_back(i);
                   //break;
            }
         }
         return result;        
    }
    
};
