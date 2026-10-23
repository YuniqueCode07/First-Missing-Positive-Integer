#include <stdio.h>

// Idea is simple instead pf organizing the whole table which will at minimum take O(n log n) and then searching for the value by minimum. I will just put the positive integers in their right index. For example if value is 2 I will put it in index 1 (bcz in C indexes start from 0). If value is 10 I'll put it in index 9. then I'll perform another loop which will verify if the value equals the (index -1 ).
int firstMissingPositiveInteger (int nums[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        int index = nums[i] - 1; // To keep the code readable form e I decided to write this also before the while so that I can use it in my condition.

        while (nums[i] >= 1 && nums[i] <= n && nums[i] != nums[index])
        {
            index = nums[i] - 1;

            // Here I exchange the two values
            int temp = nums[i];
            nums[i] = nums[index]; // Even if the assign of the value is "not in its right position" the while loop will do its job to not increase the i (which is the index) because if it's incorrect position then nums[i] != nums[index] should be true
            nums[index] = temp; // The value will go to its correct index
        }
    }

    for (i = 0; i < n; i++) {
        if (nums[i] != i + 1) {
            return i + 1;
        }
    }

    return n+1;
}


int main()
{
    int length;
    printf("Give me the length of the table : ");
    scanf("%d", &length);
    int numbers[length];
    for (int i = 0; i < length; i++)
    {
        printf("Give me the number to put in index %d inside the table : ", i);
        scanf("%d", &numbers[i]);
    }

    int result = firstMissingPositiveInteger(numbers, length);
    printf("The first missing integer value is : %d\n", result);
}