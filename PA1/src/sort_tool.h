// **************************************************************************
//  File       [sort_tool.h]
//  Author     [Yu-Hao Ho]
//  Synopsis   [The header file for the SortTool Class]
//  Modify     [2020/9/15 Mu-Ting Wu]
//  Modify     [2023/9/12 Ming-Bang Fan]
// **************************************************************************

#ifndef _SORT_TOOL_H
#define _SORT_TOOL_H

#include<vector>
#include<cmath>
#include<cstdlib>
#include<ctime>
using namespace std;

class SortTool {
    public:
                    SortTool(); // constructor
        void        InsertionSort(vector<int>&); // sort data using insertion sort
        void        MergeSort(vector<int>&); // sort data using merge sort
        void        QuickSort(vector<int>&,int); // sort data using quick sort
        void        HeapSort(vector<int>&); // sort data using heap sort
    private:
        void        QuickSortSubVector(vector<int>&, int, int, const int); // quick sort subvector
        int         RandomizedPartition(vector<int>&, int, int); // randomized partition the subvector
        int         Partition(vector<int>&, int, int); // partition the subvector
        void        MergeSortSubVector(vector<int>&, int, int); // merge sort subvector
        void        Merge(vector<int>&, int, int, int, int); // merge two sorted subvector
        void        MaxHeapify(vector<int>&, int); // make tree with given root be a max-heap 
                                                    //if both right and left sub-tree are max-heap
        void        BuildMaxHeap(vector<int>&); // make data become a max-heap
        int         heapSize; // heap size used in heap sort
        
};

#endif
