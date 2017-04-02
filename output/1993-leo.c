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
	uint16_t phi_in26;
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
		uint32_t anon93;
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
			bool anon39;
			uint32_t anon43;
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
				uint32_t anon28 = (__zext uint32_t)*(uint16_t*)(anon11 + anon25 - 2) + 1;
				uint16_t anon27 = (uint16_t)anon28;
				phi_in26 = anon27;
				uint16_t phi_in29 = anon27;
				if (((alloca1.field1 ^ anon28) & 0xf) == 0)
				{
					uint32_t anon32 = 16 - alloca1.field1;
					uint32_t anon31 = anon28 + (anon32 & 0xffff);
					uint16_t anon30 = (uint16_t)anon31;
					phi_in26 = anon30;
					phi_in29 = anon30;
					uint64_t anon33 = anon20 << 4;
					uint32_t anon34 = anon28 + anon32;
					if ((((uint32_t)anon33 ^ anon34) & 0xf0) == 0)
					{
						uint32_t anon36 = (uint32_t)(256 - anon33);
						uint16_t anon35 = (uint16_t)(anon31 + anon36);
						phi_in26 = anon35;
						phi_in29 = anon35;
						if ((((uint32_t)anon19 ^ anon34 + anon36) & 0xf00) == 0)
						{
							uint16_t anon37 = anon35 + anon18;
							uint16_t anon38 = (uint16_t)alloca1.field1 << 12;
							phi_in26 = anon37 - ((anon38 ^ anon37) < 4096 ? anon38 : 0);
							phi_in29 = (anon38 ^ anon37) < 4096 ? 0 : anon37;
						}
					}
				}
				uint16_t anon42 = (uint16_t)phi23 + 1;
				uint32_t anon41 = (__zext uint32_t)anon42;
				uint32_t anon40 = anon13 - anon41;
				anon43 = phi23 + 1 & 0xffff;
				anon39 = (uint8_t)(anon40 >> 31) == (__zext uint8_t)llvm.ssub.with.overflow.i32(anon13, anon43).field1 & anon40 != 0;
				if (anon39)
				{
					phi_in21 = anon41;
					phi_in22 = (__zext uint64_t)anon42;
				}
			}
			while (anon39);
			uint64_t anon44 = arg1 - 70;
			phi_in15 = anon44;
			phi_in16 = anon43;
			phi_in17 = (__zext uint64_t)anon43;
		}
		uint64_t anon45 = (uint64_t)&alloca1.field4;
		alloca5 = anon45;
		alloca5 = 0;
		alloca5 = (__zext uint64_t)*(uint16_t*)(anon11 + ((__sext int64_t)rand() % (__zext uint64_t)phi_in16 << 32 >> 31));
		uint8_t** anon46 = (uint8_t**)arg3;
		*(uint16_t*)(**anon46 == 0 ? phi_in15 : anon45) = *(uint16_t*)(anon11 + ((__sext int64_t)rand() % (__zext uint64_t)phi_in16 << 32 >> 31));
		do
		{
			while (true)
			{
				alloca5 = 0;
				alloca5 = (__zext uint64_t)printf((uint8_t*)0x400e95);
				uint8_t* anon47 = (uint8_t*)arg3;
				*(uint8_t*)&alloca5 = *anon47;
				uint8_t anon48 = anon47[1];
				((uint8_t*)&alloca5)[1] = anon48;
				uint48_t* anon49 = (uint48_t*)&anon47[2];
				*(uint48_t*)&((uint8_t*)&alloca5)[2] = *anon49;
				if (**anon46 == 0)
				{
					if (**anon46 == 0)
					{
						if (**anon46 != 0)
						{
							alloca1.field4 = alloca1.field4 - 4369;
						}
					}
					else 
					{
						alloca5 = 0;
						alloca5 = (__zext uint64_t)scanf((uint8_t*)0x400eaa);
						*(uint8_t*)&alloca5 = *anon47;
						((uint8_t*)&alloca5)[1] = anon48;
						*(uint48_t*)&((uint8_t*)&alloca5)[2] = *anon49;
						if (**anon46 != 0)
						{
							break;
						}
					}
				}
				else 
				{
					alloca5 = 0;
					alloca5 = (__zext uint64_t)printf((uint8_t*)0x400ea4);
					*(uint8_t*)&alloca5 = *anon47;
					((uint8_t*)&alloca5)[1] = anon48;
					*(uint48_t*)&((uint8_t*)&alloca5)[2] = *anon49;
				}
				if (**anon46 == 0 && **anon46 == 0 || **anon46 != 0 && **anon46 == 0 && **anon46 == 0 || **anon46 != 0 && **anon46 != 0)
				{
					alloca5 = 0;
					alloca5 = (__zext uint64_t)printf((uint8_t*)0x400eae);
					*(uint8_t*)&alloca5 = *anon47;
					((uint8_t*)&alloca5)[1] = anon48;
					*(uint48_t*)&((uint8_t*)&alloca5)[2] = *anon49;
				}
				if (**anon46 == 0 && (**anon46 == 0 && **anon46 == 0 || **anon46 != 0 && **anon46 == 0 && **anon46 == 0 || **anon46 != 0 && **anon46 != 0))
				{
					uint32_t anon51;
					uint32_t phi_in52;
					uint8_t phi_in53;
					uint16_t phi_in54;
					uint8_t phi_in62;
					uint32_t phi_in63;
					uint32_t phi_in64;
					uint16_t phi_in65;
					uint16_t phi_in69;
					uint32_t phi_in75;
					uint8_t phi_in76;
					uint32_t phi_in77;
					uint16_t phi_in78;
					uint16_t phi_in82;
					uint32_t phi_in87;
					uint8_t phi_in88;
					uint32_t phi_in89;
					uint16_t phi_in90;
					alloca5 = (__zext uint64_t)alloca1.field4;
					if (((alloca1.field4 ^ *(uint16_t*)phi_in15) & 0xf) == 0)
					{
						anon51 = (__zext uint32_t)alloca1.field4;
						uint32_t anon50 = anon51 | 0xf;
						alloca5 = (__zext uint64_t)anon50;
						alloca1.field4 = (uint16_t)anon50;
						phi_in52 = anon50;
						phi_in53 = (uint8_t)anon50;
						phi_in54 = 1;
					}
					else 
					{
						phi_in52 = anon51;
						phi_in53 = (uint8_t)alloca1.field4 & 0xf;
						phi_in54 = 0;
					}
					uint16_t phi_in55 = 0;
					if (((uint8_t)*(uint16_t*)phi_in15 ^ (uint8_t)phi_in52) < 16)
					{
						*(uint8_t*)&alloca5 = phi_in53 | 0xf0;
						alloca1.field4 = (uint16_t)*(uint32_t*)&alloca5;
						phi_in52 = *(uint32_t*)&alloca5;
						phi_in55 = 1;
					}
					uint16_t phi_in56 = 0;
					uint32_t anon57 = (__zext uint32_t)*(uint16_t*)phi_in15;
					if (((anon57 ^ phi_in52) & 0xf00) == 0)
					{
						((uint8_t*)&alloca5)[1] = (uint8_t)(alloca1.field4 >> 8) | 0xf;
						alloca1.field4 = (uint16_t)*(uint32_t*)&alloca5;
						phi_in56 = 1;
						phi_in52 = *(uint32_t*)&alloca5;
					}
					uint16_t phi_in58 = 0;
					if ((*(uint16_t*)phi_in15 ^ (uint16_t)phi_in52) < 4096)
					{
						uint16_t anon59 = alloca1.field4 | 0xf000;
						*(uint16_t*)&alloca5 = anon59;
						phi_in58 = 1;
						alloca1.field4 = anon59;
					}
					uint16_t* anon60 = (uint16_t*)&alloca5;
					*anon60 = alloca1.field4 >> 12 | alloca1.field4 << 4;
					if (((anon57 ^ *(uint32_t*)&alloca5) & 0xf) == 0)
					{
						uint32_t anon61 = *(uint32_t*)&alloca5 | 0xf;
						alloca5 = (__zext uint64_t)anon61;
						phi_in62 = (uint8_t)(*(uint32_t*)&alloca5 >> 8);
						phi_in63 = anon61;
						phi_in64 = anon61;
						phi_in65 = 1;
					}
					else 
					{
						phi_in62 = (uint8_t)(alloca1.field4 >> 4);
						phi_in63 = *(uint32_t*)&alloca5;
						phi_in64 = *(uint32_t*)&alloca5 & 0xf;
						phi_in65 = 0;
					}
					uint16_t phi_in66 = 0;
					if ((phi_in63 & 0xf0) == 0)
					{
						*(uint8_t*)&alloca5 = (uint8_t)phi_in64 | 0xf0;
						phi_in63 = *(uint32_t*)&alloca5;
						phi_in66 = 1;
					}
					uint16_t phi_in67 = 0;
					if ((phi_in63 & 0xf00) == 0)
					{
						((uint8_t*)&alloca5)[1] = phi_in62 | 0xf;
						phi_in63 = *(uint32_t*)&alloca5;
						phi_in67 = 1;
					}
					uint16_t phi_in68 = 0;
					uint16_t anon70 = (uint16_t)phi_in63;
					phi_in69 = anon70;
					if ((uint16_t)phi_in63 < 4096)
					{
						uint16_t anon71 = anon70 | 0xf000;
						*anon60 = anon71;
						phi_in68 = 1;
						phi_in69 = anon71;
					}
					*anon60 = phi_in69 >> 12 | phi_in69 << 4;
					uint32_t anon72 = (__zext uint32_t)(*(uint16_t*)phi_in15 & 0xf);
					uint32_t anon73 = *(uint32_t*)&alloca5 & 0xf;
					if (anon72 == anon73)
					{
						uint32_t anon74 = *(uint32_t*)&alloca5 | 0xf;
						alloca5 = (__zext uint64_t)anon74;
						phi_in75 = anon74;
						phi_in76 = (uint8_t)(*(uint32_t*)&alloca5 >> 8);
						phi_in77 = anon74;
						phi_in78 = 1;
					}
					else 
					{
						phi_in75 = *(uint32_t*)&alloca5;
						phi_in76 = (uint8_t)(phi_in69 >> 4);
						phi_in77 = anon73;
						phi_in78 = 0;
					}
					uint16_t phi_in79 = 0;
					if ((phi_in75 & 0xf0) == 0)
					{
						*(uint8_t*)&alloca5 = (uint8_t)phi_in77 | 0xf0;
						phi_in75 = *(uint32_t*)&alloca5;
						phi_in79 = 1;
					}
					uint16_t phi_in80 = 0;
					if ((phi_in75 & 0xf00) == 0)
					{
						((uint8_t*)&alloca5)[1] = phi_in76 | 0xf;
						phi_in75 = *(uint32_t*)&alloca5;
						phi_in80 = 1;
					}
					uint16_t phi_in81 = 0;
					uint16_t anon83 = (uint16_t)phi_in75;
					phi_in82 = anon83;
					if ((uint16_t)phi_in75 < 4096)
					{
						uint16_t anon84 = anon83 | 0xf000;
						*anon60 = anon84;
						phi_in81 = 1;
						phi_in82 = anon84;
					}
					*anon60 = phi_in82 >> 12 | phi_in82 << 4;
					uint32_t anon85 = *(uint32_t*)&alloca5 & 0xf;
					if (anon72 == anon85)
					{
						uint32_t anon86 = *(uint32_t*)&alloca5 | 0xf;
						alloca5 = (__zext uint64_t)anon86;
						phi_in87 = anon86;
						phi_in88 = (uint8_t)(*(uint32_t*)&alloca5 >> 8);
						phi_in89 = anon86;
						phi_in90 = 1;
					}
					else 
					{
						phi_in87 = *(uint32_t*)&alloca5;
						phi_in88 = (uint8_t)(phi_in82 >> 4);
						phi_in89 = anon85;
						phi_in90 = 0;
					}
					uint16_t phi_in91 = 0;
					if ((phi_in87 & 0xf0) == 0)
					{
						*(uint8_t*)&alloca5 = (uint8_t)phi_in89 | 0xf0;
						phi_in87 = *(uint32_t*)&alloca5;
						phi_in91 = 1;
					}
					uint16_t phi_in92 = 0;
					if ((phi_in87 & 0xf00) == 0)
					{
						((uint8_t*)&alloca5)[1] = phi_in88 | 0xf;
						phi_in92 = 1;
						phi_in87 = *(uint32_t*)&alloca5;
					}
					alloca1.field5 = (__zext uint16_t)((uint16_t)phi_in87 < 4096) + phi_in92 + phi_in66 + (phi_in58 + phi_in54 + phi_in55 + phi_in56 << 4 | phi_in65) + phi_in67 + phi_in68 + phi_in78 + phi_in79 + phi_in80 + phi_in81 + phi_in90 + phi_in91;
					alloca5 = 0;
					alloca5 = (__zext uint64_t)printf((uint8_t*)0x400eb3);
					break;
				}
			}
			alloca1.field1 = 0;
			anon93 = (uint32_t)phi_in17;
			if (anon93 != 0)
			{
				uint16_t phi_in185;
				uint64_t anon94 = (__zext uint64_t)alloca1.field4;
				alloca5 = anon94;
				uint64_t phi_in95 = anon11;
				uint64_t phi96 = 0;
				while (true)
				{
					uint64_t phi_in100;
					uint16_t phi_in102;
					uint16_t phi_in103;
					uint8_t phi_in104;
					uint64_t phi_in120;
					uint64_t phi_in122;
					uint16_t phi_in123;
					uint16_t phi_in124;
					uint64_t phi_in126;
					uint8_t phi_in127;
					uint16_t phi_in128;
					uint16_t phi_in132;
					uint64_t phi_in145;
					uint16_t phi_in147;
					uint16_t phi_in148;
					uint64_t phi_in150;
					uint64_t phi_in151;
					uint8_t phi_in152;
					uint16_t phi_in153;
					uint16_t phi_in157;
					uint64_t phi_in171;
					uint32_t phi_in173;
					uint64_t phi_in175;
					uint16_t phi_in176;
					uint64_t phi_in178;
					uint8_t phi_in179;
					uint16_t phi_in180;
					uint32_t phi_in182;
					uint16_t phi_in183;
					uint64_t anon186;
					uint64_t anon187;
					uint64_t phi97 = phi_in95;
					uint16_t anon99 = alloca1.field4 ^ *(uint16_t*)phi97;
					uint32_t anon98 = (__zext uint32_t)anon99 >> 8;
					if ((anon98 & 0xf) == 0)
					{
						uint16_t anon101 = alloca1.field4 | 0xf;
						phi_in100 = (__zext uint64_t)anon101;
						phi_in102 = anon101;
						phi_in103 = 1;
						phi_in103 = 2;
						phi_in104 = (uint8_t)(anon99 >> 8);
					}
					else 
					{
						phi_in100 = anon94;
						phi_in102 = alloca1.field4;
						phi_in103 = 0;
						phi_in103 = 1;
						phi_in104 = (uint8_t)anon98 & 0xf;
					}
					uint16_t phi_in105 = phi_in102 ^ *(uint16_t*)phi97;
					if (phi_in104 < 16)
					{
						uint64_t anon106 = phi_in100 & 0xff00 | (__zext uint64_t)(phi_in102 & 0xf | 0xf0);
						phi_in100 = anon106;
						uint16_t anon107 = (uint16_t)anon106;
						phi_in102 = anon107;
						phi_in105 = *(uint16_t*)phi97 ^ anon107;
					}
					uint16_t phi_in108 = 0;
					if ((phi_in105 & 0xf00) == 0)
					{
						uint64_t anon109 = phi_in100 & 0xffffffffffff00ff | (__zext uint64_t)(phi_in102 & 0xf000 | 0xf00);
						phi_in100 = anon109;
						uint16_t anon110 = (uint16_t)anon109;
						phi_in102 = anon110;
						phi_in105 = *(uint16_t*)phi97 ^ anon110;
						phi_in108 = 256;
					}
					uint16_t phi_in111 = 0;
					if (phi_in105 < 4096)
					{
						uint16_t anon112 = phi_in102 | 0xf000;
						phi_in100 = phi_in100 & 0xffffffffffff0000 | (__zext uint64_t)anon112;
						phi_in111 = 256;
						phi_in102 = anon112;
					}
					uint32_t anon114 = (__zext uint32_t)*(uint16_t*)phi97;
					uint16_t anon119 = phi_in102 << 4;
					uint16_t anon118 = phi_in102 >> 12 | anon119;
					uint64_t anon117 = (__zext uint64_t)anon118;
					uint64_t anon116 = phi_in100 & 0xffffffffffff0000 | anon117;
					uint32_t anon115 = (uint32_t)anon116;
					uint32_t anon113 = (anon114 ^ anon115) >> 8;
					if ((anon113 & 0xf) == 0)
					{
						uint32_t anon121 = anon115 | 0xf;
						phi_in120 = (__zext uint64_t)anon121;
						phi_in122 = anon116 >> 8 & 0xffffff;
						phi_in123 = (uint16_t)anon121;
						uint16_t anon125 = anon119 | 0xf;
						phi_in124 = anon125;
						phi_in126 = (__zext uint64_t)anon125;
						phi_in127 = (uint8_t)anon113;
						phi_in128 = 256;
					}
					else 
					{
						phi_in120 = anon116;
						phi_in122 = (__zext uint64_t)(phi_in102 >> 4);
						phi_in123 = anon118;
						phi_in124 = anon118;
						phi_in126 = anon117;
						phi_in127 = (uint8_t)anon113 & 0xf;
						phi_in128 = 0;
					}
					uint16_t phi_in129 = 0;
					if (phi_in127 < 16)
					{
						uint64_t anon130 = phi_in120 & 0xffffffffffffff00 | phi_in126 & 0xf | 0xf0;
						phi_in120 = anon130;
						uint16_t anon131 = (uint16_t)anon130;
						phi_in123 = anon131;
						phi_in124 = anon131;
						phi_in129 = 256;
					}
					uint16_t anon133 = *(uint16_t*)phi97 ^ phi_in124;
					phi_in132 = anon133;
					uint16_t phi_in134 = 0;
					if ((anon133 & 0xf00) == 0)
					{
						uint64_t anon135 = phi_in120 & 0xffffffffffff00ff | phi_in122 << 8 & 0xf000 | 0xf00;
						phi_in120 = anon135;
						uint16_t anon136 = (uint16_t)anon135;
						phi_in123 = anon136;
						phi_in132 = *(uint16_t*)phi97 ^ anon136;
						phi_in134 = 256;
					}
					uint16_t phi_in137 = 0;
					if (phi_in132 < 4096)
					{
						uint16_t anon138 = phi_in123 | 0xf000;
						phi_in120 = phi_in120 & 0xffffffffffff0000 | (__zext uint64_t)anon138;
						phi_in137 = 256;
						phi_in123 = anon138;
					}
					uint16_t anon144 = phi_in123 << 4;
					uint16_t anon143 = phi_in123 >> 12 | anon144;
					uint64_t anon142 = (__zext uint64_t)anon143;
					uint64_t anon141 = phi_in120 & 0xffffffffffff0000 | anon142;
					uint32_t anon140 = (uint32_t)anon141;
					uint32_t anon139 = (anon114 ^ anon140) >> 8;
					if ((anon139 & 0xf) == 0)
					{
						uint32_t anon146 = anon140 | 0xf;
						phi_in145 = (__zext uint64_t)anon146;
						phi_in147 = (uint16_t)anon146;
						uint16_t anon149 = anon144 | 0xf;
						phi_in148 = anon149;
						phi_in150 = anon141 >> 8 & 0xffffff;
						phi_in151 = (__zext uint64_t)anon149;
						phi_in152 = (uint8_t)anon139;
						phi_in153 = 256;
					}
					else 
					{
						phi_in145 = anon141;
						phi_in147 = anon143;
						phi_in148 = anon143;
						phi_in150 = (__zext uint64_t)(phi_in123 >> 4);
						phi_in151 = anon142;
						phi_in152 = (uint8_t)anon139 & 0xf;
						phi_in153 = 0;
					}
					uint16_t phi_in154 = 0;
					if (phi_in152 < 16)
					{
						uint64_t anon155 = phi_in145 & 0xffffffffffffff00 | phi_in151 & 0xf | 0xf0;
						phi_in145 = anon155;
						uint16_t anon156 = (uint16_t)anon155;
						phi_in147 = anon156;
						phi_in148 = anon156;
						phi_in154 = 256;
					}
					uint16_t anon158 = *(uint16_t*)phi97 ^ phi_in148;
					phi_in157 = anon158;
					uint16_t phi_in159 = 0;
					if ((anon158 & 0xf00) == 0)
					{
						uint64_t anon160 = phi_in145 & 0xffffffffffff00ff | phi_in150 << 8 & 0xf000 | 0xf00;
						phi_in145 = anon160;
						uint16_t anon161 = (uint16_t)anon160;
						phi_in147 = anon161;
						phi_in157 = *(uint16_t*)phi97 ^ anon161;
						phi_in159 = 256;
					}
					uint16_t phi_in162 = 0;
					if (phi_in157 < 4096)
					{
						uint16_t anon163 = phi_in147 | 0xf000;
						phi_in145 = phi_in145 & 0xffffffffffff0000 | (__zext uint64_t)anon163;
						phi_in162 = 256;
						phi_in147 = anon163;
					}
					uint16_t anon170 = phi_in147 << 4;
					uint16_t anon169 = phi_in147 >> 12 | anon170;
					uint64_t anon168 = (__zext uint64_t)anon169;
					uint64_t anon167 = phi_in145 & 0xffffffffffff0000 | anon168;
					uint32_t anon166 = (uint32_t)anon167;
					uint32_t anon165 = anon114 ^ anon166;
					uint32_t anon164 = anon165 >> 8;
					if ((anon164 & 0xf) == 0)
					{
						uint32_t anon172 = anon166 | 0xf;
						phi_in171 = (__zext uint64_t)anon172;
						uint32_t anon174 = anon114 ^ anon172;
						phi_in173 = anon174;
						phi_in175 = anon167 >> 8 & 0xffffff;
						uint16_t anon177 = anon170 | 0xf;
						phi_in176 = anon177;
						phi_in178 = (__zext uint64_t)anon177;
						phi_in179 = (uint8_t)(anon174 >> 8);
						phi_in180 = 256;
					}
					else 
					{
						phi_in171 = anon167;
						phi_in173 = anon165;
						phi_in175 = (__zext uint64_t)(phi_in147 >> 4);
						phi_in176 = anon169;
						phi_in178 = anon168;
						phi_in179 = (uint8_t)anon164 & 0xf;
						phi_in180 = 0;
					}
					if (phi_in179 < 16)
					{
						uint64_t anon181 = phi_in171 & 0xffffffffffffff00 | phi_in178 & 0xf | 0xf0;
						phi_in171 = anon181;
						phi_in173 = (__zext uint32_t)(*(uint16_t*)phi97 ^ (uint16_t)anon181);
						phi_in182 = anon114 ^ (uint32_t)anon181;
						phi_in183 = 256;
					}
					else 
					{
						phi_in182 = (__zext uint32_t)(*(uint16_t*)phi97 ^ phi_in176);
						phi_in183 = 0;
					}
					uint16_t phi_in184 = 0;
					if ((phi_in182 & 0xf00) == 0)
					{
						phi_in173 = anon114 ^ (uint32_t)(phi_in171 & 0xffff00ff | phi_in175 << 8 & 0xf000 | 0xf00);
						phi_in184 = 256;
					}
					if ((__zext uint16_t)((uint16_t)phi_in173 < 4096) + phi_in159 + phi_in154 + phi_in137 + phi_in134 + (phi_in111 + phi_in108 + phi_in103 << 4) + phi_in128 + phi_in129 + phi_in153 + phi_in162 + phi_in180 + phi_in183 + phi_in184 == *(uint16_t*)(arg1 - 66))
					{
						*(uint16_t*)(anon11 + (phi96 << 1 & 0x1fffe)) = *(uint16_t*)phi97;
						phi_in185 = (uint16_t)phi96 + 1;
						anon186 = phi97 + 2;
						uint64_t anon188 = phi_in17 + 4294967295 & 0xffffffff;
						anon187 = anon188 + anon188 + 2 + anon11;
						if (anon186 == anon187)
						{
							break;
						}
						else 
						{
							phi_in95 = anon186;
							phi96 = phi96 + 1 & 0xffffffff;
						}
					}
					else 
					{
						phi_in95 = anon186;
						if (anon186 == anon187)
						{
							phi_in185 = (uint16_t)phi96;
							break;
						}
					}
				}
				alloca1.field1 = anon93;
				uint16_t* anon189 = (uint16_t*)phi_in15;
				*anon189 = *anon189;
				if (phi_in185 == 0 | *(uint16_t*)(arg1 - 66) == 64)
				{
					break;
				}
				else 
				{
					alloca5 = 0;
					uint64_t anon190 = (__zext uint64_t)phi_in185;
					alloca5 = (__zext uint64_t)*(uint16_t*)(anon11 + ((__sext int64_t)rand() % anon190 << 32 >> 31));
					alloca1.field4 = *(uint16_t*)(anon11 + ((__sext int64_t)rand() % anon190 << 32 >> 31));
					phi_in17 = anon190;
				}
			}
		}
		while (anon93 != 0);
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
