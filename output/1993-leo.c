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
	if (anon13 == null)
	{
		uint32_t anon15 = puts((uint8_t*)0x400e87);
		alloca6 = (__zext uint64_t)anon15;
		exit(1);
	}
	else 
	{
		uint64_t phi18;
		uint32_t phi19;
		uint64_t phi_in20;
		uint32_t anon17 = phi11 * phi11;
		uint32_t anon16 = anon17 * anon17;
		if (anon16 < 2)
		{
			phi18 = (uint64_t)&alloca1.field3;
			phi19 = 1;
			phi_in20 = 1;
		}
		else 
		{
			uint64_t anon29;
			uint32_t anon42;
			bool anon43;
			uint64_t anon23 = (__zext uint64_t)phi11;
			uint64_t anon22 = anon23 << 8;
			uint16_t anon21 = (uint16_t)(4096 - anon22);
			alloca1.field0 = anon21;
			uint32_t phi_in24 = 1;
			uint64_t phi25 = 1;
			do
			{
				uint32_t phi26 = phi_in24;
				uint64_t anon28 = phi25 << 1;
				uint64_t anon27 = anon28 + anon14;
				alloca6 = anon27;
				anon29 = arg1 - 70;
				uint32_t anon31 = (__zext uint32_t)*(uint16_t*)(anon14 + anon28 - 2) + 1;
				uint16_t anon30 = (uint16_t)anon31;
				*(uint16_t*)anon29 = anon30;
				*(uint16_t*)anon27 = anon30;
				if (((phi11 ^ anon31) & 0xf) == 0)
				{
					uint32_t anon34 = 16 - phi11;
					uint32_t anon33 = anon31 + (anon34 & 0xffff);
					uint16_t anon32 = (uint16_t)anon33;
					*(uint16_t*)anon29 = anon32;
					*(uint16_t*)anon27 = anon32;
					uint64_t anon35 = anon23 << 4;
					uint32_t anon36 = anon31 + anon34;
					if ((((uint32_t)anon35 ^ anon36) & 0xf0) == 0)
					{
						uint32_t anon38 = (uint32_t)(256 - anon35);
						uint16_t anon37 = (uint16_t)(anon33 + anon38);
						*(uint16_t*)anon29 = anon37;
						*(uint16_t*)anon27 = anon37;
						if ((((uint32_t)anon22 ^ anon36 + anon38) & 0xf00) == 0)
						{
							uint16_t anon39 = anon37 + anon21;
							uint16_t anon40 = (uint16_t)phi11 << 12;
							*(uint16_t*)anon29 = anon39 - ((anon40 ^ anon39) < 4096 ? anon40 : 0);
							*(uint16_t*)anon27 = (anon40 ^ anon39) < 4096 ? 0 : anon39;
						}
					}
				}
				anon42 = phi26 + 1 & 0xffff;
				struct { uint32_t field0; bool field1; } anon41 = llvm.ssub.with.overflow.i32(anon16, anon42);
				uint16_t anon46 = (uint16_t)phi26 + 1;
				uint32_t anon45 = (__zext uint32_t)anon46;
				uint32_t anon44 = anon16 - anon45;
				anon43 = (uint8_t)(anon44 >> 31) == (__zext uint8_t)anon41.field1 & anon44 != 0;
				if (anon43)
				{
					phi_in24 = anon45;
					phi25 = (__zext uint64_t)anon46;
				}
			}
			while (anon43);
			phi18 = anon29;
			phi19 = anon42;
			phi_in20 = (__zext uint64_t)anon42;
		}
		uint64_t anon47 = (uint64_t)&alloca1.field4;
		alloca6 = anon47;
		alloca6 = 0;
		uint32_t anon48 = rand();
		alloca6 = (__zext uint64_t)*(uint16_t*)(anon14 + ((__sext int64_t)anon48 % (__zext uint64_t)phi19 << 32 >> 31));
		uint8_t** anon49 = (uint8_t**)arg3;
		*(uint16_t*)(**anon49 == 0 ? phi18 : anon47) = *(uint16_t*)(anon14 + ((__sext int64_t)anon48 % (__zext uint64_t)phi19 << 32 >> 31));
		uint64_t phi50 = phi_in20;
		while (true)
		{
			uint32_t anon59;
			uint16_t phi_in60;
			uint32_t phi61;
			uint8_t phi62;
			uint16_t phi63;
			uint8_t phi76;
			uint32_t phi77;
			uint32_t phi78;
			uint16_t phi79;
			uint16_t phi85;
			uint32_t phi91;
			uint8_t phi92;
			uint32_t phi93;
			uint16_t phi94;
			uint16_t phi100;
			uint32_t phi105;
			uint8_t phi106;
			uint32_t phi107;
			uint16_t phi108;
			uint64_t phi_in116;
			uint64_t phi117;
			uint64_t anon236;
			do
			{
				alloca6 = 0;
				uint32_t anon51 = printf((uint8_t*)0x400e95);
				alloca6 = (__zext uint64_t)anon51;
				uint8_t* anon52 = (uint8_t*)arg3;
				*(uint8_t*)&alloca6 = *anon52;
				uint8_t anon53 = anon52[1];
				((uint8_t*)&alloca6)[1] = anon53;
				uint48_t* anon54 = (uint48_t*)&anon52[2];
				*(uint48_t*)&((uint8_t*)&alloca6)[2] = *anon54;
				if (**anon49 == 0)
				{
					if (**anon49 != 0)
					{
						alloca6 = 0;
						uint32_t anon55 = scanf((uint8_t*)0x400eaa);
						alloca6 = (__zext uint64_t)anon55;
						*(uint8_t*)&alloca6 = *anon52;
						((uint8_t*)&alloca6)[1] = anon53;
						*(uint48_t*)&((uint8_t*)&alloca6)[2] = *anon54;
						if (**anon49 != 0)
						{
							break;
						}
					}
					if (**anon49 == 0 && (**anon49 != 0))
					{
						alloca1.field4 = alloca1.field4 - 4369;
					}
				}
				else 
				{
					alloca6 = 0;
					uint32_t anon56 = printf((uint8_t*)0x400ea4);
					alloca6 = (__zext uint64_t)anon56;
					*(uint8_t*)&alloca6 = *anon52;
					((uint8_t*)&alloca6)[1] = anon53;
					*(uint48_t*)&((uint8_t*)&alloca6)[2] = *anon54;
				}
				if (**anon49 == 0 && **anon49 == 0 || **anon49 != 0 && **anon49 == 0 && **anon49 == 0 || **anon49 != 0 && **anon49 != 0)
				{
					alloca6 = 0;
					uint32_t anon57 = printf((uint8_t*)0x400eae);
					alloca6 = (__zext uint64_t)anon57;
					*(uint8_t*)&alloca6 = *anon52;
					((uint8_t*)&alloca6)[1] = anon53;
					*(uint48_t*)&((uint8_t*)&alloca6)[2] = *anon54;
				}
			}
			while (!(**anon49 == 0 && (**anon49 == 0 && **anon49 == 0 || **anon49 != 0 && **anon49 == 0 && **anon49 == 0 || **anon49 != 0 && **anon49 != 0)));
			alloca6 = (__zext uint64_t)alloca1.field4;
			if (((alloca1.field4 ^ *(uint16_t*)phi18) & 0xf) == 0)
			{
				anon59 = (__zext uint32_t)alloca1.field4;
				uint32_t anon58 = anon59 | 0xf;
				alloca6 = (__zext uint64_t)anon58;
				phi_in60 = (uint16_t)anon58;
				phi61 = anon58;
				phi62 = (uint8_t)anon58;
				phi63 = 1;
			}
			else 
			{
				phi_in60 = alloca1.field4;
				phi61 = anon59;
				phi62 = (uint8_t)alloca1.field4 & 0xf;
				phi63 = 0;
			}
			uint32_t phi64 = phi61;
			uint16_t phi65 = phi_in60;
			uint16_t phi66 = 0;
			if (((uint8_t)*(uint16_t*)phi18 ^ (uint8_t)phi64) < 16)
			{
				*(uint8_t*)&alloca6 = phi62 | 0xf0;
				phi65 = (uint16_t)*(uint32_t*)&alloca6;
				phi64 = *(uint32_t*)&alloca6;
				phi66 = 1;
			}
			uint16_t phi67 = phi65;
			uint32_t phi68 = phi64;
			uint16_t phi69 = 0;
			uint32_t anon70 = (__zext uint32_t)*(uint16_t*)phi18;
			if (((anon70 ^ phi68) & 0xf00) == 0)
			{
				((uint8_t*)&alloca6)[1] = (uint8_t)(alloca1.field4 >> 8) | 0xf;
				phi67 = (uint16_t)*(uint32_t*)&alloca6;
				phi69 = 1;
				phi68 = *(uint32_t*)&alloca6;
			}
			uint16_t phi71 = 0;
			uint16_t phi72 = phi67;
			if ((*(uint16_t*)phi18 ^ (uint16_t)phi68) < 4096)
			{
				uint16_t anon73 = phi67 | 0xf000;
				*(uint16_t*)&alloca6 = anon73;
				phi71 = 1;
				phi72 = anon73;
			}
			uint16_t* anon74 = (uint16_t*)&alloca6;
			*anon74 = phi72 >> 12 | phi72 << 4;
			if (((anon70 ^ *(uint32_t*)&alloca6) & 0xf) == 0)
			{
				uint32_t anon75 = *(uint32_t*)&alloca6 | 0xf;
				alloca6 = (__zext uint64_t)anon75;
				phi76 = (uint8_t)(*(uint32_t*)&alloca6 >> 8);
				phi77 = anon75;
				phi78 = anon75;
				phi79 = 1;
			}
			else 
			{
				phi76 = (uint8_t)(phi72 >> 4);
				phi77 = *(uint32_t*)&alloca6;
				phi78 = *(uint32_t*)&alloca6 & 0xf;
				phi79 = 0;
			}
			uint32_t phi80 = phi77;
			uint16_t phi81 = 0;
			if ((phi80 & 0xf0) == 0)
			{
				*(uint8_t*)&alloca6 = (uint8_t)phi78 | 0xf0;
				phi80 = *(uint32_t*)&alloca6;
				phi81 = 1;
			}
			uint32_t phi82 = phi80;
			uint16_t phi83 = 0;
			if ((phi80 & 0xf00) == 0)
			{
				((uint8_t*)&alloca6)[1] = phi76 | 0xf;
				phi82 = *(uint32_t*)&alloca6;
				phi83 = 1;
			}
			uint16_t phi84 = 0;
			uint16_t anon86 = (uint16_t)phi82;
			phi85 = anon86;
			if ((uint16_t)phi82 < 4096)
			{
				uint16_t anon87 = anon86 | 0xf000;
				*anon74 = anon87;
				phi84 = 1;
				phi85 = anon87;
			}
			*anon74 = phi85 >> 12 | phi85 << 4;
			uint32_t anon88 = (__zext uint32_t)(*(uint16_t*)phi18 & 0xf);
			uint32_t anon89 = *(uint32_t*)&alloca6 & 0xf;
			if (anon88 == anon89)
			{
				uint32_t anon90 = *(uint32_t*)&alloca6 | 0xf;
				alloca6 = (__zext uint64_t)anon90;
				phi91 = anon90;
				phi92 = (uint8_t)(*(uint32_t*)&alloca6 >> 8);
				phi93 = anon90;
				phi94 = 1;
			}
			else 
			{
				phi91 = *(uint32_t*)&alloca6;
				phi92 = (uint8_t)(phi85 >> 4);
				phi93 = anon89;
				phi94 = 0;
			}
			uint32_t phi95 = phi91;
			uint16_t phi96 = 0;
			if ((phi91 & 0xf0) == 0)
			{
				*(uint8_t*)&alloca6 = (uint8_t)phi93 | 0xf0;
				phi95 = *(uint32_t*)&alloca6;
				phi96 = 1;
			}
			uint32_t phi97 = phi95;
			uint16_t phi98 = 0;
			if ((phi95 & 0xf00) == 0)
			{
				((uint8_t*)&alloca6)[1] = phi92 | 0xf;
				phi97 = *(uint32_t*)&alloca6;
				phi98 = 1;
			}
			uint16_t phi99 = 0;
			uint16_t anon101 = (uint16_t)phi97;
			phi100 = anon101;
			if ((uint16_t)phi97 < 4096)
			{
				uint16_t anon102 = anon101 | 0xf000;
				*anon74 = anon102;
				phi99 = 1;
				phi100 = anon102;
			}
			*anon74 = phi100 >> 12 | phi100 << 4;
			uint32_t anon103 = *(uint32_t*)&alloca6 & 0xf;
			if (anon88 == anon103)
			{
				uint32_t anon104 = *(uint32_t*)&alloca6 | 0xf;
				alloca6 = (__zext uint64_t)anon104;
				phi105 = anon104;
				phi106 = (uint8_t)(*(uint32_t*)&alloca6 >> 8);
				phi107 = anon104;
				phi108 = 1;
			}
			else 
			{
				phi105 = *(uint32_t*)&alloca6;
				phi106 = (uint8_t)(phi100 >> 4);
				phi107 = anon103;
				phi108 = 0;
			}
			uint32_t phi109 = phi105;
			uint16_t phi110 = 0;
			if ((phi109 & 0xf0) == 0)
			{
				*(uint8_t*)&alloca6 = (uint8_t)phi107 | 0xf0;
				phi109 = *(uint32_t*)&alloca6;
				phi110 = 1;
			}
			uint32_t phi111 = phi109;
			uint16_t phi112 = 0;
			if ((phi111 & 0xf00) == 0)
			{
				((uint8_t*)&alloca6)[1] = phi106 | 0xf;
				phi112 = 1;
				phi111 = *(uint32_t*)&alloca6;
			}
			alloca1.field5 = (__zext uint16_t)((uint16_t)phi111 < 4096) + phi112 + phi81 + (phi71 + phi63 + phi66 + phi69 << 4 | phi79) + phi83 + phi84 + phi94 + phi96 + phi98 + phi99 + phi108 + phi110;
			alloca6 = 0;
			uint32_t anon113 = printf((uint8_t*)0x400eb3);
			alloca6 = (__zext uint64_t)anon113;
			alloca1.field1 = 0;
			uint32_t anon114 = (uint32_t)phi50;
			if (anon114 != 0)
			{
				uint16_t phi235;
				uint64_t anon115 = (__zext uint64_t)alloca1.field4;
				alloca6 = anon115;
				phi_in116 = anon14;
				phi117 = 0;
				while (true)
				{
					uint64_t phi121;
					uint16_t phi123;
					uint16_t phi124;
					uint16_t phi125;
					uint8_t phi126;
					uint64_t phi152;
					uint64_t phi154;
					uint16_t phi155;
					uint16_t phi156;
					uint64_t phi158;
					uint8_t phi159;
					uint16_t phi160;
					uint16_t phi170;
					uint64_t phi185;
					uint16_t phi187;
					uint16_t phi188;
					uint64_t phi190;
					uint64_t phi191;
					uint8_t phi192;
					uint16_t phi193;
					uint16_t phi201;
					uint64_t phi217;
					uint32_t phi219;
					uint64_t phi221;
					uint16_t phi222;
					uint64_t phi224;
					uint8_t phi225;
					uint16_t phi226;
					uint64_t phi227;
					uint32_t phi229;
					uint32_t phi230;
					uint16_t phi231;
					uint64_t anon237;
					uint64_t phi118 = phi_in116;
					uint16_t anon120 = alloca1.field4 ^ *(uint16_t*)phi118;
					uint32_t anon119 = (__zext uint32_t)anon120 >> 8;
					if ((anon119 & 0xf) == 0)
					{
						uint16_t anon122 = alloca1.field4 | 0xf;
						phi121 = (__zext uint64_t)anon122;
						phi123 = anon122;
						phi124 = 1;
						phi125 = 2;
						phi126 = (uint8_t)(anon120 >> 8);
					}
					else 
					{
						phi121 = anon115;
						phi123 = alloca1.field4;
						phi124 = 0;
						phi125 = 1;
						phi126 = (uint8_t)anon119 & 0xf;
					}
					uint16_t phi_in127 = phi124;
					uint64_t phi128 = phi121;
					uint16_t phi129 = phi123;
					uint16_t phi130 = phi123 ^ *(uint16_t*)phi118;
					uint16_t phi131 = phi_in127;
					if (phi126 < 16)
					{
						uint64_t anon132 = phi121 & 0xff00 | (__zext uint64_t)(phi123 & 0xf | 0xf0);
						phi128 = anon132;
						uint16_t anon133 = (uint16_t)anon132;
						phi129 = anon133;
						phi130 = *(uint16_t*)phi118 ^ anon133;
						phi131 = phi125;
					}
					uint16_t phi_in134 = phi129;
					uint16_t phi135 = phi130;
					uint64_t phi136 = phi128;
					uint16_t phi137 = phi_in134;
					uint16_t phi138 = 0;
					if ((phi135 & 0xf00) == 0)
					{
						uint64_t anon139 = phi128 & 0xffffffffffff00ff | (__zext uint64_t)(phi123 & 0xf000 | 0xf00);
						phi136 = anon139;
						uint16_t anon140 = (uint16_t)anon139;
						phi137 = anon140;
						phi135 = *(uint16_t*)phi118 ^ anon140;
						phi138 = 256;
					}
					uint16_t phi141 = phi137;
					uint64_t phi142 = phi136;
					uint16_t phi143 = 0;
					if (phi135 < 4096)
					{
						uint16_t anon144 = phi141 | 0xf000;
						phi142 = phi136 & 0xffffffffffff0000 | (__zext uint64_t)anon144;
						phi143 = 256;
						phi141 = anon144;
					}
					uint32_t anon146 = (__zext uint32_t)*(uint16_t*)phi118;
					uint16_t anon151 = phi141 << 4;
					uint16_t anon150 = phi141 >> 12 | anon151;
					uint64_t anon149 = (__zext uint64_t)anon150;
					uint64_t anon148 = phi142 & 0xffffffffffff0000 | anon149;
					uint32_t anon147 = (uint32_t)anon148;
					uint32_t anon145 = (anon146 ^ anon147) >> 8;
					if ((anon145 & 0xf) == 0)
					{
						uint32_t anon153 = anon147 | 0xf;
						phi152 = (__zext uint64_t)anon153;
						phi154 = anon148 >> 8 & 0xffffff;
						phi155 = (uint16_t)anon153;
						uint16_t anon157 = anon151 | 0xf;
						phi156 = anon157;
						phi158 = (__zext uint64_t)anon157;
						phi159 = (uint8_t)anon145;
						phi160 = 256;
					}
					else 
					{
						phi152 = anon148;
						phi154 = (__zext uint64_t)(phi141 >> 4);
						phi155 = anon150;
						phi156 = anon150;
						phi158 = anon149;
						phi159 = (uint8_t)anon145 & 0xf;
						phi160 = 0;
					}
					uint16_t phi_in161 = phi155;
					uint16_t phi_in162 = phi156;
					uint64_t phi163 = phi152;
					uint16_t phi164 = phi_in162;
					uint16_t phi165 = 0;
					if (phi159 < 16)
					{
						uint64_t anon166 = phi152 & 0xffffffffffffff00 | phi158 & 0xf | 0xf0;
						phi163 = anon166;
						uint16_t anon167 = (uint16_t)anon166;
						phi_in161 = anon167;
						phi164 = anon167;
						phi165 = 256;
					}
					uint64_t phi168 = phi163;
					uint16_t phi169 = phi_in161;
					uint16_t anon171 = *(uint16_t*)phi118 ^ phi164;
					phi170 = anon171;
					uint16_t phi172 = 0;
					if ((anon171 & 0xf00) == 0)
					{
						uint64_t anon173 = phi163 & 0xffffffffffff00ff | phi154 << 8 & 0xf000 | 0xf00;
						phi168 = anon173;
						uint16_t anon174 = (uint16_t)anon173;
						phi169 = anon174;
						phi170 = *(uint16_t*)phi118 ^ anon174;
						phi172 = 256;
					}
					uint64_t phi175 = phi168;
					uint16_t phi176 = 0;
					uint16_t phi177 = phi169;
					if (phi170 < 4096)
					{
						uint16_t anon178 = phi169 | 0xf000;
						phi175 = phi168 & 0xffffffffffff0000 | (__zext uint64_t)anon178;
						phi176 = 256;
						phi177 = anon178;
					}
					uint16_t anon184 = phi177 << 4;
					uint16_t anon183 = phi177 >> 12 | anon184;
					uint64_t anon182 = (__zext uint64_t)anon183;
					uint64_t anon181 = phi175 & 0xffffffffffff0000 | anon182;
					uint32_t anon180 = (uint32_t)anon181;
					uint32_t anon179 = (anon146 ^ anon180) >> 8;
					if ((anon179 & 0xf) == 0)
					{
						uint32_t anon186 = anon180 | 0xf;
						phi185 = (__zext uint64_t)anon186;
						phi187 = (uint16_t)anon186;
						uint16_t anon189 = anon184 | 0xf;
						phi188 = anon189;
						phi190 = anon181 >> 8 & 0xffffff;
						phi191 = (__zext uint64_t)anon189;
						phi192 = (uint8_t)anon179;
						phi193 = 256;
					}
					else 
					{
						phi185 = anon181;
						phi187 = anon183;
						phi188 = anon183;
						phi190 = (__zext uint64_t)(phi177 >> 4);
						phi191 = anon182;
						phi192 = (uint8_t)anon179 & 0xf;
						phi193 = 0;
					}
					uint16_t phi_in194 = phi187;
					uint64_t phi195 = phi185;
					uint16_t phi196 = 0;
					if (phi192 < 16)
					{
						uint64_t anon197 = phi185 & 0xffffffffffffff00 | phi191 & 0xf | 0xf0;
						phi195 = anon197;
						uint16_t anon198 = (uint16_t)anon197;
						phi_in194 = anon198;
						phi188 = anon198;
						phi196 = 256;
					}
					uint64_t phi199 = phi195;
					uint16_t phi200 = phi_in194;
					uint16_t anon202 = *(uint16_t*)phi118 ^ phi188;
					phi201 = anon202;
					uint16_t phi203 = 0;
					if ((anon202 & 0xf00) == 0)
					{
						uint64_t anon204 = phi195 & 0xffffffffffff00ff | phi190 << 8 & 0xf000 | 0xf00;
						phi199 = anon204;
						uint16_t anon205 = (uint16_t)anon204;
						phi200 = anon205;
						phi201 = *(uint16_t*)phi118 ^ anon205;
						phi203 = 256;
					}
					uint64_t phi206 = phi199;
					uint16_t phi207 = 0;
					uint16_t phi208 = phi200;
					if (phi201 < 4096)
					{
						uint16_t anon209 = phi200 | 0xf000;
						phi206 = phi206 & 0xffffffffffff0000 | (__zext uint64_t)anon209;
						phi207 = 256;
						phi208 = anon209;
					}
					uint16_t anon216 = phi208 << 4;
					uint16_t anon215 = phi208 >> 12 | anon216;
					uint64_t anon214 = (__zext uint64_t)anon215;
					uint64_t anon213 = phi206 & 0xffffffffffff0000 | anon214;
					uint32_t anon212 = (uint32_t)anon213;
					uint32_t anon211 = anon146 ^ anon212;
					uint32_t anon210 = anon211 >> 8;
					if ((anon210 & 0xf) == 0)
					{
						uint32_t anon218 = anon212 | 0xf;
						phi217 = (__zext uint64_t)anon218;
						uint32_t anon220 = anon146 ^ anon218;
						phi219 = anon220;
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
						phi219 = anon211;
						phi221 = (__zext uint64_t)(phi208 >> 4);
						phi222 = anon215;
						phi224 = anon214;
						phi225 = (uint8_t)anon210 & 0xf;
						phi226 = 0;
					}
					if (phi225 < 16)
					{
						uint64_t anon228 = phi217 & 0xffffffffffffff00 | phi224 & 0xf | 0xf0;
						phi227 = anon228;
						phi229 = (__zext uint32_t)(*(uint16_t*)phi118 ^ (uint16_t)anon228);
						phi230 = anon146 ^ (uint32_t)anon228;
						phi231 = 256;
					}
					else 
					{
						phi227 = phi217;
						phi229 = phi219;
						phi230 = (__zext uint32_t)(*(uint16_t*)phi118 ^ phi222);
						phi231 = 0;
					}
					uint32_t phi_in232 = phi229;
					uint32_t phi233 = phi_in232;
					uint16_t phi234 = 0;
					if ((phi230 & 0xf00) == 0)
					{
						phi233 = anon146 ^ (uint32_t)(phi227 & 0xffff00ff | phi221 << 8 & 0xf000 | 0xf00);
						phi234 = 256;
					}
					if ((__zext uint16_t)((uint16_t)phi233 < 4096) + phi203 + phi196 + phi176 + phi172 + (phi143 + phi138 + phi131 << 4) + phi160 + phi165 + phi193 + phi207 + phi226 + phi231 + phi234 == *(uint16_t*)(arg1 - 66))
					{
						*(uint16_t*)(anon14 + (phi117 << 1 & 0x1fffe)) = *(uint16_t*)phi118;
						phi235 = (uint16_t)phi117 + 1;
						anon236 = phi118 + 2;
						uint64_t anon238 = phi50 + 4294967295 & 0xffffffff;
						anon237 = anon238 + anon238 + 2 + anon14;
						if (anon236 != anon237)
						{
							break;
						}
					}
					else 
					{
						phi_in116 = anon236;
						phi117 = phi117;
						if (anon236 == anon237)
						{
							phi235 = (uint16_t)phi117;
						}
					}
				}
				alloca1.field1 = anon114;
				uint16_t* anon239 = (uint16_t*)phi18;
				*anon239 = *anon239;
				if (!(phi235 == 0 | *(uint16_t*)(arg1 - 66) == 64))
				{
					alloca6 = 0;
					uint32_t anon240 = rand();
					uint64_t anon241 = (__zext uint64_t)phi235;
					alloca6 = (__zext uint64_t)*(uint16_t*)(anon14 + ((__sext int64_t)anon240 % anon241 << 32 >> 31));
					alloca1.field4 = *(uint16_t*)(anon14 + ((__sext int64_t)anon240 % anon241 << 32 >> 31));
					phi50 = anon241;
				}
			}
			phi_in116 = anon236;
			phi117 = phi117 + 1 & 0xffffffff;
			break;
		}
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
