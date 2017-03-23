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
			bool anon40;
			uint32_t anon45;
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
				uint16_t anon43 = (uint16_t)phi24 + 1;
				uint32_t anon42 = (__zext uint32_t)anon43;
				uint32_t anon41 = anon14 - anon42;
				anon45 = phi24 + 1 & 0xffff;
				bool anon44 = llvm.ssub.with.overflow.i32(anon14, anon45).field1;
				anon40 = (uint8_t)(anon41 >> 31) == (__zext uint8_t)anon44 & anon41 != 0;
				if (anon40)
				{
					phi_in22 = anon42;
					phi23 = (__zext uint64_t)anon43;
				}
			}
			while (anon40);
			phi16 = anon27;
			phi17 = anon45;
			phi18 = (__zext uint64_t)anon45;
		}
		uint64_t phi46 = phi18;
		uint64_t anon47 = (uint64_t)&alloca1.field4;
		alloca5 = anon47;
		alloca5 = 0;
		alloca5 = (__zext uint64_t)*(uint16_t*)(anon12 + ((__sext int64_t)rand() % (__zext uint64_t)phi17 << 32 >> 31));
		uint8_t** anon48 = (uint8_t**)arg3;
		*(uint16_t*)(**anon48 == 0 ? phi16 : anon47) = *(uint16_t*)(anon12 + ((__sext int64_t)rand() % (__zext uint64_t)phi17 << 32 >> 31));
		while (true)
		{
			uint64_t phi_in105;
			uint64_t phi106;
			uint64_t anon224;
			while (true)
			{
				alloca5 = 0;
				alloca5 = (__zext uint64_t)printf((uint8_t*)0x400e95);
				uint8_t* anon49 = (uint8_t*)arg3;
				*(uint8_t*)&alloca5 = *anon49;
				uint8_t anon50 = anon49[1];
				((uint8_t*)&alloca5)[1] = anon50;
				uint48_t* anon51 = (uint48_t*)&anon49[2];
				*(uint48_t*)&((uint8_t*)&alloca5)[2] = *anon51;
				if (**anon48 == 0)
				{
					if (**anon48 != 0)
					{
						alloca5 = 0;
						alloca5 = (__zext uint64_t)scanf((uint8_t*)0x400eaa);
						*(uint8_t*)&alloca5 = *anon49;
						((uint8_t*)&alloca5)[1] = anon50;
						*(uint48_t*)&((uint8_t*)&alloca5)[2] = *anon51;
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
					*(uint8_t*)&alloca5 = *anon49;
					((uint8_t*)&alloca5)[1] = anon50;
					*(uint48_t*)&((uint8_t*)&alloca5)[2] = *anon51;
				}
				if (**anon48 == 0 && **anon48 == 0 || **anon48 != 0 && **anon48 == 0 && **anon48 == 0 || **anon48 != 0 && **anon48 != 0)
				{
					alloca5 = 0;
					alloca5 = (__zext uint64_t)printf((uint8_t*)0x400eae);
					*(uint8_t*)&alloca5 = *anon49;
					((uint8_t*)&alloca5)[1] = anon50;
					*(uint48_t*)&((uint8_t*)&alloca5)[2] = *anon51;
				}
				if (**anon48 == 0)
				{
					if (**anon48 == 0 && **anon48 == 0 || **anon48 != 0 && **anon48 == 0 && **anon48 == 0 || **anon48 != 0 && **anon48 != 0)
					{
						uint32_t anon53;
						uint16_t phi54;
						uint32_t phi55;
						uint8_t phi56;
						uint16_t phi57;
						uint8_t phi68;
						uint32_t phi69;
						uint32_t phi70;
						uint16_t phi71;
						uint16_t phi76;
						uint32_t phi82;
						uint8_t phi83;
						uint32_t phi84;
						uint16_t phi85;
						uint16_t phi91;
						uint32_t phi96;
						uint8_t phi97;
						uint32_t phi98;
						uint16_t phi99;
						alloca5 = (__zext uint64_t)alloca1.field4;
						if (((alloca1.field4 ^ *(uint16_t*)phi16) & 0xf) == 0)
						{
							anon53 = (__zext uint32_t)alloca1.field4;
							uint32_t anon52 = anon53 | 0xf;
							alloca5 = (__zext uint64_t)anon52;
							phi54 = (uint16_t)anon52;
							phi55 = anon52;
							phi56 = (uint8_t)anon52;
							phi57 = 1;
						}
						else 
						{
							phi54 = alloca1.field4;
							phi55 = anon53;
							phi56 = (uint8_t)alloca1.field4 & 0xf;
							phi57 = 0;
						}
						uint16_t phi58 = phi54;
						uint16_t phi59 = 0;
						if (((uint8_t)*(uint16_t*)phi16 ^ (uint8_t)phi55) < 16)
						{
							*(uint8_t*)&alloca5 = phi56 | 0xf0;
							phi58 = (uint16_t)*(uint32_t*)&alloca5;
							phi55 = *(uint32_t*)&alloca5;
							phi59 = 1;
						}
						uint16_t phi60 = 0;
						uint32_t phi61 = phi55;
						uint32_t anon62 = (__zext uint32_t)*(uint16_t*)phi16;
						if (((anon62 ^ phi55) & 0xf00) == 0)
						{
							((uint8_t*)&alloca5)[1] = (uint8_t)(alloca1.field4 >> 8) | 0xf;
							phi58 = (uint16_t)*(uint32_t*)&alloca5;
							phi60 = 1;
							phi61 = *(uint32_t*)&alloca5;
						}
						uint16_t phi63 = phi58;
						uint16_t phi64 = 0;
						if ((*(uint16_t*)phi16 ^ (uint16_t)phi61) < 4096)
						{
							uint16_t anon65 = phi63 | 0xf000;
							*(uint16_t*)&alloca5 = anon65;
							phi64 = 1;
							phi63 = anon65;
						}
						uint16_t* anon66 = (uint16_t*)&alloca5;
						*anon66 = phi63 >> 12 | phi63 << 4;
						if (((anon62 ^ *(uint32_t*)&alloca5) & 0xf) == 0)
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
							phi68 = (uint8_t)(phi63 >> 4);
							phi69 = *(uint32_t*)&alloca5;
							phi70 = *(uint32_t*)&alloca5 & 0xf;
							phi71 = 0;
						}
						uint32_t phi72 = phi69;
						uint16_t phi73 = 0;
						if ((phi69 & 0xf0) == 0)
						{
							*(uint8_t*)&alloca5 = (uint8_t)phi70 | 0xf0;
							phi72 = *(uint32_t*)&alloca5;
							phi73 = 1;
						}
						uint16_t phi74 = 0;
						if ((phi72 & 0xf00) == 0)
						{
							((uint8_t*)&alloca5)[1] = phi68 | 0xf;
							phi72 = *(uint32_t*)&alloca5;
							phi74 = 1;
						}
						uint16_t phi75 = 0;
						uint16_t anon77 = (uint16_t)phi72;
						phi76 = anon77;
						if ((uint16_t)phi72 < 4096)
						{
							uint16_t anon78 = anon77 | 0xf000;
							*anon66 = anon78;
							phi75 = 1;
							phi76 = anon78;
						}
						*anon66 = phi76 >> 12 | phi76 << 4;
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
						uint32_t phi86 = phi82;
						uint16_t phi87 = 0;
						if ((phi86 & 0xf0) == 0)
						{
							*(uint8_t*)&alloca5 = (uint8_t)phi84 | 0xf0;
							phi86 = *(uint32_t*)&alloca5;
							phi87 = 1;
						}
						uint32_t phi88 = phi86;
						uint16_t phi89 = 0;
						if ((phi86 & 0xf00) == 0)
						{
							((uint8_t*)&alloca5)[1] = phi83 | 0xf;
							phi88 = *(uint32_t*)&alloca5;
							phi89 = 1;
						}
						uint16_t phi90 = 0;
						uint16_t anon92 = (uint16_t)phi88;
						phi91 = anon92;
						if ((uint16_t)phi88 < 4096)
						{
							uint16_t anon93 = anon92 | 0xf000;
							*anon66 = anon93;
							phi90 = 1;
							phi91 = anon93;
						}
						*anon66 = phi91 >> 12 | phi91 << 4;
						uint32_t anon94 = *(uint32_t*)&alloca5 & 0xf;
						if (anon79 == anon94)
						{
							uint32_t anon95 = *(uint32_t*)&alloca5 | 0xf;
							alloca5 = (__zext uint64_t)anon95;
							phi96 = anon95;
							phi97 = (uint8_t)(*(uint32_t*)&alloca5 >> 8);
							phi98 = anon95;
							phi99 = 1;
						}
						else 
						{
							phi96 = *(uint32_t*)&alloca5;
							phi97 = (uint8_t)(phi91 >> 4);
							phi98 = anon94;
							phi99 = 0;
						}
						uint16_t phi100 = 0;
						if ((phi96 & 0xf0) == 0)
						{
							*(uint8_t*)&alloca5 = (uint8_t)phi98 | 0xf0;
							phi96 = *(uint32_t*)&alloca5;
							phi100 = 1;
						}
						uint32_t phi101 = phi96;
						uint16_t phi102 = 0;
						if ((phi101 & 0xf00) == 0)
						{
							((uint8_t*)&alloca5)[1] = phi97 | 0xf;
							phi102 = 1;
							phi101 = *(uint32_t*)&alloca5;
						}
						alloca1.field5 = (__zext uint16_t)((uint16_t)phi101 < 4096) + phi102 + phi73 + (phi64 + phi57 + phi59 + phi60 << 4 | phi71) + phi74 + phi75 + phi85 + phi87 + phi89 + phi90 + phi99 + phi100;
						alloca5 = 0;
						alloca5 = (__zext uint64_t)printf((uint8_t*)0x400eb3);
						break;
					}
				}
			}
			alloca1.field1 = 0;
			uint32_t anon103 = (uint32_t)phi46;
			if (anon103 != 0)
			{
				uint16_t phi223;
				uint64_t anon104 = (__zext uint64_t)alloca1.field4;
				alloca5 = anon104;
				phi_in105 = anon12;
				phi106 = 0;
				while (true)
				{
					uint64_t phi110;
					uint16_t phi112;
					uint16_t phi_in113;
					uint16_t phi114;
					uint8_t phi115;
					uint64_t phi139;
					uint64_t phi141;
					uint16_t phi142;
					uint16_t phi143;
					uint64_t phi145;
					uint8_t phi146;
					uint16_t phi147;
					uint16_t phi157;
					uint64_t phi172;
					uint16_t phi174;
					uint16_t phi175;
					uint64_t phi177;
					uint64_t phi178;
					uint8_t phi179;
					uint16_t phi180;
					uint16_t phi190;
					uint64_t phi206;
					uint32_t phi208;
					uint64_t phi210;
					uint16_t phi211;
					uint64_t phi213;
					uint8_t phi214;
					uint16_t phi215;
					uint64_t phi216;
					uint32_t phi218;
					uint32_t phi219;
					uint16_t phi220;
					uint64_t anon225;
					uint64_t phi107 = phi_in105;
					uint16_t anon109 = alloca1.field4 ^ *(uint16_t*)phi107;
					uint32_t anon108 = (__zext uint32_t)anon109 >> 8;
					if ((anon108 & 0xf) == 0)
					{
						uint16_t anon111 = alloca1.field4 | 0xf;
						phi110 = (__zext uint64_t)anon111;
						phi112 = anon111;
						phi_in113 = 1;
						phi114 = 2;
						phi115 = (uint8_t)(anon109 >> 8);
					}
					else 
					{
						phi110 = anon104;
						phi112 = alloca1.field4;
						phi_in113 = 0;
						phi114 = 1;
						phi115 = (uint8_t)anon108 & 0xf;
					}
					uint64_t phi116 = phi110;
					uint16_t phi_in117 = phi112;
					uint16_t phi118 = phi112 ^ *(uint16_t*)phi107;
					uint16_t phi119 = phi_in113;
					if (phi115 < 16)
					{
						uint64_t anon120 = phi110 & 0xff00 | (__zext uint64_t)(phi112 & 0xf | 0xf0);
						phi116 = anon120;
						uint16_t anon121 = (uint16_t)anon120;
						phi_in117 = anon121;
						phi118 = *(uint16_t*)phi107 ^ anon121;
						phi119 = phi114;
					}
					uint64_t phi122 = phi116;
					uint16_t phi123 = phi_in117;
					uint16_t phi124 = phi118;
					uint16_t phi125 = 0;
					if ((phi118 & 0xf00) == 0)
					{
						uint64_t anon126 = phi116 & 0xffffffffffff00ff | (__zext uint64_t)(phi112 & 0xf000 | 0xf00);
						phi122 = anon126;
						uint16_t anon127 = (uint16_t)anon126;
						phi123 = anon127;
						phi124 = *(uint16_t*)phi107 ^ anon127;
						phi125 = 256;
					}
					uint64_t phi128 = phi122;
					uint16_t phi129 = 0;
					uint16_t phi130 = phi123;
					if (phi124 < 4096)
					{
						uint16_t anon131 = phi123 | 0xf000;
						phi128 = phi122 & 0xffffffffffff0000 | (__zext uint64_t)anon131;
						phi129 = 256;
						phi130 = anon131;
					}
					uint32_t anon133 = (__zext uint32_t)*(uint16_t*)phi107;
					uint16_t anon138 = phi130 << 4;
					uint16_t anon137 = phi130 >> 12 | anon138;
					uint64_t anon136 = (__zext uint64_t)anon137;
					uint64_t anon135 = phi128 & 0xffffffffffff0000 | anon136;
					uint32_t anon134 = (uint32_t)anon135;
					uint32_t anon132 = (anon133 ^ anon134) >> 8;
					if ((anon132 & 0xf) == 0)
					{
						uint32_t anon140 = anon134 | 0xf;
						phi139 = (__zext uint64_t)anon140;
						phi141 = anon135 >> 8 & 0xffffff;
						phi142 = (uint16_t)anon140;
						uint16_t anon144 = anon138 | 0xf;
						phi143 = anon144;
						phi145 = (__zext uint64_t)anon144;
						phi146 = (uint8_t)anon132;
						phi147 = 256;
					}
					else 
					{
						phi139 = anon135;
						phi141 = (__zext uint64_t)(phi130 >> 4);
						phi142 = anon137;
						phi143 = anon137;
						phi145 = anon136;
						phi146 = (uint8_t)anon132 & 0xf;
						phi147 = 0;
					}
					uint16_t phi148 = phi142;
					uint16_t phi_in149 = phi143;
					uint64_t phi150 = phi139;
					uint16_t phi151 = phi_in149;
					uint16_t phi152 = 0;
					if (phi146 < 16)
					{
						uint64_t anon153 = phi139 & 0xffffffffffffff00 | phi145 & 0xf | 0xf0;
						phi150 = anon153;
						uint16_t anon154 = (uint16_t)anon153;
						phi148 = anon154;
						phi151 = anon154;
						phi152 = 256;
					}
					uint16_t phi155 = phi148;
					uint64_t phi156 = phi150;
					uint16_t anon158 = *(uint16_t*)phi107 ^ phi151;
					phi157 = anon158;
					uint16_t phi159 = 0;
					if ((anon158 & 0xf00) == 0)
					{
						uint64_t anon160 = phi150 & 0xffffffffffff00ff | phi141 << 8 & 0xf000 | 0xf00;
						phi156 = anon160;
						uint16_t anon161 = (uint16_t)anon160;
						phi155 = anon161;
						phi157 = *(uint16_t*)phi107 ^ anon161;
						phi159 = 256;
					}
					uint16_t phi162 = phi155;
					uint64_t phi163 = phi156;
					uint16_t phi164 = 0;
					if (phi157 < 4096)
					{
						uint16_t anon165 = phi162 | 0xf000;
						phi163 = phi156 & 0xffffffffffff0000 | (__zext uint64_t)anon165;
						phi164 = 256;
						phi162 = anon165;
					}
					uint16_t anon171 = phi162 << 4;
					uint16_t anon170 = phi162 >> 12 | anon171;
					uint64_t anon169 = (__zext uint64_t)anon170;
					uint64_t anon168 = phi163 & 0xffffffffffff0000 | anon169;
					uint32_t anon167 = (uint32_t)anon168;
					uint32_t anon166 = (anon133 ^ anon167) >> 8;
					if ((anon166 & 0xf) == 0)
					{
						uint32_t anon173 = anon167 | 0xf;
						phi172 = (__zext uint64_t)anon173;
						phi174 = (uint16_t)anon173;
						uint16_t anon176 = anon171 | 0xf;
						phi175 = anon176;
						phi177 = anon168 >> 8 & 0xffffff;
						phi178 = (__zext uint64_t)anon176;
						phi179 = (uint8_t)anon166;
						phi180 = 256;
					}
					else 
					{
						phi172 = anon168;
						phi174 = anon170;
						phi175 = anon170;
						phi177 = (__zext uint64_t)(phi162 >> 4);
						phi178 = anon169;
						phi179 = (uint8_t)anon166 & 0xf;
						phi180 = 0;
					}
					uint16_t phi_in181 = phi174;
					uint16_t phi182 = phi175;
					uint64_t phi183 = phi172;
					uint16_t phi_in184 = phi_in181;
					uint16_t phi185 = 0;
					if (phi179 < 16)
					{
						uint64_t anon186 = phi172 & 0xffffffffffffff00 | phi178 & 0xf | 0xf0;
						phi183 = anon186;
						uint16_t anon187 = (uint16_t)anon186;
						phi_in184 = anon187;
						phi182 = anon187;
						phi185 = 256;
					}
					uint64_t phi188 = phi183;
					uint16_t phi189 = phi_in184;
					uint16_t anon191 = *(uint16_t*)phi107 ^ phi182;
					phi190 = anon191;
					uint16_t phi192 = 0;
					if ((anon191 & 0xf00) == 0)
					{
						uint64_t anon193 = phi183 & 0xffffffffffff00ff | phi177 << 8 & 0xf000 | 0xf00;
						phi188 = anon193;
						uint16_t anon194 = (uint16_t)anon193;
						phi189 = anon194;
						phi190 = *(uint16_t*)phi107 ^ anon194;
						phi192 = 256;
					}
					uint16_t phi195 = phi189;
					uint64_t phi196 = phi188;
					uint16_t phi197 = 0;
					if (phi190 < 4096)
					{
						uint16_t anon198 = phi195 | 0xf000;
						phi196 = phi188 & 0xffffffffffff0000 | (__zext uint64_t)anon198;
						phi197 = 256;
						phi195 = anon198;
					}
					uint16_t anon205 = phi195 << 4;
					uint16_t anon204 = phi195 >> 12 | anon205;
					uint64_t anon203 = (__zext uint64_t)anon204;
					uint64_t anon202 = phi196 & 0xffffffffffff0000 | anon203;
					uint32_t anon201 = (uint32_t)anon202;
					uint32_t anon200 = anon133 ^ anon201;
					uint32_t anon199 = anon200 >> 8;
					if ((anon199 & 0xf) == 0)
					{
						uint32_t anon207 = anon201 | 0xf;
						phi206 = (__zext uint64_t)anon207;
						uint32_t anon209 = anon133 ^ anon207;
						phi208 = anon209;
						phi210 = anon202 >> 8 & 0xffffff;
						uint16_t anon212 = anon205 | 0xf;
						phi211 = anon212;
						phi213 = (__zext uint64_t)anon212;
						phi214 = (uint8_t)(anon209 >> 8);
						phi215 = 256;
					}
					else 
					{
						phi206 = anon202;
						phi208 = anon200;
						phi210 = (__zext uint64_t)(phi195 >> 4);
						phi211 = anon204;
						phi213 = anon203;
						phi214 = (uint8_t)anon199 & 0xf;
						phi215 = 0;
					}
					if (phi214 < 16)
					{
						uint64_t anon217 = phi206 & 0xffffffffffffff00 | phi213 & 0xf | 0xf0;
						phi216 = anon217;
						phi218 = (__zext uint32_t)(*(uint16_t*)phi107 ^ (uint16_t)anon217);
						phi219 = anon133 ^ (uint32_t)anon217;
						phi220 = 256;
					}
					else 
					{
						phi216 = phi206;
						phi218 = phi208;
						phi219 = (__zext uint32_t)(*(uint16_t*)phi107 ^ phi211);
						phi220 = 0;
					}
					uint32_t phi221 = phi218;
					uint16_t phi222 = 0;
					if ((phi219 & 0xf00) == 0)
					{
						phi221 = anon133 ^ (uint32_t)(phi216 & 0xffff00ff | phi210 << 8 & 0xf000 | 0xf00);
						phi222 = 256;
					}
					if ((__zext uint16_t)((uint16_t)phi221 < 4096) + phi192 + phi185 + phi164 + phi159 + (phi129 + phi125 + phi119 << 4) + phi147 + phi152 + phi180 + phi197 + phi215 + phi220 + phi222 == *(uint16_t*)(arg1 - 66))
					{
						*(uint16_t*)(anon12 + (phi106 << 1 & 0x1fffe)) = *(uint16_t*)phi107;
						phi223 = (uint16_t)phi106 + 1;
						anon224 = phi107 + 2;
						uint64_t anon226 = phi46 + 4294967295 & 0xffffffff;
						anon225 = anon226 + anon226 + 2 + anon12;
						if (anon224 != anon225)
						{
							break;
						}
					}
					else 
					{
						phi_in105 = anon224;
						phi106 = phi106;
						if (anon224 == anon225)
						{
							phi223 = (uint16_t)phi106;
						}
					}
				}
				alloca1.field1 = anon103;
				uint16_t* anon227 = (uint16_t*)phi16;
				*anon227 = *anon227;
				if (!(phi223 == 0 | *(uint16_t*)(arg1 - 66) == 64))
				{
					alloca5 = 0;
					uint64_t anon228 = (__zext uint64_t)phi223;
					alloca5 = (__zext uint64_t)*(uint16_t*)(anon12 + ((__sext int64_t)rand() % anon228 << 32 >> 31));
					alloca1.field4 = *(uint16_t*)(anon12 + ((__sext int64_t)rand() % anon228 << 32 >> 31));
					phi46 = anon228;
				}
			}
			phi_in105 = anon224;
			phi106 = phi106 + 1 & 0xffffffff;
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
