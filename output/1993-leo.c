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
	uint64_t phi10;
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
				alloca1.field1 = alloca1.field1;
				phi10 = (__sext int64_t)anon8;
			}
		}
	}
	if (alloca1.field1 != 2 || alloca1.field1 == 2 && anon7 == 0 || alloca1.field1 == 2 && anon7 != 0 && alloca1.field1 == 0)
	{
		alloca1.field1 = 6;
		alloca1.field1 = 6;
		phi10 = 1296;
	}
	uint32_t phi11 = alloca1.field1;
	uint8_t* anon13 = calloc(phi10, 2);
	uint64_t anon12 = (uint64_t)anon13;
	alloca5 = anon12;
	if (anon13 != null)
	{
		uint64_t phi16;
		uint32_t phi17;
		uint64_t phi18;
		uint32_t anon107;
		uint32_t anon15 = phi11 * phi11;
		uint32_t anon14 = anon15 * anon15;
		if (anon14 < 2)
		{
			phi16 = (uint64_t)&alloca1.field3;
			phi17 = 1;
			phi18 = 1;
		}
		else 
		{
			uint64_t anon27;
			bool anon39;
			uint32_t anon43;
			uint64_t anon21 = (__zext uint64_t)phi11;
			uint64_t anon20 = anon21 << 8;
			uint16_t anon19 = (uint16_t)(4096 - anon20);
			alloca1.field0 = anon19;
			uint32_t phi_in22 = 1;
			uint64_t phi23 = 1;
			do
			{
				uint32_t phi24 = phi_in22;
				uint64_t anon26 = phi23 << 1;
				uint64_t anon25 = anon26 + anon12;
				alloca5 = anon25;
				anon27 = arg1 - 70;
				uint32_t anon29 = (__zext uint32_t)*(uint16_t*)(anon12 + anon26 - 2) + 1;
				uint16_t anon28 = (uint16_t)anon29;
				*(uint16_t*)anon27 = anon28;
				*(uint16_t*)anon25 = anon28;
				if (((phi11 ^ anon29) & 0xf) == 0)
				{
					uint32_t anon32 = 16 - phi11;
					uint32_t anon31 = anon29 + (anon32 & 0xffff);
					uint16_t anon30 = (uint16_t)anon31;
					*(uint16_t*)anon27 = anon30;
					*(uint16_t*)anon25 = anon30;
					uint64_t anon33 = anon21 << 4;
					uint32_t anon34 = anon29 + anon32;
					if ((((uint32_t)anon33 ^ anon34) & 0xf0) == 0)
					{
						uint32_t anon36 = (uint32_t)(256 - anon33);
						uint16_t anon35 = (uint16_t)(anon31 + anon36);
						*(uint16_t*)anon27 = anon35;
						*(uint16_t*)anon25 = anon35;
						if ((((uint32_t)anon20 ^ anon34 + anon36) & 0xf00) == 0)
						{
							uint16_t anon37 = anon35 + anon19;
							uint16_t anon38 = (uint16_t)phi11 << 12;
							*(uint16_t*)anon27 = anon37 - ((anon38 ^ anon37) < 4096 ? anon38 : 0);
							*(uint16_t*)anon25 = (anon38 ^ anon37) < 4096 ? 0 : anon37;
						}
					}
				}
				uint16_t anon42 = (uint16_t)phi24 + 1;
				uint32_t anon41 = (__zext uint32_t)anon42;
				uint32_t anon40 = anon14 - anon41;
				anon43 = phi24 + 1 & 0xffff;
				anon39 = (uint8_t)(anon40 >> 31) == (__zext uint8_t)llvm.ssub.with.overflow.i32(anon14, anon43).field1 & anon40 != 0;
				if (anon39)
				{
					phi_in22 = anon41;
					phi23 = (__zext uint64_t)anon42;
				}
			}
			while (anon39);
			phi16 = anon27;
			phi17 = anon43;
			phi18 = (__zext uint64_t)anon43;
		}
		uint64_t anon44 = (uint64_t)&alloca1.field4;
		alloca5 = anon44;
		alloca5 = 0;
		alloca5 = (__zext uint64_t)*(uint16_t*)(anon12 + ((__sext int64_t)rand() % (__zext uint64_t)phi17 << 32 >> 31));
		uint8_t** anon45 = (uint8_t**)arg3;
		*(uint16_t*)(**anon45 == 0 ? phi16 : anon44) = *(uint16_t*)(anon12 + ((__sext int64_t)rand() % (__zext uint64_t)phi17 << 32 >> 31));
		do
		{
			while (true)
			{
				alloca5 = 0;
				alloca5 = (__zext uint64_t)printf((uint8_t*)0x400e95);
				uint8_t* anon46 = (uint8_t*)arg3;
				*(uint8_t*)&alloca5 = *anon46;
				uint8_t anon47 = anon46[1];
				((uint8_t*)&alloca5)[1] = anon47;
				uint48_t* anon48 = (uint48_t*)&anon46[2];
				*(uint48_t*)&((uint8_t*)&alloca5)[2] = *anon48;
				if (**anon45 == 0)
				{
					if (**anon45 != 0)
					{
						alloca5 = 0;
						alloca5 = (__zext uint64_t)scanf((uint8_t*)0x400eaa);
						*(uint8_t*)&alloca5 = *anon46;
						((uint8_t*)&alloca5)[1] = anon47;
						*(uint48_t*)&((uint8_t*)&alloca5)[2] = *anon48;
						if (**anon45 != 0)
						{
							break;
							alloca1.field4 = alloca1.field4 - 4369;
						}
					}
				}
				else 
				{
					alloca5 = 0;
					alloca5 = (__zext uint64_t)printf((uint8_t*)0x400ea4);
					*(uint8_t*)&alloca5 = *anon46;
					((uint8_t*)&alloca5)[1] = anon47;
					*(uint48_t*)&((uint8_t*)&alloca5)[2] = *anon48;
				}
				if (**anon45 == 0 && **anon45 == 0 || **anon45 != 0 && **anon45 == 0 && **anon45 == 0 || **anon45 != 0 && **anon45 != 0)
				{
					alloca5 = 0;
					alloca5 = (__zext uint64_t)printf((uint8_t*)0x400eae);
					*(uint8_t*)&alloca5 = *anon46;
					((uint8_t*)&alloca5)[1] = anon47;
					*(uint48_t*)&((uint8_t*)&alloca5)[2] = *anon48;
				}
				if (**anon45 == 0)
				{
					if (**anon45 == 0 && **anon45 == 0 || **anon45 != 0 && **anon45 == 0 && **anon45 == 0 || **anon45 != 0 && **anon45 != 0)
					{
						uint32_t anon50;
						uint16_t phi_in51;
						uint32_t phi52;
						uint8_t phi53;
						uint16_t phi54;
						uint8_t phi69;
						uint32_t phi70;
						uint32_t phi71;
						uint16_t phi72;
						uint16_t phi78;
						uint32_t phi84;
						uint8_t phi85;
						uint32_t phi86;
						uint16_t phi87;
						uint16_t phi94;
						uint32_t phi99;
						uint8_t phi100;
						uint32_t phi101;
						uint16_t phi102;
						alloca5 = (__zext uint64_t)alloca1.field4;
						if (((alloca1.field4 ^ *(uint16_t*)phi16) & 0xf) == 0)
						{
							anon50 = (__zext uint32_t)alloca1.field4;
							uint32_t anon49 = anon50 | 0xf;
							alloca5 = (__zext uint64_t)anon49;
							phi_in51 = (uint16_t)anon49;
							phi52 = anon49;
							phi53 = (uint8_t)anon49;
							phi54 = 1;
						}
						else 
						{
							phi_in51 = alloca1.field4;
							phi52 = anon50;
							phi53 = (uint8_t)alloca1.field4 & 0xf;
							phi54 = 0;
						}
						uint32_t phi_in55 = phi52;
						uint16_t phi56 = phi_in51;
						uint32_t phi_in57 = phi_in55;
						uint16_t phi58 = 0;
						if (((uint8_t)*(uint16_t*)phi16 ^ (uint8_t)phi_in55) < 16)
						{
							*(uint8_t*)&alloca5 = phi53 | 0xf0;
							phi56 = (uint16_t)*(uint32_t*)&alloca5;
							phi_in57 = *(uint32_t*)&alloca5;
							phi58 = 1;
						}
						uint16_t phi59 = phi56;
						uint16_t phi60 = 0;
						uint32_t phi61 = phi_in57;
						uint32_t anon62 = (__zext uint32_t)*(uint16_t*)phi16;
						if (((anon62 ^ phi_in57) & 0xf00) == 0)
						{
							((uint8_t*)&alloca5)[1] = (uint8_t)(alloca1.field4 >> 8) | 0xf;
							phi59 = (uint16_t)*(uint32_t*)&alloca5;
							phi60 = 1;
							phi61 = *(uint32_t*)&alloca5;
						}
						uint16_t phi_in63 = phi59;
						uint16_t phi64 = 0;
						uint16_t phi65 = phi_in63;
						if ((*(uint16_t*)phi16 ^ (uint16_t)phi61) < 4096)
						{
							uint16_t anon66 = phi_in63 | 0xf000;
							*(uint16_t*)&alloca5 = anon66;
							phi64 = 1;
							phi65 = anon66;
						}
						uint16_t* anon67 = (uint16_t*)&alloca5;
						*anon67 = phi65 >> 12 | phi65 << 4;
						if (((anon62 ^ *(uint32_t*)&alloca5) & 0xf) == 0)
						{
							uint32_t anon68 = *(uint32_t*)&alloca5 | 0xf;
							alloca5 = (__zext uint64_t)anon68;
							phi69 = (uint8_t)(*(uint32_t*)&alloca5 >> 8);
							phi70 = anon68;
							phi71 = anon68;
							phi72 = 1;
						}
						else 
						{
							phi69 = (uint8_t)(phi65 >> 4);
							phi70 = *(uint32_t*)&alloca5;
							phi71 = *(uint32_t*)&alloca5 & 0xf;
							phi72 = 0;
						}
						uint32_t phi_in73 = phi70;
						uint16_t phi74 = 0;
						if ((phi_in73 & 0xf0) == 0)
						{
							*(uint8_t*)&alloca5 = (uint8_t)phi71 | 0xf0;
							phi_in73 = *(uint32_t*)&alloca5;
							phi74 = 1;
						}
						uint32_t phi75 = phi_in73;
						uint16_t phi76 = 0;
						if ((phi_in73 & 0xf00) == 0)
						{
							((uint8_t*)&alloca5)[1] = phi69 | 0xf;
							phi75 = *(uint32_t*)&alloca5;
							phi76 = 1;
						}
						uint16_t phi77 = 0;
						uint16_t anon79 = (uint16_t)phi75;
						phi78 = anon79;
						if ((uint16_t)phi75 < 4096)
						{
							uint16_t anon80 = anon79 | 0xf000;
							*anon67 = anon80;
							phi77 = 1;
							phi78 = anon80;
						}
						*anon67 = phi78 >> 12 | phi78 << 4;
						uint32_t anon81 = (__zext uint32_t)(*(uint16_t*)phi16 & 0xf);
						uint32_t anon82 = *(uint32_t*)&alloca5 & 0xf;
						if (anon81 == anon82)
						{
							uint32_t anon83 = *(uint32_t*)&alloca5 | 0xf;
							alloca5 = (__zext uint64_t)anon83;
							phi84 = anon83;
							phi85 = (uint8_t)(*(uint32_t*)&alloca5 >> 8);
							phi86 = anon83;
							phi87 = 1;
						}
						else 
						{
							phi84 = *(uint32_t*)&alloca5;
							phi85 = (uint8_t)(phi78 >> 4);
							phi86 = anon82;
							phi87 = 0;
						}
						uint32_t phi_in88 = phi84;
						uint32_t phi_in89 = phi_in88;
						uint16_t phi90 = 0;
						if ((phi_in88 & 0xf0) == 0)
						{
							*(uint8_t*)&alloca5 = (uint8_t)phi86 | 0xf0;
							phi_in89 = *(uint32_t*)&alloca5;
							phi90 = 1;
						}
						uint32_t phi91 = phi_in89;
						uint16_t phi92 = 0;
						if ((phi_in89 & 0xf00) == 0)
						{
							((uint8_t*)&alloca5)[1] = phi85 | 0xf;
							phi91 = *(uint32_t*)&alloca5;
							phi92 = 1;
						}
						uint16_t phi93 = 0;
						uint16_t anon95 = (uint16_t)phi91;
						phi94 = anon95;
						if ((uint16_t)phi91 < 4096)
						{
							uint16_t anon96 = anon95 | 0xf000;
							*anon67 = anon96;
							phi93 = 1;
							phi94 = anon96;
						}
						*anon67 = phi94 >> 12 | phi94 << 4;
						uint32_t anon97 = *(uint32_t*)&alloca5 & 0xf;
						if (anon81 == anon97)
						{
							uint32_t anon98 = *(uint32_t*)&alloca5 | 0xf;
							alloca5 = (__zext uint64_t)anon98;
							phi99 = anon98;
							phi100 = (uint8_t)(*(uint32_t*)&alloca5 >> 8);
							phi101 = anon98;
							phi102 = 1;
						}
						else 
						{
							phi99 = *(uint32_t*)&alloca5;
							phi100 = (uint8_t)(phi94 >> 4);
							phi101 = anon97;
							phi102 = 0;
						}
						uint32_t phi103 = phi99;
						uint16_t phi104 = 0;
						if ((phi103 & 0xf0) == 0)
						{
							*(uint8_t*)&alloca5 = (uint8_t)phi101 | 0xf0;
							phi103 = *(uint32_t*)&alloca5;
							phi104 = 1;
						}
						uint32_t phi105 = phi103;
						uint16_t phi106 = 0;
						if ((phi105 & 0xf00) == 0)
						{
							((uint8_t*)&alloca5)[1] = phi100 | 0xf;
							phi106 = 1;
							phi105 = *(uint32_t*)&alloca5;
						}
						alloca1.field5 = (__zext uint16_t)((uint16_t)phi105 < 4096) + phi106 + phi74 + (phi64 + phi54 + phi58 + phi60 << 4 | phi72) + phi76 + phi77 + phi87 + phi90 + phi92 + phi93 + phi102 + phi104;
						alloca5 = 0;
						alloca5 = (__zext uint64_t)printf((uint8_t*)0x400eb3);
						break;
					}
				}
			}
			alloca1.field1 = 0;
			anon107 = (uint32_t)phi18;
			if (anon107 != 0)
			{
				uint16_t phi233;
				uint64_t anon108 = (__zext uint64_t)alloca1.field4;
				alloca5 = anon108;
				uint64_t phi_in109 = anon12;
				uint64_t phi110 = 0;
				while (true)
				{
					uint64_t phi114;
					uint16_t phi116;
					uint16_t phi117;
					uint16_t phi_in118;
					uint8_t phi119;
					uint64_t phi145;
					uint64_t phi147;
					uint16_t phi148;
					uint16_t phi149;
					uint64_t phi151;
					uint8_t phi152;
					uint16_t phi153;
					uint16_t phi164;
					uint64_t phi179;
					uint16_t phi181;
					uint16_t phi_in182;
					uint64_t phi184;
					uint64_t phi185;
					uint8_t phi186;
					uint16_t phi187;
					uint16_t phi197;
					uint64_t phi215;
					uint32_t phi217;
					uint64_t phi219;
					uint16_t phi220;
					uint64_t phi222;
					uint8_t phi223;
					uint16_t phi224;
					uint32_t phi228;
					uint32_t phi229;
					uint16_t phi230;
					uint64_t anon234;
					uint64_t anon235;
					uint64_t phi111 = phi_in109;
					uint16_t anon113 = alloca1.field4 ^ *(uint16_t*)phi111;
					uint32_t anon112 = (__zext uint32_t)anon113 >> 8;
					if ((anon112 & 0xf) == 0)
					{
						uint16_t anon115 = alloca1.field4 | 0xf;
						phi114 = (__zext uint64_t)anon115;
						phi116 = anon115;
						phi117 = 1;
						phi_in118 = 2;
						phi119 = (uint8_t)(anon113 >> 8);
					}
					else 
					{
						phi114 = anon108;
						phi116 = alloca1.field4;
						phi117 = 0;
						phi_in118 = 1;
						phi119 = (uint8_t)anon112 & 0xf;
					}
					uint64_t phi_in120 = phi114;
					uint16_t phi121 = phi116;
					phi_in118 = phi117;
					uint64_t phi122 = phi_in120;
					uint16_t phi_in123 = phi121 ^ *(uint16_t*)phi111;
					uint16_t phi124 = phi_in118;
					if (phi119 < 16)
					{
						uint64_t anon125 = phi_in120 & 0xff00 | (__zext uint64_t)(phi121 & 0xf | 0xf0);
						phi122 = anon125;
						uint16_t anon126 = (uint16_t)anon125;
						phi121 = anon126;
						phi_in123 = *(uint16_t*)phi111 ^ anon126;
						phi124 = phi_in118;
					}
					uint16_t phi_in127 = phi121;
					uint16_t phi_in128 = phi_in127;
					uint16_t phi129 = phi_in123;
					uint16_t phi130 = 0;
					if ((phi_in123 & 0xf00) == 0)
					{
						uint64_t anon131 = phi122 & 0xffffffffffff00ff | (__zext uint64_t)(phi121 & 0xf000 | 0xf00);
						phi122 = anon131;
						uint16_t anon132 = (uint16_t)anon131;
						phi_in128 = anon132;
						phi129 = *(uint16_t*)phi111 ^ anon132;
						phi130 = 256;
					}
					uint64_t phi_in133 = phi122;
					uint64_t phi134 = phi_in133;
					uint16_t phi135 = 0;
					uint16_t phi136 = phi_in128;
					if (phi129 < 4096)
					{
						uint16_t anon137 = phi_in128 | 0xf000;
						phi134 = phi_in133 & 0xffffffffffff0000 | (__zext uint64_t)anon137;
						phi135 = 256;
						phi136 = anon137;
					}
					uint32_t anon139 = (__zext uint32_t)*(uint16_t*)phi111;
					uint16_t anon144 = phi136 << 4;
					uint16_t anon143 = phi136 >> 12 | anon144;
					uint64_t anon142 = (__zext uint64_t)anon143;
					uint64_t anon141 = phi134 & 0xffffffffffff0000 | anon142;
					uint32_t anon140 = (uint32_t)anon141;
					uint32_t anon138 = (anon139 ^ anon140) >> 8;
					if ((anon138 & 0xf) == 0)
					{
						uint32_t anon146 = anon140 | 0xf;
						phi145 = (__zext uint64_t)anon146;
						phi147 = anon141 >> 8 & 0xffffff;
						phi148 = (uint16_t)anon146;
						uint16_t anon150 = anon144 | 0xf;
						phi149 = anon150;
						phi151 = (__zext uint64_t)anon150;
						phi152 = (uint8_t)anon138;
						phi153 = 256;
					}
					else 
					{
						phi145 = anon141;
						phi147 = (__zext uint64_t)(phi136 >> 4);
						phi148 = anon143;
						phi149 = anon143;
						phi151 = anon142;
						phi152 = (uint8_t)anon138 & 0xf;
						phi153 = 0;
					}
					uint64_t phi154 = phi145;
					uint16_t phi155 = phi148;
					uint16_t phi_in156 = phi149;
					uint16_t phi157 = phi_in156;
					uint16_t phi158 = 0;
					if (phi152 < 16)
					{
						uint64_t anon159 = phi154 & 0xffffffffffffff00 | phi151 & 0xf | 0xf0;
						phi154 = anon159;
						uint16_t anon160 = (uint16_t)anon159;
						phi155 = anon160;
						phi157 = anon160;
						phi158 = 256;
					}
					uint64_t phi_in161 = phi154;
					uint16_t phi162 = phi155;
					uint64_t phi_in163 = phi_in161;
					uint16_t anon165 = *(uint16_t*)phi111 ^ phi157;
					phi164 = anon165;
					uint16_t phi166 = 0;
					if ((anon165 & 0xf00) == 0)
					{
						uint64_t anon167 = phi_in161 & 0xffffffffffff00ff | phi147 << 8 & 0xf000 | 0xf00;
						phi_in163 = anon167;
						uint16_t anon168 = (uint16_t)anon167;
						phi162 = anon168;
						phi164 = *(uint16_t*)phi111 ^ anon168;
						phi166 = 256;
					}
					uint16_t phi169 = phi162;
					uint64_t phi170 = phi_in163;
					uint16_t phi171 = 0;
					if (phi164 < 4096)
					{
						uint16_t anon172 = phi169 | 0xf000;
						phi170 = phi_in163 & 0xffffffffffff0000 | (__zext uint64_t)anon172;
						phi171 = 256;
						phi169 = anon172;
					}
					uint16_t anon178 = phi169 << 4;
					uint16_t anon177 = phi169 >> 12 | anon178;
					uint64_t anon176 = (__zext uint64_t)anon177;
					uint64_t anon175 = phi170 & 0xffffffffffff0000 | anon176;
					uint32_t anon174 = (uint32_t)anon175;
					uint32_t anon173 = (anon139 ^ anon174) >> 8;
					if ((anon173 & 0xf) == 0)
					{
						uint32_t anon180 = anon174 | 0xf;
						phi179 = (__zext uint64_t)anon180;
						phi181 = (uint16_t)anon180;
						uint16_t anon183 = anon178 | 0xf;
						phi_in182 = anon183;
						phi184 = anon175 >> 8 & 0xffffff;
						phi185 = (__zext uint64_t)anon183;
						phi186 = (uint8_t)anon173;
						phi187 = 256;
					}
					else 
					{
						phi179 = anon175;
						phi181 = anon177;
						phi_in182 = anon177;
						phi184 = (__zext uint64_t)(phi169 >> 4);
						phi185 = anon176;
						phi186 = (uint8_t)anon173 & 0xf;
						phi187 = 0;
					}
					uint16_t phi_in188 = phi181;
					uint16_t phi_in189 = phi_in188;
					uint16_t phi190 = phi_in182;
					uint16_t phi191 = 0;
					if (phi186 < 16)
					{
						uint64_t anon192 = phi179 & 0xffffffffffffff00 | phi185 & 0xf | 0xf0;
						phi179 = anon192;
						uint16_t anon193 = (uint16_t)anon192;
						phi_in189 = anon193;
						phi190 = anon193;
						phi191 = 256;
					}
					uint64_t phi_in194 = phi179;
					uint64_t phi195 = phi_in194;
					uint16_t phi196 = phi_in189;
					uint16_t anon198 = *(uint16_t*)phi111 ^ phi190;
					phi197 = anon198;
					uint16_t phi199 = 0;
					if ((anon198 & 0xf00) == 0)
					{
						uint64_t anon200 = phi_in194 & 0xffffffffffff00ff | phi184 << 8 & 0xf000 | 0xf00;
						phi195 = anon200;
						uint16_t anon201 = (uint16_t)anon200;
						phi196 = anon201;
						phi197 = *(uint16_t*)phi111 ^ anon201;
						phi199 = 256;
					}
					uint64_t phi_in202 = phi195;
					uint16_t phi_in203 = phi196;
					uint64_t phi204 = phi_in202;
					uint16_t phi205 = 0;
					uint16_t phi206 = phi_in203;
					if (phi197 < 4096)
					{
						uint16_t anon207 = phi_in203 | 0xf000;
						phi204 = phi_in202 & 0xffffffffffff0000 | (__zext uint64_t)anon207;
						phi205 = 256;
						phi206 = anon207;
					}
					uint16_t anon214 = phi206 << 4;
					uint16_t anon213 = phi206 >> 12 | anon214;
					uint64_t anon212 = (__zext uint64_t)anon213;
					uint64_t anon211 = phi204 & 0xffffffffffff0000 | anon212;
					uint32_t anon210 = (uint32_t)anon211;
					uint32_t anon209 = anon139 ^ anon210;
					uint32_t anon208 = anon209 >> 8;
					if ((anon208 & 0xf) == 0)
					{
						uint32_t anon216 = anon210 | 0xf;
						phi215 = (__zext uint64_t)anon216;
						uint32_t anon218 = anon139 ^ anon216;
						phi217 = anon218;
						phi219 = anon211 >> 8 & 0xffffff;
						uint16_t anon221 = anon214 | 0xf;
						phi220 = anon221;
						phi222 = (__zext uint64_t)anon221;
						phi223 = (uint8_t)(anon218 >> 8);
						phi224 = 256;
					}
					else 
					{
						phi215 = anon211;
						phi217 = anon209;
						phi219 = (__zext uint64_t)(phi206 >> 4);
						phi220 = anon213;
						phi222 = anon212;
						phi223 = (uint8_t)anon208 & 0xf;
						phi224 = 0;
					}
					uint64_t phi225 = phi215;
					uint32_t phi_in226 = phi217;
					if (phi223 < 16)
					{
						uint64_t anon227 = phi225 & 0xffffffffffffff00 | phi222 & 0xf | 0xf0;
						phi225 = anon227;
						phi228 = (__zext uint32_t)(*(uint16_t*)phi111 ^ (uint16_t)anon227);
						phi229 = anon139 ^ (uint32_t)anon227;
						phi230 = 256;
					}
					else 
					{
						phi228 = phi_in226;
						phi229 = (__zext uint32_t)(*(uint16_t*)phi111 ^ phi220);
						phi230 = 0;
					}
					uint32_t phi231 = phi228;
					uint16_t phi232 = 0;
					if ((phi229 & 0xf00) == 0)
					{
						phi231 = anon139 ^ (uint32_t)(phi225 & 0xffff00ff | phi219 << 8 & 0xf000 | 0xf00);
						phi232 = 256;
					}
					if ((__zext uint16_t)((uint16_t)phi231 < 4096) + phi199 + phi191 + phi171 + phi166 + (phi135 + phi130 + phi124 << 4) + phi153 + phi158 + phi187 + phi205 + phi224 + phi230 + phi232 == *(uint16_t*)(arg1 - 66))
					{
						*(uint16_t*)(anon12 + (phi110 << 1 & 0x1fffe)) = *(uint16_t*)phi111;
						phi233 = (uint16_t)phi110 + 1;
						anon234 = phi111 + 2;
						uint64_t anon236 = phi18 + 4294967295 & 0xffffffff;
						anon235 = anon236 + anon236 + 2 + anon12;
						if (anon234 == anon235)
						{
							break;
						}
						else 
						{
							phi_in109 = anon234;
							phi110 = phi110 + 1 & 0xffffffff;
						}
					}
					else 
					{
						phi_in109 = anon234;
						phi110 = phi110;
						if (anon234 == anon235)
						{
							phi233 = (uint16_t)phi110;
							break;
						}
					}
				}
				alloca1.field1 = anon107;
				uint16_t* anon237 = (uint16_t*)phi16;
				*anon237 = *anon237;
				if (phi233 == 0 | *(uint16_t*)(arg1 - 66) == 64)
				{
					break;
				}
				else 
				{
					alloca5 = 0;
					uint64_t anon238 = (__zext uint64_t)phi233;
					alloca5 = (__zext uint64_t)*(uint16_t*)(anon12 + ((__sext int64_t)rand() % anon238 << 32 >> 31));
					alloca1.field4 = *(uint16_t*)(anon12 + ((__sext int64_t)rand() % anon238 << 32 >> 31));
					phi18 = anon238;
				}
			}
		}
		while (anon107 != 0);
	}
	putchar(10);
	return;
	if (anon13 == null)
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
