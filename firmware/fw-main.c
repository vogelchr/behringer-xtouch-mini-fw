#include <libopencm3/stm32/rcc.h>

int main(void) {
	rcc_clock_setup_in_hse_12mhz_out_72mhz();

	return 0;
}
