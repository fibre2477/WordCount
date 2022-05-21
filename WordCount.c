#include<stdio.h>
int main(int argc, char* argv[])
{

	FILE* fp;
	int str = 0, word = 0;
	char ch;
	if ((fp = fopen(argv[2], "r")) == NULL)
	{
		printf("文件查找错误\n");
		return 0;
	}
	ch = fgetc(fp);

	char t = ch;
	while (ch != EOF)
	{
		if ((ch == '\t' || ch == ' ' || ch == '\n') && (t != '\t' && t != ' ' && t != '\n'))
		{
			word++;
		}
		str++;
		t = ch;
		ch = fgetc(fp);
	}
	if (t != ' ' && t != '\t' && t != '\n') {
		word++;

	}

	if (!(strcmp(argv[1], "-c"))) {
		printf("字符的数目%d\n", str);
	}
	if (!(strcmp(argv[1], "-w"))) {
		printf("单词数目%d\n", word);
	}
	return 0;
}



