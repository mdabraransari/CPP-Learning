 int max_value = *max_element(arr.begin(), arr.end());
    int start = max_value;
    int end = accumulate(arr.begin(), arr.end(), 0);