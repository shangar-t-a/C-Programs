#include<stdio.h>

void calcPage(int page,int line,int speed,int result,int time)
{
	int itr = 0;
	while(itr <= page*line)
	{
		itr = itr + speed;
		time = time + 1;
		if(time == result)
			break;
	}
	if(itr % line == 0)
	{
		printf("Page = %d : ",itr/line);
		printf("Line = %d ",line);
	}
	else
	{
		printf("page = %d : ",(itr/line)+1);
		printf("Line = %d ",itr%line);
	}
}

void main()
{
	int page1,lines1,page2,lines2,read,write,result_time;
	scanf("%d %d %d %d %d %d %d",&page1,&lines1,&page2,&lines2,&read,&write,&result_time);
	
	int time1 = (page1*lines1)/read;
	
	if(result_time <= time1)
	{
		printf("READ : ");
		calcPage(page1,lines1,read,result_time,0);	
	}
	else
	{
		printf("WRITE : ");
		calcPage(page2,lines2,write,result_time,time1);	
	}
	
}
