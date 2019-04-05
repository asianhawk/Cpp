/*
 * Note: it seems like std::valarray is redundant and could use revision or
 *       removal, see [sutter199801XX].  Probably better not to use it.
 *
 * TODO: check what the alternatives to std::valarray are.  Is there something
 *       in the standard?  Does one need to use a library?
 *
 * References:
 *
 *   [gonen20170206] Introduction To valarray
 *     http://cppisland.com/?p=518
 *
 *   [nyhoff20120803] Programming in C++ for Engineering and Science 1st Edition
 *     https://cs.calvin.edu/activities/books/c++/engr-sci/WebItems/Chap12/Valarrays.pdf
 *
 *   [andand20100405] What's the future of std::valarray look like?
 *     https://stackoverflow.com/questions/2576688/whats-the-future-of-stdvalarray-look-like
 *
 *   [rlbond20091021] C++ valarray vs. vector
 *     https://stackoverflow.com/questions/1602451/c-valarray-vs-vector
 *
 *   [sutter199801XX] C++ State of the Union
 *     http://www.gotw.ca/publications/mill01.htm
 */

#include <iostream>
#include <valarray>

int main()
{
    std::valarray<int> val(10);

    // Assign -1 to all elements.
    val = -1;

    // Get minimum and maximum.
    std::cout << val.min() << std::endl;
    std::cout << val.max() << std::endl;

    // Get sum of all elements.
    std::cout << val.sum() << std::endl;

    // Perform mathematical operation on all elements.
    std::valarray<int> abs_val = std::abs(val);

    // ... and lots of other goodies.
}
