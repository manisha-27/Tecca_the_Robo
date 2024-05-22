class Solution {
    List<List<String>> ans = new ArrayList<>();

    // Check if a given string is a palindrome
    public boolean palindrome(String s, int left, int right) {
        while (left < right) {
            if (s.charAt(left) != s.charAt(right)) return false;
            left++;
            right--;
        }
        return true;
    }

    // Helper function for partitioning
    public void palindromePartition(String s, int start, List<String> currentPartition) {
        // Base case: if we reach the end of the string, add the current partition to the result
        if (start >= s.length()) {
            ans.add(new ArrayList<>(currentPartition));
            return;
        }
        
        for (int end = start; end < s.length(); end++) {
            if (palindrome(s, start, end)) {
                currentPartition.add(s.substring(start, end + 1));
                palindromePartition(s, end + 1, currentPartition);
                currentPartition.remove(currentPartition.size() - 1);
            }
        }
    }

    // Main function to return all palindrome partitions
    public List<List<String>> partition(String s) {
        List<String> currentPartition = new ArrayList<>();
        palindromePartition(s, 0, currentPartition);
        return ans;
    }
}
