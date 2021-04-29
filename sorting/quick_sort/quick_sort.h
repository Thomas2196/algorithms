//
// Created by zomer on 28/04/2021.
//

#ifndef ALGORITHMS_QUICK_SORT_H
#define ALGORITHMS_QUICK_SORT_H

#include <functional>
#include <iterator>
#include <type_traits>
#include <utility>

#include "../../utilities/utilities.h"

int partition(float arr[], int low, int high);
int quick_sort(float arr[], int low, int high);

#endif //ALGORITHMS_QUICK_SORT_H


