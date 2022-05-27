#include <stdio.h>
#include <stdint.h>
#include <string.h>

typedef struct
{
	unsigned int SYNC_PHASE_PLL : 1;
	unsigned int OUT_MUTE : 1;
	unsigned int FCAL_HPFD_ADJ : 3;
	unsigned int FCAL_EN : 1;
	unsigned int MUXOUT_SEL : 1;
	unsigned int RESET_PLL : 1;
	unsigned int PLL_PD : 1;
	unsigned int CALK_CLK_DIV : 3;
	unsigned int OSC_2X : 1;
	unsigned int MULT : 5;
	unsigned int PLL_R : 8;
	unsigned int CPG : 3;
	unsigned int PLL_N : 16;
	unsigned int PFD_DLY_SEL : 6;
	uint32_t PLL_DEN;
	uint32_t MASH_SEED;
	uint32_t PLL_NUM;
	unsigned int LO_OUT_PD : 1;
	unsigned int MASH_RESET_N : 1;
	unsigned int MASH_ORDER : 3;
	unsigned int LO_OUT_MUX : 2;
	unsigned int SYNC_PIN_IGNORE : 1;
	unsigned int LD_TYPE : 1;
	uint32_t MASH_RST_COUNT;
	unsigned int CHDIV : 5;
	unsigned int VCO_CALSTART_CLOSE;
	unsigned int LO_PATH_EN : 3;
	unsigned int IFA_PULLUP_EN : 1;
	unsigned int LNA_PD : 1;
	unsigned int SIGPATH_RST : 1;
	unsigned int SIGCHAIN_PD : 1;
	unsigned int SYNC_PHASE_MIXLO : 1;
	unsigned int SYNC_DRV2_EN : 1;
	unsigned int SYNC_DRV1_EN : 1;
	unsigned int LO_MUX : 6;
	unsigned int LO_POLY_MODE1 : 4;
	unsigned int EXTLO_CLK_DIV_EN : 2;
	unsigned int LO_DRVR_MODE : 2;
	unsigned int EXTLO_CLK_DRV_EN : 2;
	unsigned int SM_CLK_SEL : 1;
	unsigned int IFA_PULLUP : 3;
	unsigned int VCM_CONFIG : 4;
	unsigned int DCOC_CLK_DIV : 10;
	unsigned int EN_DCOC_QCH_LUT : 1;
	unsigned int EN_DCOC_ICH_LUT : 1;
	unsigned int rb_DCOC_CAL : 2;
	unsigned int IMPR_GCAL_QCH : 8;
	unsigned int IMPR_GCAL_ICH : 8;
	unsigned int IMPR_PHCAL_POL : 1;
	unsigned int IMPR_PHCAL : 6;
	unsigned int LO_POLY_MODE2 : 4;
	unsigned int rb_LD_VTUNE : 2;
	unsigned int rb_VCO_SEL : 3;
	unsigned int rb_VCO_CAPCTRL : 8;
	unsigned int rb_VCO_DACISET : 9;
	unsigned int BIAS_LNA_CUR_CONFIG : 2;
	unsigned int EXTLO_INT_MATCH_RES : 2;
	unsigned int IMPR_PHCAL_EXTEND : 1;
} FIELDS;

class LMX8410_CORE
{
	public:
	uint16_t REGS[128];
	FIELDS STATES;
	unsigned int REGS_TO_STATES();
	unsigned int STATES_TO_REGS();
	unsigned int REG_TO_STATES(unsigned int REG_NUM);
	unsigned int STATES_TO_REG(unsigned int REG_NUM);
	unsigned int REG_UPDATE(unsigned int REG_NUM);
	unsigned int REG_STATES_UPDATE(unsigned int REG_NUM);
	
};
