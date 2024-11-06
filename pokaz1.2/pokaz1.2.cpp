#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> findCommonElements(int* A, int M, int* B, int N) {
    std::vector<int> result;

    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            if (A[i] == B[j]) {
                if (std::find(result.begin(), result.end(), A[i]) == result.end()) {
                    result.push_back(A[i]);
                }
            }
        }
    }

    return result;
}

int main() {
    int M, N;

    std::cout << "масив A ";
    std::cin >> M;
    int* A = new int[M];

    std::cout << "масив A ";
    for (int i = 0; i < M; ++i) {
        std::cin >> A[i];
    }

    std::cout << "масив B ";
    std::cin >> N;
    int* B = new int[N];

    std::cout << "елементи масиву B: ";
    for (int i = 0; i < N; ++i) {
        std::cin >> B[i];
    }

    std::vector<int> result = findCommonElements(A, M, B, N);

    std::cout << "Спільні елементи без повторень ";
    for (int val : result) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    delete[] A;
    delete[] B;

    return 0;
}
