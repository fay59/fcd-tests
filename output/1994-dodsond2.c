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
	uint32_t phi10;
	uint32_t* phi1 = (uint32_t*)0x6027c4;
	uint64_t phi_in2 = 6301636;
	do
	{
		uint32_t phi5;
		uint32_t phi_in6;
		uint32_t phi_in7;
		uint32_t* anon8;
		uint32_t phi9;
		uint64_t phi3 = phi_in2;
		uint32_t* anon4 = (uint32_t*)(phi3 + 4);
		if (*anon4 < *phi1)
		{
			*anon4 = *phi1;
			*phi1 = *anon4;
			phi5 = *phi1;
			phi_in6 = *anon4;
			anon8 = (uint32_t*)(phi3 - 4);
			phi_in7 = *anon8;
			phi9 = *phi1;
			*anon4 = *anon4;
		}
		else 
		{
			phi5 = *anon4;
			phi_in6 = *phi1;
			phi10 = *anon8;
		}
		if (*anon4 >= *phi1 && *phi1 < *anon8 || *anon4 < *phi1 && *anon4 < *anon8)
		{
			phi9 = phi5;
			*anon8 = phi_in6;
			*phi1 = *anon8;
			phi_in7 = *anon8;
			*anon4 = *anon8;
		}
		if (*anon4 >= *phi1 && *phi1 < *anon8 || *anon4 < *phi1 && *anon4 < *anon8 || *anon4 >= *anon8 && *anon4 < *phi1)
		{
			*phi1 = phi9;
			phi10 = phi_in7;
			if (*anon4 > *phi1)
			{
				phi10 = *anon8;
			}
		}
		if (phi10 != 255)
		{
			uint64_t anon11 = phi3 + 12;
			phi1 = (uint32_t*)anon11;
			phi_in2 = anon11;
			if (phi3 == 6301984)
			{
				break;
			}
		}
	}
	while (phi10 != 255);
	return;
}
void w(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	struct { uint8_t field0[4]; uint32_t field1; uint64_t field2; uint8_t field3[8]; uint32_t field4; uint32_t field5; uint8_t field6[48]; uint64_t field7; uint32_t field8; uint8_t field9[4]; uint64_t field10; uint64_t field11; uint32_t field12; uint8_t field13[8]; uint32_t field14; uint8_t field15[56]; uint64_t field16; } alloca1;
	uint32_t phi5;
	uint64_t phi10;
	uint64_t phi11;
	alloca1.field16 = arg0;
	uint64_t anon2 = arg2 << 32;
	uint32_t anon3 = (uint32_t)arg3;
	*(uint32_t*)((anon2 >> 30) + 6300992) = anon3;
	alloca1.field2 = (anon2 >> 32) * 12;
	alloca1.field1 = anon3 + 2;
	alloca1.field4 = anon3 + 3;
	alloca1.field5 = anon3 + 4;
	uint32_t phi4 = anon3;
	uint32_t anon6 = anon3 + 1;
	phi5 = anon6;
	uint64_t phi7 = arg3 & 0xffffffff;
	int64_t anon9 = (__sext int64_t)*(uint32_t*)(phi10 + *(uint64_t*)(phi11 + 8) + 6301632);
	uint32_t* anon8 = (uint32_t*)((anon9 << 2) + 6300992);
	*anon8 = anon6;
	uint32_t phi12 = anon3;
	uint64_t phi13 = 0;
	uint64_t anon14 = (uint64_t)&alloca1;
	phi11 = anon14;
	uint32_t dispatch15 = 0;
	do
	{
		uint32_t phi18;
		uint64_t phi19;
		uint32_t phi20;
		uint32_t phi21;
		uint64_t phi22;
		while (true)
		{
			uint32_t phi_in16;
			uint64_t phi17;
			uint32_t phi_in23;
			uint64_t phi24;
			uint32_t phi25;
			uint32_t phi_in26;
			uint64_t phi_in27;
			uint64_t phi_in28;
			uint32_t phi29;
			uint32_t phi30;
			uint32_t phi_in31;
			uint32_t phi_in32;
			uint64_t phi33;
			uint64_t phi34;
			uint32_t phi_in35;
			uint32_t phi36;
			uint64_t phi37;
			uint32_t phi40;
			uint32_t phi_in41;
			uint32_t phi42;
			uint32_t phi43;
			uint32_t phi44;
			uint32_t phi_in45;
			uint32_t phi46;
			uint32_t phi_in47;
			uint32_t phi48;
			uint64_t phi49;
			uint64_t phi_in50;
			uint64_t phi_in51;
			uint32_t phi52;
			uint32_t phi_in53;
			uint32_t phi_in54;
			uint32_t phi_in55;
			uint32_t phi_in56;
			uint64_t phi57;
			uint64_t phi58;
			uint32_t phi59;
			uint32_t phi60;
			uint32_t phi61;
			uint64_t phi62;
			uint32_t phi63;
			uint32_t phi64;
			uint32_t phi65;
			uint32_t phi66;
			uint64_t phi_in67;
			uint64_t phi_in68;
			uint32_t phi71;
			uint32_t phi_in72;
			uint32_t phi_in73;
			uint32_t phi74;
			uint32_t phi75;
			uint32_t phi_in76;
			uint32_t phi77;
			uint64_t phi_in78;
			uint64_t phi_in79;
			uint64_t phi_in80;
			uint32_t phi81;
			uint32_t phi82;
			uint32_t phi_in83;
			uint32_t phi_in84;
			uint32_t phi85;
			uint32_t phi86;
			uint32_t phi87;
			uint64_t phi88;
			uint64_t phi89;
			uint64_t phi90;
			uint64_t phi91;
			uint64_t phi92;
			uint32_t phi93;
			uint32_t phi_in94;
			uint32_t phi_in95;
			uint32_t phi96;
			uint32_t phi97;
			uint32_t phi98;
			uint32_t phi99;
			uint32_t phi100;
			uint64_t phi101;
			uint64_t phi102;
			uint32_t phi105;
			uint32_t phi106;
			uint32_t phi108;
			uint32_t phi_in109;
			uint32_t phi_in110;
			uint32_t phi_in111;
			uint32_t phi_in112;
			uint32_t phi113;
			uint32_t phi114;
			uint32_t phi115;
			uint32_t phi_in116;
			uint32_t phi_in117;
			uint32_t phi118;
			uint32_t phi_in119;
			uint32_t phi120;
			uint64_t phi_in121;
			uint32_t phi_in122;
			uint32_t phi_in123;
			uint32_t phi124;
			uint64_t phi_in125;
			uint64_t phi_in126;
			uint64_t phi_in127;
			uint32_t phi128;
			uint32_t phi_in129;
			uint32_t phi_in130;
			uint32_t phi131;
			uint32_t phi_in132;
			uint32_t phi_in133;
			uint32_t phi_in134;
			uint32_t phi135;
			uint32_t phi136;
			uint32_t phi137;
			uint32_t phi138;
			uint32_t phi_in139;
			uint32_t phi140;
			uint64_t phi141;
			uint64_t phi142;
			uint64_t phi143;
			uint32_t phi144;
			uint32_t phi145;
			uint32_t phi146;
			uint32_t phi147;
			uint32_t phi148;
			uint32_t phi149;
			uint64_t phi150;
			uint32_t phi151;
			uint32_t phi152;
			uint32_t phi_in153;
			uint32_t phi154;
			uint32_t phi155;
			uint32_t phi156;
			uint32_t phi157;
			uint32_t phi158;
			uint32_t phi159;
			uint64_t phi160;
			uint32_t phi161;
			uint32_t phi162;
			uint64_t phi163;
			uint64_t phi164;
			uint64_t phi_in167;
			uint32_t phi_in168;
			uint32_t phi169;
			uint32_t phi170;
			uint32_t phi171;
			uint32_t phi_in172;
			uint32_t phi_in173;
			uint32_t phi174;
			uint32_t phi175;
			uint64_t phi176;
			uint32_t phi_in177;
			uint64_t phi178;
			uint64_t phi_in179;
			uint32_t phi_in180;
			uint32_t phi181;
			uint64_t phi_in182;
			uint64_t phi_in183;
			uint64_t phi184;
			uint32_t phi185;
			uint32_t phi_in186;
			uint32_t phi187;
			uint32_t phi188;
			uint32_t phi189;
			uint32_t phi190;
			uint32_t phi191;
			uint32_t phi_in192;
			uint32_t phi193;
			uint32_t phi194;
			uint64_t phi_in195;
			uint64_t phi_in196;
			uint32_t phi197;
			uint32_t phi198;
			uint64_t phi199;
			uint32_t phi_in200;
			uint32_t phi201;
			uint32_t phi202;
			uint32_t phi203;
			uint32_t phi204;
			uint32_t phi205;
			uint32_t phi206;
			uint32_t phi207;
			uint32_t phi208;
			uint32_t phi209;
			uint32_t phi210;
			uint32_t phi211;
			uint64_t phi212;
			uint64_t phi213;
			uint32_t phi214;
			uint32_t phi215;
			uint32_t phi_in216;
			uint64_t phi217;
			uint64_t phi_in220;
			uint32_t phi_in221;
			uint32_t phi222;
			uint32_t phi_in223;
			uint32_t phi224;
			uint32_t phi225;
			uint32_t phi226;
			uint32_t phi227;
			uint32_t phi228;
			uint32_t phi229;
			uint64_t phi230;
			uint32_t phi231;
			uint32_t phi232;
			uint32_t phi233;
			uint32_t phi234;
			uint64_t phi235;
			uint32_t phi_in236;
			uint64_t phi237;
			uint64_t phi238;
			uint64_t phi_in239;
			uint64_t phi240;
			uint32_t phi_in366;
			uint32_t phi_in367;
			uint32_t phi_in368;
			uint32_t phi_in369;
			uint32_t phi_in370;
			uint32_t phi_in371;
			uint64_t phi_in372;
			uint64_t phi_in373;
			if (dispatch15 == 0)
			{
				phi_in16 = phi4;
				*(uint32_t*)(phi17 + 68) = phi5;
				phi10 = phi13;
				phi4 = phi_in16;
				phi18 = *(uint32_t*)(phi17 + 68);
				phi19 = phi7 & 0xffffffff;
				phi20 = *anon8;
				phi21 = phi12;
				phi22 = phi11;
				if (phi12 < *anon8)
				{
					*(uint64_t*)(phi11 + 48) = phi10;
					*(uint64_t*)(phi11 + 16) = anon9 * 12;
					*(uint32_t*)(phi11 + 40) = (uint32_t)phi7 + 5;
					phi_in23 = *(uint32_t*)(phi17 + 68);
					phi24 = (__zext uint64_t)phi_in16;
					phi25 = phi_in16;
					phi_in26 = *(uint32_t*)(phi17 + 68);
					phi_in27 = 0;
					phi_in28 = phi11;
				}
				else 
				{
					break;
				}
			}
			if (dispatch15 == 1 || dispatch15 == 0 && phi12 < *anon8)
			{
				phi29 = phi25;
				phi30 = phi_in26;
				*(uint64_t*)(phi17 + 56) = phi_in27;
				phi17 = phi_in28;
				phi_in31 = phi_in23;
				phi_in32 = phi_in16;
				phi33 = *(uint64_t*)(phi17 + 56);
				phi34 = phi24 & 0xffffffff;
				phi_in35 = *(uint32_t*)(phi17 + 68);
				phi36 = phi29;
				phi_in26 = phi30;
				phi37 = phi17;
			}
			int64_t anon39 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi17 + 56) + *(uint64_t*)(phi17 + 16) + 6301632);
			uint32_t* anon38 = (uint32_t*)((anon39 << 2) + 6300992);
			if (phi30 < *anon38 && (dispatch15 == 1 || dispatch15 == 0 && phi12 < *anon8))
			{
				*anon38 = *(uint32_t*)(phi17 + 4);
				*(uint64_t*)(phi17 + 32) = anon39 * 12;
				*(uint32_t*)(phi17 + 44) = (uint32_t)phi24 + 6;
				phi40 = phi29;
				phi_in41 = phi29;
				phi42 = phi29;
				phi43 = phi29;
				phi44 = phi29;
				phi_in45 = phi29;
				phi46 = phi29;
				phi_in47 = phi29;
				phi48 = phi29;
				phi49 = (__zext uint64_t)phi29;
				phi_in50 = 0;
				phi_in51 = phi17;
			}
			if (dispatch15 == 2 || dispatch15 == 1 && phi30 < *anon38 || dispatch15 == 0 && phi12 < *anon8 && phi30 < *anon38)
			{
				phi52 = phi40;
				phi_in53 = phi42;
				phi_in54 = phi43;
				phi_in55 = phi29;
				phi_in56 = phi46;
				phi57 = phi49;
				*(uint64_t*)(phi58 + 72) = phi_in50;
				phi58 = phi_in51;
				phi40 = phi52;
				phi42 = phi_in53;
				phi59 = phi_in54;
				phi60 = phi_in55;
				phi61 = phi44;
				phi62 = *(uint64_t*)(phi58 + 72);
				phi63 = phi_in45;
				phi64 = phi_in56;
				phi65 = phi_in47;
				phi66 = phi48;
				phi_in67 = phi57 & 0xffffffff;
				phi_in68 = phi58;
			}
			int64_t anon70 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi58 + 72) + *(uint64_t*)(phi58 + 32) + 6301632);
			uint32_t* anon69 = (uint32_t*)((anon70 << 2) + 6300992);
			if (*(uint32_t*)(phi58 + 4) < *anon69 && (dispatch15 == 2 || dispatch15 == 1 && phi30 < *anon38 || dispatch15 == 0 && phi12 < *anon8 && phi30 < *anon38))
			{
				*anon69 = *(uint32_t*)(phi58 + 24);
				*(uint32_t*)(phi58 + 64) = (uint32_t)phi57 + 7;
				phi71 = phi_in41;
				phi_in72 = phi_in53;
				phi_in73 = phi_in54;
				phi74 = phi_in55;
				phi75 = phi_in45;
				phi_in76 = phi_in56;
				phi77 = phi_in47;
				phi_in78 = phi58;
				phi_in79 = 0;
				phi_in80 = anon70 * 12;
			}
			if (dispatch15 == 3 || dispatch15 == 2 && *(uint32_t*)(phi58 + 4) < *anon69 || dispatch15 == 1 && phi30 < *anon38 && *(uint32_t*)(phi58 + 4) < *anon69 || dispatch15 == 0 && phi12 < *anon8 && phi30 < *anon38 && *(uint32_t*)(phi58 + 4) < *anon69)
			{
				phi81 = phi52;
				phi82 = phi71;
				phi_in83 = phi74;
				phi_in84 = phi44;
				phi85 = phi75;
				phi86 = phi77;
				phi87 = phi48;
				phi88 = phi_in78;
				phi89 = phi_in79;
				phi90 = phi_in80;
				phi91 = phi57;
				phi92 = phi90;
				phi93 = phi81;
				phi_in94 = phi_in72;
				phi_in95 = phi_in73;
				phi96 = phi_in83;
				phi97 = phi_in84;
				phi98 = phi85;
				phi99 = phi_in76;
				phi100 = phi86;
				phi48 = phi87;
				phi101 = phi88;
				phi102 = phi91 & 0xffffffff;
			}
			int64_t anon104 = (__sext int64_t)*(uint32_t*)(phi89 + phi90 + 6301632);
			uint32_t* anon103 = (uint32_t*)((anon104 << 2) + 6300992);
			if (*(uint32_t*)(phi88 + 24) < *anon103 && (dispatch15 == 3 || dispatch15 == 2 && *(uint32_t*)(phi58 + 4) < *anon69 || dispatch15 == 1 && phi30 < *anon38 && *(uint32_t*)(phi58 + 4) < *anon69 || dispatch15 == 0 && phi12 < *anon8 && phi30 < *anon38 && *(uint32_t*)(phi58 + 4) < *anon69))
			{
				*anon103 = *(uint32_t*)(phi88 + 28);
				phi105 = phi82;
				phi_in72 = phi_in72;
				uint32_t anon107 = (uint32_t)phi91 + 8;
				phi106 = anon107;
				phi108 = phi_in73;
				phi_in109 = anon107;
				phi_in110 = phi_in84;
				phi_in111 = anon107;
				phi_in112 = anon107;
				phi113 = anon107;
				phi114 = anon107;
				phi115 = anon107;
				phi_in116 = phi_in76;
				phi_in117 = anon107;
				phi118 = anon107;
				phi_in119 = anon107;
				phi120 = anon107;
				phi_in121 = phi90;
				phi_in122 = anon107;
				phi_in123 = anon107;
				phi124 = anon107;
				phi_in125 = phi88;
				phi_in126 = 0;
				phi_in127 = anon104 * 12;
			}
			if (dispatch15 == 4 || dispatch15 == 3 && *(uint32_t*)(phi88 + 24) < *anon103 || dispatch15 == 2 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 || dispatch15 == 1 && phi30 < *anon38 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 || dispatch15 == 0 && phi12 < *anon8 && phi30 < *anon38 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103)
			{
				phi128 = phi81;
				phi_in129 = phi105;
				phi_in130 = phi108;
				phi131 = phi_in111;
				phi_in132 = phi_in112;
				phi_in133 = phi85;
				phi_in134 = phi113;
				phi135 = phi114;
				phi136 = phi115;
				phi137 = phi86;
				phi138 = phi120;
				phi_in139 = phi87;
				phi140 = phi124;
				phi141 = phi_in125;
				phi142 = phi_in126;
				phi143 = phi_in127;
				phi_in127 = phi143;
				phi144 = phi128;
				phi82 = phi_in129;
				phi145 = phi106;
				phi146 = phi_in130;
				phi147 = phi_in109;
				phi148 = phi_in83;
				phi149 = phi_in110;
				phi150 = phi142;
				phi151 = phi_in133;
				phi152 = phi_in134;
				phi_in153 = phi135;
				phi154 = phi136;
				phi155 = phi_in116;
				phi156 = phi_in117;
				phi157 = phi118;
				phi158 = phi137;
				phi159 = phi138;
				phi87 = phi_in139;
				phi160 = phi_in121;
				phi161 = phi_in123;
				phi162 = phi140;
				phi163 = phi141;
				phi164 = phi91;
			}
			int64_t anon166 = (__sext int64_t)*(uint32_t*)(phi142 + phi143 + 6301632);
			uint32_t* anon165 = (uint32_t*)((anon166 << 2) + 6300992);
			if (*(uint32_t*)(phi141 + 28) < *anon165 && (dispatch15 == 4 || dispatch15 == 3 && *(uint32_t*)(phi88 + 24) < *anon103 || dispatch15 == 2 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 || dispatch15 == 1 && phi30 < *anon38 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 || dispatch15 == 0 && phi12 < *anon8 && phi30 < *anon38 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103))
			{
				*anon165 = *(uint32_t*)(phi141 + 40);
				*(uint32_t*)(phi141 + 120) = (uint32_t)phi91 + 9;
				phi_in167 = 0;
				phi_in168 = phi_in129;
				phi169 = phi_in72;
				phi170 = phi_in83;
				phi_in111 = phi131;
				phi171 = phi_in132;
				phi_in172 = phi_in134;
				phi_in173 = phi_in116;
				phi174 = phi_in117;
				phi175 = phi_in119;
				phi176 = phi142;
				phi_in177 = phi_in139;
				phi178 = phi_in121;
				phi_in179 = phi143;
				phi_in180 = phi_in122;
				phi181 = phi_in123;
				phi_in182 = phi141;
				phi_in183 = phi91 & 0xffffffff;
			}
			if (dispatch15 == 5 || dispatch15 == 4 && *(uint32_t*)(phi141 + 28) < *anon165 || dispatch15 == 3 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 || dispatch15 == 2 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 || dispatch15 == 1 && phi30 < *anon38 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 || dispatch15 == 0 && phi12 < *anon8 && phi30 < *anon38 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165)
			{
				phi184 = phi_in167;
				phi185 = phi128;
				phi_in186 = phi169;
				phi187 = phi106;
				phi188 = phi170;
				phi189 = phi135;
				phi190 = phi136;
				phi191 = phi118;
				phi_in192 = phi137;
				phi193 = phi175;
				phi194 = phi138;
				phi_in195 = phi176;
				phi_in196 = phi178;
				phi197 = phi181;
				phi198 = phi140;
				phi199 = phi_in182;
				phi_in129 = phi_in168;
				phi_in200 = phi_in186;
				phi146 = phi_in130;
				phi201 = phi188;
				phi202 = phi_in110;
				phi203 = phi_in111;
				phi204 = phi_in133;
				phi205 = phi_in172;
				phi206 = phi189;
				phi207 = phi190;
				phi118 = phi191;
				phi208 = phi_in192;
				phi209 = phi193;
				phi210 = phi194;
				phi176 = phi_in195;
				phi211 = phi_in177;
				phi212 = phi_in196;
				phi213 = phi_in179;
				phi214 = phi_in180;
				phi215 = phi197;
				phi_in216 = phi198;
				phi217 = phi199;
			}
			int64_t anon219 = (__sext int64_t)*(uint32_t*)(phi184 + anon166 * 12 + 6301632);
			uint32_t* anon218 = (uint32_t*)((anon219 << 2) + 6300992);
			if (*(uint32_t*)(phi199 + 40) < *anon218 && (dispatch15 == 5 || dispatch15 == 4 && *(uint32_t*)(phi141 + 28) < *anon165 || dispatch15 == 3 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 || dispatch15 == 2 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 || dispatch15 == 1 && phi30 < *anon38 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 || dispatch15 == 0 && phi12 < *anon8 && phi30 < *anon38 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165))
			{
				*anon218 = *(uint32_t*)(phi199 + 44);
				phi_in220 = 0;
				phi_in221 = phi185;
				phi222 = phi_in168;
				phi_in223 = phi_in186;
				phi224 = phi187;
				phi225 = phi_in130;
				phi226 = phi_in109;
				phi227 = phi_in110;
				phi228 = phi_in111;
				phi229 = phi171;
				*(uint32_t*)(phi230 + 96) = phi_in133;
				phi231 = phi_in172;
				phi232 = phi_in173;
				phi233 = phi174;
				phi234 = phi_in192;
				phi235 = phi_in195;
				phi_in236 = phi_in177;
				phi237 = phi_in196;
				*(uint64_t*)(phi230 + 112) = phi_in179;
				phi238 = phi199;
				phi_in239 = phi_in183;
			}
			if (dispatch15 == 6 || dispatch15 == 5 && *(uint32_t*)(phi199 + 40) < *anon218 || dispatch15 == 4 && *(uint32_t*)(phi141 + 28) < *anon165 && *(uint32_t*)(phi199 + 40) < *anon218 || dispatch15 == 3 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 && *(uint32_t*)(phi199 + 40) < *anon218 || dispatch15 == 2 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 && *(uint32_t*)(phi199 + 40) < *anon218 || dispatch15 == 1 && phi30 < *anon38 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 && *(uint32_t*)(phi199 + 40) < *anon218 || dispatch15 == 0 && phi12 < *anon8 && phi30 < *anon38 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 && *(uint32_t*)(phi199 + 40) < *anon218)
			{
				phi240 = phi_in220;
				uint32_t phi241 = phi_in221;
				uint32_t phi242 = phi222;
				uint32_t phi243 = phi_in223;
				uint32_t phi_in244 = phi224;
				uint32_t phi_in245 = phi225;
				uint32_t phi246 = phi226;
				uint32_t phi247 = phi188;
				uint32_t phi248 = phi227;
				uint32_t phi249 = phi228;
				uint32_t phi250 = phi229;
				*(uint32_t*)(phi230 + 124) = phi231;
				int64_t anon254 = (__sext int64_t)*(uint32_t*)(phi240 + anon219 * 12 + 6301632);
				int64_t anon253 = anon254 * 12;
				int64_t anon252 = (__sext int64_t)*(uint32_t*)(anon253 + 6301636);
				uint32_t* anon251 = (uint32_t*)((anon252 << 2) + 6300992);
				*anon251 = phi190;
				uint32_t phi_in255 = phi232;
				uint32_t phi_in256 = phi233;
				uint32_t phi_in257 = phi191;
				uint32_t phi258 = phi234;
				uint32_t phi259 = phi193;
				uint32_t phi_in260 = phi194;
				*(uint64_t*)(phi230 + 88) = phi235;
				uint32_t phi261 = phi_in236;
				uint64_t phi262 = phi237;
				uint32_t phi_in263 = phi197;
				uint32_t phi_in264 = phi198;
				phi230 = phi238;
				uint64_t phi265 = phi_in239;
				uint32_t phi266 = phi243;
				uint32_t phi267 = phi_in244;
				uint32_t phi268 = phi_in245;
				phi226 = phi246;
				uint32_t phi269 = phi247;
				phi_in110 = phi248;
				phi203 = phi249;
				phi229 = phi250;
				uint32_t phi270 = *(uint32_t*)(phi230 + 96);
				phi_in172 = *(uint32_t*)(phi230 + 124);
				uint32_t phi271 = phi189;
				uint32_t phi272 = *anon251;
				uint32_t phi273 = phi_in255;
				phi233 = phi_in256;
				uint32_t phi274 = phi_in257;
				uint32_t phi275 = phi258;
				uint32_t phi276 = phi_in260;
				phi_in195 = *(uint64_t*)(phi230 + 88);
				uint32_t phi277 = phi261;
				phi237 = phi262;
				phi197 = phi_in263;
				phi198 = phi_in264;
				uint64_t phi_in278 = phi230;
				uint32_t* anon279 = (uint32_t*)((anon254 << 2) + 6300992);
				if (*(uint32_t*)(phi230 + 44) < *anon279)
				{
					*anon279 = *(uint32_t*)(phi230 + 64);
					uint32_t phi280 = phi241;
					uint32_t phi281 = phi242;
					uint32_t phi282 = phi_in244;
					uint64_t phi283 = phi230;
					uint32_t phi284 = phi_in245;
					uint32_t phi285 = phi246;
					uint32_t phi286 = phi248;
					uint32_t phi287 = phi249;
					uint32_t phi_in288 = phi250;
					uint32_t phi_in289 = *(uint32_t*)(phi230 + 96);
					uint32_t phi_in290 = *(uint32_t*)(phi230 + 124);
					uint32_t phi_in291 = phi189;
					uint32_t phi_in292 = *anon251;
					uint32_t phi293 = phi_in255;
					uint32_t phi_in294 = phi_in256;
					uint32_t phi_in295 = phi_in257;
					uint32_t phi296 = phi258;
					uint32_t phi297 = phi_in260;
					uint64_t phi298 = *(uint64_t*)(phi230 + 88);
					uint64_t phi299 = *(uint64_t*)(phi230 + 112);
					uint32_t phi300 = phi_in180;
					uint32_t phi301 = phi_in263;
					uint32_t phi302 = phi_in264;
					uint64_t phi_in303 = phi265;
					if (*(uint32_t*)(phi230 + 64) < *anon251)
					{
						uint32_t phi304 = phi241;
						uint32_t phi305 = phi242;
						uint32_t phi306 = phi243;
						uint32_t phi_in307 = phi_in244;
						uint32_t phi_in308 = phi_in245;
						*(uint32_t*)(phi309 + 96) = phi247;
						*(uint64_t*)(phi309 + 80) = anon252;
						uint32_t phi_in310 = *(uint32_t*)(phi230 + 96);
						uint64_t phi311 = *(uint64_t*)(phi230 + 88);
						uint32_t phi_in312 = phi261;
						uint64_t phi313 = phi262;
						uint64_t phi314 = *(uint64_t*)(phi230 + 112);
						uint64_t phi_in315 = phi265;
						if (phi189 < *anon251)
						{
							*(uint64_t*)(phi230 + 104) = phi262;
							*(uint64_t*)(phi230 + 80) = anon252;
							w(4197873, anon14, (__sext int64_t)*anon251, (__zext uint64_t)*anon251);
							phi304 = *(uint32_t*)(arg1 - 96);
							phi305 = *(uint32_t*)(arg1 - 96);
							phi306 = *(uint32_t*)(arg1 - 96);
							phi_in307 = *(uint32_t*)(arg1 - 68);
							phi_in308 = *(uint32_t*)(arg1 - 96);
							phi246 = *(uint32_t*)(arg1 - 68);
							*(uint32_t*)(phi309 + 96) = *(uint32_t*)(arg1 - 96);
							phi248 = *(uint32_t*)(arg1 - 96);
							phi249 = *(uint32_t*)(arg1 - 68);
							phi230 = anon14;
							phi250 = *(uint32_t*)(arg1 - 68);
							*(uint64_t*)(phi309 + 80) = *(uint64_t*)(arg1 - 112);
							phi_in310 = *(uint32_t*)(arg1 - 96);
							phi_in255 = *(uint32_t*)(arg1 - 96);
							phi258 = *(uint32_t*)(arg1 - 96);
							phi311 = *(uint64_t*)(arg1 - 104);
							phi_in312 = *(uint32_t*)(arg1 - 96);
							phi313 = *(uint64_t*)(arg1 - 88);
							phi314 = *(uint64_t*)(arg1 - 80);
							phi_in315 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
						}
						uint32_t phi_in316 = phi304;
						uint32_t phi_in317 = phi305;
						uint32_t phi_in318 = phi306;
						uint32_t phi319 = phi248;
						*(uint32_t*)(phi309 + 124) = phi249;
						uint64_t phi309 = phi230;
						uint32_t phi320 = phi258;
						*(uint64_t*)(phi309 + 88) = phi311;
						phi262 = phi313;
						*(uint64_t*)(phi309 + 112) = phi314;
						phi280 = phi_in316;
						uint32_t phi321 = phi_in317;
						uint32_t phi322 = phi_in318;
						uint32_t phi323 = phi_in307;
						*(uint32_t*)(phi309 + 88) = phi_in308;
						uint32_t phi_in324 = *(uint32_t*)(phi309 + 96);
						uint64_t phi325 = *(uint64_t*)(phi309 + 80);
						uint32_t phi326 = phi_in310;
						uint32_t phi327 = phi_in255;
						uint64_t phi328 = *(uint64_t*)(phi309 + 88);
						uint32_t phi329 = phi_in312;
						uint64_t phi330 = *(uint64_t*)(phi309 + 112);
						uint64_t phi331 = phi_in315;
						int64_t anon332 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi309 + 80) * 12 + 6301636);
						if (phi250 < *(uint32_t*)((anon332 << 2) + 6300992))
						{
							*(uint64_t*)(phi309 + 104) = phi262;
							w(4197793, anon14, anon332, (__zext uint64_t)*(uint32_t*)(phi309 + 120));
							phi280 = *(uint32_t*)(arg1 - 96);
							phi321 = *(uint32_t*)(arg1 - 96);
							phi322 = *(uint32_t*)(arg1 - 96);
							phi323 = alloca1.field14;
							*(uint32_t*)(phi309 + 88) = *(uint32_t*)(arg1 - 96);
							phi309 = anon14;
							phi246 = alloca1.field14;
							phi_in324 = *(uint32_t*)(arg1 - 96);
							phi319 = *(uint32_t*)(arg1 - 96);
							phi325 = *(uint64_t*)(arg1 - 112);
							phi326 = *(uint32_t*)(arg1 - 96);
							phi327 = *(uint32_t*)(arg1 - 96);
							phi320 = *(uint32_t*)(arg1 - 96);
							phi328 = *(uint64_t*)(arg1 - 104);
							phi329 = *(uint32_t*)(arg1 - 96);
							phi262 = *(uint64_t*)(arg1 - 88);
							phi330 = *(uint64_t*)(arg1 - 80);
							phi331 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
						}
						phi281 = phi321;
						uint32_t phi_in333 = phi322;
						uint32_t phi_in334 = phi323;
						phi_in290 = phi246;
						phi286 = phi319;
						uint32_t phi_in335 = phi326;
						phi293 = phi327;
						uint32_t phi_in336 = phi320;
						*(uint64_t*)(phi309 + 80) = phi328;
						phi261 = phi329;
						*(uint64_t*)(phi309 + 104) = phi330;
						phi_in303 = phi331;
						phi243 = phi_in333;
						phi282 = phi_in334;
						phi283 = phi309;
						phi284 = *(uint32_t*)(phi309 + 88);
						phi285 = phi_in290;
						phi247 = phi_in324;
						phi287 = phi_in290;
						phi_in288 = phi_in290;
						phi_in289 = phi_in335;
						phi_in291 = phi_in290;
						phi_in292 = phi_in290;
						phi_in294 = phi_in290;
						phi_in295 = phi_in290;
						phi296 = phi_in336;
						phi259 = phi_in290;
						phi297 = phi_in290;
						phi298 = *(uint64_t*)(phi309 + 80);
						phi299 = *(uint64_t*)(phi309 + 104);
						phi300 = phi_in290;
						phi301 = phi_in290;
						phi302 = phi_in290;
						int64_t anon337 = (__sext int64_t)*(uint32_t*)(phi325 * 12 + 6301640);
						if (phi_in290 < *(uint32_t*)((anon337 << 2) + 6300992))
						{
							*(uint32_t*)(phi309 + 112) = phi_in290;
							*(uint64_t*)(phi309 + 96) = phi262;
							w(4197395, anon14, anon337, (__zext uint64_t)*(uint32_t*)(phi309 + 120));
							phi280 = *(uint32_t*)(arg1 - 104);
							phi281 = *(uint32_t*)(arg1 - 104);
							phi243 = *(uint32_t*)(arg1 - 104);
							phi282 = *(uint32_t*)(arg1 - 80);
							phi283 = anon14;
							phi284 = *(uint32_t*)(arg1 - 104);
							phi285 = *(uint32_t*)(arg1 - 80);
							phi247 = *(uint32_t*)(arg1 - 104);
							phi286 = *(uint32_t*)(arg1 - 104);
							phi287 = *(uint32_t*)(arg1 - 80);
							phi_in288 = *(uint32_t*)(arg1 - 80);
							phi_in289 = *(uint32_t*)(arg1 - 104);
							phi_in290 = *(uint32_t*)(arg1 - 80);
							phi_in291 = *(uint32_t*)(arg1 - 80);
							phi_in292 = *(uint32_t*)(arg1 - 80);
							phi293 = *(uint32_t*)(arg1 - 104);
							phi_in294 = *(uint32_t*)(arg1 - 80);
							phi_in295 = *(uint32_t*)(arg1 - 80);
							phi296 = *(uint32_t*)(arg1 - 104);
							phi259 = *(uint32_t*)(arg1 - 80);
							phi297 = *(uint32_t*)(arg1 - 80);
							phi298 = *(uint64_t*)(arg1 - 112);
							phi261 = *(uint32_t*)(arg1 - 104);
							phi262 = *(uint64_t*)(arg1 - 96);
							phi299 = *(uint64_t*)(arg1 - 88);
							phi300 = *(uint32_t*)(arg1 - 80);
							phi301 = *(uint32_t*)(arg1 - 80);
							phi302 = *(uint32_t*)(arg1 - 80);
							phi_in303 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
						}
					}
					uint32_t phi338 = phi280;
					*(uint32_t*)(phi283 + 88) = phi281;
					uint32_t phi_in339 = phi243;
					*(uint32_t*)(phi283 + 112) = phi282;
					uint32_t phi340 = phi284;
					uint32_t phi_in341 = phi285;
					uint32_t phi_in342 = phi247;
					phi_in110 = phi286;
					uint32_t phi_in343 = phi287;
					uint32_t phi_in344 = phi293;
					uint32_t phi345 = phi296;
					phi276 = phi297;
					*(uint64_t*)(phi283 + 80) = phi298;
					uint32_t phi_in346 = phi261;
					phi237 = phi262;
					uint64_t phi347 = phi299;
					phi_in180 = phi300;
					phi197 = phi301;
					uint32_t phi_in348 = phi302;
					phi241 = phi338;
					phi242 = *(uint32_t*)(phi283 + 88);
					phi266 = phi_in339;
					phi267 = *(uint32_t*)(phi283 + 112);
					phi268 = phi340;
					phi226 = phi_in341;
					phi269 = phi_in342;
					phi203 = phi_in343;
					phi229 = phi_in288;
					phi270 = phi_in289;
					phi_in172 = phi_in290;
					phi271 = phi_in291;
					phi272 = phi_in292;
					phi273 = phi_in344;
					phi233 = phi_in294;
					phi274 = phi_in295;
					phi275 = phi345;
					phi_in195 = *(uint64_t*)(phi283 + 80);
					phi277 = phi_in346;
					*(uint64_t*)(phi230 + 112) = phi347;
					phi198 = phi_in348;
					phi_in278 = phi283;
					phi265 = phi_in303;
					int64_t anon350 = (__sext int64_t)*(uint32_t*)(anon253 + 6301640);
					uint32_t* anon349 = (uint32_t*)((anon350 << 2) + 6300992);
					if (*(uint32_t*)(phi283 + 64) < *anon349)
					{
						*anon349 = *(uint32_t*)(phi283 + 112);
						uint32_t phi_in351 = *(uint32_t*)(phi283 + 88);
						uint32_t phi352 = *(uint32_t*)(phi283 + 112);
						uint32_t phi353 = phi_in342;
						uint32_t phi354 = phi_in289;
						uint32_t phi355 = phi_in344;
						*(uint64_t*)(phi_in278 + 80) = *(uint64_t*)(phi283 + 80);
						phi277 = phi_in346;
						*(uint64_t*)(phi_in278 + 96) = phi237;
						uint64_t phi356 = phi283;
						uint64_t phi_in357 = phi_in303;
						int64_t anon359 = anon350 * 12;
						int64_t anon358 = (__sext int64_t)*(uint32_t*)(anon359 + 6301636);
						if (*(uint32_t*)(phi283 + 112) < *(uint32_t*)((anon358 << 2) + 6300992))
						{
							*(uint64_t*)(phi283 + 104) = phi347;
							*(uint64_t*)(phi283 + 96) = phi237;
							w(4197948, anon14, anon358, (__zext uint64_t)*(uint32_t*)(phi283 + 120));
							phi338 = *(uint32_t*)(arg1 - 104);
							phi_in351 = *(uint32_t*)(arg1 - 104);
							phi_in339 = *(uint32_t*)(arg1 - 104);
							phi352 = *(uint32_t*)(arg1 - 80);
							phi340 = *(uint32_t*)(arg1 - 104);
							phi353 = *(uint32_t*)(arg1 - 104);
							phi_in110 = *(uint32_t*)(arg1 - 104);
							phi354 = *(uint32_t*)(arg1 - 104);
							phi355 = *(uint32_t*)(arg1 - 104);
							phi345 = *(uint32_t*)(arg1 - 104);
							*(uint64_t*)(phi_in278 + 80) = *(uint64_t*)(arg1 - 112);
							phi277 = *(uint32_t*)(arg1 - 104);
							*(uint64_t*)(phi_in278 + 96) = *(uint64_t*)(arg1 - 96);
							phi347 = *(uint64_t*)(arg1 - 88);
							phi356 = anon14;
							phi_in357 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
						}
						*(uint32_t*)(phi_in278 + 88) = phi338;
						*(uint32_t*)(phi_in278 + 112) = phi352;
						uint32_t phi_in360 = phi340;
						uint32_t phi_in361 = phi353;
						uint32_t phi_in362 = phi354;
						uint32_t phi_in363 = phi355;
						uint32_t phi_in364 = phi345;
						phi237 = *(uint64_t*)(phi_in278 + 96);
						*(uint64_t*)(phi_in278 + 104) = phi347;
						phi_in278 = phi356;
						phi241 = *(uint32_t*)(phi_in278 + 88);
						phi242 = phi_in351;
						phi266 = phi_in339;
						phi267 = *(uint32_t*)(phi_in278 + 112);
						phi268 = phi_in360;
						phi226 = *(uint32_t*)(phi_in278 + 112);
						phi269 = phi_in361;
						phi203 = *(uint32_t*)(phi_in278 + 112);
						phi229 = *(uint32_t*)(phi_in278 + 112);
						phi270 = phi_in362;
						phi_in172 = *(uint32_t*)(phi_in278 + 112);
						phi271 = *(uint32_t*)(phi_in278 + 112);
						phi272 = *(uint32_t*)(phi_in278 + 112);
						phi273 = phi_in363;
						phi233 = *(uint32_t*)(phi_in278 + 112);
						phi274 = *(uint32_t*)(phi_in278 + 112);
						phi275 = phi_in364;
						phi259 = *(uint32_t*)(phi_in278 + 112);
						phi276 = *(uint32_t*)(phi_in278 + 112);
						phi_in195 = *(uint64_t*)(phi_in278 + 80);
						*(uint64_t*)(phi230 + 112) = *(uint64_t*)(phi_in278 + 104);
						phi_in180 = *(uint32_t*)(phi_in278 + 112);
						phi197 = *(uint32_t*)(phi_in278 + 112);
						phi198 = *(uint32_t*)(phi_in278 + 112);
						phi265 = phi_in357;
						int64_t anon365 = (__sext int64_t)*(uint32_t*)(anon359 + 6301640);
						if (*(uint32_t*)(phi_in278 + 112) < *(uint32_t*)((anon365 << 2) + 6300992))
						{
							*(uint64_t*)(phi_in278 + 96) = phi237;
							w(4197231, anon14, anon365, (__zext uint64_t)*(uint32_t*)(phi_in278 + 120));
							phi241 = alloca1.field8;
							phi242 = alloca1.field8;
							phi266 = alloca1.field8;
							phi267 = alloca1.field12;
							phi268 = alloca1.field8;
							phi226 = alloca1.field12;
							phi269 = alloca1.field8;
							phi_in110 = alloca1.field8;
							phi203 = alloca1.field12;
							phi229 = alloca1.field12;
							phi270 = alloca1.field8;
							phi_in172 = alloca1.field12;
							phi271 = alloca1.field12;
							phi272 = alloca1.field12;
							phi273 = alloca1.field8;
							phi233 = alloca1.field12;
							phi274 = alloca1.field12;
							phi275 = alloca1.field8;
							phi259 = alloca1.field12;
							phi276 = alloca1.field12;
							phi_in195 = alloca1.field7;
							phi277 = alloca1.field8;
							phi237 = alloca1.field10;
							*(uint64_t*)(phi230 + 112) = alloca1.field11;
							phi_in180 = alloca1.field12;
							phi197 = alloca1.field12;
							phi198 = alloca1.field12;
							phi_in278 = anon14;
							phi265 = (__zext uint64_t)alloca1.field8;
						}
					}
				}
				phi_in221 = phi241;
				phi222 = phi242;
				phi_in200 = phi266;
				phi224 = phi267;
				phi225 = phi268;
				phi188 = phi269;
				phi171 = phi229;
				*(uint32_t*)(phi230 + 96) = phi270;
				phi205 = phi_in172;
				phi189 = phi271;
				phi190 = phi272;
				phi232 = phi273;
				phi191 = phi274;
				phi234 = phi275;
				phi193 = phi259;
				phi194 = phi276;
				phi_in177 = phi277;
				phi_in183 = phi265;
				phi185 = phi_in221;
				phi_in129 = phi222;
				phi187 = phi224;
				phi146 = phi225;
				phi_in109 = phi226;
				phi201 = phi188;
				phi202 = phi_in110;
				phi204 = *(uint32_t*)(phi230 + 96);
				phi206 = phi189;
				phi207 = phi190;
				phi_in173 = phi232;
				phi174 = phi233;
				phi118 = phi191;
				phi208 = phi234;
				phi209 = phi193;
				phi210 = phi194;
				phi176 = phi_in195;
				phi211 = phi_in177;
				phi212 = phi237;
				phi213 = *(uint64_t*)(phi230 + 112);
				phi214 = phi_in180;
				phi215 = phi197;
				phi_in216 = phi198;
				phi217 = phi_in278;
				phi_in183 = phi_in183;
				phi_in220 = phi240 + 4;
				phi_in223 = phi_in200;
				phi227 = phi_in110;
				phi228 = phi203;
				phi229 = phi171;
				phi231 = phi205;
				phi235 = phi_in195;
				phi_in236 = phi_in177;
				phi238 = phi_in278;
				phi_in239 = phi_in183;
				dispatch15 = 6;
			}
			if (*(uint32_t*)(phi199 + 40) >= *anon218 && dispatch15 == 5 || *(uint32_t*)(phi199 + 40) >= *anon218 && dispatch15 == 4 && *(uint32_t*)(phi141 + 28) < *anon165 || *(uint32_t*)(phi199 + 40) >= *anon218 && dispatch15 == 3 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 || *(uint32_t*)(phi199 + 40) >= *anon218 && dispatch15 == 2 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 || *(uint32_t*)(phi199 + 40) >= *anon218 && dispatch15 == 1 && phi30 < *anon38 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 || *(uint32_t*)(phi199 + 40) >= *anon218 && dispatch15 == 0 && phi12 < *anon8 && phi30 < *anon38 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 || dispatch15 == 6 && phi240 == 8 || dispatch15 == 5 && *(uint32_t*)(phi199 + 40) < *anon218 && phi240 == 8 || dispatch15 == 4 && *(uint32_t*)(phi141 + 28) < *anon165 && *(uint32_t*)(phi199 + 40) < *anon218 && phi240 == 8 || dispatch15 == 3 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 && *(uint32_t*)(phi199 + 40) < *anon218 && phi240 == 8 || dispatch15 == 2 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 && *(uint32_t*)(phi199 + 40) < *anon218 && phi240 == 8 || dispatch15 == 1 && phi30 < *anon38 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 && *(uint32_t*)(phi199 + 40) < *anon218 && phi240 == 8 || dispatch15 == 0 && phi12 < *anon8 && phi30 < *anon38 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 && *(uint32_t*)(phi199 + 40) < *anon218 && phi240 == 8)
			{
				phi128 = phi185;
				phi_in72 = phi_in200;
				phi106 = phi187;
				phi170 = phi201;
				phi_in110 = phi202;
				phi_in111 = phi203;
				phi_in132 = phi171;
				phi_in133 = phi204;
				phi_in172 = phi205;
				phi135 = phi206;
				phi136 = phi207;
				phi157 = phi118;
				phi137 = phi208;
				phi175 = phi209;
				phi138 = phi210;
				phi_in177 = phi211;
				phi178 = phi212;
				phi_in179 = phi213;
				phi_in180 = phi214;
				phi161 = phi215;
				phi_in182 = phi217;
				phi164 = phi_in183;
				phi_in127 = phi_in179;
				phi144 = phi128;
				phi82 = phi_in129;
				phi145 = phi106;
				phi147 = phi_in109;
				phi148 = phi170;
				phi149 = phi_in110;
				phi150 = phi176;
				phi131 = phi_in111;
				phi151 = phi_in133;
				phi152 = phi_in172;
				phi_in153 = phi135;
				phi154 = phi136;
				phi155 = phi_in173;
				phi156 = phi174;
				phi158 = phi137;
				phi_in119 = phi175;
				phi159 = phi138;
				phi87 = phi_in177;
				phi160 = phi178;
				phi_in122 = phi_in180;
				phi162 = phi_in216;
				phi163 = phi_in182;
				phi_in167 = phi184 + 4;
				phi_in168 = phi_in129;
				phi169 = phi_in72;
				phi_in130 = phi146;
				phi171 = phi_in132;
				phi118 = phi157;
				phi181 = phi161;
				phi140 = phi_in216;
				phi_in183 = phi164;
				dispatch15 = 5;
			}
			if (*(uint32_t*)(phi141 + 28) >= *anon165 && dispatch15 == 4 || *(uint32_t*)(phi141 + 28) >= *anon165 && dispatch15 == 3 && *(uint32_t*)(phi88 + 24) < *anon103 || *(uint32_t*)(phi141 + 28) >= *anon165 && dispatch15 == 2 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 || *(uint32_t*)(phi141 + 28) >= *anon165 && dispatch15 == 1 && phi30 < *anon38 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 || *(uint32_t*)(phi141 + 28) >= *anon165 && dispatch15 == 0 && phi12 < *anon8 && phi30 < *anon38 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 || *(uint32_t*)(phi199 + 40) >= *anon218 && dispatch15 == 5 && phi184 == 8 || *(uint32_t*)(phi199 + 40) >= *anon218 && dispatch15 == 4 && *(uint32_t*)(phi141 + 28) < *anon165 && phi184 == 8 || *(uint32_t*)(phi199 + 40) >= *anon218 && dispatch15 == 3 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 && phi184 == 8 || *(uint32_t*)(phi199 + 40) >= *anon218 && dispatch15 == 2 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 && phi184 == 8 || *(uint32_t*)(phi199 + 40) >= *anon218 && dispatch15 == 1 && phi30 < *anon38 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 && phi184 == 8 || *(uint32_t*)(phi199 + 40) >= *anon218 && dispatch15 == 0 && phi12 < *anon8 && phi30 < *anon38 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 && phi184 == 8 || dispatch15 == 6 && phi240 == 8 && phi184 == 8 || dispatch15 == 5 && *(uint32_t*)(phi199 + 40) < *anon218 && phi240 == 8 && phi184 == 8 || dispatch15 == 4 && *(uint32_t*)(phi141 + 28) < *anon165 && *(uint32_t*)(phi199 + 40) < *anon218 && phi240 == 8 && phi184 == 8 || dispatch15 == 3 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 && *(uint32_t*)(phi199 + 40) < *anon218 && phi240 == 8 && phi184 == 8 || dispatch15 == 2 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 && *(uint32_t*)(phi199 + 40) < *anon218 && phi240 == 8 && phi184 == 8 || dispatch15 == 1 && phi30 < *anon38 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 && *(uint32_t*)(phi199 + 40) < *anon218 && phi240 == 8 && phi184 == 8 || dispatch15 == 0 && phi12 < *anon8 && phi30 < *anon38 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 && *(uint32_t*)(phi199 + 40) < *anon218 && phi240 == 8 && phi184 == 8)
			{
				phi81 = phi144;
				phi106 = phi145;
				phi108 = phi146;
				phi_in109 = phi147;
				phi_in83 = phi148;
				phi_in84 = phi149;
				phi_in111 = phi131;
				phi85 = phi151;
				phi113 = phi152;
				phi115 = phi154;
				phi_in116 = phi155;
				phi_in117 = phi156;
				phi118 = phi157;
				phi86 = phi158;
				phi120 = phi159;
				phi_in121 = phi160;
				phi_in123 = phi161;
				phi124 = phi162;
				phi_in125 = phi163;
				phi91 = phi164;
				phi92 = phi_in121;
				phi93 = phi81;
				phi_in94 = phi_in72;
				phi_in95 = phi108;
				phi96 = phi_in83;
				phi97 = phi_in84;
				phi98 = phi85;
				phi99 = phi_in116;
				phi100 = phi86;
				phi48 = phi87;
				phi101 = phi_in125;
				phi102 = phi91;
				phi105 = phi82;
				phi_in110 = phi_in84;
				phi_in112 = phi_in132;
				phi114 = phi_in153;
				phi_in126 = phi150 + 4;
				dispatch15 = 4;
			}
			if (*(uint32_t*)(phi88 + 24) >= *anon103 && dispatch15 == 3 || *(uint32_t*)(phi88 + 24) >= *anon103 && dispatch15 == 2 && *(uint32_t*)(phi58 + 4) < *anon69 || *(uint32_t*)(phi88 + 24) >= *anon103 && dispatch15 == 1 && phi30 < *anon38 && *(uint32_t*)(phi58 + 4) < *anon69 || *(uint32_t*)(phi88 + 24) >= *anon103 && dispatch15 == 0 && phi12 < *anon8 && phi30 < *anon38 && *(uint32_t*)(phi58 + 4) < *anon69 || *(uint32_t*)(phi141 + 28) >= *anon165 && dispatch15 == 4 && phi150 == 8 || *(uint32_t*)(phi141 + 28) >= *anon165 && dispatch15 == 3 && *(uint32_t*)(phi88 + 24) < *anon103 && phi150 == 8 || *(uint32_t*)(phi141 + 28) >= *anon165 && dispatch15 == 2 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && phi150 == 8 || *(uint32_t*)(phi141 + 28) >= *anon165 && dispatch15 == 1 && phi30 < *anon38 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && phi150 == 8 || *(uint32_t*)(phi141 + 28) >= *anon165 && dispatch15 == 0 && phi12 < *anon8 && phi30 < *anon38 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && phi150 == 8 || *(uint32_t*)(phi199 + 40) >= *anon218 && dispatch15 == 5 && phi184 == 8 && phi150 == 8 || *(uint32_t*)(phi199 + 40) >= *anon218 && dispatch15 == 4 && *(uint32_t*)(phi141 + 28) < *anon165 && phi184 == 8 && phi150 == 8 || *(uint32_t*)(phi199 + 40) >= *anon218 && dispatch15 == 3 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 && phi184 == 8 && phi150 == 8 || *(uint32_t*)(phi199 + 40) >= *anon218 && dispatch15 == 2 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 && phi184 == 8 && phi150 == 8 || *(uint32_t*)(phi199 + 40) >= *anon218 && dispatch15 == 1 && phi30 < *anon38 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 && phi184 == 8 && phi150 == 8 || *(uint32_t*)(phi199 + 40) >= *anon218 && dispatch15 == 0 && phi12 < *anon8 && phi30 < *anon38 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 && phi184 == 8 && phi150 == 8 || dispatch15 == 6 && phi240 == 8 && phi184 == 8 && phi150 == 8 || dispatch15 == 5 && *(uint32_t*)(phi199 + 40) < *anon218 && phi240 == 8 && phi184 == 8 && phi150 == 8 || dispatch15 == 4 && *(uint32_t*)(phi141 + 28) < *anon165 && *(uint32_t*)(phi199 + 40) < *anon218 && phi240 == 8 && phi184 == 8 && phi150 == 8 || dispatch15 == 3 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 && *(uint32_t*)(phi199 + 40) < *anon218 && phi240 == 8 && phi184 == 8 && phi150 == 8 || dispatch15 == 2 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 && *(uint32_t*)(phi199 + 40) < *anon218 && phi240 == 8 && phi184 == 8 && phi150 == 8 || dispatch15 == 1 && phi30 < *anon38 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 && *(uint32_t*)(phi199 + 40) < *anon218 && phi240 == 8 && phi184 == 8 && phi150 == 8 || dispatch15 == 0 && phi12 < *anon8 && phi30 < *anon38 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 && *(uint32_t*)(phi199 + 40) < *anon218 && phi240 == 8 && phi184 == 8 && phi150 == 8)
			{
				phi_in80 = phi92;
				phi_in366 = phi93;
				phi_in367 = phi82;
				phi_in72 = phi_in94;
				phi60 = phi96;
				phi_in368 = phi97;
				phi_in369 = phi98;
				phi_in370 = phi99;
				phi_in371 = phi100;
				phi_in372 = phi101;
				phi_in67 = phi102;
				phi52 = phi_in366;
				phi71 = phi_in367;
				phi_in73 = phi_in95;
				phi74 = phi60;
				phi44 = phi_in368;
				phi75 = phi_in369;
				phi_in76 = phi_in370;
				phi77 = phi_in371;
				phi_in78 = phi_in372;
				phi_in79 = phi89 + 4;
				phi57 = phi_in67;
				dispatch15 = 3;
			}
			if (phi89 == 8 && (*(uint32_t*)(phi88 + 24) >= *anon103 && dispatch15 == 3 || *(uint32_t*)(phi88 + 24) >= *anon103 && dispatch15 == 2 && *(uint32_t*)(phi58 + 4) < *anon69 || *(uint32_t*)(phi88 + 24) >= *anon103 && dispatch15 == 1 && phi30 < *anon38 && *(uint32_t*)(phi58 + 4) < *anon69 || *(uint32_t*)(phi88 + 24) >= *anon103 && dispatch15 == 0 && phi12 < *anon8 && phi30 < *anon38 && *(uint32_t*)(phi58 + 4) < *anon69 || *(uint32_t*)(phi141 + 28) >= *anon165 && dispatch15 == 4 && phi150 == 8 || *(uint32_t*)(phi141 + 28) >= *anon165 && dispatch15 == 3 && *(uint32_t*)(phi88 + 24) < *anon103 && phi150 == 8 || *(uint32_t*)(phi141 + 28) >= *anon165 && dispatch15 == 2 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && phi150 == 8 || *(uint32_t*)(phi141 + 28) >= *anon165 && dispatch15 == 1 && phi30 < *anon38 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && phi150 == 8 || *(uint32_t*)(phi141 + 28) >= *anon165 && dispatch15 == 0 && phi12 < *anon8 && phi30 < *anon38 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && phi150 == 8 || *(uint32_t*)(phi199 + 40) >= *anon218 && dispatch15 == 5 && phi184 == 8 && phi150 == 8 || *(uint32_t*)(phi199 + 40) >= *anon218 && dispatch15 == 4 && *(uint32_t*)(phi141 + 28) < *anon165 && phi184 == 8 && phi150 == 8 || *(uint32_t*)(phi199 + 40) >= *anon218 && dispatch15 == 3 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 && phi184 == 8 && phi150 == 8 || *(uint32_t*)(phi199 + 40) >= *anon218 && dispatch15 == 2 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 && phi184 == 8 && phi150 == 8 || *(uint32_t*)(phi199 + 40) >= *anon218 && dispatch15 == 1 && phi30 < *anon38 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 && phi184 == 8 && phi150 == 8 || *(uint32_t*)(phi199 + 40) >= *anon218 && dispatch15 == 0 && phi12 < *anon8 && phi30 < *anon38 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 && phi184 == 8 && phi150 == 8 || dispatch15 == 6 && phi240 == 8 && phi184 == 8 && phi150 == 8 || dispatch15 == 5 && *(uint32_t*)(phi199 + 40) < *anon218 && phi240 == 8 && phi184 == 8 && phi150 == 8 || dispatch15 == 4 && *(uint32_t*)(phi141 + 28) < *anon165 && *(uint32_t*)(phi199 + 40) < *anon218 && phi240 == 8 && phi184 == 8 && phi150 == 8 || dispatch15 == 3 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 && *(uint32_t*)(phi199 + 40) < *anon218 && phi240 == 8 && phi184 == 8 && phi150 == 8 || dispatch15 == 2 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 && *(uint32_t*)(phi199 + 40) < *anon218 && phi240 == 8 && phi184 == 8 && phi150 == 8 || dispatch15 == 1 && phi30 < *anon38 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 && *(uint32_t*)(phi199 + 40) < *anon218 && phi240 == 8 && phi184 == 8 && phi150 == 8 || dispatch15 == 0 && phi12 < *anon8 && phi30 < *anon38 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 && *(uint32_t*)(phi199 + 40) < *anon218 && phi240 == 8 && phi184 == 8 && phi150 == 8))
			{
				phi40 = phi_in366;
				phi_in41 = phi_in367;
				phi42 = phi_in72;
				phi59 = phi_in95;
				phi61 = phi_in368;
				phi62 = *(uint64_t*)(phi_in372 + 72);
				phi63 = phi_in369;
				phi64 = phi_in370;
				phi65 = phi_in371;
				phi66 = phi48;
				phi_in68 = phi_in372;
			}
			if (*(uint32_t*)(phi88 + 24) >= *anon103 && dispatch15 == 3 && phi89 == 8 || *(uint32_t*)(phi88 + 24) >= *anon103 && dispatch15 == 2 && *(uint32_t*)(phi58 + 4) < *anon69 && phi89 == 8 || *(uint32_t*)(phi88 + 24) >= *anon103 && dispatch15 == 1 && phi30 < *anon38 && *(uint32_t*)(phi58 + 4) < *anon69 && phi89 == 8 || *(uint32_t*)(phi88 + 24) >= *anon103 && dispatch15 == 0 && phi12 < *anon8 && phi30 < *anon38 && *(uint32_t*)(phi58 + 4) < *anon69 && phi89 == 8 || *(uint32_t*)(phi141 + 28) >= *anon165 && dispatch15 == 4 && phi150 == 8 && phi89 == 8 || *(uint32_t*)(phi141 + 28) >= *anon165 && dispatch15 == 3 && *(uint32_t*)(phi88 + 24) < *anon103 && phi150 == 8 && phi89 == 8 || *(uint32_t*)(phi141 + 28) >= *anon165 && dispatch15 == 2 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && phi150 == 8 && phi89 == 8 || *(uint32_t*)(phi141 + 28) >= *anon165 && dispatch15 == 1 && phi30 < *anon38 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && phi150 == 8 && phi89 == 8 || *(uint32_t*)(phi141 + 28) >= *anon165 && dispatch15 == 0 && phi12 < *anon8 && phi30 < *anon38 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && phi150 == 8 && phi89 == 8 || *(uint32_t*)(phi199 + 40) >= *anon218 && dispatch15 == 5 && phi184 == 8 && phi150 == 8 && phi89 == 8 || *(uint32_t*)(phi199 + 40) >= *anon218 && dispatch15 == 4 && *(uint32_t*)(phi141 + 28) < *anon165 && phi184 == 8 && phi150 == 8 && phi89 == 8 || *(uint32_t*)(phi199 + 40) >= *anon218 && dispatch15 == 3 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 && phi184 == 8 && phi150 == 8 && phi89 == 8 || *(uint32_t*)(phi199 + 40) >= *anon218 && dispatch15 == 2 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 && phi184 == 8 && phi150 == 8 && phi89 == 8 || *(uint32_t*)(phi199 + 40) >= *anon218 && dispatch15 == 1 && phi30 < *anon38 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 && phi184 == 8 && phi150 == 8 && phi89 == 8 || *(uint32_t*)(phi199 + 40) >= *anon218 && dispatch15 == 0 && phi12 < *anon8 && phi30 < *anon38 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 && phi184 == 8 && phi150 == 8 && phi89 == 8 || dispatch15 == 6 && phi240 == 8 && phi184 == 8 && phi150 == 8 && phi89 == 8 || dispatch15 == 5 && *(uint32_t*)(phi199 + 40) < *anon218 && phi240 == 8 && phi184 == 8 && phi150 == 8 && phi89 == 8 || dispatch15 == 4 && *(uint32_t*)(phi141 + 28) < *anon165 && *(uint32_t*)(phi199 + 40) < *anon218 && phi240 == 8 && phi184 == 8 && phi150 == 8 && phi89 == 8 || dispatch15 == 3 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 && *(uint32_t*)(phi199 + 40) < *anon218 && phi240 == 8 && phi184 == 8 && phi150 == 8 && phi89 == 8 || dispatch15 == 2 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 && *(uint32_t*)(phi199 + 40) < *anon218 && phi240 == 8 && phi184 == 8 && phi150 == 8 && phi89 == 8 || dispatch15 == 1 && phi30 < *anon38 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 && *(uint32_t*)(phi199 + 40) < *anon218 && phi240 == 8 && phi184 == 8 && phi150 == 8 && phi89 == 8 || dispatch15 == 0 && phi12 < *anon8 && phi30 < *anon38 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 && *(uint32_t*)(phi199 + 40) < *anon218 && phi240 == 8 && phi184 == 8 && phi150 == 8 && phi89 == 8 || *(uint32_t*)(phi58 + 4) >= *anon69 && dispatch15 == 2 || *(uint32_t*)(phi58 + 4) >= *anon69 && dispatch15 == 1 && phi30 < *anon38 || *(uint32_t*)(phi58 + 4) >= *anon69 && dispatch15 == 0 && phi12 < *anon8 && phi30 < *anon38)
			{
				phi43 = phi59;
				phi29 = phi60;
				phi36 = phi61;
				phi_in45 = phi63;
				phi46 = phi64;
				phi_in47 = phi65;
				phi48 = phi66;
				phi_in51 = phi_in68;
				phi44 = phi36;
				phi49 = phi_in67;
				phi_in50 = phi62 + 4;
				dispatch15 = 2;
			}
			if (phi62 == 8 && (*(uint32_t*)(phi88 + 24) >= *anon103 && dispatch15 == 3 && phi89 == 8 || *(uint32_t*)(phi88 + 24) >= *anon103 && dispatch15 == 2 && *(uint32_t*)(phi58 + 4) < *anon69 && phi89 == 8 || *(uint32_t*)(phi88 + 24) >= *anon103 && dispatch15 == 1 && phi30 < *anon38 && *(uint32_t*)(phi58 + 4) < *anon69 && phi89 == 8 || *(uint32_t*)(phi88 + 24) >= *anon103 && dispatch15 == 0 && phi12 < *anon8 && phi30 < *anon38 && *(uint32_t*)(phi58 + 4) < *anon69 && phi89 == 8 || *(uint32_t*)(phi141 + 28) >= *anon165 && dispatch15 == 4 && phi150 == 8 && phi89 == 8 || *(uint32_t*)(phi141 + 28) >= *anon165 && dispatch15 == 3 && *(uint32_t*)(phi88 + 24) < *anon103 && phi150 == 8 && phi89 == 8 || *(uint32_t*)(phi141 + 28) >= *anon165 && dispatch15 == 2 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && phi150 == 8 && phi89 == 8 || *(uint32_t*)(phi141 + 28) >= *anon165 && dispatch15 == 1 && phi30 < *anon38 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && phi150 == 8 && phi89 == 8 || *(uint32_t*)(phi141 + 28) >= *anon165 && dispatch15 == 0 && phi12 < *anon8 && phi30 < *anon38 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && phi150 == 8 && phi89 == 8 || *(uint32_t*)(phi199 + 40) >= *anon218 && dispatch15 == 5 && phi184 == 8 && phi150 == 8 && phi89 == 8 || *(uint32_t*)(phi199 + 40) >= *anon218 && dispatch15 == 4 && *(uint32_t*)(phi141 + 28) < *anon165 && phi184 == 8 && phi150 == 8 && phi89 == 8 || *(uint32_t*)(phi199 + 40) >= *anon218 && dispatch15 == 3 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 && phi184 == 8 && phi150 == 8 && phi89 == 8 || *(uint32_t*)(phi199 + 40) >= *anon218 && dispatch15 == 2 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 && phi184 == 8 && phi150 == 8 && phi89 == 8 || *(uint32_t*)(phi199 + 40) >= *anon218 && dispatch15 == 1 && phi30 < *anon38 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 && phi184 == 8 && phi150 == 8 && phi89 == 8 || *(uint32_t*)(phi199 + 40) >= *anon218 && dispatch15 == 0 && phi12 < *anon8 && phi30 < *anon38 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 && phi184 == 8 && phi150 == 8 && phi89 == 8 || dispatch15 == 6 && phi240 == 8 && phi184 == 8 && phi150 == 8 && phi89 == 8 || dispatch15 == 5 && *(uint32_t*)(phi199 + 40) < *anon218 && phi240 == 8 && phi184 == 8 && phi150 == 8 && phi89 == 8 || dispatch15 == 4 && *(uint32_t*)(phi141 + 28) < *anon165 && *(uint32_t*)(phi199 + 40) < *anon218 && phi240 == 8 && phi184 == 8 && phi150 == 8 && phi89 == 8 || dispatch15 == 3 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 && *(uint32_t*)(phi199 + 40) < *anon218 && phi240 == 8 && phi184 == 8 && phi150 == 8 && phi89 == 8 || dispatch15 == 2 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 && *(uint32_t*)(phi199 + 40) < *anon218 && phi240 == 8 && phi184 == 8 && phi150 == 8 && phi89 == 8 || dispatch15 == 1 && phi30 < *anon38 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 && *(uint32_t*)(phi199 + 40) < *anon218 && phi240 == 8 && phi184 == 8 && phi150 == 8 && phi89 == 8 || dispatch15 == 0 && phi12 < *anon8 && phi30 < *anon38 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 && *(uint32_t*)(phi199 + 40) < *anon218 && phi240 == 8 && phi184 == 8 && phi150 == 8 && phi89 == 8 || *(uint32_t*)(phi58 + 4) >= *anon69 && dispatch15 == 2 || *(uint32_t*)(phi58 + 4) >= *anon69 && dispatch15 == 1 && phi30 < *anon38 || *(uint32_t*)(phi58 + 4) >= *anon69 && dispatch15 == 0 && phi12 < *anon8 && phi30 < *anon38))
			{
				phi_in31 = *(uint32_t*)(phi_in51 + 68);
				phi_in32 = phi36;
				phi33 = *(uint64_t*)(phi_in51 + 56);
				phi34 = (__zext uint64_t)phi36;
				phi_in35 = *(uint32_t*)(phi_in51 + 68);
				phi_in26 = *(uint32_t*)(phi_in51 + 68);
				phi37 = phi_in51;
			}
			if (*(uint32_t*)(phi88 + 24) >= *anon103 && dispatch15 == 3 && phi89 == 8 && phi62 == 8 || *(uint32_t*)(phi88 + 24) >= *anon103 && dispatch15 == 2 && *(uint32_t*)(phi58 + 4) < *anon69 && phi89 == 8 && phi62 == 8 || *(uint32_t*)(phi88 + 24) >= *anon103 && dispatch15 == 1 && phi30 < *anon38 && *(uint32_t*)(phi58 + 4) < *anon69 && phi89 == 8 && phi62 == 8 || *(uint32_t*)(phi88 + 24) >= *anon103 && dispatch15 == 0 && phi12 < *anon8 && phi30 < *anon38 && *(uint32_t*)(phi58 + 4) < *anon69 && phi89 == 8 && phi62 == 8 || *(uint32_t*)(phi141 + 28) >= *anon165 && dispatch15 == 4 && phi150 == 8 && phi89 == 8 && phi62 == 8 || *(uint32_t*)(phi141 + 28) >= *anon165 && dispatch15 == 3 && *(uint32_t*)(phi88 + 24) < *anon103 && phi150 == 8 && phi89 == 8 && phi62 == 8 || *(uint32_t*)(phi141 + 28) >= *anon165 && dispatch15 == 2 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && phi150 == 8 && phi89 == 8 && phi62 == 8 || *(uint32_t*)(phi141 + 28) >= *anon165 && dispatch15 == 1 && phi30 < *anon38 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && phi150 == 8 && phi89 == 8 && phi62 == 8 || *(uint32_t*)(phi141 + 28) >= *anon165 && dispatch15 == 0 && phi12 < *anon8 && phi30 < *anon38 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && phi150 == 8 && phi89 == 8 && phi62 == 8 || *(uint32_t*)(phi199 + 40) >= *anon218 && dispatch15 == 5 && phi184 == 8 && phi150 == 8 && phi89 == 8 && phi62 == 8 || *(uint32_t*)(phi199 + 40) >= *anon218 && dispatch15 == 4 && *(uint32_t*)(phi141 + 28) < *anon165 && phi184 == 8 && phi150 == 8 && phi89 == 8 && phi62 == 8 || *(uint32_t*)(phi199 + 40) >= *anon218 && dispatch15 == 3 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 && phi184 == 8 && phi150 == 8 && phi89 == 8 && phi62 == 8 || *(uint32_t*)(phi199 + 40) >= *anon218 && dispatch15 == 2 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 && phi184 == 8 && phi150 == 8 && phi89 == 8 && phi62 == 8 || *(uint32_t*)(phi199 + 40) >= *anon218 && dispatch15 == 1 && phi30 < *anon38 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 && phi184 == 8 && phi150 == 8 && phi89 == 8 && phi62 == 8 || *(uint32_t*)(phi199 + 40) >= *anon218 && dispatch15 == 0 && phi12 < *anon8 && phi30 < *anon38 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 && phi184 == 8 && phi150 == 8 && phi89 == 8 && phi62 == 8 || dispatch15 == 6 && phi240 == 8 && phi184 == 8 && phi150 == 8 && phi89 == 8 && phi62 == 8 || dispatch15 == 5 && *(uint32_t*)(phi199 + 40) < *anon218 && phi240 == 8 && phi184 == 8 && phi150 == 8 && phi89 == 8 && phi62 == 8 || dispatch15 == 4 && *(uint32_t*)(phi141 + 28) < *anon165 && *(uint32_t*)(phi199 + 40) < *anon218 && phi240 == 8 && phi184 == 8 && phi150 == 8 && phi89 == 8 && phi62 == 8 || dispatch15 == 3 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 && *(uint32_t*)(phi199 + 40) < *anon218 && phi240 == 8 && phi184 == 8 && phi150 == 8 && phi89 == 8 && phi62 == 8 || dispatch15 == 2 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 && *(uint32_t*)(phi199 + 40) < *anon218 && phi240 == 8 && phi184 == 8 && phi150 == 8 && phi89 == 8 && phi62 == 8 || dispatch15 == 1 && phi30 < *anon38 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 && *(uint32_t*)(phi199 + 40) < *anon218 && phi240 == 8 && phi184 == 8 && phi150 == 8 && phi89 == 8 && phi62 == 8 || dispatch15 == 0 && phi12 < *anon8 && phi30 < *anon38 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 && *(uint32_t*)(phi199 + 40) < *anon218 && phi240 == 8 && phi184 == 8 && phi150 == 8 && phi89 == 8 && phi62 == 8 || *(uint32_t*)(phi58 + 4) >= *anon69 && dispatch15 == 2 && phi62 == 8 || *(uint32_t*)(phi58 + 4) >= *anon69 && dispatch15 == 1 && phi30 < *anon38 && phi62 == 8 || *(uint32_t*)(phi58 + 4) >= *anon69 && dispatch15 == 0 && phi12 < *anon8 && phi30 < *anon38 && phi62 == 8 || phi30 >= *anon38 && dispatch15 == 1 || phi30 >= *anon38 && dispatch15 == 0 && phi12 < *anon8)
			{
				phi_in23 = phi_in31;
				phi4 = phi_in32;
				phi24 = phi34;
				phi25 = phi36;
				phi_in373 = phi37;
				phi_in16 = phi4;
				*(uint32_t*)(phi17 + 68) = phi_in35;
				phi_in27 = phi33 + 4;
				phi_in28 = phi_in373;
				dispatch15 = 1;
			}
			if (phi33 == 8 && (*(uint32_t*)(phi88 + 24) >= *anon103 && dispatch15 == 3 && phi89 == 8 && phi62 == 8 || *(uint32_t*)(phi88 + 24) >= *anon103 && dispatch15 == 2 && *(uint32_t*)(phi58 + 4) < *anon69 && phi89 == 8 && phi62 == 8 || *(uint32_t*)(phi88 + 24) >= *anon103 && dispatch15 == 1 && phi30 < *anon38 && *(uint32_t*)(phi58 + 4) < *anon69 && phi89 == 8 && phi62 == 8 || *(uint32_t*)(phi88 + 24) >= *anon103 && dispatch15 == 0 && phi12 < *anon8 && phi30 < *anon38 && *(uint32_t*)(phi58 + 4) < *anon69 && phi89 == 8 && phi62 == 8 || *(uint32_t*)(phi141 + 28) >= *anon165 && dispatch15 == 4 && phi150 == 8 && phi89 == 8 && phi62 == 8 || *(uint32_t*)(phi141 + 28) >= *anon165 && dispatch15 == 3 && *(uint32_t*)(phi88 + 24) < *anon103 && phi150 == 8 && phi89 == 8 && phi62 == 8 || *(uint32_t*)(phi141 + 28) >= *anon165 && dispatch15 == 2 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && phi150 == 8 && phi89 == 8 && phi62 == 8 || *(uint32_t*)(phi141 + 28) >= *anon165 && dispatch15 == 1 && phi30 < *anon38 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && phi150 == 8 && phi89 == 8 && phi62 == 8 || *(uint32_t*)(phi141 + 28) >= *anon165 && dispatch15 == 0 && phi12 < *anon8 && phi30 < *anon38 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && phi150 == 8 && phi89 == 8 && phi62 == 8 || *(uint32_t*)(phi199 + 40) >= *anon218 && dispatch15 == 5 && phi184 == 8 && phi150 == 8 && phi89 == 8 && phi62 == 8 || *(uint32_t*)(phi199 + 40) >= *anon218 && dispatch15 == 4 && *(uint32_t*)(phi141 + 28) < *anon165 && phi184 == 8 && phi150 == 8 && phi89 == 8 && phi62 == 8 || *(uint32_t*)(phi199 + 40) >= *anon218 && dispatch15 == 3 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 && phi184 == 8 && phi150 == 8 && phi89 == 8 && phi62 == 8 || *(uint32_t*)(phi199 + 40) >= *anon218 && dispatch15 == 2 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 && phi184 == 8 && phi150 == 8 && phi89 == 8 && phi62 == 8 || *(uint32_t*)(phi199 + 40) >= *anon218 && dispatch15 == 1 && phi30 < *anon38 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 && phi184 == 8 && phi150 == 8 && phi89 == 8 && phi62 == 8 || *(uint32_t*)(phi199 + 40) >= *anon218 && dispatch15 == 0 && phi12 < *anon8 && phi30 < *anon38 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 && phi184 == 8 && phi150 == 8 && phi89 == 8 && phi62 == 8 || dispatch15 == 6 && phi240 == 8 && phi184 == 8 && phi150 == 8 && phi89 == 8 && phi62 == 8 || dispatch15 == 5 && *(uint32_t*)(phi199 + 40) < *anon218 && phi240 == 8 && phi184 == 8 && phi150 == 8 && phi89 == 8 && phi62 == 8 || dispatch15 == 4 && *(uint32_t*)(phi141 + 28) < *anon165 && *(uint32_t*)(phi199 + 40) < *anon218 && phi240 == 8 && phi184 == 8 && phi150 == 8 && phi89 == 8 && phi62 == 8 || dispatch15 == 3 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 && *(uint32_t*)(phi199 + 40) < *anon218 && phi240 == 8 && phi184 == 8 && phi150 == 8 && phi89 == 8 && phi62 == 8 || dispatch15 == 2 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 && *(uint32_t*)(phi199 + 40) < *anon218 && phi240 == 8 && phi184 == 8 && phi150 == 8 && phi89 == 8 && phi62 == 8 || dispatch15 == 1 && phi30 < *anon38 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 && *(uint32_t*)(phi199 + 40) < *anon218 && phi240 == 8 && phi184 == 8 && phi150 == 8 && phi89 == 8 && phi62 == 8 || dispatch15 == 0 && phi12 < *anon8 && phi30 < *anon38 && *(uint32_t*)(phi58 + 4) < *anon69 && *(uint32_t*)(phi88 + 24) < *anon103 && *(uint32_t*)(phi141 + 28) < *anon165 && *(uint32_t*)(phi199 + 40) < *anon218 && phi240 == 8 && phi184 == 8 && phi150 == 8 && phi89 == 8 && phi62 == 8 || *(uint32_t*)(phi58 + 4) >= *anon69 && dispatch15 == 2 && phi62 == 8 || *(uint32_t*)(phi58 + 4) >= *anon69 && dispatch15 == 1 && phi30 < *anon38 && phi62 == 8 || *(uint32_t*)(phi58 + 4) >= *anon69 && dispatch15 == 0 && phi12 < *anon8 && phi30 < *anon38 && phi62 == 8 || phi30 >= *anon38 && dispatch15 == 1 || phi30 >= *anon38 && dispatch15 == 0 && phi12 < *anon8))
			{
				phi10 = *(uint64_t*)(phi_in373 + 48);
				phi18 = phi_in23;
				phi19 = (__zext uint64_t)phi4;
				phi20 = phi_in23;
				phi21 = phi4;
				phi22 = phi_in373;
				break;
			}
		}
		phi5 = phi18;
		phi7 = phi19;
		*anon8 = phi20;
		phi12 = phi21;
		phi13 = phi10 + 4;
		phi11 = phi22;
		dispatch15 = 0;
	}
	while (phi10 != 8);
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
			uint32_t phi_in13;
			uint32_t* anon14;
			uint32_t phi15;
			uint32_t* anon9 = (uint32_t*)((phi8 & 0xc) + 4);
			uint32_t* anon10 = (uint32_t*)phi8;
			if (*anon9 < *anon10)
			{
				*anon10 = *anon9;
				*anon9 = *anon10;
				phi11 = *anon10;
				phi12 = *anon9;
				anon14 = (uint32_t*)(phi8 - 4);
				phi_in13 = *anon14;
				phi15 = *anon10;
				*anon9 = *anon9;
			}
			else 
			{
				phi11 = *anon9;
				phi12 = *anon10;
				phi16 = *anon14;
			}
			if (*anon9 < *anon10 && *anon9 < *anon14 || *anon9 >= *anon10 && *anon10 < *anon14)
			{
				uint32_t phi_in17 = phi11;
				uint32_t phi_in18 = phi12;
				*anon10 = *anon14;
				*anon14 = phi_in18;
				phi_in13 = phi_in18;
				phi15 = phi_in17;
				*anon9 = *anon14;
			}
			if (*anon9 < *anon10 && *anon9 < *anon14 || *anon9 >= *anon10 && *anon10 < *anon14 || *anon9 >= *anon14 && *anon9 < *anon10)
			{
				*anon10 = phi15;
				phi16 = phi_in13;
				if (*anon10 < *anon9)
				{
					phi16 = *anon14;
				}
			}
			phi19 = 6301636;
		}
		uint32_t anon20 = phi16 + 1 & 0xff;
		if (dispatch1 == 5 || dispatch1 == 4 && anon20 == 0 || dispatch1 == 3 && phi7 == 0 && anon20 == 0 || dispatch1 == 2 && phi4 == 0 && phi7 == 0 && anon20 == 0 || dispatch1 == 1 && phi3 == 0 && phi4 == 0 && phi7 == 0 && anon20 == 0 || dispatch1 == 0 && phi3 == 0 && phi4 == 0 && phi7 == 0 && anon20 == 0)
		{
			uint32_t phi23;
			uint32_t phi24;
			uint32_t phi25;
			uint32_t* anon26;
			uint32_t phi27;
			uint32_t phi28;
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
				*anon21 = *anon21;
			}
			else 
			{
				phi23 = *anon21;
				phi24 = *anon22;
				phi28 = *anon26;
			}
			if (*anon21 < *anon22 && *anon21 < *anon26 || *anon21 >= *anon22 && *anon22 < *anon26)
			{
				phi27 = phi23;
				phi25 = phi24;
				*anon22 = *anon26;
				*anon26 = phi25;
				*anon21 = *anon26;
			}
			if (*anon21 < *anon22 && *anon21 < *anon26 || *anon21 >= *anon22 && *anon22 < *anon26 || *anon21 >= *anon26 && *anon21 < *anon22)
			{
				phi28 = phi25;
				*anon22 = phi27;
				if (*anon22 < *anon21)
				{
					phi28 = *anon26;
				}
			}
			dispatch1 = 0;
			if ((phi28 + 1 & 0xff) != 0)
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
		uint8_t* anon27;
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
			uint64_t phi21;
			uint32_t anon23;
			uint8_t anon26;
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
				phi21 = (__zext uint64_t)phi17;
			}
			if (anon14 != 0 && *(uint32_t*)(anon20 + 6301632) != phi17 && phi17 != *(uint32_t*)(anon20 + 6301636) && phi17 != *(uint32_t*)(anon20 + 6301640))
			{
				if (anon10 != 10 || anon12 != 0 && anon10 == 10)
				{
					uint64_t anon22 = random();
					dispatch11 = 3;
					anon23 = (uint32_t)anon22 + ((uint32_t)((anon22 & 0xffffffff) / 3) - (uint32_t)(anon22 << 32 >> 32 >> 31)) * 4294967293;
					if (anon23 == 1)
					{
						break;
					}
				}
				if (anon23 != 1 && (anon10 != 10 || anon12 != 0 && anon10 == 10))
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
					uint64_t anon24 = random();
					uint64_t anon25 = anon24 << 32;
					w(4199968, (uint64_t)&alloca1, anon24 + (((anon24 & 0xffffffff) * 2290649225 + anon25 >> 32 >> 4) - (anon25 >> 32 >> 31)) * 4294967266 & 0xffffffff, 0);
					*anon7 = *anon7 - 100;
					phi21 = phi3;
				}
			}
			if (anon12 != 0 && anon14 != 0 && *(uint32_t*)(((__sext int64_t)phi17 << 2) + 6300992) != 0 && anon10 == 10 && *(uint32_t*)(anon20 + 6301632) == phi17 || anon10 != 10 && anon14 != 0 && *(uint32_t*)(((__sext int64_t)phi17 << 2) + 6300992) != 0 && *(uint32_t*)(anon20 + 6301632) == phi17 || anon12 != 0 && anon14 != 0 && *(uint32_t*)(anon20 + 6301632) != phi17 && *(uint32_t*)(((__sext int64_t)phi17 << 2) + 6300992) != 0 && anon10 == 10 && phi17 == *(uint32_t*)(anon20 + 6301636) || anon10 != 10 && anon14 != 0 && *(uint32_t*)(anon20 + 6301632) != phi17 && *(uint32_t*)(((__sext int64_t)phi17 << 2) + 6300992) != 0 && phi17 == *(uint32_t*)(anon20 + 6301636) || anon12 != 0 && anon14 != 0 && *(uint32_t*)(anon20 + 6301632) != phi17 && phi17 != *(uint32_t*)(anon20 + 6301636) && *(uint32_t*)(((__sext int64_t)phi17 << 2) + 6300992) != 0 && anon10 == 10 && phi17 == *(uint32_t*)(anon20 + 6301640) || anon10 != 10 && anon14 != 0 && *(uint32_t*)(anon20 + 6301632) != phi17 && phi17 != *(uint32_t*)(anon20 + 6301636) && *(uint32_t*)(((__sext int64_t)phi17 << 2) + 6300992) != 0 && phi17 == *(uint32_t*)(anon20 + 6301640) || anon12 != 0 && anon14 != 0 && *(uint32_t*)(anon20 + 6301632) != phi17 && phi17 != *(uint32_t*)(anon20 + 6301636) && phi17 != *(uint32_t*)(anon20 + 6301640) && anon23 != 1 && anon10 == 10 || anon10 != 10 && anon14 != 0 && *(uint32_t*)(anon20 + 6301632) != phi17 && phi17 != *(uint32_t*)(anon20 + 6301636) && phi17 != *(uint32_t*)(anon20 + 6301640) && anon23 != 1)
			{
				dispatch11 = 0;
				anon26 = (uint8_t)anon19;
				if (anon26 == 10)
				{
					break;
				}
			}
			if (anon26 != 10 && (anon12 != 0 && anon14 != 0 && *(uint32_t*)(((__sext int64_t)phi17 << 2) + 6300992) != 0 && anon10 == 10 && *(uint32_t*)(anon20 + 6301632) == phi17 || anon10 != 10 && anon14 != 0 && *(uint32_t*)(((__sext int64_t)phi17 << 2) + 6300992) != 0 && *(uint32_t*)(anon20 + 6301632) == phi17 || anon12 != 0 && anon14 != 0 && *(uint32_t*)(anon20 + 6301632) != phi17 && *(uint32_t*)(((__sext int64_t)phi17 << 2) + 6300992) != 0 && anon10 == 10 && phi17 == *(uint32_t*)(anon20 + 6301636) || anon10 != 10 && anon14 != 0 && *(uint32_t*)(anon20 + 6301632) != phi17 && *(uint32_t*)(((__sext int64_t)phi17 << 2) + 6300992) != 0 && phi17 == *(uint32_t*)(anon20 + 6301636) || anon12 != 0 && anon14 != 0 && *(uint32_t*)(anon20 + 6301632) != phi17 && phi17 != *(uint32_t*)(anon20 + 6301636) && *(uint32_t*)(((__sext int64_t)phi17 << 2) + 6300992) != 0 && anon10 == 10 && phi17 == *(uint32_t*)(anon20 + 6301640) || anon10 != 10 && anon14 != 0 && *(uint32_t*)(anon20 + 6301632) != phi17 && phi17 != *(uint32_t*)(anon20 + 6301636) && *(uint32_t*)(((__sext int64_t)phi17 << 2) + 6300992) != 0 && phi17 == *(uint32_t*)(anon20 + 6301640) || anon12 != 0 && anon14 != 0 && *(uint32_t*)(anon20 + 6301632) != phi17 && phi17 != *(uint32_t*)(anon20 + 6301636) && phi17 != *(uint32_t*)(anon20 + 6301640) && anon23 != 1 && anon10 == 10 || anon10 != 10 && anon14 != 0 && *(uint32_t*)(anon20 + 6301632) != phi17 && phi17 != *(uint32_t*)(anon20 + 6301636) && phi17 != *(uint32_t*)(anon20 + 6301640) && anon23 != 1))
			{
				phi3 = phi21;
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
			anon27 = (uint8_t*)0x401cf1;
			printf(anon27);
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
			printf(anon27);
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
