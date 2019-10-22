#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *fp;
    int line_num = 1,find_result = 0;
    char temp[512],str[10];
    printf("Enter a String");
    scanf("%s",str);
    fp=fopen("g.txt","r");
    while(fgets(temp, 512, fp) != NULL)
    {
        if((strstr(temp, str)) != NULL)
        {
            printf("A match found on line: %d\n", line_num);
            printf("\n%s\n", temp);
            find_result++;
        }
        line_num++;
    }
    if(find_result == 0)
    {
        printf("\nSorry, couldn't find a match.\n");
    }
    if(fp)
    {
        fclose(fp);
    }
    return(0);
}


