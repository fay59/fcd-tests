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
	if (anon13 == null)
	{
		uint32_t anon15 = puts((uint8_t*)0x400e87);
		alloca6 = (__zext uint64_t)anon15;
		exit(1);
	}
	else 
	{
		uint64_t phi18;
		uint32_t phi19;
		uint64_t phi20;
		uint32_t anon17 = phi12 * phi12;
		uint32_t anon16 = anon17 * anon17;
		if (anon16 < 2)
		{
			phi18 = (uint64_t)&alloca1.field3;
			phi19 = 1;
			phi20 = 1;
		}
		else 
		{
			uint64_t anon29;
			uint32_t anon42;
			bool anon43;
			uint64_t anon23 = (__zext uint64_t)phi12;
			uint64_t anon22 = anon23 << 8;
			uint16_t anon21 = (uint16_t)(4096 - anon22);
			alloca1.field0 = anon21;
			uint32_t phi_in24 = 1;
			uint64_t phi25 = 1;
			do
			{
				uint32_t phi26 = phi_in24;
				uint64_t anon28 = phi25 << 1;
				uint64_t anon27 = anon28 + anon14;
				alloca6 = anon27;
				anon29 = arg1 - 70;
				uint32_t anon31 = (__zext uint32_t)*(uint16_t*)(anon14 + anon28 - 2) + 1;
				uint16_t anon30 = (uint16_t)anon31;
				*(uint16_t*)anon29 = anon30;
				*(uint16_t*)anon27 = anon30;
				if (((phi12 ^ anon31) & 0xf) == 0)
				{
					uint32_t anon34 = 16 - phi12;
					uint32_t anon33 = anon31 + (anon34 & 0xffff);
					uint16_t anon32 = (uint16_t)anon33;
					*(uint16_t*)anon29 = anon32;
					*(uint16_t*)anon27 = anon32;
					uint64_t anon35 = anon23 << 4;
					uint32_t anon36 = anon31 + anon34;
					if ((((uint32_t)anon35 ^ anon36) & 0xf0) == 0)
					{
						uint32_t anon38 = (uint32_t)(256 - anon35);
						uint16_t anon37 = (uint16_t)(anon33 + anon38);
						*(uint16_t*)anon29 = anon37;
						*(uint16_t*)anon27 = anon37;
						if ((((uint32_t)anon22 ^ anon36 + anon38) & 0xf00) == 0)
						{
							uint16_t anon39 = anon37 + anon21;
							uint16_t anon40 = (uint16_t)phi12 << 12;
							*(uint16_t*)anon29 = anon39 - ((anon40 ^ anon39) < 4096 ? anon40 : 0);
							*(uint16_t*)anon27 = (anon40 ^ anon39) < 4096 ? 0 : anon39;
						}
					}
				}
				anon42 = phi26 + 1 & 0xffff;
				struct { uint32_t field0; bool field1; } anon41 = llvm.ssub.with.overflow.i32(anon16, anon42);
				uint16_t anon46 = (uint16_t)phi26 + 1;
				uint32_t anon45 = (__zext uint32_t)anon46;
				uint32_t anon44 = anon16 - anon45;
				anon43 = (uint8_t)(anon44 >> 31) == (__zext uint8_t)anon41.field1 & anon44 != 0;
				if (anon43)
				{
					phi_in24 = anon45;
					phi25 = (__zext uint64_t)anon46;
				}
			}
			while (anon43);
			phi18 = anon29;
			phi19 = anon42;
			phi20 = (__zext uint64_t)anon42;
		}
		uint64_t phi47 = phi20;
		uint64_t anon48 = (uint64_t)&alloca1.field4;
		alloca6 = anon48;
		alloca6 = 0;
		uint32_t anon49 = rand();
		alloca6 = (__zext uint64_t)*(uint16_t*)(anon14 + ((__sext int64_t)anon49 % (__zext uint64_t)phi19 << 32 >> 31));
		uint8_t** anon50 = (uint8_t**)arg3;
		*(uint16_t*)(**anon50 == 0 ? phi18 : anon48) = *(uint16_t*)(anon14 + ((__sext int64_t)anon49 % (__zext uint64_t)phi19 << 32 >> 31));
		while (true)
		{
			uint32_t anon59;
			uint16_t phi_in60;
			uint32_t phi61;
			uint8_t phi62;
			uint16_t phi63;
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
			uint64_t phi_in115;
			uint64_t phi116;
			uint64_t anon233;
			do
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
			}
			while (!(**anon50 == 0 && (**anon50 == 0 && **anon50 == 0 || **anon50 != 0 && **anon50 == 0 && **anon50 == 0 || **anon50 != 0 && **anon50 != 0)));
			alloca6 = (__zext uint64_t)alloca1.field4;
			if (((alloca1.field4 ^ *(uint16_t*)phi18) & 0xf) == 0)
			{
				anon59 = (__zext uint32_t)alloca1.field4;
				uint32_t anon58 = anon59 | 0xf;
				alloca6 = (__zext uint64_t)anon58;
				phi_in60 = (uint16_t)anon58;
				phi61 = anon58;
				phi62 = (uint8_t)anon58;
				phi63 = 1;
			}
			else 
			{
				phi_in60 = alloca1.field4;
				phi61 = anon59;
				phi62 = (uint8_t)alloca1.field4 & 0xf;
				phi63 = 0;
			}
			uint32_t phi64 = phi61;
			uint16_t phi65 = phi_in60;
			uint16_t phi66 = 0;
			if (((uint8_t)*(uint16_t*)phi18 ^ (uint8_t)phi64) < 16)
			{
				*(uint8_t*)&alloca6 = phi62 | 0xf0;
				phi65 = (uint16_t)*(uint32_t*)&alloca6;
				phi64 = *(uint32_t*)&alloca6;
				phi66 = 1;
			}
			uint32_t phi67 = phi64;
			uint16_t phi68 = 0;
			uint32_t anon69 = (__zext uint32_t)*(uint16_t*)phi18;
			if (((anon69 ^ phi67) & 0xf00) == 0)
			{
				((uint8_t*)&alloca6)[1] = (uint8_t)(alloca1.field4 >> 8) | 0xf;
				phi65 = (uint16_t)*(uint32_t*)&alloca6;
				phi68 = 1;
				phi67 = *(uint32_t*)&alloca6;
			}
			uint16_t phi70 = phi65;
			uint16_t phi71 = 0;
			if ((*(uint16_t*)phi18 ^ (uint16_t)phi67) < 4096)
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
			if ((phi79 & 0xf0) == 0)
			{
				*(uint8_t*)&alloca6 = (uint8_t)phi77 | 0xf0;
				phi79 = *(uint32_t*)&alloca6;
				phi80 = 1;
			}
			uint32_t phi81 = phi79;
			uint16_t phi82 = 0;
			if ((phi79 & 0xf00) == 0)
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
			uint32_t anon87 = (__zext uint32_t)(*(uint16_t*)phi18 & 0xf);
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
			alloca1.field5 = (__zext uint16_t)((uint16_t)phi111 < 4096) + phi110 + phi80 + (phi71 + phi63 + phi66 + phi68 << 4 | phi78) + phi82 + phi83 + phi93 + phi95 + phi97 + phi98 + phi107 + phi109;
			alloca6 = 0;
			uint32_t anon112 = printf((uint8_t*)0x400eb3);
			alloca6 = (__zext uint64_t)anon112;
			alloca1.field1 = 0;
			uint32_t anon113 = (uint32_t)phi47;
			if (anon113 != 0)
			{
				uint16_t phi232;
				uint64_t anon114 = (__zext uint64_t)alloca1.field4;
				alloca6 = anon114;
				phi_in115 = anon14;
				phi116 = 0;
				while (true)
				{
					uint64_t phi120;
					uint16_t phi122;
					uint16_t phi123;
					uint16_t phi124;
					uint8_t phi125;
					uint64_t phi149;
					uint64_t phi151;
					uint16_t phi152;
					uint16_t phi153;
					uint64_t phi155;
					uint8_t phi156;
					uint16_t phi157;
					uint16_t phi167;
					uint64_t phi182;
					uint16_t phi184;
					uint16_t phi185;
					uint64_t phi187;
					uint64_t phi188;
					uint8_t phi189;
					uint16_t phi190;
					uint16_t phi198;
					uint64_t phi214;
					uint32_t phi216;
					uint64_t phi218;
					uint16_t phi219;
					uint64_t phi221;
					uint8_t phi222;
					uint16_t phi223;
					uint64_t phi224;
					uint32_t phi226;
					uint32_t phi227;
					uint16_t phi228;
					uint64_t anon234;
					uint64_t phi117 = phi_in115;
					uint16_t anon119 = alloca1.field4 ^ *(uint16_t*)phi117;
					uint32_t anon118 = (__zext uint32_t)anon119 >> 8;
					if ((anon118 & 0xf) == 0)
					{
						uint16_t anon121 = alloca1.field4 | 0xf;
						phi120 = (__zext uint64_t)anon121;
						phi122 = anon121;
						phi123 = 1;
						phi124 = 2;
						phi125 = (uint8_t)(anon119 >> 8);
					}
					else 
					{
						phi120 = anon114;
						phi122 = alloca1.field4;
						phi123 = 0;
						phi124 = 1;
						phi125 = (uint8_t)anon118 & 0xf;
					}
					uint16_t phi126 = phi123;
					uint64_t phi127 = phi120;
					uint16_t phi128 = phi122;
					uint16_t phi129 = phi122 ^ *(uint16_t*)phi117;
					if (phi125 < 16)
					{
						uint64_t anon130 = phi120 & 0xff00 | (__zext uint64_t)(phi122 & 0xf | 0xf0);
						phi127 = anon130;
						uint16_t anon131 = (uint16_t)anon130;
						phi128 = anon131;
						phi129 = *(uint16_t*)phi117 ^ anon131;
						phi126 = phi124;
					}
					uint16_t phi132 = phi128;
					uint64_t phi133 = phi127;
					uint16_t phi134 = phi129;
					uint16_t phi135 = 0;
					if ((phi129 & 0xf00) == 0)
					{
						uint64_t anon136 = phi127 & 0xffffffffffff00ff | (__zext uint64_t)(phi122 & 0xf000 | 0xf00);
						phi133 = anon136;
						uint16_t anon137 = (uint16_t)anon136;
						phi132 = anon137;
						phi134 = *(uint16_t*)phi117 ^ anon137;
						phi135 = 256;
					}
					uint16_t phi138 = phi132;
					uint64_t phi139 = phi133;
					uint16_t phi140 = 0;
					if (phi134 < 4096)
					{
						uint16_t anon141 = phi138 | 0xf000;
						phi139 = phi133 & 0xffffffffffff0000 | (__zext uint64_t)anon141;
						phi140 = 256;
						phi138 = anon141;
					}
					uint32_t anon143 = (__zext uint32_t)*(uint16_t*)phi117;
					uint16_t anon148 = phi138 << 4;
					uint16_t anon147 = phi138 >> 12 | anon148;
					uint64_t anon146 = (__zext uint64_t)anon147;
					uint64_t anon145 = phi139 & 0xffffffffffff0000 | anon146;
					uint32_t anon144 = (uint32_t)anon145;
					uint32_t anon142 = (anon143 ^ anon144) >> 8;
					if ((anon142 & 0xf) == 0)
					{
						uint32_t anon150 = anon144 | 0xf;
						phi149 = (__zext uint64_t)anon150;
						phi151 = anon145 >> 8 & 0xffffff;
						phi152 = (uint16_t)anon150;
						uint16_t anon154 = anon148 | 0xf;
						phi153 = anon154;
						phi155 = (__zext uint64_t)anon154;
						phi156 = (uint8_t)anon142;
						phi157 = 256;
					}
					else 
					{
						phi149 = anon145;
						phi151 = (__zext uint64_t)(phi138 >> 4);
						phi152 = anon147;
						phi153 = anon147;
						phi155 = anon146;
						phi156 = (uint8_t)anon142 & 0xf;
						phi157 = 0;
					}
					uint16_t phi_in158 = phi153;
					uint64_t phi159 = phi149;
					uint16_t phi160 = phi_in158;
					uint16_t phi161 = 0;
					if (phi156 < 16)
					{
						uint64_t anon162 = phi149 & 0xffffffffffffff00 | phi155 & 0xf | 0xf0;
						phi159 = anon162;
						uint16_t anon163 = (uint16_t)anon162;
						phi152 = anon163;
						phi160 = anon163;
						phi161 = 256;
					}
					uint16_t phi_in164 = phi152;
					uint64_t phi165 = phi159;
					uint16_t phi166 = phi_in164;
					uint16_t anon168 = *(uint16_t*)phi117 ^ phi160;
					phi167 = anon168;
					uint16_t phi169 = 0;
					if ((anon168 & 0xf00) == 0)
					{
						uint64_t anon170 = phi159 & 0xffffffffffff00ff | phi151 << 8 & 0xf000 | 0xf00;
						phi165 = anon170;
						uint16_t anon171 = (uint16_t)anon170;
						phi166 = anon171;
						phi167 = *(uint16_t*)phi117 ^ anon171;
						phi169 = 256;
					}
					uint64_t phi172 = phi165;
					uint16_t phi173 = 0;
					uint16_t phi174 = phi166;
					if (phi167 < 4096)
					{
						uint16_t anon175 = phi166 | 0xf000;
						phi172 = phi165 & 0xffffffffffff0000 | (__zext uint64_t)anon175;
						phi173 = 256;
						phi174 = anon175;
					}
					uint16_t anon181 = phi174 << 4;
					uint16_t anon180 = phi174 >> 12 | anon181;
					uint64_t anon179 = (__zext uint64_t)anon180;
					uint64_t anon178 = phi172 & 0xffffffffffff0000 | anon179;
					uint32_t anon177 = (uint32_t)anon178;
					uint32_t anon176 = (anon143 ^ anon177) >> 8;
					if ((anon176 & 0xf) == 0)
					{
						uint32_t anon183 = anon177 | 0xf;
						phi182 = (__zext uint64_t)anon183;
						phi184 = (uint16_t)anon183;
						uint16_t anon186 = anon181 | 0xf;
						phi185 = anon186;
						phi187 = anon178 >> 8 & 0xffffff;
						phi188 = (__zext uint64_t)anon186;
						phi189 = (uint8_t)anon176;
						phi190 = 256;
					}
					else 
					{
						phi182 = anon178;
						phi184 = anon180;
						phi185 = anon180;
						phi187 = (__zext uint64_t)(phi174 >> 4);
						phi188 = anon179;
						phi189 = (uint8_t)anon176 & 0xf;
						phi190 = 0;
					}
					uint16_t phi191 = phi184;
					uint64_t phi192 = phi182;
					uint16_t phi193 = 0;
					if (phi189 < 16)
					{
						uint64_t anon194 = phi182 & 0xffffffffffffff00 | phi188 & 0xf | 0xf0;
						phi192 = anon194;
						uint16_t anon195 = (uint16_t)anon194;
						phi191 = anon195;
						phi185 = anon195;
						phi193 = 256;
					}
					uint16_t phi196 = phi191;
					uint64_t phi197 = phi192;
					uint16_t anon199 = *(uint16_t*)phi117 ^ phi185;
					phi198 = anon199;
					uint16_t phi200 = 0;
					if ((anon199 & 0xf00) == 0)
					{
						uint64_t anon201 = phi192 & 0xffffffffffff00ff | phi187 << 8 & 0xf000 | 0xf00;
						phi197 = anon201;
						uint16_t anon202 = (uint16_t)anon201;
						phi196 = anon202;
						phi198 = *(uint16_t*)phi117 ^ anon202;
						phi200 = 256;
					}
					uint64_t phi203 = phi197;
					uint16_t phi204 = phi196;
					uint16_t phi205 = 0;
					if (phi198 < 4096)
					{
						uint16_t anon206 = phi204 | 0xf000;
						phi203 = phi203 & 0xffffffffffff0000 | (__zext uint64_t)anon206;
						phi205 = 256;
						phi204 = anon206;
					}
					uint16_t anon213 = phi204 << 4;
					uint16_t anon212 = phi204 >> 12 | anon213;
					uint64_t anon211 = (__zext uint64_t)anon212;
					uint64_t anon210 = phi203 & 0xffffffffffff0000 | anon211;
					uint32_t anon209 = (uint32_t)anon210;
					uint32_t anon208 = anon143 ^ anon209;
					uint32_t anon207 = anon208 >> 8;
					if ((anon207 & 0xf) == 0)
					{
						uint32_t anon215 = anon209 | 0xf;
						phi214 = (__zext uint64_t)anon215;
						uint32_t anon217 = anon143 ^ anon215;
						phi216 = anon217;
						phi218 = anon210 >> 8 & 0xffffff;
						uint16_t anon220 = anon213 | 0xf;
						phi219 = anon220;
						phi221 = (__zext uint64_t)anon220;
						phi222 = (uint8_t)(anon217 >> 8);
						phi223 = 256;
					}
					else 
					{
						phi214 = anon210;
						phi216 = anon208;
						phi218 = (__zext uint64_t)(phi204 >> 4);
						phi219 = anon212;
						phi221 = anon211;
						phi222 = (uint8_t)anon207 & 0xf;
						phi223 = 0;
					}
					if (phi222 < 16)
					{
						uint64_t anon225 = phi214 & 0xffffffffffffff00 | phi221 & 0xf | 0xf0;
						phi224 = anon225;
						phi226 = (__zext uint32_t)(*(uint16_t*)phi117 ^ (uint16_t)anon225);
						phi227 = anon143 ^ (uint32_t)anon225;
						phi228 = 256;
					}
					else 
					{
						phi224 = phi214;
						phi226 = phi216;
						phi227 = (__zext uint32_t)(*(uint16_t*)phi117 ^ phi219);
						phi228 = 0;
					}
					uint32_t phi_in229 = phi226;
					uint32_t phi230 = phi_in229;
					uint16_t phi231 = 0;
					if ((phi227 & 0xf00) == 0)
					{
						phi230 = anon143 ^ (uint32_t)(phi224 & 0xffff00ff | phi218 << 8 & 0xf000 | 0xf00);
						phi231 = 256;
					}
					if ((__zext uint16_t)((uint16_t)phi230 < 4096) + phi200 + phi193 + phi173 + phi169 + (phi140 + phi135 + phi126 << 4) + phi157 + phi161 + phi190 + phi205 + phi223 + phi228 + phi231 == *(uint16_t*)(arg1 - 66))
					{
						*(uint16_t*)(anon14 + (phi116 << 1 & 0x1fffe)) = *(uint16_t*)phi117;
						phi232 = (uint16_t)phi116 + 1;
						anon233 = phi117 + 2;
						uint64_t anon235 = phi47 + 4294967295 & 0xffffffff;
						anon234 = anon235 + anon235 + 2 + anon14;
						if (anon233 != anon234)
						{
							break;
						}
					}
					else 
					{
						phi_in115 = anon233;
						phi116 = phi116;
						if (anon233 == anon234)
						{
							phi232 = (uint16_t)phi116;
						}
					}
				}
				alloca1.field1 = anon113;
				uint16_t* anon236 = (uint16_t*)phi18;
				*anon236 = *anon236;
				if (!(phi232 == 0 | *(uint16_t*)(arg1 - 66) == 64))
				{
					alloca6 = 0;
					uint32_t anon237 = rand();
					uint64_t anon238 = (__zext uint64_t)phi232;
					alloca6 = (__zext uint64_t)*(uint16_t*)(anon14 + ((__sext int64_t)anon237 % anon238 << 32 >> 31));
					alloca1.field4 = *(uint16_t*)(anon14 + ((__sext int64_t)anon237 % anon238 << 32 >> 31));
					phi47 = anon238;
				}
			}
			phi_in115 = anon233;
			phi116 = phi116 + 1 & 0xffffffff;
			break;
		}
	}
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
