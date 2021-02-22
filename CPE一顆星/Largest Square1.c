//另一種解法 
#include <stdio.h>
#include <math.h>

int main(void)
{
  int n, i, j, k, m, w, l, coor, x, y, side_c = 1, count = 0, side;
  char patt[20][20];
  scanf("%d",&n);
  for(m=0; m<n; m++)
  {
	scanf("%d%d%d", &w, &l, &coor);
	
	for(i=0; i<w; i++)
		scanf("%s", patt[i]);
	
	printf("%d %d %d\n", w, l, coor);
	for(k=0; k<coor; k++)
	{
	    scanf("%d%d", &x, &y);
	    for(i=1; x-i>=0; i++)
	    {
	      if(patt[x-i][y] == patt[x][y])
	      {
	        side_c++;
	      }
	      else
	        break;
	    }
	    for(i=x-(side_c-1); i<=x+(side_c-1); i++)
	    {
	      for(j=y-(side_c-1); j<=y+(side_c-1); j++)
	      {
	        if(i < 0 || j < 0 || i > w-1 || j > l-1)
	        {
	          side_c--;
	          i = x-(side_c-1)-1;
	          count = 0;
	          break;
	        }
	        if(patt[i][j] == patt[x][y])
	          count++;
	        else
	        {
	          count = 0;
	          side_c--;
	          i = x-(side_c-1)-1;
	          break;
	        }
	      }
	    }
	    side = sqrt(count);
	    printf("%d\n", side);
	    count = 0;
	}
	  
  }
  return 0;
}
