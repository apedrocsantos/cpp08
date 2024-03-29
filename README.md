# CPP08

[STL - Standard Template Library](https://www.geeksforgeeks.org/the-c-standard-template-library-stl/?ref=lbp)

**Containers**: The STL provides a range of containers, such as vector, list, map, set, and stack, which can be used to store and manipulate data.

**Algorithms**: The STL provides a range of algorithms, such as sort, find, and binary_search, which can be used to manipulate data stored in containers.

**Iterators**: Iterators are objects that provide a way to traverse the elements of a container. The STL provides a range of iterators, such as forward_iterator, bidirectional_iterator, and random_access_iterator, that can be used with different types of containers.

All STL container classes can use iterators.

-   List

```CPP
int main()
{
    std::list<int> list1;

    list1.push_back(1); // Adds to list
    list1.push_back(30);

    std::list<int>::const_iterator it; // STL container equivalent of a pointer
    std::list<int>::const_iterator ite = list1.end(); // list end position

    for (it = lst1.begin(); it != ite; it++)
    {
        std::cout << *t << std::endl;
    }
}
```
-   Map - we don't have to use strings as keys to the values. Any type can be used.

```CPP
int main()
{
    std::map<std::string, IOperation*> map1;

    map1["opA"] = new OperationA;
    map1["opB"] = new OperationB;
}
```

-   Vector - an array able to contain any type of variables.

```CPP
int main()
{
    std::vector<int> v1;
    std::vector<int> v2(42, 100); // creates 42 entries containing the value 100;
}
```

Algorithms - collection of functions of algorithms pre-implemented, that allow to make operations.

```CPP
#include <algorithm>`
#include <list>

int displayInt(int i)
{
    std::cout << i << std::endl;
}

int main()
{
    std::list<int> lst;

    lst.push_back(1);
    lst.push_back(2);
    lst.push_back(3);

    for_each(lst.begin(), lst.end(), displayInt);
}
```