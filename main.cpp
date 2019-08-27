#include <iostream>

using namespace std;

int StackMinValue(int s[], int top){
       int minValue, minChecker = s[top];
       for(int i = top - 1; i >= 0; i--){
         minValue = s[i];
         if(minChecker > minValue){
            minChecker = minValue;
         }

       }
       return minChecker;
}

int main()
{
    int stack[] ={4, 3, 9, 7};
    int stackSize = sizeof(stack) / sizeof(stack[0]) - 1;
    int top = stackSize;
    int minValue = StackMinValue(stack, top);
    cout << "Stack Minimum value: " << minValue << endl;

    return 0;
}
