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
	uint32_t phi8;
	uint64_t phi9;
	uint64_t phi65;
	uint64_t phi124;
	uint32_t phi185;
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
		uint32_t phi15;
		uint64_t phi_in16;
		uint64_t anon26;
		uint32_t anon119;
		uint32_t anon13 = phi8 * phi8;
		uint32_t anon12 = anon13 * anon13;
		if (anon12 < 2)
		{
			phi14 = (uint64_t)&alloca1.field3;
			phi15 = 1;
			phi_in16 = 1;
		}
		else 
		{
			uint64_t anon23;
			struct { uint32_t field0; bool field1; } anon38;
			uint32_t anon39;
			uint32_t anon42;
			uint64_t anon19 = (__zext uint64_t)phi8;
			uint64_t anon18 = anon19 << 8;
			uint16_t anon17 = (uint16_t)(4096 - anon18);
			alloca1.field0 = anon17;
			uint32_t phi_in20 = 1;
			uint64_t phi21 = 1;
			do
			{
				uint32_t phi22 = phi_in20;
				anon23 = arg1 - 70;
				anon26 = (uint64_t)anon11;
				uint64_t anon27 = phi21 << 1;
				uint32_t anon25 = (__zext uint32_t)*(uint16_t*)(anon26 + anon27 - 2) + 1;
				uint16_t anon24 = (uint16_t)anon25;
				*(uint16_t*)anon23 = anon24;
				uint16_t phi28 = anon24;
				if (((phi8 ^ anon25) & 0xf) == 0)
				{
					uint32_t anon31 = 16 - phi8;
					uint32_t anon30 = anon25 + (anon31 & 0xffff);
					uint16_t anon29 = (uint16_t)anon30;
					*(uint16_t*)anon23 = anon29;
					phi28 = anon29;
					uint64_t anon32 = anon19 << 4;
					uint32_t anon33 = anon25 + anon31;
					if ((((uint32_t)anon32 ^ anon33) & 0xf0) == 0)
					{
						uint32_t anon35 = (uint32_t)(256 - anon32);
						uint16_t anon34 = (uint16_t)(anon30 + anon35);
						*(uint16_t*)anon23 = anon34;
						phi28 = anon34;
						if ((((uint32_t)anon18 ^ anon33 + anon35) & 0xf00) == 0)
						{
							uint16_t anon36 = anon34 + anon17;
							uint16_t anon37 = (uint16_t)phi8 << 12;
							*(uint16_t*)anon23 = anon36 - ((anon37 ^ anon36) < 4096 ? anon37 : 0);
							phi28 = (anon37 ^ anon36) < 4096 ? 0 : anon36;
						}
					}
				}
				*(uint16_t*)(anon27 + anon26) = phi28;
				anon39 = phi22 + 1 & 0xffff;
				anon38 = llvm.ssub.with.overflow.i32(anon12, anon39);
				uint16_t anon41 = (uint16_t)phi22 + 1;
				uint32_t anon40 = (__zext uint32_t)anon41;
				phi_in20 = anon40;
				phi21 = (__zext uint64_t)anon41;
				anon42 = anon12 - anon40;
			}
			while ((uint8_t)(anon42 >> 31) == (__zext uint8_t)anon38.field1 & anon42 != 0);
			phi14 = anon23;
			phi15 = anon39;
			phi_in16 = (__zext uint64_t)anon39;
		}
		uint32_t anon43 = rand();
		uint8_t** anon44 = (uint8_t**)arg3;
		*(uint16_t*)(**anon44 == 0 ? phi14 : (uint64_t)&alloca1.field4) = *(uint16_t*)(anon26 + ((__sext int64_t)anon43 % (__zext uint64_t)phi15 << 32 >> 31));
		do
		{
			uint64_t phi45;
			uint32_t phi48;
			uint32_t phi73;
			uint64_t phi83;
			uint32_t phi89;
			uint64_t phi103;
			uint32_t phi108;
			do
			{
				phi45 = phi_in16;
				printf((uint8_t*)0x400e95);
				if (**anon44 == 0)
				{
					if (**anon44 != 0)
					{
						scanf((uint8_t*)0x400eaa);
						if (**anon44 != 0)
						{
							break;
						}
					}
					if (**anon44 == 0 && (**anon44 != 0))
					{
						alloca1.field4 = alloca1.field4 - 4369;
					}
				}
				else 
				{
					printf((uint8_t*)0x400ea4);
				}
				if (**anon44 == 0 && **anon44 == 0 || **anon44 != 0 && **anon44 == 0 && **anon44 == 0 || **anon44 != 0 && **anon44 != 0)
				{
					printf((uint8_t*)0x400eae);
				}
			}
			while (!(**anon44 == 0 && (**anon44 == 0 && **anon44 == 0 || **anon44 != 0 && **anon44 == 0 && **anon44 == 0 || **anon44 != 0 && **anon44 != 0)));
			uint64_t phi46 = (__zext uint64_t)alloca1.field4;
			uint16_t phi47 = alloca1.field4;
			uint32_t anon49 = (__zext uint32_t)alloca1.field4;
			phi48 = anon49;
			uint64_t phi50 = (__zext uint64_t)(alloca1.field4 & 0xf);
			uint16_t phi51 = 0;
			if (((alloca1.field4 ^ *(uint16_t*)phi14) & 0xf) == 0)
			{
				uint32_t anon53 = anon49 | 0xf;
				uint64_t anon52 = (__zext uint64_t)anon53;
				phi46 = anon52;
				phi47 = alloca1.field4 | 0xf;
				phi48 = anon53;
				phi50 = anon52;
				phi51 = 1;
			}
			uint16_t phi_in54 = phi47;
			uint32_t phi55 = phi48;
			uint64_t phi56 = phi46;
			uint16_t phi_in57 = phi_in54;
			uint16_t phi58 = 0;
			if (((uint8_t)*(uint16_t*)phi14 ^ (uint8_t)phi55) < 16)
			{
				uint64_t anon59 = phi50 & 0xf | 0xf0;
				phi56 = phi46 & 0xffffff00 | anon59;
				uint32_t anon60 = (uint32_t)phi46 & 0xff00 | (uint32_t)anon59;
				phi_in57 = (uint16_t)anon60;
				phi55 = anon60;
				phi58 = 1;
			}
			uint16_t phi61 = phi_in57;
			uint16_t phi62 = 0;
			uint32_t phi63 = phi55;
			if ((((__zext uint32_t)*(uint16_t*)phi14 ^ phi55) & 0xf00) == 0)
			{
				uint64_t anon64 = phi56 & 0xffff00ff | (__zext uint64_t)(alloca1.field4 & 0xf000 | 0xf00);
				phi61 = (uint16_t)anon64;
				phi62 = 1;
				phi63 = (uint32_t)anon64;
			}
			uint16_t anon68 = *(uint16_t*)phi14 & 0xf;
			uint16_t anon70 = (*(uint16_t*)phi14 ^ (uint16_t)phi63) < 4096 ? phi61 | 0xf000 : phi61;
			uint16_t anon69 = anon70 >> 12;
			uint16_t anon71 = anon70 << 4;
			uint16_t anon72 = anon69 | anon71;
			uint16_t anon67 = anon68 == anon69 ? anon71 | 0xf : anon72;
			uint64_t anon66 = (__zext uint64_t)anon67;
			phi65 = anon66;
			uint32_t anon75 = (__zext uint32_t)anon72;
			uint32_t anon74 = anon68 == anon69 ? anon75 | 0xf : anon75;
			phi73 = anon74;
			uint16_t phi76 = 0;
			uint8_t anon77 = (uint8_t)anon74;
			if (anon77 < 16)
			{
				uint8_t anon78 = anon77 | 0xf0;
				phi65 = anon66 & 0xff00 | (__zext uint64_t)anon78;
				phi73 = (__zext uint32_t)(anon67 & 0xff00) | (__zext uint32_t)anon78;
				phi76 = 1;
			}
			uint64_t phi79 = phi65 & 0xffff;
			uint32_t phi80 = phi73;
			uint16_t phi81 = 0;
			if ((phi73 & 0xf00) == 0)
			{
				uint64_t anon82 = phi65 & 0xf000 | 0xf00;
				phi79 = phi65 & 0xff | anon82;
				phi80 = (uint32_t)(phi65 & 0xffff00ff | anon82);
				phi81 = 1;
			}
			uint16_t anon85 = (uint16_t)phi80;
			uint16_t anon87 = anon85 < 4096 ? anon85 | 0xf000 : anon85;
			uint16_t anon88 = anon87 << 4;
			uint64_t anon86 = (__zext uint64_t)(anon87 >> 12 | anon88);
			uint64_t anon84 = (anon85 < 4096 ? 0 : phi79 & 0xffffffffffff0000) | anon86;
			phi83 = anon84;
			uint32_t anon90 = (uint32_t)anon84;
			phi89 = anon90;
			uint64_t phi91 = (__zext uint64_t)(anon87 >> 4);
			uint16_t phi92 = 0;
			uint32_t anon93 = (__zext uint32_t)anon68;
			if (anon93 == (anon90 & 0xf))
			{
				phi83 = (__zext uint64_t)(anon88 | 0xf);
				phi89 = anon90 | 0xf;
				phi91 = anon86 >> 8;
				phi92 = 1;
			}
			uint64_t phi94 = phi83;
			uint32_t phi95 = phi89;
			uint16_t phi96 = 0;
			uint8_t anon97 = (uint8_t)phi89;
			if (anon97 < 16)
			{
				uint8_t anon98 = anon97 | 0xf0;
				phi94 = phi83 & 0xffffffffffffff00 | (__zext uint64_t)anon98;
				phi95 = (uint32_t)phi83 & 0xff00 | (__zext uint32_t)anon98;
				phi96 = 1;
			}
			uint32_t phi99 = phi95;
			uint64_t phi100 = phi94 & 0xffff;
			uint16_t phi101 = 0;
			if ((phi99 & 0xf00) == 0)
			{
				uint64_t anon102 = phi91 << 8 & 0xf000 | 0xf00;
				phi100 = phi94 & 0xff | anon102;
				phi99 = (uint32_t)(phi94 & 0xffff00ff | anon102);
				phi101 = 1;
			}
			uint16_t anon105 = (uint16_t)phi99;
			uint16_t anon106 = anon105 < 4096 ? anon105 | 0xf000 : anon105;
			uint16_t anon107 = anon106 << 4;
			uint64_t anon104 = (anon105 < 4096 ? 0 : phi100 & 0xffffffffffff0000) | (__zext uint64_t)(anon106 >> 12 | anon107);
			phi103 = anon104;
			uint32_t anon109 = (uint32_t)anon104;
			phi108 = anon109;
			uint32_t phi110 = (__zext uint32_t)(anon106 >> 4);
			uint16_t phi111 = 0;
			if (anon93 == (anon109 & 0xf))
			{
				phi103 = (__zext uint64_t)(anon107 | 0xf);
				phi108 = anon109 | 0xf;
				phi110 = anon109 >> 8 & 0xff;
				phi111 = 1;
			}
			uint64_t phi112 = phi103;
			uint32_t phi113 = phi108;
			uint16_t phi114 = 0;
			uint8_t anon115 = (uint8_t)phi108;
			if (anon115 < 16)
			{
				uint8_t anon116 = anon115 | 0xf0;
				phi112 = phi103 & 0xffffffffffffff00 | (__zext uint64_t)anon116;
				phi113 = (uint32_t)phi103 & 0xff00 | (__zext uint32_t)anon116;
				phi114 = 1;
			}
			uint16_t phi117 = 0;
			uint32_t phi118 = phi113;
			if ((phi113 & 0xf00) == 0)
			{
				phi117 = 1;
				phi118 = (uint32_t)phi112 & 0xff | phi110 << 8 & 0xf000 | 0xf00;
			}
			alloca1.field5 = (__zext uint16_t)((uint16_t)phi118 < 4096) + phi117 + phi76 + ((__zext uint16_t)((*(uint16_t*)phi14 ^ (uint16_t)phi63) < 4096) + phi51 + phi58 + phi62 << 4 | (__zext uint16_t)(anon68 == anon69)) + phi81 + (__zext uint16_t)(anon85 < 4096) + phi92 + phi96 + phi101 + (__zext uint16_t)(anon105 < 4096) + phi111 + phi114;
			printf((uint8_t*)0x400eb3);
			alloca1.field1 = 0;
			anon119 = (uint32_t)phi45;
			if (anon119 != 0)
			{
				uint16_t phi212;
				uint64_t phi_in120 = anon26;
				uint64_t phi_in121 = 0;
				while (true)
				{
					uint64_t phi134;
					uint16_t phi136;
					uint16_t phi138;
					uint16_t phi139;
					uint64_t phi140;
					uint8_t phi146;
					uint16_t phi157;
					uint64_t phi162;
					uint8_t phi170;
					uint16_t phi180;
					uint8_t phi196;
					uint64_t anon210;
					uint64_t anon211;
					uint64_t phi122 = phi_in120;
					uint64_t phi123 = phi_in121;
					uint16_t anon128 = (alloca1.field4 ^ *(uint16_t*)phi122) >> 8;
					uint16_t anon127 = anon128 & 0xf;
					uint16_t anon126 = anon127 == 0 ? alloca1.field4 | 0xf : alloca1.field4;
					uint64_t anon125 = (__zext uint64_t)anon126;
					phi124 = anon125;
					uint16_t phi129 = anon126;
					uint16_t phi130 = anon126 ^ *(uint16_t*)phi122;
					uint16_t phi131 = (__zext uint16_t)(anon127 == 0);
					if ((uint8_t)anon128 < 16 | anon127 != 0)
					{
						uint64_t anon132 = anon125 & 0xff00 | (__zext uint64_t)(anon126 & 0xf | 0xf0);
						phi124 = anon132;
						uint16_t anon133 = (uint16_t)anon132;
						phi129 = anon133;
						phi130 = *(uint16_t*)phi122 ^ anon133;
						phi131 = anon127 == 0 ? 2 : 1;
					}
					if ((phi130 & 0xf00) == 0)
					{
						uint64_t anon135 = phi124 & 0xff | (__zext uint64_t)(anon126 & 0xf000 | 0xf00);
						phi134 = anon135;
						uint16_t anon137 = (uint16_t)anon135;
						phi136 = anon137;
						phi138 = *(uint16_t*)phi122 ^ anon137;
						phi139 = 256;
					}
					else 
					{
						phi134 = phi124 & 0xffff;
						phi136 = phi129;
						phi138 = phi130 & 0xfff;
						phi139 = 0;
					}
					uint16_t anon143 = phi138 < 4096 ? phi136 | 0xf000 : phi136;
					uint16_t anon144 = anon143 << 4;
					uint16_t anon142 = anon143 >> 12 | anon144;
					uint64_t anon141 = (phi138 < 4096 ? 0 : phi134 & 0xffffffffffff0000) | (__zext uint64_t)anon142;
					phi140 = anon141;
					uint16_t phi145 = anon142;
					uint32_t anon149 = (__zext uint32_t)*(uint16_t*)phi122;
					uint32_t anon148 = (anon149 ^ (uint32_t)anon141) >> 8;
					uint8_t anon147 = (uint8_t)anon148;
					phi146 = anon147 & 0xf;
					uint16_t phi150 = 0;
					if ((anon148 & 0xf) == 0)
					{
						phi140 = anon141 & 0xfffffff0 | 0xf;
						phi145 = anon144 | 0xf;
						phi146 = anon147;
						phi150 = 256;
					}
					uint16_t phi151 = phi145;
					uint64_t phi152 = phi140;
					uint16_t phi153 = 0;
					if (phi146 < 16)
					{
						uint64_t anon154 = phi140 & 0xffffffffffffff00 | (__zext uint64_t)(phi151 & 0xf | 0xf0);
						phi152 = anon154;
						phi151 = (uint16_t)anon154;
						phi153 = 256;
					}
					uint16_t phi155 = phi151;
					uint64_t phi156 = phi152 & 0xffff;
					uint16_t anon158 = *(uint16_t*)phi122 ^ phi155;
					phi157 = anon158 & 0xfff;
					uint16_t phi159 = 0;
					if ((anon158 & 0xf00) == 0)
					{
						uint64_t anon160 = phi152 & 0xff | phi152 & 0xf000 | 0xf00;
						phi156 = anon160;
						uint16_t anon161 = (uint16_t)anon160;
						phi155 = anon161;
						phi157 = *(uint16_t*)phi122 ^ anon161;
						phi159 = 256;
					}
					uint16_t anon166 = phi157 < 4096 ? phi155 | 0xf000 : phi155;
					uint16_t anon167 = anon166 << 4;
					uint16_t anon165 = anon166 >> 12 | anon167;
					uint64_t anon164 = (__zext uint64_t)anon165;
					uint64_t anon163 = (phi157 < 4096 ? 0 : phi156 & 0xffffffffffff0000) | anon164;
					phi162 = anon163;
					uint16_t phi168 = anon165;
					uint64_t phi169 = (__zext uint64_t)(anon166 >> 4);
					uint32_t anon172 = (anon149 ^ (uint32_t)anon163) >> 8;
					uint8_t anon171 = (uint8_t)anon172;
					phi170 = anon171 & 0xf;
					uint16_t phi173 = 0;
					if ((anon172 & 0xf) == 0)
					{
						phi162 = anon163 & 0xfffffff0 | 0xf;
						phi168 = anon167 | 0xf;
						phi169 = anon164 >> 8;
						phi170 = anon171;
						phi173 = 256;
					}
					uint64_t phi174 = phi162;
					uint16_t phi175 = phi168;
					uint16_t phi176 = 0;
					if (phi170 < 16)
					{
						uint64_t anon177 = phi162 & 0xffffffffffffff00 | (__zext uint64_t)(phi168 & 0xf | 0xf0);
						phi174 = anon177;
						phi175 = (uint16_t)anon177;
						phi176 = 256;
					}
					uint64_t phi178 = phi174 & 0xffff;
					uint16_t phi179 = phi175;
					uint16_t anon181 = *(uint16_t*)phi122 ^ phi175;
					phi180 = anon181 & 0xfff;
					uint16_t phi182 = 0;
					if ((anon181 & 0xf00) == 0)
					{
						uint64_t anon183 = phi174 & 0xff | phi169 << 8 & 0xf000 | 0xf00;
						phi178 = anon183;
						uint16_t anon184 = (uint16_t)anon183;
						phi179 = anon184;
						phi180 = *(uint16_t*)phi122 ^ anon184;
						phi182 = 256;
					}
					uint16_t anon191 = phi180 < 4096 ? phi179 | 0xf000 : phi179;
					uint16_t anon192 = anon191 << 4;
					uint16_t anon190 = anon191 >> 12 | anon192;
					uint64_t anon189 = (__zext uint64_t)anon190;
					uint64_t anon188 = (phi180 < 4096 ? 0 : phi178 & 0xffffffffffff0000) | anon189;
					uint32_t anon187 = (uint32_t)anon188;
					uint32_t anon186 = anon149 ^ anon187;
					phi185 = anon186;
					uint64_t phi193 = anon188;
					uint64_t phi194 = (__zext uint64_t)(anon191 >> 4);
					uint16_t phi195 = anon190;
					uint32_t anon197 = anon186 >> 8;
					phi196 = (uint8_t)anon197 & 0xf;
					uint16_t phi198 = 0;
					if ((anon197 & 0xf) == 0)
					{
						uint32_t anon200 = anon187 | 0xf;
						uint32_t anon199 = anon149 ^ anon200;
						phi185 = anon199;
						phi193 = (__zext uint64_t)anon200;
						phi194 = anon189 >> 8;
						phi195 = anon192 | 0xf;
						phi196 = (uint8_t)(anon199 >> 8);
						phi198 = 256;
					}
					uint32_t phi_in201 = phi185;
					uint32_t phi202 = phi_in201;
					uint64_t phi203 = phi193;
					uint32_t phi204 = (__zext uint32_t)(*(uint16_t*)phi122 ^ phi195);
					uint16_t phi205 = 0;
					if (phi196 < 16)
					{
						uint64_t anon206 = phi193 & 0xffffffffffffff00 | (__zext uint64_t)(phi195 & 0xf | 0xf0);
						phi202 = (__zext uint32_t)(*(uint16_t*)phi122 ^ (uint16_t)anon206);
						phi203 = anon206;
						phi204 = anon149 ^ (uint32_t)anon206;
						phi205 = 256;
					}
					uint32_t phi_in207 = phi202;
					uint32_t phi208 = phi_in207;
					uint16_t phi209 = 0;
					if ((phi204 & 0xf00) == 0)
					{
						phi208 = (__zext uint32_t)(*(uint16_t*)phi122 ^ (uint16_t)(phi203 & 0xff | phi194 << 8 | 0xf00));
						phi209 = 256;
					}
					if ((__zext uint16_t)((uint16_t)phi208 < 4096) + phi182 + phi176 + (phi157 < 4096 ? 256 : 0) + phi159 + ((phi138 < 4096 ? 256 : 0) + (phi139 | phi131) << 4 | phi150) + phi153 + phi173 + (phi180 < 4096 ? 256 : 0) + phi198 + phi205 + phi209 == *(uint16_t*)(arg1 - 66))
					{
						*(uint16_t*)(anon26 + (phi123 << 1 & 0x1fffe)) = *(uint16_t*)phi122;
						anon210 = phi122 + 2;
						anon211 = phi45 + 4294967295 & 0xffffffff;
						if (anon210 == anon211 + anon211 + 2 + anon26)
						{
							phi212 = (uint16_t)phi123 + 1;
							break;
						}
						else 
						{
							phi_in120 = anon210;
							phi_in121 = phi123 + 1 & 0xffffffff;
						}
					}
					else 
					{
						phi_in120 = anon210;
						phi_in121 = phi123;
						if (anon210 == anon211 + anon211 + 2 + anon26)
						{
							phi212 = (uint16_t)phi123;
							break;
						}
					}
				}
				alloca1.field1 = anon119;
				uint16_t* anon213 = (uint16_t*)phi14;
				*anon213 = *anon213;
				if (phi212 == 0 | *(uint16_t*)(arg1 - 66) == 64)
				{
					break;
				}
				else 
				{
					uint32_t anon214 = rand();
					uint64_t anon215 = (__zext uint64_t)phi212;
					alloca1.field4 = *(uint16_t*)(anon26 + ((__sext int64_t)anon214 % anon215 << 32 >> 31));
					phi_in16 = anon215;
				}
			}
		}
		while (anon119 != 0);
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
