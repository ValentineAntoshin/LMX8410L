#include "LMX8410L.h"



unsigned int LMX8410_CORE::REGS_TO_STATES()
{
	STATES.SYNC_PHASE_PLL = (REGS[0] << 1) >> 14;
	STATES.OUT_MUTE = (REGS[0] << 6) >> 14;
	STATES.FCAL_HPFD_ADJ = (REGS[0] << 7) >> 14;
	STATES.FCAL_EN = (REGS[0] << 11) >> 14; 
	// ...
	return 0;
}

int main()
{
	LMX8410_CORE LMX;
	LMX.STATES.rb_VCO_CAPCTRL = 256;
	printf("%d\n", LMX.STATES.rb_VCO_CAPCTRL);
	return 0;
}
