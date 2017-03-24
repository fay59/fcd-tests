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
			phi_in18 = (__zext uint64_t)anon45;
		}
		uint64_t anon46 = (uint64_t)&alloca1.field4;
		alloca5 = anon46;
		alloca5 = 0;
		alloca5 = (__zext uint64_t)*(uint16_t*)(anon12 + ((__sext int64_t)rand() % (__zext uint64_t)phi17 << 32 >> 31));
		uint8_t** anon47 = (uint8_t**)arg3;
		*(uint16_t*)(**anon47 == 0 ? phi16 : anon46) = *(uint16_t*)(anon12 + ((__sext int64_t)rand() % (__zext uint64_t)phi17 << 32 >> 31));
		uint64_t phi48 = phi_in18;
		while (true)
		{
			uint64_t phi_in110;
			uint64_t phi111;
			uint64_t anon225;
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
				if (**anon47 == 0)
				{
					if (**anon47 != 0)
					{
						alloca5 = 0;
						alloca5 = (__zext uint64_t)scanf((uint8_t*)0x400eaa);
						*(uint8_t*)&alloca5 = *anon49;
						((uint8_t*)&alloca5)[1] = anon50;
						*(uint48_t*)&((uint8_t*)&alloca5)[2] = *anon51;
						if (**anon47 != 0)
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
				if (**anon47 == 0 && **anon47 == 0 || **anon47 != 0 && **anon47 == 0 && **anon47 == 0 || **anon47 != 0 && **anon47 != 0)
				{
					alloca5 = 0;
					alloca5 = (__zext uint64_t)printf((uint8_t*)0x400eae);
					*(uint8_t*)&alloca5 = *anon49;
					((uint8_t*)&alloca5)[1] = anon50;
					*(uint48_t*)&((uint8_t*)&alloca5)[2] = *anon51;
				}
				if (**anon47 == 0)
				{
					if (**anon47 == 0 && **anon47 == 0 || **anon47 != 0 && **anon47 == 0 && **anon47 == 0 || **anon47 != 0 && **anon47 != 0)
					{
						uint32_t anon53;
						uint16_t phi_in54;
						uint32_t phi_in55;
						uint8_t phi56;
						uint16_t phi57;
						uint8_t phi71;
						uint32_t phi72;
						uint32_t phi73;
						uint16_t phi74;
						uint16_t phi80;
						uint32_t phi_in86;
						uint8_t phi87;
						uint32_t phi88;
						uint16_t phi89;
						uint16_t phi95;
						uint32_t phi_in100;
						uint8_t phi101;
						uint32_t phi102;
						uint16_t phi103;
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
						uint16_t phi58 = phi_in54;
						uint32_t phi59 = phi_in55;
						uint16_t phi60 = 0;
						if (((uint8_t)*(uint16_t*)phi16 ^ (uint8_t)phi_in55) < 16)
						{
							*(uint8_t*)&alloca5 = phi56 | 0xf0;
							phi58 = (uint16_t)*(uint32_t*)&alloca5;
							phi59 = *(uint32_t*)&alloca5;
							phi60 = 1;
						}
						uint16_t phi_in61 = phi58;
						uint32_t phi62 = phi59;
						uint16_t phi_in63 = phi_in61;
						uint16_t phi64 = 0;
						uint32_t anon65 = (__zext uint32_t)*(uint16_t*)phi16;
						if (((anon65 ^ phi62) & 0xf00) == 0)
						{
							((uint8_t*)&alloca5)[1] = (uint8_t)(alloca1.field4 >> 8) | 0xf;
							phi_in63 = (uint16_t)*(uint32_t*)&alloca5;
							phi64 = 1;
							phi62 = *(uint32_t*)&alloca5;
						}
						uint16_t phi66 = 0;
						uint16_t phi67 = phi_in63;
						if ((*(uint16_t*)phi16 ^ (uint16_t)phi62) < 4096)
						{
							uint16_t anon68 = phi_in63 | 0xf000;
							*(uint16_t*)&alloca5 = anon68;
							phi66 = 1;
							phi67 = anon68;
						}
						uint16_t* anon69 = (uint16_t*)&alloca5;
						*anon69 = phi67 >> 12 | phi67 << 4;
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
							phi71 = (uint8_t)(phi67 >> 4);
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
						if ((phi77 & 0xf00) == 0)
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
							phi_in86 = anon85;
							phi87 = (uint8_t)(*(uint32_t*)&alloca5 >> 8);
							phi88 = anon85;
							phi89 = 1;
						}
						else 
						{
							phi_in86 = *(uint32_t*)&alloca5;
							phi87 = (uint8_t)(phi80 >> 4);
							phi88 = anon84;
							phi89 = 0;
						}
						uint32_t phi_in90 = phi_in86;
						uint16_t phi91 = 0;
						if ((phi_in86 & 0xf0) == 0)
						{
							*(uint8_t*)&alloca5 = (uint8_t)phi88 | 0xf0;
							phi_in90 = *(uint32_t*)&alloca5;
							phi91 = 1;
						}
						uint32_t phi92 = phi_in90;
						uint16_t phi93 = 0;
						if ((phi_in90 & 0xf00) == 0)
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
							phi_in100 = anon99;
							phi101 = (uint8_t)(*(uint32_t*)&alloca5 >> 8);
							phi102 = anon99;
							phi103 = 1;
						}
						else 
						{
							phi_in100 = *(uint32_t*)&alloca5;
							phi101 = (uint8_t)(phi95 >> 4);
							phi102 = anon98;
							phi103 = 0;
						}
						uint32_t phi_in104 = phi_in100;
						uint16_t phi105 = 0;
						if ((phi_in100 & 0xf0) == 0)
						{
							*(uint8_t*)&alloca5 = (uint8_t)phi102 | 0xf0;
							phi_in104 = *(uint32_t*)&alloca5;
							phi105 = 1;
						}
						uint16_t phi106 = 0;
						uint32_t phi107 = phi_in104;
						if ((phi_in104 & 0xf00) == 0)
						{
							((uint8_t*)&alloca5)[1] = phi101 | 0xf;
							phi106 = 1;
							phi107 = *(uint32_t*)&alloca5;
						}
						alloca1.field5 = (__zext uint16_t)((uint16_t)phi107 < 4096) + phi106 + phi76 + (phi66 + phi57 + phi60 + phi64 << 4 | phi74) + phi78 + phi79 + phi89 + phi91 + phi93 + phi94 + phi103 + phi105;
						alloca5 = 0;
						alloca5 = (__zext uint64_t)printf((uint8_t*)0x400eb3);
						break;
					}
				}
			}
			alloca1.field1 = 0;
			uint32_t anon108 = (uint32_t)phi48;
			if (anon108 != 0)
			{
				uint16_t phi224;
				uint64_t anon109 = (__zext uint64_t)alloca1.field4;
				alloca5 = anon109;
				phi_in110 = anon12;
				phi111 = 0;
				while (true)
				{
					uint64_t phi_in115;
					uint16_t phi_in117;
					uint16_t phi_in118;
					uint8_t phi119;
					uint64_t phi143;
					uint64_t phi145;
					uint16_t phi146;
					uint16_t phi147;
					uint64_t phi149;
					uint8_t phi150;
					uint16_t phi151;
					uint16_t phi160;
					uint64_t phi175;
					uint16_t phi177;
					uint16_t phi178;
					uint64_t phi180;
					uint64_t phi181;
					uint8_t phi182;
					uint16_t phi183;
					uint16_t phi192;
					uint64_t phi208;
					uint32_t phi210;
					uint64_t phi212;
					uint16_t phi213;
					uint64_t phi215;
					uint8_t phi216;
					uint16_t phi217;
					uint32_t phi221;
					uint16_t phi222;
					uint64_t anon226;
					uint64_t phi112 = phi_in110;
					uint16_t anon114 = alloca1.field4 ^ *(uint16_t*)phi112;
					uint32_t anon113 = (__zext uint32_t)anon114 >> 8;
					if ((anon113 & 0xf) == 0)
					{
						uint16_t anon116 = alloca1.field4 | 0xf;
						phi_in115 = (__zext uint64_t)anon116;
						phi_in117 = anon116;
						phi_in118 = 1;
						phi_in118 = 2;
						phi119 = (uint8_t)(anon114 >> 8);
					}
					else 
					{
						phi_in115 = anon109;
						phi_in117 = alloca1.field4;
						phi_in118 = 0;
						phi_in118 = 1;
						phi119 = (uint8_t)anon113 & 0xf;
					}
					uint64_t phi_in120 = phi_in115;
					uint16_t phi_in121 = phi_in117;
					uint16_t phi122 = phi_in117 ^ *(uint16_t*)phi112;
					uint16_t phi123 = phi_in118;
					if (phi119 < 16)
					{
						uint64_t anon124 = phi_in115 & 0xff00 | (__zext uint64_t)(phi_in117 & 0xf | 0xf0);
						phi_in120 = anon124;
						uint16_t anon125 = (uint16_t)anon124;
						phi_in121 = anon125;
						phi122 = *(uint16_t*)phi112 ^ anon125;
						phi123 = phi_in118;
					}
					uint16_t phi_in126 = phi122;
					uint16_t phi_in127 = phi_in121;
					uint16_t phi128 = phi_in126;
					uint16_t phi129 = 0;
					if ((phi_in126 & 0xf00) == 0)
					{
						uint64_t anon130 = phi_in120 & 0xffffffffffff00ff | (__zext uint64_t)(phi_in117 & 0xf000 | 0xf00);
						phi_in120 = anon130;
						uint16_t anon131 = (uint16_t)anon130;
						phi_in127 = anon131;
						phi128 = *(uint16_t*)phi112 ^ anon131;
						phi129 = 256;
					}
					uint64_t phi132 = phi_in120;
					uint16_t phi133 = 0;
					uint16_t phi134 = phi_in127;
					if (phi128 < 4096)
					{
						uint16_t anon135 = phi_in127 | 0xf000;
						phi132 = phi_in120 & 0xffffffffffff0000 | (__zext uint64_t)anon135;
						phi133 = 256;
						phi134 = anon135;
					}
					uint32_t anon137 = (__zext uint32_t)*(uint16_t*)phi112;
					uint16_t anon142 = phi134 << 4;
					uint16_t anon141 = phi134 >> 12 | anon142;
					uint64_t anon140 = (__zext uint64_t)anon141;
					uint64_t anon139 = phi132 & 0xffffffffffff0000 | anon140;
					uint32_t anon138 = (uint32_t)anon139;
					uint32_t anon136 = (anon137 ^ anon138) >> 8;
					if ((anon136 & 0xf) == 0)
					{
						uint32_t anon144 = anon138 | 0xf;
						phi143 = (__zext uint64_t)anon144;
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
						phi143 = anon139;
						phi145 = (__zext uint64_t)(phi134 >> 4);
						phi146 = anon141;
						phi147 = anon141;
						phi149 = anon140;
						phi150 = (uint8_t)anon136 & 0xf;
						phi151 = 0;
					}
					uint64_t phi_in152 = phi143;
					uint16_t phi153 = phi146;
					uint16_t phi154 = phi147;
					uint16_t phi155 = 0;
					if (phi150 < 16)
					{
						uint64_t anon156 = phi_in152 & 0xffffffffffffff00 | phi149 & 0xf | 0xf0;
						phi_in152 = anon156;
						uint16_t anon157 = (uint16_t)anon156;
						phi153 = anon157;
						phi154 = anon157;
						phi155 = 256;
					}
					uint16_t phi158 = phi153;
					uint64_t phi159 = phi_in152;
					uint16_t anon161 = *(uint16_t*)phi112 ^ phi154;
					phi160 = anon161;
					uint16_t phi162 = 0;
					if ((anon161 & 0xf00) == 0)
					{
						uint64_t anon163 = phi_in152 & 0xffffffffffff00ff | phi145 << 8 & 0xf000 | 0xf00;
						phi159 = anon163;
						uint16_t anon164 = (uint16_t)anon163;
						phi158 = anon164;
						phi160 = *(uint16_t*)phi112 ^ anon164;
						phi162 = 256;
					}
					uint64_t phi165 = phi159;
					uint16_t phi166 = phi158;
					uint16_t phi167 = 0;
					if (phi160 < 4096)
					{
						uint16_t anon168 = phi166 | 0xf000;
						phi165 = phi165 & 0xffffffffffff0000 | (__zext uint64_t)anon168;
						phi167 = 256;
						phi166 = anon168;
					}
					uint16_t anon174 = phi166 << 4;
					uint16_t anon173 = phi166 >> 12 | anon174;
					uint64_t anon172 = (__zext uint64_t)anon173;
					uint64_t anon171 = phi165 & 0xffffffffffff0000 | anon172;
					uint32_t anon170 = (uint32_t)anon171;
					uint32_t anon169 = (anon137 ^ anon170) >> 8;
					if ((anon169 & 0xf) == 0)
					{
						uint32_t anon176 = anon170 | 0xf;
						phi175 = (__zext uint64_t)anon176;
						phi177 = (uint16_t)anon176;
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
						phi177 = anon173;
						phi178 = anon173;
						phi180 = (__zext uint64_t)(phi166 >> 4);
						phi181 = anon172;
						phi182 = (uint8_t)anon169 & 0xf;
						phi183 = 0;
					}
					uint64_t phi184 = phi175;
					uint16_t phi185 = phi177;
					uint16_t phi186 = phi178;
					uint16_t phi187 = 0;
					if (phi182 < 16)
					{
						uint64_t anon188 = phi184 & 0xffffffffffffff00 | phi181 & 0xf | 0xf0;
						phi184 = anon188;
						uint16_t anon189 = (uint16_t)anon188;
						phi185 = anon189;
						phi186 = anon189;
						phi187 = 256;
					}
					uint64_t phi190 = phi184;
					uint16_t phi191 = phi185;
					uint16_t anon193 = *(uint16_t*)phi112 ^ phi186;
					phi192 = anon193;
					uint16_t phi194 = 0;
					if ((anon193 & 0xf00) == 0)
					{
						uint64_t anon195 = phi190 & 0xffffffffffff00ff | phi180 << 8 & 0xf000 | 0xf00;
						phi190 = anon195;
						uint16_t anon196 = (uint16_t)anon195;
						phi191 = anon196;
						phi192 = *(uint16_t*)phi112 ^ anon196;
						phi194 = 256;
					}
					uint64_t phi197 = phi190;
					uint16_t phi198 = phi191;
					uint16_t phi199 = 0;
					if (phi192 < 4096)
					{
						uint16_t anon200 = phi198 | 0xf000;
						phi197 = phi197 & 0xffffffffffff0000 | (__zext uint64_t)anon200;
						phi199 = 256;
						phi198 = anon200;
					}
					uint16_t anon207 = phi198 << 4;
					uint16_t anon206 = phi198 >> 12 | anon207;
					uint64_t anon205 = (__zext uint64_t)anon206;
					uint64_t anon204 = phi197 & 0xffffffffffff0000 | anon205;
					uint32_t anon203 = (uint32_t)anon204;
					uint32_t anon202 = anon137 ^ anon203;
					uint32_t anon201 = anon202 >> 8;
					if ((anon201 & 0xf) == 0)
					{
						uint32_t anon209 = anon203 | 0xf;
						phi208 = (__zext uint64_t)anon209;
						uint32_t anon211 = anon137 ^ anon209;
						phi210 = anon211;
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
						phi210 = anon202;
						phi212 = (__zext uint64_t)(phi198 >> 4);
						phi213 = anon206;
						phi215 = anon205;
						phi216 = (uint8_t)anon201 & 0xf;
						phi217 = 0;
					}
					uint64_t phi218 = phi208;
					uint32_t phi219 = phi210;
					if (phi216 < 16)
					{
						uint64_t anon220 = phi218 & 0xffffffffffffff00 | phi215 & 0xf | 0xf0;
						phi218 = anon220;
						phi219 = (__zext uint32_t)(*(uint16_t*)phi112 ^ (uint16_t)anon220);
						phi221 = anon137 ^ (uint32_t)anon220;
						phi222 = 256;
					}
					else 
					{
						phi221 = (__zext uint32_t)(*(uint16_t*)phi112 ^ phi213);
						phi222 = 0;
					}
					uint16_t phi223 = 0;
					if ((phi221 & 0xf00) == 0)
					{
						phi219 = anon137 ^ (uint32_t)(phi218 & 0xffff00ff | phi212 << 8 & 0xf000 | 0xf00);
						phi223 = 256;
					}
					if ((__zext uint16_t)((uint16_t)phi219 < 4096) + phi194 + phi187 + phi167 + phi162 + (phi133 + phi129 + phi123 << 4) + phi151 + phi155 + phi183 + phi199 + phi217 + phi222 + phi223 == *(uint16_t*)(arg1 - 66))
					{
						*(uint16_t*)(anon12 + (phi111 << 1 & 0x1fffe)) = *(uint16_t*)phi112;
						phi224 = (uint16_t)phi111 + 1;
						anon225 = phi112 + 2;
						uint64_t anon227 = phi48 + 4294967295 & 0xffffffff;
						anon226 = anon227 + anon227 + 2 + anon12;
						if (anon225 != anon226)
						{
							break;
						}
					}
					else 
					{
						phi_in110 = anon225;
						phi111 = phi111;
						if (anon225 == anon226)
						{
							phi224 = (uint16_t)phi111;
						}
					}
				}
				alloca1.field1 = anon108;
				uint16_t* anon228 = (uint16_t*)phi16;
				*anon228 = *anon228;
				if (!(phi224 == 0 | *(uint16_t*)(arg1 - 66) == 64))
				{
					alloca5 = 0;
					uint64_t anon229 = (__zext uint64_t)phi224;
					alloca5 = (__zext uint64_t)*(uint16_t*)(anon12 + ((__sext int64_t)rand() % anon229 << 32 >> 31));
					alloca1.field4 = *(uint16_t*)(anon12 + ((__sext int64_t)rand() % anon229 << 32 >> 31));
					phi48 = anon229;
				}
			}
			phi_in110 = anon225;
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
