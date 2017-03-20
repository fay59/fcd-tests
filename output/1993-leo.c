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
	uint8_t* anon12 = calloc(phi10, 2);
	uint64_t anon13 = (uint64_t)anon12;
	alloca5 = anon13;
	if (anon12 != null)
	{
		uint64_t phi16;
		uint32_t phi17;
		uint64_t phi18;
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
			uint32_t anon41;
			bool anon42;
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
				uint64_t anon25 = anon26 + anon13;
				alloca5 = anon25;
				anon27 = arg1 - 70;
				uint32_t anon29 = (__zext uint32_t)*(uint16_t*)(anon13 + anon26 - 2) + 1;
				uint16_t anon28 = (uint16_t)anon29;
				*(uint16_t*)anon27 = anon28;
				uint16_t phi30 = anon28;
				if (((phi11 ^ anon29) & 0xf) == 0)
				{
					uint32_t anon33 = 16 - phi11;
					uint32_t anon32 = anon29 + (anon33 & 0xffff);
					uint16_t anon31 = (uint16_t)anon32;
					*(uint16_t*)anon27 = anon31;
					phi30 = anon31;
					uint64_t anon34 = anon21 << 4;
					uint32_t anon35 = anon29 + anon33;
					if ((((uint32_t)anon34 ^ anon35) & 0xf0) == 0)
					{
						uint32_t anon37 = (uint32_t)(256 - anon34);
						uint16_t anon36 = (uint16_t)(anon32 + anon37);
						*(uint16_t*)anon27 = anon36;
						phi30 = anon36;
						if ((((uint32_t)anon20 ^ anon35 + anon37) & 0xf00) == 0)
						{
							uint16_t anon38 = anon36 + anon19;
							uint16_t anon39 = (uint16_t)phi11 << 12;
							*(uint16_t*)anon27 = anon38 - ((anon39 ^ anon38) < 4096 ? anon39 : 0);
							phi30 = (anon39 ^ anon38) < 4096 ? 0 : anon38;
						}
					}
				}
				*(uint16_t*)anon25 = phi30;
				anon41 = phi24 + 1 & 0xffff;
				struct { uint32_t field0; bool field1; } anon40 = llvm.ssub.with.overflow.i32(anon14, anon41);
				uint16_t anon45 = (uint16_t)phi24 + 1;
				uint32_t anon44 = (__zext uint32_t)anon45;
				uint32_t anon43 = anon14 - anon44;
				bool anon46 = anon40.field1;
				anon42 = (uint8_t)(anon43 >> 31) == (__zext uint8_t)anon46 & anon43 != 0;
				if (anon42)
				{
					phi_in22 = anon44;
					phi23 = (__zext uint64_t)anon45;
				}
			}
			while (anon42);
			phi16 = anon27;
			phi17 = anon41;
			phi18 = (__zext uint64_t)anon41;
		}
		uint64_t phi47 = phi18;
		uint64_t anon48 = (uint64_t)&alloca1.field4;
		alloca5 = anon48;
		alloca5 = 0;
		alloca5 = (__zext uint64_t)*(uint16_t*)(anon13 + ((__sext int64_t)rand() % (__zext uint64_t)phi17 << 32 >> 31));
		uint8_t** anon49 = (uint8_t**)arg3;
		*(uint16_t*)(**anon49 == 0 ? phi16 : anon48) = *(uint16_t*)(anon13 + ((__sext int64_t)rand() % (__zext uint64_t)phi17 << 32 >> 31));
		while (true)
		{
			uint64_t phi_in110;
			uint64_t phi111;
			uint64_t anon230;
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
				if (**anon49 == 0)
				{
					if (**anon49 != 0)
					{
						alloca5 = 0;
						alloca5 = (__zext uint64_t)scanf((uint8_t*)0x400eaa);
						*(uint8_t*)&alloca5 = *anon50;
						((uint8_t*)&alloca5)[1] = anon51;
						*(uint48_t*)&((uint8_t*)&alloca5)[2] = *anon52;
						if (**anon49 != 0)
						{
							break;
						}
					}
					if (**anon49 == 0 && (**anon49 != 0))
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
				if (**anon49 == 0 && **anon49 == 0 || **anon49 != 0 && **anon49 == 0 && **anon49 == 0 || **anon49 != 0 && **anon49 != 0)
				{
					alloca5 = 0;
					alloca5 = (__zext uint64_t)printf((uint8_t*)0x400eae);
					*(uint8_t*)&alloca5 = *anon50;
					((uint8_t*)&alloca5)[1] = anon51;
					*(uint48_t*)&((uint8_t*)&alloca5)[2] = *anon52;
				}
				if (**anon49 == 0 && (**anon49 == 0 && **anon49 == 0 || **anon49 != 0 && **anon49 == 0 && **anon49 == 0 || **anon49 != 0 && **anon49 != 0))
				{
					uint32_t anon54;
					uint16_t phi55;
					uint32_t phi56;
					uint8_t phi57;
					uint16_t phi58;
					uint8_t phi71;
					uint32_t phi72;
					uint32_t phi73;
					uint16_t phi74;
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
					uint16_t phi_in60 = phi_in59;
					uint16_t phi61 = 0;
					if (((uint8_t)*(uint16_t*)phi16 ^ (uint8_t)phi56) < 16)
					{
						*(uint8_t*)&alloca5 = phi57 | 0xf0;
						phi_in60 = (uint16_t)*(uint32_t*)&alloca5;
						phi56 = *(uint32_t*)&alloca5;
						phi61 = 1;
					}
					uint32_t phi62 = phi56;
					uint16_t phi63 = phi_in60;
					uint16_t phi64 = 0;
					uint32_t anon65 = (__zext uint32_t)*(uint16_t*)phi16;
					if (((anon65 ^ phi62) & 0xf00) == 0)
					{
						((uint8_t*)&alloca5)[1] = (uint8_t)(alloca1.field4 >> 8) | 0xf;
						phi63 = (uint16_t)*(uint32_t*)&alloca5;
						phi64 = 1;
						phi62 = *(uint32_t*)&alloca5;
					}
					uint16_t phi66 = phi63;
					uint16_t phi67 = 0;
					if ((*(uint16_t*)phi16 ^ (uint16_t)phi62) < 4096)
					{
						uint16_t anon68 = phi66 | 0xf000;
						*(uint16_t*)&alloca5 = anon68;
						phi67 = 1;
						phi66 = anon68;
					}
					uint16_t* anon69 = (uint16_t*)&alloca5;
					*anon69 = phi66 >> 12 | phi66 << 4;
					if (((anon65 ^ *(uint32_t*)&alloca5) & 0xf) == 0)
					{
						uint32_t anon70 = *(uint32_t*)&alloca5 | 0xf;
						alloca5 = (__zext uint64_t)anon70;
						phi71 = (uint8_t)(*(uint32_t*)&alloca5 >> 8);
						phi72 = anon70;
						phi73 = anon70;
						phi74 = 1;
					}
					else 
					{
						phi71 = (uint8_t)(phi66 >> 4);
						phi72 = *(uint32_t*)&alloca5;
						phi73 = *(uint32_t*)&alloca5 & 0xf;
						phi74 = 0;
					}
					uint32_t phi75 = phi72;
					uint16_t phi76 = 0;
					if ((phi75 & 0xf0) == 0)
					{
						*(uint8_t*)&alloca5 = (uint8_t)phi73 | 0xf0;
						phi75 = *(uint32_t*)&alloca5;
						phi76 = 1;
					}
					uint32_t phi77 = phi75;
					uint16_t phi78 = 0;
					if ((phi75 & 0xf00) == 0)
					{
						((uint8_t*)&alloca5)[1] = phi71 | 0xf;
						phi77 = *(uint32_t*)&alloca5;
						phi78 = 1;
					}
					uint16_t phi79 = 0;
					uint16_t anon81 = (uint16_t)phi77;
					phi80 = anon81;
					if ((uint16_t)phi77 < 4096)
					{
						uint16_t anon82 = anon81 | 0xf000;
						*anon69 = anon82;
						phi79 = 1;
						phi80 = anon82;
					}
					*anon69 = phi80 >> 12 | phi80 << 4;
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
						*anon69 = anon97;
						phi94 = 1;
						phi95 = anon97;
					}
					*anon69 = phi95 >> 12 | phi95 << 4;
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
					uint16_t phi106 = 0;
					uint32_t phi107 = phi104;
					if ((phi104 & 0xf00) == 0)
					{
						((uint8_t*)&alloca5)[1] = phi101 | 0xf;
						phi106 = 1;
						phi107 = *(uint32_t*)&alloca5;
					}
					alloca1.field5 = (__zext uint16_t)((uint16_t)phi107 < 4096) + phi106 + phi76 + (phi67 + phi58 + phi61 + phi64 << 4 | phi74) + phi78 + phi79 + phi89 + phi91 + phi93 + phi94 + phi103 + phi105;
					alloca5 = 0;
					alloca5 = (__zext uint64_t)printf((uint8_t*)0x400eb3);
					break;
				}
			}
			alloca1.field1 = 0;
			uint32_t anon108 = (uint32_t)phi47;
			if (anon108 != 0)
			{
				uint16_t phi229;
				uint64_t anon109 = (__zext uint64_t)alloca1.field4;
				alloca5 = anon109;
				phi_in110 = anon13;
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
					uint16_t phi_in148;
					uint64_t phi150;
					uint8_t phi151;
					uint16_t phi152;
					uint16_t phi163;
					uint64_t phi178;
					uint16_t phi_in180;
					uint16_t phi_in181;
					uint64_t phi183;
					uint64_t phi184;
					uint8_t phi185;
					uint16_t phi186;
					uint16_t phi196;
					uint64_t phi212;
					uint32_t phi214;
					uint64_t phi216;
					uint16_t phi217;
					uint64_t phi219;
					uint8_t phi220;
					uint16_t phi221;
					uint64_t phi222;
					uint32_t phi_in224;
					uint32_t phi225;
					uint16_t phi226;
					uint64_t anon231;
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
					uint16_t phi_in121 = phi118;
					uint64_t phi122 = phi115;
					uint16_t phi123 = phi117;
					uint16_t phi124 = phi117 ^ *(uint16_t*)phi112;
					uint16_t phi125 = phi_in121;
					if (phi120 < 16)
					{
						uint64_t anon126 = phi115 & 0xff00 | (__zext uint64_t)(phi117 & 0xf | 0xf0);
						phi122 = anon126;
						uint16_t anon127 = (uint16_t)anon126;
						phi123 = anon127;
						phi124 = *(uint16_t*)phi112 ^ anon127;
						phi125 = phi119;
					}
					uint16_t phi128 = phi123;
					uint16_t phi129 = phi124;
					uint64_t phi130 = phi122;
					uint16_t phi131 = 0;
					if ((phi129 & 0xf00) == 0)
					{
						uint64_t anon132 = phi122 & 0xffffffffffff00ff | (__zext uint64_t)(phi117 & 0xf000 | 0xf00);
						phi130 = anon132;
						uint16_t anon133 = (uint16_t)anon132;
						phi128 = anon133;
						phi129 = *(uint16_t*)phi112 ^ anon133;
						phi131 = 256;
					}
					uint64_t phi134 = phi130;
					uint16_t phi135 = 0;
					if (phi129 < 4096)
					{
						uint16_t anon136 = phi128 | 0xf000;
						phi134 = phi134 & 0xffffffffffff0000 | (__zext uint64_t)anon136;
						phi135 = 256;
						phi128 = anon136;
					}
					uint32_t anon138 = (__zext uint32_t)*(uint16_t*)phi112;
					uint16_t anon143 = phi128 << 4;
					uint16_t anon142 = phi128 >> 12 | anon143;
					uint64_t anon141 = (__zext uint64_t)anon142;
					uint64_t anon140 = phi134 & 0xffffffffffff0000 | anon141;
					uint32_t anon139 = (uint32_t)anon140;
					uint32_t anon137 = (anon138 ^ anon139) >> 8;
					if ((anon137 & 0xf) == 0)
					{
						uint32_t anon145 = anon139 | 0xf;
						phi144 = (__zext uint64_t)anon145;
						phi146 = anon140 >> 8 & 0xffffff;
						phi147 = (uint16_t)anon145;
						uint16_t anon149 = anon143 | 0xf;
						phi_in148 = anon149;
						phi150 = (__zext uint64_t)anon149;
						phi151 = (uint8_t)anon137;
						phi152 = 256;
					}
					else 
					{
						phi144 = anon140;
						phi146 = (__zext uint64_t)(phi128 >> 4);
						phi147 = anon142;
						phi_in148 = anon142;
						phi150 = anon141;
						phi151 = (uint8_t)anon137 & 0xf;
						phi152 = 0;
					}
					uint16_t phi_in153 = phi147;
					uint64_t phi154 = phi144;
					uint16_t phi155 = phi_in153;
					uint16_t phi156 = phi_in148;
					uint16_t phi157 = 0;
					if (phi151 < 16)
					{
						uint64_t anon158 = phi144 & 0xffffffffffffff00 | phi150 & 0xf | 0xf0;
						phi154 = anon158;
						uint16_t anon159 = (uint16_t)anon158;
						phi155 = anon159;
						phi156 = anon159;
						phi157 = 256;
					}
					uint16_t phi_in160 = phi155;
					uint64_t phi161 = phi154;
					uint16_t phi162 = phi_in160;
					uint16_t anon164 = *(uint16_t*)phi112 ^ phi156;
					phi163 = anon164;
					uint16_t phi165 = 0;
					if ((anon164 & 0xf00) == 0)
					{
						uint64_t anon166 = phi154 & 0xffffffffffff00ff | phi146 << 8 & 0xf000 | 0xf00;
						phi161 = anon166;
						uint16_t anon167 = (uint16_t)anon166;
						phi162 = anon167;
						phi163 = *(uint16_t*)phi112 ^ anon167;
						phi165 = 256;
					}
					uint64_t phi168 = phi161;
					uint16_t phi169 = phi162;
					uint16_t phi170 = 0;
					if (phi163 < 4096)
					{
						uint16_t anon171 = phi169 | 0xf000;
						phi168 = phi168 & 0xffffffffffff0000 | (__zext uint64_t)anon171;
						phi170 = 256;
						phi169 = anon171;
					}
					uint16_t anon177 = phi169 << 4;
					uint16_t anon176 = phi169 >> 12 | anon177;
					uint64_t anon175 = (__zext uint64_t)anon176;
					uint64_t anon174 = phi168 & 0xffffffffffff0000 | anon175;
					uint32_t anon173 = (uint32_t)anon174;
					uint32_t anon172 = (anon138 ^ anon173) >> 8;
					if ((anon172 & 0xf) == 0)
					{
						uint32_t anon179 = anon173 | 0xf;
						phi178 = (__zext uint64_t)anon179;
						phi_in180 = (uint16_t)anon179;
						uint16_t anon182 = anon177 | 0xf;
						phi_in181 = anon182;
						phi183 = anon174 >> 8 & 0xffffff;
						phi184 = (__zext uint64_t)anon182;
						phi185 = (uint8_t)anon172;
						phi186 = 256;
					}
					else 
					{
						phi178 = anon174;
						phi_in180 = anon176;
						phi_in181 = anon176;
						phi183 = (__zext uint64_t)(phi169 >> 4);
						phi184 = anon175;
						phi185 = (uint8_t)anon172 & 0xf;
						phi186 = 0;
					}
					uint64_t phi187 = phi178;
					uint16_t phi188 = phi_in180;
					uint16_t phi189 = phi_in181;
					uint16_t phi190 = 0;
					if (phi185 < 16)
					{
						uint64_t anon191 = phi178 & 0xffffffffffffff00 | phi184 & 0xf | 0xf0;
						phi187 = anon191;
						uint16_t anon192 = (uint16_t)anon191;
						phi188 = anon192;
						phi189 = anon192;
						phi190 = 256;
					}
					uint16_t phi_in193 = phi188;
					uint64_t phi194 = phi187;
					uint16_t phi195 = phi_in193;
					uint16_t anon197 = *(uint16_t*)phi112 ^ phi189;
					phi196 = anon197;
					uint16_t phi198 = 0;
					if ((anon197 & 0xf00) == 0)
					{
						uint64_t anon199 = phi187 & 0xffffffffffff00ff | phi183 << 8 & 0xf000 | 0xf00;
						phi194 = anon199;
						uint16_t anon200 = (uint16_t)anon199;
						phi195 = anon200;
						phi196 = *(uint16_t*)phi112 ^ anon200;
						phi198 = 256;
					}
					uint64_t phi201 = phi194;
					uint16_t phi202 = 0;
					uint16_t phi203 = phi195;
					if (phi196 < 4096)
					{
						uint16_t anon204 = phi195 | 0xf000;
						phi201 = phi194 & 0xffffffffffff0000 | (__zext uint64_t)anon204;
						phi202 = 256;
						phi203 = anon204;
					}
					uint16_t anon211 = phi203 << 4;
					uint16_t anon210 = phi203 >> 12 | anon211;
					uint64_t anon209 = (__zext uint64_t)anon210;
					uint64_t anon208 = phi201 & 0xffffffffffff0000 | anon209;
					uint32_t anon207 = (uint32_t)anon208;
					uint32_t anon206 = anon138 ^ anon207;
					uint32_t anon205 = anon206 >> 8;
					if ((anon205 & 0xf) == 0)
					{
						uint32_t anon213 = anon207 | 0xf;
						phi212 = (__zext uint64_t)anon213;
						uint32_t anon215 = anon138 ^ anon213;
						phi214 = anon215;
						phi216 = anon208 >> 8 & 0xffffff;
						uint16_t anon218 = anon211 | 0xf;
						phi217 = anon218;
						phi219 = (__zext uint64_t)anon218;
						phi220 = (uint8_t)(anon215 >> 8);
						phi221 = 256;
					}
					else 
					{
						phi212 = anon208;
						phi214 = anon206;
						phi216 = (__zext uint64_t)(phi203 >> 4);
						phi217 = anon210;
						phi219 = anon209;
						phi220 = (uint8_t)anon205 & 0xf;
						phi221 = 0;
					}
					if (phi220 < 16)
					{
						uint64_t anon223 = phi212 & 0xffffffffffffff00 | phi219 & 0xf | 0xf0;
						phi222 = anon223;
						phi_in224 = (__zext uint32_t)(*(uint16_t*)phi112 ^ (uint16_t)anon223);
						phi225 = anon138 ^ (uint32_t)anon223;
						phi226 = 256;
					}
					else 
					{
						phi222 = phi212;
						phi_in224 = phi214;
						phi225 = (__zext uint32_t)(*(uint16_t*)phi112 ^ phi217);
						phi226 = 0;
					}
					uint32_t phi227 = phi_in224;
					uint16_t phi228 = 0;
					if ((phi225 & 0xf00) == 0)
					{
						phi227 = anon138 ^ (uint32_t)(phi222 & 0xffff00ff | phi216 << 8 & 0xf000 | 0xf00);
						phi228 = 256;
					}
					if ((__zext uint16_t)((uint16_t)phi227 < 4096) + phi198 + phi190 + phi170 + phi165 + (phi135 + phi131 + phi125 << 4) + phi152 + phi157 + phi186 + phi202 + phi221 + phi226 + phi228 == *(uint16_t*)(arg1 - 66))
					{
						*(uint16_t*)(anon13 + (phi111 << 1 & 0x1fffe)) = *(uint16_t*)phi112;
						phi229 = (uint16_t)phi111 + 1;
						anon230 = phi112 + 2;
						uint64_t anon232 = phi47 + 4294967295 & 0xffffffff;
						anon231 = anon232 + anon232 + 2 + anon13;
						if (anon230 != anon231)
						{
							break;
						}
					}
					else 
					{
						phi_in110 = anon230;
						phi111 = phi111;
						if (anon230 == anon231)
						{
							phi229 = (uint16_t)phi111;
						}
					}
				}
				alloca1.field1 = anon108;
				uint16_t* anon233 = (uint16_t*)phi16;
				*anon233 = *anon233;
				if (!(phi229 == 0 | *(uint16_t*)(arg1 - 66) == 64))
				{
					alloca5 = 0;
					uint64_t anon234 = (__zext uint64_t)phi229;
					alloca5 = (__zext uint64_t)*(uint16_t*)(anon13 + ((__sext int64_t)rand() % anon234 << 32 >> 31));
					alloca1.field4 = *(uint16_t*)(anon13 + ((__sext int64_t)rand() % anon234 << 32 >> 31));
					phi47 = anon234;
				}
			}
			phi_in110 = anon230;
			phi111 = phi111 + 1 & 0xffffffff;
			break;
		}
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
