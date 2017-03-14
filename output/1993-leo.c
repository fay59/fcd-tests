#include "tests/bin/1993-leo.h"

void _init(uint64_t arg0)
{
	if (*(uint64_t*)0x601200 != 0)
	{
		__gmon_start__();
	}
	return;
}
void main(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	struct x86_regsalloca1;
	struct { uint8_t field0[12]; uint32_t field1; uint8_t field2[72]; uint64_t field3; } alloca2;
	uint32_t anon10;
	uint32_t phi14;
	uint64_t phi15;
	alloca1.field5.field0 = arg3;
	alloca2.field3 = arg0;
	alloca1.field2.field0 = arg3;
	alloca1.field8.field0 = (uint64_t)&alloca2;
	uint64_t* anon3 = (uint64_t*)arg3;
	alloca1.field7.field0 = *anon3;
	alloca2.field1 = (uint32_t)arg2;
	alloca1.field6.field0 = *anon3;
	alloca1.field9.field0 = 4196080;
	uint64_t anon4 = strlen((uint8_t*)*anon3);
	alloca1.field6.field0 = 0;
	uint64_t anon5 = *anon3 + anon4 - 1;
	*anon3 = anon5;
	uint8_t* anon6 = (uint8_t*)anon5;
	*anon6 = *anon6 ^ 0x64;
	alloca1.field1.field0 = 0;
	alloca1.field9.field0 = 4196100;
	uint64_t anon7 = time(null);
	alloca1.field6.field0 = anon7 & 0xffffffff;
	alloca1.field1.field0 = 0;
	alloca1.field9.field0 = 4196109;
	srand((uint32_t)anon7);
	alloca1.field9.field0 = 4196120;
	uint64_t phi8 = alloca1.field8.field0;
	uint64_t anon9 = alloca1.field8.field0 + 12;
	if (*(uint32_t*)anon9 == 2)
	{
		alloca1.field6.field0 = *(uint64_t*)(alloca1.field2.field0 + 8);
		alloca1.field4.field0 = anon9;
		alloca1.field1.field0 = 0;
		alloca1.field5.field0 = 4198020;
		alloca1.field9.field0 = 4197546;
		anon10 = sscanf((uint8_t*)*(uint64_t*)(alloca1.field2.field0 + 8), (uint8_t*)0x400e84);
		alloca1.field1.field0 = (__zext uint64_t)anon10;
		alloca1.field9.field0 = 4197554;
		phi8 = alloca1.field8.field0;
		if (anon10 != 0)
		{
			alloca1.field1.field0 = (__zext uint64_t)*(uint32_t*)(alloca1.field8.field0 + 12);
			alloca1.field9.field0 = 4197566;
			phi8 = alloca1.field8.field0;
			if (*(uint32_t*)(alloca1.field8.field0 + 12) != 0)
			{
				uint32_t anon12 = *(uint32_t*)(alloca1.field8.field0 + 12) * *(uint32_t*)(alloca1.field8.field0 + 12);
				uint32_t anon11 = anon12 * anon12;
				alloca1.field1.field0 = (__zext uint64_t)anon11;
				int64_t anon13 = (__sext int64_t)anon11;
				alloca1.field6.field0 = anon13;
				alloca1.field9.field0 = 4197580;
				phi14 = *(uint32_t*)(alloca1.field8.field0 + 12);
				phi8 = alloca1.field8.field0;
				phi15 = anon13;
			}
		}
	}
	if (*(uint32_t*)anon9 != 2 || *(uint32_t*)anon9 == 2 && anon10 != 0 && *(uint32_t*)(alloca1.field8.field0 + 12) == 0 || *(uint32_t*)anon9 == 2 && anon10 == 0)
	{
		*(uint32_t*)(phi8 + 12) = 6;
		alloca1.field9.field0 = 4196133;
		alloca1.field6.field0 = 1296;
		phi14 = 6;
		phi15 = 1296;
	}
	alloca1.field5.field0 = 2;
	uint8_t* anon16 = calloc(phi15, 2);
	uint64_t anon17 = (uint64_t)anon16;
	alloca1.field1.field0 = anon17;
	alloca1.field14.field0 = anon17;
	alloca1.field9.field0 = 4196155;
	if (anon16 == null)
	{
		alloca1.field6.field0 = 4198023;
		alloca1.field9.field0 = 4197615;
		uint32_t anon18 = puts((uint8_t*)0x400e87);
		alloca1.field1.field0 = (__zext uint64_t)anon18;
		alloca1.field6.field0 = 1;
		alloca1.field9.field0 = 4197625;
		exit(1);
	}
	else 
	{
		uint64_t phi22;
		uint32_t phi63;
		uint64_t anon19 = (__zext uint64_t)phi14;
		alloca1.field6.field0 = anon19;
		alloca1.field16.field0 = 1;
		alloca1.field15.field0 = 1;
		alloca1.field5.field0 = anon19;
		uint32_t anon21 = phi14 * phi14;
		uint32_t anon20 = anon21 * anon21;
		alloca1.field3.field0 = (__zext uint64_t)anon20;
		alloca1.field9.field0 = 4196190;
		if (anon20 < 2)
		{
			phi22 = phi8 + 26;
		}
		else 
		{
			uint64_t anon38;
			struct { uint32_t field0; bool field1; } anon56;
			uint32_t anon57;
			uint64_t anon23 = anon19 << 8;
			alloca1.field13.field0 = anon23 & 0xffffff00;
			uint64_t anon24 = anon19 << 4;
			alloca1.field11.field0 = anon24 & 0xfffffff0;
			uint32_t anon25 = 4096 - (uint32_t)anon23;
			alloca1.field16.field0 = (__zext uint64_t)anon25;
			uint64_t anon26 = 256 - anon24;
			alloca1.field12.field0 = anon26 & 0xfffffff0;
			uint16_t* anon27 = (uint16_t*)(phi8 + 10);
			*anon27 = (uint16_t)anon25;
			uint32_t anon28 = phi14 << 12;
			alloca1.field6.field0 = (__zext uint64_t)anon28;
			alloca1.field7.field0 = 1;
			uint32_t anon29 = 16 - phi14;
			alloca1.field10.field0 = (__zext uint64_t)anon29;
			alloca1.field9.field0 = 4196248;
			uint32_t phi_in30 = 1;
			uint64_t phi31 = 1;
			do
			{
				uint32_t phi32 = phi_in30;
				uint64_t anon34 = phi31 << 1;
				uint64_t anon33 = anon34 + anon17;
				alloca1.field1.field0 = anon33;
				uint32_t anon36 = (__zext uint32_t)*(uint16_t*)(anon17 + anon34 - 2) + 1;
				uint64_t anon35 = (__zext uint64_t)anon36;
				alloca1.field4.field0 = anon35;
				alloca1.field17.field0 = anon35;
				uint32_t anon37 = (phi14 ^ anon36) & 0xf;
				alloca1.field15.field0 = (__zext uint64_t)anon37;
				alloca1.field9.field0 = 4196281;
				anon38 = phi8 + 26;
				uint16_t anon39 = (uint16_t)anon36;
				*(uint16_t*)anon38 = anon39;
				*(uint16_t*)anon33 = anon39;
				if (anon37 == 0)
				{
					uint32_t anon41 = anon36 + anon29;
					uint64_t anon40 = (__zext uint64_t)anon41;
					alloca1.field4.field0 = anon40;
					alloca1.field17.field0 = anon40;
					uint32_t anon42 = ((uint32_t)anon24 ^ anon41) & 0xf0;
					alloca1.field15.field0 = (__zext uint64_t)anon42;
					alloca1.field9.field0 = 4196302;
					uint16_t anon43 = (uint16_t)anon41;
					*(uint16_t*)anon38 = anon43;
					*(uint16_t*)anon33 = anon43;
					if (anon42 == 0)
					{
						uint64_t anon44 = (__zext uint64_t)(anon41 + (uint32_t)anon26);
						alloca1.field4.field0 = anon44;
						alloca1.field17.field0 = anon44;
						uint12_t anon46 = (uint12_t)*(uint16_t*)(anon17 + anon34 - 2) + 1 + 16 - (uint12_t)phi14 + (uint12_t)anon26;
						uint12_t anon45 = (uint12_t)anon23 ^ anon46;
						alloca1.field15.field0 = (__zext uint64_t)anon45;
						alloca1.field9.field0 = 4196322;
						uint16_t anon47 = (__zext uint16_t)anon46;
						*(uint16_t*)anon38 = anon47;
						*(uint16_t*)anon33 = anon47;
						if (anon45 < 256)
						{
							*(uint16_t*)&alloca1.field4.field0 = anon47 + *anon27;
							alloca1.field17.field0 = (__zext uint64_t)*(uint32_t*)&alloca1.field4.field0;
							uint32_t anon48 = anon28 ^ *(uint32_t*)&alloca1.field4.field0;
							alloca1.field15.field0 = (__zext uint64_t)anon48;
							alloca1.field9.field0 = 4196344;
							uint16_t anon49 = (uint16_t)*(uint32_t*)&alloca1.field4.field0;
							*(uint16_t*)anon38 = anon49;
							*(uint16_t*)anon33 = anon49;
							if ((uint16_t)anon48 < 4096)
							{
								uint32_t anon50 = *(uint32_t*)&alloca1.field4.field0 - anon28;
								alloca1.field17.field0 = (__zext uint64_t)anon50;
								alloca1.field4.field0 = 0;
								alloca1.field9.field0 = 4196352;
								*(uint16_t*)anon38 = (uint16_t)anon50;
								*(uint16_t*)anon33 = 0;
							}
						}
					}
				}
				uint16_t anon52 = (uint16_t)phi32 + 1;
				uint64_t anon51 = (__zext uint64_t)anon52;
				alloca1.field7.field0 = anon51;
				uint32_t anon55 = phi32 + 1;
				uint32_t anon54 = anon55 & 0xffff;
				uint64_t anon53 = (__zext uint64_t)anon54;
				alloca1.field15.field0 = anon53;
				anon56 = llvm.ssub.with.overflow.i32(anon20, anon54);
				alloca1.field16.field0 = anon53;
				alloca1.field9.field0 = 4196370;
				phi_in30 = anon55;
				phi31 = anon51;
				anon57 = anon20 - (__zext uint32_t)anon52;
			}
			while ((uint8_t)(anon57 >> 31) == (__zext uint8_t)anon56.field1 & anon57 != 0);
			alloca1.field9.field0 = 4196376;
			phi22 = anon38;
		}
		alloca1.field7.field0 = phi22;
		uint64_t** anon58 = (uint64_t**)&alloca1.field2.field0;
		alloca1.field3.field0 = **anon58;
		uint64_t anon59 = phi8 + 28;
		alloca1.field1.field0 = anon59;
		alloca1.field9.field0 = 4196392;
		alloca1.field9.field0 = 4196396;
		if (*(uint8_t*)**anon58 != 0)
		{
			alloca1.field7.field0 = anon59;
		}
		alloca1.field1.field0 = 0;
		alloca1.field9.field0 = 4196403;
		uint32_t anon60 = rand();
		int64_t anon61 = (__sext int64_t)anon60 % (__sext int64_t)*(uint32_t*)&alloca1.field16.field0;
		alloca1.field4.field0 = anon61 & 0xffffffff;
		int64_t anon62 = anon61 << 32;
		alloca1.field3.field0 = anon62 >> 32;
		alloca1.field1.field0 = (__zext uint64_t)*(uint16_t*)(alloca1.field14.field0 + (anon62 >> 31));
		alloca1.field9.field0 = 4196419;
		**(uint16_t**)&alloca1.field7.field0 = *(uint16_t*)(alloca1.field14.field0 + (anon62 >> 31));
		uint32_t* anon64 = (uint32_t*)&alloca1.field15.field0;
		phi63 = *anon64;
		do
		{
			uint32_t* anon74;
			while (true)
			{
				alloca1.field1.field0 = 0;
				alloca1.field5.field0 = (__zext uint64_t)phi63;
				alloca1.field6.field0 = 4198037;
				alloca1.field9.field0 = 4196434;
				printf((uint8_t*)0x400e95);
				alloca1.field1.field0 = **anon58;
				alloca1.field9.field0 = 4196440;
				alloca1.field9.field0 = 4196446;
				if (*(uint8_t*)**anon58 == 0)
				{
					if (*(uint8_t*)**anon58 != 0)
					{
						alloca1.field9.field0 = 4196451;
						alloca1.field5.field0 = alloca1.field8.field0 + 28;
						alloca1.field1.field0 = 0;
						alloca1.field6.field0 = 4198058;
						alloca1.field9.field0 = 4196463;
						scanf((uint8_t*)0x400eaa);
						alloca1.field1.field0 = **anon58;
						alloca1.field9.field0 = 4196469;
						alloca1.field9.field0 = 4196475;
						if (*(uint8_t*)**anon58 != 0)
						{
							break;
						}
					}
					if (*(uint8_t*)**anon58 == 0 && (*(uint8_t*)**anon58 != 0))
					{
						alloca1.field9.field0 = 4196482;
						uint16_t* anon65 = (uint16_t*)(alloca1.field8.field0 + 28);
						*anon65 = *anon65 - 4369;
					}
				}
				else 
				{
					alloca1.field1.field0 = 0;
					alloca1.field6.field0 = 4198052;
					alloca1.field5.field0 = (__zext uint64_t)*(uint16_t*)(alloca1.field8.field0 + 28) + 4369;
					alloca1.field9.field0 = 4197498;
					printf((uint8_t*)0x400ea4);
					alloca1.field1.field0 = **anon58;
					alloca1.field9.field0 = 4197504;
					alloca1.field9.field0 = 4197510;
					if (*(uint8_t*)**anon58 == 0)
					{
						alloca1.field9.field0 = 4197515;
					}
				}
				if (*(uint8_t*)**anon58 != 0 && *(uint8_t*)**anon58 == 0 && *(uint8_t*)**anon58 == 0 || *(uint8_t*)**anon58 == 0 && *(uint8_t*)**anon58 == 0 || *(uint8_t*)**anon58 != 0 && *(uint8_t*)**anon58 != 0)
				{
					alloca1.field1.field0 = 0;
					alloca1.field6.field0 = 4198062;
					alloca1.field9.field0 = 4196494;
					printf((uint8_t*)0x400eae);
					alloca1.field1.field0 = **anon58;
					alloca1.field9.field0 = 4196500;
					alloca1.field9.field0 = 4196506;
				}
				if (*(uint8_t*)**anon58 == 0)
				{
					if (*(uint8_t*)**anon58 != 0 && *(uint8_t*)**anon58 == 0 && *(uint8_t*)**anon58 == 0 || *(uint8_t*)**anon58 == 0 && *(uint8_t*)**anon58 == 0 || *(uint8_t*)**anon58 != 0 && *(uint8_t*)**anon58 != 0)
					{
						uint32_t phi69;
						uint32_t* anon83;
						uint16_t* anon93;
						uint32_t* anon101;
						uint16_t phi114;
						uint16_t phi135;
						uint8_t* phi148;
						uint32_t phi149;
						uint32_t phi150;
						alloca1.field4.field0 = (__zext uint64_t)*(uint16_t*)(alloca1.field8.field0 + 26);
						alloca1.field1.field0 = (__zext uint64_t)*(uint16_t*)(alloca1.field8.field0 + 28);
						alloca1.field3.field0 = 0;
						uint16_t anon66 = *(uint16_t*)(alloca1.field8.field0 + 28) ^ *(uint16_t*)(alloca1.field8.field0 + 26);
						alloca1.field5.field0 = (__zext uint64_t)anon66;
						uint8_t* anon67 = (uint8_t*)&alloca1.field5.field0;
						*anon67 = (uint8_t)anon66 & 0xf;
						alloca1.field9.field0 = 4196528;
						uint16_t phi68 = *(uint16_t*)(alloca1.field8.field0 + 28);
						uint32_t anon70 = (__zext uint32_t)*(uint16_t*)(alloca1.field8.field0 + 28);
						phi69 = anon70;
						uint8_t phi71 = (uint8_t)*(uint16_t*)(alloca1.field8.field0 + 28);
						uint32_t phi72 = 0;
						if ((anon66 & 0xf) == 0)
						{
							uint32_t anon73 = anon70 | 0xf;
							alloca1.field1.field0 = (__zext uint64_t)anon73;
							alloca1.field9.field0 = 4196533;
							*(uint8_t*)&alloca1.field3.field0 = 1;
							phi68 = (uint16_t)anon73;
							phi69 = anon73;
							phi71 = (uint8_t)anon73;
							anon74 = (uint32_t*)&alloca1.field3.field0;
							phi72 = *anon74;
						}
						uint16_t phi_in75 = phi68;
						uint32_t phi76 = phi69;
						alloca1.field5.field0 = (__zext uint64_t)(phi72 & 0xfffffff);
						alloca1.field3.field0 = 0;
						uint32_t anon78 = (__zext uint32_t)*(uint16_t*)(alloca1.field8.field0 + 26);
						uint32_t anon77 = anon78 ^ phi76;
						alloca1.field6.field0 = (__zext uint64_t)anon77;
						uint8_t* anon79 = (uint8_t*)&alloca1.field6.field0;
						uint8_t anon80 = (uint8_t)anon77 & 0xf0;
						*anon79 = anon80;
						alloca1.field9.field0 = 4196547;
						uint16_t phi81 = phi_in75;
						uint32_t phi82 = 0;
						if (anon80 == 0)
						{
							*(uint8_t*)&alloca1.field1.field0 = phi71 | 0xf0;
							alloca1.field9.field0 = 4196551;
							*(uint8_t*)&alloca1.field3.field0 = 1;
							anon83 = (uint32_t*)&alloca1.field1.field0;
							phi81 = (uint16_t)*anon83;
							phi76 = *anon83;
							phi82 = *anon74;
						}
						uint28_t anon84 = (uint28_t)phi72 + (uint28_t)phi82;
						alloca1.field5.field0 = (__zext uint64_t)anon84;
						alloca1.field3.field0 = 0;
						uint12_t anon86 = (uint12_t)*(uint16_t*)(alloca1.field8.field0 + 26);
						uint12_t anon85 = anon86 ^ (uint12_t)phi76;
						alloca1.field6.field0 = (__zext uint64_t)anon85;
						alloca1.field9.field0 = 4196566;
						uint32_t phi87 = 0;
						uint32_t phi88 = phi76 & 0xfff;
						if (anon85 < 256)
						{
							((uint8_t*)&alloca1.field1.field0)[1] = (uint8_t)(*(uint16_t*)(alloca1.field8.field0 + 28) >> 8) | 0xf;
							alloca1.field9.field0 = 4196571;
							*(uint8_t*)&alloca1.field3.field0 = 1;
							phi81 = (uint16_t)*anon83;
							phi87 = *anon74;
							phi88 = *anon83;
						}
						uint28_t anon89 = anon84 + (uint28_t)phi87;
						alloca1.field5.field0 = (__zext uint64_t)anon89;
						alloca1.field3.field0 = 0;
						uint32_t anon90 = anon78 ^ phi88;
						alloca1.field6.field0 = (__zext uint64_t)anon90;
						alloca1.field9.field0 = 4196586;
						uint32_t phi91 = 0;
						uint16_t phi92 = phi81;
						if ((uint16_t)anon90 < 4096)
						{
							anon93 = (uint16_t*)&alloca1.field1.field0;
							uint16_t anon94 = phi81 | 0xf000;
							*anon93 = anon94;
							alloca1.field9.field0 = 4196592;
							*(uint8_t*)&alloca1.field3.field0 = 1;
							phi91 = *anon74;
							phi92 = anon94;
						}
						*anon93 = phi92 >> 12 | phi92 << 4;
						alloca1.field5.field0 = 0;
						uint64_t anon95 = (__zext uint64_t)((uint28_t)phi91 + anon89) << 4;
						alloca1.field3.field0 = anon95;
						uint32_t anon96 = anon78 ^ *anon83;
						alloca1.field6.field0 = (__zext uint64_t)anon96;
						*anon79 = (uint8_t)anon96 & 0xf;
						alloca1.field9.field0 = 4196613;
						uint8_t phi97 = (uint8_t)(phi92 >> 4);
						uint32_t phi98 = *anon83;
						uint32_t phi99 = 0;
						if ((anon96 & 0xf) == 0)
						{
							uint32_t anon100 = *anon83 | 0xf;
							alloca1.field1.field0 = (__zext uint64_t)anon100;
							alloca1.field9.field0 = 4196619;
							*anon67 = 1;
							phi97 = (uint8_t)(*anon83 >> 8);
							phi98 = anon100;
							anon101 = (uint32_t*)&alloca1.field5.field0;
							phi99 = *anon101;
						}
						uint16_t anon102 = (uint16_t)anon95 + (uint16_t)phi99;
						alloca1.field3.field0 = (__zext uint64_t)anon102;
						alloca1.field5.field0 = 0;
						uint32_t anon103 = anon78 ^ phi98;
						alloca1.field6.field0 = (__zext uint64_t)anon103;
						uint8_t anon104 = (uint8_t)anon103 & 0xf0;
						*anon79 = anon104;
						alloca1.field9.field0 = 4196633;
						uint32_t phi105 = phi98;
						uint32_t phi106 = 0;
						if (anon104 == 0)
						{
							*(uint8_t*)&alloca1.field1.field0 = (uint8_t)phi98 | 0xf0;
							alloca1.field9.field0 = 4196638;
							*anon67 = 1;
							phi105 = *anon83;
							phi106 = *anon101;
						}
						uint16_t anon107 = (uint16_t)phi106 + anon102;
						alloca1.field5.field0 = (__zext uint64_t)anon107;
						alloca1.field3.field0 = 0;
						uint12_t anon108 = anon86 ^ (uint12_t)phi105;
						alloca1.field6.field0 = (__zext uint64_t)anon108;
						alloca1.field9.field0 = 4196653;
						uint32_t phi109 = phi105 & 0xfff;
						uint32_t phi110 = 0;
						if (anon108 < 256)
						{
							((uint8_t*)&alloca1.field1.field0)[1] = phi97 | 0xf;
							alloca1.field9.field0 = 4196658;
							*(uint8_t*)&alloca1.field3.field0 = 1;
							phi109 = *anon83;
							phi110 = *anon74;
						}
						uint16_t anon111 = anon107 + (uint16_t)phi110;
						alloca1.field5.field0 = (__zext uint64_t)anon111;
						alloca1.field3.field0 = 0;
						uint32_t anon112 = anon78 ^ phi109;
						alloca1.field6.field0 = (__zext uint64_t)anon112;
						alloca1.field9.field0 = 4196673;
						uint32_t phi113 = 0;
						uint16_t anon115 = (uint16_t)phi109;
						phi114 = anon115;
						if ((uint16_t)anon112 < 4096)
						{
							uint16_t anon116 = anon115 | 0xf000;
							*anon93 = anon116;
							alloca1.field9.field0 = 4196679;
							*(uint8_t*)&alloca1.field3.field0 = 1;
							phi113 = *anon74;
							phi114 = anon116;
						}
						*anon93 = phi114 >> 12 | phi114 << 4;
						uint16_t anon117 = anon111 + (uint16_t)phi113;
						alloca1.field5.field0 = (__zext uint64_t)anon117;
						alloca1.field3.field0 = 0;
						uint32_t anon118 = anon78 ^ *anon83;
						alloca1.field6.field0 = (__zext uint64_t)anon118;
						*anon79 = (uint8_t)anon118 & 0xf;
						alloca1.field9.field0 = 4196697;
						uint32_t phi119 = *anon83;
						uint8_t phi120 = (uint8_t)(phi114 >> 4);
						uint32_t phi121 = 0;
						if ((anon118 & 0xf) == 0)
						{
							uint32_t anon122 = *anon83 | 0xf;
							alloca1.field1.field0 = (__zext uint64_t)anon122;
							alloca1.field9.field0 = 4196702;
							*(uint8_t*)&alloca1.field3.field0 = 1;
							phi119 = anon122;
							phi120 = (uint8_t)(*anon83 >> 8);
							phi121 = *anon74;
						}
						uint16_t anon123 = anon117 + (uint16_t)phi121;
						alloca1.field5.field0 = (__zext uint64_t)anon123;
						alloca1.field3.field0 = 0;
						uint32_t anon124 = anon78 ^ phi119;
						alloca1.field6.field0 = (__zext uint64_t)anon124;
						uint8_t anon125 = (uint8_t)anon124 & 0xf0;
						*anon79 = anon125;
						alloca1.field9.field0 = 4196716;
						uint32_t phi126 = phi119;
						uint32_t phi127 = 0;
						if (anon125 == 0)
						{
							*(uint8_t*)&alloca1.field1.field0 = (uint8_t)phi119 | 0xf0;
							alloca1.field9.field0 = 4196720;
							*(uint8_t*)&alloca1.field3.field0 = 1;
							phi126 = *anon83;
							phi127 = *anon74;
						}
						uint16_t anon128 = anon123 + (uint16_t)phi127;
						alloca1.field5.field0 = (__zext uint64_t)anon128;
						alloca1.field3.field0 = 0;
						uint12_t anon129 = anon86 ^ (uint12_t)phi126;
						alloca1.field6.field0 = (__zext uint64_t)anon129;
						alloca1.field9.field0 = 4196735;
						uint32_t phi130 = phi126 & 0xfff;
						uint32_t phi131 = 0;
						if (anon129 < 256)
						{
							((uint8_t*)&alloca1.field1.field0)[1] = phi120 | 0xf;
							alloca1.field9.field0 = 4196740;
							*(uint8_t*)&alloca1.field3.field0 = 1;
							phi130 = *anon83;
							phi131 = *anon74;
						}
						uint16_t anon132 = anon128 + (uint16_t)phi131;
						alloca1.field5.field0 = (__zext uint64_t)anon132;
						alloca1.field3.field0 = 0;
						uint32_t anon133 = anon78 ^ phi130;
						alloca1.field6.field0 = (__zext uint64_t)anon133;
						alloca1.field9.field0 = 4196755;
						uint32_t phi134 = 0;
						uint16_t anon136 = (uint16_t)phi130;
						phi135 = anon136;
						if ((uint16_t)anon133 < 4096)
						{
							uint16_t anon137 = anon136 | 0xf000;
							*anon93 = anon137;
							alloca1.field9.field0 = 4196761;
							*(uint8_t*)&alloca1.field3.field0 = 1;
							phi134 = *anon74;
							phi135 = anon137;
						}
						*anon93 = phi135 >> 12 | phi135 << 4;
						uint16_t anon138 = anon132 + (uint16_t)phi134;
						alloca1.field5.field0 = (__zext uint64_t)anon138;
						alloca1.field3.field0 = 0;
						uint32_t anon139 = anon78 ^ *anon83;
						alloca1.field6.field0 = (__zext uint64_t)anon139;
						*anon79 = (uint8_t)anon139 & 0xf;
						alloca1.field9.field0 = 4196779;
						uint32_t phi140 = *anon83;
						uint8_t phi141 = (uint8_t)(phi135 >> 4);
						uint32_t phi142 = 0;
						if ((anon139 & 0xf) == 0)
						{
							uint32_t anon143 = *anon83 | 0xf;
							alloca1.field1.field0 = (__zext uint64_t)anon143;
							alloca1.field9.field0 = 4196784;
							*(uint8_t*)&alloca1.field3.field0 = 1;
							phi140 = anon143;
							phi141 = (uint8_t)(*anon83 >> 8);
							phi142 = *anon74;
						}
						uint16_t anon144 = anon138 + (uint16_t)phi142;
						alloca1.field5.field0 = (__zext uint64_t)anon144;
						alloca1.field3.field0 = 0;
						uint32_t anon145 = anon78 ^ phi140;
						alloca1.field6.field0 = (__zext uint64_t)anon145;
						uint8_t anon146 = (uint8_t)anon145 & 0xf0;
						*anon79 = anon146;
						alloca1.field9.field0 = 4196798;
						if (anon146 == 0)
						{
							uint8_t* anon147 = (uint8_t*)&alloca1.field1.field0;
							*anon147 = (uint8_t)phi140 | 0xf0;
							alloca1.field9.field0 = 4196802;
							*(uint8_t*)&alloca1.field3.field0 = 1;
							phi148 = anon147;
							phi149 = *anon83;
							phi150 = *anon74;
						}
						else 
						{
							phi148 = (uint8_t*)&alloca1.field1.field0;
							phi149 = phi140;
							phi150 = 0;
						}
						uint16_t anon151 = anon144 + (uint16_t)phi150;
						alloca1.field5.field0 = (__zext uint64_t)anon151;
						alloca1.field3.field0 = 0;
						uint12_t anon152 = anon86 ^ (uint12_t)phi149;
						alloca1.field6.field0 = (__zext uint64_t)anon152;
						alloca1.field9.field0 = 4196817;
						uint32_t phi153 = 0;
						uint32_t phi154 = phi149;
						if (anon152 < 256)
						{
							phi148[1] = phi141 | 0xf;
							alloca1.field9.field0 = 4196822;
							*(uint8_t*)&alloca1.field3.field0 = 1;
							phi153 = *anon74;
							phi154 = *anon83;
						}
						uint16_t anon155 = (uint16_t)phi153 + anon151;
						alloca1.field3.field0 = (__zext uint64_t)anon155;
						alloca1.field6.field0 = 4198067;
						*phi148 = (__zext uint8_t)((*(uint16_t*)(alloca1.field8.field0 + 26) ^ (uint16_t)phi154) < 4096);
						uint16_t anon156 = (__zext uint16_t)((*(uint16_t*)(alloca1.field8.field0 + 26) ^ (uint16_t)phi154) < 4096) + anon155;
						*(uint16_t*)(alloca1.field8.field0 + 30) = anon156;
						alloca1.field5.field0 = (__zext uint64_t)anon156;
						alloca1.field1.field0 = 0;
						alloca1.field9.field0 = 4196858;
						uint32_t anon157 = printf((uint8_t*)0x400eb3);
						alloca1.field1.field0 = (__zext uint64_t)anon157;
						alloca1.field9.field0 = 4196864;
						break;
					}
				}
				else if (*(uint8_t*)**anon58 != 0 && *(uint8_t*)**anon58 == 0 && *(uint8_t*)**anon58 == 0 || *(uint8_t*)**anon58 == 0 && *(uint8_t*)**anon58 == 0 || *(uint8_t*)**anon58 != 0 && *(uint8_t*)**anon58 != 0)
				{
					alloca1.field5.field0 = alloca1.field8.field0 + 30;
					alloca1.field9.field0 = 4197525;
				}
			}
			uint32_t* anon158 = (uint32_t*)(alloca1.field8.field0 + 12);
			*anon158 = 0;
			alloca1.field9.field0 = 4196881;
			if (*anon64 != 0)
			{
				uint16_t phi278;
				uint64_t anon159 = (__zext uint64_t)*(uint16_t*)(alloca1.field8.field0 + 28);
				alloca1.field1.field0 = anon159;
				uint64_t anon160 = alloca1.field15.field0 + 4294967295 & 0xffffffff;
				alloca1.field3.field0 = anon160;
				uint16_t* anon162 = (uint16_t*)(alloca1.field8.field0 + 26);
				uint64_t anon161 = (__zext uint64_t)*anon162;
				alloca1.field4.field0 = anon161;
				alloca1.field11.field0 = (__zext uint64_t)*(uint16_t*)(alloca1.field8.field0 + 30);
				alloca1.field10.field0 = alloca1.field14.field0;
				alloca1.field7.field0 = 0;
				uint64_t anon163 = anon160 + anon160 + 2 + alloca1.field14.field0;
				alloca1.field5.field0 = anon163;
				uint16_t anon165 = *(uint16_t*)(alloca1.field8.field0 + 28) | 0xf;
				uint64_t anon164 = (__zext uint64_t)anon165;
				alloca1.field12.field0 = anon164;
				alloca1.field9.field0 = 4196926;
				uint32_t phi_in166 = 0;
				uint16_t phi_in167 = 0;
				uint16_t phi_in168 = 0;
				uint64_t phi_in169 = alloca1.field14.field0;
				while (true)
				{
					uint16_t phi178;
					uint16_t phi179;
					uint32_t phi180;
					uint32_t phi181;
					uint8_t phi182;
					uint32_t anon187;
					uint32_t* phi189;
					uint32_t phi191;
					uint16_t phi192;
					uint32_t phi193;
					uint16_t phi196;
					uint16_t* anon198;
					uint32_t* anon200;
					uint8_t phi206;
					uint16_t phi223;
					uint8_t phi231;
					uint16_t phi249;
					uint8_t phi257;
					uint8_t* phi265;
					uint32_t phi266;
					uint32_t phi267;
					uint32_t phi170 = phi_in166;
					uint16_t phi171 = phi_in167;
					uint16_t phi172 = phi_in168;
					uint64_t phi173 = phi_in169;
					alloca1.field6.field0 = anon161;
					uint64_t anon174 = (__zext uint64_t)*(uint16_t*)phi173;
					alloca1.field4.field0 = anon174;
					uint16_t anon175 = *(uint16_t*)(alloca1.field8.field0 + 28) ^ *(uint16_t*)phi173;
					alloca1.field16.field0 = (__zext uint64_t)anon175;
					alloca1.field9.field0 = 4197376;
					uint16_t anon176 = anon175 >> 8;
					if ((anon176 & 0xf) == 0)
					{
						alloca1.field3.field0 = anon164;
						alloca1.field17.field0 = 2;
						uint16_t anon177 = anon165 ^ *(uint16_t*)phi173;
						alloca1.field16.field0 = (__zext uint64_t)anon177;
						alloca1.field9.field0 = 4196949;
						alloca1.field13.field0 = 1;
						phi178 = anon165;
						phi179 = anon177;
						phi180 = 1;
						phi181 = 2;
						phi182 = (uint8_t)(anon177 >> 8);
					}
					else 
					{
						alloca1.field3.field0 = anon159;
						alloca1.field17.field0 = 1;
						alloca1.field13.field0 = 0;
						alloca1.field9.field0 = 4197392;
						phi178 = *(uint16_t*)(alloca1.field8.field0 + 28);
						phi179 = anon175;
						phi180 = 0;
						phi181 = 1;
						phi182 = (uint8_t)anon176 & 0xf;
					}
					uint16_t phi183 = phi179;
					uint32_t phi184 = phi180;
					alloca1.field9.field0 = 4196955;
					uint32_t phi185 = (__zext uint32_t)phi178;
					if (phi182 < 16)
					{
						*(uint8_t*)&alloca1.field3.field0 = (uint8_t)phi178 | 0xf0;
						alloca1.field13.field0 = (__zext uint64_t)phi181;
						alloca1.field9.field0 = 4196967;
						anon187 = (__zext uint32_t)*(uint16_t*)phi173;
						uint32_t anon186 = anon187 ^ *anon74;
						alloca1.field16.field0 = (__zext uint64_t)anon186;
						phi185 = *anon74;
						phi183 = (uint16_t)anon186;
						phi184 = phi181;
					}
					alloca1.field17.field0 = 0;
					alloca1.field9.field0 = 4196978;
					if ((phi183 & 0xf00) == 0)
					{
						((uint8_t*)&alloca1.field3.field0)[1] = (uint8_t)(phi178 >> 8) | 0xf;
						((uint8_t*)&alloca1.field17.field0)[1] = 1;
						alloca1.field9.field0 = 4196990;
						uint32_t anon188 = anon187 ^ *anon74;
						alloca1.field16.field0 = (__zext uint64_t)anon188;
						uint32_t* anon190 = (uint32_t*)&alloca1.field17.field0;
						phi189 = anon190;
						phi191 = *anon74;
						phi192 = (uint16_t)anon188;
						phi193 = *anon190;
					}
					else 
					{
						phi189 = (uint32_t*)&alloca1.field17.field0;
						phi191 = phi185;
						phi192 = phi183 & 0xfff;
						phi193 = 0;
					}
					uint28_t anon194 = (uint28_t)phi193 + (uint28_t)phi184;
					alloca1.field17.field0 = (__zext uint64_t)anon194;
					alloca1.field13.field0 = 0;
					alloca1.field9.field0 = 4197004;
					uint32_t phi195 = 0;
					uint16_t anon197 = (uint16_t)phi191;
					phi196 = anon197;
					if (phi192 < 4096)
					{
						anon198 = (uint16_t*)&alloca1.field3.field0;
						uint16_t anon199 = anon197 | 0xf000;
						*anon198 = anon199;
						alloca1.field9.field0 = 4197012;
						((uint8_t*)&alloca1.field13.field0)[1] = 1;
						anon200 = (uint32_t*)&alloca1.field13.field0;
						phi195 = *anon200;
						phi196 = anon199;
					}
					*anon198 = phi196 >> 12 | phi196 << 4;
					alloca1.field17.field0 = 0;
					uint32_t anon201 = (__zext uint32_t)((uint28_t)phi195 + anon194) << 4;
					alloca1.field13.field0 = (__zext uint64_t)anon201;
					uint32_t anon202 = anon187 ^ *anon74;
					alloca1.field16.field0 = (__zext uint64_t)anon202;
					alloca1.field9.field0 = 4197038;
					uint8_t phi203 = (uint8_t)(phi196 >> 4);
					uint32_t phi204 = *anon74;
					uint32_t phi205 = anon202;
					uint32_t anon207 = anon202 >> 8;
					phi206 = (uint8_t)anon207 & 0xf;
					uint32_t phi208 = 0;
					if ((anon207 & 0xf) == 0)
					{
						uint32_t anon209 = *anon74 | 0xf;
						alloca1.field3.field0 = (__zext uint64_t)anon209;
						((uint8_t*)&alloca1.field17.field0)[1] = 1;
						alloca1.field9.field0 = 4197050;
						uint32_t anon210 = anon187 ^ anon209;
						alloca1.field16.field0 = (__zext uint64_t)anon210;
						phi203 = (uint8_t)(*anon74 >> 8);
						phi204 = anon209;
						phi205 = anon210;
						phi206 = (uint8_t)(anon210 >> 8);
						phi208 = *phi189;
					}
					uint32_t phi211 = phi204;
					uint32_t anon212 = anon201 + phi208;
					alloca1.field13.field0 = (__zext uint64_t)anon212;
					alloca1.field17.field0 = 0;
					alloca1.field9.field0 = 4197062;
					uint32_t phi213 = 0;
					if (phi206 < 16)
					{
						*(uint8_t*)&alloca1.field3.field0 = (uint8_t)phi211 | 0xf0;
						((uint8_t*)&alloca1.field17.field0)[1] = 1;
						alloca1.field9.field0 = 4197074;
						uint32_t anon214 = anon187 ^ *anon74;
						alloca1.field16.field0 = (__zext uint64_t)anon214;
						phi211 = *anon74;
						phi205 = anon214;
						phi213 = *phi189;
					}
					uint32_t phi_in215 = phi211;
					uint32_t anon216 = anon212 + phi213;
					alloca1.field13.field0 = (__zext uint64_t)anon216;
					alloca1.field17.field0 = 0;
					alloca1.field9.field0 = 4197088;
					uint32_t phi217 = phi_in215;
					uint16_t phi218 = (uint16_t)phi205 & 0xfff;
					uint32_t phi219 = 0;
					if ((phi205 & 0xf00) == 0)
					{
						((uint8_t*)&alloca1.field3.field0)[1] = phi203 | 0xf;
						((uint8_t*)&alloca1.field17.field0)[1] = 1;
						alloca1.field9.field0 = 4197100;
						uint32_t anon220 = anon187 ^ *anon74;
						alloca1.field16.field0 = (__zext uint64_t)anon220;
						phi217 = *anon74;
						phi218 = (uint16_t)anon220;
						phi219 = *phi189;
					}
					uint32_t anon221 = phi219 + anon216;
					alloca1.field17.field0 = (__zext uint64_t)anon221;
					alloca1.field13.field0 = 0;
					alloca1.field9.field0 = 4197114;
					uint32_t phi222 = 0;
					uint16_t anon224 = (uint16_t)phi217;
					phi223 = anon224;
					if (phi218 < 4096)
					{
						uint16_t anon225 = anon224 | 0xf000;
						*anon198 = anon225;
						alloca1.field9.field0 = 4197122;
						((uint8_t*)&alloca1.field13.field0)[1] = 1;
						phi222 = *anon200;
						phi223 = anon225;
					}
					*anon198 = phi223 >> 12 | phi223 << 4;
					uint32_t anon226 = phi222 + anon221;
					alloca1.field13.field0 = (__zext uint64_t)anon226;
					alloca1.field17.field0 = 0;
					uint32_t anon227 = anon187 ^ *anon74;
					alloca1.field16.field0 = (__zext uint64_t)anon227;
					alloca1.field9.field0 = 4197144;
					uint32_t phi228 = *anon74;
					uint32_t phi229 = anon227;
					uint8_t phi230 = (uint8_t)(phi223 >> 4);
					uint32_t anon232 = anon227 >> 8;
					phi231 = (uint8_t)anon232 & 0xf;
					uint32_t phi233 = 0;
					if ((anon232 & 0xf) == 0)
					{
						uint32_t anon234 = *anon74 | 0xf;
						alloca1.field3.field0 = (__zext uint64_t)anon234;
						((uint8_t*)&alloca1.field17.field0)[1] = 1;
						alloca1.field9.field0 = 4197156;
						uint32_t anon235 = anon187 ^ anon234;
						alloca1.field16.field0 = (__zext uint64_t)anon235;
						phi228 = anon234;
						phi229 = anon235;
						phi230 = (uint8_t)(*anon74 >> 8);
						phi231 = (uint8_t)(anon235 >> 8);
						phi233 = *phi189;
					}
					uint32_t phi236 = phi229;
					uint32_t anon237 = anon226 + phi233;
					alloca1.field13.field0 = (__zext uint64_t)anon237;
					alloca1.field17.field0 = 0;
					alloca1.field9.field0 = 4197168;
					uint32_t phi238 = phi228;
					uint32_t phi239 = 0;
					if (phi231 < 16)
					{
						*(uint8_t*)&alloca1.field3.field0 = (uint8_t)phi228 | 0xf0;
						((uint8_t*)&alloca1.field17.field0)[1] = 1;
						alloca1.field9.field0 = 4197180;
						uint32_t anon240 = anon187 ^ *anon74;
						alloca1.field16.field0 = (__zext uint64_t)anon240;
						phi238 = *anon74;
						phi236 = anon240;
						phi239 = *phi189;
					}
					uint32_t phi_in241 = phi238;
					uint32_t anon242 = phi239 + anon237;
					alloca1.field17.field0 = (__zext uint64_t)anon242;
					alloca1.field13.field0 = 0;
					alloca1.field9.field0 = 4197194;
					uint32_t phi243 = phi_in241;
					uint16_t phi244 = (uint16_t)phi236 & 0xfff;
					uint32_t phi245 = 0;
					if ((phi236 & 0xf00) == 0)
					{
						((uint8_t*)&alloca1.field3.field0)[1] = phi230 | 0xf;
						((uint8_t*)&alloca1.field13.field0)[1] = 1;
						alloca1.field9.field0 = 4197206;
						uint32_t anon246 = anon187 ^ *anon74;
						alloca1.field16.field0 = (__zext uint64_t)anon246;
						phi243 = *anon74;
						phi244 = (uint16_t)anon246;
						phi245 = *anon200;
					}
					uint32_t anon247 = phi245 + anon242;
					alloca1.field13.field0 = (__zext uint64_t)anon247;
					alloca1.field17.field0 = 0;
					alloca1.field9.field0 = 4197220;
					uint64_t phi248 = 0;
					uint16_t anon250 = (uint16_t)phi243;
					phi249 = anon250;
					if (phi244 < 4096)
					{
						uint16_t anon251 = anon250 | 0xf000;
						*anon198 = anon251;
						alloca1.field9.field0 = 4197228;
						((uint8_t*)&alloca1.field17.field0)[1] = 1;
						phi248 = alloca1.field17.field0;
						phi249 = anon251;
					}
					*anon198 = phi249 >> 12 | phi249 << 4;
					uint32_t anon252 = anon247 + (uint32_t)phi248;
					alloca1.field16.field0 = (__zext uint64_t)anon252;
					alloca1.field17.field0 = 0;
					uint32_t anon253 = anon187 ^ *anon74;
					alloca1.field13.field0 = (__zext uint64_t)anon253;
					alloca1.field9.field0 = 4197251;
					uint32_t phi254 = anon253;
					uint8_t phi255 = (uint8_t)(phi249 >> 4);
					uint32_t phi256 = *anon74;
					uint32_t anon258 = anon253 >> 8;
					phi257 = (uint8_t)anon258 & 0xf;
					uint32_t phi259 = 0;
					if ((anon258 & 0xf) == 0)
					{
						uint32_t anon260 = *anon74 | 0xf;
						alloca1.field3.field0 = (__zext uint64_t)anon260;
						((uint8_t*)&alloca1.field17.field0)[1] = 1;
						alloca1.field9.field0 = 4197263;
						uint32_t anon261 = anon187 ^ anon260;
						alloca1.field13.field0 = (__zext uint64_t)anon261;
						phi254 = anon261;
						phi255 = (uint8_t)(*anon74 >> 8);
						phi256 = anon260;
						phi257 = (uint8_t)(anon261 >> 8);
						phi259 = *phi189;
					}
					uint32_t anon262 = anon252 + phi259;
					alloca1.field16.field0 = (__zext uint64_t)anon262;
					alloca1.field17.field0 = 0;
					alloca1.field9.field0 = 4197275;
					if (phi257 < 16)
					{
						uint8_t* anon263 = (uint8_t*)&alloca1.field3.field0;
						*anon263 = (uint8_t)phi256 | 0xf0;
						((uint8_t*)&alloca1.field17.field0)[1] = 1;
						alloca1.field9.field0 = 4197287;
						uint32_t anon264 = anon187 ^ *anon74;
						alloca1.field13.field0 = (__zext uint64_t)anon264;
						phi265 = anon263;
						phi266 = anon264;
						phi267 = *phi189;
					}
					else 
					{
						phi265 = (uint8_t*)&alloca1.field3.field0;
						phi266 = phi254;
						phi267 = 0;
					}
					uint32_t anon268 = anon262 + phi267;
					alloca1.field16.field0 = (__zext uint64_t)anon268;
					alloca1.field17.field0 = 0;
					alloca1.field9.field0 = 4197301;
					uint32_t phi269 = phi266 & 0xfff;
					uint32_t phi270 = 0;
					if ((phi266 & 0xf00) == 0)
					{
						phi265[1] = phi255 | 0xf;
						((uint8_t*)&alloca1.field17.field0)[1] = 1;
						uint32_t anon272 = anon187 ^ *anon74;
						uint64_t anon271 = (__zext uint64_t)anon272;
						alloca1.field3.field0 = anon271;
						alloca1.field9.field0 = 4197312;
						alloca1.field13.field0 = anon271;
						phi269 = anon272;
						phi270 = *phi189;
					}
					uint32_t anon273 = anon268 + phi270;
					alloca1.field16.field0 = (__zext uint64_t)anon273;
					alloca1.field3.field0 = 0;
					alloca1.field6.field0 = anon174;
					alloca1.field4.field0 = anon161;
					*phi265 = (__zext uint8_t)((uint16_t)phi269 < 4096);
					uint32_t anon274 = *anon74 + anon273;
					alloca1.field3.field0 = (__zext uint64_t)anon274;
					alloca1.field9.field0 = 4197345;
					uint64_t anon275 = phi173 + 2;
					alloca1.field10.field0 = anon275;
					if ((uint16_t)anon274 == *(uint16_t*)(alloca1.field8.field0 + 30))
					{
						uint64_t anon276 = (__zext uint64_t)phi171;
						alloca1.field3.field0 = anon276;
						uint32_t anon277 = phi170 + 1;
						alloca1.field7.field0 = (__zext uint64_t)anon277;
						*(uint16_t*)(alloca1.field14.field0 + (anon276 << 1)) = *(uint16_t*)phi173;
						alloca1.field9.field0 = 4197412;
						uint16_t anon279 = (uint16_t)anon277;
						phi278 = anon279;
						phi_in166 = anon277;
						phi_in167 = anon279;
						phi_in168 = anon279;
						phi_in169 = anon275;
						if (anon275 == anon163)
						{
							break;
						}
					}
					else 
					{
						alloca1.field9.field0 = 4197354;
						phi278 = phi172;
						phi_in166 = phi170;
						phi_in167 = phi171;
						phi_in168 = phi172;
						phi_in169 = anon275;
						if (anon275 == anon163)
						{
							break;
						}
					}
				}
				*anon158 = (uint32_t)alloca1.field15.field0;
				*anon162 = *anon162;
				alloca1.field9.field0 = 4197431;
				if (phi278 == 0)
				{
					break;
				}
				else 
				{
					alloca1.field9.field0 = 4197442;
					if (*(uint16_t*)(alloca1.field8.field0 + 30) == 64)
					{
						break;
					}
					else 
					{
						alloca1.field1.field0 = 0;
						alloca1.field15.field0 = (__zext uint64_t)phi278;
						alloca1.field9.field0 = 4197453;
						uint32_t anon280 = rand();
						int64_t anon282 = (__sext int64_t)anon280 % (__sext int64_t)*anon64 << 32;
						int64_t anon281 = anon282 >> 32;
						alloca1.field4.field0 = anon281;
						uint64_t anon283 = (__zext uint64_t)*(uint16_t*)(anon281 + (anon282 >> 31));
						alloca1.field1.field0 = anon283;
						*(uint16_t*)(anon283 + 28) = *(uint16_t*)(anon281 + (anon282 >> 31));
						alloca1.field9.field0 = 4197475;
						phi63 = *anon64;
					}
				}
			}
		}
		while (*anon64 != 0);
	}
	alloca1.field6.field0 = 10;
	alloca1.field9.field0 = 4197590;
	putchar(10);
	return;
}
void _start(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	*(uint64_t*)(arg1 - 8) = arg0;
	uint64_t anon2 = arg1 & 0xfffffffffffffff0;
	uint64_t anon1 = anon2 - 16;
	*(uint64_t*)anon1 = anon2 - 8;
	__libc_start_main((uint32_t(*)(uint32_t, uint8_t**, uint8_t**))0x4006d0, (uint32_t)arg0, (uint8_t**)arg1, (void(*)())0x400e00, (void(*)())0x400e70, (void(*)())arg2, *(uint8_t**)anon1);
	__builtin_trap();
}
void deregister_tm_clones(uint64_t arg0)
{
	return;
}
void register_tm_clones(uint64_t arg0)
{
	return;
}
void __do_global_dtors_aux(uint64_t arg0)
{
	uint8_t* anon1 = (uint8_t*)0x601298;
	if (*anon1 == 0)
	{
		deregister_tm_clones(4197826);
		*anon1 = 1;
	}
	return;
}
void frame_dummy(uint64_t arg0)
{
	return;
}
void __libc_csu_init(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	_init(4197939);
	(*(void(**)(uint64_t, uint64_t, uint64_t))0x601018)(arg1 & 0xffffffff, arg2, arg3);
	return;
}
void __libc_csu_fini(uint64_t arg0)
{
	return;
}
void _fini(uint64_t arg0)
{
	return;
}
