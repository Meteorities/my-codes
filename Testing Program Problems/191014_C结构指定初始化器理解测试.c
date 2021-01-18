#include <stdio.h>
#include <string.h>
#define MAXTITL 41
#define MAXAUTL 31

struct book {
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};

int main(void)
{
    struct book surprise = { .value = 10.99};
    struct book gift = { .value = 25.99,
        .author = "James Broadfool",
        .title = "Rue for the Road"};
    
    printf("%.2f\n%s\n%s\n",gift.value,gift.author,gift.title);
    
    gift.value = 666.66;
    
    printf("%.2f\n",gift.value);
    
    return 0;
    
}