int linearSearch(const std::vector<int>& arr, int target) {
    for (int i = 0; i < static_cast<int>(arr.size()); ++i) {
        if (arr[i] == target)
            return i; // return index of found element
    }
    return -1; // target not found
}


// O(n) time, O(1) space
