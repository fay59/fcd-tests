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
	struct { uint16_t field0; uint32_t field1; uint8_t field2[10]; uint8_t field3[2]; uint16_t field4; uint16_t field5; uint8_t field6[48]; uint32_t field7; uint8_t field8[4]; uint64_t field9; } alloca1;
	uint32_t anon7;
	uint64_t phi_in10;
	alloca1.field9 = arg0;
	alloca1.field7 = 0;
	alloca1.field1 = (uint32_t)arg2;
	uint64_t* anon2 = (uint64_t*)arg3;
	uint64_t anon3 = *anon2 + strlen((uint8_t*)*anon2) - 1;
	*anon2 = anon3;
	uint8_t* anon4 = (uint8_t*)anon3;
	*anon4 = *anon4 ^ 0x64;
	uint64_t alloca5 = 0;
	uint64_t anon6 = time(null);
	alloca5 = 0;
	srand((uint32_t)anon6);
	if (alloca1.field1 == 2)
	{
		alloca5 = 0;
		anon7 = sscanf(*(uint8_t**)(arg3 + 8), (uint8_t*)0x400e84);
		alloca5 = (__zext uint64_t)anon7;
		if (anon7 != 0)
		{
			alloca5 = (__zext uint64_t)alloca1.field1;
			if (alloca1.field1 != 0)
			{
				uint32_t anon9 = alloca1.field1 * alloca1.field1;
				uint32_t anon8 = anon9 * anon9;
				alloca5 = (__zext uint64_t)anon8;
				phi_in10 = (__sext int64_t)anon8;
			}
		}
	}
	if (alloca1.field1 != 2 || anon7 == 0 || anon7 != 0 && alloca1.field1 == 0)
	{
		alloca1.field1 = 6;
		alloca1.field1 = 6;
		phi_in10 = 1296;
	}
	uint8_t* anon12 = calloc(phi_in10, 2);
	uint64_t anon11 = (uint64_t)anon12;
	alloca5 = anon11;
	if (anon12 != null)
	{
		uint64_t phi_in15;
		uint32_t phi_in16;
		uint64_t phi_in17;
		uint32_t anon91;
		uint32_t anon14 = alloca1.field1 * alloca1.field1;
		uint32_t anon13 = anon14 * anon14;
		if (anon13 < 2)
		{
			phi_in15 = (uint64_t)&alloca1.field3;
			phi_in16 = 1;
			phi_in17 = 1;
		}
		else 
		{
			uint64_t anon26;
			bool anon38;
			uint32_t anon42;
			uint64_t anon20 = (__zext uint64_t)alloca1.field1;
			uint64_t anon19 = anon20 << 8;
			uint16_t anon18 = (uint16_t)(4096 - anon19);
			alloca1.field0 = anon18;
			uint32_t phi_in21 = 1;
			uint64_t phi_in22 = 1;
			do
			{
				uint32_t phi23 = phi_in21;
				uint64_t anon25 = phi_in22 << 1;
				uint64_t anon24 = anon25 + anon11;
				alloca5 = anon24;
				anon26 = arg1 - 70;
				uint32_t anon28 = (__zext uint32_t)*(uint16_t*)(anon11 + anon25 - 2) + 1;
				uint16_t anon27 = (uint16_t)anon28;
				*(uint16_t*)anon26 = anon27;
				*(uint16_t*)anon24 = anon27;
				if (((alloca1.field1 ^ anon28) & 0xf) == 0)
				{
					uint32_t anon31 = 16 - alloca1.field1;
					uint32_t anon30 = anon28 + (anon31 & 0xffff);
					uint16_t anon29 = (uint16_t)anon30;
					*(uint16_t*)anon26 = anon29;
					*(uint16_t*)anon24 = anon29;
					uint64_t anon32 = anon20 << 4;
					uint32_t anon33 = anon28 + anon31;
					if ((((uint32_t)anon32 ^ anon33) & 0xf0) == 0)
					{
						uint32_t anon35 = (uint32_t)(256 - anon32);
						uint16_t anon34 = (uint16_t)(anon30 + anon35);
						*(uint16_t*)anon26 = anon34;
						*(uint16_t*)anon24 = anon34;
						if ((((uint32_t)anon19 ^ anon33 + anon35) & 0xf00) == 0)
						{
							uint16_t anon36 = anon34 + anon18;
							uint16_t anon37 = (uint16_t)alloca1.field1 << 12;
							*(uint16_t*)anon26 = anon36 - ((anon37 ^ anon36) < 4096 ? anon37 : 0);
							*(uint16_t*)anon24 = (anon37 ^ anon36) < 4096 ? 0 : anon36;
						}
					}
				}
				uint16_t anon41 = (uint16_t)phi23 + 1;
				uint32_t anon40 = (__zext uint32_t)anon41;
				uint32_t anon39 = anon13 - anon40;
				anon42 = phi23 + 1 & 0xffff;
				anon38 = (uint8_t)(anon39 >> 31) == (__zext uint8_t)llvm.ssub.with.overflow.i32(anon13, anon42).field1 & anon39 != 0;
				if (anon38)
				{
					phi_in21 = anon40;
					phi_in22 = (__zext uint64_t)anon41;
				}
			}
			while (anon38);
			phi_in15 = anon26;
			phi_in16 = anon42;
			phi_in17 = (__zext uint64_t)anon42;
		}
		uint64_t anon43 = (uint64_t)&alloca1.field4;
		alloca5 = anon43;
		alloca5 = 0;
		alloca5 = (__zext uint64_t)*(uint16_t*)(anon11 + ((__sext int64_t)rand() % (__zext uint64_t)phi_in16 << 32 >> 31));
		uint8_t** anon44 = (uint8_t**)arg3;
		*(uint16_t*)(**anon44 == 0 ? phi_in15 : anon43) = *(uint16_t*)(anon11 + ((__sext int64_t)rand() % (__zext uint64_t)phi_in16 << 32 >> 31));
		do
		{
			while (true)
			{
				alloca5 = 0;
				alloca5 = (__zext uint64_t)printf((uint8_t*)0x400e95);
				uint8_t* anon45 = (uint8_t*)arg3;
				*(uint8_t*)&alloca5 = *anon45;
				uint8_t anon46 = anon45[1];
				((uint8_t*)&alloca5)[1] = anon46;
				uint48_t* anon47 = (uint48_t*)&anon45[2];
				*(uint48_t*)&((uint8_t*)&alloca5)[2] = *anon47;
				if (**anon44 == 0)
				{
					if (**anon44 == 0)
					{
						if (**anon44 != 0)
						{
							alloca1.field4 = alloca1.field4 - 4369;
						}
					}
					else 
					{
						alloca5 = 0;
						alloca5 = (__zext uint64_t)scanf((uint8_t*)0x400eaa);
						*(uint8_t*)&alloca5 = *anon45;
						((uint8_t*)&alloca5)[1] = anon46;
						*(uint48_t*)&((uint8_t*)&alloca5)[2] = *anon47;
						if (**anon44 != 0)
						{
							break;
						}
					}
				}
				else 
				{
					alloca5 = 0;
					alloca5 = (__zext uint64_t)printf((uint8_t*)0x400ea4);
					*(uint8_t*)&alloca5 = *anon45;
					((uint8_t*)&alloca5)[1] = anon46;
					*(uint48_t*)&((uint8_t*)&alloca5)[2] = *anon47;
				}
				if (**anon44 == 0 && **anon44 == 0 || **anon44 != 0 && **anon44 == 0 && **anon44 == 0 || **anon44 != 0 && **anon44 != 0)
				{
					alloca5 = 0;
					alloca5 = (__zext uint64_t)printf((uint8_t*)0x400eae);
					*(uint8_t*)&alloca5 = *anon45;
					((uint8_t*)&alloca5)[1] = anon46;
					*(uint48_t*)&((uint8_t*)&alloca5)[2] = *anon47;
				}
				if (**anon44 == 0)
				{
					if (**anon44 == 0 && **anon44 == 0 || **anon44 != 0 && **anon44 == 0 && **anon44 == 0 || **anon44 != 0 && **anon44 != 0)
					{
						uint32_t anon49;
						uint32_t phi_in50;
						uint8_t phi_in51;
						uint16_t phi_in52;
						uint8_t phi_in60;
						uint32_t phi_in61;
						uint32_t phi_in62;
						uint16_t phi_in63;
						uint16_t phi_in67;
						uint32_t phi_in73;
						uint8_t phi_in74;
						uint32_t phi_in75;
						uint16_t phi_in76;
						uint16_t phi_in80;
						uint32_t phi_in85;
						uint8_t phi_in86;
						uint32_t phi_in87;
						uint16_t phi_in88;
						alloca5 = (__zext uint64_t)alloca1.field4;
						if (((alloca1.field4 ^ *(uint16_t*)phi_in15) & 0xf) == 0)
						{
							anon49 = (__zext uint32_t)alloca1.field4;
							uint32_t anon48 = anon49 | 0xf;
							alloca5 = (__zext uint64_t)anon48;
							alloca1.field4 = (uint16_t)anon48;
							phi_in50 = anon48;
							phi_in51 = (uint8_t)anon48;
							phi_in52 = 1;
						}
						else 
						{
							phi_in50 = anon49;
							phi_in51 = (uint8_t)alloca1.field4 & 0xf;
							phi_in52 = 0;
						}
						uint16_t phi_in53 = 0;
						if (((uint8_t)*(uint16_t*)phi_in15 ^ (uint8_t)phi_in50) < 16)
						{
							*(uint8_t*)&alloca5 = phi_in51 | 0xf0;
							alloca1.field4 = (uint16_t)*(uint32_t*)&alloca5;
							phi_in50 = *(uint32_t*)&alloca5;
							phi_in53 = 1;
						}
						uint16_t phi_in54 = 0;
						uint32_t anon55 = (__zext uint32_t)*(uint16_t*)phi_in15;
						if (((anon55 ^ phi_in50) & 0xf00) == 0)
						{
							((uint8_t*)&alloca5)[1] = (uint8_t)(alloca1.field4 >> 8) | 0xf;
							alloca1.field4 = (uint16_t)*(uint32_t*)&alloca5;
							phi_in54 = 1;
							phi_in50 = *(uint32_t*)&alloca5;
						}
						uint16_t phi_in56 = 0;
						if ((*(uint16_t*)phi_in15 ^ (uint16_t)phi_in50) < 4096)
						{
							uint16_t anon57 = alloca1.field4 | 0xf000;
							*(uint16_t*)&alloca5 = anon57;
							phi_in56 = 1;
							alloca1.field4 = anon57;
						}
						uint16_t* anon58 = (uint16_t*)&alloca5;
						*anon58 = alloca1.field4 >> 12 | alloca1.field4 << 4;
						if (((anon55 ^ *(uint32_t*)&alloca5) & 0xf) == 0)
						{
							uint32_t anon59 = *(uint32_t*)&alloca5 | 0xf;
							alloca5 = (__zext uint64_t)anon59;
							phi_in60 = (uint8_t)(*(uint32_t*)&alloca5 >> 8);
							phi_in61 = anon59;
							phi_in62 = anon59;
							phi_in63 = 1;
						}
						else 
						{
							phi_in60 = (uint8_t)(alloca1.field4 >> 4);
							phi_in61 = *(uint32_t*)&alloca5;
							phi_in62 = *(uint32_t*)&alloca5 & 0xf;
							phi_in63 = 0;
						}
						uint16_t phi_in64 = 0;
						if ((phi_in61 & 0xf0) == 0)
						{
							*(uint8_t*)&alloca5 = (uint8_t)phi_in62 | 0xf0;
							phi_in61 = *(uint32_t*)&alloca5;
							phi_in64 = 1;
						}
						uint16_t phi_in65 = 0;
						if ((phi_in61 & 0xf00) == 0)
						{
							((uint8_t*)&alloca5)[1] = phi_in60 | 0xf;
							phi_in61 = *(uint32_t*)&alloca5;
							phi_in65 = 1;
						}
						uint16_t phi_in66 = 0;
						uint16_t anon68 = (uint16_t)phi_in61;
						phi_in67 = anon68;
						if ((uint16_t)phi_in61 < 4096)
						{
							uint16_t anon69 = anon68 | 0xf000;
							*anon58 = anon69;
							phi_in66 = 1;
							phi_in67 = anon69;
						}
						*anon58 = phi_in67 >> 12 | phi_in67 << 4;
						uint32_t anon70 = (__zext uint32_t)(*(uint16_t*)phi_in15 & 0xf);
						uint32_t anon71 = *(uint32_t*)&alloca5 & 0xf;
						if (anon70 == anon71)
						{
							uint32_t anon72 = *(uint32_t*)&alloca5 | 0xf;
							alloca5 = (__zext uint64_t)anon72;
							phi_in73 = anon72;
							phi_in74 = (uint8_t)(*(uint32_t*)&alloca5 >> 8);
							phi_in75 = anon72;
							phi_in76 = 1;
						}
						else 
						{
							phi_in73 = *(uint32_t*)&alloca5;
							phi_in74 = (uint8_t)(phi_in67 >> 4);
							phi_in75 = anon71;
							phi_in76 = 0;
						}
						uint16_t phi_in77 = 0;
						if ((phi_in73 & 0xf0) == 0)
						{
							*(uint8_t*)&alloca5 = (uint8_t)phi_in75 | 0xf0;
							phi_in73 = *(uint32_t*)&alloca5;
							phi_in77 = 1;
						}
						uint16_t phi_in78 = 0;
						if ((phi_in73 & 0xf00) == 0)
						{
							((uint8_t*)&alloca5)[1] = phi_in74 | 0xf;
							phi_in73 = *(uint32_t*)&alloca5;
							phi_in78 = 1;
						}
						uint16_t phi_in79 = 0;
						uint16_t anon81 = (uint16_t)phi_in73;
						phi_in80 = anon81;
						if ((uint16_t)phi_in73 < 4096)
						{
							uint16_t anon82 = anon81 | 0xf000;
							*anon58 = anon82;
							phi_in79 = 1;
							phi_in80 = anon82;
						}
						*anon58 = phi_in80 >> 12 | phi_in80 << 4;
						uint32_t anon83 = *(uint32_t*)&alloca5 & 0xf;
						if (anon70 == anon83)
						{
							uint32_t anon84 = *(uint32_t*)&alloca5 | 0xf;
							alloca5 = (__zext uint64_t)anon84;
							phi_in85 = anon84;
							phi_in86 = (uint8_t)(*(uint32_t*)&alloca5 >> 8);
							phi_in87 = anon84;
							phi_in88 = 1;
						}
						else 
						{
							phi_in85 = *(uint32_t*)&alloca5;
							phi_in86 = (uint8_t)(phi_in80 >> 4);
							phi_in87 = anon83;
							phi_in88 = 0;
						}
						uint16_t phi_in89 = 0;
						if ((phi_in85 & 0xf0) == 0)
						{
							*(uint8_t*)&alloca5 = (uint8_t)phi_in87 | 0xf0;
							phi_in85 = *(uint32_t*)&alloca5;
							phi_in89 = 1;
						}
						uint16_t phi_in90 = 0;
						if ((phi_in85 & 0xf00) == 0)
						{
							((uint8_t*)&alloca5)[1] = phi_in86 | 0xf;
							phi_in90 = 1;
							phi_in85 = *(uint32_t*)&alloca5;
						}
						alloca1.field5 = (__zext uint16_t)((uint16_t)phi_in85 < 4096) + phi_in90 + phi_in64 + (phi_in56 + phi_in52 + phi_in53 + phi_in54 << 4 | phi_in63) + phi_in65 + phi_in66 + phi_in76 + phi_in77 + phi_in78 + phi_in79 + phi_in88 + phi_in89;
						alloca5 = 0;
						alloca5 = (__zext uint64_t)printf((uint8_t*)0x400eb3);
						break;
					}
				}
			}
			alloca1.field1 = 0;
			anon91 = (uint32_t)phi_in17;
			if (anon91 != 0)
			{
				uint16_t phi_in183;
				uint64_t anon92 = (__zext uint64_t)alloca1.field4;
				alloca5 = anon92;
				uint64_t phi_in93 = anon11;
				uint64_t phi94 = 0;
				while (true)
				{
					uint64_t phi_in98;
					uint16_t phi_in100;
					uint16_t phi_in101;
					uint8_t phi_in102;
					uint64_t phi_in118;
					uint64_t phi_in120;
					uint16_t phi_in121;
					uint16_t phi_in122;
					uint64_t phi_in124;
					uint8_t phi_in125;
					uint16_t phi_in126;
					uint16_t phi_in130;
					uint64_t phi_in143;
					uint16_t phi_in145;
					uint16_t phi_in146;
					uint64_t phi_in148;
					uint64_t phi_in149;
					uint8_t phi_in150;
					uint16_t phi_in151;
					uint16_t phi_in155;
					uint64_t phi_in169;
					uint32_t phi_in171;
					uint64_t phi_in173;
					uint16_t phi_in174;
					uint64_t phi_in176;
					uint8_t phi_in177;
					uint16_t phi_in178;
					uint32_t phi_in180;
					uint16_t phi_in181;
					uint64_t anon184;
					uint64_t anon185;
					uint64_t phi95 = phi_in93;
					uint16_t anon97 = alloca1.field4 ^ *(uint16_t*)phi95;
					uint32_t anon96 = (__zext uint32_t)anon97 >> 8;
					if ((anon96 & 0xf) == 0)
					{
						uint16_t anon99 = alloca1.field4 | 0xf;
						phi_in98 = (__zext uint64_t)anon99;
						phi_in100 = anon99;
						phi_in101 = 1;
						phi_in101 = 2;
						phi_in102 = (uint8_t)(anon97 >> 8);
					}
					else 
					{
						phi_in98 = anon92;
						phi_in100 = alloca1.field4;
						phi_in101 = 0;
						phi_in101 = 1;
						phi_in102 = (uint8_t)anon96 & 0xf;
					}
					uint16_t phi_in103 = phi_in100 ^ *(uint16_t*)phi95;
					if (phi_in102 < 16)
					{
						uint64_t anon104 = phi_in98 & 0xff00 | (__zext uint64_t)(phi_in100 & 0xf | 0xf0);
						phi_in98 = anon104;
						uint16_t anon105 = (uint16_t)anon104;
						phi_in100 = anon105;
						phi_in103 = *(uint16_t*)phi95 ^ anon105;
					}
					uint16_t phi_in106 = 0;
					if ((phi_in103 & 0xf00) == 0)
					{
						uint64_t anon107 = phi_in98 & 0xffffffffffff00ff | (__zext uint64_t)(phi_in100 & 0xf000 | 0xf00);
						phi_in98 = anon107;
						uint16_t anon108 = (uint16_t)anon107;
						phi_in100 = anon108;
						phi_in103 = *(uint16_t*)phi95 ^ anon108;
						phi_in106 = 256;
					}
					uint16_t phi_in109 = 0;
					if (phi_in103 < 4096)
					{
						uint16_t anon110 = phi_in100 | 0xf000;
						phi_in98 = phi_in98 & 0xffffffffffff0000 | (__zext uint64_t)anon110;
						phi_in109 = 256;
						phi_in100 = anon110;
					}
					uint32_t anon112 = (__zext uint32_t)*(uint16_t*)phi95;
					uint16_t anon117 = phi_in100 << 4;
					uint16_t anon116 = phi_in100 >> 12 | anon117;
					uint64_t anon115 = (__zext uint64_t)anon116;
					uint64_t anon114 = phi_in98 & 0xffffffffffff0000 | anon115;
					uint32_t anon113 = (uint32_t)anon114;
					uint32_t anon111 = (anon112 ^ anon113) >> 8;
					if ((anon111 & 0xf) == 0)
					{
						uint32_t anon119 = anon113 | 0xf;
						phi_in118 = (__zext uint64_t)anon119;
						phi_in120 = anon114 >> 8 & 0xffffff;
						phi_in121 = (uint16_t)anon119;
						uint16_t anon123 = anon117 | 0xf;
						phi_in122 = anon123;
						phi_in124 = (__zext uint64_t)anon123;
						phi_in125 = (uint8_t)anon111;
						phi_in126 = 256;
					}
					else 
					{
						phi_in118 = anon114;
						phi_in120 = (__zext uint64_t)(phi_in100 >> 4);
						phi_in121 = anon116;
						phi_in122 = anon116;
						phi_in124 = anon115;
						phi_in125 = (uint8_t)anon111 & 0xf;
						phi_in126 = 0;
					}
					uint16_t phi_in127 = 0;
					if (phi_in125 < 16)
					{
						uint64_t anon128 = phi_in118 & 0xffffffffffffff00 | phi_in124 & 0xf | 0xf0;
						phi_in118 = anon128;
						uint16_t anon129 = (uint16_t)anon128;
						phi_in121 = anon129;
						phi_in122 = anon129;
						phi_in127 = 256;
					}
					uint16_t anon131 = *(uint16_t*)phi95 ^ phi_in122;
					phi_in130 = anon131;
					uint16_t phi_in132 = 0;
					if ((anon131 & 0xf00) == 0)
					{
						uint64_t anon133 = phi_in118 & 0xffffffffffff00ff | phi_in120 << 8 & 0xf000 | 0xf00;
						phi_in118 = anon133;
						uint16_t anon134 = (uint16_t)anon133;
						phi_in121 = anon134;
						phi_in130 = *(uint16_t*)phi95 ^ anon134;
						phi_in132 = 256;
					}
					uint16_t phi_in135 = 0;
					if (phi_in130 < 4096)
					{
						uint16_t anon136 = phi_in121 | 0xf000;
						phi_in118 = phi_in118 & 0xffffffffffff0000 | (__zext uint64_t)anon136;
						phi_in135 = 256;
						phi_in121 = anon136;
					}
					uint16_t anon142 = phi_in121 << 4;
					uint16_t anon141 = phi_in121 >> 12 | anon142;
					uint64_t anon140 = (__zext uint64_t)anon141;
					uint64_t anon139 = phi_in118 & 0xffffffffffff0000 | anon140;
					uint32_t anon138 = (uint32_t)anon139;
					uint32_t anon137 = (anon112 ^ anon138) >> 8;
					if ((anon137 & 0xf) == 0)
					{
						uint32_t anon144 = anon138 | 0xf;
						phi_in143 = (__zext uint64_t)anon144;
						phi_in145 = (uint16_t)anon144;
						uint16_t anon147 = anon142 | 0xf;
						phi_in146 = anon147;
						phi_in148 = anon139 >> 8 & 0xffffff;
						phi_in149 = (__zext uint64_t)anon147;
						phi_in150 = (uint8_t)anon137;
						phi_in151 = 256;
					}
					else 
					{
						phi_in143 = anon139;
						phi_in145 = anon141;
						phi_in146 = anon141;
						phi_in148 = (__zext uint64_t)(phi_in121 >> 4);
						phi_in149 = anon140;
						phi_in150 = (uint8_t)anon137 & 0xf;
						phi_in151 = 0;
					}
					uint16_t phi_in152 = 0;
					if (phi_in150 < 16)
					{
						uint64_t anon153 = phi_in143 & 0xffffffffffffff00 | phi_in149 & 0xf | 0xf0;
						phi_in143 = anon153;
						uint16_t anon154 = (uint16_t)anon153;
						phi_in145 = anon154;
						phi_in146 = anon154;
						phi_in152 = 256;
					}
					uint16_t anon156 = *(uint16_t*)phi95 ^ phi_in146;
					phi_in155 = anon156;
					uint16_t phi_in157 = 0;
					if ((anon156 & 0xf00) == 0)
					{
						uint64_t anon158 = phi_in143 & 0xffffffffffff00ff | phi_in148 << 8 & 0xf000 | 0xf00;
						phi_in143 = anon158;
						uint16_t anon159 = (uint16_t)anon158;
						phi_in145 = anon159;
						phi_in155 = *(uint16_t*)phi95 ^ anon159;
						phi_in157 = 256;
					}
					uint16_t phi_in160 = 0;
					if (phi_in155 < 4096)
					{
						uint16_t anon161 = phi_in145 | 0xf000;
						phi_in143 = phi_in143 & 0xffffffffffff0000 | (__zext uint64_t)anon161;
						phi_in160 = 256;
						phi_in145 = anon161;
					}
					uint16_t anon168 = phi_in145 << 4;
					uint16_t anon167 = phi_in145 >> 12 | anon168;
					uint64_t anon166 = (__zext uint64_t)anon167;
					uint64_t anon165 = phi_in143 & 0xffffffffffff0000 | anon166;
					uint32_t anon164 = (uint32_t)anon165;
					uint32_t anon163 = anon112 ^ anon164;
					uint32_t anon162 = anon163 >> 8;
					if ((anon162 & 0xf) == 0)
					{
						uint32_t anon170 = anon164 | 0xf;
						phi_in169 = (__zext uint64_t)anon170;
						uint32_t anon172 = anon112 ^ anon170;
						phi_in171 = anon172;
						phi_in173 = anon165 >> 8 & 0xffffff;
						uint16_t anon175 = anon168 | 0xf;
						phi_in174 = anon175;
						phi_in176 = (__zext uint64_t)anon175;
						phi_in177 = (uint8_t)(anon172 >> 8);
						phi_in178 = 256;
					}
					else 
					{
						phi_in169 = anon165;
						phi_in171 = anon163;
						phi_in173 = (__zext uint64_t)(phi_in145 >> 4);
						phi_in174 = anon167;
						phi_in176 = anon166;
						phi_in177 = (uint8_t)anon162 & 0xf;
						phi_in178 = 0;
					}
					if (phi_in177 < 16)
					{
						uint64_t anon179 = phi_in169 & 0xffffffffffffff00 | phi_in176 & 0xf | 0xf0;
						phi_in169 = anon179;
						phi_in171 = (__zext uint32_t)(*(uint16_t*)phi95 ^ (uint16_t)anon179);
						phi_in180 = anon112 ^ (uint32_t)anon179;
						phi_in181 = 256;
					}
					else 
					{
						phi_in180 = (__zext uint32_t)(*(uint16_t*)phi95 ^ phi_in174);
						phi_in181 = 0;
					}
					uint16_t phi_in182 = 0;
					if ((phi_in180 & 0xf00) == 0)
					{
						phi_in171 = anon112 ^ (uint32_t)(phi_in169 & 0xffff00ff | phi_in173 << 8 & 0xf000 | 0xf00);
						phi_in182 = 256;
					}
					if ((__zext uint16_t)((uint16_t)phi_in171 < 4096) + phi_in157 + phi_in152 + phi_in135 + phi_in132 + (phi_in109 + phi_in106 + phi_in101 << 4) + phi_in126 + phi_in127 + phi_in151 + phi_in160 + phi_in178 + phi_in181 + phi_in182 == *(uint16_t*)(arg1 - 66))
					{
						*(uint16_t*)(anon11 + (phi94 << 1 & 0x1fffe)) = *(uint16_t*)phi95;
						phi_in183 = (uint16_t)phi94 + 1;
						anon184 = phi95 + 2;
						uint64_t anon186 = phi_in17 + 4294967295 & 0xffffffff;
						anon185 = anon186 + anon186 + 2 + anon11;
						if (anon184 == anon185)
						{
							break;
						}
						else 
						{
							phi_in93 = anon184;
							phi94 = phi94 + 1 & 0xffffffff;
						}
					}
					else 
					{
						phi_in93 = anon184;
						if (anon184 == anon185)
						{
							phi_in183 = (uint16_t)phi94;
							break;
						}
					}
				}
				alloca1.field1 = anon91;
				uint16_t* anon187 = (uint16_t*)phi_in15;
				*anon187 = *anon187;
				if (phi_in183 == 0 | *(uint16_t*)(arg1 - 66) == 64)
				{
					break;
				}
				else 
				{
					alloca5 = 0;
					uint64_t anon188 = (__zext uint64_t)phi_in183;
					alloca5 = (__zext uint64_t)*(uint16_t*)(anon11 + ((__sext int64_t)rand() % anon188 << 32 >> 31));
					alloca1.field4 = *(uint16_t*)(anon11 + ((__sext int64_t)rand() % anon188 << 32 >> 31));
					phi_in17 = anon188;
				}
			}
		}
		while (anon91 != 0);
	}
	putchar(10);
	return;
	if (anon12 == null)
	{
		alloca5 = (__zext uint64_t)puts((uint8_t*)0x400e87);
		exit(1);
	}
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
