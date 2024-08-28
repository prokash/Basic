//
// Created by prokash on 7/19/25.
//
/*
 * You are given a positive integer n.
We call an integer k fair if the number of even digits in k is equal to the number
of odd digits in it.
Return the smallest fair integer that is greater than or equal to n.

 Hint :: If the length of x is odd, then there is no way to make fair ,
 so the smallest number that is fair and larger than x is the result.

 PS:: there could be diffrent digits like 12123443 , here odds and evens are same nb of time
 11, 22, 33, 44 => 4 odd numbers and 4 even numbers.

 How to pick the next larger number that is fair.???

 */
#ifndef BASICS_FAIR_COUNT_HPP
#define BASICS_FAIR_COUNT_HPP

// mylib.h
#ifdef __cplusplus
extern "C" {
#endif
    int fair_main();

#ifdef __cplusplus
}
#endif

#endif //BASICS_FAIR_COUNT_HPP
