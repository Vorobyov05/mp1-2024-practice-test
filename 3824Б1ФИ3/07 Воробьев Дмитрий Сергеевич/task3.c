// Задача 3. Дана строка s. Сформировать новую строку, состоящую только из 
// заглавных букв английского алфавита, содержащихся в исходной строке s. 
// Пример: s = "aBc1D2e34F56g", ответ: "BDF".
#include <string.h>
char* task3(char *s, char *res)
{
	int j = 0;
	for (int i = 0; s[i] != '\0'; i++)
		{
			if (s[i] >= 'A' && s[i] <= 'Z')
			{
				res[j] = s[i];
				j++;
			}
		}
	res[j] = '\0';
}
