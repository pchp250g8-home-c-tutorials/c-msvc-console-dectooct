DecToOct. C Tutorials. Microsoft Visual Studio IDE. Simple Input/Output. Strings. Algorithms. Console application. 
A console application in the C programming language. 
The program does the following:
  1. Prompts the user to enter an integer.
  2. Checks whether the number is positive. It should also be no more than 4,294,967,295.
  3. If not, the program displays a message about the invalid number and terminates.
  4. Sets a string variable to the empty string.
  5. Creates a temporary variable with an initial value equal to the number entered from the keyboard.
  6. The loop with precondition is executed:
     a) The variable's value is compared to zero. If it is greater than zero, the loop continues executing; otherwise, it terminates (Go to step 6).
     b) The remainder of dividing the value of the temporary variable by 8 is calculated.
     c) It is translated into a string (symbol). This symbol is added to the end of the string that was declared in point 3.
     d) The temporary variable is divided by 8.
  7. If the string remains empty after the loop completes, it is replaced with the character "0".
  8. The entered number and its octal number (the string that was declared in point 3) are displayed on the screen.
Developed in the Microsoft Visual Studio integrated environment.

DecToOct. Занятия по C. ИС Visual Studio. Простой Ввод/Вывод. Алгоритмы. Строки. Платформа Windows. Консольное приложение. 
Консольное приложение написанное на языке программирования C. 
Программа делает следующее:
  1. Запрашивает у пользователя ввод целого числа.
  2. Проверяет является ли оно положительным. Также оно должно быть не более 4 294 967 295.
  3. Если нет, программа выводит сообщение о неверно введенном числе и завершает работу.
  4. Устанавливает строковую переменную в значение равное пустой строке.
  5. Создаёт временную переменную с первоначальным значением равным числу введённому с клавиатуры.
  6. Выполняется цикл с предусловием:
     a) Значение переменной сравнивается с нулём. Если оно больше нуля, цикл продолжает выполняться, в противном случае завершается (Переход к пункту 6).
     b) Вычисляется остаток от деления значения временной переменной на 8.
     c) Он переводится в строку (символ). Этот символ прибавляется в конец строки, которая была объявлена в пункте 3.
     d) Времменая переменная делится на 8.
  7. Если после завершения цикла строка остаётся пустой, она заменяется на символ "0".
  8. На экран выводится введённое число и его восьмеричное число (строка, которая была объявлена в пункте 3).
Разработано в итегрированной среде Microsoft Visual Studio.
