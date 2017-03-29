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
	if (alloca1.field1 != 2 || anon7 == 0 || anon7 != 0 && alloca1.field1 == 0)
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
		uint32_t anon106;
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
		uint64_t phi_in44 = phi18;
		uint64_t anon45 = (uint64_t)&alloca1.field4;
		alloca5 = anon45;
		alloca5 = 0;
		alloca5 = (__zext uint64_t)*(uint16_t*)(anon12 + ((__sext int64_t)rand() % (__zext uint64_t)phi17 << 32 >> 31));
		uint8_t** anon46 = (uint8_t**)arg3;
		*(uint16_t*)(**anon46 == 0 ? phi16 : anon45) = *(uint16_t*)(anon12 + ((__sext int64_t)rand() % (__zext uint64_t)phi17 << 32 >> 31));
		uint64_t phi47 = phi_in44;
		do
		{
			while (true)
			{
				alloca5 = 0;
				alloca5 = (__zext uint64_t)printf((uint8_t*)0x400e95);
				uint8_t* anon48 = (uint8_t*)arg3;
				*(uint8_t*)&alloca5 = *anon48;
				uint8_t anon49 = anon48[1];
				((uint8_t*)&alloca5)[1] = anon49;
				uint48_t* anon50 = (uint48_t*)&anon48[2];
				*(uint48_t*)&((uint8_t*)&alloca5)[2] = *anon50;
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
						*(uint8_t*)&alloca5 = *anon48;
						((uint8_t*)&alloca5)[1] = anon49;
						*(uint48_t*)&((uint8_t*)&alloca5)[2] = *anon50;
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
					*(uint8_t*)&alloca5 = *anon48;
					((uint8_t*)&alloca5)[1] = anon49;
					*(uint48_t*)&((uint8_t*)&alloca5)[2] = *anon50;
				}
				if (**anon46 == 0 && **anon46 == 0 || **anon46 != 0 && **anon46 == 0 && **anon46 == 0 || **anon46 != 0 && **anon46 != 0)
				{
					alloca5 = 0;
					alloca5 = (__zext uint64_t)printf((uint8_t*)0x400eae);
					*(uint8_t*)&alloca5 = *anon48;
					((uint8_t*)&alloca5)[1] = anon49;
					*(uint48_t*)&((uint8_t*)&alloca5)[2] = *anon50;
				}
				if (**anon46 == 0)
				{
					if (**anon46 == 0 && **anon46 == 0 || **anon46 != 0 && **anon46 == 0 && **anon46 == 0 || **anon46 != 0 && **anon46 != 0)
					{
						uint32_t anon52;
						uint32_t phi53;
						uint8_t phi54;
						uint16_t phi55;
						uint8_t phi66;
						uint32_t phi67;
						uint32_t phi68;
						uint16_t phi69;
						uint16_t phi76;
						uint32_t phi82;
						uint8_t phi83;
						uint32_t phi84;
						uint16_t phi85;
						uint16_t phi92;
						uint32_t phi97;
						uint8_t phi98;
						uint32_t phi99;
						uint16_t phi100;
						alloca5 = (__zext uint64_t)alloca1.field4;
						if (((alloca1.field4 ^ *(uint16_t*)phi16) & 0xf) == 0)
						{
							anon52 = (__zext uint32_t)alloca1.field4;
							uint32_t anon51 = anon52 | 0xf;
							alloca5 = (__zext uint64_t)anon51;
							alloca1.field4 = (uint16_t)anon51;
							phi53 = anon51;
							phi54 = (uint8_t)anon51;
							phi55 = 1;
						}
						else 
						{
							alloca1.field4 = alloca1.field4;
							phi53 = anon52;
							phi54 = (uint8_t)alloca1.field4 & 0xf;
							phi55 = 0;
						}
						uint16_t phi_in56 = alloca1.field4;
						uint16_t phi57 = phi_in56;
						uint16_t phi58 = 0;
						if (((uint8_t)*(uint16_t*)phi16 ^ (uint8_t)phi53) < 16)
						{
							*(uint8_t*)&alloca5 = phi54 | 0xf0;
							phi57 = (uint16_t)*(uint32_t*)&alloca5;
							phi53 = *(uint32_t*)&alloca5;
							phi58 = 1;
						}
						uint16_t phi59 = phi57;
						uint16_t phi60 = 0;
						uint32_t anon61 = (__zext uint32_t)*(uint16_t*)phi16;
						if (((anon61 ^ phi53) & 0xf00) == 0)
						{
							((uint8_t*)&alloca5)[1] = (uint8_t)(alloca1.field4 >> 8) | 0xf;
							phi59 = (uint16_t)*(uint32_t*)&alloca5;
							phi60 = 1;
							phi53 = *(uint32_t*)&alloca5;
						}
						uint16_t phi62 = 0;
						if ((*(uint16_t*)phi16 ^ (uint16_t)phi53) < 4096)
						{
							uint16_t anon63 = phi59 | 0xf000;
							*(uint16_t*)&alloca5 = anon63;
							phi62 = 1;
							phi59 = anon63;
						}
						uint16_t* anon64 = (uint16_t*)&alloca5;
						*anon64 = phi59 >> 12 | phi59 << 4;
						if (((anon61 ^ *(uint32_t*)&alloca5) & 0xf) == 0)
						{
							uint32_t anon65 = *(uint32_t*)&alloca5 | 0xf;
							alloca5 = (__zext uint64_t)anon65;
							phi66 = (uint8_t)(*(uint32_t*)&alloca5 >> 8);
							phi67 = anon65;
							phi68 = anon65;
							phi69 = 1;
						}
						else 
						{
							phi66 = (uint8_t)(phi59 >> 4);
							phi67 = *(uint32_t*)&alloca5;
							phi68 = *(uint32_t*)&alloca5 & 0xf;
							phi69 = 0;
						}
						uint32_t phi_in70 = phi67;
						uint32_t phi71 = phi_in70;
						uint16_t phi72 = 0;
						if ((phi_in70 & 0xf0) == 0)
						{
							*(uint8_t*)&alloca5 = (uint8_t)phi68 | 0xf0;
							phi71 = *(uint32_t*)&alloca5;
							phi72 = 1;
						}
						uint32_t phi73 = phi71;
						uint16_t phi74 = 0;
						if ((phi73 & 0xf00) == 0)
						{
							((uint8_t*)&alloca5)[1] = phi66 | 0xf;
							phi73 = *(uint32_t*)&alloca5;
							phi74 = 1;
						}
						uint16_t phi75 = 0;
						uint16_t anon77 = (uint16_t)phi73;
						phi76 = anon77;
						if ((uint16_t)phi73 < 4096)
						{
							uint16_t anon78 = anon77 | 0xf000;
							*anon64 = anon78;
							phi75 = 1;
							phi76 = anon78;
						}
						*anon64 = phi76 >> 12 | phi76 << 4;
						uint32_t anon79 = (__zext uint32_t)(*(uint16_t*)phi16 & 0xf);
						uint32_t anon80 = *(uint32_t*)&alloca5 & 0xf;
						if (anon79 == anon80)
						{
							uint32_t anon81 = *(uint32_t*)&alloca5 | 0xf;
							alloca5 = (__zext uint64_t)anon81;
							phi82 = anon81;
							phi83 = (uint8_t)(*(uint32_t*)&alloca5 >> 8);
							phi84 = anon81;
							phi85 = 1;
						}
						else 
						{
							phi82 = *(uint32_t*)&alloca5;
							phi83 = (uint8_t)(phi76 >> 4);
							phi84 = anon80;
							phi85 = 0;
						}
						uint32_t phi_in86 = phi82;
						uint32_t phi87 = phi_in86;
						uint16_t phi88 = 0;
						if ((phi_in86 & 0xf0) == 0)
						{
							*(uint8_t*)&alloca5 = (uint8_t)phi84 | 0xf0;
							phi87 = *(uint32_t*)&alloca5;
							phi88 = 1;
						}
						uint32_t phi89 = phi87;
						uint16_t phi90 = 0;
						if ((phi89 & 0xf00) == 0)
						{
							((uint8_t*)&alloca5)[1] = phi83 | 0xf;
							phi89 = *(uint32_t*)&alloca5;
							phi90 = 1;
						}
						uint16_t phi91 = 0;
						uint16_t anon93 = (uint16_t)phi89;
						phi92 = anon93;
						if ((uint16_t)phi89 < 4096)
						{
							uint16_t anon94 = anon93 | 0xf000;
							*anon64 = anon94;
							phi91 = 1;
							phi92 = anon94;
						}
						*anon64 = phi92 >> 12 | phi92 << 4;
						uint32_t anon95 = *(uint32_t*)&alloca5 & 0xf;
						if (anon79 == anon95)
						{
							uint32_t anon96 = *(uint32_t*)&alloca5 | 0xf;
							alloca5 = (__zext uint64_t)anon96;
							phi97 = anon96;
							phi98 = (uint8_t)(*(uint32_t*)&alloca5 >> 8);
							phi99 = anon96;
							phi100 = 1;
						}
						else 
						{
							phi97 = *(uint32_t*)&alloca5;
							phi98 = (uint8_t)(phi92 >> 4);
							phi99 = anon95;
							phi100 = 0;
						}
						uint32_t phi101 = phi97;
						uint16_t phi102 = 0;
						if ((phi101 & 0xf0) == 0)
						{
							*(uint8_t*)&alloca5 = (uint8_t)phi99 | 0xf0;
							phi101 = *(uint32_t*)&alloca5;
							phi102 = 1;
						}
						uint32_t phi_in103 = phi101;
						uint16_t phi104 = 0;
						uint32_t phi105 = phi_in103;
						if ((phi_in103 & 0xf00) == 0)
						{
							((uint8_t*)&alloca5)[1] = phi98 | 0xf;
							phi104 = 1;
							phi105 = *(uint32_t*)&alloca5;
						}
						alloca1.field5 = (__zext uint16_t)((uint16_t)phi105 < 4096) + phi104 + phi72 + (phi62 + phi55 + phi58 + phi60 << 4 | phi69) + phi74 + phi75 + phi85 + phi88 + phi90 + phi91 + phi100 + phi102;
						alloca5 = 0;
						alloca5 = (__zext uint64_t)printf((uint8_t*)0x400eb3);
						break;
					}
				}
			}
			alloca1.field1 = 0;
			anon106 = (uint32_t)phi47;
			if (anon106 != 0)
			{
				uint16_t phi228;
				uint64_t anon107 = (__zext uint64_t)alloca1.field4;
				alloca5 = anon107;
				uint64_t phi_in108 = anon12;
				uint64_t phi109 = 0;
				while (true)
				{
					uint64_t phi_in113;
					uint16_t phi115;
					uint16_t phi_in116;
					uint16_t phi117;
					uint8_t phi118;
					uint64_t phi141;
					uint64_t phi143;
					uint16_t phi144;
					uint16_t phi145;
					uint64_t phi147;
					uint8_t phi148;
					uint16_t phi149;
					uint16_t phi161;
					uint64_t phi_in177;
					uint16_t phi_in179;
					uint16_t phi_in180;
					uint64_t phi182;
					uint64_t phi183;
					uint8_t phi184;
					uint16_t phi185;
					uint16_t phi193;
					uint64_t phi_in211;
					uint32_t phi213;
					uint64_t phi215;
					uint16_t phi216;
					uint64_t phi218;
					uint8_t phi219;
					uint16_t phi220;
					uint64_t phi222;
					uint32_t phi224;
					uint16_t phi225;
					uint64_t anon229;
					uint64_t anon230;
					uint64_t phi110 = phi_in108;
					uint16_t anon112 = alloca1.field4 ^ *(uint16_t*)phi110;
					uint32_t anon111 = (__zext uint32_t)anon112 >> 8;
					if ((anon111 & 0xf) == 0)
					{
						uint16_t anon114 = alloca1.field4 | 0xf;
						phi_in113 = (__zext uint64_t)anon114;
						phi115 = anon114;
						phi_in116 = 1;
						phi117 = 2;
						phi118 = (uint8_t)(anon112 >> 8);
					}
					else 
					{
						phi_in113 = anon107;
						phi115 = alloca1.field4;
						phi_in116 = 0;
						phi117 = 1;
						phi118 = (uint8_t)anon111 & 0xf;
					}
					uint16_t phi119 = phi115;
					phi_in116 = phi117;
					uint64_t phi_in120 = phi_in113;
					uint16_t phi121 = phi119 ^ *(uint16_t*)phi110;
					uint16_t phi122 = phi_in116;
					if (phi118 < 16)
					{
						uint64_t anon123 = phi_in113 & 0xff00 | (__zext uint64_t)(phi119 & 0xf | 0xf0);
						phi_in120 = anon123;
						uint16_t anon124 = (uint16_t)anon123;
						phi119 = anon124;
						phi121 = *(uint16_t*)phi110 ^ anon124;
						phi122 = phi_in116;
					}
					uint16_t phi_in125 = phi119;
					uint64_t phi_in126 = phi_in120;
					uint16_t phi127 = 0;
					if ((phi121 & 0xf00) == 0)
					{
						uint64_t anon128 = phi_in120 & 0xffffffffffff00ff | (__zext uint64_t)(phi119 & 0xf000 | 0xf00);
						phi_in126 = anon128;
						uint16_t anon129 = (uint16_t)anon128;
						phi_in125 = anon129;
						phi121 = *(uint16_t*)phi110 ^ anon129;
						phi127 = 256;
					}
					uint64_t phi130 = phi_in126;
					uint16_t phi131 = 0;
					uint16_t phi132 = phi_in125;
					if (phi121 < 4096)
					{
						uint16_t anon133 = phi_in125 | 0xf000;
						phi130 = phi_in126 & 0xffffffffffff0000 | (__zext uint64_t)anon133;
						phi131 = 256;
						phi132 = anon133;
					}
					uint32_t anon135 = (__zext uint32_t)*(uint16_t*)phi110;
					uint16_t anon140 = phi132 << 4;
					uint16_t anon139 = phi132 >> 12 | anon140;
					uint64_t anon138 = (__zext uint64_t)anon139;
					uint64_t anon137 = phi130 & 0xffffffffffff0000 | anon138;
					uint32_t anon136 = (uint32_t)anon137;
					uint32_t anon134 = (anon135 ^ anon136) >> 8;
					if ((anon134 & 0xf) == 0)
					{
						uint32_t anon142 = anon136 | 0xf;
						phi141 = (__zext uint64_t)anon142;
						phi143 = anon137 >> 8 & 0xffffff;
						phi144 = (uint16_t)anon142;
						uint16_t anon146 = anon140 | 0xf;
						phi145 = anon146;
						phi147 = (__zext uint64_t)anon146;
						phi148 = (uint8_t)anon134;
						phi149 = 256;
					}
					else 
					{
						phi141 = anon137;
						phi143 = (__zext uint64_t)(phi132 >> 4);
						phi144 = anon139;
						phi145 = anon139;
						phi147 = anon138;
						phi148 = (uint8_t)anon134 & 0xf;
						phi149 = 0;
					}
					uint64_t phi_in150 = phi141;
					uint16_t phi151 = phi144;
					uint16_t phi_in152 = phi145;
					uint64_t phi153 = phi_in150;
					uint16_t phi154 = phi_in152;
					uint16_t phi155 = 0;
					if (phi148 < 16)
					{
						uint64_t anon156 = phi_in150 & 0xffffffffffffff00 | phi147 & 0xf | 0xf0;
						phi153 = anon156;
						uint16_t anon157 = (uint16_t)anon156;
						phi151 = anon157;
						phi154 = anon157;
						phi155 = 256;
					}
					uint64_t phi_in158 = phi153;
					uint16_t phi159 = phi151;
					uint64_t phi160 = phi_in158;
					uint16_t anon162 = *(uint16_t*)phi110 ^ phi154;
					phi161 = anon162;
					uint16_t phi163 = 0;
					if ((anon162 & 0xf00) == 0)
					{
						uint64_t anon164 = phi_in158 & 0xffffffffffff00ff | phi143 << 8 & 0xf000 | 0xf00;
						phi160 = anon164;
						uint16_t anon165 = (uint16_t)anon164;
						phi159 = anon165;
						phi161 = *(uint16_t*)phi110 ^ anon165;
						phi163 = 256;
					}
					uint64_t phi166 = phi160;
					uint16_t phi_in167 = phi159;
					uint16_t phi168 = 0;
					uint16_t phi169 = phi_in167;
					if (phi161 < 4096)
					{
						uint16_t anon170 = phi_in167 | 0xf000;
						phi166 = phi166 & 0xffffffffffff0000 | (__zext uint64_t)anon170;
						phi168 = 256;
						phi169 = anon170;
					}
					uint16_t anon176 = phi169 << 4;
					uint16_t anon175 = phi169 >> 12 | anon176;
					uint64_t anon174 = (__zext uint64_t)anon175;
					uint64_t anon173 = phi166 & 0xffffffffffff0000 | anon174;
					uint32_t anon172 = (uint32_t)anon173;
					uint32_t anon171 = (anon135 ^ anon172) >> 8;
					if ((anon171 & 0xf) == 0)
					{
						uint32_t anon178 = anon172 | 0xf;
						phi_in177 = (__zext uint64_t)anon178;
						phi_in179 = (uint16_t)anon178;
						uint16_t anon181 = anon176 | 0xf;
						phi_in180 = anon181;
						phi182 = anon173 >> 8 & 0xffffff;
						phi183 = (__zext uint64_t)anon181;
						phi184 = (uint8_t)anon171;
						phi185 = 256;
					}
					else 
					{
						phi_in177 = anon173;
						phi_in179 = anon175;
						phi_in180 = anon175;
						phi182 = (__zext uint64_t)(phi169 >> 4);
						phi183 = anon174;
						phi184 = (uint8_t)anon171 & 0xf;
						phi185 = 0;
					}
					uint64_t phi_in186 = phi_in177;
					uint16_t phi187 = phi_in179;
					uint16_t phi188 = phi_in180;
					uint16_t phi189 = 0;
					if (phi184 < 16)
					{
						uint64_t anon190 = phi_in177 & 0xffffffffffffff00 | phi183 & 0xf | 0xf0;
						phi_in186 = anon190;
						uint16_t anon191 = (uint16_t)anon190;
						phi187 = anon191;
						phi188 = anon191;
						phi189 = 256;
					}
					uint64_t phi192 = phi_in186;
					uint16_t anon194 = *(uint16_t*)phi110 ^ phi188;
					phi193 = anon194;
					uint16_t phi195 = 0;
					if ((anon194 & 0xf00) == 0)
					{
						uint64_t anon196 = phi_in186 & 0xffffffffffff00ff | phi182 << 8 & 0xf000 | 0xf00;
						phi192 = anon196;
						uint16_t anon197 = (uint16_t)anon196;
						phi187 = anon197;
						phi193 = *(uint16_t*)phi110 ^ anon197;
						phi195 = 256;
					}
					uint64_t phi_in198 = phi192;
					uint16_t phi_in199 = phi187;
					uint64_t phi200 = phi_in198;
					uint16_t phi201 = 0;
					uint16_t phi202 = phi_in199;
					if (phi193 < 4096)
					{
						uint16_t anon203 = phi_in199 | 0xf000;
						phi200 = phi_in198 & 0xffffffffffff0000 | (__zext uint64_t)anon203;
						phi201 = 256;
						phi202 = anon203;
					}
					uint16_t anon210 = phi202 << 4;
					uint16_t anon209 = phi202 >> 12 | anon210;
					uint64_t anon208 = (__zext uint64_t)anon209;
					uint64_t anon207 = phi200 & 0xffffffffffff0000 | anon208;
					uint32_t anon206 = (uint32_t)anon207;
					uint32_t anon205 = anon135 ^ anon206;
					uint32_t anon204 = anon205 >> 8;
					if ((anon204 & 0xf) == 0)
					{
						uint32_t anon212 = anon206 | 0xf;
						phi_in211 = (__zext uint64_t)anon212;
						uint32_t anon214 = anon135 ^ anon212;
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
						phi_in211 = anon207;
						phi213 = anon205;
						phi215 = (__zext uint64_t)(phi202 >> 4);
						phi216 = anon209;
						phi218 = anon208;
						phi219 = (uint8_t)anon204 & 0xf;
						phi220 = 0;
					}
					uint32_t phi221 = phi213;
					if (phi219 < 16)
					{
						uint64_t anon223 = phi_in211 & 0xffffffffffffff00 | phi218 & 0xf | 0xf0;
						phi222 = anon223;
						phi221 = (__zext uint32_t)(*(uint16_t*)phi110 ^ (uint16_t)anon223);
						phi224 = anon135 ^ (uint32_t)anon223;
						phi225 = 256;
					}
					else 
					{
						phi222 = phi_in211;
						phi224 = (__zext uint32_t)(*(uint16_t*)phi110 ^ phi216);
						phi225 = 0;
					}
					uint32_t phi226 = phi221;
					uint16_t phi227 = 0;
					if ((phi224 & 0xf00) == 0)
					{
						phi226 = anon135 ^ (uint32_t)(phi222 & 0xffff00ff | phi215 << 8 & 0xf000 | 0xf00);
						phi227 = 256;
					}
					if ((__zext uint16_t)((uint16_t)phi226 < 4096) + phi195 + phi189 + phi168 + phi163 + (phi131 + phi127 + phi122 << 4) + phi149 + phi155 + phi185 + phi201 + phi220 + phi225 + phi227 == *(uint16_t*)(arg1 - 66))
					{
						*(uint16_t*)(anon12 + (phi109 << 1 & 0x1fffe)) = *(uint16_t*)phi110;
						phi228 = (uint16_t)phi109 + 1;
						anon229 = phi110 + 2;
						uint64_t anon231 = phi47 + 4294967295 & 0xffffffff;
						anon230 = anon231 + anon231 + 2 + anon12;
						if (anon229 == anon230)
						{
							break;
						}
						else 
						{
							phi_in108 = anon229;
							phi109 = phi109 + 1 & 0xffffffff;
						}
					}
					else 
					{
						phi_in108 = anon229;
						phi109 = phi109;
						if (anon229 == anon230)
						{
							phi228 = (uint16_t)phi109;
							break;
						}
					}
				}
				alloca1.field1 = anon106;
				uint16_t* anon232 = (uint16_t*)phi16;
				*anon232 = *anon232;
				if (phi228 == 0 | *(uint16_t*)(arg1 - 66) == 64)
				{
					break;
				}
				else 
				{
					alloca5 = 0;
					uint64_t anon233 = (__zext uint64_t)phi228;
					alloca5 = (__zext uint64_t)*(uint16_t*)(anon12 + ((__sext int64_t)rand() % anon233 << 32 >> 31));
					alloca1.field4 = *(uint16_t*)(anon12 + ((__sext int64_t)rand() % anon233 << 32 >> 31));
					phi47 = anon233;
				}
			}
		}
		while (anon106 != 0);
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
