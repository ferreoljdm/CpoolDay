int my_little_bistro(int value1, char op, int value2)
{
    if (op == '-')
    {
        value1 = value1 - value2;
    }
    else if (op == '+')
    {
        value1 = value1 + value2;
    }
    else if (op == '*')
    {
        value1 = value1 * value2;
    }
    else if (op == '/')
    {
        value1 = value1 / value2;
    }
    else
    {
        value1 = value1 * value2 / 100;
    }
}