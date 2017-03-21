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
	uint16_t phi27;
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
		uint64_t phi_in18;
		uint32_t anon15 = phi11 * phi11;
		uint32_t anon14 = anon15 * anon15;
		if (anon14 < 2)
		{
			phi16 = (uint64_t)&alloca1.field3;
			phi17 = 1;
			phi_in18 = 1;
		}
		else 
		{
			uint64_t anon40;
			bool anon41;
			uint32_t anon46;
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
				uint32_t anon29 = (__zext uint32_t)*(uint16_t*)(anon12 + anon26 - 2) + 1;
				uint16_t anon28 = (uint16_t)anon29;
				phi27 = anon28;
				uint16_t phi30 = anon28;
				if (((phi11 ^ anon29) & 0xf) == 0)
				{
					uint32_t anon33 = 16 - phi11;
					uint32_t anon32 = anon29 + (anon33 & 0xffff);
					uint16_t anon31 = (uint16_t)anon32;
					phi27 = anon31;
					phi30 = anon31;
					uint64_t anon34 = anon21 << 4;
					uint32_t anon35 = anon29 + anon33;
					if ((((uint32_t)anon34 ^ anon35) & 0xf0) == 0)
					{
						uint32_t anon37 = (uint32_t)(256 - anon34);
						uint16_t anon36 = (uint16_t)(anon32 + anon37);
						phi27 = anon36;
						phi30 = anon36;
						if ((((uint32_t)anon20 ^ anon35 + anon37) & 0xf00) == 0)
						{
							uint16_t anon38 = anon36 + anon19;
							uint16_t anon39 = (uint16_t)phi11 << 12;
							phi27 = anon38 - ((anon39 ^ anon38) < 4096 ? anon39 : 0);
							phi30 = (anon39 ^ anon38) < 4096 ? 0 : anon38;
						}
					}
				}
				anon40 = arg1 - 70;
				*(uint16_t*)anon40 = phi27;
				*(uint16_t*)anon25 = phi30;
				uint16_t anon44 = (uint16_t)phi24 + 1;
				uint32_t anon43 = (__zext uint32_t)anon44;
				uint32_t anon42 = anon14 - anon43;
				anon46 = phi24 + 1 & 0xffff;
				bool anon45 = llvm.ssub.with.overflow.i32(anon14, anon46).field1;
				anon41 = (uint8_t)(anon42 >> 31) == (__zext uint8_t)anon45 & anon42 != 0;
				if (anon41)
				{
					phi_in22 = anon43;
					phi23 = (__zext uint64_t)anon44;
				}
			}
			while (anon41);
			phi16 = anon40;
			phi17 = anon46;
			phi_in18 = (__zext uint64_t)anon46;
		}
		uint64_t anon47 = (uint64_t)&alloca1.field4;
		alloca5 = anon47;
		alloca5 = 0;
		alloca5 = (__zext uint64_t)*(uint16_t*)(anon12 + ((__sext int64_t)rand() % (__zext uint64_t)phi17 << 32 >> 31));
		uint8_t** anon48 = (uint8_t**)arg3;
		*(uint16_t*)(**anon48 == 0 ? phi16 : anon47) = *(uint16_t*)(anon12 + ((__sext int64_t)rand() % (__zext uint64_t)phi17 << 32 >> 31));
		uint64_t phi49 = phi_in18;
		while (true)
		{
			uint64_t phi_in110;
			uint64_t phi111;
			uint64_t anon228;
			while (true)
			{
				alloca5 = 0;
				alloca5 = (__zext uint64_t)printf((uint8_t*)0x400e95);
				uint8_t* anon50 = (uint8_t*)arg3;
				*(uint8_t*)&alloca5 = *anon50;
				uint8_t anon51 = anon50[1];
				((uint8_t*)&alloca5)[1] = anon51;
				uint48_t* anon52 = (uint48_t*)&anon50[2];
				*(uint48_t*)&((uint8_t*)&alloca5)[2] = *anon52;
				if (**anon48 == 0)
				{
					if (**anon48 != 0)
					{
						alloca5 = 0;
						alloca5 = (__zext uint64_t)scanf((uint8_t*)0x400eaa);
						*(uint8_t*)&alloca5 = *anon50;
						((uint8_t*)&alloca5)[1] = anon51;
						*(uint48_t*)&((uint8_t*)&alloca5)[2] = *anon52;
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
					alloca5 = 0;
					alloca5 = (__zext uint64_t)printf((uint8_t*)0x400ea4);
					*(uint8_t*)&alloca5 = *anon50;
					((uint8_t*)&alloca5)[1] = anon51;
					*(uint48_t*)&((uint8_t*)&alloca5)[2] = *anon52;
				}
				if (**anon48 == 0 && **anon48 == 0 || **anon48 != 0 && **anon48 == 0 && **anon48 == 0 || **anon48 != 0 && **anon48 != 0)
				{
					alloca5 = 0;
					alloca5 = (__zext uint64_t)printf((uint8_t*)0x400eae);
					*(uint8_t*)&alloca5 = *anon50;
					((uint8_t*)&alloca5)[1] = anon51;
					*(uint48_t*)&((uint8_t*)&alloca5)[2] = *anon52;
				}
				if (**anon48 == 0 && (**anon48 == 0 && **anon48 == 0 || **anon48 != 0 && **anon48 == 0 && **anon48 == 0 || **anon48 != 0 && **anon48 != 0))
				{
					uint32_t anon54;
					uint16_t phi55;
					uint32_t phi56;
					uint8_t phi57;
					uint16_t phi58;
					uint8_t phi72;
					uint32_t phi73;
					uint32_t phi74;
					uint16_t phi75;
					uint16_t phi80;
					uint32_t phi86;
					uint8_t phi87;
					uint32_t phi88;
					uint16_t phi89;
					uint16_t phi95;
					uint32_t phi100;
					uint8_t phi101;
					uint32_t phi102;
					uint16_t phi103;
					alloca5 = (__zext uint64_t)alloca1.field4;
					if (((alloca1.field4 ^ *(uint16_t*)phi16) & 0xf) == 0)
					{
						anon54 = (__zext uint32_t)alloca1.field4;
						uint32_t anon53 = anon54 | 0xf;
						alloca5 = (__zext uint64_t)anon53;
						phi55 = (uint16_t)anon53;
						phi56 = anon53;
						phi57 = (uint8_t)anon53;
						phi58 = 1;
					}
					else 
					{
						phi55 = alloca1.field4;
						phi56 = anon54;
						phi57 = (uint8_t)alloca1.field4 & 0xf;
						phi58 = 0;
					}
					uint16_t phi_in59 = phi55;
					uint16_t phi60 = phi_in59;
					uint32_t phi61 = phi56;
					uint16_t phi62 = 0;
					if (((uint8_t)*(uint16_t*)phi16 ^ (uint8_t)phi56) < 16)
					{
						*(uint8_t*)&alloca5 = phi57 | 0xf0;
						phi60 = (uint16_t)*(uint32_t*)&alloca5;
						phi61 = *(uint32_t*)&alloca5;
						phi62 = 1;
					}
					uint16_t phi_in63 = phi60;
					uint16_t phi64 = phi_in63;
					uint16_t phi65 = 0;
					uint32_t anon66 = (__zext uint32_t)*(uint16_t*)phi16;
					if (((anon66 ^ phi61) & 0xf00) == 0)
					{
						((uint8_t*)&alloca5)[1] = (uint8_t)(alloca1.field4 >> 8) | 0xf;
						phi64 = (uint16_t)*(uint32_t*)&alloca5;
						phi65 = 1;
						phi61 = *(uint32_t*)&alloca5;
					}
					uint16_t phi67 = 0;
					uint16_t phi68 = phi64;
					if ((*(uint16_t*)phi16 ^ (uint16_t)phi61) < 4096)
					{
						uint16_t anon69 = phi64 | 0xf000;
						*(uint16_t*)&alloca5 = anon69;
						phi67 = 1;
						phi68 = anon69;
					}
					uint16_t* anon70 = (uint16_t*)&alloca5;
					*anon70 = phi68 >> 12 | phi68 << 4;
					if (((anon66 ^ *(uint32_t*)&alloca5) & 0xf) == 0)
					{
						uint32_t anon71 = *(uint32_t*)&alloca5 | 0xf;
						alloca5 = (__zext uint64_t)anon71;
						phi72 = (uint8_t)(*(uint32_t*)&alloca5 >> 8);
						phi73 = anon71;
						phi74 = anon71;
						phi75 = 1;
					}
					else 
					{
						phi72 = (uint8_t)(phi68 >> 4);
						phi73 = *(uint32_t*)&alloca5;
						phi74 = *(uint32_t*)&alloca5 & 0xf;
						phi75 = 0;
					}
					uint32_t phi76 = phi73;
					uint16_t phi77 = 0;
					if ((phi73 & 0xf0) == 0)
					{
						*(uint8_t*)&alloca5 = (uint8_t)phi74 | 0xf0;
						phi76 = *(uint32_t*)&alloca5;
						phi77 = 1;
					}
					uint16_t phi78 = 0;
					if ((phi76 & 0xf00) == 0)
					{
						((uint8_t*)&alloca5)[1] = phi72 | 0xf;
						phi76 = *(uint32_t*)&alloca5;
						phi78 = 1;
					}
					uint16_t phi79 = 0;
					uint16_t anon81 = (uint16_t)phi76;
					phi80 = anon81;
					if ((uint16_t)phi76 < 4096)
					{
						uint16_t anon82 = anon81 | 0xf000;
						*anon70 = anon82;
						phi79 = 1;
						phi80 = anon82;
					}
					*anon70 = phi80 >> 12 | phi80 << 4;
					uint32_t anon83 = (__zext uint32_t)(*(uint16_t*)phi16 & 0xf);
					uint32_t anon84 = *(uint32_t*)&alloca5 & 0xf;
					if (anon83 == anon84)
					{
						uint32_t anon85 = *(uint32_t*)&alloca5 | 0xf;
						alloca5 = (__zext uint64_t)anon85;
						phi86 = anon85;
						phi87 = (uint8_t)(*(uint32_t*)&alloca5 >> 8);
						phi88 = anon85;
						phi89 = 1;
					}
					else 
					{
						phi86 = *(uint32_t*)&alloca5;
						phi87 = (uint8_t)(phi80 >> 4);
						phi88 = anon84;
						phi89 = 0;
					}
					uint32_t phi90 = phi86;
					uint16_t phi91 = 0;
					if ((phi86 & 0xf0) == 0)
					{
						*(uint8_t*)&alloca5 = (uint8_t)phi88 | 0xf0;
						phi90 = *(uint32_t*)&alloca5;
						phi91 = 1;
					}
					uint32_t phi92 = phi90;
					uint16_t phi93 = 0;
					if ((phi90 & 0xf00) == 0)
					{
						((uint8_t*)&alloca5)[1] = phi87 | 0xf;
						phi92 = *(uint32_t*)&alloca5;
						phi93 = 1;
					}
					uint16_t phi94 = 0;
					uint16_t anon96 = (uint16_t)phi92;
					phi95 = anon96;
					if ((uint16_t)phi92 < 4096)
					{
						uint16_t anon97 = anon96 | 0xf000;
						*anon70 = anon97;
						phi94 = 1;
						phi95 = anon97;
					}
					*anon70 = phi95 >> 12 | phi95 << 4;
					uint32_t anon98 = *(uint32_t*)&alloca5 & 0xf;
					if (anon83 == anon98)
					{
						uint32_t anon99 = *(uint32_t*)&alloca5 | 0xf;
						alloca5 = (__zext uint64_t)anon99;
						phi100 = anon99;
						phi101 = (uint8_t)(*(uint32_t*)&alloca5 >> 8);
						phi102 = anon99;
						phi103 = 1;
					}
					else 
					{
						phi100 = *(uint32_t*)&alloca5;
						phi101 = (uint8_t)(phi95 >> 4);
						phi102 = anon98;
						phi103 = 0;
					}
					uint32_t phi104 = phi100;
					uint16_t phi105 = 0;
					if ((phi104 & 0xf0) == 0)
					{
						*(uint8_t*)&alloca5 = (uint8_t)phi102 | 0xf0;
						phi104 = *(uint32_t*)&alloca5;
						phi105 = 1;
					}
					uint32_t phi106 = phi104;
					uint16_t phi107 = 0;
					if ((phi106 & 0xf00) == 0)
					{
						((uint8_t*)&alloca5)[1] = phi101 | 0xf;
						phi107 = 1;
						phi106 = *(uint32_t*)&alloca5;
					}
					alloca1.field5 = (__zext uint16_t)((uint16_t)phi106 < 4096) + phi107 + phi77 + (phi67 + phi58 + phi62 + phi65 << 4 | phi75) + phi78 + phi79 + phi89 + phi91 + phi93 + phi94 + phi103 + phi105;
					alloca5 = 0;
					alloca5 = (__zext uint64_t)printf((uint8_t*)0x400eb3);
					break;
				}
			}
			alloca1.field1 = 0;
			uint32_t anon108 = (uint32_t)phi49;
			if (anon108 != 0)
			{
				uint16_t phi227;
				uint64_t anon109 = (__zext uint64_t)alloca1.field4;
				alloca5 = anon109;
				phi_in110 = anon12;
				phi111 = 0;
				while (true)
				{
					uint64_t phi115;
					uint16_t phi117;
					uint16_t phi118;
					uint16_t phi119;
					uint8_t phi120;
					uint64_t phi144;
					uint64_t phi146;
					uint16_t phi147;
					uint16_t phi148;
					uint64_t phi150;
					uint8_t phi151;
					uint16_t phi152;
					uint16_t phi161;
					uint64_t phi176;
					uint16_t phi178;
					uint16_t phi_in179;
					uint64_t phi181;
					uint64_t phi182;
					uint8_t phi183;
					uint16_t phi184;
					uint16_t phi194;
					uint64_t phi210;
					uint32_t phi212;
					uint64_t phi214;
					uint16_t phi215;
					uint64_t phi217;
					uint8_t phi218;
					uint16_t phi219;
					uint64_t phi220;
					uint32_t phi_in222;
					uint32_t phi223;
					uint16_t phi224;
					uint64_t anon229;
					uint64_t phi112 = phi_in110;
					uint16_t anon114 = alloca1.field4 ^ *(uint16_t*)phi112;
					uint32_t anon113 = (__zext uint32_t)anon114 >> 8;
					if ((anon113 & 0xf) == 0)
					{
						uint16_t anon116 = alloca1.field4 | 0xf;
						phi115 = (__zext uint64_t)anon116;
						phi117 = anon116;
						phi118 = 1;
						phi119 = 2;
						phi120 = (uint8_t)(anon114 >> 8);
					}
					else 
					{
						phi115 = anon109;
						phi117 = alloca1.field4;
						phi118 = 0;
						phi119 = 1;
						phi120 = (uint8_t)anon113 & 0xf;
					}
					uint16_t phi121 = phi118;
					uint64_t phi122 = phi115;
					uint16_t phi_in123 = phi117;
					uint16_t phi124 = phi117 ^ *(uint16_t*)phi112;
					if (phi120 < 16)
					{
						uint64_t anon125 = phi115 & 0xff00 | (__zext uint64_t)(phi117 & 0xf | 0xf0);
						phi122 = anon125;
						uint16_t anon126 = (uint16_t)anon125;
						phi_in123 = anon126;
						phi124 = *(uint16_t*)phi112 ^ anon126;
						phi121 = phi119;
					}
					uint16_t phi127 = phi124;
					uint64_t phi128 = phi122;
					uint16_t phi129 = phi_in123;
					uint16_t phi130 = 0;
					if ((phi127 & 0xf00) == 0)
					{
						uint64_t anon131 = phi122 & 0xffffffffffff00ff | (__zext uint64_t)(phi117 & 0xf000 | 0xf00);
						phi128 = anon131;
						uint16_t anon132 = (uint16_t)anon131;
						phi129 = anon132;
						phi127 = *(uint16_t*)phi112 ^ anon132;
						phi130 = 256;
					}
					uint64_t phi133 = phi128;
					uint16_t phi134 = 0;
					uint16_t phi135 = phi129;
					if (phi127 < 4096)
					{
						uint16_t anon136 = phi129 | 0xf000;
						phi133 = phi128 & 0xffffffffffff0000 | (__zext uint64_t)anon136;
						phi134 = 256;
						phi135 = anon136;
					}
					uint32_t anon138 = (__zext uint32_t)*(uint16_t*)phi112;
					uint16_t anon143 = phi135 << 4;
					uint16_t anon142 = phi135 >> 12 | anon143;
					uint64_t anon141 = (__zext uint64_t)anon142;
					uint64_t anon140 = phi133 & 0xffffffffffff0000 | anon141;
					uint32_t anon139 = (uint32_t)anon140;
					uint32_t anon137 = (anon138 ^ anon139) >> 8;
					if ((anon137 & 0xf) == 0)
					{
						uint32_t anon145 = anon139 | 0xf;
						phi144 = (__zext uint64_t)anon145;
						phi146 = anon140 >> 8 & 0xffffff;
						phi147 = (uint16_t)anon145;
						uint16_t anon149 = anon143 | 0xf;
						phi148 = anon149;
						phi150 = (__zext uint64_t)anon149;
						phi151 = (uint8_t)anon137;
						phi152 = 256;
					}
					else 
					{
						phi144 = anon140;
						phi146 = (__zext uint64_t)(phi135 >> 4);
						phi147 = anon142;
						phi148 = anon142;
						phi150 = anon141;
						phi151 = (uint8_t)anon137 & 0xf;
						phi152 = 0;
					}
					uint16_t phi153 = phi147;
					uint16_t phi154 = phi148;
					uint64_t phi155 = phi144;
					uint16_t phi156 = 0;
					if (phi151 < 16)
					{
						uint64_t anon157 = phi144 & 0xffffffffffffff00 | phi150 & 0xf | 0xf0;
						phi155 = anon157;
						uint16_t anon158 = (uint16_t)anon157;
						phi153 = anon158;
						phi154 = anon158;
						phi156 = 256;
					}
					uint16_t phi159 = phi153;
					uint64_t phi160 = phi155;
					uint16_t anon162 = *(uint16_t*)phi112 ^ phi154;
					phi161 = anon162;
					uint16_t phi163 = 0;
					if ((anon162 & 0xf00) == 0)
					{
						uint64_t anon164 = phi155 & 0xffffffffffff00ff | phi146 << 8 & 0xf000 | 0xf00;
						phi160 = anon164;
						uint16_t anon165 = (uint16_t)anon164;
						phi159 = anon165;
						phi161 = *(uint16_t*)phi112 ^ anon165;
						phi163 = 256;
					}
					uint16_t phi166 = phi159;
					uint64_t phi167 = phi160;
					uint16_t phi168 = 0;
					if (phi161 < 4096)
					{
						uint16_t anon169 = phi166 | 0xf000;
						phi167 = phi160 & 0xffffffffffff0000 | (__zext uint64_t)anon169;
						phi168 = 256;
						phi166 = anon169;
					}
					uint16_t anon175 = phi166 << 4;
					uint16_t anon174 = phi166 >> 12 | anon175;
					uint64_t anon173 = (__zext uint64_t)anon174;
					uint64_t anon172 = phi167 & 0xffffffffffff0000 | anon173;
					uint32_t anon171 = (uint32_t)anon172;
					uint32_t anon170 = (anon138 ^ anon171) >> 8;
					if ((anon170 & 0xf) == 0)
					{
						uint32_t anon177 = anon171 | 0xf;
						phi176 = (__zext uint64_t)anon177;
						phi178 = (uint16_t)anon177;
						uint16_t anon180 = anon175 | 0xf;
						phi_in179 = anon180;
						phi181 = anon172 >> 8 & 0xffffff;
						phi182 = (__zext uint64_t)anon180;
						phi183 = (uint8_t)anon170;
						phi184 = 256;
					}
					else 
					{
						phi176 = anon172;
						phi178 = anon174;
						phi_in179 = anon174;
						phi181 = (__zext uint64_t)(phi166 >> 4);
						phi182 = anon173;
						phi183 = (uint8_t)anon170 & 0xf;
						phi184 = 0;
					}
					uint16_t phi_in185 = phi178;
					uint64_t phi186 = phi176;
					uint16_t phi187 = phi_in185;
					uint16_t phi188 = phi_in179;
					uint16_t phi189 = 0;
					if (phi183 < 16)
					{
						uint64_t anon190 = phi176 & 0xffffffffffffff00 | phi182 & 0xf | 0xf0;
						phi186 = anon190;
						uint16_t anon191 = (uint16_t)anon190;
						phi187 = anon191;
						phi188 = anon191;
						phi189 = 256;
					}
					uint16_t phi192 = phi187;
					uint64_t phi193 = phi186;
					uint16_t anon195 = *(uint16_t*)phi112 ^ phi188;
					phi194 = anon195;
					uint16_t phi196 = 0;
					if ((anon195 & 0xf00) == 0)
					{
						uint64_t anon197 = phi186 & 0xffffffffffff00ff | phi181 << 8 & 0xf000 | 0xf00;
						phi193 = anon197;
						uint16_t anon198 = (uint16_t)anon197;
						phi192 = anon198;
						phi194 = *(uint16_t*)phi112 ^ anon198;
						phi196 = 256;
					}
					uint64_t phi199 = phi193;
					uint16_t phi200 = 0;
					uint16_t phi201 = phi192;
					if (phi194 < 4096)
					{
						uint16_t anon202 = phi192 | 0xf000;
						phi199 = phi193 & 0xffffffffffff0000 | (__zext uint64_t)anon202;
						phi200 = 256;
						phi201 = anon202;
					}
					uint16_t anon209 = phi201 << 4;
					uint16_t anon208 = phi201 >> 12 | anon209;
					uint64_t anon207 = (__zext uint64_t)anon208;
					uint64_t anon206 = phi199 & 0xffffffffffff0000 | anon207;
					uint32_t anon205 = (uint32_t)anon206;
					uint32_t anon204 = anon138 ^ anon205;
					uint32_t anon203 = anon204 >> 8;
					if ((anon203 & 0xf) == 0)
					{
						uint32_t anon211 = anon205 | 0xf;
						phi210 = (__zext uint64_t)anon211;
						uint32_t anon213 = anon138 ^ anon211;
						phi212 = anon213;
						phi214 = anon206 >> 8 & 0xffffff;
						uint16_t anon216 = anon209 | 0xf;
						phi215 = anon216;
						phi217 = (__zext uint64_t)anon216;
						phi218 = (uint8_t)(anon213 >> 8);
						phi219 = 256;
					}
					else 
					{
						phi210 = anon206;
						phi212 = anon204;
						phi214 = (__zext uint64_t)(phi201 >> 4);
						phi215 = anon208;
						phi217 = anon207;
						phi218 = (uint8_t)anon203 & 0xf;
						phi219 = 0;
					}
					if (phi218 < 16)
					{
						uint64_t anon221 = phi210 & 0xffffffffffffff00 | phi217 & 0xf | 0xf0;
						phi220 = anon221;
						phi_in222 = (__zext uint32_t)(*(uint16_t*)phi112 ^ (uint16_t)anon221);
						phi223 = anon138 ^ (uint32_t)anon221;
						phi224 = 256;
					}
					else 
					{
						phi220 = phi210;
						phi_in222 = phi212;
						phi223 = (__zext uint32_t)(*(uint16_t*)phi112 ^ phi215);
						phi224 = 0;
					}
					uint32_t phi225 = phi_in222;
					uint16_t phi226 = 0;
					if ((phi223 & 0xf00) == 0)
					{
						phi225 = anon138 ^ (uint32_t)(phi220 & 0xffff00ff | phi214 << 8 & 0xf000 | 0xf00);
						phi226 = 256;
					}
					if ((__zext uint16_t)((uint16_t)phi225 < 4096) + phi196 + phi189 + phi168 + phi163 + (phi134 + phi130 + phi121 << 4) + phi152 + phi156 + phi184 + phi200 + phi219 + phi224 + phi226 == *(uint16_t*)(arg1 - 66))
					{
						*(uint16_t*)(anon12 + (phi111 << 1 & 0x1fffe)) = *(uint16_t*)phi112;
						phi227 = (uint16_t)phi111 + 1;
						anon228 = phi112 + 2;
						uint64_t anon230 = phi49 + 4294967295 & 0xffffffff;
						anon229 = anon230 + anon230 + 2 + anon12;
						if (anon228 != anon229)
						{
							break;
						}
					}
					else 
					{
						phi_in110 = anon228;
						phi111 = phi111;
						if (anon228 == anon229)
						{
							phi227 = (uint16_t)phi111;
						}
					}
				}
				alloca1.field1 = anon108;
				uint16_t* anon231 = (uint16_t*)phi16;
				*anon231 = *anon231;
				if (!(phi227 == 0 | *(uint16_t*)(arg1 - 66) == 64))
				{
					alloca5 = 0;
					uint64_t anon232 = (__zext uint64_t)phi227;
					alloca5 = (__zext uint64_t)*(uint16_t*)(anon12 + ((__sext int64_t)rand() % anon232 << 32 >> 31));
					alloca1.field4 = *(uint16_t*)(anon12 + ((__sext int64_t)rand() % anon232 << 32 >> 31));
					phi49 = anon232;
				}
			}
			phi_in110 = anon228;
			phi111 = phi111 + 1 & 0xffffffff;
			break;
		}
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
