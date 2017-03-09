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
	struct { uint16_t field0; uint32_t field1; uint8_t field2[10]; uint16_t field3; uint16_t field4; uint16_t field5; uint8_t field6[48]; uint32_t field7; uint8_t field8[4]; uint64_t field9; } alloca1;
	uint32_t anon7;
	uint64_t phi8;
	uint16_t phi21;
	uint64_t phi40;
	uint64_t phi60;
	uint64_t phi88;
	uint64_t phi114;
	uint64_t phi167;
	uint64_t phi199;
	uint64_t phi229;
	alloca1.field9 = arg0;
	alloca1.field7 = 0;
	alloca1.field1 = (uint32_t)arg2;
	uint64_t* anon3 = (uint64_t*)arg3;
	uint64_t anon2 = strlen((uint8_t*)*anon3);
	uint64_t anon4 = *anon3 + anon2 - 1;
	*anon3 = anon4;
	uint8_t* anon5 = (uint8_t*)anon4;
	*anon5 = *anon5 ^ 0x64;
	uint64_t anon6 = time(null);
	srand((uint32_t)anon6);
	if (alloca1.field1 == 2)
	{
		anon7 = sscanf(*(uint8_t**)(arg3 + 8), (uint8_t*)0x400e84);
		if (anon7 != 0 && alloca1.field1 != 0)
		{
			alloca1.field1 = alloca1.field1;
			uint32_t anon9 = alloca1.field1 * alloca1.field1;
			phi8 = (__sext int64_t)(anon9 * anon9);
		}
	}
	if (alloca1.field1 != 2 || anon7 != 0 && alloca1.field1 == 2 && alloca1.field1 == 0 || alloca1.field1 == 2 && anon7 == 0)
	{
		alloca1.field1 = 6;
		alloca1.field1 = 6;
		phi8 = 1296;
	}
	uint32_t phi10 = alloca1.field1;
	uint8_t* anon11 = calloc(phi8, 2);
	if (anon11 == null)
	{
		puts((uint8_t*)0x400e87);
		exit(1);
	}
	else 
	{
		uint64_t phi_in14;
		uint64_t phi15;
		uint64_t anon24;
		uint32_t anon131;
		uint32_t anon13 = phi10 * phi10;
		uint32_t anon12 = anon13 * anon13;
		if (anon12 < 2)
		{
			phi_in14 = 1;
			phi15 = arg1 - 70;
		}
		else 
		{
			uint64_t anon36;
			uint64_t anon18 = (__zext uint64_t)phi10;
			uint64_t anon17 = anon18 << 8;
			uint16_t anon16 = (uint16_t)(4096 - anon17);
			alloca1.field0 = anon16;
			uint64_t phi_in19 = 1;
			do
			{
				uint64_t phi20 = phi_in19;
				anon24 = (uint64_t)anon11;
				uint64_t anon25 = phi20 << 1 & 0x1fffe;
				uint64_t anon23 = (__zext uint64_t)*(uint16_t*)(anon24 + anon25 - 2) + 1;
				uint16_t anon22 = (uint16_t)anon23;
				phi21 = anon22;
				uint16_t phi26 = anon22;
				uint32_t anon27 = (uint32_t)anon23;
				if (((phi10 ^ anon27) & 0xf) == 0)
				{
					uint32_t anon29 = anon27 + 16 - phi10;
					uint16_t anon28 = (uint16_t)anon29;
					phi21 = anon28;
					phi26 = anon28;
					uint64_t anon30 = anon18 << 4;
					if ((((uint32_t)anon30 ^ anon29) & 0xf0) == 0)
					{
						uint32_t anon32 = anon29 + (uint32_t)(256 - anon30);
						uint16_t anon31 = (uint16_t)anon32;
						phi21 = anon31;
						phi26 = anon31;
						if ((((uint32_t)anon17 ^ anon32) & 0xf00) == 0)
						{
							uint16_t anon33 = anon31 + anon16;
							uint16_t anon34 = (uint16_t)(phi10 << 12);
							phi21 = anon33 - (anon34 == (anon33 & 0xf000) ? anon34 : 0);
							phi26 = anon34 == (anon33 & 0xf000) ? 0 : anon33;
						}
					}
				}
				alloca1.field3 = phi21;
				*(uint16_t*)(anon25 + anon24) = phi26;
				uint64_t anon35 = phi20 + 1;
				phi_in19 = anon35 & 0xffffffff;
				anon36 = anon35 & 0xffff;
			}
			while (anon12 > (uint32_t)anon36);
			phi_in14 = anon36;
			phi15 = (uint64_t)&alloca1.field3;
		}
		uint32_t anon37 = rand();
		uint8_t** anon38 = (uint8_t**)arg3;
		*(uint16_t*)(**anon38 == 0 ? phi15 : (uint64_t)&alloca1.field4) = *(uint16_t*)(anon24 + ((__sext int64_t)anon37 % phi_in14 << 32 >> 31));
		do
		{
			uint64_t phi39;
			uint32_t phi68;
			uint64_t phi70;
			uint32_t phi95;
			uint64_t phi98;
			uint32_t phi119;
			do
			{
				phi39 = phi_in14;
				printf((uint8_t*)0x400e95);
				if (**anon38 == 0)
				{
					if (**anon38 != 0)
					{
						scanf((uint8_t*)0x400eaa);
						if (**anon38 != 0)
						{
							break;
						}
					}
					if (**anon38 == 0 && (**anon38 != 0))
					{
						alloca1.field4 = alloca1.field4 - 4369;
					}
				}
				else 
				{
					printf((uint8_t*)0x400ea4);
				}
				if (**anon38 == 0 && **anon38 == 0 || **anon38 != 0 && **anon38 == 0 && **anon38 == 0 || **anon38 != 0 && **anon38 != 0)
				{
					printf((uint8_t*)0x400eae);
				}
			}
			while (!(**anon38 == 0 && (**anon38 == 0 && **anon38 == 0 || **anon38 != 0 && **anon38 == 0 && **anon38 == 0 || **anon38 != 0 && **anon38 != 0)));
			uint64_t anon41 = (__zext uint64_t)alloca1.field4;
			phi40 = anon41;
			uint16_t phi_in42 = alloca1.field4 & 0xf;
			uint32_t phi43 = (__zext uint32_t)alloca1.field4;
			uint16_t phi44 = 0;
			if (((alloca1.field4 ^ *(uint16_t*)(arg1 - 70)) & 0xf) == 0)
			{
				uint64_t anon45 = anon41 | 0xf;
				phi40 = anon45;
				phi_in42 = alloca1.field4 | 0xf;
				phi43 = (uint32_t)anon45;
				phi44 = 1;
			}
			uint32_t phi46 = phi43;
			uint64_t phi47 = phi40;
			uint16_t phi48 = phi_in42;
			uint16_t phi49 = 0;
			uint32_t anon50 = (__zext uint32_t)*(uint16_t*)(arg1 - 70);
			if (((anon50 ^ phi46) & 0xf0) == 0)
			{
				uint64_t anon51 = phi40 & 0xf | 0xf0;
				phi47 = phi40 & 0xffffffffffffff00 | anon51;
				uint32_t anon52 = (uint32_t)phi40 & 0xff00 | (uint32_t)anon51;
				phi48 = (uint16_t)anon52;
				phi46 = anon52;
				phi49 = 1;
			}
			uint16_t phi53 = phi48;
			uint32_t phi54 = phi46;
			uint64_t phi55 = phi47 & 0xffff;
			uint16_t phi56 = 0;
			uint12_t anon57 = (uint12_t)*(uint16_t*)(arg1 - 70);
			if ((anon57 ^ (uint12_t)phi54) < 256)
			{
				uint64_t anon58 = (__zext uint64_t)(alloca1.field4 >> 8) << 8 | 0xf00;
				phi55 = phi47 & 0xff | anon58;
				uint64_t anon59 = phi47 & 0xffff00ff | anon58;
				phi53 = (uint16_t)anon59;
				phi56 = 1;
				phi54 = (uint32_t)anon59;
			}
			uint16_t anon64 = (*(uint16_t*)(arg1 - 70) ^ (uint16_t)phi54) < 4096 ? phi53 | 0xf000 : phi53;
			uint16_t anon63 = anon64 >> 12;
			uint16_t anon65 = anon64 << 4;
			uint64_t anon62 = (__zext uint64_t)(anon63 | anon65);
			uint64_t anon61 = ((*(uint16_t*)(arg1 - 70) ^ (uint16_t)phi54) < 4096 ? 0 : phi55 & 0xffffffffffff0000) | anon62;
			phi60 = anon61;
			uint64_t phi66 = (__zext uint64_t)(anon64 >> 4);
			uint16_t phi67 = anon63;
			uint32_t anon69 = (uint32_t)anon61;
			phi68 = anon69;
			uint64_t anon71 = anon61 & 0xffffffff;
			phi70 = anon71;
			uint16_t phi72 = 0;
			if (((anon50 ^ anon69) & 0xf) == 0)
			{
				uint64_t anon73 = anon71 | 0xf;
				phi60 = anon73;
				phi66 = anon62 >> 8;
				phi67 = anon65 | 0xf;
				phi68 = (uint32_t)anon73;
				phi70 = anon73;
				phi72 = 1;
			}
			uint16_t phi_in74 = phi67;
			uint64_t phi75 = phi60;
			uint16_t phi76 = phi_in74;
			uint32_t phi77 = phi68;
			uint16_t phi78 = 0;
			if (((anon50 ^ phi68) & 0xf0) == 0)
			{
				uint64_t anon79 = phi70 & 0xf | 0xf0;
				phi75 = phi60 & 0xffffffffffffff00 | anon79;
				uint32_t anon80 = (uint32_t)phi60 & 0xff00 | (uint32_t)anon79;
				phi76 = (uint16_t)anon80;
				phi77 = anon80;
				phi78 = 1;
			}
			uint16_t phi_in81 = phi76;
			uint64_t phi82 = phi75 & 0xffff;
			uint16_t phi83 = phi_in81;
			uint16_t phi84 = 0;
			uint32_t phi85 = phi77;
			if ((anon57 ^ (uint12_t)phi77) < 256)
			{
				uint64_t anon86 = phi66 << 8 & 0xf000 | 0xf00;
				phi82 = phi75 & 0xff | anon86;
				uint64_t anon87 = phi75 & 0xffff00ff | anon86;
				phi83 = (uint16_t)anon87;
				phi84 = 1;
				phi85 = (uint32_t)anon87;
			}
			uint16_t anon92 = (*(uint16_t*)(arg1 - 70) ^ (uint16_t)phi85) < 4096 ? phi83 | 0xf000 : phi83;
			uint16_t anon91 = anon92 >> 12;
			uint16_t anon93 = anon92 << 4;
			uint64_t anon90 = (__zext uint64_t)(anon91 | anon93);
			uint64_t anon89 = ((*(uint16_t*)(arg1 - 70) ^ (uint16_t)phi85) < 4096 ? 0 : phi82 & 0xffffffffffff0000) | anon90;
			phi88 = anon89;
			uint16_t phi_in94 = anon91;
			uint32_t anon96 = (uint32_t)anon89;
			phi95 = anon96;
			uint64_t phi97 = (__zext uint64_t)(anon92 >> 4);
			uint64_t anon99 = anon89 & 0xffffffff;
			phi98 = anon99;
			uint16_t phi100 = 0;
			if (((anon50 ^ anon96) & 0xf) == 0)
			{
				uint64_t anon101 = anon99 | 0xf;
				phi88 = anon101;
				phi_in94 = anon93 | 0xf;
				phi95 = (uint32_t)anon101;
				phi97 = anon90 >> 8;
				phi98 = anon101;
				phi100 = 1;
			}
			uint32_t phi102 = phi95;
			uint64_t phi103 = phi88;
			uint16_t phi_in104 = phi_in94;
			uint16_t phi105 = 0;
			if (((anon50 ^ phi102) & 0xf0) == 0)
			{
				uint64_t anon106 = phi98 & 0xf | 0xf0;
				phi103 = phi88 & 0xffffffffffffff00 | anon106;
				uint32_t anon107 = (uint32_t)phi88 & 0xff00 | (uint32_t)anon106;
				phi_in104 = (uint16_t)anon107;
				phi102 = anon107;
				phi105 = 1;
			}
			uint64_t phi108 = phi103 & 0xffff;
			uint16_t phi109 = phi_in104;
			uint16_t phi110 = 0;
			uint32_t phi111 = phi102;
			if ((anon57 ^ (uint12_t)phi102) < 256)
			{
				uint64_t anon112 = phi97 << 8 & 0xf000 | 0xf00;
				phi108 = phi103 & 0xff | anon112;
				uint64_t anon113 = phi103 & 0xffff00ff | anon112;
				phi109 = (uint16_t)anon113;
				phi110 = 1;
				phi111 = (uint32_t)anon113;
			}
			uint16_t anon117 = (*(uint16_t*)(arg1 - 70) ^ (uint16_t)phi111) < 4096 ? phi109 | 0xf000 : phi109;
			uint16_t anon118 = anon117 << 4;
			uint16_t anon116 = anon117 >> 12 | anon118;
			uint64_t anon115 = ((*(uint16_t*)(arg1 - 70) ^ (uint16_t)phi111) < 4096 ? 0 : phi108 & 0xffffffffffff0000) | (__zext uint64_t)anon116;
			phi114 = anon115;
			uint32_t anon120 = (uint32_t)anon115;
			phi119 = anon120;
			uint32_t phi121 = (__zext uint32_t)(anon117 >> 4);
			uint16_t phi122 = anon116;
			uint16_t phi123 = 0;
			if (((anon50 ^ anon120) & 0xf) == 0)
			{
				uint64_t anon124 = anon115 & 0xfffffff0 | 0xf;
				phi114 = anon124;
				phi119 = (uint32_t)anon124;
				phi121 = anon120 >> 8 & 0xff;
				phi122 = anon118 | 0xf;
				phi123 = 1;
			}
			uint32_t phi125 = phi119;
			uint64_t phi126 = phi114;
			uint16_t phi127 = 0;
			if (((anon50 ^ phi125) & 0xf0) == 0)
			{
				uint64_t anon128 = (__zext uint64_t)phi122 & 0xf | 0xf0;
				phi126 = phi114 & 0xffffffffffffff00 | anon128;
				phi125 = (uint32_t)phi114 & 0xff00 | (uint32_t)anon128;
				phi127 = 1;
			}
			uint16_t phi129 = 0;
			uint32_t phi130 = phi125;
			if ((anon57 ^ (uint12_t)phi125) < 256)
			{
				phi129 = 1;
				phi130 = (uint32_t)phi126 & 0xff | phi121 << 8 & 0xf000 | 0xf00;
			}
			alloca1.field5 = (__zext uint16_t)((*(uint16_t*)(arg1 - 70) ^ (uint16_t)phi130) < 4096) + phi129 + phi78 + ((__zext uint16_t)((*(uint16_t*)(arg1 - 70) ^ (uint16_t)phi54) < 4096) + phi44 + phi49 + phi56 << 4 | phi72) + phi84 + (__zext uint16_t)((*(uint16_t*)(arg1 - 70) ^ (uint16_t)phi85) < 4096) + phi100 + phi105 + phi110 + (__zext uint16_t)((*(uint16_t*)(arg1 - 70) ^ (uint16_t)phi111) < 4096) + phi123 + phi127;
			printf((uint8_t*)0x400eb3);
			alloca1.field1 = 0;
			anon131 = (uint32_t)phi39;
			if (anon131 != 0)
			{
				uint16_t phi248;
				uint32_t phi_in132 = 0;
				uint16_t phi_in133 = 0;
				uint16_t phi_in134 = 0;
				uint64_t phi_in135 = anon24;
				while (true)
				{
					uint64_t phi142;
					uint64_t anon144;
					uint16_t phi145;
					uint16_t phi147;
					uint16_t phi148;
					uint64_t phi149;
					uint16_t phi150;
					uint64_t phi151;
					uint64_t phi161;
					uint16_t phi163;
					uint16_t phi165;
					uint16_t phi166;
					uint64_t phi176;
					uint64_t phi178;
					uint16_t phi194;
					uint64_t phi207;
					uint64_t phi209;
					uint16_t phi224;
					uint64_t phi235;
					uint64_t phi237;
					uint64_t anon250;
					uint64_t anon251;
					uint32_t phi136 = phi_in132;
					uint16_t phi137 = phi_in133;
					uint16_t phi138 = phi_in134;
					uint64_t phi139 = phi_in135;
					uint16_t anon141 = alloca1.field4 ^ *(uint16_t*)phi139;
					uint32_t anon140 = (__zext uint32_t)anon141 >> 8;
					if ((anon140 & 0xf) == 0)
					{
						anon144 = (__zext uint64_t)alloca1.field4;
						uint64_t anon143 = anon144 | 0xf;
						phi142 = anon143;
						uint16_t anon146 = (uint16_t)anon143;
						phi145 = anon146;
						phi147 = anon146 ^ *(uint16_t*)phi139;
						phi148 = 1;
						phi149 = anon144 >> 8;
						phi150 = 2;
						phi151 = (__zext uint64_t)anon141 >> 8;
					}
					else 
					{
						phi142 = anon144;
						phi145 = alloca1.field4;
						phi147 = anon141;
						phi148 = 0;
						phi149 = (__zext uint64_t)(alloca1.field4 >> 8);
						phi150 = 1;
						phi151 = (__zext uint64_t)anon140;
					}
					uint16_t phi_in152 = phi145;
					uint16_t phi_in153 = phi147;
					uint16_t phi_in154 = phi148;
					uint64_t phi155 = phi142;
					uint16_t phi156 = phi_in152;
					uint16_t phi157 = phi_in153;
					uint16_t phi158 = phi_in154;
					if ((phi151 & 0xf0) == 0)
					{
						uint64_t anon159 = phi142 & 0xffffffffffffff00 | phi142 & 0xf | 0xf0;
						phi155 = anon159;
						uint16_t anon160 = (uint16_t)anon159;
						phi156 = anon160;
						phi157 = *(uint16_t*)phi139 ^ anon160;
						phi158 = phi150;
					}
					if ((phi157 & 0xf00) == 0)
					{
						uint64_t anon162 = phi155 & 0xff | phi149 << 8 & 0xf000 | 0xf00;
						phi161 = anon162;
						uint16_t anon164 = (uint16_t)anon162;
						phi163 = anon164;
						phi165 = *(uint16_t*)phi139 ^ anon164;
						phi166 = 256;
					}
					else 
					{
						phi161 = phi155 & 0xffff;
						phi163 = phi156;
						phi165 = phi157 & 0xfff;
						phi166 = 0;
					}
					uint16_t anon171 = phi165 < 4096 ? phi163 | 0xf000 : phi163;
					uint16_t anon172 = anon171 << 4;
					uint16_t anon170 = anon171 >> 12 | anon172;
					uint64_t anon169 = (__zext uint64_t)anon170;
					uint64_t anon168 = (phi165 < 4096 ? 0 : phi161 & 0xffffffffffff0000) | anon169;
					phi167 = anon168;
					uint64_t phi173 = (__zext uint64_t)(anon171 >> 4);
					uint16_t phi174 = anon170;
					uint16_t phi175 = anon170;
					uint64_t anon177 = anon168 & 0xffffffff;
					phi176 = anon177;
					uint32_t anon181 = (__zext uint32_t)*(uint16_t*)phi139;
					uint32_t anon180 = anon181 ^ (uint32_t)anon168;
					uint32_t anon179 = anon180 >> 8;
					phi178 = (__zext uint64_t)anon179;
					uint16_t phi182 = 0;
					if ((anon179 & 0xf) == 0)
					{
						uint64_t anon183 = anon177 | 0xf;
						phi167 = anon183;
						phi173 = anon169 >> 8;
						phi174 = anon172 | 0xf;
						phi175 = (uint16_t)anon183;
						phi176 = anon183;
						phi178 = (__zext uint64_t)anon180 >> 8;
						phi182 = 256;
					}
					uint16_t phi_in184 = phi174;
					uint16_t phi185 = phi175;
					uint64_t phi186 = phi167;
					uint16_t phi187 = phi_in184;
					uint16_t phi188 = 0;
					if ((phi178 & 0xf0) == 0)
					{
						uint64_t anon189 = phi167 & 0xffffffffffffff00 | phi176 & 0xf | 0xf0;
						phi186 = anon189;
						uint16_t anon190 = (uint16_t)anon189;
						phi187 = anon190;
						phi185 = anon190;
						phi188 = 256;
					}
					uint16_t phi_in191 = phi187;
					uint64_t phi192 = phi186 & 0xffff;
					uint16_t phi193 = phi_in191;
					uint16_t anon195 = *(uint16_t*)phi139 ^ phi185;
					phi194 = anon195 & 0xfff;
					uint16_t phi196 = 0;
					if ((anon195 & 0xf00) == 0)
					{
						uint64_t anon197 = phi186 & 0xff | phi173 << 8 & 0xf000 | 0xf00;
						phi192 = anon197;
						uint16_t anon198 = (uint16_t)anon197;
						phi193 = anon198;
						phi194 = *(uint16_t*)phi139 ^ anon198;
						phi196 = 256;
					}
					uint16_t anon202 = phi194 < 4096 ? phi193 | 0xf000 : phi193;
					uint16_t anon203 = anon202 << 4;
					uint16_t anon201 = anon202 >> 12 | anon203;
					uint64_t anon200 = (phi194 < 4096 ? 0 : phi192 & 0xffffffffffff0000) | (__zext uint64_t)anon201;
					phi199 = anon200;
					uint16_t phi204 = anon201;
					uint16_t phi205 = anon201;
					uint64_t phi206 = (__zext uint64_t)(anon202 >> 4 & 0xff);
					uint64_t anon208 = anon200 & 0xffffffff;
					phi207 = anon208;
					uint32_t anon211 = anon181 ^ (uint32_t)anon200;
					uint32_t anon210 = anon211 >> 8;
					phi209 = (__zext uint64_t)anon210;
					uint16_t phi212 = 0;
					if ((anon210 & 0xf) == 0)
					{
						uint64_t anon213 = anon208 | 0xf;
						phi199 = anon213;
						phi204 = anon203 | 0xf;
						phi205 = (uint16_t)anon213;
						phi206 = anon208 >> 8;
						phi207 = anon213;
						phi209 = (__zext uint64_t)anon211 >> 8;
						phi212 = 256;
					}
					uint16_t phi_in214 = phi204;
					uint16_t phi_in215 = phi205;
					uint64_t phi216 = phi199;
					uint16_t phi217 = phi_in214;
					uint16_t phi218 = phi_in215;
					uint16_t phi219 = 0;
					if ((phi209 & 0xf0) == 0)
					{
						uint64_t anon220 = phi199 & 0xffffffffffffff00 | phi207 & 0xf | 0xf0;
						phi216 = anon220;
						uint16_t anon221 = (uint16_t)anon220;
						phi217 = anon221;
						phi218 = anon221;
						phi219 = 256;
					}
					uint16_t phi222 = phi217;
					uint64_t phi223 = phi216 & 0xffff;
					uint16_t anon225 = *(uint16_t*)phi139 ^ phi218;
					phi224 = anon225 & 0xfff;
					uint16_t phi226 = 0;
					if ((anon225 & 0xf00) == 0)
					{
						uint64_t anon227 = phi216 & 0xff | phi206 << 8 & 0xf000 | 0xf00;
						phi223 = anon227;
						uint16_t anon228 = (uint16_t)anon227;
						phi222 = anon228;
						phi224 = *(uint16_t*)phi139 ^ anon228;
						phi226 = 256;
					}
					uint16_t anon232 = phi224 < 4096 ? phi222 | 0xf000 : phi222;
					uint16_t anon231 = anon232 >> 12 | anon232 << 4;
					uint64_t anon230 = (phi224 < 4096 ? 0 : phi223 & 0xffffffffffff0000) | (__zext uint64_t)anon231;
					phi229 = anon230;
					uint16_t phi233 = anon231;
					uint64_t phi234 = (__zext uint64_t)(anon232 >> 4 & 0xff);
					uint64_t anon236 = anon230 & 0xffffffff;
					phi235 = anon236;
					uint32_t anon239 = anon181 ^ (uint32_t)anon230;
					uint32_t anon238 = anon239 >> 8;
					phi237 = (__zext uint64_t)anon238;
					uint16_t phi240 = 0;
					if ((anon238 & 0xf) == 0)
					{
						uint64_t anon241 = anon236 | 0xf;
						phi229 = anon241;
						phi233 = (uint16_t)anon241;
						phi234 = anon236 >> 8;
						phi235 = anon241;
						phi237 = (__zext uint64_t)anon239 >> 8;
						phi240 = 256;
					}
					uint64_t phi242 = phi229;
					uint32_t phi243 = (__zext uint32_t)(*(uint16_t*)phi139 ^ phi233);
					uint16_t phi244 = 0;
					if ((phi237 & 0xf0) == 0)
					{
						uint64_t anon245 = phi229 & 0xffffffffffffff00 | phi235 & 0xf | 0xf0;
						phi242 = anon245;
						phi243 = anon181 ^ (uint32_t)anon245;
						phi244 = 256;
					}
					uint32_t phi246 = phi243 & 0xfff;
					uint16_t phi247 = 0;
					if ((phi243 & 0xf00) == 0)
					{
						phi246 = (__zext uint32_t)(*(uint16_t*)phi139 ^ (uint16_t)(phi242 & 0xff | phi234 << 8 | 0xf00));
						phi247 = 256;
					}
					if ((__zext uint16_t)((uint16_t)phi246 < 4096) + phi226 + phi219 + (phi194 < 4096 ? 256 : 0) + phi196 + ((phi165 < 4096 ? 256 : 0) + phi166 + phi158 << 4) + phi182 + phi188 + phi212 + (phi224 < 4096 ? 256 : 0) + phi240 + phi244 + phi247 == *(uint16_t*)(arg1 - 66))
					{
						*(uint16_t*)(anon24 + ((__zext uint64_t)phi137 << 1)) = *(uint16_t*)phi139;
						uint16_t anon249 = (uint16_t)phi136 + 1;
						phi248 = anon249;
						phi_in132 = phi136 + 1;
						phi_in133 = anon249;
						phi_in134 = anon249;
						anon250 = phi139 + 2;
						phi_in135 = anon250;
						uint64_t anon252 = phi39 + 4294967295 & 0xffffffff;
						anon251 = anon252 + anon252 + 2 + anon24;
						if (anon250 == anon251)
						{
							break;
						}
					}
					else 
					{
						phi248 = phi138;
						phi_in132 = phi136;
						phi_in133 = phi137;
						phi_in134 = phi138;
						phi_in135 = anon250;
						if (anon250 == anon251)
						{
							break;
						}
					}
				}
				alloca1.field1 = anon131;
				uint16_t* anon253 = (uint16_t*)(arg1 - 70);
				*anon253 = *anon253;
				if (phi248 == 0 | *(uint16_t*)(arg1 - 66) == 64)
				{
					break;
				}
				else 
				{
					uint32_t anon254 = rand();
					uint64_t anon255 = (__zext uint64_t)phi248;
					alloca1.field4 = *(uint16_t*)(anon24 + ((__sext int64_t)anon254 % anon255 << 32 >> 31));
					phi_in14 = anon255;
				}
			}
		}
		while (anon131 != 0);
	}
	putchar(10);
	return;
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
