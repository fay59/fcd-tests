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
		uint64_t phi18;
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
			uint64_t anon40;
			bool anon41;
			uint32_t anon45;
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
				uint16_t phi30 = anon28;
				if (((phi10 ^ anon29) & 0xf) == 0)
				{
					uint32_t anon33 = 16 - phi10;
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
							uint16_t anon39 = (uint16_t)phi10 << 12;
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
				anon45 = phi24 + 1 & 0xffff;
				anon41 = (uint8_t)(anon42 >> 31) == (__zext uint8_t)llvm.ssub.with.overflow.i32(anon14, anon45).field1 & anon42 != 0;
				if (anon41)
				{
					phi_in22 = anon43;
					phi23 = (__zext uint64_t)anon44;
				}
			}
			while (anon41);
			phi16 = anon40;
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
			uint64_t phi_in109;
			uint64_t phi110;
			uint64_t anon232;
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
						uint16_t phi_in54;
						uint32_t phi_in55;
						uint8_t phi56;
						uint16_t phi57;
						uint8_t phi68;
						uint32_t phi69;
						uint32_t phi70;
						uint16_t phi71;
						uint16_t phi77;
						uint32_t phi83;
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
							anon53 = (__zext uint32_t)alloca1.field4;
							uint32_t anon52 = anon53 | 0xf;
							alloca5 = (__zext uint64_t)anon52;
							phi_in54 = (uint16_t)anon52;
							phi_in55 = anon52;
							phi56 = (uint8_t)anon52;
							phi57 = 1;
						}
						else 
						{
							phi_in54 = alloca1.field4;
							phi_in55 = anon53;
							phi56 = (uint8_t)alloca1.field4 & 0xf;
							phi57 = 0;
						}
						uint16_t phi58 = 0;
						if (((uint8_t)*(uint16_t*)phi16 ^ (uint8_t)phi_in55) < 16)
						{
							*(uint8_t*)&alloca5 = phi56 | 0xf0;
							phi_in54 = (uint16_t)*(uint32_t*)&alloca5;
							phi_in55 = *(uint32_t*)&alloca5;
							phi58 = 1;
						}
						uint16_t phi_in59 = phi_in54;
						uint16_t phi60 = 0;
						uint32_t phi61 = phi_in55;
						uint32_t anon62 = (__zext uint32_t)*(uint16_t*)phi16;
						if (((anon62 ^ phi_in55) & 0xf00) == 0)
						{
							((uint8_t*)&alloca5)[1] = (uint8_t)(alloca1.field4 >> 8) | 0xf;
							phi_in59 = (uint16_t)*(uint32_t*)&alloca5;
							phi60 = 1;
							phi61 = *(uint32_t*)&alloca5;
						}
						uint16_t phi63 = 0;
						uint16_t phi64 = phi_in59;
						if ((*(uint16_t*)phi16 ^ (uint16_t)phi61) < 4096)
						{
							uint16_t anon65 = phi_in59 | 0xf000;
							*(uint16_t*)&alloca5 = anon65;
							phi63 = 1;
							phi64 = anon65;
						}
						uint16_t* anon66 = (uint16_t*)&alloca5;
						*anon66 = phi64 >> 12 | phi64 << 4;
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
							phi68 = (uint8_t)(phi64 >> 4);
							phi69 = *(uint32_t*)&alloca5;
							phi70 = *(uint32_t*)&alloca5 & 0xf;
							phi71 = 0;
						}
						uint32_t phi_in72 = phi69;
						uint16_t phi73 = 0;
						if ((phi_in72 & 0xf0) == 0)
						{
							*(uint8_t*)&alloca5 = (uint8_t)phi70 | 0xf0;
							phi_in72 = *(uint32_t*)&alloca5;
							phi73 = 1;
						}
						uint32_t phi74 = phi_in72;
						uint16_t phi75 = 0;
						if ((phi_in72 & 0xf00) == 0)
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
							phi83 = anon82;
							phi84 = (uint8_t)(*(uint32_t*)&alloca5 >> 8);
							phi85 = anon82;
							phi86 = 1;
						}
						else 
						{
							phi83 = *(uint32_t*)&alloca5;
							phi84 = (uint8_t)(phi77 >> 4);
							phi85 = anon81;
							phi86 = 0;
						}
						uint32_t phi_in87 = phi83;
						uint32_t phi88 = phi_in87;
						uint16_t phi89 = 0;
						if ((phi_in87 & 0xf0) == 0)
						{
							*(uint8_t*)&alloca5 = (uint8_t)phi85 | 0xf0;
							phi88 = *(uint32_t*)&alloca5;
							phi89 = 1;
						}
						uint32_t phi90 = phi88;
						uint16_t phi91 = 0;
						if ((phi90 & 0xf00) == 0)
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
						uint32_t phi102 = phi98;
						uint16_t phi103 = 0;
						if ((phi102 & 0xf0) == 0)
						{
							*(uint8_t*)&alloca5 = (uint8_t)phi100 | 0xf0;
							phi102 = *(uint32_t*)&alloca5;
							phi103 = 1;
						}
						uint32_t phi_in104 = phi102;
						uint16_t phi105 = 0;
						uint32_t phi106 = phi_in104;
						if ((phi_in104 & 0xf00) == 0)
						{
							((uint8_t*)&alloca5)[1] = phi99 | 0xf;
							phi105 = 1;
							phi106 = *(uint32_t*)&alloca5;
						}
						alloca1.field5 = (__zext uint16_t)((uint16_t)phi106 < 4096) + phi105 + phi73 + (phi63 + phi57 + phi58 + phi60 << 4 | phi71) + phi75 + phi76 + phi86 + phi89 + phi91 + phi92 + phi101 + phi103;
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
				uint16_t phi231;
				uint64_t anon108 = (__zext uint64_t)alloca1.field4;
				alloca5 = anon108;
				phi_in109 = anon12;
				phi110 = 0;
				while (true)
				{
					uint64_t phi_in114;
					uint16_t phi_in116;
					uint16_t phi117;
					uint16_t phi118;
					uint8_t phi119;
					uint64_t phi_in143;
					uint64_t phi145;
					uint16_t phi146;
					uint16_t phi147;
					uint64_t phi149;
					uint8_t phi150;
					uint16_t phi151;
					uint16_t phi162;
					uint64_t phi178;
					uint16_t phi180;
					uint16_t phi181;
					uint64_t phi183;
					uint64_t phi184;
					uint8_t phi185;
					uint16_t phi186;
					uint16_t phi197;
					uint64_t phi213;
					uint32_t phi215;
					uint64_t phi217;
					uint16_t phi218;
					uint64_t phi220;
					uint8_t phi221;
					uint16_t phi222;
					uint32_t phi226;
					uint16_t phi227;
					uint64_t anon233;
					uint64_t phi111 = phi_in109;
					uint16_t anon113 = alloca1.field4 ^ *(uint16_t*)phi111;
					uint32_t anon112 = (__zext uint32_t)anon113 >> 8;
					if ((anon112 & 0xf) == 0)
					{
						uint16_t anon115 = alloca1.field4 | 0xf;
						phi_in114 = (__zext uint64_t)anon115;
						phi_in116 = anon115;
						phi117 = 1;
						phi118 = 2;
						phi119 = (uint8_t)(anon113 >> 8);
					}
					else 
					{
						phi_in114 = anon108;
						phi_in116 = alloca1.field4;
						phi117 = 0;
						phi118 = 1;
						phi119 = (uint8_t)anon112 & 0xf;
					}
					uint16_t phi120 = phi117;
					phi120 = phi118;
					uint16_t phi_in121 = phi_in116;
					uint16_t phi122 = phi_in116 ^ *(uint16_t*)phi111;
					if (phi119 < 16)
					{
						uint64_t anon123 = phi_in114 & 0xff00 | (__zext uint64_t)(phi_in116 & 0xf | 0xf0);
						phi_in114 = anon123;
						uint16_t anon124 = (uint16_t)anon123;
						phi_in121 = anon124;
						phi122 = *(uint16_t*)phi111 ^ anon124;
					}
					uint16_t phi125 = phi122;
					uint64_t phi126 = phi_in114;
					uint16_t phi_in127 = phi_in121;
					uint16_t phi128 = 0;
					if ((phi125 & 0xf00) == 0)
					{
						uint64_t anon129 = phi_in114 & 0xffffffffffff00ff | (__zext uint64_t)(phi_in116 & 0xf000 | 0xf00);
						phi126 = anon129;
						uint16_t anon130 = (uint16_t)anon129;
						phi_in127 = anon130;
						phi125 = *(uint16_t*)phi111 ^ anon130;
						phi128 = 256;
					}
					uint64_t phi_in131 = phi126;
					uint64_t phi132 = phi_in131;
					uint16_t phi133 = 0;
					uint16_t phi134 = phi_in127;
					if (phi125 < 4096)
					{
						uint16_t anon135 = phi_in127 | 0xf000;
						phi132 = phi_in131 & 0xffffffffffff0000 | (__zext uint64_t)anon135;
						phi133 = 256;
						phi134 = anon135;
					}
					uint32_t anon137 = (__zext uint32_t)*(uint16_t*)phi111;
					uint16_t anon142 = phi134 << 4;
					uint16_t anon141 = phi134 >> 12 | anon142;
					uint64_t anon140 = (__zext uint64_t)anon141;
					uint64_t anon139 = phi132 & 0xffffffffffff0000 | anon140;
					uint32_t anon138 = (uint32_t)anon139;
					uint32_t anon136 = (anon137 ^ anon138) >> 8;
					if ((anon136 & 0xf) == 0)
					{
						uint32_t anon144 = anon138 | 0xf;
						phi_in143 = (__zext uint64_t)anon144;
						phi145 = anon139 >> 8 & 0xffffff;
						phi146 = (uint16_t)anon144;
						uint16_t anon148 = anon142 | 0xf;
						phi147 = anon148;
						phi149 = (__zext uint64_t)anon148;
						phi150 = (uint8_t)anon136;
						phi151 = 256;
					}
					else 
					{
						phi_in143 = anon139;
						phi145 = (__zext uint64_t)(phi134 >> 4);
						phi146 = anon141;
						phi147 = anon141;
						phi149 = anon140;
						phi150 = (uint8_t)anon136 & 0xf;
						phi151 = 0;
					}
					uint16_t phi_in152 = phi146;
					uint16_t phi153 = phi147;
					uint64_t phi_in154 = phi_in143;
					uint16_t phi155 = phi_in152;
					uint16_t phi156 = 0;
					if (phi150 < 16)
					{
						uint64_t anon157 = phi_in143 & 0xffffffffffffff00 | phi149 & 0xf | 0xf0;
						phi_in154 = anon157;
						uint16_t anon158 = (uint16_t)anon157;
						phi155 = anon158;
						phi153 = anon158;
						phi156 = 256;
					}
					uint16_t phi_in159 = phi155;
					uint64_t phi160 = phi_in154;
					uint16_t phi161 = phi_in159;
					uint16_t anon163 = *(uint16_t*)phi111 ^ phi153;
					phi162 = anon163;
					uint16_t phi164 = 0;
					if ((anon163 & 0xf00) == 0)
					{
						uint64_t anon165 = phi_in154 & 0xffffffffffff00ff | phi145 << 8 & 0xf000 | 0xf00;
						phi160 = anon165;
						uint16_t anon166 = (uint16_t)anon165;
						phi161 = anon166;
						phi162 = *(uint16_t*)phi111 ^ anon166;
						phi164 = 256;
					}
					uint64_t phi167 = phi160;
					uint16_t phi_in168 = phi161;
					uint16_t phi169 = 0;
					uint16_t phi170 = phi_in168;
					if (phi162 < 4096)
					{
						uint16_t anon171 = phi_in168 | 0xf000;
						phi167 = phi167 & 0xffffffffffff0000 | (__zext uint64_t)anon171;
						phi169 = 256;
						phi170 = anon171;
					}
					uint16_t anon177 = phi170 << 4;
					uint16_t anon176 = phi170 >> 12 | anon177;
					uint64_t anon175 = (__zext uint64_t)anon176;
					uint64_t anon174 = phi167 & 0xffffffffffff0000 | anon175;
					uint32_t anon173 = (uint32_t)anon174;
					uint32_t anon172 = (anon137 ^ anon173) >> 8;
					if ((anon172 & 0xf) == 0)
					{
						uint32_t anon179 = anon173 | 0xf;
						phi178 = (__zext uint64_t)anon179;
						phi180 = (uint16_t)anon179;
						uint16_t anon182 = anon177 | 0xf;
						phi181 = anon182;
						phi183 = anon174 >> 8 & 0xffffff;
						phi184 = (__zext uint64_t)anon182;
						phi185 = (uint8_t)anon172;
						phi186 = 256;
					}
					else 
					{
						phi178 = anon174;
						phi180 = anon176;
						phi181 = anon176;
						phi183 = (__zext uint64_t)(phi170 >> 4);
						phi184 = anon175;
						phi185 = (uint8_t)anon172 & 0xf;
						phi186 = 0;
					}
					uint64_t phi_in187 = phi178;
					uint16_t phi188 = phi180;
					uint16_t phi189 = phi181;
					uint64_t phi_in190 = phi_in187;
					uint16_t phi191 = 0;
					if (phi185 < 16)
					{
						uint64_t anon192 = phi_in187 & 0xffffffffffffff00 | phi184 & 0xf | 0xf0;
						phi_in190 = anon192;
						uint16_t anon193 = (uint16_t)anon192;
						phi188 = anon193;
						phi189 = anon193;
						phi191 = 256;
					}
					uint16_t phi_in194 = phi188;
					uint64_t phi_in195 = phi_in190;
					uint16_t phi_in196 = phi_in194;
					uint16_t anon198 = *(uint16_t*)phi111 ^ phi189;
					phi197 = anon198;
					uint16_t phi199 = 0;
					if ((anon198 & 0xf00) == 0)
					{
						uint64_t anon200 = phi_in190 & 0xffffffffffff00ff | phi183 << 8 & 0xf000 | 0xf00;
						phi_in195 = anon200;
						uint16_t anon201 = (uint16_t)anon200;
						phi_in196 = anon201;
						phi197 = *(uint16_t*)phi111 ^ anon201;
						phi199 = 256;
					}
					uint64_t phi202 = phi_in195;
					uint16_t phi203 = 0;
					uint16_t phi204 = phi_in196;
					if (phi197 < 4096)
					{
						uint16_t anon205 = phi_in196 | 0xf000;
						phi202 = phi_in195 & 0xffffffffffff0000 | (__zext uint64_t)anon205;
						phi203 = 256;
						phi204 = anon205;
					}
					uint16_t anon212 = phi204 << 4;
					uint16_t anon211 = phi204 >> 12 | anon212;
					uint64_t anon210 = (__zext uint64_t)anon211;
					uint64_t anon209 = phi202 & 0xffffffffffff0000 | anon210;
					uint32_t anon208 = (uint32_t)anon209;
					uint32_t anon207 = anon137 ^ anon208;
					uint32_t anon206 = anon207 >> 8;
					if ((anon206 & 0xf) == 0)
					{
						uint32_t anon214 = anon208 | 0xf;
						phi213 = (__zext uint64_t)anon214;
						uint32_t anon216 = anon137 ^ anon214;
						phi215 = anon216;
						phi217 = anon209 >> 8 & 0xffffff;
						uint16_t anon219 = anon212 | 0xf;
						phi218 = anon219;
						phi220 = (__zext uint64_t)anon219;
						phi221 = (uint8_t)(anon216 >> 8);
						phi222 = 256;
					}
					else 
					{
						phi213 = anon209;
						phi215 = anon207;
						phi217 = (__zext uint64_t)(phi204 >> 4);
						phi218 = anon211;
						phi220 = anon210;
						phi221 = (uint8_t)anon206 & 0xf;
						phi222 = 0;
					}
					uint64_t phi223 = phi213;
					uint32_t phi224 = phi215;
					if (phi221 < 16)
					{
						uint64_t anon225 = phi223 & 0xffffffffffffff00 | phi220 & 0xf | 0xf0;
						phi223 = anon225;
						phi224 = (__zext uint32_t)(*(uint16_t*)phi111 ^ (uint16_t)anon225);
						phi226 = anon137 ^ (uint32_t)anon225;
						phi227 = 256;
					}
					else 
					{
						phi226 = (__zext uint32_t)(*(uint16_t*)phi111 ^ phi218);
						phi227 = 0;
					}
					uint32_t phi_in228 = phi224;
					uint32_t phi229 = phi_in228;
					uint16_t phi230 = 0;
					if ((phi226 & 0xf00) == 0)
					{
						phi229 = anon137 ^ (uint32_t)(phi223 & 0xffff00ff | phi217 << 8 & 0xf000 | 0xf00);
						phi230 = 256;
					}
					if ((__zext uint16_t)((uint16_t)phi229 < 4096) + phi199 + phi191 + phi169 + phi164 + (phi133 + phi128 + phi120 << 4) + phi151 + phi156 + phi186 + phi203 + phi222 + phi227 + phi230 == *(uint16_t*)(arg1 - 66))
					{
						*(uint16_t*)(anon12 + (phi110 << 1 & 0x1fffe)) = *(uint16_t*)phi111;
						phi231 = (uint16_t)phi110 + 1;
						anon232 = phi111 + 2;
						uint64_t anon234 = phi46 + 4294967295 & 0xffffffff;
						anon233 = anon234 + anon234 + 2 + anon12;
						if (anon232 != anon233)
						{
							break;
						}
					}
					else 
					{
						phi_in109 = anon232;
						phi110 = phi110;
						if (anon232 == anon233)
						{
							phi231 = (uint16_t)phi110;
						}
					}
				}
				alloca1.field1 = anon107;
				uint16_t* anon235 = (uint16_t*)phi16;
				*anon235 = *anon235;
				if (!(phi231 == 0 | *(uint16_t*)(arg1 - 66) == 64))
				{
					alloca5 = 0;
					uint64_t anon236 = (__zext uint64_t)phi231;
					alloca5 = (__zext uint64_t)*(uint16_t*)(anon12 + ((__sext int64_t)rand() % anon236 << 32 >> 31));
					alloca1.field4 = *(uint16_t*)(anon12 + ((__sext int64_t)rand() % anon236 << 32 >> 31));
					phi46 = anon236;
				}
			}
			phi_in109 = anon232;
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
