#include <iostream>
//#include <cstdint>
#include <string>
#include <sstream>

using namespace std;

/** \brief: problemOne
 * If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
           Find the sum of all the multiples of 3 or 5 below 1000.
 * \param: None
 * \return:the sum of all the multiples of 3 or 5 below 1000.
 *
 */
int problemOne()
{
  int sum =0;
  for (int i=0; i< 1000 ; i++)
  {

    if(i % 3 == 0 || i % 5 == 0)
    {
      sum = sum + i;
    }

  }
   return sum;
}


/** \brief: problemTwo
 *
Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
 * \param: None
 * \return: the sum of the even-valued terms
 *
 */
int problemTwo()
{
  int sum = 0, first = 1, second = 2, febNo = 1, i = 1;
  while (febNo <= 4000000)
  {
       if (i <= 2)
       {
        febNo = i;
       }
       else
       {
        febNo = first + second;
        first = second;
        second = febNo;
       }

    if(febNo % 2 == 0)
    {
      sum = sum + febNo;
    }
    i++;
  }

return sum;
}



/** \brief: problemThree
 *
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
 * \param: None
 * \return: largest prime factor of the number 600851475143
 *
 */
 int problemThree()
 {
  unsigned long long num = 600851475143ULL;

  for ( unsigned long long i = 2; i*i < num; ++i)
  {
    while (num % i == 0)
    {
      if (num > i)
      {
        num /= i; // keep reducing the number once the factor is found so that we dont have to compute everything again.
      }
      //cout << "Factor is: " << i << endl;
      //cout << "Number  is: " << num << endl;
    }
  }
    return num;
 }


/** \brief
 *  Helper Function reverse Digits for the function problemFour
 * \param: int num : integer value whose digits have to be reversed.
 * \return: revNum : integer value, the reversed digits of parameter num
 *
 */
 int reverseDigits(int num)
{
    int revNum = 0;

    while (num != 0)
    {
        int digit = num % 10;
        revNum = revNum * 10 + digit;
        num /= 10;
    }

    return revNum;
}

/** \brief: problemFour
 *
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 � 99.
Find the largest palindrome made from the product of two 3-digit numbers.
 * \param: None
 * \return: largest palindrome made from the product of two 3-digit numbers
 */
 int problemFour()
 {
  int num = 0;
  for (int i = 999; i>100; i--)
  {
     for(int j = i; j> 100; j--)
     {
        int val = i*j;
        if( val > num && reverseDigits(val) == val)
        {
          num = val;
          //cout << "Palindrome is: "<<num<<endl;
        }
     }

     }
    return num;
  }



  /** \brief: problemFive
   *
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

   * \param: None
   * \return: the smallest positive number that is evenly divisible by all of the numbers from 1 to 20
   *
   */

   int problemFive()
   {
      int i= 1, num;
      bool stop = false, divByAll = false;
      while (!stop)
      {

       for (int j = 1 ;j <=20 ;j ++)
       {
          if (i % j == 0)
          {
            num = i;
            divByAll = true;
          }

          else
          {
            divByAll = false;
            break;
          }
       }

        if(divByAll)
        {
          stop = true;
        }

        i++;

      }
      return num;
   }




/** \brief: problemSix
 *The sum of the squares of the first ten natural numbers is,
 1^2 + 2^2 + ...+ 10^2 = 385
 The square of the sum of the first ten natural numbers is,
 (1+2+...+10)^2 = 55^2 =3025
  Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 -385 = 2640
Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
 * \param: none
 * \return: the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
 */

int problemSix()
{
    int sum1=0,sum2 =0;

    for (int i=1 ;i <=100;i++)
    {
        sum1 = sum1 + i*i;
        sum2 = sum2 + i;

    }
    sum2 = sum2 * sum2;

    return sum2 - sum1;
}


/** \brief: problemSeven
 *
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?
 * \param: none
 * \return: the 10 001st prime number
 */

int problemSeven ()
{
   int count = 1, i= 3; //keep count 1, already placing 2 as prime, so start from 3
   bool prime = true;
   while (true)
   {
      prime = true; //assume the number is prime

      for (int j = 2; j < i; j++)
      {
        if(i % j == 0) // if the number is divisible by any other number than 1 ot it self it is not a prime
        {
          prime = false;
          break;
        }
      }

        if(prime) //if it is still prime increment our counter.
        {
          count ++;
        }

       if(count == 10001)  //when the counter reaches 10001, this is the number we want, stop the loop
       {
          break;
       }

     i+=2;   //skip even numbers, as we know they are not prime
   }


  return i;
}


int main()
{
    cout<<"---------------------------------------------------------------------"<<endl;
    cout <<"This Program is to keep track of solutions to the problems posted on" << endl;
    cout <<"Project Euler"<<endl;
    cout<<"---------------------------------------------------------------------"<<endl<<endl<<endl;

    /*
    cout<<"---------------------------------------------------------------------"<<endl;
    cout<< "Problem 1: Sum of all the multiples of 3 or 5 below 1000 is: "<<endl;
    cout<< problemOne() <<endl;
    cout<<"---------------------------------------------------------------------"<<endl;


    cout<< "Problem 2: Sum of even valued terms in a Fibonacci series below 4 million is: "<<endl;
    cout<< problemTwo() <<endl;
    cout<<"---------------------------------------------------------------------"<<endl;


    cout<< "Problem 3: Largest Prime Factor of 600851475143 is: "<<endl;
    cout<< problemThree() <<endl;
    cout<<"---------------------------------------------------------------------"<<endl;


    cout<< "Problem 4: Largest palindrome made from the product of two 3-digit numbers is: "<<endl;
    cout<< problemFour() <<endl;
    cout<<"---------------------------------------------------------------------"<<endl;


    cout<< "Problem 5: The smallest positive number that is evenly divisible by all of the numbers from 1 to 20 is: "<<endl;
    cout<< problemFive() <<endl;
    cout<<"---------------------------------------------------------------------"<<endl;

    cout<< "Problem 6: The difference between the sum of the squares of the first one hundred natural numbers and the square of the sum is: "<<endl;
    cout<< problemSix() <<endl;
    cout<<"---------------------------------------------------------------------"<<endl;
*/

    cout<< "Problem 7: The 10 001st Prime number  is: "<<endl;
    cout<< problemSeven() <<endl;
    cout<<"---------------------------------------------------------------------"<<endl;

    return 0;
}

