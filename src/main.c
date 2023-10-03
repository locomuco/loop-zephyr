#include <zephyr/kernel.h>

int main(void)
{
	printk("Hello Loop Client %s\n", CONFIG_BOARD);
	return 0;
}
