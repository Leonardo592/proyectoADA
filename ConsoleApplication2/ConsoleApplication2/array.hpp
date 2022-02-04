#pragma once

#include <stdlib.h>

#include <chrono>

using namespace std;
using namespace std::chrono;

high_resolution_clock::time_point get_time() {
    return high_resolution_clock::now();
}
void init_array(int* a, int N) {
    for (int i = 0; i < N; i++) {
        a[i] = rand() % 100000;
    }
}

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(int* a, int N) {
 
    for (int i = 0; i < N - 1; i++) {

        for (int j = 0; j < N - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                swap(&a[j], &a[j + 1]);
            }
        }
    }
}

void insertion_sort(int* a, int N) {
    int temp;
    for (int i = 1; i < N; i++) {
        temp = a[i];

        int j = i - 1;

        while ((j >= 0) && (a[j] > temp)) {
            a[j + 1] = a[j];
            j = j - 1;
        }

        a[j + 1] = temp;
    }
}


void selection_sort(int* a, int N) {
    int min_key;

    for (int i = 0; i < N - 1; i++) {
        min_key = i;

        for (int j = i + 1; j < N; j++) {
            if (a[j] < a[min_key]) {
                min_key = j;
            }
        }

        if (i != min_key) {
            swap(&a[i], &a[min_key]);
        }
    }
}

void merge(int* a, int start, int mid, int end) {

    int left_size = mid - start + 1;
    int* tmp_left = new int[left_size];
    for (int i = 0; i < left_size; i++) {
        tmp_left[i] = a[start + i];
    }

    int right_size = end - mid;
    int* tmp_right = new int[right_size];
    for (int i = 0; i < right_size; i++) {
        tmp_right[i] = a[mid + 1 + i];
    }

    int i = 0;
    int j = 0;

    int pos = start;

    while ((i < left_size) && (j < right_size)) {

        if (tmp_left[i] <= tmp_right[j]) {
            a[pos] = tmp_left[i];
            i++;
        }
        else {
            a[pos] = tmp_right[j];
            j++;
        }
        pos++;
    }

    while (i < left_size) {
        a[pos] = tmp_left[i];
        i++;
        pos++;
    }

    while (j < right_size) {
        a[pos] = tmp_right[j];
        j++;
        pos++;
    }

}

void merge_sort(int* a, int left, int right) {
    // Split the array in half until there is a single element left
    if (left < right) {
        int mid = (left + right) / 2;

        merge_sort(a, left, mid);
        merge_sort(a, mid + 1, right);

        // Merge the two sub-lists 
        merge(a, left, mid, right);
    }
}

int partition(int* a, int left, int pivot) {
    int leq = left - 1;

    int high = pivot - 1;

    for (int j = left; j <= high; j++) {
        if (a[j] <= a[pivot]) {
            leq++;

            swap(&a[leq], &a[j]);
        }
    }

    swap(&a[leq + 1], &a[pivot]);

    return leq + 1;
}

void quicksort(int* array, int left, int pivot) {

    if (left < pivot) {
        int new_pivot = partition(array, left, pivot);

        quicksort(array, left, new_pivot - 1);
        quicksort(array, new_pivot + 1, pivot);
    }
}

