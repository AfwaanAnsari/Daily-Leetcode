class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int maxSoFar = arr[arr.size() - 1], temp;
        arr[arr.size() - 1] = -1;
        for (int i = arr.size() - 2; i >= 0; i--) {
            temp = arr[i];
            arr[i] = maxSoFar;
            if (temp > maxSoFar)
                maxSoFar = temp;
        }
        return arr;
    }
};