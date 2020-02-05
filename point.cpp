#include<stdio.h>
#include<string.h>
int main()
{
	int point(char num[]);
	int a[10]={0,3,5,13,20,31,33,45,56,99};
	char b[10][6] = { "零","三","五","十六","十九","三十","三三","四八","五九","九九" };
	int i;
	for(i=0;i<10;i++)
	{
		if(a[i]==point(b[i])) 
		{
			printf("%s",b[i]);
			printf( "测试正确" );
			printf("\n");
		}
		else
		{
				printf("%s",b[i]);
			printf( "测试错误" );
			printf("\n");
		}
	 } 
	 return 0;
 } 
 
 int point(char num[])
{
	int point2(char num[]);
    if (strcmp("零", num) == 0) return 0;
    else if (strcmp("一", num) == 0) return 1;
    else if (strcmp("二", num) == 0) return 2;
    else if (strcmp("三", num) == 0) return 3;
    else if (strcmp("四", num) == 0) return 4;
    else if (strcmp("五", num) == 0) return 5;
    else if (strcmp("六", num) == 0) return 6;
    else if (strcmp("七", num) == 0) return 7;
    else if (strcmp("八", num) == 0) return 8;
    else if (strcmp("九", num) == 0) return 9;
    else if (strcmp("十", num) == 0) return 10;
    else{
    	int shu;
		shu=point2(num); 
        return  shu;
    }
}

int point2(char num[])
{
	int i, a, b, c;
        char x[2], y[2];
        for (i = 0; i < 2; i++){
            x[i] = num[i];
            y[i] = num[i + 2];
        }
        if (strcmp("十", x) == 0){
            a = 10;
            b = point(y);
            c = a + b;
        }
        else {
            a = point(x);
            b = point(y);
            c = a * 10 + b;
        }
        return c;
}

