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
			uint32_t anon46;
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
			phi18 = (__zext uint64_t)anon46;
		}
		uint64_t phi47 = phi18;
		uint64_t anon48 = (uint64_t)&alloca1.field4;
		alloca5 = anon48;
		alloca5 = 0;
		alloca5 = (__zext uint64_t)*(uint16_t*)(anon12 + ((__sext int64_t)rand() % (__zext uint64_t)phi17 << 32 >> 31));
		uint8_t** anon49 = (uint8_t**)arg3;
		*(uint16_t*)(**anon49 == 0 ? phi16 : anon48) = *(uint16_t*)(anon12 + ((__sext int64_t)rand() % (__zext uint64_t)phi17 << 32 >> 31));
		while (true)
		{
			uint64_t phi_in107;
			uint64_t phi108;
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
					if (**anon49 == 0)
					{
						if (**anon49 != 0)
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
				if (**anon49 == 0 && **anon49 == 0 || **anon49 != 0 && **anon49 == 0 && **anon49 == 0 || **anon49 != 0 && **anon49 != 0)
				{
					alloca5 = 0;
					alloca5 = (__zext uint64_t)printf((uint8_t*)0x400eae);
					*(uint8_t*)&alloca5 = *anon50;
					((uint8_t*)&alloca5)[1] = anon51;
					*(uint48_t*)&((uint8_t*)&alloca5)[2] = *anon52;
				}
				if (**anon49 == 0)
				{
					if (**anon49 == 0 && **anon49 == 0 || **anon49 != 0 && **anon49 == 0 && **anon49 == 0 || **anon49 != 0 && **anon49 != 0)
					{
						uint32_t anon54;
						uint16_t phi_in55;
						uint32_t phi56;
						uint8_t phi57;
						uint16_t phi58;
						uint8_t phi70;
						uint32_t phi71;
						uint32_t phi72;
						uint16_t phi73;
						uint16_t phi79;
						uint32_t phi85;
						uint8_t phi86;
						uint32_t phi87;
						uint16_t phi88;
						uint16_t phi93;
						uint32_t phi98;
						uint8_t phi99;
						uint32_t phi100;
						uint16_t phi101;
						alloca5 = (__zext uint64_t)alloca1.field4;
						if (((alloca1.field4 ^ *(uint16_t*)phi16) & 0xf) == 0)
						{
							anon54 = (__zext uint32_t)alloca1.field4;
							uint32_t anon53 = anon54 | 0xf;
							alloca5 = (__zext uint64_t)anon53;
							phi_in55 = (uint16_t)anon53;
							phi56 = anon53;
							phi57 = (uint8_t)anon53;
							phi58 = 1;
						}
						else 
						{
							phi_in55 = alloca1.field4;
							phi56 = anon54;
							phi57 = (uint8_t)alloca1.field4 & 0xf;
							phi58 = 0;
						}
						uint16_t phi59 = phi_in55;
						uint32_t phi60 = phi56;
						uint16_t phi61 = 0;
						if (((uint8_t)*(uint16_t*)phi16 ^ (uint8_t)phi56) < 16)
						{
							*(uint8_t*)&alloca5 = phi57 | 0xf0;
							phi59 = (uint16_t)*(uint32_t*)&alloca5;
							phi60 = *(uint32_t*)&alloca5;
							phi61 = 1;
						}
						uint16_t phi62 = 0;
						uint32_t phi63 = phi60;
						uint32_t anon64 = (__zext uint32_t)*(uint16_t*)phi16;
						if (((anon64 ^ phi60) & 0xf00) == 0)
						{
							((uint8_t*)&alloca5)[1] = (uint8_t)(alloca1.field4 >> 8) | 0xf;
							phi59 = (uint16_t)*(uint32_t*)&alloca5;
							phi62 = 1;
							phi63 = *(uint32_t*)&alloca5;
						}
						uint16_t phi65 = 0;
						uint16_t phi66 = phi59;
						if ((*(uint16_t*)phi16 ^ (uint16_t)phi63) < 4096)
						{
							uint16_t anon67 = phi59 | 0xf000;
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
							phi71 = anon69;
							phi72 = anon69;
							phi73 = 1;
						}
						else 
						{
							phi70 = (uint8_t)(phi66 >> 4);
							phi71 = *(uint32_t*)&alloca5;
							phi72 = *(uint32_t*)&alloca5 & 0xf;
							phi73 = 0;
						}
						uint32_t phi74 = phi71;
						uint16_t phi75 = 0;
						if ((phi71 & 0xf0) == 0)
						{
							*(uint8_t*)&alloca5 = (uint8_t)phi72 | 0xf0;
							phi74 = *(uint32_t*)&alloca5;
							phi75 = 1;
						}
						uint32_t phi76 = phi74;
						uint16_t phi77 = 0;
						if ((phi76 & 0xf00) == 0)
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
							phi85 = anon84;
							phi86 = (uint8_t)(*(uint32_t*)&alloca5 >> 8);
							phi87 = anon84;
							phi88 = 1;
						}
						else 
						{
							phi85 = *(uint32_t*)&alloca5;
							phi86 = (uint8_t)(phi79 >> 4);
							phi87 = anon83;
							phi88 = 0;
						}
						uint32_t phi89 = phi85;
						uint16_t phi90 = 0;
						if ((phi85 & 0xf0) == 0)
						{
							*(uint8_t*)&alloca5 = (uint8_t)phi87 | 0xf0;
							phi89 = *(uint32_t*)&alloca5;
							phi90 = 1;
						}
						uint16_t phi91 = 0;
						if ((phi89 & 0xf00) == 0)
						{
							((uint8_t*)&alloca5)[1] = phi86 | 0xf;
							phi89 = *(uint32_t*)&alloca5;
							phi91 = 1;
						}
						uint16_t phi92 = 0;
						uint16_t anon94 = (uint16_t)phi89;
						phi93 = anon94;
						if ((uint16_t)phi89 < 4096)
						{
							uint16_t anon95 = anon94 | 0xf000;
							*anon68 = anon95;
							phi92 = 1;
							phi93 = anon95;
						}
						*anon68 = phi93 >> 12 | phi93 << 4;
						uint32_t anon96 = *(uint32_t*)&alloca5 & 0xf;
						if (anon82 == anon96)
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
						if ((phi98 & 0xf0) == 0)
						{
							*(uint8_t*)&alloca5 = (uint8_t)phi100 | 0xf0;
							phi102 = *(uint32_t*)&alloca5;
							phi103 = 1;
						}
						uint16_t phi104 = 0;
						if ((phi102 & 0xf00) == 0)
						{
							((uint8_t*)&alloca5)[1] = phi99 | 0xf;
							phi104 = 1;
							phi102 = *(uint32_t*)&alloca5;
						}
						alloca1.field5 = (__zext uint16_t)((uint16_t)phi102 < 4096) + phi104 + phi75 + (phi65 + phi58 + phi61 + phi62 << 4 | phi73) + phi77 + phi78 + phi88 + phi90 + phi91 + phi92 + phi101 + phi103;
						alloca5 = 0;
						alloca5 = (__zext uint64_t)printf((uint8_t*)0x400eb3);
						break;
					}
				}
			}
			alloca1.field1 = 0;
			uint32_t anon105 = (uint32_t)phi47;
			if (anon105 != 0)
			{
				uint16_t phi227;
				uint64_t anon106 = (__zext uint64_t)alloca1.field4;
				alloca5 = anon106;
				phi_in107 = anon12;
				phi108 = 0;
				while (true)
				{
					uint64_t phi112;
					uint16_t phi114;
					uint16_t phi115;
					uint16_t phi116;
					uint8_t phi117;
					uint64_t phi142;
					uint64_t phi144;
					uint16_t phi145;
					uint16_t phi146;
					uint64_t phi148;
					uint8_t phi149;
					uint16_t phi150;
					uint16_t phi161;
					uint64_t phi176;
					uint16_t phi178;
					uint16_t phi179;
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
					uint64_t phi109 = phi_in107;
					uint16_t anon111 = alloca1.field4 ^ *(uint16_t*)phi109;
					uint32_t anon110 = (__zext uint32_t)anon111 >> 8;
					if ((anon110 & 0xf) == 0)
					{
						uint16_t anon113 = alloca1.field4 | 0xf;
						phi112 = (__zext uint64_t)anon113;
						phi114 = anon113;
						phi115 = 1;
						phi116 = 2;
						phi117 = (uint8_t)(anon111 >> 8);
					}
					else 
					{
						phi112 = anon106;
						phi114 = alloca1.field4;
						phi115 = 0;
						phi116 = 1;
						phi117 = (uint8_t)anon110 & 0xf;
					}
					uint16_t phi118 = phi115;
					uint64_t phi119 = phi112;
					uint16_t phi120 = phi114;
					uint16_t phi121 = phi114 ^ *(uint16_t*)phi109;
					if (phi117 < 16)
					{
						uint64_t anon122 = phi112 & 0xff00 | (__zext uint64_t)(phi114 & 0xf | 0xf0);
						phi119 = anon122;
						uint16_t anon123 = (uint16_t)anon122;
						phi120 = anon123;
						phi121 = *(uint16_t*)phi109 ^ anon123;
						phi118 = phi116;
					}
					uint16_t phi_in124 = phi120;
					uint16_t phi125 = phi121;
					uint64_t phi126 = phi119;
					uint16_t phi127 = phi_in124;
					uint16_t phi128 = 0;
					if ((phi125 & 0xf00) == 0)
					{
						uint64_t anon129 = phi119 & 0xffffffffffff00ff | (__zext uint64_t)(phi114 & 0xf000 | 0xf00);
						phi126 = anon129;
						uint16_t anon130 = (uint16_t)anon129;
						phi127 = anon130;
						phi125 = *(uint16_t*)phi109 ^ anon130;
						phi128 = 256;
					}
					uint64_t phi131 = phi126;
					uint16_t phi132 = 0;
					uint16_t phi133 = phi127;
					if (phi125 < 4096)
					{
						uint16_t anon134 = phi127 | 0xf000;
						phi131 = phi126 & 0xffffffffffff0000 | (__zext uint64_t)anon134;
						phi132 = 256;
						phi133 = anon134;
					}
					uint32_t anon136 = (__zext uint32_t)*(uint16_t*)phi109;
					uint16_t anon141 = phi133 << 4;
					uint16_t anon140 = phi133 >> 12 | anon141;
					uint64_t anon139 = (__zext uint64_t)anon140;
					uint64_t anon138 = phi131 & 0xffffffffffff0000 | anon139;
					uint32_t anon137 = (uint32_t)anon138;
					uint32_t anon135 = (anon136 ^ anon137) >> 8;
					if ((anon135 & 0xf) == 0)
					{
						uint32_t anon143 = anon137 | 0xf;
						phi142 = (__zext uint64_t)anon143;
						phi144 = anon138 >> 8 & 0xffffff;
						phi145 = (uint16_t)anon143;
						uint16_t anon147 = anon141 | 0xf;
						phi146 = anon147;
						phi148 = (__zext uint64_t)anon147;
						phi149 = (uint8_t)anon135;
						phi150 = 256;
					}
					else 
					{
						phi142 = anon138;
						phi144 = (__zext uint64_t)(phi133 >> 4);
						phi145 = anon140;
						phi146 = anon140;
						phi148 = anon139;
						phi149 = (uint8_t)anon135 & 0xf;
						phi150 = 0;
					}
					uint16_t phi_in151 = phi145;
					uint16_t phi152 = phi146;
					uint64_t phi153 = phi142;
					uint16_t phi154 = phi_in151;
					uint16_t phi155 = 0;
					if (phi149 < 16)
					{
						uint64_t anon156 = phi142 & 0xffffffffffffff00 | phi148 & 0xf | 0xf0;
						phi153 = anon156;
						uint16_t anon157 = (uint16_t)anon156;
						phi154 = anon157;
						phi152 = anon157;
						phi155 = 256;
					}
					uint16_t phi_in158 = phi154;
					uint64_t phi159 = phi153;
					uint16_t phi160 = phi_in158;
					uint16_t anon162 = *(uint16_t*)phi109 ^ phi152;
					phi161 = anon162;
					uint16_t phi163 = 0;
					if ((anon162 & 0xf00) == 0)
					{
						uint64_t anon164 = phi153 & 0xffffffffffff00ff | phi144 << 8 & 0xf000 | 0xf00;
						phi159 = anon164;
						uint16_t anon165 = (uint16_t)anon164;
						phi160 = anon165;
						phi161 = *(uint16_t*)phi109 ^ anon165;
						phi163 = 256;
					}
					uint64_t phi166 = phi159;
					uint16_t phi167 = 0;
					uint16_t phi168 = phi160;
					if (phi161 < 4096)
					{
						uint16_t anon169 = phi160 | 0xf000;
						phi166 = phi159 & 0xffffffffffff0000 | (__zext uint64_t)anon169;
						phi167 = 256;
						phi168 = anon169;
					}
					uint16_t anon175 = phi168 << 4;
					uint16_t anon174 = phi168 >> 12 | anon175;
					uint64_t anon173 = (__zext uint64_t)anon174;
					uint64_t anon172 = phi166 & 0xffffffffffff0000 | anon173;
					uint32_t anon171 = (uint32_t)anon172;
					uint32_t anon170 = (anon136 ^ anon171) >> 8;
					if ((anon170 & 0xf) == 0)
					{
						uint32_t anon177 = anon171 | 0xf;
						phi176 = (__zext uint64_t)anon177;
						phi178 = (uint16_t)anon177;
						uint16_t anon180 = anon175 | 0xf;
						phi179 = anon180;
						phi181 = anon172 >> 8 & 0xffffff;
						phi182 = (__zext uint64_t)anon180;
						phi183 = (uint8_t)anon170;
						phi184 = 256;
					}
					else 
					{
						phi176 = anon172;
						phi178 = anon174;
						phi179 = anon174;
						phi181 = (__zext uint64_t)(phi168 >> 4);
						phi182 = anon173;
						phi183 = (uint8_t)anon170 & 0xf;
						phi184 = 0;
					}
					uint16_t phi_in185 = phi179;
					uint64_t phi186 = phi176;
					uint16_t phi187 = phi_in185;
					uint16_t phi188 = 0;
					if (phi183 < 16)
					{
						uint64_t anon189 = phi176 & 0xffffffffffffff00 | phi182 & 0xf | 0xf0;
						phi186 = anon189;
						uint16_t anon190 = (uint16_t)anon189;
						phi178 = anon190;
						phi187 = anon190;
						phi188 = 256;
					}
					uint16_t phi_in191 = phi178;
					uint64_t phi192 = phi186;
					uint16_t phi193 = phi_in191;
					uint16_t anon195 = *(uint16_t*)phi109 ^ phi187;
					phi194 = anon195;
					uint16_t phi196 = 0;
					if ((anon195 & 0xf00) == 0)
					{
						uint64_t anon197 = phi186 & 0xffffffffffff00ff | phi181 << 8 & 0xf000 | 0xf00;
						phi192 = anon197;
						uint16_t anon198 = (uint16_t)anon197;
						phi193 = anon198;
						phi194 = *(uint16_t*)phi109 ^ anon198;
						phi196 = 256;
					}
					uint64_t phi199 = phi192;
					uint16_t phi200 = 0;
					uint16_t phi201 = phi193;
					if (phi194 < 4096)
					{
						uint16_t anon202 = phi193 | 0xf000;
						phi199 = phi192 & 0xffffffffffff0000 | (__zext uint64_t)anon202;
						phi200 = 256;
						phi201 = anon202;
					}
					uint16_t anon209 = phi201 << 4;
					uint16_t anon208 = phi201 >> 12 | anon209;
					uint64_t anon207 = (__zext uint64_t)anon208;
					uint64_t anon206 = phi199 & 0xffffffffffff0000 | anon207;
					uint32_t anon205 = (uint32_t)anon206;
					uint32_t anon204 = anon136 ^ anon205;
					uint32_t anon203 = anon204 >> 8;
					if ((anon203 & 0xf) == 0)
					{
						uint32_t anon211 = anon205 | 0xf;
						phi210 = (__zext uint64_t)anon211;
						uint32_t anon213 = anon136 ^ anon211;
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
						phi_in222 = (__zext uint32_t)(*(uint16_t*)phi109 ^ (uint16_t)anon221);
						phi223 = anon136 ^ (uint32_t)anon221;
						phi224 = 256;
					}
					else 
					{
						phi220 = phi210;
						phi_in222 = phi212;
						phi223 = (__zext uint32_t)(*(uint16_t*)phi109 ^ phi215);
						phi224 = 0;
					}
					uint32_t phi225 = phi_in222;
					uint16_t phi226 = 0;
					if ((phi223 & 0xf00) == 0)
					{
						phi225 = anon136 ^ (uint32_t)(phi220 & 0xffff00ff | phi214 << 8 & 0xf000 | 0xf00);
						phi226 = 256;
					}
					if ((__zext uint16_t)((uint16_t)phi225 < 4096) + phi196 + phi188 + phi167 + phi163 + (phi132 + phi128 + phi118 << 4) + phi150 + phi155 + phi184 + phi200 + phi219 + phi224 + phi226 == *(uint16_t*)(arg1 - 66))
					{
						*(uint16_t*)(anon12 + (phi108 << 1 & 0x1fffe)) = *(uint16_t*)phi109;
						phi227 = (uint16_t)phi108 + 1;
						anon228 = phi109 + 2;
						uint64_t anon230 = phi47 + 4294967295 & 0xffffffff;
						anon229 = anon230 + anon230 + 2 + anon12;
						if (anon228 != anon229)
						{
							break;
						}
					}
					else 
					{
						phi_in107 = anon228;
						phi108 = phi108;
						if (anon228 == anon229)
						{
							phi227 = (uint16_t)phi108;
						}
					}
				}
				alloca1.field1 = anon105;
				uint16_t* anon231 = (uint16_t*)phi16;
				*anon231 = *anon231;
				if (!(phi227 == 0 | *(uint16_t*)(arg1 - 66) == 64))
				{
					alloca5 = 0;
					uint64_t anon232 = (__zext uint64_t)phi227;
					alloca5 = (__zext uint64_t)*(uint16_t*)(anon12 + ((__sext int64_t)rand() % anon232 << 32 >> 31));
					alloca1.field4 = *(uint16_t*)(anon12 + ((__sext int64_t)rand() % anon232 << 32 >> 31));
					phi47 = anon232;
				}
			}
			phi_in107 = anon228;
			phi108 = phi108 + 1 & 0xffffffff;
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
