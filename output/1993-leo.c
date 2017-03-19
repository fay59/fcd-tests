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
	uint32_t anon8;
	uint32_t phi_in11;
	uint64_t phi_in12;
	uint16_t phi_in31;
	alloca1.field9 = arg0;
	alloca1.field7 = 0;
	alloca1.field1 = (uint32_t)arg2;
	uint64_t* anon3 = (uint64_t*)arg3;
	uint64_t anon2 = strlen((uint8_t*)*anon3);
	uint64_t anon4 = *anon3 + anon2 - 1;
	*anon3 = anon4;
	uint8_t* anon5 = (uint8_t*)anon4;
	*anon5 = *anon5 ^ 0x64;
	uint64_t alloca6 = 0;
	uint64_t anon7 = time(null);
	alloca6 = 0;
	srand((uint32_t)anon7);
	if (alloca1.field1 == 2)
	{
		alloca6 = 0;
		anon8 = sscanf(*(uint8_t**)(arg3 + 8), (uint8_t*)0x400e84);
		alloca6 = (__zext uint64_t)anon8;
		if (anon8 != 0)
		{
			alloca6 = (__zext uint64_t)alloca1.field1;
			if (alloca1.field1 != 0)
			{
				uint32_t anon10 = alloca1.field1 * alloca1.field1;
				uint32_t anon9 = anon10 * anon10;
				alloca6 = (__zext uint64_t)anon9;
				phi_in11 = alloca1.field1;
				phi_in12 = (__sext int64_t)anon9;
			}
		}
	}
	if (alloca1.field1 != 2 || alloca1.field1 == 2 && anon8 == 0 || alloca1.field1 == 2 && anon8 != 0 && alloca1.field1 == 0)
	{
		alloca1.field1 = 6;
		phi_in11 = 6;
		phi_in12 = 1296;
	}
	uint32_t phi13 = phi_in11;
	uint64_t phi14 = phi_in12;
	uint8_t* anon15 = calloc(phi14, 2);
	uint64_t anon16 = (uint64_t)anon15;
	alloca6 = anon16;
	if (anon15 != null)
	{
		uint64_t phi_in19;
		uint32_t phi_in20;
		uint64_t phi_in21;
		uint32_t anon18 = phi13 * phi13;
		uint32_t anon17 = anon18 * anon18;
		if (anon17 < 2)
		{
			phi_in19 = (uint64_t)&alloca1.field3;
			phi_in20 = 1;
			phi_in21 = 1;
		}
		else 
		{
			uint16_t phi44;
			uint32_t anon47;
			bool anon48;
			uint64_t anon24 = (__zext uint64_t)phi13;
			uint64_t anon23 = anon24 << 8;
			uint16_t anon22 = (uint16_t)(4096 - anon23);
			alloca1.field0 = anon22;
			uint32_t phi_in25 = 1;
			uint64_t phi_in26 = 1;
			do
			{
				uint32_t phi27 = phi_in25;
				uint64_t phi28 = phi_in26;
				uint64_t anon30 = phi28 << 1;
				uint64_t anon29 = anon30 + anon16;
				alloca6 = anon29;
				uint32_t anon33 = (__zext uint32_t)*(uint16_t*)(anon16 + anon30 - 2) + 1;
				uint16_t anon32 = (uint16_t)anon33;
				phi_in31 = anon32;
				uint16_t phi_in34 = anon32;
				if (((phi13 ^ anon33) & 0xf) == 0)
				{
					uint32_t anon37 = 16 - phi13;
					uint32_t anon36 = anon33 + (anon37 & 0xffff);
					uint16_t anon35 = (uint16_t)anon36;
					phi_in31 = anon35;
					phi_in34 = anon35;
					uint64_t anon38 = anon24 << 4;
					uint32_t anon39 = anon33 + anon37;
					if ((((uint32_t)anon38 ^ anon39) & 0xf0) == 0)
					{
						uint32_t anon41 = (uint32_t)(256 - anon38);
						uint16_t anon40 = (uint16_t)(anon36 + anon41);
						phi_in31 = anon40;
						phi_in34 = anon40;
						if ((((uint32_t)anon23 ^ anon39 + anon41) & 0xf00) == 0)
						{
							uint16_t anon42 = anon40 + anon22;
							uint16_t anon43 = (uint16_t)phi13 << 12;
							phi_in31 = anon42 - ((anon43 ^ anon42) < 4096 ? anon43 : 0);
							phi_in34 = (anon43 ^ anon42) < 4096 ? 0 : anon42;
						}
					}
				}
				phi44 = phi_in31;
				uint16_t phi45 = phi_in34;
				*(uint16_t*)anon29 = phi45;
				anon47 = phi27 + 1 & 0xffff;
				struct { uint32_t field0; bool field1; } anon46 = llvm.ssub.with.overflow.i32(anon17, anon47);
				uint16_t anon51 = (uint16_t)phi27 + 1;
				uint32_t anon50 = (__zext uint32_t)anon51;
				uint32_t anon49 = anon17 - anon50;
				anon48 = (uint8_t)(anon49 >> 31) == (__zext uint8_t)anon46.field1 & anon49 != 0;
				if (anon48)
				{
					phi_in25 = anon50;
					phi_in26 = (__zext uint64_t)anon51;
				}
			}
			while (anon48);
			uint64_t anon52 = arg1 - 70;
			*(uint16_t*)anon52 = phi44;
			phi_in19 = anon52;
			phi_in20 = anon47;
			phi_in21 = (__zext uint64_t)anon47;
		}
		uint64_t phi53 = phi_in19;
		uint32_t phi54 = phi_in20;
		uint64_t phi55 = phi_in21;
		uint64_t anon56 = (uint64_t)&alloca1.field4;
		alloca6 = anon56;
		alloca6 = 0;
		uint32_t anon57 = rand();
		alloca6 = (__zext uint64_t)*(uint16_t*)(anon16 + ((__sext int64_t)anon57 % (__zext uint64_t)phi54 << 32 >> 31));
		uint8_t** anon58 = (uint8_t**)arg3;
		*(uint16_t*)(**anon58 == 0 ? phi53 : anon56) = *(uint16_t*)(anon16 + ((__sext int64_t)anon57 % (__zext uint64_t)phi54 << 32 >> 31));
		uint64_t phi_in59 = phi55;
		while (true)
		{
			uint64_t phi60;
			uint32_t anon69;
			uint16_t phi_in70;
			uint32_t phi_in71;
			uint8_t phi_in72;
			uint16_t phi_in73;
			uint8_t phi_in98;
			uint32_t phi_in99;
			uint32_t phi_in100;
			uint16_t phi_in101;
			uint16_t phi_in115;
			uint32_t phi_in123;
			uint8_t phi_in124;
			uint32_t phi_in125;
			uint16_t phi_in126;
			uint16_t phi_in140;
			uint32_t phi_in147;
			uint8_t phi_in148;
			uint32_t phi_in149;
			uint16_t phi_in150;
			uint64_t phi_in166;
			uint64_t phi_in167;
			uint64_t phi169;
			uint64_t anon349;
			do
			{
				phi60 = phi_in59;
				alloca6 = 0;
				uint32_t anon61 = printf((uint8_t*)0x400e95);
				alloca6 = (__zext uint64_t)anon61;
				uint8_t* anon62 = (uint8_t*)arg3;
				*(uint8_t*)&alloca6 = *anon62;
				uint8_t anon63 = anon62[1];
				((uint8_t*)&alloca6)[1] = anon63;
				uint48_t* anon64 = (uint48_t*)&anon62[2];
				*(uint48_t*)&((uint8_t*)&alloca6)[2] = *anon64;
				if (**anon58 == 0)
				{
					if (**anon58 != 0)
					{
						alloca6 = 0;
						uint32_t anon65 = scanf((uint8_t*)0x400eaa);
						alloca6 = (__zext uint64_t)anon65;
						*(uint8_t*)&alloca6 = *anon62;
						((uint8_t*)&alloca6)[1] = anon63;
						*(uint48_t*)&((uint8_t*)&alloca6)[2] = *anon64;
						if (**anon58 != 0)
						{
							break;
						}
					}
					if (**anon58 == 0 && (**anon58 != 0))
					{
						alloca1.field4 = alloca1.field4 - 4369;
					}
				}
				else 
				{
					alloca6 = 0;
					uint32_t anon66 = printf((uint8_t*)0x400ea4);
					alloca6 = (__zext uint64_t)anon66;
					*(uint8_t*)&alloca6 = *anon62;
					((uint8_t*)&alloca6)[1] = anon63;
					*(uint48_t*)&((uint8_t*)&alloca6)[2] = *anon64;
				}
				if (**anon58 == 0 && **anon58 == 0 || **anon58 != 0 && **anon58 == 0 && **anon58 == 0 || **anon58 != 0 && **anon58 != 0)
				{
					alloca6 = 0;
					uint32_t anon67 = printf((uint8_t*)0x400eae);
					alloca6 = (__zext uint64_t)anon67;
					*(uint8_t*)&alloca6 = *anon62;
					((uint8_t*)&alloca6)[1] = anon63;
					*(uint48_t*)&((uint8_t*)&alloca6)[2] = *anon64;
				}
			}
			while (!(**anon58 == 0 && (**anon58 == 0 && **anon58 == 0 || **anon58 != 0 && **anon58 == 0 && **anon58 == 0 || **anon58 != 0 && **anon58 != 0)));
			alloca6 = (__zext uint64_t)alloca1.field4;
			if (((alloca1.field4 ^ *(uint16_t*)phi53) & 0xf) == 0)
			{
				anon69 = (__zext uint32_t)alloca1.field4;
				uint32_t anon68 = anon69 | 0xf;
				alloca6 = (__zext uint64_t)anon68;
				phi_in70 = (uint16_t)anon68;
				phi_in71 = anon68;
				phi_in72 = (uint8_t)anon68;
				phi_in73 = 1;
			}
			else 
			{
				phi_in70 = alloca1.field4;
				phi_in71 = anon69;
				phi_in72 = (uint8_t)alloca1.field4 & 0xf;
				phi_in73 = 0;
			}
			uint16_t phi74 = phi_in70;
			uint32_t phi75 = phi_in71;
			uint8_t phi76 = phi_in72;
			uint16_t phi77 = phi_in73;
			uint16_t phi_in78 = phi74;
			uint32_t phi_in79 = phi75;
			uint16_t phi_in80 = 0;
			if (((uint8_t)*(uint16_t*)phi53 ^ (uint8_t)phi75) < 16)
			{
				*(uint8_t*)&alloca6 = phi76 | 0xf0;
				phi_in78 = (uint16_t)*(uint32_t*)&alloca6;
				phi_in79 = *(uint32_t*)&alloca6;
				phi_in80 = 1;
			}
			uint16_t phi81 = phi_in78;
			uint32_t phi82 = phi_in79;
			uint16_t phi83 = phi_in80;
			uint16_t phi_in84 = phi81;
			uint16_t phi_in85 = 0;
			uint32_t phi_in86 = phi82;
			uint32_t anon87 = (__zext uint32_t)*(uint16_t*)phi53;
			if (((anon87 ^ phi82) & 0xf00) == 0)
			{
				((uint8_t*)&alloca6)[1] = (uint8_t)(alloca1.field4 >> 8) | 0xf;
				phi_in84 = (uint16_t)*(uint32_t*)&alloca6;
				phi_in85 = 1;
				phi_in86 = *(uint32_t*)&alloca6;
			}
			uint16_t phi88 = phi_in84;
			uint16_t phi89 = phi_in85;
			uint32_t phi90 = phi_in86;
			uint16_t phi_in91 = 0;
			uint16_t phi_in92 = phi88;
			if ((*(uint16_t*)phi53 ^ (uint16_t)phi90) < 4096)
			{
				uint16_t anon93 = phi88 | 0xf000;
				*(uint16_t*)&alloca6 = anon93;
				phi_in91 = 1;
				phi_in92 = anon93;
			}
			uint16_t phi94 = phi_in91;
			uint16_t phi95 = phi_in92;
			uint16_t* anon96 = (uint16_t*)&alloca6;
			*anon96 = phi95 >> 12 | phi95 << 4;
			if (((anon87 ^ *(uint32_t*)&alloca6) & 0xf) == 0)
			{
				uint32_t anon97 = *(uint32_t*)&alloca6 | 0xf;
				alloca6 = (__zext uint64_t)anon97;
				phi_in98 = (uint8_t)(*(uint32_t*)&alloca6 >> 8);
				phi_in99 = anon97;
				phi_in100 = anon97;
				phi_in101 = 1;
			}
			else 
			{
				phi_in98 = (uint8_t)(phi95 >> 4);
				phi_in99 = *(uint32_t*)&alloca6;
				phi_in100 = *(uint32_t*)&alloca6 & 0xf;
				phi_in101 = 0;
			}
			uint8_t phi102 = phi_in98;
			uint32_t phi103 = phi_in99;
			uint32_t phi104 = phi_in100;
			uint16_t phi105 = phi_in101;
			uint32_t phi_in106 = phi103;
			uint16_t phi_in107 = 0;
			if ((phi103 & 0xf0) == 0)
			{
				*(uint8_t*)&alloca6 = (uint8_t)phi104 | 0xf0;
				phi_in106 = *(uint32_t*)&alloca6;
				phi_in107 = 1;
			}
			uint32_t phi108 = phi_in106;
			uint16_t phi109 = phi_in107;
			uint32_t phi_in110 = phi108;
			uint16_t phi_in111 = 0;
			if ((phi108 & 0xf00) == 0)
			{
				((uint8_t*)&alloca6)[1] = phi102 | 0xf;
				phi_in110 = *(uint32_t*)&alloca6;
				phi_in111 = 1;
			}
			uint32_t phi112 = phi_in110;
			uint16_t phi113 = phi_in111;
			uint16_t phi_in114 = 0;
			uint16_t anon116 = (uint16_t)phi112;
			phi_in115 = anon116;
			if ((uint16_t)phi112 < 4096)
			{
				uint16_t anon117 = anon116 | 0xf000;
				*anon96 = anon117;
				phi_in114 = 1;
				phi_in115 = anon117;
			}
			uint16_t phi118 = phi_in114;
			uint16_t phi119 = phi_in115;
			*anon96 = phi119 >> 12 | phi119 << 4;
			uint32_t anon120 = (__zext uint32_t)(*(uint16_t*)phi53 & 0xf);
			uint32_t anon121 = *(uint32_t*)&alloca6 & 0xf;
			if (anon120 == anon121)
			{
				uint32_t anon122 = *(uint32_t*)&alloca6 | 0xf;
				alloca6 = (__zext uint64_t)anon122;
				phi_in123 = anon122;
				phi_in124 = (uint8_t)(*(uint32_t*)&alloca6 >> 8);
				phi_in125 = anon122;
				phi_in126 = 1;
			}
			else 
			{
				phi_in123 = *(uint32_t*)&alloca6;
				phi_in124 = (uint8_t)(phi119 >> 4);
				phi_in125 = anon121;
				phi_in126 = 0;
			}
			uint32_t phi127 = phi_in123;
			uint8_t phi128 = phi_in124;
			uint32_t phi129 = phi_in125;
			uint16_t phi130 = phi_in126;
			uint32_t phi_in131 = phi127;
			uint16_t phi_in132 = 0;
			if ((phi127 & 0xf0) == 0)
			{
				*(uint8_t*)&alloca6 = (uint8_t)phi129 | 0xf0;
				phi_in131 = *(uint32_t*)&alloca6;
				phi_in132 = 1;
			}
			uint32_t phi133 = phi_in131;
			uint16_t phi134 = phi_in132;
			uint32_t phi_in135 = phi133;
			uint16_t phi_in136 = 0;
			if ((phi133 & 0xf00) == 0)
			{
				((uint8_t*)&alloca6)[1] = phi128 | 0xf;
				phi_in135 = *(uint32_t*)&alloca6;
				phi_in136 = 1;
			}
			uint32_t phi137 = phi_in135;
			uint16_t phi138 = phi_in136;
			uint16_t phi_in139 = 0;
			uint16_t anon141 = (uint16_t)phi137;
			phi_in140 = anon141;
			if ((uint16_t)phi137 < 4096)
			{
				uint16_t anon142 = anon141 | 0xf000;
				*anon96 = anon142;
				phi_in139 = 1;
				phi_in140 = anon142;
			}
			uint16_t phi143 = phi_in139;
			uint16_t phi144 = phi_in140;
			*anon96 = phi144 >> 12 | phi144 << 4;
			uint32_t anon145 = *(uint32_t*)&alloca6 & 0xf;
			if (anon120 == anon145)
			{
				uint32_t anon146 = *(uint32_t*)&alloca6 | 0xf;
				alloca6 = (__zext uint64_t)anon146;
				phi_in147 = anon146;
				phi_in148 = (uint8_t)(*(uint32_t*)&alloca6 >> 8);
				phi_in149 = anon146;
				phi_in150 = 1;
			}
			else 
			{
				phi_in147 = *(uint32_t*)&alloca6;
				phi_in148 = (uint8_t)(phi144 >> 4);
				phi_in149 = anon145;
				phi_in150 = 0;
			}
			uint32_t phi151 = phi_in147;
			uint8_t phi152 = phi_in148;
			uint32_t phi153 = phi_in149;
			uint16_t phi154 = phi_in150;
			uint32_t phi_in155 = phi151;
			uint16_t phi_in156 = 0;
			if ((phi151 & 0xf0) == 0)
			{
				*(uint8_t*)&alloca6 = (uint8_t)phi153 | 0xf0;
				phi_in155 = *(uint32_t*)&alloca6;
				phi_in156 = 1;
			}
			uint32_t phi157 = phi_in155;
			uint16_t phi158 = phi_in156;
			uint16_t phi_in159 = 0;
			uint32_t phi_in160 = phi157;
			if ((phi157 & 0xf00) == 0)
			{
				((uint8_t*)&alloca6)[1] = phi152 | 0xf;
				phi_in159 = 1;
				phi_in160 = *(uint32_t*)&alloca6;
			}
			uint16_t phi161 = phi_in159;
			uint32_t phi162 = phi_in160;
			alloca1.field5 = (__zext uint16_t)((uint16_t)phi162 < 4096) + phi161 + phi109 + (phi94 + phi77 + phi83 + phi89 << 4 | phi105) + phi113 + phi118 + phi130 + phi134 + phi138 + phi143 + phi154 + phi158;
			alloca6 = 0;
			uint32_t anon163 = printf((uint8_t*)0x400eb3);
			alloca6 = (__zext uint64_t)anon163;
			alloca1.field1 = 0;
			uint32_t anon164 = (uint32_t)phi60;
			if (anon164 != 0)
			{
				uint16_t phi_in348;
				uint64_t anon165 = (__zext uint64_t)alloca1.field4;
				alloca6 = anon165;
				phi_in166 = anon16;
				phi_in167 = 0;
				while (true)
				{
					uint64_t phi_in172;
					uint16_t phi_in174;
					uint16_t phi_in175;
					uint16_t phi_in176;
					uint8_t phi_in177;
					uint64_t phi_in217;
					uint64_t phi_in219;
					uint16_t phi_in220;
					uint16_t phi_in221;
					uint64_t phi_in223;
					uint8_t phi_in224;
					uint16_t phi_in225;
					uint16_t phi_in245;
					uint64_t phi_in267;
					uint16_t phi_in269;
					uint16_t phi_in270;
					uint64_t phi_in272;
					uint64_t phi_in273;
					uint8_t phi_in274;
					uint16_t phi_in275;
					uint16_t phi_in295;
					uint64_t phi_in318;
					uint32_t phi_in320;
					uint64_t phi_in322;
					uint16_t phi_in323;
					uint64_t phi_in325;
					uint8_t phi_in326;
					uint16_t phi_in327;
					uint64_t phi_in335;
					uint32_t phi_in337;
					uint32_t phi_in338;
					uint16_t phi_in339;
					uint64_t anon350;
					uint64_t phi168 = phi_in166;
					phi169 = phi_in167;
					uint16_t anon171 = alloca1.field4 ^ *(uint16_t*)phi168;
					uint32_t anon170 = (__zext uint32_t)anon171 >> 8;
					if ((anon170 & 0xf) == 0)
					{
						uint16_t anon173 = alloca1.field4 | 0xf;
						phi_in172 = (__zext uint64_t)anon173;
						phi_in174 = anon173;
						phi_in175 = 1;
						phi_in176 = 2;
						phi_in177 = (uint8_t)(anon171 >> 8);
					}
					else 
					{
						phi_in172 = anon165;
						phi_in174 = alloca1.field4;
						phi_in175 = 0;
						phi_in176 = 1;
						phi_in177 = (uint8_t)anon170 & 0xf;
					}
					uint64_t phi178 = phi_in172;
					uint16_t phi179 = phi_in174;
					uint16_t phi180 = phi_in175;
					uint16_t phi181 = phi_in176;
					uint8_t phi182 = phi_in177;
					uint64_t phi_in183 = phi178;
					uint16_t phi_in184 = phi179;
					uint16_t phi_in185 = phi179 ^ *(uint16_t*)phi168;
					uint16_t phi_in186 = phi180;
					if (phi182 < 16)
					{
						uint64_t anon187 = phi178 & 0xff00 | (__zext uint64_t)(phi179 & 0xf | 0xf0);
						phi_in183 = anon187;
						uint16_t anon188 = (uint16_t)anon187;
						phi_in184 = anon188;
						phi_in185 = *(uint16_t*)phi168 ^ anon188;
						phi_in186 = phi181;
					}
					uint64_t phi189 = phi_in183;
					uint16_t phi190 = phi_in184;
					uint16_t phi191 = phi_in185;
					uint16_t phi192 = phi_in186;
					uint64_t phi_in193 = phi189;
					uint16_t phi_in194 = phi190;
					uint16_t phi_in195 = phi191;
					uint16_t phi_in196 = 0;
					if ((phi191 & 0xf00) == 0)
					{
						uint64_t anon197 = phi189 & 0xffffffffffff00ff | (__zext uint64_t)(phi179 & 0xf000 | 0xf00);
						phi_in193 = anon197;
						uint16_t anon198 = (uint16_t)anon197;
						phi_in194 = anon198;
						phi_in195 = *(uint16_t*)phi168 ^ anon198;
						phi_in196 = 256;
					}
					uint64_t phi199 = phi_in193;
					uint16_t phi200 = phi_in194;
					uint16_t phi201 = phi_in195;
					uint16_t phi202 = phi_in196;
					uint64_t phi_in203 = phi199;
					uint16_t phi_in204 = 0;
					uint16_t phi_in205 = phi200;
					if (phi201 < 4096)
					{
						uint16_t anon206 = phi200 | 0xf000;
						phi_in203 = phi199 & 0xffffffffffff0000 | (__zext uint64_t)anon206;
						phi_in204 = 256;
						phi_in205 = anon206;
					}
					uint64_t phi207 = phi_in203;
					uint16_t phi208 = phi_in204;
					uint16_t phi209 = phi_in205;
					uint32_t anon211 = (__zext uint32_t)*(uint16_t*)phi168;
					uint16_t anon216 = phi209 << 4;
					uint16_t anon215 = phi209 >> 12 | anon216;
					uint64_t anon214 = (__zext uint64_t)anon215;
					uint64_t anon213 = phi207 & 0xffffffffffff0000 | anon214;
					uint32_t anon212 = (uint32_t)anon213;
					uint32_t anon210 = (anon211 ^ anon212) >> 8;
					if ((anon210 & 0xf) == 0)
					{
						uint32_t anon218 = anon212 | 0xf;
						phi_in217 = (__zext uint64_t)anon218;
						phi_in219 = anon213 >> 8 & 0xffffff;
						phi_in220 = (uint16_t)anon218;
						uint16_t anon222 = anon216 | 0xf;
						phi_in221 = anon222;
						phi_in223 = (__zext uint64_t)anon222;
						phi_in224 = (uint8_t)anon210;
						phi_in225 = 256;
					}
					else 
					{
						phi_in217 = anon213;
						phi_in219 = (__zext uint64_t)(phi209 >> 4);
						phi_in220 = anon215;
						phi_in221 = anon215;
						phi_in223 = anon214;
						phi_in224 = (uint8_t)anon210 & 0xf;
						phi_in225 = 0;
					}
					uint64_t phi226 = phi_in217;
					uint64_t phi227 = phi_in219;
					uint16_t phi228 = phi_in220;
					uint16_t phi229 = phi_in221;
					uint64_t phi230 = phi_in223;
					uint8_t phi231 = phi_in224;
					uint16_t phi232 = phi_in225;
					uint64_t phi_in233 = phi226;
					uint16_t phi_in234 = phi228;
					uint16_t phi_in235 = phi229;
					uint16_t phi_in236 = 0;
					if (phi231 < 16)
					{
						uint64_t anon237 = phi226 & 0xffffffffffffff00 | phi230 & 0xf | 0xf0;
						phi_in233 = anon237;
						uint16_t anon238 = (uint16_t)anon237;
						phi_in234 = anon238;
						phi_in235 = anon238;
						phi_in236 = 256;
					}
					uint64_t phi239 = phi_in233;
					uint16_t phi240 = phi_in234;
					uint16_t phi241 = phi_in235;
					uint16_t phi242 = phi_in236;
					uint64_t phi_in243 = phi239;
					uint16_t phi_in244 = phi240;
					uint16_t anon246 = *(uint16_t*)phi168 ^ phi241;
					phi_in245 = anon246;
					uint16_t phi_in247 = 0;
					if ((anon246 & 0xf00) == 0)
					{
						uint64_t anon248 = phi239 & 0xffffffffffff00ff | phi227 << 8 & 0xf000 | 0xf00;
						phi_in243 = anon248;
						uint16_t anon249 = (uint16_t)anon248;
						phi_in244 = anon249;
						phi_in245 = *(uint16_t*)phi168 ^ anon249;
						phi_in247 = 256;
					}
					uint64_t phi250 = phi_in243;
					uint16_t phi251 = phi_in244;
					uint16_t phi252 = phi_in245;
					uint16_t phi253 = phi_in247;
					uint64_t phi_in254 = phi250;
					uint16_t phi_in255 = 0;
					uint16_t phi_in256 = phi251;
					if (phi252 < 4096)
					{
						uint16_t anon257 = phi251 | 0xf000;
						phi_in254 = phi250 & 0xffffffffffff0000 | (__zext uint64_t)anon257;
						phi_in255 = 256;
						phi_in256 = anon257;
					}
					uint64_t phi258 = phi_in254;
					uint16_t phi259 = phi_in255;
					uint16_t phi260 = phi_in256;
					uint16_t anon266 = phi260 << 4;
					uint16_t anon265 = phi260 >> 12 | anon266;
					uint64_t anon264 = (__zext uint64_t)anon265;
					uint64_t anon263 = phi258 & 0xffffffffffff0000 | anon264;
					uint32_t anon262 = (uint32_t)anon263;
					uint32_t anon261 = (anon211 ^ anon262) >> 8;
					if ((anon261 & 0xf) == 0)
					{
						uint32_t anon268 = anon262 | 0xf;
						phi_in267 = (__zext uint64_t)anon268;
						phi_in269 = (uint16_t)anon268;
						uint16_t anon271 = anon266 | 0xf;
						phi_in270 = anon271;
						phi_in272 = anon263 >> 8 & 0xffffff;
						phi_in273 = (__zext uint64_t)anon271;
						phi_in274 = (uint8_t)anon261;
						phi_in275 = 256;
					}
					else 
					{
						phi_in267 = anon263;
						phi_in269 = anon265;
						phi_in270 = anon265;
						phi_in272 = (__zext uint64_t)(phi260 >> 4);
						phi_in273 = anon264;
						phi_in274 = (uint8_t)anon261 & 0xf;
						phi_in275 = 0;
					}
					uint64_t phi276 = phi_in267;
					uint16_t phi277 = phi_in269;
					uint16_t phi278 = phi_in270;
					uint64_t phi279 = phi_in272;
					uint64_t phi280 = phi_in273;
					uint8_t phi281 = phi_in274;
					uint16_t phi282 = phi_in275;
					uint64_t phi_in283 = phi276;
					uint16_t phi_in284 = phi277;
					uint16_t phi_in285 = phi278;
					uint16_t phi_in286 = 0;
					if (phi281 < 16)
					{
						uint64_t anon287 = phi276 & 0xffffffffffffff00 | phi280 & 0xf | 0xf0;
						phi_in283 = anon287;
						uint16_t anon288 = (uint16_t)anon287;
						phi_in284 = anon288;
						phi_in285 = anon288;
						phi_in286 = 256;
					}
					uint64_t phi289 = phi_in283;
					uint16_t phi290 = phi_in284;
					uint16_t phi291 = phi_in285;
					uint16_t phi292 = phi_in286;
					uint64_t phi_in293 = phi289;
					uint16_t phi_in294 = phi290;
					uint16_t anon296 = *(uint16_t*)phi168 ^ phi291;
					phi_in295 = anon296;
					uint16_t phi_in297 = 0;
					if ((anon296 & 0xf00) == 0)
					{
						uint64_t anon298 = phi289 & 0xffffffffffff00ff | phi279 << 8 & 0xf000 | 0xf00;
						phi_in293 = anon298;
						uint16_t anon299 = (uint16_t)anon298;
						phi_in294 = anon299;
						phi_in295 = *(uint16_t*)phi168 ^ anon299;
						phi_in297 = 256;
					}
					uint64_t phi300 = phi_in293;
					uint16_t phi301 = phi_in294;
					uint16_t phi302 = phi_in295;
					uint16_t phi303 = phi_in297;
					uint64_t phi_in304 = phi300;
					uint16_t phi_in305 = 0;
					uint16_t phi_in306 = phi301;
					if (phi302 < 4096)
					{
						uint16_t anon307 = phi301 | 0xf000;
						phi_in304 = phi300 & 0xffffffffffff0000 | (__zext uint64_t)anon307;
						phi_in305 = 256;
						phi_in306 = anon307;
					}
					uint64_t phi308 = phi_in304;
					uint16_t phi309 = phi_in305;
					uint16_t phi310 = phi_in306;
					uint16_t anon317 = phi310 << 4;
					uint16_t anon316 = phi310 >> 12 | anon317;
					uint64_t anon315 = (__zext uint64_t)anon316;
					uint64_t anon314 = phi308 & 0xffffffffffff0000 | anon315;
					uint32_t anon313 = (uint32_t)anon314;
					uint32_t anon312 = anon211 ^ anon313;
					uint32_t anon311 = anon312 >> 8;
					if ((anon311 & 0xf) == 0)
					{
						uint32_t anon319 = anon313 | 0xf;
						phi_in318 = (__zext uint64_t)anon319;
						uint32_t anon321 = anon211 ^ anon319;
						phi_in320 = anon321;
						phi_in322 = anon314 >> 8 & 0xffffff;
						uint16_t anon324 = anon317 | 0xf;
						phi_in323 = anon324;
						phi_in325 = (__zext uint64_t)anon324;
						phi_in326 = (uint8_t)(anon321 >> 8);
						phi_in327 = 256;
					}
					else 
					{
						phi_in318 = anon314;
						phi_in320 = anon312;
						phi_in322 = (__zext uint64_t)(phi310 >> 4);
						phi_in323 = anon316;
						phi_in325 = anon315;
						phi_in326 = (uint8_t)anon311 & 0xf;
						phi_in327 = 0;
					}
					uint64_t phi328 = phi_in318;
					uint32_t phi329 = phi_in320;
					uint64_t phi330 = phi_in322;
					uint16_t phi331 = phi_in323;
					uint64_t phi332 = phi_in325;
					uint8_t phi333 = phi_in326;
					uint16_t phi334 = phi_in327;
					if (phi333 < 16)
					{
						uint64_t anon336 = phi328 & 0xffffffffffffff00 | phi332 & 0xf | 0xf0;
						phi_in335 = anon336;
						phi_in337 = (__zext uint32_t)(*(uint16_t*)phi168 ^ (uint16_t)anon336);
						phi_in338 = anon211 ^ (uint32_t)anon336;
						phi_in339 = 256;
					}
					else 
					{
						phi_in335 = phi328;
						phi_in337 = phi329;
						phi_in338 = (__zext uint32_t)(*(uint16_t*)phi168 ^ phi331);
						phi_in339 = 0;
					}
					uint64_t phi340 = phi_in335;
					uint32_t phi341 = phi_in337;
					uint32_t phi342 = phi_in338;
					uint16_t phi343 = phi_in339;
					uint32_t phi_in344 = phi341;
					uint16_t phi_in345 = 0;
					if ((phi342 & 0xf00) == 0)
					{
						phi_in344 = anon211 ^ (uint32_t)(phi340 & 0xffff00ff | phi330 << 8 & 0xf000 | 0xf00);
						phi_in345 = 256;
					}
					uint32_t phi346 = phi_in344;
					uint16_t phi347 = phi_in345;
					if ((__zext uint16_t)((uint16_t)phi346 < 4096) + phi303 + phi292 + phi259 + phi253 + (phi208 + phi202 + phi192 << 4) + phi232 + phi242 + phi282 + phi309 + phi334 + phi343 + phi347 == *(uint16_t*)(arg1 - 66))
					{
						*(uint16_t*)(anon16 + (phi169 << 1 & 0x1fffe)) = *(uint16_t*)phi168;
						phi_in348 = (uint16_t)phi169 + 1;
						anon349 = phi168 + 2;
						uint64_t anon351 = phi60 + 4294967295 & 0xffffffff;
						anon350 = anon351 + anon351 + 2 + anon16;
						if (anon349 != anon350)
						{
							break;
						}
					}
					else 
					{
						phi_in166 = anon349;
						phi_in167 = phi169;
						if (anon349 == anon350)
						{
							phi_in348 = (uint16_t)phi169;
						}
					}
				}
				uint16_t phi352 = phi_in348;
				alloca1.field1 = anon164;
				uint16_t* anon353 = (uint16_t*)phi53;
				*anon353 = *anon353;
				if (!(phi352 == 0 | *(uint16_t*)(arg1 - 66) == 64))
				{
					alloca6 = 0;
					uint32_t anon354 = rand();
					uint64_t anon355 = (__zext uint64_t)phi352;
					alloca6 = (__zext uint64_t)*(uint16_t*)(anon16 + ((__sext int64_t)anon354 % anon355 << 32 >> 31));
					alloca1.field4 = *(uint16_t*)(anon16 + ((__sext int64_t)anon354 % anon355 << 32 >> 31));
					phi_in59 = anon355;
				}
			}
			phi_in166 = anon349;
			phi_in167 = phi169 + 1 & 0xffffffff;
			break;
		}
	}
	putchar(10);
	return;
	if (anon15 == null)
	{
		uint32_t anon356 = puts((uint8_t*)0x400e87);
		alloca6 = (__zext uint64_t)anon356;
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
