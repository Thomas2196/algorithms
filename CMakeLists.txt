cmake_minimum_required(VERSION 3.19)
project(algorithms)

set(CMAKE_CXX_STANDARD 14)

add_executable(algorithms main.cpp sorting/quick_sort/quick_sort.cpp sorting/quick_sort/quick_sort.h utilities/utilities.cpp utilities/utilities.h sorting/sorting.h sorting/insertion_sort/insertion_sort.cpp sorting/insertion_sort/insertion_sort.h sorting/bubble_sort/bubble_sort.cpp sorting/bubble_sort/bubble_sort.h sorting/merge_sort/merge_sort.cpp sorting/merge_sort/merge_sort.h searching/searching.h searching/linear_search/linear_search.cpp searching/linear_search/linear_search.h searching/binary_search/binary_search.cpp searching/binary_search/binary_search.h searching/jump_search/jump_search.cpp searching/jump_search/jump_search.h)