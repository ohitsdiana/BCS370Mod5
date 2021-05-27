/*
* Module 5 Assignment
* 
* Diana Guerrero
* Professor Zhao
* BCS 370
* 10/12/20
* 
* Partner: Patrick Adams
*/

#include "Main.cpp"
#include <iostream>
#include <vector>

class MySet {
private:
    // Set Vector to Store Elements and numOfElements to Store Size
    int numOfElements;
    std::vector <int> setElements;

public:
    // Default Constructor
    MySet()
    {
        numOfElements = 0;
    }

    // Inserts Value Into Set (Only if it's not present)
    void insert(int value)
    {
        for (int i = 0; i < numOfElements; i++)
        {
            if (setElements[i] == value)
            {
                // If Value Is Already Pre-Existing, Just Return It
                return;
            }
        }

        setElements.push_back(value);
        numOfElements++;
    }

    // Return Size of MySet
    int setMySetSize()
    {
        return numOfElements;
    }

    // Looks To See If Value Already Pre-Exists In MySet
    int research(int value)
    {
        for (int i = 0; i < numOfElements; i++)
        {
            if (setElements[i] == value)
                //If Value Pre-Exists Return 1
                return 1;
        }

        // If Value Doesn't Pre-Exist Return 0
        return 0;
    }

    // Return Element of MySet At Given Index
    int getIndexElement(int i)
    {
        return setElements[i];
    }

    // Print Set
    void printMySet()
    {
        std::cout << " { ";
        int i;
        for (int i = 0; i < numOfElements - 1; i++)
        {
            std::cout << setElements[i] << " , ";
        }

        std::cout << setElements[i] << " }  \n" ;
    }

    // Return Union of Sets
    MySet SetUnion(MySet setA, MySet setB)
{
        MySet result;

    for (int i = 0; i < setA.setMySetSize(); i++)
    {
        result.insert(setA.getIndexElement(i));
    }

    for (int i = 0; i < setB.setMySetSize(); i++)
    {
        result.insert(setB.getIndexElement(i));
    }

    return result;
}

// Return Intersection of Sets
MySet SetIntersection(MySet setA, MySet setB)
{
    MySet result;
    for (int i = 0; i < setA.setMySetSize(); i++)
    {
        if (setB.research(setA.getIndexElement(i)) != 0)
        {
            result.insert(setA.getIndexElement(i));
        }
    }

    return result;
}

// Return Difference of Sets
MySet SetDifference(MySet setA, MySet setB)
{
    MySet result;
    for (int i = 0; i < setA.setMySetSize(); i++)
    {
        if (setB.research(setA.getIndexElement(i)) == 0)
        {
            result.insert(setA.getIndexElement(i));
        }
    }

    return result;
}
};


