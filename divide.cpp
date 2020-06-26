#include <stdio.h>
#include <conio.h>
#include <iostream>

int number[100];
int maxVal, minVal;

void maximumAndMinimumValue(int i, int j)
{
  int max1, min1, midValue;
  if (i == j)
  {
    maxVal = minVal = number[i];
  }

  else if (i == j - 1)
  {
    if (number[i] > number[j])
    {
      maxVal = number[i];
      minVal = number[j];
    }
    else
    {
      maxVal = number[j];
      minVal = number[i];
    }
  }

  else
  {
    midValue = (i + j) / 2;
    maximumAndMinimumValue(i, midValue);
    max1 = maxVal;
    min1 = minVal;
    maximumAndMinimumValue(midValue + 1, j);
    if (maxVal < max1)
      maxVal = max1;
    if (minVal > min1)
      minVal = min1;
  }
}

int main()
{
  int numberCount;

  std::cout << "==================Maximum and Minimum Value==================\n";
  std::cout << "Count of Number : "; std::cin >> numberCount;
  std::cout << std::endl;
  
  std::cout << "Input Number : " << std::endl;
  for (int i = 0; i < numberCount; i++)
  {
    std::cout << "Number" << (i+1) << " = "; std::cin >> number[i];
  }

  maxVal = number[0];
  minVal = number[0];
  maximumAndMinimumValue(0, numberCount - 1);
  std::cout << "Maximum Value : " << maxVal;
  std::cout << "\nMinimum Value : " << minVal << std::endl;
  system("pause");

  system("cls");
  std::cout << "========================\n";
  std::cout << "Aulia Ilham Zukri\n";
  std::cout << "20190801368\n"<< std::endl;

  system("pause");
  return 0;
}