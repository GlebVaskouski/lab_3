#pragma once
#include <vector>

int TheGreatestColumnSum(const std::vector<std::vector<int>>& first_vector) {
    int max_sum;
    for(int i = 0; i < first_vector.size(); i++)
    {
        int sum = 0;
        for(int j = i + 1; j < first_vector.size(); j++) {
            sum += first_vector[j][i];
        }
        if (sum > max_sum) {
            max_sum = sum;
        }
    }
    return max_sum;
}
