#include <iostream>


class Calculator
{
public:
  double num1{};
  double num2{};

  void vvod()
  {
    std::cout << "Enter num1:";
    std::cin >> this->num1;
    std::cout << "enter num2:";
    std::cin >> this->num2;
  }

  double add()
  {
    return num1 + num2;
  }

  double multiply()
  {
    return num1 * num2;
  }

  double substruct_1_2()
  {
    return num2 - num1;
  }

  double substruct_2_1()
  {
    return num1 - num2;
  }

  double divide_1_2()
  {
    return num2 / num1;
  }

  double divide_2_1()
  {
    return num1 / num2;
  }

  bool set_num1()
  {
    if (num1 != 0)
    {
      return true;
    }
    else
    {
      return false;
    }
  }

  bool set_num2()
  {
    if (num2 != 0)
    {
       return true;
    }
    else
    {
      return false;
    }
  }

  Calculator() {}
};
int main() {

  Calculator calculator;
  for (int i{}; i < 10000; i++)
  {
    calculator.vvod();
    if (calculator.set_num1() && calculator.set_num2()) {
      std::cout << "num1 + num2 =" << calculator.add() << "\n";
      std::cout << "num1 * num2 =" << calculator.multiply() << "\n";
      std::cout << "num2 - num1 =" << calculator.substruct_1_2() << "\n";
      std::cout << "num1 - num2 =" << calculator.substruct_2_1() << "\n";
      std::cout << "num2 / num1 =" << calculator.divide_1_2() << "\n";
      std::cout << "num1 / num2 =" << calculator.divide_2_1() << "\n";

    }
    else
    {
      std::cout << "vvod not correct!" << "\n";
      calculator.vvod();
    }
  }
}