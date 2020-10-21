#include <calculator_operations.h>

int add(int operand1, int operand2)
{
    int sum;
    sum = operand1 + operand2;
    return sum;
}

int subtract(int operand1, int operand2)
{
    int sum;
    sum = operand1 - operand2;
    return sum;
}

int multiply(int operand1, int operand2)
{
    int result;
    result = operand1 * operand2;
    return result;
}

int divide(int operand1, int operand2)
{
    int result;
    if(0 == operand2)
    {
        return 0;
    }
    else
    {
        result = operand1 / operand2;
        return result;
    }
}

int greater(int operand1, int operand2)
{
    if(operand1>operand2)
    {
        return operand1;
    }
    else
    {
        return operand2;
    }
}

int lesser(int operand1, int operand2)
{
    if(operand1<operand2)
    {
        return operand1;
    }
    else
    {
        return operand2;
    }
}

int andgate(int operand1, int operand2)
{
    if(operand1 < 0 || operand2 < 0)
    {
        return -1;
    }
    else if (operand1 > 1 || operand2 > 1)
    {
        return -1;
    }
    else
    {
        if(operand1==0 && operand2==0)
        {
            return 0;
        }
        else if(operand1== 0 && operand2==1)
        {
            return 0;
        }
        else if(operand1==1 && operand2==0)
        {
            return 0;
        }
        else if(operand1==1 && operand2==1)
        {
            return 1;
        }
    }
}

int orgate(int operand1, int operand2)
{
    if(operand1 < 0 || operand2 < 0)
    {
        return -1;
    }
    else if (operand1 > 1 || operand2 > 1)
    {
        return -1;
    }
    else
    {
        if(operand1==0 && operand2==0)
        {
            return 0;
        }
        else if(operand1== 0 && operand2==1)
        {
            return 1;
        }
        else if(operand1==1 && operand2==0)
        {
            return 1;
        }
        else if(operand1==1 && operand2==1)
        {
            return 1;
        }
    }
}

int nandgate(int operand1, int operand2)
{
    if(operand1 < 0 || operand2 < 0)
    {
        return -1;
    }
    else if (operand1 > 1 || operand2 > 1)
    {
        return -1;
    }
    else
    {
        if(operand1==0 && operand2==0)
        {
            return 1;
        }
        else if(operand1== 0 && operand2==1)
        {
            return 1;
        }
        else if(operand1==1 && operand2==0)
        {
            return 1;
        }
        else if(operand1==1 && operand2==1)
        {
            return 0;
        }
    }
}

int norgate(int operand1, int operand2)
{
    if(operand1 < 0 || operand2 < 0)
    {
        return -1;
    }
    else if (operand1 > 1 || operand2 > 1)
    {
        return 1;
    }
    else
    {
        if(operand1==0 && operand2==0)
        {
            return 1;
        }
        else if(operand1== 0 && operand2==1)
        {
            return 0;
        }
        else if(operand1==1 && operand2==0)
        {
            return 0;
        }
        else if(operand1==1 && operand2==1)
        {
            return 0;
        }
    }
}

int adder3bit(int operand1, int operand2, int operand3)
{
    if(operand1 < 0 || operand2 < 0 || operand3 < 0)
    {
        return -1;
    }
    else if (operand1 > 1 || operand2 > 1 || operand3 > 1)
    {
        return -1;
    }
    else
    {
        if(operand1==0 && operand2==0 && operand3==0)
        {
            return 0;
        }
        else if(operand1==0 && operand2==0 && operand3==1)
        {
            return 1;
        }
        else if(operand1==0 && operand2==1 && operand3==0)
        {
            return 1;
        }
        else if(operand1==0 && operand2==1 && operand3==1)
        {
            return 0;
        }
        else if(operand1==1 && operand2==0 && operand3==0)
        {
            return 1;
        }
        else if(operand1==1 && operand2==0 && operand3==1)
        {
            return 0;
        }
        else if(operand1==1 && operand2==1 && operand3==0)
        {
            return 0;
        }
        else if(operand1==1 && operand2==1 && operand3==1)
        {
            return 1;
        }
    }
}

int subtractor3bit(int operand1, int operand2, int operand3)
{
    if(operand1 < 0 || operand2 < 0 || operand3 < 0)
    {
        return -1;
    }
    else if (operand1 > 1 || operand2 > 1 || operand3 > 1)
    {
        return -1;
    }
    else
    {
        if(operand1==0 && operand2==0 && operand3==0)
        {
            return 0;
        }
        else if(operand1==0 && operand2==0 && operand3==1)
        {
            return 1;
        }
        else if(operand1==0 && operand2==1 && operand3==0)
        {
            return 1;
        }
        else if(operand1==0 && operand2==1 && operand3==1)
        {
            return 0;
        }
        else if(operand1==1 && operand2==0 && operand3==0)
        {
            return 1;
        }
        else if(operand1==1 && operand2==0 && operand3==1)
        {
            return 0;
        }
        else if(operand1==1 && operand2==1 && operand3==0)
        {
            return 0;
        }
        else if(operand1==1 && operand2==1 && operand3==1)
        {
            return 1;
        }
    }
}
    
    
