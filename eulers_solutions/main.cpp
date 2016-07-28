#include <iostream>

using namespace std;


/*
\brief
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.
 * \param: None
 * \return: the sum of all the multiples of 3 or 5 below 1000.
 */
int multiplesOfThreeAndFive()
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


int main()
{
    cout<<"*********************************************************************"<<endl;
    cout << "This Program is to keep track of solutions to the problems posted on" << endl;
    cout <<"Project Euler"<<endl;
    cout<<"*********************************************************************"<<endl<<endl<<endl;
    cout<< "Problem 1: Sum of all the multiples of 3 or 5 below 1000 is =  " << multiplesOfThreeAndFive() <<endl;
    return 0;
}

