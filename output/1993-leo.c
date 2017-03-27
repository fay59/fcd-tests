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
	if (alloca1.field1 != 2 || anon7 == 0 || anon7 != 0 && alloca1.field1 == 0)
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
		uint32_t anon110;
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
			uint64_t anon27;
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
				anon27 = arg1 - 70;
				uint32_t anon29 = (__zext uint32_t)*(uint16_t*)(anon12 + anon26 - 2) + 1;
				uint16_t anon28 = (uint16_t)anon29;
				*(uint16_t*)anon27 = anon28;
				uint16_t phi30 = anon28;
				if (((phi10 ^ anon29) & 0xf) == 0)
				{
					uint32_t anon33 = 16 - phi10;
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
							uint16_t anon39 = (uint16_t)phi10 << 12;
							*(uint16_t*)anon27 = anon38 - ((anon39 ^ anon38) < 4096 ? anon39 : 0);
							phi30 = (anon39 ^ anon38) < 4096 ? 0 : anon38;
						}
					}
				}
				*(uint16_t*)anon25 = phi30;
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
			phi16 = anon27;
			phi17 = anon44;
			phi18 = (__zext uint64_t)anon44;
		}
		uint64_t phi_in45 = phi18;
		uint64_t anon46 = (uint64_t)&alloca1.field4;
		alloca5 = anon46;
		alloca5 = 0;
		alloca5 = (__zext uint64_t)*(uint16_t*)(anon12 + ((__sext int64_t)rand() % (__zext uint64_t)phi17 << 32 >> 31));
		uint8_t** anon47 = (uint8_t**)arg3;
		*(uint16_t*)(**anon47 == 0 ? phi16 : anon46) = *(uint16_t*)(anon12 + ((__sext int64_t)rand() % (__zext uint64_t)phi17 << 32 >> 31));
		uint64_t phi48 = phi_in45;
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
				if (**anon47 == 0)
				{
					if (**anon47 == 0)
					{
						if (**anon47 != 0)
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
						if (**anon47 != 0)
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
						uint32_t phi54;
						uint8_t phi55;
						uint16_t phi56;
						uint8_t phi70;
						uint32_t phi71;
						uint32_t phi72;
						uint16_t phi73;
						uint16_t phi80;
						uint32_t phi86;
						uint8_t phi87;
						uint32_t phi88;
						uint16_t phi89;
						uint16_t phi96;
						uint32_t phi101;
						uint8_t phi102;
						uint32_t phi103;
						uint16_t phi104;
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
						uint16_t phi_in57 = alloca1.field4;
						uint32_t phi58 = phi54;
						uint16_t phi59 = phi_in57;
						uint16_t phi60 = 0;
						if (((uint8_t)*(uint16_t*)phi16 ^ (uint8_t)phi58) < 16)
						{
							*(uint8_t*)&alloca5 = phi55 | 0xf0;
							phi59 = (uint16_t)*(uint32_t*)&alloca5;
							phi58 = *(uint32_t*)&alloca5;
							phi60 = 1;
						}
						uint16_t phi61 = phi59;
						uint32_t phi62 = phi58;
						uint16_t phi63 = 0;
						uint32_t anon64 = (__zext uint32_t)*(uint16_t*)phi16;
						if (((anon64 ^ phi62) & 0xf00) == 0)
						{
							((uint8_t*)&alloca5)[1] = (uint8_t)(alloca1.field4 >> 8) | 0xf;
							phi61 = (uint16_t)*(uint32_t*)&alloca5;
							phi63 = 1;
							phi62 = *(uint32_t*)&alloca5;
						}
						uint16_t phi65 = phi61;
						uint16_t phi66 = 0;
						if ((*(uint16_t*)phi16 ^ (uint16_t)phi62) < 4096)
						{
							uint16_t anon67 = phi65 | 0xf000;
							*(uint16_t*)&alloca5 = anon67;
							phi66 = 1;
							phi65 = anon67;
						}
						uint16_t* anon68 = (uint16_t*)&alloca5;
						*anon68 = phi65 >> 12 | phi65 << 4;
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
							phi70 = (uint8_t)(phi65 >> 4);
							phi71 = *(uint32_t*)&alloca5;
							phi72 = *(uint32_t*)&alloca5 & 0xf;
							phi73 = 0;
						}
						uint32_t phi_in74 = phi71;
						uint32_t phi75 = phi_in74;
						uint16_t phi76 = 0;
						if ((phi_in74 & 0xf0) == 0)
						{
							*(uint8_t*)&alloca5 = (uint8_t)phi72 | 0xf0;
							phi75 = *(uint32_t*)&alloca5;
							phi76 = 1;
						}
						uint32_t phi77 = phi75;
						uint16_t phi78 = 0;
						if ((phi77 & 0xf00) == 0)
						{
							((uint8_t*)&alloca5)[1] = phi70 | 0xf;
							phi77 = *(uint32_t*)&alloca5;
							phi78 = 1;
						}
						uint16_t phi79 = 0;
						uint16_t anon81 = (uint16_t)phi77;
						phi80 = anon81;
						if ((uint16_t)phi77 < 4096)
						{
							uint16_t anon82 = anon81 | 0xf000;
							*anon68 = anon82;
							phi79 = 1;
							phi80 = anon82;
						}
						*anon68 = phi80 >> 12 | phi80 << 4;
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
						uint32_t phi_in90 = phi86;
						uint32_t phi91 = phi_in90;
						uint16_t phi92 = 0;
						if ((phi_in90 & 0xf0) == 0)
						{
							*(uint8_t*)&alloca5 = (uint8_t)phi88 | 0xf0;
							phi91 = *(uint32_t*)&alloca5;
							phi92 = 1;
						}
						uint32_t phi93 = phi91;
						uint16_t phi94 = 0;
						if ((phi93 & 0xf00) == 0)
						{
							((uint8_t*)&alloca5)[1] = phi87 | 0xf;
							phi93 = *(uint32_t*)&alloca5;
							phi94 = 1;
						}
						uint16_t phi95 = 0;
						uint16_t anon97 = (uint16_t)phi93;
						phi96 = anon97;
						if ((uint16_t)phi93 < 4096)
						{
							uint16_t anon98 = anon97 | 0xf000;
							*anon68 = anon98;
							phi95 = 1;
							phi96 = anon98;
						}
						*anon68 = phi96 >> 12 | phi96 << 4;
						uint32_t anon99 = *(uint32_t*)&alloca5 & 0xf;
						if (anon83 == anon99)
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
						uint32_t phi_in105 = phi101;
						uint32_t phi_in106 = phi_in105;
						uint16_t phi107 = 0;
						if ((phi_in105 & 0xf0) == 0)
						{
							*(uint8_t*)&alloca5 = (uint8_t)phi103 | 0xf0;
							phi_in106 = *(uint32_t*)&alloca5;
							phi107 = 1;
						}
						uint16_t phi108 = 0;
						uint32_t phi109 = phi_in106;
						if ((phi_in106 & 0xf00) == 0)
						{
							((uint8_t*)&alloca5)[1] = phi102 | 0xf;
							phi108 = 1;
							phi109 = *(uint32_t*)&alloca5;
						}
						alloca1.field5 = (__zext uint16_t)((uint16_t)phi109 < 4096) + phi108 + phi76 + (phi66 + phi56 + phi60 + phi63 << 4 | phi73) + phi78 + phi79 + phi89 + phi92 + phi94 + phi95 + phi104 + phi107;
						alloca5 = 0;
						alloca5 = (__zext uint64_t)printf((uint8_t*)0x400eb3);
						break;
					}
				}
			}
			alloca1.field1 = 0;
			anon110 = (uint32_t)phi48;
			if (anon110 != 0)
			{
				uint16_t phi236;
				uint64_t anon111 = (__zext uint64_t)alloca1.field4;
				alloca5 = anon111;
				uint64_t phi_in112 = anon12;
				uint64_t phi113 = 0;
				while (true)
				{
					uint64_t phi117;
					uint16_t phi_in119;
					uint16_t phi120;
					uint16_t phi121;
					uint8_t phi122;
					uint64_t phi_in148;
					uint64_t phi150;
					uint16_t phi151;
					uint16_t phi152;
					uint64_t phi154;
					uint8_t phi155;
					uint16_t phi156;
					uint16_t phi168;
					uint64_t phi184;
					uint16_t phi186;
					uint16_t phi187;
					uint64_t phi189;
					uint64_t phi190;
					uint8_t phi191;
					uint16_t phi192;
					uint16_t phi201;
					uint64_t phi217;
					uint32_t phi_in219;
					uint64_t phi221;
					uint16_t phi222;
					uint64_t phi224;
					uint8_t phi225;
					uint16_t phi226;
					uint64_t phi228;
					uint32_t phi230;
					uint32_t phi231;
					uint16_t phi232;
					uint64_t anon237;
					uint64_t anon238;
					uint64_t phi114 = phi_in112;
					uint16_t anon116 = alloca1.field4 ^ *(uint16_t*)phi114;
					uint32_t anon115 = (__zext uint32_t)anon116 >> 8;
					if ((anon115 & 0xf) == 0)
					{
						uint16_t anon118 = alloca1.field4 | 0xf;
						phi117 = (__zext uint64_t)anon118;
						phi_in119 = anon118;
						phi120 = 1;
						phi121 = 2;
						phi122 = (uint8_t)(anon116 >> 8);
					}
					else 
					{
						phi117 = anon111;
						phi_in119 = alloca1.field4;
						phi120 = 0;
						phi121 = 1;
						phi122 = (uint8_t)anon115 & 0xf;
					}
					uint64_t phi_in123 = phi117;
					uint16_t phi_in124 = phi120;
					phi_in124 = phi121;
					uint16_t phi125 = phi_in119;
					uint16_t phi126 = phi_in119 ^ *(uint16_t*)phi114;
					uint16_t phi127 = phi_in124;
					if (phi122 < 16)
					{
						uint64_t anon128 = phi_in123 & 0xff00 | (__zext uint64_t)(phi_in119 & 0xf | 0xf0);
						phi_in123 = anon128;
						uint16_t anon129 = (uint16_t)anon128;
						phi125 = anon129;
						phi126 = *(uint16_t*)phi114 ^ anon129;
						phi127 = phi_in124;
					}
					uint16_t phi130 = phi125;
					uint16_t phi_in131 = phi126;
					uint16_t phi132 = phi_in131;
					uint16_t phi133 = 0;
					if ((phi_in131 & 0xf00) == 0)
					{
						uint64_t anon134 = phi_in123 & 0xffffffffffff00ff | (__zext uint64_t)(phi_in119 & 0xf000 | 0xf00);
						phi_in123 = anon134;
						uint16_t anon135 = (uint16_t)anon134;
						phi130 = anon135;
						phi132 = *(uint16_t*)phi114 ^ anon135;
						phi133 = 256;
					}
					uint16_t phi_in136 = phi130;
					uint64_t phi137 = phi_in123;
					uint16_t phi138 = 0;
					uint16_t phi139 = phi_in136;
					if (phi132 < 4096)
					{
						uint16_t anon140 = phi_in136 | 0xf000;
						phi137 = phi_in123 & 0xffffffffffff0000 | (__zext uint64_t)anon140;
						phi138 = 256;
						phi139 = anon140;
					}
					uint32_t anon142 = (__zext uint32_t)*(uint16_t*)phi114;
					uint16_t anon147 = phi139 << 4;
					uint16_t anon146 = phi139 >> 12 | anon147;
					uint64_t anon145 = (__zext uint64_t)anon146;
					uint64_t anon144 = phi137 & 0xffffffffffff0000 | anon145;
					uint32_t anon143 = (uint32_t)anon144;
					uint32_t anon141 = (anon142 ^ anon143) >> 8;
					if ((anon141 & 0xf) == 0)
					{
						uint32_t anon149 = anon143 | 0xf;
						phi_in148 = (__zext uint64_t)anon149;
						phi150 = anon144 >> 8 & 0xffffff;
						phi151 = (uint16_t)anon149;
						uint16_t anon153 = anon147 | 0xf;
						phi152 = anon153;
						phi154 = (__zext uint64_t)anon153;
						phi155 = (uint8_t)anon141;
						phi156 = 256;
					}
					else 
					{
						phi_in148 = anon144;
						phi150 = (__zext uint64_t)(phi139 >> 4);
						phi151 = anon146;
						phi152 = anon146;
						phi154 = anon145;
						phi155 = (uint8_t)anon141 & 0xf;
						phi156 = 0;
					}
					uint16_t phi_in157 = phi151;
					uint16_t phi158 = phi152;
					uint64_t phi159 = phi_in148;
					uint16_t phi160 = phi_in157;
					uint16_t phi161 = 0;
					if (phi155 < 16)
					{
						uint64_t anon162 = phi_in148 & 0xffffffffffffff00 | phi154 & 0xf | 0xf0;
						phi159 = anon162;
						uint16_t anon163 = (uint16_t)anon162;
						phi160 = anon163;
						phi158 = anon163;
						phi161 = 256;
					}
					uint64_t phi_in164 = phi159;
					uint16_t phi_in165 = phi160;
					uint64_t phi166 = phi_in164;
					uint16_t phi167 = phi_in165;
					uint16_t anon169 = *(uint16_t*)phi114 ^ phi158;
					phi168 = anon169;
					uint16_t phi170 = 0;
					if ((anon169 & 0xf00) == 0)
					{
						uint64_t anon171 = phi_in164 & 0xffffffffffff00ff | phi150 << 8 & 0xf000 | 0xf00;
						phi166 = anon171;
						uint16_t anon172 = (uint16_t)anon171;
						phi167 = anon172;
						phi168 = *(uint16_t*)phi114 ^ anon172;
						phi170 = 256;
					}
					uint64_t phi173 = phi166;
					uint16_t phi_in174 = phi167;
					uint16_t phi175 = 0;
					uint16_t phi176 = phi_in174;
					if (phi168 < 4096)
					{
						uint16_t anon177 = phi_in174 | 0xf000;
						phi173 = phi173 & 0xffffffffffff0000 | (__zext uint64_t)anon177;
						phi175 = 256;
						phi176 = anon177;
					}
					uint16_t anon183 = phi176 << 4;
					uint16_t anon182 = phi176 >> 12 | anon183;
					uint64_t anon181 = (__zext uint64_t)anon182;
					uint64_t anon180 = phi173 & 0xffffffffffff0000 | anon181;
					uint32_t anon179 = (uint32_t)anon180;
					uint32_t anon178 = (anon142 ^ anon179) >> 8;
					if ((anon178 & 0xf) == 0)
					{
						uint32_t anon185 = anon179 | 0xf;
						phi184 = (__zext uint64_t)anon185;
						phi186 = (uint16_t)anon185;
						uint16_t anon188 = anon183 | 0xf;
						phi187 = anon188;
						phi189 = anon180 >> 8 & 0xffffff;
						phi190 = (__zext uint64_t)anon188;
						phi191 = (uint8_t)anon178;
						phi192 = 256;
					}
					else 
					{
						phi184 = anon180;
						phi186 = anon182;
						phi187 = anon182;
						phi189 = (__zext uint64_t)(phi176 >> 4);
						phi190 = anon181;
						phi191 = (uint8_t)anon178 & 0xf;
						phi192 = 0;
					}
					uint16_t phi_in193 = phi186;
					uint16_t phi194 = phi187;
					uint16_t phi195 = 0;
					if (phi191 < 16)
					{
						uint64_t anon196 = phi184 & 0xffffffffffffff00 | phi190 & 0xf | 0xf0;
						phi184 = anon196;
						uint16_t anon197 = (uint16_t)anon196;
						phi_in193 = anon197;
						phi194 = anon197;
						phi195 = 256;
					}
					uint64_t phi_in198 = phi184;
					uint64_t phi_in199 = phi_in198;
					uint16_t phi200 = phi_in193;
					uint16_t anon202 = *(uint16_t*)phi114 ^ phi194;
					phi201 = anon202;
					uint16_t phi203 = 0;
					if ((anon202 & 0xf00) == 0)
					{
						uint64_t anon204 = phi_in198 & 0xffffffffffff00ff | phi189 << 8 & 0xf000 | 0xf00;
						phi_in199 = anon204;
						uint16_t anon205 = (uint16_t)anon204;
						phi200 = anon205;
						phi201 = *(uint16_t*)phi114 ^ anon205;
						phi203 = 256;
					}
					uint16_t phi206 = phi200;
					uint64_t phi207 = phi_in199;
					uint16_t phi208 = 0;
					if (phi201 < 4096)
					{
						uint16_t anon209 = phi206 | 0xf000;
						phi207 = phi_in199 & 0xffffffffffff0000 | (__zext uint64_t)anon209;
						phi208 = 256;
						phi206 = anon209;
					}
					uint16_t anon216 = phi206 << 4;
					uint16_t anon215 = phi206 >> 12 | anon216;
					uint64_t anon214 = (__zext uint64_t)anon215;
					uint64_t anon213 = phi207 & 0xffffffffffff0000 | anon214;
					uint32_t anon212 = (uint32_t)anon213;
					uint32_t anon211 = anon142 ^ anon212;
					uint32_t anon210 = anon211 >> 8;
					if ((anon210 & 0xf) == 0)
					{
						uint32_t anon218 = anon212 | 0xf;
						phi217 = (__zext uint64_t)anon218;
						uint32_t anon220 = anon142 ^ anon218;
						phi_in219 = anon220;
						phi221 = anon213 >> 8 & 0xffffff;
						uint16_t anon223 = anon216 | 0xf;
						phi222 = anon223;
						phi224 = (__zext uint64_t)anon223;
						phi225 = (uint8_t)(anon220 >> 8);
						phi226 = 256;
					}
					else 
					{
						phi217 = anon213;
						phi_in219 = anon211;
						phi221 = (__zext uint64_t)(phi206 >> 4);
						phi222 = anon215;
						phi224 = anon214;
						phi225 = (uint8_t)anon210 & 0xf;
						phi226 = 0;
					}
					uint64_t phi_in227 = phi217;
					if (phi225 < 16)
					{
						uint64_t anon229 = phi_in227 & 0xffffffffffffff00 | phi224 & 0xf | 0xf0;
						phi228 = anon229;
						phi230 = (__zext uint32_t)(*(uint16_t*)phi114 ^ (uint16_t)anon229);
						phi231 = anon142 ^ (uint32_t)anon229;
						phi232 = 256;
					}
					else 
					{
						phi228 = phi_in227;
						phi230 = phi_in219;
						phi231 = (__zext uint32_t)(*(uint16_t*)phi114 ^ phi222);
						phi232 = 0;
					}
					uint32_t phi_in233 = phi230;
					uint32_t phi234 = phi_in233;
					uint16_t phi235 = 0;
					if ((phi231 & 0xf00) == 0)
					{
						phi234 = anon142 ^ (uint32_t)(phi228 & 0xffff00ff | phi221 << 8 & 0xf000 | 0xf00);
						phi235 = 256;
					}
					if ((__zext uint16_t)((uint16_t)phi234 < 4096) + phi203 + phi195 + phi175 + phi170 + (phi138 + phi133 + phi127 << 4) + phi156 + phi161 + phi192 + phi208 + phi226 + phi232 + phi235 == *(uint16_t*)(arg1 - 66))
					{
						*(uint16_t*)(anon12 + (phi113 << 1 & 0x1fffe)) = *(uint16_t*)phi114;
						phi236 = (uint16_t)phi113 + 1;
						anon237 = phi114 + 2;
						uint64_t anon239 = phi48 + 4294967295 & 0xffffffff;
						anon238 = anon239 + anon239 + 2 + anon12;
						if (anon237 == anon238)
						{
							break;
						}
						else 
						{
							phi_in112 = anon237;
							phi113 = phi113 + 1 & 0xffffffff;
						}
					}
					else 
					{
						phi_in112 = anon237;
						phi113 = phi113;
						if (anon237 == anon238)
						{
							phi236 = (uint16_t)phi113;
							break;
						}
					}
				}
				alloca1.field1 = anon110;
				uint16_t* anon240 = (uint16_t*)phi16;
				*anon240 = *anon240;
				if (phi236 == 0 | *(uint16_t*)(arg1 - 66) == 64)
				{
					break;
				}
				else 
				{
					alloca5 = 0;
					uint64_t anon241 = (__zext uint64_t)phi236;
					alloca5 = (__zext uint64_t)*(uint16_t*)(anon12 + ((__sext int64_t)rand() % anon241 << 32 >> 31));
					alloca1.field4 = *(uint16_t*)(anon12 + ((__sext int64_t)rand() % anon241 << 32 >> 31));
					phi48 = anon241;
				}
			}
		}
		while (anon110 != 0);
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
