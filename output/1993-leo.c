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
	uint32_t phi10;
	uint64_t phi11;
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
				phi10 = alloca1.field1;
				phi11 = (__sext int64_t)anon8;
			}
		}
	}
	if (alloca1.field1 != 2 || alloca1.field1 == 2 && anon7 == 0 || alloca1.field1 == 2 && anon7 != 0 && alloca1.field1 == 0)
	{
		alloca1.field1 = 6;
		phi10 = 6;
		phi11 = 1296;
	}
	uint8_t* anon13 = calloc(phi11, 2);
	uint64_t anon12 = (uint64_t)anon13;
	alloca5 = anon12;
	if (anon13 != null)
	{
		uint64_t phi16;
		uint32_t phi17;
		uint64_t phi_in18;
		uint32_t anon15 = phi10 * phi10;
		uint32_t anon14 = anon15 * anon15;
		if (anon14 < 2)
		{
			phi16 = (uint64_t)&alloca1.field3;
			phi17 = 1;
			phi_in18 = 1;
		}
		else 
		{
			uint64_t anon27;
			bool anon39;
			uint32_t anon43;
			uint64_t anon21 = (__zext uint64_t)phi10;
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
				if (((phi10 ^ anon29) & 0xf) == 0)
				{
					uint32_t anon32 = 16 - phi10;
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
							uint16_t anon38 = (uint16_t)phi10 << 12;
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
			phi_in18 = (__zext uint64_t)anon43;
		}
		uint64_t anon44 = (uint64_t)&alloca1.field4;
		alloca5 = anon44;
		alloca5 = 0;
		alloca5 = (__zext uint64_t)*(uint16_t*)(anon12 + ((__sext int64_t)rand() % (__zext uint64_t)phi17 << 32 >> 31));
		uint8_t** anon45 = (uint8_t**)arg3;
		*(uint16_t*)(**anon45 == 0 ? phi16 : anon44) = *(uint16_t*)(anon12 + ((__sext int64_t)rand() % (__zext uint64_t)phi17 << 32 >> 31));
		uint64_t phi46 = phi_in18;
		while (true)
		{
			uint64_t phi_in109;
			uint64_t phi110;
			uint64_t anon231;
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
				if (**anon45 == 0)
				{
					if (**anon45 != 0)
					{
						alloca5 = 0;
						alloca5 = (__zext uint64_t)scanf((uint8_t*)0x400eaa);
						*(uint8_t*)&alloca5 = *anon47;
						((uint8_t*)&alloca5)[1] = anon48;
						*(uint48_t*)&((uint8_t*)&alloca5)[2] = *anon49;
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
					*(uint8_t*)&alloca5 = *anon47;
					((uint8_t*)&alloca5)[1] = anon48;
					*(uint48_t*)&((uint8_t*)&alloca5)[2] = *anon49;
				}
				if (**anon45 == 0 && **anon45 == 0 || **anon45 != 0 && **anon45 == 0 && **anon45 == 0 || **anon45 != 0 && **anon45 != 0)
				{
					alloca5 = 0;
					alloca5 = (__zext uint64_t)printf((uint8_t*)0x400eae);
					*(uint8_t*)&alloca5 = *anon47;
					((uint8_t*)&alloca5)[1] = anon48;
					*(uint48_t*)&((uint8_t*)&alloca5)[2] = *anon49;
				}
				if (**anon45 == 0)
				{
					if (**anon45 == 0 && **anon45 == 0 || **anon45 != 0 && **anon45 == 0 && **anon45 == 0 || **anon45 != 0 && **anon45 != 0)
					{
						uint32_t anon51;
						uint32_t phi_in52;
						uint8_t phi53;
						uint16_t phi54;
						uint8_t phi68;
						uint32_t phi69;
						uint32_t phi70;
						uint16_t phi71;
						uint16_t phi77;
						uint32_t phi_in83;
						uint8_t phi84;
						uint32_t phi85;
						uint16_t phi86;
						uint16_t phi93;
						uint32_t phi98;
						uint8_t phi99;
						uint32_t phi100;
						uint16_t phi101;
						alloca5 = (__zext uint64_t)alloca1.field4;
						if (((alloca1.field4 ^ *(uint16_t*)phi16) & 0xf) == 0)
						{
							anon51 = (__zext uint32_t)alloca1.field4;
							uint32_t anon50 = anon51 | 0xf;
							alloca5 = (__zext uint64_t)anon50;
							alloca1.field4 = (uint16_t)anon50;
							phi_in52 = anon50;
							phi53 = (uint8_t)anon50;
							phi54 = 1;
						}
						else 
						{
							alloca1.field4 = alloca1.field4;
							phi_in52 = anon51;
							phi53 = (uint8_t)alloca1.field4 & 0xf;
							phi54 = 0;
						}
						uint16_t phi_in55 = alloca1.field4;
						uint16_t phi56 = phi_in55;
						uint32_t phi_in57 = phi_in52;
						uint16_t phi58 = 0;
						if (((uint8_t)*(uint16_t*)phi16 ^ (uint8_t)phi_in52) < 16)
						{
							*(uint8_t*)&alloca5 = phi53 | 0xf0;
							phi56 = (uint16_t)*(uint32_t*)&alloca5;
							phi_in57 = *(uint32_t*)&alloca5;
							phi58 = 1;
						}
						uint16_t phi59 = 0;
						uint32_t phi60 = phi_in57;
						uint32_t anon61 = (__zext uint32_t)*(uint16_t*)phi16;
						if (((anon61 ^ phi_in57) & 0xf00) == 0)
						{
							((uint8_t*)&alloca5)[1] = (uint8_t)(alloca1.field4 >> 8) | 0xf;
							phi56 = (uint16_t)*(uint32_t*)&alloca5;
							phi59 = 1;
							phi60 = *(uint32_t*)&alloca5;
						}
						uint16_t phi_in62 = phi56;
						uint16_t phi63 = 0;
						uint16_t phi64 = phi_in62;
						if ((*(uint16_t*)phi16 ^ (uint16_t)phi60) < 4096)
						{
							uint16_t anon65 = phi_in62 | 0xf000;
							*(uint16_t*)&alloca5 = anon65;
							phi63 = 1;
							phi64 = anon65;
						}
						uint16_t* anon66 = (uint16_t*)&alloca5;
						*anon66 = phi64 >> 12 | phi64 << 4;
						if (((anon61 ^ *(uint32_t*)&alloca5) & 0xf) == 0)
						{
							uint32_t anon67 = *(uint32_t*)&alloca5 | 0xf;
							alloca5 = (__zext uint64_t)anon67;
							phi68 = (uint8_t)(*(uint32_t*)&alloca5 >> 8);
							phi69 = anon67;
							phi70 = anon67;
							phi71 = 1;
						}
						else 
						{
							phi68 = (uint8_t)(phi64 >> 4);
							phi69 = *(uint32_t*)&alloca5;
							phi70 = *(uint32_t*)&alloca5 & 0xf;
							phi71 = 0;
						}
						uint32_t phi72 = phi69;
						uint16_t phi73 = 0;
						if ((phi72 & 0xf0) == 0)
						{
							*(uint8_t*)&alloca5 = (uint8_t)phi70 | 0xf0;
							phi72 = *(uint32_t*)&alloca5;
							phi73 = 1;
						}
						uint32_t phi74 = phi72;
						uint16_t phi75 = 0;
						if ((phi74 & 0xf00) == 0)
						{
							((uint8_t*)&alloca5)[1] = phi68 | 0xf;
							phi74 = *(uint32_t*)&alloca5;
							phi75 = 1;
						}
						uint16_t phi76 = 0;
						uint16_t anon78 = (uint16_t)phi74;
						phi77 = anon78;
						if ((uint16_t)phi74 < 4096)
						{
							uint16_t anon79 = anon78 | 0xf000;
							*anon66 = anon79;
							phi76 = 1;
							phi77 = anon79;
						}
						*anon66 = phi77 >> 12 | phi77 << 4;
						uint32_t anon80 = (__zext uint32_t)(*(uint16_t*)phi16 & 0xf);
						uint32_t anon81 = *(uint32_t*)&alloca5 & 0xf;
						if (anon80 == anon81)
						{
							uint32_t anon82 = *(uint32_t*)&alloca5 | 0xf;
							alloca5 = (__zext uint64_t)anon82;
							phi_in83 = anon82;
							phi84 = (uint8_t)(*(uint32_t*)&alloca5 >> 8);
							phi85 = anon82;
							phi86 = 1;
						}
						else 
						{
							phi_in83 = *(uint32_t*)&alloca5;
							phi84 = (uint8_t)(phi77 >> 4);
							phi85 = anon81;
							phi86 = 0;
						}
						uint32_t phi87 = phi_in83;
						uint16_t phi88 = 0;
						if ((phi_in83 & 0xf0) == 0)
						{
							*(uint8_t*)&alloca5 = (uint8_t)phi85 | 0xf0;
							phi87 = *(uint32_t*)&alloca5;
							phi88 = 1;
						}
						uint32_t phi_in89 = phi87;
						uint32_t phi90 = phi_in89;
						uint16_t phi91 = 0;
						if ((phi_in89 & 0xf00) == 0)
						{
							((uint8_t*)&alloca5)[1] = phi84 | 0xf;
							phi90 = *(uint32_t*)&alloca5;
							phi91 = 1;
						}
						uint16_t phi92 = 0;
						uint16_t anon94 = (uint16_t)phi90;
						phi93 = anon94;
						if ((uint16_t)phi90 < 4096)
						{
							uint16_t anon95 = anon94 | 0xf000;
							*anon66 = anon95;
							phi92 = 1;
							phi93 = anon95;
						}
						*anon66 = phi93 >> 12 | phi93 << 4;
						uint32_t anon96 = *(uint32_t*)&alloca5 & 0xf;
						if (anon80 == anon96)
						{
							uint32_t anon97 = *(uint32_t*)&alloca5 | 0xf;
							alloca5 = (__zext uint64_t)anon97;
							phi98 = anon97;
							phi99 = (uint8_t)(*(uint32_t*)&alloca5 >> 8);
							phi100 = anon97;
							phi101 = 1;
						}
						else 
						{
							phi98 = *(uint32_t*)&alloca5;
							phi99 = (uint8_t)(phi93 >> 4);
							phi100 = anon96;
							phi101 = 0;
						}
						uint32_t phi_in102 = phi98;
						uint32_t phi_in103 = phi_in102;
						uint16_t phi104 = 0;
						if ((phi_in102 & 0xf0) == 0)
						{
							*(uint8_t*)&alloca5 = (uint8_t)phi100 | 0xf0;
							phi_in103 = *(uint32_t*)&alloca5;
							phi104 = 1;
						}
						uint16_t phi105 = 0;
						uint32_t phi106 = phi_in103;
						if ((phi_in103 & 0xf00) == 0)
						{
							((uint8_t*)&alloca5)[1] = phi99 | 0xf;
							phi105 = 1;
							phi106 = *(uint32_t*)&alloca5;
						}
						alloca1.field5 = (__zext uint16_t)((uint16_t)phi106 < 4096) + phi105 + phi73 + (phi63 + phi54 + phi58 + phi59 << 4 | phi71) + phi75 + phi76 + phi86 + phi88 + phi91 + phi92 + phi101 + phi104;
						alloca5 = 0;
						alloca5 = (__zext uint64_t)printf((uint8_t*)0x400eb3);
						break;
					}
				}
			}
			alloca1.field1 = 0;
			uint32_t anon107 = (uint32_t)phi46;
			if (anon107 != 0)
			{
				uint16_t phi230;
				uint64_t anon108 = (__zext uint64_t)alloca1.field4;
				alloca5 = anon108;
				phi_in109 = anon12;
				phi110 = 0;
				while (true)
				{
					uint64_t phi114;
					uint16_t phi116;
					uint16_t phi_in117;
					uint16_t phi118;
					uint8_t phi119;
					uint64_t phi_in145;
					uint64_t phi147;
					uint16_t phi148;
					uint16_t phi149;
					uint64_t phi151;
					uint8_t phi152;
					uint16_t phi153;
					uint16_t phi161;
					uint64_t phi_in177;
					uint16_t phi_in179;
					uint16_t phi180;
					uint64_t phi182;
					uint64_t phi183;
					uint8_t phi184;
					uint16_t phi185;
					uint16_t phi194;
					uint64_t phi_in211;
					uint32_t phi213;
					uint64_t phi215;
					uint16_t phi216;
					uint64_t phi218;
					uint8_t phi219;
					uint16_t phi220;
					uint64_t phi222;
					uint32_t phi224;
					uint32_t phi225;
					uint16_t phi226;
					uint64_t anon232;
					uint64_t phi111 = phi_in109;
					uint16_t anon113 = alloca1.field4 ^ *(uint16_t*)phi111;
					uint32_t anon112 = (__zext uint32_t)anon113 >> 8;
					if ((anon112 & 0xf) == 0)
					{
						uint16_t anon115 = alloca1.field4 | 0xf;
						phi114 = (__zext uint64_t)anon115;
						phi116 = anon115;
						phi_in117 = 1;
						phi118 = 2;
						phi119 = (uint8_t)(anon113 >> 8);
					}
					else 
					{
						phi114 = anon108;
						phi116 = alloca1.field4;
						phi_in117 = 0;
						phi118 = 1;
						phi119 = (uint8_t)anon112 & 0xf;
					}
					uint64_t phi_in120 = phi114;
					uint16_t phi_in121 = phi116;
					phi_in117 = phi118;
					uint16_t phi122 = phi_in121;
					uint16_t phi123 = phi_in121 ^ *(uint16_t*)phi111;
					uint16_t phi124 = phi_in117;
					if (phi119 < 16)
					{
						uint64_t anon125 = phi_in120 & 0xff00 | (__zext uint64_t)(phi_in121 & 0xf | 0xf0);
						phi_in120 = anon125;
						uint16_t anon126 = (uint16_t)anon125;
						phi122 = anon126;
						phi123 = *(uint16_t*)phi111 ^ anon126;
						phi124 = phi_in117;
					}
					uint16_t phi127 = phi122;
					uint16_t phi128 = phi123;
					uint64_t phi_in129 = phi_in120;
					uint16_t phi130 = 0;
					if ((phi128 & 0xf00) == 0)
					{
						uint64_t anon131 = phi_in120 & 0xffffffffffff00ff | (__zext uint64_t)(phi_in121 & 0xf000 | 0xf00);
						phi_in129 = anon131;
						uint16_t anon132 = (uint16_t)anon131;
						phi127 = anon132;
						phi128 = *(uint16_t*)phi111 ^ anon132;
						phi130 = 256;
					}
					uint16_t phi_in133 = phi127;
					uint64_t phi134 = phi_in129;
					uint16_t phi135 = 0;
					uint16_t phi136 = phi_in133;
					if (phi128 < 4096)
					{
						uint16_t anon137 = phi_in133 | 0xf000;
						phi134 = phi_in129 & 0xffffffffffff0000 | (__zext uint64_t)anon137;
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
						phi_in145 = (__zext uint64_t)anon146;
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
						phi_in145 = anon141;
						phi147 = (__zext uint64_t)(phi136 >> 4);
						phi148 = anon143;
						phi149 = anon143;
						phi151 = anon142;
						phi152 = (uint8_t)anon138 & 0xf;
						phi153 = 0;
					}
					uint16_t phi154 = phi148;
					uint64_t phi_in155 = phi_in145;
					uint16_t phi156 = 0;
					if (phi152 < 16)
					{
						uint64_t anon157 = phi_in145 & 0xffffffffffffff00 | phi151 & 0xf | 0xf0;
						phi_in155 = anon157;
						uint16_t anon158 = (uint16_t)anon157;
						phi154 = anon158;
						phi149 = anon158;
						phi156 = 256;
					}
					uint16_t phi159 = phi154;
					uint64_t phi160 = phi_in155;
					uint16_t anon162 = *(uint16_t*)phi111 ^ phi149;
					phi161 = anon162;
					uint16_t phi163 = 0;
					if ((anon162 & 0xf00) == 0)
					{
						uint64_t anon164 = phi_in155 & 0xffffffffffff00ff | phi147 << 8 & 0xf000 | 0xf00;
						phi160 = anon164;
						uint16_t anon165 = (uint16_t)anon164;
						phi159 = anon165;
						phi161 = *(uint16_t*)phi111 ^ anon165;
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
					uint32_t anon171 = (anon139 ^ anon172) >> 8;
					if ((anon171 & 0xf) == 0)
					{
						uint32_t anon178 = anon172 | 0xf;
						phi_in177 = (__zext uint64_t)anon178;
						phi_in179 = (uint16_t)anon178;
						uint16_t anon181 = anon176 | 0xf;
						phi180 = anon181;
						phi182 = anon173 >> 8 & 0xffffff;
						phi183 = (__zext uint64_t)anon181;
						phi184 = (uint8_t)anon171;
						phi185 = 256;
					}
					else 
					{
						phi_in177 = anon173;
						phi_in179 = anon175;
						phi180 = anon175;
						phi182 = (__zext uint64_t)(phi169 >> 4);
						phi183 = anon174;
						phi184 = (uint8_t)anon171 & 0xf;
						phi185 = 0;
					}
					uint16_t phi186 = phi180;
					uint64_t phi_in187 = phi_in177;
					uint16_t phi188 = phi_in179;
					uint16_t phi189 = 0;
					if (phi184 < 16)
					{
						uint64_t anon190 = phi_in177 & 0xffffffffffffff00 | phi183 & 0xf | 0xf0;
						phi_in187 = anon190;
						uint16_t anon191 = (uint16_t)anon190;
						phi188 = anon191;
						phi186 = anon191;
						phi189 = 256;
					}
					uint16_t phi192 = phi188;
					uint64_t phi193 = phi_in187;
					uint16_t anon195 = *(uint16_t*)phi111 ^ phi186;
					phi194 = anon195;
					uint16_t phi196 = 0;
					if ((anon195 & 0xf00) == 0)
					{
						uint64_t anon197 = phi_in187 & 0xffffffffffff00ff | phi182 << 8 & 0xf000 | 0xf00;
						phi193 = anon197;
						uint16_t anon198 = (uint16_t)anon197;
						phi192 = anon198;
						phi194 = *(uint16_t*)phi111 ^ anon198;
						phi196 = 256;
					}
					uint64_t phi199 = phi193;
					uint16_t phi_in200 = phi192;
					uint16_t phi201 = 0;
					uint16_t phi202 = phi_in200;
					if (phi194 < 4096)
					{
						uint16_t anon203 = phi_in200 | 0xf000;
						phi199 = phi199 & 0xffffffffffff0000 | (__zext uint64_t)anon203;
						phi201 = 256;
						phi202 = anon203;
					}
					uint16_t anon210 = phi202 << 4;
					uint16_t anon209 = phi202 >> 12 | anon210;
					uint64_t anon208 = (__zext uint64_t)anon209;
					uint64_t anon207 = phi199 & 0xffffffffffff0000 | anon208;
					uint32_t anon206 = (uint32_t)anon207;
					uint32_t anon205 = anon139 ^ anon206;
					uint32_t anon204 = anon205 >> 8;
					if ((anon204 & 0xf) == 0)
					{
						uint32_t anon212 = anon206 | 0xf;
						phi_in211 = (__zext uint64_t)anon212;
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
						phi_in211 = anon207;
						phi213 = anon205;
						phi215 = (__zext uint64_t)(phi202 >> 4);
						phi216 = anon209;
						phi218 = anon208;
						phi219 = (uint8_t)anon204 & 0xf;
						phi220 = 0;
					}
					uint32_t phi_in221 = phi213;
					if (phi219 < 16)
					{
						uint64_t anon223 = phi_in211 & 0xffffffffffffff00 | phi218 & 0xf | 0xf0;
						phi222 = anon223;
						phi224 = (__zext uint32_t)(*(uint16_t*)phi111 ^ (uint16_t)anon223);
						phi225 = anon139 ^ (uint32_t)anon223;
						phi226 = 256;
					}
					else 
					{
						phi222 = phi_in211;
						phi224 = phi_in221;
						phi225 = (__zext uint32_t)(*(uint16_t*)phi111 ^ phi216);
						phi226 = 0;
					}
					uint32_t phi_in227 = phi224;
					uint32_t phi228 = phi_in227;
					uint16_t phi229 = 0;
					if ((phi225 & 0xf00) == 0)
					{
						phi228 = anon139 ^ (uint32_t)(phi222 & 0xffff00ff | phi215 << 8 & 0xf000 | 0xf00);
						phi229 = 256;
					}
					if ((__zext uint16_t)((uint16_t)phi228 < 4096) + phi196 + phi189 + phi168 + phi163 + (phi135 + phi130 + phi124 << 4) + phi153 + phi156 + phi185 + phi201 + phi220 + phi226 + phi229 == *(uint16_t*)(arg1 - 66))
					{
						*(uint16_t*)(anon12 + (phi110 << 1 & 0x1fffe)) = *(uint16_t*)phi111;
						phi230 = (uint16_t)phi110 + 1;
						anon231 = phi111 + 2;
						uint64_t anon233 = phi46 + 4294967295 & 0xffffffff;
						anon232 = anon233 + anon233 + 2 + anon12;
						if (anon231 != anon232)
						{
							break;
						}
					}
					else 
					{
						phi_in109 = anon231;
						phi110 = phi110;
						if (anon231 == anon232)
						{
							phi230 = (uint16_t)phi110;
						}
					}
				}
				alloca1.field1 = anon107;
				uint16_t* anon234 = (uint16_t*)phi16;
				*anon234 = *anon234;
				if (!(phi230 == 0 | *(uint16_t*)(arg1 - 66) == 64))
				{
					alloca5 = 0;
					uint64_t anon235 = (__zext uint64_t)phi230;
					alloca5 = (__zext uint64_t)*(uint16_t*)(anon12 + ((__sext int64_t)rand() % anon235 << 32 >> 31));
					alloca1.field4 = *(uint16_t*)(anon12 + ((__sext int64_t)rand() % anon235 << 32 >> 31));
					phi46 = anon235;
				}
			}
			phi_in109 = anon231;
			phi110 = phi110 + 1 & 0xffffffff;
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
