#include <stdio.h>
int main()
{
  int row_329,col_329,n_329;
  printf("Enter range : ");
  scanf("%d",&n_329);
  for(row_329=1;row_329<=n_329;++row_329)
  {
    for(col_329=1;col_329<=row_329;++col_329)
    printf("%d ",(row_329-col_329)%2);
    printf("\n");
  }
  return 0;
}