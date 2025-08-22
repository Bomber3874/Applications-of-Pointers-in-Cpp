# Applications-of-Pointers-in-Cpp

# Aim

To study and implement the applications of pointers in C++, including call by value, call by reference, and practical use cases such as a salary incrementer.

# Software Used

Compiler: GNU GCC (g++)

IDE: Visual Studio Code

Operating System: Windows/Linux

# Theory

# 1. Call by Value

In call by value, a function receives a copy of the actual arguments.

Any changes made inside the function do not affect the original variables.

It is safe but memory inefficient when handling large data.

Example:

    void swap(int x, int y){
        int temp = x;
        x = y;
        y = temp;
    }


After execution, values inside main() remain unchanged.

# 2. Call by Reference

In call by reference, the function receives the memory address of arguments using pointers.

Changes in the function directly affect the original variables.

Achieved using pointer parameters or reference variables.

Example:

    void swap(int *a, int *b){
        int temp = *a;
        *a = *b;
        *b = temp;
    }


Here, swapping works successfully since we modify values at given memory locations.

# 3. Practical Application – Salary Incrementer

Pointers are also used in real-world problems, such as updating salary records.

A pointer is passed to the function, and the salary value is modified in-place.

Example: Applying a 20% increment when an employee meets given conditions (years worked, profit generated, research projects).

    void comp(float *salary){
        *salary = *salary + (0.2 * (*salary));
    }

# Algorithms

# 1. Call by Value (Call By Value.cpp)

Algorithm:

    Start the program.
    
    Declare two integer variables x and y.
    
    Prompt the user to enter the values of x and y.
    
    Read the values from the user.
    
    Display the values of x and y before calling the function.
    
    Call the function swap(x, y) and pass the values by value (copies of x and y are passed).
    
    Inside the function:
      
      Store x in a temporary variable temp.
      
      Assign the value of y to x.
      
      Assign the value of temp to y.
      
      Exit the function (changes affect only local copies).
    
    Control returns to main() and the original values of x and y remain unchanged.
    
    Display the values of x and y after calling the function.
    
    End the program.

# 2. Call by Reference (Call By Reference.cpp)

Algorithm:

    Start the program.
    
    Declare two integer variables a and b.
    
    Prompt the user to enter the values of a and b.
    
    Read the values from the user.
    
    Display the values of a and b before swapping.
    
    Call the function swap(&a, &b) and pass the addresses of a and b.
    
    Inside the function:
    
      Dereference pointer a to access the value of a.
      
      Dereference pointer b to access the value of b.
      
      Store *a in a temporary variable temp.
      
      Assign the value of *b to *a.
      
      Assign the value of temp to *b.
      
      Exit the function (original values are modified).
    
    Control returns to main().
    
    Display the values of a and b after swapping.
    
    End the program.

# 3. Salary Incrementer (Salary Incrementer.cpp)

Algorithm:

    Start the program.
    
    Declare the required variables:
    
      emp_name (string) for employee name.
      
      emp_id (float) for employee ID.
      
      salary (float) for employee salary.
      
      year, res_pro, res_pro_pipe (int) for work experience and projects.
      
      profit (float) for profit generated.
    
    Prompt the user to enter the employee’s name and read it.
    
    Prompt the user to enter the employee ID and read it.
    
    Prompt the user to enter the current salary and read it.
    
    Prompt the user to enter the number of years worked and read it.
    
    Prompt the user to enter the profit generated and read it.
    
    Prompt the user to enter the number of research projects completed and read it.
    
    Prompt the user to enter the number of research projects in pipeline and read it.
    
    Check the eligibility conditions for salary increment:
    
      If the employee satisfies at least two conditions among (years ≥ 1, profit ≥ 1, research projects ≥ 1, pipeline projects ≥ 1).
    
    If eligible:
    
      Call the function comp(&salary) and pass the address of salary.
    
      Inside comp() function:
    
        Dereference the salary pointer.
    
        Add 20% of the salary to itself.
    
        Store updated salary in the same memory location.
    
      Display a message "You are Eligible for Salary Increment!!!".
    
      Display the updated salary after increment.
    
    If not eligible:
    
      Display a message "Sorry, You are Not Eligible for Salary Increment".
    
    End the program.

# Conclusion

This experiment demonstrated the applications of pointers in C++:

            Difference between call by value and call by reference
            Use of pointers for direct data manipulation
            Practical problem-solving via a salary incrementer system
            Understanding how memory addresses make programs more efficient
