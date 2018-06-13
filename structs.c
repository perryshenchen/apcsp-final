#include <stdio.h>
#include <string.h>

int main()
{
  int engint1;
  char input[256], engint[256];
  char engine[] = "http://lmgtfy.com/?";
  char goog[] = "q=";
  char bing[] = "s=b&q=";
  char yaho[] = "s=y&q";
 

	printf("Choose a search engine.\n1) Google\n2) Bing\n3) Yahoo\n");
while (1)
{
	fgets(input, 256, stdin);
	if (sscanf(input, "%d", &engint1) == 1) break;
	printf("Invalid search engine.\n");
}
	printf("Enter search term:\n");

while (1)
{
	fgets(input, 256, stdin);
	sscanf(input, "%s", engint);

if (engint1 == 1)
printf("Google search: %s%s%s\n", engine, goog, engint);


if (engint1 == 2)
printf("Bing search: %s%s%s\n", engine, bing, engint);


if (engint1 == 3)
printf("Yahoo search: %s%s%s\n", engine, yaho, engint);


break;
}
}
