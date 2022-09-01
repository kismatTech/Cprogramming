//C Program to find the roots of quadratic equation

#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c;
    float root1, root2;
    float D, img, real;
    printf("Enter the value of coefficient a, b and c: \n");
    scanf("%f%f%f", &a, &b, &c);

    D = (b * b - 4 * a * c);
    // defines the conditions for real and different roots of the quadratic equation
    if (D > 0)
    {
        root1 = -b + sqrt(D) / 2 * a;
        root2 = -b + sqrt(D) / 2 * a;
        printf("\n Value of root1 = %.2f and value of root2 = %.2f", root1, root2);
    }
    // elseif condition defines roots ( real and equal root) are equal in the quadratic equation
    else if (D == 0)
    {
        root1 = root2 = -b / 2 * a; // both roots are equal;
        printf("\n Value of root1 = %.2f and value of root2 = %.2f", root1, root2);
    }

    // if det < 0, means both roots are real and imaginary in the quadratic equation.
    else
    {
        real = -b / 2 * a;
        img = sqrt(-D) / (2 * a);
        printf("\nValue of root1 = %.2f + %.2fi\n", real, img);
        printf("value of root2 = %.2f + %.2fi", real, img);
    }

    return 0;
}