class Solution {
    public List<int> countDistinct(int[] arr, int k) {
        List<int> res = new List<int>();
        Dictionary<int, int> freq = new Dictionary<int, int>(); 
        int n = arr.Length;
        
        for(int i = 0; i < k; i++){
            if(freq.ContainsKey(arr[i])){
                freq[arr[i]] += 1;
            }else{
                freq[arr[i]] = 1;
            }
        }
        res.Add(freq.Count);
        
        for(int j = k; j < n; j++){
            if(freq.ContainsKey(arr[j])){
                freq[arr[j]] += 1;
            }else{
                freq[arr[j]] = 1;
            }
            
            freq[arr[j - k]] -= 1;
            if(freq[arr[j - k]] == 0){
                freq.Remove(arr[j - k]);
            }
            
            res.Add(freq.Count);
        }
        return res;
    }
}