## Sorting Algorithm
**Description:**
Sorting algorithms are fundamental tools in computer science, designed to organize and arrange data in a specific order. These algorithms play a crucial role in a wide range of applications, from data processing and search operations to optimizing the performance of various software systems. The primary goal of sorting is to make data more accessible, enabling faster retrieval and analysis.

* **Key Points:**
	* **Ordering Data:** Sorting algorithms reorder elements in a dataset based on certain criteria, such as numerical value, alphabetical order, or custom-defined rules. This ordered arrangement facilitates efficient searching and retrieval.

	* **Algorithmic Variety:** There are numerous sorting algorithms, each with its own approach and efficiency characteristics. Common sorting algorithms include Bubble Sort, Insertion Sort, Selection Sort, Merge Sort, Quick Sort, and Heap Sort, each suitable for different scenarios based on data size and complexity.

	* **Time and Space Complexity:** Sorting algorithms are often analyzed based on their time complexity (how execution time grows with input size) and space complexity (how much additional memory is required). Understanding these complexities is essential for choosing the right algorithm for a specific task.

	* **Stability:** Some sorting algorithms maintain the relative order of equal elements, a property known as stability. Stable sorting is important in scenarios where the original order of equal elements needs to be preserved.

	* **In-Place Sorting:** In-place sorting algorithms modify the input data structure without requiring additional memory. This can be advantageous in situations where memory usage is a critical consideration.

	* **Adaptability:** Sorting algorithms may perform differently based on the initial state of the data. Adaptive algorithms adjust their strategy based on the existing order of elements, potentially improving efficiency in partially sorted datasets.

Sorting algorithms are essential tools for organizing and optimizing data. The choice of algorithm depends on factors such as the size of the dataset, the nature of the data, and the desired order. A solid understanding of sorting algorithms is foundational for any computer scientist or programmer working with large datasets and seeking optimal performance.

### Project SetUp
* Editor used: vi, vim
* All files compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* All files end with a new line
* A README.md file, at the root of the folder of the project, describing the project
* The code will use the `Betty` style, and will be checked using [betty-style.pl](https://github.com/alx-tools/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/alx-tools/Betty/blob/master/betty-doc.pl)
* No global variables used
* No more than 5 functions per file
* No use of the standard library, unless specified. Any use of functions like printf, puts, … is totally forbidden.
* In the examples, the `main.c` files in the testfiles directory are shown as examples, and are used to test functions.
* The prototypes of all your functions are included in the header file called `sort.h`
* All the header files is include guarded
* A list/array does not need to be sorted if its size is less than 2.

### Data Structure and Functions
* Function for `print_array`
```
#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
}
```

* Function for `print_list`
```
#include <stdio.h>
#include "sort.h"

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list)
{
    int i;

    i = 0;
    while (list)
    {
        if (i > 0)
            printf(", ");
        printf("%d", list->n);
        ++i;
        list = list->next;
    }
    printf("\n");
}
```

* Data structure for `doubly linked list`:
```
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
```
