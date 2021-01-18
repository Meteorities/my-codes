#include <stdio.h>
#include "pe12-2a_modified.h"

int main(void)
{
	int mode;
	auto int mode_decided = 0;
	auto double distance = 0.00;
	auto double gasoline_used = 0.00;

	printf("Enter 0 for metric mode,1 for US mode: ");
	scanf_s("%d", &mode);
	while (mode >= 0) {
		set_mode(mode,&mode_decided);
		get_info(&mode_decided,&distance,&gasoline_used);
		show_info(&mode_decided,&distance,&gasoline_used);
		printf("Enter 0 for metric mode,1 for US mode");
		printf(" (-1 to quit): ");
		scanf_s("%d", &mode);
	}
	printf("Done.\n");
	return 0;
}