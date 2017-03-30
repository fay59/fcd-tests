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
		uint32_t anon107;
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
			uint64_t anon40;
			bool anon41;
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
		do
		{
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
					if (**anon48 == 0)
					{
						if (**anon48 != 0)
						{
							alloca1.field4 = alloca1.field4 - 4369;
						}
					}
					else 
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
						uint32_t phi54;
						uint8_t phi55;
						uint16_t phi56;
						uint8_t phi70;
						uint32_t phi_in71;
						uint32_t phi72;
						uint16_t phi73;
						uint16_t phi79;
						uint32_t phi_in85;
						uint8_t phi86;
						uint32_t phi87;
						uint16_t phi88;
						uint16_t phi94;
						uint32_t phi_in99;
						uint8_t phi100;
						uint32_t phi101;
						uint16_t phi102;
						alloca5 = (__zext uint64_t)alloca1.field4;
						if (((alloca1.field4 ^ *(uint16_t*)phi16) & 0xf) == 0)
						{
							anon53 = (__zext uint32_t)alloca1.field4;
							uint32_t anon52 = anon53 | 0xf;
							alloca5 = (__zext uint64_t)anon52;
							alloca1.field4 = (uint16_t)anon52;
							phi54 = anon52;
							phi55 = (uint8_t)anon52;
							phi56 = 1;
						}
						else 
						{
							alloca1.field4 = alloca1.field4;
							phi54 = anon53;
							phi55 = (uint8_t)alloca1.field4 & 0xf;
							phi56 = 0;
						}
						uint16_t phi57 = alloca1.field4;
						uint32_t phi_in58 = phi54;
						uint16_t phi59 = 0;
						if (((uint8_t)*(uint16_t*)phi16 ^ (uint8_t)phi_in58) < 16)
						{
							*(uint8_t*)&alloca5 = phi55 | 0xf0;
							phi57 = (uint16_t)*(uint32_t*)&alloca5;
							phi_in58 = *(uint32_t*)&alloca5;
							phi59 = 1;
						}
						uint16_t phi_in60 = phi57;
						uint16_t phi_in61 = phi_in60;
						uint16_t phi62 = 0;
						uint32_t phi63 = phi_in58;
						uint32_t anon64 = (__zext uint32_t)*(uint16_t*)phi16;
						if (((anon64 ^ phi_in58) & 0xf00) == 0)
						{
							((uint8_t*)&alloca5)[1] = (uint8_t)(alloca1.field4 >> 8) | 0xf;
							phi_in61 = (uint16_t)*(uint32_t*)&alloca5;
							phi62 = 1;
							phi63 = *(uint32_t*)&alloca5;
						}
						uint16_t phi65 = 0;
						uint16_t phi66 = phi_in61;
						if ((*(uint16_t*)phi16 ^ (uint16_t)phi63) < 4096)
						{
							uint16_t anon67 = phi_in61 | 0xf000;
							*(uint16_t*)&alloca5 = anon67;
							phi65 = 1;
							phi66 = anon67;
						}
						uint16_t* anon68 = (uint16_t*)&alloca5;
						*anon68 = phi66 >> 12 | phi66 << 4;
						if (((anon64 ^ *(uint32_t*)&alloca5) & 0xf) == 0)
						{
							uint32_t anon69 = *(uint32_t*)&alloca5 | 0xf;
							alloca5 = (__zext uint64_t)anon69;
							phi70 = (uint8_t)(*(uint32_t*)&alloca5 >> 8);
							phi_in71 = anon69;
							phi72 = anon69;
							phi73 = 1;
						}
						else 
						{
							phi70 = (uint8_t)(phi66 >> 4);
							phi_in71 = *(uint32_t*)&alloca5;
							phi72 = *(uint32_t*)&alloca5 & 0xf;
							phi73 = 0;
						}
						uint32_t phi_in74 = phi_in71;
						uint16_t phi75 = 0;
						if ((phi_in71 & 0xf0) == 0)
						{
							*(uint8_t*)&alloca5 = (uint8_t)phi72 | 0xf0;
							phi_in74 = *(uint32_t*)&alloca5;
							phi75 = 1;
						}
						uint32_t phi76 = phi_in74;
						uint16_t phi77 = 0;
						if ((phi_in74 & 0xf00) == 0)
						{
							((uint8_t*)&alloca5)[1] = phi70 | 0xf;
							phi76 = *(uint32_t*)&alloca5;
							phi77 = 1;
						}
						uint16_t phi78 = 0;
						uint16_t anon80 = (uint16_t)phi76;
						phi79 = anon80;
						if ((uint16_t)phi76 < 4096)
						{
							uint16_t anon81 = anon80 | 0xf000;
							*anon68 = anon81;
							phi78 = 1;
							phi79 = anon81;
						}
						*anon68 = phi79 >> 12 | phi79 << 4;
						uint32_t anon82 = (__zext uint32_t)(*(uint16_t*)phi16 & 0xf);
						uint32_t anon83 = *(uint32_t*)&alloca5 & 0xf;
						if (anon82 == anon83)
						{
							uint32_t anon84 = *(uint32_t*)&alloca5 | 0xf;
							alloca5 = (__zext uint64_t)anon84;
							phi_in85 = anon84;
							phi86 = (uint8_t)(*(uint32_t*)&alloca5 >> 8);
							phi87 = anon84;
							phi88 = 1;
						}
						else 
						{
							phi_in85 = *(uint32_t*)&alloca5;
							phi86 = (uint8_t)(phi79 >> 4);
							phi87 = anon83;
							phi88 = 0;
						}
						uint32_t phi89 = phi_in85;
						uint16_t phi90 = 0;
						if ((phi_in85 & 0xf0) == 0)
						{
							*(uint8_t*)&alloca5 = (uint8_t)phi87 | 0xf0;
							phi89 = *(uint32_t*)&alloca5;
							phi90 = 1;
						}
						uint32_t phi91 = phi89;
						uint16_t phi92 = 0;
						if ((phi91 & 0xf00) == 0)
						{
							((uint8_t*)&alloca5)[1] = phi86 | 0xf;
							phi91 = *(uint32_t*)&alloca5;
							phi92 = 1;
						}
						uint16_t phi93 = 0;
						uint16_t anon95 = (uint16_t)phi91;
						phi94 = anon95;
						if ((uint16_t)phi91 < 4096)
						{
							uint16_t anon96 = anon95 | 0xf000;
							*anon68 = anon96;
							phi93 = 1;
							phi94 = anon96;
						}
						*anon68 = phi94 >> 12 | phi94 << 4;
						uint32_t anon97 = *(uint32_t*)&alloca5 & 0xf;
						if (anon82 == anon97)
						{
							uint32_t anon98 = *(uint32_t*)&alloca5 | 0xf;
							alloca5 = (__zext uint64_t)anon98;
							phi_in99 = anon98;
							phi100 = (uint8_t)(*(uint32_t*)&alloca5 >> 8);
							phi101 = anon98;
							phi102 = 1;
						}
						else 
						{
							phi_in99 = *(uint32_t*)&alloca5;
							phi100 = (uint8_t)(phi94 >> 4);
							phi101 = anon97;
							phi102 = 0;
						}
						uint32_t phi103 = phi_in99;
						uint16_t phi104 = 0;
						if ((phi_in99 & 0xf0) == 0)
						{
							*(uint8_t*)&alloca5 = (uint8_t)phi101 | 0xf0;
							phi103 = *(uint32_t*)&alloca5;
							phi104 = 1;
						}
						uint32_t phi105 = phi103;
						uint16_t phi106 = 0;
						if ((phi105 & 0xf00) == 0)
						{
							((uint8_t*)&alloca5)[1] = phi100 | 0xf;
							phi106 = 1;
							phi105 = *(uint32_t*)&alloca5;
						}
						alloca1.field5 = (__zext uint16_t)((uint16_t)phi105 < 4096) + phi106 + phi75 + (phi65 + phi56 + phi59 + phi62 << 4 | phi73) + phi77 + phi78 + phi88 + phi90 + phi92 + phi93 + phi102 + phi104;
						alloca5 = 0;
						alloca5 = (__zext uint64_t)printf((uint8_t*)0x400eb3);
						break;
					}
				}
			}
			alloca1.field1 = 0;
			anon107 = (uint32_t)phi46;
			if (anon107 != 0)
			{
				uint16_t phi227;
				uint64_t anon108 = (__zext uint64_t)alloca1.field4;
				alloca5 = anon108;
				uint64_t phi_in109 = anon12;
				uint64_t phi110 = 0;
				while (true)
				{
					uint64_t phi_in114;
					uint16_t phi116;
					uint16_t phi117;
					uint16_t phi_in118;
					uint8_t phi119;
					uint64_t phi_in144;
					uint64_t phi146;
					uint16_t phi_in147;
					uint16_t phi_in148;
					uint64_t phi150;
					uint8_t phi151;
					uint16_t phi152;
					uint16_t phi161;
					uint64_t phi175;
					uint16_t phi_in177;
					uint16_t phi178;
					uint64_t phi180;
					uint64_t phi181;
					uint8_t phi182;
					uint16_t phi183;
					uint16_t phi192;
					uint64_t phi_in210;
					uint32_t phi_in212;
					uint64_t phi214;
					uint16_t phi215;
					uint64_t phi217;
					uint8_t phi218;
					uint16_t phi219;
					uint64_t phi220;
					uint32_t phi222;
					uint32_t phi223;
					uint16_t phi224;
					uint64_t anon228;
					uint64_t anon229;
					uint64_t phi111 = phi_in109;
					uint16_t anon113 = alloca1.field4 ^ *(uint16_t*)phi111;
					uint32_t anon112 = (__zext uint32_t)anon113 >> 8;
					if ((anon112 & 0xf) == 0)
					{
						uint16_t anon115 = alloca1.field4 | 0xf;
						phi_in114 = (__zext uint64_t)anon115;
						phi116 = anon115;
						phi117 = 1;
						phi_in118 = 2;
						phi119 = (uint8_t)(anon113 >> 8);
					}
					else 
					{
						phi_in114 = anon108;
						phi116 = alloca1.field4;
						phi117 = 0;
						phi_in118 = 1;
						phi119 = (uint8_t)anon112 & 0xf;
					}
					uint16_t phi_in120 = phi116;
					phi_in118 = phi117;
					uint64_t phi121 = phi_in114;
					uint16_t phi122 = phi_in120;
					uint16_t phi123 = phi_in120 ^ *(uint16_t*)phi111;
					uint16_t phi124 = phi_in118;
					if (phi119 < 16)
					{
						uint64_t anon125 = phi_in114 & 0xff00 | (__zext uint64_t)(phi_in120 & 0xf | 0xf0);
						phi121 = anon125;
						uint16_t anon126 = (uint16_t)anon125;
						phi122 = anon126;
						phi123 = *(uint16_t*)phi111 ^ anon126;
						phi124 = phi_in118;
					}
					uint16_t phi127 = phi122;
					uint16_t phi128 = 0;
					if ((phi123 & 0xf00) == 0)
					{
						uint64_t anon129 = phi121 & 0xffffffffffff00ff | (__zext uint64_t)(phi_in120 & 0xf000 | 0xf00);
						phi121 = anon129;
						uint16_t anon130 = (uint16_t)anon129;
						phi127 = anon130;
						phi123 = *(uint16_t*)phi111 ^ anon130;
						phi128 = 256;
					}
					uint64_t phi_in131 = phi121;
					uint16_t phi_in132 = phi127;
					uint64_t phi133 = phi_in131;
					uint16_t phi134 = 0;
					uint16_t phi135 = phi_in132;
					if (phi123 < 4096)
					{
						uint16_t anon136 = phi_in132 | 0xf000;
						phi133 = phi_in131 & 0xffffffffffff0000 | (__zext uint64_t)anon136;
						phi134 = 256;
						phi135 = anon136;
					}
					uint32_t anon138 = (__zext uint32_t)*(uint16_t*)phi111;
					uint16_t anon143 = phi135 << 4;
					uint16_t anon142 = phi135 >> 12 | anon143;
					uint64_t anon141 = (__zext uint64_t)anon142;
					uint64_t anon140 = phi133 & 0xffffffffffff0000 | anon141;
					uint32_t anon139 = (uint32_t)anon140;
					uint32_t anon137 = (anon138 ^ anon139) >> 8;
					if ((anon137 & 0xf) == 0)
					{
						uint32_t anon145 = anon139 | 0xf;
						phi_in144 = (__zext uint64_t)anon145;
						phi146 = anon140 >> 8 & 0xffffff;
						phi_in147 = (uint16_t)anon145;
						uint16_t anon149 = anon143 | 0xf;
						phi_in148 = anon149;
						phi150 = (__zext uint64_t)anon149;
						phi151 = (uint8_t)anon137;
						phi152 = 256;
					}
					else 
					{
						phi_in144 = anon140;
						phi146 = (__zext uint64_t)(phi135 >> 4);
						phi_in147 = anon142;
						phi_in148 = anon142;
						phi150 = anon141;
						phi151 = (uint8_t)anon137 & 0xf;
						phi152 = 0;
					}
					uint64_t phi_in153 = phi_in144;
					uint16_t phi154 = phi_in147;
					uint16_t phi155 = phi_in148;
					uint16_t phi156 = 0;
					if (phi151 < 16)
					{
						uint64_t anon157 = phi_in144 & 0xffffffffffffff00 | phi150 & 0xf | 0xf0;
						phi_in153 = anon157;
						uint16_t anon158 = (uint16_t)anon157;
						phi154 = anon158;
						phi155 = anon158;
						phi156 = 256;
					}
					uint16_t phi159 = phi154;
					uint64_t phi160 = phi_in153;
					uint16_t anon162 = *(uint16_t*)phi111 ^ phi155;
					phi161 = anon162;
					uint16_t phi163 = 0;
					if ((anon162 & 0xf00) == 0)
					{
						uint64_t anon164 = phi_in153 & 0xffffffffffff00ff | phi146 << 8 & 0xf000 | 0xf00;
						phi160 = anon164;
						uint16_t anon165 = (uint16_t)anon164;
						phi159 = anon165;
						phi161 = *(uint16_t*)phi111 ^ anon165;
						phi163 = 256;
					}
					uint16_t phi166 = phi159;
					uint16_t phi167 = 0;
					if (phi161 < 4096)
					{
						uint16_t anon168 = phi166 | 0xf000;
						phi160 = phi160 & 0xffffffffffff0000 | (__zext uint64_t)anon168;
						phi167 = 256;
						phi166 = anon168;
					}
					uint16_t anon174 = phi166 << 4;
					uint16_t anon173 = phi166 >> 12 | anon174;
					uint64_t anon172 = (__zext uint64_t)anon173;
					uint64_t anon171 = phi160 & 0xffffffffffff0000 | anon172;
					uint32_t anon170 = (uint32_t)anon171;
					uint32_t anon169 = (anon138 ^ anon170) >> 8;
					if ((anon169 & 0xf) == 0)
					{
						uint32_t anon176 = anon170 | 0xf;
						phi175 = (__zext uint64_t)anon176;
						phi_in177 = (uint16_t)anon176;
						uint16_t anon179 = anon174 | 0xf;
						phi178 = anon179;
						phi180 = anon171 >> 8 & 0xffffff;
						phi181 = (__zext uint64_t)anon179;
						phi182 = (uint8_t)anon169;
						phi183 = 256;
					}
					else 
					{
						phi175 = anon171;
						phi_in177 = anon173;
						phi178 = anon173;
						phi180 = (__zext uint64_t)(phi166 >> 4);
						phi181 = anon172;
						phi182 = (uint8_t)anon169 & 0xf;
						phi183 = 0;
					}
					uint64_t phi_in184 = phi175;
					uint16_t phi185 = phi178;
					uint64_t phi186 = phi_in184;
					uint16_t phi_in187 = phi_in177;
					uint16_t phi188 = 0;
					if (phi182 < 16)
					{
						uint64_t anon189 = phi_in184 & 0xffffffffffffff00 | phi181 & 0xf | 0xf0;
						phi186 = anon189;
						uint16_t anon190 = (uint16_t)anon189;
						phi_in187 = anon190;
						phi185 = anon190;
						phi188 = 256;
					}
					uint16_t phi191 = phi_in187;
					uint16_t anon193 = *(uint16_t*)phi111 ^ phi185;
					phi192 = anon193;
					uint16_t phi194 = 0;
					if ((anon193 & 0xf00) == 0)
					{
						uint64_t anon195 = phi186 & 0xffffffffffff00ff | phi180 << 8 & 0xf000 | 0xf00;
						phi186 = anon195;
						uint16_t anon196 = (uint16_t)anon195;
						phi191 = anon196;
						phi192 = *(uint16_t*)phi111 ^ anon196;
						phi194 = 256;
					}
					uint64_t phi_in197 = phi186;
					uint16_t phi_in198 = phi191;
					uint64_t phi199 = phi_in197;
					uint16_t phi200 = 0;
					uint16_t phi201 = phi_in198;
					if (phi192 < 4096)
					{
						uint16_t anon202 = phi_in198 | 0xf000;
						phi199 = phi_in197 & 0xffffffffffff0000 | (__zext uint64_t)anon202;
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
						phi_in210 = (__zext uint64_t)anon211;
						uint32_t anon213 = anon138 ^ anon211;
						phi_in212 = anon213;
						phi214 = anon206 >> 8 & 0xffffff;
						uint16_t anon216 = anon209 | 0xf;
						phi215 = anon216;
						phi217 = (__zext uint64_t)anon216;
						phi218 = (uint8_t)(anon213 >> 8);
						phi219 = 256;
					}
					else 
					{
						phi_in210 = anon206;
						phi_in212 = anon204;
						phi214 = (__zext uint64_t)(phi201 >> 4);
						phi215 = anon208;
						phi217 = anon207;
						phi218 = (uint8_t)anon203 & 0xf;
						phi219 = 0;
					}
					if (phi218 < 16)
					{
						uint64_t anon221 = phi_in210 & 0xffffffffffffff00 | phi217 & 0xf | 0xf0;
						phi220 = anon221;
						phi222 = (__zext uint32_t)(*(uint16_t*)phi111 ^ (uint16_t)anon221);
						phi223 = anon138 ^ (uint32_t)anon221;
						phi224 = 256;
					}
					else 
					{
						phi220 = phi_in210;
						phi222 = phi_in212;
						phi223 = (__zext uint32_t)(*(uint16_t*)phi111 ^ phi215);
						phi224 = 0;
					}
					uint32_t phi225 = phi222;
					uint16_t phi226 = 0;
					if ((phi223 & 0xf00) == 0)
					{
						phi225 = anon138 ^ (uint32_t)(phi220 & 0xffff00ff | phi214 << 8 & 0xf000 | 0xf00);
						phi226 = 256;
					}
					if ((__zext uint16_t)((uint16_t)phi225 < 4096) + phi194 + phi188 + phi167 + phi163 + (phi134 + phi128 + phi124 << 4) + phi152 + phi156 + phi183 + phi200 + phi219 + phi224 + phi226 == *(uint16_t*)(arg1 - 66))
					{
						*(uint16_t*)(anon12 + (phi110 << 1 & 0x1fffe)) = *(uint16_t*)phi111;
						phi227 = (uint16_t)phi110 + 1;
						anon228 = phi111 + 2;
						uint64_t anon230 = phi46 + 4294967295 & 0xffffffff;
						anon229 = anon230 + anon230 + 2 + anon12;
						if (anon228 == anon229)
						{
							break;
						}
						else 
						{
							phi_in109 = anon228;
							phi110 = phi110 + 1 & 0xffffffff;
						}
					}
					else 
					{
						phi_in109 = anon228;
						phi110 = phi110;
						if (anon228 == anon229)
						{
							phi227 = (uint16_t)phi110;
							break;
						}
					}
				}
				alloca1.field1 = anon107;
				uint16_t* anon231 = (uint16_t*)phi16;
				*anon231 = *anon231;
				if (phi227 == 0 | *(uint16_t*)(arg1 - 66) == 64)
				{
					break;
				}
				else 
				{
					alloca5 = 0;
					uint64_t anon232 = (__zext uint64_t)phi227;
					alloca5 = (__zext uint64_t)*(uint16_t*)(anon12 + ((__sext int64_t)rand() % anon232 << 32 >> 31));
					alloca1.field4 = *(uint16_t*)(anon12 + ((__sext int64_t)rand() % anon232 << 32 >> 31));
					phi46 = anon232;
				}
			}
		}
		while (anon107 != 0);
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
