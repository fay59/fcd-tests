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
				phi10 = alloca1.field1;
				phi11 = (__sext int64_t)anon8;
			}
		}
	}
	if (alloca1.field1 != 2 || anon7 == 0 || alloca1.field1 == 2 && anon7 != 0 && alloca1.field1 == 0)
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
		uint64_t phi18;
		uint32_t anon104;
		uint32_t anon15 = phi10 * phi10;
		uint32_t anon14 = anon15 * anon15;
		if (anon14 < 2)
		{
			phi16 = (uint64_t)&alloca1.field3;
			phi17 = 1;
			phi18 = 1;
		}
		else 
		{
			uint64_t anon39;
			bool anon40;
			uint32_t anon44;
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
				uint32_t anon29 = (__zext uint32_t)*(uint16_t*)(anon12 + anon26 - 2) + 1;
				uint16_t anon28 = (uint16_t)anon29;
				phi27 = anon28;
				*(uint16_t*)anon25 = anon28;
				if (((phi10 ^ anon29) & 0xf) == 0)
				{
					uint32_t anon32 = 16 - phi10;
					uint32_t anon31 = anon29 + (anon32 & 0xffff);
					uint16_t anon30 = (uint16_t)anon31;
					phi27 = anon30;
					*(uint16_t*)anon25 = anon30;
					uint64_t anon33 = anon21 << 4;
					uint32_t anon34 = anon29 + anon32;
					if ((((uint32_t)anon33 ^ anon34) & 0xf0) == 0)
					{
						uint32_t anon36 = (uint32_t)(256 - anon33);
						uint16_t anon35 = (uint16_t)(anon31 + anon36);
						phi27 = anon35;
						*(uint16_t*)anon25 = anon35;
						if ((((uint32_t)anon20 ^ anon34 + anon36) & 0xf00) == 0)
						{
							uint16_t anon37 = anon35 + anon19;
							uint16_t anon38 = (uint16_t)phi10 << 12;
							phi27 = anon37 - ((anon38 ^ anon37) < 4096 ? anon38 : 0);
							*(uint16_t*)anon25 = (anon38 ^ anon37) < 4096 ? 0 : anon37;
						}
					}
				}
				anon39 = arg1 - 70;
				*(uint16_t*)anon39 = phi27;
				uint16_t anon43 = (uint16_t)phi24 + 1;
				uint32_t anon42 = (__zext uint32_t)anon43;
				uint32_t anon41 = anon14 - anon42;
				anon44 = phi24 + 1 & 0xffff;
				anon40 = (uint8_t)(anon41 >> 31) == (__zext uint8_t)llvm.ssub.with.overflow.i32(anon14, anon44).field1 & anon41 != 0;
				if (anon40)
				{
					phi_in22 = anon42;
					phi23 = (__zext uint64_t)anon43;
				}
			}
			while (anon40);
			phi16 = anon39;
			phi17 = anon44;
			phi18 = (__zext uint64_t)anon44;
		}
		uint64_t anon45 = (uint64_t)&alloca1.field4;
		alloca5 = anon45;
		alloca5 = 0;
		alloca5 = (__zext uint64_t)*(uint16_t*)(anon12 + ((__sext int64_t)rand() % (__zext uint64_t)phi17 << 32 >> 31));
		uint8_t** anon46 = (uint8_t**)arg3;
		*(uint16_t*)(**anon46 == 0 ? phi16 : anon45) = *(uint16_t*)(anon12 + ((__sext int64_t)rand() % (__zext uint64_t)phi17 << 32 >> 31));
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
					if (**anon46 != 0)
					{
						alloca5 = 0;
						alloca5 = (__zext uint64_t)scanf((uint8_t*)0x400eaa);
						*(uint8_t*)&alloca5 = *anon47;
						((uint8_t*)&alloca5)[1] = anon48;
						*(uint48_t*)&((uint8_t*)&alloca5)[2] = *anon49;
						if (**anon46 != 0)
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
				if (**anon46 == 0 && **anon46 == 0 || **anon46 == 0 && **anon46 == 0 || **anon46 != 0 && **anon46 != 0)
				{
					alloca5 = 0;
					alloca5 = (__zext uint64_t)printf((uint8_t*)0x400eae);
					*(uint8_t*)&alloca5 = *anon47;
					((uint8_t*)&alloca5)[1] = anon48;
					*(uint48_t*)&((uint8_t*)&alloca5)[2] = *anon49;
				}
				if (**anon46 == 0)
				{
					if (**anon46 == 0 && **anon46 == 0 || **anon46 == 0 && **anon46 == 0 || **anon46 != 0 && **anon46 != 0)
					{
						uint32_t anon51;
						uint32_t phi_in52;
						uint8_t phi53;
						uint16_t phi54;
						uint8_t phi67;
						uint32_t phi_in68;
						uint32_t phi69;
						uint16_t phi70;
						uint16_t phi75;
						uint32_t phi_in81;
						uint8_t phi82;
						uint32_t phi83;
						uint16_t phi84;
						uint16_t phi90;
						uint32_t phi95;
						uint8_t phi96;
						uint32_t phi97;
						uint16_t phi98;
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
						uint32_t phi57 = phi_in52;
						uint16_t phi58 = 0;
						if (((uint8_t)*(uint16_t*)phi16 ^ (uint8_t)phi_in52) < 16)
						{
							*(uint8_t*)&alloca5 = phi53 | 0xf0;
							phi56 = (uint16_t)*(uint32_t*)&alloca5;
							phi57 = *(uint32_t*)&alloca5;
							phi58 = 1;
						}
						uint32_t phi59 = phi57;
						uint16_t phi60 = 0;
						uint32_t anon61 = (__zext uint32_t)*(uint16_t*)phi16;
						if (((anon61 ^ phi59) & 0xf00) == 0)
						{
							((uint8_t*)&alloca5)[1] = (uint8_t)(alloca1.field4 >> 8) | 0xf;
							phi56 = (uint16_t)*(uint32_t*)&alloca5;
							phi60 = 1;
							phi59 = *(uint32_t*)&alloca5;
						}
						uint16_t phi62 = phi56;
						uint16_t phi63 = 0;
						if ((*(uint16_t*)phi16 ^ (uint16_t)phi59) < 4096)
						{
							uint16_t anon64 = phi62 | 0xf000;
							*(uint16_t*)&alloca5 = anon64;
							phi63 = 1;
							phi62 = anon64;
						}
						uint16_t* anon65 = (uint16_t*)&alloca5;
						*anon65 = phi62 >> 12 | phi62 << 4;
						if (((anon61 ^ *(uint32_t*)&alloca5) & 0xf) == 0)
						{
							uint32_t anon66 = *(uint32_t*)&alloca5 | 0xf;
							alloca5 = (__zext uint64_t)anon66;
							phi67 = (uint8_t)(*(uint32_t*)&alloca5 >> 8);
							phi_in68 = anon66;
							phi69 = anon66;
							phi70 = 1;
						}
						else 
						{
							phi67 = (uint8_t)(phi62 >> 4);
							phi_in68 = *(uint32_t*)&alloca5;
							phi69 = *(uint32_t*)&alloca5 & 0xf;
							phi70 = 0;
						}
						uint32_t phi71 = phi_in68;
						uint16_t phi72 = 0;
						if ((phi_in68 & 0xf0) == 0)
						{
							*(uint8_t*)&alloca5 = (uint8_t)phi69 | 0xf0;
							phi71 = *(uint32_t*)&alloca5;
							phi72 = 1;
						}
						uint16_t phi73 = 0;
						if ((phi71 & 0xf00) == 0)
						{
							((uint8_t*)&alloca5)[1] = phi67 | 0xf;
							phi71 = *(uint32_t*)&alloca5;
							phi73 = 1;
						}
						uint16_t phi74 = 0;
						uint16_t anon76 = (uint16_t)phi71;
						phi75 = anon76;
						if ((uint16_t)phi71 < 4096)
						{
							uint16_t anon77 = anon76 | 0xf000;
							*anon65 = anon77;
							phi74 = 1;
							phi75 = anon77;
						}
						*anon65 = phi75 >> 12 | phi75 << 4;
						uint32_t anon78 = (__zext uint32_t)(*(uint16_t*)phi16 & 0xf);
						uint32_t anon79 = *(uint32_t*)&alloca5 & 0xf;
						if (anon78 == anon79)
						{
							uint32_t anon80 = *(uint32_t*)&alloca5 | 0xf;
							alloca5 = (__zext uint64_t)anon80;
							phi_in81 = anon80;
							phi82 = (uint8_t)(*(uint32_t*)&alloca5 >> 8);
							phi83 = anon80;
							phi84 = 1;
						}
						else 
						{
							phi_in81 = *(uint32_t*)&alloca5;
							phi82 = (uint8_t)(phi75 >> 4);
							phi83 = anon79;
							phi84 = 0;
						}
						uint32_t phi_in85 = phi_in81;
						uint16_t phi86 = 0;
						if ((phi_in81 & 0xf0) == 0)
						{
							*(uint8_t*)&alloca5 = (uint8_t)phi83 | 0xf0;
							phi_in85 = *(uint32_t*)&alloca5;
							phi86 = 1;
						}
						uint32_t phi87 = phi_in85;
						uint16_t phi88 = 0;
						if ((phi_in85 & 0xf00) == 0)
						{
							((uint8_t*)&alloca5)[1] = phi82 | 0xf;
							phi87 = *(uint32_t*)&alloca5;
							phi88 = 1;
						}
						uint16_t phi89 = 0;
						uint16_t anon91 = (uint16_t)phi87;
						phi90 = anon91;
						if ((uint16_t)phi87 < 4096)
						{
							uint16_t anon92 = anon91 | 0xf000;
							*anon65 = anon92;
							phi89 = 1;
							phi90 = anon92;
						}
						*anon65 = phi90 >> 12 | phi90 << 4;
						uint32_t anon93 = *(uint32_t*)&alloca5 & 0xf;
						if (anon78 == anon93)
						{
							uint32_t anon94 = *(uint32_t*)&alloca5 | 0xf;
							alloca5 = (__zext uint64_t)anon94;
							phi95 = anon94;
							phi96 = (uint8_t)(*(uint32_t*)&alloca5 >> 8);
							phi97 = anon94;
							phi98 = 1;
						}
						else 
						{
							phi95 = *(uint32_t*)&alloca5;
							phi96 = (uint8_t)(phi90 >> 4);
							phi97 = anon93;
							phi98 = 0;
						}
						uint32_t phi_in99 = phi95;
						uint32_t phi_in100 = phi_in99;
						uint16_t phi101 = 0;
						if ((phi_in99 & 0xf0) == 0)
						{
							*(uint8_t*)&alloca5 = (uint8_t)phi97 | 0xf0;
							phi_in100 = *(uint32_t*)&alloca5;
							phi101 = 1;
						}
						uint16_t phi102 = 0;
						uint32_t phi103 = phi_in100;
						if ((phi_in100 & 0xf00) == 0)
						{
							((uint8_t*)&alloca5)[1] = phi96 | 0xf;
							phi102 = 1;
							phi103 = *(uint32_t*)&alloca5;
						}
						alloca1.field5 = (__zext uint16_t)((uint16_t)phi103 < 4096) + phi102 + phi72 + (phi63 + phi54 + phi58 + phi60 << 4 | phi70) + phi73 + phi74 + phi84 + phi86 + phi88 + phi89 + phi98 + phi101;
						alloca5 = 0;
						alloca5 = (__zext uint64_t)printf((uint8_t*)0x400eb3);
						break;
					}
				}
			}
			alloca1.field1 = 0;
			anon104 = (uint32_t)phi18;
			if (anon104 != 0)
			{
				uint16_t phi226;
				uint64_t anon105 = (__zext uint64_t)alloca1.field4;
				alloca5 = anon105;
				uint64_t phi_in106 = anon12;
				uint64_t phi107 = 0;
				while (true)
				{
					uint64_t phi111;
					uint16_t phi113;
					uint16_t phi_in114;
					uint8_t phi115;
					uint64_t phi139;
					uint64_t phi141;
					uint16_t phi142;
					uint16_t phi_in143;
					uint64_t phi145;
					uint8_t phi146;
					uint16_t phi147;
					uint16_t phi160;
					uint64_t phi_in175;
					uint16_t phi177;
					uint16_t phi_in178;
					uint64_t phi180;
					uint64_t phi181;
					uint8_t phi182;
					uint16_t phi183;
					uint16_t phi193;
					uint64_t phi208;
					uint32_t phi_in210;
					uint64_t phi212;
					uint16_t phi213;
					uint64_t phi215;
					uint8_t phi216;
					uint16_t phi217;
					uint32_t phi220;
					uint32_t phi221;
					uint16_t phi222;
					uint64_t anon227;
					uint64_t anon228;
					uint64_t phi108 = phi_in106;
					uint16_t anon110 = alloca1.field4 ^ *(uint16_t*)phi108;
					uint32_t anon109 = (__zext uint32_t)anon110 >> 8;
					if ((anon109 & 0xf) == 0)
					{
						uint16_t anon112 = alloca1.field4 | 0xf;
						phi111 = (__zext uint64_t)anon112;
						phi113 = anon112;
						phi_in114 = 1;
						phi_in114 = 2;
						phi115 = (uint8_t)(anon110 >> 8);
					}
					else 
					{
						phi111 = anon105;
						phi113 = alloca1.field4;
						phi_in114 = 0;
						phi_in114 = 1;
						phi115 = (uint8_t)anon109 & 0xf;
					}
					uint64_t phi_in116 = phi111;
					uint64_t phi_in117 = phi_in116;
					uint16_t phi118 = phi113 ^ *(uint16_t*)phi108;
					uint16_t phi119 = phi_in114;
					if (phi115 < 16)
					{
						uint64_t anon120 = phi_in116 & 0xff00 | (__zext uint64_t)(phi113 & 0xf | 0xf0);
						phi_in117 = anon120;
						uint16_t anon121 = (uint16_t)anon120;
						phi113 = anon121;
						phi118 = *(uint16_t*)phi108 ^ anon121;
						phi119 = phi_in114;
					}
					uint16_t phi122 = phi113;
					uint16_t phi_in123 = phi118;
					uint64_t phi124 = phi_in117;
					uint16_t phi125 = phi_in123;
					uint16_t phi126 = 0;
					if ((phi_in123 & 0xf00) == 0)
					{
						uint64_t anon127 = phi_in117 & 0xffffffffffff00ff | (__zext uint64_t)(phi113 & 0xf000 | 0xf00);
						phi124 = anon127;
						uint16_t anon128 = (uint16_t)anon127;
						phi122 = anon128;
						phi125 = *(uint16_t*)phi108 ^ anon128;
						phi126 = 256;
					}
					uint64_t phi129 = phi124;
					uint16_t phi130 = 0;
					if (phi125 < 4096)
					{
						uint16_t anon131 = phi122 | 0xf000;
						phi129 = phi129 & 0xffffffffffff0000 | (__zext uint64_t)anon131;
						phi130 = 256;
						phi122 = anon131;
					}
					uint32_t anon133 = (__zext uint32_t)*(uint16_t*)phi108;
					uint16_t anon138 = phi122 << 4;
					uint16_t anon137 = phi122 >> 12 | anon138;
					uint64_t anon136 = (__zext uint64_t)anon137;
					uint64_t anon135 = phi129 & 0xffffffffffff0000 | anon136;
					uint32_t anon134 = (uint32_t)anon135;
					uint32_t anon132 = (anon133 ^ anon134) >> 8;
					if ((anon132 & 0xf) == 0)
					{
						uint32_t anon140 = anon134 | 0xf;
						phi139 = (__zext uint64_t)anon140;
						phi141 = anon135 >> 8 & 0xffffff;
						phi142 = (uint16_t)anon140;
						uint16_t anon144 = anon138 | 0xf;
						phi_in143 = anon144;
						phi145 = (__zext uint64_t)anon144;
						phi146 = (uint8_t)anon132;
						phi147 = 256;
					}
					else 
					{
						phi139 = anon135;
						phi141 = (__zext uint64_t)(phi122 >> 4);
						phi142 = anon137;
						phi_in143 = anon137;
						phi145 = anon136;
						phi146 = (uint8_t)anon132 & 0xf;
						phi147 = 0;
					}
					uint64_t phi_in148 = phi139;
					uint16_t phi_in149 = phi142;
					uint64_t phi150 = phi_in148;
					uint16_t phi151 = phi_in149;
					uint16_t phi152 = phi_in143;
					uint16_t phi153 = 0;
					if (phi146 < 16)
					{
						uint64_t anon154 = phi_in148 & 0xffffffffffffff00 | phi145 & 0xf | 0xf0;
						phi150 = anon154;
						uint16_t anon155 = (uint16_t)anon154;
						phi151 = anon155;
						phi152 = anon155;
						phi153 = 256;
					}
					uint64_t phi_in156 = phi150;
					uint16_t phi_in157 = phi151;
					uint64_t phi158 = phi_in156;
					uint16_t phi159 = phi_in157;
					uint16_t anon161 = *(uint16_t*)phi108 ^ phi152;
					phi160 = anon161;
					uint16_t phi162 = 0;
					if ((anon161 & 0xf00) == 0)
					{
						uint64_t anon163 = phi_in156 & 0xffffffffffff00ff | phi141 << 8 & 0xf000 | 0xf00;
						phi158 = anon163;
						uint16_t anon164 = (uint16_t)anon163;
						phi159 = anon164;
						phi160 = *(uint16_t*)phi108 ^ anon164;
						phi162 = 256;
					}
					uint16_t phi_in165 = phi159;
					uint16_t phi166 = 0;
					uint16_t phi167 = phi_in165;
					if (phi160 < 4096)
					{
						uint16_t anon168 = phi_in165 | 0xf000;
						phi158 = phi158 & 0xffffffffffff0000 | (__zext uint64_t)anon168;
						phi166 = 256;
						phi167 = anon168;
					}
					uint16_t anon174 = phi167 << 4;
					uint16_t anon173 = phi167 >> 12 | anon174;
					uint64_t anon172 = (__zext uint64_t)anon173;
					uint64_t anon171 = phi158 & 0xffffffffffff0000 | anon172;
					uint32_t anon170 = (uint32_t)anon171;
					uint32_t anon169 = (anon133 ^ anon170) >> 8;
					if ((anon169 & 0xf) == 0)
					{
						uint32_t anon176 = anon170 | 0xf;
						phi_in175 = (__zext uint64_t)anon176;
						phi177 = (uint16_t)anon176;
						uint16_t anon179 = anon174 | 0xf;
						phi_in178 = anon179;
						phi180 = anon171 >> 8 & 0xffffff;
						phi181 = (__zext uint64_t)anon179;
						phi182 = (uint8_t)anon169;
						phi183 = 256;
					}
					else 
					{
						phi_in175 = anon171;
						phi177 = anon173;
						phi_in178 = anon173;
						phi180 = (__zext uint64_t)(phi167 >> 4);
						phi181 = anon172;
						phi182 = (uint8_t)anon169 & 0xf;
						phi183 = 0;
					}
					uint16_t phi184 = phi177;
					uint64_t phi185 = phi_in175;
					uint16_t phi186 = phi_in178;
					uint16_t phi187 = 0;
					if (phi182 < 16)
					{
						uint64_t anon188 = phi_in175 & 0xffffffffffffff00 | phi181 & 0xf | 0xf0;
						phi185 = anon188;
						uint16_t anon189 = (uint16_t)anon188;
						phi184 = anon189;
						phi186 = anon189;
						phi187 = 256;
					}
					uint64_t phi190 = phi185;
					uint16_t phi_in191 = phi184;
					uint16_t phi192 = phi_in191;
					uint16_t anon194 = *(uint16_t*)phi108 ^ phi186;
					phi193 = anon194;
					uint16_t phi195 = 0;
					if ((anon194 & 0xf00) == 0)
					{
						uint64_t anon196 = phi190 & 0xffffffffffff00ff | phi180 << 8 & 0xf000 | 0xf00;
						phi190 = anon196;
						uint16_t anon197 = (uint16_t)anon196;
						phi192 = anon197;
						phi193 = *(uint16_t*)phi108 ^ anon197;
						phi195 = 256;
					}
					uint64_t phi198 = phi190;
					uint16_t phi199 = 0;
					if (phi193 < 4096)
					{
						uint16_t anon200 = phi192 | 0xf000;
						phi198 = phi198 & 0xffffffffffff0000 | (__zext uint64_t)anon200;
						phi199 = 256;
						phi192 = anon200;
					}
					uint16_t anon207 = phi192 << 4;
					uint16_t anon206 = phi192 >> 12 | anon207;
					uint64_t anon205 = (__zext uint64_t)anon206;
					uint64_t anon204 = phi198 & 0xffffffffffff0000 | anon205;
					uint32_t anon203 = (uint32_t)anon204;
					uint32_t anon202 = anon133 ^ anon203;
					uint32_t anon201 = anon202 >> 8;
					if ((anon201 & 0xf) == 0)
					{
						uint32_t anon209 = anon203 | 0xf;
						phi208 = (__zext uint64_t)anon209;
						uint32_t anon211 = anon133 ^ anon209;
						phi_in210 = anon211;
						phi212 = anon204 >> 8 & 0xffffff;
						uint16_t anon214 = anon207 | 0xf;
						phi213 = anon214;
						phi215 = (__zext uint64_t)anon214;
						phi216 = (uint8_t)(anon211 >> 8);
						phi217 = 256;
					}
					else 
					{
						phi208 = anon204;
						phi_in210 = anon202;
						phi212 = (__zext uint64_t)(phi192 >> 4);
						phi213 = anon206;
						phi215 = anon205;
						phi216 = (uint8_t)anon201 & 0xf;
						phi217 = 0;
					}
					uint64_t phi218 = phi208;
					if (phi216 < 16)
					{
						uint64_t anon219 = phi218 & 0xffffffffffffff00 | phi215 & 0xf | 0xf0;
						phi218 = anon219;
						phi220 = (__zext uint32_t)(*(uint16_t*)phi108 ^ (uint16_t)anon219);
						phi221 = anon133 ^ (uint32_t)anon219;
						phi222 = 256;
					}
					else 
					{
						phi220 = phi_in210;
						phi221 = (__zext uint32_t)(*(uint16_t*)phi108 ^ phi213);
						phi222 = 0;
					}
					uint32_t phi_in223 = phi220;
					uint32_t phi224 = phi_in223;
					uint16_t phi225 = 0;
					if ((phi221 & 0xf00) == 0)
					{
						phi224 = anon133 ^ (uint32_t)(phi218 & 0xffff00ff | phi212 << 8 & 0xf000 | 0xf00);
						phi225 = 256;
					}
					if ((__zext uint16_t)((uint16_t)phi224 < 4096) + phi195 + phi187 + phi166 + phi162 + (phi130 + phi126 + phi119 << 4) + phi147 + phi153 + phi183 + phi199 + phi217 + phi222 + phi225 == *(uint16_t*)(arg1 - 66))
					{
						*(uint16_t*)(anon12 + (phi107 << 1 & 0x1fffe)) = *(uint16_t*)phi108;
						phi226 = (uint16_t)phi107 + 1;
						anon227 = phi108 + 2;
						uint64_t anon229 = phi18 + 4294967295 & 0xffffffff;
						anon228 = anon229 + anon229 + 2 + anon12;
						if (anon227 == anon228)
						{
							break;
						}
						else 
						{
							phi_in106 = anon227;
							phi107 = phi107 + 1 & 0xffffffff;
						}
					}
					else 
					{
						phi_in106 = anon227;
						phi107 = phi107;
						if (anon227 == anon228)
						{
							phi226 = (uint16_t)phi107;
							break;
						}
					}
				}
				alloca1.field1 = anon104;
				uint16_t* anon230 = (uint16_t*)phi16;
				*anon230 = *anon230;
				if (phi226 == 0 | *(uint16_t*)(arg1 - 66) == 64)
				{
					break;
				}
				else 
				{
					alloca5 = 0;
					uint64_t anon231 = (__zext uint64_t)phi226;
					alloca5 = (__zext uint64_t)*(uint16_t*)(anon12 + ((__sext int64_t)rand() % anon231 << 32 >> 31));
					alloca1.field4 = *(uint16_t*)(anon12 + ((__sext int64_t)rand() % anon231 << 32 >> 31));
					phi18 = anon231;
				}
			}
		}
		while (anon104 != 0);
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
