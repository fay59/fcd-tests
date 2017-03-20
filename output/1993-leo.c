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
	uint32_t anon8;
	uint64_t phi11;
	alloca1.field9 = arg0;
	alloca1.field7 = 0;
	alloca1.field1 = (uint32_t)arg2;
	uint64_t* anon3 = (uint64_t*)arg3;
	uint64_t anon2 = strlen((uint8_t*)*anon3);
	uint64_t anon4 = *anon3 + anon2 - 1;
	*anon3 = anon4;
	uint8_t* anon5 = (uint8_t*)anon4;
	*anon5 = *anon5 ^ 0x64;
	uint64_t alloca6 = 0;
	uint64_t anon7 = time(null);
	alloca6 = 0;
	srand((uint32_t)anon7);
	if (alloca1.field1 == 2)
	{
		alloca6 = 0;
		anon8 = sscanf(*(uint8_t**)(arg3 + 8), (uint8_t*)0x400e84);
		alloca6 = (__zext uint64_t)anon8;
		if (anon8 != 0)
		{
			alloca6 = (__zext uint64_t)alloca1.field1;
			if (alloca1.field1 != 0)
			{
				uint32_t anon10 = alloca1.field1 * alloca1.field1;
				uint32_t anon9 = anon10 * anon10;
				alloca6 = (__zext uint64_t)anon9;
				alloca1.field1 = alloca1.field1;
				phi11 = (__sext int64_t)anon9;
			}
		}
	}
	if (alloca1.field1 != 2 || alloca1.field1 == 2 && anon8 == 0 || alloca1.field1 == 2 && anon8 != 0 && alloca1.field1 == 0)
	{
		alloca1.field1 = 6;
		alloca1.field1 = 6;
		phi11 = 1296;
	}
	uint32_t phi12 = alloca1.field1;
	uint8_t* anon13 = calloc(phi11, 2);
	uint64_t anon14 = (uint64_t)anon13;
	alloca6 = anon14;
	if (anon13 != null)
	{
		uint64_t phi17;
		uint32_t phi18;
		uint64_t phi19;
		uint32_t anon16 = phi12 * phi12;
		uint32_t anon15 = anon16 * anon16;
		if (anon15 < 2)
		{
			phi17 = (uint64_t)&alloca1.field3;
			phi18 = 1;
			phi19 = 1;
		}
		else 
		{
			uint64_t anon28;
			uint32_t anon42;
			bool anon43;
			uint64_t anon22 = (__zext uint64_t)phi12;
			uint64_t anon21 = anon22 << 8;
			uint16_t anon20 = (uint16_t)(4096 - anon21);
			alloca1.field0 = anon20;
			uint32_t phi_in23 = 1;
			uint64_t phi24 = 1;
			do
			{
				uint32_t phi25 = phi_in23;
				uint64_t anon27 = phi24 << 1;
				uint64_t anon26 = anon27 + anon14;
				alloca6 = anon26;
				anon28 = arg1 - 70;
				uint32_t anon30 = (__zext uint32_t)*(uint16_t*)(anon14 + anon27 - 2) + 1;
				uint16_t anon29 = (uint16_t)anon30;
				*(uint16_t*)anon28 = anon29;
				uint16_t phi31 = anon29;
				if (((phi12 ^ anon30) & 0xf) == 0)
				{
					uint32_t anon34 = 16 - phi12;
					uint32_t anon33 = anon30 + (anon34 & 0xffff);
					uint16_t anon32 = (uint16_t)anon33;
					*(uint16_t*)anon28 = anon32;
					phi31 = anon32;
					uint64_t anon35 = anon22 << 4;
					uint32_t anon36 = anon30 + anon34;
					if ((((uint32_t)anon35 ^ anon36) & 0xf0) == 0)
					{
						uint32_t anon38 = (uint32_t)(256 - anon35);
						uint16_t anon37 = (uint16_t)(anon33 + anon38);
						*(uint16_t*)anon28 = anon37;
						phi31 = anon37;
						if ((((uint32_t)anon21 ^ anon36 + anon38) & 0xf00) == 0)
						{
							uint16_t anon39 = anon37 + anon20;
							uint16_t anon40 = (uint16_t)phi12 << 12;
							*(uint16_t*)anon28 = anon39 - ((anon40 ^ anon39) < 4096 ? anon40 : 0);
							phi31 = (anon40 ^ anon39) < 4096 ? 0 : anon39;
						}
					}
				}
				*(uint16_t*)anon26 = phi31;
				anon42 = phi25 + 1 & 0xffff;
				struct { uint32_t field0; bool field1; } anon41 = llvm.ssub.with.overflow.i32(anon15, anon42);
				uint16_t anon46 = (uint16_t)phi25 + 1;
				uint32_t anon45 = (__zext uint32_t)anon46;
				uint32_t anon44 = anon15 - anon45;
				anon43 = (uint8_t)(anon44 >> 31) == (__zext uint8_t)anon41.field1 & anon44 != 0;
				if (anon43)
				{
					phi_in23 = anon45;
					phi24 = (__zext uint64_t)anon46;
				}
			}
			while (anon43);
			phi17 = anon28;
			phi18 = anon42;
			phi19 = (__zext uint64_t)anon42;
		}
		uint64_t phi47 = phi19;
		uint64_t anon48 = (uint64_t)&alloca1.field4;
		alloca6 = anon48;
		alloca6 = 0;
		uint32_t anon49 = rand();
		alloca6 = (__zext uint64_t)*(uint16_t*)(anon14 + ((__sext int64_t)anon49 % (__zext uint64_t)phi18 << 32 >> 31));
		uint8_t** anon50 = (uint8_t**)arg3;
		*(uint16_t*)(**anon50 == 0 ? phi17 : anon48) = *(uint16_t*)(anon14 + ((__sext int64_t)anon49 % (__zext uint64_t)phi18 << 32 >> 31));
		while (true)
		{
			uint64_t phi_in116;
			uint64_t phi117;
			uint64_t anon238;
			while (true)
			{
				alloca6 = 0;
				uint32_t anon51 = printf((uint8_t*)0x400e95);
				alloca6 = (__zext uint64_t)anon51;
				uint8_t* anon52 = (uint8_t*)arg3;
				*(uint8_t*)&alloca6 = *anon52;
				uint8_t anon53 = anon52[1];
				((uint8_t*)&alloca6)[1] = anon53;
				uint48_t* anon54 = (uint48_t*)&anon52[2];
				*(uint48_t*)&((uint8_t*)&alloca6)[2] = *anon54;
				if (**anon50 == 0)
				{
					if (**anon50 != 0)
					{
						alloca6 = 0;
						uint32_t anon55 = scanf((uint8_t*)0x400eaa);
						alloca6 = (__zext uint64_t)anon55;
						*(uint8_t*)&alloca6 = *anon52;
						((uint8_t*)&alloca6)[1] = anon53;
						*(uint48_t*)&((uint8_t*)&alloca6)[2] = *anon54;
						if (**anon50 != 0)
						{
							break;
						}
					}
					if (**anon50 == 0 && (**anon50 != 0))
					{
						alloca1.field4 = alloca1.field4 - 4369;
					}
				}
				else 
				{
					alloca6 = 0;
					uint32_t anon56 = printf((uint8_t*)0x400ea4);
					alloca6 = (__zext uint64_t)anon56;
					*(uint8_t*)&alloca6 = *anon52;
					((uint8_t*)&alloca6)[1] = anon53;
					*(uint48_t*)&((uint8_t*)&alloca6)[2] = *anon54;
				}
				if (**anon50 == 0 && **anon50 == 0 || **anon50 != 0 && **anon50 == 0 && **anon50 == 0 || **anon50 != 0 && **anon50 != 0)
				{
					alloca6 = 0;
					uint32_t anon57 = printf((uint8_t*)0x400eae);
					alloca6 = (__zext uint64_t)anon57;
					*(uint8_t*)&alloca6 = *anon52;
					((uint8_t*)&alloca6)[1] = anon53;
					*(uint48_t*)&((uint8_t*)&alloca6)[2] = *anon54;
				}
				if (**anon50 == 0 && (**anon50 == 0 && **anon50 == 0 || **anon50 != 0 && **anon50 == 0 && **anon50 == 0 || **anon50 != 0 && **anon50 != 0))
				{
					uint32_t anon59;
					uint16_t phi60;
					uint32_t phi61;
					uint8_t phi62;
					uint16_t phi63;
					uint8_t phi76;
					uint32_t phi77;
					uint32_t phi78;
					uint16_t phi79;
					uint16_t phi85;
					uint32_t phi91;
					uint8_t phi92;
					uint32_t phi93;
					uint16_t phi94;
					uint16_t phi100;
					uint32_t phi105;
					uint8_t phi106;
					uint32_t phi107;
					uint16_t phi108;
					alloca6 = (__zext uint64_t)alloca1.field4;
					if (((alloca1.field4 ^ *(uint16_t*)phi17) & 0xf) == 0)
					{
						anon59 = (__zext uint32_t)alloca1.field4;
						uint32_t anon58 = anon59 | 0xf;
						alloca6 = (__zext uint64_t)anon58;
						phi60 = (uint16_t)anon58;
						phi61 = anon58;
						phi62 = (uint8_t)anon58;
						phi63 = 1;
					}
					else 
					{
						phi60 = alloca1.field4;
						phi61 = anon59;
						phi62 = (uint8_t)alloca1.field4 & 0xf;
						phi63 = 0;
					}
					uint16_t phi64 = phi60;
					uint32_t phi65 = phi61;
					uint16_t phi66 = 0;
					if (((uint8_t)*(uint16_t*)phi17 ^ (uint8_t)phi61) < 16)
					{
						*(uint8_t*)&alloca6 = phi62 | 0xf0;
						phi64 = (uint16_t)*(uint32_t*)&alloca6;
						phi65 = *(uint32_t*)&alloca6;
						phi66 = 1;
					}
					uint16_t phi67 = phi64;
					uint32_t phi68 = phi65;
					uint16_t phi69 = 0;
					uint32_t anon70 = (__zext uint32_t)*(uint16_t*)phi17;
					if (((anon70 ^ phi68) & 0xf00) == 0)
					{
						((uint8_t*)&alloca6)[1] = (uint8_t)(alloca1.field4 >> 8) | 0xf;
						phi67 = (uint16_t)*(uint32_t*)&alloca6;
						phi69 = 1;
						phi68 = *(uint32_t*)&alloca6;
					}
					uint16_t phi71 = phi67;
					uint16_t phi72 = 0;
					if ((*(uint16_t*)phi17 ^ (uint16_t)phi68) < 4096)
					{
						uint16_t anon73 = phi71 | 0xf000;
						*(uint16_t*)&alloca6 = anon73;
						phi72 = 1;
						phi71 = anon73;
					}
					uint16_t* anon74 = (uint16_t*)&alloca6;
					*anon74 = phi71 >> 12 | phi71 << 4;
					if (((anon70 ^ *(uint32_t*)&alloca6) & 0xf) == 0)
					{
						uint32_t anon75 = *(uint32_t*)&alloca6 | 0xf;
						alloca6 = (__zext uint64_t)anon75;
						phi76 = (uint8_t)(*(uint32_t*)&alloca6 >> 8);
						phi77 = anon75;
						phi78 = anon75;
						phi79 = 1;
					}
					else 
					{
						phi76 = (uint8_t)(phi71 >> 4);
						phi77 = *(uint32_t*)&alloca6;
						phi78 = *(uint32_t*)&alloca6 & 0xf;
						phi79 = 0;
					}
					uint32_t phi80 = phi77;
					uint16_t phi81 = 0;
					if ((phi80 & 0xf0) == 0)
					{
						*(uint8_t*)&alloca6 = (uint8_t)phi78 | 0xf0;
						phi80 = *(uint32_t*)&alloca6;
						phi81 = 1;
					}
					uint32_t phi82 = phi80;
					uint16_t phi83 = 0;
					if ((phi80 & 0xf00) == 0)
					{
						((uint8_t*)&alloca6)[1] = phi76 | 0xf;
						phi82 = *(uint32_t*)&alloca6;
						phi83 = 1;
					}
					uint16_t phi84 = 0;
					uint16_t anon86 = (uint16_t)phi82;
					phi85 = anon86;
					if ((uint16_t)phi82 < 4096)
					{
						uint16_t anon87 = anon86 | 0xf000;
						*anon74 = anon87;
						phi84 = 1;
						phi85 = anon87;
					}
					*anon74 = phi85 >> 12 | phi85 << 4;
					uint32_t anon88 = (__zext uint32_t)(*(uint16_t*)phi17 & 0xf);
					uint32_t anon89 = *(uint32_t*)&alloca6 & 0xf;
					if (anon88 == anon89)
					{
						uint32_t anon90 = *(uint32_t*)&alloca6 | 0xf;
						alloca6 = (__zext uint64_t)anon90;
						phi91 = anon90;
						phi92 = (uint8_t)(*(uint32_t*)&alloca6 >> 8);
						phi93 = anon90;
						phi94 = 1;
					}
					else 
					{
						phi91 = *(uint32_t*)&alloca6;
						phi92 = (uint8_t)(phi85 >> 4);
						phi93 = anon89;
						phi94 = 0;
					}
					uint32_t phi95 = phi91;
					uint16_t phi96 = 0;
					if ((phi91 & 0xf0) == 0)
					{
						*(uint8_t*)&alloca6 = (uint8_t)phi93 | 0xf0;
						phi95 = *(uint32_t*)&alloca6;
						phi96 = 1;
					}
					uint32_t phi97 = phi95;
					uint16_t phi98 = 0;
					if ((phi97 & 0xf00) == 0)
					{
						((uint8_t*)&alloca6)[1] = phi92 | 0xf;
						phi97 = *(uint32_t*)&alloca6;
						phi98 = 1;
					}
					uint16_t phi99 = 0;
					uint16_t anon101 = (uint16_t)phi97;
					phi100 = anon101;
					if ((uint16_t)phi97 < 4096)
					{
						uint16_t anon102 = anon101 | 0xf000;
						*anon74 = anon102;
						phi99 = 1;
						phi100 = anon102;
					}
					*anon74 = phi100 >> 12 | phi100 << 4;
					uint32_t anon103 = *(uint32_t*)&alloca6 & 0xf;
					if (anon88 == anon103)
					{
						uint32_t anon104 = *(uint32_t*)&alloca6 | 0xf;
						alloca6 = (__zext uint64_t)anon104;
						phi105 = anon104;
						phi106 = (uint8_t)(*(uint32_t*)&alloca6 >> 8);
						phi107 = anon104;
						phi108 = 1;
					}
					else 
					{
						phi105 = *(uint32_t*)&alloca6;
						phi106 = (uint8_t)(phi100 >> 4);
						phi107 = anon103;
						phi108 = 0;
					}
					uint32_t phi109 = phi105;
					uint16_t phi110 = 0;
					if ((phi105 & 0xf0) == 0)
					{
						*(uint8_t*)&alloca6 = (uint8_t)phi107 | 0xf0;
						phi109 = *(uint32_t*)&alloca6;
						phi110 = 1;
					}
					uint16_t phi111 = 0;
					uint32_t phi112 = phi109;
					if ((phi109 & 0xf00) == 0)
					{
						((uint8_t*)&alloca6)[1] = phi106 | 0xf;
						phi111 = 1;
						phi112 = *(uint32_t*)&alloca6;
					}
					alloca1.field5 = (__zext uint16_t)((uint16_t)phi112 < 4096) + phi111 + phi81 + (phi72 + phi63 + phi66 + phi69 << 4 | phi79) + phi83 + phi84 + phi94 + phi96 + phi98 + phi99 + phi108 + phi110;
					alloca6 = 0;
					uint32_t anon113 = printf((uint8_t*)0x400eb3);
					alloca6 = (__zext uint64_t)anon113;
					break;
				}
			}
			alloca1.field1 = 0;
			uint32_t anon114 = (uint32_t)phi47;
			if (anon114 != 0)
			{
				uint16_t phi237;
				uint64_t anon115 = (__zext uint64_t)alloca1.field4;
				alloca6 = anon115;
				phi_in116 = anon14;
				phi117 = 0;
				while (true)
				{
					uint64_t phi121;
					uint16_t phi123;
					uint16_t phi124;
					uint16_t phi125;
					uint8_t phi126;
					uint64_t phi152;
					uint64_t phi154;
					uint16_t phi_in155;
					uint16_t phi156;
					uint64_t phi158;
					uint8_t phi159;
					uint16_t phi160;
					uint16_t phi170;
					uint64_t phi185;
					uint16_t phi187;
					uint16_t phi188;
					uint64_t phi190;
					uint64_t phi191;
					uint8_t phi192;
					uint16_t phi193;
					uint16_t phi203;
					uint64_t phi219;
					uint32_t phi221;
					uint64_t phi223;
					uint16_t phi224;
					uint64_t phi226;
					uint8_t phi227;
					uint16_t phi228;
					uint64_t phi229;
					uint32_t phi231;
					uint32_t phi232;
					uint16_t phi233;
					uint64_t anon239;
					uint64_t phi118 = phi_in116;
					uint16_t anon120 = alloca1.field4 ^ *(uint16_t*)phi118;
					uint32_t anon119 = (__zext uint32_t)anon120 >> 8;
					if ((anon119 & 0xf) == 0)
					{
						uint16_t anon122 = alloca1.field4 | 0xf;
						phi121 = (__zext uint64_t)anon122;
						phi123 = anon122;
						phi124 = 1;
						phi125 = 2;
						phi126 = (uint8_t)(anon120 >> 8);
					}
					else 
					{
						phi121 = anon115;
						phi123 = alloca1.field4;
						phi124 = 0;
						phi125 = 1;
						phi126 = (uint8_t)anon119 & 0xf;
					}
					uint16_t phi_in127 = phi124;
					uint64_t phi128 = phi121;
					uint16_t phi129 = phi123;
					uint16_t phi130 = phi123 ^ *(uint16_t*)phi118;
					uint16_t phi131 = phi_in127;
					if (phi126 < 16)
					{
						uint64_t anon132 = phi121 & 0xff00 | (__zext uint64_t)(phi123 & 0xf | 0xf0);
						phi128 = anon132;
						uint16_t anon133 = (uint16_t)anon132;
						phi129 = anon133;
						phi130 = *(uint16_t*)phi118 ^ anon133;
						phi131 = phi125;
					}
					uint16_t phi_in134 = phi129;
					uint64_t phi135 = phi128;
					uint16_t phi136 = phi_in134;
					uint16_t phi137 = phi130;
					uint16_t phi138 = 0;
					if ((phi130 & 0xf00) == 0)
					{
						uint64_t anon139 = phi128 & 0xffffffffffff00ff | (__zext uint64_t)(phi123 & 0xf000 | 0xf00);
						phi135 = anon139;
						uint16_t anon140 = (uint16_t)anon139;
						phi136 = anon140;
						phi137 = *(uint16_t*)phi118 ^ anon140;
						phi138 = 256;
					}
					uint64_t phi141 = phi135;
					uint16_t phi142 = 0;
					uint16_t phi143 = phi136;
					if (phi137 < 4096)
					{
						uint16_t anon144 = phi136 | 0xf000;
						phi141 = phi135 & 0xffffffffffff0000 | (__zext uint64_t)anon144;
						phi142 = 256;
						phi143 = anon144;
					}
					uint32_t anon146 = (__zext uint32_t)*(uint16_t*)phi118;
					uint16_t anon151 = phi143 << 4;
					uint16_t anon150 = phi143 >> 12 | anon151;
					uint64_t anon149 = (__zext uint64_t)anon150;
					uint64_t anon148 = phi141 & 0xffffffffffff0000 | anon149;
					uint32_t anon147 = (uint32_t)anon148;
					uint32_t anon145 = (anon146 ^ anon147) >> 8;
					if ((anon145 & 0xf) == 0)
					{
						uint32_t anon153 = anon147 | 0xf;
						phi152 = (__zext uint64_t)anon153;
						phi154 = anon148 >> 8 & 0xffffff;
						phi_in155 = (uint16_t)anon153;
						uint16_t anon157 = anon151 | 0xf;
						phi156 = anon157;
						phi158 = (__zext uint64_t)anon157;
						phi159 = (uint8_t)anon145;
						phi160 = 256;
					}
					else 
					{
						phi152 = anon148;
						phi154 = (__zext uint64_t)(phi143 >> 4);
						phi_in155 = anon150;
						phi156 = anon150;
						phi158 = anon149;
						phi159 = (uint8_t)anon145 & 0xf;
						phi160 = 0;
					}
					uint16_t phi_in161 = phi156;
					uint64_t phi162 = phi152;
					uint16_t phi163 = phi_in155;
					uint16_t phi164 = phi_in161;
					uint16_t phi165 = 0;
					if (phi159 < 16)
					{
						uint64_t anon166 = phi152 & 0xffffffffffffff00 | phi158 & 0xf | 0xf0;
						phi162 = anon166;
						uint16_t anon167 = (uint16_t)anon166;
						phi163 = anon167;
						phi164 = anon167;
						phi165 = 256;
					}
					uint16_t phi168 = phi163;
					uint64_t phi169 = phi162;
					uint16_t anon171 = *(uint16_t*)phi118 ^ phi164;
					phi170 = anon171;
					uint16_t phi172 = 0;
					if ((anon171 & 0xf00) == 0)
					{
						uint64_t anon173 = phi162 & 0xffffffffffff00ff | phi154 << 8 & 0xf000 | 0xf00;
						phi169 = anon173;
						uint16_t anon174 = (uint16_t)anon173;
						phi168 = anon174;
						phi170 = *(uint16_t*)phi118 ^ anon174;
						phi172 = 256;
					}
					uint16_t phi175 = phi168;
					uint64_t phi176 = phi169;
					uint16_t phi177 = 0;
					if (phi170 < 4096)
					{
						uint16_t anon178 = phi175 | 0xf000;
						phi176 = phi169 & 0xffffffffffff0000 | (__zext uint64_t)anon178;
						phi177 = 256;
						phi175 = anon178;
					}
					uint16_t anon184 = phi175 << 4;
					uint16_t anon183 = phi175 >> 12 | anon184;
					uint64_t anon182 = (__zext uint64_t)anon183;
					uint64_t anon181 = phi176 & 0xffffffffffff0000 | anon182;
					uint32_t anon180 = (uint32_t)anon181;
					uint32_t anon179 = (anon146 ^ anon180) >> 8;
					if ((anon179 & 0xf) == 0)
					{
						uint32_t anon186 = anon180 | 0xf;
						phi185 = (__zext uint64_t)anon186;
						phi187 = (uint16_t)anon186;
						uint16_t anon189 = anon184 | 0xf;
						phi188 = anon189;
						phi190 = anon181 >> 8 & 0xffffff;
						phi191 = (__zext uint64_t)anon189;
						phi192 = (uint8_t)anon179;
						phi193 = 256;
					}
					else 
					{
						phi185 = anon181;
						phi187 = anon183;
						phi188 = anon183;
						phi190 = (__zext uint64_t)(phi175 >> 4);
						phi191 = anon182;
						phi192 = (uint8_t)anon179 & 0xf;
						phi193 = 0;
					}
					uint16_t phi_in194 = phi188;
					uint64_t phi195 = phi185;
					uint16_t phi196 = phi_in194;
					uint16_t phi197 = 0;
					if (phi192 < 16)
					{
						uint64_t anon198 = phi185 & 0xffffffffffffff00 | phi191 & 0xf | 0xf0;
						phi195 = anon198;
						uint16_t anon199 = (uint16_t)anon198;
						phi187 = anon199;
						phi196 = anon199;
						phi197 = 256;
					}
					uint16_t phi_in200 = phi187;
					uint64_t phi201 = phi195;
					uint16_t phi202 = phi_in200;
					uint16_t anon204 = *(uint16_t*)phi118 ^ phi196;
					phi203 = anon204;
					uint16_t phi205 = 0;
					if ((anon204 & 0xf00) == 0)
					{
						uint64_t anon206 = phi195 & 0xffffffffffff00ff | phi190 << 8 & 0xf000 | 0xf00;
						phi201 = anon206;
						uint16_t anon207 = (uint16_t)anon206;
						phi202 = anon207;
						phi203 = *(uint16_t*)phi118 ^ anon207;
						phi205 = 256;
					}
					uint64_t phi208 = phi201;
					uint16_t phi209 = 0;
					uint16_t phi210 = phi202;
					if (phi203 < 4096)
					{
						uint16_t anon211 = phi202 | 0xf000;
						phi208 = phi208 & 0xffffffffffff0000 | (__zext uint64_t)anon211;
						phi209 = 256;
						phi210 = anon211;
					}
					uint16_t anon218 = phi210 << 4;
					uint16_t anon217 = phi210 >> 12 | anon218;
					uint64_t anon216 = (__zext uint64_t)anon217;
					uint64_t anon215 = phi208 & 0xffffffffffff0000 | anon216;
					uint32_t anon214 = (uint32_t)anon215;
					uint32_t anon213 = anon146 ^ anon214;
					uint32_t anon212 = anon213 >> 8;
					if ((anon212 & 0xf) == 0)
					{
						uint32_t anon220 = anon214 | 0xf;
						phi219 = (__zext uint64_t)anon220;
						uint32_t anon222 = anon146 ^ anon220;
						phi221 = anon222;
						phi223 = anon215 >> 8 & 0xffffff;
						uint16_t anon225 = anon218 | 0xf;
						phi224 = anon225;
						phi226 = (__zext uint64_t)anon225;
						phi227 = (uint8_t)(anon222 >> 8);
						phi228 = 256;
					}
					else 
					{
						phi219 = anon215;
						phi221 = anon213;
						phi223 = (__zext uint64_t)(phi210 >> 4);
						phi224 = anon217;
						phi226 = anon216;
						phi227 = (uint8_t)anon212 & 0xf;
						phi228 = 0;
					}
					if (phi227 < 16)
					{
						uint64_t anon230 = phi219 & 0xffffffffffffff00 | phi226 & 0xf | 0xf0;
						phi229 = anon230;
						phi231 = (__zext uint32_t)(*(uint16_t*)phi118 ^ (uint16_t)anon230);
						phi232 = anon146 ^ (uint32_t)anon230;
						phi233 = 256;
					}
					else 
					{
						phi229 = phi219;
						phi231 = phi221;
						phi232 = (__zext uint32_t)(*(uint16_t*)phi118 ^ phi224);
						phi233 = 0;
					}
					uint32_t phi_in234 = phi231;
					uint32_t phi235 = phi_in234;
					uint16_t phi236 = 0;
					if ((phi232 & 0xf00) == 0)
					{
						phi235 = anon146 ^ (uint32_t)(phi229 & 0xffff00ff | phi223 << 8 & 0xf000 | 0xf00);
						phi236 = 256;
					}
					if ((__zext uint16_t)((uint16_t)phi235 < 4096) + phi205 + phi197 + phi177 + phi172 + (phi142 + phi138 + phi131 << 4) + phi160 + phi165 + phi193 + phi209 + phi228 + phi233 + phi236 == *(uint16_t*)(arg1 - 66))
					{
						*(uint16_t*)(anon14 + (phi117 << 1 & 0x1fffe)) = *(uint16_t*)phi118;
						phi237 = (uint16_t)phi117 + 1;
						anon238 = phi118 + 2;
						uint64_t anon240 = phi47 + 4294967295 & 0xffffffff;
						anon239 = anon240 + anon240 + 2 + anon14;
						if (anon238 != anon239)
						{
							break;
						}
					}
					else 
					{
						phi_in116 = anon238;
						phi117 = phi117;
						if (anon238 == anon239)
						{
							phi237 = (uint16_t)phi117;
						}
					}
				}
				alloca1.field1 = anon114;
				uint16_t* anon241 = (uint16_t*)phi17;
				*anon241 = *anon241;
				if (!(phi237 == 0 | *(uint16_t*)(arg1 - 66) == 64))
				{
					alloca6 = 0;
					uint32_t anon242 = rand();
					uint64_t anon243 = (__zext uint64_t)phi237;
					alloca6 = (__zext uint64_t)*(uint16_t*)(anon14 + ((__sext int64_t)anon242 % anon243 << 32 >> 31));
					alloca1.field4 = *(uint16_t*)(anon14 + ((__sext int64_t)anon242 % anon243 << 32 >> 31));
					phi47 = anon243;
				}
			}
			phi_in116 = anon238;
			phi117 = phi117 + 1 & 0xffffffff;
			break;
		}
	}
	putchar(10);
	return;
	if (anon13 == null)
	{
		uint32_t anon244 = puts((uint8_t*)0x400e87);
		alloca6 = (__zext uint64_t)anon244;
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
