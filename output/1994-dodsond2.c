#include "tests/bin/1994-dodsond2.h"

void _init(uint64_t arg0)
{
	if (*(uint64_t*)0x6023d0 != 0)
	{
		__gmon_start__();
	}
	return;
}
void getpid(uint64_t arg0)
{
	__indirect_jump(*(uint64_t*)0x602400);
}
void main(uint64_t arg0, uint64_t arg1)
{
	uint64_t anon1 = arg1 - 8;
	*(uint64_t*)anon1 = arg0;
	m(4195947);
	struct nanon2 = n(4195954);
	uint64_t anon4 = anon1 & 0xfffffffffffffff0;
	uint64_t anon3 = anon4 - 8;
	*(uint64_t*)anon3 = anon2.rax;
	uint64_t anon5 = anon4 - 16;
	*(uint64_t*)anon5 = anon3;
	__libc_start_main((uint32_t(*)(uint32_t, uint8_t**, uint8_t**))0x400660, (uint32_t)arg0, (uint8_t**)anon1, (void(*)())0x401c10, (void(*)())0x401c80, (void(*)())anon2.rdx, *(uint8_t**)anon5);
	llvm.trap();
}
void _start(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	*(uint64_t*)(arg1 - 8) = arg0;
	uint64_t anon2 = arg1 & 0xfffffffffffffff0;
	uint64_t anon1 = anon2 - 16;
	*(uint64_t*)anon1 = anon2 - 8;
	__libc_start_main((uint32_t(*)(uint32_t, uint8_t**, uint8_t**))0x400660, (uint32_t)arg0, (uint8_t**)arg1, (void(*)())0x401c10, (void(*)())0x401c80, (void(*)())arg2, *(uint8_t**)anon1);
	llvm.trap();
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
	uint8_t* anon1 = (uint8_t*)0x602488;
	if (*anon1 == 0)
	{
		deregister_tm_clones(4196146);
		*anon1 = 1;
	}
	return;
}
void frame_dummy(uint64_t arg0)
{
	return;
}
void s(uint64_t arg0)
{
	uint32_t phi11;
	uint32_t* phi1 = (uint32_t*)0x6027c4;
	uint64_t phi_in2 = 6301636;
	do
	{
		uint32_t phi5;
		uint32_t phi6;
		uint32_t phi7;
		uint32_t* anon8;
		uint32_t phi9;
		uint32_t phi10;
		uint64_t phi3 = phi_in2;
		uint32_t* anon4 = (uint32_t*)(phi3 + 4);
		if (*anon4 < *phi1)
		{
			*anon4 = *phi1;
			*phi1 = *anon4;
			phi5 = *phi1;
			phi6 = *anon4;
			anon8 = (uint32_t*)(phi3 - 4);
			phi7 = *anon8;
			phi9 = *phi1;
			phi10 = *anon4;
		}
		else 
		{
			phi5 = *anon4;
			phi6 = *phi1;
			phi11 = *anon8;
		}
		if (*anon4 >= *phi1 && *phi1 < *anon8 || *anon4 < *phi1 && *anon4 < *anon8)
		{
			phi9 = phi5;
			*anon8 = phi6;
			*phi1 = *anon8;
			phi7 = *anon8;
			phi10 = *anon8;
		}
		if (*anon4 >= *phi1 && *phi1 < *anon8 || *anon4 < *phi1 && *anon4 < *anon8 || *anon4 >= *anon8 && *anon4 < *phi1)
		{
			uint32_t phi_in12 = phi7;
			*phi1 = phi9;
			*anon4 = phi10;
			phi11 = phi_in12;
			if (*anon4 > *phi1)
			{
				phi11 = *anon8;
			}
		}
		if (phi11 != 255)
		{
			uint64_t anon13 = phi3 + 12;
			phi1 = (uint32_t*)anon13;
			phi_in2 = anon13;
			if (phi3 == 6301984)
			{
				break;
			}
		}
	}
	while (phi11 != 255);
	return;
}
void w(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	struct { uint8_t field0[4]; uint32_t field1; uint64_t field2; uint8_t field3[8]; uint32_t field4; uint32_t field5; uint8_t field6[48]; uint64_t field7; uint32_t field8; uint8_t field9[4]; uint64_t field10; uint64_t field11; uint32_t field12; uint8_t field13[8]; uint32_t field14; uint8_t field15[56]; uint64_t field16; } alloca1;
	uint32_t phi5;
	uint64_t phi10;
	uint64_t phi19;
	alloca1.field16 = arg0;
	uint64_t anon2 = arg2 << 32;
	uint32_t anon3 = (uint32_t)arg3;
	*(uint32_t*)((anon2 >> 30) + 6300992) = anon3;
	alloca1.field2 = (anon2 >> 32) * 12;
	alloca1.field1 = anon3 + 2;
	alloca1.field4 = anon3 + 3;
	alloca1.field5 = anon3 + 4;
	uint32_t phi_in4 = anon3;
	uint32_t anon6 = anon3 + 1;
	phi5 = anon6;
	uint64_t phi7 = arg3 & 0xffffffff;
	int64_t anon9 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi10 + 48) + *(uint64_t*)(phi10 + 8) + 6301632);
	uint32_t* anon8 = (uint32_t*)((anon9 << 2) + 6300992);
	*anon8 = anon6;
	uint32_t phi11 = anon3;
	uint64_t phi12 = 0;
	uint64_t anon13 = (uint64_t)&alloca1;
	phi10 = anon13;
	uint32_t dispatch14 = 0;
	do
	{
		uint32_t phi17;
		uint32_t phi_in18;
		uint32_t phi20;
		uint32_t phi21;
		uint64_t phi_in22;
		while (true)
		{
			uint32_t phi_in15;
			uint32_t phi_in16;
			uint32_t phi_in23;
			uint64_t phi24;
			uint64_t phi25;
			uint32_t phi26;
			uint64_t phi_in27;
			uint64_t phi_in28;
			uint32_t phi29;
			uint32_t phi30;
			uint32_t phi31;
			uint32_t phi32;
			uint64_t phi33;
			uint64_t phi34;
			uint32_t phi35;
			uint64_t phi_in36;
			uint32_t phi39;
			uint32_t phi40;
			uint32_t phi41;
			uint32_t phi_in42;
			uint32_t phi_in43;
			uint32_t phi44;
			uint32_t phi45;
			uint32_t phi46;
			uint32_t phi47;
			uint64_t phi48;
			uint64_t phi_in49;
			uint64_t phi_in50;
			uint32_t phi51;
			uint32_t phi52;
			uint32_t phi_in53;
			uint32_t phi_in54;
			uint32_t phi55;
			uint32_t phi56;
			uint32_t phi57;
			uint64_t phi_in58;
			uint64_t phi59;
			uint32_t phi60;
			uint32_t phi61;
			uint32_t phi62;
			uint32_t phi63;
			uint64_t phi64;
			uint32_t phi65;
			uint64_t phi66;
			uint64_t phi67;
			uint32_t phi_in70;
			uint32_t phi71;
			uint32_t phi_in72;
			uint32_t phi73;
			uint64_t phi_in74;
			uint64_t phi_in75;
			uint64_t phi_in76;
			uint64_t phi77;
			uint32_t phi_in78;
			uint32_t phi79;
			uint32_t phi80;
			uint32_t phi_in81;
			uint32_t phi82;
			uint32_t phi_in83;
			uint32_t phi84;
			uint32_t phi_in85;
			uint64_t phi86;
			uint64_t phi87;
			uint64_t phi88;
			uint32_t phi_in89;
			uint32_t phi90;
			uint32_t phi91;
			uint32_t phi92;
			uint32_t phi_in93;
			uint32_t phi94;
			uint32_t phi_in95;
			uint64_t phi96;
			uint64_t phi97;
			uint32_t phi_in100;
			uint32_t phi_in101;
			uint32_t phi102;
			uint32_t phi_in104;
			uint32_t phi105;
			uint32_t phi106;
			uint32_t phi_in107;
			uint32_t phi108;
			uint32_t phi_in109;
			uint32_t phi_in110;
			uint32_t phi_in111;
			uint32_t phi112;
			uint32_t phi113;
			uint32_t phi114;
			uint32_t phi115;
			uint32_t phi116;
			uint64_t phi117;
			uint32_t phi118;
			uint32_t phi119;
			uint32_t phi120;
			uint64_t phi_in121;
			uint64_t phi_in122;
			uint64_t phi_in123;
			uint32_t phi_in124;
			uint32_t phi_in125;
			uint32_t phi_in126;
			uint32_t phi_in127;
			uint32_t phi128;
			uint32_t phi_in129;
			uint32_t phi130;
			uint32_t phi_in131;
			uint32_t phi_in132;
			uint32_t phi_in133;
			uint32_t phi_in134;
			uint32_t phi_in135;
			uint64_t phi_in136;
			uint32_t phi_in137;
			uint32_t phi138;
			uint32_t phi139;
			uint64_t phi140;
			uint64_t phi141;
			uint64_t phi142;
			uint64_t phi143;
			uint32_t phi144;
			uint32_t phi145;
			uint32_t phi146;
			uint32_t phi147;
			uint32_t phi_in148;
			uint32_t phi149;
			uint32_t phi150;
			uint64_t phi151;
			uint32_t phi152;
			uint32_t phi153;
			uint32_t phi_in154;
			uint32_t phi155;
			uint32_t phi156;
			uint32_t phi157;
			uint32_t phi158;
			uint32_t phi159;
			uint32_t phi160;
			uint64_t phi161;
			uint32_t phi162;
			uint32_t phi163;
			uint32_t phi164;
			uint64_t phi165;
			uint64_t phi166;
			uint64_t phi_in169;
			uint32_t phi170;
			uint32_t phi171;
			uint32_t phi_in172;
			uint32_t phi173;
			uint32_t phi_in174;
			uint32_t phi175;
			uint32_t phi176;
			uint32_t phi_in177;
			uint32_t phi178;
			uint32_t phi179;
			uint32_t phi180;
			uint32_t phi181;
			uint32_t phi_in182;
			uint64_t phi183;
			uint32_t phi184;
			uint64_t phi185;
			uint64_t phi_in186;
			uint32_t phi187;
			uint64_t phi_in188;
			uint64_t phi_in189;
			uint64_t phi190;
			uint32_t phi_in191;
			uint32_t phi192;
			uint32_t phi_in193;
			uint32_t phi194;
			uint32_t phi195;
			uint32_t phi196;
			uint32_t phi197;
			uint32_t phi_in198;
			uint32_t phi_in199;
			uint64_t phi200;
			uint32_t phi201;
			uint32_t phi_in202;
			uint64_t phi203;
			uint32_t phi204;
			uint32_t phi_in205;
			uint32_t phi206;
			uint32_t phi207;
			uint32_t phi208;
			uint32_t phi209;
			uint64_t phi210;
			uint64_t phi211;
			uint32_t phi212;
			uint64_t phi213;
			uint64_t phi_in216;
			uint32_t phi217;
			uint32_t phi_in218;
			uint32_t phi219;
			uint32_t phi220;
			uint32_t phi221;
			uint32_t phi_in222;
			uint32_t phi223;
			uint32_t phi224;
			uint32_t phi225;
			uint32_t phi226;
			uint32_t phi227;
			uint32_t* anon228;
			int64_t anon229;
			int64_t anon230;
			int64_t anon231;
			uint64_t phi232;
			uint32_t phi_in233;
			uint32_t phi_in234;
			uint32_t phi235;
			uint32_t phi236;
			uint64_t phi237;
			uint32_t phi238;
			uint32_t phi239;
			uint32_t phi240;
			uint64_t phi241;
			uint64_t phi242;
			uint32_t phi_in371;
			uint32_t phi_in372;
			uint64_t phi_in373;
			if (dispatch14 == 0)
			{
				phi_in15 = phi_in4;
				phi_in16 = phi5;
				phi17 = *anon8;
				phi_in18 = phi11;
				*(uint64_t*)(phi10 + 48) = phi12;
				phi19 = *(uint64_t*)(phi10 + 48);
				phi20 = phi_in15;
				phi21 = phi_in16;
				phi_in22 = phi7 & 0xffffffff;
				phi10 = phi10;
				if (phi_in18 < *anon8)
				{
					*anon8 = phi17;
					*(uint64_t*)(phi10 + 16) = anon9 * 12;
					*(uint32_t*)(phi10 + 40) = (uint32_t)phi7 + 5;
					phi_in23 = phi_in16;
					phi24 = (__zext uint64_t)phi_in15;
					*(uint32_t*)(phi25 + 68) = phi_in16;
					phi26 = phi_in15;
					phi_in27 = 0;
					phi_in28 = phi10;
				}
				else 
				{
					break;
				}
			}
			if (dispatch14 == 1 || dispatch14 == 0 && phi_in18 < *anon8)
			{
				phi29 = phi26;
				phi30 = phi_in16;
				*(uint64_t*)(phi25 + 56) = phi_in27;
				phi25 = phi_in28;
				phi31 = phi_in23;
				phi32 = phi_in15;
				phi33 = *(uint64_t*)(phi25 + 56);
				phi34 = phi24 & 0xffffffff;
				phi35 = phi29;
				phi_in16 = phi30;
				phi_in36 = phi25;
			}
			int64_t anon38 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi25 + 56) + *(uint64_t*)(phi25 + 16) + 6301632);
			uint32_t* anon37 = (uint32_t*)((anon38 << 2) + 6300992);
			if (phi30 < *anon37 && (dispatch14 == 1 || dispatch14 == 0 && phi_in18 < *anon8))
			{
				*anon37 = *(uint32_t*)(phi25 + 4);
				*(uint64_t*)(phi25 + 32) = anon38 * 12;
				*(uint32_t*)(phi25 + 44) = (uint32_t)phi24 + 6;
				phi39 = phi29;
				phi40 = phi29;
				phi41 = phi29;
				phi_in42 = phi29;
				phi_in43 = phi29;
				phi44 = phi29;
				phi45 = phi29;
				phi46 = phi29;
				phi47 = phi29;
				phi48 = (__zext uint64_t)phi29;
				phi_in49 = 0;
				phi_in50 = phi25;
			}
			if (dispatch14 == 2 || dispatch14 == 1 && phi30 < *anon37 || dispatch14 == 0 && phi_in18 < *anon8 && phi30 < *anon37)
			{
				phi51 = phi39;
				phi52 = phi29;
				phi_in53 = phi40;
				phi_in54 = phi41;
				phi55 = phi44;
				phi56 = phi45;
				phi57 = phi47;
				phi_in58 = phi48;
				*(uint64_t*)(phi59 + 72) = phi_in49;
				phi59 = phi_in50;
				phi60 = phi51;
				phi61 = phi52;
				phi62 = phi_in53;
				phi41 = phi_in54;
				phi63 = phi_in42;
				phi35 = phi_in43;
				phi64 = *(uint64_t*)(phi59 + 72);
				phi65 = phi55;
				phi45 = phi56;
				phi47 = phi57;
				phi66 = phi_in58 & 0xffffffff;
				phi67 = phi59;
			}
			int64_t anon69 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi59 + 72) + *(uint64_t*)(phi59 + 32) + 6301632);
			uint32_t* anon68 = (uint32_t*)((anon69 << 2) + 6300992);
			if (*(uint32_t*)(phi59 + 4) < *anon68 && (dispatch14 == 2 || dispatch14 == 1 && phi30 < *anon37 || dispatch14 == 0 && phi_in18 < *anon8 && phi30 < *anon37))
			{
				*anon68 = *(uint32_t*)(phi59 + 24);
				*(uint32_t*)(phi59 + 64) = (uint32_t)phi_in58 + 7;
				phi_in70 = phi_in53;
				phi71 = phi_in54;
				phi_in72 = phi_in42;
				phi73 = phi_in43;
				phi_in74 = phi59;
				phi_in75 = 0;
				phi_in76 = anon69 * 12;
				phi77 = phi_in58;
			}
			if (dispatch14 == 3 || dispatch14 == 2 && *(uint32_t*)(phi59 + 4) < *anon68 || dispatch14 == 1 && phi30 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon68 || dispatch14 == 0 && phi_in18 < *anon8 && phi30 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon68)
			{
				phi_in78 = phi51;
				phi79 = phi52;
				phi80 = phi71;
				phi_in81 = phi73;
				phi82 = phi55;
				phi_in83 = phi56;
				phi84 = phi46;
				phi_in85 = phi57;
				phi86 = phi_in74;
				phi87 = phi_in75;
				phi88 = phi_in76;
				phi_in76 = phi88;
				phi60 = phi_in78;
				phi_in89 = phi_in70;
				phi90 = phi80;
				phi91 = phi_in72;
				phi92 = phi_in81;
				phi65 = phi82;
				phi_in93 = phi_in83;
				phi94 = phi84;
				phi_in95 = phi_in85;
				phi96 = phi86;
				phi97 = phi77 & 0xffffffff;
			}
			int64_t anon99 = (__sext int64_t)*(uint32_t*)(phi87 + phi88 + 6301632);
			uint32_t* anon98 = (uint32_t*)((anon99 << 2) + 6300992);
			if (*(uint32_t*)(phi86 + 24) < *anon98 && (dispatch14 == 3 || dispatch14 == 2 && *(uint32_t*)(phi59 + 4) < *anon68 || dispatch14 == 1 && phi30 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon68 || dispatch14 == 0 && phi_in18 < *anon8 && phi30 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon68))
			{
				*anon98 = *(uint32_t*)(phi86 + 28);
				phi_in100 = phi79;
				phi_in101 = phi_in70;
				uint32_t anon103 = (uint32_t)phi77 + 8;
				phi102 = anon103;
				phi_in104 = anon103;
				phi105 = phi_in72;
				phi106 = anon103;
				phi_in107 = anon103;
				phi108 = anon103;
				phi_in109 = anon103;
				phi_in110 = anon103;
				phi_in111 = phi_in83;
				phi112 = anon103;
				phi113 = anon103;
				phi114 = anon103;
				phi115 = anon103;
				phi116 = phi_in85;
				phi117 = phi88;
				phi118 = anon103;
				phi119 = anon103;
				phi120 = anon103;
				phi_in121 = phi86;
				phi_in122 = 0;
				phi_in123 = anon99 * 12;
			}
			if (dispatch14 == 4 || dispatch14 == 3 && *(uint32_t*)(phi86 + 24) < *anon98 || dispatch14 == 2 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 || dispatch14 == 1 && phi30 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 || dispatch14 == 0 && phi_in18 < *anon8 && phi30 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98)
			{
				phi_in124 = phi102;
				phi_in125 = phi80;
				phi_in126 = phi105;
				phi_in127 = phi106;
				phi128 = phi82;
				phi_in129 = phi108;
				phi130 = phi_in109;
				phi_in131 = phi113;
				phi_in132 = phi84;
				phi_in133 = phi114;
				phi_in134 = phi115;
				phi_in135 = phi116;
				phi_in136 = phi117;
				phi_in137 = phi118;
				phi138 = phi119;
				phi139 = phi120;
				phi140 = phi_in121;
				phi141 = phi_in122;
				phi142 = phi_in123;
				phi143 = phi142;
				phi144 = phi_in78;
				phi145 = phi_in100;
				phi146 = phi_in101;
				phi102 = phi_in124;
				phi147 = phi_in125;
				phi_in148 = phi_in104;
				phi149 = phi_in126;
				phi150 = phi_in81;
				phi151 = phi141;
				phi152 = phi_in127;
				phi82 = phi128;
				phi153 = phi_in129;
				phi_in154 = phi_in110;
				phi155 = phi_in111;
				phi156 = phi112;
				phi157 = phi_in131;
				phi158 = phi_in132;
				phi114 = phi_in133;
				phi159 = phi_in134;
				phi160 = phi_in135;
				phi161 = phi_in136;
				phi162 = phi_in137;
				phi163 = phi138;
				phi164 = phi139;
				phi165 = phi140;
				phi166 = phi77;
			}
			int64_t anon168 = (__sext int64_t)*(uint32_t*)(phi141 + phi142 + 6301632);
			uint32_t* anon167 = (uint32_t*)((anon168 << 2) + 6300992);
			if (*(uint32_t*)(phi140 + 28) < *anon167 && (dispatch14 == 4 || dispatch14 == 3 && *(uint32_t*)(phi86 + 24) < *anon98 || dispatch14 == 2 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 || dispatch14 == 1 && phi30 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 || dispatch14 == 0 && phi_in18 < *anon8 && phi30 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98))
			{
				*anon167 = *(uint32_t*)(phi140 + 40);
				*(uint32_t*)(phi140 + 120) = (uint32_t)phi77 + 9;
				phi_in169 = 0;
				phi170 = phi_in78;
				phi171 = phi_in100;
				phi_in172 = phi_in101;
				phi173 = phi_in125;
				phi_in174 = phi_in104;
				phi175 = phi_in126;
				phi176 = phi_in81;
				phi_in177 = phi_in127;
				phi_in109 = phi130;
				phi178 = phi_in111;
				phi179 = phi_in131;
				phi180 = phi_in132;
				phi181 = phi_in133;
				phi_in182 = phi_in134;
				phi183 = phi141;
				phi184 = phi_in135;
				phi185 = phi_in136;
				phi_in186 = phi142;
				phi187 = phi_in137;
				phi_in188 = phi140;
				phi_in189 = phi77 & 0xffffffff;
			}
			if (dispatch14 == 5 || dispatch14 == 4 && *(uint32_t*)(phi140 + 28) < *anon167 || dispatch14 == 3 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 || dispatch14 == 2 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 || dispatch14 == 1 && phi30 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 || dispatch14 == 0 && phi_in18 < *anon8 && phi30 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167)
			{
				phi190 = phi_in169;
				phi_in191 = phi170;
				phi192 = phi173;
				phi149 = phi175;
				phi_in193 = phi176;
				phi194 = phi_in107;
				phi195 = phi128;
				phi196 = phi_in129;
				phi197 = phi_in110;
				phi_in198 = phi112;
				phi_in199 = phi180;
				*(uint64_t*)(phi200 + 88) = phi183;
				phi201 = phi184;
				phi_in202 = phi139;
				phi203 = phi_in188;
				phi170 = phi_in191;
				phi204 = phi_in172;
				phi_in205 = phi_in124;
				phi206 = phi_in193;
				phi128 = phi195;
				phi207 = phi178;
				phi112 = phi_in198;
				phi208 = phi_in199;
				phi209 = phi181;
				phi210 = *(uint64_t*)(phi200 + 88);
				phi211 = phi_in186;
				phi212 = phi_in202;
				phi213 = phi203;
			}
			int64_t anon215 = (__sext int64_t)*(uint32_t*)(phi190 + anon168 * 12 + 6301632);
			uint32_t* anon214 = (uint32_t*)((anon215 << 2) + 6300992);
			if (*(uint32_t*)(phi203 + 40) < *anon214 && (dispatch14 == 5 || dispatch14 == 4 && *(uint32_t*)(phi140 + 28) < *anon167 || dispatch14 == 3 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 || dispatch14 == 2 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 || dispatch14 == 1 && phi30 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 || dispatch14 == 0 && phi_in18 < *anon8 && phi30 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167))
			{
				*anon214 = *(uint32_t*)(phi203 + 44);
				phi_in216 = 0;
				phi217 = phi_in191;
				phi_in218 = phi171;
				phi219 = phi_in172;
				phi220 = phi_in124;
				phi221 = phi192;
				phi_in222 = phi_in174;
				phi223 = phi149;
				phi224 = phi_in177;
				phi225 = phi194;
				phi226 = phi196;
				phi227 = phi_in109;
				anon231 = (__sext int64_t)*(uint32_t*)(phi232 + anon215 * 12 + 6301632);
				anon230 = anon231 * 12;
				anon229 = (__sext int64_t)*(uint32_t*)(anon230 + 6301636);
				anon228 = (uint32_t*)((anon229 << 2) + 6300992);
				*anon228 = phi197;
				phi_in233 = phi_in198;
				phi_in234 = phi179;
				phi235 = phi_in199;
				phi236 = phi_in182;
				phi184 = phi201;
				phi237 = phi185;
				*(uint64_t*)(phi200 + 112) = phi_in186;
				phi238 = phi187;
				phi239 = phi138;
				phi240 = phi_in202;
				phi241 = phi203;
				phi242 = phi_in189;
			}
			if (dispatch14 == 6 || dispatch14 == 5 && *(uint32_t*)(phi203 + 40) < *anon214 || dispatch14 == 4 && *(uint32_t*)(phi140 + 28) < *anon167 && *(uint32_t*)(phi203 + 40) < *anon214 || dispatch14 == 3 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 && *(uint32_t*)(phi203 + 40) < *anon214 || dispatch14 == 2 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 && *(uint32_t*)(phi203 + 40) < *anon214 || dispatch14 == 1 && phi30 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 && *(uint32_t*)(phi203 + 40) < *anon214 || dispatch14 == 0 && phi_in18 < *anon8 && phi30 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 && *(uint32_t*)(phi203 + 40) < *anon214)
			{
				phi232 = phi_in216;
				uint32_t phi_in243 = phi217;
				uint32_t phi244 = phi_in218;
				uint32_t phi_in245 = phi219;
				uint32_t phi246 = phi220;
				uint32_t phi247 = phi221;
				uint32_t phi248 = phi223;
				uint32_t phi249 = phi224;
				uint32_t phi_in250 = phi225;
				*(uint32_t*)(phi200 + 96) = phi195;
				*(uint32_t*)(phi200 + 124) = phi226;
				uint32_t phi251 = phi227;
				uint32_t phi_in252 = phi178;
				uint32_t phi_in253 = phi235;
				uint32_t phi_in254 = phi181;
				uint32_t phi_in255 = phi236;
				uint64_t phi256 = *(uint64_t*)(phi200 + 88);
				uint32_t phi_in257 = phi184;
				*(uint64_t*)(phi200 + 104) = phi237;
				uint32_t phi_in258 = phi238;
				uint32_t phi_in259 = phi239;
				phi200 = phi241;
				uint64_t phi_in260 = phi242;
				phi_in191 = phi_in243;
				uint32_t phi_in261 = phi244;
				phi219 = phi_in245;
				uint32_t phi262 = phi246;
				uint32_t phi263 = phi247;
				phi_in174 = phi_in222;
				uint32_t phi264 = phi248;
				uint32_t phi265 = phi_in193;
				phi_in177 = phi249;
				uint32_t phi266 = phi_in250;
				uint32_t phi267 = *(uint32_t*)(phi200 + 96);
				phi226 = *(uint32_t*)(phi200 + 124);
				phi_in109 = phi251;
				phi_in110 = *anon228;
				uint32_t phi268 = phi_in252;
				uint32_t phi269 = phi_in233;
				uint32_t phi270 = phi_in234;
				phi235 = phi_in253;
				phi181 = phi_in254;
				phi_in182 = phi_in255;
				uint64_t phi271 = phi256;
				uint32_t phi272 = phi_in257;
				phi237 = *(uint64_t*)(phi200 + 104);
				uint64_t phi273 = *(uint64_t*)(phi200 + 112);
				uint32_t phi274 = phi_in258;
				phi138 = phi_in259;
				uint32_t phi275 = phi240;
				uint64_t phi276 = phi200;
				uint64_t phi277 = phi_in260;
				uint32_t* anon278 = (uint32_t*)((anon231 << 2) + 6300992);
				if (*(uint32_t*)(phi200 + 44) < *anon278)
				{
					*anon278 = *(uint32_t*)(phi200 + 64);
					uint32_t phi279 = phi_in243;
					uint32_t phi_in280 = phi_in245;
					uint32_t phi281 = phi247;
					uint32_t phi282 = phi_in222;
					uint32_t phi283 = phi_in193;
					uint32_t phi284 = phi249;
					phi266 = phi_in250;
					uint32_t phi_in285 = *(uint32_t*)(phi200 + 96);
					uint32_t phi286 = *(uint32_t*)(phi200 + 124);
					uint32_t phi287 = *anon228;
					uint32_t phi_in288 = phi_in252;
					uint32_t phi289 = phi_in233;
					uint32_t phi290 = phi_in234;
					uint32_t phi291 = phi_in253;
					uint32_t phi_in292 = phi_in254;
					uint32_t phi_in293 = phi_in255;
					uint32_t phi294 = phi_in257;
					uint64_t phi295 = *(uint64_t*)(phi200 + 104);
					uint64_t phi296 = *(uint64_t*)(phi200 + 112);
					uint32_t phi_in297 = phi_in258;
					uint32_t phi298 = phi_in259;
					uint64_t phi299 = phi_in260;
					if (*(uint32_t*)(phi200 + 64) < *anon228)
					{
						uint32_t phi300 = phi244;
						uint32_t phi301 = phi_in245;
						uint32_t phi_in302 = phi246;
						uint32_t phi303 = phi_in222;
						*(uint32_t*)(phi304 + 96) = phi248;
						uint32_t phi305 = phi_in193;
						uint64_t phi304 = phi200;
						uint32_t phi306 = phi_in250;
						uint64_t phi307 = anon229;
						uint32_t phi_in308 = *(uint32_t*)(phi200 + 96);
						uint32_t phi309 = phi_in252;
						uint32_t phi310 = phi_in253;
						uint64_t phi311 = phi256;
						uint32_t phi312 = phi_in257;
						*(uint64_t*)(phi304 + 104) = *(uint64_t*)(phi200 + 104);
						uint64_t phi313 = *(uint64_t*)(phi200 + 112);
						uint64_t phi314 = phi_in260;
						if (phi251 < *anon228)
						{
							*(uint64_t*)(phi200 + 88) = phi256;
							*(uint64_t*)(phi200 + 80) = anon229;
							w(4197873, anon13, (__sext int64_t)*anon228, (__zext uint64_t)*anon228);
							phi_in243 = *(uint32_t*)(arg1 - 96);
							phi300 = *(uint32_t*)(arg1 - 96);
							phi301 = *(uint32_t*)(arg1 - 96);
							phi_in302 = *(uint32_t*)(arg1 - 68);
							phi247 = *(uint32_t*)(arg1 - 96);
							phi303 = *(uint32_t*)(arg1 - 68);
							*(uint32_t*)(phi304 + 96) = *(uint32_t*)(arg1 - 96);
							phi305 = *(uint32_t*)(arg1 - 96);
							phi249 = *(uint32_t*)(arg1 - 68);
							phi304 = anon13;
							phi306 = *(uint32_t*)(arg1 - 68);
							phi307 = *(uint64_t*)(arg1 - 112);
							phi_in308 = *(uint32_t*)(arg1 - 96);
							phi309 = *(uint32_t*)(arg1 - 96);
							phi310 = *(uint32_t*)(arg1 - 96);
							phi311 = *(uint64_t*)(arg1 - 104);
							phi312 = *(uint32_t*)(arg1 - 96);
							*(uint64_t*)(phi304 + 104) = *(uint64_t*)(arg1 - 88);
							phi313 = *(uint64_t*)(arg1 - 80);
							phi314 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
						}
						uint32_t phi_in315 = phi300;
						uint32_t phi_in316 = phi301;
						uint32_t phi_in317 = phi247;
						uint32_t phi_in318 = phi303;
						uint32_t phi319 = *(uint32_t*)(phi304 + 96);
						uint32_t phi320 = phi305;
						*(uint32_t*)(phi304 + 124) = phi249;
						uint64_t phi321 = phi307;
						uint32_t phi_in322 = phi310;
						*(uint64_t*)(phi304 + 88) = phi311;
						uint32_t phi_in323 = phi312;
						*(uint64_t*)(phi304 + 112) = phi313;
						uint64_t phi_in324 = phi314;
						phi279 = phi_in243;
						uint32_t phi325 = phi_in315;
						uint32_t phi326 = phi_in316;
						phi246 = phi_in302;
						*(uint32_t*)(phi200 + 88) = phi_in317;
						uint32_t phi327 = phi_in318;
						phi_in285 = phi_in308;
						uint32_t phi328 = phi_in322;
						*(uint64_t*)(phi200 + 80) = *(uint64_t*)(phi304 + 88);
						uint32_t phi329 = phi_in323;
						uint64_t phi330 = *(uint64_t*)(phi304 + 104);
						*(uint64_t*)(phi200 + 104) = *(uint64_t*)(phi304 + 112);
						uint64_t phi331 = phi_in324;
						int64_t anon332 = (__sext int64_t)*(uint32_t*)(phi321 * 12 + 6301636);
						if (phi306 < *(uint32_t*)((anon332 << 2) + 6300992))
						{
							*(uint32_t*)(phi304 + 96) = phi319;
							*(uint64_t*)(phi304 + 80) = phi321;
							w(4197793, anon13, anon332, (__zext uint64_t)*(uint32_t*)(phi304 + 120));
							phi279 = *(uint32_t*)(arg1 - 96);
							phi325 = *(uint32_t*)(arg1 - 96);
							phi326 = *(uint32_t*)(arg1 - 96);
							phi246 = alloca1.field14;
							*(uint32_t*)(phi200 + 88) = *(uint32_t*)(arg1 - 96);
							phi304 = anon13;
							phi327 = alloca1.field14;
							phi319 = *(uint32_t*)(arg1 - 96);
							phi320 = *(uint32_t*)(arg1 - 96);
							phi321 = *(uint64_t*)(arg1 - 112);
							phi_in285 = *(uint32_t*)(arg1 - 96);
							phi309 = *(uint32_t*)(arg1 - 96);
							phi328 = *(uint32_t*)(arg1 - 96);
							*(uint64_t*)(phi200 + 80) = *(uint64_t*)(arg1 - 104);
							phi329 = *(uint32_t*)(arg1 - 96);
							phi330 = *(uint64_t*)(arg1 - 88);
							*(uint64_t*)(phi200 + 104) = *(uint64_t*)(arg1 - 80);
							phi331 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
						}
						uint32_t phi_in333 = phi325;
						uint32_t phi_in334 = phi326;
						phi200 = phi304;
						*(uint32_t*)(phi200 + 112) = phi327;
						uint32_t phi_in335 = phi319;
						uint32_t phi_in336 = phi320;
						uint32_t phi_in337 = phi309;
						uint32_t phi_in338 = phi328;
						phi294 = phi329;
						*(uint64_t*)(phi200 + 96) = phi330;
						phi299 = phi331;
						phi244 = phi_in333;
						phi_in280 = phi_in334;
						phi281 = *(uint32_t*)(phi200 + 88);
						phi282 = *(uint32_t*)(phi200 + 112);
						phi248 = phi_in335;
						phi283 = phi_in336;
						phi284 = *(uint32_t*)(phi200 + 112);
						phi266 = *(uint32_t*)(phi200 + 112);
						phi286 = *(uint32_t*)(phi200 + 112);
						phi251 = *(uint32_t*)(phi200 + 112);
						phi287 = *(uint32_t*)(phi200 + 112);
						phi_in288 = phi_in337;
						phi289 = *(uint32_t*)(phi200 + 112);
						phi290 = *(uint32_t*)(phi200 + 112);
						phi291 = phi_in338;
						phi_in292 = *(uint32_t*)(phi200 + 112);
						phi_in293 = *(uint32_t*)(phi200 + 112);
						phi256 = *(uint64_t*)(phi200 + 80);
						phi295 = *(uint64_t*)(phi200 + 96);
						phi296 = *(uint64_t*)(phi200 + 104);
						phi_in297 = *(uint32_t*)(phi200 + 112);
						phi298 = *(uint32_t*)(phi200 + 112);
						phi240 = *(uint32_t*)(phi200 + 112);
						int64_t anon339 = (__sext int64_t)*(uint32_t*)(phi321 * 12 + 6301640);
						if (*(uint32_t*)(phi200 + 112) < *(uint32_t*)((anon339 << 2) + 6300992))
						{
							w(4197395, anon13, anon339, (__zext uint64_t)*(uint32_t*)(phi200 + 120));
							phi279 = *(uint32_t*)(arg1 - 104);
							phi244 = *(uint32_t*)(arg1 - 104);
							phi_in280 = *(uint32_t*)(arg1 - 104);
							phi246 = *(uint32_t*)(arg1 - 80);
							phi200 = anon13;
							phi281 = *(uint32_t*)(arg1 - 104);
							phi282 = *(uint32_t*)(arg1 - 80);
							phi248 = *(uint32_t*)(arg1 - 104);
							phi283 = *(uint32_t*)(arg1 - 104);
							phi284 = *(uint32_t*)(arg1 - 80);
							phi266 = *(uint32_t*)(arg1 - 80);
							phi_in285 = *(uint32_t*)(arg1 - 104);
							phi286 = *(uint32_t*)(arg1 - 80);
							phi251 = *(uint32_t*)(arg1 - 80);
							phi287 = *(uint32_t*)(arg1 - 80);
							phi_in288 = *(uint32_t*)(arg1 - 104);
							phi289 = *(uint32_t*)(arg1 - 80);
							phi290 = *(uint32_t*)(arg1 - 80);
							phi291 = *(uint32_t*)(arg1 - 104);
							phi_in292 = *(uint32_t*)(arg1 - 80);
							phi_in293 = *(uint32_t*)(arg1 - 80);
							phi256 = *(uint64_t*)(arg1 - 112);
							phi294 = *(uint32_t*)(arg1 - 104);
							phi295 = *(uint64_t*)(arg1 - 96);
							phi296 = *(uint64_t*)(arg1 - 88);
							phi_in297 = *(uint32_t*)(arg1 - 80);
							phi298 = *(uint32_t*)(arg1 - 80);
							phi240 = *(uint32_t*)(arg1 - 80);
							phi299 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
						}
					}
					uint32_t phi340 = phi279;
					*(uint32_t*)(phi276 + 88) = phi244;
					*(uint32_t*)(phi276 + 112) = phi246;
					phi276 = phi200;
					uint32_t phi341 = phi281;
					uint32_t phi_in342 = phi282;
					uint32_t phi343 = phi248;
					phi265 = phi283;
					phi_in177 = phi284;
					uint32_t phi_in344 = phi286;
					uint32_t phi_in345 = phi251;
					uint32_t phi_in346 = phi287;
					uint32_t phi_in347 = phi289;
					phi270 = phi290;
					uint32_t phi_in348 = phi291;
					*(uint64_t*)(phi276 + 80) = phi256;
					uint32_t phi_in349 = phi294;
					*(uint64_t*)(phi276 + 96) = phi295;
					*(uint64_t*)(phi276 + 104) = phi296;
					phi138 = phi298;
					phi275 = phi240;
					uint64_t phi_in350 = phi299;
					phi_in191 = phi340;
					phi_in261 = *(uint32_t*)(phi276 + 88);
					phi219 = phi_in280;
					phi262 = *(uint32_t*)(phi276 + 112);
					phi263 = phi341;
					phi_in174 = phi_in342;
					phi264 = phi343;
					phi267 = phi_in285;
					phi226 = phi_in344;
					phi_in109 = phi_in345;
					phi_in110 = phi_in346;
					phi268 = phi_in288;
					phi269 = phi_in347;
					phi235 = phi_in348;
					phi181 = phi_in292;
					phi_in182 = phi_in293;
					phi271 = *(uint64_t*)(phi276 + 80);
					phi272 = phi_in349;
					phi237 = *(uint64_t*)(phi276 + 96);
					phi273 = *(uint64_t*)(phi276 + 104);
					phi274 = phi_in297;
					phi277 = phi_in350;
					int64_t anon352 = (__sext int64_t)*(uint32_t*)(anon230 + 6301640);
					uint32_t* anon351 = (uint32_t*)((anon352 << 2) + 6300992);
					if (*(uint32_t*)(phi276 + 64) < *anon351)
					{
						*anon351 = *(uint32_t*)(phi276 + 112);
						uint32_t phi353 = *(uint32_t*)(phi276 + 88);
						uint32_t phi354 = phi_in280;
						uint32_t phi355 = *(uint32_t*)(phi276 + 112);
						phi283 = phi265;
						uint32_t phi356 = phi_in285;
						uint32_t phi357 = phi_in288;
						*(uint64_t*)(phi276 + 80) = *(uint64_t*)(phi276 + 80);
						uint32_t phi358 = phi_in349;
						uint64_t phi359 = *(uint64_t*)(phi276 + 96);
						*(uint64_t*)(phi276 + 104) = *(uint64_t*)(phi276 + 104);
						uint64_t phi360 = phi276;
						uint64_t phi_in361 = phi_in350;
						int64_t anon363 = anon352 * 12;
						int64_t anon362 = (__sext int64_t)*(uint32_t*)(anon363 + 6301636);
						if (*(uint32_t*)(phi276 + 112) < *(uint32_t*)((anon362 << 2) + 6300992))
						{
							w(4197948, anon13, anon362, (__zext uint64_t)*(uint32_t*)(phi276 + 120));
							phi340 = *(uint32_t*)(arg1 - 104);
							phi353 = *(uint32_t*)(arg1 - 104);
							phi354 = *(uint32_t*)(arg1 - 104);
							phi355 = *(uint32_t*)(arg1 - 80);
							phi341 = *(uint32_t*)(arg1 - 104);
							phi343 = *(uint32_t*)(arg1 - 104);
							phi283 = *(uint32_t*)(arg1 - 104);
							phi356 = *(uint32_t*)(arg1 - 104);
							phi357 = *(uint32_t*)(arg1 - 104);
							phi_in348 = *(uint32_t*)(arg1 - 104);
							*(uint64_t*)(phi276 + 80) = *(uint64_t*)(arg1 - 112);
							phi358 = *(uint32_t*)(arg1 - 104);
							phi359 = *(uint64_t*)(arg1 - 96);
							*(uint64_t*)(phi276 + 104) = *(uint64_t*)(arg1 - 88);
							phi360 = anon13;
							phi_in361 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
						}
						*(uint32_t*)(phi276 + 88) = phi340;
						uint32_t phi_in364 = phi353;
						uint32_t phi_in365 = phi354;
						*(uint32_t*)(phi276 + 112) = phi355;
						uint32_t phi_in366 = phi341;
						uint32_t phi_in367 = phi343;
						phi265 = phi283;
						uint32_t phi_in368 = phi356;
						uint32_t phi_in369 = phi357;
						phi272 = phi358;
						*(uint64_t*)(phi276 + 96) = phi359;
						phi273 = *(uint64_t*)(phi276 + 104);
						phi276 = phi360;
						phi_in191 = *(uint32_t*)(phi276 + 88);
						phi_in261 = phi_in364;
						phi219 = phi_in365;
						phi262 = *(uint32_t*)(phi276 + 112);
						phi263 = phi_in366;
						phi_in174 = *(uint32_t*)(phi276 + 112);
						phi264 = phi_in367;
						phi_in177 = *(uint32_t*)(phi276 + 112);
						phi266 = *(uint32_t*)(phi276 + 112);
						phi267 = phi_in368;
						phi226 = *(uint32_t*)(phi276 + 112);
						phi_in109 = *(uint32_t*)(phi276 + 112);
						phi_in110 = *(uint32_t*)(phi276 + 112);
						phi268 = phi_in369;
						phi269 = *(uint32_t*)(phi276 + 112);
						phi270 = *(uint32_t*)(phi276 + 112);
						phi235 = phi_in348;
						phi181 = *(uint32_t*)(phi276 + 112);
						phi_in182 = *(uint32_t*)(phi276 + 112);
						phi271 = *(uint64_t*)(phi276 + 80);
						phi237 = *(uint64_t*)(phi276 + 96);
						phi274 = *(uint32_t*)(phi276 + 112);
						phi138 = *(uint32_t*)(phi276 + 112);
						phi275 = *(uint32_t*)(phi276 + 112);
						phi277 = phi_in361;
						int64_t anon370 = (__sext int64_t)*(uint32_t*)(anon363 + 6301640);
						if (*(uint32_t*)(phi276 + 112) < *(uint32_t*)((anon370 << 2) + 6300992))
						{
							*(uint64_t*)(phi276 + 104) = phi273;
							w(4197231, anon13, anon370, (__zext uint64_t)*(uint32_t*)(phi276 + 120));
							phi_in191 = alloca1.field8;
							phi_in261 = alloca1.field8;
							phi219 = alloca1.field8;
							phi262 = alloca1.field12;
							phi263 = alloca1.field8;
							phi_in174 = alloca1.field12;
							phi264 = alloca1.field8;
							phi265 = alloca1.field8;
							phi_in177 = alloca1.field12;
							phi266 = alloca1.field12;
							phi267 = alloca1.field8;
							phi226 = alloca1.field12;
							phi_in109 = alloca1.field12;
							phi_in110 = alloca1.field12;
							phi268 = alloca1.field8;
							phi269 = alloca1.field12;
							phi270 = alloca1.field12;
							phi235 = alloca1.field8;
							phi181 = alloca1.field12;
							phi_in182 = alloca1.field12;
							phi271 = alloca1.field7;
							phi272 = alloca1.field8;
							phi237 = alloca1.field10;
							phi273 = alloca1.field11;
							phi274 = alloca1.field12;
							phi138 = alloca1.field12;
							phi275 = alloca1.field12;
							phi276 = anon13;
							phi277 = (__zext uint64_t)alloca1.field8;
						}
					}
				}
				phi171 = phi_in261;
				phi220 = phi262;
				phi221 = phi263;
				phi223 = phi264;
				phi_in193 = phi265;
				phi194 = phi266;
				phi195 = phi267;
				phi178 = phi268;
				phi_in233 = phi269;
				phi_in234 = phi270;
				phi208 = phi235;
				*(uint64_t*)(phi200 + 88) = phi271;
				phi184 = phi272;
				phi185 = phi237;
				*(uint64_t*)(phi200 + 112) = phi273;
				phi238 = phi274;
				phi212 = phi275;
				phi213 = phi276;
				phi242 = phi277;
				phi170 = phi_in191;
				phi204 = phi219;
				phi_in205 = phi220;
				phi192 = phi221;
				phi_in174 = phi_in174;
				phi149 = phi223;
				phi206 = phi_in193;
				phi128 = phi195;
				phi196 = phi226;
				phi_in109 = phi_in109;
				phi197 = phi_in110;
				phi207 = phi178;
				phi112 = phi_in233;
				phi179 = phi_in234;
				phi209 = phi181;
				phi210 = *(uint64_t*)(phi200 + 88);
				phi201 = phi184;
				phi211 = *(uint64_t*)(phi200 + 112);
				phi187 = phi238;
				phi_in189 = phi242;
				phi_in216 = phi232 + 4;
				phi217 = phi_in191;
				phi_in218 = phi171;
				phi_in222 = phi_in174;
				phi224 = phi_in177;
				phi225 = phi194;
				phi227 = phi_in109;
				*anon228 = phi_in110;
				phi235 = phi208;
				phi236 = phi_in182;
				phi237 = phi185;
				phi239 = phi138;
				phi240 = phi212;
				phi241 = phi213;
				dispatch14 = 6;
			}
			if (*(uint32_t*)(phi203 + 40) >= *anon214 && dispatch14 == 5 || *(uint32_t*)(phi203 + 40) >= *anon214 && dispatch14 == 4 && *(uint32_t*)(phi140 + 28) < *anon167 || *(uint32_t*)(phi203 + 40) >= *anon214 && dispatch14 == 3 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 || *(uint32_t*)(phi203 + 40) >= *anon214 && dispatch14 == 2 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 || *(uint32_t*)(phi203 + 40) >= *anon214 && dispatch14 == 1 && phi30 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 || *(uint32_t*)(phi203 + 40) >= *anon214 && dispatch14 == 0 && phi_in18 < *anon8 && phi30 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 || dispatch14 == 6 && phi232 == 8 || dispatch14 == 5 && *(uint32_t*)(phi203 + 40) < *anon214 && phi232 == 8 || dispatch14 == 4 && *(uint32_t*)(phi140 + 28) < *anon167 && *(uint32_t*)(phi203 + 40) < *anon214 && phi232 == 8 || dispatch14 == 3 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 && *(uint32_t*)(phi203 + 40) < *anon214 && phi232 == 8 || dispatch14 == 2 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 && *(uint32_t*)(phi203 + 40) < *anon214 && phi232 == 8 || dispatch14 == 1 && phi30 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 && *(uint32_t*)(phi203 + 40) < *anon214 && phi232 == 8 || dispatch14 == 0 && phi_in18 < *anon8 && phi30 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 && *(uint32_t*)(phi203 + 40) < *anon214 && phi232 == 8)
			{
				phi_in100 = phi171;
				phi_in172 = phi204;
				phi147 = phi192;
				phi176 = phi206;
				phi_in107 = phi194;
				phi_in129 = phi196;
				phi130 = phi_in109;
				phi_in110 = phi197;
				phi178 = phi207;
				phi180 = phi208;
				phi181 = phi209;
				phi183 = phi210;
				phi184 = phi201;
				phi_in186 = phi211;
				phi139 = phi212;
				phi_in188 = phi213;
				phi143 = phi_in186;
				phi144 = phi170;
				phi145 = phi_in100;
				phi146 = phi_in172;
				phi102 = phi_in205;
				phi_in148 = phi_in174;
				phi150 = phi176;
				phi151 = phi183;
				phi152 = phi_in177;
				phi82 = phi128;
				phi153 = phi_in129;
				phi_in154 = phi_in110;
				phi155 = phi178;
				phi156 = phi112;
				phi157 = phi179;
				phi158 = phi180;
				phi114 = phi181;
				phi159 = phi_in182;
				phi160 = phi184;
				phi161 = phi185;
				phi162 = phi187;
				phi163 = phi138;
				phi164 = phi139;
				phi165 = phi_in188;
				phi166 = phi_in189;
				phi_in169 = phi190 + 4;
				phi171 = phi_in100;
				phi_in124 = phi_in205;
				phi173 = phi147;
				phi175 = phi149;
				phi_in109 = phi130;
				dispatch14 = 5;
			}
			if (*(uint32_t*)(phi140 + 28) >= *anon167 && dispatch14 == 4 || *(uint32_t*)(phi140 + 28) >= *anon167 && dispatch14 == 3 && *(uint32_t*)(phi86 + 24) < *anon98 || *(uint32_t*)(phi140 + 28) >= *anon167 && dispatch14 == 2 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 || *(uint32_t*)(phi140 + 28) >= *anon167 && dispatch14 == 1 && phi30 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 || *(uint32_t*)(phi140 + 28) >= *anon167 && dispatch14 == 0 && phi_in18 < *anon8 && phi30 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 || *(uint32_t*)(phi203 + 40) >= *anon214 && dispatch14 == 5 && phi190 == 8 || *(uint32_t*)(phi203 + 40) >= *anon214 && dispatch14 == 4 && *(uint32_t*)(phi140 + 28) < *anon167 && phi190 == 8 || *(uint32_t*)(phi203 + 40) >= *anon214 && dispatch14 == 3 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 && phi190 == 8 || *(uint32_t*)(phi203 + 40) >= *anon214 && dispatch14 == 2 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 && phi190 == 8 || *(uint32_t*)(phi203 + 40) >= *anon214 && dispatch14 == 1 && phi30 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 && phi190 == 8 || *(uint32_t*)(phi203 + 40) >= *anon214 && dispatch14 == 0 && phi_in18 < *anon8 && phi30 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 && phi190 == 8 || dispatch14 == 6 && phi232 == 8 && phi190 == 8 || dispatch14 == 5 && *(uint32_t*)(phi203 + 40) < *anon214 && phi232 == 8 && phi190 == 8 || dispatch14 == 4 && *(uint32_t*)(phi140 + 28) < *anon167 && *(uint32_t*)(phi203 + 40) < *anon214 && phi232 == 8 && phi190 == 8 || dispatch14 == 3 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 && *(uint32_t*)(phi203 + 40) < *anon214 && phi232 == 8 && phi190 == 8 || dispatch14 == 2 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 && *(uint32_t*)(phi203 + 40) < *anon214 && phi232 == 8 && phi190 == 8 || dispatch14 == 1 && phi30 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 && *(uint32_t*)(phi203 + 40) < *anon214 && phi232 == 8 && phi190 == 8 || dispatch14 == 0 && phi_in18 < *anon8 && phi30 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 && *(uint32_t*)(phi203 + 40) < *anon214 && phi232 == 8 && phi190 == 8)
			{
				phi_in123 = phi143;
				phi_in78 = phi144;
				phi_in100 = phi145;
				phi_in101 = phi146;
				phi80 = phi147;
				phi105 = phi149;
				phi_in81 = phi150;
				phi106 = phi152;
				phi108 = phi153;
				phi_in109 = phi130;
				phi_in111 = phi155;
				phi112 = phi156;
				phi113 = phi157;
				phi84 = phi158;
				phi115 = phi159;
				phi116 = phi160;
				phi117 = phi161;
				phi118 = phi162;
				phi119 = phi163;
				phi120 = phi164;
				phi_in121 = phi165;
				phi77 = phi166;
				phi_in76 = phi117;
				phi60 = phi_in78;
				phi79 = phi_in100;
				phi_in89 = phi_in101;
				phi90 = phi80;
				phi91 = phi105;
				phi92 = phi_in81;
				phi65 = phi82;
				phi_in93 = phi_in111;
				phi94 = phi84;
				phi_in95 = phi116;
				phi96 = phi_in121;
				phi97 = phi77;
				phi_in104 = phi_in148;
				phi_in110 = phi_in154;
				phi_in122 = phi151 + 4;
				dispatch14 = 4;
			}
			if (*(uint32_t*)(phi86 + 24) >= *anon98 && dispatch14 == 3 || *(uint32_t*)(phi86 + 24) >= *anon98 && dispatch14 == 2 && *(uint32_t*)(phi59 + 4) < *anon68 || *(uint32_t*)(phi86 + 24) >= *anon98 && dispatch14 == 1 && phi30 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon68 || *(uint32_t*)(phi86 + 24) >= *anon98 && dispatch14 == 0 && phi_in18 < *anon8 && phi30 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon68 || *(uint32_t*)(phi140 + 28) >= *anon167 && dispatch14 == 4 && phi151 == 8 || *(uint32_t*)(phi140 + 28) >= *anon167 && dispatch14 == 3 && *(uint32_t*)(phi86 + 24) < *anon98 && phi151 == 8 || *(uint32_t*)(phi140 + 28) >= *anon167 && dispatch14 == 2 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && phi151 == 8 || *(uint32_t*)(phi140 + 28) >= *anon167 && dispatch14 == 1 && phi30 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && phi151 == 8 || *(uint32_t*)(phi140 + 28) >= *anon167 && dispatch14 == 0 && phi_in18 < *anon8 && phi30 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && phi151 == 8 || *(uint32_t*)(phi203 + 40) >= *anon214 && dispatch14 == 5 && phi190 == 8 && phi151 == 8 || *(uint32_t*)(phi203 + 40) >= *anon214 && dispatch14 == 4 && *(uint32_t*)(phi140 + 28) < *anon167 && phi190 == 8 && phi151 == 8 || *(uint32_t*)(phi203 + 40) >= *anon214 && dispatch14 == 3 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 && phi190 == 8 && phi151 == 8 || *(uint32_t*)(phi203 + 40) >= *anon214 && dispatch14 == 2 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 && phi190 == 8 && phi151 == 8 || *(uint32_t*)(phi203 + 40) >= *anon214 && dispatch14 == 1 && phi30 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 && phi190 == 8 && phi151 == 8 || *(uint32_t*)(phi203 + 40) >= *anon214 && dispatch14 == 0 && phi_in18 < *anon8 && phi30 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 && phi190 == 8 && phi151 == 8 || dispatch14 == 6 && phi232 == 8 && phi190 == 8 && phi151 == 8 || dispatch14 == 5 && *(uint32_t*)(phi203 + 40) < *anon214 && phi232 == 8 && phi190 == 8 && phi151 == 8 || dispatch14 == 4 && *(uint32_t*)(phi140 + 28) < *anon167 && *(uint32_t*)(phi203 + 40) < *anon214 && phi232 == 8 && phi190 == 8 && phi151 == 8 || dispatch14 == 3 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 && *(uint32_t*)(phi203 + 40) < *anon214 && phi232 == 8 && phi190 == 8 && phi151 == 8 || dispatch14 == 2 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 && *(uint32_t*)(phi203 + 40) < *anon214 && phi232 == 8 && phi190 == 8 && phi151 == 8 || dispatch14 == 1 && phi30 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 && *(uint32_t*)(phi203 + 40) < *anon214 && phi232 == 8 && phi190 == 8 && phi151 == 8 || dispatch14 == 0 && phi_in18 < *anon8 && phi30 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 && *(uint32_t*)(phi203 + 40) < *anon214 && phi232 == 8 && phi190 == 8 && phi151 == 8)
			{
				phi52 = phi79;
				phi_in371 = phi90;
				phi63 = phi91;
				phi73 = phi92;
				phi56 = phi_in93;
				phi_in372 = phi94;
				phi57 = phi_in95;
				phi67 = phi96;
				phi_in373 = phi97;
				phi51 = phi60;
				phi_in70 = phi_in89;
				phi71 = phi_in371;
				phi_in72 = phi63;
				phi55 = phi65;
				phi46 = phi_in372;
				phi_in74 = phi67;
				phi_in75 = phi87 + 4;
				phi77 = phi_in373;
				dispatch14 = 3;
			}
			if (phi87 == 8 && (*(uint32_t*)(phi86 + 24) >= *anon98 && dispatch14 == 3 || *(uint32_t*)(phi86 + 24) >= *anon98 && dispatch14 == 2 && *(uint32_t*)(phi59 + 4) < *anon68 || *(uint32_t*)(phi86 + 24) >= *anon98 && dispatch14 == 1 && phi30 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon68 || *(uint32_t*)(phi86 + 24) >= *anon98 && dispatch14 == 0 && phi_in18 < *anon8 && phi30 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon68 || *(uint32_t*)(phi140 + 28) >= *anon167 && dispatch14 == 4 && phi151 == 8 || *(uint32_t*)(phi140 + 28) >= *anon167 && dispatch14 == 3 && *(uint32_t*)(phi86 + 24) < *anon98 && phi151 == 8 || *(uint32_t*)(phi140 + 28) >= *anon167 && dispatch14 == 2 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && phi151 == 8 || *(uint32_t*)(phi140 + 28) >= *anon167 && dispatch14 == 1 && phi30 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && phi151 == 8 || *(uint32_t*)(phi140 + 28) >= *anon167 && dispatch14 == 0 && phi_in18 < *anon8 && phi30 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && phi151 == 8 || *(uint32_t*)(phi203 + 40) >= *anon214 && dispatch14 == 5 && phi190 == 8 && phi151 == 8 || *(uint32_t*)(phi203 + 40) >= *anon214 && dispatch14 == 4 && *(uint32_t*)(phi140 + 28) < *anon167 && phi190 == 8 && phi151 == 8 || *(uint32_t*)(phi203 + 40) >= *anon214 && dispatch14 == 3 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 && phi190 == 8 && phi151 == 8 || *(uint32_t*)(phi203 + 40) >= *anon214 && dispatch14 == 2 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 && phi190 == 8 && phi151 == 8 || *(uint32_t*)(phi203 + 40) >= *anon214 && dispatch14 == 1 && phi30 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 && phi190 == 8 && phi151 == 8 || *(uint32_t*)(phi203 + 40) >= *anon214 && dispatch14 == 0 && phi_in18 < *anon8 && phi30 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 && phi190 == 8 && phi151 == 8 || dispatch14 == 6 && phi232 == 8 && phi190 == 8 && phi151 == 8 || dispatch14 == 5 && *(uint32_t*)(phi203 + 40) < *anon214 && phi232 == 8 && phi190 == 8 && phi151 == 8 || dispatch14 == 4 && *(uint32_t*)(phi140 + 28) < *anon167 && *(uint32_t*)(phi203 + 40) < *anon214 && phi232 == 8 && phi190 == 8 && phi151 == 8 || dispatch14 == 3 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 && *(uint32_t*)(phi203 + 40) < *anon214 && phi232 == 8 && phi190 == 8 && phi151 == 8 || dispatch14 == 2 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 && *(uint32_t*)(phi203 + 40) < *anon214 && phi232 == 8 && phi190 == 8 && phi151 == 8 || dispatch14 == 1 && phi30 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 && *(uint32_t*)(phi203 + 40) < *anon214 && phi232 == 8 && phi190 == 8 && phi151 == 8 || dispatch14 == 0 && phi_in18 < *anon8 && phi30 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 && *(uint32_t*)(phi203 + 40) < *anon214 && phi232 == 8 && phi190 == 8 && phi151 == 8))
			{
				phi61 = phi52;
				phi62 = phi_in89;
				phi41 = phi_in371;
				phi35 = phi73;
				phi64 = *(uint64_t*)(phi67 + 72);
				phi45 = phi56;
				phi46 = phi_in372;
				phi47 = phi57;
				phi66 = phi_in373;
			}
			if (*(uint32_t*)(phi86 + 24) >= *anon98 && dispatch14 == 3 && phi87 == 8 || *(uint32_t*)(phi86 + 24) >= *anon98 && dispatch14 == 2 && *(uint32_t*)(phi59 + 4) < *anon68 && phi87 == 8 || *(uint32_t*)(phi86 + 24) >= *anon98 && dispatch14 == 1 && phi30 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon68 && phi87 == 8 || *(uint32_t*)(phi86 + 24) >= *anon98 && dispatch14 == 0 && phi_in18 < *anon8 && phi30 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon68 && phi87 == 8 || *(uint32_t*)(phi140 + 28) >= *anon167 && dispatch14 == 4 && phi151 == 8 && phi87 == 8 || *(uint32_t*)(phi140 + 28) >= *anon167 && dispatch14 == 3 && *(uint32_t*)(phi86 + 24) < *anon98 && phi151 == 8 && phi87 == 8 || *(uint32_t*)(phi140 + 28) >= *anon167 && dispatch14 == 2 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && phi151 == 8 && phi87 == 8 || *(uint32_t*)(phi140 + 28) >= *anon167 && dispatch14 == 1 && phi30 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && phi151 == 8 && phi87 == 8 || *(uint32_t*)(phi140 + 28) >= *anon167 && dispatch14 == 0 && phi_in18 < *anon8 && phi30 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && phi151 == 8 && phi87 == 8 || *(uint32_t*)(phi203 + 40) >= *anon214 && dispatch14 == 5 && phi190 == 8 && phi151 == 8 && phi87 == 8 || *(uint32_t*)(phi203 + 40) >= *anon214 && dispatch14 == 4 && *(uint32_t*)(phi140 + 28) < *anon167 && phi190 == 8 && phi151 == 8 && phi87 == 8 || *(uint32_t*)(phi203 + 40) >= *anon214 && dispatch14 == 3 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 && phi190 == 8 && phi151 == 8 && phi87 == 8 || *(uint32_t*)(phi203 + 40) >= *anon214 && dispatch14 == 2 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 && phi190 == 8 && phi151 == 8 && phi87 == 8 || *(uint32_t*)(phi203 + 40) >= *anon214 && dispatch14 == 1 && phi30 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 && phi190 == 8 && phi151 == 8 && phi87 == 8 || *(uint32_t*)(phi203 + 40) >= *anon214 && dispatch14 == 0 && phi_in18 < *anon8 && phi30 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 && phi190 == 8 && phi151 == 8 && phi87 == 8 || dispatch14 == 6 && phi232 == 8 && phi190 == 8 && phi151 == 8 && phi87 == 8 || dispatch14 == 5 && *(uint32_t*)(phi203 + 40) < *anon214 && phi232 == 8 && phi190 == 8 && phi151 == 8 && phi87 == 8 || dispatch14 == 4 && *(uint32_t*)(phi140 + 28) < *anon167 && *(uint32_t*)(phi203 + 40) < *anon214 && phi232 == 8 && phi190 == 8 && phi151 == 8 && phi87 == 8 || dispatch14 == 3 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 && *(uint32_t*)(phi203 + 40) < *anon214 && phi232 == 8 && phi190 == 8 && phi151 == 8 && phi87 == 8 || dispatch14 == 2 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 && *(uint32_t*)(phi203 + 40) < *anon214 && phi232 == 8 && phi190 == 8 && phi151 == 8 && phi87 == 8 || dispatch14 == 1 && phi30 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 && *(uint32_t*)(phi203 + 40) < *anon214 && phi232 == 8 && phi190 == 8 && phi151 == 8 && phi87 == 8 || dispatch14 == 0 && phi_in18 < *anon8 && phi30 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 && *(uint32_t*)(phi203 + 40) < *anon214 && phi232 == 8 && phi190 == 8 && phi151 == 8 && phi87 == 8 || *(uint32_t*)(phi59 + 4) >= *anon68 && dispatch14 == 2 || *(uint32_t*)(phi59 + 4) >= *anon68 && dispatch14 == 1 && phi30 < *anon37 || *(uint32_t*)(phi59 + 4) >= *anon68 && dispatch14 == 0 && phi_in18 < *anon8 && phi30 < *anon37)
			{
				phi39 = phi60;
				phi29 = phi61;
				phi40 = phi62;
				phi_in42 = phi63;
				phi_in43 = phi35;
				phi44 = phi65;
				phi48 = phi66;
				phi_in36 = phi67;
				phi_in49 = phi64 + 4;
				phi_in50 = phi_in36;
				dispatch14 = 2;
			}
			if (phi64 == 8 && (*(uint32_t*)(phi86 + 24) >= *anon98 && dispatch14 == 3 && phi87 == 8 || *(uint32_t*)(phi86 + 24) >= *anon98 && dispatch14 == 2 && *(uint32_t*)(phi59 + 4) < *anon68 && phi87 == 8 || *(uint32_t*)(phi86 + 24) >= *anon98 && dispatch14 == 1 && phi30 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon68 && phi87 == 8 || *(uint32_t*)(phi86 + 24) >= *anon98 && dispatch14 == 0 && phi_in18 < *anon8 && phi30 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon68 && phi87 == 8 || *(uint32_t*)(phi140 + 28) >= *anon167 && dispatch14 == 4 && phi151 == 8 && phi87 == 8 || *(uint32_t*)(phi140 + 28) >= *anon167 && dispatch14 == 3 && *(uint32_t*)(phi86 + 24) < *anon98 && phi151 == 8 && phi87 == 8 || *(uint32_t*)(phi140 + 28) >= *anon167 && dispatch14 == 2 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && phi151 == 8 && phi87 == 8 || *(uint32_t*)(phi140 + 28) >= *anon167 && dispatch14 == 1 && phi30 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && phi151 == 8 && phi87 == 8 || *(uint32_t*)(phi140 + 28) >= *anon167 && dispatch14 == 0 && phi_in18 < *anon8 && phi30 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && phi151 == 8 && phi87 == 8 || *(uint32_t*)(phi203 + 40) >= *anon214 && dispatch14 == 5 && phi190 == 8 && phi151 == 8 && phi87 == 8 || *(uint32_t*)(phi203 + 40) >= *anon214 && dispatch14 == 4 && *(uint32_t*)(phi140 + 28) < *anon167 && phi190 == 8 && phi151 == 8 && phi87 == 8 || *(uint32_t*)(phi203 + 40) >= *anon214 && dispatch14 == 3 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 && phi190 == 8 && phi151 == 8 && phi87 == 8 || *(uint32_t*)(phi203 + 40) >= *anon214 && dispatch14 == 2 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 && phi190 == 8 && phi151 == 8 && phi87 == 8 || *(uint32_t*)(phi203 + 40) >= *anon214 && dispatch14 == 1 && phi30 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 && phi190 == 8 && phi151 == 8 && phi87 == 8 || *(uint32_t*)(phi203 + 40) >= *anon214 && dispatch14 == 0 && phi_in18 < *anon8 && phi30 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 && phi190 == 8 && phi151 == 8 && phi87 == 8 || dispatch14 == 6 && phi232 == 8 && phi190 == 8 && phi151 == 8 && phi87 == 8 || dispatch14 == 5 && *(uint32_t*)(phi203 + 40) < *anon214 && phi232 == 8 && phi190 == 8 && phi151 == 8 && phi87 == 8 || dispatch14 == 4 && *(uint32_t*)(phi140 + 28) < *anon167 && *(uint32_t*)(phi203 + 40) < *anon214 && phi232 == 8 && phi190 == 8 && phi151 == 8 && phi87 == 8 || dispatch14 == 3 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 && *(uint32_t*)(phi203 + 40) < *anon214 && phi232 == 8 && phi190 == 8 && phi151 == 8 && phi87 == 8 || dispatch14 == 2 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 && *(uint32_t*)(phi203 + 40) < *anon214 && phi232 == 8 && phi190 == 8 && phi151 == 8 && phi87 == 8 || dispatch14 == 1 && phi30 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 && *(uint32_t*)(phi203 + 40) < *anon214 && phi232 == 8 && phi190 == 8 && phi151 == 8 && phi87 == 8 || dispatch14 == 0 && phi_in18 < *anon8 && phi30 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 && *(uint32_t*)(phi203 + 40) < *anon214 && phi232 == 8 && phi190 == 8 && phi151 == 8 && phi87 == 8 || *(uint32_t*)(phi59 + 4) >= *anon68 && dispatch14 == 2 || *(uint32_t*)(phi59 + 4) >= *anon68 && dispatch14 == 1 && phi30 < *anon37 || *(uint32_t*)(phi59 + 4) >= *anon68 && dispatch14 == 0 && phi_in18 < *anon8 && phi30 < *anon37))
			{
				phi31 = *(uint32_t*)(phi_in36 + 68);
				phi32 = phi_in43;
				phi33 = *(uint64_t*)(phi_in36 + 56);
				phi34 = (__zext uint64_t)phi_in43;
				*(uint32_t*)(phi25 + 68) = *(uint32_t*)(phi_in36 + 68);
				phi35 = phi_in43;
				phi_in16 = *(uint32_t*)(phi_in36 + 68);
			}
			if (*(uint32_t*)(phi86 + 24) >= *anon98 && dispatch14 == 3 && phi87 == 8 && phi64 == 8 || *(uint32_t*)(phi86 + 24) >= *anon98 && dispatch14 == 2 && *(uint32_t*)(phi59 + 4) < *anon68 && phi87 == 8 && phi64 == 8 || *(uint32_t*)(phi86 + 24) >= *anon98 && dispatch14 == 1 && phi30 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon68 && phi87 == 8 && phi64 == 8 || *(uint32_t*)(phi86 + 24) >= *anon98 && dispatch14 == 0 && phi_in18 < *anon8 && phi30 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon68 && phi87 == 8 && phi64 == 8 || *(uint32_t*)(phi140 + 28) >= *anon167 && dispatch14 == 4 && phi151 == 8 && phi87 == 8 && phi64 == 8 || *(uint32_t*)(phi140 + 28) >= *anon167 && dispatch14 == 3 && *(uint32_t*)(phi86 + 24) < *anon98 && phi151 == 8 && phi87 == 8 && phi64 == 8 || *(uint32_t*)(phi140 + 28) >= *anon167 && dispatch14 == 2 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && phi151 == 8 && phi87 == 8 && phi64 == 8 || *(uint32_t*)(phi140 + 28) >= *anon167 && dispatch14 == 1 && phi30 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && phi151 == 8 && phi87 == 8 && phi64 == 8 || *(uint32_t*)(phi140 + 28) >= *anon167 && dispatch14 == 0 && phi_in18 < *anon8 && phi30 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && phi151 == 8 && phi87 == 8 && phi64 == 8 || *(uint32_t*)(phi203 + 40) >= *anon214 && dispatch14 == 5 && phi190 == 8 && phi151 == 8 && phi87 == 8 && phi64 == 8 || *(uint32_t*)(phi203 + 40) >= *anon214 && dispatch14 == 4 && *(uint32_t*)(phi140 + 28) < *anon167 && phi190 == 8 && phi151 == 8 && phi87 == 8 && phi64 == 8 || *(uint32_t*)(phi203 + 40) >= *anon214 && dispatch14 == 3 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 && phi190 == 8 && phi151 == 8 && phi87 == 8 && phi64 == 8 || *(uint32_t*)(phi203 + 40) >= *anon214 && dispatch14 == 2 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 && phi190 == 8 && phi151 == 8 && phi87 == 8 && phi64 == 8 || *(uint32_t*)(phi203 + 40) >= *anon214 && dispatch14 == 1 && phi30 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 && phi190 == 8 && phi151 == 8 && phi87 == 8 && phi64 == 8 || *(uint32_t*)(phi203 + 40) >= *anon214 && dispatch14 == 0 && phi_in18 < *anon8 && phi30 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 && phi190 == 8 && phi151 == 8 && phi87 == 8 && phi64 == 8 || dispatch14 == 6 && phi232 == 8 && phi190 == 8 && phi151 == 8 && phi87 == 8 && phi64 == 8 || dispatch14 == 5 && *(uint32_t*)(phi203 + 40) < *anon214 && phi232 == 8 && phi190 == 8 && phi151 == 8 && phi87 == 8 && phi64 == 8 || dispatch14 == 4 && *(uint32_t*)(phi140 + 28) < *anon167 && *(uint32_t*)(phi203 + 40) < *anon214 && phi232 == 8 && phi190 == 8 && phi151 == 8 && phi87 == 8 && phi64 == 8 || dispatch14 == 3 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 && *(uint32_t*)(phi203 + 40) < *anon214 && phi232 == 8 && phi190 == 8 && phi151 == 8 && phi87 == 8 && phi64 == 8 || dispatch14 == 2 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 && *(uint32_t*)(phi203 + 40) < *anon214 && phi232 == 8 && phi190 == 8 && phi151 == 8 && phi87 == 8 && phi64 == 8 || dispatch14 == 1 && phi30 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 && *(uint32_t*)(phi203 + 40) < *anon214 && phi232 == 8 && phi190 == 8 && phi151 == 8 && phi87 == 8 && phi64 == 8 || dispatch14 == 0 && phi_in18 < *anon8 && phi30 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 && *(uint32_t*)(phi203 + 40) < *anon214 && phi232 == 8 && phi190 == 8 && phi151 == 8 && phi87 == 8 && phi64 == 8 || *(uint32_t*)(phi59 + 4) >= *anon68 && dispatch14 == 2 && phi64 == 8 || *(uint32_t*)(phi59 + 4) >= *anon68 && dispatch14 == 1 && phi30 < *anon37 && phi64 == 8 || *(uint32_t*)(phi59 + 4) >= *anon68 && dispatch14 == 0 && phi_in18 < *anon8 && phi30 < *anon37 && phi64 == 8 || phi30 >= *anon37 && dispatch14 == 1 || phi30 >= *anon37 && dispatch14 == 0 && phi_in18 < *anon8)
			{
				phi17 = phi31;
				phi_in18 = phi32;
				phi24 = phi34;
				phi26 = phi35;
				phi_in28 = phi_in36;
				phi_in23 = phi17;
				phi_in15 = phi_in18;
				phi_in27 = phi33 + 4;
				dispatch14 = 1;
			}
			if (phi33 == 8 && (*(uint32_t*)(phi86 + 24) >= *anon98 && dispatch14 == 3 && phi87 == 8 && phi64 == 8 || *(uint32_t*)(phi86 + 24) >= *anon98 && dispatch14 == 2 && *(uint32_t*)(phi59 + 4) < *anon68 && phi87 == 8 && phi64 == 8 || *(uint32_t*)(phi86 + 24) >= *anon98 && dispatch14 == 1 && phi30 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon68 && phi87 == 8 && phi64 == 8 || *(uint32_t*)(phi86 + 24) >= *anon98 && dispatch14 == 0 && phi_in18 < *anon8 && phi30 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon68 && phi87 == 8 && phi64 == 8 || *(uint32_t*)(phi140 + 28) >= *anon167 && dispatch14 == 4 && phi151 == 8 && phi87 == 8 && phi64 == 8 || *(uint32_t*)(phi140 + 28) >= *anon167 && dispatch14 == 3 && *(uint32_t*)(phi86 + 24) < *anon98 && phi151 == 8 && phi87 == 8 && phi64 == 8 || *(uint32_t*)(phi140 + 28) >= *anon167 && dispatch14 == 2 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && phi151 == 8 && phi87 == 8 && phi64 == 8 || *(uint32_t*)(phi140 + 28) >= *anon167 && dispatch14 == 1 && phi30 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && phi151 == 8 && phi87 == 8 && phi64 == 8 || *(uint32_t*)(phi140 + 28) >= *anon167 && dispatch14 == 0 && phi_in18 < *anon8 && phi30 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && phi151 == 8 && phi87 == 8 && phi64 == 8 || *(uint32_t*)(phi203 + 40) >= *anon214 && dispatch14 == 5 && phi190 == 8 && phi151 == 8 && phi87 == 8 && phi64 == 8 || *(uint32_t*)(phi203 + 40) >= *anon214 && dispatch14 == 4 && *(uint32_t*)(phi140 + 28) < *anon167 && phi190 == 8 && phi151 == 8 && phi87 == 8 && phi64 == 8 || *(uint32_t*)(phi203 + 40) >= *anon214 && dispatch14 == 3 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 && phi190 == 8 && phi151 == 8 && phi87 == 8 && phi64 == 8 || *(uint32_t*)(phi203 + 40) >= *anon214 && dispatch14 == 2 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 && phi190 == 8 && phi151 == 8 && phi87 == 8 && phi64 == 8 || *(uint32_t*)(phi203 + 40) >= *anon214 && dispatch14 == 1 && phi30 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 && phi190 == 8 && phi151 == 8 && phi87 == 8 && phi64 == 8 || *(uint32_t*)(phi203 + 40) >= *anon214 && dispatch14 == 0 && phi_in18 < *anon8 && phi30 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 && phi190 == 8 && phi151 == 8 && phi87 == 8 && phi64 == 8 || dispatch14 == 6 && phi232 == 8 && phi190 == 8 && phi151 == 8 && phi87 == 8 && phi64 == 8 || dispatch14 == 5 && *(uint32_t*)(phi203 + 40) < *anon214 && phi232 == 8 && phi190 == 8 && phi151 == 8 && phi87 == 8 && phi64 == 8 || dispatch14 == 4 && *(uint32_t*)(phi140 + 28) < *anon167 && *(uint32_t*)(phi203 + 40) < *anon214 && phi232 == 8 && phi190 == 8 && phi151 == 8 && phi87 == 8 && phi64 == 8 || dispatch14 == 3 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 && *(uint32_t*)(phi203 + 40) < *anon214 && phi232 == 8 && phi190 == 8 && phi151 == 8 && phi87 == 8 && phi64 == 8 || dispatch14 == 2 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 && *(uint32_t*)(phi203 + 40) < *anon214 && phi232 == 8 && phi190 == 8 && phi151 == 8 && phi87 == 8 && phi64 == 8 || dispatch14 == 1 && phi30 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 && *(uint32_t*)(phi203 + 40) < *anon214 && phi232 == 8 && phi190 == 8 && phi151 == 8 && phi87 == 8 && phi64 == 8 || dispatch14 == 0 && phi_in18 < *anon8 && phi30 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon68 && *(uint32_t*)(phi86 + 24) < *anon98 && *(uint32_t*)(phi140 + 28) < *anon167 && *(uint32_t*)(phi203 + 40) < *anon214 && phi232 == 8 && phi190 == 8 && phi151 == 8 && phi87 == 8 && phi64 == 8 || *(uint32_t*)(phi59 + 4) >= *anon68 && dispatch14 == 2 && phi64 == 8 || *(uint32_t*)(phi59 + 4) >= *anon68 && dispatch14 == 1 && phi30 < *anon37 && phi64 == 8 || *(uint32_t*)(phi59 + 4) >= *anon68 && dispatch14 == 0 && phi_in18 < *anon8 && phi30 < *anon37 && phi64 == 8 || phi30 >= *anon37 && dispatch14 == 1 || phi30 >= *anon37 && dispatch14 == 0 && phi_in18 < *anon8))
			{
				phi19 = *(uint64_t*)(phi_in28 + 48);
				phi20 = phi_in18;
				phi21 = phi17;
				phi_in22 = (__zext uint64_t)phi_in18;
				phi10 = phi_in28;
				break;
			}
		}
		phi_in4 = phi20;
		phi5 = phi21;
		phi7 = phi_in22;
		*anon8 = phi17;
		phi11 = phi_in18;
		phi12 = phi19 + 4;
		dispatch14 = 0;
	}
	while (phi19 != 8);
	return;
}
void t(uint64_t arg0)
{
	struct { uint8_t field0[24]; uint64_t field1; } alloca1;
	uint32_t anon13;
	uint32_t anon22;
	alloca1.field1 = arg0;
	uint64_t phi_in2 = 4;
	uint32_t dispatch3 = 0;
	do
	{
		uint64_t phi4;
		uint32_t* anon12;
		do
		{
			uint64_t anon10;
			do
			{
				while (dispatch3 != 1)
				{
					if (dispatch3 == 0)
					{
						phi4 = phi_in2;
						uint64_t anon5 = random();
						phi_in2 = phi4;
						dispatch3 = 0;
						uint64_t anon8 = anon5 << 32;
						uint64_t anon7 = anon5 + (((anon5 & 0xffffffff) * 2290649225 + anon8 >> 32 >> 4) - (anon8 >> 32 >> 31)) * -30 << 32 >> 30;
						uint32_t* anon6 = (uint32_t*)(anon7 + 6301504);
						if (*anon6 == 0)
						{
							phi_in2 = phi4;
							dispatch3 = 0;
							if (*(uint32_t*)(anon7 + 6300864) == 0)
							{
								*anon6 = 1;
								break;
							}
						}
					}
				}
				uint64_t anon9 = random();
				dispatch3 = 1;
				uint64_t anon11 = anon9 << 32;
				anon10 = anon9 + (((anon9 & 0xffffffff) * 2290649225 + anon11 >> 32 >> 4) - (anon11 >> 32 >> 31)) * -30 << 32 >> 30;
			}
			while (*(uint32_t*)(anon10 + 6301504) != 0);
			dispatch3 = 1;
			anon12 = (uint32_t*)(anon10 + 6300864);
		}
		while (*anon12 != 0);
		*anon12 = 1;
		anon13 = (uint32_t)phi4 - 1;
		phi_in2 = (__zext uint64_t)anon13;
		dispatch3 = 0;
	}
	while (anon13 != 0);
	uint64_t anon14 = random();
	uint64_t anon15 = anon14 << 32;
	w(4198271, (uint64_t)&alloca1, anon14 + (((anon14 & 0xffffffff) * 2290649225 + anon15 >> 32 >> 4) - (anon15 >> 32 >> 31)) * 4294967266 & 0xffffffff, 0);
	uint64_t phi_in16 = 3;
	do
	{
		uint64_t phi17;
		uint64_t anon19;
		uint32_t* anon21;
		do
		{
			do
			{
				do
				{
					do
					{
						phi17 = phi_in16;
						uint64_t anon18 = random();
						phi_in16 = phi17;
						uint64_t anon20 = anon18 << 32;
						anon19 = anon18 + (((anon18 & 0xffffffff) * 2290649225 + anon20 >> 32 >> 4) - (anon20 >> 32 >> 31)) * -30 << 32 >> 30;
					}
					while (*(uint32_t*)(anon19 + 6301504) != 0);
					phi_in16 = phi17;
				}
				while (*(uint32_t*)(anon19 + 6300864) != 0);
				phi_in16 = phi17;
				anon21 = (uint32_t*)(anon19 + 6301120);
			}
			while (*anon21 != 0);
			phi_in16 = phi17;
		}
		while (*(uint32_t*)(anon19 + 6300992) == 0);
		*anon21 = 1;
		anon22 = (uint32_t)phi17 - 1;
		phi_in16 = (__zext uint64_t)anon22;
	}
	while (anon22 != 0);
	while (true)
	{
		uint64_t anon23 = random();
		uint64_t anon24 = anon23 << 32;
		*(uint32_t*)0x60292c = (uint32_t)anon23 + (uint32_t)(((anon23 & 0xffffffff) * 2290649225 + anon24 >> 32 >> 4) - (anon24 >> 32 >> 31)) * 4294967266;
	}
}
void r(uint64_t arg0, uint64_t arg1)
{
	uint32_t phi2;
	uint64_t phi1 = 0;
	uint64_t anon4 = arg1 << 32;
	uint32_t* anon3 = (uint32_t*)((anon4 >> 30) + 6301376);
	phi2 = *anon3;
	uint32_t dispatch5 = 0;
	while (true)
	{
		uint64_t phi_in6;
		uint32_t phi_in7;
		uint32_t phi8;
		uint64_t anon10;
		uint32_t anon11;
		uint64_t anon12;
		if (dispatch5 == 0)
		{
			phi_in6 = phi1;
			if (phi2 == 0)
			{
				break;
			}
			else 
			{
				*anon3 = phi2 - 1;
				phi_in7 = 3;
			}
		}
		if (dispatch5 == 1 || phi2 != 0 && dispatch5 == 0)
		{
			phi8 = phi_in7;
			uint64_t phi9 = phi_in6;
			anon10 = random();
			anon12 = phi9 + 1;
			anon11 = (uint32_t)anon12;
			if (anon11 > 1001)
			{
				break;
			}
		}
		if (anon11 <= 1001 && (dispatch5 == 1 || phi2 != 0 && dispatch5 == 0))
		{
			uint64_t anon14 = anon12 & 0xffffffff;
			uint32_t anon13 = phi8 - (__zext uint32_t)(anon11 == (uint32_t)(anon14 / 100 - (anon12 << 32 >> 32 >> 31)) * 100);
			phi_in7 = anon13;
			phi_in6 = anon14;
			dispatch5 = 1;
			uint64_t anon16 = anon10 << 32;
			uint32_t anon15 = (uint32_t)anon10 + (uint32_t)(((anon10 & 0xffffffff) * 2290649225 + anon16 >> 36) - (anon16 >> 32 >> 31)) * 4294967266;
			uint64_t anon18 = anon4 >> 32;
			uint32_t anon17 = (uint32_t)anon18;
			if (anon15 != anon17)
			{
				phi_in7 = anon13;
				phi_in6 = anon14;
				dispatch5 = 1;
				uint32_t* anon19 = (uint32_t*)(((__sext int64_t)anon15 << 2) + 6301376);
				if ((*anon19 >> 31 | (__zext uint32_t)(*anon19 == 0)) == 0)
				{
					phi_in7 = anon13;
					phi_in6 = anon14;
					dispatch5 = 1;
					uint64_t anon20 = anon18 * 12;
					if (!(*(uint32_t*)(anon20 + 6301640) == anon15 | anon13 > *anon19))
					{
						phi_in7 = anon13;
						phi_in6 = anon14;
						dispatch5 = 1;
						if (anon15 != *(uint32_t*)(anon20 + 6301636))
						{
							uint32_t anon21 = *anon19 - 1;
							*anon19 = anon21;
							uint64_t anon22 = anon18 * 3;
							*(uint32_t*)(((__sext int64_t)anon21 + anon22 << 2) + 6301632) = anon15;
							int62_t anon24 = (__sext int62_t)anon15;
							int62_t anon23 = anon24 * 3;
							*(uint32_t*)(((__zext uint64_t)((__sext int62_t)anon21 + anon23) << 2) + 6301632) = anon17;
							r(4198736, (__zext uint64_t)anon15);
							uint32_t* anon25 = (uint32_t*)(((__zext uint64_t)anon24 << 2) + 6301376);
							*(uint32_t*)(((__zext uint64_t)(anon23 + (__sext int62_t)*anon25) << 2) + 6301632) = 4294967295;
							*anon25 = *anon25 + 1;
							*(uint32_t*)(((__sext int64_t)*anon3 + anon22 << 2) + 6301632) = 4294967295;
							*anon3 = 0;
							phi1 = anon14;
							phi2 = 0;
							dispatch5 = 0;
						}
					}
				}
			}
		}
	}
	return;
}
void m(uint64_t arg0)
{
	getpid(4198911);
	srandom(0);
	(__asm "pcmpeqd xmm0, xmm0")();
	(__asm "movdqa xmm2, xmmword ptr [rip + 0xc6c]")();
	(__asm "movdqa xmm1, xmmword ptr [rip + 0xc74]")();
	uint32_t dispatch1 = 0;
	while (true)
	{
		uint64_t phi2;
		uint64_t phi3;
		uint64_t phi4;
		uint64_t phi5;
		uint64_t phi6;
		uint64_t phi7;
		uint64_t phi8;
		uint32_t phi17;
		uint64_t phi19;
		if (dispatch1 == 0)
		{
			(__asm "movaps xmmword ptr [rip + 0x20158f], xmm0")();
			(__asm "movaps xmmword ptr [rip + 0x201598], xmm0")();
			(__asm "movaps xmmword ptr [rip + 0x2015a1], xmm0")();
			(__asm "movaps xmmword ptr [rip + 0x2012fa], xmm2")();
			(__asm "movaps xmmword ptr [rip + 0x201473], xmm1")();
			(__asm "movaps xmmword ptr [rip + 0x20159c], xmm0")();
			(__asm "movaps xmmword ptr [rip + 0x2015a5], xmm0")();
			(__asm "movaps xmmword ptr [rip + 0x2015ae], xmm0")();
			(__asm "movaps xmmword ptr [rip + 0x2012e7], xmm2")();
			(__asm "movaps xmmword ptr [rip + 0x201460], xmm1")();
			(__asm "movaps xmmword ptr [rip + 0x2015a9], xmm0")();
			(__asm "movaps xmmword ptr [rip + 0x2015b2], xmm0")();
			(__asm "movaps xmmword ptr [rip + 0x2015bb], xmm0")();
			(__asm "movaps xmmword ptr [rip + 0x2012d4], xmm2")();
			(__asm "movaps xmmword ptr [rip + 0x20144d], xmm1")();
			(__asm "movaps xmmword ptr [rip + 0x2015b6], xmm0")();
			(__asm "movaps xmmword ptr [rip + 0x2015bf], xmm0")();
			(__asm "movaps xmmword ptr [rip + 0x2015c8], xmm0")();
			(__asm "movaps xmmword ptr [rip + 0x2012c1], xmm2")();
			(__asm "movaps xmmword ptr [rip + 0x20143a], xmm1")();
			(__asm "movaps xmmword ptr [rip + 0x2015c3], xmm0")();
			(__asm "movaps xmmword ptr [rip + 0x2015cc], xmm0")();
			(__asm "movaps xmmword ptr [rip + 0x2015d5], xmm0")();
			(__asm "movaps xmmword ptr [rip + 0x2012ae], xmm2")();
			(__asm "movaps xmmword ptr [rip + 0x201427], xmm1")();
			(__asm "movaps xmmword ptr [rip + 0x2015d0], xmm0")();
			(__asm "movaps xmmword ptr [rip + 0x2015d9], xmm0")();
			(__asm "movaps xmmword ptr [rip + 0x2015e2], xmm0")();
			(__asm "movaps xmmword ptr [rip + 0x20129b], xmm2")();
			(__asm "movaps xmmword ptr [rip + 0x201414], xmm1")();
			(__asm "movaps xmmword ptr [rip + 0x2015dd], xmm0")();
			(__asm "movaps xmmword ptr [rip + 0x2015e6], xmm0")();
			(__asm "movaps xmmword ptr [rip + 0x2015ef], xmm0")();
			(__asm "movaps xmmword ptr [rsp + 0x20], xmm0")();
			(__asm "movaps xmmword ptr [rip + 0x201283], xmm2")();
			(__asm "movaps xmmword ptr [rsp + 0x10], xmm2")();
			(__asm "movaps xmmword ptr [rip + 0x2013f7], xmm1")();
			(__asm "movaps xmmword ptr [rsp], xmm1")();
			phi2 = 6301504;
			phi3 = 15;
		}
		if (phi3 == 0 && (dispatch1 == 1 || dispatch1 == 0))
		{
			*(uint32_t*)0x602918 = 4294967295;
			*(uint32_t*)0x602914 = 4294967295;
			*(uint32_t*)0x602910 = 4294967295;
			*(uint32_t*)0x6025b0 = 60;
			*(uint32_t*)0x602730 = 3;
			*(uint32_t*)0x602924 = 4294967295;
			*(uint32_t*)0x602920 = 4294967295;
			*(uint32_t*)0x60291c = 4294967295;
			*(uint32_t*)0x6025b4 = 60;
			*(uint32_t*)0x602734 = 3;
			phi4 = 15;
			phi5 = 6300864;
		}
		if (dispatch1 == 2 || dispatch1 == 1 && phi3 == 0 || dispatch1 == 0 && phi3 == 0)
		{
			phi6 = 6301248;
			phi7 = 15;
		}
		if (phi7 == 0 && (dispatch1 == 3 || dispatch1 == 2 && phi4 == 0 || dispatch1 == 1 && phi3 == 0 && phi4 == 0 || dispatch1 == 0 && phi3 == 0 && phi4 == 0))
		{
			r(4199339, 0);
			(__asm "movdqa xmm0, xmmword ptr [rsp + 0x20]")();
			(__asm "movdqa xmm2, xmmword ptr [rsp + 0x10]")();
			(__asm "movdqa xmm1, xmmword ptr [rsp]")();
			phi8 = 6301636;
		}
		if (dispatch1 == 4 || dispatch1 == 3 && phi7 == 0 || dispatch1 == 2 && phi4 == 0 && phi7 == 0 || dispatch1 == 1 && phi3 == 0 && phi4 == 0 && phi7 == 0 || dispatch1 == 0 && phi3 == 0 && phi4 == 0 && phi7 == 0)
		{
			uint32_t phi11;
			uint32_t phi12;
			uint32_t phi13;
			uint32_t* anon14;
			uint32_t phi15;
			uint32_t phi16;
			uint32_t* anon9 = (uint32_t*)((phi8 & 0xc) + 4);
			uint32_t* anon10 = (uint32_t*)phi8;
			if (*anon9 < *anon10)
			{
				*anon10 = *anon9;
				*anon9 = *anon10;
				phi11 = *anon10;
				phi12 = *anon9;
				anon14 = (uint32_t*)(phi8 - 4);
				phi13 = *anon14;
				phi15 = *anon10;
				phi16 = *anon9;
			}
			else 
			{
				phi11 = *anon9;
				phi12 = *anon10;
				phi17 = *anon14;
			}
			if (*anon9 < *anon10 && *anon9 < *anon14 || *anon9 >= *anon10 && *anon10 < *anon14)
			{
				uint32_t phi_in18 = phi11;
				*anon14 = phi12;
				*anon10 = *anon14;
				phi13 = *anon14;
				phi15 = phi_in18;
				phi16 = *anon14;
			}
			if (*anon9 < *anon10 && *anon9 < *anon14 || *anon9 >= *anon10 && *anon10 < *anon14 || *anon9 >= *anon14 && *anon9 < *anon10)
			{
				phi17 = phi13;
				*anon10 = phi15;
				*anon9 = phi16;
				if (*anon10 < *anon9)
				{
					phi17 = *anon14;
				}
			}
			phi19 = 6301636;
		}
		uint32_t anon20 = phi17 + 1 & 0xff;
		if (dispatch1 == 5 || dispatch1 == 4 && anon20 == 0 || dispatch1 == 3 && phi7 == 0 && anon20 == 0 || dispatch1 == 2 && phi4 == 0 && phi7 == 0 && anon20 == 0 || dispatch1 == 1 && phi3 == 0 && phi4 == 0 && phi7 == 0 && anon20 == 0 || dispatch1 == 0 && phi3 == 0 && phi4 == 0 && phi7 == 0 && anon20 == 0)
		{
			uint32_t phi23;
			uint32_t phi24;
			uint32_t phi25;
			uint32_t* anon26;
			uint32_t phi27;
			uint32_t phi28;
			uint32_t phi29;
			uint32_t* anon21 = (uint32_t*)(phi19 + 4);
			uint32_t* anon22 = (uint32_t*)phi19;
			if (*anon21 < *anon22)
			{
				*anon22 = *anon21;
				*anon21 = *anon22;
				phi23 = *anon22;
				phi24 = *anon21;
				anon26 = (uint32_t*)((phi19 & 0xc) - 4);
				phi25 = *anon26;
				phi27 = *anon22;
				phi28 = *anon21;
			}
			else 
			{
				phi23 = *anon21;
				phi24 = *anon22;
				phi29 = *anon26;
			}
			if (*anon21 < *anon22 && *anon21 < *anon26 || *anon21 >= *anon22 && *anon22 < *anon26)
			{
				uint32_t phi_in30 = phi23;
				uint32_t phi_in31 = phi24;
				*anon22 = *anon26;
				*anon26 = phi_in31;
				phi25 = phi_in31;
				phi27 = phi_in30;
				phi28 = *anon26;
			}
			if (*anon21 < *anon22 && *anon21 < *anon26 || *anon21 >= *anon22 && *anon22 < *anon26 || *anon21 >= *anon26 && *anon21 < *anon22)
			{
				phi29 = phi25;
				*anon22 = phi27;
				*anon21 = phi28;
				if (*anon22 < *anon21)
				{
					phi29 = *anon26;
				}
			}
			dispatch1 = 0;
			if ((phi29 + 1 & 0xff) != 0)
			{
				phi19 = phi19 + 12;
				dispatch1 = 5;
			}
		}
		if (anon20 != 0 && (dispatch1 == 4 || dispatch1 == 3 && phi7 == 0 || dispatch1 == 2 && phi4 == 0 && phi7 == 0 || dispatch1 == 1 && phi3 == 0 && phi4 == 0 && phi7 == 0 || dispatch1 == 0 && phi3 == 0 && phi4 == 0 && phi7 == 0))
		{
			phi8 = phi8 + 12;
			dispatch1 = 4;
		}
		if (phi7 != 0)
		{
			if (dispatch1 == 3 || dispatch1 == 2 && phi4 == 0 || dispatch1 == 1 && phi3 == 0 && phi4 == 0 || dispatch1 == 0 && phi3 == 0 && phi4 == 0)
			{
				*(uint64_t*)phi6 = 0;
				phi6 = phi6 + 8;
				phi7 = phi7 - 1;
				dispatch1 = 3;
			}
			if (dispatch1 == 2 || dispatch1 == 1 && phi3 == 0 || dispatch1 == 0 && phi3 == 0)
			{
				*(uint64_t*)phi5 = 0;
				phi4 = phi4 - 1;
				phi5 = phi5 + 8;
				dispatch1 = 2;
			}
			if (dispatch1 == 1 || dispatch1 == 0)
			{
				*(uint64_t*)phi2 = 0;
				phi2 = phi2 + 8;
				phi3 = phi3 - 1;
				dispatch1 = 1;
			}
		}
	}
}
void q(uint64_t arg0, uint64_t arg1)
{
	struct { uint8_t field0[56]; uint64_t field1; } alloca1;
	uint32_t phi17;
	alloca1.field1 = arg0;
	uint32_t* anon2 = (uint32_t*)0x602928;
	if (*anon2 == 0)
	{
		__indirect_jump(*(uint64_t*)0x6023f8);
	}
	else 
	{
		uint32_t* anon7;
		uint32_t dispatch11;
		uint8_t* anon26;
		*anon2 = *anon2 - 1;
		printf((uint8_t*)0x401ca7);
		uint64_t phi3 = arg1 & 0xffffffff;
		uint32_t phi_in4 = 0;
		uint32_t dispatch5 = 0;
		while (true)
		{
			uint32_t phi6;
			uint32_t anon12;
			uint16_t** anon13;
			uint32_t anon19;
			uint32_t anon22;
			uint8_t anon25;
			if (dispatch5 == 0)
			{
				phi6 = phi_in4;
				anon7 = (uint32_t*)0x602490;
				*anon7 = *anon7 + phi6;
			}
			struct _IO_FILE** anon9 = (struct _IO_FILE**)0x602480;
			uint32_t anon8 = _IO_getc(*anon9);
			uint8_t anon10 = (uint8_t)anon8;
			if (anon10 == 10)
			{
				dispatch11 = 0;
				anon12 = *anon2 >> 31 | (__zext uint32_t)(*anon2 == 0);
				if (anon12 == 0)
				{
					break;
				}
			}
			if (anon10 != 10 || anon12 != 0 && anon10 == 10)
			{
				anon13 = __ctype_b_loc();
				dispatch5 = 1;
			}
			uint64_t* anon15 = (uint64_t*)anon13;
			uint8_t anon14 = *(uint8_t*)(*anon15 + ((__sext int64_t)anon10 << 1 | 1)) & 8;
			if (anon14 != 0 && (anon10 != 10 || anon12 != 0 && anon10 == 10))
			{
				uint32_t anon16 = _IO_getc(*anon9);
				uint32_t anon18 = (anon8 << 24 >> 24) - 48;
				phi17 = anon18;
				if ((*(uint8_t*)(*anon15 + ((__zext uint64_t)anon16 << 56 >> 55 | 1)) & 8) != 0)
				{
					anon19 = anon16 >> 8;
					phi17 = (anon19 << 24 >> 24) + anon18 * 10 - 48;
				}
			}
			uint64_t anon20 = (phi3 << 32 >> 32) * 12;
			if (anon12 != 0 && anon14 != 0 && anon10 == 10 && *(uint32_t*)(anon20 + 6301632) == phi17 || anon10 != 10 && anon14 != 0 && *(uint32_t*)(anon20 + 6301632) == phi17 || anon12 != 0 && anon14 != 0 && *(uint32_t*)(anon20 + 6301632) != phi17 && anon10 == 10 && phi17 == *(uint32_t*)(anon20 + 6301636) || anon10 != 10 && anon14 != 0 && *(uint32_t*)(anon20 + 6301632) != phi17 && phi17 == *(uint32_t*)(anon20 + 6301636) || anon12 != 0 && anon14 != 0 && *(uint32_t*)(anon20 + 6301632) != phi17 && phi17 != *(uint32_t*)(anon20 + 6301636) && anon10 == 10 && phi17 == *(uint32_t*)(anon20 + 6301640) || anon10 != 10 && anon14 != 0 && *(uint32_t*)(anon20 + 6301632) != phi17 && phi17 != *(uint32_t*)(anon20 + 6301636) && phi17 == *(uint32_t*)(anon20 + 6301640))
			{
				dispatch11 = 1;
				if (*(uint32_t*)(((__sext int64_t)phi17 << 2) + 6300992) == 0)
				{
					break;
				}
			}
			if (*(uint32_t*)(((__sext int64_t)phi17 << 2) + 6300992) != 0 && (anon12 != 0 && anon14 != 0 && anon10 == 10 && *(uint32_t*)(anon20 + 6301632) == phi17 || anon10 != 10 && anon14 != 0 && *(uint32_t*)(anon20 + 6301632) == phi17 || anon12 != 0 && anon14 != 0 && *(uint32_t*)(anon20 + 6301632) != phi17 && anon10 == 10 && phi17 == *(uint32_t*)(anon20 + 6301636) || anon10 != 10 && anon14 != 0 && *(uint32_t*)(anon20 + 6301632) != phi17 && phi17 == *(uint32_t*)(anon20 + 6301636) || anon12 != 0 && anon14 != 0 && *(uint32_t*)(anon20 + 6301632) != phi17 && phi17 != *(uint32_t*)(anon20 + 6301636) && anon10 == 10 && phi17 == *(uint32_t*)(anon20 + 6301640) || anon10 != 10 && anon14 != 0 && *(uint32_t*)(anon20 + 6301632) != phi17 && phi17 != *(uint32_t*)(anon20 + 6301636) && phi17 == *(uint32_t*)(anon20 + 6301640)))
			{
				phi3 = (__zext uint64_t)phi17;
			}
			if (anon14 != 0 && *(uint32_t*)(anon20 + 6301632) != phi17 && phi17 != *(uint32_t*)(anon20 + 6301636) && phi17 != *(uint32_t*)(anon20 + 6301640))
			{
				if (anon10 != 10 || anon12 != 0 && anon10 == 10)
				{
					uint64_t anon21 = random();
					dispatch11 = 3;
					anon22 = (uint32_t)anon21 + ((uint32_t)((anon21 & 0xffffffff) / 3) - (uint32_t)(anon21 << 32 >> 32 >> 31)) * 4294967293;
					if (anon22 == 1)
					{
						break;
					}
				}
				if (anon22 != 1 && (anon10 != 10 || anon12 != 0 && anon10 == 10))
				{
					(__asm "movdqa xmm0, xmmword ptr [rip + 0x8cf]")();
					*(uint32_t*)0x6025b0 = 60;
					*(uint32_t*)0x6025b4 = 60;
					(__asm "movaps xmmword ptr [rip + 0x200f72], xmm0")();
					(__asm "movaps xmmword ptr [rip + 0x200f7b], xmm0")();
					(__asm "movaps xmmword ptr [rip + 0x200f84], xmm0")();
					(__asm "movaps xmmword ptr [rip + 0x200f8d], xmm0")();
					(__asm "movaps xmmword ptr [rip + 0x200f96], xmm0")();
					(__asm "movaps xmmword ptr [rip + 0x200f9f], xmm0")();
					(__asm "movaps xmmword ptr [rip + 0x200fa8], xmm0")();
					uint64_t anon23 = random();
					uint64_t anon24 = anon23 << 32;
					w(4199968, (uint64_t)&alloca1, anon23 + (((anon23 & 0xffffffff) * 2290649225 + anon24 >> 32 >> 4) - (anon24 >> 32 >> 31)) * 4294967266 & 0xffffffff, 0);
					*anon7 = *anon7 - 100;
					phi3 = phi3;
				}
			}
			if (anon12 != 0 && anon14 != 0 && *(uint32_t*)(((__sext int64_t)phi17 << 2) + 6300992) != 0 && anon10 == 10 && *(uint32_t*)(anon20 + 6301632) == phi17 || anon10 != 10 && anon14 != 0 && *(uint32_t*)(((__sext int64_t)phi17 << 2) + 6300992) != 0 && *(uint32_t*)(anon20 + 6301632) == phi17 || anon12 != 0 && anon14 != 0 && *(uint32_t*)(anon20 + 6301632) != phi17 && *(uint32_t*)(((__sext int64_t)phi17 << 2) + 6300992) != 0 && anon10 == 10 && phi17 == *(uint32_t*)(anon20 + 6301636) || anon10 != 10 && anon14 != 0 && *(uint32_t*)(anon20 + 6301632) != phi17 && *(uint32_t*)(((__sext int64_t)phi17 << 2) + 6300992) != 0 && phi17 == *(uint32_t*)(anon20 + 6301636) || anon12 != 0 && anon14 != 0 && *(uint32_t*)(anon20 + 6301632) != phi17 && phi17 != *(uint32_t*)(anon20 + 6301636) && *(uint32_t*)(((__sext int64_t)phi17 << 2) + 6300992) != 0 && anon10 == 10 && phi17 == *(uint32_t*)(anon20 + 6301640) || anon10 != 10 && anon14 != 0 && *(uint32_t*)(anon20 + 6301632) != phi17 && phi17 != *(uint32_t*)(anon20 + 6301636) && *(uint32_t*)(((__sext int64_t)phi17 << 2) + 6300992) != 0 && phi17 == *(uint32_t*)(anon20 + 6301640) || anon12 != 0 && anon14 != 0 && *(uint32_t*)(anon20 + 6301632) != phi17 && phi17 != *(uint32_t*)(anon20 + 6301636) && phi17 != *(uint32_t*)(anon20 + 6301640) && anon22 != 1 && anon10 == 10 || anon10 != 10 && anon14 != 0 && *(uint32_t*)(anon20 + 6301632) != phi17 && phi17 != *(uint32_t*)(anon20 + 6301636) && phi17 != *(uint32_t*)(anon20 + 6301640) && anon22 != 1)
			{
				dispatch11 = 0;
				anon25 = (uint8_t)anon19;
				if (anon25 == 10)
				{
					break;
				}
			}
			if (anon25 != 10 && (anon12 != 0 && anon14 != 0 && *(uint32_t*)(((__sext int64_t)phi17 << 2) + 6300992) != 0 && anon10 == 10 && *(uint32_t*)(anon20 + 6301632) == phi17 || anon10 != 10 && anon14 != 0 && *(uint32_t*)(((__sext int64_t)phi17 << 2) + 6300992) != 0 && *(uint32_t*)(anon20 + 6301632) == phi17 || anon12 != 0 && anon14 != 0 && *(uint32_t*)(anon20 + 6301632) != phi17 && *(uint32_t*)(((__sext int64_t)phi17 << 2) + 6300992) != 0 && anon10 == 10 && phi17 == *(uint32_t*)(anon20 + 6301636) || anon10 != 10 && anon14 != 0 && *(uint32_t*)(anon20 + 6301632) != phi17 && *(uint32_t*)(((__sext int64_t)phi17 << 2) + 6300992) != 0 && phi17 == *(uint32_t*)(anon20 + 6301636) || anon12 != 0 && anon14 != 0 && *(uint32_t*)(anon20 + 6301632) != phi17 && phi17 != *(uint32_t*)(anon20 + 6301636) && *(uint32_t*)(((__sext int64_t)phi17 << 2) + 6300992) != 0 && anon10 == 10 && phi17 == *(uint32_t*)(anon20 + 6301640) || anon10 != 10 && anon14 != 0 && *(uint32_t*)(anon20 + 6301632) != phi17 && phi17 != *(uint32_t*)(anon20 + 6301636) && *(uint32_t*)(((__sext int64_t)phi17 << 2) + 6300992) != 0 && phi17 == *(uint32_t*)(anon20 + 6301640) || anon12 != 0 && anon14 != 0 && *(uint32_t*)(anon20 + 6301632) != phi17 && phi17 != *(uint32_t*)(anon20 + 6301636) && phi17 != *(uint32_t*)(anon20 + 6301640) && anon22 != 1 && anon10 == 10 || anon10 != 10 && anon14 != 0 && *(uint32_t*)(anon20 + 6301632) != phi17 && phi17 != *(uint32_t*)(anon20 + 6301636) && phi17 != *(uint32_t*)(anon20 + 6301640) && anon22 != 1))
			{
				phi_in4 = phi6 - 20;
				dispatch5 = 0;
				dispatch11 = 2;
				if (phi6 == 196)
				{
					break;
				}
			}
		}
		if (dispatch11 == 3)
		{
			puts((uint8_t*)0x401dd0);
			*anon7 = *anon7 - 100;
			anon26 = (uint8_t*)0x401cf1;
			printf(anon26);
			exit(0);
		}
		if (dispatch11 == 2)
		{
			return;
		}
		if (dispatch11 == 1)
		{
			puts((uint8_t*)0x401cd5);
			*anon7 = *anon2 * 100 + *anon7 + 500;
			printf(anon26);
			exit(0);
		}
		if (dispatch11 == 0)
		{
			*anon7 = *anon7 - 50;
			__indirect_jump(*(uint64_t*)0x602408);
		}
	}
}
struct nn(uint64_t arg0)
{
	int64_t anon8;
	uint64_t phi_in9;
	uint64_t phi_in10;
	uint32_t dispatch11;
	uint64_t phi12;
	uint64_t phi13;
	uint32_t dispatch16;
	uint32_t* anon18;
	uint32_t* anon20;
	uint32_t* anon24;
	uint64_t anon25;
	struct _IO_FILE** anon34;
	uint8_t anon35;
	uint16_t** phi37;
	do
	{
		int64_t anon3;
		int64_t anon7;
		do
		{
			int64_t anon5;
			do
			{
				do
				{
					int64_t anon6;
					do
					{
						do
						{
							int64_t anon2;
							do
							{
								do
								{
									do
									{
										uint64_t anon1 = random();
										uint32_t anon4 = (uint32_t)anon1;
										anon3 = (__sext int64_t)(anon4 + ((uint32_t)((anon1 & 0xffffffff) * 2290649225 + (anon1 << 32) >> 36) - (anon4 >> 31)) * 4294967266);
										anon2 = anon3 << 2;
									}
									while (*(uint32_t*)(anon2 + 6301504) != 0);
								}
								while (*(uint32_t*)(anon2 + 6300864) != 0);
							}
							while (*(uint32_t*)(anon2 + 6300992) < 3);
							anon6 = anon3 * 12;
							anon5 = (__sext int64_t)*(uint32_t*)(anon6 + 6301632) << 2;
						}
						while (*(uint32_t*)(anon5 + 6300864) != 0);
						anon7 = (__sext int64_t)*(uint32_t*)(anon6 + 6301636) << 2;
					}
					while (*(uint32_t*)(anon7 + 6300864) != 0);
					anon8 = (__sext int64_t)*(uint32_t*)(anon6 + 6301640) << 2;
				}
				while (*(uint32_t*)(anon8 + 6300864) != 0);
			}
			while (*(uint32_t*)(anon5 + 6301504) != 0);
		}
		while (*(uint32_t*)(anon7 + 6301504) != 0);
		phi_in9 = anon3;
		phi_in10 = anon3;
		dispatch11 = 0;
	}
	while (*(uint32_t*)(anon8 + 6301504) != 0);
	while (true)
	{
		uint32_t* anon14;
		uint64_t anon15;
		uint32_t anon19;
		uint32_t* anon21;
		uint32_t* anon22;
		if (dispatch11 == 0)
		{
			uint32_t* anon17;
			phi12 = phi_in9;
			phi13 = phi_in10;
			printf((uint8_t*)0x401d03);
			anon15 = phi12 << 2;
			anon14 = (uint32_t*)(anon15 + 6301120);
			if (*anon14 == 0)
			{
				dispatch16 = 0;
				if (*(uint32_t*)(anon15 + 6300992) == 0)
				{
					break;
				}
			}
			else 
			{
				anon17 = (uint32_t*)0x602928;
				*anon17 = *anon17 + 1;
				puts((uint8_t*)0x401d17);
				anon18 = (uint32_t*)0x602490;
				*anon18 = *anon18 + 20;
				*anon14 = 0;
				dispatch16 = 0;
				if (*(uint32_t*)(anon15 + 6300992) == 0)
				{
					break;
				}
			}
			if (*(uint32_t*)(anon15 + 6300992) != 0)
			{
				dispatch16 = 3;
				if (*(uint32_t*)(anon15 + 6300864) != 0)
				{
					break;
				}
				anon19 = (uint32_t)phi13;
				anon20 = (uint32_t*)0x60292c;
				if (*(uint32_t*)(anon15 + 6300864) == 0 && anon19 == *anon20)
				{
					if (*anon17 != 0)
					{
						anon21 = (uint32_t*)0x60248c;
						*anon21 = *anon21 + 1;
						*anon17 = *anon17 - 1;
						*anon18 = *anon18 - 20;
						puts((uint8_t*)0x401d48);
					}
					dispatch16 = 1;
					if (*anon21 != 3)
					{
						break;
					}
					if (*anon21 == 3 && true)
					{
						puts((uint8_t*)0x401df8);
						*anon17 = 3;
						*anon18 = *anon18 + 200;
						*anon20 = 4294967295;
					}
				}
			}
			anon22 = (uint32_t*)(anon15 + 6301504);
			if (*anon22 == 0)
			{
				if (*(uint32_t*)(anon15 + 6300992) != 0 && *anon14 == 0 && *(uint32_t*)(anon15 + 6300864) == 0 && anon19 == *anon20 && *anon21 == 3 || *anon14 != 0 && *(uint32_t*)(anon15 + 6300992) != 0 && *(uint32_t*)(anon15 + 6300864) == 0 && anon19 == *anon20 && *anon21 == 3 || *(uint32_t*)(anon15 + 6300992) != 0 && anon19 != *anon20 && *anon14 == 0 && *(uint32_t*)(anon15 + 6300864) == 0 || *anon14 != 0 && anon19 != *anon20 && *(uint32_t*)(anon15 + 6300992) != 0 && *(uint32_t*)(anon15 + 6300864) == 0)
				{
					uint64_t phi26;
					if (*(uint32_t*)(anon15 + 6300992) < 3)
					{
						puts((uint8_t*)0x401d7b);
					}
					anon25 = phi12 * 12;
					anon24 = (uint32_t*)(anon25 + 6301632);
					int64_t anon23 = (__sext int64_t)*anon24;
					if (*(uint32_t*)((anon23 << 2) + 6300864) == 0 && *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon25 + 6301636) << 2) + 6300864) == 0)
					{
						phi26 = anon23;
					}
					if (*(uint32_t*)((anon23 << 2) + 6300864) != 0 || *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon25 + 6301636) << 2) + 6300864) != 0 && *(uint32_t*)((anon23 << 2) + 6300864) == 0 || *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon25 + 6301640) << 2) + 6300864) != 0 && *(uint32_t*)((anon23 << 2) + 6300864) == 0 && *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon25 + 6301636) << 2) + 6300864) == 0)
					{
						puts((uint8_t*)0x401d8e);
						phi26 = (__sext int64_t)*anon24;
					}
					if (*(uint32_t*)((phi26 << 2) + 6301504) != 0 || *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon25 + 6301636) << 2) + 6301504) != 0 && *(uint32_t*)((phi26 << 2) + 6301504) == 0 || *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon25 + 6301640) << 2) + 6301504) != 0 && *(uint32_t*)((phi26 << 2) + 6301504) == 0 && *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon25 + 6301636) << 2) + 6301504) == 0)
					{
						puts((uint8_t*)0x401da0);
					}
					printf((uint8_t*)0x401e58);
					uint32_t* anon27 = (uint32_t*)(anon15 + 6301248);
					if (*anon27 == 0)
					{
						*anon18 = *anon18 + 10;
						*anon27 = 1;
					}
				}
			}
			else if (*(uint32_t*)(anon15 + 6300992) != 0 && *anon14 == 0 && *(uint32_t*)(anon15 + 6300864) == 0 && anon19 == *anon20 && *anon21 == 3 || *anon14 != 0 && *(uint32_t*)(anon15 + 6300992) != 0 && *(uint32_t*)(anon15 + 6300864) == 0 && anon19 == *anon20 && *anon21 == 3 || *(uint32_t*)(anon15 + 6300992) != 0 && anon19 != *anon20 && *anon14 == 0 && *(uint32_t*)(anon15 + 6300864) == 0 || *anon14 != 0 && anon19 != *anon20 && *(uint32_t*)(anon15 + 6300992) != 0 && *(uint32_t*)(anon15 + 6300864) == 0)
			{
				*anon22 = 0;
				uint64_t anon28 = random();
				uint32_t anon29 = (uint32_t)anon28;
				*(uint32_t*)(((__sext int64_t)(anon29 + (((uint32_t)((anon28 & 0xffffffff) * 2290649225 >> 32) + anon29 >> 4) - (anon29 >> 31)) * 4294967266) << 2) + 6301504) = 1;
				uint64_t anon30 = random();
				printf((uint8_t*)0x401e28);
				*anon18 = *anon18 - 10;
				uint32_t anon32 = (uint32_t)anon30;
				int64_t anon31 = (__sext int64_t)(anon32 + ((uint32_t)((anon30 & 0xffffffff) * 2290649225 + (anon30 << 32) >> 36) - (anon32 >> 31)) * 4294967266);
				phi_in9 = anon31;
				phi_in10 = anon31;
				dispatch11 = 0;
			}
		}
		if (*(uint32_t*)(anon15 + 6300992) != 0 && dispatch11 == 0 && *anon14 == 0 && *(uint32_t*)(anon15 + 6300864) == 0 && anon19 == *anon20 && *anon21 == 3 && *anon22 == 0 || *anon14 != 0 && dispatch11 == 0 && *(uint32_t*)(anon15 + 6300992) != 0 && *(uint32_t*)(anon15 + 6300864) == 0 && anon19 == *anon20 && *anon21 == 3 && *anon22 == 0 || *(uint32_t*)(anon15 + 6300992) != 0 && anon19 != *anon20 && dispatch11 == 0 && *anon14 == 0 && *(uint32_t*)(anon15 + 6300864) == 0 && *anon22 == 0 || *anon14 != 0 && anon19 != *anon20 && dispatch11 == 0 && *(uint32_t*)(anon15 + 6300992) != 0 && *(uint32_t*)(anon15 + 6300864) == 0 && *anon22 == 0 || dispatch11 == 1)
		{
			anon34 = (struct _IO_FILE**)0x602480;
			uint32_t anon33 = _IO_getc(*anon34);
			dispatch16 = 2;
			anon35 = (uint8_t)anon33;
			if (anon35 == 113)
			{
				break;
			}
		}
		if ((anon35 == 108) && (*(uint32_t*)(anon15 + 6300992) != 0 && dispatch11 == 0 && *anon14 == 0 && *(uint32_t*)(anon15 + 6300864) == 0 && anon19 == *anon20 && *anon21 == 3 && *anon22 == 0 || *anon14 != 0 && dispatch11 == 0 && *(uint32_t*)(anon15 + 6300992) != 0 && *(uint32_t*)(anon15 + 6300864) == 0 && anon19 == *anon20 && *anon21 == 3 && *anon22 == 0 || *(uint32_t*)(anon15 + 6300992) != 0 && anon19 != *anon20 && dispatch11 == 0 && *anon14 == 0 && *(uint32_t*)(anon15 + 6300864) == 0 && *anon22 == 0 || *anon14 != 0 && anon19 != *anon20 && dispatch11 == 0 && *(uint32_t*)(anon15 + 6300992) != 0 && *(uint32_t*)(anon15 + 6300864) == 0 && *anon22 == 0 || dispatch11 == 1))
		{
			uint16_t** anon36 = __ctype_b_loc();
			phi_in9 = phi12;
			phi_in10 = phi13;
			phi37 = anon36;
			dispatch11 = 0;
		}
	}
	if (dispatch16 == 3)
	{
		puts((uint8_t*)0x401d36);
		*anon18 = *anon18 - 50;
	}
	if (dispatch16 == 1)
	{
		puts((uint8_t*)0x401d62);
		while (true)
		{
			uint64_t anon38 = random();
			uint32_t anon39 = (uint32_t)anon38;
			*anon20 = anon39 + (((uint32_t)((anon38 & 0xffffffff) * 2290649225 >> 32) + anon39 >> 4) - (anon39 >> 31)) * 4294967266;
		}
	}
	if (dispatch16 == 0)
	{
		puts((uint8_t*)0x401d2a);
		*anon18 = *anon18 - 100;
	}
	if (dispatch16 == 2 || dispatch16 == 3 || dispatch16 == 0)
	{
		printf((uint8_t*)0x401cf1);
		exit(0);
	}
	q(4200890, phi13 & 0xffffffff);
	printf((uint8_t*)0x401dba);
	uint16_t** anon40 = __ctype_b_loc();
	phi37 = anon40;
	dispatch11 = 1;
	int64_t anon41 = (__sext int64_t)anon35;
	if ((*(uint8_t*)(*(uint64_t*)anon40 + (anon41 >> 7 | 1)) & 8) != 0)
	{
		uint32_t phi43;
		uint32_t anon42 = _IO_getc(*anon34);
		uint32_t anon44 = (uint32_t)(anon41 + 4294967248);
		phi43 = anon44;
		uint32_t anon45 = anon42 << 24 >> 24;
		if ((*(uint8_t*)(*(uint64_t*)phi37 + ((__zext uint64_t)anon45 << 1 | 1)) & 8) != 0)
		{
			phi43 = anon44 * 10 + anon45 - 48;
		}
		if (*anon24 != phi43 && *(uint32_t*)(anon25 + 6301636) != phi43)
		{
			phi_in9 = phi12;
			phi_in10 = phi13;
			dispatch11 = 0;
		}
		if (*anon24 == phi43 || *anon24 != phi43 && *(uint32_t*)(anon25 + 6301636) == phi43 || *anon24 != phi43 && *(uint32_t*)(anon25 + 6301636) != phi43 && *(uint32_t*)(anon25 + 6301640) == phi43)
		{
			int64_t anon46 = (__sext int64_t)phi43;
			phi_in9 = anon46;
			phi_in10 = anon46;
			dispatch11 = 0;
		}
	}
}
void __libc_csu_init(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	_init(4201539);
	(*(void(**)(uint64_t, uint64_t, uint64_t))0x6021e8)(arg1 & 0xffffffff, arg2, arg3);
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
