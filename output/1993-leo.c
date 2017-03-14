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
	uint64_t phi39;
	uint64_t phi59;
	uint64_t phi85;
	uint64_t phi110;
	uint64_t phi159;
	uint64_t phi189;
	uint64_t phi218;
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
		uint64_t phi14;
		uint64_t phi15;
		uint64_t anon23;
		uint32_t anon127;
		uint32_t anon13 = phi10 * phi10;
		uint32_t anon12 = anon13 * anon13;
		if (anon12 < 2)
		{
			phi14 = 1;
			phi15 = arg1 - 70;
		}
		else 
		{
			uint64_t anon34;
			uint64_t anon18 = (__zext uint64_t)phi10;
			uint64_t anon17 = anon18 << 8;
			uint16_t anon16 = (uint16_t)(4096 - anon17);
			alloca1.field0 = anon16;
			uint64_t phi_in19 = 1;
			do
			{
				uint64_t phi20 = phi_in19;
				anon23 = (uint64_t)anon11;
				uint64_t anon24 = phi20 << 1 & 0x1fffe;
				uint64_t anon22 = (__zext uint64_t)*(uint16_t*)(anon23 + anon24 - 2) + 1;
				uint16_t anon21 = (uint16_t)anon22;
				alloca1.field3 = anon21;
				*(uint16_t*)(anon24 + anon23) = anon21;
				uint32_t anon25 = (uint32_t)anon22;
				if (((phi10 ^ anon25) & 0xf) == 0)
				{
					uint32_t anon27 = anon25 + 16 - phi10;
					uint16_t anon26 = (uint16_t)anon27;
					alloca1.field3 = anon26;
					*(uint16_t*)(anon24 + anon23) = anon26;
					uint64_t anon28 = anon18 << 4;
					if ((((uint32_t)anon28 ^ anon27) & 0xf0) == 0)
					{
						uint32_t anon30 = anon27 + (uint32_t)(256 - anon28);
						uint16_t anon29 = (uint16_t)anon30;
						alloca1.field3 = anon29;
						*(uint16_t*)(anon24 + anon23) = anon29;
						if ((((uint32_t)anon17 ^ anon30) & 0xf00) == 0)
						{
							uint16_t anon31 = anon29 + anon16;
							uint16_t anon32 = (uint16_t)(phi10 << 12);
							alloca1.field3 = anon31 - (anon32 == (anon31 & 0xf000) ? anon32 : 0);
							*(uint16_t*)(anon24 + anon23) = anon32 == (anon31 & 0xf000) ? 0 : anon31;
						}
					}
				}
				uint64_t anon33 = phi20 + 1;
				phi_in19 = anon33 & 0xffffffff;
				anon34 = anon33 & 0xffff;
			}
			while (anon12 > (uint32_t)anon34);
			phi14 = anon34;
			phi15 = (uint64_t)&alloca1.field3;
		}
		uint64_t phi_in35 = phi14;
		uint32_t anon36 = rand();
		uint8_t** anon37 = (uint8_t**)arg3;
		*(uint16_t*)(**anon37 == 0 ? phi15 : (uint64_t)&alloca1.field4) = *(uint16_t*)(anon23 + ((__sext int64_t)anon36 % phi_in35 << 32 >> 31));
		do
		{
			uint64_t phi38;
			uint32_t phi67;
			uint64_t phi69;
			uint32_t phi92;
			uint64_t phi95;
			uint32_t phi115;
			do
			{
				phi38 = phi_in35;
				printf((uint8_t*)0x400e95);
				if (**anon37 == 0)
				{
					if (**anon37 != 0)
					{
						scanf((uint8_t*)0x400eaa);
						if (**anon37 != 0)
						{
							break;
						}
					}
					if (**anon37 == 0 && (**anon37 != 0))
					{
						alloca1.field4 = alloca1.field4 - 4369;
					}
				}
				else 
				{
					printf((uint8_t*)0x400ea4);
				}
				if (**anon37 == 0 && **anon37 == 0 || **anon37 != 0 && **anon37 == 0 && **anon37 == 0 || **anon37 != 0 && **anon37 != 0)
				{
					printf((uint8_t*)0x400eae);
				}
			}
			while (!(**anon37 == 0 && (**anon37 == 0 && **anon37 == 0 || **anon37 != 0 && **anon37 == 0 && **anon37 == 0 || **anon37 != 0 && **anon37 != 0)));
			uint64_t anon40 = (__zext uint64_t)alloca1.field4;
			phi39 = anon40;
			uint16_t phi_in41 = alloca1.field4 & 0xf;
			uint32_t phi42 = (__zext uint32_t)alloca1.field4;
			uint16_t phi43 = 0;
			if (((alloca1.field4 ^ *(uint16_t*)(arg1 - 70)) & 0xf) == 0)
			{
				uint64_t anon44 = anon40 | 0xf;
				phi39 = anon44;
				phi_in41 = alloca1.field4 | 0xf;
				phi42 = (uint32_t)anon44;
				phi43 = 1;
			}
			uint64_t phi45 = phi39;
			uint16_t phi_in46 = phi_in41;
			uint32_t phi47 = phi42;
			uint16_t phi48 = 0;
			uint32_t anon49 = (__zext uint32_t)*(uint16_t*)(arg1 - 70);
			if (((anon49 ^ phi42) & 0xf0) == 0)
			{
				uint64_t anon50 = phi39 & 0xf | 0xf0;
				phi45 = phi39 & 0xffffffffffffff00 | anon50;
				uint32_t anon51 = (uint32_t)phi39 & 0xff00 | (uint32_t)anon50;
				phi_in46 = (uint16_t)anon51;
				phi47 = anon51;
				phi48 = 1;
			}
			uint64_t phi52 = phi45 & 0xffff;
			uint16_t phi53 = phi_in46;
			uint16_t phi54 = 0;
			uint32_t phi55 = phi47;
			uint12_t anon56 = (uint12_t)*(uint16_t*)(arg1 - 70);
			if ((anon56 ^ (uint12_t)phi47) < 256)
			{
				uint64_t anon57 = (__zext uint64_t)(alloca1.field4 >> 8) << 8 | 0xf00;
				phi52 = phi45 & 0xff | anon57;
				uint64_t anon58 = phi45 & 0xffff00ff | anon57;
				phi53 = (uint16_t)anon58;
				phi54 = 1;
				phi55 = (uint32_t)anon58;
			}
			uint16_t anon63 = (*(uint16_t*)(arg1 - 70) ^ (uint16_t)phi55) < 4096 ? phi53 | 0xf000 : phi53;
			uint16_t anon62 = anon63 >> 12;
			uint16_t anon64 = anon63 << 4;
			uint64_t anon61 = (__zext uint64_t)(anon62 | anon64);
			uint64_t anon60 = ((*(uint16_t*)(arg1 - 70) ^ (uint16_t)phi55) < 4096 ? 0 : phi52 & 0xffffffffffff0000) | anon61;
			phi59 = anon60;
			uint64_t phi65 = (__zext uint64_t)(anon63 >> 4);
			uint16_t phi_in66 = anon62;
			uint32_t anon68 = (uint32_t)anon60;
			phi67 = anon68;
			uint64_t anon70 = anon60 & 0xffffffff;
			phi69 = anon70;
			uint16_t phi71 = 0;
			if (((anon49 ^ anon68) & 0xf) == 0)
			{
				uint64_t anon72 = anon70 | 0xf;
				phi59 = anon72;
				phi65 = anon61 >> 8;
				phi_in66 = anon64 | 0xf;
				phi67 = (uint32_t)anon72;
				phi69 = anon72;
				phi71 = 1;
			}
			uint64_t phi73 = phi59;
			uint16_t phi74 = phi_in66;
			uint32_t phi75 = phi67;
			uint16_t phi76 = 0;
			if (((anon49 ^ phi67) & 0xf0) == 0)
			{
				uint64_t anon77 = phi69 & 0xf | 0xf0;
				phi73 = phi59 & 0xffffffffffffff00 | anon77;
				uint32_t anon78 = (uint32_t)phi59 & 0xff00 | (uint32_t)anon77;
				phi74 = (uint16_t)anon78;
				phi75 = anon78;
				phi76 = 1;
			}
			uint16_t phi79 = phi74;
			uint64_t phi80 = phi73 & 0xffff;
			uint16_t phi81 = 0;
			uint32_t phi82 = phi75;
			if ((anon56 ^ (uint12_t)phi75) < 256)
			{
				uint64_t anon83 = phi65 << 8 & 0xf000 | 0xf00;
				phi80 = phi73 & 0xff | anon83;
				uint64_t anon84 = phi73 & 0xffff00ff | anon83;
				phi79 = (uint16_t)anon84;
				phi81 = 1;
				phi82 = (uint32_t)anon84;
			}
			uint16_t anon89 = (*(uint16_t*)(arg1 - 70) ^ (uint16_t)phi82) < 4096 ? phi79 | 0xf000 : phi79;
			uint16_t anon88 = anon89 >> 12;
			uint16_t anon90 = anon89 << 4;
			uint64_t anon87 = (__zext uint64_t)(anon88 | anon90);
			uint64_t anon86 = ((*(uint16_t*)(arg1 - 70) ^ (uint16_t)phi82) < 4096 ? 0 : phi80 & 0xffffffffffff0000) | anon87;
			phi85 = anon86;
			uint16_t phi_in91 = anon88;
			uint32_t anon93 = (uint32_t)anon86;
			phi92 = anon93;
			uint64_t phi94 = (__zext uint64_t)(anon89 >> 4);
			uint64_t anon96 = anon86 & 0xffffffff;
			phi95 = anon96;
			uint16_t phi97 = 0;
			if (((anon49 ^ anon93) & 0xf) == 0)
			{
				uint64_t anon98 = anon96 | 0xf;
				phi85 = anon98;
				phi_in91 = anon90 | 0xf;
				phi92 = (uint32_t)anon98;
				phi94 = anon87 >> 8;
				phi95 = anon98;
				phi97 = 1;
			}
			uint64_t phi99 = phi85;
			uint16_t phi100 = phi_in91;
			uint32_t phi101 = phi92;
			uint16_t phi102 = 0;
			if (((anon49 ^ phi92) & 0xf0) == 0)
			{
				uint64_t anon103 = phi95 & 0xf | 0xf0;
				phi99 = phi85 & 0xffffffffffffff00 | anon103;
				uint32_t anon104 = (uint32_t)phi85 & 0xff00 | (uint32_t)anon103;
				phi100 = (uint16_t)anon104;
				phi101 = anon104;
				phi102 = 1;
			}
			uint64_t phi105 = phi99 & 0xffff;
			uint16_t phi106 = 0;
			uint32_t phi107 = phi101;
			if ((anon56 ^ (uint12_t)phi101) < 256)
			{
				uint64_t anon108 = phi94 << 8 & 0xf000 | 0xf00;
				phi105 = phi99 & 0xff | anon108;
				uint64_t anon109 = phi99 & 0xffff00ff | anon108;
				phi100 = (uint16_t)anon109;
				phi106 = 1;
				phi107 = (uint32_t)anon109;
			}
			uint16_t anon113 = (*(uint16_t*)(arg1 - 70) ^ (uint16_t)phi107) < 4096 ? phi100 | 0xf000 : phi100;
			uint16_t anon114 = anon113 << 4;
			uint16_t anon112 = anon113 >> 12 | anon114;
			uint64_t anon111 = ((*(uint16_t*)(arg1 - 70) ^ (uint16_t)phi107) < 4096 ? 0 : phi105 & 0xffffffffffff0000) | (__zext uint64_t)anon112;
			phi110 = anon111;
			uint32_t anon116 = (uint32_t)anon111;
			phi115 = anon116;
			uint32_t phi117 = (__zext uint32_t)(anon113 >> 4);
			uint16_t phi118 = anon112;
			uint16_t phi119 = 0;
			if (((anon49 ^ anon116) & 0xf) == 0)
			{
				uint64_t anon120 = anon111 & 0xfffffff0 | 0xf;
				phi110 = anon120;
				phi115 = (uint32_t)anon120;
				phi117 = anon116 >> 8 & 0xff;
				phi118 = anon114 | 0xf;
				phi119 = 1;
			}
			uint64_t phi121 = phi110;
			uint32_t phi122 = phi115;
			uint16_t phi123 = 0;
			if (((anon49 ^ phi115) & 0xf0) == 0)
			{
				uint64_t anon124 = (__zext uint64_t)phi118 & 0xf | 0xf0;
				phi121 = phi110 & 0xffffffffffffff00 | anon124;
				phi122 = (uint32_t)phi110 & 0xff00 | (uint32_t)anon124;
				phi123 = 1;
			}
			uint32_t phi125 = phi122;
			uint16_t phi126 = 0;
			if ((anon56 ^ (uint12_t)phi125) < 256)
			{
				phi126 = 1;
				phi125 = (uint32_t)phi121 & 0xff | phi117 << 8 & 0xf000 | 0xf00;
			}
			alloca1.field5 = (__zext uint16_t)((*(uint16_t*)(arg1 - 70) ^ (uint16_t)phi125) < 4096) + phi126 + phi76 + ((__zext uint16_t)((*(uint16_t*)(arg1 - 70) ^ (uint16_t)phi55) < 4096) + phi43 + phi48 + phi54 << 4 | phi71) + phi81 + (__zext uint16_t)((*(uint16_t*)(arg1 - 70) ^ (uint16_t)phi82) < 4096) + phi97 + phi102 + phi106 + (__zext uint16_t)((*(uint16_t*)(arg1 - 70) ^ (uint16_t)phi107) < 4096) + phi119 + phi123;
			printf((uint8_t*)0x400eb3);
			alloca1.field1 = 0;
			anon127 = (uint32_t)phi38;
			if (anon127 != 0)
			{
				uint16_t phi237;
				uint32_t phi_in128 = 0;
				uint16_t phi_in129 = 0;
				uint16_t phi_in130 = 0;
				uint64_t phi_in131 = anon23;
				while (true)
				{
					uint64_t phi138;
					uint64_t anon140;
					uint16_t phi141;
					uint16_t phi_in143;
					uint16_t phi144;
					uint64_t phi145;
					uint16_t phi146;
					uint64_t phi147;
					uint64_t phi153;
					uint16_t phi155;
					uint16_t phi157;
					uint16_t phi158;
					uint64_t phi168;
					uint64_t phi170;
					uint16_t phi184;
					uint64_t phi197;
					uint64_t phi199;
					uint16_t phi213;
					uint64_t phi224;
					uint64_t phi226;
					uint64_t anon239;
					uint64_t anon240;
					uint32_t phi132 = phi_in128;
					uint16_t phi133 = phi_in129;
					uint16_t phi134 = phi_in130;
					uint64_t phi135 = phi_in131;
					uint16_t anon137 = alloca1.field4 ^ *(uint16_t*)phi135;
					uint32_t anon136 = (__zext uint32_t)anon137 >> 8;
					if ((anon136 & 0xf) == 0)
					{
						anon140 = (__zext uint64_t)alloca1.field4;
						uint64_t anon139 = anon140 | 0xf;
						phi138 = anon139;
						uint16_t anon142 = (uint16_t)anon139;
						phi141 = anon142;
						phi_in143 = anon142 ^ *(uint16_t*)phi135;
						phi144 = 1;
						phi145 = anon140 >> 8;
						phi146 = 2;
						phi147 = (__zext uint64_t)anon137 >> 8;
					}
					else 
					{
						phi138 = anon140;
						phi141 = alloca1.field4;
						phi_in143 = anon137;
						phi144 = 0;
						phi145 = (__zext uint64_t)(alloca1.field4 >> 8);
						phi146 = 1;
						phi147 = (__zext uint64_t)anon136;
					}
					uint16_t phi148 = phi144;
					uint64_t phi149 = phi138;
					uint16_t phi150 = phi_in143;
					if ((phi147 & 0xf0) == 0)
					{
						uint64_t anon151 = phi138 & 0xffffffffffffff00 | phi138 & 0xf | 0xf0;
						phi149 = anon151;
						uint16_t anon152 = (uint16_t)anon151;
						phi141 = anon152;
						phi150 = *(uint16_t*)phi135 ^ anon152;
						phi148 = phi146;
					}
					if ((phi150 & 0xf00) == 0)
					{
						uint64_t anon154 = phi149 & 0xff | phi145 << 8 & 0xf000 | 0xf00;
						phi153 = anon154;
						uint16_t anon156 = (uint16_t)anon154;
						phi155 = anon156;
						phi157 = *(uint16_t*)phi135 ^ anon156;
						phi158 = 256;
					}
					else 
					{
						phi153 = phi149 & 0xffff;
						phi155 = phi141;
						phi157 = phi150 & 0xfff;
						phi158 = 0;
					}
					uint16_t anon163 = phi157 < 4096 ? phi155 | 0xf000 : phi155;
					uint16_t anon164 = anon163 << 4;
					uint16_t anon162 = anon163 >> 12 | anon164;
					uint64_t anon161 = (__zext uint64_t)anon162;
					uint64_t anon160 = (phi157 < 4096 ? 0 : phi153 & 0xffffffffffff0000) | anon161;
					phi159 = anon160;
					uint64_t phi165 = (__zext uint64_t)(anon163 >> 4);
					uint16_t phi166 = anon162;
					uint16_t phi167 = anon162;
					uint64_t anon169 = anon160 & 0xffffffff;
					phi168 = anon169;
					uint32_t anon173 = (__zext uint32_t)*(uint16_t*)phi135;
					uint32_t anon172 = anon173 ^ (uint32_t)anon160;
					uint32_t anon171 = anon172 >> 8;
					phi170 = (__zext uint64_t)anon171;
					uint16_t phi174 = 0;
					if ((anon171 & 0xf) == 0)
					{
						uint64_t anon175 = anon169 | 0xf;
						phi159 = anon175;
						phi165 = anon161 >> 8;
						phi166 = anon164 | 0xf;
						phi167 = (uint16_t)anon175;
						phi168 = anon175;
						phi170 = (__zext uint64_t)anon172 >> 8;
						phi174 = 256;
					}
					uint16_t phi176 = phi166;
					uint64_t phi177 = phi159;
					uint16_t phi178 = 0;
					if ((phi170 & 0xf0) == 0)
					{
						uint64_t anon179 = phi159 & 0xffffffffffffff00 | phi168 & 0xf | 0xf0;
						phi177 = anon179;
						uint16_t anon180 = (uint16_t)anon179;
						phi176 = anon180;
						phi167 = anon180;
						phi178 = 256;
					}
					uint16_t phi_in181 = phi176;
					uint64_t phi182 = phi177 & 0xffff;
					uint16_t phi183 = phi_in181;
					uint16_t anon185 = *(uint16_t*)phi135 ^ phi167;
					phi184 = anon185 & 0xfff;
					uint16_t phi186 = 0;
					if ((anon185 & 0xf00) == 0)
					{
						uint64_t anon187 = phi177 & 0xff | phi165 << 8 & 0xf000 | 0xf00;
						phi182 = anon187;
						uint16_t anon188 = (uint16_t)anon187;
						phi183 = anon188;
						phi184 = *(uint16_t*)phi135 ^ anon188;
						phi186 = 256;
					}
					uint16_t anon192 = phi184 < 4096 ? phi183 | 0xf000 : phi183;
					uint16_t anon193 = anon192 << 4;
					uint16_t anon191 = anon192 >> 12 | anon193;
					uint64_t anon190 = (phi184 < 4096 ? 0 : phi182 & 0xffffffffffff0000) | (__zext uint64_t)anon191;
					phi189 = anon190;
					uint16_t phi194 = anon191;
					uint16_t phi_in195 = anon191;
					uint64_t phi196 = (__zext uint64_t)(anon192 >> 4 & 0xff);
					uint64_t anon198 = anon190 & 0xffffffff;
					phi197 = anon198;
					uint32_t anon201 = anon173 ^ (uint32_t)anon190;
					uint32_t anon200 = anon201 >> 8;
					phi199 = (__zext uint64_t)anon200;
					uint16_t phi202 = 0;
					if ((anon200 & 0xf) == 0)
					{
						uint64_t anon203 = anon198 | 0xf;
						phi189 = anon203;
						phi194 = anon193 | 0xf;
						phi_in195 = (uint16_t)anon203;
						phi196 = anon198 >> 8;
						phi197 = anon203;
						phi199 = (__zext uint64_t)anon201 >> 8;
						phi202 = 256;
					}
					uint16_t phi_in204 = phi194;
					uint64_t phi205 = phi189;
					uint16_t phi_in206 = phi_in204;
					uint16_t phi207 = phi_in195;
					uint16_t phi208 = 0;
					if ((phi199 & 0xf0) == 0)
					{
						uint64_t anon209 = phi189 & 0xffffffffffffff00 | phi197 & 0xf | 0xf0;
						phi205 = anon209;
						uint16_t anon210 = (uint16_t)anon209;
						phi_in206 = anon210;
						phi207 = anon210;
						phi208 = 256;
					}
					uint64_t phi211 = phi205 & 0xffff;
					uint16_t phi212 = phi_in206;
					uint16_t anon214 = *(uint16_t*)phi135 ^ phi207;
					phi213 = anon214 & 0xfff;
					uint16_t phi215 = 0;
					if ((anon214 & 0xf00) == 0)
					{
						uint64_t anon216 = phi205 & 0xff | phi196 << 8 & 0xf000 | 0xf00;
						phi211 = anon216;
						uint16_t anon217 = (uint16_t)anon216;
						phi212 = anon217;
						phi213 = *(uint16_t*)phi135 ^ anon217;
						phi215 = 256;
					}
					uint16_t anon221 = phi213 < 4096 ? phi212 | 0xf000 : phi212;
					uint16_t anon220 = anon221 >> 12 | anon221 << 4;
					uint64_t anon219 = (phi213 < 4096 ? 0 : phi211 & 0xffffffffffff0000) | (__zext uint64_t)anon220;
					phi218 = anon219;
					uint16_t phi222 = anon220;
					uint64_t phi223 = (__zext uint64_t)(anon221 >> 4 & 0xff);
					uint64_t anon225 = anon219 & 0xffffffff;
					phi224 = anon225;
					uint32_t anon228 = anon173 ^ (uint32_t)anon219;
					uint32_t anon227 = anon228 >> 8;
					phi226 = (__zext uint64_t)anon227;
					uint16_t phi229 = 0;
					if ((anon227 & 0xf) == 0)
					{
						uint64_t anon230 = anon225 | 0xf;
						phi218 = anon230;
						phi222 = (uint16_t)anon230;
						phi223 = anon225 >> 8;
						phi224 = anon230;
						phi226 = (__zext uint64_t)anon228 >> 8;
						phi229 = 256;
					}
					uint64_t phi231 = phi218;
					uint32_t phi232 = (__zext uint32_t)(*(uint16_t*)phi135 ^ phi222);
					uint16_t phi233 = 0;
					if ((phi226 & 0xf0) == 0)
					{
						uint64_t anon234 = phi218 & 0xffffffffffffff00 | phi224 & 0xf | 0xf0;
						phi231 = anon234;
						phi232 = anon173 ^ (uint32_t)anon234;
						phi233 = 256;
					}
					uint32_t phi235 = phi232 & 0xfff;
					uint16_t phi236 = 0;
					if ((phi232 & 0xf00) == 0)
					{
						phi235 = (__zext uint32_t)(*(uint16_t*)phi135 ^ (uint16_t)(phi231 & 0xff | phi223 << 8 | 0xf00));
						phi236 = 256;
					}
					if ((__zext uint16_t)((uint16_t)phi235 < 4096) + phi215 + phi208 + (phi184 < 4096 ? 256 : 0) + phi186 + ((phi157 < 4096 ? 256 : 0) + phi158 + phi148 << 4) + phi174 + phi178 + phi202 + (phi213 < 4096 ? 256 : 0) + phi229 + phi233 + phi236 == *(uint16_t*)(arg1 - 66))
					{
						*(uint16_t*)(anon23 + ((__zext uint64_t)phi133 << 1)) = *(uint16_t*)phi135;
						uint16_t anon238 = (uint16_t)phi132 + 1;
						phi237 = anon238;
						phi_in128 = phi132 + 1;
						phi_in129 = anon238;
						phi_in130 = anon238;
						anon239 = phi135 + 2;
						phi_in131 = anon239;
						uint64_t anon241 = phi38 + 4294967295 & 0xffffffff;
						anon240 = anon241 + anon241 + 2 + anon23;
						if (anon239 == anon240)
						{
							break;
						}
					}
					else 
					{
						phi237 = phi134;
						phi_in128 = phi132;
						phi_in129 = phi133;
						phi_in130 = phi134;
						phi_in131 = anon239;
						if (anon239 == anon240)
						{
							break;
						}
					}
				}
				alloca1.field1 = anon127;
				uint16_t* anon242 = (uint16_t*)(arg1 - 70);
				*anon242 = *anon242;
				if (phi237 == 0 | *(uint16_t*)(arg1 - 66) == 64)
				{
					break;
				}
				else 
				{
					uint32_t anon243 = rand();
					uint64_t anon244 = (__zext uint64_t)phi237;
					alloca1.field4 = *(uint16_t*)(anon23 + ((__sext int64_t)anon243 % anon244 << 32 >> 31));
					phi_in35 = anon244;
				}
			}
		}
		while (anon127 != 0);
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
