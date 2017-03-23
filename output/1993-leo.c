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
			uint64_t phi_in111;
			uint64_t phi112;
			uint64_t anon229;
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
					if (**anon48 == 0)
					{
						if (**anon48 != 0)
						{
							alloca1.field4 = alloca1.field4 - 4369;
						}
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
				if (**anon48 == 0)
				{
					if (**anon48 == 0 && **anon48 == 0 || **anon48 != 0 && **anon48 == 0 && **anon48 == 0 || **anon48 != 0 && **anon48 != 0)
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
						uint16_t phi81;
						uint32_t phi87;
						uint8_t phi88;
						uint32_t phi89;
						uint16_t phi90;
						uint16_t phi96;
						uint32_t phi101;
						uint8_t phi102;
						uint32_t phi103;
						uint16_t phi104;
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
						uint16_t phi59 = phi55;
						uint32_t phi60 = phi56;
						uint16_t phi61 = 0;
						if (((uint8_t)*(uint16_t*)phi16 ^ (uint8_t)phi56) < 16)
						{
							*(uint8_t*)&alloca5 = phi57 | 0xf0;
							phi59 = (uint16_t)*(uint32_t*)&alloca5;
							phi60 = *(uint32_t*)&alloca5;
							phi61 = 1;
						}
						uint16_t phi_in62 = phi59;
						uint32_t phi63 = phi60;
						uint16_t phi64 = phi_in62;
						uint16_t phi65 = 0;
						uint32_t anon66 = (__zext uint32_t)*(uint16_t*)phi16;
						if (((anon66 ^ phi63) & 0xf00) == 0)
						{
							((uint8_t*)&alloca5)[1] = (uint8_t)(alloca1.field4 >> 8) | 0xf;
							phi64 = (uint16_t)*(uint32_t*)&alloca5;
							phi65 = 1;
							phi63 = *(uint32_t*)&alloca5;
						}
						uint16_t phi67 = 0;
						uint16_t phi68 = phi64;
						if ((*(uint16_t*)phi16 ^ (uint16_t)phi63) < 4096)
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
						if ((phi76 & 0xf0) == 0)
						{
							*(uint8_t*)&alloca5 = (uint8_t)phi74 | 0xf0;
							phi76 = *(uint32_t*)&alloca5;
							phi77 = 1;
						}
						uint32_t phi78 = phi76;
						uint16_t phi79 = 0;
						if ((phi78 & 0xf00) == 0)
						{
							((uint8_t*)&alloca5)[1] = phi72 | 0xf;
							phi78 = *(uint32_t*)&alloca5;
							phi79 = 1;
						}
						uint16_t phi80 = 0;
						uint16_t anon82 = (uint16_t)phi78;
						phi81 = anon82;
						if ((uint16_t)phi78 < 4096)
						{
							uint16_t anon83 = anon82 | 0xf000;
							*anon70 = anon83;
							phi80 = 1;
							phi81 = anon83;
						}
						*anon70 = phi81 >> 12 | phi81 << 4;
						uint32_t anon84 = (__zext uint32_t)(*(uint16_t*)phi16 & 0xf);
						uint32_t anon85 = *(uint32_t*)&alloca5 & 0xf;
						if (anon84 == anon85)
						{
							uint32_t anon86 = *(uint32_t*)&alloca5 | 0xf;
							alloca5 = (__zext uint64_t)anon86;
							phi87 = anon86;
							phi88 = (uint8_t)(*(uint32_t*)&alloca5 >> 8);
							phi89 = anon86;
							phi90 = 1;
						}
						else 
						{
							phi87 = *(uint32_t*)&alloca5;
							phi88 = (uint8_t)(phi81 >> 4);
							phi89 = anon85;
							phi90 = 0;
						}
						uint32_t phi91 = phi87;
						uint16_t phi92 = 0;
						if ((phi87 & 0xf0) == 0)
						{
							*(uint8_t*)&alloca5 = (uint8_t)phi89 | 0xf0;
							phi91 = *(uint32_t*)&alloca5;
							phi92 = 1;
						}
						uint32_t phi93 = phi91;
						uint16_t phi94 = 0;
						if ((phi91 & 0xf00) == 0)
						{
							((uint8_t*)&alloca5)[1] = phi88 | 0xf;
							phi93 = *(uint32_t*)&alloca5;
							phi94 = 1;
						}
						uint16_t phi95 = 0;
						uint16_t anon97 = (uint16_t)phi93;
						phi96 = anon97;
						if ((uint16_t)phi93 < 4096)
						{
							uint16_t anon98 = anon97 | 0xf000;
							*anon70 = anon98;
							phi95 = 1;
							phi96 = anon98;
						}
						*anon70 = phi96 >> 12 | phi96 << 4;
						uint32_t anon99 = *(uint32_t*)&alloca5 & 0xf;
						if (anon84 == anon99)
						{
							uint32_t anon100 = *(uint32_t*)&alloca5 | 0xf;
							alloca5 = (__zext uint64_t)anon100;
							phi101 = anon100;
							phi102 = (uint8_t)(*(uint32_t*)&alloca5 >> 8);
							phi103 = anon100;
							phi104 = 1;
						}
						else 
						{
							phi101 = *(uint32_t*)&alloca5;
							phi102 = (uint8_t)(phi96 >> 4);
							phi103 = anon99;
							phi104 = 0;
						}
						uint32_t phi105 = phi101;
						uint16_t phi106 = 0;
						if ((phi101 & 0xf0) == 0)
						{
							*(uint8_t*)&alloca5 = (uint8_t)phi103 | 0xf0;
							phi105 = *(uint32_t*)&alloca5;
							phi106 = 1;
						}
						uint16_t phi107 = 0;
						uint32_t phi108 = phi105;
						if ((phi105 & 0xf00) == 0)
						{
							((uint8_t*)&alloca5)[1] = phi102 | 0xf;
							phi107 = 1;
							phi108 = *(uint32_t*)&alloca5;
						}
						alloca1.field5 = (__zext uint16_t)((uint16_t)phi108 < 4096) + phi107 + phi77 + (phi67 + phi58 + phi61 + phi65 << 4 | phi75) + phi79 + phi80 + phi90 + phi92 + phi94 + phi95 + phi104 + phi106;
						alloca5 = 0;
						alloca5 = (__zext uint64_t)printf((uint8_t*)0x400eb3);
						break;
					}
				}
			}
			alloca1.field1 = 0;
			uint32_t anon109 = (uint32_t)phi49;
			if (anon109 != 0)
			{
				uint16_t phi228;
				uint64_t anon110 = (__zext uint64_t)alloca1.field4;
				alloca5 = anon110;
				phi_in111 = anon12;
				phi112 = 0;
				while (true)
				{
					uint64_t phi116;
					uint16_t phi118;
					uint16_t phi_in119;
					uint16_t phi120;
					uint8_t phi121;
					uint64_t phi145;
					uint64_t phi147;
					uint16_t phi148;
					uint16_t phi149;
					uint64_t phi151;
					uint8_t phi152;
					uint16_t phi153;
					uint16_t phi162;
					uint64_t phi177;
					uint16_t phi179;
					uint16_t phi180;
					uint64_t phi182;
					uint64_t phi183;
					uint8_t phi184;
					uint16_t phi185;
					uint16_t phi195;
					uint64_t phi211;
					uint32_t phi213;
					uint64_t phi215;
					uint16_t phi216;
					uint64_t phi218;
					uint8_t phi219;
					uint16_t phi220;
					uint64_t phi221;
					uint32_t phi223;
					uint32_t phi224;
					uint16_t phi225;
					uint64_t anon230;
					uint64_t phi113 = phi_in111;
					uint16_t anon115 = alloca1.field4 ^ *(uint16_t*)phi113;
					uint32_t anon114 = (__zext uint32_t)anon115 >> 8;
					if ((anon114 & 0xf) == 0)
					{
						uint16_t anon117 = alloca1.field4 | 0xf;
						phi116 = (__zext uint64_t)anon117;
						phi118 = anon117;
						phi_in119 = 1;
						phi120 = 2;
						phi121 = (uint8_t)(anon115 >> 8);
					}
					else 
					{
						phi116 = anon110;
						phi118 = alloca1.field4;
						phi_in119 = 0;
						phi120 = 1;
						phi121 = (uint8_t)anon114 & 0xf;
					}
					uint64_t phi122 = phi116;
					uint16_t phi_in123 = phi118;
					uint16_t phi124 = phi118 ^ *(uint16_t*)phi113;
					uint16_t phi125 = phi_in119;
					if (phi121 < 16)
					{
						uint64_t anon126 = phi116 & 0xff00 | (__zext uint64_t)(phi118 & 0xf | 0xf0);
						phi122 = anon126;
						uint16_t anon127 = (uint16_t)anon126;
						phi_in123 = anon127;
						phi124 = *(uint16_t*)phi113 ^ anon127;
						phi125 = phi120;
					}
					uint64_t phi128 = phi122;
					uint16_t phi129 = phi_in123;
					uint16_t phi130 = phi124;
					uint16_t phi131 = 0;
					if ((phi124 & 0xf00) == 0)
					{
						uint64_t anon132 = phi122 & 0xffffffffffff00ff | (__zext uint64_t)(phi118 & 0xf000 | 0xf00);
						phi128 = anon132;
						uint16_t anon133 = (uint16_t)anon132;
						phi129 = anon133;
						phi130 = *(uint16_t*)phi113 ^ anon133;
						phi131 = 256;
					}
					uint64_t phi134 = phi128;
					uint16_t phi135 = 0;
					uint16_t phi136 = phi129;
					if (phi130 < 4096)
					{
						uint16_t anon137 = phi129 | 0xf000;
						phi134 = phi134 & 0xffffffffffff0000 | (__zext uint64_t)anon137;
						phi135 = 256;
						phi136 = anon137;
					}
					uint32_t anon139 = (__zext uint32_t)*(uint16_t*)phi113;
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
					uint16_t phi154 = phi148;
					uint16_t phi155 = phi149;
					uint64_t phi156 = phi145;
					uint16_t phi157 = 0;
					if (phi152 < 16)
					{
						uint64_t anon158 = phi145 & 0xffffffffffffff00 | phi151 & 0xf | 0xf0;
						phi156 = anon158;
						uint16_t anon159 = (uint16_t)anon158;
						phi154 = anon159;
						phi155 = anon159;
						phi157 = 256;
					}
					uint16_t phi160 = phi154;
					uint64_t phi161 = phi156;
					uint16_t anon163 = *(uint16_t*)phi113 ^ phi155;
					phi162 = anon163;
					uint16_t phi164 = 0;
					if ((anon163 & 0xf00) == 0)
					{
						uint64_t anon165 = phi156 & 0xffffffffffff00ff | phi147 << 8 & 0xf000 | 0xf00;
						phi161 = anon165;
						uint16_t anon166 = (uint16_t)anon165;
						phi160 = anon166;
						phi162 = *(uint16_t*)phi113 ^ anon166;
						phi164 = 256;
					}
					uint64_t phi167 = phi161;
					uint16_t phi168 = phi160;
					uint16_t phi169 = 0;
					if (phi162 < 4096)
					{
						uint16_t anon170 = phi168 | 0xf000;
						phi167 = phi167 & 0xffffffffffff0000 | (__zext uint64_t)anon170;
						phi169 = 256;
						phi168 = anon170;
					}
					uint16_t anon176 = phi168 << 4;
					uint16_t anon175 = phi168 >> 12 | anon176;
					uint64_t anon174 = (__zext uint64_t)anon175;
					uint64_t anon173 = phi167 & 0xffffffffffff0000 | anon174;
					uint32_t anon172 = (uint32_t)anon173;
					uint32_t anon171 = (anon139 ^ anon172) >> 8;
					if ((anon171 & 0xf) == 0)
					{
						uint32_t anon178 = anon172 | 0xf;
						phi177 = (__zext uint64_t)anon178;
						phi179 = (uint16_t)anon178;
						uint16_t anon181 = anon176 | 0xf;
						phi180 = anon181;
						phi182 = anon173 >> 8 & 0xffffff;
						phi183 = (__zext uint64_t)anon181;
						phi184 = (uint8_t)anon171;
						phi185 = 256;
					}
					else 
					{
						phi177 = anon173;
						phi179 = anon175;
						phi180 = anon175;
						phi182 = (__zext uint64_t)(phi168 >> 4);
						phi183 = anon174;
						phi184 = (uint8_t)anon171 & 0xf;
						phi185 = 0;
					}
					uint16_t phi_in186 = phi179;
					uint16_t phi_in187 = phi180;
					uint64_t phi188 = phi177;
					uint16_t phi189 = phi_in187;
					uint16_t phi190 = 0;
					if (phi184 < 16)
					{
						uint64_t anon191 = phi177 & 0xffffffffffffff00 | phi183 & 0xf | 0xf0;
						phi188 = anon191;
						uint16_t anon192 = (uint16_t)anon191;
						phi_in186 = anon192;
						phi189 = anon192;
						phi190 = 256;
					}
					uint64_t phi193 = phi188;
					uint16_t phi194 = phi_in186;
					uint16_t anon196 = *(uint16_t*)phi113 ^ phi189;
					phi195 = anon196;
					uint16_t phi197 = 0;
					if ((anon196 & 0xf00) == 0)
					{
						uint64_t anon198 = phi188 & 0xffffffffffff00ff | phi182 << 8 & 0xf000 | 0xf00;
						phi193 = anon198;
						uint16_t anon199 = (uint16_t)anon198;
						phi194 = anon199;
						phi195 = *(uint16_t*)phi113 ^ anon199;
						phi197 = 256;
					}
					uint64_t phi200 = phi193;
					uint16_t phi201 = 0;
					uint16_t phi202 = phi194;
					if (phi195 < 4096)
					{
						uint16_t anon203 = phi194 | 0xf000;
						phi200 = phi193 & 0xffffffffffff0000 | (__zext uint64_t)anon203;
						phi201 = 256;
						phi202 = anon203;
					}
					uint16_t anon210 = phi202 << 4;
					uint16_t anon209 = phi202 >> 12 | anon210;
					uint64_t anon208 = (__zext uint64_t)anon209;
					uint64_t anon207 = phi200 & 0xffffffffffff0000 | anon208;
					uint32_t anon206 = (uint32_t)anon207;
					uint32_t anon205 = anon139 ^ anon206;
					uint32_t anon204 = anon205 >> 8;
					if ((anon204 & 0xf) == 0)
					{
						uint32_t anon212 = anon206 | 0xf;
						phi211 = (__zext uint64_t)anon212;
						uint32_t anon214 = anon139 ^ anon212;
						phi213 = anon214;
						phi215 = anon207 >> 8 & 0xffffff;
						uint16_t anon217 = anon210 | 0xf;
						phi216 = anon217;
						phi218 = (__zext uint64_t)anon217;
						phi219 = (uint8_t)(anon214 >> 8);
						phi220 = 256;
					}
					else 
					{
						phi211 = anon207;
						phi213 = anon205;
						phi215 = (__zext uint64_t)(phi202 >> 4);
						phi216 = anon209;
						phi218 = anon208;
						phi219 = (uint8_t)anon204 & 0xf;
						phi220 = 0;
					}
					if (phi219 < 16)
					{
						uint64_t anon222 = phi211 & 0xffffffffffffff00 | phi218 & 0xf | 0xf0;
						phi221 = anon222;
						phi223 = (__zext uint32_t)(*(uint16_t*)phi113 ^ (uint16_t)anon222);
						phi224 = anon139 ^ (uint32_t)anon222;
						phi225 = 256;
					}
					else 
					{
						phi221 = phi211;
						phi223 = phi213;
						phi224 = (__zext uint32_t)(*(uint16_t*)phi113 ^ phi216);
						phi225 = 0;
					}
					uint32_t phi226 = phi223;
					uint16_t phi227 = 0;
					if ((phi224 & 0xf00) == 0)
					{
						phi226 = anon139 ^ (uint32_t)(phi221 & 0xffff00ff | phi215 << 8 & 0xf000 | 0xf00);
						phi227 = 256;
					}
					if ((__zext uint16_t)((uint16_t)phi226 < 4096) + phi197 + phi190 + phi169 + phi164 + (phi135 + phi131 + phi125 << 4) + phi153 + phi157 + phi185 + phi201 + phi220 + phi225 + phi227 == *(uint16_t*)(arg1 - 66))
					{
						*(uint16_t*)(anon12 + (phi112 << 1 & 0x1fffe)) = *(uint16_t*)phi113;
						phi228 = (uint16_t)phi112 + 1;
						anon229 = phi113 + 2;
						uint64_t anon231 = phi49 + 4294967295 & 0xffffffff;
						anon230 = anon231 + anon231 + 2 + anon12;
						if (anon229 != anon230)
						{
							break;
						}
					}
					else 
					{
						phi_in111 = anon229;
						phi112 = phi112;
						if (anon229 == anon230)
						{
							phi228 = (uint16_t)phi112;
						}
					}
				}
				alloca1.field1 = anon109;
				uint16_t* anon232 = (uint16_t*)phi16;
				*anon232 = *anon232;
				if (!(phi228 == 0 | *(uint16_t*)(arg1 - 66) == 64))
				{
					alloca5 = 0;
					uint64_t anon233 = (__zext uint64_t)phi228;
					alloca5 = (__zext uint64_t)*(uint16_t*)(anon12 + ((__sext int64_t)rand() % anon233 << 32 >> 31));
					alloca1.field4 = *(uint16_t*)(anon12 + ((__sext int64_t)rand() % anon233 << 32 >> 31));
					phi49 = anon233;
				}
			}
			phi_in111 = anon229;
			phi112 = phi112 + 1 & 0xffffffff;
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
