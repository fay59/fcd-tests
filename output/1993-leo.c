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
	uint32_t phi11;
	uint64_t phi12;
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
				phi11 = alloca1.field1;
				phi12 = (__sext int64_t)anon9;
			}
		}
	}
	if (alloca1.field1 != 2 || alloca1.field1 == 2 && anon8 == 0 || alloca1.field1 == 2 && anon8 != 0 && alloca1.field1 == 0)
	{
		alloca1.field1 = 6;
		phi11 = 6;
		phi12 = 1296;
	}
	uint8_t* anon13 = calloc(phi12, 2);
	uint64_t anon14 = (uint64_t)anon13;
	alloca6 = anon14;
	if (anon13 != null)
	{
		uint64_t phi17;
		uint32_t phi18;
		uint64_t phi19;
		uint32_t anon16 = phi11 * phi11;
		uint32_t anon15 = anon16 * anon16;
		if (anon15 < 2)
		{
			phi17 = (uint64_t)&alloca1.field3;
			phi18 = 1;
			phi19 = 1;
		}
		else 
		{
			uint64_t anon28;
			uint32_t anon41;
			bool anon42;
			uint64_t anon22 = (__zext uint64_t)phi11;
			uint64_t anon21 = anon22 << 8;
			uint16_t anon20 = (uint16_t)(4096 - anon21);
			alloca1.field0 = anon20;
			uint32_t phi_in23 = 1;
			uint64_t phi24 = 1;
			do
			{
				uint32_t phi25 = phi_in23;
				uint64_t anon27 = phi24 << 1;
				uint64_t anon26 = anon27 + anon14;
				alloca6 = anon26;
				anon28 = arg1 - 70;
				uint32_t anon30 = (__zext uint32_t)*(uint16_t*)(anon14 + anon27 - 2) + 1;
				uint16_t anon29 = (uint16_t)anon30;
				*(uint16_t*)anon28 = anon29;
				*(uint16_t*)anon26 = anon29;
				if (((phi11 ^ anon30) & 0xf) == 0)
				{
					uint32_t anon33 = 16 - phi11;
					uint32_t anon32 = anon30 + (anon33 & 0xffff);
					uint16_t anon31 = (uint16_t)anon32;
					*(uint16_t*)anon28 = anon31;
					*(uint16_t*)anon26 = anon31;
					uint64_t anon34 = anon22 << 4;
					uint32_t anon35 = anon30 + anon33;
					if ((((uint32_t)anon34 ^ anon35) & 0xf0) == 0)
					{
						uint32_t anon37 = (uint32_t)(256 - anon34);
						uint16_t anon36 = (uint16_t)(anon32 + anon37);
						*(uint16_t*)anon28 = anon36;
						*(uint16_t*)anon26 = anon36;
						if ((((uint32_t)anon21 ^ anon35 + anon37) & 0xf00) == 0)
						{
							uint16_t anon38 = anon36 + anon20;
							uint16_t anon39 = (uint16_t)phi11 << 12;
							*(uint16_t*)anon28 = anon38 - ((anon39 ^ anon38) < 4096 ? anon39 : 0);
							*(uint16_t*)anon26 = (anon39 ^ anon38) < 4096 ? 0 : anon38;
						}
					}
				}
				anon41 = phi25 + 1 & 0xffff;
				struct { uint32_t field0; bool field1; } anon40 = llvm.ssub.with.overflow.i32(anon15, anon41);
				uint16_t anon45 = (uint16_t)phi25 + 1;
				uint32_t anon44 = (__zext uint32_t)anon45;
				uint32_t anon43 = anon15 - anon44;
				anon42 = (uint8_t)(anon43 >> 31) == (__zext uint8_t)anon40.field1 & anon43 != 0;
				if (anon42)
				{
					phi_in23 = anon44;
					phi24 = (__zext uint64_t)anon45;
				}
			}
			while (anon42);
			phi17 = anon28;
			phi18 = anon41;
			phi19 = (__zext uint64_t)anon41;
		}
		uint64_t anon46 = (uint64_t)&alloca1.field4;
		alloca6 = anon46;
		alloca6 = 0;
		uint32_t anon47 = rand();
		alloca6 = (__zext uint64_t)*(uint16_t*)(anon14 + ((__sext int64_t)anon47 % (__zext uint64_t)phi18 << 32 >> 31));
		uint8_t** anon48 = (uint8_t**)arg3;
		*(uint16_t*)(**anon48 == 0 ? phi17 : anon46) = *(uint16_t*)(anon14 + ((__sext int64_t)anon47 % (__zext uint64_t)phi18 << 32 >> 31));
		while (true)
		{
			uint32_t anon57;
			uint16_t phi_in58;
			uint32_t phi59;
			uint8_t phi60;
			uint16_t phi61;
			uint8_t phi74;
			uint32_t phi75;
			uint32_t phi76;
			uint16_t phi77;
			uint16_t phi83;
			uint32_t phi89;
			uint8_t phi90;
			uint32_t phi91;
			uint16_t phi92;
			uint16_t phi98;
			uint32_t phi103;
			uint8_t phi104;
			uint32_t phi105;
			uint16_t phi106;
			uint64_t phi_in113;
			uint64_t phi114;
			uint64_t anon230;
			do
			{
				alloca6 = 0;
				uint32_t anon49 = printf((uint8_t*)0x400e95);
				alloca6 = (__zext uint64_t)anon49;
				uint8_t* anon50 = (uint8_t*)arg3;
				*(uint8_t*)&alloca6 = *anon50;
				uint8_t anon51 = anon50[1];
				((uint8_t*)&alloca6)[1] = anon51;
				uint48_t* anon52 = (uint48_t*)&anon50[2];
				*(uint48_t*)&((uint8_t*)&alloca6)[2] = *anon52;
				if (**anon48 == 0)
				{
					if (**anon48 != 0)
					{
						alloca6 = 0;
						uint32_t anon53 = scanf((uint8_t*)0x400eaa);
						alloca6 = (__zext uint64_t)anon53;
						*(uint8_t*)&alloca6 = *anon50;
						((uint8_t*)&alloca6)[1] = anon51;
						*(uint48_t*)&((uint8_t*)&alloca6)[2] = *anon52;
						if (**anon48 != 0)
						{
							break;
						}
					}
					if (**anon48 == 0 && (**anon48 != 0))
					{
						alloca1.field4 = alloca1.field4 - 4369;
					}
				}
				else 
				{
					alloca6 = 0;
					uint32_t anon54 = printf((uint8_t*)0x400ea4);
					alloca6 = (__zext uint64_t)anon54;
					*(uint8_t*)&alloca6 = *anon50;
					((uint8_t*)&alloca6)[1] = anon51;
					*(uint48_t*)&((uint8_t*)&alloca6)[2] = *anon52;
				}
				if (**anon48 == 0 && **anon48 == 0 || **anon48 != 0 && **anon48 == 0 && **anon48 == 0 || **anon48 != 0 && **anon48 != 0)
				{
					alloca6 = 0;
					uint32_t anon55 = printf((uint8_t*)0x400eae);
					alloca6 = (__zext uint64_t)anon55;
					*(uint8_t*)&alloca6 = *anon50;
					((uint8_t*)&alloca6)[1] = anon51;
					*(uint48_t*)&((uint8_t*)&alloca6)[2] = *anon52;
				}
			}
			while (!(**anon48 == 0 && (**anon48 == 0 && **anon48 == 0 || **anon48 != 0 && **anon48 == 0 && **anon48 == 0 || **anon48 != 0 && **anon48 != 0)));
			alloca6 = (__zext uint64_t)alloca1.field4;
			if (((alloca1.field4 ^ *(uint16_t*)phi17) & 0xf) == 0)
			{
				anon57 = (__zext uint32_t)alloca1.field4;
				uint32_t anon56 = anon57 | 0xf;
				alloca6 = (__zext uint64_t)anon56;
				phi_in58 = (uint16_t)anon56;
				phi59 = anon56;
				phi60 = (uint8_t)anon56;
				phi61 = 1;
			}
			else 
			{
				phi_in58 = alloca1.field4;
				phi59 = anon57;
				phi60 = (uint8_t)alloca1.field4 & 0xf;
				phi61 = 0;
			}
			uint16_t phi62 = phi_in58;
			uint32_t phi63 = phi59;
			uint16_t phi64 = 0;
			if (((uint8_t)*(uint16_t*)phi17 ^ (uint8_t)phi59) < 16)
			{
				*(uint8_t*)&alloca6 = phi60 | 0xf0;
				phi62 = (uint16_t)*(uint32_t*)&alloca6;
				phi63 = *(uint32_t*)&alloca6;
				phi64 = 1;
			}
			uint16_t phi65 = phi62;
			uint16_t phi66 = 0;
			uint32_t phi67 = phi63;
			uint32_t anon68 = (__zext uint32_t)*(uint16_t*)phi17;
			if (((anon68 ^ phi63) & 0xf00) == 0)
			{
				((uint8_t*)&alloca6)[1] = (uint8_t)(alloca1.field4 >> 8) | 0xf;
				phi65 = (uint16_t)*(uint32_t*)&alloca6;
				phi66 = 1;
				phi67 = *(uint32_t*)&alloca6;
			}
			uint16_t phi69 = phi65;
			uint16_t phi70 = 0;
			if ((*(uint16_t*)phi17 ^ (uint16_t)phi67) < 4096)
			{
				uint16_t anon71 = phi69 | 0xf000;
				*(uint16_t*)&alloca6 = anon71;
				phi70 = 1;
				phi69 = anon71;
			}
			uint16_t* anon72 = (uint16_t*)&alloca6;
			*anon72 = phi69 >> 12 | phi69 << 4;
			if (((anon68 ^ *(uint32_t*)&alloca6) & 0xf) == 0)
			{
				uint32_t anon73 = *(uint32_t*)&alloca6 | 0xf;
				alloca6 = (__zext uint64_t)anon73;
				phi74 = (uint8_t)(*(uint32_t*)&alloca6 >> 8);
				phi75 = anon73;
				phi76 = anon73;
				phi77 = 1;
			}
			else 
			{
				phi74 = (uint8_t)(phi69 >> 4);
				phi75 = *(uint32_t*)&alloca6;
				phi76 = *(uint32_t*)&alloca6 & 0xf;
				phi77 = 0;
			}
			uint32_t phi78 = phi75;
			uint16_t phi79 = 0;
			if ((phi75 & 0xf0) == 0)
			{
				*(uint8_t*)&alloca6 = (uint8_t)phi76 | 0xf0;
				phi78 = *(uint32_t*)&alloca6;
				phi79 = 1;
			}
			uint32_t phi80 = phi78;
			uint16_t phi81 = 0;
			if ((phi80 & 0xf00) == 0)
			{
				((uint8_t*)&alloca6)[1] = phi74 | 0xf;
				phi80 = *(uint32_t*)&alloca6;
				phi81 = 1;
			}
			uint16_t phi82 = 0;
			uint16_t anon84 = (uint16_t)phi80;
			phi83 = anon84;
			if ((uint16_t)phi80 < 4096)
			{
				uint16_t anon85 = anon84 | 0xf000;
				*anon72 = anon85;
				phi82 = 1;
				phi83 = anon85;
			}
			*anon72 = phi83 >> 12 | phi83 << 4;
			uint32_t anon86 = (__zext uint32_t)(*(uint16_t*)phi17 & 0xf);
			uint32_t anon87 = *(uint32_t*)&alloca6 & 0xf;
			if (anon86 == anon87)
			{
				uint32_t anon88 = *(uint32_t*)&alloca6 | 0xf;
				alloca6 = (__zext uint64_t)anon88;
				phi89 = anon88;
				phi90 = (uint8_t)(*(uint32_t*)&alloca6 >> 8);
				phi91 = anon88;
				phi92 = 1;
			}
			else 
			{
				phi89 = *(uint32_t*)&alloca6;
				phi90 = (uint8_t)(phi83 >> 4);
				phi91 = anon87;
				phi92 = 0;
			}
			uint32_t phi93 = phi89;
			uint16_t phi94 = 0;
			if ((phi89 & 0xf0) == 0)
			{
				*(uint8_t*)&alloca6 = (uint8_t)phi91 | 0xf0;
				phi93 = *(uint32_t*)&alloca6;
				phi94 = 1;
			}
			uint32_t phi95 = phi93;
			uint16_t phi96 = 0;
			if ((phi95 & 0xf00) == 0)
			{
				((uint8_t*)&alloca6)[1] = phi90 | 0xf;
				phi95 = *(uint32_t*)&alloca6;
				phi96 = 1;
			}
			uint16_t phi97 = 0;
			uint16_t anon99 = (uint16_t)phi95;
			phi98 = anon99;
			if ((uint16_t)phi95 < 4096)
			{
				uint16_t anon100 = anon99 | 0xf000;
				*anon72 = anon100;
				phi97 = 1;
				phi98 = anon100;
			}
			*anon72 = phi98 >> 12 | phi98 << 4;
			uint32_t anon101 = *(uint32_t*)&alloca6 & 0xf;
			if (anon86 == anon101)
			{
				uint32_t anon102 = *(uint32_t*)&alloca6 | 0xf;
				alloca6 = (__zext uint64_t)anon102;
				phi103 = anon102;
				phi104 = (uint8_t)(*(uint32_t*)&alloca6 >> 8);
				phi105 = anon102;
				phi106 = 1;
			}
			else 
			{
				phi103 = *(uint32_t*)&alloca6;
				phi104 = (uint8_t)(phi98 >> 4);
				phi105 = anon101;
				phi106 = 0;
			}
			uint32_t phi107 = phi103;
			uint16_t phi108 = 0;
			if ((phi103 & 0xf0) == 0)
			{
				*(uint8_t*)&alloca6 = (uint8_t)phi105 | 0xf0;
				phi107 = *(uint32_t*)&alloca6;
				phi108 = 1;
			}
			uint16_t phi109 = 0;
			if ((phi107 & 0xf00) == 0)
			{
				((uint8_t*)&alloca6)[1] = phi104 | 0xf;
				phi109 = 1;
				phi107 = *(uint32_t*)&alloca6;
			}
			alloca1.field5 = (__zext uint16_t)((uint16_t)phi107 < 4096) + phi109 + phi79 + (phi70 + phi61 + phi64 + phi66 << 4 | phi77) + phi81 + phi82 + phi92 + phi94 + phi96 + phi97 + phi106 + phi108;
			alloca6 = 0;
			uint32_t anon110 = printf((uint8_t*)0x400eb3);
			alloca6 = (__zext uint64_t)anon110;
			alloca1.field1 = 0;
			uint32_t anon111 = (uint32_t)phi19;
			if (anon111 != 0)
			{
				uint16_t phi229;
				uint64_t anon112 = (__zext uint64_t)alloca1.field4;
				alloca6 = anon112;
				phi_in113 = anon14;
				phi114 = 0;
				while (true)
				{
					uint64_t phi118;
					uint16_t phi120;
					uint16_t phi121;
					uint16_t phi122;
					uint8_t phi123;
					uint64_t phi146;
					uint64_t phi148;
					uint16_t phi149;
					uint16_t phi150;
					uint64_t phi152;
					uint8_t phi153;
					uint16_t phi154;
					uint16_t phi163;
					uint64_t phi178;
					uint16_t phi_in180;
					uint16_t phi_in181;
					uint64_t phi183;
					uint64_t phi184;
					uint8_t phi185;
					uint16_t phi186;
					uint16_t phi196;
					uint64_t phi212;
					uint32_t phi214;
					uint64_t phi216;
					uint16_t phi217;
					uint64_t phi219;
					uint8_t phi220;
					uint16_t phi221;
					uint64_t phi222;
					uint32_t phi224;
					uint32_t phi225;
					uint16_t phi226;
					uint64_t anon231;
					uint64_t phi115 = phi_in113;
					uint16_t anon117 = alloca1.field4 ^ *(uint16_t*)phi115;
					uint32_t anon116 = (__zext uint32_t)anon117 >> 8;
					if ((anon116 & 0xf) == 0)
					{
						uint16_t anon119 = alloca1.field4 | 0xf;
						phi118 = (__zext uint64_t)anon119;
						phi120 = anon119;
						phi121 = 1;
						phi122 = 2;
						phi123 = (uint8_t)(anon117 >> 8);
					}
					else 
					{
						phi118 = anon112;
						phi120 = alloca1.field4;
						phi121 = 0;
						phi122 = 1;
						phi123 = (uint8_t)anon116 & 0xf;
					}
					uint16_t phi124 = phi121;
					uint64_t phi125 = phi118;
					uint16_t phi126 = phi120;
					uint16_t phi127 = phi120 ^ *(uint16_t*)phi115;
					if (phi123 < 16)
					{
						uint64_t anon128 = phi118 & 0xff00 | (__zext uint64_t)(phi120 & 0xf | 0xf0);
						phi125 = anon128;
						uint16_t anon129 = (uint16_t)anon128;
						phi126 = anon129;
						phi127 = *(uint16_t*)phi115 ^ anon129;
						phi124 = phi122;
					}
					uint16_t phi130 = phi126;
					uint64_t phi131 = phi125;
					uint16_t phi132 = phi127;
					uint16_t phi133 = 0;
					if ((phi127 & 0xf00) == 0)
					{
						uint64_t anon134 = phi125 & 0xffffffffffff00ff | (__zext uint64_t)(phi120 & 0xf000 | 0xf00);
						phi131 = anon134;
						uint16_t anon135 = (uint16_t)anon134;
						phi130 = anon135;
						phi132 = *(uint16_t*)phi115 ^ anon135;
						phi133 = 256;
					}
					uint16_t phi136 = 0;
					uint16_t phi137 = phi130;
					if (phi132 < 4096)
					{
						uint16_t anon138 = phi130 | 0xf000;
						phi131 = phi131 & 0xffffffffffff0000 | (__zext uint64_t)anon138;
						phi136 = 256;
						phi137 = anon138;
					}
					uint32_t anon140 = (__zext uint32_t)*(uint16_t*)phi115;
					uint16_t anon145 = phi137 << 4;
					uint16_t anon144 = phi137 >> 12 | anon145;
					uint64_t anon143 = (__zext uint64_t)anon144;
					uint64_t anon142 = phi131 & 0xffffffffffff0000 | anon143;
					uint32_t anon141 = (uint32_t)anon142;
					uint32_t anon139 = (anon140 ^ anon141) >> 8;
					if ((anon139 & 0xf) == 0)
					{
						uint32_t anon147 = anon141 | 0xf;
						phi146 = (__zext uint64_t)anon147;
						phi148 = anon142 >> 8 & 0xffffff;
						phi149 = (uint16_t)anon147;
						uint16_t anon151 = anon145 | 0xf;
						phi150 = anon151;
						phi152 = (__zext uint64_t)anon151;
						phi153 = (uint8_t)anon139;
						phi154 = 256;
					}
					else 
					{
						phi146 = anon142;
						phi148 = (__zext uint64_t)(phi137 >> 4);
						phi149 = anon144;
						phi150 = anon144;
						phi152 = anon143;
						phi153 = (uint8_t)anon139 & 0xf;
						phi154 = 0;
					}
					uint16_t phi155 = phi149;
					uint16_t phi156 = phi150;
					uint64_t phi157 = phi146;
					uint16_t phi158 = 0;
					if (phi153 < 16)
					{
						uint64_t anon159 = phi146 & 0xffffffffffffff00 | phi152 & 0xf | 0xf0;
						phi157 = anon159;
						uint16_t anon160 = (uint16_t)anon159;
						phi155 = anon160;
						phi156 = anon160;
						phi158 = 256;
					}
					uint16_t phi161 = phi155;
					uint64_t phi162 = phi157;
					uint16_t anon164 = *(uint16_t*)phi115 ^ phi156;
					phi163 = anon164;
					uint16_t phi165 = 0;
					if ((anon164 & 0xf00) == 0)
					{
						uint64_t anon166 = phi157 & 0xffffffffffff00ff | phi148 << 8 & 0xf000 | 0xf00;
						phi162 = anon166;
						uint16_t anon167 = (uint16_t)anon166;
						phi161 = anon167;
						phi163 = *(uint16_t*)phi115 ^ anon167;
						phi165 = 256;
					}
					uint64_t phi168 = phi162;
					uint16_t phi169 = 0;
					uint16_t phi170 = phi161;
					if (phi163 < 4096)
					{
						uint16_t anon171 = phi161 | 0xf000;
						phi168 = phi168 & 0xffffffffffff0000 | (__zext uint64_t)anon171;
						phi169 = 256;
						phi170 = anon171;
					}
					uint16_t anon177 = phi170 << 4;
					uint16_t anon176 = phi170 >> 12 | anon177;
					uint64_t anon175 = (__zext uint64_t)anon176;
					uint64_t anon174 = phi168 & 0xffffffffffff0000 | anon175;
					uint32_t anon173 = (uint32_t)anon174;
					uint32_t anon172 = (anon140 ^ anon173) >> 8;
					if ((anon172 & 0xf) == 0)
					{
						uint32_t anon179 = anon173 | 0xf;
						phi178 = (__zext uint64_t)anon179;
						phi_in180 = (uint16_t)anon179;
						uint16_t anon182 = anon177 | 0xf;
						phi_in181 = anon182;
						phi183 = anon174 >> 8 & 0xffffff;
						phi184 = (__zext uint64_t)anon182;
						phi185 = (uint8_t)anon172;
						phi186 = 256;
					}
					else 
					{
						phi178 = anon174;
						phi_in180 = anon176;
						phi_in181 = anon176;
						phi183 = (__zext uint64_t)(phi170 >> 4);
						phi184 = anon175;
						phi185 = (uint8_t)anon172 & 0xf;
						phi186 = 0;
					}
					uint64_t phi187 = phi178;
					uint16_t phi188 = phi_in180;
					uint16_t phi189 = phi_in181;
					uint16_t phi190 = 0;
					if (phi185 < 16)
					{
						uint64_t anon191 = phi178 & 0xffffffffffffff00 | phi184 & 0xf | 0xf0;
						phi187 = anon191;
						uint16_t anon192 = (uint16_t)anon191;
						phi188 = anon192;
						phi189 = anon192;
						phi190 = 256;
					}
					uint16_t phi_in193 = phi188;
					uint64_t phi194 = phi187;
					uint16_t phi195 = phi_in193;
					uint16_t anon197 = *(uint16_t*)phi115 ^ phi189;
					phi196 = anon197;
					uint16_t phi198 = 0;
					if ((anon197 & 0xf00) == 0)
					{
						uint64_t anon199 = phi187 & 0xffffffffffff00ff | phi183 << 8 & 0xf000 | 0xf00;
						phi194 = anon199;
						uint16_t anon200 = (uint16_t)anon199;
						phi195 = anon200;
						phi196 = *(uint16_t*)phi115 ^ anon200;
						phi198 = 256;
					}
					uint64_t phi201 = phi194;
					uint16_t phi202 = 0;
					uint16_t phi203 = phi195;
					if (phi196 < 4096)
					{
						uint16_t anon204 = phi195 | 0xf000;
						phi201 = phi194 & 0xffffffffffff0000 | (__zext uint64_t)anon204;
						phi202 = 256;
						phi203 = anon204;
					}
					uint16_t anon211 = phi203 << 4;
					uint16_t anon210 = phi203 >> 12 | anon211;
					uint64_t anon209 = (__zext uint64_t)anon210;
					uint64_t anon208 = phi201 & 0xffffffffffff0000 | anon209;
					uint32_t anon207 = (uint32_t)anon208;
					uint32_t anon206 = anon140 ^ anon207;
					uint32_t anon205 = anon206 >> 8;
					if ((anon205 & 0xf) == 0)
					{
						uint32_t anon213 = anon207 | 0xf;
						phi212 = (__zext uint64_t)anon213;
						uint32_t anon215 = anon140 ^ anon213;
						phi214 = anon215;
						phi216 = anon208 >> 8 & 0xffffff;
						uint16_t anon218 = anon211 | 0xf;
						phi217 = anon218;
						phi219 = (__zext uint64_t)anon218;
						phi220 = (uint8_t)(anon215 >> 8);
						phi221 = 256;
					}
					else 
					{
						phi212 = anon208;
						phi214 = anon206;
						phi216 = (__zext uint64_t)(phi203 >> 4);
						phi217 = anon210;
						phi219 = anon209;
						phi220 = (uint8_t)anon205 & 0xf;
						phi221 = 0;
					}
					if (phi220 < 16)
					{
						uint64_t anon223 = phi212 & 0xffffffffffffff00 | phi219 & 0xf | 0xf0;
						phi222 = anon223;
						phi224 = (__zext uint32_t)(*(uint16_t*)phi115 ^ (uint16_t)anon223);
						phi225 = anon140 ^ (uint32_t)anon223;
						phi226 = 256;
					}
					else 
					{
						phi222 = phi212;
						phi224 = phi214;
						phi225 = (__zext uint32_t)(*(uint16_t*)phi115 ^ phi217);
						phi226 = 0;
					}
					uint32_t phi227 = phi224;
					uint16_t phi228 = 0;
					if ((phi225 & 0xf00) == 0)
					{
						phi227 = anon140 ^ (uint32_t)(phi222 & 0xffff00ff | phi216 << 8 & 0xf000 | 0xf00);
						phi228 = 256;
					}
					if ((__zext uint16_t)((uint16_t)phi227 < 4096) + phi198 + phi190 + phi169 + phi165 + (phi136 + phi133 + phi124 << 4) + phi154 + phi158 + phi186 + phi202 + phi221 + phi226 + phi228 == *(uint16_t*)(arg1 - 66))
					{
						*(uint16_t*)(anon14 + (phi114 << 1 & 0x1fffe)) = *(uint16_t*)phi115;
						phi229 = (uint16_t)phi114 + 1;
						anon230 = phi115 + 2;
						uint64_t anon232 = phi19 + 4294967295 & 0xffffffff;
						anon231 = anon232 + anon232 + 2 + anon14;
						if (anon230 != anon231)
						{
							break;
						}
					}
					else 
					{
						phi_in113 = anon230;
						phi114 = phi114;
						if (anon230 == anon231)
						{
							phi229 = (uint16_t)phi114;
						}
					}
				}
				alloca1.field1 = anon111;
				uint16_t* anon233 = (uint16_t*)phi17;
				*anon233 = *anon233;
				if (!(phi229 == 0 | *(uint16_t*)(arg1 - 66) == 64))
				{
					alloca6 = 0;
					uint32_t anon234 = rand();
					uint64_t anon235 = (__zext uint64_t)phi229;
					alloca6 = (__zext uint64_t)*(uint16_t*)(anon14 + ((__sext int64_t)anon234 % anon235 << 32 >> 31));
					alloca1.field4 = *(uint16_t*)(anon14 + ((__sext int64_t)anon234 % anon235 << 32 >> 31));
					phi19 = anon235;
				}
			}
			phi_in113 = anon230;
			phi114 = phi114 + 1 & 0xffffffff;
			break;
		}
	}
	putchar(10);
	return;
	if (anon13 == null)
	{
		uint32_t anon236 = puts((uint8_t*)0x400e87);
		alloca6 = (__zext uint64_t)anon236;
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
