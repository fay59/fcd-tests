#include "tests/bin/1994-dodsond2.h"

void _init(uint64_t arg0)
{
	if (*(uint64_t*)0x6023d0 != 0)
	{
		__gmon_start__(4195749);
	}
	return;
}
void getpid(uint64_t arg0)
{
	__indirect_jump(*(uint64_t*)0x602400);
}
void __gmon_start__(uint64_t arg0)
{
	__indirect_jump(*(uint64_t*)0x602418);
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
			phi7 = phi6;
			*phi1 = *anon8;
			*anon8 = phi7;
			phi10 = *anon8;
		}
		if (*anon4 >= *phi1 && *phi1 < *anon8 || *anon4 < *phi1 && *anon4 < *anon8 || *anon4 >= *anon8 && *anon4 < *phi1)
		{
			phi11 = phi7;
			*phi1 = phi9;
			*anon4 = phi10;
			if (*anon4 > *phi1)
			{
				phi11 = *anon8;
			}
		}
		if (phi11 != 255)
		{
			uint64_t anon12 = phi3 + 12;
			phi1 = (uint32_t*)anon12;
			phi_in2 = anon12;
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
	uint32_t phi_in5;
	uint64_t phi10;
	uint64_t phi15;
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
	phi_in5 = anon6;
	uint64_t phi7 = arg3 & 0xffffffff;
	uint32_t phi8 = anon6;
	uint32_t phi9 = anon3;
	*(uint64_t*)(phi10 + 48) = 0;
	uint64_t anon11 = (uint64_t)&alloca1;
	phi10 = anon11;
	uint32_t dispatch12 = 0;
	do
	{
		uint32_t phi16;
		uint64_t phi17;
		uint32_t phi18;
		uint32_t phi19;
		uint64_t phi20;
		while (true)
		{
			uint32_t* anon13;
			uint32_t phi21;
			uint32_t phi22;
			uint64_t phi23;
			uint64_t phi24;
			uint32_t phi25;
			uint64_t phi_in26;
			uint64_t phi_in27;
			uint32_t phi30;
			uint32_t phi31;
			uint32_t phi_in32;
			uint32_t phi_in33;
			uint64_t phi34;
			uint32_t phi35;
			uint64_t phi36;
			uint32_t phi39;
			uint32_t phi_in40;
			uint32_t phi41;
			uint32_t phi42;
			uint32_t phi43;
			uint32_t phi44;
			uint32_t phi45;
			uint32_t phi_in46;
			uint32_t phi_in47;
			uint64_t phi48;
			uint64_t phi_in49;
			uint64_t phi_in50;
			uint32_t phi_in51;
			uint32_t phi52;
			uint32_t phi53;
			uint32_t phi_in54;
			uint32_t phi_in55;
			uint32_t phi56;
			uint32_t phi57;
			uint64_t phi58;
			uint64_t phi59;
			uint32_t phi_in60;
			uint32_t phi61;
			uint32_t phi_in62;
			uint32_t phi63;
			uint32_t phi64;
			uint64_t phi65;
			uint32_t phi66;
			uint32_t phi67;
			uint64_t phi68;
			uint64_t phi69;
			uint32_t phi72;
			uint32_t phi73;
			uint32_t phi_in74;
			uint32_t phi75;
			uint32_t phi76;
			uint32_t phi77;
			uint32_t phi_in78;
			uint64_t phi_in79;
			uint64_t phi_in80;
			uint64_t phi_in81;
			uint32_t phi82;
			uint32_t phi_in83;
			uint32_t phi_in84;
			uint32_t phi_in85;
			uint64_t phi86;
			uint64_t phi87;
			uint64_t phi88;
			uint64_t phi89;
			uint64_t phi90;
			uint32_t phi91;
			uint32_t phi92;
			uint32_t phi93;
			uint32_t phi94;
			uint32_t phi_in95;
			uint32_t phi_in96;
			uint32_t phi_in97;
			uint32_t phi98;
			uint32_t phi_in99;
			uint64_t phi100;
			uint64_t phi101;
			uint32_t phi104;
			uint32_t phi105;
			uint32_t phi107;
			uint32_t phi_in108;
			uint32_t phi109;
			uint32_t phi_in110;
			uint32_t phi_in111;
			uint32_t phi112;
			uint32_t phi113;
			uint32_t phi_in114;
			uint32_t phi115;
			uint32_t phi_in116;
			uint32_t phi117;
			uint32_t phi118;
			uint32_t phi119;
			uint32_t phi_in120;
			uint64_t phi121;
			uint32_t phi122;
			uint32_t phi123;
			uint32_t phi124;
			uint64_t phi_in125;
			uint64_t phi_in126;
			uint64_t phi_in127;
			uint32_t phi128;
			uint32_t phi129;
			uint32_t phi_in130;
			uint32_t phi_in131;
			uint32_t phi132;
			uint32_t phi133;
			uint32_t phi_in134;
			uint32_t phi135;
			uint32_t phi136;
			uint32_t phi137;
			uint64_t phi_in138;
			uint32_t phi139;
			uint32_t phi140;
			uint32_t phi141;
			uint64_t phi142;
			uint64_t phi143;
			uint64_t phi144;
			uint64_t phi145;
			uint32_t phi146;
			uint32_t phi147;
			uint32_t phi148;
			uint32_t phi149;
			uint32_t phi150;
			uint64_t phi151;
			uint32_t phi152;
			uint32_t phi153;
			uint32_t phi154;
			uint32_t phi_in155;
			uint32_t phi_in156;
			uint32_t phi_in157;
			uint32_t phi158;
			uint32_t phi159;
			uint32_t phi160;
			uint64_t phi161;
			uint32_t phi162;
			uint64_t phi163;
			uint64_t phi164;
			uint64_t phi_in167;
			uint32_t phi_in168;
			uint32_t phi_in169;
			uint32_t phi170;
			uint32_t phi171;
			uint32_t phi172;
			uint32_t phi173;
			uint32_t phi174;
			uint32_t phi_in175;
			uint32_t phi_in176;
			uint32_t phi177;
			uint64_t phi_in178;
			uint32_t phi179;
			uint64_t phi180;
			uint64_t phi_in181;
			uint32_t phi_in182;
			uint64_t phi_in183;
			uint64_t phi_in184;
			uint64_t phi185;
			uint32_t phi_in186;
			uint32_t phi_in187;
			uint32_t phi188;
			uint32_t phi189;
			uint32_t phi190;
			uint32_t phi191;
			uint32_t phi192;
			uint32_t phi_in193;
			uint32_t phi_in194;
			uint32_t phi195;
			uint32_t phi_in196;
			uint32_t phi197;
			uint32_t phi_in198;
			uint32_t phi_in199;
			uint64_t phi_in200;
			uint32_t phi201;
			uint32_t phi202;
			uint64_t phi203;
			uint32_t phi204;
			uint32_t phi_in205;
			uint32_t phi206;
			uint32_t phi207;
			uint32_t phi208;
			uint32_t phi209;
			uint32_t phi210;
			uint32_t phi211;
			uint32_t phi212;
			uint32_t phi213;
			uint32_t phi214;
			uint32_t phi215;
			uint32_t phi216;
			uint32_t phi217;
			uint64_t phi218;
			uint32_t phi219;
			uint64_t phi220;
			uint32_t phi221;
			uint32_t phi222;
			uint64_t phi223;
			uint64_t phi_in226;
			uint32_t phi227;
			uint32_t phi228;
			uint32_t phi_in229;
			uint32_t phi230;
			uint32_t phi231;
			uint32_t* anon232;
			int64_t anon233;
			int64_t anon234;
			int64_t anon235;
			uint64_t phi236;
			uint32_t phi237;
			uint32_t phi_in238;
			uint64_t phi239;
			uint32_t phi240;
			uint64_t phi241;
			uint32_t phi_in242;
			uint32_t phi243;
			uint64_t phi244;
			uint64_t phi245;
			uint32_t phi_in364;
			uint32_t phi_in365;
			uint32_t phi_in366;
			uint32_t phi_in367;
			uint64_t phi_in368;
			if (dispatch12 == 0)
			{
				int64_t anon14 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi10 + 48) + *(uint64_t*)(phi10 + 8) + 6301632);
				anon13 = (uint32_t*)((anon14 << 2) + 6300992);
				*anon13 = phi8;
				phi15 = *(uint64_t*)(phi10 + 48);
				phi16 = phi_in4;
				phi17 = phi7 & 0xffffffff;
				phi18 = *anon13;
				phi19 = phi9;
				phi20 = phi10;
				if (phi9 < *anon13)
				{
					*(uint64_t*)(phi10 + 16) = anon14 * 12;
					*(uint32_t*)(phi10 + 40) = (uint32_t)phi7 + 5;
					phi21 = phi_in5;
					phi22 = phi_in4;
					phi23 = (__zext uint64_t)phi_in4;
					*(uint32_t*)(phi24 + 68) = phi_in5;
					phi25 = phi_in4;
					phi_in26 = 0;
					phi_in27 = phi10;
				}
				else 
				{
					break;
				}
			}
			if (dispatch12 == 1 || dispatch12 == 0 && phi9 < *anon13)
			{
				uint32_t phi_in28 = phi21;
				uint32_t phi_in29 = phi22;
				phi30 = phi25;
				phi31 = phi_in5;
				*(uint64_t*)(phi24 + 56) = phi_in26;
				phi24 = phi_in27;
				phi_in32 = phi_in28;
				phi_in33 = phi_in29;
				phi34 = *(uint64_t*)(phi24 + 56);
				phi23 = phi23 & 0xffffffff;
				phi35 = *(uint32_t*)(phi24 + 68);
				phi_in4 = phi30;
				phi_in5 = phi31;
				phi36 = phi24;
			}
			int64_t anon38 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi24 + 56) + *(uint64_t*)(phi24 + 16) + 6301632);
			uint32_t* anon37 = (uint32_t*)((anon38 << 2) + 6300992);
			if (phi31 < *anon37 && (dispatch12 == 1 || dispatch12 == 0 && phi9 < *anon13))
			{
				*anon37 = *(uint32_t*)(phi24 + 4);
				*(uint64_t*)(phi24 + 32) = anon38 * 12;
				*(uint32_t*)(phi24 + 44) = (uint32_t)phi23 + 6;
				phi39 = phi30;
				phi_in40 = phi30;
				phi41 = phi30;
				phi42 = phi30;
				phi43 = phi30;
				phi44 = phi30;
				phi45 = phi30;
				phi_in46 = phi30;
				phi_in47 = phi30;
				phi48 = (__zext uint64_t)phi30;
				phi_in49 = 0;
				phi_in50 = phi24;
			}
			if (dispatch12 == 2 || dispatch12 == 1 && phi31 < *anon37 || dispatch12 == 0 && phi9 < *anon13 && phi31 < *anon37)
			{
				phi_in51 = phi30;
				phi52 = phi39;
				phi53 = phi41;
				phi_in54 = phi42;
				phi_in55 = phi43;
				phi56 = phi44;
				phi57 = phi45;
				phi58 = phi48;
				*(uint64_t*)(phi59 + 72) = phi_in49;
				phi59 = phi_in50;
				phi_in60 = phi_in51;
				phi61 = phi52;
				phi_in62 = phi_in40;
				phi63 = phi53;
				phi42 = phi_in54;
				phi64 = phi_in55;
				phi65 = *(uint64_t*)(phi59 + 72);
				phi66 = phi_in46;
				phi67 = phi_in47;
				phi68 = phi58 & 0xffffffff;
				phi69 = phi59;
			}
			int64_t anon71 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi59 + 72) + *(uint64_t*)(phi59 + 32) + 6301632);
			uint32_t* anon70 = (uint32_t*)((anon71 << 2) + 6300992);
			if (*(uint32_t*)(phi59 + 4) < *anon70 && (dispatch12 == 2 || dispatch12 == 1 && phi31 < *anon37 || dispatch12 == 0 && phi9 < *anon13 && phi31 < *anon37))
			{
				*anon70 = *(uint32_t*)(phi59 + 24);
				*(uint32_t*)(phi59 + 64) = (uint32_t)phi58 + 7;
				phi72 = phi_in40;
				phi73 = phi_in54;
				phi_in74 = phi_in55;
				phi75 = phi56;
				phi76 = phi57;
				phi77 = phi_in46;
				phi_in78 = phi_in47;
				phi_in79 = phi59;
				phi_in80 = 0;
				phi_in81 = anon71 * 12;
			}
			if (dispatch12 == 3 || dispatch12 == 2 && *(uint32_t*)(phi59 + 4) < *anon70 || dispatch12 == 1 && phi31 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon70 || dispatch12 == 0 && phi9 < *anon13 && phi31 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon70)
			{
				phi82 = phi53;
				phi_in83 = phi73;
				phi_in84 = phi75;
				phi_in85 = phi76;
				phi86 = phi_in79;
				phi87 = phi_in80;
				phi88 = phi_in81;
				phi89 = phi58;
				phi90 = phi88;
				phi91 = phi_in51;
				phi92 = phi52;
				phi93 = phi72;
				phi94 = phi82;
				phi_in95 = phi_in83;
				phi_in96 = phi_in74;
				phi_in97 = phi_in84;
				phi98 = phi_in85;
				phi_in99 = phi77;
				phi67 = phi_in78;
				phi100 = phi86;
				phi101 = phi89 & 0xffffffff;
			}
			int64_t anon103 = (__sext int64_t)*(uint32_t*)(phi87 + phi88 + 6301632);
			uint32_t* anon102 = (uint32_t*)((anon103 << 2) + 6300992);
			if (*(uint32_t*)(phi86 + 24) < *anon102 && (dispatch12 == 3 || dispatch12 == 2 && *(uint32_t*)(phi59 + 4) < *anon70 || dispatch12 == 1 && phi31 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon70 || dispatch12 == 0 && phi9 < *anon13 && phi31 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon70))
			{
				*anon102 = *(uint32_t*)(phi86 + 28);
				phi104 = phi_in51;
				uint32_t anon106 = (uint32_t)phi89 + 8;
				phi105 = anon106;
				phi107 = anon106;
				phi_in108 = phi_in83;
				phi109 = phi_in74;
				phi_in110 = anon106;
				phi_in111 = anon106;
				phi112 = phi_in84;
				phi113 = anon106;
				phi_in114 = anon106;
				phi115 = anon106;
				phi_in116 = anon106;
				phi117 = anon106;
				phi118 = anon106;
				phi119 = anon106;
				phi_in120 = phi_in78;
				phi121 = phi88;
				phi122 = anon106;
				phi123 = anon106;
				phi124 = anon106;
				phi_in125 = phi86;
				phi_in126 = 0;
				phi_in127 = anon103 * 12;
			}
			if (dispatch12 == 4 || dispatch12 == 3 && *(uint32_t*)(phi86 + 24) < *anon102 || dispatch12 == 2 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 || dispatch12 == 1 && phi31 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 || dispatch12 == 0 && phi9 < *anon13 && phi31 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102)
			{
				phi128 = phi52;
				phi129 = phi72;
				phi_in130 = phi82;
				phi_in131 = phi107;
				phi132 = phi_in108;
				phi133 = phi109;
				phi_in134 = phi113;
				phi135 = phi117;
				phi136 = phi77;
				phi137 = phi119;
				phi_in138 = phi121;
				phi139 = phi122;
				phi140 = phi123;
				phi141 = phi124;
				phi142 = phi_in125;
				phi143 = phi_in126;
				phi144 = phi_in127;
				phi145 = phi144;
				phi_in51 = phi104;
				phi146 = phi128;
				phi147 = phi129;
				phi148 = phi105;
				phi149 = phi_in130;
				phi150 = phi_in131;
				phi151 = phi143;
				phi152 = phi_in110;
				phi153 = phi_in111;
				phi154 = phi_in134;
				phi_in155 = phi_in114;
				phi_in156 = phi115;
				phi_in157 = phi_in85;
				phi158 = phi_in116;
				phi159 = phi135;
				phi77 = phi136;
				phi160 = phi118;
				phi161 = phi_in138;
				phi123 = phi140;
				phi162 = phi141;
				phi163 = phi142;
				phi164 = phi89;
			}
			int64_t anon166 = (__sext int64_t)*(uint32_t*)(phi143 + phi144 + 6301632);
			uint32_t* anon165 = (uint32_t*)((anon166 << 2) + 6300992);
			if (*(uint32_t*)(phi142 + 28) < *anon165 && (dispatch12 == 4 || dispatch12 == 3 && *(uint32_t*)(phi86 + 24) < *anon102 || dispatch12 == 2 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 || dispatch12 == 1 && phi31 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 || dispatch12 == 0 && phi9 < *anon13 && phi31 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102))
			{
				*anon165 = *(uint32_t*)(phi142 + 40);
				*(uint32_t*)(phi142 + 120) = (uint32_t)phi89 + 9;
				phi_in167 = 0;
				phi_in168 = phi_in130;
				phi_in169 = phi_in131;
				phi170 = phi132;
				phi171 = phi133;
				phi172 = phi_in110;
				phi173 = phi_in111;
				phi174 = phi_in134;
				phi_in175 = phi_in114;
				phi_in176 = phi_in85;
				phi177 = phi_in116;
				phi119 = phi137;
				phi_in178 = phi143;
				phi179 = phi_in120;
				phi180 = phi_in138;
				phi_in181 = phi144;
				phi_in182 = phi139;
				phi_in183 = phi142;
				phi_in184 = phi89 & 0xffffffff;
			}
			if (dispatch12 == 5 || dispatch12 == 4 && *(uint32_t*)(phi142 + 28) < *anon165 || dispatch12 == 3 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 || dispatch12 == 2 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 || dispatch12 == 1 && phi31 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 || dispatch12 == 0 && phi9 < *anon13 && phi31 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165)
			{
				phi185 = phi_in167;
				phi_in186 = phi104;
				phi_in187 = phi105;
				phi188 = phi170;
				phi189 = phi171;
				phi190 = phi172;
				phi191 = phi173;
				phi192 = phi174;
				phi_in193 = phi115;
				phi_in194 = phi177;
				phi195 = phi135;
				phi_in196 = phi136;
				phi197 = phi118;
				phi_in198 = phi119;
				phi_in199 = phi179;
				phi_in200 = phi_in181;
				phi201 = phi140;
				phi202 = phi141;
				phi203 = phi_in183;
				phi204 = phi_in186;
				phi_in205 = phi128;
				phi206 = phi129;
				phi207 = phi_in187;
				phi_in130 = phi_in168;
				phi208 = phi_in169;
				phi209 = phi189;
				phi210 = phi190;
				phi_in111 = phi191;
				phi211 = phi_in193;
				phi212 = phi_in176;
				phi213 = phi_in194;
				phi214 = phi195;
				phi215 = phi_in196;
				phi216 = phi197;
				phi217 = phi_in198;
				phi218 = phi_in178;
				phi219 = phi_in199;
				phi220 = phi180;
				phi221 = phi_in182;
				phi222 = phi201;
				phi_in183 = phi203;
				phi223 = phi_in184;
			}
			int64_t anon225 = (__sext int64_t)*(uint32_t*)(phi185 + anon166 * 12 + 6301632);
			uint32_t* anon224 = (uint32_t*)((anon225 << 2) + 6300992);
			if (*(uint32_t*)(phi203 + 40) < *anon224 && (dispatch12 == 5 || dispatch12 == 4 && *(uint32_t*)(phi142 + 28) < *anon165 || dispatch12 == 3 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 || dispatch12 == 2 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 || dispatch12 == 1 && phi31 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 || dispatch12 == 0 && phi9 < *anon13 && phi31 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165))
			{
				*anon224 = *(uint32_t*)(phi203 + 44);
				phi_in226 = 0;
				phi227 = phi_in187;
				phi228 = phi_in168;
				phi_in229 = phi_in169;
				phi170 = phi188;
				phi230 = phi192;
				phi231 = phi_in175;
				anon235 = (__sext int64_t)*(uint32_t*)(phi236 + anon225 * 12 + 6301632);
				anon234 = anon235 * 12;
				anon233 = (__sext int64_t)*(uint32_t*)(anon234 + 6301636);
				anon232 = (uint32_t*)((anon233 << 2) + 6300992);
				*anon232 = phi_in193;
				phi237 = phi_in176;
				phi_in238 = phi_in196;
				phi239 = phi_in178;
				phi240 = phi_in199;
				phi241 = phi_in200;
				phi_in242 = phi_in182;
				phi243 = phi202;
				phi244 = phi203;
				phi245 = phi_in184;
			}
			if (dispatch12 == 6 || dispatch12 == 5 && *(uint32_t*)(phi203 + 40) < *anon224 || dispatch12 == 4 && *(uint32_t*)(phi142 + 28) < *anon165 && *(uint32_t*)(phi203 + 40) < *anon224 || dispatch12 == 3 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 && *(uint32_t*)(phi203 + 40) < *anon224 || dispatch12 == 2 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 && *(uint32_t*)(phi203 + 40) < *anon224 || dispatch12 == 1 && phi31 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 && *(uint32_t*)(phi203 + 40) < *anon224 || dispatch12 == 0 && phi9 < *anon13 && phi31 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 && *(uint32_t*)(phi203 + 40) < *anon224)
			{
				phi236 = phi_in226;
				uint32_t phi_in246 = phi128;
				uint32_t phi247 = phi129;
				uint32_t phi248 = phi227;
				uint32_t phi249 = phi228;
				uint32_t phi_in250 = phi170;
				uint32_t phi251 = phi189;
				uint32_t phi_in252 = phi190;
				uint32_t phi253 = phi191;
				uint32_t phi254 = phi112;
				uint32_t phi255 = phi237;
				uint32_t phi_in256 = phi195;
				uint32_t phi257 = phi197;
				phi_in178 = phi239;
				uint32_t phi_in258 = phi240;
				*(uint64_t*)(phi259 + 96) = phi180;
				*(uint64_t*)(phi259 + 112) = phi241;
				uint32_t phi260 = phi201;
				uint32_t phi261 = phi243;
				uint64_t phi259 = phi244;
				uint64_t phi_in262 = phi245;
				uint32_t phi263 = phi_in246;
				uint32_t phi264 = phi247;
				phi_in187 = phi248;
				uint32_t phi265 = phi249;
				phi_in169 = phi_in229;
				uint32_t phi_in266 = phi_in250;
				phi209 = phi251;
				phi190 = phi_in252;
				uint32_t phi267 = phi253;
				uint32_t phi268 = phi231;
				phi_in193 = *anon232;
				uint32_t phi269 = phi255;
				phi213 = phi_in194;
				uint32_t phi270 = phi_in256;
				uint32_t phi271 = phi_in238;
				uint32_t phi_in272 = phi_in198;
				phi240 = phi_in258;
				uint64_t phi273 = *(uint64_t*)(phi259 + 96);
				uint64_t phi274 = *(uint64_t*)(phi259 + 112);
				uint32_t phi275 = phi_in242;
				uint32_t phi276 = phi260;
				uint32_t phi277 = phi261;
				uint64_t phi278 = phi259;
				uint64_t phi279 = phi_in262;
				uint32_t* anon280 = (uint32_t*)((anon235 << 2) + 6300992);
				if (*(uint32_t*)(phi259 + 44) < *anon280)
				{
					*anon280 = *(uint32_t*)(phi259 + 64);
					uint32_t phi_in281 = phi_in186;
					uint32_t phi282 = phi_in246;
					uint32_t phi_in283 = phi247;
					uint32_t phi284 = phi249;
					uint32_t phi285 = phi_in229;
					uint32_t phi286 = phi_in250;
					uint32_t phi287 = phi251;
					uint32_t phi_in288 = phi_in252;
					uint32_t phi_in289 = phi253;
					uint32_t phi290 = phi254;
					uint32_t phi291 = phi230;
					uint32_t phi_in292 = *anon232;
					phi213 = phi_in194;
					uint32_t phi293 = phi_in256;
					uint32_t phi294 = phi_in238;
					phi197 = phi257;
					uint32_t phi_in295 = phi_in198;
					uint64_t phi296 = phi_in178;
					uint32_t phi297 = phi_in258;
					*(uint64_t*)(phi259 + 104) = *(uint64_t*)(phi259 + 112);
					uint32_t phi298 = phi_in242;
					uint64_t phi299 = phi_in262;
					if (*(uint32_t*)(phi259 + 64) < *anon232)
					{
						uint32_t phi300 = phi_in186;
						uint32_t phi301 = phi_in246;
						uint32_t phi302 = phi248;
						uint32_t phi303 = phi_in229;
						*(uint32_t*)(phi304 + 96) = phi_in250;
						*(uint32_t*)(phi304 + 124) = phi_in252;
						uint64_t phi305 = phi259;
						*(uint64_t*)(phi304 + 80) = anon233;
						uint32_t phi_in306 = phi254;
						uint32_t phi307 = phi255;
						uint64_t phi308 = phi_in178;
						*(uint64_t*)(phi304 + 104) = *(uint64_t*)(phi259 + 96);
						uint64_t phi309 = *(uint64_t*)(phi259 + 112);
						uint64_t phi_in310 = phi_in262;
						if (phi231 < *anon232)
						{
							*(uint32_t*)(phi259 + 124) = phi230;
							*(uint64_t*)(phi259 + 104) = *(uint64_t*)(phi259 + 96);
							*(uint32_t*)(phi259 + 96) = phi254;
							*(uint64_t*)(phi259 + 88) = phi_in178;
							*(uint64_t*)(phi259 + 80) = anon233;
							w(4197873, anon11, (__sext int64_t)*anon232, (__zext uint64_t)*anon232);
							phi300 = *(uint32_t*)(arg1 - 96);
							phi301 = *(uint32_t*)(arg1 - 96);
							phi247 = *(uint32_t*)(arg1 - 96);
							phi302 = *(uint32_t*)(arg1 - 68);
							phi249 = *(uint32_t*)(arg1 - 96);
							phi303 = *(uint32_t*)(arg1 - 68);
							*(uint32_t*)(phi304 + 96) = *(uint32_t*)(arg1 - 96);
							phi251 = *(uint32_t*)(arg1 - 96);
							*(uint32_t*)(phi304 + 124) = *(uint32_t*)(arg1 - 68);
							phi305 = anon11;
							phi253 = *(uint32_t*)(arg1 - 68);
							*(uint64_t*)(phi304 + 80) = *(uint64_t*)(arg1 - 112);
							phi_in306 = *(uint32_t*)(arg1 - 96);
							phi307 = *(uint32_t*)(arg1 - 96);
							phi_in238 = *(uint32_t*)(arg1 - 96);
							phi308 = *(uint64_t*)(arg1 - 104);
							phi_in258 = *(uint32_t*)(arg1 - 96);
							*(uint64_t*)(phi304 + 104) = *(uint64_t*)(arg1 - 88);
							phi309 = *(uint64_t*)(arg1 - 80);
							phi_in310 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
						}
						uint32_t phi311 = phi300;
						uint32_t phi_in312 = phi301;
						uint32_t phi_in313 = phi247;
						uint32_t phi_in314 = phi302;
						uint32_t phi_in315 = phi249;
						uint32_t phi_in316 = phi303;
						uint32_t phi_in317 = *(uint32_t*)(phi304 + 96);
						uint32_t phi_in318 = phi251;
						uint64_t phi304 = phi305;
						uint32_t phi319 = phi307;
						*(uint64_t*)(phi304 + 88) = phi308;
						*(uint64_t*)(phi304 + 112) = phi309;
						uint32_t phi320 = phi_in312;
						uint32_t phi321 = phi_in313;
						uint32_t phi_in322 = phi_in314;
						uint32_t phi323 = phi_in315;
						*(uint32_t*)(phi259 + 112) = phi_in316;
						uint32_t phi324 = phi_in318;
						uint64_t phi325 = *(uint64_t*)(phi304 + 80);
						uint32_t phi_in326 = phi_in306;
						uint32_t phi327 = phi_in238;
						*(uint64_t*)(phi259 + 80) = *(uint64_t*)(phi304 + 88);
						uint32_t phi_in328 = phi_in258;
						*(uint64_t*)(phi259 + 96) = *(uint64_t*)(phi304 + 104);
						*(uint64_t*)(phi259 + 104) = *(uint64_t*)(phi304 + 112);
						uint64_t phi329 = phi_in310;
						int64_t anon330 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi304 + 80) * 12 + 6301636);
						if (phi253 < *(uint32_t*)((anon330 << 2) + 6300992))
						{
							*(uint32_t*)(phi304 + 96) = phi_in317;
							w(4197793, anon11, anon330, (__zext uint64_t)*(uint32_t*)(phi304 + 120));
							phi311 = *(uint32_t*)(arg1 - 96);
							phi320 = *(uint32_t*)(arg1 - 96);
							phi321 = *(uint32_t*)(arg1 - 96);
							phi_in322 = alloca1.field14;
							phi323 = *(uint32_t*)(arg1 - 96);
							phi304 = anon11;
							*(uint32_t*)(phi259 + 112) = alloca1.field14;
							phi_in317 = *(uint32_t*)(arg1 - 96);
							phi324 = *(uint32_t*)(arg1 - 96);
							phi325 = *(uint64_t*)(arg1 - 112);
							phi_in326 = *(uint32_t*)(arg1 - 96);
							phi319 = *(uint32_t*)(arg1 - 96);
							phi327 = *(uint32_t*)(arg1 - 96);
							*(uint64_t*)(phi259 + 80) = *(uint64_t*)(arg1 - 104);
							phi_in328 = *(uint32_t*)(arg1 - 96);
							*(uint64_t*)(phi259 + 96) = *(uint64_t*)(arg1 - 88);
							*(uint64_t*)(phi259 + 104) = *(uint64_t*)(arg1 - 80);
							phi329 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
						}
						phi_in281 = phi311;
						phi282 = phi320;
						uint32_t phi_in331 = phi321;
						*(uint32_t*)(phi259 + 88) = phi323;
						phi259 = phi304;
						phi260 = *(uint32_t*)(phi259 + 112);
						phi287 = phi324;
						phi255 = phi319;
						uint32_t phi_in332 = phi327;
						uint64_t phi_in333 = phi329;
						phi_in283 = phi_in331;
						phi248 = phi_in322;
						phi284 = *(uint32_t*)(phi259 + 88);
						phi285 = phi260;
						phi286 = phi_in317;
						phi_in288 = phi260;
						phi_in289 = phi260;
						phi290 = phi_in326;
						phi291 = phi260;
						phi231 = phi260;
						phi_in292 = phi260;
						phi213 = phi260;
						phi293 = phi260;
						phi294 = phi_in332;
						phi197 = phi260;
						phi_in295 = phi260;
						phi296 = *(uint64_t*)(phi259 + 80);
						phi297 = phi_in328;
						*(uint64_t*)(phi259 + 96) = *(uint64_t*)(phi259 + 96);
						*(uint64_t*)(phi259 + 104) = *(uint64_t*)(phi259 + 104);
						phi298 = phi260;
						phi261 = phi260;
						phi299 = phi_in333;
						int64_t anon334 = (__sext int64_t)*(uint32_t*)(phi325 * 12 + 6301640);
						if (phi260 < *(uint32_t*)((anon334 << 2) + 6300992))
						{
							*(uint32_t*)(phi259 + 112) = phi260;
							w(4197395, anon11, anon334, (__zext uint64_t)*(uint32_t*)(phi259 + 120));
							phi_in281 = *(uint32_t*)(arg1 - 104);
							phi282 = *(uint32_t*)(arg1 - 104);
							phi_in283 = *(uint32_t*)(arg1 - 104);
							phi248 = *(uint32_t*)(arg1 - 80);
							phi259 = anon11;
							phi284 = *(uint32_t*)(arg1 - 104);
							phi285 = *(uint32_t*)(arg1 - 80);
							phi286 = *(uint32_t*)(arg1 - 104);
							phi287 = *(uint32_t*)(arg1 - 104);
							phi_in288 = *(uint32_t*)(arg1 - 80);
							phi_in289 = *(uint32_t*)(arg1 - 80);
							phi290 = *(uint32_t*)(arg1 - 104);
							phi291 = *(uint32_t*)(arg1 - 80);
							phi231 = *(uint32_t*)(arg1 - 80);
							phi_in292 = *(uint32_t*)(arg1 - 80);
							phi255 = *(uint32_t*)(arg1 - 104);
							phi213 = *(uint32_t*)(arg1 - 80);
							phi293 = *(uint32_t*)(arg1 - 80);
							phi294 = *(uint32_t*)(arg1 - 104);
							phi197 = *(uint32_t*)(arg1 - 80);
							phi_in295 = *(uint32_t*)(arg1 - 80);
							phi296 = *(uint64_t*)(arg1 - 112);
							phi297 = *(uint32_t*)(arg1 - 104);
							*(uint64_t*)(phi259 + 96) = *(uint64_t*)(arg1 - 96);
							*(uint64_t*)(phi259 + 104) = *(uint64_t*)(arg1 - 88);
							phi298 = *(uint32_t*)(arg1 - 80);
							phi260 = *(uint32_t*)(arg1 - 80);
							phi261 = *(uint32_t*)(arg1 - 80);
							phi299 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
						}
					}
					*(uint32_t*)(phi259 + 88) = phi282;
					*(uint32_t*)(phi259 + 112) = phi248;
					uint32_t phi_in335 = phi284;
					uint32_t phi_in336 = phi285;
					uint32_t phi_in337 = phi286;
					uint32_t phi_in338 = phi287;
					uint32_t phi339 = phi290;
					uint32_t phi_in340 = phi291;
					phi268 = phi231;
					uint32_t phi_in341 = phi255;
					phi270 = phi293;
					uint32_t phi342 = phi294;
					phi257 = phi197;
					phi_in178 = phi296;
					uint32_t phi_in343 = phi297;
					phi274 = *(uint64_t*)(phi259 + 104);
					uint32_t phi_in344 = phi298;
					uint32_t phi_in345 = phi260;
					phi277 = phi261;
					uint64_t phi346 = phi299;
					phi_in186 = phi_in281;
					phi263 = *(uint32_t*)(phi259 + 88);
					phi264 = phi_in283;
					phi_in187 = *(uint32_t*)(phi259 + 112);
					phi265 = phi_in335;
					phi_in169 = phi_in336;
					phi_in266 = phi_in337;
					phi209 = phi_in338;
					phi190 = phi_in288;
					phi267 = phi_in289;
					phi254 = phi339;
					phi230 = phi_in340;
					phi_in193 = phi_in292;
					phi269 = phi_in341;
					phi271 = phi342;
					phi_in272 = phi_in295;
					phi240 = phi_in343;
					phi273 = *(uint64_t*)(phi259 + 96);
					phi275 = phi_in344;
					phi276 = phi_in345;
					phi278 = phi259;
					phi279 = phi346;
					int64_t anon348 = (__sext int64_t)*(uint32_t*)(anon234 + 6301640);
					uint32_t* anon347 = (uint32_t*)((anon348 << 2) + 6300992);
					if (*(uint32_t*)(phi259 + 64) < *anon347)
					{
						*anon347 = *(uint32_t*)(phi259 + 112);
						*(uint32_t*)(phi259 + 88) = phi_in281;
						uint32_t phi_in349 = *(uint32_t*)(phi259 + 88);
						uint32_t phi350 = phi_in283;
						*(uint32_t*)(phi259 + 112) = *(uint32_t*)(phi259 + 112);
						uint32_t phi351 = phi_in338;
						uint32_t phi352 = phi_in341;
						uint64_t phi353 = phi_in178;
						uint32_t phi354 = phi_in343;
						uint64_t phi355 = *(uint64_t*)(phi259 + 96);
						*(uint64_t*)(phi259 + 104) = phi274;
						int64_t anon357 = anon348 * 12;
						int64_t anon356 = (__sext int64_t)*(uint32_t*)(anon357 + 6301636);
						if (*(uint32_t*)(phi259 + 112) < *(uint32_t*)((anon356 << 2) + 6300992))
						{
							*(uint64_t*)(phi259 + 104) = phi274;
							*(uint64_t*)(phi259 + 80) = phi_in178;
							w(4197948, anon11, anon356, (__zext uint64_t)*(uint32_t*)(phi259 + 120));
							*(uint32_t*)(phi259 + 88) = *(uint32_t*)(arg1 - 104);
							phi_in349 = *(uint32_t*)(arg1 - 104);
							phi350 = *(uint32_t*)(arg1 - 104);
							*(uint32_t*)(phi259 + 112) = *(uint32_t*)(arg1 - 80);
							phi_in335 = *(uint32_t*)(arg1 - 104);
							phi_in337 = *(uint32_t*)(arg1 - 104);
							phi351 = *(uint32_t*)(arg1 - 104);
							phi339 = *(uint32_t*)(arg1 - 104);
							phi352 = *(uint32_t*)(arg1 - 104);
							phi342 = *(uint32_t*)(arg1 - 104);
							phi353 = *(uint64_t*)(arg1 - 112);
							phi354 = *(uint32_t*)(arg1 - 104);
							phi355 = *(uint64_t*)(arg1 - 96);
							*(uint64_t*)(phi259 + 104) = *(uint64_t*)(arg1 - 88);
							phi259 = anon11;
							phi346 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
						}
						phi_in186 = *(uint32_t*)(phi259 + 88);
						phi264 = phi350;
						phi277 = *(uint32_t*)(phi259 + 112);
						uint32_t phi_in358 = phi351;
						phi254 = phi339;
						phi269 = phi352;
						uint32_t phi_in359 = phi342;
						*(uint64_t*)(phi259 + 80) = phi353;
						uint32_t phi_in360 = phi354;
						*(uint64_t*)(phi259 + 96) = phi355;
						phi279 = phi346;
						phi263 = phi_in349;
						phi_in187 = phi277;
						phi265 = phi_in335;
						phi_in169 = phi277;
						phi_in266 = phi_in337;
						phi209 = phi_in358;
						phi190 = phi277;
						phi267 = phi277;
						phi230 = phi277;
						phi268 = phi277;
						phi_in193 = phi277;
						phi213 = phi277;
						phi270 = phi277;
						phi271 = phi_in359;
						phi257 = phi277;
						phi_in272 = phi277;
						phi_in178 = *(uint64_t*)(phi259 + 80);
						phi240 = phi_in360;
						phi273 = *(uint64_t*)(phi259 + 96);
						phi274 = *(uint64_t*)(phi259 + 104);
						phi275 = phi277;
						phi276 = phi277;
						phi278 = phi259;
						int64_t anon361 = (__sext int64_t)*(uint32_t*)(anon357 + 6301640);
						if (phi277 < *(uint32_t*)((anon361 << 2) + 6300992))
						{
							*(uint32_t*)(phi259 + 112) = phi277;
							*(uint32_t*)(phi259 + 88) = phi_in186;
							w(4197231, anon11, anon361, (__zext uint64_t)*(uint32_t*)(phi259 + 120));
							phi_in186 = alloca1.field8;
							phi263 = alloca1.field8;
							phi264 = alloca1.field8;
							phi_in187 = alloca1.field12;
							phi265 = alloca1.field8;
							phi_in169 = alloca1.field12;
							phi_in266 = alloca1.field8;
							phi209 = alloca1.field8;
							phi190 = alloca1.field12;
							phi267 = alloca1.field12;
							phi254 = alloca1.field8;
							phi230 = alloca1.field12;
							phi268 = alloca1.field12;
							phi_in193 = alloca1.field12;
							phi269 = alloca1.field8;
							phi213 = alloca1.field12;
							phi270 = alloca1.field12;
							phi271 = alloca1.field8;
							phi257 = alloca1.field12;
							phi_in272 = alloca1.field12;
							phi_in178 = alloca1.field7;
							phi240 = alloca1.field8;
							phi273 = alloca1.field10;
							phi274 = alloca1.field11;
							phi275 = alloca1.field12;
							phi276 = alloca1.field12;
							phi277 = alloca1.field12;
							phi278 = anon11;
							phi279 = (__zext uint64_t)alloca1.field8;
						}
					}
				}
				phi204 = phi_in186;
				phi128 = phi263;
				phi129 = phi264;
				phi228 = phi265;
				phi188 = phi_in266;
				phi191 = phi267;
				phi112 = phi254;
				uint32_t phi_in362 = phi230;
				phi231 = phi268;
				phi211 = phi_in193;
				phi237 = phi269;
				phi195 = phi270;
				phi_in196 = phi271;
				phi197 = phi257;
				phi180 = phi273;
				phi241 = phi274;
				phi_in242 = phi275;
				phi201 = phi276;
				phi243 = phi277;
				phi244 = phi278;
				phi245 = phi279;
				phi_in205 = phi128;
				phi206 = phi129;
				phi207 = phi_in187;
				phi_in130 = phi228;
				phi208 = phi_in169;
				phi210 = phi190;
				phi_in111 = phi191;
				phi192 = phi_in362;
				phi_in175 = phi231;
				phi212 = phi237;
				phi214 = phi195;
				phi215 = phi_in196;
				phi216 = phi197;
				phi217 = phi_in272;
				phi218 = phi_in178;
				phi219 = phi240;
				phi220 = phi180;
				phi_in200 = phi241;
				phi221 = phi_in242;
				phi222 = phi201;
				phi202 = phi243;
				phi_in183 = phi244;
				phi223 = phi245;
				phi_in226 = phi236 + 4;
				phi_in186 = phi204;
				phi227 = phi_in187;
				phi_in229 = phi_in169;
				phi170 = phi188;
				phi189 = phi209;
				phi230 = phi_in362;
				*anon232 = phi211;
				phi_in194 = phi213;
				phi_in238 = phi_in196;
				phi_in198 = phi_in272;
				phi239 = phi_in178;
				dispatch12 = 6;
			}
			if (*(uint32_t*)(phi203 + 40) >= *anon224 && dispatch12 == 5 || *(uint32_t*)(phi203 + 40) >= *anon224 && dispatch12 == 4 && *(uint32_t*)(phi142 + 28) < *anon165 || *(uint32_t*)(phi203 + 40) >= *anon224 && dispatch12 == 3 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 || *(uint32_t*)(phi203 + 40) >= *anon224 && dispatch12 == 2 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 || *(uint32_t*)(phi203 + 40) >= *anon224 && dispatch12 == 1 && phi31 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 || *(uint32_t*)(phi203 + 40) >= *anon224 && dispatch12 == 0 && phi9 < *anon13 && phi31 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 || dispatch12 == 6 && phi236 == 8 || dispatch12 == 5 && *(uint32_t*)(phi203 + 40) < *anon224 && phi236 == 8 || dispatch12 == 4 && *(uint32_t*)(phi142 + 28) < *anon165 && *(uint32_t*)(phi203 + 40) < *anon224 && phi236 == 8 || dispatch12 == 3 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 && *(uint32_t*)(phi203 + 40) < *anon224 && phi236 == 8 || dispatch12 == 2 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 && *(uint32_t*)(phi203 + 40) < *anon224 && phi236 == 8 || dispatch12 == 1 && phi31 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 && *(uint32_t*)(phi203 + 40) < *anon224 && phi236 == 8 || dispatch12 == 0 && phi9 < *anon13 && phi31 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 && *(uint32_t*)(phi203 + 40) < *anon224 && phi236 == 8)
			{
				phi104 = phi204;
				phi146 = phi_in205;
				phi129 = phi206;
				phi105 = phi207;
				phi149 = phi_in130;
				phi_in169 = phi208;
				phi132 = phi188;
				phi133 = phi209;
				phi172 = phi210;
				phi174 = phi192;
				phi115 = phi211;
				phi_in176 = phi212;
				phi158 = phi213;
				phi135 = phi214;
				phi136 = phi215;
				phi118 = phi216;
				phi119 = phi217;
				phi_in178 = phi218;
				phi179 = phi219;
				phi180 = phi220;
				phi_in182 = phi221;
				phi140 = phi222;
				phi141 = phi202;
				phi_in184 = phi223;
				phi145 = phi_in200;
				phi_in51 = phi104;
				phi147 = phi129;
				phi148 = phi105;
				phi150 = phi_in169;
				phi151 = phi_in178;
				phi152 = phi172;
				phi153 = phi_in111;
				phi154 = phi174;
				phi_in155 = phi_in175;
				phi_in156 = phi115;
				phi_in157 = phi_in176;
				phi159 = phi135;
				phi77 = phi136;
				phi160 = phi118;
				phi137 = phi119;
				phi_in120 = phi179;
				phi161 = phi180;
				phi139 = phi_in182;
				phi123 = phi140;
				phi162 = phi141;
				phi163 = phi_in183;
				phi164 = phi_in184;
				phi_in167 = phi185 + 4;
				phi128 = phi146;
				phi_in168 = phi149;
				phi170 = phi132;
				phi171 = phi133;
				phi173 = phi_in111;
				phi177 = phi158;
				phi_in181 = phi_in200;
				dispatch12 = 5;
			}
			if (*(uint32_t*)(phi142 + 28) >= *anon165 && dispatch12 == 4 || *(uint32_t*)(phi142 + 28) >= *anon165 && dispatch12 == 3 && *(uint32_t*)(phi86 + 24) < *anon102 || *(uint32_t*)(phi142 + 28) >= *anon165 && dispatch12 == 2 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 || *(uint32_t*)(phi142 + 28) >= *anon165 && dispatch12 == 1 && phi31 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 || *(uint32_t*)(phi142 + 28) >= *anon165 && dispatch12 == 0 && phi9 < *anon13 && phi31 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 || *(uint32_t*)(phi203 + 40) >= *anon224 && dispatch12 == 5 && phi185 == 8 || *(uint32_t*)(phi203 + 40) >= *anon224 && dispatch12 == 4 && *(uint32_t*)(phi142 + 28) < *anon165 && phi185 == 8 || *(uint32_t*)(phi203 + 40) >= *anon224 && dispatch12 == 3 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 && phi185 == 8 || *(uint32_t*)(phi203 + 40) >= *anon224 && dispatch12 == 2 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 && phi185 == 8 || *(uint32_t*)(phi203 + 40) >= *anon224 && dispatch12 == 1 && phi31 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 && phi185 == 8 || *(uint32_t*)(phi203 + 40) >= *anon224 && dispatch12 == 0 && phi9 < *anon13 && phi31 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 && phi185 == 8 || dispatch12 == 6 && phi236 == 8 && phi185 == 8 || dispatch12 == 5 && *(uint32_t*)(phi203 + 40) < *anon224 && phi236 == 8 && phi185 == 8 || dispatch12 == 4 && *(uint32_t*)(phi142 + 28) < *anon165 && *(uint32_t*)(phi203 + 40) < *anon224 && phi236 == 8 && phi185 == 8 || dispatch12 == 3 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 && *(uint32_t*)(phi203 + 40) < *anon224 && phi236 == 8 && phi185 == 8 || dispatch12 == 2 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 && *(uint32_t*)(phi203 + 40) < *anon224 && phi236 == 8 && phi185 == 8 || dispatch12 == 1 && phi31 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 && *(uint32_t*)(phi203 + 40) < *anon224 && phi236 == 8 && phi185 == 8 || dispatch12 == 0 && phi9 < *anon13 && phi31 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 && *(uint32_t*)(phi203 + 40) < *anon224 && phi236 == 8 && phi185 == 8)
			{
				phi_in127 = phi145;
				phi52 = phi146;
				phi72 = phi147;
				phi105 = phi148;
				phi82 = phi149;
				phi107 = phi150;
				phi_in108 = phi132;
				phi109 = phi133;
				phi_in110 = phi152;
				phi_in111 = phi153;
				phi113 = phi154;
				phi98 = phi_in157;
				phi_in116 = phi158;
				phi117 = phi159;
				phi118 = phi160;
				phi119 = phi137;
				phi121 = phi161;
				uint32_t phi_in363 = phi139;
				phi124 = phi162;
				phi_in125 = phi163;
				phi89 = phi164;
				phi90 = phi121;
				phi91 = phi_in51;
				phi92 = phi52;
				phi93 = phi72;
				phi94 = phi82;
				phi_in95 = phi_in108;
				phi_in96 = phi109;
				phi_in97 = phi112;
				phi_in99 = phi77;
				phi67 = phi_in120;
				phi100 = phi_in125;
				phi101 = phi89;
				phi104 = phi_in51;
				phi_in114 = phi_in155;
				phi115 = phi_in156;
				phi_in85 = phi98;
				phi122 = phi_in363;
				phi_in126 = phi151 + 4;
				dispatch12 = 4;
			}
			if (*(uint32_t*)(phi86 + 24) >= *anon102 && dispatch12 == 3 || *(uint32_t*)(phi86 + 24) >= *anon102 && dispatch12 == 2 && *(uint32_t*)(phi59 + 4) < *anon70 || *(uint32_t*)(phi86 + 24) >= *anon102 && dispatch12 == 1 && phi31 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon70 || *(uint32_t*)(phi86 + 24) >= *anon102 && dispatch12 == 0 && phi9 < *anon13 && phi31 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon70 || *(uint32_t*)(phi142 + 28) >= *anon165 && dispatch12 == 4 && phi151 == 8 || *(uint32_t*)(phi142 + 28) >= *anon165 && dispatch12 == 3 && *(uint32_t*)(phi86 + 24) < *anon102 && phi151 == 8 || *(uint32_t*)(phi142 + 28) >= *anon165 && dispatch12 == 2 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && phi151 == 8 || *(uint32_t*)(phi142 + 28) >= *anon165 && dispatch12 == 1 && phi31 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && phi151 == 8 || *(uint32_t*)(phi142 + 28) >= *anon165 && dispatch12 == 0 && phi9 < *anon13 && phi31 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && phi151 == 8 || *(uint32_t*)(phi203 + 40) >= *anon224 && dispatch12 == 5 && phi185 == 8 && phi151 == 8 || *(uint32_t*)(phi203 + 40) >= *anon224 && dispatch12 == 4 && *(uint32_t*)(phi142 + 28) < *anon165 && phi185 == 8 && phi151 == 8 || *(uint32_t*)(phi203 + 40) >= *anon224 && dispatch12 == 3 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 && phi185 == 8 && phi151 == 8 || *(uint32_t*)(phi203 + 40) >= *anon224 && dispatch12 == 2 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 && phi185 == 8 && phi151 == 8 || *(uint32_t*)(phi203 + 40) >= *anon224 && dispatch12 == 1 && phi31 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 && phi185 == 8 && phi151 == 8 || *(uint32_t*)(phi203 + 40) >= *anon224 && dispatch12 == 0 && phi9 < *anon13 && phi31 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 && phi185 == 8 && phi151 == 8 || dispatch12 == 6 && phi236 == 8 && phi185 == 8 && phi151 == 8 || dispatch12 == 5 && *(uint32_t*)(phi203 + 40) < *anon224 && phi236 == 8 && phi185 == 8 && phi151 == 8 || dispatch12 == 4 && *(uint32_t*)(phi142 + 28) < *anon165 && *(uint32_t*)(phi203 + 40) < *anon224 && phi236 == 8 && phi185 == 8 && phi151 == 8 || dispatch12 == 3 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 && *(uint32_t*)(phi203 + 40) < *anon224 && phi236 == 8 && phi185 == 8 && phi151 == 8 || dispatch12 == 2 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 && *(uint32_t*)(phi203 + 40) < *anon224 && phi236 == 8 && phi185 == 8 && phi151 == 8 || dispatch12 == 1 && phi31 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 && *(uint32_t*)(phi203 + 40) < *anon224 && phi236 == 8 && phi185 == 8 && phi151 == 8 || dispatch12 == 0 && phi9 < *anon13 && phi31 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 && *(uint32_t*)(phi203 + 40) < *anon224 && phi236 == 8 && phi185 == 8 && phi151 == 8)
			{
				phi_in81 = phi90;
				phi_in60 = phi91;
				phi_in364 = phi92;
				phi_in365 = phi93;
				phi_in366 = phi94;
				phi73 = phi_in95;
				phi_in74 = phi_in96;
				phi75 = phi_in97;
				phi76 = phi98;
				phi_in78 = phi67;
				phi69 = phi100;
				phi68 = phi101;
				phi_in51 = phi_in60;
				phi52 = phi_in364;
				phi72 = phi_in365;
				phi53 = phi_in366;
				phi77 = phi_in99;
				phi_in79 = phi69;
				phi_in80 = phi87 + 4;
				phi58 = phi68;
				dispatch12 = 3;
			}
			if (phi87 == 8 && (*(uint32_t*)(phi86 + 24) >= *anon102 && dispatch12 == 3 || *(uint32_t*)(phi86 + 24) >= *anon102 && dispatch12 == 2 && *(uint32_t*)(phi59 + 4) < *anon70 || *(uint32_t*)(phi86 + 24) >= *anon102 && dispatch12 == 1 && phi31 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon70 || *(uint32_t*)(phi86 + 24) >= *anon102 && dispatch12 == 0 && phi9 < *anon13 && phi31 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon70 || *(uint32_t*)(phi142 + 28) >= *anon165 && dispatch12 == 4 && phi151 == 8 || *(uint32_t*)(phi142 + 28) >= *anon165 && dispatch12 == 3 && *(uint32_t*)(phi86 + 24) < *anon102 && phi151 == 8 || *(uint32_t*)(phi142 + 28) >= *anon165 && dispatch12 == 2 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && phi151 == 8 || *(uint32_t*)(phi142 + 28) >= *anon165 && dispatch12 == 1 && phi31 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && phi151 == 8 || *(uint32_t*)(phi142 + 28) >= *anon165 && dispatch12 == 0 && phi9 < *anon13 && phi31 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && phi151 == 8 || *(uint32_t*)(phi203 + 40) >= *anon224 && dispatch12 == 5 && phi185 == 8 && phi151 == 8 || *(uint32_t*)(phi203 + 40) >= *anon224 && dispatch12 == 4 && *(uint32_t*)(phi142 + 28) < *anon165 && phi185 == 8 && phi151 == 8 || *(uint32_t*)(phi203 + 40) >= *anon224 && dispatch12 == 3 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 && phi185 == 8 && phi151 == 8 || *(uint32_t*)(phi203 + 40) >= *anon224 && dispatch12 == 2 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 && phi185 == 8 && phi151 == 8 || *(uint32_t*)(phi203 + 40) >= *anon224 && dispatch12 == 1 && phi31 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 && phi185 == 8 && phi151 == 8 || *(uint32_t*)(phi203 + 40) >= *anon224 && dispatch12 == 0 && phi9 < *anon13 && phi31 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 && phi185 == 8 && phi151 == 8 || dispatch12 == 6 && phi236 == 8 && phi185 == 8 && phi151 == 8 || dispatch12 == 5 && *(uint32_t*)(phi203 + 40) < *anon224 && phi236 == 8 && phi185 == 8 && phi151 == 8 || dispatch12 == 4 && *(uint32_t*)(phi142 + 28) < *anon165 && *(uint32_t*)(phi203 + 40) < *anon224 && phi236 == 8 && phi185 == 8 && phi151 == 8 || dispatch12 == 3 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 && *(uint32_t*)(phi203 + 40) < *anon224 && phi236 == 8 && phi185 == 8 && phi151 == 8 || dispatch12 == 2 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 && *(uint32_t*)(phi203 + 40) < *anon224 && phi236 == 8 && phi185 == 8 && phi151 == 8 || dispatch12 == 1 && phi31 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 && *(uint32_t*)(phi203 + 40) < *anon224 && phi236 == 8 && phi185 == 8 && phi151 == 8 || dispatch12 == 0 && phi9 < *anon13 && phi31 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 && *(uint32_t*)(phi203 + 40) < *anon224 && phi236 == 8 && phi185 == 8 && phi151 == 8))
			{
				phi61 = phi_in364;
				phi_in62 = phi_in365;
				phi63 = phi_in366;
				phi42 = phi73;
				phi64 = phi_in74;
				phi65 = *(uint64_t*)(phi69 + 72);
				phi56 = phi75;
				phi57 = phi76;
				phi66 = phi_in99;
				phi67 = phi_in78;
			}
			if (*(uint32_t*)(phi86 + 24) >= *anon102 && dispatch12 == 3 && phi87 == 8 || *(uint32_t*)(phi86 + 24) >= *anon102 && dispatch12 == 2 && *(uint32_t*)(phi59 + 4) < *anon70 && phi87 == 8 || *(uint32_t*)(phi86 + 24) >= *anon102 && dispatch12 == 1 && phi31 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon70 && phi87 == 8 || *(uint32_t*)(phi86 + 24) >= *anon102 && dispatch12 == 0 && phi9 < *anon13 && phi31 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon70 && phi87 == 8 || *(uint32_t*)(phi142 + 28) >= *anon165 && dispatch12 == 4 && phi151 == 8 && phi87 == 8 || *(uint32_t*)(phi142 + 28) >= *anon165 && dispatch12 == 3 && *(uint32_t*)(phi86 + 24) < *anon102 && phi151 == 8 && phi87 == 8 || *(uint32_t*)(phi142 + 28) >= *anon165 && dispatch12 == 2 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && phi151 == 8 && phi87 == 8 || *(uint32_t*)(phi142 + 28) >= *anon165 && dispatch12 == 1 && phi31 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && phi151 == 8 && phi87 == 8 || *(uint32_t*)(phi142 + 28) >= *anon165 && dispatch12 == 0 && phi9 < *anon13 && phi31 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && phi151 == 8 && phi87 == 8 || *(uint32_t*)(phi203 + 40) >= *anon224 && dispatch12 == 5 && phi185 == 8 && phi151 == 8 && phi87 == 8 || *(uint32_t*)(phi203 + 40) >= *anon224 && dispatch12 == 4 && *(uint32_t*)(phi142 + 28) < *anon165 && phi185 == 8 && phi151 == 8 && phi87 == 8 || *(uint32_t*)(phi203 + 40) >= *anon224 && dispatch12 == 3 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 && phi185 == 8 && phi151 == 8 && phi87 == 8 || *(uint32_t*)(phi203 + 40) >= *anon224 && dispatch12 == 2 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 && phi185 == 8 && phi151 == 8 && phi87 == 8 || *(uint32_t*)(phi203 + 40) >= *anon224 && dispatch12 == 1 && phi31 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 && phi185 == 8 && phi151 == 8 && phi87 == 8 || *(uint32_t*)(phi203 + 40) >= *anon224 && dispatch12 == 0 && phi9 < *anon13 && phi31 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 && phi185 == 8 && phi151 == 8 && phi87 == 8 || dispatch12 == 6 && phi236 == 8 && phi185 == 8 && phi151 == 8 && phi87 == 8 || dispatch12 == 5 && *(uint32_t*)(phi203 + 40) < *anon224 && phi236 == 8 && phi185 == 8 && phi151 == 8 && phi87 == 8 || dispatch12 == 4 && *(uint32_t*)(phi142 + 28) < *anon165 && *(uint32_t*)(phi203 + 40) < *anon224 && phi236 == 8 && phi185 == 8 && phi151 == 8 && phi87 == 8 || dispatch12 == 3 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 && *(uint32_t*)(phi203 + 40) < *anon224 && phi236 == 8 && phi185 == 8 && phi151 == 8 && phi87 == 8 || dispatch12 == 2 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 && *(uint32_t*)(phi203 + 40) < *anon224 && phi236 == 8 && phi185 == 8 && phi151 == 8 && phi87 == 8 || dispatch12 == 1 && phi31 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 && *(uint32_t*)(phi203 + 40) < *anon224 && phi236 == 8 && phi185 == 8 && phi151 == 8 && phi87 == 8 || dispatch12 == 0 && phi9 < *anon13 && phi31 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 && *(uint32_t*)(phi203 + 40) < *anon224 && phi236 == 8 && phi185 == 8 && phi151 == 8 && phi87 == 8 || *(uint32_t*)(phi59 + 4) >= *anon70 && dispatch12 == 2 || *(uint32_t*)(phi59 + 4) >= *anon70 && dispatch12 == 1 && phi31 < *anon37 || *(uint32_t*)(phi59 + 4) >= *anon70 && dispatch12 == 0 && phi9 < *anon13 && phi31 < *anon37)
			{
				phi39 = phi61;
				phi41 = phi63;
				phi_in367 = phi64;
				phi44 = phi56;
				phi45 = phi57;
				phi_in46 = phi66;
				phi_in47 = phi67;
				phi48 = phi68;
				phi36 = phi69;
				phi30 = phi_in60;
				phi_in40 = phi_in62;
				phi43 = phi_in367;
				phi_in49 = phi65 + 4;
				phi_in50 = phi36;
				dispatch12 = 2;
			}
			if (phi65 == 8 && (*(uint32_t*)(phi86 + 24) >= *anon102 && dispatch12 == 3 && phi87 == 8 || *(uint32_t*)(phi86 + 24) >= *anon102 && dispatch12 == 2 && *(uint32_t*)(phi59 + 4) < *anon70 && phi87 == 8 || *(uint32_t*)(phi86 + 24) >= *anon102 && dispatch12 == 1 && phi31 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon70 && phi87 == 8 || *(uint32_t*)(phi86 + 24) >= *anon102 && dispatch12 == 0 && phi9 < *anon13 && phi31 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon70 && phi87 == 8 || *(uint32_t*)(phi142 + 28) >= *anon165 && dispatch12 == 4 && phi151 == 8 && phi87 == 8 || *(uint32_t*)(phi142 + 28) >= *anon165 && dispatch12 == 3 && *(uint32_t*)(phi86 + 24) < *anon102 && phi151 == 8 && phi87 == 8 || *(uint32_t*)(phi142 + 28) >= *anon165 && dispatch12 == 2 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && phi151 == 8 && phi87 == 8 || *(uint32_t*)(phi142 + 28) >= *anon165 && dispatch12 == 1 && phi31 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && phi151 == 8 && phi87 == 8 || *(uint32_t*)(phi142 + 28) >= *anon165 && dispatch12 == 0 && phi9 < *anon13 && phi31 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && phi151 == 8 && phi87 == 8 || *(uint32_t*)(phi203 + 40) >= *anon224 && dispatch12 == 5 && phi185 == 8 && phi151 == 8 && phi87 == 8 || *(uint32_t*)(phi203 + 40) >= *anon224 && dispatch12 == 4 && *(uint32_t*)(phi142 + 28) < *anon165 && phi185 == 8 && phi151 == 8 && phi87 == 8 || *(uint32_t*)(phi203 + 40) >= *anon224 && dispatch12 == 3 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 && phi185 == 8 && phi151 == 8 && phi87 == 8 || *(uint32_t*)(phi203 + 40) >= *anon224 && dispatch12 == 2 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 && phi185 == 8 && phi151 == 8 && phi87 == 8 || *(uint32_t*)(phi203 + 40) >= *anon224 && dispatch12 == 1 && phi31 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 && phi185 == 8 && phi151 == 8 && phi87 == 8 || *(uint32_t*)(phi203 + 40) >= *anon224 && dispatch12 == 0 && phi9 < *anon13 && phi31 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 && phi185 == 8 && phi151 == 8 && phi87 == 8 || dispatch12 == 6 && phi236 == 8 && phi185 == 8 && phi151 == 8 && phi87 == 8 || dispatch12 == 5 && *(uint32_t*)(phi203 + 40) < *anon224 && phi236 == 8 && phi185 == 8 && phi151 == 8 && phi87 == 8 || dispatch12 == 4 && *(uint32_t*)(phi142 + 28) < *anon165 && *(uint32_t*)(phi203 + 40) < *anon224 && phi236 == 8 && phi185 == 8 && phi151 == 8 && phi87 == 8 || dispatch12 == 3 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 && *(uint32_t*)(phi203 + 40) < *anon224 && phi236 == 8 && phi185 == 8 && phi151 == 8 && phi87 == 8 || dispatch12 == 2 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 && *(uint32_t*)(phi203 + 40) < *anon224 && phi236 == 8 && phi185 == 8 && phi151 == 8 && phi87 == 8 || dispatch12 == 1 && phi31 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 && *(uint32_t*)(phi203 + 40) < *anon224 && phi236 == 8 && phi185 == 8 && phi151 == 8 && phi87 == 8 || dispatch12 == 0 && phi9 < *anon13 && phi31 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 && *(uint32_t*)(phi203 + 40) < *anon224 && phi236 == 8 && phi185 == 8 && phi151 == 8 && phi87 == 8 || *(uint32_t*)(phi59 + 4) >= *anon70 && dispatch12 == 2 || *(uint32_t*)(phi59 + 4) >= *anon70 && dispatch12 == 1 && phi31 < *anon37 || *(uint32_t*)(phi59 + 4) >= *anon70 && dispatch12 == 0 && phi9 < *anon13 && phi31 < *anon37))
			{
				phi_in32 = *(uint32_t*)(phi36 + 68);
				phi_in33 = phi_in367;
				phi34 = *(uint64_t*)(phi36 + 56);
				phi23 = (__zext uint64_t)phi_in367;
				phi35 = *(uint32_t*)(phi36 + 68);
				phi_in4 = phi_in367;
				phi_in5 = *(uint32_t*)(phi36 + 68);
			}
			if (*(uint32_t*)(phi86 + 24) >= *anon102 && dispatch12 == 3 && phi87 == 8 && phi65 == 8 || *(uint32_t*)(phi86 + 24) >= *anon102 && dispatch12 == 2 && *(uint32_t*)(phi59 + 4) < *anon70 && phi87 == 8 && phi65 == 8 || *(uint32_t*)(phi86 + 24) >= *anon102 && dispatch12 == 1 && phi31 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon70 && phi87 == 8 && phi65 == 8 || *(uint32_t*)(phi86 + 24) >= *anon102 && dispatch12 == 0 && phi9 < *anon13 && phi31 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon70 && phi87 == 8 && phi65 == 8 || *(uint32_t*)(phi142 + 28) >= *anon165 && dispatch12 == 4 && phi151 == 8 && phi87 == 8 && phi65 == 8 || *(uint32_t*)(phi142 + 28) >= *anon165 && dispatch12 == 3 && *(uint32_t*)(phi86 + 24) < *anon102 && phi151 == 8 && phi87 == 8 && phi65 == 8 || *(uint32_t*)(phi142 + 28) >= *anon165 && dispatch12 == 2 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && phi151 == 8 && phi87 == 8 && phi65 == 8 || *(uint32_t*)(phi142 + 28) >= *anon165 && dispatch12 == 1 && phi31 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && phi151 == 8 && phi87 == 8 && phi65 == 8 || *(uint32_t*)(phi142 + 28) >= *anon165 && dispatch12 == 0 && phi9 < *anon13 && phi31 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && phi151 == 8 && phi87 == 8 && phi65 == 8 || *(uint32_t*)(phi203 + 40) >= *anon224 && dispatch12 == 5 && phi185 == 8 && phi151 == 8 && phi87 == 8 && phi65 == 8 || *(uint32_t*)(phi203 + 40) >= *anon224 && dispatch12 == 4 && *(uint32_t*)(phi142 + 28) < *anon165 && phi185 == 8 && phi151 == 8 && phi87 == 8 && phi65 == 8 || *(uint32_t*)(phi203 + 40) >= *anon224 && dispatch12 == 3 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 && phi185 == 8 && phi151 == 8 && phi87 == 8 && phi65 == 8 || *(uint32_t*)(phi203 + 40) >= *anon224 && dispatch12 == 2 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 && phi185 == 8 && phi151 == 8 && phi87 == 8 && phi65 == 8 || *(uint32_t*)(phi203 + 40) >= *anon224 && dispatch12 == 1 && phi31 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 && phi185 == 8 && phi151 == 8 && phi87 == 8 && phi65 == 8 || *(uint32_t*)(phi203 + 40) >= *anon224 && dispatch12 == 0 && phi9 < *anon13 && phi31 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 && phi185 == 8 && phi151 == 8 && phi87 == 8 && phi65 == 8 || dispatch12 == 6 && phi236 == 8 && phi185 == 8 && phi151 == 8 && phi87 == 8 && phi65 == 8 || dispatch12 == 5 && *(uint32_t*)(phi203 + 40) < *anon224 && phi236 == 8 && phi185 == 8 && phi151 == 8 && phi87 == 8 && phi65 == 8 || dispatch12 == 4 && *(uint32_t*)(phi142 + 28) < *anon165 && *(uint32_t*)(phi203 + 40) < *anon224 && phi236 == 8 && phi185 == 8 && phi151 == 8 && phi87 == 8 && phi65 == 8 || dispatch12 == 3 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 && *(uint32_t*)(phi203 + 40) < *anon224 && phi236 == 8 && phi185 == 8 && phi151 == 8 && phi87 == 8 && phi65 == 8 || dispatch12 == 2 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 && *(uint32_t*)(phi203 + 40) < *anon224 && phi236 == 8 && phi185 == 8 && phi151 == 8 && phi87 == 8 && phi65 == 8 || dispatch12 == 1 && phi31 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 && *(uint32_t*)(phi203 + 40) < *anon224 && phi236 == 8 && phi185 == 8 && phi151 == 8 && phi87 == 8 && phi65 == 8 || dispatch12 == 0 && phi9 < *anon13 && phi31 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 && *(uint32_t*)(phi203 + 40) < *anon224 && phi236 == 8 && phi185 == 8 && phi151 == 8 && phi87 == 8 && phi65 == 8 || *(uint32_t*)(phi59 + 4) >= *anon70 && dispatch12 == 2 && phi65 == 8 || *(uint32_t*)(phi59 + 4) >= *anon70 && dispatch12 == 1 && phi31 < *anon37 && phi65 == 8 || *(uint32_t*)(phi59 + 4) >= *anon70 && dispatch12 == 0 && phi9 < *anon13 && phi31 < *anon37 && phi65 == 8 || phi31 >= *anon37 && dispatch12 == 1 || phi31 >= *anon37 && dispatch12 == 0 && phi9 < *anon13)
			{
				phi21 = phi_in32;
				*(uint32_t*)(phi24 + 68) = phi35;
				phi_in368 = phi36;
				phi22 = phi_in33;
				phi25 = phi_in4;
				phi_in26 = phi34 + 4;
				phi_in27 = phi_in368;
				dispatch12 = 1;
			}
			if (phi34 == 8 && (*(uint32_t*)(phi86 + 24) >= *anon102 && dispatch12 == 3 && phi87 == 8 && phi65 == 8 || *(uint32_t*)(phi86 + 24) >= *anon102 && dispatch12 == 2 && *(uint32_t*)(phi59 + 4) < *anon70 && phi87 == 8 && phi65 == 8 || *(uint32_t*)(phi86 + 24) >= *anon102 && dispatch12 == 1 && phi31 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon70 && phi87 == 8 && phi65 == 8 || *(uint32_t*)(phi86 + 24) >= *anon102 && dispatch12 == 0 && phi9 < *anon13 && phi31 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon70 && phi87 == 8 && phi65 == 8 || *(uint32_t*)(phi142 + 28) >= *anon165 && dispatch12 == 4 && phi151 == 8 && phi87 == 8 && phi65 == 8 || *(uint32_t*)(phi142 + 28) >= *anon165 && dispatch12 == 3 && *(uint32_t*)(phi86 + 24) < *anon102 && phi151 == 8 && phi87 == 8 && phi65 == 8 || *(uint32_t*)(phi142 + 28) >= *anon165 && dispatch12 == 2 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && phi151 == 8 && phi87 == 8 && phi65 == 8 || *(uint32_t*)(phi142 + 28) >= *anon165 && dispatch12 == 1 && phi31 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && phi151 == 8 && phi87 == 8 && phi65 == 8 || *(uint32_t*)(phi142 + 28) >= *anon165 && dispatch12 == 0 && phi9 < *anon13 && phi31 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && phi151 == 8 && phi87 == 8 && phi65 == 8 || *(uint32_t*)(phi203 + 40) >= *anon224 && dispatch12 == 5 && phi185 == 8 && phi151 == 8 && phi87 == 8 && phi65 == 8 || *(uint32_t*)(phi203 + 40) >= *anon224 && dispatch12 == 4 && *(uint32_t*)(phi142 + 28) < *anon165 && phi185 == 8 && phi151 == 8 && phi87 == 8 && phi65 == 8 || *(uint32_t*)(phi203 + 40) >= *anon224 && dispatch12 == 3 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 && phi185 == 8 && phi151 == 8 && phi87 == 8 && phi65 == 8 || *(uint32_t*)(phi203 + 40) >= *anon224 && dispatch12 == 2 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 && phi185 == 8 && phi151 == 8 && phi87 == 8 && phi65 == 8 || *(uint32_t*)(phi203 + 40) >= *anon224 && dispatch12 == 1 && phi31 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 && phi185 == 8 && phi151 == 8 && phi87 == 8 && phi65 == 8 || *(uint32_t*)(phi203 + 40) >= *anon224 && dispatch12 == 0 && phi9 < *anon13 && phi31 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 && phi185 == 8 && phi151 == 8 && phi87 == 8 && phi65 == 8 || dispatch12 == 6 && phi236 == 8 && phi185 == 8 && phi151 == 8 && phi87 == 8 && phi65 == 8 || dispatch12 == 5 && *(uint32_t*)(phi203 + 40) < *anon224 && phi236 == 8 && phi185 == 8 && phi151 == 8 && phi87 == 8 && phi65 == 8 || dispatch12 == 4 && *(uint32_t*)(phi142 + 28) < *anon165 && *(uint32_t*)(phi203 + 40) < *anon224 && phi236 == 8 && phi185 == 8 && phi151 == 8 && phi87 == 8 && phi65 == 8 || dispatch12 == 3 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 && *(uint32_t*)(phi203 + 40) < *anon224 && phi236 == 8 && phi185 == 8 && phi151 == 8 && phi87 == 8 && phi65 == 8 || dispatch12 == 2 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 && *(uint32_t*)(phi203 + 40) < *anon224 && phi236 == 8 && phi185 == 8 && phi151 == 8 && phi87 == 8 && phi65 == 8 || dispatch12 == 1 && phi31 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 && *(uint32_t*)(phi203 + 40) < *anon224 && phi236 == 8 && phi185 == 8 && phi151 == 8 && phi87 == 8 && phi65 == 8 || dispatch12 == 0 && phi9 < *anon13 && phi31 < *anon37 && *(uint32_t*)(phi59 + 4) < *anon70 && *(uint32_t*)(phi86 + 24) < *anon102 && *(uint32_t*)(phi142 + 28) < *anon165 && *(uint32_t*)(phi203 + 40) < *anon224 && phi236 == 8 && phi185 == 8 && phi151 == 8 && phi87 == 8 && phi65 == 8 || *(uint32_t*)(phi59 + 4) >= *anon70 && dispatch12 == 2 && phi65 == 8 || *(uint32_t*)(phi59 + 4) >= *anon70 && dispatch12 == 1 && phi31 < *anon37 && phi65 == 8 || *(uint32_t*)(phi59 + 4) >= *anon70 && dispatch12 == 0 && phi9 < *anon13 && phi31 < *anon37 && phi65 == 8 || phi31 >= *anon37 && dispatch12 == 1 || phi31 >= *anon37 && dispatch12 == 0 && phi9 < *anon13))
			{
				phi15 = *(uint64_t*)(phi_in368 + 48);
				phi16 = phi_in33;
				phi_in5 = phi21;
				phi17 = (__zext uint64_t)phi_in33;
				phi18 = phi21;
				phi19 = phi_in33;
				phi20 = phi_in368;
				break;
			}
		}
		phi_in4 = phi16;
		phi7 = phi17;
		phi8 = phi18;
		phi9 = phi19;
		*(uint64_t*)(phi10 + 48) = phi15 + 4;
		phi10 = phi20;
		dispatch12 = 0;
	}
	while (phi15 != 8);
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
		uint32_t phi16;
		uint64_t phi18;
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
			uint32_t phi_in12;
			uint32_t phi13;
			uint32_t* anon14;
			uint32_t phi15;
			uint32_t* anon9 = (uint32_t*)((phi8 & 0xc) + 4);
			uint32_t* anon10 = (uint32_t*)phi8;
			if (*anon9 < *anon10)
			{
				*anon10 = *anon9;
				*anon9 = *anon10;
				phi11 = *anon10;
				phi_in12 = *anon9;
				anon14 = (uint32_t*)(phi8 - 4);
				phi13 = *anon14;
				phi15 = *anon10;
				*anon9 = *anon9;
			}
			else 
			{
				phi11 = *anon9;
				phi_in12 = *anon10;
				phi16 = *anon14;
			}
			if (*anon9 < *anon10 && *anon9 < *anon14 || *anon9 >= *anon10 && *anon10 < *anon14)
			{
				phi15 = phi11;
				*anon14 = phi_in12;
				*anon10 = *anon14;
				phi13 = *anon14;
				*anon9 = *anon14;
			}
			if (*anon9 < *anon10 && *anon9 < *anon14 || *anon9 >= *anon10 && *anon10 < *anon14 || *anon9 >= *anon14 && *anon9 < *anon10)
			{
				uint32_t phi_in17 = phi13;
				*anon10 = phi15;
				phi16 = phi_in17;
				if (*anon10 < *anon9)
				{
					phi16 = *anon14;
				}
			}
			phi18 = 6301636;
		}
		uint32_t anon19 = phi16 + 1 & 0xff;
		if (dispatch1 == 5 || dispatch1 == 4 && anon19 == 0 || dispatch1 == 3 && phi7 == 0 && anon19 == 0 || dispatch1 == 2 && phi4 == 0 && phi7 == 0 && anon19 == 0 || dispatch1 == 1 && phi3 == 0 && phi4 == 0 && phi7 == 0 && anon19 == 0 || dispatch1 == 0 && phi3 == 0 && phi4 == 0 && phi7 == 0 && anon19 == 0)
		{
			uint32_t phi22;
			uint32_t phi23;
			uint32_t phi_in24;
			uint32_t* anon25;
			uint32_t phi26;
			uint32_t phi27;
			uint32_t* anon20 = (uint32_t*)(phi18 + 4);
			uint32_t* anon21 = (uint32_t*)phi18;
			if (*anon20 < *anon21)
			{
				*anon21 = *anon20;
				*anon20 = *anon21;
				phi22 = *anon21;
				phi23 = *anon20;
				anon25 = (uint32_t*)((phi18 & 0xc) - 4);
				phi_in24 = *anon25;
				*anon21 = *anon21;
				phi26 = *anon20;
			}
			else 
			{
				phi22 = *anon20;
				phi23 = *anon21;
				phi27 = *anon25;
			}
			if (*anon20 < *anon21 && *anon20 < *anon25 || *anon20 >= *anon21 && *anon21 < *anon25)
			{
				*anon21 = phi22;
				*anon25 = phi23;
				*anon21 = *anon25;
				phi_in24 = *anon25;
				phi26 = *anon25;
			}
			if (*anon20 < *anon21 && *anon20 < *anon25 || *anon20 >= *anon21 && *anon21 < *anon25 || *anon20 >= *anon25 && *anon20 < *anon21)
			{
				*anon20 = phi26;
				phi27 = phi_in24;
				if (*anon21 < *anon20)
				{
					phi27 = *anon25;
				}
			}
			dispatch1 = 0;
			if ((phi27 + 1 & 0xff) != 0)
			{
				phi18 = phi18 + 12;
				dispatch1 = 5;
			}
		}
		if (anon19 != 0 && (dispatch1 == 4 || dispatch1 == 3 && phi7 == 0 || dispatch1 == 2 && phi4 == 0 && phi7 == 0 || dispatch1 == 1 && phi3 == 0 && phi4 == 0 && phi7 == 0 || dispatch1 == 0 && phi3 == 0 && phi4 == 0 && phi7 == 0))
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
	uint32_t phi38;
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
		phi38 = *anon18 - 50;
	}
	if (dispatch16 == 1)
	{
		puts((uint8_t*)0x401d62);
		while (true)
		{
			uint64_t anon39 = random();
			uint32_t anon40 = (uint32_t)anon39;
			*anon20 = anon40 + (((uint32_t)((anon39 & 0xffffffff) * 2290649225 >> 32) + anon40 >> 4) - (anon40 >> 31)) * 4294967266;
		}
	}
	if (dispatch16 == 0)
	{
		puts((uint8_t*)0x401d2a);
		phi38 = *anon18 - 100;
	}
	if (dispatch16 == 3 || dispatch16 == 0)
	{
		*anon18 = phi38;
	}
	if (dispatch16 == 2 || dispatch16 == 3 || dispatch16 == 0)
	{
		printf((uint8_t*)0x401cf1);
		exit(0);
	}
	q(4200890, phi13 & 0xffffffff);
	printf((uint8_t*)0x401dba);
	uint16_t** anon41 = __ctype_b_loc();
	phi37 = anon41;
	dispatch11 = 1;
	int64_t anon42 = (__sext int64_t)anon35;
	if ((*(uint8_t*)(*(uint64_t*)anon41 + (anon42 >> 7 | 1)) & 8) != 0)
	{
		uint32_t phi44;
		uint32_t anon43 = _IO_getc(*anon34);
		uint32_t anon45 = (uint32_t)(anon42 + 4294967248);
		phi44 = anon45;
		uint32_t anon46 = anon43 << 24 >> 24;
		if ((*(uint8_t*)(*(uint64_t*)phi37 + ((__zext uint64_t)anon46 << 1 | 1)) & 8) != 0)
		{
			phi44 = anon45 * 10 + anon46 - 48;
		}
		if (*anon24 != phi44 && *(uint32_t*)(anon25 + 6301636) != phi44)
		{
			phi_in9 = phi12;
			phi_in10 = phi13;
			dispatch11 = 0;
		}
		if (*anon24 == phi44 || *anon24 != phi44 && *(uint32_t*)(anon25 + 6301636) == phi44 || *anon24 != phi44 && *(uint32_t*)(anon25 + 6301636) != phi44 && *(uint32_t*)(anon25 + 6301640) == phi44)
		{
			int64_t anon47 = (__sext int64_t)phi44;
			phi_in9 = anon47;
			phi_in10 = anon47;
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
