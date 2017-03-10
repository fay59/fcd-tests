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
	uint64_t phi16;
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
				phi15 = alloca1.field8.field0;
				phi16 = anon13;
			}
		}
	}
	if (*(uint32_t*)anon9 != 2 || *(uint32_t*)anon9 == 2 && anon10 != 0 && *(uint32_t*)(alloca1.field8.field0 + 12) == 0 || *(uint32_t*)anon9 == 2 && anon10 == 0)
	{
		phi15 = phi8;
		*(uint32_t*)(phi15 + 12) = 6;
		alloca1.field9.field0 = 4196133;
		alloca1.field6.field0 = 1296;
		phi14 = 6;
		phi16 = 1296;
	}
	alloca1.field5.field0 = 2;
	uint8_t* anon17 = calloc(phi16, 2);
	uint64_t anon18 = (uint64_t)anon17;
	alloca1.field1.field0 = anon18;
	alloca1.field14.field0 = anon18;
	alloca1.field9.field0 = 4196155;
	if (anon17 == null)
	{
		alloca1.field6.field0 = 4198023;
		alloca1.field9.field0 = 4197615;
		uint32_t anon19 = puts((uint8_t*)0x400e87);
		alloca1.field1.field0 = (__zext uint64_t)anon19;
		alloca1.field6.field0 = 1;
		alloca1.field9.field0 = 4197625;
		exit(1);
	}
	else 
	{
		uint32_t phi64;
		uint64_t anon20 = (__zext uint64_t)phi14;
		alloca1.field6.field0 = anon20;
		alloca1.field16.field0 = 1;
		alloca1.field15.field0 = 1;
		alloca1.field5.field0 = anon20;
		uint32_t anon22 = phi14 * phi14;
		uint32_t anon21 = anon22 * anon22;
		alloca1.field3.field0 = (__zext uint64_t)anon21;
		alloca1.field9.field0 = 4196190;
		if (anon21 < 2)
		{
			alloca1.field7.field0 = phi15 + 26;
		}
		else 
		{
			uint64_t anon38;
			struct { uint32_t field0; bool field1; } anon57;
			uint32_t anon58;
			uint64_t anon23 = anon20 << 8;
			alloca1.field13.field0 = anon23 & 0xffffff00;
			uint64_t anon24 = anon20 << 4;
			alloca1.field11.field0 = anon24 & 0xfffffff0;
			uint32_t anon25 = 4096 - (uint32_t)anon23;
			alloca1.field16.field0 = (__zext uint64_t)anon25;
			uint64_t anon26 = 256 - anon24;
			alloca1.field12.field0 = anon26 & 0xfffffff0;
			uint16_t* anon27 = (uint16_t*)(phi15 + 10);
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
				uint64_t anon33 = anon34 + anon18;
				alloca1.field1.field0 = anon33;
				uint32_t anon36 = (__zext uint32_t)*(uint16_t*)(anon18 + anon34 - 2) + 1;
				uint64_t anon35 = (__zext uint64_t)anon36;
				alloca1.field4.field0 = anon35;
				alloca1.field17.field0 = anon35;
				uint32_t anon37 = (phi14 ^ anon36) & 0xf;
				alloca1.field15.field0 = (__zext uint64_t)anon37;
				alloca1.field9.field0 = 4196281;
				anon38 = phi15 + 26;
				uint16_t anon39 = (uint16_t)anon36;
				*(uint16_t*)anon38 = anon39;
				uint16_t phi40 = anon39;
				if (anon37 == 0)
				{
					uint32_t anon42 = anon36 + anon29;
					uint64_t anon41 = (__zext uint64_t)anon42;
					alloca1.field4.field0 = anon41;
					alloca1.field17.field0 = anon41;
					uint32_t anon43 = ((uint32_t)anon24 ^ anon42) & 0xf0;
					alloca1.field15.field0 = (__zext uint64_t)anon43;
					alloca1.field9.field0 = 4196302;
					uint16_t anon44 = (uint16_t)anon42;
					*(uint16_t*)anon38 = anon44;
					phi40 = anon44;
					if (anon43 == 0)
					{
						uint64_t anon45 = (__zext uint64_t)(anon42 + (uint32_t)anon26);
						alloca1.field4.field0 = anon45;
						alloca1.field17.field0 = anon45;
						uint12_t anon47 = (uint12_t)*(uint16_t*)(anon18 + anon34 - 2) + 1 + 16 - (uint12_t)phi14 + (uint12_t)anon26;
						uint12_t anon46 = (uint12_t)anon23 ^ anon47;
						alloca1.field15.field0 = (__zext uint64_t)anon46;
						alloca1.field9.field0 = 4196322;
						uint16_t anon48 = (__zext uint16_t)anon47;
						*(uint16_t*)anon38 = anon48;
						phi40 = anon48;
						if (anon46 < 256)
						{
							*(uint16_t*)&alloca1.field4.field0 = anon48 + *anon27;
							alloca1.field17.field0 = (__zext uint64_t)*(uint32_t*)&alloca1.field4.field0;
							uint32_t anon49 = anon28 ^ *(uint32_t*)&alloca1.field4.field0;
							alloca1.field15.field0 = (__zext uint64_t)anon49;
							alloca1.field9.field0 = 4196344;
							uint16_t anon50 = (uint16_t)*(uint32_t*)&alloca1.field4.field0;
							*(uint16_t*)anon38 = anon50;
							phi40 = anon50;
							if ((uint16_t)anon49 < 4096)
							{
								uint32_t anon51 = *(uint32_t*)&alloca1.field4.field0 - anon28;
								alloca1.field17.field0 = (__zext uint64_t)anon51;
								alloca1.field4.field0 = 0;
								alloca1.field9.field0 = 4196352;
								*(uint16_t*)anon38 = (uint16_t)anon51;
								phi40 = 0;
							}
						}
					}
				}
				*(uint16_t*)anon33 = phi40;
				uint16_t anon53 = (uint16_t)phi32 + 1;
				uint64_t anon52 = (__zext uint64_t)anon53;
				alloca1.field7.field0 = anon52;
				uint32_t anon56 = phi32 + 1;
				uint32_t anon55 = anon56 & 0xffff;
				uint64_t anon54 = (__zext uint64_t)anon55;
				alloca1.field15.field0 = anon54;
				anon57 = llvm.ssub.with.overflow.i32(anon21, anon55);
				alloca1.field16.field0 = anon54;
				alloca1.field9.field0 = 4196370;
				phi_in30 = anon56;
				phi31 = anon52;
				anon58 = anon21 - (__zext uint32_t)anon53;
			}
			while ((uint8_t)(anon58 >> 31) == (__zext uint8_t)anon57.field1 & anon58 != 0);
			alloca1.field9.field0 = 4196376;
			alloca1.field7.field0 = anon38;
		}
		uint64_t** anon59 = (uint64_t**)&alloca1.field2.field0;
		alloca1.field3.field0 = **anon59;
		uint64_t anon60 = phi15 + 28;
		alloca1.field1.field0 = anon60;
		alloca1.field9.field0 = 4196392;
		alloca1.field9.field0 = 4196396;
		if (*(uint8_t*)**anon59 != 0)
		{
			alloca1.field7.field0 = anon60;
		}
		alloca1.field1.field0 = 0;
		alloca1.field9.field0 = 4196403;
		uint32_t anon61 = rand();
		int64_t anon62 = (__sext int64_t)anon61 % (__sext int64_t)*(uint32_t*)&alloca1.field16.field0;
		alloca1.field4.field0 = anon62 & 0xffffffff;
		int64_t anon63 = anon62 << 32;
		alloca1.field3.field0 = anon63 >> 32;
		alloca1.field1.field0 = (__zext uint64_t)*(uint16_t*)(alloca1.field14.field0 + (anon63 >> 31));
		alloca1.field9.field0 = 4196419;
		**(uint16_t**)&alloca1.field7.field0 = *(uint16_t*)(alloca1.field14.field0 + (anon63 >> 31));
		uint32_t* anon65 = (uint32_t*)&alloca1.field15.field0;
		phi64 = *anon65;
		do
		{
			uint32_t* anon75;
			while (true)
			{
				alloca1.field1.field0 = 0;
				alloca1.field5.field0 = (__zext uint64_t)phi64;
				alloca1.field6.field0 = 4198037;
				alloca1.field9.field0 = 4196434;
				printf((uint8_t*)0x400e95);
				alloca1.field1.field0 = **anon59;
				alloca1.field9.field0 = 4196440;
				alloca1.field9.field0 = 4196446;
				if (*(uint8_t*)**anon59 == 0)
				{
					if (*(uint8_t*)**anon59 != 0)
					{
						alloca1.field9.field0 = 4196451;
						alloca1.field5.field0 = alloca1.field8.field0 + 28;
						alloca1.field1.field0 = 0;
						alloca1.field6.field0 = 4198058;
						alloca1.field9.field0 = 4196463;
						scanf((uint8_t*)0x400eaa);
						alloca1.field1.field0 = **anon59;
						alloca1.field9.field0 = 4196469;
						alloca1.field9.field0 = 4196475;
						if (*(uint8_t*)**anon59 != 0)
						{
							break;
						}
					}
					if (*(uint8_t*)**anon59 == 0 && (*(uint8_t*)**anon59 != 0))
					{
						alloca1.field9.field0 = 4196482;
						uint16_t* anon66 = (uint16_t*)(alloca1.field8.field0 + 28);
						*anon66 = *anon66 - 4369;
					}
				}
				else 
				{
					alloca1.field1.field0 = 0;
					alloca1.field6.field0 = 4198052;
					alloca1.field5.field0 = (__zext uint64_t)*(uint16_t*)(alloca1.field8.field0 + 28) + 4369;
					alloca1.field9.field0 = 4197498;
					printf((uint8_t*)0x400ea4);
					alloca1.field1.field0 = **anon59;
					alloca1.field9.field0 = 4197504;
					alloca1.field9.field0 = 4197510;
					if (*(uint8_t*)**anon59 == 0)
					{
						alloca1.field9.field0 = 4197515;
					}
				}
				if (*(uint8_t*)**anon59 != 0 && *(uint8_t*)**anon59 == 0 && *(uint8_t*)**anon59 == 0 || *(uint8_t*)**anon59 == 0 && *(uint8_t*)**anon59 == 0 || *(uint8_t*)**anon59 != 0 && *(uint8_t*)**anon59 != 0)
				{
					alloca1.field1.field0 = 0;
					alloca1.field6.field0 = 4198062;
					alloca1.field9.field0 = 4196494;
					printf((uint8_t*)0x400eae);
					alloca1.field1.field0 = **anon59;
					alloca1.field9.field0 = 4196500;
					alloca1.field9.field0 = 4196506;
				}
				if (*(uint8_t*)**anon59 == 0)
				{
					if (*(uint8_t*)**anon59 != 0 && *(uint8_t*)**anon59 == 0 && *(uint8_t*)**anon59 == 0 || *(uint8_t*)**anon59 == 0 && *(uint8_t*)**anon59 == 0 || *(uint8_t*)**anon59 != 0 && *(uint8_t*)**anon59 != 0)
					{
						uint32_t phi70;
						uint32_t* anon83;
						uint16_t* anon94;
						uint32_t* anon102;
						uint16_t phi115;
						uint16_t phi136;
						uint8_t* phi149;
						uint32_t phi150;
						uint32_t phi151;
						alloca1.field4.field0 = (__zext uint64_t)*(uint16_t*)(alloca1.field8.field0 + 26);
						alloca1.field1.field0 = (__zext uint64_t)*(uint16_t*)(alloca1.field8.field0 + 28);
						alloca1.field3.field0 = 0;
						uint16_t anon67 = *(uint16_t*)(alloca1.field8.field0 + 28) ^ *(uint16_t*)(alloca1.field8.field0 + 26);
						alloca1.field5.field0 = (__zext uint64_t)anon67;
						uint8_t* anon68 = (uint8_t*)&alloca1.field5.field0;
						*anon68 = (uint8_t)anon67 & 0xf;
						alloca1.field9.field0 = 4196528;
						uint16_t phi_in69 = *(uint16_t*)(alloca1.field8.field0 + 28);
						uint32_t anon71 = (__zext uint32_t)*(uint16_t*)(alloca1.field8.field0 + 28);
						phi70 = anon71;
						uint8_t phi72 = (uint8_t)*(uint16_t*)(alloca1.field8.field0 + 28);
						uint32_t phi73 = 0;
						if ((anon67 & 0xf) == 0)
						{
							uint32_t anon74 = anon71 | 0xf;
							alloca1.field1.field0 = (__zext uint64_t)anon74;
							alloca1.field9.field0 = 4196533;
							*(uint8_t*)&alloca1.field3.field0 = 1;
							phi_in69 = (uint16_t)anon74;
							phi70 = anon74;
							phi72 = (uint8_t)anon74;
							anon75 = (uint32_t*)&alloca1.field3.field0;
							phi73 = *anon75;
						}
						alloca1.field5.field0 = (__zext uint64_t)(phi73 & 0xfffffff);
						alloca1.field3.field0 = 0;
						uint32_t anon77 = (__zext uint32_t)*(uint16_t*)(alloca1.field8.field0 + 26);
						uint32_t anon76 = anon77 ^ phi70;
						alloca1.field6.field0 = (__zext uint64_t)anon76;
						uint8_t* anon78 = (uint8_t*)&alloca1.field6.field0;
						uint8_t anon79 = (uint8_t)anon76 & 0xf0;
						*anon78 = anon79;
						alloca1.field9.field0 = 4196547;
						uint16_t phi80 = phi_in69;
						uint32_t phi81 = phi70;
						uint32_t phi82 = 0;
						if (anon79 == 0)
						{
							*(uint8_t*)&alloca1.field1.field0 = phi72 | 0xf0;
							alloca1.field9.field0 = 4196551;
							*(uint8_t*)&alloca1.field3.field0 = 1;
							anon83 = (uint32_t*)&alloca1.field1.field0;
							phi80 = (uint16_t)*anon83;
							phi81 = *anon83;
							phi82 = *anon75;
						}
						uint16_t phi84 = phi80;
						uint28_t anon85 = (uint28_t)phi73 + (uint28_t)phi82;
						alloca1.field5.field0 = (__zext uint64_t)anon85;
						alloca1.field3.field0 = 0;
						uint12_t anon87 = (uint12_t)*(uint16_t*)(alloca1.field8.field0 + 26);
						uint12_t anon86 = anon87 ^ (uint12_t)phi81;
						alloca1.field6.field0 = (__zext uint64_t)anon86;
						alloca1.field9.field0 = 4196566;
						uint32_t phi88 = 0;
						uint32_t phi89 = phi81 & 0xfff;
						if (anon86 < 256)
						{
							((uint8_t*)&alloca1.field1.field0)[1] = (uint8_t)(*(uint16_t*)(alloca1.field8.field0 + 28) >> 8) | 0xf;
							alloca1.field9.field0 = 4196571;
							*(uint8_t*)&alloca1.field3.field0 = 1;
							phi84 = (uint16_t)*anon83;
							phi88 = *anon75;
							phi89 = *anon83;
						}
						uint28_t anon90 = anon85 + (uint28_t)phi88;
						alloca1.field5.field0 = (__zext uint64_t)anon90;
						alloca1.field3.field0 = 0;
						uint32_t anon91 = anon77 ^ phi89;
						alloca1.field6.field0 = (__zext uint64_t)anon91;
						alloca1.field9.field0 = 4196586;
						uint32_t phi92 = 0;
						uint16_t phi93 = phi84;
						if ((uint16_t)anon91 < 4096)
						{
							anon94 = (uint16_t*)&alloca1.field1.field0;
							uint16_t anon95 = phi84 | 0xf000;
							*anon94 = anon95;
							alloca1.field9.field0 = 4196592;
							*(uint8_t*)&alloca1.field3.field0 = 1;
							phi92 = *anon75;
							phi93 = anon95;
						}
						*anon94 = phi93 >> 12 | phi93 << 4;
						alloca1.field5.field0 = 0;
						uint64_t anon96 = (__zext uint64_t)((uint28_t)phi92 + anon90) << 4;
						alloca1.field3.field0 = anon96;
						uint32_t anon97 = anon77 ^ *anon83;
						alloca1.field6.field0 = (__zext uint64_t)anon97;
						*anon78 = (uint8_t)anon97 & 0xf;
						alloca1.field9.field0 = 4196613;
						uint8_t phi98 = (uint8_t)(phi93 >> 4);
						uint32_t phi99 = *anon83;
						uint32_t phi100 = 0;
						if ((anon97 & 0xf) == 0)
						{
							uint32_t anon101 = *anon83 | 0xf;
							alloca1.field1.field0 = (__zext uint64_t)anon101;
							alloca1.field9.field0 = 4196619;
							*anon68 = 1;
							phi98 = (uint8_t)(*anon83 >> 8);
							phi99 = anon101;
							anon102 = (uint32_t*)&alloca1.field5.field0;
							phi100 = *anon102;
						}
						uint16_t anon103 = (uint16_t)anon96 + (uint16_t)phi100;
						alloca1.field3.field0 = (__zext uint64_t)anon103;
						alloca1.field5.field0 = 0;
						uint32_t anon104 = anon77 ^ phi99;
						alloca1.field6.field0 = (__zext uint64_t)anon104;
						uint8_t anon105 = (uint8_t)anon104 & 0xf0;
						*anon78 = anon105;
						alloca1.field9.field0 = 4196633;
						uint32_t phi106 = phi99;
						uint32_t phi107 = 0;
						if (anon105 == 0)
						{
							*(uint8_t*)&alloca1.field1.field0 = (uint8_t)phi99 | 0xf0;
							alloca1.field9.field0 = 4196638;
							*anon68 = 1;
							phi106 = *anon83;
							phi107 = *anon102;
						}
						uint16_t anon108 = (uint16_t)phi107 + anon103;
						alloca1.field5.field0 = (__zext uint64_t)anon108;
						alloca1.field3.field0 = 0;
						uint12_t anon109 = anon87 ^ (uint12_t)phi106;
						alloca1.field6.field0 = (__zext uint64_t)anon109;
						alloca1.field9.field0 = 4196653;
						uint32_t phi110 = phi106 & 0xfff;
						uint32_t phi111 = 0;
						if (anon109 < 256)
						{
							((uint8_t*)&alloca1.field1.field0)[1] = phi98 | 0xf;
							alloca1.field9.field0 = 4196658;
							*(uint8_t*)&alloca1.field3.field0 = 1;
							phi110 = *anon83;
							phi111 = *anon75;
						}
						uint16_t anon112 = anon108 + (uint16_t)phi111;
						alloca1.field5.field0 = (__zext uint64_t)anon112;
						alloca1.field3.field0 = 0;
						uint32_t anon113 = anon77 ^ phi110;
						alloca1.field6.field0 = (__zext uint64_t)anon113;
						alloca1.field9.field0 = 4196673;
						uint32_t phi114 = 0;
						uint16_t anon116 = (uint16_t)phi110;
						phi115 = anon116;
						if ((uint16_t)anon113 < 4096)
						{
							uint16_t anon117 = anon116 | 0xf000;
							*anon94 = anon117;
							alloca1.field9.field0 = 4196679;
							*(uint8_t*)&alloca1.field3.field0 = 1;
							phi114 = *anon75;
							phi115 = anon117;
						}
						*anon94 = phi115 >> 12 | phi115 << 4;
						uint16_t anon118 = anon112 + (uint16_t)phi114;
						alloca1.field5.field0 = (__zext uint64_t)anon118;
						alloca1.field3.field0 = 0;
						uint32_t anon119 = anon77 ^ *anon83;
						alloca1.field6.field0 = (__zext uint64_t)anon119;
						*anon78 = (uint8_t)anon119 & 0xf;
						alloca1.field9.field0 = 4196697;
						uint32_t phi120 = *anon83;
						uint8_t phi121 = (uint8_t)(phi115 >> 4);
						uint32_t phi122 = 0;
						if ((anon119 & 0xf) == 0)
						{
							uint32_t anon123 = *anon83 | 0xf;
							alloca1.field1.field0 = (__zext uint64_t)anon123;
							alloca1.field9.field0 = 4196702;
							*(uint8_t*)&alloca1.field3.field0 = 1;
							phi120 = anon123;
							phi121 = (uint8_t)(*anon83 >> 8);
							phi122 = *anon75;
						}
						uint16_t anon124 = anon118 + (uint16_t)phi122;
						alloca1.field5.field0 = (__zext uint64_t)anon124;
						alloca1.field3.field0 = 0;
						uint32_t anon125 = anon77 ^ phi120;
						alloca1.field6.field0 = (__zext uint64_t)anon125;
						uint8_t anon126 = (uint8_t)anon125 & 0xf0;
						*anon78 = anon126;
						alloca1.field9.field0 = 4196716;
						uint32_t phi127 = phi120;
						uint32_t phi128 = 0;
						if (anon126 == 0)
						{
							*(uint8_t*)&alloca1.field1.field0 = (uint8_t)phi120 | 0xf0;
							alloca1.field9.field0 = 4196720;
							*(uint8_t*)&alloca1.field3.field0 = 1;
							phi127 = *anon83;
							phi128 = *anon75;
						}
						uint16_t anon129 = anon124 + (uint16_t)phi128;
						alloca1.field5.field0 = (__zext uint64_t)anon129;
						alloca1.field3.field0 = 0;
						uint12_t anon130 = anon87 ^ (uint12_t)phi127;
						alloca1.field6.field0 = (__zext uint64_t)anon130;
						alloca1.field9.field0 = 4196735;
						uint32_t phi131 = phi127 & 0xfff;
						uint32_t phi132 = 0;
						if (anon130 < 256)
						{
							((uint8_t*)&alloca1.field1.field0)[1] = phi121 | 0xf;
							alloca1.field9.field0 = 4196740;
							*(uint8_t*)&alloca1.field3.field0 = 1;
							phi131 = *anon83;
							phi132 = *anon75;
						}
						uint16_t anon133 = anon129 + (uint16_t)phi132;
						alloca1.field5.field0 = (__zext uint64_t)anon133;
						alloca1.field3.field0 = 0;
						uint32_t anon134 = anon77 ^ phi131;
						alloca1.field6.field0 = (__zext uint64_t)anon134;
						alloca1.field9.field0 = 4196755;
						uint32_t phi135 = 0;
						uint16_t anon137 = (uint16_t)phi131;
						phi136 = anon137;
						if ((uint16_t)anon134 < 4096)
						{
							uint16_t anon138 = anon137 | 0xf000;
							*anon94 = anon138;
							alloca1.field9.field0 = 4196761;
							*(uint8_t*)&alloca1.field3.field0 = 1;
							phi135 = *anon75;
							phi136 = anon138;
						}
						*anon94 = phi136 >> 12 | phi136 << 4;
						uint16_t anon139 = anon133 + (uint16_t)phi135;
						alloca1.field5.field0 = (__zext uint64_t)anon139;
						alloca1.field3.field0 = 0;
						uint32_t anon140 = anon77 ^ *anon83;
						alloca1.field6.field0 = (__zext uint64_t)anon140;
						*anon78 = (uint8_t)anon140 & 0xf;
						alloca1.field9.field0 = 4196779;
						uint32_t phi141 = *anon83;
						uint8_t phi142 = (uint8_t)(phi136 >> 4);
						uint32_t phi143 = 0;
						if ((anon140 & 0xf) == 0)
						{
							uint32_t anon144 = *anon83 | 0xf;
							alloca1.field1.field0 = (__zext uint64_t)anon144;
							alloca1.field9.field0 = 4196784;
							*(uint8_t*)&alloca1.field3.field0 = 1;
							phi141 = anon144;
							phi142 = (uint8_t)(*anon83 >> 8);
							phi143 = *anon75;
						}
						uint16_t anon145 = anon139 + (uint16_t)phi143;
						alloca1.field5.field0 = (__zext uint64_t)anon145;
						alloca1.field3.field0 = 0;
						uint32_t anon146 = anon77 ^ phi141;
						alloca1.field6.field0 = (__zext uint64_t)anon146;
						uint8_t anon147 = (uint8_t)anon146 & 0xf0;
						*anon78 = anon147;
						alloca1.field9.field0 = 4196798;
						if (anon147 == 0)
						{
							uint8_t* anon148 = (uint8_t*)&alloca1.field1.field0;
							*anon148 = (uint8_t)phi141 | 0xf0;
							alloca1.field9.field0 = 4196802;
							*(uint8_t*)&alloca1.field3.field0 = 1;
							phi149 = anon148;
							phi150 = *anon83;
							phi151 = *anon75;
						}
						else 
						{
							phi149 = (uint8_t*)&alloca1.field1.field0;
							phi150 = phi141;
							phi151 = 0;
						}
						uint16_t anon152 = anon145 + (uint16_t)phi151;
						alloca1.field5.field0 = (__zext uint64_t)anon152;
						alloca1.field3.field0 = 0;
						uint12_t anon153 = anon87 ^ (uint12_t)phi150;
						alloca1.field6.field0 = (__zext uint64_t)anon153;
						alloca1.field9.field0 = 4196817;
						uint32_t phi154 = 0;
						uint32_t phi155 = phi150;
						if (anon153 < 256)
						{
							phi149[1] = phi142 | 0xf;
							alloca1.field9.field0 = 4196822;
							*(uint8_t*)&alloca1.field3.field0 = 1;
							phi154 = *anon75;
							phi155 = *anon83;
						}
						uint16_t anon156 = (uint16_t)phi154 + anon152;
						alloca1.field3.field0 = (__zext uint64_t)anon156;
						alloca1.field6.field0 = 4198067;
						*phi149 = (__zext uint8_t)((*(uint16_t*)(alloca1.field8.field0 + 26) ^ (uint16_t)phi155) < 4096);
						uint16_t anon157 = (__zext uint16_t)((*(uint16_t*)(alloca1.field8.field0 + 26) ^ (uint16_t)phi155) < 4096) + anon156;
						*(uint16_t*)(alloca1.field8.field0 + 30) = anon157;
						alloca1.field5.field0 = (__zext uint64_t)anon157;
						alloca1.field1.field0 = 0;
						alloca1.field9.field0 = 4196858;
						uint32_t anon158 = printf((uint8_t*)0x400eb3);
						alloca1.field1.field0 = (__zext uint64_t)anon158;
						alloca1.field9.field0 = 4196864;
						break;
					}
				}
				else if (*(uint8_t*)**anon59 != 0 && *(uint8_t*)**anon59 == 0 && *(uint8_t*)**anon59 == 0 || *(uint8_t*)**anon59 == 0 && *(uint8_t*)**anon59 == 0 || *(uint8_t*)**anon59 != 0 && *(uint8_t*)**anon59 != 0)
				{
					alloca1.field5.field0 = alloca1.field8.field0 + 30;
					alloca1.field9.field0 = 4197525;
				}
			}
			uint32_t* anon159 = (uint32_t*)(alloca1.field8.field0 + 12);
			*anon159 = 0;
			alloca1.field9.field0 = 4196881;
			if (*anon65 != 0)
			{
				uint16_t phi279;
				uint64_t anon160 = (__zext uint64_t)*(uint16_t*)(alloca1.field8.field0 + 28);
				alloca1.field1.field0 = anon160;
				uint64_t anon161 = alloca1.field15.field0 + 4294967295 & 0xffffffff;
				alloca1.field3.field0 = anon161;
				uint16_t* anon163 = (uint16_t*)(alloca1.field8.field0 + 26);
				uint64_t anon162 = (__zext uint64_t)*anon163;
				alloca1.field4.field0 = anon162;
				alloca1.field11.field0 = (__zext uint64_t)*(uint16_t*)(alloca1.field8.field0 + 30);
				alloca1.field10.field0 = alloca1.field14.field0;
				alloca1.field7.field0 = 0;
				uint64_t anon164 = anon161 + anon161 + 2 + alloca1.field14.field0;
				alloca1.field5.field0 = anon164;
				uint16_t anon166 = *(uint16_t*)(alloca1.field8.field0 + 28) | 0xf;
				uint64_t anon165 = (__zext uint64_t)anon166;
				alloca1.field12.field0 = anon165;
				alloca1.field9.field0 = 4196926;
				uint32_t phi_in167 = 0;
				uint16_t phi_in168 = 0;
				uint16_t phi_in169 = 0;
				uint64_t phi_in170 = alloca1.field14.field0;
				while (true)
				{
					uint16_t phi179;
					uint16_t phi180;
					uint32_t phi_in181;
					uint32_t phi182;
					uint8_t phi183;
					uint32_t anon188;
					uint32_t* phi190;
					uint32_t phi192;
					uint16_t phi193;
					uint32_t phi194;
					uint16_t phi197;
					uint16_t* anon199;
					uint32_t* anon201;
					uint8_t phi207;
					uint16_t phi224;
					uint8_t phi232;
					uint16_t phi250;
					uint8_t phi258;
					uint8_t* phi266;
					uint32_t phi267;
					uint32_t phi268;
					uint32_t phi171 = phi_in167;
					uint16_t phi172 = phi_in168;
					uint16_t phi173 = phi_in169;
					uint64_t phi174 = phi_in170;
					alloca1.field6.field0 = anon162;
					uint64_t anon175 = (__zext uint64_t)*(uint16_t*)phi174;
					alloca1.field4.field0 = anon175;
					uint16_t anon176 = *(uint16_t*)(alloca1.field8.field0 + 28) ^ *(uint16_t*)phi174;
					alloca1.field16.field0 = (__zext uint64_t)anon176;
					alloca1.field9.field0 = 4197376;
					uint16_t anon177 = anon176 >> 8;
					if ((anon177 & 0xf) == 0)
					{
						alloca1.field3.field0 = anon165;
						alloca1.field17.field0 = 2;
						uint16_t anon178 = anon166 ^ *(uint16_t*)phi174;
						alloca1.field16.field0 = (__zext uint64_t)anon178;
						alloca1.field9.field0 = 4196949;
						alloca1.field13.field0 = 1;
						phi179 = anon166;
						phi180 = anon178;
						phi_in181 = 1;
						phi182 = 2;
						phi183 = (uint8_t)(anon178 >> 8);
					}
					else 
					{
						alloca1.field3.field0 = anon160;
						alloca1.field17.field0 = 1;
						alloca1.field13.field0 = 0;
						alloca1.field9.field0 = 4197392;
						phi179 = *(uint16_t*)(alloca1.field8.field0 + 28);
						phi180 = anon176;
						phi_in181 = 0;
						phi182 = 1;
						phi183 = (uint8_t)anon177 & 0xf;
					}
					uint16_t phi184 = phi180;
					alloca1.field9.field0 = 4196955;
					uint32_t phi185 = (__zext uint32_t)phi179;
					uint32_t phi186 = phi_in181;
					if (phi183 < 16)
					{
						*(uint8_t*)&alloca1.field3.field0 = (uint8_t)phi179 | 0xf0;
						alloca1.field13.field0 = (__zext uint64_t)phi182;
						alloca1.field9.field0 = 4196967;
						anon188 = (__zext uint32_t)*(uint16_t*)phi174;
						uint32_t anon187 = anon188 ^ *anon75;
						alloca1.field16.field0 = (__zext uint64_t)anon187;
						phi185 = *anon75;
						phi184 = (uint16_t)anon187;
						phi186 = phi182;
					}
					alloca1.field17.field0 = 0;
					alloca1.field9.field0 = 4196978;
					if ((phi184 & 0xf00) == 0)
					{
						((uint8_t*)&alloca1.field3.field0)[1] = (uint8_t)(phi179 >> 8) | 0xf;
						((uint8_t*)&alloca1.field17.field0)[1] = 1;
						alloca1.field9.field0 = 4196990;
						uint32_t anon189 = anon188 ^ *anon75;
						alloca1.field16.field0 = (__zext uint64_t)anon189;
						uint32_t* anon191 = (uint32_t*)&alloca1.field17.field0;
						phi190 = anon191;
						phi192 = *anon75;
						phi193 = (uint16_t)anon189;
						phi194 = *anon191;
					}
					else 
					{
						phi190 = (uint32_t*)&alloca1.field17.field0;
						phi192 = phi185;
						phi193 = phi184 & 0xfff;
						phi194 = 0;
					}
					uint28_t anon195 = (uint28_t)phi194 + (uint28_t)phi186;
					alloca1.field17.field0 = (__zext uint64_t)anon195;
					alloca1.field13.field0 = 0;
					alloca1.field9.field0 = 4197004;
					uint32_t phi196 = 0;
					uint16_t anon198 = (uint16_t)phi192;
					phi197 = anon198;
					if (phi193 < 4096)
					{
						anon199 = (uint16_t*)&alloca1.field3.field0;
						uint16_t anon200 = anon198 | 0xf000;
						*anon199 = anon200;
						alloca1.field9.field0 = 4197012;
						((uint8_t*)&alloca1.field13.field0)[1] = 1;
						anon201 = (uint32_t*)&alloca1.field13.field0;
						phi196 = *anon201;
						phi197 = anon200;
					}
					*anon199 = phi197 >> 12 | phi197 << 4;
					alloca1.field17.field0 = 0;
					uint32_t anon202 = (__zext uint32_t)((uint28_t)phi196 + anon195) << 4;
					alloca1.field13.field0 = (__zext uint64_t)anon202;
					uint32_t anon203 = anon188 ^ *anon75;
					alloca1.field16.field0 = (__zext uint64_t)anon203;
					alloca1.field9.field0 = 4197038;
					uint8_t phi204 = (uint8_t)(phi197 >> 4);
					uint32_t phi205 = *anon75;
					uint32_t phi_in206 = anon203;
					uint32_t anon208 = anon203 >> 8;
					phi207 = (uint8_t)anon208 & 0xf;
					uint32_t phi209 = 0;
					if ((anon208 & 0xf) == 0)
					{
						uint32_t anon210 = *anon75 | 0xf;
						alloca1.field3.field0 = (__zext uint64_t)anon210;
						((uint8_t*)&alloca1.field17.field0)[1] = 1;
						alloca1.field9.field0 = 4197050;
						uint32_t anon211 = anon188 ^ anon210;
						alloca1.field16.field0 = (__zext uint64_t)anon211;
						phi204 = (uint8_t)(*anon75 >> 8);
						phi205 = anon210;
						phi_in206 = anon211;
						phi207 = (uint8_t)(anon211 >> 8);
						phi209 = *phi190;
					}
					uint32_t anon212 = anon202 + phi209;
					alloca1.field13.field0 = (__zext uint64_t)anon212;
					alloca1.field17.field0 = 0;
					alloca1.field9.field0 = 4197062;
					uint32_t phi_in213 = phi205;
					uint32_t phi214 = phi_in206;
					uint32_t phi215 = 0;
					if (phi207 < 16)
					{
						*(uint8_t*)&alloca1.field3.field0 = (uint8_t)phi205 | 0xf0;
						((uint8_t*)&alloca1.field17.field0)[1] = 1;
						alloca1.field9.field0 = 4197074;
						uint32_t anon216 = anon188 ^ *anon75;
						alloca1.field16.field0 = (__zext uint64_t)anon216;
						phi_in213 = *anon75;
						phi214 = anon216;
						phi215 = *phi190;
					}
					uint32_t anon217 = anon212 + phi215;
					alloca1.field13.field0 = (__zext uint64_t)anon217;
					alloca1.field17.field0 = 0;
					alloca1.field9.field0 = 4197088;
					uint32_t phi218 = phi_in213;
					uint16_t phi219 = (uint16_t)phi214 & 0xfff;
					uint32_t phi220 = 0;
					if ((phi214 & 0xf00) == 0)
					{
						((uint8_t*)&alloca1.field3.field0)[1] = phi204 | 0xf;
						((uint8_t*)&alloca1.field17.field0)[1] = 1;
						alloca1.field9.field0 = 4197100;
						uint32_t anon221 = anon188 ^ *anon75;
						alloca1.field16.field0 = (__zext uint64_t)anon221;
						phi218 = *anon75;
						phi219 = (uint16_t)anon221;
						phi220 = *phi190;
					}
					uint32_t anon222 = phi220 + anon217;
					alloca1.field17.field0 = (__zext uint64_t)anon222;
					alloca1.field13.field0 = 0;
					alloca1.field9.field0 = 4197114;
					uint32_t phi223 = 0;
					uint16_t anon225 = (uint16_t)phi218;
					phi224 = anon225;
					if (phi219 < 4096)
					{
						uint16_t anon226 = anon225 | 0xf000;
						*anon199 = anon226;
						alloca1.field9.field0 = 4197122;
						((uint8_t*)&alloca1.field13.field0)[1] = 1;
						phi223 = *anon201;
						phi224 = anon226;
					}
					*anon199 = phi224 >> 12 | phi224 << 4;
					uint32_t anon227 = phi223 + anon222;
					alloca1.field13.field0 = (__zext uint64_t)anon227;
					alloca1.field17.field0 = 0;
					uint32_t anon228 = anon188 ^ *anon75;
					alloca1.field16.field0 = (__zext uint64_t)anon228;
					alloca1.field9.field0 = 4197144;
					uint32_t phi229 = *anon75;
					uint32_t phi230 = anon228;
					uint8_t phi231 = (uint8_t)(phi224 >> 4);
					uint32_t anon233 = anon228 >> 8;
					phi232 = (uint8_t)anon233 & 0xf;
					uint32_t phi234 = 0;
					if ((anon233 & 0xf) == 0)
					{
						uint32_t anon235 = *anon75 | 0xf;
						alloca1.field3.field0 = (__zext uint64_t)anon235;
						((uint8_t*)&alloca1.field17.field0)[1] = 1;
						alloca1.field9.field0 = 4197156;
						uint32_t anon236 = anon188 ^ anon235;
						alloca1.field16.field0 = (__zext uint64_t)anon236;
						phi229 = anon235;
						phi230 = anon236;
						phi231 = (uint8_t)(*anon75 >> 8);
						phi232 = (uint8_t)(anon236 >> 8);
						phi234 = *phi190;
					}
					uint32_t phi237 = phi229;
					uint32_t phi238 = phi230;
					uint32_t anon239 = anon227 + phi234;
					alloca1.field13.field0 = (__zext uint64_t)anon239;
					alloca1.field17.field0 = 0;
					alloca1.field9.field0 = 4197168;
					uint32_t phi240 = 0;
					if (phi232 < 16)
					{
						*(uint8_t*)&alloca1.field3.field0 = (uint8_t)phi237 | 0xf0;
						((uint8_t*)&alloca1.field17.field0)[1] = 1;
						alloca1.field9.field0 = 4197180;
						uint32_t anon241 = anon188 ^ *anon75;
						alloca1.field16.field0 = (__zext uint64_t)anon241;
						phi237 = *anon75;
						phi238 = anon241;
						phi240 = *phi190;
					}
					uint32_t phi_in242 = phi237;
					uint32_t anon243 = phi240 + anon239;
					alloca1.field17.field0 = (__zext uint64_t)anon243;
					alloca1.field13.field0 = 0;
					alloca1.field9.field0 = 4197194;
					uint32_t phi244 = phi_in242;
					uint16_t phi245 = (uint16_t)phi238 & 0xfff;
					uint32_t phi246 = 0;
					if ((phi238 & 0xf00) == 0)
					{
						((uint8_t*)&alloca1.field3.field0)[1] = phi231 | 0xf;
						((uint8_t*)&alloca1.field13.field0)[1] = 1;
						alloca1.field9.field0 = 4197206;
						uint32_t anon247 = anon188 ^ *anon75;
						alloca1.field16.field0 = (__zext uint64_t)anon247;
						phi244 = *anon75;
						phi245 = (uint16_t)anon247;
						phi246 = *anon201;
					}
					uint32_t anon248 = phi246 + anon243;
					alloca1.field13.field0 = (__zext uint64_t)anon248;
					alloca1.field17.field0 = 0;
					alloca1.field9.field0 = 4197220;
					uint64_t phi249 = 0;
					uint16_t anon251 = (uint16_t)phi244;
					phi250 = anon251;
					if (phi245 < 4096)
					{
						uint16_t anon252 = anon251 | 0xf000;
						*anon199 = anon252;
						alloca1.field9.field0 = 4197228;
						((uint8_t*)&alloca1.field17.field0)[1] = 1;
						phi249 = alloca1.field17.field0;
						phi250 = anon252;
					}
					*anon199 = phi250 >> 12 | phi250 << 4;
					uint32_t anon253 = anon248 + (uint32_t)phi249;
					alloca1.field16.field0 = (__zext uint64_t)anon253;
					alloca1.field17.field0 = 0;
					uint32_t anon254 = anon188 ^ *anon75;
					alloca1.field13.field0 = (__zext uint64_t)anon254;
					alloca1.field9.field0 = 4197251;
					uint32_t phi255 = anon254;
					uint8_t phi256 = (uint8_t)(phi250 >> 4);
					uint32_t phi257 = *anon75;
					uint32_t anon259 = anon254 >> 8;
					phi258 = (uint8_t)anon259 & 0xf;
					uint32_t phi260 = 0;
					if ((anon259 & 0xf) == 0)
					{
						uint32_t anon261 = *anon75 | 0xf;
						alloca1.field3.field0 = (__zext uint64_t)anon261;
						((uint8_t*)&alloca1.field17.field0)[1] = 1;
						alloca1.field9.field0 = 4197263;
						uint32_t anon262 = anon188 ^ anon261;
						alloca1.field13.field0 = (__zext uint64_t)anon262;
						phi255 = anon262;
						phi256 = (uint8_t)(*anon75 >> 8);
						phi257 = anon261;
						phi258 = (uint8_t)(anon262 >> 8);
						phi260 = *phi190;
					}
					uint32_t anon263 = anon253 + phi260;
					alloca1.field16.field0 = (__zext uint64_t)anon263;
					alloca1.field17.field0 = 0;
					alloca1.field9.field0 = 4197275;
					if (phi258 < 16)
					{
						uint8_t* anon264 = (uint8_t*)&alloca1.field3.field0;
						*anon264 = (uint8_t)phi257 | 0xf0;
						((uint8_t*)&alloca1.field17.field0)[1] = 1;
						alloca1.field9.field0 = 4197287;
						uint32_t anon265 = anon188 ^ *anon75;
						alloca1.field13.field0 = (__zext uint64_t)anon265;
						phi266 = anon264;
						phi267 = anon265;
						phi268 = *phi190;
					}
					else 
					{
						phi266 = (uint8_t*)&alloca1.field3.field0;
						phi267 = phi255;
						phi268 = 0;
					}
					uint32_t anon269 = anon263 + phi268;
					alloca1.field16.field0 = (__zext uint64_t)anon269;
					alloca1.field17.field0 = 0;
					alloca1.field9.field0 = 4197301;
					uint32_t phi270 = phi267 & 0xfff;
					uint32_t phi271 = 0;
					if ((phi267 & 0xf00) == 0)
					{
						phi266[1] = phi256 | 0xf;
						((uint8_t*)&alloca1.field17.field0)[1] = 1;
						uint32_t anon273 = anon188 ^ *anon75;
						uint64_t anon272 = (__zext uint64_t)anon273;
						alloca1.field3.field0 = anon272;
						alloca1.field9.field0 = 4197312;
						alloca1.field13.field0 = anon272;
						phi270 = anon273;
						phi271 = *phi190;
					}
					uint32_t anon274 = anon269 + phi271;
					alloca1.field16.field0 = (__zext uint64_t)anon274;
					alloca1.field3.field0 = 0;
					alloca1.field6.field0 = anon175;
					alloca1.field4.field0 = anon162;
					*phi266 = (__zext uint8_t)((uint16_t)phi270 < 4096);
					uint32_t anon275 = *anon75 + anon274;
					alloca1.field3.field0 = (__zext uint64_t)anon275;
					alloca1.field9.field0 = 4197345;
					uint64_t anon276 = phi174 + 2;
					alloca1.field10.field0 = anon276;
					if ((uint16_t)anon275 == *(uint16_t*)(alloca1.field8.field0 + 30))
					{
						uint64_t anon277 = (__zext uint64_t)phi172;
						alloca1.field3.field0 = anon277;
						uint32_t anon278 = phi171 + 1;
						alloca1.field7.field0 = (__zext uint64_t)anon278;
						*(uint16_t*)(alloca1.field14.field0 + (anon277 << 1)) = *(uint16_t*)phi174;
						alloca1.field9.field0 = 4197412;
						uint16_t anon280 = (uint16_t)anon278;
						phi279 = anon280;
						phi_in167 = anon278;
						phi_in168 = anon280;
						phi_in169 = anon280;
						phi_in170 = anon276;
						if (anon276 == anon164)
						{
							break;
						}
					}
					else 
					{
						alloca1.field9.field0 = 4197354;
						phi279 = phi173;
						phi_in167 = phi171;
						phi_in168 = phi172;
						phi_in169 = phi173;
						phi_in170 = anon276;
						if (anon276 == anon164)
						{
							break;
						}
					}
				}
				*anon159 = (uint32_t)alloca1.field15.field0;
				*anon163 = *anon163;
				alloca1.field9.field0 = 4197431;
				if (phi279 == 0)
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
						alloca1.field15.field0 = (__zext uint64_t)phi279;
						alloca1.field9.field0 = 4197453;
						uint32_t anon281 = rand();
						int64_t anon283 = (__sext int64_t)anon281 % (__sext int64_t)*anon65 << 32;
						int64_t anon282 = anon283 >> 32;
						alloca1.field4.field0 = anon282;
						uint64_t anon284 = (__zext uint64_t)*(uint16_t*)(anon282 + (anon283 >> 31));
						alloca1.field1.field0 = anon284;
						*(uint16_t*)(anon284 + 28) = *(uint16_t*)(anon282 + (anon283 >> 31));
						alloca1.field9.field0 = 4197475;
						phi64 = *anon65;
					}
				}
			}
		}
		while (*anon65 != 0);
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
