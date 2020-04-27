#include <stdio.h>
#include <stdlib.h>

void sum_of_subsets(int sum, int ele, int tot);
int w[10], x[10], n, m, count = 0;
void main()
{
  int i, j, tot = 0;
  clrscr();
  printf("Enter the number of elements in the set: ");
  scanf("%d", &n);
  printf("\nEnter %d distinct positive numbers in ascending order into the set :\n", n);
  for (i = 1; i <= n; i++) 
    scanf("%d", &w[i]);
  printf("\nEnter the sum : ");
  scanf("%d", &m);
  for (i = 1; i <= n; i++) 
    x[i] = 0;
  for (i = 1; i <= n; i++) 
    tot = tot + w[i];
  if ((m > tot) || (m < w[1]))
  {
    printf("\nError in the list of elements entered");
    getch();
    exit(0);
  }
  else
    sum_of_subsets(0, 1, tot);
  if (count == 0)
    printf("\nNo subsets formed");
  getch();
}

void sum_of_subsets(int sum, int ele, int tot)
{
  int i;
  x[ele] = 1;
  if (sum + w[ele] == m)
  {
    printf("\n subset %d = ", ++count);
    for (i = 1; i <= ele; i++)
      if (x[i] == 1) 
        printf("  %d", w[i]);
  }
  else if(sum + w[ele] + w[ele + 1] <= m) 
    sum_of_subsets(sum + w[ele], ele + 1, tot - w[ele]);
  if ((sum + tot - w[ele] >= m) && (sum + w[ele + 1] <= m))
  {
    x[ele] = 0;
    sum_of_subsets(sum, ele + 1, tot - w[ele]);
  }
}