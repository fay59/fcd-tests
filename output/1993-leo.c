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
		uint64_t phi_in19;
		uint32_t anon16 = phi12 * phi12;
		uint32_t anon15 = anon16 * anon16;
		if (anon15 < 2)
		{
			phi17 = (uint64_t)&alloca1.field3;
			phi18 = 1;
			phi_in19 = 1;
		}
		else 
		{
			uint64_t anon28;
			uint32_t anon41;
			bool anon42;
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
				*(uint16_t*)anon26 = anon29;
				if (((phi12 ^ anon30) & 0xf) == 0)
				{
					uint32_t anon33 = 16 - phi12;
					uint32_t anon32 = anon30 + (anon33 & 0xffff);
					uint16_t anon31 = (uint16_t)anon32;
					*(uint16_t*)anon28 = anon31;
					*(uint16_t*)anon26 = anon31;
					uint64_t anon34 = anon22 << 4;
					uint32_t anon35 = anon30 + anon33;
					if ((((uint32_t)anon34 ^ anon35) & 0xf0) == 0)
					{
						uint32_t anon37 = (uint32_t)(256 - anon34);
						uint16_t anon36 = (uint16_t)(anon32 + anon37);
						*(uint16_t*)anon28 = anon36;
						*(uint16_t*)anon26 = anon36;
						if ((((uint32_t)anon21 ^ anon35 + anon37) & 0xf00) == 0)
						{
							uint16_t anon38 = anon36 + anon20;
							uint16_t anon39 = (uint16_t)phi12 << 12;
							*(uint16_t*)anon28 = anon38 - ((anon39 ^ anon38) < 4096 ? anon39 : 0);
							*(uint16_t*)anon26 = (anon39 ^ anon38) < 4096 ? 0 : anon38;
						}
					}
				}
				anon41 = phi25 + 1 & 0xffff;
				struct { uint32_t field0; bool field1; } anon40 = llvm.ssub.with.overflow.i32(anon15, anon41);
				uint16_t anon45 = (uint16_t)phi25 + 1;
				uint32_t anon44 = (__zext uint32_t)anon45;
				uint32_t anon43 = anon15 - anon44;
				anon42 = (uint8_t)(anon43 >> 31) == (__zext uint8_t)anon40.field1 & anon43 != 0;
				if (anon42)
				{
					phi_in23 = anon44;
					phi24 = (__zext uint64_t)anon45;
				}
			}
			while (anon42);
			phi17 = anon28;
			phi18 = anon41;
			phi_in19 = (__zext uint64_t)anon41;
		}
		uint64_t anon46 = (uint64_t)&alloca1.field4;
		alloca6 = anon46;
		alloca6 = 0;
		uint32_t anon47 = rand();
		alloca6 = (__zext uint64_t)*(uint16_t*)(anon14 + ((__sext int64_t)anon47 % (__zext uint64_t)phi18 << 32 >> 31));
		uint8_t** anon48 = (uint8_t**)arg3;
		*(uint16_t*)(**anon48 == 0 ? phi17 : anon46) = *(uint16_t*)(anon14 + ((__sext int64_t)anon47 % (__zext uint64_t)phi18 << 32 >> 31));
		uint64_t phi49 = phi_in19;
		while (true)
		{
			uint64_t phi_in115;
			uint64_t phi116;
			uint64_t anon235;
			while (true)
			{
				alloca6 = 0;
				uint32_t anon50 = printf((uint8_t*)0x400e95);
				alloca6 = (__zext uint64_t)anon50;
				uint8_t* anon51 = (uint8_t*)arg3;
				*(uint8_t*)&alloca6 = *anon51;
				uint8_t anon52 = anon51[1];
				((uint8_t*)&alloca6)[1] = anon52;
				uint48_t* anon53 = (uint48_t*)&anon51[2];
				*(uint48_t*)&((uint8_t*)&alloca6)[2] = *anon53;
				if (**anon48 == 0)
				{
					if (**anon48 != 0)
					{
						alloca6 = 0;
						uint32_t anon54 = scanf((uint8_t*)0x400eaa);
						alloca6 = (__zext uint64_t)anon54;
						*(uint8_t*)&alloca6 = *anon51;
						((uint8_t*)&alloca6)[1] = anon52;
						*(uint48_t*)&((uint8_t*)&alloca6)[2] = *anon53;
						if (**anon48 != 0)
						{
							break;
						}
					}
					if (**anon48 == 0 && (**anon48 != 0))
					{
						alloca1.field4 = alloca1.field4 - 4369;
					}
				}
				else 
				{
					alloca6 = 0;
					uint32_t anon55 = printf((uint8_t*)0x400ea4);
					alloca6 = (__zext uint64_t)anon55;
					*(uint8_t*)&alloca6 = *anon51;
					((uint8_t*)&alloca6)[1] = anon52;
					*(uint48_t*)&((uint8_t*)&alloca6)[2] = *anon53;
				}
				if (**anon48 == 0 && **anon48 == 0 || **anon48 != 0 && **anon48 == 0 && **anon48 == 0 || **anon48 != 0 && **anon48 != 0)
				{
					alloca6 = 0;
					uint32_t anon56 = printf((uint8_t*)0x400eae);
					alloca6 = (__zext uint64_t)anon56;
					*(uint8_t*)&alloca6 = *anon51;
					((uint8_t*)&alloca6)[1] = anon52;
					*(uint48_t*)&((uint8_t*)&alloca6)[2] = *anon53;
				}
				if (**anon48 == 0 && (**anon48 == 0 && **anon48 == 0 || **anon48 != 0 && **anon48 == 0 && **anon48 == 0 || **anon48 != 0 && **anon48 != 0))
				{
					uint32_t anon58;
					uint16_t phi59;
					uint32_t phi60;
					uint8_t phi61;
					uint16_t phi62;
					uint8_t phi75;
					uint32_t phi76;
					uint32_t phi77;
					uint16_t phi78;
					uint16_t phi84;
					uint32_t phi90;
					uint8_t phi91;
					uint32_t phi92;
					uint16_t phi93;
					uint16_t phi99;
					uint32_t phi104;
					uint8_t phi105;
					uint32_t phi106;
					uint16_t phi107;
					alloca6 = (__zext uint64_t)alloca1.field4;
					if (((alloca1.field4 ^ *(uint16_t*)phi17) & 0xf) == 0)
					{
						anon58 = (__zext uint32_t)alloca1.field4;
						uint32_t anon57 = anon58 | 0xf;
						alloca6 = (__zext uint64_t)anon57;
						phi59 = (uint16_t)anon57;
						phi60 = anon57;
						phi61 = (uint8_t)anon57;
						phi62 = 1;
					}
					else 
					{
						phi59 = alloca1.field4;
						phi60 = anon58;
						phi61 = (uint8_t)alloca1.field4 & 0xf;
						phi62 = 0;
					}
					uint16_t phi_in63 = phi59;
					uint32_t phi64 = phi60;
					uint16_t phi65 = phi_in63;
					uint16_t phi66 = 0;
					if (((uint8_t)*(uint16_t*)phi17 ^ (uint8_t)phi64) < 16)
					{
						*(uint8_t*)&alloca6 = phi61 | 0xf0;
						phi65 = (uint16_t)*(uint32_t*)&alloca6;
						phi64 = *(uint32_t*)&alloca6;
						phi66 = 1;
					}
					uint32_t phi67 = phi64;
					uint16_t phi68 = 0;
					uint32_t anon69 = (__zext uint32_t)*(uint16_t*)phi17;
					if (((anon69 ^ phi67) & 0xf00) == 0)
					{
						((uint8_t*)&alloca6)[1] = (uint8_t)(alloca1.field4 >> 8) | 0xf;
						phi65 = (uint16_t)*(uint32_t*)&alloca6;
						phi68 = 1;
						phi67 = *(uint32_t*)&alloca6;
					}
					uint16_t phi70 = phi65;
					uint16_t phi71 = 0;
					if ((*(uint16_t*)phi17 ^ (uint16_t)phi67) < 4096)
					{
						uint16_t anon72 = phi70 | 0xf000;
						*(uint16_t*)&alloca6 = anon72;
						phi71 = 1;
						phi70 = anon72;
					}
					uint16_t* anon73 = (uint16_t*)&alloca6;
					*anon73 = phi70 >> 12 | phi70 << 4;
					if (((anon69 ^ *(uint32_t*)&alloca6) & 0xf) == 0)
					{
						uint32_t anon74 = *(uint32_t*)&alloca6 | 0xf;
						alloca6 = (__zext uint64_t)anon74;
						phi75 = (uint8_t)(*(uint32_t*)&alloca6 >> 8);
						phi76 = anon74;
						phi77 = anon74;
						phi78 = 1;
					}
					else 
					{
						phi75 = (uint8_t)(phi70 >> 4);
						phi76 = *(uint32_t*)&alloca6;
						phi77 = *(uint32_t*)&alloca6 & 0xf;
						phi78 = 0;
					}
					uint32_t phi79 = phi76;
					uint16_t phi80 = 0;
					if ((phi76 & 0xf0) == 0)
					{
						*(uint8_t*)&alloca6 = (uint8_t)phi77 | 0xf0;
						phi79 = *(uint32_t*)&alloca6;
						phi80 = 1;
					}
					uint32_t phi81 = phi79;
					uint16_t phi82 = 0;
					if ((phi81 & 0xf00) == 0)
					{
						((uint8_t*)&alloca6)[1] = phi75 | 0xf;
						phi81 = *(uint32_t*)&alloca6;
						phi82 = 1;
					}
					uint16_t phi83 = 0;
					uint16_t anon85 = (uint16_t)phi81;
					phi84 = anon85;
					if ((uint16_t)phi81 < 4096)
					{
						uint16_t anon86 = anon85 | 0xf000;
						*anon73 = anon86;
						phi83 = 1;
						phi84 = anon86;
					}
					*anon73 = phi84 >> 12 | phi84 << 4;
					uint32_t anon87 = (__zext uint32_t)(*(uint16_t*)phi17 & 0xf);
					uint32_t anon88 = *(uint32_t*)&alloca6 & 0xf;
					if (anon87 == anon88)
					{
						uint32_t anon89 = *(uint32_t*)&alloca6 | 0xf;
						alloca6 = (__zext uint64_t)anon89;
						phi90 = anon89;
						phi91 = (uint8_t)(*(uint32_t*)&alloca6 >> 8);
						phi92 = anon89;
						phi93 = 1;
					}
					else 
					{
						phi90 = *(uint32_t*)&alloca6;
						phi91 = (uint8_t)(phi84 >> 4);
						phi92 = anon88;
						phi93 = 0;
					}
					uint32_t phi94 = phi90;
					uint16_t phi95 = 0;
					if ((phi94 & 0xf0) == 0)
					{
						*(uint8_t*)&alloca6 = (uint8_t)phi92 | 0xf0;
						phi94 = *(uint32_t*)&alloca6;
						phi95 = 1;
					}
					uint32_t phi96 = phi94;
					uint16_t phi97 = 0;
					if ((phi94 & 0xf00) == 0)
					{
						((uint8_t*)&alloca6)[1] = phi91 | 0xf;
						phi96 = *(uint32_t*)&alloca6;
						phi97 = 1;
					}
					uint16_t phi98 = 0;
					uint16_t anon100 = (uint16_t)phi96;
					phi99 = anon100;
					if ((uint16_t)phi96 < 4096)
					{
						uint16_t anon101 = anon100 | 0xf000;
						*anon73 = anon101;
						phi98 = 1;
						phi99 = anon101;
					}
					*anon73 = phi99 >> 12 | phi99 << 4;
					uint32_t anon102 = *(uint32_t*)&alloca6 & 0xf;
					if (anon87 == anon102)
					{
						uint32_t anon103 = *(uint32_t*)&alloca6 | 0xf;
						alloca6 = (__zext uint64_t)anon103;
						phi104 = anon103;
						phi105 = (uint8_t)(*(uint32_t*)&alloca6 >> 8);
						phi106 = anon103;
						phi107 = 1;
					}
					else 
					{
						phi104 = *(uint32_t*)&alloca6;
						phi105 = (uint8_t)(phi99 >> 4);
						phi106 = anon102;
						phi107 = 0;
					}
					uint32_t phi108 = phi104;
					uint16_t phi109 = 0;
					if ((phi108 & 0xf0) == 0)
					{
						*(uint8_t*)&alloca6 = (uint8_t)phi106 | 0xf0;
						phi108 = *(uint32_t*)&alloca6;
						phi109 = 1;
					}
					uint16_t phi110 = 0;
					uint32_t phi111 = phi108;
					if ((phi108 & 0xf00) == 0)
					{
						((uint8_t*)&alloca6)[1] = phi105 | 0xf;
						phi110 = 1;
						phi111 = *(uint32_t*)&alloca6;
					}
					alloca1.field5 = (__zext uint16_t)((uint16_t)phi111 < 4096) + phi110 + phi80 + (phi71 + phi62 + phi66 + phi68 << 4 | phi78) + phi82 + phi83 + phi93 + phi95 + phi97 + phi98 + phi107 + phi109;
					alloca6 = 0;
					uint32_t anon112 = printf((uint8_t*)0x400eb3);
					alloca6 = (__zext uint64_t)anon112;
					break;
				}
			}
			alloca1.field1 = 0;
			uint32_t anon113 = (uint32_t)phi49;
			if (anon113 != 0)
			{
				uint16_t phi234;
				uint64_t anon114 = (__zext uint64_t)alloca1.field4;
				alloca6 = anon114;
				phi_in115 = anon14;
				phi116 = 0;
				while (true)
				{
					uint64_t phi120;
					uint16_t phi122;
					uint16_t phi_in123;
					uint16_t phi124;
					uint8_t phi125;
					uint64_t phi150;
					uint64_t phi152;
					uint16_t phi153;
					uint16_t phi_in154;
					uint64_t phi156;
					uint8_t phi157;
					uint16_t phi158;
					uint16_t phi168;
					uint64_t phi183;
					uint16_t phi_in185;
					uint16_t phi_in186;
					uint64_t phi188;
					uint64_t phi189;
					uint8_t phi190;
					uint16_t phi191;
					uint16_t phi201;
					uint64_t phi217;
					uint32_t phi219;
					uint64_t phi221;
					uint16_t phi222;
					uint64_t phi224;
					uint8_t phi225;
					uint16_t phi226;
					uint64_t phi227;
					uint32_t phi229;
					uint32_t phi230;
					uint16_t phi231;
					uint64_t anon236;
					uint64_t phi117 = phi_in115;
					uint16_t anon119 = alloca1.field4 ^ *(uint16_t*)phi117;
					uint32_t anon118 = (__zext uint32_t)anon119 >> 8;
					if ((anon118 & 0xf) == 0)
					{
						uint16_t anon121 = alloca1.field4 | 0xf;
						phi120 = (__zext uint64_t)anon121;
						phi122 = anon121;
						phi_in123 = 1;
						phi124 = 2;
						phi125 = (uint8_t)(anon119 >> 8);
					}
					else 
					{
						phi120 = anon114;
						phi122 = alloca1.field4;
						phi_in123 = 0;
						phi124 = 1;
						phi125 = (uint8_t)anon118 & 0xf;
					}
					uint64_t phi126 = phi120;
					uint16_t phi127 = phi122;
					uint16_t phi128 = phi122 ^ *(uint16_t*)phi117;
					uint16_t phi129 = phi_in123;
					if (phi125 < 16)
					{
						uint64_t anon130 = phi120 & 0xff00 | (__zext uint64_t)(phi122 & 0xf | 0xf0);
						phi126 = anon130;
						uint16_t anon131 = (uint16_t)anon130;
						phi127 = anon131;
						phi128 = *(uint16_t*)phi117 ^ anon131;
						phi129 = phi124;
					}
					uint16_t phi_in132 = phi127;
					uint64_t phi133 = phi126;
					uint16_t phi134 = phi_in132;
					uint16_t phi135 = phi128;
					uint16_t phi136 = 0;
					if ((phi128 & 0xf00) == 0)
					{
						uint64_t anon137 = phi126 & 0xffffffffffff00ff | (__zext uint64_t)(phi122 & 0xf000 | 0xf00);
						phi133 = anon137;
						uint16_t anon138 = (uint16_t)anon137;
						phi134 = anon138;
						phi135 = *(uint16_t*)phi117 ^ anon138;
						phi136 = 256;
					}
					uint64_t phi139 = phi133;
					uint16_t phi140 = phi134;
					uint16_t phi141 = 0;
					if (phi135 < 4096)
					{
						uint16_t anon142 = phi140 | 0xf000;
						phi139 = phi139 & 0xffffffffffff0000 | (__zext uint64_t)anon142;
						phi141 = 256;
						phi140 = anon142;
					}
					uint32_t anon144 = (__zext uint32_t)*(uint16_t*)phi117;
					uint16_t anon149 = phi140 << 4;
					uint16_t anon148 = phi140 >> 12 | anon149;
					uint64_t anon147 = (__zext uint64_t)anon148;
					uint64_t anon146 = phi139 & 0xffffffffffff0000 | anon147;
					uint32_t anon145 = (uint32_t)anon146;
					uint32_t anon143 = (anon144 ^ anon145) >> 8;
					if ((anon143 & 0xf) == 0)
					{
						uint32_t anon151 = anon145 | 0xf;
						phi150 = (__zext uint64_t)anon151;
						phi152 = anon146 >> 8 & 0xffffff;
						phi153 = (uint16_t)anon151;
						uint16_t anon155 = anon149 | 0xf;
						phi_in154 = anon155;
						phi156 = (__zext uint64_t)anon155;
						phi157 = (uint8_t)anon143;
						phi158 = 256;
					}
					else 
					{
						phi150 = anon146;
						phi152 = (__zext uint64_t)(phi140 >> 4);
						phi153 = anon148;
						phi_in154 = anon148;
						phi156 = anon147;
						phi157 = (uint8_t)anon143 & 0xf;
						phi158 = 0;
					}
					uint16_t phi159 = phi153;
					uint64_t phi160 = phi150;
					uint16_t phi161 = phi_in154;
					uint16_t phi162 = 0;
					if (phi157 < 16)
					{
						uint64_t anon163 = phi150 & 0xffffffffffffff00 | phi156 & 0xf | 0xf0;
						phi160 = anon163;
						uint16_t anon164 = (uint16_t)anon163;
						phi159 = anon164;
						phi161 = anon164;
						phi162 = 256;
					}
					uint16_t phi_in165 = phi159;
					uint64_t phi166 = phi160;
					uint16_t phi167 = phi_in165;
					uint16_t anon169 = *(uint16_t*)phi117 ^ phi161;
					phi168 = anon169;
					uint16_t phi170 = 0;
					if ((anon169 & 0xf00) == 0)
					{
						uint64_t anon171 = phi160 & 0xffffffffffff00ff | phi152 << 8 & 0xf000 | 0xf00;
						phi166 = anon171;
						uint16_t anon172 = (uint16_t)anon171;
						phi167 = anon172;
						phi168 = *(uint16_t*)phi117 ^ anon172;
						phi170 = 256;
					}
					uint64_t phi173 = phi166;
					uint16_t phi174 = 0;
					uint16_t phi175 = phi167;
					if (phi168 < 4096)
					{
						uint16_t anon176 = phi167 | 0xf000;
						phi173 = phi166 & 0xffffffffffff0000 | (__zext uint64_t)anon176;
						phi174 = 256;
						phi175 = anon176;
					}
					uint16_t anon182 = phi175 << 4;
					uint16_t anon181 = phi175 >> 12 | anon182;
					uint64_t anon180 = (__zext uint64_t)anon181;
					uint64_t anon179 = phi173 & 0xffffffffffff0000 | anon180;
					uint32_t anon178 = (uint32_t)anon179;
					uint32_t anon177 = (anon144 ^ anon178) >> 8;
					if ((anon177 & 0xf) == 0)
					{
						uint32_t anon184 = anon178 | 0xf;
						phi183 = (__zext uint64_t)anon184;
						phi_in185 = (uint16_t)anon184;
						uint16_t anon187 = anon182 | 0xf;
						phi_in186 = anon187;
						phi188 = anon179 >> 8 & 0xffffff;
						phi189 = (__zext uint64_t)anon187;
						phi190 = (uint8_t)anon177;
						phi191 = 256;
					}
					else 
					{
						phi183 = anon179;
						phi_in185 = anon181;
						phi_in186 = anon181;
						phi188 = (__zext uint64_t)(phi175 >> 4);
						phi189 = anon180;
						phi190 = (uint8_t)anon177 & 0xf;
						phi191 = 0;
					}
					uint64_t phi192 = phi183;
					uint16_t phi193 = phi_in185;
					uint16_t phi194 = phi_in186;
					uint16_t phi195 = 0;
					if (phi190 < 16)
					{
						uint64_t anon196 = phi183 & 0xffffffffffffff00 | phi189 & 0xf | 0xf0;
						phi192 = anon196;
						uint16_t anon197 = (uint16_t)anon196;
						phi193 = anon197;
						phi194 = anon197;
						phi195 = 256;
					}
					uint16_t phi_in198 = phi193;
					uint64_t phi199 = phi192;
					uint16_t phi200 = phi_in198;
					uint16_t anon202 = *(uint16_t*)phi117 ^ phi194;
					phi201 = anon202;
					uint16_t phi203 = 0;
					if ((anon202 & 0xf00) == 0)
					{
						uint64_t anon204 = phi192 & 0xffffffffffff00ff | phi188 << 8 & 0xf000 | 0xf00;
						phi199 = anon204;
						uint16_t anon205 = (uint16_t)anon204;
						phi200 = anon205;
						phi201 = *(uint16_t*)phi117 ^ anon205;
						phi203 = 256;
					}
					uint64_t phi206 = phi199;
					uint16_t phi207 = 0;
					uint16_t phi208 = phi200;
					if (phi201 < 4096)
					{
						uint16_t anon209 = phi200 | 0xf000;
						phi206 = phi199 & 0xffffffffffff0000 | (__zext uint64_t)anon209;
						phi207 = 256;
						phi208 = anon209;
					}
					uint16_t anon216 = phi208 << 4;
					uint16_t anon215 = phi208 >> 12 | anon216;
					uint64_t anon214 = (__zext uint64_t)anon215;
					uint64_t anon213 = phi206 & 0xffffffffffff0000 | anon214;
					uint32_t anon212 = (uint32_t)anon213;
					uint32_t anon211 = anon144 ^ anon212;
					uint32_t anon210 = anon211 >> 8;
					if ((anon210 & 0xf) == 0)
					{
						uint32_t anon218 = anon212 | 0xf;
						phi217 = (__zext uint64_t)anon218;
						uint32_t anon220 = anon144 ^ anon218;
						phi219 = anon220;
						phi221 = anon213 >> 8 & 0xffffff;
						uint16_t anon223 = anon216 | 0xf;
						phi222 = anon223;
						phi224 = (__zext uint64_t)anon223;
						phi225 = (uint8_t)(anon220 >> 8);
						phi226 = 256;
					}
					else 
					{
						phi217 = anon213;
						phi219 = anon211;
						phi221 = (__zext uint64_t)(phi208 >> 4);
						phi222 = anon215;
						phi224 = anon214;
						phi225 = (uint8_t)anon210 & 0xf;
						phi226 = 0;
					}
					if (phi225 < 16)
					{
						uint64_t anon228 = phi217 & 0xffffffffffffff00 | phi224 & 0xf | 0xf0;
						phi227 = anon228;
						phi229 = (__zext uint32_t)(*(uint16_t*)phi117 ^ (uint16_t)anon228);
						phi230 = anon144 ^ (uint32_t)anon228;
						phi231 = 256;
					}
					else 
					{
						phi227 = phi217;
						phi229 = phi219;
						phi230 = (__zext uint32_t)(*(uint16_t*)phi117 ^ phi222);
						phi231 = 0;
					}
					uint32_t phi232 = phi229;
					uint16_t phi233 = 0;
					if ((phi230 & 0xf00) == 0)
					{
						phi232 = anon144 ^ (uint32_t)(phi227 & 0xffff00ff | phi221 << 8 & 0xf000 | 0xf00);
						phi233 = 256;
					}
					if ((__zext uint16_t)((uint16_t)phi232 < 4096) + phi203 + phi195 + phi174 + phi170 + (phi141 + phi136 + phi129 << 4) + phi158 + phi162 + phi191 + phi207 + phi226 + phi231 + phi233 == *(uint16_t*)(arg1 - 66))
					{
						*(uint16_t*)(anon14 + (phi116 << 1 & 0x1fffe)) = *(uint16_t*)phi117;
						phi234 = (uint16_t)phi116 + 1;
						anon235 = phi117 + 2;
						uint64_t anon237 = phi49 + 4294967295 & 0xffffffff;
						anon236 = anon237 + anon237 + 2 + anon14;
						if (anon235 != anon236)
						{
							break;
						}
					}
					else 
					{
						phi_in115 = anon235;
						phi116 = phi116;
						if (anon235 == anon236)
						{
							phi234 = (uint16_t)phi116;
						}
					}
				}
				alloca1.field1 = anon113;
				uint16_t* anon238 = (uint16_t*)phi17;
				*anon238 = *anon238;
				if (!(phi234 == 0 | *(uint16_t*)(arg1 - 66) == 64))
				{
					alloca6 = 0;
					uint32_t anon239 = rand();
					uint64_t anon240 = (__zext uint64_t)phi234;
					alloca6 = (__zext uint64_t)*(uint16_t*)(anon14 + ((__sext int64_t)anon239 % anon240 << 32 >> 31));
					alloca1.field4 = *(uint16_t*)(anon14 + ((__sext int64_t)anon239 % anon240 << 32 >> 31));
					phi49 = anon240;
				}
			}
			phi_in115 = anon235;
			phi116 = phi116 + 1 & 0xffffffff;
			break;
		}
	}
	putchar(10);
	return;
	if (anon13 == null)
	{
		uint32_t anon241 = puts((uint8_t*)0x400e87);
		alloca6 = (__zext uint64_t)anon241;
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
