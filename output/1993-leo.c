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
	uint64_t phi10;
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
				alloca1.field1 = alloca1.field1;
				phi10 = (__sext int64_t)anon8;
			}
		}
	}
	if (alloca1.field1 != 2 || alloca1.field1 == 2 && anon7 == 0 || alloca1.field1 == 2 && anon7 != 0 && alloca1.field1 == 0)
	{
		alloca1.field1 = 6;
		alloca1.field1 = 6;
		phi10 = 1296;
	}
	uint32_t phi11 = alloca1.field1;
	uint8_t* anon13 = calloc(phi10, 2);
	uint64_t anon12 = (uint64_t)anon13;
	alloca5 = anon12;
	if (anon13 != null)
	{
		uint64_t phi16;
		uint32_t phi17;
		uint64_t phi18;
		uint32_t anon110;
		uint32_t anon15 = phi11 * phi11;
		uint32_t anon14 = anon15 * anon15;
		if (anon14 < 2)
		{
			phi16 = (uint64_t)&alloca1.field3;
			phi17 = 1;
			phi18 = 1;
		}
		else 
		{
			uint64_t anon39;
			bool anon40;
			uint32_t anon44;
			uint64_t anon21 = (__zext uint64_t)phi11;
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
				*(uint16_t*)anon25 = anon28;
				if (((phi11 ^ anon29) & 0xf) == 0)
				{
					uint32_t anon32 = 16 - phi11;
					uint32_t anon31 = anon29 + (anon32 & 0xffff);
					uint16_t anon30 = (uint16_t)anon31;
					phi27 = anon30;
					*(uint16_t*)anon25 = anon30;
					uint64_t anon33 = anon21 << 4;
					uint32_t anon34 = anon29 + anon32;
					if ((((uint32_t)anon33 ^ anon34) & 0xf0) == 0)
					{
						uint32_t anon36 = (uint32_t)(256 - anon33);
						uint16_t anon35 = (uint16_t)(anon31 + anon36);
						phi27 = anon35;
						*(uint16_t*)anon25 = anon35;
						if ((((uint32_t)anon20 ^ anon34 + anon36) & 0xf00) == 0)
						{
							uint16_t anon37 = anon35 + anon19;
							uint16_t anon38 = (uint16_t)phi11 << 12;
							phi27 = anon37 - ((anon38 ^ anon37) < 4096 ? anon38 : 0);
							*(uint16_t*)anon25 = (anon38 ^ anon37) < 4096 ? 0 : anon37;
						}
					}
				}
				anon39 = arg1 - 70;
				*(uint16_t*)anon39 = phi27;
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
			phi16 = anon39;
			phi17 = anon44;
			phi18 = (__zext uint64_t)anon44;
		}
		uint64_t phi45 = phi18;
		uint64_t anon46 = (uint64_t)&alloca1.field4;
		alloca5 = anon46;
		alloca5 = 0;
		alloca5 = (__zext uint64_t)*(uint16_t*)(anon12 + ((__sext int64_t)rand() % (__zext uint64_t)phi17 << 32 >> 31));
		uint8_t** anon47 = (uint8_t**)arg3;
		*(uint16_t*)(**anon47 == 0 ? phi16 : anon46) = *(uint16_t*)(anon12 + ((__sext int64_t)rand() % (__zext uint64_t)phi17 << 32 >> 31));
		do
		{
			while (true)
			{
				alloca5 = 0;
				alloca5 = (__zext uint64_t)printf((uint8_t*)0x400e95);
				uint8_t* anon48 = (uint8_t*)arg3;
				*(uint8_t*)&alloca5 = *anon48;
				uint8_t anon49 = anon48[1];
				((uint8_t*)&alloca5)[1] = anon49;
				uint48_t* anon50 = (uint48_t*)&anon48[2];
				*(uint48_t*)&((uint8_t*)&alloca5)[2] = *anon50;
				if (**anon47 == 0)
				{
					if (**anon47 != 0)
					{
						alloca5 = 0;
						alloca5 = (__zext uint64_t)scanf((uint8_t*)0x400eaa);
						*(uint8_t*)&alloca5 = *anon48;
						((uint8_t*)&alloca5)[1] = anon49;
						*(uint48_t*)&((uint8_t*)&alloca5)[2] = *anon50;
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
					*(uint8_t*)&alloca5 = *anon48;
					((uint8_t*)&alloca5)[1] = anon49;
					*(uint48_t*)&((uint8_t*)&alloca5)[2] = *anon50;
				}
				if (**anon47 == 0 && **anon47 == 0 || **anon47 != 0 && **anon47 == 0 && **anon47 == 0 || **anon47 != 0 && **anon47 != 0)
				{
					alloca5 = 0;
					alloca5 = (__zext uint64_t)printf((uint8_t*)0x400eae);
					*(uint8_t*)&alloca5 = *anon48;
					((uint8_t*)&alloca5)[1] = anon49;
					*(uint48_t*)&((uint8_t*)&alloca5)[2] = *anon50;
				}
				if (**anon47 == 0)
				{
					if (**anon47 == 0 && **anon47 == 0 || **anon47 != 0 && **anon47 == 0 && **anon47 == 0 || **anon47 != 0 && **anon47 != 0)
					{
						uint32_t anon52;
						uint32_t phi_in53;
						uint8_t phi54;
						uint16_t phi55;
						uint8_t phi69;
						uint32_t phi70;
						uint32_t phi71;
						uint16_t phi72;
						uint16_t phi80;
						uint32_t phi_in86;
						uint8_t phi87;
						uint32_t phi88;
						uint16_t phi89;
						uint16_t phi95;
						uint32_t phi100;
						uint8_t phi101;
						uint32_t phi102;
						uint16_t phi103;
						alloca5 = (__zext uint64_t)alloca1.field4;
						if (((alloca1.field4 ^ *(uint16_t*)phi16) & 0xf) == 0)
						{
							anon52 = (__zext uint32_t)alloca1.field4;
							uint32_t anon51 = anon52 | 0xf;
							alloca5 = (__zext uint64_t)anon51;
							alloca1.field4 = (uint16_t)anon51;
							phi_in53 = anon51;
							phi54 = (uint8_t)anon51;
							phi55 = 1;
						}
						else 
						{
							alloca1.field4 = alloca1.field4;
							phi_in53 = anon52;
							phi54 = (uint8_t)alloca1.field4 & 0xf;
							phi55 = 0;
						}
						uint16_t phi_in56 = alloca1.field4;
						uint16_t phi57 = phi_in56;
						uint32_t phi58 = phi_in53;
						uint16_t phi59 = 0;
						if (((uint8_t)*(uint16_t*)phi16 ^ (uint8_t)phi_in53) < 16)
						{
							*(uint8_t*)&alloca5 = phi54 | 0xf0;
							phi57 = (uint16_t)*(uint32_t*)&alloca5;
							phi58 = *(uint32_t*)&alloca5;
							phi59 = 1;
						}
						uint16_t phi_in60 = phi57;
						uint32_t phi61 = phi58;
						uint16_t phi62 = phi_in60;
						uint16_t phi63 = 0;
						uint32_t anon64 = (__zext uint32_t)*(uint16_t*)phi16;
						if (((anon64 ^ phi61) & 0xf00) == 0)
						{
							((uint8_t*)&alloca5)[1] = (uint8_t)(alloca1.field4 >> 8) | 0xf;
							phi62 = (uint16_t)*(uint32_t*)&alloca5;
							phi63 = 1;
							phi61 = *(uint32_t*)&alloca5;
						}
						uint16_t phi65 = 0;
						if ((*(uint16_t*)phi16 ^ (uint16_t)phi61) < 4096)
						{
							uint16_t anon66 = phi62 | 0xf000;
							*(uint16_t*)&alloca5 = anon66;
							phi65 = 1;
							phi62 = anon66;
						}
						uint16_t* anon67 = (uint16_t*)&alloca5;
						*anon67 = phi62 >> 12 | phi62 << 4;
						if (((anon64 ^ *(uint32_t*)&alloca5) & 0xf) == 0)
						{
							uint32_t anon68 = *(uint32_t*)&alloca5 | 0xf;
							alloca5 = (__zext uint64_t)anon68;
							phi69 = (uint8_t)(*(uint32_t*)&alloca5 >> 8);
							phi70 = anon68;
							phi71 = anon68;
							phi72 = 1;
						}
						else 
						{
							phi69 = (uint8_t)(phi62 >> 4);
							phi70 = *(uint32_t*)&alloca5;
							phi71 = *(uint32_t*)&alloca5 & 0xf;
							phi72 = 0;
						}
						uint32_t phi_in73 = phi70;
						uint32_t phi74 = phi_in73;
						uint16_t phi75 = 0;
						if ((phi_in73 & 0xf0) == 0)
						{
							*(uint8_t*)&alloca5 = (uint8_t)phi71 | 0xf0;
							phi74 = *(uint32_t*)&alloca5;
							phi75 = 1;
						}
						uint32_t phi_in76 = phi74;
						uint32_t phi77 = phi_in76;
						uint16_t phi78 = 0;
						if ((phi_in76 & 0xf00) == 0)
						{
							((uint8_t*)&alloca5)[1] = phi69 | 0xf;
							phi77 = *(uint32_t*)&alloca5;
							phi78 = 1;
						}
						uint16_t phi79 = 0;
						uint16_t anon81 = (uint16_t)phi77;
						phi80 = anon81;
						if ((uint16_t)phi77 < 4096)
						{
							uint16_t anon82 = anon81 | 0xf000;
							*anon67 = anon82;
							phi79 = 1;
							phi80 = anon82;
						}
						*anon67 = phi80 >> 12 | phi80 << 4;
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
						uint32_t phi90 = phi_in86;
						uint16_t phi91 = 0;
						if ((phi_in86 & 0xf0) == 0)
						{
							*(uint8_t*)&alloca5 = (uint8_t)phi88 | 0xf0;
							phi90 = *(uint32_t*)&alloca5;
							phi91 = 1;
						}
						uint32_t phi92 = phi90;
						uint16_t phi93 = 0;
						if ((phi92 & 0xf00) == 0)
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
							*anon67 = anon97;
							phi94 = 1;
							phi95 = anon97;
						}
						*anon67 = phi95 >> 12 | phi95 << 4;
						uint32_t anon98 = *(uint32_t*)&alloca5 & 0xf;
						if (anon83 == anon98)
						{
							uint32_t anon99 = *(uint32_t*)&alloca5 | 0xf;
							alloca5 = (__zext uint64_t)anon99;
							phi100 = anon99;
							phi101 = (uint8_t)(*(uint32_t*)&alloca5 >> 8);
							phi102 = anon99;
							phi103 = 1;
						}
						else 
						{
							phi100 = *(uint32_t*)&alloca5;
							phi101 = (uint8_t)(phi95 >> 4);
							phi102 = anon98;
							phi103 = 0;
						}
						uint32_t phi_in104 = phi100;
						uint32_t phi105 = phi_in104;
						uint16_t phi106 = 0;
						if ((phi_in104 & 0xf0) == 0)
						{
							*(uint8_t*)&alloca5 = (uint8_t)phi102 | 0xf0;
							phi105 = *(uint32_t*)&alloca5;
							phi106 = 1;
						}
						uint32_t phi_in107 = phi105;
						uint16_t phi108 = 0;
						uint32_t phi109 = phi_in107;
						if ((phi_in107 & 0xf00) == 0)
						{
							((uint8_t*)&alloca5)[1] = phi101 | 0xf;
							phi108 = 1;
							phi109 = *(uint32_t*)&alloca5;
						}
						alloca1.field5 = (__zext uint16_t)((uint16_t)phi109 < 4096) + phi108 + phi75 + (phi65 + phi55 + phi59 + phi63 << 4 | phi72) + phi78 + phi79 + phi89 + phi91 + phi93 + phi94 + phi103 + phi106;
						alloca5 = 0;
						alloca5 = (__zext uint64_t)printf((uint8_t*)0x400eb3);
						break;
					}
				}
			}
			alloca1.field1 = 0;
			anon110 = (uint32_t)phi45;
			if (anon110 != 0)
			{
				uint16_t phi238;
				uint64_t anon111 = (__zext uint64_t)alloca1.field4;
				alloca5 = anon111;
				uint64_t phi_in112 = anon12;
				uint64_t phi113 = 0;
				while (true)
				{
					uint64_t phi_in117;
					uint16_t phi119;
					uint16_t phi120;
					uint16_t phi121;
					uint8_t phi122;
					uint64_t phi148;
					uint64_t phi150;
					uint16_t phi151;
					uint16_t phi152;
					uint64_t phi154;
					uint8_t phi155;
					uint16_t phi156;
					uint16_t phi169;
					uint64_t phi_in185;
					uint16_t phi187;
					uint16_t phi_in188;
					uint64_t phi190;
					uint64_t phi191;
					uint8_t phi192;
					uint16_t phi193;
					uint16_t phi203;
					uint64_t phi220;
					uint32_t phi_in222;
					uint64_t phi224;
					uint16_t phi225;
					uint64_t phi227;
					uint8_t phi228;
					uint16_t phi229;
					uint64_t phi231;
					uint32_t phi_in233;
					uint32_t phi234;
					uint16_t phi235;
					uint64_t anon239;
					uint64_t anon240;
					uint64_t phi114 = phi_in112;
					uint16_t anon116 = alloca1.field4 ^ *(uint16_t*)phi114;
					uint32_t anon115 = (__zext uint32_t)anon116 >> 8;
					if ((anon115 & 0xf) == 0)
					{
						uint16_t anon118 = alloca1.field4 | 0xf;
						phi_in117 = (__zext uint64_t)anon118;
						phi119 = anon118;
						phi120 = 1;
						phi121 = 2;
						phi122 = (uint8_t)(anon116 >> 8);
					}
					else 
					{
						phi_in117 = anon111;
						phi119 = alloca1.field4;
						phi120 = 0;
						phi121 = 1;
						phi122 = (uint8_t)anon115 & 0xf;
					}
					uint16_t phi_in123 = phi119;
					uint16_t phi_in124 = phi120;
					phi_in124 = phi121;
					uint16_t phi125 = phi_in123;
					uint16_t phi126 = phi_in123 ^ *(uint16_t*)phi114;
					uint16_t phi127 = phi_in124;
					if (phi122 < 16)
					{
						uint64_t anon128 = phi_in117 & 0xff00 | (__zext uint64_t)(phi_in123 & 0xf | 0xf0);
						phi_in117 = anon128;
						uint16_t anon129 = (uint16_t)anon128;
						phi125 = anon129;
						phi126 = *(uint16_t*)phi114 ^ anon129;
						phi127 = phi_in124;
					}
					uint16_t phi130 = phi125;
					uint16_t phi_in131 = phi126;
					uint64_t phi132 = phi_in117;
					uint16_t phi133 = phi_in131;
					uint16_t phi134 = 0;
					if ((phi_in131 & 0xf00) == 0)
					{
						uint64_t anon135 = phi_in117 & 0xffffffffffff00ff | (__zext uint64_t)(phi_in123 & 0xf000 | 0xf00);
						phi132 = anon135;
						uint16_t anon136 = (uint16_t)anon135;
						phi130 = anon136;
						phi133 = *(uint16_t*)phi114 ^ anon136;
						phi134 = 256;
					}
					uint64_t phi137 = phi132;
					uint16_t phi138 = phi130;
					uint16_t phi139 = 0;
					if (phi133 < 4096)
					{
						uint16_t anon140 = phi138 | 0xf000;
						phi137 = phi137 & 0xffffffffffff0000 | (__zext uint64_t)anon140;
						phi139 = 256;
						phi138 = anon140;
					}
					uint32_t anon142 = (__zext uint32_t)*(uint16_t*)phi114;
					uint16_t anon147 = phi138 << 4;
					uint16_t anon146 = phi138 >> 12 | anon147;
					uint64_t anon145 = (__zext uint64_t)anon146;
					uint64_t anon144 = phi137 & 0xffffffffffff0000 | anon145;
					uint32_t anon143 = (uint32_t)anon144;
					uint32_t anon141 = (anon142 ^ anon143) >> 8;
					if ((anon141 & 0xf) == 0)
					{
						uint32_t anon149 = anon143 | 0xf;
						phi148 = (__zext uint64_t)anon149;
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
						phi148 = anon144;
						phi150 = (__zext uint64_t)(phi138 >> 4);
						phi151 = anon146;
						phi152 = anon146;
						phi154 = anon145;
						phi155 = (uint8_t)anon141 & 0xf;
						phi156 = 0;
					}
					uint64_t phi157 = phi148;
					uint16_t phi_in158 = phi151;
					uint16_t phi_in159 = phi152;
					uint16_t phi160 = phi_in158;
					uint16_t phi161 = phi_in159;
					uint16_t phi162 = 0;
					if (phi155 < 16)
					{
						uint64_t anon163 = phi157 & 0xffffffffffffff00 | phi154 & 0xf | 0xf0;
						phi157 = anon163;
						uint16_t anon164 = (uint16_t)anon163;
						phi160 = anon164;
						phi161 = anon164;
						phi162 = 256;
					}
					uint64_t phi_in165 = phi157;
					uint16_t phi_in166 = phi160;
					uint64_t phi167 = phi_in165;
					uint16_t phi168 = phi_in166;
					uint16_t anon170 = *(uint16_t*)phi114 ^ phi161;
					phi169 = anon170;
					uint16_t phi171 = 0;
					if ((anon170 & 0xf00) == 0)
					{
						uint64_t anon172 = phi_in165 & 0xffffffffffff00ff | phi150 << 8 & 0xf000 | 0xf00;
						phi167 = anon172;
						uint16_t anon173 = (uint16_t)anon172;
						phi168 = anon173;
						phi169 = *(uint16_t*)phi114 ^ anon173;
						phi171 = 256;
					}
					uint64_t phi_in174 = phi167;
					uint16_t phi175 = phi168;
					uint64_t phi176 = phi_in174;
					uint16_t phi177 = 0;
					if (phi169 < 4096)
					{
						uint16_t anon178 = phi175 | 0xf000;
						phi176 = phi_in174 & 0xffffffffffff0000 | (__zext uint64_t)anon178;
						phi177 = 256;
						phi175 = anon178;
					}
					uint16_t anon184 = phi175 << 4;
					uint16_t anon183 = phi175 >> 12 | anon184;
					uint64_t anon182 = (__zext uint64_t)anon183;
					uint64_t anon181 = phi176 & 0xffffffffffff0000 | anon182;
					uint32_t anon180 = (uint32_t)anon181;
					uint32_t anon179 = (anon142 ^ anon180) >> 8;
					if ((anon179 & 0xf) == 0)
					{
						uint32_t anon186 = anon180 | 0xf;
						phi_in185 = (__zext uint64_t)anon186;
						phi187 = (uint16_t)anon186;
						uint16_t anon189 = anon184 | 0xf;
						phi_in188 = anon189;
						phi190 = anon181 >> 8 & 0xffffff;
						phi191 = (__zext uint64_t)anon189;
						phi192 = (uint8_t)anon179;
						phi193 = 256;
					}
					else 
					{
						phi_in185 = anon181;
						phi187 = anon183;
						phi_in188 = anon183;
						phi190 = (__zext uint64_t)(phi175 >> 4);
						phi191 = anon182;
						phi192 = (uint8_t)anon179 & 0xf;
						phi193 = 0;
					}
					uint16_t phi_in194 = phi187;
					uint64_t phi195 = phi_in185;
					uint16_t phi196 = phi_in194;
					uint16_t phi197 = phi_in188;
					uint16_t phi198 = 0;
					if (phi192 < 16)
					{
						uint64_t anon199 = phi_in185 & 0xffffffffffffff00 | phi191 & 0xf | 0xf0;
						phi195 = anon199;
						uint16_t anon200 = (uint16_t)anon199;
						phi196 = anon200;
						phi197 = anon200;
						phi198 = 256;
					}
					uint64_t phi201 = phi195;
					uint16_t phi202 = phi196;
					uint16_t anon204 = *(uint16_t*)phi114 ^ phi197;
					phi203 = anon204;
					uint16_t phi205 = 0;
					if ((anon204 & 0xf00) == 0)
					{
						uint64_t anon206 = phi201 & 0xffffffffffff00ff | phi190 << 8 & 0xf000 | 0xf00;
						phi201 = anon206;
						uint16_t anon207 = (uint16_t)anon206;
						phi202 = anon207;
						phi203 = *(uint16_t*)phi114 ^ anon207;
						phi205 = 256;
					}
					uint64_t phi_in208 = phi201;
					uint16_t phi209 = phi202;
					uint64_t phi210 = phi_in208;
					uint16_t phi211 = 0;
					if (phi203 < 4096)
					{
						uint16_t anon212 = phi209 | 0xf000;
						phi210 = phi_in208 & 0xffffffffffff0000 | (__zext uint64_t)anon212;
						phi211 = 256;
						phi209 = anon212;
					}
					uint16_t anon219 = phi209 << 4;
					uint16_t anon218 = phi209 >> 12 | anon219;
					uint64_t anon217 = (__zext uint64_t)anon218;
					uint64_t anon216 = phi210 & 0xffffffffffff0000 | anon217;
					uint32_t anon215 = (uint32_t)anon216;
					uint32_t anon214 = anon142 ^ anon215;
					uint32_t anon213 = anon214 >> 8;
					if ((anon213 & 0xf) == 0)
					{
						uint32_t anon221 = anon215 | 0xf;
						phi220 = (__zext uint64_t)anon221;
						uint32_t anon223 = anon142 ^ anon221;
						phi_in222 = anon223;
						phi224 = anon216 >> 8 & 0xffffff;
						uint16_t anon226 = anon219 | 0xf;
						phi225 = anon226;
						phi227 = (__zext uint64_t)anon226;
						phi228 = (uint8_t)(anon223 >> 8);
						phi229 = 256;
					}
					else 
					{
						phi220 = anon216;
						phi_in222 = anon214;
						phi224 = (__zext uint64_t)(phi209 >> 4);
						phi225 = anon218;
						phi227 = anon217;
						phi228 = (uint8_t)anon213 & 0xf;
						phi229 = 0;
					}
					uint64_t phi_in230 = phi220;
					if (phi228 < 16)
					{
						uint64_t anon232 = phi_in230 & 0xffffffffffffff00 | phi227 & 0xf | 0xf0;
						phi231 = anon232;
						phi_in233 = (__zext uint32_t)(*(uint16_t*)phi114 ^ (uint16_t)anon232);
						phi234 = anon142 ^ (uint32_t)anon232;
						phi235 = 256;
					}
					else 
					{
						phi231 = phi_in230;
						phi_in233 = phi_in222;
						phi234 = (__zext uint32_t)(*(uint16_t*)phi114 ^ phi225);
						phi235 = 0;
					}
					uint32_t phi236 = phi_in233;
					uint16_t phi237 = 0;
					if ((phi234 & 0xf00) == 0)
					{
						phi236 = anon142 ^ (uint32_t)(phi231 & 0xffff00ff | phi224 << 8 & 0xf000 | 0xf00);
						phi237 = 256;
					}
					if ((__zext uint16_t)((uint16_t)phi236 < 4096) + phi205 + phi198 + phi177 + phi171 + (phi139 + phi134 + phi127 << 4) + phi156 + phi162 + phi193 + phi211 + phi229 + phi235 + phi237 == *(uint16_t*)(arg1 - 66))
					{
						*(uint16_t*)(anon12 + (phi113 << 1 & 0x1fffe)) = *(uint16_t*)phi114;
						phi238 = (uint16_t)phi113 + 1;
						anon239 = phi114 + 2;
						uint64_t anon241 = phi45 + 4294967295 & 0xffffffff;
						anon240 = anon241 + anon241 + 2 + anon12;
						if (anon239 == anon240)
						{
							break;
						}
						else 
						{
							phi_in112 = anon239;
							phi113 = phi113 + 1 & 0xffffffff;
						}
					}
					else 
					{
						phi_in112 = anon239;
						phi113 = phi113;
						if (anon239 == anon240)
						{
							phi238 = (uint16_t)phi113;
							break;
						}
					}
				}
				alloca1.field1 = anon110;
				uint16_t* anon242 = (uint16_t*)phi16;
				*anon242 = *anon242;
				if (phi238 == 0 | *(uint16_t*)(arg1 - 66) == 64)
				{
					break;
				}
				else 
				{
					alloca5 = 0;
					uint64_t anon243 = (__zext uint64_t)phi238;
					alloca5 = (__zext uint64_t)*(uint16_t*)(anon12 + ((__sext int64_t)rand() % anon243 << 32 >> 31));
					alloca1.field4 = *(uint16_t*)(anon12 + ((__sext int64_t)rand() % anon243 << 32 >> 31));
					phi45 = anon243;
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
