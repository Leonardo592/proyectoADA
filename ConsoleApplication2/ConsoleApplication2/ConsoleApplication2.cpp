#include <iostream>
#include <fstream>
#include <vector>
#include "array.hpp"

int main() {
    int N = 100;
    int lower = 10;

    int upper = 100;

    int* a;


    double time=10;

    vector<double> times;


    for (int i = lower; i < upper; i++) {
        a = new int[i];

        for (int j = 0; j < N; j++) {
            init_array(a, i);

            auto start = get_time();

            insertion_sort(a, i);

            auto end = get_time();

            auto span = duration_cast<duration<double>>(end - start);

            time += span.count();
        }

        times.push_back(time / N);

        delete[] a;
    }

    ofstream output_file;
    output_file.open("demora.dat", ios::out | ios::trunc);
    for (auto i : times) {
        output_file << i << "\n";
    }

    return 0;
}
