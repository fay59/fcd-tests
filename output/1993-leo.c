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
	uint32_t anon9;
	uint32_t phi13;
	uint64_t phi14;
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
	alloca1.field8.field0 = alloca1.field8.field0;
	uint64_t anon8 = alloca1.field8.field0 + 12;
	if (*(uint32_t*)anon8 == 2)
	{
		alloca1.field6.field0 = *(uint64_t*)(alloca1.field2.field0 + 8);
		alloca1.field4.field0 = anon8;
		alloca1.field1.field0 = 0;
		alloca1.field5.field0 = 4198020;
		alloca1.field9.field0 = 4197546;
		anon9 = sscanf((uint8_t*)*(uint64_t*)(alloca1.field2.field0 + 8), (uint8_t*)0x400e84);
		alloca1.field1.field0 = (__zext uint64_t)anon9;
		alloca1.field9.field0 = 4197554;
		alloca1.field8.field0 = alloca1.field8.field0;
		if (anon9 != 0)
		{
			alloca1.field1.field0 = (__zext uint64_t)*(uint32_t*)(alloca1.field8.field0 + 12);
			alloca1.field9.field0 = 4197566;
			alloca1.field8.field0 = alloca1.field8.field0;
			if (*(uint32_t*)(alloca1.field8.field0 + 12) != 0)
			{
				uint32_t anon11 = *(uint32_t*)(alloca1.field8.field0 + 12) * *(uint32_t*)(alloca1.field8.field0 + 12);
				uint32_t anon10 = anon11 * anon11;
				alloca1.field1.field0 = (__zext uint64_t)anon10;
				int64_t anon12 = (__sext int64_t)anon10;
				alloca1.field6.field0 = anon12;
				alloca1.field9.field0 = 4197580;
				phi13 = *(uint32_t*)(alloca1.field8.field0 + 12);
				phi14 = alloca1.field8.field0;
				phi15 = anon12;
			}
		}
	}
	if (*(uint32_t*)anon8 != 2 || *(uint32_t*)anon8 == 2 && anon9 != 0 && *(uint32_t*)(alloca1.field8.field0 + 12) == 0 || *(uint32_t*)anon8 == 2 && anon9 == 0)
	{
		phi14 = alloca1.field8.field0;
		*(uint32_t*)(phi14 + 12) = 6;
		alloca1.field9.field0 = 4196133;
		alloca1.field6.field0 = 1296;
		phi13 = 6;
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
		uint32_t phi65;
		uint64_t anon19 = (__zext uint64_t)phi13;
		alloca1.field6.field0 = anon19;
		alloca1.field16.field0 = 1;
		alloca1.field15.field0 = 1;
		alloca1.field5.field0 = anon19;
		uint32_t anon21 = phi13 * phi13;
		uint32_t anon20 = anon21 * anon21;
		alloca1.field3.field0 = (__zext uint64_t)anon20;
		alloca1.field9.field0 = 4196190;
		if (anon20 < 2)
		{
			phi22 = phi14 + 26;
		}
		else 
		{
			uint64_t anon52;
			struct { uint32_t field0; bool field1; } anon58;
			uint32_t anon59;
			uint64_t anon23 = anon19 << 8;
			alloca1.field13.field0 = anon23 & 0xffffff00;
			uint64_t anon24 = anon19 << 4;
			alloca1.field11.field0 = anon24 & 0xfffffff0;
			uint32_t anon25 = 4096 - (uint32_t)anon23;
			alloca1.field16.field0 = (__zext uint64_t)anon25;
			uint64_t anon26 = 256 - anon24;
			alloca1.field12.field0 = anon26 & 0xfffffff0;
			uint16_t* anon27 = (uint16_t*)(phi14 + 10);
			*anon27 = (uint16_t)anon25;
			uint32_t anon28 = phi13 << 12;
			alloca1.field6.field0 = (__zext uint64_t)anon28;
			alloca1.field7.field0 = 1;
			uint32_t anon29 = 16 - phi13;
			alloca1.field10.field0 = (__zext uint64_t)anon29;
			alloca1.field9.field0 = 4196248;
			uint32_t phi_in30 = 1;
			uint64_t phi31 = 1;
			do
			{
				uint16_t phi38;
				uint32_t phi32 = phi_in30;
				uint64_t anon34 = phi31 << 1;
				uint64_t anon33 = anon34 + anon17;
				alloca1.field1.field0 = anon33;
				uint32_t anon36 = (__zext uint32_t)*(uint16_t*)(anon17 + anon34 - 2) + 1;
				uint64_t anon35 = (__zext uint64_t)anon36;
				alloca1.field4.field0 = anon35;
				alloca1.field17.field0 = anon35;
				uint32_t anon37 = (phi13 ^ anon36) & 0xf;
				alloca1.field15.field0 = (__zext uint64_t)anon37;
				alloca1.field9.field0 = 4196281;
				uint16_t anon39 = (uint16_t)anon36;
				phi38 = anon39;
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
					phi38 = anon44;
					phi40 = anon44;
					if (anon43 == 0)
					{
						uint64_t anon45 = (__zext uint64_t)(anon42 + (uint32_t)anon26);
						alloca1.field4.field0 = anon45;
						alloca1.field17.field0 = anon45;
						uint12_t anon47 = (uint12_t)*(uint16_t*)(anon17 + anon34 - 2) + 1 + 16 - (uint12_t)phi13 + (uint12_t)anon26;
						uint12_t anon46 = (uint12_t)anon23 ^ anon47;
						alloca1.field15.field0 = (__zext uint64_t)anon46;
						alloca1.field9.field0 = 4196322;
						uint16_t anon48 = (__zext uint16_t)anon47;
						phi38 = anon48;
						phi40 = anon48;
						if (anon46 < 256)
						{
							*(uint16_t*)&alloca1.field4.field0 = anon48 + *anon27;
							alloca1.field17.field0 = (__zext uint64_t)*(uint32_t*)&alloca1.field4.field0;
							uint32_t anon49 = anon28 ^ *(uint32_t*)&alloca1.field4.field0;
							alloca1.field15.field0 = (__zext uint64_t)anon49;
							alloca1.field9.field0 = 4196344;
							uint16_t anon50 = (uint16_t)*(uint32_t*)&alloca1.field4.field0;
							phi38 = anon50;
							phi40 = anon50;
							if ((uint16_t)anon49 < 4096)
							{
								uint32_t anon51 = *(uint32_t*)&alloca1.field4.field0 - anon28;
								alloca1.field17.field0 = (__zext uint64_t)anon51;
								alloca1.field4.field0 = 0;
								alloca1.field9.field0 = 4196352;
								phi38 = (uint16_t)anon51;
								phi40 = 0;
							}
						}
					}
				}
				anon52 = phi14 + 26;
				*(uint16_t*)anon52 = phi38;
				*(uint16_t*)anon33 = phi40;
				uint16_t anon54 = (uint16_t)phi32 + 1;
				uint64_t anon53 = (__zext uint64_t)anon54;
				alloca1.field7.field0 = anon53;
				uint32_t anon57 = phi32 + 1;
				uint32_t anon56 = anon57 & 0xffff;
				uint64_t anon55 = (__zext uint64_t)anon56;
				alloca1.field15.field0 = anon55;
				anon58 = llvm.ssub.with.overflow.i32(anon20, anon56);
				alloca1.field16.field0 = anon55;
				alloca1.field9.field0 = 4196370;
				phi_in30 = anon57;
				phi31 = anon53;
				anon59 = anon20 - (__zext uint32_t)anon54;
			}
			while ((uint8_t)(anon59 >> 31) == (__zext uint8_t)anon58.field1 & anon59 != 0);
			alloca1.field9.field0 = 4196376;
			phi22 = anon52;
		}
		alloca1.field7.field0 = phi22;
		uint64_t** anon60 = (uint64_t**)&alloca1.field2.field0;
		alloca1.field3.field0 = **anon60;
		uint64_t anon61 = phi14 + 28;
		alloca1.field1.field0 = anon61;
		alloca1.field9.field0 = 4196392;
		alloca1.field9.field0 = 4196396;
		if (*(uint8_t*)**anon60 != 0)
		{
			alloca1.field7.field0 = anon61;
		}
		alloca1.field1.field0 = 0;
		alloca1.field9.field0 = 4196403;
		uint32_t anon62 = rand();
		int64_t anon63 = (__sext int64_t)anon62 % (__sext int64_t)*(uint32_t*)&alloca1.field16.field0;
		alloca1.field4.field0 = anon63 & 0xffffffff;
		int64_t anon64 = anon63 << 32;
		alloca1.field3.field0 = anon64 >> 32;
		alloca1.field1.field0 = (__zext uint64_t)*(uint16_t*)(alloca1.field14.field0 + (anon64 >> 31));
		alloca1.field9.field0 = 4196419;
		**(uint16_t**)&alloca1.field7.field0 = *(uint16_t*)(alloca1.field14.field0 + (anon64 >> 31));
		uint32_t* anon66 = (uint32_t*)&alloca1.field15.field0;
		phi65 = *anon66;
		do
		{
			uint32_t* anon76;
			while (true)
			{
				alloca1.field1.field0 = 0;
				alloca1.field5.field0 = (__zext uint64_t)phi65;
				alloca1.field6.field0 = 4198037;
				alloca1.field9.field0 = 4196434;
				printf((uint8_t*)0x400e95);
				alloca1.field1.field0 = **anon60;
				alloca1.field9.field0 = 4196440;
				alloca1.field9.field0 = 4196446;
				if (*(uint8_t*)**anon60 == 0)
				{
					if (*(uint8_t*)**anon60 != 0)
					{
						alloca1.field9.field0 = 4196451;
						alloca1.field5.field0 = alloca1.field8.field0 + 28;
						alloca1.field1.field0 = 0;
						alloca1.field6.field0 = 4198058;
						alloca1.field9.field0 = 4196463;
						scanf((uint8_t*)0x400eaa);
						alloca1.field1.field0 = **anon60;
						alloca1.field9.field0 = 4196469;
						alloca1.field9.field0 = 4196475;
						if (*(uint8_t*)**anon60 != 0)
						{
							break;
						}
					}
					if (*(uint8_t*)**anon60 == 0 && (*(uint8_t*)**anon60 != 0))
					{
						alloca1.field9.field0 = 4196482;
						uint16_t* anon67 = (uint16_t*)(alloca1.field8.field0 + 28);
						*anon67 = *anon67 - 4369;
					}
				}
				else 
				{
					alloca1.field1.field0 = 0;
					alloca1.field6.field0 = 4198052;
					alloca1.field5.field0 = (__zext uint64_t)*(uint16_t*)(alloca1.field8.field0 + 28) + 4369;
					alloca1.field9.field0 = 4197498;
					printf((uint8_t*)0x400ea4);
					alloca1.field1.field0 = **anon60;
					alloca1.field9.field0 = 4197504;
					alloca1.field9.field0 = 4197510;
					if (*(uint8_t*)**anon60 == 0)
					{
						alloca1.field9.field0 = 4197515;
					}
				}
				if (*(uint8_t*)**anon60 != 0 && *(uint8_t*)**anon60 == 0 && *(uint8_t*)**anon60 == 0 || *(uint8_t*)**anon60 == 0 && *(uint8_t*)**anon60 == 0 || *(uint8_t*)**anon60 != 0 && *(uint8_t*)**anon60 != 0)
				{
					alloca1.field1.field0 = 0;
					alloca1.field6.field0 = 4198062;
					alloca1.field9.field0 = 4196494;
					printf((uint8_t*)0x400eae);
					alloca1.field1.field0 = **anon60;
					alloca1.field9.field0 = 4196500;
					alloca1.field9.field0 = 4196506;
				}
				if (*(uint8_t*)**anon60 == 0)
				{
					if (*(uint8_t*)**anon60 != 0 && *(uint8_t*)**anon60 == 0 && *(uint8_t*)**anon60 == 0 || *(uint8_t*)**anon60 == 0 && *(uint8_t*)**anon60 == 0 || *(uint8_t*)**anon60 != 0 && *(uint8_t*)**anon60 != 0)
					{
						uint32_t phi71;
						uint32_t* anon84;
						uint16_t* anon95;
						uint32_t* anon103;
						uint16_t phi116;
						uint16_t phi137;
						uint8_t* phi150;
						uint32_t phi151;
						uint32_t phi152;
						alloca1.field4.field0 = (__zext uint64_t)*(uint16_t*)(alloca1.field8.field0 + 26);
						alloca1.field1.field0 = (__zext uint64_t)*(uint16_t*)(alloca1.field8.field0 + 28);
						alloca1.field3.field0 = 0;
						uint16_t anon68 = *(uint16_t*)(alloca1.field8.field0 + 28) ^ *(uint16_t*)(alloca1.field8.field0 + 26);
						alloca1.field5.field0 = (__zext uint64_t)anon68;
						uint8_t* anon69 = (uint8_t*)&alloca1.field5.field0;
						*anon69 = (uint8_t)anon68 & 0xf;
						alloca1.field9.field0 = 4196528;
						uint16_t phi70 = *(uint16_t*)(alloca1.field8.field0 + 28);
						uint32_t anon72 = (__zext uint32_t)*(uint16_t*)(alloca1.field8.field0 + 28);
						phi71 = anon72;
						uint8_t phi73 = (uint8_t)*(uint16_t*)(alloca1.field8.field0 + 28);
						uint32_t phi74 = 0;
						if ((anon68 & 0xf) == 0)
						{
							uint32_t anon75 = anon72 | 0xf;
							alloca1.field1.field0 = (__zext uint64_t)anon75;
							alloca1.field9.field0 = 4196533;
							*(uint8_t*)&alloca1.field3.field0 = 1;
							phi70 = (uint16_t)anon75;
							phi71 = anon75;
							phi73 = (uint8_t)anon75;
							anon76 = (uint32_t*)&alloca1.field3.field0;
							phi74 = *anon76;
						}
						uint16_t phi_in77 = phi70;
						alloca1.field5.field0 = (__zext uint64_t)(phi74 & 0xfffffff);
						alloca1.field3.field0 = 0;
						uint32_t anon79 = (__zext uint32_t)*(uint16_t*)(alloca1.field8.field0 + 26);
						uint32_t anon78 = anon79 ^ phi71;
						alloca1.field6.field0 = (__zext uint64_t)anon78;
						uint8_t* anon80 = (uint8_t*)&alloca1.field6.field0;
						uint8_t anon81 = (uint8_t)anon78 & 0xf0;
						*anon80 = anon81;
						alloca1.field9.field0 = 4196547;
						uint32_t phi82 = phi71;
						uint32_t phi83 = 0;
						if (anon81 == 0)
						{
							*(uint8_t*)&alloca1.field1.field0 = phi73 | 0xf0;
							alloca1.field9.field0 = 4196551;
							*(uint8_t*)&alloca1.field3.field0 = 1;
							anon84 = (uint32_t*)&alloca1.field1.field0;
							phi_in77 = (uint16_t)*anon84;
							phi82 = *anon84;
							phi83 = *anon76;
						}
						uint28_t anon85 = (uint28_t)phi74 + (uint28_t)phi83;
						alloca1.field5.field0 = (__zext uint64_t)anon85;
						alloca1.field3.field0 = 0;
						uint12_t anon87 = (uint12_t)*(uint16_t*)(alloca1.field8.field0 + 26);
						uint12_t anon86 = anon87 ^ (uint12_t)phi82;
						alloca1.field6.field0 = (__zext uint64_t)anon86;
						alloca1.field9.field0 = 4196566;
						uint16_t phi88 = phi_in77;
						uint32_t phi89 = 0;
						uint32_t phi90 = phi82 & 0xfff;
						if (anon86 < 256)
						{
							((uint8_t*)&alloca1.field1.field0)[1] = (uint8_t)(*(uint16_t*)(alloca1.field8.field0 + 28) >> 8) | 0xf;
							alloca1.field9.field0 = 4196571;
							*(uint8_t*)&alloca1.field3.field0 = 1;
							phi88 = (uint16_t)*anon84;
							phi89 = *anon76;
							phi90 = *anon84;
						}
						uint28_t anon91 = anon85 + (uint28_t)phi89;
						alloca1.field5.field0 = (__zext uint64_t)anon91;
						alloca1.field3.field0 = 0;
						uint32_t anon92 = anon79 ^ phi90;
						alloca1.field6.field0 = (__zext uint64_t)anon92;
						alloca1.field9.field0 = 4196586;
						uint32_t phi93 = 0;
						uint16_t phi94 = phi88;
						if ((uint16_t)anon92 < 4096)
						{
							anon95 = (uint16_t*)&alloca1.field1.field0;
							uint16_t anon96 = phi88 | 0xf000;
							*anon95 = anon96;
							alloca1.field9.field0 = 4196592;
							*(uint8_t*)&alloca1.field3.field0 = 1;
							phi93 = *anon76;
							phi94 = anon96;
						}
						*anon95 = phi94 >> 12 | phi94 << 4;
						alloca1.field5.field0 = 0;
						uint64_t anon97 = (__zext uint64_t)((uint28_t)phi93 + anon91) << 4;
						alloca1.field3.field0 = anon97;
						uint32_t anon98 = anon79 ^ *anon84;
						alloca1.field6.field0 = (__zext uint64_t)anon98;
						*anon80 = (uint8_t)anon98 & 0xf;
						alloca1.field9.field0 = 4196613;
						uint8_t phi99 = (uint8_t)(phi94 >> 4);
						uint32_t phi100 = *anon84;
						uint32_t phi101 = 0;
						if ((anon98 & 0xf) == 0)
						{
							uint32_t anon102 = *anon84 | 0xf;
							alloca1.field1.field0 = (__zext uint64_t)anon102;
							alloca1.field9.field0 = 4196619;
							*anon69 = 1;
							phi99 = (uint8_t)(*anon84 >> 8);
							phi100 = anon102;
							anon103 = (uint32_t*)&alloca1.field5.field0;
							phi101 = *anon103;
						}
						uint16_t anon104 = (uint16_t)anon97 + (uint16_t)phi101;
						alloca1.field3.field0 = (__zext uint64_t)anon104;
						alloca1.field5.field0 = 0;
						uint32_t anon105 = anon79 ^ phi100;
						alloca1.field6.field0 = (__zext uint64_t)anon105;
						uint8_t anon106 = (uint8_t)anon105 & 0xf0;
						*anon80 = anon106;
						alloca1.field9.field0 = 4196633;
						uint32_t phi107 = phi100;
						uint32_t phi108 = 0;
						if (anon106 == 0)
						{
							*(uint8_t*)&alloca1.field1.field0 = (uint8_t)phi100 | 0xf0;
							alloca1.field9.field0 = 4196638;
							*anon69 = 1;
							phi107 = *anon84;
							phi108 = *anon103;
						}
						uint16_t anon109 = (uint16_t)phi108 + anon104;
						alloca1.field5.field0 = (__zext uint64_t)anon109;
						alloca1.field3.field0 = 0;
						uint12_t anon110 = anon87 ^ (uint12_t)phi107;
						alloca1.field6.field0 = (__zext uint64_t)anon110;
						alloca1.field9.field0 = 4196653;
						uint32_t phi111 = phi107 & 0xfff;
						uint32_t phi112 = 0;
						if (anon110 < 256)
						{
							((uint8_t*)&alloca1.field1.field0)[1] = phi99 | 0xf;
							alloca1.field9.field0 = 4196658;
							*(uint8_t*)&alloca1.field3.field0 = 1;
							phi111 = *anon84;
							phi112 = *anon76;
						}
						uint16_t anon113 = anon109 + (uint16_t)phi112;
						alloca1.field5.field0 = (__zext uint64_t)anon113;
						alloca1.field3.field0 = 0;
						uint32_t anon114 = anon79 ^ phi111;
						alloca1.field6.field0 = (__zext uint64_t)anon114;
						alloca1.field9.field0 = 4196673;
						uint32_t phi115 = 0;
						uint16_t anon117 = (uint16_t)phi111;
						phi116 = anon117;
						if ((uint16_t)anon114 < 4096)
						{
							uint16_t anon118 = anon117 | 0xf000;
							*anon95 = anon118;
							alloca1.field9.field0 = 4196679;
							*(uint8_t*)&alloca1.field3.field0 = 1;
							phi115 = *anon76;
							phi116 = anon118;
						}
						*anon95 = phi116 >> 12 | phi116 << 4;
						uint16_t anon119 = anon113 + (uint16_t)phi115;
						alloca1.field5.field0 = (__zext uint64_t)anon119;
						alloca1.field3.field0 = 0;
						uint32_t anon120 = anon79 ^ *anon84;
						alloca1.field6.field0 = (__zext uint64_t)anon120;
						*anon80 = (uint8_t)anon120 & 0xf;
						alloca1.field9.field0 = 4196697;
						uint32_t phi121 = *anon84;
						uint8_t phi122 = (uint8_t)(phi116 >> 4);
						uint32_t phi123 = 0;
						if ((anon120 & 0xf) == 0)
						{
							uint32_t anon124 = *anon84 | 0xf;
							alloca1.field1.field0 = (__zext uint64_t)anon124;
							alloca1.field9.field0 = 4196702;
							*(uint8_t*)&alloca1.field3.field0 = 1;
							phi121 = anon124;
							phi122 = (uint8_t)(*anon84 >> 8);
							phi123 = *anon76;
						}
						uint32_t phi125 = phi121;
						uint16_t anon126 = anon119 + (uint16_t)phi123;
						alloca1.field5.field0 = (__zext uint64_t)anon126;
						alloca1.field3.field0 = 0;
						uint32_t anon127 = anon79 ^ phi125;
						alloca1.field6.field0 = (__zext uint64_t)anon127;
						uint8_t anon128 = (uint8_t)anon127 & 0xf0;
						*anon80 = anon128;
						alloca1.field9.field0 = 4196716;
						uint32_t phi129 = 0;
						if (anon128 == 0)
						{
							*(uint8_t*)&alloca1.field1.field0 = (uint8_t)phi125 | 0xf0;
							alloca1.field9.field0 = 4196720;
							*(uint8_t*)&alloca1.field3.field0 = 1;
							phi125 = *anon84;
							phi129 = *anon76;
						}
						uint16_t anon130 = anon126 + (uint16_t)phi129;
						alloca1.field5.field0 = (__zext uint64_t)anon130;
						alloca1.field3.field0 = 0;
						uint12_t anon131 = anon87 ^ (uint12_t)phi125;
						alloca1.field6.field0 = (__zext uint64_t)anon131;
						alloca1.field9.field0 = 4196735;
						uint32_t phi132 = phi125 & 0xfff;
						uint32_t phi133 = 0;
						if (anon131 < 256)
						{
							((uint8_t*)&alloca1.field1.field0)[1] = phi122 | 0xf;
							alloca1.field9.field0 = 4196740;
							*(uint8_t*)&alloca1.field3.field0 = 1;
							phi132 = *anon84;
							phi133 = *anon76;
						}
						uint16_t anon134 = anon130 + (uint16_t)phi133;
						alloca1.field5.field0 = (__zext uint64_t)anon134;
						alloca1.field3.field0 = 0;
						uint32_t anon135 = anon79 ^ phi132;
						alloca1.field6.field0 = (__zext uint64_t)anon135;
						alloca1.field9.field0 = 4196755;
						uint32_t phi136 = 0;
						uint16_t anon138 = (uint16_t)phi132;
						phi137 = anon138;
						if ((uint16_t)anon135 < 4096)
						{
							uint16_t anon139 = anon138 | 0xf000;
							*anon95 = anon139;
							alloca1.field9.field0 = 4196761;
							*(uint8_t*)&alloca1.field3.field0 = 1;
							phi136 = *anon76;
							phi137 = anon139;
						}
						*anon95 = phi137 >> 12 | phi137 << 4;
						uint16_t anon140 = anon134 + (uint16_t)phi136;
						alloca1.field5.field0 = (__zext uint64_t)anon140;
						alloca1.field3.field0 = 0;
						uint32_t anon141 = anon79 ^ *anon84;
						alloca1.field6.field0 = (__zext uint64_t)anon141;
						*anon80 = (uint8_t)anon141 & 0xf;
						alloca1.field9.field0 = 4196779;
						uint32_t phi142 = *anon84;
						uint8_t phi143 = (uint8_t)(phi137 >> 4);
						uint32_t phi144 = 0;
						if ((anon141 & 0xf) == 0)
						{
							uint32_t anon145 = *anon84 | 0xf;
							alloca1.field1.field0 = (__zext uint64_t)anon145;
							alloca1.field9.field0 = 4196784;
							*(uint8_t*)&alloca1.field3.field0 = 1;
							phi142 = anon145;
							phi143 = (uint8_t)(*anon84 >> 8);
							phi144 = *anon76;
						}
						uint16_t anon146 = anon140 + (uint16_t)phi144;
						alloca1.field5.field0 = (__zext uint64_t)anon146;
						alloca1.field3.field0 = 0;
						uint32_t anon147 = anon79 ^ phi142;
						alloca1.field6.field0 = (__zext uint64_t)anon147;
						uint8_t anon148 = (uint8_t)anon147 & 0xf0;
						*anon80 = anon148;
						alloca1.field9.field0 = 4196798;
						if (anon148 == 0)
						{
							uint8_t* anon149 = (uint8_t*)&alloca1.field1.field0;
							*anon149 = (uint8_t)phi142 | 0xf0;
							alloca1.field9.field0 = 4196802;
							*(uint8_t*)&alloca1.field3.field0 = 1;
							phi150 = anon149;
							phi151 = *anon84;
							phi152 = *anon76;
						}
						else 
						{
							phi150 = (uint8_t*)&alloca1.field1.field0;
							phi151 = phi142;
							phi152 = 0;
						}
						uint32_t phi153 = phi151;
						uint16_t anon154 = anon146 + (uint16_t)phi152;
						alloca1.field5.field0 = (__zext uint64_t)anon154;
						alloca1.field3.field0 = 0;
						uint12_t anon155 = anon87 ^ (uint12_t)phi153;
						alloca1.field6.field0 = (__zext uint64_t)anon155;
						alloca1.field9.field0 = 4196817;
						uint32_t phi156 = 0;
						if (anon155 < 256)
						{
							phi150[1] = phi143 | 0xf;
							alloca1.field9.field0 = 4196822;
							*(uint8_t*)&alloca1.field3.field0 = 1;
							phi156 = *anon76;
							phi153 = *anon84;
						}
						uint16_t anon157 = (uint16_t)phi156 + anon154;
						alloca1.field3.field0 = (__zext uint64_t)anon157;
						alloca1.field6.field0 = 4198067;
						*phi150 = (__zext uint8_t)((*(uint16_t*)(alloca1.field8.field0 + 26) ^ (uint16_t)phi153) < 4096);
						uint16_t anon158 = (__zext uint16_t)((*(uint16_t*)(alloca1.field8.field0 + 26) ^ (uint16_t)phi153) < 4096) + anon157;
						*(uint16_t*)(alloca1.field8.field0 + 30) = anon158;
						alloca1.field5.field0 = (__zext uint64_t)anon158;
						alloca1.field1.field0 = 0;
						alloca1.field9.field0 = 4196858;
						uint32_t anon159 = printf((uint8_t*)0x400eb3);
						alloca1.field1.field0 = (__zext uint64_t)anon159;
						alloca1.field9.field0 = 4196864;
						break;
					}
				}
				else if (*(uint8_t*)**anon60 != 0 && *(uint8_t*)**anon60 == 0 && *(uint8_t*)**anon60 == 0 || *(uint8_t*)**anon60 == 0 && *(uint8_t*)**anon60 == 0 || *(uint8_t*)**anon60 != 0 && *(uint8_t*)**anon60 != 0)
				{
					alloca1.field5.field0 = alloca1.field8.field0 + 30;
					alloca1.field9.field0 = 4197525;
				}
			}
			uint32_t* anon160 = (uint32_t*)(alloca1.field8.field0 + 12);
			*anon160 = 0;
			alloca1.field9.field0 = 4196881;
			if (*anon66 != 0)
			{
				uint16_t phi281;
				uint64_t anon161 = (__zext uint64_t)*(uint16_t*)(alloca1.field8.field0 + 28);
				alloca1.field1.field0 = anon161;
				uint64_t anon162 = alloca1.field15.field0 + 4294967295 & 0xffffffff;
				alloca1.field3.field0 = anon162;
				uint16_t* anon164 = (uint16_t*)(alloca1.field8.field0 + 26);
				uint64_t anon163 = (__zext uint64_t)*anon164;
				alloca1.field4.field0 = anon163;
				alloca1.field11.field0 = (__zext uint64_t)*(uint16_t*)(alloca1.field8.field0 + 30);
				alloca1.field10.field0 = alloca1.field14.field0;
				alloca1.field7.field0 = 0;
				uint64_t anon165 = anon162 + anon162 + 2 + alloca1.field14.field0;
				alloca1.field5.field0 = anon165;
				uint16_t anon167 = *(uint16_t*)(alloca1.field8.field0 + 28) | 0xf;
				uint64_t anon166 = (__zext uint64_t)anon167;
				alloca1.field12.field0 = anon166;
				alloca1.field9.field0 = 4196926;
				uint32_t phi_in168 = 0;
				uint16_t phi_in169 = 0;
				uint16_t phi_in170 = 0;
				uint64_t phi_in171 = alloca1.field14.field0;
				while (true)
				{
					uint16_t phi180;
					uint16_t phi181;
					uint32_t phi_in182;
					uint32_t phi183;
					uint8_t phi184;
					uint32_t anon190;
					uint32_t* phi192;
					uint32_t phi194;
					uint16_t phi195;
					uint32_t phi196;
					uint16_t phi199;
					uint16_t* anon201;
					uint32_t* anon203;
					uint8_t phi209;
					uint16_t phi226;
					uint8_t phi234;
					uint16_t phi252;
					uint8_t phi260;
					uint8_t* phi268;
					uint32_t phi269;
					uint32_t phi270;
					uint32_t phi172 = phi_in168;
					uint16_t phi173 = phi_in169;
					uint16_t phi174 = phi_in170;
					uint64_t phi175 = phi_in171;
					alloca1.field6.field0 = anon163;
					uint64_t anon176 = (__zext uint64_t)*(uint16_t*)phi175;
					alloca1.field4.field0 = anon176;
					uint16_t anon177 = *(uint16_t*)(alloca1.field8.field0 + 28) ^ *(uint16_t*)phi175;
					alloca1.field16.field0 = (__zext uint64_t)anon177;
					alloca1.field9.field0 = 4197376;
					uint16_t anon178 = anon177 >> 8;
					if ((anon178 & 0xf) == 0)
					{
						alloca1.field3.field0 = anon166;
						alloca1.field17.field0 = 2;
						uint16_t anon179 = anon167 ^ *(uint16_t*)phi175;
						alloca1.field16.field0 = (__zext uint64_t)anon179;
						alloca1.field9.field0 = 4196949;
						alloca1.field13.field0 = 1;
						phi180 = anon167;
						phi181 = anon179;
						phi_in182 = 1;
						phi183 = 2;
						phi184 = (uint8_t)(anon179 >> 8);
					}
					else 
					{
						alloca1.field3.field0 = anon161;
						alloca1.field17.field0 = 1;
						alloca1.field13.field0 = 0;
						alloca1.field9.field0 = 4197392;
						phi180 = *(uint16_t*)(alloca1.field8.field0 + 28);
						phi181 = anon177;
						phi_in182 = 0;
						phi183 = 1;
						phi184 = (uint8_t)anon178 & 0xf;
					}
					uint16_t phi_in185 = phi181;
					alloca1.field9.field0 = 4196955;
					uint32_t phi186 = (__zext uint32_t)phi180;
					uint16_t phi187 = phi_in185;
					uint32_t phi188 = phi_in182;
					if (phi184 < 16)
					{
						*(uint8_t*)&alloca1.field3.field0 = (uint8_t)phi180 | 0xf0;
						alloca1.field13.field0 = (__zext uint64_t)phi183;
						alloca1.field9.field0 = 4196967;
						anon190 = (__zext uint32_t)*(uint16_t*)phi175;
						uint32_t anon189 = anon190 ^ *anon76;
						alloca1.field16.field0 = (__zext uint64_t)anon189;
						phi186 = *anon76;
						phi187 = (uint16_t)anon189;
						phi188 = phi183;
					}
					alloca1.field17.field0 = 0;
					alloca1.field9.field0 = 4196978;
					if ((phi187 & 0xf00) == 0)
					{
						((uint8_t*)&alloca1.field3.field0)[1] = (uint8_t)(phi180 >> 8) | 0xf;
						((uint8_t*)&alloca1.field17.field0)[1] = 1;
						alloca1.field9.field0 = 4196990;
						uint32_t anon191 = anon190 ^ *anon76;
						alloca1.field16.field0 = (__zext uint64_t)anon191;
						uint32_t* anon193 = (uint32_t*)&alloca1.field17.field0;
						phi192 = anon193;
						phi194 = *anon76;
						phi195 = (uint16_t)anon191;
						phi196 = *anon193;
					}
					else 
					{
						phi192 = (uint32_t*)&alloca1.field17.field0;
						phi194 = phi186;
						phi195 = phi187 & 0xfff;
						phi196 = 0;
					}
					uint28_t anon197 = (uint28_t)phi196 + (uint28_t)phi188;
					alloca1.field17.field0 = (__zext uint64_t)anon197;
					alloca1.field13.field0 = 0;
					alloca1.field9.field0 = 4197004;
					uint32_t phi198 = 0;
					uint16_t anon200 = (uint16_t)phi194;
					phi199 = anon200;
					if (phi195 < 4096)
					{
						anon201 = (uint16_t*)&alloca1.field3.field0;
						uint16_t anon202 = anon200 | 0xf000;
						*anon201 = anon202;
						alloca1.field9.field0 = 4197012;
						((uint8_t*)&alloca1.field13.field0)[1] = 1;
						anon203 = (uint32_t*)&alloca1.field13.field0;
						phi198 = *anon203;
						phi199 = anon202;
					}
					*anon201 = phi199 >> 12 | phi199 << 4;
					alloca1.field17.field0 = 0;
					uint32_t anon204 = (__zext uint32_t)((uint28_t)phi198 + anon197) << 4;
					alloca1.field13.field0 = (__zext uint64_t)anon204;
					uint32_t anon205 = anon190 ^ *anon76;
					alloca1.field16.field0 = (__zext uint64_t)anon205;
					alloca1.field9.field0 = 4197038;
					uint8_t phi206 = (uint8_t)(phi199 >> 4);
					uint32_t phi207 = *anon76;
					uint32_t phi208 = anon205;
					uint32_t anon210 = anon205 >> 8;
					phi209 = (uint8_t)anon210 & 0xf;
					uint32_t phi211 = 0;
					if ((anon210 & 0xf) == 0)
					{
						uint32_t anon212 = *anon76 | 0xf;
						alloca1.field3.field0 = (__zext uint64_t)anon212;
						((uint8_t*)&alloca1.field17.field0)[1] = 1;
						alloca1.field9.field0 = 4197050;
						uint32_t anon213 = anon190 ^ anon212;
						alloca1.field16.field0 = (__zext uint64_t)anon213;
						phi206 = (uint8_t)(*anon76 >> 8);
						phi207 = anon212;
						phi208 = anon213;
						phi209 = (uint8_t)(anon213 >> 8);
						phi211 = *phi192;
					}
					uint32_t phi214 = phi208;
					uint32_t anon215 = anon204 + phi211;
					alloca1.field13.field0 = (__zext uint64_t)anon215;
					alloca1.field17.field0 = 0;
					alloca1.field9.field0 = 4197062;
					uint32_t phi216 = phi207;
					uint32_t phi217 = 0;
					if (phi209 < 16)
					{
						*(uint8_t*)&alloca1.field3.field0 = (uint8_t)phi207 | 0xf0;
						((uint8_t*)&alloca1.field17.field0)[1] = 1;
						alloca1.field9.field0 = 4197074;
						uint32_t anon218 = anon190 ^ *anon76;
						alloca1.field16.field0 = (__zext uint64_t)anon218;
						phi216 = *anon76;
						phi214 = anon218;
						phi217 = *phi192;
					}
					uint32_t phi219 = phi216;
					uint32_t anon220 = anon215 + phi217;
					alloca1.field13.field0 = (__zext uint64_t)anon220;
					alloca1.field17.field0 = 0;
					alloca1.field9.field0 = 4197088;
					uint16_t phi221 = (uint16_t)phi214 & 0xfff;
					uint32_t phi222 = 0;
					if ((phi214 & 0xf00) == 0)
					{
						((uint8_t*)&alloca1.field3.field0)[1] = phi206 | 0xf;
						((uint8_t*)&alloca1.field17.field0)[1] = 1;
						alloca1.field9.field0 = 4197100;
						uint32_t anon223 = anon190 ^ *anon76;
						alloca1.field16.field0 = (__zext uint64_t)anon223;
						phi219 = *anon76;
						phi221 = (uint16_t)anon223;
						phi222 = *phi192;
					}
					uint32_t anon224 = phi222 + anon220;
					alloca1.field17.field0 = (__zext uint64_t)anon224;
					alloca1.field13.field0 = 0;
					alloca1.field9.field0 = 4197114;
					uint32_t phi225 = 0;
					uint16_t anon227 = (uint16_t)phi219;
					phi226 = anon227;
					if (phi221 < 4096)
					{
						uint16_t anon228 = anon227 | 0xf000;
						*anon201 = anon228;
						alloca1.field9.field0 = 4197122;
						((uint8_t*)&alloca1.field13.field0)[1] = 1;
						phi225 = *anon203;
						phi226 = anon228;
					}
					*anon201 = phi226 >> 12 | phi226 << 4;
					uint32_t anon229 = phi225 + anon224;
					alloca1.field13.field0 = (__zext uint64_t)anon229;
					alloca1.field17.field0 = 0;
					uint32_t anon230 = anon190 ^ *anon76;
					alloca1.field16.field0 = (__zext uint64_t)anon230;
					alloca1.field9.field0 = 4197144;
					uint32_t phi231 = *anon76;
					uint32_t phi232 = anon230;
					uint8_t phi233 = (uint8_t)(phi226 >> 4);
					uint32_t anon235 = anon230 >> 8;
					phi234 = (uint8_t)anon235 & 0xf;
					uint32_t phi236 = 0;
					if ((anon235 & 0xf) == 0)
					{
						uint32_t anon237 = *anon76 | 0xf;
						alloca1.field3.field0 = (__zext uint64_t)anon237;
						((uint8_t*)&alloca1.field17.field0)[1] = 1;
						alloca1.field9.field0 = 4197156;
						uint32_t anon238 = anon190 ^ anon237;
						alloca1.field16.field0 = (__zext uint64_t)anon238;
						phi231 = anon237;
						phi232 = anon238;
						phi233 = (uint8_t)(*anon76 >> 8);
						phi234 = (uint8_t)(anon238 >> 8);
						phi236 = *phi192;
					}
					uint32_t phi_in239 = phi232;
					uint32_t anon240 = anon229 + phi236;
					alloca1.field13.field0 = (__zext uint64_t)anon240;
					alloca1.field17.field0 = 0;
					alloca1.field9.field0 = 4197168;
					uint32_t phi_in241 = phi231;
					uint32_t phi242 = phi_in239;
					uint32_t phi243 = 0;
					if (phi234 < 16)
					{
						*(uint8_t*)&alloca1.field3.field0 = (uint8_t)phi231 | 0xf0;
						((uint8_t*)&alloca1.field17.field0)[1] = 1;
						alloca1.field9.field0 = 4197180;
						uint32_t anon244 = anon190 ^ *anon76;
						alloca1.field16.field0 = (__zext uint64_t)anon244;
						phi_in241 = *anon76;
						phi242 = anon244;
						phi243 = *phi192;
					}
					uint32_t anon245 = phi243 + anon240;
					alloca1.field17.field0 = (__zext uint64_t)anon245;
					alloca1.field13.field0 = 0;
					alloca1.field9.field0 = 4197194;
					uint32_t phi246 = phi_in241;
					uint16_t phi247 = (uint16_t)phi242 & 0xfff;
					uint32_t phi248 = 0;
					if ((phi242 & 0xf00) == 0)
					{
						((uint8_t*)&alloca1.field3.field0)[1] = phi233 | 0xf;
						((uint8_t*)&alloca1.field13.field0)[1] = 1;
						alloca1.field9.field0 = 4197206;
						uint32_t anon249 = anon190 ^ *anon76;
						alloca1.field16.field0 = (__zext uint64_t)anon249;
						phi246 = *anon76;
						phi247 = (uint16_t)anon249;
						phi248 = *anon203;
					}
					uint32_t anon250 = phi248 + anon245;
					alloca1.field13.field0 = (__zext uint64_t)anon250;
					alloca1.field17.field0 = 0;
					alloca1.field9.field0 = 4197220;
					uint64_t phi251 = 0;
					uint16_t anon253 = (uint16_t)phi246;
					phi252 = anon253;
					if (phi247 < 4096)
					{
						uint16_t anon254 = anon253 | 0xf000;
						*anon201 = anon254;
						alloca1.field9.field0 = 4197228;
						((uint8_t*)&alloca1.field17.field0)[1] = 1;
						phi251 = alloca1.field17.field0;
						phi252 = anon254;
					}
					*anon201 = phi252 >> 12 | phi252 << 4;
					uint32_t anon255 = anon250 + (uint32_t)phi251;
					alloca1.field16.field0 = (__zext uint64_t)anon255;
					alloca1.field17.field0 = 0;
					uint32_t anon256 = anon190 ^ *anon76;
					alloca1.field13.field0 = (__zext uint64_t)anon256;
					alloca1.field9.field0 = 4197251;
					uint32_t phi257 = anon256;
					uint8_t phi258 = (uint8_t)(phi252 >> 4);
					uint32_t phi259 = *anon76;
					uint32_t anon261 = anon256 >> 8;
					phi260 = (uint8_t)anon261 & 0xf;
					uint32_t phi262 = 0;
					if ((anon261 & 0xf) == 0)
					{
						uint32_t anon263 = *anon76 | 0xf;
						alloca1.field3.field0 = (__zext uint64_t)anon263;
						((uint8_t*)&alloca1.field17.field0)[1] = 1;
						alloca1.field9.field0 = 4197263;
						uint32_t anon264 = anon190 ^ anon263;
						alloca1.field13.field0 = (__zext uint64_t)anon264;
						phi257 = anon264;
						phi258 = (uint8_t)(*anon76 >> 8);
						phi259 = anon263;
						phi260 = (uint8_t)(anon264 >> 8);
						phi262 = *phi192;
					}
					uint32_t anon265 = anon255 + phi262;
					alloca1.field16.field0 = (__zext uint64_t)anon265;
					alloca1.field17.field0 = 0;
					alloca1.field9.field0 = 4197275;
					if (phi260 < 16)
					{
						uint8_t* anon266 = (uint8_t*)&alloca1.field3.field0;
						*anon266 = (uint8_t)phi259 | 0xf0;
						((uint8_t*)&alloca1.field17.field0)[1] = 1;
						alloca1.field9.field0 = 4197287;
						uint32_t anon267 = anon190 ^ *anon76;
						alloca1.field13.field0 = (__zext uint64_t)anon267;
						phi268 = anon266;
						phi269 = anon267;
						phi270 = *phi192;
					}
					else 
					{
						phi268 = (uint8_t*)&alloca1.field3.field0;
						phi269 = phi257;
						phi270 = 0;
					}
					uint32_t anon271 = anon265 + phi270;
					alloca1.field16.field0 = (__zext uint64_t)anon271;
					alloca1.field17.field0 = 0;
					alloca1.field9.field0 = 4197301;
					uint32_t phi272 = phi269 & 0xfff;
					uint32_t phi273 = 0;
					if ((phi269 & 0xf00) == 0)
					{
						phi268[1] = phi258 | 0xf;
						((uint8_t*)&alloca1.field17.field0)[1] = 1;
						uint32_t anon275 = anon190 ^ *anon76;
						uint64_t anon274 = (__zext uint64_t)anon275;
						alloca1.field3.field0 = anon274;
						alloca1.field9.field0 = 4197312;
						alloca1.field13.field0 = anon274;
						phi272 = anon275;
						phi273 = *phi192;
					}
					uint32_t anon276 = anon271 + phi273;
					alloca1.field16.field0 = (__zext uint64_t)anon276;
					alloca1.field3.field0 = 0;
					alloca1.field6.field0 = anon176;
					alloca1.field4.field0 = anon163;
					*phi268 = (__zext uint8_t)((uint16_t)phi272 < 4096);
					uint32_t anon277 = *anon76 + anon276;
					alloca1.field3.field0 = (__zext uint64_t)anon277;
					alloca1.field9.field0 = 4197345;
					uint64_t anon278 = phi175 + 2;
					alloca1.field10.field0 = anon278;
					if ((uint16_t)anon277 == *(uint16_t*)(alloca1.field8.field0 + 30))
					{
						uint64_t anon279 = (__zext uint64_t)phi173;
						alloca1.field3.field0 = anon279;
						uint32_t anon280 = phi172 + 1;
						alloca1.field7.field0 = (__zext uint64_t)anon280;
						*(uint16_t*)(alloca1.field14.field0 + (anon279 << 1)) = *(uint16_t*)phi175;
						alloca1.field9.field0 = 4197412;
						uint16_t anon282 = (uint16_t)anon280;
						phi281 = anon282;
						phi_in168 = anon280;
						phi_in169 = anon282;
						phi_in170 = anon282;
						phi_in171 = anon278;
						if (anon278 == anon165)
						{
							break;
						}
					}
					else 
					{
						alloca1.field9.field0 = 4197354;
						phi281 = phi174;
						phi_in168 = phi172;
						phi_in169 = phi173;
						phi_in170 = phi174;
						phi_in171 = anon278;
						if (anon278 == anon165)
						{
							break;
						}
					}
				}
				*anon160 = (uint32_t)alloca1.field15.field0;
				*anon164 = *anon164;
				alloca1.field9.field0 = 4197431;
				if (phi281 == 0)
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
						alloca1.field15.field0 = (__zext uint64_t)phi281;
						alloca1.field9.field0 = 4197453;
						uint32_t anon283 = rand();
						int64_t anon285 = (__sext int64_t)anon283 % (__sext int64_t)*anon66 << 32;
						int64_t anon284 = anon285 >> 32;
						alloca1.field4.field0 = anon284;
						uint64_t anon286 = (__zext uint64_t)*(uint16_t*)(anon284 + (anon285 >> 31));
						alloca1.field1.field0 = anon286;
						*(uint16_t*)(anon286 + 28) = *(uint16_t*)(anon284 + (anon285 >> 31));
						alloca1.field9.field0 = 4197475;
						phi65 = *anon66;
					}
				}
			}
		}
		while (*anon66 != 0);
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
