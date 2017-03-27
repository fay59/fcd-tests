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
		uint64_t phi_in18;
		uint32_t anon110;
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
						uint32_t phi_in54;
						uint8_t phi55;
						uint16_t phi56;
						uint8_t phi71;
						uint32_t phi72;
						uint32_t phi73;
						uint16_t phi74;
						uint16_t phi81;
						uint32_t phi_in87;
						uint8_t phi88;
						uint32_t phi89;
						uint16_t phi90;
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
							phi_in54 = anon52;
							phi55 = (uint8_t)anon52;
							phi56 = 1;
						}
						else 
						{
							alloca1.field4 = alloca1.field4;
							phi_in54 = anon53;
							phi55 = (uint8_t)alloca1.field4 & 0xf;
							phi56 = 0;
						}
						uint16_t phi_in57 = alloca1.field4;
						uint16_t phi_in58 = phi_in57;
						uint32_t phi59 = phi_in54;
						uint16_t phi60 = 0;
						if (((uint8_t)*(uint16_t*)phi16 ^ (uint8_t)phi_in54) < 16)
						{
							*(uint8_t*)&alloca5 = phi55 | 0xf0;
							phi_in58 = (uint16_t)*(uint32_t*)&alloca5;
							phi59 = *(uint32_t*)&alloca5;
							phi60 = 1;
						}
						uint32_t phi_in61 = phi59;
						uint16_t phi_in62 = phi_in58;
						uint16_t phi63 = 0;
						uint32_t phi64 = phi_in61;
						uint32_t anon65 = (__zext uint32_t)*(uint16_t*)phi16;
						if (((anon65 ^ phi_in61) & 0xf00) == 0)
						{
							((uint8_t*)&alloca5)[1] = (uint8_t)(alloca1.field4 >> 8) | 0xf;
							phi_in62 = (uint16_t)*(uint32_t*)&alloca5;
							phi63 = 1;
							phi64 = *(uint32_t*)&alloca5;
						}
						uint16_t phi66 = 0;
						uint16_t phi67 = phi_in62;
						if ((*(uint16_t*)phi16 ^ (uint16_t)phi64) < 4096)
						{
							uint16_t anon68 = phi_in62 | 0xf000;
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
						uint32_t phi_in75 = phi72;
						uint32_t phi_in76 = phi_in75;
						uint16_t phi77 = 0;
						if ((phi_in75 & 0xf0) == 0)
						{
							*(uint8_t*)&alloca5 = (uint8_t)phi73 | 0xf0;
							phi_in76 = *(uint32_t*)&alloca5;
							phi77 = 1;
						}
						uint32_t phi78 = phi_in76;
						uint16_t phi79 = 0;
						if ((phi_in76 & 0xf00) == 0)
						{
							((uint8_t*)&alloca5)[1] = phi71 | 0xf;
							phi78 = *(uint32_t*)&alloca5;
							phi79 = 1;
						}
						uint16_t phi80 = 0;
						uint16_t anon82 = (uint16_t)phi78;
						phi81 = anon82;
						if ((uint16_t)phi78 < 4096)
						{
							uint16_t anon83 = anon82 | 0xf000;
							*anon69 = anon83;
							phi80 = 1;
							phi81 = anon83;
						}
						*anon69 = phi81 >> 12 | phi81 << 4;
						uint32_t anon84 = (__zext uint32_t)(*(uint16_t*)phi16 & 0xf);
						uint32_t anon85 = *(uint32_t*)&alloca5 & 0xf;
						if (anon84 == anon85)
						{
							uint32_t anon86 = *(uint32_t*)&alloca5 | 0xf;
							alloca5 = (__zext uint64_t)anon86;
							phi_in87 = anon86;
							phi88 = (uint8_t)(*(uint32_t*)&alloca5 >> 8);
							phi89 = anon86;
							phi90 = 1;
						}
						else 
						{
							phi_in87 = *(uint32_t*)&alloca5;
							phi88 = (uint8_t)(phi81 >> 4);
							phi89 = anon85;
							phi90 = 0;
						}
						uint32_t phi91 = phi_in87;
						uint16_t phi92 = 0;
						if ((phi_in87 & 0xf0) == 0)
						{
							*(uint8_t*)&alloca5 = (uint8_t)phi89 | 0xf0;
							phi91 = *(uint32_t*)&alloca5;
							phi92 = 1;
						}
						uint32_t phi93 = phi91;
						uint16_t phi94 = 0;
						if ((phi93 & 0xf00) == 0)
						{
							((uint8_t*)&alloca5)[1] = phi88 | 0xf;
							phi93 = *(uint32_t*)&alloca5;
							phi94 = 1;
						}
						uint16_t phi95 = 0;
						uint16_t anon97 = (uint16_t)phi93;
						phi96 = anon97;
						if ((uint16_t)phi93 < 4096)
						{
							uint16_t anon98 = anon97 | 0xf000;
							*anon69 = anon98;
							phi95 = 1;
							phi96 = anon98;
						}
						*anon69 = phi96 >> 12 | phi96 << 4;
						uint32_t anon99 = *(uint32_t*)&alloca5 & 0xf;
						if (anon84 == anon99)
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
						alloca1.field5 = (__zext uint16_t)((uint16_t)phi109 < 4096) + phi108 + phi77 + (phi66 + phi56 + phi60 + phi63 << 4 | phi74) + phi79 + phi80 + phi90 + phi92 + phi94 + phi95 + phi104 + phi107;
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
				uint16_t phi235;
				uint64_t anon111 = (__zext uint64_t)alloca1.field4;
				alloca5 = anon111;
				uint64_t phi_in112 = anon12;
				uint64_t phi113 = 0;
				while (true)
				{
					uint64_t phi117;
					uint16_t phi119;
					uint16_t phi120;
					uint16_t phi121;
					uint8_t phi122;
					uint64_t phi147;
					uint64_t phi149;
					uint16_t phi_in150;
					uint16_t phi151;
					uint64_t phi153;
					uint8_t phi154;
					uint16_t phi155;
					uint16_t phi166;
					uint64_t phi183;
					uint16_t phi185;
					uint16_t phi_in186;
					uint64_t phi188;
					uint64_t phi189;
					uint8_t phi190;
					uint16_t phi191;
					uint16_t phi202;
					uint64_t phi218;
					uint32_t phi220;
					uint64_t phi222;
					uint16_t phi223;
					uint64_t phi225;
					uint8_t phi226;
					uint16_t phi227;
					uint64_t phi230;
					uint32_t phi232;
					uint16_t phi233;
					uint64_t anon236;
					uint64_t anon237;
					uint64_t phi114 = phi_in112;
					uint16_t anon116 = alloca1.field4 ^ *(uint16_t*)phi114;
					uint32_t anon115 = (__zext uint32_t)anon116 >> 8;
					if ((anon115 & 0xf) == 0)
					{
						uint16_t anon118 = alloca1.field4 | 0xf;
						phi117 = (__zext uint64_t)anon118;
						phi119 = anon118;
						phi120 = 1;
						phi121 = 2;
						phi122 = (uint8_t)(anon116 >> 8);
					}
					else 
					{
						phi117 = anon111;
						phi119 = alloca1.field4;
						phi120 = 0;
						phi121 = 1;
						phi122 = (uint8_t)anon115 & 0xf;
					}
					uint64_t phi123 = phi117;
					uint16_t phi124 = phi119;
					uint16_t phi125 = phi120;
					phi125 = phi121;
					uint16_t phi126 = phi124 ^ *(uint16_t*)phi114;
					if (phi122 < 16)
					{
						uint64_t anon127 = phi123 & 0xff00 | (__zext uint64_t)(phi124 & 0xf | 0xf0);
						phi123 = anon127;
						uint16_t anon128 = (uint16_t)anon127;
						phi124 = anon128;
						phi126 = *(uint16_t*)phi114 ^ anon128;
					}
					uint64_t phi_in129 = phi123;
					uint16_t phi_in130 = phi124;
					uint16_t phi_in131 = phi126;
					uint16_t phi132 = phi_in130;
					uint16_t phi133 = phi_in131;
					uint16_t phi134 = 0;
					if ((phi_in131 & 0xf00) == 0)
					{
						uint64_t anon135 = phi_in129 & 0xffffffffffff00ff | (__zext uint64_t)(phi124 & 0xf000 | 0xf00);
						phi_in129 = anon135;
						uint16_t anon136 = (uint16_t)anon135;
						phi132 = anon136;
						phi133 = *(uint16_t*)phi114 ^ anon136;
						phi134 = 256;
					}
					uint64_t phi137 = phi_in129;
					uint16_t phi138 = 0;
					if (phi133 < 4096)
					{
						uint16_t anon139 = phi132 | 0xf000;
						phi137 = phi_in129 & 0xffffffffffff0000 | (__zext uint64_t)anon139;
						phi138 = 256;
						phi132 = anon139;
					}
					uint32_t anon141 = (__zext uint32_t)*(uint16_t*)phi114;
					uint16_t anon146 = phi132 << 4;
					uint16_t anon145 = phi132 >> 12 | anon146;
					uint64_t anon144 = (__zext uint64_t)anon145;
					uint64_t anon143 = phi137 & 0xffffffffffff0000 | anon144;
					uint32_t anon142 = (uint32_t)anon143;
					uint32_t anon140 = (anon141 ^ anon142) >> 8;
					if ((anon140 & 0xf) == 0)
					{
						uint32_t anon148 = anon142 | 0xf;
						phi147 = (__zext uint64_t)anon148;
						phi149 = anon143 >> 8 & 0xffffff;
						phi_in150 = (uint16_t)anon148;
						uint16_t anon152 = anon146 | 0xf;
						phi151 = anon152;
						phi153 = (__zext uint64_t)anon152;
						phi154 = (uint8_t)anon140;
						phi155 = 256;
					}
					else 
					{
						phi147 = anon143;
						phi149 = (__zext uint64_t)(phi132 >> 4);
						phi_in150 = anon145;
						phi151 = anon145;
						phi153 = anon144;
						phi154 = (uint8_t)anon140 & 0xf;
						phi155 = 0;
					}
					uint64_t phi_in156 = phi147;
					uint16_t phi_in157 = phi151;
					uint64_t phi_in158 = phi_in156;
					uint16_t phi_in159 = phi_in150;
					uint16_t phi160 = phi_in157;
					uint16_t phi161 = 0;
					if (phi154 < 16)
					{
						uint64_t anon162 = phi_in156 & 0xffffffffffffff00 | phi153 & 0xf | 0xf0;
						phi_in158 = anon162;
						uint16_t anon163 = (uint16_t)anon162;
						phi_in159 = anon163;
						phi160 = anon163;
						phi161 = 256;
					}
					uint64_t phi164 = phi_in158;
					uint16_t phi165 = phi_in159;
					uint16_t anon167 = *(uint16_t*)phi114 ^ phi160;
					phi166 = anon167;
					uint16_t phi168 = 0;
					if ((anon167 & 0xf00) == 0)
					{
						uint64_t anon169 = phi_in158 & 0xffffffffffff00ff | phi149 << 8 & 0xf000 | 0xf00;
						phi164 = anon169;
						uint16_t anon170 = (uint16_t)anon169;
						phi165 = anon170;
						phi166 = *(uint16_t*)phi114 ^ anon170;
						phi168 = 256;
					}
					uint64_t phi_in171 = phi164;
					uint16_t phi_in172 = phi165;
					uint64_t phi173 = phi_in171;
					uint16_t phi174 = 0;
					uint16_t phi175 = phi_in172;
					if (phi166 < 4096)
					{
						uint16_t anon176 = phi_in172 | 0xf000;
						phi173 = phi_in171 & 0xffffffffffff0000 | (__zext uint64_t)anon176;
						phi174 = 256;
						phi175 = anon176;
					}
					uint16_t anon182 = phi175 << 4;
					uint16_t anon181 = phi175 >> 12 | anon182;
					uint64_t anon180 = (__zext uint64_t)anon181;
					uint64_t anon179 = phi173 & 0xffffffffffff0000 | anon180;
					uint32_t anon178 = (uint32_t)anon179;
					uint32_t anon177 = (anon141 ^ anon178) >> 8;
					if ((anon177 & 0xf) == 0)
					{
						uint32_t anon184 = anon178 | 0xf;
						phi183 = (__zext uint64_t)anon184;
						phi185 = (uint16_t)anon184;
						uint16_t anon187 = anon182 | 0xf;
						phi_in186 = anon187;
						phi188 = anon179 >> 8 & 0xffffff;
						phi189 = (__zext uint64_t)anon187;
						phi190 = (uint8_t)anon177;
						phi191 = 256;
					}
					else 
					{
						phi183 = anon179;
						phi185 = anon181;
						phi_in186 = anon181;
						phi188 = (__zext uint64_t)(phi175 >> 4);
						phi189 = anon180;
						phi190 = (uint8_t)anon177 & 0xf;
						phi191 = 0;
					}
					uint64_t phi_in192 = phi183;
					uint16_t phi_in193 = phi185;
					uint64_t phi194 = phi_in192;
					uint16_t phi_in195 = phi_in193;
					uint16_t phi196 = phi_in186;
					uint16_t phi197 = 0;
					if (phi190 < 16)
					{
						uint64_t anon198 = phi_in192 & 0xffffffffffffff00 | phi189 & 0xf | 0xf0;
						phi194 = anon198;
						uint16_t anon199 = (uint16_t)anon198;
						phi_in195 = anon199;
						phi196 = anon199;
						phi197 = 256;
					}
					uint64_t phi_in200 = phi194;
					uint16_t phi_in201 = phi_in195;
					uint16_t anon203 = *(uint16_t*)phi114 ^ phi196;
					phi202 = anon203;
					uint16_t phi204 = 0;
					if ((anon203 & 0xf00) == 0)
					{
						uint64_t anon205 = phi_in200 & 0xffffffffffff00ff | phi188 << 8 & 0xf000 | 0xf00;
						phi_in200 = anon205;
						uint16_t anon206 = (uint16_t)anon205;
						phi_in201 = anon206;
						phi202 = *(uint16_t*)phi114 ^ anon206;
						phi204 = 256;
					}
					uint64_t phi207 = phi_in200;
					uint16_t phi208 = 0;
					uint16_t phi209 = phi_in201;
					if (phi202 < 4096)
					{
						uint16_t anon210 = phi_in201 | 0xf000;
						phi207 = phi_in200 & 0xffffffffffff0000 | (__zext uint64_t)anon210;
						phi208 = 256;
						phi209 = anon210;
					}
					uint16_t anon217 = phi209 << 4;
					uint16_t anon216 = phi209 >> 12 | anon217;
					uint64_t anon215 = (__zext uint64_t)anon216;
					uint64_t anon214 = phi207 & 0xffffffffffff0000 | anon215;
					uint32_t anon213 = (uint32_t)anon214;
					uint32_t anon212 = anon141 ^ anon213;
					uint32_t anon211 = anon212 >> 8;
					if ((anon211 & 0xf) == 0)
					{
						uint32_t anon219 = anon213 | 0xf;
						phi218 = (__zext uint64_t)anon219;
						uint32_t anon221 = anon141 ^ anon219;
						phi220 = anon221;
						phi222 = anon214 >> 8 & 0xffffff;
						uint16_t anon224 = anon217 | 0xf;
						phi223 = anon224;
						phi225 = (__zext uint64_t)anon224;
						phi226 = (uint8_t)(anon221 >> 8);
						phi227 = 256;
					}
					else 
					{
						phi218 = anon214;
						phi220 = anon212;
						phi222 = (__zext uint64_t)(phi209 >> 4);
						phi223 = anon216;
						phi225 = anon215;
						phi226 = (uint8_t)anon211 & 0xf;
						phi227 = 0;
					}
					uint64_t phi_in228 = phi218;
					uint32_t phi229 = phi220;
					if (phi226 < 16)
					{
						uint64_t anon231 = phi_in228 & 0xffffffffffffff00 | phi225 & 0xf | 0xf0;
						phi230 = anon231;
						phi229 = (__zext uint32_t)(*(uint16_t*)phi114 ^ (uint16_t)anon231);
						phi232 = anon141 ^ (uint32_t)anon231;
						phi233 = 256;
					}
					else 
					{
						phi230 = phi_in228;
						phi232 = (__zext uint32_t)(*(uint16_t*)phi114 ^ phi223);
						phi233 = 0;
					}
					uint16_t phi234 = 0;
					if ((phi232 & 0xf00) == 0)
					{
						phi229 = anon141 ^ (uint32_t)(phi230 & 0xffff00ff | phi222 << 8 & 0xf000 | 0xf00);
						phi234 = 256;
					}
					if ((__zext uint16_t)((uint16_t)phi229 < 4096) + phi204 + phi197 + phi174 + phi168 + (phi138 + phi134 + phi125 << 4) + phi155 + phi161 + phi191 + phi208 + phi227 + phi233 + phi234 == *(uint16_t*)(arg1 - 66))
					{
						*(uint16_t*)(anon12 + (phi113 << 1 & 0x1fffe)) = *(uint16_t*)phi114;
						phi235 = (uint16_t)phi113 + 1;
						anon236 = phi114 + 2;
						uint64_t anon238 = phi48 + 4294967295 & 0xffffffff;
						anon237 = anon238 + anon238 + 2 + anon12;
						if (anon236 == anon237)
						{
							break;
						}
						else 
						{
							phi_in112 = anon236;
							phi113 = phi113 + 1 & 0xffffffff;
						}
					}
					else 
					{
						phi_in112 = anon236;
						phi113 = phi113;
						if (anon236 == anon237)
						{
							phi235 = (uint16_t)phi113;
							break;
						}
					}
				}
				alloca1.field1 = anon110;
				uint16_t* anon239 = (uint16_t*)phi16;
				*anon239 = *anon239;
				if (phi235 == 0 | *(uint16_t*)(arg1 - 66) == 64)
				{
					break;
				}
				else 
				{
					alloca5 = 0;
					uint64_t anon240 = (__zext uint64_t)phi235;
					alloca5 = (__zext uint64_t)*(uint16_t*)(anon12 + ((__sext int64_t)rand() % anon240 << 32 >> 31));
					alloca1.field4 = *(uint16_t*)(anon12 + ((__sext int64_t)rand() % anon240 << 32 >> 31));
					phi48 = anon240;
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
