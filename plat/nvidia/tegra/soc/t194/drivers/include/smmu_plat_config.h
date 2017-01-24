/*
 * Copyright (c) 2019, NVIDIA CORPORATION. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef __SMMU_PLAT_CONFIG_H
#define __SMMU_PLAT_CONFIG_H

#include <mmio.h>
#include <tegra_def.h>
#include <smmu.h>

static __attribute__((aligned(16))) smmu_regs_t smmu_ctx_regs[] = {
	_START_OF_TABLE_,
	mc_make_sid_security_cfg(PTCR),
	mc_make_sid_security_cfg(HDAR),
	mc_make_sid_security_cfg(HOST1XDMAR),
	mc_make_sid_security_cfg(NVENCSRD),
	mc_make_sid_security_cfg(SATAR),
	mc_make_sid_security_cfg(MPCORER),
	mc_make_sid_security_cfg(NVENCSWR),
	mc_make_sid_security_cfg(HDAW),
	mc_make_sid_security_cfg(MPCOREW),
	mc_make_sid_security_cfg(SATAW),
	mc_make_sid_security_cfg(ISPRA),
	mc_make_sid_security_cfg(ISPFALR),
	mc_make_sid_security_cfg(ISPWA),
	mc_make_sid_security_cfg(ISPWB),
	mc_make_sid_security_cfg(XUSB_HOSTR),
	mc_make_sid_security_cfg(XUSB_HOSTW),
	mc_make_sid_security_cfg(XUSB_DEVR),
	mc_make_sid_security_cfg(XUSB_DEVW),
	mc_make_sid_security_cfg(TSECSRD),
	mc_make_sid_security_cfg(TSECSWR),
	mc_make_sid_security_cfg(GPUSRD),
	mc_make_sid_security_cfg(GPUSWR),
	mc_make_sid_security_cfg(SDMMCRA),
	mc_make_sid_security_cfg(SDMMCR),
	mc_make_sid_security_cfg(SDMMCRAB),
	mc_make_sid_security_cfg(SDMMCWA),
	mc_make_sid_security_cfg(SDMMCW),
	mc_make_sid_security_cfg(SDMMCWAB),
	mc_make_sid_security_cfg(VICSRD),
	mc_make_sid_security_cfg(VICSWR),
	mc_make_sid_security_cfg(VIW),
	mc_make_sid_security_cfg(NVDECSRD),
	mc_make_sid_security_cfg(NVDECSWR),
	mc_make_sid_security_cfg(APER),
	mc_make_sid_security_cfg(APEW),
	mc_make_sid_security_cfg(NVJPGSRD),
	mc_make_sid_security_cfg(NVJPGSWR),
	mc_make_sid_security_cfg(SESRD),
	mc_make_sid_security_cfg(SESWR),
	mc_make_sid_security_cfg(AXIAPR),
	mc_make_sid_security_cfg(AXIAPW),
	mc_make_sid_security_cfg(ETRR),
	mc_make_sid_security_cfg(ETRW),
	mc_make_sid_security_cfg(TSECSRDB),
	mc_make_sid_security_cfg(TSECSWRB),
	mc_make_sid_security_cfg(GPUSRD2),
	mc_make_sid_security_cfg(GPUSWR2),
	mc_make_sid_security_cfg(AXISR),
	mc_make_sid_security_cfg(AXISW),
	mc_make_sid_security_cfg(EQOSR),
	mc_make_sid_security_cfg(EQOSW),
	mc_make_sid_security_cfg(UFSHCR),
	mc_make_sid_security_cfg(UFSHCW),
	mc_make_sid_security_cfg(NVDISPLAYR),
	mc_make_sid_security_cfg(BPMPR),
	mc_make_sid_security_cfg(BPMPW),
	mc_make_sid_security_cfg(BPMPDMAR),
	mc_make_sid_security_cfg(BPMPDMAW),
	mc_make_sid_security_cfg(AONR),
	mc_make_sid_security_cfg(AONW),
	mc_make_sid_security_cfg(AONDMAR),
	mc_make_sid_security_cfg(AONDMAW),
	mc_make_sid_security_cfg(SCER),
	mc_make_sid_security_cfg(SCEW),
	mc_make_sid_security_cfg(SCEDMAR),
	mc_make_sid_security_cfg(SCEDMAW),
	mc_make_sid_security_cfg(APEDMAR),
	mc_make_sid_security_cfg(APEDMAW),
	mc_make_sid_security_cfg(NVDISPLAYR1),
	mc_make_sid_security_cfg(VICSRD1),
	mc_make_sid_security_cfg(NVDECSRD1),
	mc_make_sid_security_cfg(VIFALR),
	mc_make_sid_security_cfg(VIFALW),
	mc_make_sid_security_cfg(DLA0RDA),
	mc_make_sid_security_cfg(DLA0FALRDB),
	mc_make_sid_security_cfg(DLA0WRA),
	mc_make_sid_security_cfg(DLA0FALWRB),
	mc_make_sid_security_cfg(DLA1RDA),
	mc_make_sid_security_cfg(DLA1FALRDB),
	mc_make_sid_security_cfg(DLA1WRA),
	mc_make_sid_security_cfg(DLA1FALWRB),
	mc_make_sid_security_cfg(PVA0RDA),
	mc_make_sid_security_cfg(PVA0RDB),
	mc_make_sid_security_cfg(PVA0RDC),
	mc_make_sid_security_cfg(PVA0WRA),
	mc_make_sid_security_cfg(PVA0WRB),
	mc_make_sid_security_cfg(PVA0WRC),
	mc_make_sid_security_cfg(PVA1RDA),
	mc_make_sid_security_cfg(PVA1RDB),
	mc_make_sid_security_cfg(PVA1RDC),
	mc_make_sid_security_cfg(PVA1WRA),
	mc_make_sid_security_cfg(PVA1WRB),
	mc_make_sid_security_cfg(PVA1WRC),
	mc_make_sid_security_cfg(RCER),
	mc_make_sid_security_cfg(RCEW),
	mc_make_sid_security_cfg(RCEDMAR),
	mc_make_sid_security_cfg(RCEDMAW),
	mc_make_sid_security_cfg(NVENC1SRD),
	mc_make_sid_security_cfg(NVENC1SWR),
	mc_make_sid_security_cfg(PCIE0R),
	mc_make_sid_security_cfg(PCIE0W),
	mc_make_sid_security_cfg(PCIE1R),
	mc_make_sid_security_cfg(PCIE1W),
	mc_make_sid_security_cfg(PCIE2AR),
	mc_make_sid_security_cfg(PCIE2AW),
	mc_make_sid_security_cfg(PCIE3R),
	mc_make_sid_security_cfg(PCIE3W),
	mc_make_sid_security_cfg(PCIE4R),
	mc_make_sid_security_cfg(PCIE4W),
	mc_make_sid_security_cfg(PCIE5R),
	mc_make_sid_security_cfg(PCIE5W),
	mc_make_sid_security_cfg(ISPFALW),
	mc_make_sid_security_cfg(DLA0RDA1),
	mc_make_sid_security_cfg(DLA1RDA1),
	mc_make_sid_security_cfg(PVA0RDA1),
	mc_make_sid_security_cfg(PVA0RDB1),
	mc_make_sid_security_cfg(PVA1RDA1),
	mc_make_sid_security_cfg(PVA1RDB1),
	mc_make_sid_security_cfg(PCIE5R1),
	mc_make_sid_security_cfg(NVENCSRD1),
	mc_make_sid_security_cfg(NVENC1SRD1),
	mc_make_sid_security_cfg(ISPRA1),
	mc_make_sid_security_cfg(MIU0R),
	mc_make_sid_security_cfg(MIU0W),
	mc_make_sid_security_cfg(MIU1R),
	mc_make_sid_security_cfg(MIU1W),
	mc_make_sid_security_cfg(MIU2R),
	mc_make_sid_security_cfg(MIU2W),
	mc_make_sid_security_cfg(MIU3R),
	mc_make_sid_security_cfg(MIU3W),
	mc_make_sid_override_cfg(PTCR),
	mc_make_sid_override_cfg(HDAR),
	mc_make_sid_override_cfg(HOST1XDMAR),
	mc_make_sid_override_cfg(NVENCSRD),
	mc_make_sid_override_cfg(SATAR),
	mc_make_sid_override_cfg(MPCORER),
	mc_make_sid_override_cfg(NVENCSWR),
	mc_make_sid_override_cfg(HDAW),
	mc_make_sid_override_cfg(MPCOREW),
	mc_make_sid_override_cfg(SATAW),
	mc_make_sid_override_cfg(ISPRA),
	mc_make_sid_override_cfg(ISPFALR),
	mc_make_sid_override_cfg(ISPWA),
	mc_make_sid_override_cfg(ISPWB),
	mc_make_sid_override_cfg(XUSB_HOSTR),
	mc_make_sid_override_cfg(XUSB_HOSTW),
	mc_make_sid_override_cfg(XUSB_DEVR),
	mc_make_sid_override_cfg(XUSB_DEVW),
	mc_make_sid_override_cfg(TSECSRD),
	mc_make_sid_override_cfg(TSECSWR),
	mc_make_sid_override_cfg(GPUSRD),
	mc_make_sid_override_cfg(GPUSWR),
	mc_make_sid_override_cfg(SDMMCRA),
	mc_make_sid_override_cfg(SDMMCR),
	mc_make_sid_override_cfg(SDMMCRAB),
	mc_make_sid_override_cfg(SDMMCWA),
	mc_make_sid_override_cfg(SDMMCW),
	mc_make_sid_override_cfg(SDMMCWAB),
	mc_make_sid_override_cfg(VICSRD),
	mc_make_sid_override_cfg(VICSWR),
	mc_make_sid_override_cfg(VIW),
	mc_make_sid_override_cfg(NVDECSRD),
	mc_make_sid_override_cfg(NVDECSWR),
	mc_make_sid_override_cfg(APER),
	mc_make_sid_override_cfg(APEW),
	mc_make_sid_override_cfg(NVJPGSRD),
	mc_make_sid_override_cfg(NVJPGSWR),
	mc_make_sid_override_cfg(SESRD),
	mc_make_sid_override_cfg(SESWR),
	mc_make_sid_override_cfg(AXIAPR),
	mc_make_sid_override_cfg(AXIAPW),
	mc_make_sid_override_cfg(ETRR),
	mc_make_sid_override_cfg(ETRW),
	mc_make_sid_override_cfg(TSECSRDB),
	mc_make_sid_override_cfg(TSECSWRB),
	mc_make_sid_override_cfg(GPUSRD2),
	mc_make_sid_override_cfg(GPUSWR2),
	mc_make_sid_override_cfg(AXISR),
	mc_make_sid_override_cfg(AXISW),
	mc_make_sid_override_cfg(EQOSR),
	mc_make_sid_override_cfg(EQOSW),
	mc_make_sid_override_cfg(UFSHCR),
	mc_make_sid_override_cfg(UFSHCW),
	mc_make_sid_override_cfg(NVDISPLAYR),
	mc_make_sid_override_cfg(BPMPR),
	mc_make_sid_override_cfg(BPMPW),
	mc_make_sid_override_cfg(BPMPDMAR),
	mc_make_sid_override_cfg(BPMPDMAW),
	mc_make_sid_override_cfg(AONR),
	mc_make_sid_override_cfg(AONW),
	mc_make_sid_override_cfg(AONDMAR),
	mc_make_sid_override_cfg(AONDMAW),
	mc_make_sid_override_cfg(SCER),
	mc_make_sid_override_cfg(SCEW),
	mc_make_sid_override_cfg(SCEDMAR),
	mc_make_sid_override_cfg(SCEDMAW),
	mc_make_sid_override_cfg(APEDMAR),
	mc_make_sid_override_cfg(APEDMAW),
	mc_make_sid_override_cfg(NVDISPLAYR1),
	mc_make_sid_override_cfg(VICSRD1),
	mc_make_sid_override_cfg(NVDECSRD1),
	mc_make_sid_override_cfg(VIFALR),
	mc_make_sid_override_cfg(VIFALW),
	mc_make_sid_override_cfg(DLA0RDA),
	mc_make_sid_override_cfg(DLA0FALRDB),
	mc_make_sid_override_cfg(DLA0WRA),
	mc_make_sid_override_cfg(DLA0FALWRB),
	mc_make_sid_override_cfg(DLA1RDA),
	mc_make_sid_override_cfg(DLA1FALRDB),
	mc_make_sid_override_cfg(DLA1WRA),
	mc_make_sid_override_cfg(DLA1FALWRB),
	mc_make_sid_override_cfg(PVA0RDA),
	mc_make_sid_override_cfg(PVA0RDB),
	mc_make_sid_override_cfg(PVA0RDC),
	mc_make_sid_override_cfg(PVA0WRA),
	mc_make_sid_override_cfg(PVA0WRB),
	mc_make_sid_override_cfg(PVA0WRC),
	mc_make_sid_override_cfg(PVA1RDA),
	mc_make_sid_override_cfg(PVA1RDB),
	mc_make_sid_override_cfg(PVA1RDC),
	mc_make_sid_override_cfg(PVA1WRA),
	mc_make_sid_override_cfg(PVA1WRB),
	mc_make_sid_override_cfg(PVA1WRC),
	mc_make_sid_override_cfg(RCER),
	mc_make_sid_override_cfg(RCEW),
	mc_make_sid_override_cfg(RCEDMAR),
	mc_make_sid_override_cfg(RCEDMAW),
	mc_make_sid_override_cfg(NVENC1SRD),
	mc_make_sid_override_cfg(NVENC1SWR),
	mc_make_sid_override_cfg(PCIE0R),
	mc_make_sid_override_cfg(PCIE0W),
	mc_make_sid_override_cfg(PCIE1R),
	mc_make_sid_override_cfg(PCIE1W),
	mc_make_sid_override_cfg(PCIE2AR),
	mc_make_sid_override_cfg(PCIE2AW),
	mc_make_sid_override_cfg(PCIE3R),
	mc_make_sid_override_cfg(PCIE3W),
	mc_make_sid_override_cfg(PCIE4R),
	mc_make_sid_override_cfg(PCIE4W),
	mc_make_sid_override_cfg(PCIE5R),
	mc_make_sid_override_cfg(PCIE5W),
	mc_make_sid_override_cfg(ISPFALW),
	mc_make_sid_override_cfg(DLA0RDA1),
	mc_make_sid_override_cfg(DLA1RDA1),
	mc_make_sid_override_cfg(PVA0RDA1),
	mc_make_sid_override_cfg(PVA0RDB1),
	mc_make_sid_override_cfg(PVA1RDA1),
	mc_make_sid_override_cfg(PVA1RDB1),
	mc_make_sid_override_cfg(PCIE5R1),
	mc_make_sid_override_cfg(NVENCSRD1),
	mc_make_sid_override_cfg(NVENC1SRD1),
	mc_make_sid_override_cfg(ISPRA1),
	mc_make_sid_override_cfg(MIU0R),
	mc_make_sid_override_cfg(MIU0W),
	mc_make_sid_override_cfg(MIU1R),
	mc_make_sid_override_cfg(MIU1W),
	mc_make_sid_override_cfg(MIU2R),
	mc_make_sid_override_cfg(MIU2W),
	mc_make_sid_override_cfg(MIU3R),
	mc_make_sid_override_cfg(MIU3W),
	smmu_make_gnsr0_nsec_cfg(CR0),
	smmu_make_gnsr0_sec_cfg(IDR0),
	smmu_make_gnsr0_sec_cfg(IDR1),
	smmu_make_gnsr0_sec_cfg(IDR2),
	smmu_make_gnsr0_nsec_cfg(GFSR),
	smmu_make_gnsr0_nsec_cfg(GFSYNR0),
	smmu_make_gnsr0_nsec_cfg(GFSYNR1),
	smmu_make_gnsr0_nsec_cfg(TLBGSTATUS),
	smmu_make_gnsr0_nsec_cfg(PIDR2),
	smmu_make_smrg_group(0),
	smmu_make_smrg_group(1),
	smmu_make_smrg_group(2),
	smmu_make_smrg_group(3),
	smmu_make_smrg_group(4),
	smmu_make_smrg_group(5),
	smmu_make_smrg_group(6),
	smmu_make_smrg_group(7),
	smmu_make_smrg_group(8),
	smmu_make_smrg_group(9),
	smmu_make_smrg_group(10),
	smmu_make_smrg_group(11),
	smmu_make_smrg_group(12),
	smmu_make_smrg_group(13),
	smmu_make_smrg_group(14),
	smmu_make_smrg_group(15),
	smmu_make_smrg_group(16),
	smmu_make_smrg_group(17),
	smmu_make_smrg_group(18),
	smmu_make_smrg_group(19),
	smmu_make_smrg_group(20),
	smmu_make_smrg_group(21),
	smmu_make_smrg_group(22),
	smmu_make_smrg_group(23),
	smmu_make_smrg_group(24),
	smmu_make_smrg_group(25),
	smmu_make_smrg_group(26),
	smmu_make_smrg_group(27),
	smmu_make_smrg_group(28),
	smmu_make_smrg_group(29),
	smmu_make_smrg_group(30),
	smmu_make_smrg_group(31),
	smmu_make_smrg_group(32),
	smmu_make_smrg_group(33),
	smmu_make_smrg_group(34),
	smmu_make_smrg_group(35),
	smmu_make_smrg_group(36),
	smmu_make_smrg_group(37),
	smmu_make_smrg_group(38),
	smmu_make_smrg_group(39),
	smmu_make_smrg_group(40),
	smmu_make_smrg_group(41),
	smmu_make_smrg_group(42),
	smmu_make_smrg_group(43),
	smmu_make_smrg_group(44),
	smmu_make_smrg_group(45),
	smmu_make_smrg_group(46),
	smmu_make_smrg_group(47),
	smmu_make_smrg_group(48),
	smmu_make_smrg_group(49),
	smmu_make_smrg_group(50),
	smmu_make_smrg_group(51),
	smmu_make_smrg_group(52),
	smmu_make_smrg_group(53),
	smmu_make_smrg_group(54),
	smmu_make_smrg_group(55),
	smmu_make_smrg_group(56),
	smmu_make_smrg_group(57),
	smmu_make_smrg_group(58),
	smmu_make_smrg_group(59),
	smmu_make_smrg_group(60),
	smmu_make_smrg_group(61),
	smmu_make_smrg_group(62),
	smmu_make_smrg_group(63),
	smmu_make_cb_group(0),
	smmu_make_cb_group(1),
	smmu_make_cb_group(2),
	smmu_make_cb_group(3),
	smmu_make_cb_group(4),
	smmu_make_cb_group(5),
	smmu_make_cb_group(6),
	smmu_make_cb_group(7),
	smmu_make_cb_group(8),
	smmu_make_cb_group(9),
	smmu_make_cb_group(10),
	smmu_make_cb_group(11),
	smmu_make_cb_group(12),
	smmu_make_cb_group(13),
	smmu_make_cb_group(14),
	smmu_make_cb_group(15),
	smmu_make_cb_group(16),
	smmu_make_cb_group(17),
	smmu_make_cb_group(18),
	smmu_make_cb_group(19),
	smmu_make_cb_group(20),
	smmu_make_cb_group(21),
	smmu_make_cb_group(22),
	smmu_make_cb_group(23),
	smmu_make_cb_group(24),
	smmu_make_cb_group(25),
	smmu_make_cb_group(26),
	smmu_make_cb_group(27),
	smmu_make_cb_group(28),
	smmu_make_cb_group(29),
	smmu_make_cb_group(30),
	smmu_make_cb_group(31),
	smmu_make_cb_group(32),
	smmu_make_cb_group(33),
	smmu_make_cb_group(34),
	smmu_make_cb_group(35),
	smmu_make_cb_group(36),
	smmu_make_cb_group(37),
	smmu_make_cb_group(38),
	smmu_make_cb_group(39),
	smmu_make_cb_group(40),
	smmu_make_cb_group(41),
	smmu_make_cb_group(42),
	smmu_make_cb_group(43),
	smmu_make_cb_group(44),
	smmu_make_cb_group(45),
	smmu_make_cb_group(46),
	smmu_make_cb_group(47),
	smmu_make_cb_group(48),
	smmu_make_cb_group(49),
	smmu_make_cb_group(50),
	smmu_make_cb_group(51),
	smmu_make_cb_group(52),
	smmu_make_cb_group(53),
	smmu_make_cb_group(54),
	smmu_make_cb_group(55),
	smmu_make_cb_group(56),
	smmu_make_cb_group(57),
	smmu_make_cb_group(58),
	smmu_make_cb_group(59),
	smmu_make_cb_group(60),
	smmu_make_cb_group(61),
	smmu_make_cb_group(62),
	smmu_make_cb_group(63),
	smmu_bypass_cfg,	/* TBU settings */
	_END_OF_TABLE_,
};

static inline uint32_t tegra_smmu_read_32(uint32_t smmu_id, uint32_t off)
{
	if (smmu_id == 0)
		return mmio_read_32(TEGRA_SMMU0_BASE + off);
	else if (smmu_id == 1)
		return mmio_read_32(TEGRA_SMMU1_BASE + off);
	else if (smmu_id == 2)
		return mmio_read_32(TEGRA_SMMU2_BASE + off);
	else
		panic();
}

static inline void tegra_smmu_write_32(uint32_t smmu_id,
			uint32_t off, uint32_t val)
{
	if (smmu_id == 0)
		mmio_write_32(TEGRA_SMMU0_BASE + off, val);
	else if (smmu_id == 1)
		mmio_write_32(TEGRA_SMMU1_BASE + off, val);
	else if (smmu_id == 2)
		mmio_write_32(TEGRA_SMMU2_BASE + off, val);
	else
		panic();
}

#endif //__SMMU_PLAT_CONFIG_H
