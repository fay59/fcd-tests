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
	uint32_t phi8;
	uint64_t phi9;
	uint64_t phi40;
	uint64_t phi61;
	uint64_t phi87;
	uint64_t phi113;
	uint64_t phi163;
	uint64_t phi194;
	uint64_t phi225;
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
			phi8 = alloca1.field1;
			uint32_t anon10 = alloca1.field1 * alloca1.field1;
			phi9 = (__sext int64_t)(anon10 * anon10);
		}
	}
	if (alloca1.field1 != 2 || anon7 != 0 && alloca1.field1 == 2 && alloca1.field1 == 0 || alloca1.field1 == 2 && anon7 == 0)
	{
		alloca1.field1 = 6;
		phi8 = 6;
		phi9 = 1296;
	}
	uint8_t* anon11 = calloc(phi9, 2);
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
		uint32_t anon130;
		uint32_t anon13 = phi8 * phi8;
		uint32_t anon12 = anon13 * anon13;
		if (anon12 < 2)
		{
			phi14 = 1;
			phi15 = arg1 - 70;
		}
		else 
		{
			uint64_t anon35;
			uint64_t anon18 = (__zext uint64_t)phi8;
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
				uint16_t phi25 = anon21;
				uint32_t anon26 = (uint32_t)anon22;
				if (((phi8 ^ anon26) & 0xf) == 0)
				{
					uint32_t anon28 = anon26 + 16 - phi8;
					uint16_t anon27 = (uint16_t)anon28;
					alloca1.field3 = anon27;
					phi25 = anon27;
					uint64_t anon29 = anon18 << 4;
					if ((((uint32_t)anon29 ^ anon28) & 0xf0) == 0)
					{
						uint32_t anon31 = anon28 + (uint32_t)(256 - anon29);
						uint16_t anon30 = (uint16_t)anon31;
						alloca1.field3 = anon30;
						phi25 = anon30;
						if ((((uint32_t)anon17 ^ anon31) & 0xf00) == 0)
						{
							uint16_t anon32 = anon30 + anon16;
							uint16_t anon33 = (uint16_t)(phi8 << 12);
							alloca1.field3 = anon32 - (anon33 == (anon32 & 0xf000) ? anon33 : 0);
							phi25 = anon33 == (anon32 & 0xf000) ? 0 : anon32;
						}
					}
				}
				*(uint16_t*)(anon24 + anon23) = phi25;
				uint64_t anon34 = phi20 + 1;
				phi_in19 = anon34 & 0xffffffff;
				anon35 = anon34 & 0xffff;
			}
			while (anon12 > (uint32_t)anon35);
			phi14 = anon35;
			phi15 = (uint64_t)&alloca1.field3;
		}
		uint64_t phi_in36 = phi14;
		uint32_t anon37 = rand();
		uint8_t** anon38 = (uint8_t**)arg3;
		*(uint16_t*)(**anon38 == 0 ? phi15 : (uint64_t)&alloca1.field4) = *(uint16_t*)(anon23 + ((__sext int64_t)anon37 % phi_in36 << 32 >> 31));
		do
		{
			uint64_t phi39;
			uint32_t phi69;
			uint64_t phi71;
			uint32_t phi94;
			uint64_t phi97;
			uint32_t phi118;
			do
			{
				phi39 = phi_in36;
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
			uint16_t phi42 = alloca1.field4 & 0xf;
			uint32_t phi43 = (__zext uint32_t)alloca1.field4;
			uint16_t phi44 = 0;
			if (((alloca1.field4 ^ *(uint16_t*)(arg1 - 70)) & 0xf) == 0)
			{
				uint64_t anon45 = anon41 | 0xf;
				phi40 = anon45;
				phi42 = alloca1.field4 | 0xf;
				phi43 = (uint32_t)anon45;
				phi44 = 1;
			}
			uint16_t phi_in46 = phi42;
			uint32_t phi47 = phi43;
			uint64_t phi48 = phi40;
			uint16_t phi49 = phi_in46;
			uint16_t phi50 = 0;
			uint32_t anon51 = (__zext uint32_t)*(uint16_t*)(arg1 - 70);
			if (((anon51 ^ phi47) & 0xf0) == 0)
			{
				uint64_t anon52 = phi40 & 0xf | 0xf0;
				phi48 = phi40 & 0xffffffffffffff00 | anon52;
				uint32_t anon53 = (uint32_t)phi40 & 0xff00 | (uint32_t)anon52;
				phi49 = (uint16_t)anon53;
				phi47 = anon53;
				phi50 = 1;
			}
			uint16_t phi54 = phi49;
			uint64_t phi55 = phi48 & 0xffff;
			uint16_t phi56 = 0;
			uint32_t phi57 = phi47;
			uint12_t anon58 = (uint12_t)*(uint16_t*)(arg1 - 70);
			if ((anon58 ^ (uint12_t)phi47) < 256)
			{
				uint64_t anon59 = (__zext uint64_t)(alloca1.field4 >> 8) << 8 | 0xf00;
				phi55 = phi48 & 0xff | anon59;
				uint64_t anon60 = phi48 & 0xffff00ff | anon59;
				phi54 = (uint16_t)anon60;
				phi56 = 1;
				phi57 = (uint32_t)anon60;
			}
			uint16_t anon65 = (*(uint16_t*)(arg1 - 70) ^ (uint16_t)phi57) < 4096 ? phi54 | 0xf000 : phi54;
			uint16_t anon64 = anon65 >> 12;
			uint16_t anon66 = anon65 << 4;
			uint64_t anon63 = (__zext uint64_t)(anon64 | anon66);
			uint64_t anon62 = ((*(uint16_t*)(arg1 - 70) ^ (uint16_t)phi57) < 4096 ? 0 : phi55 & 0xffffffffffff0000) | anon63;
			phi61 = anon62;
			uint64_t phi67 = (__zext uint64_t)(anon65 >> 4);
			uint16_t phi68 = anon64;
			uint32_t anon70 = (uint32_t)anon62;
			phi69 = anon70;
			uint64_t anon72 = anon62 & 0xffffffff;
			phi71 = anon72;
			uint16_t phi73 = 0;
			if (((anon51 ^ anon70) & 0xf) == 0)
			{
				uint64_t anon74 = anon72 | 0xf;
				phi61 = anon74;
				phi67 = anon63 >> 8;
				phi68 = anon66 | 0xf;
				phi69 = (uint32_t)anon74;
				phi71 = anon74;
				phi73 = 1;
			}
			uint64_t phi75 = phi61;
			uint32_t phi76 = phi69;
			uint16_t phi77 = 0;
			if (((anon51 ^ phi69) & 0xf0) == 0)
			{
				uint64_t anon78 = phi71 & 0xf | 0xf0;
				phi75 = phi61 & 0xffffffffffffff00 | anon78;
				uint32_t anon79 = (uint32_t)phi61 & 0xff00 | (uint32_t)anon78;
				phi68 = (uint16_t)anon79;
				phi76 = anon79;
				phi77 = 1;
			}
			uint16_t phi_in80 = phi68;
			uint64_t phi81 = phi75 & 0xffff;
			uint16_t phi82 = phi_in80;
			uint16_t phi83 = 0;
			uint32_t phi84 = phi76;
			if ((anon58 ^ (uint12_t)phi76) < 256)
			{
				uint64_t anon85 = phi67 << 8 & 0xf000 | 0xf00;
				phi81 = phi75 & 0xff | anon85;
				uint64_t anon86 = phi75 & 0xffff00ff | anon85;
				phi82 = (uint16_t)anon86;
				phi83 = 1;
				phi84 = (uint32_t)anon86;
			}
			uint16_t anon91 = (*(uint16_t*)(arg1 - 70) ^ (uint16_t)phi84) < 4096 ? phi82 | 0xf000 : phi82;
			uint16_t anon90 = anon91 >> 12;
			uint16_t anon92 = anon91 << 4;
			uint64_t anon89 = (__zext uint64_t)(anon90 | anon92);
			uint64_t anon88 = ((*(uint16_t*)(arg1 - 70) ^ (uint16_t)phi84) < 4096 ? 0 : phi81 & 0xffffffffffff0000) | anon89;
			phi87 = anon88;
			uint16_t phi93 = anon90;
			uint32_t anon95 = (uint32_t)anon88;
			phi94 = anon95;
			uint64_t phi96 = (__zext uint64_t)(anon91 >> 4);
			uint64_t anon98 = anon88 & 0xffffffff;
			phi97 = anon98;
			uint16_t phi99 = 0;
			if (((anon51 ^ anon95) & 0xf) == 0)
			{
				uint64_t anon100 = anon98 | 0xf;
				phi87 = anon100;
				phi93 = anon92 | 0xf;
				phi94 = (uint32_t)anon100;
				phi96 = anon89 >> 8;
				phi97 = anon100;
				phi99 = 1;
			}
			uint16_t phi_in101 = phi93;
			uint64_t phi102 = phi87;
			uint16_t phi103 = phi_in101;
			uint32_t phi104 = phi94;
			uint16_t phi105 = 0;
			if (((anon51 ^ phi94) & 0xf0) == 0)
			{
				uint64_t anon106 = phi97 & 0xf | 0xf0;
				phi102 = phi87 & 0xffffffffffffff00 | anon106;
				uint32_t anon107 = (uint32_t)phi87 & 0xff00 | (uint32_t)anon106;
				phi103 = (uint16_t)anon107;
				phi104 = anon107;
				phi105 = 1;
			}
			uint64_t phi108 = phi102 & 0xffff;
			uint16_t phi109 = 0;
			uint32_t phi110 = phi104;
			if ((anon58 ^ (uint12_t)phi104) < 256)
			{
				uint64_t anon111 = phi96 << 8 & 0xf000 | 0xf00;
				phi108 = phi102 & 0xff | anon111;
				uint64_t anon112 = phi102 & 0xffff00ff | anon111;
				phi103 = (uint16_t)anon112;
				phi109 = 1;
				phi110 = (uint32_t)anon112;
			}
			uint16_t anon116 = (*(uint16_t*)(arg1 - 70) ^ (uint16_t)phi110) < 4096 ? phi103 | 0xf000 : phi103;
			uint16_t anon117 = anon116 << 4;
			uint16_t anon115 = anon116 >> 12 | anon117;
			uint64_t anon114 = ((*(uint16_t*)(arg1 - 70) ^ (uint16_t)phi110) < 4096 ? 0 : phi108 & 0xffffffffffff0000) | (__zext uint64_t)anon115;
			phi113 = anon114;
			uint32_t anon119 = (uint32_t)anon114;
			phi118 = anon119;
			uint32_t phi120 = (__zext uint32_t)(anon116 >> 4);
			uint16_t phi121 = anon115;
			uint16_t phi122 = 0;
			if (((anon51 ^ anon119) & 0xf) == 0)
			{
				uint64_t anon123 = anon114 & 0xfffffff0 | 0xf;
				phi113 = anon123;
				phi118 = (uint32_t)anon123;
				phi120 = anon119 >> 8 & 0xff;
				phi121 = anon117 | 0xf;
				phi122 = 1;
			}
			uint64_t phi124 = phi113;
			uint32_t phi125 = phi118;
			uint16_t phi126 = 0;
			if (((anon51 ^ phi118) & 0xf0) == 0)
			{
				uint64_t anon127 = (__zext uint64_t)phi121 & 0xf | 0xf0;
				phi124 = phi113 & 0xffffffffffffff00 | anon127;
				phi125 = (uint32_t)phi113 & 0xff00 | (uint32_t)anon127;
				phi126 = 1;
			}
			uint16_t phi128 = 0;
			uint32_t phi129 = phi125;
			if ((anon58 ^ (uint12_t)phi125) < 256)
			{
				phi128 = 1;
				phi129 = (uint32_t)phi124 & 0xff | phi120 << 8 & 0xf000 | 0xf00;
			}
			alloca1.field5 = (__zext uint16_t)((*(uint16_t*)(arg1 - 70) ^ (uint16_t)phi129) < 4096) + phi128 + phi77 + ((__zext uint16_t)((*(uint16_t*)(arg1 - 70) ^ (uint16_t)phi57) < 4096) + phi44 + phi50 + phi56 << 4 | phi73) + phi83 + (__zext uint16_t)((*(uint16_t*)(arg1 - 70) ^ (uint16_t)phi84) < 4096) + phi99 + phi105 + phi109 + (__zext uint16_t)((*(uint16_t*)(arg1 - 70) ^ (uint16_t)phi110) < 4096) + phi122 + phi126;
			printf((uint8_t*)0x400eb3);
			alloca1.field1 = 0;
			anon130 = (uint32_t)phi39;
			if (anon130 != 0)
			{
				uint16_t phi244;
				uint32_t phi_in131 = 0;
				uint16_t phi_in132 = 0;
				uint16_t phi_in133 = 0;
				uint64_t phi_in134 = anon23;
				while (true)
				{
					uint64_t phi141;
					uint64_t anon143;
					uint16_t phi144;
					uint16_t phi146;
					uint16_t phi_in147;
					uint64_t phi148;
					uint16_t phi149;
					uint64_t phi150;
					uint64_t phi157;
					uint16_t phi159;
					uint16_t phi161;
					uint16_t phi162;
					uint64_t phi172;
					uint64_t phi174;
					uint16_t phi189;
					uint64_t phi202;
					uint64_t phi204;
					uint16_t phi220;
					uint64_t phi231;
					uint64_t phi233;
					uint64_t anon246;
					uint64_t anon247;
					uint32_t phi135 = phi_in131;
					uint16_t phi136 = phi_in132;
					uint16_t phi137 = phi_in133;
					uint64_t phi138 = phi_in134;
					uint16_t anon140 = alloca1.field4 ^ *(uint16_t*)phi138;
					uint32_t anon139 = (__zext uint32_t)anon140 >> 8;
					if ((anon139 & 0xf) == 0)
					{
						anon143 = (__zext uint64_t)alloca1.field4;
						uint64_t anon142 = anon143 | 0xf;
						phi141 = anon142;
						uint16_t anon145 = (uint16_t)anon142;
						phi144 = anon145;
						phi146 = anon145 ^ *(uint16_t*)phi138;
						phi_in147 = 1;
						phi148 = anon143 >> 8;
						phi149 = 2;
						phi150 = (__zext uint64_t)anon140 >> 8;
					}
					else 
					{
						phi141 = anon143;
						phi144 = alloca1.field4;
						phi146 = anon140;
						phi_in147 = 0;
						phi148 = (__zext uint64_t)(alloca1.field4 >> 8);
						phi149 = 1;
						phi150 = (__zext uint64_t)anon139;
					}
					uint16_t phi151 = phi144;
					uint16_t phi152 = phi146;
					uint64_t phi153 = phi141;
					uint16_t phi154 = phi_in147;
					if ((phi150 & 0xf0) == 0)
					{
						uint64_t anon155 = phi141 & 0xffffffffffffff00 | phi141 & 0xf | 0xf0;
						phi153 = anon155;
						uint16_t anon156 = (uint16_t)anon155;
						phi151 = anon156;
						phi152 = *(uint16_t*)phi138 ^ anon156;
						phi154 = phi149;
					}
					if ((phi152 & 0xf00) == 0)
					{
						uint64_t anon158 = phi153 & 0xff | phi148 << 8 & 0xf000 | 0xf00;
						phi157 = anon158;
						uint16_t anon160 = (uint16_t)anon158;
						phi159 = anon160;
						phi161 = *(uint16_t*)phi138 ^ anon160;
						phi162 = 256;
					}
					else 
					{
						phi157 = phi153 & 0xffff;
						phi159 = phi151;
						phi161 = phi152 & 0xfff;
						phi162 = 0;
					}
					uint16_t anon167 = phi161 < 4096 ? phi159 | 0xf000 : phi159;
					uint16_t anon168 = anon167 << 4;
					uint16_t anon166 = anon167 >> 12 | anon168;
					uint64_t anon165 = (__zext uint64_t)anon166;
					uint64_t anon164 = (phi161 < 4096 ? 0 : phi157 & 0xffffffffffff0000) | anon165;
					phi163 = anon164;
					uint64_t phi169 = (__zext uint64_t)(anon167 >> 4);
					uint16_t phi170 = anon166;
					uint16_t phi_in171 = anon166;
					uint64_t anon173 = anon164 & 0xffffffff;
					phi172 = anon173;
					uint32_t anon177 = (__zext uint32_t)*(uint16_t*)phi138;
					uint32_t anon176 = anon177 ^ (uint32_t)anon164;
					uint32_t anon175 = anon176 >> 8;
					phi174 = (__zext uint64_t)anon175;
					uint16_t phi178 = 0;
					if ((anon175 & 0xf) == 0)
					{
						uint64_t anon179 = anon173 | 0xf;
						phi163 = anon179;
						phi169 = anon165 >> 8;
						phi170 = anon168 | 0xf;
						phi_in171 = (uint16_t)anon179;
						phi172 = anon179;
						phi174 = (__zext uint64_t)anon176 >> 8;
						phi178 = 256;
					}
					uint16_t phi180 = phi170;
					uint64_t phi181 = phi163;
					uint16_t phi182 = phi_in171;
					uint16_t phi183 = 0;
					if ((phi174 & 0xf0) == 0)
					{
						uint64_t anon184 = phi163 & 0xffffffffffffff00 | phi172 & 0xf | 0xf0;
						phi181 = anon184;
						uint16_t anon185 = (uint16_t)anon184;
						phi180 = anon185;
						phi182 = anon185;
						phi183 = 256;
					}
					uint16_t phi_in186 = phi180;
					uint64_t phi187 = phi181 & 0xffff;
					uint16_t phi188 = phi_in186;
					uint16_t anon190 = *(uint16_t*)phi138 ^ phi182;
					phi189 = anon190 & 0xfff;
					uint16_t phi191 = 0;
					if ((anon190 & 0xf00) == 0)
					{
						uint64_t anon192 = phi181 & 0xff | phi169 << 8 & 0xf000 | 0xf00;
						phi187 = anon192;
						uint16_t anon193 = (uint16_t)anon192;
						phi188 = anon193;
						phi189 = *(uint16_t*)phi138 ^ anon193;
						phi191 = 256;
					}
					uint16_t anon197 = phi189 < 4096 ? phi188 | 0xf000 : phi188;
					uint16_t anon198 = anon197 << 4;
					uint16_t anon196 = anon197 >> 12 | anon198;
					uint64_t anon195 = (phi189 < 4096 ? 0 : phi187 & 0xffffffffffff0000) | (__zext uint64_t)anon196;
					phi194 = anon195;
					uint16_t phi199 = anon196;
					uint16_t phi200 = anon196;
					uint64_t phi201 = (__zext uint64_t)(anon197 >> 4 & 0xff);
					uint64_t anon203 = anon195 & 0xffffffff;
					phi202 = anon203;
					uint32_t anon206 = anon177 ^ (uint32_t)anon195;
					uint32_t anon205 = anon206 >> 8;
					phi204 = (__zext uint64_t)anon205;
					uint16_t phi207 = 0;
					if ((anon205 & 0xf) == 0)
					{
						uint64_t anon208 = anon203 | 0xf;
						phi194 = anon208;
						phi199 = anon198 | 0xf;
						phi200 = (uint16_t)anon208;
						phi201 = anon203 >> 8;
						phi202 = anon208;
						phi204 = (__zext uint64_t)anon206 >> 8;
						phi207 = 256;
					}
					uint16_t phi_in209 = phi199;
					uint16_t phi_in210 = phi200;
					uint64_t phi211 = phi194;
					uint16_t phi212 = phi_in209;
					uint16_t phi213 = phi_in210;
					uint16_t phi214 = 0;
					if ((phi204 & 0xf0) == 0)
					{
						uint64_t anon215 = phi194 & 0xffffffffffffff00 | phi202 & 0xf | 0xf0;
						phi211 = anon215;
						uint16_t anon216 = (uint16_t)anon215;
						phi212 = anon216;
						phi213 = anon216;
						phi214 = 256;
					}
					uint16_t phi_in217 = phi212;
					uint64_t phi218 = phi211 & 0xffff;
					uint16_t phi219 = phi_in217;
					uint16_t anon221 = *(uint16_t*)phi138 ^ phi213;
					phi220 = anon221 & 0xfff;
					uint16_t phi222 = 0;
					if ((anon221 & 0xf00) == 0)
					{
						uint64_t anon223 = phi211 & 0xff | phi201 << 8 & 0xf000 | 0xf00;
						phi218 = anon223;
						uint16_t anon224 = (uint16_t)anon223;
						phi219 = anon224;
						phi220 = *(uint16_t*)phi138 ^ anon224;
						phi222 = 256;
					}
					uint16_t anon228 = phi220 < 4096 ? phi219 | 0xf000 : phi219;
					uint16_t anon227 = anon228 >> 12 | anon228 << 4;
					uint64_t anon226 = (phi220 < 4096 ? 0 : phi218 & 0xffffffffffff0000) | (__zext uint64_t)anon227;
					phi225 = anon226;
					uint16_t phi229 = anon227;
					uint64_t phi230 = (__zext uint64_t)(anon228 >> 4 & 0xff);
					uint64_t anon232 = anon226 & 0xffffffff;
					phi231 = anon232;
					uint32_t anon235 = anon177 ^ (uint32_t)anon226;
					uint32_t anon234 = anon235 >> 8;
					phi233 = (__zext uint64_t)anon234;
					uint16_t phi236 = 0;
					if ((anon234 & 0xf) == 0)
					{
						uint64_t anon237 = anon232 | 0xf;
						phi225 = anon237;
						phi229 = (uint16_t)anon237;
						phi230 = anon232 >> 8;
						phi231 = anon237;
						phi233 = (__zext uint64_t)anon235 >> 8;
						phi236 = 256;
					}
					uint64_t phi238 = phi225;
					uint32_t phi239 = (__zext uint32_t)(*(uint16_t*)phi138 ^ phi229);
					uint16_t phi240 = 0;
					if ((phi233 & 0xf0) == 0)
					{
						uint64_t anon241 = phi225 & 0xffffffffffffff00 | phi231 & 0xf | 0xf0;
						phi238 = anon241;
						phi239 = anon177 ^ (uint32_t)anon241;
						phi240 = 256;
					}
					uint32_t phi242 = phi239 & 0xfff;
					uint16_t phi243 = 0;
					if ((phi239 & 0xf00) == 0)
					{
						phi242 = (__zext uint32_t)(*(uint16_t*)phi138 ^ (uint16_t)(phi238 & 0xff | phi230 << 8 | 0xf00));
						phi243 = 256;
					}
					if ((__zext uint16_t)((uint16_t)phi242 < 4096) + phi222 + phi214 + (phi189 < 4096 ? 256 : 0) + phi191 + ((phi161 < 4096 ? 256 : 0) + phi162 + phi154 << 4) + phi178 + phi183 + phi207 + (phi220 < 4096 ? 256 : 0) + phi236 + phi240 + phi243 == *(uint16_t*)(arg1 - 66))
					{
						*(uint16_t*)(anon23 + ((__zext uint64_t)phi136 << 1)) = *(uint16_t*)phi138;
						uint16_t anon245 = (uint16_t)phi135 + 1;
						phi244 = anon245;
						phi_in131 = phi135 + 1;
						phi_in132 = anon245;
						phi_in133 = anon245;
						anon246 = phi138 + 2;
						phi_in134 = anon246;
						uint64_t anon248 = phi39 + 4294967295 & 0xffffffff;
						anon247 = anon248 + anon248 + 2 + anon23;
						if (anon246 == anon247)
						{
							break;
						}
					}
					else 
					{
						phi244 = phi137;
						phi_in131 = phi135;
						phi_in132 = phi136;
						phi_in133 = phi137;
						phi_in134 = anon246;
						if (anon246 == anon247)
						{
							break;
						}
					}
				}
				alloca1.field1 = anon130;
				uint16_t* anon249 = (uint16_t*)(arg1 - 70);
				*anon249 = *anon249;
				if (phi244 == 0 | *(uint16_t*)(arg1 - 66) == 64)
				{
					break;
				}
				else 
				{
					uint32_t anon250 = rand();
					uint64_t anon251 = (__zext uint64_t)phi244;
					alloca1.field4 = *(uint16_t*)(anon23 + ((__sext int64_t)anon250 % anon251 << 32 >> 31));
					phi_in36 = anon251;
				}
			}
		}
		while (anon130 != 0);
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
