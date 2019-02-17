//
//  main.cpp
//
//  Created by Anthony Zamora on 2/15/19.
//  Copyright © 2019 Anthony Zamora. All rights reserved.
//

#include <iostream>

using namespace std;

void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
         cout << array[i] << " ";
}

int uniqueDigits(int elements[], int size)
{
    int flag = 0;
    
    // Create array of same size
    int counted[size];
    int count = 0;
    
    // Copy first element
    counted[count] = elements[0];
    count += 1;	// Increment count
    
    // Loop through "elements" array
    for (int i = 0; i < size; i++)
    {
        // Reset flag
        flag = 0;
        
        // Loop through "counted" array
        for (int j = 0; j < count; j++)
        {
            // If there exists two elements that are identical in both arrays, exit loop
            // Else, set flag to 1.
            if (counted[j] == elements[i])
            {
                break;
            } else {
                flag = 1;
            }
        }
        
        // If flag = 1, add another number
        if (flag == 1)
        {
            // Add new number
            counted[count] = elements[i++];
            count++;
        }
    }
    
    // Return number of unique digits
    return count;
}

int main(int argc, const char * argv[])
{
    int sample[] = {1, 2, 1, 1};
    int size = sizeof(sample)/sizeof(sample[0]);
    
    int numUnique = uniqueDigits(sample, size);
    
    cout<< "\n" << numUnique << endl;
    
    return 0;
}
