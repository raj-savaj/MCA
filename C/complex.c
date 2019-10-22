#include <stdio.h>
struct complex
{
  int real, img;
};

int main()
{
  int choice, temp1, temp2, temp3;
  struct complex a, b, c;

  while(1)
  {
    printf("Press 1 to add two complex numbers.\n");
    printf("Press 2 to subtract two complex numbers.\n");
    printf("Press 3 to multiply two complex numbers.\n");
    printf("Press 4 to divide two complex numbers.\n");
    printf("Press 5 to exit.\n");
    printf("Enter your choice\n");
    scanf("%d",&choice);

    if( choice == 5)
        break;

    if(choice >= 1 && choice <= 4)
    {
      printf("Enter a and b where a + ib is the first complex number.");
      printf("\na = ");
      scanf("%d", &a.real);
      printf("b = ");
      scanf("%d", &a.img);
      printf("Enter c and d where c + id is the second complex number.");
      printf("\nc = ");
      scanf("%d", &b.real);
      printf("d = ");
      scanf("%d", &b.img);
    }
    if( choice == 1 )
    {
      c.real = a.real + b.real;
      c.img = a.img + b.img;
      printf("Sum of two complex numbers = %d + %di",c.real,c.img);
    }
    else if ( choice == 2 )
    {
      c.real = a.real - b.real;
      c.img = a.img - b.img;
      printf("Difference of two complex numbers = %d + %di",c.real,c.img);
    }
    else if ( choice == 3 )
    {
      c.real = a.real*b.real - a.img*b.img;
      c.img = a.img*b.real + a.real*b.img;
      printf("Multiplication of two complex numbers = %d + %di",c.real,c.img);
    }
    else if ( choice == 4 )
    {
           c.real = ((a.img * b.real) - (a.real * b.img)) / ((a.real * b.real) + (b.img * b.img));
           c.img = ((a.real * b.real) + (a.img * b.img)) / ((b.real * b.real) + (b.img * b.img));
           printf("Division of two complex numbers = %d + %di",c.real,c.img);
    }
    else
    {
        printf("Invalid choice.");
    }
    printf("\nPress any key to enter choice again...\n");
  }
  return 0;
}

