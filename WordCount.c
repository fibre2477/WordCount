#include<stdio.h>
int main(int argc, char* argv[])
{

	FILE* fp;
	int str = 0, word = 0;
	char ch;
	if ((fp = fopen(argv[2], "r")) == NULL)
	{
		printf("�ļ����Ҵ���\n");
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
		printf("�ַ�����Ŀ%d\n", str);
	}
	if (!(strcmp(argv[1], "-w"))) {
		printf("������Ŀ%d\n", word);
	}
	return 0;
}



