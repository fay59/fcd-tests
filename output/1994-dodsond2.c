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
		uint32_t phi_in7;
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
			phi_in7 = *anon8;
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
			uint32_t phi_in12 = phi5;
			uint32_t phi_in13 = phi6;
			*phi1 = *anon8;
			*anon8 = phi_in13;
			phi_in7 = phi_in13;
			phi9 = phi_in12;
			phi10 = *anon8;
		}
		if (*anon4 >= *phi1 && *phi1 < *anon8 || *anon4 < *phi1 && *anon4 < *anon8 || *anon4 >= *anon8 && *anon4 < *phi1)
		{
			*phi1 = phi9;
			*anon4 = phi10;
			phi11 = phi_in7;
			if (*anon4 > *phi1)
			{
				phi11 = *anon8;
			}
		}
		if (phi11 != 255)
		{
			uint64_t anon14 = phi3 + 12;
			phi1 = (uint32_t*)anon14;
			phi_in2 = anon14;
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
	uint64_t phi17;
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
	phi_in5 = anon6;
	uint64_t phi7 = arg3 & 0xffffffff;
	int64_t anon9 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi10 + 48) + *(uint64_t*)(phi10 + 8) + 6301632);
	uint32_t* anon8 = (uint32_t*)((anon9 << 2) + 6300992);
	*anon8 = anon6;
	uint32_t phi11 = anon3;
	*(uint64_t*)(phi10 + 48) = 0;
	uint64_t anon12 = (uint64_t)&alloca1;
	phi10 = anon12;
	uint32_t dispatch13 = 0;
	do
	{
		uint32_t phi16;
		uint32_t phi18;
		uint32_t phi19;
		uint64_t phi20;
		while (true)
		{
			uint32_t phi15;
			uint32_t phi21;
			uint64_t phi22;
			uint32_t phi23;
			uint32_t phi24;
			uint64_t phi_in25;
			uint64_t phi_in26;
			uint32_t phi29;
			uint32_t phi_in30;
			uint32_t phi31;
			uint64_t phi32;
			uint32_t phi33;
			uint32_t phi34;
			uint64_t phi35;
			uint64_t phi36;
			uint32_t phi37;
			uint32_t phi38;
			uint32_t phi41;
			uint32_t phi_in42;
			uint32_t phi43;
			uint32_t phi44;
			uint32_t phi45;
			uint32_t phi46;
			uint32_t phi47;
			uint32_t phi48;
			uint32_t phi49;
			uint64_t phi50;
			uint64_t phi_in51;
			uint64_t phi_in52;
			uint32_t phi53;
			uint32_t phi_in54;
			uint32_t phi_in55;
			uint32_t phi_in56;
			uint32_t phi57;
			uint64_t phi58;
			uint64_t phi59;
			uint32_t phi60;
			uint32_t phi61;
			uint32_t phi62;
			uint32_t phi63;
			uint32_t phi64;
			uint64_t phi65;
			uint32_t phi66;
			uint32_t phi67;
			uint64_t phi68;
			uint32_t phi71;
			uint32_t phi_in72;
			uint32_t phi_in73;
			uint32_t phi74;
			uint32_t phi75;
			uint64_t phi_in76;
			uint64_t phi_in77;
			uint64_t phi_in78;
			uint32_t phi_in79;
			uint32_t phi80;
			uint32_t phi_in81;
			uint32_t phi_in82;
			uint32_t phi_in83;
			uint64_t phi84;
			uint64_t phi85;
			uint64_t phi86;
			uint64_t phi87;
			uint64_t phi88;
			uint32_t phi89;
			uint32_t phi_in90;
			uint32_t phi91;
			uint32_t phi92;
			uint32_t phi93;
			uint32_t phi94;
			uint32_t phi_in95;
			uint32_t phi_in96;
			uint32_t phi97;
			uint32_t phi98;
			uint64_t phi99;
			uint64_t phi100;
			uint32_t phi_in103;
			uint32_t phi104;
			uint32_t phi105;
			uint32_t phi107;
			uint32_t phi_in108;
			uint32_t phi109;
			uint32_t phi110;
			uint32_t phi111;
			uint32_t phi_in112;
			uint32_t phi113;
			uint32_t phi114;
			uint32_t phi_in115;
			uint32_t phi116;
			uint32_t phi_in117;
			uint32_t phi118;
			uint32_t phi119;
			uint32_t phi120;
			uint32_t phi_in121;
			uint64_t phi122;
			uint32_t phi_in123;
			uint32_t phi124;
			uint32_t phi_in125;
			uint64_t phi_in126;
			uint64_t phi_in127;
			uint64_t phi_in128;
			uint32_t phi129;
			uint32_t phi130;
			uint32_t phi_in131;
			uint32_t phi132;
			uint32_t phi_in133;
			uint32_t phi_in134;
			uint32_t phi_in135;
			uint32_t phi_in136;
			uint32_t phi137;
			uint32_t phi_in138;
			uint32_t phi139;
			uint32_t phi140;
			uint32_t phi_in141;
			uint64_t phi_in142;
			uint32_t phi_in143;
			uint64_t phi144;
			uint64_t phi145;
			uint64_t phi146;
			uint64_t phi147;
			uint32_t phi148;
			uint32_t phi149;
			uint32_t phi150;
			uint32_t phi151;
			uint32_t phi152;
			uint32_t phi153;
			uint32_t phi154;
			uint32_t phi155;
			uint64_t phi156;
			uint32_t phi157;
			uint32_t phi158;
			uint32_t phi159;
			uint32_t phi160;
			uint32_t phi161;
			uint32_t phi162;
			uint32_t phi163;
			uint32_t phi164;
			uint32_t phi165;
			uint32_t phi166;
			uint32_t phi167;
			uint32_t phi168;
			uint64_t phi169;
			uint32_t phi170;
			uint64_t phi171;
			uint64_t phi_in174;
			uint32_t phi175;
			uint32_t phi176;
			uint32_t phi177;
			uint32_t phi178;
			uint32_t phi179;
			uint32_t phi180;
			uint32_t phi181;
			uint32_t phi_in182;
			uint32_t phi183;
			uint32_t phi184;
			uint32_t phi185;
			uint64_t phi186;
			uint32_t phi187;
			uint64_t phi188;
			uint64_t phi189;
			uint32_t phi_in190;
			uint32_t phi191;
			uint64_t phi_in192;
			uint64_t phi193;
			uint64_t phi194;
			uint32_t phi195;
			uint32_t phi_in196;
			uint32_t phi_in197;
			uint32_t phi198;
			uint32_t phi199;
			uint32_t phi_in200;
			uint32_t phi_in201;
			uint32_t phi202;
			uint32_t phi_in203;
			uint32_t phi204;
			uint32_t phi_in205;
			uint32_t phi_in206;
			uint32_t phi_in207;
			uint64_t phi208;
			uint64_t phi_in209;
			uint64_t phi210;
			uint32_t phi_in211;
			uint64_t phi212;
			uint64_t phi_in213;
			uint32_t phi214;
			uint32_t phi215;
			uint32_t phi216;
			uint32_t phi217;
			uint32_t phi218;
			uint32_t phi219;
			uint32_t phi220;
			uint32_t phi221;
			uint32_t phi222;
			uint32_t phi223;
			uint32_t phi224;
			uint32_t phi225;
			uint32_t phi226;
			uint32_t phi227;
			uint32_t phi228;
			uint64_t phi229;
			uint64_t phi230;
			uint32_t phi231;
			uint64_t phi232;
			uint64_t phi233;
			uint64_t phi_in236;
			uint32_t phi_in237;
			uint32_t phi238;
			uint32_t phi239;
			uint32_t phi240;
			uint32_t phi241;
			uint32_t phi242;
			uint32_t phi_in243;
			uint32_t phi244;
			uint32_t phi245;
			uint32_t phi_in246;
			uint32_t phi_in247;
			uint32_t phi248;
			uint64_t phi249;
			uint64_t phi250;
			uint32_t phi_in373;
			uint64_t phi_in374;
			uint64_t phi_in375;
			uint32_t phi_in376;
			uint64_t phi_in377;
			if (dispatch13 == 0)
			{
				uint32_t phi_in14 = phi4;
				phi15 = phi_in5;
				phi16 = phi11;
				phi17 = *(uint64_t*)(phi10 + 48);
				phi18 = phi_in14;
				phi_in5 = phi15;
				phi7 = phi7 & 0xffffffff;
				phi19 = *anon8;
				phi20 = phi10;
				if (phi16 < *anon8)
				{
					*(uint64_t*)(phi10 + 16) = anon9 * 12;
					*(uint32_t*)(phi10 + 40) = (uint32_t)phi7 + 5;
					phi21 = phi_in14;
					phi22 = (__zext uint64_t)phi_in14;
					phi23 = phi15;
					phi24 = phi_in14;
					phi_in5 = phi15;
					phi_in25 = 0;
					phi_in26 = phi10;
				}
				else 
				{
					break;
				}
			}
			if (dispatch13 == 1 || dispatch13 == 0 && phi16 < *anon8)
			{
				uint32_t phi_in27 = phi15;
				uint32_t phi_in28 = phi21;
				phi29 = phi23;
				phi_in30 = phi24;
				phi31 = phi_in5;
				*(uint64_t*)(phi32 + 56) = phi_in25;
				phi32 = phi_in26;
				phi33 = phi_in27;
				phi34 = phi_in28;
				phi35 = *(uint64_t*)(phi32 + 56);
				phi36 = phi22 & 0xffffffff;
				phi37 = phi_in30;
				phi38 = phi31;
				phi_in26 = phi32;
			}
			int64_t anon40 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi32 + 56) + *(uint64_t*)(phi32 + 16) + 6301632);
			uint32_t* anon39 = (uint32_t*)((anon40 << 2) + 6300992);
			if (phi31 < *anon39 && (dispatch13 == 1 || dispatch13 == 0 && phi16 < *anon8))
			{
				*(uint32_t*)(phi32 + 68) = phi29;
				*anon39 = *(uint32_t*)(phi32 + 4);
				*(uint64_t*)(phi32 + 32) = anon40 * 12;
				*(uint32_t*)(phi32 + 44) = (uint32_t)phi22 + 6;
				phi41 = phi_in30;
				phi_in42 = phi_in30;
				phi43 = phi_in30;
				phi44 = phi_in30;
				phi45 = phi_in30;
				phi46 = phi_in30;
				phi47 = phi_in30;
				phi48 = phi_in30;
				phi49 = phi_in30;
				phi50 = (__zext uint64_t)phi_in30;
				phi_in51 = 0;
				phi_in52 = phi32;
			}
			if (dispatch13 == 2 || dispatch13 == 1 && phi31 < *anon39 || dispatch13 == 0 && phi16 < *anon8 && phi31 < *anon39)
			{
				phi53 = phi44;
				phi_in54 = phi46;
				phi_in55 = phi47;
				phi_in56 = phi48;
				phi57 = phi49;
				phi58 = phi50;
				*(uint64_t*)(phi59 + 72) = phi_in51;
				phi59 = phi_in52;
				phi60 = phi_in42;
				phi61 = phi43;
				phi62 = phi53;
				phi63 = phi_in30;
				phi64 = phi45;
				phi65 = *(uint64_t*)(phi59 + 72);
				phi46 = phi_in54;
				phi66 = phi_in55;
				phi67 = phi_in56;
				phi49 = phi57;
				phi50 = phi58 & 0xffffffff;
				phi68 = phi59;
			}
			int64_t anon70 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi59 + 72) + *(uint64_t*)(phi59 + 32) + 6301632);
			uint32_t* anon69 = (uint32_t*)((anon70 << 2) + 6300992);
			if (*(uint32_t*)(phi59 + 4) < *anon69 && (dispatch13 == 2 || dispatch13 == 1 && phi31 < *anon39 || dispatch13 == 0 && phi16 < *anon8 && phi31 < *anon39))
			{
				*anon69 = *(uint32_t*)(phi59 + 24);
				*(uint32_t*)(phi59 + 64) = (uint32_t)phi58 + 7;
				phi71 = phi41;
				phi_in72 = phi_in42;
				phi_in73 = phi_in30;
				phi74 = phi_in54;
				phi75 = phi_in56;
				phi_in76 = phi59;
				phi_in77 = 0;
				phi_in78 = anon70 * 12;
			}
			if (dispatch13 == 3 || dispatch13 == 2 && *(uint32_t*)(phi59 + 4) < *anon69 || dispatch13 == 1 && phi31 < *anon39 && *(uint32_t*)(phi59 + 4) < *anon69 || dispatch13 == 0 && phi16 < *anon8 && phi31 < *anon39 && *(uint32_t*)(phi59 + 4) < *anon69)
			{
				phi_in79 = phi43;
				phi80 = phi53;
				phi_in81 = phi45;
				phi_in82 = phi75;
				phi_in83 = phi57;
				phi84 = phi_in76;
				phi85 = phi_in77;
				phi86 = phi_in78;
				phi87 = phi58;
				phi88 = phi86;
				phi89 = phi71;
				phi_in90 = phi_in72;
				phi91 = phi_in79;
				phi92 = phi80;
				phi93 = phi_in73;
				phi94 = phi_in81;
				phi_in95 = phi74;
				phi_in96 = phi_in55;
				phi97 = phi_in82;
				phi98 = phi_in83;
				phi99 = phi84;
				phi100 = phi87 & 0xffffffff;
			}
			int64_t anon102 = (__sext int64_t)*(uint32_t*)(phi85 + phi86 + 6301632);
			uint32_t* anon101 = (uint32_t*)((anon102 << 2) + 6300992);
			if (*(uint32_t*)(phi84 + 24) < *anon101 && (dispatch13 == 3 || dispatch13 == 2 && *(uint32_t*)(phi59 + 4) < *anon69 || dispatch13 == 1 && phi31 < *anon39 && *(uint32_t*)(phi59 + 4) < *anon69 || dispatch13 == 0 && phi16 < *anon8 && phi31 < *anon39 && *(uint32_t*)(phi59 + 4) < *anon69))
			{
				*anon101 = *(uint32_t*)(phi84 + 28);
				phi_in103 = phi_in72;
				phi104 = phi_in79;
				uint32_t anon106 = (uint32_t)phi87 + 8;
				phi105 = anon106;
				phi107 = anon106;
				phi_in108 = phi_in73;
				phi109 = phi_in81;
				phi110 = anon106;
				phi111 = anon106;
				phi_in112 = anon106;
				phi113 = anon106;
				phi114 = anon106;
				phi_in115 = phi_in55;
				phi116 = anon106;
				phi_in117 = anon106;
				phi118 = phi_in82;
				phi119 = anon106;
				phi120 = anon106;
				phi_in121 = phi_in83;
				phi122 = phi86;
				phi_in123 = anon106;
				phi124 = anon106;
				phi_in125 = anon106;
				phi_in126 = phi84;
				phi_in127 = 0;
				phi_in128 = anon102 * 12;
			}
			if (dispatch13 == 4 || dispatch13 == 3 && *(uint32_t*)(phi84 + 24) < *anon101 || dispatch13 == 2 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 || dispatch13 == 1 && phi31 < *anon39 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 || dispatch13 == 0 && phi16 < *anon8 && phi31 < *anon39 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101)
			{
				phi129 = phi71;
				phi130 = phi104;
				phi_in131 = phi105;
				phi132 = phi80;
				phi_in133 = phi107;
				phi_in134 = phi109;
				phi_in135 = phi111;
				phi_in136 = phi74;
				phi137 = phi113;
				phi_in138 = phi114;
				phi139 = phi116;
				phi140 = phi119;
				phi_in141 = phi120;
				phi_in142 = phi122;
				phi_in143 = phi124;
				phi144 = phi_in126;
				phi145 = phi_in127;
				phi146 = phi_in128;
				phi147 = phi146;
				phi148 = phi129;
				phi149 = phi_in103;
				phi150 = phi130;
				phi151 = phi_in131;
				phi152 = phi132;
				phi153 = phi_in133;
				phi154 = phi_in108;
				phi155 = phi_in134;
				phi156 = phi145;
				phi157 = phi110;
				phi158 = phi_in135;
				phi159 = phi_in136;
				phi160 = phi_in112;
				phi161 = phi137;
				phi162 = phi_in138;
				phi163 = phi_in115;
				phi164 = phi_in117;
				phi165 = phi118;
				phi166 = phi140;
				phi167 = phi_in141;
				phi168 = phi_in121;
				phi169 = phi_in142;
				phi124 = phi_in143;
				phi170 = phi_in125;
				phi171 = phi144;
				phi87 = phi87;
			}
			int64_t anon173 = (__sext int64_t)*(uint32_t*)(phi145 + phi146 + 6301632);
			uint32_t* anon172 = (uint32_t*)((anon173 << 2) + 6300992);
			if (*(uint32_t*)(phi144 + 28) < *anon172 && (dispatch13 == 4 || dispatch13 == 3 && *(uint32_t*)(phi84 + 24) < *anon101 || dispatch13 == 2 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 || dispatch13 == 1 && phi31 < *anon39 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 || dispatch13 == 0 && phi16 < *anon8 && phi31 < *anon39 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101))
			{
				*anon172 = *(uint32_t*)(phi144 + 40);
				*(uint32_t*)(phi144 + 120) = (uint32_t)phi87 + 9;
				phi_in174 = 0;
				phi175 = phi_in103;
				phi176 = phi_in133;
				phi177 = phi_in108;
				phi178 = phi_in134;
				phi179 = phi_in135;
				phi180 = phi_in112;
				phi181 = phi_in138;
				phi_in182 = phi_in115;
				phi183 = phi139;
				phi184 = phi_in117;
				phi185 = phi_in141;
				phi186 = phi145;
				phi187 = phi_in121;
				phi188 = phi_in142;
				phi189 = phi146;
				phi_in190 = phi_in123;
				phi191 = phi_in125;
				phi_in192 = phi144;
				phi193 = phi87 & 0xffffffff;
			}
			if (dispatch13 == 5 || dispatch13 == 4 && *(uint32_t*)(phi144 + 28) < *anon172 || dispatch13 == 3 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 || dispatch13 == 2 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 || dispatch13 == 1 && phi31 < *anon39 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 || dispatch13 == 0 && phi16 < *anon8 && phi31 < *anon39 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172)
			{
				phi194 = phi_in174;
				phi195 = phi129;
				phi_in196 = phi175;
				phi_in197 = phi176;
				phi198 = phi177;
				phi199 = phi110;
				phi_in200 = phi180;
				phi_in201 = phi137;
				phi202 = phi181;
				phi_in203 = phi183;
				phi204 = phi184;
				phi_in205 = phi118;
				phi_in206 = phi140;
				phi_in207 = phi185;
				*(uint64_t*)(phi208 + 88) = phi186;
				phi_in209 = phi188;
				phi210 = phi189;
				phi_in211 = phi191;
				phi212 = phi_in192;
				phi_in213 = phi193;
				phi214 = phi195;
				phi215 = phi_in196;
				phi216 = phi130;
				phi217 = phi132;
				phi218 = phi_in197;
				phi219 = phi198;
				phi220 = phi178;
				phi110 = phi199;
				phi221 = phi179;
				phi222 = phi_in136;
				phi180 = phi_in200;
				phi223 = phi_in201;
				phi224 = phi_in182;
				phi225 = phi_in203;
				phi226 = phi204;
				phi227 = phi_in205;
				phi228 = phi_in206;
				phi_in141 = phi_in207;
				phi229 = *(uint64_t*)(phi208 + 88);
				phi_in121 = phi187;
				phi230 = phi_in209;
				phi189 = phi210;
				phi_in123 = phi_in190;
				phi231 = phi_in143;
				phi_in125 = phi_in211;
				phi232 = phi212;
				phi233 = phi_in213;
			}
			int64_t anon235 = (__sext int64_t)*(uint32_t*)(phi194 + anon173 * 12 + 6301632);
			uint32_t* anon234 = (uint32_t*)((anon235 << 2) + 6300992);
			if (*(uint32_t*)(phi212 + 40) < *anon234 && (dispatch13 == 5 || dispatch13 == 4 && *(uint32_t*)(phi144 + 28) < *anon172 || dispatch13 == 3 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 || dispatch13 == 2 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 || dispatch13 == 1 && phi31 < *anon39 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 || dispatch13 == 0 && phi16 < *anon8 && phi31 < *anon39 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172))
			{
				*anon234 = *(uint32_t*)(phi212 + 44);
				phi_in236 = 0;
				phi_in237 = phi_in131;
				phi238 = phi_in197;
				phi_in136 = phi_in136;
				phi239 = phi_in200;
				phi240 = phi_in201;
				phi241 = phi202;
				phi242 = phi_in182;
				phi_in243 = phi_in203;
				phi244 = phi_in205;
				phi245 = phi_in206;
				phi_in246 = phi_in207;
				*(uint64_t*)(phi208 + 104) = phi_in209;
				phi_in247 = phi_in190;
				phi248 = phi_in143;
				phi208 = phi212;
				phi249 = phi_in213;
			}
			if (dispatch13 == 6 || dispatch13 == 5 && *(uint32_t*)(phi212 + 40) < *anon234 || dispatch13 == 4 && *(uint32_t*)(phi144 + 28) < *anon172 && *(uint32_t*)(phi212 + 40) < *anon234 || dispatch13 == 3 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 && *(uint32_t*)(phi212 + 40) < *anon234 || dispatch13 == 2 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 && *(uint32_t*)(phi212 + 40) < *anon234 || dispatch13 == 1 && phi31 < *anon39 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 && *(uint32_t*)(phi212 + 40) < *anon234 || dispatch13 == 0 && phi16 < *anon8 && phi31 < *anon39 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 && *(uint32_t*)(phi212 + 40) < *anon234)
			{
				phi250 = phi_in236;
				uint32_t phi251 = phi195;
				uint32_t phi252 = phi130;
				uint32_t phi_in253 = phi132;
				uint32_t phi254 = phi238;
				uint32_t phi_in255 = phi198;
				uint32_t phi_in256 = phi178;
				uint32_t phi257 = phi179;
				*(uint32_t*)(phi208 + 124) = phi239;
				int64_t anon261 = (__sext int64_t)*(uint32_t*)(phi250 + anon235 * 12 + 6301632);
				int64_t anon260 = anon261 * 12;
				int64_t anon259 = (__sext int64_t)*(uint32_t*)(anon260 + 6301636);
				uint32_t* anon258 = (uint32_t*)((anon259 << 2) + 6300992);
				*anon258 = phi241;
				uint32_t phi262 = phi242;
				uint32_t phi_in263 = phi204;
				uint32_t phi264 = phi244;
				uint32_t phi265 = phi245;
				uint32_t phi266 = phi187;
				uint64_t phi267 = *(uint64_t*)(phi208 + 104);
				*(uint64_t*)(phi208 + 112) = phi210;
				uint32_t phi_in268 = phi248;
				uint64_t phi269 = phi249;
				phi195 = phi251;
				uint32_t phi270 = phi_in196;
				uint32_t phi_in271 = phi252;
				uint32_t phi272 = phi_in237;
				uint32_t phi273 = phi_in253;
				uint32_t phi274 = phi254;
				uint32_t phi_in275 = phi_in255;
				uint32_t phi276 = phi_in256;
				phi110 = phi199;
				uint32_t phi277 = phi257;
				phi_in200 = *(uint32_t*)(phi208 + 124);
				uint32_t phi278 = phi240;
				uint32_t phi279 = *anon258;
				phi_in182 = phi262;
				uint32_t phi280 = phi_in263;
				phi229 = *(uint64_t*)(phi208 + 88);
				phi187 = phi266;
				phi_in209 = phi267;
				uint64_t phi281 = *(uint64_t*)(phi208 + 112);
				uint32_t phi282 = phi_in247;
				uint32_t phi283 = phi_in268;
				uint32_t phi284 = phi_in211;
				uint64_t phi285 = phi208;
				uint64_t phi286 = phi269;
				uint32_t* anon287 = (uint32_t*)((anon261 << 2) + 6300992);
				if (*(uint32_t*)(phi208 + 44) < *anon287)
				{
					*anon287 = *(uint32_t*)(phi208 + 64);
					uint32_t phi288 = phi_in196;
					uint32_t phi289 = phi252;
					uint32_t phi290 = phi_in237;
					uint64_t phi291 = phi208;
					uint32_t phi_in292 = phi_in253;
					phi274 = phi254;
					uint32_t phi_in293 = phi_in255;
					uint32_t phi294 = phi_in256;
					uint32_t phi295 = phi_in136;
					uint32_t phi296 = *(uint32_t*)(phi208 + 124);
					uint32_t phi297 = phi240;
					uint32_t phi298 = *anon258;
					uint32_t phi299 = phi262;
					uint32_t phi300 = phi_in243;
					uint32_t phi301 = phi264;
					uint32_t phi302 = phi_in246;
					uint64_t phi303 = *(uint64_t*)(phi208 + 88);
					uint32_t phi304 = phi266;
					*(uint64_t*)(phi291 + 104) = *(uint64_t*)(phi208 + 112);
					uint32_t phi_in305 = phi_in247;
					uint32_t phi_in306 = phi_in268;
					uint32_t phi_in307 = phi_in211;
					uint64_t phi308 = phi269;
					if (*(uint32_t*)(phi208 + 64) < *anon258)
					{
						uint32_t phi309 = phi251;
						uint32_t phi_in310 = phi_in196;
						uint32_t phi311 = phi_in237;
						uint32_t phi_in312 = phi_in253;
						uint32_t phi313 = phi_in255;
						uint32_t phi314 = phi_in256;
						uint32_t phi315 = phi199;
						uint64_t phi316 = phi208;
						phi179 = phi257;
						*(uint64_t*)(phi316 + 80) = anon259;
						uint32_t phi317 = phi_in136;
						uint32_t phi318 = phi264;
						uint64_t phi319 = *(uint64_t*)(phi208 + 88);
						uint64_t phi320 = phi267;
						uint64_t phi321 = *(uint64_t*)(phi208 + 112);
						if (phi240 < *anon258)
						{
							*(uint64_t*)(phi208 + 104) = phi267;
							*(uint32_t*)(phi208 + 96) = phi_in136;
							*(uint64_t*)(phi208 + 80) = anon259;
							w(4197873, anon12, (__sext int64_t)*anon258, (__zext uint64_t)*anon258);
							phi309 = *(uint32_t*)(arg1 - 96);
							phi_in310 = *(uint32_t*)(arg1 - 96);
							phi252 = *(uint32_t*)(arg1 - 96);
							phi311 = *(uint32_t*)(arg1 - 68);
							phi_in312 = *(uint32_t*)(arg1 - 96);
							phi254 = *(uint32_t*)(arg1 - 68);
							phi313 = *(uint32_t*)(arg1 - 96);
							phi314 = *(uint32_t*)(arg1 - 96);
							phi315 = *(uint32_t*)(arg1 - 68);
							phi316 = anon12;
							phi179 = *(uint32_t*)(arg1 - 68);
							*(uint64_t*)(phi316 + 80) = *(uint64_t*)(arg1 - 112);
							phi317 = *(uint32_t*)(arg1 - 96);
							phi262 = *(uint32_t*)(arg1 - 96);
							phi318 = *(uint32_t*)(arg1 - 96);
							phi319 = *(uint64_t*)(arg1 - 104);
							phi266 = *(uint32_t*)(arg1 - 96);
							phi320 = *(uint64_t*)(arg1 - 88);
							phi321 = *(uint64_t*)(arg1 - 80);
							phi269 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
						}
						uint32_t phi_in322 = phi309;
						uint32_t phi_in323 = phi252;
						uint32_t phi_in324 = phi311;
						uint32_t phi325 = phi254;
						*(uint32_t*)(phi316 + 96) = phi313;
						uint32_t phi_in326 = phi314;
						*(uint32_t*)(phi316 + 124) = phi315;
						uint32_t phi_in327 = phi317;
						uint32_t phi_in328 = phi262;
						uint32_t phi_in329 = phi318;
						*(uint64_t*)(phi316 + 88) = phi319;
						uint32_t phi330 = phi266;
						*(uint64_t*)(phi316 + 104) = phi320;
						*(uint64_t*)(phi316 + 112) = phi321;
						uint64_t phi_in331 = phi269;
						uint32_t phi332 = phi_in322;
						uint32_t phi_in333 = phi_in310;
						phi289 = phi_in323;
						uint32_t phi_in334 = phi_in324;
						uint32_t phi335 = phi_in312;
						uint32_t phi_in336 = *(uint32_t*)(phi316 + 96);
						phi294 = phi_in326;
						uint64_t phi337 = *(uint64_t*)(phi316 + 80);
						uint32_t phi338 = phi_in327;
						phi299 = phi_in328;
						uint32_t phi_in339 = phi_in329;
						uint64_t phi340 = *(uint64_t*)(phi316 + 88);
						uint64_t phi341 = *(uint64_t*)(phi316 + 104);
						uint64_t phi342 = *(uint64_t*)(phi316 + 112);
						int64_t anon343 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi316 + 80) * 12 + 6301636);
						if (phi179 < *(uint32_t*)((anon343 << 2) + 6300992))
						{
							w(4197793, anon12, anon343, (__zext uint64_t)*(uint32_t*)(phi316 + 120));
							phi332 = *(uint32_t*)(arg1 - 96);
							phi_in333 = *(uint32_t*)(arg1 - 96);
							phi289 = *(uint32_t*)(arg1 - 96);
							phi_in334 = alloca1.field14;
							phi335 = *(uint32_t*)(arg1 - 96);
							phi316 = anon12;
							phi325 = alloca1.field14;
							phi_in336 = *(uint32_t*)(arg1 - 96);
							phi294 = *(uint32_t*)(arg1 - 96);
							phi337 = *(uint64_t*)(arg1 - 112);
							phi338 = *(uint32_t*)(arg1 - 96);
							phi299 = *(uint32_t*)(arg1 - 96);
							phi_in339 = *(uint32_t*)(arg1 - 96);
							phi340 = *(uint64_t*)(arg1 - 104);
							phi330 = *(uint32_t*)(arg1 - 96);
							phi341 = *(uint64_t*)(arg1 - 88);
							phi342 = *(uint64_t*)(arg1 - 80);
							phi_in331 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
						}
						phi251 = phi332;
						*(uint32_t*)(phi316 + 88) = phi335;
						phi265 = phi325;
						uint32_t phi_in344 = phi338;
						*(uint64_t*)(phi316 + 80) = phi340;
						phi304 = phi330;
						*(uint64_t*)(phi316 + 96) = phi341;
						*(uint64_t*)(phi316 + 104) = phi342;
						phi288 = phi_in333;
						phi290 = phi_in334;
						phi291 = phi316;
						phi_in292 = *(uint32_t*)(phi316 + 88);
						phi274 = phi265;
						phi_in293 = phi_in336;
						phi199 = phi265;
						phi257 = phi265;
						phi295 = phi_in344;
						phi296 = phi265;
						phi297 = phi265;
						phi298 = phi265;
						phi300 = phi265;
						phi_in263 = phi265;
						phi301 = phi_in339;
						phi302 = phi265;
						phi303 = *(uint64_t*)(phi316 + 80);
						phi267 = *(uint64_t*)(phi316 + 96);
						*(uint64_t*)(phi291 + 104) = *(uint64_t*)(phi316 + 104);
						phi_in305 = phi265;
						phi_in306 = phi265;
						phi_in307 = phi265;
						phi308 = phi_in331;
						int64_t anon345 = (__sext int64_t)*(uint32_t*)(phi337 * 12 + 6301640);
						if (phi265 < *(uint32_t*)((anon345 << 2) + 6300992))
						{
							*(uint32_t*)(phi316 + 112) = phi265;
							w(4197395, anon12, anon345, (__zext uint64_t)*(uint32_t*)(phi316 + 120));
							phi251 = *(uint32_t*)(arg1 - 104);
							phi288 = *(uint32_t*)(arg1 - 104);
							phi289 = *(uint32_t*)(arg1 - 104);
							phi290 = *(uint32_t*)(arg1 - 80);
							phi291 = anon12;
							phi_in292 = *(uint32_t*)(arg1 - 104);
							phi274 = *(uint32_t*)(arg1 - 80);
							phi_in293 = *(uint32_t*)(arg1 - 104);
							phi294 = *(uint32_t*)(arg1 - 104);
							phi199 = *(uint32_t*)(arg1 - 80);
							phi257 = *(uint32_t*)(arg1 - 80);
							phi295 = *(uint32_t*)(arg1 - 104);
							phi296 = *(uint32_t*)(arg1 - 80);
							phi297 = *(uint32_t*)(arg1 - 80);
							phi298 = *(uint32_t*)(arg1 - 80);
							phi299 = *(uint32_t*)(arg1 - 104);
							phi300 = *(uint32_t*)(arg1 - 80);
							phi_in263 = *(uint32_t*)(arg1 - 80);
							phi301 = *(uint32_t*)(arg1 - 104);
							phi265 = *(uint32_t*)(arg1 - 80);
							phi302 = *(uint32_t*)(arg1 - 80);
							phi303 = *(uint64_t*)(arg1 - 112);
							phi304 = *(uint32_t*)(arg1 - 104);
							phi267 = *(uint64_t*)(arg1 - 96);
							*(uint64_t*)(phi291 + 104) = *(uint64_t*)(arg1 - 88);
							phi_in305 = *(uint32_t*)(arg1 - 80);
							phi_in306 = *(uint32_t*)(arg1 - 80);
							phi_in307 = *(uint32_t*)(arg1 - 80);
							phi308 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
						}
					}
					uint32_t phi_in346 = phi251;
					*(uint32_t*)(phi291 + 88) = phi288;
					uint32_t phi_in347 = phi289;
					uint32_t phi348 = phi290;
					uint32_t phi349 = phi294;
					uint32_t phi_in350 = phi199;
					phi277 = phi257;
					uint32_t phi_in351 = phi295;
					uint32_t phi_in352 = phi296;
					uint32_t phi_in353 = phi297;
					uint32_t phi_in354 = phi298;
					uint32_t phi_in355 = phi299;
					uint32_t phi_in356 = phi300;
					phi264 = phi301;
					phi_in246 = phi302;
					*(uint64_t*)(phi291 + 80) = phi303;
					uint32_t phi357 = phi304;
					*(uint64_t*)(phi291 + 96) = phi267;
					uint64_t phi358 = phi308;
					phi195 = phi_in346;
					phi270 = *(uint32_t*)(phi291 + 88);
					phi_in271 = phi_in347;
					phi272 = phi348;
					phi273 = phi_in292;
					phi_in275 = phi_in293;
					phi276 = phi349;
					phi110 = phi_in350;
					phi_in136 = phi_in351;
					phi_in200 = phi_in352;
					phi278 = phi_in353;
					phi279 = phi_in354;
					phi_in182 = phi_in355;
					phi_in243 = phi_in356;
					phi280 = phi_in263;
					phi229 = *(uint64_t*)(phi291 + 80);
					phi187 = phi357;
					phi_in209 = *(uint64_t*)(phi291 + 96);
					phi281 = *(uint64_t*)(phi291 + 104);
					phi282 = phi_in305;
					phi283 = phi_in306;
					phi284 = phi_in307;
					phi285 = phi291;
					phi286 = phi358;
					int64_t anon360 = (__sext int64_t)*(uint32_t*)(anon260 + 6301640);
					uint32_t* anon359 = (uint32_t*)((anon360 << 2) + 6300992);
					if (*(uint32_t*)(phi291 + 64) < *anon359)
					{
						*anon359 = phi348;
						uint32_t phi361 = phi_in346;
						uint32_t phi362 = *(uint32_t*)(phi291 + 88);
						phi_in271 = phi_in347;
						uint32_t phi_in363 = phi_in292;
						uint32_t phi364 = phi_in293;
						uint32_t phi365 = phi_in351;
						uint64_t phi366 = *(uint64_t*)(phi291 + 80);
						*(uint64_t*)(phi367 + 96) = *(uint64_t*)(phi291 + 96);
						*(uint64_t*)(phi367 + 104) = *(uint64_t*)(phi291 + 104);
						uint64_t phi367 = phi291;
						int64_t anon369 = anon360 * 12;
						int64_t anon368 = (__sext int64_t)*(uint32_t*)(anon369 + 6301636);
						if (phi348 < *(uint32_t*)((anon368 << 2) + 6300992))
						{
							*(uint32_t*)(phi291 + 112) = phi348;
							w(4197948, anon12, anon368, (__zext uint64_t)*(uint32_t*)(phi291 + 120));
							phi361 = *(uint32_t*)(arg1 - 104);
							phi362 = *(uint32_t*)(arg1 - 104);
							phi_in271 = *(uint32_t*)(arg1 - 104);
							phi348 = *(uint32_t*)(arg1 - 80);
							phi_in363 = *(uint32_t*)(arg1 - 104);
							phi364 = *(uint32_t*)(arg1 - 104);
							phi349 = *(uint32_t*)(arg1 - 104);
							phi365 = *(uint32_t*)(arg1 - 104);
							phi_in355 = *(uint32_t*)(arg1 - 104);
							phi264 = *(uint32_t*)(arg1 - 104);
							phi366 = *(uint64_t*)(arg1 - 112);
							phi357 = *(uint32_t*)(arg1 - 104);
							*(uint64_t*)(phi367 + 96) = *(uint64_t*)(arg1 - 96);
							*(uint64_t*)(phi367 + 104) = *(uint64_t*)(arg1 - 88);
							phi367 = anon12;
							phi358 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
						}
						*(uint32_t*)(phi367 + 88) = phi361;
						uint32_t phi_in370 = phi362;
						phi284 = phi348;
						phi_in275 = phi364;
						phi276 = phi349;
						phi_in136 = phi365;
						phi229 = phi366;
						uint32_t phi_in371 = phi357;
						phi281 = *(uint64_t*)(phi367 + 104);
						phi286 = phi358;
						phi195 = *(uint32_t*)(phi367 + 88);
						phi270 = phi_in370;
						phi272 = phi284;
						phi273 = phi_in363;
						phi274 = phi284;
						phi110 = phi284;
						phi277 = phi284;
						phi_in200 = phi284;
						phi278 = phi284;
						phi279 = phi284;
						phi_in182 = phi_in355;
						phi_in243 = phi284;
						phi280 = phi284;
						phi265 = phi284;
						phi_in246 = phi284;
						phi187 = phi_in371;
						phi_in209 = *(uint64_t*)(phi367 + 96);
						phi282 = phi284;
						phi283 = phi284;
						phi285 = phi367;
						int64_t anon372 = (__sext int64_t)*(uint32_t*)(anon369 + 6301640);
						if (phi284 < *(uint32_t*)((anon372 << 2) + 6300992))
						{
							*(uint32_t*)(phi367 + 112) = phi284;
							*(uint64_t*)(phi367 + 104) = phi281;
							*(uint64_t*)(phi367 + 80) = phi229;
							w(4197231, anon12, anon372, (__zext uint64_t)*(uint32_t*)(phi367 + 120));
							phi195 = alloca1.field8;
							phi270 = alloca1.field8;
							phi_in271 = alloca1.field8;
							phi272 = alloca1.field12;
							phi273 = alloca1.field8;
							phi274 = alloca1.field12;
							phi_in275 = alloca1.field8;
							phi276 = alloca1.field8;
							phi110 = alloca1.field12;
							phi277 = alloca1.field12;
							phi_in136 = alloca1.field8;
							phi_in200 = alloca1.field12;
							phi278 = alloca1.field12;
							phi279 = alloca1.field12;
							phi_in182 = alloca1.field8;
							phi_in243 = alloca1.field12;
							phi280 = alloca1.field12;
							phi264 = alloca1.field8;
							phi265 = alloca1.field12;
							phi_in246 = alloca1.field12;
							phi229 = alloca1.field7;
							phi187 = alloca1.field8;
							phi_in209 = alloca1.field10;
							phi281 = alloca1.field11;
							phi282 = alloca1.field12;
							phi283 = alloca1.field12;
							phi284 = alloca1.field12;
							phi285 = anon12;
							phi286 = (__zext uint64_t)alloca1.field8;
						}
					}
				}
				phi_in196 = phi270;
				phi216 = phi_in271;
				phi_in237 = phi272;
				phi132 = phi273;
				phi218 = phi274;
				phi220 = phi276;
				phi179 = phi277;
				phi222 = phi_in136;
				phi223 = phi278;
				phi241 = phi279;
				phi204 = phi280;
				phi244 = phi264;
				phi245 = phi265;
				phi230 = phi_in209;
				phi210 = phi281;
				phi_in247 = phi282;
				phi248 = phi283;
				phi_in211 = phi284;
				phi208 = phi285;
				phi233 = phi286;
				phi214 = phi195;
				phi215 = phi_in196;
				phi_in131 = phi_in237;
				phi217 = phi132;
				phi219 = phi_in275;
				phi221 = phi179;
				phi180 = phi_in200;
				phi202 = phi241;
				phi224 = phi_in182;
				phi225 = phi_in243;
				phi226 = phi204;
				phi227 = phi244;
				phi228 = phi245;
				phi_in141 = phi_in246;
				phi_in121 = phi187;
				phi189 = phi210;
				phi_in123 = phi_in247;
				phi231 = phi248;
				phi_in125 = phi_in211;
				phi232 = phi208;
				phi_in236 = phi250 + 4;
				phi130 = phi216;
				phi238 = phi218;
				phi198 = phi_in275;
				phi178 = phi220;
				phi199 = phi110;
				phi_in136 = phi222;
				phi239 = phi_in200;
				phi240 = phi223;
				phi242 = phi_in182;
				*(uint64_t*)(phi208 + 88) = phi229;
				*(uint64_t*)(phi208 + 104) = phi230;
				phi249 = phi233;
				dispatch13 = 6;
			}
			if (*(uint32_t*)(phi212 + 40) >= *anon234 && dispatch13 == 5 || *(uint32_t*)(phi212 + 40) >= *anon234 && dispatch13 == 4 && *(uint32_t*)(phi144 + 28) < *anon172 || *(uint32_t*)(phi212 + 40) >= *anon234 && dispatch13 == 3 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 || *(uint32_t*)(phi212 + 40) >= *anon234 && dispatch13 == 2 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 || *(uint32_t*)(phi212 + 40) >= *anon234 && dispatch13 == 1 && phi31 < *anon39 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 || *(uint32_t*)(phi212 + 40) >= *anon234 && dispatch13 == 0 && phi16 < *anon8 && phi31 < *anon39 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 || dispatch13 == 6 && phi250 == 8 || dispatch13 == 5 && *(uint32_t*)(phi212 + 40) < *anon234 && phi250 == 8 || dispatch13 == 4 && *(uint32_t*)(phi144 + 28) < *anon172 && *(uint32_t*)(phi212 + 40) < *anon234 && phi250 == 8 || dispatch13 == 3 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 && *(uint32_t*)(phi212 + 40) < *anon234 && phi250 == 8 || dispatch13 == 2 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 && *(uint32_t*)(phi212 + 40) < *anon234 && phi250 == 8 || dispatch13 == 1 && phi31 < *anon39 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 && *(uint32_t*)(phi212 + 40) < *anon234 && phi250 == 8 || dispatch13 == 0 && phi16 < *anon8 && phi31 < *anon39 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 && *(uint32_t*)(phi212 + 40) < *anon234 && phi250 == 8)
			{
				phi129 = phi214;
				phi175 = phi215;
				phi130 = phi216;
				phi132 = phi217;
				phi176 = phi218;
				phi177 = phi219;
				phi178 = phi220;
				phi179 = phi221;
				phi_in136 = phi222;
				phi137 = phi223;
				phi181 = phi202;
				phi_in182 = phi224;
				phi183 = phi225;
				phi184 = phi226;
				phi118 = phi227;
				phi140 = phi228;
				phi186 = phi229;
				phi168 = phi_in121;
				phi169 = phi230;
				phi_in143 = phi231;
				phi_in192 = phi232;
				phi193 = phi233;
				phi147 = phi189;
				phi148 = phi129;
				phi149 = phi175;
				phi150 = phi130;
				phi151 = phi_in131;
				phi152 = phi132;
				phi153 = phi176;
				phi154 = phi177;
				phi155 = phi178;
				phi156 = phi186;
				phi157 = phi110;
				phi158 = phi179;
				phi159 = phi_in136;
				phi160 = phi180;
				phi161 = phi137;
				phi162 = phi181;
				phi163 = phi_in182;
				phi139 = phi183;
				phi164 = phi184;
				phi165 = phi118;
				phi166 = phi140;
				phi167 = phi_in141;
				phi_in123 = phi_in123;
				phi124 = phi_in143;
				phi170 = phi_in125;
				phi171 = phi_in192;
				phi87 = phi193;
				phi_in174 = phi194 + 4;
				phi185 = phi_in141;
				phi187 = phi168;
				phi188 = phi169;
				phi_in190 = phi_in123;
				phi191 = phi_in125;
				dispatch13 = 5;
			}
			if (*(uint32_t*)(phi144 + 28) >= *anon172 && dispatch13 == 4 || *(uint32_t*)(phi144 + 28) >= *anon172 && dispatch13 == 3 && *(uint32_t*)(phi84 + 24) < *anon101 || *(uint32_t*)(phi144 + 28) >= *anon172 && dispatch13 == 2 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 || *(uint32_t*)(phi144 + 28) >= *anon172 && dispatch13 == 1 && phi31 < *anon39 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 || *(uint32_t*)(phi144 + 28) >= *anon172 && dispatch13 == 0 && phi16 < *anon8 && phi31 < *anon39 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 || *(uint32_t*)(phi212 + 40) >= *anon234 && dispatch13 == 5 && phi194 == 8 || *(uint32_t*)(phi212 + 40) >= *anon234 && dispatch13 == 4 && *(uint32_t*)(phi144 + 28) < *anon172 && phi194 == 8 || *(uint32_t*)(phi212 + 40) >= *anon234 && dispatch13 == 3 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 && phi194 == 8 || *(uint32_t*)(phi212 + 40) >= *anon234 && dispatch13 == 2 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 && phi194 == 8 || *(uint32_t*)(phi212 + 40) >= *anon234 && dispatch13 == 1 && phi31 < *anon39 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 && phi194 == 8 || *(uint32_t*)(phi212 + 40) >= *anon234 && dispatch13 == 0 && phi16 < *anon8 && phi31 < *anon39 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 && phi194 == 8 || dispatch13 == 6 && phi250 == 8 && phi194 == 8 || dispatch13 == 5 && *(uint32_t*)(phi212 + 40) < *anon234 && phi250 == 8 && phi194 == 8 || dispatch13 == 4 && *(uint32_t*)(phi144 + 28) < *anon172 && *(uint32_t*)(phi212 + 40) < *anon234 && phi250 == 8 && phi194 == 8 || dispatch13 == 3 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 && *(uint32_t*)(phi212 + 40) < *anon234 && phi250 == 8 && phi194 == 8 || dispatch13 == 2 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 && *(uint32_t*)(phi212 + 40) < *anon234 && phi250 == 8 && phi194 == 8 || dispatch13 == 1 && phi31 < *anon39 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 && *(uint32_t*)(phi212 + 40) < *anon234 && phi250 == 8 && phi194 == 8 || dispatch13 == 0 && phi16 < *anon8 && phi31 < *anon39 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 && *(uint32_t*)(phi212 + 40) < *anon234 && phi250 == 8 && phi194 == 8)
			{
				phi_in128 = phi147;
				phi71 = phi148;
				phi_in103 = phi149;
				phi104 = phi150;
				phi105 = phi151;
				phi80 = phi152;
				phi107 = phi153;
				phi_in108 = phi154;
				phi109 = phi155;
				phi110 = phi157;
				phi111 = phi158;
				phi74 = phi159;
				phi_in112 = phi160;
				phi113 = phi161;
				phi114 = phi162;
				phi_in115 = phi163;
				phi116 = phi139;
				phi_in117 = phi164;
				phi118 = phi165;
				phi119 = phi166;
				phi120 = phi167;
				phi_in121 = phi168;
				phi122 = phi169;
				phi_in125 = phi170;
				phi_in126 = phi171;
				phi88 = phi122;
				phi89 = phi71;
				phi_in90 = phi_in103;
				phi91 = phi104;
				phi92 = phi80;
				phi93 = phi_in108;
				phi94 = phi109;
				phi_in95 = phi74;
				phi_in96 = phi_in115;
				phi97 = phi118;
				phi98 = phi_in121;
				phi99 = phi_in126;
				phi100 = phi87;
				phi_in127 = phi156 + 4;
				dispatch13 = 4;
			}
			if (*(uint32_t*)(phi84 + 24) >= *anon101 && dispatch13 == 3 || *(uint32_t*)(phi84 + 24) >= *anon101 && dispatch13 == 2 && *(uint32_t*)(phi59 + 4) < *anon69 || *(uint32_t*)(phi84 + 24) >= *anon101 && dispatch13 == 1 && phi31 < *anon39 && *(uint32_t*)(phi59 + 4) < *anon69 || *(uint32_t*)(phi84 + 24) >= *anon101 && dispatch13 == 0 && phi16 < *anon8 && phi31 < *anon39 && *(uint32_t*)(phi59 + 4) < *anon69 || *(uint32_t*)(phi144 + 28) >= *anon172 && dispatch13 == 4 && phi156 == 8 || *(uint32_t*)(phi144 + 28) >= *anon172 && dispatch13 == 3 && *(uint32_t*)(phi84 + 24) < *anon101 && phi156 == 8 || *(uint32_t*)(phi144 + 28) >= *anon172 && dispatch13 == 2 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && phi156 == 8 || *(uint32_t*)(phi144 + 28) >= *anon172 && dispatch13 == 1 && phi31 < *anon39 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && phi156 == 8 || *(uint32_t*)(phi144 + 28) >= *anon172 && dispatch13 == 0 && phi16 < *anon8 && phi31 < *anon39 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && phi156 == 8 || *(uint32_t*)(phi212 + 40) >= *anon234 && dispatch13 == 5 && phi194 == 8 && phi156 == 8 || *(uint32_t*)(phi212 + 40) >= *anon234 && dispatch13 == 4 && *(uint32_t*)(phi144 + 28) < *anon172 && phi194 == 8 && phi156 == 8 || *(uint32_t*)(phi212 + 40) >= *anon234 && dispatch13 == 3 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 && phi194 == 8 && phi156 == 8 || *(uint32_t*)(phi212 + 40) >= *anon234 && dispatch13 == 2 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 && phi194 == 8 && phi156 == 8 || *(uint32_t*)(phi212 + 40) >= *anon234 && dispatch13 == 1 && phi31 < *anon39 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 && phi194 == 8 && phi156 == 8 || *(uint32_t*)(phi212 + 40) >= *anon234 && dispatch13 == 0 && phi16 < *anon8 && phi31 < *anon39 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 && phi194 == 8 && phi156 == 8 || dispatch13 == 6 && phi250 == 8 && phi194 == 8 && phi156 == 8 || dispatch13 == 5 && *(uint32_t*)(phi212 + 40) < *anon234 && phi250 == 8 && phi194 == 8 && phi156 == 8 || dispatch13 == 4 && *(uint32_t*)(phi144 + 28) < *anon172 && *(uint32_t*)(phi212 + 40) < *anon234 && phi250 == 8 && phi194 == 8 && phi156 == 8 || dispatch13 == 3 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 && *(uint32_t*)(phi212 + 40) < *anon234 && phi250 == 8 && phi194 == 8 && phi156 == 8 || dispatch13 == 2 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 && *(uint32_t*)(phi212 + 40) < *anon234 && phi250 == 8 && phi194 == 8 && phi156 == 8 || dispatch13 == 1 && phi31 < *anon39 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 && *(uint32_t*)(phi212 + 40) < *anon234 && phi250 == 8 && phi194 == 8 && phi156 == 8 || dispatch13 == 0 && phi16 < *anon8 && phi31 < *anon39 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 && *(uint32_t*)(phi212 + 40) < *anon234 && phi250 == 8 && phi194 == 8 && phi156 == 8)
			{
				phi_in78 = phi88;
				phi41 = phi89;
				phi_in72 = phi_in90;
				phi61 = phi91;
				phi62 = phi92;
				phi_in373 = phi93;
				phi45 = phi94;
				phi74 = phi_in95;
				phi67 = phi97;
				phi49 = phi98;
				phi_in374 = phi99;
				phi_in375 = phi100;
				phi71 = phi41;
				phi43 = phi61;
				phi53 = phi62;
				phi_in73 = phi_in373;
				phi_in55 = phi_in96;
				phi75 = phi67;
				phi57 = phi49;
				phi_in76 = phi_in374;
				phi_in77 = phi85 + 4;
				phi58 = phi_in375;
				dispatch13 = 3;
			}
			if (phi85 == 8 && (*(uint32_t*)(phi84 + 24) >= *anon101 && dispatch13 == 3 || *(uint32_t*)(phi84 + 24) >= *anon101 && dispatch13 == 2 && *(uint32_t*)(phi59 + 4) < *anon69 || *(uint32_t*)(phi84 + 24) >= *anon101 && dispatch13 == 1 && phi31 < *anon39 && *(uint32_t*)(phi59 + 4) < *anon69 || *(uint32_t*)(phi84 + 24) >= *anon101 && dispatch13 == 0 && phi16 < *anon8 && phi31 < *anon39 && *(uint32_t*)(phi59 + 4) < *anon69 || *(uint32_t*)(phi144 + 28) >= *anon172 && dispatch13 == 4 && phi156 == 8 || *(uint32_t*)(phi144 + 28) >= *anon172 && dispatch13 == 3 && *(uint32_t*)(phi84 + 24) < *anon101 && phi156 == 8 || *(uint32_t*)(phi144 + 28) >= *anon172 && dispatch13 == 2 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && phi156 == 8 || *(uint32_t*)(phi144 + 28) >= *anon172 && dispatch13 == 1 && phi31 < *anon39 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && phi156 == 8 || *(uint32_t*)(phi144 + 28) >= *anon172 && dispatch13 == 0 && phi16 < *anon8 && phi31 < *anon39 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && phi156 == 8 || *(uint32_t*)(phi212 + 40) >= *anon234 && dispatch13 == 5 && phi194 == 8 && phi156 == 8 || *(uint32_t*)(phi212 + 40) >= *anon234 && dispatch13 == 4 && *(uint32_t*)(phi144 + 28) < *anon172 && phi194 == 8 && phi156 == 8 || *(uint32_t*)(phi212 + 40) >= *anon234 && dispatch13 == 3 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 && phi194 == 8 && phi156 == 8 || *(uint32_t*)(phi212 + 40) >= *anon234 && dispatch13 == 2 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 && phi194 == 8 && phi156 == 8 || *(uint32_t*)(phi212 + 40) >= *anon234 && dispatch13 == 1 && phi31 < *anon39 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 && phi194 == 8 && phi156 == 8 || *(uint32_t*)(phi212 + 40) >= *anon234 && dispatch13 == 0 && phi16 < *anon8 && phi31 < *anon39 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 && phi194 == 8 && phi156 == 8 || dispatch13 == 6 && phi250 == 8 && phi194 == 8 && phi156 == 8 || dispatch13 == 5 && *(uint32_t*)(phi212 + 40) < *anon234 && phi250 == 8 && phi194 == 8 && phi156 == 8 || dispatch13 == 4 && *(uint32_t*)(phi144 + 28) < *anon172 && *(uint32_t*)(phi212 + 40) < *anon234 && phi250 == 8 && phi194 == 8 && phi156 == 8 || dispatch13 == 3 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 && *(uint32_t*)(phi212 + 40) < *anon234 && phi250 == 8 && phi194 == 8 && phi156 == 8 || dispatch13 == 2 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 && *(uint32_t*)(phi212 + 40) < *anon234 && phi250 == 8 && phi194 == 8 && phi156 == 8 || dispatch13 == 1 && phi31 < *anon39 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 && *(uint32_t*)(phi212 + 40) < *anon234 && phi250 == 8 && phi194 == 8 && phi156 == 8 || dispatch13 == 0 && phi16 < *anon8 && phi31 < *anon39 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 && *(uint32_t*)(phi212 + 40) < *anon234 && phi250 == 8 && phi194 == 8 && phi156 == 8))
			{
				phi60 = phi_in72;
				phi63 = phi_in373;
				phi64 = phi45;
				phi65 = *(uint64_t*)(phi_in374 + 72);
				phi46 = phi74;
				phi66 = phi_in96;
				phi50 = phi_in375;
				phi68 = phi_in374;
			}
			if (*(uint32_t*)(phi84 + 24) >= *anon101 && dispatch13 == 3 && phi85 == 8 || *(uint32_t*)(phi84 + 24) >= *anon101 && dispatch13 == 2 && *(uint32_t*)(phi59 + 4) < *anon69 && phi85 == 8 || *(uint32_t*)(phi84 + 24) >= *anon101 && dispatch13 == 1 && phi31 < *anon39 && *(uint32_t*)(phi59 + 4) < *anon69 && phi85 == 8 || *(uint32_t*)(phi84 + 24) >= *anon101 && dispatch13 == 0 && phi16 < *anon8 && phi31 < *anon39 && *(uint32_t*)(phi59 + 4) < *anon69 && phi85 == 8 || *(uint32_t*)(phi144 + 28) >= *anon172 && dispatch13 == 4 && phi156 == 8 && phi85 == 8 || *(uint32_t*)(phi144 + 28) >= *anon172 && dispatch13 == 3 && *(uint32_t*)(phi84 + 24) < *anon101 && phi156 == 8 && phi85 == 8 || *(uint32_t*)(phi144 + 28) >= *anon172 && dispatch13 == 2 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && phi156 == 8 && phi85 == 8 || *(uint32_t*)(phi144 + 28) >= *anon172 && dispatch13 == 1 && phi31 < *anon39 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && phi156 == 8 && phi85 == 8 || *(uint32_t*)(phi144 + 28) >= *anon172 && dispatch13 == 0 && phi16 < *anon8 && phi31 < *anon39 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && phi156 == 8 && phi85 == 8 || *(uint32_t*)(phi212 + 40) >= *anon234 && dispatch13 == 5 && phi194 == 8 && phi156 == 8 && phi85 == 8 || *(uint32_t*)(phi212 + 40) >= *anon234 && dispatch13 == 4 && *(uint32_t*)(phi144 + 28) < *anon172 && phi194 == 8 && phi156 == 8 && phi85 == 8 || *(uint32_t*)(phi212 + 40) >= *anon234 && dispatch13 == 3 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 && phi194 == 8 && phi156 == 8 && phi85 == 8 || *(uint32_t*)(phi212 + 40) >= *anon234 && dispatch13 == 2 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 && phi194 == 8 && phi156 == 8 && phi85 == 8 || *(uint32_t*)(phi212 + 40) >= *anon234 && dispatch13 == 1 && phi31 < *anon39 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 && phi194 == 8 && phi156 == 8 && phi85 == 8 || *(uint32_t*)(phi212 + 40) >= *anon234 && dispatch13 == 0 && phi16 < *anon8 && phi31 < *anon39 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 && phi194 == 8 && phi156 == 8 && phi85 == 8 || dispatch13 == 6 && phi250 == 8 && phi194 == 8 && phi156 == 8 && phi85 == 8 || dispatch13 == 5 && *(uint32_t*)(phi212 + 40) < *anon234 && phi250 == 8 && phi194 == 8 && phi156 == 8 && phi85 == 8 || dispatch13 == 4 && *(uint32_t*)(phi144 + 28) < *anon172 && *(uint32_t*)(phi212 + 40) < *anon234 && phi250 == 8 && phi194 == 8 && phi156 == 8 && phi85 == 8 || dispatch13 == 3 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 && *(uint32_t*)(phi212 + 40) < *anon234 && phi250 == 8 && phi194 == 8 && phi156 == 8 && phi85 == 8 || dispatch13 == 2 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 && *(uint32_t*)(phi212 + 40) < *anon234 && phi250 == 8 && phi194 == 8 && phi156 == 8 && phi85 == 8 || dispatch13 == 1 && phi31 < *anon39 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 && *(uint32_t*)(phi212 + 40) < *anon234 && phi250 == 8 && phi194 == 8 && phi156 == 8 && phi85 == 8 || dispatch13 == 0 && phi16 < *anon8 && phi31 < *anon39 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 && *(uint32_t*)(phi212 + 40) < *anon234 && phi250 == 8 && phi194 == 8 && phi156 == 8 && phi85 == 8 || *(uint32_t*)(phi59 + 4) >= *anon69 && dispatch13 == 2 || *(uint32_t*)(phi59 + 4) >= *anon69 && dispatch13 == 1 && phi31 < *anon39 || *(uint32_t*)(phi59 + 4) >= *anon69 && dispatch13 == 0 && phi16 < *anon8 && phi31 < *anon39)
			{
				phi_in42 = phi60;
				phi43 = phi61;
				phi44 = phi62;
				phi_in30 = phi63;
				phi_in376 = phi64;
				phi47 = phi66;
				phi48 = phi67;
				phi_in377 = phi68;
				phi45 = phi_in376;
				phi_in51 = phi65 + 4;
				phi_in52 = phi_in377;
				dispatch13 = 2;
			}
			if (phi65 == 8 && (*(uint32_t*)(phi84 + 24) >= *anon101 && dispatch13 == 3 && phi85 == 8 || *(uint32_t*)(phi84 + 24) >= *anon101 && dispatch13 == 2 && *(uint32_t*)(phi59 + 4) < *anon69 && phi85 == 8 || *(uint32_t*)(phi84 + 24) >= *anon101 && dispatch13 == 1 && phi31 < *anon39 && *(uint32_t*)(phi59 + 4) < *anon69 && phi85 == 8 || *(uint32_t*)(phi84 + 24) >= *anon101 && dispatch13 == 0 && phi16 < *anon8 && phi31 < *anon39 && *(uint32_t*)(phi59 + 4) < *anon69 && phi85 == 8 || *(uint32_t*)(phi144 + 28) >= *anon172 && dispatch13 == 4 && phi156 == 8 && phi85 == 8 || *(uint32_t*)(phi144 + 28) >= *anon172 && dispatch13 == 3 && *(uint32_t*)(phi84 + 24) < *anon101 && phi156 == 8 && phi85 == 8 || *(uint32_t*)(phi144 + 28) >= *anon172 && dispatch13 == 2 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && phi156 == 8 && phi85 == 8 || *(uint32_t*)(phi144 + 28) >= *anon172 && dispatch13 == 1 && phi31 < *anon39 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && phi156 == 8 && phi85 == 8 || *(uint32_t*)(phi144 + 28) >= *anon172 && dispatch13 == 0 && phi16 < *anon8 && phi31 < *anon39 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && phi156 == 8 && phi85 == 8 || *(uint32_t*)(phi212 + 40) >= *anon234 && dispatch13 == 5 && phi194 == 8 && phi156 == 8 && phi85 == 8 || *(uint32_t*)(phi212 + 40) >= *anon234 && dispatch13 == 4 && *(uint32_t*)(phi144 + 28) < *anon172 && phi194 == 8 && phi156 == 8 && phi85 == 8 || *(uint32_t*)(phi212 + 40) >= *anon234 && dispatch13 == 3 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 && phi194 == 8 && phi156 == 8 && phi85 == 8 || *(uint32_t*)(phi212 + 40) >= *anon234 && dispatch13 == 2 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 && phi194 == 8 && phi156 == 8 && phi85 == 8 || *(uint32_t*)(phi212 + 40) >= *anon234 && dispatch13 == 1 && phi31 < *anon39 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 && phi194 == 8 && phi156 == 8 && phi85 == 8 || *(uint32_t*)(phi212 + 40) >= *anon234 && dispatch13 == 0 && phi16 < *anon8 && phi31 < *anon39 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 && phi194 == 8 && phi156 == 8 && phi85 == 8 || dispatch13 == 6 && phi250 == 8 && phi194 == 8 && phi156 == 8 && phi85 == 8 || dispatch13 == 5 && *(uint32_t*)(phi212 + 40) < *anon234 && phi250 == 8 && phi194 == 8 && phi156 == 8 && phi85 == 8 || dispatch13 == 4 && *(uint32_t*)(phi144 + 28) < *anon172 && *(uint32_t*)(phi212 + 40) < *anon234 && phi250 == 8 && phi194 == 8 && phi156 == 8 && phi85 == 8 || dispatch13 == 3 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 && *(uint32_t*)(phi212 + 40) < *anon234 && phi250 == 8 && phi194 == 8 && phi156 == 8 && phi85 == 8 || dispatch13 == 2 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 && *(uint32_t*)(phi212 + 40) < *anon234 && phi250 == 8 && phi194 == 8 && phi156 == 8 && phi85 == 8 || dispatch13 == 1 && phi31 < *anon39 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 && *(uint32_t*)(phi212 + 40) < *anon234 && phi250 == 8 && phi194 == 8 && phi156 == 8 && phi85 == 8 || dispatch13 == 0 && phi16 < *anon8 && phi31 < *anon39 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 && *(uint32_t*)(phi212 + 40) < *anon234 && phi250 == 8 && phi194 == 8 && phi156 == 8 && phi85 == 8 || *(uint32_t*)(phi59 + 4) >= *anon69 && dispatch13 == 2 || *(uint32_t*)(phi59 + 4) >= *anon69 && dispatch13 == 1 && phi31 < *anon39 || *(uint32_t*)(phi59 + 4) >= *anon69 && dispatch13 == 0 && phi16 < *anon8 && phi31 < *anon39))
			{
				phi33 = *(uint32_t*)(phi_in377 + 68);
				phi34 = phi_in376;
				phi35 = *(uint64_t*)(phi_in377 + 56);
				phi36 = (__zext uint64_t)phi_in376;
				phi29 = *(uint32_t*)(phi_in377 + 68);
				phi37 = phi_in376;
				phi38 = *(uint32_t*)(phi_in377 + 68);
				phi_in26 = phi_in377;
			}
			if (*(uint32_t*)(phi84 + 24) >= *anon101 && dispatch13 == 3 && phi85 == 8 && phi65 == 8 || *(uint32_t*)(phi84 + 24) >= *anon101 && dispatch13 == 2 && *(uint32_t*)(phi59 + 4) < *anon69 && phi85 == 8 && phi65 == 8 || *(uint32_t*)(phi84 + 24) >= *anon101 && dispatch13 == 1 && phi31 < *anon39 && *(uint32_t*)(phi59 + 4) < *anon69 && phi85 == 8 && phi65 == 8 || *(uint32_t*)(phi84 + 24) >= *anon101 && dispatch13 == 0 && phi16 < *anon8 && phi31 < *anon39 && *(uint32_t*)(phi59 + 4) < *anon69 && phi85 == 8 && phi65 == 8 || *(uint32_t*)(phi144 + 28) >= *anon172 && dispatch13 == 4 && phi156 == 8 && phi85 == 8 && phi65 == 8 || *(uint32_t*)(phi144 + 28) >= *anon172 && dispatch13 == 3 && *(uint32_t*)(phi84 + 24) < *anon101 && phi156 == 8 && phi85 == 8 && phi65 == 8 || *(uint32_t*)(phi144 + 28) >= *anon172 && dispatch13 == 2 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && phi156 == 8 && phi85 == 8 && phi65 == 8 || *(uint32_t*)(phi144 + 28) >= *anon172 && dispatch13 == 1 && phi31 < *anon39 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && phi156 == 8 && phi85 == 8 && phi65 == 8 || *(uint32_t*)(phi144 + 28) >= *anon172 && dispatch13 == 0 && phi16 < *anon8 && phi31 < *anon39 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && phi156 == 8 && phi85 == 8 && phi65 == 8 || *(uint32_t*)(phi212 + 40) >= *anon234 && dispatch13 == 5 && phi194 == 8 && phi156 == 8 && phi85 == 8 && phi65 == 8 || *(uint32_t*)(phi212 + 40) >= *anon234 && dispatch13 == 4 && *(uint32_t*)(phi144 + 28) < *anon172 && phi194 == 8 && phi156 == 8 && phi85 == 8 && phi65 == 8 || *(uint32_t*)(phi212 + 40) >= *anon234 && dispatch13 == 3 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 && phi194 == 8 && phi156 == 8 && phi85 == 8 && phi65 == 8 || *(uint32_t*)(phi212 + 40) >= *anon234 && dispatch13 == 2 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 && phi194 == 8 && phi156 == 8 && phi85 == 8 && phi65 == 8 || *(uint32_t*)(phi212 + 40) >= *anon234 && dispatch13 == 1 && phi31 < *anon39 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 && phi194 == 8 && phi156 == 8 && phi85 == 8 && phi65 == 8 || *(uint32_t*)(phi212 + 40) >= *anon234 && dispatch13 == 0 && phi16 < *anon8 && phi31 < *anon39 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 && phi194 == 8 && phi156 == 8 && phi85 == 8 && phi65 == 8 || dispatch13 == 6 && phi250 == 8 && phi194 == 8 && phi156 == 8 && phi85 == 8 && phi65 == 8 || dispatch13 == 5 && *(uint32_t*)(phi212 + 40) < *anon234 && phi250 == 8 && phi194 == 8 && phi156 == 8 && phi85 == 8 && phi65 == 8 || dispatch13 == 4 && *(uint32_t*)(phi144 + 28) < *anon172 && *(uint32_t*)(phi212 + 40) < *anon234 && phi250 == 8 && phi194 == 8 && phi156 == 8 && phi85 == 8 && phi65 == 8 || dispatch13 == 3 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 && *(uint32_t*)(phi212 + 40) < *anon234 && phi250 == 8 && phi194 == 8 && phi156 == 8 && phi85 == 8 && phi65 == 8 || dispatch13 == 2 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 && *(uint32_t*)(phi212 + 40) < *anon234 && phi250 == 8 && phi194 == 8 && phi156 == 8 && phi85 == 8 && phi65 == 8 || dispatch13 == 1 && phi31 < *anon39 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 && *(uint32_t*)(phi212 + 40) < *anon234 && phi250 == 8 && phi194 == 8 && phi156 == 8 && phi85 == 8 && phi65 == 8 || dispatch13 == 0 && phi16 < *anon8 && phi31 < *anon39 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 && *(uint32_t*)(phi212 + 40) < *anon234 && phi250 == 8 && phi194 == 8 && phi156 == 8 && phi85 == 8 && phi65 == 8 || *(uint32_t*)(phi59 + 4) >= *anon69 && dispatch13 == 2 && phi65 == 8 || *(uint32_t*)(phi59 + 4) >= *anon69 && dispatch13 == 1 && phi31 < *anon39 && phi65 == 8 || *(uint32_t*)(phi59 + 4) >= *anon69 && dispatch13 == 0 && phi16 < *anon8 && phi31 < *anon39 && phi65 == 8 || phi31 >= *anon39 && dispatch13 == 1 || phi31 >= *anon39 && dispatch13 == 0 && phi16 < *anon8)
			{
				phi19 = phi33;
				phi16 = phi34;
				phi22 = phi36;
				phi23 = phi29;
				phi24 = phi37;
				phi_in5 = phi38;
				phi15 = phi19;
				phi21 = phi16;
				phi_in25 = phi35 + 4;
				dispatch13 = 1;
			}
			if (phi35 == 8 && (*(uint32_t*)(phi84 + 24) >= *anon101 && dispatch13 == 3 && phi85 == 8 && phi65 == 8 || *(uint32_t*)(phi84 + 24) >= *anon101 && dispatch13 == 2 && *(uint32_t*)(phi59 + 4) < *anon69 && phi85 == 8 && phi65 == 8 || *(uint32_t*)(phi84 + 24) >= *anon101 && dispatch13 == 1 && phi31 < *anon39 && *(uint32_t*)(phi59 + 4) < *anon69 && phi85 == 8 && phi65 == 8 || *(uint32_t*)(phi84 + 24) >= *anon101 && dispatch13 == 0 && phi16 < *anon8 && phi31 < *anon39 && *(uint32_t*)(phi59 + 4) < *anon69 && phi85 == 8 && phi65 == 8 || *(uint32_t*)(phi144 + 28) >= *anon172 && dispatch13 == 4 && phi156 == 8 && phi85 == 8 && phi65 == 8 || *(uint32_t*)(phi144 + 28) >= *anon172 && dispatch13 == 3 && *(uint32_t*)(phi84 + 24) < *anon101 && phi156 == 8 && phi85 == 8 && phi65 == 8 || *(uint32_t*)(phi144 + 28) >= *anon172 && dispatch13 == 2 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && phi156 == 8 && phi85 == 8 && phi65 == 8 || *(uint32_t*)(phi144 + 28) >= *anon172 && dispatch13 == 1 && phi31 < *anon39 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && phi156 == 8 && phi85 == 8 && phi65 == 8 || *(uint32_t*)(phi144 + 28) >= *anon172 && dispatch13 == 0 && phi16 < *anon8 && phi31 < *anon39 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && phi156 == 8 && phi85 == 8 && phi65 == 8 || *(uint32_t*)(phi212 + 40) >= *anon234 && dispatch13 == 5 && phi194 == 8 && phi156 == 8 && phi85 == 8 && phi65 == 8 || *(uint32_t*)(phi212 + 40) >= *anon234 && dispatch13 == 4 && *(uint32_t*)(phi144 + 28) < *anon172 && phi194 == 8 && phi156 == 8 && phi85 == 8 && phi65 == 8 || *(uint32_t*)(phi212 + 40) >= *anon234 && dispatch13 == 3 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 && phi194 == 8 && phi156 == 8 && phi85 == 8 && phi65 == 8 || *(uint32_t*)(phi212 + 40) >= *anon234 && dispatch13 == 2 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 && phi194 == 8 && phi156 == 8 && phi85 == 8 && phi65 == 8 || *(uint32_t*)(phi212 + 40) >= *anon234 && dispatch13 == 1 && phi31 < *anon39 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 && phi194 == 8 && phi156 == 8 && phi85 == 8 && phi65 == 8 || *(uint32_t*)(phi212 + 40) >= *anon234 && dispatch13 == 0 && phi16 < *anon8 && phi31 < *anon39 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 && phi194 == 8 && phi156 == 8 && phi85 == 8 && phi65 == 8 || dispatch13 == 6 && phi250 == 8 && phi194 == 8 && phi156 == 8 && phi85 == 8 && phi65 == 8 || dispatch13 == 5 && *(uint32_t*)(phi212 + 40) < *anon234 && phi250 == 8 && phi194 == 8 && phi156 == 8 && phi85 == 8 && phi65 == 8 || dispatch13 == 4 && *(uint32_t*)(phi144 + 28) < *anon172 && *(uint32_t*)(phi212 + 40) < *anon234 && phi250 == 8 && phi194 == 8 && phi156 == 8 && phi85 == 8 && phi65 == 8 || dispatch13 == 3 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 && *(uint32_t*)(phi212 + 40) < *anon234 && phi250 == 8 && phi194 == 8 && phi156 == 8 && phi85 == 8 && phi65 == 8 || dispatch13 == 2 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 && *(uint32_t*)(phi212 + 40) < *anon234 && phi250 == 8 && phi194 == 8 && phi156 == 8 && phi85 == 8 && phi65 == 8 || dispatch13 == 1 && phi31 < *anon39 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 && *(uint32_t*)(phi212 + 40) < *anon234 && phi250 == 8 && phi194 == 8 && phi156 == 8 && phi85 == 8 && phi65 == 8 || dispatch13 == 0 && phi16 < *anon8 && phi31 < *anon39 && *(uint32_t*)(phi59 + 4) < *anon69 && *(uint32_t*)(phi84 + 24) < *anon101 && *(uint32_t*)(phi144 + 28) < *anon172 && *(uint32_t*)(phi212 + 40) < *anon234 && phi250 == 8 && phi194 == 8 && phi156 == 8 && phi85 == 8 && phi65 == 8 || *(uint32_t*)(phi59 + 4) >= *anon69 && dispatch13 == 2 && phi65 == 8 || *(uint32_t*)(phi59 + 4) >= *anon69 && dispatch13 == 1 && phi31 < *anon39 && phi65 == 8 || *(uint32_t*)(phi59 + 4) >= *anon69 && dispatch13 == 0 && phi16 < *anon8 && phi31 < *anon39 && phi65 == 8 || phi31 >= *anon39 && dispatch13 == 1 || phi31 >= *anon39 && dispatch13 == 0 && phi16 < *anon8))
			{
				phi17 = *(uint64_t*)(phi_in26 + 48);
				phi18 = phi16;
				phi_in5 = phi19;
				phi7 = (__zext uint64_t)phi16;
				phi20 = phi_in26;
				break;
			}
		}
		phi4 = phi18;
		*anon8 = phi19;
		phi11 = phi16;
		*(uint64_t*)(phi10 + 48) = phi17 + 4;
		phi10 = phi20;
		dispatch13 = 0;
	}
	while (phi17 != 8);
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
			uint32_t phi_in11;
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
				phi_in11 = *anon10;
				phi12 = *anon9;
				anon14 = (uint32_t*)(phi8 - 4);
				phi_in13 = *anon14;
				*anon10 = *anon10;
				phi15 = *anon9;
			}
			else 
			{
				phi_in11 = *anon9;
				phi12 = *anon10;
				phi16 = *anon14;
			}
			if (*anon9 < *anon10 && *anon9 < *anon14 || *anon9 >= *anon10 && *anon10 < *anon14)
			{
				uint32_t phi_in17 = phi12;
				*anon10 = *anon14;
				*anon14 = phi_in17;
				phi_in13 = phi_in17;
				*anon10 = phi_in11;
				phi15 = *anon14;
			}
			if (*anon9 < *anon10 && *anon9 < *anon14 || *anon9 >= *anon10 && *anon10 < *anon14 || *anon9 >= *anon14 && *anon9 < *anon10)
			{
				*anon9 = phi15;
				phi16 = phi_in13;
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
			uint32_t phi24;
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
				phi24 = *anon25;
				phi26 = *anon21;
				*anon20 = *anon20;
			}
			else 
			{
				phi22 = *anon20;
				phi23 = *anon21;
				phi27 = *anon25;
			}
			if (*anon20 < *anon21 && *anon20 < *anon25 || *anon20 >= *anon21 && *anon21 < *anon25)
			{
				phi26 = phi22;
				phi24 = phi23;
				*anon21 = *anon25;
				*anon25 = phi24;
				*anon20 = *anon25;
			}
			if (*anon20 < *anon21 && *anon20 < *anon25 || *anon20 >= *anon21 && *anon21 < *anon25 || *anon20 >= *anon25 && *anon20 < *anon21)
			{
				phi27 = phi24;
				*anon21 = phi26;
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
