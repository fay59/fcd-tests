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
		uint32_t phi7;
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
			phi7 = *anon8;
			*phi1 = *phi1;
			phi9 = *anon4;
		}
		else 
		{
			phi5 = *anon4;
			phi_in6 = *phi1;
			phi10 = *anon8;
		}
		if (*anon4 >= *phi1 && *phi1 < *anon8 || *anon4 < *phi1 && *anon4 < *anon8)
		{
			uint32_t phi_in11 = phi5;
			*anon8 = phi_in6;
			*phi1 = *anon8;
			phi7 = *anon8;
			*phi1 = phi_in11;
			phi9 = *anon8;
		}
		if (*anon4 >= *phi1 && *phi1 < *anon8 || *anon4 < *phi1 && *anon4 < *anon8 || *anon4 >= *anon8 && *anon4 < *phi1)
		{
			phi10 = phi7;
			*anon4 = phi9;
			if (*anon4 > *phi1)
			{
				phi10 = *anon8;
			}
		}
		if (phi10 != 255)
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
	while (phi10 != 255);
	return;
}
void w(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	struct { uint8_t field0[4]; uint32_t field1; uint64_t field2; uint8_t field3[8]; uint32_t field4; uint32_t field5; uint8_t field6[48]; uint64_t field7; uint32_t field8; uint8_t field9[4]; uint64_t field10; uint64_t field11; uint32_t field12; uint8_t field13[8]; uint32_t field14; uint8_t field15[56]; uint64_t field16; } alloca1;
	uint32_t phi5;
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
	uint32_t phi_in4 = anon3;
	uint32_t anon6 = anon3 + 1;
	phi5 = anon6;
	uint64_t phi7 = arg3 & 0xffffffff;
	uint32_t phi8 = anon6;
	uint32_t phi9 = anon3;
	*(uint64_t*)(phi10 + 48) = 0;
	uint64_t anon11 = (uint64_t)&alloca1;
	phi10 = anon11;
	uint32_t dispatch12 = 0;
	do
	{
		uint32_t phi18;
		uint64_t phi19;
		uint32_t phi_in20;
		uint32_t phi_in21;
		uint64_t phi22;
		while (true)
		{
			uint32_t phi_in13;
			uint32_t phi_in14;
			uint32_t* anon15;
			uint32_t phi_in23;
			uint64_t phi24;
			uint64_t phi25;
			uint32_t phi26;
			uint64_t phi_in27;
			uint64_t phi_in28;
			uint32_t phi29;
			uint32_t phi30;
			uint32_t phi_in31;
			uint32_t phi32;
			uint64_t phi33;
			uint64_t phi34;
			uint32_t phi35;
			uint32_t phi36;
			uint64_t phi37;
			uint32_t phi40;
			uint32_t phi41;
			uint32_t phi42;
			uint32_t phi43;
			uint32_t phi_in44;
			uint32_t phi45;
			uint32_t phi_in46;
			uint32_t phi47;
			uint32_t phi48;
			uint64_t phi49;
			uint64_t phi_in50;
			uint64_t phi_in51;
			uint32_t phi_in52;
			uint32_t phi_in53;
			uint32_t phi_in54;
			uint32_t phi_in55;
			uint32_t phi_in56;
			uint32_t phi_in57;
			uint64_t phi_in58;
			uint64_t phi59;
			uint32_t phi60;
			uint32_t phi61;
			uint32_t phi62;
			uint32_t phi63;
			uint32_t phi64;
			uint64_t phi65;
			uint32_t phi66;
			uint32_t phi67;
			uint32_t phi68;
			uint32_t phi69;
			uint64_t phi70;
			uint32_t phi73;
			uint32_t phi74;
			uint32_t phi_in75;
			uint32_t phi76;
			uint32_t phi_in77;
			uint32_t phi78;
			uint64_t phi_in79;
			uint64_t phi_in80;
			uint64_t phi_in81;
			uint64_t phi82;
			uint32_t phi_in83;
			uint32_t phi84;
			uint32_t phi85;
			uint32_t phi86;
			uint32_t phi87;
			uint32_t phi88;
			uint64_t phi89;
			uint64_t phi90;
			uint64_t phi91;
			uint64_t phi_in92;
			uint64_t phi93;
			uint32_t phi_in94;
			uint32_t phi95;
			uint32_t phi96;
			uint32_t phi_in97;
			uint32_t phi98;
			uint32_t phi_in99;
			uint64_t phi100;
			uint64_t phi_in101;
			uint32_t phi104;
			uint32_t phi105;
			uint32_t phi106;
			uint32_t phi107;
			uint32_t phi109;
			uint32_t phi110;
			uint32_t phi111;
			uint32_t phi_in112;
			uint32_t phi113;
			uint32_t phi114;
			uint32_t phi115;
			uint32_t phi116;
			uint32_t phi117;
			uint32_t phi118;
			uint32_t phi119;
			uint32_t phi120;
			uint32_t phi121;
			uint32_t phi122;
			uint64_t phi123;
			uint32_t phi124;
			uint32_t phi125;
			uint32_t phi_in126;
			uint64_t phi_in127;
			uint64_t phi_in128;
			uint64_t phi_in129;
			uint64_t phi130;
			uint32_t phi131;
			uint32_t phi132;
			uint32_t phi133;
			uint32_t phi_in134;
			uint32_t phi135;
			uint32_t phi_in136;
			uint32_t phi137;
			uint32_t phi138;
			uint32_t phi139;
			uint32_t phi_in140;
			uint32_t phi_in141;
			uint32_t phi142;
			uint32_t phi143;
			uint32_t phi144;
			uint32_t phi145;
			uint32_t phi146;
			uint64_t phi147;
			uint32_t phi_in148;
			uint32_t phi_in149;
			uint64_t phi150;
			uint64_t phi151;
			uint64_t phi152;
			uint64_t phi153;
			uint32_t phi154;
			uint32_t phi155;
			uint32_t phi156;
			uint64_t phi157;
			uint32_t phi158;
			uint32_t phi159;
			uint32_t phi160;
			uint32_t phi161;
			uint32_t phi162;
			uint32_t phi163;
			uint32_t phi164;
			uint32_t phi_in165;
			uint32_t phi166;
			uint32_t phi_in167;
			uint32_t phi168;
			uint64_t phi169;
			uint32_t phi170;
			uint64_t phi171;
			uint64_t phi_in174;
			uint32_t phi_in175;
			uint32_t phi_in176;
			uint32_t phi177;
			uint32_t phi178;
			uint32_t phi179;
			uint32_t phi180;
			uint32_t phi181;
			uint64_t phi182;
			uint64_t phi183;
			uint32_t phi184;
			uint32_t phi_in185;
			uint32_t phi186;
			uint64_t phi_in187;
			uint64_t phi188;
			uint64_t phi189;
			uint32_t phi_in190;
			uint32_t phi191;
			uint32_t phi192;
			uint32_t phi_in193;
			uint32_t phi194;
			uint32_t phi195;
			uint32_t phi_in196;
			uint32_t phi197;
			uint32_t phi_in198;
			uint32_t phi199;
			uint32_t phi200;
			uint32_t phi201;
			uint32_t phi202;
			uint32_t phi203;
			uint32_t phi204;
			uint32_t phi205;
			uint32_t phi206;
			uint64_t phi207;
			uint32_t phi208;
			uint64_t phi209;
			uint64_t phi_in210;
			uint32_t phi211;
			uint32_t phi_in212;
			uint64_t phi213;
			uint64_t phi214;
			uint32_t phi_in215;
			uint32_t phi216;
			uint32_t phi217;
			uint32_t phi218;
			uint32_t phi219;
			uint32_t phi220;
			uint32_t phi221;
			uint32_t phi222;
			uint32_t phi223;
			uint64_t phi224;
			uint64_t phi225;
			uint64_t phi226;
			uint32_t phi227;
			uint32_t phi228;
			uint64_t phi_in231;
			uint32_t phi232;
			uint32_t phi233;
			uint32_t phi234;
			uint32_t phi235;
			uint32_t phi236;
			uint32_t phi237;
			uint32_t phi238;
			uint32_t phi_in239;
			uint32_t phi_in240;
			uint32_t phi241;
			uint64_t phi242;
			uint32_t phi_in243;
			uint32_t phi_in244;
			uint64_t phi245;
			uint64_t phi246;
			uint32_t phi_in373;
			uint32_t phi_in374;
			uint32_t phi_in375;
			uint32_t phi_in376;
			uint64_t phi_in377;
			uint32_t phi_in378;
			uint32_t phi_in379;
			uint64_t phi_in380;
			if (dispatch12 == 0)
			{
				phi_in13 = phi_in4;
				phi_in14 = phi5;
				int64_t anon16 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi10 + 48) + *(uint64_t*)(phi10 + 8) + 6301632);
				anon15 = (uint32_t*)((anon16 << 2) + 6300992);
				*anon15 = phi8;
				phi17 = *(uint64_t*)(phi10 + 48);
				phi_in4 = phi_in13;
				phi18 = phi_in14;
				phi19 = phi7 & 0xffffffff;
				phi_in20 = *anon15;
				phi_in21 = phi9;
				phi22 = phi10;
				if (phi9 < *anon15)
				{
					*(uint64_t*)(phi10 + 16) = anon16 * 12;
					*(uint32_t*)(phi10 + 40) = (uint32_t)phi7 + 5;
					phi_in23 = phi_in14;
					phi24 = (__zext uint64_t)phi_in13;
					*(uint32_t*)(phi25 + 68) = phi_in14;
					phi26 = phi_in13;
					phi_in27 = 0;
					phi_in28 = phi10;
				}
				else 
				{
					break;
				}
			}
			if (dispatch12 == 1 || dispatch12 == 0 && phi9 < *anon15)
			{
				phi29 = phi26;
				phi30 = phi_in14;
				*(uint64_t*)(phi25 + 56) = phi_in27;
				phi25 = phi_in28;
				phi_in31 = phi_in23;
				phi32 = phi_in13;
				phi33 = *(uint64_t*)(phi25 + 56);
				phi34 = phi24 & 0xffffffff;
				phi35 = *(uint32_t*)(phi25 + 68);
				phi26 = phi29;
				phi36 = phi30;
				phi37 = phi25;
			}
			int64_t anon39 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi25 + 56) + *(uint64_t*)(phi25 + 16) + 6301632);
			uint32_t* anon38 = (uint32_t*)((anon39 << 2) + 6300992);
			if (phi30 < *anon38 && (dispatch12 == 1 || dispatch12 == 0 && phi9 < *anon15))
			{
				*anon38 = *(uint32_t*)(phi25 + 4);
				*(uint64_t*)(phi25 + 32) = anon39 * 12;
				*(uint32_t*)(phi25 + 44) = (uint32_t)phi24 + 6;
				phi40 = phi29;
				phi41 = phi29;
				phi42 = phi29;
				phi43 = phi29;
				phi_in44 = phi29;
				phi45 = phi29;
				phi_in46 = phi29;
				phi47 = phi29;
				phi48 = phi29;
				phi49 = (__zext uint64_t)phi29;
				phi_in50 = 0;
				phi_in51 = phi25;
			}
			if (dispatch12 == 2 || dispatch12 == 1 && phi30 < *anon38 || dispatch12 == 0 && phi9 < *anon15 && phi30 < *anon38)
			{
				phi_in52 = phi41;
				phi_in53 = phi42;
				phi_in54 = phi43;
				phi_in55 = phi29;
				phi_in56 = phi47;
				phi_in57 = phi48;
				phi_in58 = phi49;
				*(uint64_t*)(phi59 + 72) = phi_in50;
				phi59 = phi_in51;
				phi60 = phi40;
				phi61 = phi_in52;
				phi62 = phi_in53;
				phi63 = phi_in54;
				phi64 = phi_in44;
				phi65 = *(uint64_t*)(phi59 + 72);
				phi66 = phi_in55;
				phi67 = phi_in46;
				phi68 = phi_in56;
				phi69 = phi_in57;
				phi70 = phi_in58 & 0xffffffff;
				phi_in51 = phi59;
			}
			int64_t anon72 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi59 + 72) + *(uint64_t*)(phi59 + 32) + 6301632);
			uint32_t* anon71 = (uint32_t*)((anon72 << 2) + 6300992);
			if (*(uint32_t*)(phi59 + 4) < *anon71 && (dispatch12 == 2 || dispatch12 == 1 && phi30 < *anon38 || dispatch12 == 0 && phi9 < *anon15 && phi30 < *anon38))
			{
				*anon71 = *(uint32_t*)(phi59 + 24);
				*(uint32_t*)(phi59 + 64) = (uint32_t)phi_in58 + 7;
				phi73 = phi_in52;
				phi74 = phi_in54;
				phi_in75 = phi_in44;
				phi76 = phi45;
				phi_in77 = phi_in55;
				phi78 = phi_in56;
				phi_in79 = phi59;
				phi_in80 = 0;
				phi_in81 = anon72 * 12;
				phi82 = phi_in58;
			}
			if (dispatch12 == 3 || dispatch12 == 2 && *(uint32_t*)(phi59 + 4) < *anon71 || dispatch12 == 1 && phi30 < *anon38 && *(uint32_t*)(phi59 + 4) < *anon71 || dispatch12 == 0 && phi9 < *anon15 && phi30 < *anon38 && *(uint32_t*)(phi59 + 4) < *anon71)
			{
				phi_in83 = phi40;
				phi84 = phi73;
				phi85 = phi74;
				phi86 = phi_in75;
				phi87 = phi76;
				phi88 = phi78;
				phi89 = phi_in79;
				phi90 = phi_in80;
				phi91 = phi_in81;
				phi_in92 = phi82;
				phi93 = phi91;
				phi_in94 = phi_in83;
				phi95 = phi_in53;
				phi96 = phi85;
				phi45 = phi87;
				phi66 = phi_in77;
				phi_in97 = phi_in46;
				phi98 = phi88;
				phi_in99 = phi_in57;
				phi100 = phi89;
				phi_in101 = phi_in92 & 0xffffffff;
			}
			int64_t anon103 = (__sext int64_t)*(uint32_t*)(phi90 + phi91 + 6301632);
			uint32_t* anon102 = (uint32_t*)((anon103 << 2) + 6300992);
			if (*(uint32_t*)(phi89 + 24) < *anon102 && (dispatch12 == 3 || dispatch12 == 2 && *(uint32_t*)(phi59 + 4) < *anon71 || dispatch12 == 1 && phi30 < *anon38 && *(uint32_t*)(phi59 + 4) < *anon71 || dispatch12 == 0 && phi9 < *anon15 && phi30 < *anon38 && *(uint32_t*)(phi59 + 4) < *anon71))
			{
				*anon102 = *(uint32_t*)(phi89 + 28);
				phi104 = phi_in83;
				phi105 = phi84;
				phi106 = phi_in53;
				uint32_t anon108 = (uint32_t)phi_in92 + 8;
				phi107 = anon108;
				phi109 = anon108;
				phi110 = phi86;
				phi111 = anon108;
				phi_in112 = anon108;
				phi113 = phi_in77;
				phi114 = anon108;
				phi115 = anon108;
				phi116 = anon108;
				phi117 = phi_in46;
				phi118 = anon108;
				phi119 = anon108;
				phi120 = anon108;
				phi121 = anon108;
				phi122 = phi_in57;
				phi123 = phi91;
				phi124 = anon108;
				phi125 = anon108;
				phi_in126 = anon108;
				phi_in127 = phi89;
				phi_in128 = 0;
				phi_in129 = anon103 * 12;
				phi130 = phi_in92;
			}
			if (dispatch12 == 4 || dispatch12 == 3 && *(uint32_t*)(phi89 + 24) < *anon102 || dispatch12 == 2 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 || dispatch12 == 1 && phi30 < *anon38 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 || dispatch12 == 0 && phi9 < *anon15 && phi30 < *anon38 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102)
			{
				phi131 = phi105;
				phi132 = phi106;
				phi133 = phi107;
				phi_in134 = phi85;
				phi135 = phi109;
				phi_in136 = phi110;
				phi137 = phi87;
				phi138 = phi111;
				phi139 = phi114;
				phi_in140 = phi116;
				phi_in141 = phi117;
				phi142 = phi118;
				phi143 = phi119;
				phi144 = phi88;
				phi145 = phi120;
				phi146 = phi121;
				phi147 = phi123;
				phi_in148 = phi124;
				phi_in149 = phi125;
				phi150 = phi_in127;
				phi151 = phi_in128;
				phi152 = phi_in129;
				phi153 = phi152;
				phi154 = phi131;
				phi_in53 = phi132;
				phi155 = phi133;
				phi85 = phi_in134;
				phi86 = phi_in136;
				phi156 = phi137;
				phi157 = phi151;
				phi158 = phi138;
				phi159 = phi_in112;
				phi160 = phi113;
				phi161 = phi139;
				phi162 = phi_in140;
				phi163 = phi_in141;
				phi118 = phi142;
				phi164 = phi143;
				phi_in165 = phi144;
				phi166 = phi145;
				phi_in167 = phi146;
				phi168 = phi122;
				phi169 = phi147;
				phi124 = phi_in148;
				phi125 = phi_in149;
				phi170 = phi_in126;
				phi171 = phi150;
				phi_in92 = phi130;
			}
			int64_t anon173 = (__sext int64_t)*(uint32_t*)(phi151 + phi152 + 6301632);
			uint32_t* anon172 = (uint32_t*)((anon173 << 2) + 6300992);
			if (*(uint32_t*)(phi150 + 28) < *anon172 && (dispatch12 == 4 || dispatch12 == 3 && *(uint32_t*)(phi89 + 24) < *anon102 || dispatch12 == 2 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 || dispatch12 == 1 && phi30 < *anon38 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 || dispatch12 == 0 && phi9 < *anon15 && phi30 < *anon38 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102))
			{
				*anon172 = *(uint32_t*)(phi150 + 40);
				*(uint32_t*)(phi150 + 120) = (uint32_t)phi130 + 9;
				phi_in174 = 0;
				phi_in175 = phi104;
				phi_in176 = phi_in134;
				phi177 = phi135;
				phi178 = phi_in136;
				phi179 = phi_in112;
				phi180 = phi115;
				phi181 = phi_in141;
				phi182 = phi151;
				phi183 = phi152;
				phi184 = phi_in148;
				phi_in185 = phi_in149;
				phi186 = phi_in126;
				phi_in187 = phi150;
				phi188 = phi130 & 0xffffffff;
			}
			if (dispatch12 == 5 || dispatch12 == 4 && *(uint32_t*)(phi150 + 28) < *anon172 || dispatch12 == 3 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 || dispatch12 == 2 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 || dispatch12 == 1 && phi30 < *anon38 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 || dispatch12 == 0 && phi9 < *anon15 && phi30 < *anon38 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172)
			{
				phi189 = phi_in174;
				phi_in190 = phi131;
				phi191 = phi132;
				phi192 = phi133;
				phi_in134 = phi_in176;
				phi_in193 = phi177;
				phi194 = phi178;
				phi195 = phi137;
				phi_in196 = phi138;
				phi197 = phi179;
				phi_in198 = phi139;
				phi199 = phi180;
				phi200 = phi_in140;
				phi201 = phi181;
				phi202 = phi142;
				phi203 = phi143;
				phi204 = phi144;
				phi205 = phi145;
				phi206 = phi146;
				phi207 = phi182;
				phi208 = phi122;
				phi209 = phi147;
				phi_in210 = phi183;
				phi211 = phi184;
				phi_in212 = phi186;
				phi213 = phi_in187;
				phi214 = phi188;
				phi131 = phi_in190;
				phi_in215 = phi191;
				phi133 = phi192;
				phi177 = phi_in193;
				phi216 = phi194;
				phi137 = phi195;
				phi217 = phi_in196;
				phi218 = phi197;
				phi219 = phi_in198;
				phi220 = phi199;
				phi221 = phi202;
				phi143 = phi203;
				phi222 = phi205;
				phi223 = phi206;
				phi224 = phi207;
				phi225 = phi209;
				phi226 = phi_in210;
				phi227 = phi211;
				phi228 = phi_in212;
				phi_in187 = phi213;
				phi188 = phi214;
			}
			int64_t anon230 = (__sext int64_t)*(uint32_t*)(phi189 + anon173 * 12 + 6301632);
			uint32_t* anon229 = (uint32_t*)((anon230 << 2) + 6300992);
			if (*(uint32_t*)(phi213 + 40) < *anon229 && (dispatch12 == 5 || dispatch12 == 4 && *(uint32_t*)(phi150 + 28) < *anon172 || dispatch12 == 3 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 || dispatch12 == 2 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 || dispatch12 == 1 && phi30 < *anon38 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 || dispatch12 == 0 && phi9 < *anon15 && phi30 < *anon38 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172))
			{
				*anon229 = *(uint32_t*)(phi213 + 44);
				phi_in231 = 0;
				phi232 = phi_in175;
				phi233 = phi_in190;
				phi234 = phi_in134;
				phi235 = phi_in196;
				phi236 = phi113;
				phi237 = phi_in198;
				phi238 = phi200;
				phi_in239 = phi201;
				phi_in240 = phi204;
				phi241 = phi208;
				phi242 = phi_in210;
				phi_in243 = phi_in185;
				phi_in244 = phi_in212;
				phi245 = phi213;
			}
			if (dispatch12 == 6 || dispatch12 == 5 && *(uint32_t*)(phi213 + 40) < *anon229 || dispatch12 == 4 && *(uint32_t*)(phi150 + 28) < *anon172 && *(uint32_t*)(phi213 + 40) < *anon229 || dispatch12 == 3 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 && *(uint32_t*)(phi213 + 40) < *anon229 || dispatch12 == 2 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 && *(uint32_t*)(phi213 + 40) < *anon229 || dispatch12 == 1 && phi30 < *anon38 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 && *(uint32_t*)(phi213 + 40) < *anon229 || dispatch12 == 0 && phi9 < *anon15 && phi30 < *anon38 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 && *(uint32_t*)(phi213 + 40) < *anon229)
			{
				uint64_t phi263;
				phi246 = phi_in231;
				uint32_t phi_in247 = phi232;
				*(uint32_t*)(phi248 + 88) = phi233;
				uint32_t phi249 = phi191;
				uint32_t phi_in250 = phi192;
				uint32_t phi_in251 = phi234;
				uint32_t phi_in252 = phi195;
				uint32_t phi_in253 = phi197;
				uint32_t phi254 = phi236;
				*(uint32_t*)(phi248 + 124) = phi237;
				int64_t anon258 = (__sext int64_t)*(uint32_t*)(phi246 + anon230 * 12 + 6301632);
				int64_t anon257 = anon258 * 12;
				int64_t anon256 = (__sext int64_t)*(uint32_t*)(anon257 + 6301636);
				uint32_t* anon255 = (uint32_t*)((anon256 << 2) + 6300992);
				*anon255 = phi238;
				uint32_t phi_in259 = phi202;
				uint32_t phi_in260 = phi203;
				uint32_t phi_in261 = phi205;
				uint32_t phi_in262 = phi206;
				*(uint64_t*)(phi263 + 88) = phi207;
				uint32_t phi_in264 = phi241;
				*(uint64_t*)(phi248 + 104) = phi209;
				*(uint64_t*)(phi248 + 112) = phi242;
				uint32_t phi_in265 = phi211;
				uint32_t phi266 = phi_in244;
				uint64_t phi248 = phi245;
				uint64_t phi_in267 = phi214;
				uint32_t phi268 = phi_in247;
				uint32_t phi269 = *(uint32_t*)(phi248 + 88);
				uint32_t phi270 = phi249;
				uint32_t phi271 = phi_in250;
				uint32_t phi272 = phi_in251;
				uint32_t phi_in273 = phi_in193;
				uint32_t phi274 = phi_in252;
				uint32_t phi275 = phi235;
				phi197 = phi_in253;
				uint32_t phi276 = phi254;
				phi237 = *(uint32_t*)(phi248 + 124);
				phi199 = phi199;
				phi_in140 = *anon255;
				uint32_t phi277 = phi_in239;
				uint32_t phi_in278 = phi_in259;
				uint32_t phi279 = phi_in260;
				uint32_t phi_in280 = phi_in240;
				uint32_t phi_in281 = phi_in261;
				uint32_t phi282 = phi_in262;
				phi224 = *(uint64_t*)(phi263 + 88);
				uint32_t phi_in283 = phi_in264;
				uint64_t phi284 = *(uint64_t*)(phi248 + 104);
				phi_in210 = *(uint64_t*)(phi248 + 112);
				phi227 = phi_in265;
				phi_in185 = phi_in243;
				phi245 = phi248;
				uint64_t phi285 = phi_in267;
				uint32_t* anon286 = (uint32_t*)((anon258 << 2) + 6300992);
				if (*(uint32_t*)(phi248 + 44) < *anon286)
				{
					*anon286 = *(uint32_t*)(phi248 + 64);
					uint32_t phi287 = phi_in247;
					*(uint32_t*)(phi248 + 112) = phi_in250;
					uint32_t phi288 = phi_in251;
					uint32_t phi289 = phi_in193;
					uint32_t phi290 = phi194;
					uint32_t phi_in291 = phi_in252;
					uint32_t phi_in292 = phi235;
					uint32_t phi293 = phi_in253;
					uint32_t phi294 = phi254;
					uint32_t phi295 = *(uint32_t*)(phi248 + 124);
					uint32_t phi_in296 = phi199;
					phi_in140 = *anon255;
					uint32_t phi_in297 = phi_in239;
					uint32_t phi_in298 = phi_in259;
					uint32_t phi_in299 = phi_in260;
					phi_in280 = phi_in240;
					uint32_t phi_in300 = phi_in261;
					uint32_t phi301 = phi_in262;
					uint64_t phi302 = *(uint64_t*)(phi263 + 88);
					uint32_t phi303 = phi_in264;
					*(uint64_t*)(phi248 + 96) = *(uint64_t*)(phi248 + 104);
					uint64_t phi304 = *(uint64_t*)(phi248 + 112);
					uint32_t phi_in305 = phi_in265;
					uint32_t phi306 = phi_in243;
					uint32_t phi307 = phi266;
					uint64_t phi308 = phi_in267;
					if (*(uint32_t*)(phi248 + 64) < *anon255)
					{
						uint32_t phi309 = phi_in247;
						uint32_t phi310 = *(uint32_t*)(phi248 + 88);
						uint32_t phi_in311 = phi249;
						uint32_t phi312 = phi_in250;
						uint32_t phi313 = phi_in251;
						uint32_t phi_in314 = phi_in193;
						*(uint32_t*)(phi263 + 96) = phi194;
						uint32_t phi_in315 = phi_in252;
						uint64_t phi316 = phi248;
						uint32_t phi317 = phi_in253;
						*(uint64_t*)(phi263 + 80) = anon256;
						uint32_t phi318 = phi_in239;
						uint32_t phi319 = phi_in240;
						uint32_t phi_in320 = phi_in264;
						uint64_t phi321 = *(uint64_t*)(phi248 + 104);
						uint64_t phi322 = *(uint64_t*)(phi248 + 112);
						uint64_t phi323 = phi_in267;
						if (phi199 < *anon255)
						{
							*(uint32_t*)(phi248 + 96) = phi254;
							*(uint64_t*)(phi248 + 88) = *(uint64_t*)(phi263 + 88);
							*(uint64_t*)(phi248 + 80) = anon256;
							w(4197873, anon11, (__sext int64_t)*anon255, (__zext uint64_t)*anon255);
							phi309 = *(uint32_t*)(arg1 - 96);
							phi310 = *(uint32_t*)(arg1 - 96);
							phi_in311 = *(uint32_t*)(arg1 - 96);
							phi312 = *(uint32_t*)(arg1 - 68);
							phi313 = *(uint32_t*)(arg1 - 96);
							phi_in314 = *(uint32_t*)(arg1 - 68);
							*(uint32_t*)(phi263 + 96) = *(uint32_t*)(arg1 - 96);
							phi_in315 = *(uint32_t*)(arg1 - 96);
							phi235 = *(uint32_t*)(arg1 - 68);
							phi316 = anon11;
							phi317 = *(uint32_t*)(arg1 - 68);
							*(uint64_t*)(phi263 + 80) = *(uint64_t*)(arg1 - 112);
							phi254 = *(uint32_t*)(arg1 - 96);
							phi318 = *(uint32_t*)(arg1 - 96);
							phi319 = *(uint32_t*)(arg1 - 96);
							*(uint64_t*)(phi263 + 88) = *(uint64_t*)(arg1 - 104);
							phi_in320 = *(uint32_t*)(arg1 - 96);
							phi321 = *(uint64_t*)(arg1 - 88);
							phi322 = *(uint64_t*)(arg1 - 80);
							phi323 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
						}
						uint32_t phi_in324 = phi309;
						uint32_t phi325 = phi312;
						uint32_t phi326 = phi313;
						uint32_t phi327 = *(uint32_t*)(phi263 + 96);
						*(uint32_t*)(phi263 + 124) = phi235;
						phi263 = phi316;
						uint32_t phi_in328 = phi254;
						uint32_t phi_in329 = phi318;
						uint32_t phi330 = phi319;
						*(uint64_t*)(phi263 + 104) = phi321;
						uint64_t phi331 = phi322;
						uint64_t phi332 = phi323;
						uint32_t phi333 = phi_in324;
						uint32_t phi334 = phi_in311;
						uint32_t phi335 = phi_in314;
						uint32_t phi_in336 = phi_in315;
						uint64_t phi337 = *(uint64_t*)(phi263 + 80);
						phi294 = phi_in328;
						uint32_t phi_in338 = phi_in329;
						uint64_t phi339 = *(uint64_t*)(phi263 + 88);
						*(uint64_t*)(phi263 + 96) = *(uint64_t*)(phi263 + 104);
						int64_t anon340 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi263 + 80) * 12 + 6301636);
						if (phi317 < *(uint32_t*)((anon340 << 2) + 6300992))
						{
							*(uint64_t*)(phi263 + 112) = phi331;
							*(uint32_t*)(phi263 + 96) = phi327;
							w(4197793, anon11, anon340, (__zext uint64_t)*(uint32_t*)(phi263 + 120));
							phi333 = *(uint32_t*)(arg1 - 96);
							phi310 = *(uint32_t*)(arg1 - 96);
							phi334 = *(uint32_t*)(arg1 - 96);
							phi325 = alloca1.field14;
							phi326 = *(uint32_t*)(arg1 - 96);
							phi263 = anon11;
							phi335 = alloca1.field14;
							phi327 = *(uint32_t*)(arg1 - 96);
							phi_in336 = *(uint32_t*)(arg1 - 96);
							phi337 = *(uint64_t*)(arg1 - 112);
							phi294 = *(uint32_t*)(arg1 - 96);
							phi_in338 = *(uint32_t*)(arg1 - 96);
							phi330 = *(uint32_t*)(arg1 - 96);
							phi339 = *(uint64_t*)(arg1 - 104);
							phi_in320 = *(uint32_t*)(arg1 - 96);
							*(uint64_t*)(phi263 + 96) = *(uint64_t*)(arg1 - 88);
							phi331 = *(uint64_t*)(arg1 - 80);
							phi332 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
						}
						uint32_t phi_in341 = phi333;
						uint32_t phi_in342 = phi310;
						phi249 = phi334;
						uint32_t phi_in343 = phi325;
						*(uint32_t*)(phi263 + 88) = phi326;
						*(uint32_t*)(phi263 + 112) = phi335;
						uint32_t phi_in344 = phi327;
						phi_in280 = phi330;
						*(uint64_t*)(phi263 + 80) = phi339;
						*(uint64_t*)(phi263 + 104) = phi331;
						uint64_t phi_in345 = phi332;
						phi287 = phi_in341;
						*(uint32_t*)(phi248 + 88) = phi_in342;
						*(uint32_t*)(phi248 + 112) = phi_in343;
						phi248 = phi263;
						phi288 = *(uint32_t*)(phi263 + 88);
						phi289 = *(uint32_t*)(phi263 + 112);
						phi290 = phi_in344;
						phi_in291 = phi_in336;
						phi_in292 = *(uint32_t*)(phi263 + 112);
						phi293 = *(uint32_t*)(phi263 + 112);
						phi295 = *(uint32_t*)(phi263 + 112);
						phi_in296 = *(uint32_t*)(phi263 + 112);
						phi_in140 = *(uint32_t*)(phi263 + 112);
						phi_in297 = phi_in338;
						phi_in298 = *(uint32_t*)(phi263 + 112);
						phi_in299 = *(uint32_t*)(phi263 + 112);
						phi_in300 = *(uint32_t*)(phi263 + 112);
						phi301 = *(uint32_t*)(phi263 + 112);
						phi302 = *(uint64_t*)(phi263 + 80);
						phi303 = phi_in320;
						*(uint64_t*)(phi248 + 96) = *(uint64_t*)(phi263 + 96);
						phi304 = *(uint64_t*)(phi263 + 104);
						phi_in305 = *(uint32_t*)(phi263 + 112);
						phi306 = *(uint32_t*)(phi263 + 112);
						phi307 = *(uint32_t*)(phi263 + 112);
						phi308 = phi_in345;
						int64_t anon346 = (__sext int64_t)*(uint32_t*)(phi337 * 12 + 6301640);
						if (*(uint32_t*)(phi263 + 112) < *(uint32_t*)((anon346 << 2) + 6300992))
						{
							w(4197395, anon11, anon346, (__zext uint64_t)*(uint32_t*)(phi263 + 120));
							phi287 = *(uint32_t*)(arg1 - 104);
							*(uint32_t*)(phi248 + 88) = *(uint32_t*)(arg1 - 104);
							phi249 = *(uint32_t*)(arg1 - 104);
							*(uint32_t*)(phi248 + 112) = *(uint32_t*)(arg1 - 80);
							phi248 = anon11;
							phi288 = *(uint32_t*)(arg1 - 104);
							phi289 = *(uint32_t*)(arg1 - 80);
							phi290 = *(uint32_t*)(arg1 - 104);
							phi_in291 = *(uint32_t*)(arg1 - 104);
							phi_in292 = *(uint32_t*)(arg1 - 80);
							phi293 = *(uint32_t*)(arg1 - 80);
							phi294 = *(uint32_t*)(arg1 - 104);
							phi295 = *(uint32_t*)(arg1 - 80);
							phi_in296 = *(uint32_t*)(arg1 - 80);
							phi_in140 = *(uint32_t*)(arg1 - 80);
							phi_in297 = *(uint32_t*)(arg1 - 104);
							phi_in298 = *(uint32_t*)(arg1 - 80);
							phi_in299 = *(uint32_t*)(arg1 - 80);
							phi_in280 = *(uint32_t*)(arg1 - 104);
							phi_in300 = *(uint32_t*)(arg1 - 80);
							phi301 = *(uint32_t*)(arg1 - 80);
							phi302 = *(uint64_t*)(arg1 - 112);
							phi303 = *(uint32_t*)(arg1 - 104);
							*(uint64_t*)(phi248 + 96) = *(uint64_t*)(arg1 - 96);
							phi304 = *(uint64_t*)(arg1 - 88);
							phi_in305 = *(uint32_t*)(arg1 - 80);
							phi306 = *(uint32_t*)(arg1 - 80);
							phi307 = *(uint32_t*)(arg1 - 80);
							phi308 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
						}
					}
					uint32_t phi_in347 = phi287;
					uint32_t phi348 = *(uint32_t*)(phi248 + 88);
					uint32_t phi_in349 = phi249;
					int64_t anon351 = (__sext int64_t)*(uint32_t*)(anon257 + 6301640);
					uint32_t* anon350 = (uint32_t*)((anon351 << 2) + 6300992);
					*anon350 = *(uint32_t*)(phi248 + 112);
					uint32_t phi_in352 = phi288;
					uint32_t phi_in353 = phi289;
					phi194 = phi290;
					phi274 = phi_in291;
					uint32_t phi_in354 = phi293;
					uint32_t phi_in355 = phi294;
					phi237 = phi295;
					phi282 = phi301;
					*(uint64_t*)(phi248 + 80) = phi302;
					uint32_t phi356 = phi303;
					*(uint64_t*)(phi248 + 104) = phi304;
					phi_in185 = phi306;
					phi266 = phi307;
					uint64_t phi_in357 = phi308;
					phi268 = phi_in347;
					phi269 = phi348;
					phi270 = phi_in349;
					phi271 = *anon350;
					phi272 = phi_in352;
					phi_in273 = phi_in353;
					phi275 = phi_in292;
					phi197 = phi_in354;
					phi276 = phi_in355;
					phi199 = phi_in296;
					phi277 = phi_in297;
					phi_in278 = phi_in298;
					phi279 = phi_in299;
					phi_in281 = phi_in300;
					phi224 = *(uint64_t*)(phi248 + 80);
					phi_in283 = phi356;
					phi284 = *(uint64_t*)(phi248 + 96);
					phi_in210 = *(uint64_t*)(phi248 + 104);
					phi227 = phi_in305;
					phi245 = phi248;
					phi285 = phi_in357;
					if (*(uint32_t*)(phi248 + 64) < *anon350)
					{
						uint32_t phi358 = phi_in347;
						uint32_t phi359 = phi_in349;
						uint32_t phi360 = *anon350;
						uint32_t phi361 = phi_in352;
						uint32_t phi362 = phi_in355;
						uint32_t phi363 = phi_in297;
						uint32_t phi364 = phi_in280;
						*(uint64_t*)(phi365 + 80) = *(uint64_t*)(phi248 + 80);
						*(uint64_t*)(phi365 + 96) = *(uint64_t*)(phi248 + 96);
						*(uint64_t*)(phi365 + 104) = *(uint64_t*)(phi248 + 104);
						uint64_t phi365 = phi248;
						uint64_t phi366 = phi_in357;
						int64_t anon368 = anon351 * 12;
						int64_t anon367 = (__sext int64_t)*(uint32_t*)(anon368 + 6301636);
						if (*anon350 < *(uint32_t*)((anon367 << 2) + 6300992))
						{
							*(uint32_t*)(phi248 + 112) = *anon350;
							*(uint32_t*)(phi248 + 88) = phi348;
							w(4197948, anon11, anon367, (__zext uint64_t)*(uint32_t*)(phi248 + 120));
							phi358 = *(uint32_t*)(arg1 - 104);
							phi348 = *(uint32_t*)(arg1 - 104);
							phi359 = *(uint32_t*)(arg1 - 104);
							phi360 = *(uint32_t*)(arg1 - 80);
							phi361 = *(uint32_t*)(arg1 - 104);
							phi194 = *(uint32_t*)(arg1 - 104);
							phi274 = *(uint32_t*)(arg1 - 104);
							phi362 = *(uint32_t*)(arg1 - 104);
							phi363 = *(uint32_t*)(arg1 - 104);
							phi364 = *(uint32_t*)(arg1 - 104);
							*(uint64_t*)(phi365 + 80) = *(uint64_t*)(arg1 - 112);
							phi356 = *(uint32_t*)(arg1 - 104);
							*(uint64_t*)(phi365 + 96) = *(uint64_t*)(arg1 - 96);
							*(uint64_t*)(phi365 + 104) = *(uint64_t*)(arg1 - 88);
							phi365 = anon11;
							phi366 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
						}
						*(uint32_t*)(phi365 + 88) = phi358;
						phi269 = phi348;
						phi270 = phi359;
						phi_in185 = phi360;
						phi272 = phi361;
						phi276 = phi362;
						uint32_t phi_in369 = phi363;
						phi_in280 = phi364;
						phi_in283 = phi356;
						phi_in210 = *(uint64_t*)(phi365 + 104);
						phi285 = phi366;
						phi268 = *(uint32_t*)(phi365 + 88);
						phi271 = phi_in185;
						phi_in273 = phi_in185;
						phi275 = phi_in185;
						phi197 = phi_in185;
						phi237 = phi_in185;
						phi199 = phi_in185;
						phi_in140 = phi_in185;
						phi277 = phi_in369;
						phi_in278 = phi_in185;
						phi279 = phi_in185;
						phi_in281 = phi_in185;
						phi282 = phi_in185;
						phi224 = *(uint64_t*)(phi365 + 80);
						phi284 = *(uint64_t*)(phi365 + 96);
						phi227 = phi_in185;
						phi266 = phi_in185;
						phi245 = phi365;
						int64_t anon370 = (__sext int64_t)*(uint32_t*)(anon368 + 6301640);
						if (phi_in185 < *(uint32_t*)((anon370 << 2) + 6300992))
						{
							*(uint32_t*)(phi365 + 112) = phi_in185;
							*(uint64_t*)(phi365 + 104) = phi_in210;
							w(4197231, anon11, anon370, (__zext uint64_t)*(uint32_t*)(phi365 + 120));
							phi268 = alloca1.field8;
							phi269 = alloca1.field8;
							phi270 = alloca1.field8;
							phi271 = alloca1.field12;
							phi272 = alloca1.field8;
							phi_in273 = alloca1.field12;
							phi194 = alloca1.field8;
							phi274 = alloca1.field8;
							phi275 = alloca1.field12;
							phi197 = alloca1.field12;
							phi276 = alloca1.field8;
							phi237 = alloca1.field12;
							phi199 = alloca1.field12;
							phi_in140 = alloca1.field12;
							phi277 = alloca1.field8;
							phi_in278 = alloca1.field12;
							phi279 = alloca1.field12;
							phi_in280 = alloca1.field8;
							phi_in281 = alloca1.field12;
							phi282 = alloca1.field12;
							phi224 = alloca1.field7;
							phi_in283 = alloca1.field8;
							phi284 = alloca1.field10;
							phi_in210 = alloca1.field11;
							phi227 = alloca1.field12;
							phi_in185 = alloca1.field12;
							phi266 = alloca1.field12;
							phi245 = anon11;
							phi285 = (__zext uint64_t)alloca1.field8;
						}
					}
				}
				phi232 = phi268;
				phi233 = phi269;
				phi_in215 = phi270;
				phi192 = phi271;
				phi234 = phi272;
				phi195 = phi274;
				phi235 = phi275;
				phi236 = phi276;
				phi_in239 = phi277;
				phi203 = phi279;
				phi206 = phi282;
				phi208 = phi_in283;
				phi209 = phi284;
				phi226 = phi_in210;
				phi_in244 = phi266;
				phi214 = phi285;
				phi_in175 = phi232;
				phi131 = phi233;
				phi133 = phi192;
				phi_in134 = phi234;
				phi177 = phi_in273;
				phi216 = phi194;
				phi137 = phi195;
				phi217 = phi235;
				phi218 = phi197;
				phi113 = phi236;
				phi219 = phi237;
				phi220 = phi199;
				phi200 = phi_in140;
				phi201 = phi_in239;
				phi221 = phi_in278;
				phi143 = phi203;
				phi204 = phi_in280;
				phi222 = phi_in281;
				phi223 = phi206;
				phi225 = phi209;
				phi_in185 = phi_in185;
				phi228 = phi_in244;
				phi_in187 = phi245;
				phi188 = phi214;
				phi_in231 = phi246 + 4;
				phi191 = phi_in215;
				phi_in193 = phi_in273;
				phi238 = phi_in140;
				phi202 = phi_in278;
				phi_in240 = phi_in280;
				phi205 = phi_in281;
				phi207 = phi224;
				phi241 = phi208;
				phi242 = phi226;
				phi211 = phi227;
				phi_in243 = phi_in185;
				dispatch12 = 6;
			}
			if (*(uint32_t*)(phi213 + 40) >= *anon229 && dispatch12 == 5 || *(uint32_t*)(phi213 + 40) >= *anon229 && dispatch12 == 4 && *(uint32_t*)(phi150 + 28) < *anon172 || *(uint32_t*)(phi213 + 40) >= *anon229 && dispatch12 == 3 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 || *(uint32_t*)(phi213 + 40) >= *anon229 && dispatch12 == 2 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 || *(uint32_t*)(phi213 + 40) >= *anon229 && dispatch12 == 1 && phi30 < *anon38 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 || *(uint32_t*)(phi213 + 40) >= *anon229 && dispatch12 == 0 && phi9 < *anon15 && phi30 < *anon38 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 || dispatch12 == 6 && phi246 == 8 || dispatch12 == 5 && *(uint32_t*)(phi213 + 40) < *anon229 && phi246 == 8 || dispatch12 == 4 && *(uint32_t*)(phi150 + 28) < *anon172 && *(uint32_t*)(phi213 + 40) < *anon229 && phi246 == 8 || dispatch12 == 3 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 && *(uint32_t*)(phi213 + 40) < *anon229 && phi246 == 8 || dispatch12 == 2 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 && *(uint32_t*)(phi213 + 40) < *anon229 && phi246 == 8 || dispatch12 == 1 && phi30 < *anon38 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 && *(uint32_t*)(phi213 + 40) < *anon229 && phi246 == 8 || dispatch12 == 0 && phi9 < *anon15 && phi30 < *anon38 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 && *(uint32_t*)(phi213 + 40) < *anon229 && phi246 == 8)
			{
				phi_in53 = phi_in215;
				phi135 = phi177;
				phi86 = phi216;
				phi138 = phi217;
				phi179 = phi218;
				phi139 = phi219;
				phi180 = phi220;
				phi_in140 = phi200;
				phi181 = phi201;
				phi142 = phi221;
				phi144 = phi204;
				phi145 = phi222;
				phi146 = phi223;
				phi182 = phi224;
				phi122 = phi208;
				phi147 = phi225;
				uint64_t phi_in371 = phi226;
				phi184 = phi227;
				phi186 = phi228;
				phi_in92 = phi188;
				phi153 = phi_in371;
				phi104 = phi_in175;
				phi154 = phi131;
				phi155 = phi133;
				phi85 = phi_in134;
				phi156 = phi137;
				phi157 = phi182;
				phi158 = phi138;
				phi159 = phi179;
				phi160 = phi113;
				phi161 = phi139;
				phi115 = phi180;
				phi162 = phi_in140;
				phi163 = phi181;
				phi118 = phi142;
				phi164 = phi143;
				phi_in165 = phi144;
				phi166 = phi145;
				phi_in167 = phi146;
				phi168 = phi122;
				phi169 = phi147;
				phi124 = phi184;
				phi125 = phi_in185;
				phi170 = phi186;
				phi171 = phi_in187;
				phi_in174 = phi189 + 4;
				phi132 = phi_in53;
				phi_in176 = phi_in134;
				phi177 = phi135;
				phi178 = phi86;
				phi183 = phi_in371;
				phi188 = phi_in92;
				dispatch12 = 5;
			}
			if (*(uint32_t*)(phi150 + 28) >= *anon172 && dispatch12 == 4 || *(uint32_t*)(phi150 + 28) >= *anon172 && dispatch12 == 3 && *(uint32_t*)(phi89 + 24) < *anon102 || *(uint32_t*)(phi150 + 28) >= *anon172 && dispatch12 == 2 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 || *(uint32_t*)(phi150 + 28) >= *anon172 && dispatch12 == 1 && phi30 < *anon38 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 || *(uint32_t*)(phi150 + 28) >= *anon172 && dispatch12 == 0 && phi9 < *anon15 && phi30 < *anon38 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 || *(uint32_t*)(phi213 + 40) >= *anon229 && dispatch12 == 5 && phi189 == 8 || *(uint32_t*)(phi213 + 40) >= *anon229 && dispatch12 == 4 && *(uint32_t*)(phi150 + 28) < *anon172 && phi189 == 8 || *(uint32_t*)(phi213 + 40) >= *anon229 && dispatch12 == 3 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 && phi189 == 8 || *(uint32_t*)(phi213 + 40) >= *anon229 && dispatch12 == 2 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 && phi189 == 8 || *(uint32_t*)(phi213 + 40) >= *anon229 && dispatch12 == 1 && phi30 < *anon38 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 && phi189 == 8 || *(uint32_t*)(phi213 + 40) >= *anon229 && dispatch12 == 0 && phi9 < *anon15 && phi30 < *anon38 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 && phi189 == 8 || dispatch12 == 6 && phi246 == 8 && phi189 == 8 || dispatch12 == 5 && *(uint32_t*)(phi213 + 40) < *anon229 && phi246 == 8 && phi189 == 8 || dispatch12 == 4 && *(uint32_t*)(phi150 + 28) < *anon172 && *(uint32_t*)(phi213 + 40) < *anon229 && phi246 == 8 && phi189 == 8 || dispatch12 == 3 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 && *(uint32_t*)(phi213 + 40) < *anon229 && phi246 == 8 && phi189 == 8 || dispatch12 == 2 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 && *(uint32_t*)(phi213 + 40) < *anon229 && phi246 == 8 && phi189 == 8 || dispatch12 == 1 && phi30 < *anon38 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 && *(uint32_t*)(phi213 + 40) < *anon229 && phi246 == 8 && phi189 == 8 || dispatch12 == 0 && phi9 < *anon15 && phi30 < *anon38 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 && *(uint32_t*)(phi213 + 40) < *anon229 && phi246 == 8 && phi189 == 8)
			{
				phi_in129 = phi153;
				phi105 = phi154;
				phi107 = phi155;
				phi109 = phi135;
				phi87 = phi156;
				phi111 = phi158;
				phi_in112 = phi159;
				phi113 = phi160;
				phi114 = phi161;
				uint32_t phi_in372 = phi115;
				phi116 = phi162;
				phi117 = phi163;
				phi119 = phi164;
				phi98 = phi_in165;
				phi120 = phi166;
				phi122 = phi168;
				phi123 = phi169;
				phi_in126 = phi170;
				phi_in127 = phi171;
				phi93 = phi123;
				phi_in94 = phi104;
				phi84 = phi105;
				phi95 = phi_in53;
				phi96 = phi85;
				phi45 = phi87;
				phi66 = phi113;
				phi_in97 = phi117;
				phi_in99 = phi122;
				phi100 = phi_in127;
				phi_in101 = phi_in92;
				phi106 = phi_in53;
				phi110 = phi86;
				phi115 = phi_in372;
				phi88 = phi98;
				phi121 = phi_in167;
				phi_in128 = phi157 + 4;
				phi130 = phi_in92;
				dispatch12 = 4;
			}
			if (*(uint32_t*)(phi89 + 24) >= *anon102 && dispatch12 == 3 || *(uint32_t*)(phi89 + 24) >= *anon102 && dispatch12 == 2 && *(uint32_t*)(phi59 + 4) < *anon71 || *(uint32_t*)(phi89 + 24) >= *anon102 && dispatch12 == 1 && phi30 < *anon38 && *(uint32_t*)(phi59 + 4) < *anon71 || *(uint32_t*)(phi89 + 24) >= *anon102 && dispatch12 == 0 && phi9 < *anon15 && phi30 < *anon38 && *(uint32_t*)(phi59 + 4) < *anon71 || *(uint32_t*)(phi150 + 28) >= *anon172 && dispatch12 == 4 && phi157 == 8 || *(uint32_t*)(phi150 + 28) >= *anon172 && dispatch12 == 3 && *(uint32_t*)(phi89 + 24) < *anon102 && phi157 == 8 || *(uint32_t*)(phi150 + 28) >= *anon172 && dispatch12 == 2 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && phi157 == 8 || *(uint32_t*)(phi150 + 28) >= *anon172 && dispatch12 == 1 && phi30 < *anon38 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && phi157 == 8 || *(uint32_t*)(phi150 + 28) >= *anon172 && dispatch12 == 0 && phi9 < *anon15 && phi30 < *anon38 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && phi157 == 8 || *(uint32_t*)(phi213 + 40) >= *anon229 && dispatch12 == 5 && phi189 == 8 && phi157 == 8 || *(uint32_t*)(phi213 + 40) >= *anon229 && dispatch12 == 4 && *(uint32_t*)(phi150 + 28) < *anon172 && phi189 == 8 && phi157 == 8 || *(uint32_t*)(phi213 + 40) >= *anon229 && dispatch12 == 3 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 && phi189 == 8 && phi157 == 8 || *(uint32_t*)(phi213 + 40) >= *anon229 && dispatch12 == 2 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 && phi189 == 8 && phi157 == 8 || *(uint32_t*)(phi213 + 40) >= *anon229 && dispatch12 == 1 && phi30 < *anon38 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 && phi189 == 8 && phi157 == 8 || *(uint32_t*)(phi213 + 40) >= *anon229 && dispatch12 == 0 && phi9 < *anon15 && phi30 < *anon38 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 && phi189 == 8 && phi157 == 8 || dispatch12 == 6 && phi246 == 8 && phi189 == 8 && phi157 == 8 || dispatch12 == 5 && *(uint32_t*)(phi213 + 40) < *anon229 && phi246 == 8 && phi189 == 8 && phi157 == 8 || dispatch12 == 4 && *(uint32_t*)(phi150 + 28) < *anon172 && *(uint32_t*)(phi213 + 40) < *anon229 && phi246 == 8 && phi189 == 8 && phi157 == 8 || dispatch12 == 3 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 && *(uint32_t*)(phi213 + 40) < *anon229 && phi246 == 8 && phi189 == 8 && phi157 == 8 || dispatch12 == 2 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 && *(uint32_t*)(phi213 + 40) < *anon229 && phi246 == 8 && phi189 == 8 && phi157 == 8 || dispatch12 == 1 && phi30 < *anon38 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 && *(uint32_t*)(phi213 + 40) < *anon229 && phi246 == 8 && phi189 == 8 && phi157 == 8 || dispatch12 == 0 && phi9 < *anon15 && phi30 < *anon38 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 && *(uint32_t*)(phi213 + 40) < *anon229 && phi246 == 8 && phi189 == 8 && phi157 == 8)
			{
				phi_in81 = phi93;
				phi40 = phi_in94;
				phi_in373 = phi84;
				phi_in374 = phi95;
				phi_in375 = phi96;
				phi64 = phi86;
				phi76 = phi45;
				phi_in46 = phi_in97;
				phi_in376 = phi98;
				phi_in57 = phi_in99;
				phi_in377 = phi100;
				phi82 = phi_in101;
				phi73 = phi_in373;
				phi_in53 = phi_in374;
				phi74 = phi_in375;
				phi_in75 = phi64;
				phi_in77 = phi66;
				phi78 = phi_in376;
				phi_in79 = phi_in377;
				phi_in80 = phi90 + 4;
				dispatch12 = 3;
			}
			if (phi90 == 8 && (*(uint32_t*)(phi89 + 24) >= *anon102 && dispatch12 == 3 || *(uint32_t*)(phi89 + 24) >= *anon102 && dispatch12 == 2 && *(uint32_t*)(phi59 + 4) < *anon71 || *(uint32_t*)(phi89 + 24) >= *anon102 && dispatch12 == 1 && phi30 < *anon38 && *(uint32_t*)(phi59 + 4) < *anon71 || *(uint32_t*)(phi89 + 24) >= *anon102 && dispatch12 == 0 && phi9 < *anon15 && phi30 < *anon38 && *(uint32_t*)(phi59 + 4) < *anon71 || *(uint32_t*)(phi150 + 28) >= *anon172 && dispatch12 == 4 && phi157 == 8 || *(uint32_t*)(phi150 + 28) >= *anon172 && dispatch12 == 3 && *(uint32_t*)(phi89 + 24) < *anon102 && phi157 == 8 || *(uint32_t*)(phi150 + 28) >= *anon172 && dispatch12 == 2 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && phi157 == 8 || *(uint32_t*)(phi150 + 28) >= *anon172 && dispatch12 == 1 && phi30 < *anon38 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && phi157 == 8 || *(uint32_t*)(phi150 + 28) >= *anon172 && dispatch12 == 0 && phi9 < *anon15 && phi30 < *anon38 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && phi157 == 8 || *(uint32_t*)(phi213 + 40) >= *anon229 && dispatch12 == 5 && phi189 == 8 && phi157 == 8 || *(uint32_t*)(phi213 + 40) >= *anon229 && dispatch12 == 4 && *(uint32_t*)(phi150 + 28) < *anon172 && phi189 == 8 && phi157 == 8 || *(uint32_t*)(phi213 + 40) >= *anon229 && dispatch12 == 3 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 && phi189 == 8 && phi157 == 8 || *(uint32_t*)(phi213 + 40) >= *anon229 && dispatch12 == 2 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 && phi189 == 8 && phi157 == 8 || *(uint32_t*)(phi213 + 40) >= *anon229 && dispatch12 == 1 && phi30 < *anon38 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 && phi189 == 8 && phi157 == 8 || *(uint32_t*)(phi213 + 40) >= *anon229 && dispatch12 == 0 && phi9 < *anon15 && phi30 < *anon38 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 && phi189 == 8 && phi157 == 8 || dispatch12 == 6 && phi246 == 8 && phi189 == 8 && phi157 == 8 || dispatch12 == 5 && *(uint32_t*)(phi213 + 40) < *anon229 && phi246 == 8 && phi189 == 8 && phi157 == 8 || dispatch12 == 4 && *(uint32_t*)(phi150 + 28) < *anon172 && *(uint32_t*)(phi213 + 40) < *anon229 && phi246 == 8 && phi189 == 8 && phi157 == 8 || dispatch12 == 3 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 && *(uint32_t*)(phi213 + 40) < *anon229 && phi246 == 8 && phi189 == 8 && phi157 == 8 || dispatch12 == 2 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 && *(uint32_t*)(phi213 + 40) < *anon229 && phi246 == 8 && phi189 == 8 && phi157 == 8 || dispatch12 == 1 && phi30 < *anon38 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 && *(uint32_t*)(phi213 + 40) < *anon229 && phi246 == 8 && phi189 == 8 && phi157 == 8 || dispatch12 == 0 && phi9 < *anon15 && phi30 < *anon38 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 && *(uint32_t*)(phi213 + 40) < *anon229 && phi246 == 8 && phi189 == 8 && phi157 == 8))
			{
				phi60 = phi40;
				phi61 = phi_in373;
				phi62 = phi_in374;
				phi63 = phi_in375;
				phi45 = phi76;
				phi65 = *(uint64_t*)(phi_in377 + 72);
				phi67 = phi_in46;
				phi68 = phi_in376;
				phi69 = phi_in57;
				phi70 = phi82;
				phi_in51 = phi_in377;
			}
			if (*(uint32_t*)(phi89 + 24) >= *anon102 && dispatch12 == 3 && phi90 == 8 || *(uint32_t*)(phi89 + 24) >= *anon102 && dispatch12 == 2 && *(uint32_t*)(phi59 + 4) < *anon71 && phi90 == 8 || *(uint32_t*)(phi89 + 24) >= *anon102 && dispatch12 == 1 && phi30 < *anon38 && *(uint32_t*)(phi59 + 4) < *anon71 && phi90 == 8 || *(uint32_t*)(phi89 + 24) >= *anon102 && dispatch12 == 0 && phi9 < *anon15 && phi30 < *anon38 && *(uint32_t*)(phi59 + 4) < *anon71 && phi90 == 8 || *(uint32_t*)(phi150 + 28) >= *anon172 && dispatch12 == 4 && phi157 == 8 && phi90 == 8 || *(uint32_t*)(phi150 + 28) >= *anon172 && dispatch12 == 3 && *(uint32_t*)(phi89 + 24) < *anon102 && phi157 == 8 && phi90 == 8 || *(uint32_t*)(phi150 + 28) >= *anon172 && dispatch12 == 2 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && phi157 == 8 && phi90 == 8 || *(uint32_t*)(phi150 + 28) >= *anon172 && dispatch12 == 1 && phi30 < *anon38 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && phi157 == 8 && phi90 == 8 || *(uint32_t*)(phi150 + 28) >= *anon172 && dispatch12 == 0 && phi9 < *anon15 && phi30 < *anon38 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && phi157 == 8 && phi90 == 8 || *(uint32_t*)(phi213 + 40) >= *anon229 && dispatch12 == 5 && phi189 == 8 && phi157 == 8 && phi90 == 8 || *(uint32_t*)(phi213 + 40) >= *anon229 && dispatch12 == 4 && *(uint32_t*)(phi150 + 28) < *anon172 && phi189 == 8 && phi157 == 8 && phi90 == 8 || *(uint32_t*)(phi213 + 40) >= *anon229 && dispatch12 == 3 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 && phi189 == 8 && phi157 == 8 && phi90 == 8 || *(uint32_t*)(phi213 + 40) >= *anon229 && dispatch12 == 2 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 && phi189 == 8 && phi157 == 8 && phi90 == 8 || *(uint32_t*)(phi213 + 40) >= *anon229 && dispatch12 == 1 && phi30 < *anon38 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 && phi189 == 8 && phi157 == 8 && phi90 == 8 || *(uint32_t*)(phi213 + 40) >= *anon229 && dispatch12 == 0 && phi9 < *anon15 && phi30 < *anon38 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 && phi189 == 8 && phi157 == 8 && phi90 == 8 || dispatch12 == 6 && phi246 == 8 && phi189 == 8 && phi157 == 8 && phi90 == 8 || dispatch12 == 5 && *(uint32_t*)(phi213 + 40) < *anon229 && phi246 == 8 && phi189 == 8 && phi157 == 8 && phi90 == 8 || dispatch12 == 4 && *(uint32_t*)(phi150 + 28) < *anon172 && *(uint32_t*)(phi213 + 40) < *anon229 && phi246 == 8 && phi189 == 8 && phi157 == 8 && phi90 == 8 || dispatch12 == 3 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 && *(uint32_t*)(phi213 + 40) < *anon229 && phi246 == 8 && phi189 == 8 && phi157 == 8 && phi90 == 8 || dispatch12 == 2 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 && *(uint32_t*)(phi213 + 40) < *anon229 && phi246 == 8 && phi189 == 8 && phi157 == 8 && phi90 == 8 || dispatch12 == 1 && phi30 < *anon38 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 && *(uint32_t*)(phi213 + 40) < *anon229 && phi246 == 8 && phi189 == 8 && phi157 == 8 && phi90 == 8 || dispatch12 == 0 && phi9 < *anon15 && phi30 < *anon38 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 && *(uint32_t*)(phi213 + 40) < *anon229 && phi246 == 8 && phi189 == 8 && phi157 == 8 && phi90 == 8 || *(uint32_t*)(phi59 + 4) >= *anon71 && dispatch12 == 2 || *(uint32_t*)(phi59 + 4) >= *anon71 && dispatch12 == 1 && phi30 < *anon38 || *(uint32_t*)(phi59 + 4) >= *anon71 && dispatch12 == 0 && phi9 < *anon15 && phi30 < *anon38)
			{
				phi40 = phi60;
				phi41 = phi61;
				phi42 = phi62;
				phi43 = phi63;
				phi_in44 = phi64;
				phi_in378 = phi45;
				phi29 = phi66;
				phi_in46 = phi67;
				phi47 = phi68;
				phi48 = phi69;
				phi49 = phi70;
				phi45 = phi_in378;
				phi_in50 = phi65 + 4;
				dispatch12 = 2;
			}
			if (phi65 == 8 && (*(uint32_t*)(phi89 + 24) >= *anon102 && dispatch12 == 3 && phi90 == 8 || *(uint32_t*)(phi89 + 24) >= *anon102 && dispatch12 == 2 && *(uint32_t*)(phi59 + 4) < *anon71 && phi90 == 8 || *(uint32_t*)(phi89 + 24) >= *anon102 && dispatch12 == 1 && phi30 < *anon38 && *(uint32_t*)(phi59 + 4) < *anon71 && phi90 == 8 || *(uint32_t*)(phi89 + 24) >= *anon102 && dispatch12 == 0 && phi9 < *anon15 && phi30 < *anon38 && *(uint32_t*)(phi59 + 4) < *anon71 && phi90 == 8 || *(uint32_t*)(phi150 + 28) >= *anon172 && dispatch12 == 4 && phi157 == 8 && phi90 == 8 || *(uint32_t*)(phi150 + 28) >= *anon172 && dispatch12 == 3 && *(uint32_t*)(phi89 + 24) < *anon102 && phi157 == 8 && phi90 == 8 || *(uint32_t*)(phi150 + 28) >= *anon172 && dispatch12 == 2 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && phi157 == 8 && phi90 == 8 || *(uint32_t*)(phi150 + 28) >= *anon172 && dispatch12 == 1 && phi30 < *anon38 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && phi157 == 8 && phi90 == 8 || *(uint32_t*)(phi150 + 28) >= *anon172 && dispatch12 == 0 && phi9 < *anon15 && phi30 < *anon38 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && phi157 == 8 && phi90 == 8 || *(uint32_t*)(phi213 + 40) >= *anon229 && dispatch12 == 5 && phi189 == 8 && phi157 == 8 && phi90 == 8 || *(uint32_t*)(phi213 + 40) >= *anon229 && dispatch12 == 4 && *(uint32_t*)(phi150 + 28) < *anon172 && phi189 == 8 && phi157 == 8 && phi90 == 8 || *(uint32_t*)(phi213 + 40) >= *anon229 && dispatch12 == 3 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 && phi189 == 8 && phi157 == 8 && phi90 == 8 || *(uint32_t*)(phi213 + 40) >= *anon229 && dispatch12 == 2 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 && phi189 == 8 && phi157 == 8 && phi90 == 8 || *(uint32_t*)(phi213 + 40) >= *anon229 && dispatch12 == 1 && phi30 < *anon38 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 && phi189 == 8 && phi157 == 8 && phi90 == 8 || *(uint32_t*)(phi213 + 40) >= *anon229 && dispatch12 == 0 && phi9 < *anon15 && phi30 < *anon38 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 && phi189 == 8 && phi157 == 8 && phi90 == 8 || dispatch12 == 6 && phi246 == 8 && phi189 == 8 && phi157 == 8 && phi90 == 8 || dispatch12 == 5 && *(uint32_t*)(phi213 + 40) < *anon229 && phi246 == 8 && phi189 == 8 && phi157 == 8 && phi90 == 8 || dispatch12 == 4 && *(uint32_t*)(phi150 + 28) < *anon172 && *(uint32_t*)(phi213 + 40) < *anon229 && phi246 == 8 && phi189 == 8 && phi157 == 8 && phi90 == 8 || dispatch12 == 3 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 && *(uint32_t*)(phi213 + 40) < *anon229 && phi246 == 8 && phi189 == 8 && phi157 == 8 && phi90 == 8 || dispatch12 == 2 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 && *(uint32_t*)(phi213 + 40) < *anon229 && phi246 == 8 && phi189 == 8 && phi157 == 8 && phi90 == 8 || dispatch12 == 1 && phi30 < *anon38 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 && *(uint32_t*)(phi213 + 40) < *anon229 && phi246 == 8 && phi189 == 8 && phi157 == 8 && phi90 == 8 || dispatch12 == 0 && phi9 < *anon15 && phi30 < *anon38 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 && *(uint32_t*)(phi213 + 40) < *anon229 && phi246 == 8 && phi189 == 8 && phi157 == 8 && phi90 == 8 || *(uint32_t*)(phi59 + 4) >= *anon71 && dispatch12 == 2 || *(uint32_t*)(phi59 + 4) >= *anon71 && dispatch12 == 1 && phi30 < *anon38 || *(uint32_t*)(phi59 + 4) >= *anon71 && dispatch12 == 0 && phi9 < *anon15 && phi30 < *anon38))
			{
				phi_in31 = *(uint32_t*)(phi_in51 + 68);
				phi32 = phi_in378;
				phi33 = *(uint64_t*)(phi_in51 + 56);
				phi34 = (__zext uint64_t)phi_in378;
				phi35 = *(uint32_t*)(phi_in51 + 68);
				phi26 = phi_in378;
				phi36 = *(uint32_t*)(phi_in51 + 68);
				phi37 = phi_in51;
			}
			if (*(uint32_t*)(phi89 + 24) >= *anon102 && dispatch12 == 3 && phi90 == 8 && phi65 == 8 || *(uint32_t*)(phi89 + 24) >= *anon102 && dispatch12 == 2 && *(uint32_t*)(phi59 + 4) < *anon71 && phi90 == 8 && phi65 == 8 || *(uint32_t*)(phi89 + 24) >= *anon102 && dispatch12 == 1 && phi30 < *anon38 && *(uint32_t*)(phi59 + 4) < *anon71 && phi90 == 8 && phi65 == 8 || *(uint32_t*)(phi89 + 24) >= *anon102 && dispatch12 == 0 && phi9 < *anon15 && phi30 < *anon38 && *(uint32_t*)(phi59 + 4) < *anon71 && phi90 == 8 && phi65 == 8 || *(uint32_t*)(phi150 + 28) >= *anon172 && dispatch12 == 4 && phi157 == 8 && phi90 == 8 && phi65 == 8 || *(uint32_t*)(phi150 + 28) >= *anon172 && dispatch12 == 3 && *(uint32_t*)(phi89 + 24) < *anon102 && phi157 == 8 && phi90 == 8 && phi65 == 8 || *(uint32_t*)(phi150 + 28) >= *anon172 && dispatch12 == 2 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && phi157 == 8 && phi90 == 8 && phi65 == 8 || *(uint32_t*)(phi150 + 28) >= *anon172 && dispatch12 == 1 && phi30 < *anon38 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && phi157 == 8 && phi90 == 8 && phi65 == 8 || *(uint32_t*)(phi150 + 28) >= *anon172 && dispatch12 == 0 && phi9 < *anon15 && phi30 < *anon38 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && phi157 == 8 && phi90 == 8 && phi65 == 8 || *(uint32_t*)(phi213 + 40) >= *anon229 && dispatch12 == 5 && phi189 == 8 && phi157 == 8 && phi90 == 8 && phi65 == 8 || *(uint32_t*)(phi213 + 40) >= *anon229 && dispatch12 == 4 && *(uint32_t*)(phi150 + 28) < *anon172 && phi189 == 8 && phi157 == 8 && phi90 == 8 && phi65 == 8 || *(uint32_t*)(phi213 + 40) >= *anon229 && dispatch12 == 3 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 && phi189 == 8 && phi157 == 8 && phi90 == 8 && phi65 == 8 || *(uint32_t*)(phi213 + 40) >= *anon229 && dispatch12 == 2 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 && phi189 == 8 && phi157 == 8 && phi90 == 8 && phi65 == 8 || *(uint32_t*)(phi213 + 40) >= *anon229 && dispatch12 == 1 && phi30 < *anon38 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 && phi189 == 8 && phi157 == 8 && phi90 == 8 && phi65 == 8 || *(uint32_t*)(phi213 + 40) >= *anon229 && dispatch12 == 0 && phi9 < *anon15 && phi30 < *anon38 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 && phi189 == 8 && phi157 == 8 && phi90 == 8 && phi65 == 8 || dispatch12 == 6 && phi246 == 8 && phi189 == 8 && phi157 == 8 && phi90 == 8 && phi65 == 8 || dispatch12 == 5 && *(uint32_t*)(phi213 + 40) < *anon229 && phi246 == 8 && phi189 == 8 && phi157 == 8 && phi90 == 8 && phi65 == 8 || dispatch12 == 4 && *(uint32_t*)(phi150 + 28) < *anon172 && *(uint32_t*)(phi213 + 40) < *anon229 && phi246 == 8 && phi189 == 8 && phi157 == 8 && phi90 == 8 && phi65 == 8 || dispatch12 == 3 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 && *(uint32_t*)(phi213 + 40) < *anon229 && phi246 == 8 && phi189 == 8 && phi157 == 8 && phi90 == 8 && phi65 == 8 || dispatch12 == 2 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 && *(uint32_t*)(phi213 + 40) < *anon229 && phi246 == 8 && phi189 == 8 && phi157 == 8 && phi90 == 8 && phi65 == 8 || dispatch12 == 1 && phi30 < *anon38 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 && *(uint32_t*)(phi213 + 40) < *anon229 && phi246 == 8 && phi189 == 8 && phi157 == 8 && phi90 == 8 && phi65 == 8 || dispatch12 == 0 && phi9 < *anon15 && phi30 < *anon38 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 && *(uint32_t*)(phi213 + 40) < *anon229 && phi246 == 8 && phi189 == 8 && phi157 == 8 && phi90 == 8 && phi65 == 8 || *(uint32_t*)(phi59 + 4) >= *anon71 && dispatch12 == 2 && phi65 == 8 || *(uint32_t*)(phi59 + 4) >= *anon71 && dispatch12 == 1 && phi30 < *anon38 && phi65 == 8 || *(uint32_t*)(phi59 + 4) >= *anon71 && dispatch12 == 0 && phi9 < *anon15 && phi30 < *anon38 && phi65 == 8 || phi30 >= *anon38 && dispatch12 == 1 || phi30 >= *anon38 && dispatch12 == 0 && phi9 < *anon15)
			{
				phi18 = phi_in31;
				phi_in379 = phi32;
				phi24 = phi34;
				*(uint32_t*)(phi25 + 68) = phi35;
				phi_in14 = phi36;
				phi_in380 = phi37;
				phi_in23 = phi18;
				phi_in13 = phi_in379;
				phi_in27 = phi33 + 4;
				phi_in28 = phi_in380;
				dispatch12 = 1;
			}
			if (phi33 == 8 && (*(uint32_t*)(phi89 + 24) >= *anon102 && dispatch12 == 3 && phi90 == 8 && phi65 == 8 || *(uint32_t*)(phi89 + 24) >= *anon102 && dispatch12 == 2 && *(uint32_t*)(phi59 + 4) < *anon71 && phi90 == 8 && phi65 == 8 || *(uint32_t*)(phi89 + 24) >= *anon102 && dispatch12 == 1 && phi30 < *anon38 && *(uint32_t*)(phi59 + 4) < *anon71 && phi90 == 8 && phi65 == 8 || *(uint32_t*)(phi89 + 24) >= *anon102 && dispatch12 == 0 && phi9 < *anon15 && phi30 < *anon38 && *(uint32_t*)(phi59 + 4) < *anon71 && phi90 == 8 && phi65 == 8 || *(uint32_t*)(phi150 + 28) >= *anon172 && dispatch12 == 4 && phi157 == 8 && phi90 == 8 && phi65 == 8 || *(uint32_t*)(phi150 + 28) >= *anon172 && dispatch12 == 3 && *(uint32_t*)(phi89 + 24) < *anon102 && phi157 == 8 && phi90 == 8 && phi65 == 8 || *(uint32_t*)(phi150 + 28) >= *anon172 && dispatch12 == 2 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && phi157 == 8 && phi90 == 8 && phi65 == 8 || *(uint32_t*)(phi150 + 28) >= *anon172 && dispatch12 == 1 && phi30 < *anon38 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && phi157 == 8 && phi90 == 8 && phi65 == 8 || *(uint32_t*)(phi150 + 28) >= *anon172 && dispatch12 == 0 && phi9 < *anon15 && phi30 < *anon38 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && phi157 == 8 && phi90 == 8 && phi65 == 8 || *(uint32_t*)(phi213 + 40) >= *anon229 && dispatch12 == 5 && phi189 == 8 && phi157 == 8 && phi90 == 8 && phi65 == 8 || *(uint32_t*)(phi213 + 40) >= *anon229 && dispatch12 == 4 && *(uint32_t*)(phi150 + 28) < *anon172 && phi189 == 8 && phi157 == 8 && phi90 == 8 && phi65 == 8 || *(uint32_t*)(phi213 + 40) >= *anon229 && dispatch12 == 3 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 && phi189 == 8 && phi157 == 8 && phi90 == 8 && phi65 == 8 || *(uint32_t*)(phi213 + 40) >= *anon229 && dispatch12 == 2 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 && phi189 == 8 && phi157 == 8 && phi90 == 8 && phi65 == 8 || *(uint32_t*)(phi213 + 40) >= *anon229 && dispatch12 == 1 && phi30 < *anon38 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 && phi189 == 8 && phi157 == 8 && phi90 == 8 && phi65 == 8 || *(uint32_t*)(phi213 + 40) >= *anon229 && dispatch12 == 0 && phi9 < *anon15 && phi30 < *anon38 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 && phi189 == 8 && phi157 == 8 && phi90 == 8 && phi65 == 8 || dispatch12 == 6 && phi246 == 8 && phi189 == 8 && phi157 == 8 && phi90 == 8 && phi65 == 8 || dispatch12 == 5 && *(uint32_t*)(phi213 + 40) < *anon229 && phi246 == 8 && phi189 == 8 && phi157 == 8 && phi90 == 8 && phi65 == 8 || dispatch12 == 4 && *(uint32_t*)(phi150 + 28) < *anon172 && *(uint32_t*)(phi213 + 40) < *anon229 && phi246 == 8 && phi189 == 8 && phi157 == 8 && phi90 == 8 && phi65 == 8 || dispatch12 == 3 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 && *(uint32_t*)(phi213 + 40) < *anon229 && phi246 == 8 && phi189 == 8 && phi157 == 8 && phi90 == 8 && phi65 == 8 || dispatch12 == 2 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 && *(uint32_t*)(phi213 + 40) < *anon229 && phi246 == 8 && phi189 == 8 && phi157 == 8 && phi90 == 8 && phi65 == 8 || dispatch12 == 1 && phi30 < *anon38 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 && *(uint32_t*)(phi213 + 40) < *anon229 && phi246 == 8 && phi189 == 8 && phi157 == 8 && phi90 == 8 && phi65 == 8 || dispatch12 == 0 && phi9 < *anon15 && phi30 < *anon38 && *(uint32_t*)(phi59 + 4) < *anon71 && *(uint32_t*)(phi89 + 24) < *anon102 && *(uint32_t*)(phi150 + 28) < *anon172 && *(uint32_t*)(phi213 + 40) < *anon229 && phi246 == 8 && phi189 == 8 && phi157 == 8 && phi90 == 8 && phi65 == 8 || *(uint32_t*)(phi59 + 4) >= *anon71 && dispatch12 == 2 && phi65 == 8 || *(uint32_t*)(phi59 + 4) >= *anon71 && dispatch12 == 1 && phi30 < *anon38 && phi65 == 8 || *(uint32_t*)(phi59 + 4) >= *anon71 && dispatch12 == 0 && phi9 < *anon15 && phi30 < *anon38 && phi65 == 8 || phi30 >= *anon38 && dispatch12 == 1 || phi30 >= *anon38 && dispatch12 == 0 && phi9 < *anon15))
			{
				phi17 = *(uint64_t*)(phi_in380 + 48);
				phi_in4 = phi_in379;
				phi19 = (__zext uint64_t)phi_in379;
				phi_in20 = phi18;
				phi_in21 = phi_in379;
				phi22 = phi_in380;
				break;
			}
		}
		phi5 = phi18;
		phi7 = phi19;
		phi8 = phi_in20;
		phi9 = phi_in21;
		*(uint64_t*)(phi10 + 48) = phi17 + 4;
		phi10 = phi22;
		dispatch12 = 0;
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
		uint64_t phi20;
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
				phi13 = phi_in18;
				phi15 = phi_in17;
				*anon9 = *anon14;
			}
			if (*anon9 < *anon10 && *anon9 < *anon14 || *anon9 >= *anon10 && *anon10 < *anon14 || *anon9 >= *anon14 && *anon9 < *anon10)
			{
				uint32_t phi_in19 = phi13;
				*anon10 = phi15;
				phi16 = phi_in19;
				if (*anon10 < *anon9)
				{
					phi16 = *anon14;
				}
			}
			phi20 = 6301636;
		}
		uint32_t anon21 = phi16 + 1 & 0xff;
		if (dispatch1 == 5 || dispatch1 == 4 && anon21 == 0 || dispatch1 == 3 && phi7 == 0 && anon21 == 0 || dispatch1 == 2 && phi4 == 0 && phi7 == 0 && anon21 == 0 || dispatch1 == 1 && phi3 == 0 && phi4 == 0 && phi7 == 0 && anon21 == 0 || dispatch1 == 0 && phi3 == 0 && phi4 == 0 && phi7 == 0 && anon21 == 0)
		{
			uint32_t phi24;
			uint32_t phi_in25;
			uint32_t phi26;
			uint32_t* anon27;
			uint32_t phi28;
			uint32_t* anon22 = (uint32_t*)(phi20 + 4);
			uint32_t* anon23 = (uint32_t*)phi20;
			if (*anon22 < *anon23)
			{
				*anon23 = *anon22;
				*anon22 = *anon23;
				phi24 = *anon23;
				phi_in25 = *anon22;
				anon27 = (uint32_t*)((phi20 & 0xc) - 4);
				phi26 = *anon27;
				*anon23 = *anon23;
				*anon22 = *anon22;
			}
			else 
			{
				phi24 = *anon22;
				phi_in25 = *anon23;
				phi28 = *anon27;
			}
			if (*anon22 < *anon23 && *anon22 < *anon27 || *anon22 >= *anon23 && *anon23 < *anon27)
			{
				uint32_t phi_in29 = phi24;
				*anon27 = phi_in25;
				*anon23 = *anon27;
				phi26 = *anon27;
				*anon23 = phi_in29;
				*anon22 = *anon27;
			}
			if (*anon22 < *anon23 && *anon22 < *anon27 || *anon22 >= *anon23 && *anon23 < *anon27 || *anon22 >= *anon27 && *anon22 < *anon23)
			{
				uint32_t phi_in30 = phi26;
				phi28 = phi_in30;
				if (*anon23 < *anon22)
				{
					phi28 = *anon27;
				}
			}
			dispatch1 = 0;
			if ((phi28 + 1 & 0xff) != 0)
			{
				phi20 = phi20 + 12;
				dispatch1 = 5;
			}
		}
		if (anon21 != 0 && (dispatch1 == 4 || dispatch1 == 3 && phi7 == 0 || dispatch1 == 2 && phi4 == 0 && phi7 == 0 || dispatch1 == 1 && phi3 == 0 && phi4 == 0 && phi7 == 0 || dispatch1 == 0 && phi3 == 0 && phi4 == 0 && phi7 == 0))
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
