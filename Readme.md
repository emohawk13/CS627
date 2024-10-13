Design and Analysis of Algorithms: CS627
Week 1

Description
    You currently work in an algorithm development group for a large multimedia, mobile device corporation. Your group has been tasked with creating an app that will play an audio file backwards (from end to beginning rather than the standard beginning to end). Because this app is likely to be used on a mobile device, your group figures that this algorithm should use as little memory and space as possible. Your group has therefore decided to construct this reversal order algorithm such that it is an "in-place" algorithm. This simply means that the audio file will be loaded to memory and reversed using the same memory locations (because you must use memory sparingly).

Part 1: 
1. Before attempting this implementation, you choose to develop a simple prototype version of this algorithm in C++. 
2. Specifically, you will build an in-place, order reversal algorithm. 
3. This algorithm will take as an input an array of ints and will reverse the order of the elements in the array, in place (essentially using only the memory in the array). 
4. For example, if the array contains five elements [1,2,3,4,5], the output of the algorithm will be [5,4,3,2,1]. Comment your program.

    See Problem1.cpp

Part 2: 
1. Using this prototype, you will analyze the time complexity and space complexity of your algorithm in the worst case. 
2. Specifically, for time complexity, count the number of steps for each line of code, and write down the total lines executed as a mathematical expression where n is the size of the input array. 
3. For space complexity, write an expression for the number of memory locations and components that are required for algorithm in the worst case. 
4. (Assume that each int is one location.)

    See Problem2.cpp

Part 3: 
1. Program a function, method or class that will track the true runtime of your algorithm. 
2. Find the true runtime of your algorithm using arrays of varying sizes (e.g., n = 500, n = 1,500, and n= 2,500) using your new tool. 
3. Plot, on a Cartesian plane, the runtime of your algorithm as a function of the size of the input array, n.

    See Problem3.cpp
