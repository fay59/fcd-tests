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
	uint32_t phi18;
	uint32_t* phi_in1 = (uint32_t*)0x6027c4;
	uint64_t phi_in2 = 6301636;
	do
	{
		uint32_t phi_in12;
		uint32_t* anon9;
		uint32_t phi_in7;
		uint32_t phi_in11;
		uint32_t phi_in6;
		uint32_t phi_in10;
		uint32_t phi_in8;
		uint32_t* phi3 = phi_in1;
		uint64_t phi4 = phi_in2;
		uint32_t* anon5 = (uint32_t*)(phi4 + 4);
		if (*anon5 < *phi3)
		{
			*anon5 = *phi3;
			*phi3 = *anon5;
			phi_in6 = *phi3;
			phi_in7 = *anon5;
			anon9 = (uint32_t*)(phi4 - 4);
			phi_in8 = *anon9;
			phi_in10 = *phi3;
			phi_in11 = *anon5;
		}
		else 
		{
			phi_in6 = *anon5;
			phi_in7 = *phi3;
			phi_in12 = *anon9;
		}
		if (*anon5 >= *phi3 && *phi3 < *anon9 || *anon5 < *phi3 && *anon5 < *anon9)
		{
			uint32_t phi13 = phi_in6;
			uint32_t phi14 = phi_in7;
			*phi3 = *anon9;
			*anon9 = phi14;
			phi_in8 = phi14;
			phi_in10 = phi13;
			phi_in11 = *anon9;
		}
		if (*anon5 >= *phi3 && *phi3 < *anon9 || *anon5 < *phi3 && *anon5 < *anon9 || *anon5 >= *anon9 && *anon5 < *phi3)
		{
			uint32_t phi15 = phi_in8;
			uint32_t phi16 = phi_in10;
			uint32_t phi17 = phi_in11;
			phi_in12 = phi15;
			if (phi17 > phi16)
			{
				*anon5 = phi17;
				*phi3 = phi16;
				phi_in12 = *anon9;
			}
		}
		phi18 = phi_in12;
		if (phi18 != 255)
		{
			uint64_t anon19 = phi4 + 12;
			phi_in1 = (uint32_t*)anon19;
			phi_in2 = anon19;
			if (phi4 == 6301984)
			{
				break;
			}
		}
	}
	while (phi18 != 255);
	return;
}
void w(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	uint64_t phi709;
	struct { uint8_t field0[4]; uint32_t field1; uint64_t field2; uint8_t field3[8]; uint32_t field4; uint32_t field5; uint8_t field6[48]; uint64_t field7; uint32_t field8; uint8_t field9[4]; uint64_t field10; uint64_t field11; uint32_t field12; uint8_t field13[8]; uint32_t field14; uint8_t field15[56]; uint64_t field16; } alloca1;
	uint64_t phi_in11;
	uint32_t phi_in5;
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
	uint64_t phi_in7 = arg3 & 0xffffffff;
	uint32_t phi_in8 = anon6;
	uint32_t phi_in9 = anon3;
	uint64_t phi_in10 = 0;
	uint64_t anon12 = (uint64_t)&alloca1;
	phi_in11 = anon12;
	uint32_t dispatch13 = 0;
	do
	{
		uint32_t phi_in22;
		uint32_t phi_in23;
		uint64_t phi_in21;
		uint32_t phi_in25;
		uint32_t phi_in26;
		uint64_t phi_in27;
		uint64_t phi_in24;
		while (true)
		{
			uint32_t phi701;
			uint64_t phi687;
			uint32_t phi685;
			uint32_t phi680;
			uint32_t phi676;
			uint64_t phi655;
			uint32_t phi693;
			uint32_t phi682;
			uint32_t phi678;
			uint64_t phi289;
			uint32_t phi_in82;
			uint32_t phi_in293;
			uint32_t phi_in219;
			uint32_t phi_in209;
			uint32_t phi_in290;
			uint32_t phi_in305;
			uint64_t phi_in350;
			uint32_t phi_in129;
			uint32_t phi_in348;
			uint32_t phi_in346;
			uint32_t phi_in343;
			uint32_t phi677;
			uint32_t phi_in323;
			uint32_t phi_in340;
			uint32_t phi_in338;
			uint32_t phi_in337;
			uint32_t phi_in347;
			uint32_t phi_in47;
			uint32_t phi_in50;
			uint32_t phi_in336;
			uint32_t phi_in135;
			uint32_t phi_in331;
			uint32_t phi_in328;
			uint32_t phi_in327;
			uint32_t phi_in325;
			uint32_t phi702;
			uint64_t phi_in312;
			uint32_t phi_in255;
			uint64_t phi284;
			uint64_t phi_in321;
			uint64_t phi_in167;
			uint64_t phi_in317;
			uint32_t phi_in304;
			uint32_t phi_in308;
			uint32_t phi_in306;
			uint32_t phi_in91;
			uint32_t phi_in234;
			uint32_t phi_in302;
			uint32_t phi_in301;
			uint32_t phi188;
			uint32_t phi_in300;
			uint32_t phi_in303;
			uint32_t phi_in297;
			uint32_t phi_in295;
			uint32_t phi_in294;
			uint32_t phi_in161;
			uint32_t phi_in291;
			uint32_t phi287;
			uint32_t phi_in231;
			uint32_t phi_in133;
			uint32_t phi286;
			uint64_t phi_in259;
			uint64_t phi283;
			uint32_t phi282;
			uint64_t phi288;
			uint32_t phi264;
			uint32_t phi276;
			uint32_t phi275;
			uint32_t phi271;
			uint64_t phi121;
			uint32_t phi_in296;
			uint32_t phi278;
			uint32_t phi268;
			uint32_t phi266;
			uint32_t phi265;
			uint64_t phi281;
			uint32_t phi172;
			uint32_t phi_in249;
			uint32_t phi263;
			uint32_t phi_in165;
			uint32_t phi_in298;
			uint64_t phi260;
			uint64_t phi_in254;
			uint64_t phi351;
			uint32_t phi280;
			uint64_t phi_in253;
			uint32_t phi_in248;
			uint32_t phi_in247;
			uint32_t phi_in242;
			uint32_t phi_in241;
			uint32_t phi_in240;
			uint32_t phi_in239;
			uint32_t phi_in311;
			uint32_t phi_in237;
			uint32_t phi_in329;
			uint32_t phi_in236;
			uint64_t phi_in162;
			uint32_t phi_in233;
			uint64_t phi_in230;
			uint32_t phi_in58;
			uint64_t phi_in227;
			uint64_t phi_in251;
			uint64_t phi_in226;
			uint32_t phi_in34;
			uint64_t phi_in318;
			uint32_t phi_in223;
			uint32_t phi_in307;
			uint32_t phi178;
			uint32_t phi_in220;
			uint32_t phi_in309;
			uint64_t phi708;
			uint32_t phi_in216;
			uint32_t phi_in299;
			uint32_t phi_in339;
			uint32_t phi_in215;
			uint64_t phi_in344;
			uint32_t phi_in213;
			uint32_t phi_in210;
			uint32_t phi_in206;
			uint32_t phi_in205;
			uint32_t phi_in204;
			uint32_t phi_in203;
			uint32_t phi_in334;
			uint32_t phi_in202;
			uint32_t phi_in217;
			uint32_t phi_in201;
			uint32_t phi_in200;
			uint64_t phi_in67;
			uint32_t phi69;
			uint32_t phi190;
			uint32_t phi_in218;
			uint64_t phi_in36;
			uint64_t phi_in109;
			uint32_t phi_in51;
			uint32_t phi186;
			uint32_t phi_in244;
			uint32_t phi185;
			uint32_t phi_in143;
			uint32_t phi77;
			uint64_t phi45;
			uint64_t phi191;
			uint32_t phi182;
			uint64_t phi_in310;
			uint32_t phi_in106;
			uint32_t phi_in159;
			uint64_t phi_in166;
			uint64_t phi_in313;
			uint32_t phi270;
			uint32_t phi_in65;
			uint32_t phi175;
			uint32_t phi171;
			uint32_t phi170;
			uint32_t phi194;
			uint32_t phi_in238;
			uint64_t phi_in169;
			uint32_t phi179;
			uint32_t phi_in164;
			uint32_t phi_in257;
			uint32_t phi_in158;
			uint32_t phi_in335;
			uint64_t phi700;
			uint32_t phi_in35;
			uint32_t phi189;
			uint32_t phi_in156;
			uint32_t phi_in152;
			uint64_t phi196;
			uint32_t phi684;
			uint32_t phi_in153;
			uint32_t phi_in316;
			uint32_t phi_in149;
			uint32_t phi_in207;
			uint32_t phi73;
			uint64_t phi_in108;
			uint32_t phi_in146;
			uint32_t phi115;
			uint32_t phi_in145;
			uint32_t phi41;
			uint32_t phi_in141;
			uint32_t phi679;
			uint64_t phi_in342;
			uint32_t phi_in140;
			uint32_t phi267;
			uint64_t phi_in137;
			uint32_t phi_in134;
			uint32_t phi_in245;
			uint32_t phi119;
			uint32_t phi_in132;
			uint32_t phi_in131;
			uint64_t phi197;
			uint32_t phi_in130;
			uint32_t phi_in326;
			uint64_t phi195;
			uint32_t phi261;
			uint32_t phi272;
			uint32_t phi_in212;
			uint32_t phi187;
			uint32_t phi_in128;
			uint32_t phi_in252;
			uint32_t phi_in150;
			uint32_t phi43;
			uint64_t phi_in107;
			uint32_t phi_in127;
			uint64_t phi_in125;
			uint32_t phi_in56;
			uint64_t phi124;
			uint32_t* anon28;
			uint32_t phi120;
			uint32_t phi_in142;
			uint32_t phi_in214;
			uint32_t phi_in102;
			uint32_t phi_in157;
			uint64_t phi123;
			uint32_t phi116;
			uint32_t phi_in163;
			uint32_t phi_in330;
			uint32_t phi114;
			uint32_t phi184;
			uint32_t phi_in160;
			uint32_t phi176;
			uint32_t phi_in62;
			uint32_t phi113;
			uint32_t phi_in147;
			uint32_t phi112;
			uint64_t phi79;
			uint32_t phi_in126;
			uint32_t phi118;
			uint64_t phi_in110;
			uint64_t phi_in37;
			uint32_t phi_in105;
			uint32_t phi_in322;
			uint32_t phi177;
			uint32_t phi_in104;
			uint32_t phi181;
			uint64_t phi694;
			uint32_t phi111;
			uint32_t phi274;
			uint32_t phi_in101;
			uint32_t phi117;
			uint32_t phi_in100;
			uint32_t phi_in99;
			uint64_t phi44;
			uint64_t phi_in53;
			uint32_t phi_in97;
			uint64_t phi_in94;
			uint32_t phi42;
			uint32_t phi_in154;
			uint32_t phi_in92;
			uint32_t phi193;
			uint32_t phi_in256;
			uint32_t phi_in87;
			uint32_t phi_in315;
			uint32_t phi_in61;
			uint32_t phi_in52;
			uint32_t phi_in86;
			uint64_t phi_in168;
			uint32_t phi_in232;
			uint32_t phi_in235;
			uint32_t phi262;
			uint64_t phi703;
			uint32_t phi_in211;
			uint32_t phi_in84;
			uint64_t phi_in48;
			uint32_t phi_in151;
			uint64_t phi80;
			uint32_t phi_in246;
			uint32_t phi78;
			uint64_t phi_in349;
			uint32_t phi_in250;
			uint64_t phi_in88;
			uint32_t phi76;
			uint32_t phi71;
			uint32_t phi75;
			uint32_t phi74;
			uint32_t phi277;
			uint32_t phi681;
			uint64_t phi198;
			uint32_t phi_in90;
			uint32_t phi_in148;
			uint32_t phi_in83;
			uint32_t phi70;
			uint64_t phi_in208;
			uint64_t phi_in68;
			uint32_t phi_in63;
			uint32_t phi_in292;
			uint64_t phi_in93;
			uint64_t phi_in136;
			uint32_t phi_in59;
			uint32_t phi269;
			uint32_t phi_in333;
			uint32_t phi_in64;
			uint32_t phi_in31;
			uint32_t phi_in57;
			uint32_t phi_in332;
			uint32_t phi_in49;
			uint32_t phi279;
			uint32_t phi_in85;
			uint32_t phi_in46;
			uint32_t phi_in30;
			uint32_t phi273;
			uint32_t phi_in324;
			uint32_t phi_in243;
			uint32_t phi40;
			uint32_t phi_in32;
			uint64_t phi81;
			uint32_t phi180;
			uint64_t phi_in66;
			uint32_t phi285;
			uint64_t phi_in222;
			uint32_t phi_in155;
			uint32_t phi_in314;
			uint32_t phi_in224;
			uint64_t phi_in345;
			uint64_t phi686;
			uint32_t phi683;
			uint32_t phi174;
			uint32_t phi_in60;
			uint32_t phi173;
			uint32_t phi_in341;
			uint32_t phi18;
			uint64_t phi_in199;
			uint32_t phi183;
			uint32_t phi_in103;
			uint64_t phi122;
			uint64_t phi_in258;
			uint32_t phi72;
			uint32_t phi_in33;
			uint32_t phi_in221;
			uint32_t phi_in98;
			uint32_t phi192;
			uint32_t phi_in89;
			uint32_t phi_in225;
			if (dispatch13 == 0)
			{
				uint32_t phi14 = phi_in4;
				uint32_t phi15 = phi_in5;
				uint64_t phi16 = phi_in7;
				uint32_t phi17 = phi_in8;
				phi18 = phi_in9;
				uint64_t phi19 = phi_in10;
				uint64_t phi20 = phi_in11;
				phi_in21 = phi19;
				phi_in22 = phi14;
				phi_in23 = phi15;
				phi_in24 = phi16 & 0xffffffff;
				phi_in25 = phi17;
				phi_in26 = phi18;
				phi_in27 = phi20;
				int64_t anon29 = (__sext int64_t)*(uint32_t*)(phi19 + *(uint64_t*)(phi20 + 8) + 6301632);
				anon28 = (uint32_t*)((anon29 << 2) + 6300992);
				if (phi18 < *anon28)
				{
					*anon28 = phi17;
					*(uint64_t*)(phi20 + 48) = phi19;
					*(uint64_t*)(phi20 + 16) = anon29 * 12;
					*(uint32_t*)(phi20 + 40) = (uint32_t)phi16 + 5;
					phi_in30 = phi15;
					phi_in31 = phi14;
					phi_in32 = phi14;
					phi_in33 = phi15;
					phi_in34 = phi14;
					phi_in35 = phi15;
					phi_in36 = 0;
					phi_in37 = phi20;
				}
				else 
				{
					break;
				}
			}
			if (dispatch13 == 1 || dispatch13 == 0 && phi18 < *anon28)
			{
				uint32_t phi38 = phi_in30;
				uint32_t phi39 = phi_in31;
				phi40 = phi_in32;
				phi41 = phi_in33;
				phi42 = phi_in34;
				phi43 = phi_in35;
				phi44 = phi_in36;
				phi45 = phi_in37;
				phi_in46 = phi38;
				phi_in47 = phi39;
				phi_in48 = phi44;
				phi_in49 = phi40;
				phi_in50 = phi41;
				phi_in51 = phi42;
				phi_in52 = phi43;
				phi_in53 = phi45;
			}
			int64_t anon55 = (__sext int64_t)*(uint32_t*)(phi44 + *(uint64_t*)(phi45 + 16) + 6301632);
			uint32_t* anon54 = (uint32_t*)((anon55 << 2) + 6300992);
			if (phi43 < *anon54 && (dispatch13 == 1 || dispatch13 == 0 && phi18 < *anon28))
			{
				*(uint64_t*)(phi45 + 56) = phi44;
				*(uint32_t*)(phi45 + 68) = phi41;
				*anon54 = *(uint32_t*)(phi45 + 4);
				*(uint64_t*)(phi45 + 32) = anon55 * 12;
				*(uint32_t*)(phi45 + 44) = phi40 + 6;
				phi_in56 = phi42;
				phi_in57 = phi42;
				phi_in58 = phi42;
				phi_in59 = phi42;
				phi_in60 = phi42;
				phi_in61 = phi42;
				phi_in62 = phi42;
				phi_in63 = phi42;
				phi_in64 = phi42;
				phi_in65 = phi42;
				phi_in66 = (__zext uint64_t)phi42;
				phi_in67 = 0;
				phi_in68 = phi45;
			}
			if (dispatch13 == 2 || dispatch13 == 1 && phi43 < *anon54 || dispatch13 == 0 && phi18 < *anon28 && phi43 < *anon54)
			{
				phi69 = phi_in56;
				phi70 = phi_in57;
				phi71 = phi_in58;
				phi72 = phi_in59;
				phi73 = phi_in60;
				phi74 = phi_in61;
				phi75 = phi_in62;
				phi76 = phi_in63;
				phi77 = phi_in64;
				phi78 = phi_in65;
				phi79 = phi_in66;
				phi80 = phi_in67;
				phi81 = phi_in68;
				phi_in82 = phi69;
				phi_in83 = phi70;
				phi_in84 = phi71;
				phi_in85 = phi72;
				phi_in86 = phi73;
				phi_in87 = phi74;
				phi_in88 = phi80;
				phi_in89 = phi75;
				phi_in90 = phi76;
				phi_in91 = phi77;
				phi_in92 = phi78;
				phi_in93 = phi79 & 0xffffffff;
				phi_in94 = phi81;
			}
			int64_t anon96 = (__sext int64_t)*(uint32_t*)(phi80 + *(uint64_t*)(phi81 + 32) + 6301632);
			uint32_t* anon95 = (uint32_t*)((anon96 << 2) + 6300992);
			if (*(uint32_t*)(phi81 + 4) < *anon95 && (dispatch13 == 2 || dispatch13 == 1 && phi43 < *anon54 || dispatch13 == 0 && phi18 < *anon28 && phi43 < *anon54))
			{
				*(uint64_t*)(phi81 + 72) = phi80;
				*anon95 = *(uint32_t*)(phi81 + 24);
				*(uint32_t*)(phi81 + 64) = (uint32_t)phi79 + 7;
				phi_in97 = phi69;
				phi_in98 = phi70;
				phi_in99 = phi71;
				phi_in100 = phi72;
				phi_in101 = phi73;
				phi_in102 = phi74;
				phi_in103 = phi75;
				phi_in104 = phi76;
				phi_in105 = phi77;
				phi_in106 = phi78;
				phi_in107 = phi81;
				phi_in108 = 0;
				phi_in109 = anon96 * 12;
				phi_in110 = phi79;
			}
			if (dispatch13 == 3 || dispatch13 == 2 && *(uint32_t*)(phi81 + 4) < *anon95 || dispatch13 == 1 && phi43 < *anon54 && *(uint32_t*)(phi81 + 4) < *anon95 || dispatch13 == 0 && phi18 < *anon28 && phi43 < *anon54 && *(uint32_t*)(phi81 + 4) < *anon95)
			{
				phi111 = phi_in97;
				phi112 = phi_in98;
				phi113 = phi_in99;
				phi114 = phi_in100;
				phi115 = phi_in101;
				phi116 = phi_in102;
				phi117 = phi_in103;
				phi118 = phi_in104;
				phi119 = phi_in105;
				phi120 = phi_in106;
				phi121 = phi_in107;
				phi122 = phi_in108;
				phi123 = phi_in109;
				phi124 = phi_in110;
				phi_in125 = phi123;
				phi_in126 = phi111;
				phi_in127 = phi112;
				phi_in128 = phi113;
				phi_in129 = phi114;
				phi_in130 = phi115;
				phi_in131 = phi116;
				phi_in132 = phi117;
				phi_in133 = phi118;
				phi_in134 = phi119;
				phi_in135 = phi120;
				phi_in136 = phi121;
				phi_in137 = phi124 & 0xffffffff;
			}
			int64_t anon139 = (__sext int64_t)*(uint32_t*)(phi122 + phi123 + 6301632);
			uint32_t* anon138 = (uint32_t*)((anon139 << 2) + 6300992);
			if (*(uint32_t*)(phi121 + 24) < *anon138 && (dispatch13 == 3 || dispatch13 == 2 && *(uint32_t*)(phi81 + 4) < *anon95 || dispatch13 == 1 && phi43 < *anon54 && *(uint32_t*)(phi81 + 4) < *anon95 || dispatch13 == 0 && phi18 < *anon28 && phi43 < *anon54 && *(uint32_t*)(phi81 + 4) < *anon95))
			{
				*anon138 = *(uint32_t*)(phi121 + 28);
				phi_in140 = phi111;
				phi_in141 = phi112;
				phi_in142 = phi113;
				uint32_t anon144 = (uint32_t)phi124 + 8;
				phi_in143 = anon144;
				phi_in145 = phi114;
				phi_in146 = anon144;
				phi_in147 = phi115;
				phi_in148 = phi116;
				phi_in149 = anon144;
				phi_in150 = anon144;
				phi_in151 = phi117;
				phi_in152 = anon144;
				phi_in153 = anon144;
				phi_in154 = anon144;
				phi_in155 = phi118;
				phi_in156 = anon144;
				phi_in157 = anon144;
				phi_in158 = phi119;
				phi_in159 = anon144;
				phi_in160 = anon144;
				phi_in161 = phi120;
				phi_in162 = phi123;
				phi_in163 = anon144;
				phi_in164 = anon144;
				phi_in165 = anon144;
				phi_in166 = phi121;
				phi_in167 = 0;
				phi_in168 = anon139 * 12;
				phi_in169 = phi124;
			}
			if (dispatch13 == 4 || dispatch13 == 3 && *(uint32_t*)(phi121 + 24) < *anon138 || dispatch13 == 2 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 || dispatch13 == 1 && phi43 < *anon54 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 || dispatch13 == 0 && phi18 < *anon28 && phi43 < *anon54 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138)
			{
				phi170 = phi_in140;
				phi171 = phi_in141;
				phi172 = phi_in142;
				phi173 = phi_in143;
				phi174 = phi_in145;
				phi175 = phi_in146;
				phi176 = phi_in147;
				phi177 = phi_in148;
				phi178 = phi_in149;
				phi179 = phi_in150;
				phi180 = phi_in151;
				phi181 = phi_in152;
				phi182 = phi_in153;
				phi183 = phi_in154;
				phi184 = phi_in155;
				phi185 = phi_in156;
				phi186 = phi_in157;
				phi187 = phi_in158;
				phi188 = phi_in159;
				phi189 = phi_in160;
				phi190 = phi_in161;
				phi191 = phi_in162;
				phi192 = phi_in163;
				phi193 = phi_in164;
				phi194 = phi_in165;
				phi195 = phi_in166;
				phi196 = phi_in167;
				phi197 = phi_in168;
				phi198 = phi_in169;
				phi_in199 = phi197;
				phi_in200 = phi170;
				phi_in201 = phi171;
				phi_in202 = phi172;
				phi_in203 = phi173;
				phi_in204 = phi174;
				phi_in205 = phi175;
				phi_in206 = phi176;
				phi_in207 = phi177;
				phi_in208 = phi196;
				phi_in209 = phi178;
				phi_in210 = phi179;
				phi_in211 = phi180;
				phi_in212 = phi181;
				phi_in213 = phi182;
				phi_in214 = phi183;
				phi_in215 = phi184;
				phi_in216 = phi185;
				phi_in217 = phi186;
				phi_in218 = phi187;
				phi_in219 = phi188;
				phi_in220 = phi189;
				phi_in221 = phi190;
				phi_in222 = phi191;
				phi_in223 = phi192;
				phi_in224 = phi193;
				phi_in225 = phi194;
				phi_in226 = phi195;
				phi_in227 = phi198;
			}
			int64_t anon229 = (__sext int64_t)*(uint32_t*)(phi196 + phi197 + 6301632);
			uint32_t* anon228 = (uint32_t*)((anon229 << 2) + 6300992);
			if (*(uint32_t*)(phi195 + 28) < *anon228 && (dispatch13 == 4 || dispatch13 == 3 && *(uint32_t*)(phi121 + 24) < *anon138 || dispatch13 == 2 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 || dispatch13 == 1 && phi43 < *anon54 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 || dispatch13 == 0 && phi18 < *anon28 && phi43 < *anon54 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138))
			{
				*anon228 = *(uint32_t*)(phi195 + 40);
				*(uint32_t*)(phi195 + 120) = (uint32_t)phi198 + 9;
				phi_in230 = 0;
				phi_in231 = phi170;
				phi_in232 = phi171;
				phi_in233 = phi172;
				phi_in234 = phi173;
				phi_in235 = phi174;
				phi_in236 = phi175;
				phi_in237 = phi176;
				phi_in238 = phi177;
				phi_in239 = phi178;
				phi_in240 = phi179;
				phi_in241 = phi180;
				phi_in242 = phi181;
				phi_in243 = phi182;
				phi_in244 = phi183;
				phi_in245 = phi184;
				phi_in246 = phi185;
				phi_in247 = phi186;
				phi_in248 = phi187;
				phi_in249 = phi188;
				phi_in250 = phi189;
				phi_in251 = phi196;
				phi_in252 = phi190;
				phi_in253 = phi191;
				phi_in254 = phi197;
				phi_in255 = phi192;
				phi_in256 = phi193;
				phi_in257 = phi194;
				phi_in258 = phi195;
				phi_in259 = phi198 & 0xffffffff;
			}
			if (dispatch13 == 6 || dispatch13 == 4 && *(uint32_t*)(phi195 + 28) < *anon228 || dispatch13 == 3 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 || dispatch13 == 2 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 || dispatch13 == 1 && phi43 < *anon54 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 || dispatch13 == 0 && phi18 < *anon28 && phi43 < *anon54 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228)
			{
				phi260 = phi_in230;
				phi261 = phi_in231;
				phi262 = phi_in232;
				phi263 = phi_in233;
				phi264 = phi_in234;
				phi265 = phi_in235;
				phi266 = phi_in236;
				phi267 = phi_in237;
				phi268 = phi_in238;
				phi269 = phi_in239;
				phi270 = phi_in240;
				phi271 = phi_in241;
				phi272 = phi_in242;
				phi273 = phi_in243;
				phi274 = phi_in244;
				phi275 = phi_in245;
				phi276 = phi_in246;
				phi277 = phi_in247;
				phi278 = phi_in248;
				phi279 = phi_in249;
				phi280 = phi_in250;
				phi281 = phi_in251;
				phi282 = phi_in252;
				phi283 = phi_in253;
				phi284 = phi_in254;
				phi285 = phi_in255;
				phi286 = phi_in256;
				phi287 = phi_in257;
				phi288 = phi_in258;
				phi289 = phi_in259;
				phi_in290 = phi261;
				phi_in291 = phi262;
				phi_in292 = phi263;
				phi_in293 = phi264;
				phi_in294 = phi265;
				phi_in295 = phi266;
				phi_in296 = phi267;
				phi_in297 = phi268;
				phi_in298 = phi269;
				phi_in299 = phi270;
				phi_in300 = phi271;
				phi_in301 = phi272;
				phi_in302 = phi273;
				phi_in303 = phi274;
				phi_in304 = phi275;
				phi_in305 = phi276;
				phi_in306 = phi277;
				phi_in307 = phi278;
				phi_in308 = phi279;
				phi_in309 = phi280;
				phi_in310 = phi281;
				phi_in311 = phi282;
				phi_in312 = phi283;
				phi_in313 = phi284;
				phi_in314 = phi285;
				phi_in315 = phi286;
				phi_in316 = phi287;
				phi_in317 = phi288;
				phi_in318 = phi289;
			}
			int64_t anon320 = (__sext int64_t)*(uint32_t*)(phi260 + anon229 * 12 + 6301632);
			uint32_t* anon319 = (uint32_t*)((anon320 << 2) + 6300992);
			if (*(uint32_t*)(phi288 + 40) < *anon319 && (dispatch13 == 6 || dispatch13 == 4 && *(uint32_t*)(phi195 + 28) < *anon228 || dispatch13 == 3 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 || dispatch13 == 2 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 || dispatch13 == 1 && phi43 < *anon54 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 || dispatch13 == 0 && phi18 < *anon28 && phi43 < *anon54 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228))
			{
				*anon319 = *(uint32_t*)(phi288 + 44);
				phi_in321 = 0;
				phi_in322 = phi261;
				phi_in323 = phi262;
				phi_in324 = phi263;
				phi_in325 = phi264;
				phi_in326 = phi265;
				phi_in327 = phi266;
				phi_in328 = phi267;
				phi_in329 = phi268;
				phi_in330 = phi269;
				phi_in331 = phi270;
				phi_in332 = phi271;
				phi_in333 = phi272;
				phi_in334 = phi273;
				phi_in335 = phi274;
				phi_in336 = phi275;
				phi_in337 = phi276;
				phi_in338 = phi277;
				phi_in339 = phi278;
				phi_in340 = phi279;
				phi_in341 = phi280;
				phi_in342 = phi281;
				phi_in343 = phi282;
				phi_in344 = phi283;
				phi_in345 = phi284;
				phi_in346 = phi285;
				phi_in347 = phi286;
				phi_in348 = phi287;
				phi_in349 = phi288;
				phi_in350 = phi289;
			}
			if (dispatch13 == 5 || dispatch13 == 6 && *(uint32_t*)(phi288 + 40) < *anon319 || dispatch13 == 4 && *(uint32_t*)(phi195 + 28) < *anon228 && *(uint32_t*)(phi288 + 40) < *anon319 || dispatch13 == 3 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 && *(uint32_t*)(phi288 + 40) < *anon319 || dispatch13 == 2 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 && *(uint32_t*)(phi288 + 40) < *anon319 || dispatch13 == 1 && phi43 < *anon54 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 && *(uint32_t*)(phi288 + 40) < *anon319 || dispatch13 == 0 && phi18 < *anon28 && phi43 < *anon54 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 && *(uint32_t*)(phi288 + 40) < *anon319)
			{
				phi351 = phi_in321;
				uint32_t phi352 = phi_in322;
				uint32_t phi353 = phi_in323;
				uint32_t phi354 = phi_in324;
				uint32_t phi355 = phi_in325;
				uint32_t phi356 = phi_in326;
				uint32_t phi357 = phi_in327;
				uint32_t phi358 = phi_in328;
				uint32_t phi359 = phi_in329;
				uint32_t phi360 = phi_in330;
				uint32_t phi361 = phi_in331;
				uint32_t phi362 = phi_in332;
				uint32_t phi363 = phi_in333;
				uint32_t phi364 = phi_in334;
				uint32_t phi365 = phi_in335;
				uint32_t phi366 = phi_in336;
				uint32_t phi367 = phi_in337;
				uint32_t phi368 = phi_in338;
				uint32_t phi369 = phi_in339;
				uint32_t phi370 = phi_in340;
				uint32_t phi371 = phi_in341;
				uint64_t phi372 = phi_in342;
				uint32_t phi373 = phi_in343;
				uint64_t phi374 = phi_in344;
				uint64_t phi375 = phi_in345;
				uint32_t phi376 = phi_in346;
				uint32_t phi377 = phi_in347;
				uint32_t phi378 = phi_in348;
				uint64_t phi379 = phi_in349;
				uint64_t phi380 = phi_in350;
				uint32_t phi_in381 = phi352;
				uint32_t phi_in382 = phi353;
				uint32_t phi_in383 = phi354;
				uint32_t phi_in384 = phi355;
				uint32_t phi_in385 = phi356;
				uint32_t phi_in386 = phi357;
				uint32_t phi_in387 = phi358;
				uint32_t phi_in388 = phi359;
				uint32_t phi_in389 = phi360;
				uint32_t phi_in390 = phi361;
				uint32_t phi_in391 = phi362;
				uint32_t phi_in392 = phi363;
				uint32_t phi_in393 = phi364;
				uint32_t phi_in394 = phi365;
				uint32_t phi_in395 = phi366;
				uint32_t phi_in396 = phi367;
				uint32_t phi_in397 = phi368;
				uint32_t phi_in398 = phi369;
				uint32_t phi_in399 = phi370;
				uint32_t phi_in400 = phi371;
				uint64_t phi_in401 = phi372;
				uint32_t phi_in402 = phi373;
				uint64_t phi_in403 = phi374;
				uint64_t phi_in404 = phi375;
				uint32_t phi_in405 = phi376;
				uint32_t phi_in406 = phi377;
				uint32_t phi_in407 = phi378;
				uint64_t phi_in408 = phi379;
				uint64_t phi_in409 = phi380;
				int64_t anon411 = (__sext int64_t)*(uint32_t*)(phi351 + anon320 * 12 + 6301632);
				uint32_t* anon410 = (uint32_t*)((anon411 << 2) + 6300992);
				if (*(uint32_t*)(phi379 + 44) < *anon410)
				{
					*anon410 = *(uint32_t*)(phi379 + 64);
					uint32_t phi_in412 = phi352;
					uint32_t phi_in413 = phi353;
					uint32_t phi_in414 = phi354;
					uint32_t phi_in415 = phi355;
					uint64_t phi_in416 = phi379;
					uint32_t phi_in417 = phi356;
					uint32_t phi_in418 = phi357;
					uint32_t phi_in419 = phi358;
					uint32_t phi_in420 = phi359;
					uint32_t phi_in421 = phi360;
					uint32_t phi_in422 = phi361;
					uint32_t phi_in423 = phi362;
					uint32_t phi_in424 = phi363;
					uint32_t phi_in425 = phi364;
					uint32_t phi_in426 = phi365;
					uint32_t phi_in427 = phi366;
					uint32_t phi_in428 = phi367;
					uint32_t phi_in429 = phi368;
					uint32_t phi_in430 = phi369;
					uint32_t phi_in431 = phi370;
					uint32_t phi_in432 = phi371;
					uint64_t phi_in433 = phi372;
					uint32_t phi_in434 = phi373;
					uint64_t phi_in435 = phi374;
					uint64_t phi_in436 = phi375;
					uint32_t phi_in437 = phi376;
					uint32_t phi_in438 = phi377;
					uint32_t phi_in439 = phi378;
					uint64_t phi_in440 = phi380;
					int64_t anon443 = anon411 * 12;
					int64_t anon442 = (__sext int64_t)*(uint32_t*)(anon443 + 6301636);
					uint32_t* anon441 = (uint32_t*)((anon442 << 2) + 6300992);
					if (*(uint32_t*)(phi379 + 64) < *anon441)
					{
						*anon441 = phi365;
						uint32_t phi_in444 = phi352;
						uint32_t phi_in445 = phi353;
						uint32_t phi_in446 = phi354;
						uint32_t phi_in447 = phi355;
						uint32_t phi_in448 = phi356;
						uint32_t phi_in449 = phi357;
						uint32_t phi_in450 = phi358;
						uint32_t phi_in451 = phi359;
						uint32_t phi_in452 = phi360;
						uint64_t phi_in453 = phi379;
						uint32_t phi_in454 = phi361;
						uint64_t phi_in455 = anon442;
						uint32_t phi_in456 = phi362;
						uint32_t phi_in457 = phi366;
						uint32_t phi_in458 = phi369;
						uint64_t phi_in459 = phi372;
						uint32_t phi_in460 = phi373;
						uint64_t phi_in461 = phi374;
						uint64_t phi_in462 = phi375;
						uint64_t phi_in463 = phi380;
						if (phi364 < phi365)
						{
							*(uint32_t*)(phi379 + 124) = phi363;
							*(uint64_t*)(phi379 + 112) = phi375;
							*(uint64_t*)(phi379 + 104) = phi374;
							*(uint32_t*)(phi379 + 96) = phi362;
							*(uint64_t*)(phi379 + 88) = phi372;
							*(uint64_t*)(phi379 + 80) = anon442;
							w(4197873, anon12, (__sext int64_t)phi365, (__zext uint64_t)phi365);
							phi_in444 = *(uint32_t*)(arg1 - 96);
							phi_in445 = *(uint32_t*)(arg1 - 96);
							phi_in446 = *(uint32_t*)(arg1 - 96);
							phi_in447 = *(uint32_t*)(arg1 - 68);
							phi_in448 = *(uint32_t*)(arg1 - 96);
							phi_in449 = *(uint32_t*)(arg1 - 68);
							phi_in450 = *(uint32_t*)(arg1 - 96);
							phi_in451 = *(uint32_t*)(arg1 - 96);
							phi_in452 = *(uint32_t*)(arg1 - 68);
							phi_in453 = anon12;
							phi_in454 = *(uint32_t*)(arg1 - 68);
							phi_in455 = *(uint64_t*)(arg1 - 112);
							phi_in456 = *(uint32_t*)(arg1 - 96);
							phi_in457 = *(uint32_t*)(arg1 - 96);
							phi_in458 = *(uint32_t*)(arg1 - 96);
							phi_in459 = *(uint64_t*)(arg1 - 104);
							phi_in460 = *(uint32_t*)(arg1 - 96);
							phi_in461 = *(uint64_t*)(arg1 - 88);
							phi_in462 = *(uint64_t*)(arg1 - 80);
							phi_in463 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
						}
						uint32_t phi464 = phi_in444;
						uint32_t phi465 = phi_in445;
						uint32_t phi466 = phi_in446;
						uint32_t phi467 = phi_in447;
						uint32_t phi468 = phi_in448;
						uint32_t phi469 = phi_in449;
						uint32_t phi470 = phi_in450;
						uint32_t phi471 = phi_in451;
						uint32_t phi472 = phi_in452;
						uint64_t phi473 = phi_in453;
						uint32_t phi474 = phi_in454;
						uint64_t phi475 = phi_in455;
						uint32_t phi476 = phi_in456;
						uint32_t phi477 = phi_in457;
						uint32_t phi478 = phi_in458;
						uint64_t phi479 = phi_in459;
						uint32_t phi480 = phi_in460;
						uint64_t phi481 = phi_in461;
						uint64_t phi482 = phi_in462;
						uint64_t phi483 = phi_in463;
						uint32_t phi_in484 = phi464;
						uint32_t phi_in485 = phi465;
						uint32_t phi_in486 = phi466;
						uint32_t phi_in487 = phi467;
						uint32_t phi_in488 = phi468;
						uint64_t phi_in489 = phi473;
						uint32_t phi_in490 = phi469;
						uint32_t phi_in491 = phi470;
						uint32_t phi_in492 = phi471;
						uint64_t phi_in493 = phi475;
						uint32_t phi_in494 = phi476;
						uint32_t phi_in495 = phi477;
						uint32_t phi_in496 = phi478;
						uint64_t phi_in497 = phi479;
						uint32_t phi_in498 = phi480;
						uint64_t phi_in499 = phi481;
						uint64_t phi_in500 = phi482;
						uint64_t phi_in501 = phi483;
						int64_t anon502 = (__sext int64_t)*(uint32_t*)(phi475 * 12 + 6301636);
						if (phi474 < *(uint32_t*)((anon502 << 2) + 6300992))
						{
							*(uint32_t*)(phi473 + 124) = phi472;
							*(uint64_t*)(phi473 + 112) = phi482;
							*(uint64_t*)(phi473 + 104) = phi481;
							*(uint32_t*)(phi473 + 96) = phi470;
							*(uint64_t*)(phi473 + 88) = phi479;
							*(uint64_t*)(phi473 + 80) = phi475;
							w(4197793, anon12, anon502, (__zext uint64_t)*(uint32_t*)(phi473 + 120));
							phi_in484 = *(uint32_t*)(arg1 - 96);
							phi_in485 = *(uint32_t*)(arg1 - 96);
							phi_in486 = *(uint32_t*)(arg1 - 96);
							phi_in487 = alloca1.field14;
							phi_in488 = *(uint32_t*)(arg1 - 96);
							phi_in489 = anon12;
							phi_in490 = alloca1.field14;
							phi_in491 = *(uint32_t*)(arg1 - 96);
							phi_in492 = *(uint32_t*)(arg1 - 96);
							phi_in493 = *(uint64_t*)(arg1 - 112);
							phi_in494 = *(uint32_t*)(arg1 - 96);
							phi_in495 = *(uint32_t*)(arg1 - 96);
							phi_in496 = *(uint32_t*)(arg1 - 96);
							phi_in497 = *(uint64_t*)(arg1 - 104);
							phi_in498 = *(uint32_t*)(arg1 - 96);
							phi_in499 = *(uint64_t*)(arg1 - 88);
							phi_in500 = *(uint64_t*)(arg1 - 80);
							phi_in501 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
						}
						uint32_t phi503 = phi_in484;
						uint32_t phi504 = phi_in485;
						uint32_t phi505 = phi_in486;
						uint32_t phi506 = phi_in487;
						uint32_t phi507 = phi_in488;
						uint64_t phi508 = phi_in489;
						uint32_t phi509 = phi_in490;
						uint32_t phi510 = phi_in491;
						uint32_t phi511 = phi_in492;
						uint64_t phi512 = phi_in493;
						uint32_t phi513 = phi_in494;
						uint32_t phi514 = phi_in495;
						uint32_t phi515 = phi_in496;
						uint64_t phi516 = phi_in497;
						uint32_t phi517 = phi_in498;
						uint64_t phi518 = phi_in499;
						uint64_t phi519 = phi_in500;
						uint64_t phi520 = phi_in501;
						phi_in412 = phi503;
						phi_in413 = phi504;
						phi_in414 = phi505;
						phi_in415 = phi506;
						phi_in416 = phi508;
						phi_in417 = phi507;
						phi_in418 = phi509;
						phi_in419 = phi510;
						phi_in420 = phi511;
						phi_in421 = phi509;
						phi_in422 = phi509;
						phi_in423 = phi513;
						phi_in424 = phi509;
						phi_in425 = phi509;
						phi_in426 = phi509;
						phi_in427 = phi514;
						phi_in428 = phi509;
						phi_in429 = phi509;
						phi_in430 = phi515;
						phi_in431 = phi509;
						phi_in432 = phi509;
						phi_in433 = phi516;
						phi_in434 = phi517;
						phi_in435 = phi518;
						phi_in436 = phi519;
						phi_in437 = phi509;
						phi_in438 = phi509;
						phi_in439 = phi509;
						phi_in440 = phi520;
						int64_t anon521 = (__sext int64_t)*(uint32_t*)(phi512 * 12 + 6301640);
						if (phi509 < *(uint32_t*)((anon521 << 2) + 6300992))
						{
							*(uint32_t*)(phi508 + 112) = phi509;
							*(uint64_t*)(phi508 + 104) = phi519;
							*(uint64_t*)(phi508 + 96) = phi518;
							*(uint32_t*)(phi508 + 88) = phi507;
							*(uint64_t*)(phi508 + 80) = phi516;
							w(4197395, anon12, anon521, (__zext uint64_t)*(uint32_t*)(phi508 + 120));
							phi_in412 = *(uint32_t*)(arg1 - 104);
							phi_in413 = *(uint32_t*)(arg1 - 104);
							phi_in414 = *(uint32_t*)(arg1 - 104);
							phi_in415 = *(uint32_t*)(arg1 - 80);
							phi_in416 = anon12;
							phi_in417 = *(uint32_t*)(arg1 - 104);
							phi_in418 = *(uint32_t*)(arg1 - 80);
							phi_in419 = *(uint32_t*)(arg1 - 104);
							phi_in420 = *(uint32_t*)(arg1 - 104);
							phi_in421 = *(uint32_t*)(arg1 - 80);
							phi_in422 = *(uint32_t*)(arg1 - 80);
							phi_in423 = *(uint32_t*)(arg1 - 104);
							phi_in424 = *(uint32_t*)(arg1 - 80);
							phi_in425 = *(uint32_t*)(arg1 - 80);
							phi_in426 = *(uint32_t*)(arg1 - 80);
							phi_in427 = *(uint32_t*)(arg1 - 104);
							phi_in428 = *(uint32_t*)(arg1 - 80);
							phi_in429 = *(uint32_t*)(arg1 - 80);
							phi_in430 = *(uint32_t*)(arg1 - 104);
							phi_in431 = *(uint32_t*)(arg1 - 80);
							phi_in432 = *(uint32_t*)(arg1 - 80);
							phi_in433 = *(uint64_t*)(arg1 - 112);
							phi_in434 = *(uint32_t*)(arg1 - 104);
							phi_in435 = *(uint64_t*)(arg1 - 96);
							phi_in436 = *(uint64_t*)(arg1 - 88);
							phi_in437 = *(uint32_t*)(arg1 - 80);
							phi_in438 = *(uint32_t*)(arg1 - 80);
							phi_in439 = *(uint32_t*)(arg1 - 80);
							phi_in440 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
						}
					}
					uint32_t phi522 = phi_in412;
					uint32_t phi523 = phi_in413;
					uint32_t phi524 = phi_in414;
					uint32_t phi525 = phi_in415;
					uint64_t phi526 = phi_in416;
					uint32_t phi527 = phi_in417;
					uint32_t phi528 = phi_in418;
					uint32_t phi529 = phi_in419;
					uint32_t phi530 = phi_in420;
					uint32_t phi531 = phi_in421;
					uint32_t phi532 = phi_in422;
					uint32_t phi533 = phi_in423;
					uint32_t phi534 = phi_in424;
					uint32_t phi535 = phi_in425;
					uint32_t phi536 = phi_in426;
					uint32_t phi537 = phi_in427;
					uint32_t phi538 = phi_in428;
					uint32_t phi539 = phi_in429;
					uint32_t phi540 = phi_in430;
					uint32_t phi541 = phi_in431;
					uint32_t phi542 = phi_in432;
					uint64_t phi543 = phi_in433;
					uint32_t phi544 = phi_in434;
					uint64_t phi545 = phi_in435;
					uint64_t phi546 = phi_in436;
					uint32_t phi547 = phi_in437;
					uint32_t phi548 = phi_in438;
					uint32_t phi549 = phi_in439;
					uint64_t phi550 = phi_in440;
					phi_in381 = phi522;
					phi_in382 = phi523;
					phi_in383 = phi524;
					phi_in384 = phi525;
					phi_in385 = phi527;
					phi_in386 = phi528;
					phi_in387 = phi529;
					phi_in388 = phi530;
					phi_in389 = phi531;
					phi_in390 = phi532;
					phi_in391 = phi533;
					phi_in392 = phi534;
					phi_in393 = phi535;
					phi_in394 = phi536;
					phi_in395 = phi537;
					phi_in396 = phi538;
					phi_in397 = phi539;
					phi_in398 = phi540;
					phi_in399 = phi541;
					phi_in400 = phi542;
					phi_in401 = phi543;
					phi_in402 = phi544;
					phi_in403 = phi545;
					phi_in404 = phi546;
					phi_in405 = phi547;
					phi_in406 = phi548;
					phi_in407 = phi549;
					phi_in408 = phi526;
					phi_in409 = phi550;
					int64_t anon552 = (__sext int64_t)*(uint32_t*)(anon443 + 6301640);
					uint32_t* anon551 = (uint32_t*)((anon552 << 2) + 6300992);
					if (*(uint32_t*)(phi526 + 64) < *anon551)
					{
						*anon551 = phi525;
						uint32_t phi_in553 = phi522;
						uint32_t phi_in554 = phi523;
						uint32_t phi_in555 = phi524;
						uint32_t phi_in556 = phi525;
						uint32_t phi_in557 = phi527;
						uint32_t phi_in558 = phi529;
						uint32_t phi_in559 = phi530;
						uint32_t phi_in560 = phi533;
						uint32_t phi_in561 = phi537;
						uint32_t phi_in562 = phi540;
						uint64_t phi_in563 = phi543;
						uint32_t phi_in564 = phi544;
						uint64_t phi_in565 = phi545;
						uint64_t phi_in566 = phi546;
						uint64_t phi_in567 = phi526;
						uint64_t phi_in568 = phi550;
						int64_t anon570 = anon552 * 12;
						int64_t anon569 = (__sext int64_t)*(uint32_t*)(anon570 + 6301636);
						if (phi525 < *(uint32_t*)((anon569 << 2) + 6300992))
						{
							*(uint32_t*)(phi526 + 112) = phi525;
							*(uint64_t*)(phi526 + 104) = phi546;
							*(uint64_t*)(phi526 + 96) = phi545;
							*(uint32_t*)(phi526 + 88) = phi523;
							*(uint64_t*)(phi526 + 80) = phi543;
							w(4197948, anon12, anon569, (__zext uint64_t)*(uint32_t*)(phi526 + 120));
							phi_in553 = *(uint32_t*)(arg1 - 104);
							phi_in554 = *(uint32_t*)(arg1 - 104);
							phi_in555 = *(uint32_t*)(arg1 - 104);
							phi_in556 = *(uint32_t*)(arg1 - 80);
							phi_in557 = *(uint32_t*)(arg1 - 104);
							phi_in558 = *(uint32_t*)(arg1 - 104);
							phi_in559 = *(uint32_t*)(arg1 - 104);
							phi_in560 = *(uint32_t*)(arg1 - 104);
							phi_in561 = *(uint32_t*)(arg1 - 104);
							phi_in562 = *(uint32_t*)(arg1 - 104);
							phi_in563 = *(uint64_t*)(arg1 - 112);
							phi_in564 = *(uint32_t*)(arg1 - 104);
							phi_in565 = *(uint64_t*)(arg1 - 96);
							phi_in566 = *(uint64_t*)(arg1 - 88);
							phi_in567 = anon12;
							phi_in568 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
						}
						uint32_t phi571 = phi_in553;
						uint32_t phi572 = phi_in554;
						uint32_t phi573 = phi_in555;
						uint32_t phi574 = phi_in556;
						uint32_t phi575 = phi_in557;
						uint32_t phi576 = phi_in558;
						uint32_t phi577 = phi_in559;
						uint32_t phi578 = phi_in560;
						uint32_t phi579 = phi_in561;
						uint32_t phi580 = phi_in562;
						uint64_t phi581 = phi_in563;
						uint32_t phi582 = phi_in564;
						uint64_t phi583 = phi_in565;
						uint64_t phi584 = phi_in566;
						uint64_t phi585 = phi_in567;
						uint64_t phi586 = phi_in568;
						phi_in381 = phi571;
						phi_in382 = phi572;
						phi_in383 = phi573;
						phi_in384 = phi574;
						phi_in385 = phi575;
						phi_in386 = phi574;
						phi_in387 = phi576;
						phi_in388 = phi577;
						phi_in389 = phi574;
						phi_in390 = phi574;
						phi_in391 = phi578;
						phi_in392 = phi574;
						phi_in393 = phi574;
						phi_in394 = phi574;
						phi_in395 = phi579;
						phi_in396 = phi574;
						phi_in397 = phi574;
						phi_in398 = phi580;
						phi_in399 = phi574;
						phi_in400 = phi574;
						phi_in401 = phi581;
						phi_in402 = phi582;
						phi_in403 = phi583;
						phi_in404 = phi584;
						phi_in405 = phi574;
						phi_in406 = phi574;
						phi_in407 = phi574;
						phi_in408 = phi585;
						phi_in409 = phi586;
						int64_t anon587 = (__sext int64_t)*(uint32_t*)(anon570 + 6301640);
						if (phi574 < *(uint32_t*)((anon587 << 2) + 6300992))
						{
							*(uint32_t*)(phi585 + 112) = phi574;
							*(uint64_t*)(phi585 + 104) = phi584;
							*(uint64_t*)(phi585 + 96) = phi583;
							*(uint32_t*)(phi585 + 88) = phi571;
							*(uint64_t*)(phi585 + 80) = phi581;
							w(4197231, anon12, anon587, (__zext uint64_t)*(uint32_t*)(phi585 + 120));
							phi_in381 = alloca1.field8;
							phi_in382 = alloca1.field8;
							phi_in383 = alloca1.field8;
							phi_in384 = alloca1.field12;
							phi_in385 = alloca1.field8;
							phi_in386 = alloca1.field12;
							phi_in387 = alloca1.field8;
							phi_in388 = alloca1.field8;
							phi_in389 = alloca1.field12;
							phi_in390 = alloca1.field12;
							phi_in391 = alloca1.field8;
							phi_in392 = alloca1.field12;
							phi_in393 = alloca1.field12;
							phi_in394 = alloca1.field12;
							phi_in395 = alloca1.field8;
							phi_in396 = alloca1.field12;
							phi_in397 = alloca1.field12;
							phi_in398 = alloca1.field8;
							phi_in399 = alloca1.field12;
							phi_in400 = alloca1.field12;
							phi_in401 = alloca1.field7;
							phi_in402 = alloca1.field8;
							phi_in403 = alloca1.field10;
							phi_in404 = alloca1.field11;
							phi_in405 = alloca1.field12;
							phi_in406 = alloca1.field12;
							phi_in407 = alloca1.field12;
							phi_in408 = anon12;
							phi_in409 = (__zext uint64_t)alloca1.field8;
						}
					}
				}
				uint32_t phi588 = phi_in381;
				uint32_t phi589 = phi_in382;
				uint32_t phi590 = phi_in383;
				uint32_t phi591 = phi_in384;
				uint32_t phi592 = phi_in385;
				uint32_t phi593 = phi_in386;
				uint32_t phi594 = phi_in387;
				uint32_t phi595 = phi_in388;
				uint32_t phi596 = phi_in389;
				uint32_t phi597 = phi_in390;
				uint32_t phi598 = phi_in391;
				uint32_t phi599 = phi_in392;
				uint32_t phi600 = phi_in393;
				uint32_t phi601 = phi_in394;
				uint32_t phi602 = phi_in395;
				uint32_t phi603 = phi_in396;
				uint32_t phi604 = phi_in397;
				uint32_t phi605 = phi_in398;
				uint32_t phi606 = phi_in399;
				uint32_t phi607 = phi_in400;
				uint64_t phi608 = phi_in401;
				uint32_t phi609 = phi_in402;
				uint64_t phi610 = phi_in403;
				uint64_t phi611 = phi_in404;
				uint32_t phi612 = phi_in405;
				uint32_t phi613 = phi_in406;
				uint32_t phi614 = phi_in407;
				uint64_t phi615 = phi_in408;
				uint64_t phi616 = phi_in409;
				phi_in290 = phi588;
				phi_in291 = phi589;
				phi_in292 = phi590;
				phi_in293 = phi591;
				phi_in294 = phi592;
				phi_in295 = phi593;
				phi_in296 = phi594;
				phi_in297 = phi595;
				phi_in298 = phi596;
				phi_in299 = phi597;
				phi_in300 = phi598;
				phi_in301 = phi599;
				phi_in302 = phi600;
				phi_in303 = phi601;
				phi_in304 = phi602;
				phi_in305 = phi603;
				phi_in306 = phi604;
				phi_in307 = phi605;
				phi_in308 = phi606;
				phi_in309 = phi607;
				phi_in310 = phi608;
				phi_in311 = phi609;
				phi_in312 = phi610;
				phi_in313 = phi611;
				phi_in314 = phi612;
				phi_in315 = phi613;
				phi_in316 = phi614;
				phi_in317 = phi615;
				phi_in318 = phi616;
				phi_in321 = phi351 + 4;
				phi_in322 = phi588;
				phi_in323 = phi589;
				phi_in324 = phi590;
				phi_in325 = phi591;
				phi_in326 = phi592;
				phi_in327 = phi593;
				phi_in328 = phi594;
				phi_in329 = phi595;
				phi_in330 = phi596;
				phi_in331 = phi597;
				phi_in332 = phi598;
				phi_in333 = phi599;
				phi_in334 = phi600;
				phi_in335 = phi601;
				phi_in336 = phi602;
				phi_in337 = phi603;
				phi_in338 = phi604;
				phi_in339 = phi605;
				phi_in340 = phi606;
				phi_in341 = phi607;
				phi_in342 = phi608;
				phi_in343 = phi609;
				phi_in344 = phi610;
				phi_in345 = phi611;
				phi_in346 = phi612;
				phi_in347 = phi613;
				phi_in348 = phi614;
				phi_in349 = phi615;
				phi_in350 = phi616;
				dispatch13 = 5;
			}
			if (*(uint32_t*)(phi288 + 40) >= *anon319 && dispatch13 == 6 || *(uint32_t*)(phi288 + 40) >= *anon319 && dispatch13 == 4 && *(uint32_t*)(phi195 + 28) < *anon228 || *(uint32_t*)(phi288 + 40) >= *anon319 && dispatch13 == 3 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 || *(uint32_t*)(phi288 + 40) >= *anon319 && dispatch13 == 2 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 || *(uint32_t*)(phi288 + 40) >= *anon319 && dispatch13 == 1 && phi43 < *anon54 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 || *(uint32_t*)(phi288 + 40) >= *anon319 && dispatch13 == 0 && phi18 < *anon28 && phi43 < *anon54 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 || dispatch13 == 5 && phi351 == 8 || dispatch13 == 6 && *(uint32_t*)(phi288 + 40) < *anon319 && phi351 == 8 || dispatch13 == 4 && *(uint32_t*)(phi195 + 28) < *anon228 && *(uint32_t*)(phi288 + 40) < *anon319 && phi351 == 8 || dispatch13 == 3 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 && *(uint32_t*)(phi288 + 40) < *anon319 && phi351 == 8 || dispatch13 == 2 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 && *(uint32_t*)(phi288 + 40) < *anon319 && phi351 == 8 || dispatch13 == 1 && phi43 < *anon54 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 && *(uint32_t*)(phi288 + 40) < *anon319 && phi351 == 8 || dispatch13 == 0 && phi18 < *anon28 && phi43 < *anon54 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 && *(uint32_t*)(phi288 + 40) < *anon319 && phi351 == 8)
			{
				uint32_t phi617 = phi_in290;
				uint32_t phi618 = phi_in291;
				uint32_t phi619 = phi_in292;
				uint32_t phi620 = phi_in293;
				uint32_t phi621 = phi_in294;
				uint32_t phi622 = phi_in295;
				uint32_t phi623 = phi_in296;
				uint32_t phi624 = phi_in297;
				uint32_t phi625 = phi_in298;
				uint32_t phi626 = phi_in299;
				uint32_t phi627 = phi_in300;
				uint32_t phi628 = phi_in301;
				uint32_t phi629 = phi_in302;
				uint32_t phi630 = phi_in303;
				uint32_t phi631 = phi_in304;
				uint32_t phi632 = phi_in305;
				uint32_t phi633 = phi_in306;
				uint32_t phi634 = phi_in307;
				uint32_t phi635 = phi_in308;
				uint32_t phi636 = phi_in309;
				uint64_t phi637 = phi_in310;
				uint32_t phi638 = phi_in311;
				uint64_t phi639 = phi_in312;
				uint64_t phi640 = phi_in313;
				uint32_t phi641 = phi_in314;
				uint32_t phi642 = phi_in315;
				uint32_t phi643 = phi_in316;
				uint64_t phi644 = phi_in317;
				uint64_t phi645 = phi_in318;
				phi_in199 = phi640;
				phi_in200 = phi617;
				phi_in201 = phi618;
				phi_in202 = phi619;
				phi_in203 = phi620;
				phi_in204 = phi621;
				phi_in205 = phi622;
				phi_in206 = phi623;
				phi_in207 = phi624;
				phi_in208 = phi637;
				phi_in209 = phi625;
				phi_in210 = phi626;
				phi_in211 = phi627;
				phi_in212 = phi628;
				phi_in213 = phi629;
				phi_in214 = phi630;
				phi_in215 = phi631;
				phi_in216 = phi632;
				phi_in217 = phi633;
				phi_in218 = phi634;
				phi_in219 = phi635;
				phi_in220 = phi636;
				phi_in221 = phi638;
				phi_in222 = phi639;
				phi_in223 = phi641;
				phi_in224 = phi642;
				phi_in225 = phi643;
				phi_in226 = phi644;
				phi_in227 = phi645;
				phi_in230 = phi260 + 4;
				phi_in231 = phi617;
				phi_in232 = phi618;
				phi_in233 = phi619;
				phi_in234 = phi620;
				phi_in235 = phi621;
				phi_in236 = phi622;
				phi_in237 = phi623;
				phi_in238 = phi624;
				phi_in239 = phi625;
				phi_in240 = phi626;
				phi_in241 = phi627;
				phi_in242 = phi628;
				phi_in243 = phi629;
				phi_in244 = phi630;
				phi_in245 = phi631;
				phi_in246 = phi632;
				phi_in247 = phi633;
				phi_in248 = phi634;
				phi_in249 = phi635;
				phi_in250 = phi636;
				phi_in251 = phi637;
				phi_in252 = phi638;
				phi_in253 = phi639;
				phi_in254 = phi640;
				phi_in255 = phi641;
				phi_in256 = phi642;
				phi_in257 = phi643;
				phi_in258 = phi644;
				phi_in259 = phi645;
				dispatch13 = 6;
			}
			if (dispatch13 == 0 && phi18 < *anon28 && phi43 < *anon54 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 && *(uint32_t*)(phi288 + 40) < *anon319 && phi351 == 8 && phi260 == 8 || *(uint32_t*)(phi288 + 40) >= *anon319 && dispatch13 == 3 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 && phi260 == 8 || *(uint32_t*)(phi288 + 40) >= *anon319 && dispatch13 == 4 && *(uint32_t*)(phi195 + 28) < *anon228 && phi260 == 8 || dispatch13 == 1 && phi43 < *anon54 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 && *(uint32_t*)(phi288 + 40) < *anon319 && phi351 == 8 && phi260 == 8 || *(uint32_t*)(phi288 + 40) >= *anon319 && dispatch13 == 6 && phi260 == 8 || *(uint32_t*)(phi195 + 28) >= *anon228 && dispatch13 == 0 && phi18 < *anon28 && phi43 < *anon54 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 || *(uint32_t*)(phi288 + 40) >= *anon319 && dispatch13 == 1 && phi43 < *anon54 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 && phi260 == 8 || *(uint32_t*)(phi288 + 40) >= *anon319 && dispatch13 == 2 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 && phi260 == 8 || *(uint32_t*)(phi195 + 28) >= *anon228 && dispatch13 == 4 || dispatch13 == 6 && *(uint32_t*)(phi288 + 40) < *anon319 && phi351 == 8 && phi260 == 8 || dispatch13 == 5 && phi351 == 8 && phi260 == 8 || *(uint32_t*)(phi288 + 40) >= *anon319 && dispatch13 == 0 && phi18 < *anon28 && phi43 < *anon54 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 && phi260 == 8 || dispatch13 == 2 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 && *(uint32_t*)(phi288 + 40) < *anon319 && phi351 == 8 && phi260 == 8 || *(uint32_t*)(phi195 + 28) >= *anon228 && dispatch13 == 1 && phi43 < *anon54 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 || dispatch13 == 3 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 && *(uint32_t*)(phi288 + 40) < *anon319 && phi351 == 8 && phi260 == 8 || *(uint32_t*)(phi195 + 28) >= *anon228 && dispatch13 == 2 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 || *(uint32_t*)(phi195 + 28) >= *anon228 && dispatch13 == 3 && *(uint32_t*)(phi121 + 24) < *anon138 || dispatch13 == 4 && *(uint32_t*)(phi195 + 28) < *anon228 && *(uint32_t*)(phi288 + 40) < *anon319 && phi351 == 8 && phi260 == 8)
			{
				uint64_t phi646 = phi_in199;
				uint32_t phi647 = phi_in200;
				uint32_t phi648 = phi_in201;
				uint32_t phi649 = phi_in202;
				uint32_t phi650 = phi_in203;
				uint32_t phi651 = phi_in204;
				uint32_t phi652 = phi_in205;
				uint32_t phi653 = phi_in206;
				uint32_t phi654 = phi_in207;
				phi655 = phi_in208;
				uint32_t phi656 = phi_in209;
				uint32_t phi657 = phi_in210;
				uint32_t phi658 = phi_in211;
				uint32_t phi659 = phi_in212;
				uint32_t phi660 = phi_in213;
				uint32_t phi661 = phi_in214;
				uint32_t phi662 = phi_in215;
				uint32_t phi663 = phi_in216;
				uint32_t phi664 = phi_in217;
				uint32_t phi665 = phi_in218;
				uint32_t phi666 = phi_in219;
				uint32_t phi667 = phi_in220;
				uint32_t phi668 = phi_in221;
				uint64_t phi669 = phi_in222;
				uint32_t phi670 = phi_in223;
				uint32_t phi671 = phi_in224;
				uint32_t phi672 = phi_in225;
				uint64_t phi673 = phi_in226;
				uint64_t phi674 = phi_in227;
				phi_in125 = phi669;
				phi_in126 = phi647;
				phi_in127 = phi648;
				phi_in128 = phi649;
				phi_in129 = phi651;
				phi_in130 = phi653;
				phi_in131 = phi654;
				phi_in132 = phi658;
				phi_in133 = phi662;
				phi_in134 = phi665;
				phi_in135 = phi668;
				phi_in136 = phi673;
				phi_in137 = phi674;
				phi_in140 = phi647;
				phi_in141 = phi648;
				phi_in142 = phi649;
				phi_in143 = phi650;
				phi_in145 = phi651;
				phi_in146 = phi652;
				phi_in147 = phi653;
				phi_in148 = phi654;
				phi_in149 = phi656;
				phi_in150 = phi657;
				phi_in151 = phi658;
				phi_in152 = phi659;
				phi_in153 = phi660;
				phi_in154 = phi661;
				phi_in155 = phi662;
				phi_in156 = phi663;
				phi_in157 = phi664;
				phi_in158 = phi665;
				phi_in159 = phi666;
				phi_in160 = phi667;
				phi_in161 = phi668;
				phi_in162 = phi669;
				phi_in163 = phi670;
				phi_in164 = phi671;
				phi_in165 = phi672;
				phi_in166 = phi673;
				phi_in167 = phi655 + 4;
				phi_in168 = phi646;
				phi_in169 = phi674;
				dispatch13 = 4;
			}
			if (*(uint32_t*)(phi288 + 40) >= *anon319 && dispatch13 == 4 && *(uint32_t*)(phi195 + 28) < *anon228 && phi260 == 8 && phi655 == 8 || dispatch13 == 1 && phi43 < *anon54 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 && *(uint32_t*)(phi288 + 40) < *anon319 && phi351 == 8 && phi260 == 8 && phi655 == 8 || *(uint32_t*)(phi288 + 40) >= *anon319 && dispatch13 == 3 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 && phi260 == 8 && phi655 == 8 || *(uint32_t*)(phi288 + 40) >= *anon319 && dispatch13 == 6 && phi260 == 8 && phi655 == 8 || dispatch13 == 2 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 && *(uint32_t*)(phi288 + 40) < *anon319 && phi351 == 8 && phi260 == 8 && phi655 == 8 || *(uint32_t*)(phi121 + 24) >= *anon138 && dispatch13 == 3 || *(uint32_t*)(phi288 + 40) >= *anon319 && dispatch13 == 1 && phi43 < *anon54 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 && phi260 == 8 && phi655 == 8 || *(uint32_t*)(phi121 + 24) >= *anon138 && dispatch13 == 1 && phi43 < *anon54 && *(uint32_t*)(phi81 + 4) < *anon95 || *(uint32_t*)(phi288 + 40) >= *anon319 && dispatch13 == 2 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 && phi260 == 8 && phi655 == 8 || dispatch13 == 0 && phi18 < *anon28 && phi43 < *anon54 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 && *(uint32_t*)(phi288 + 40) < *anon319 && phi351 == 8 && phi260 == 8 && phi655 == 8 || *(uint32_t*)(phi121 + 24) >= *anon138 && dispatch13 == 2 && *(uint32_t*)(phi81 + 4) < *anon95 || dispatch13 == 5 && phi351 == 8 && phi260 == 8 && phi655 == 8 || *(uint32_t*)(phi195 + 28) >= *anon228 && dispatch13 == 3 && *(uint32_t*)(phi121 + 24) < *anon138 && phi655 == 8 || *(uint32_t*)(phi121 + 24) >= *anon138 && dispatch13 == 0 && phi18 < *anon28 && phi43 < *anon54 && *(uint32_t*)(phi81 + 4) < *anon95 || *(uint32_t*)(phi288 + 40) >= *anon319 && dispatch13 == 0 && phi18 < *anon28 && phi43 < *anon54 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 && phi260 == 8 && phi655 == 8 || *(uint32_t*)(phi195 + 28) >= *anon228 && dispatch13 == 4 && phi655 == 8 || *(uint32_t*)(phi195 + 28) >= *anon228 && dispatch13 == 0 && phi18 < *anon28 && phi43 < *anon54 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && phi655 == 8 || dispatch13 == 3 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 && *(uint32_t*)(phi288 + 40) < *anon319 && phi351 == 8 && phi260 == 8 && phi655 == 8 || *(uint32_t*)(phi195 + 28) >= *anon228 && dispatch13 == 2 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && phi655 == 8 || dispatch13 == 6 && *(uint32_t*)(phi288 + 40) < *anon319 && phi351 == 8 && phi260 == 8 && phi655 == 8 || dispatch13 == 4 && *(uint32_t*)(phi195 + 28) < *anon228 && *(uint32_t*)(phi288 + 40) < *anon319 && phi351 == 8 && phi260 == 8 && phi655 == 8 || *(uint32_t*)(phi195 + 28) >= *anon228 && dispatch13 == 1 && phi43 < *anon54 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && phi655 == 8)
			{
				uint64_t phi675 = phi_in125;
				phi676 = phi_in126;
				phi677 = phi_in127;
				phi678 = phi_in128;
				phi679 = phi_in129;
				phi680 = phi_in130;
				phi681 = phi_in131;
				phi682 = phi_in132;
				phi683 = phi_in133;
				phi684 = phi_in134;
				phi685 = phi_in135;
				phi686 = phi_in136;
				phi687 = phi_in137;
				phi_in97 = phi676;
				phi_in98 = phi677;
				phi_in99 = phi678;
				phi_in100 = phi679;
				phi_in101 = phi680;
				phi_in102 = phi681;
				phi_in103 = phi682;
				phi_in104 = phi683;
				phi_in105 = phi684;
				phi_in106 = phi685;
				phi_in107 = phi686;
				phi_in108 = phi122 + 4;
				phi_in109 = phi675;
				phi_in110 = phi687;
				dispatch13 = 3;
			}
			if (phi122 == 8 && (*(uint32_t*)(phi288 + 40) >= *anon319 && dispatch13 == 1 && phi43 < *anon54 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 && phi260 == 8 && phi655 == 8 || *(uint32_t*)(phi288 + 40) >= *anon319 && dispatch13 == 0 && phi18 < *anon28 && phi43 < *anon54 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 && phi260 == 8 && phi655 == 8 || dispatch13 == 6 && *(uint32_t*)(phi288 + 40) < *anon319 && phi351 == 8 && phi260 == 8 && phi655 == 8 || dispatch13 == 5 && phi351 == 8 && phi260 == 8 && phi655 == 8 || *(uint32_t*)(phi121 + 24) >= *anon138 && dispatch13 == 3 || *(uint32_t*)(phi121 + 24) >= *anon138 && dispatch13 == 2 && *(uint32_t*)(phi81 + 4) < *anon95 || *(uint32_t*)(phi121 + 24) >= *anon138 && dispatch13 == 1 && phi43 < *anon54 && *(uint32_t*)(phi81 + 4) < *anon95 || dispatch13 == 4 && *(uint32_t*)(phi195 + 28) < *anon228 && *(uint32_t*)(phi288 + 40) < *anon319 && phi351 == 8 && phi260 == 8 && phi655 == 8 || *(uint32_t*)(phi121 + 24) >= *anon138 && dispatch13 == 0 && phi18 < *anon28 && phi43 < *anon54 && *(uint32_t*)(phi81 + 4) < *anon95 || dispatch13 == 3 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 && *(uint32_t*)(phi288 + 40) < *anon319 && phi351 == 8 && phi260 == 8 && phi655 == 8 || *(uint32_t*)(phi195 + 28) >= *anon228 && dispatch13 == 4 && phi655 == 8 || *(uint32_t*)(phi195 + 28) >= *anon228 && dispatch13 == 3 && *(uint32_t*)(phi121 + 24) < *anon138 && phi655 == 8 || *(uint32_t*)(phi288 + 40) >= *anon319 && dispatch13 == 4 && *(uint32_t*)(phi195 + 28) < *anon228 && phi260 == 8 && phi655 == 8 || *(uint32_t*)(phi288 + 40) >= *anon319 && dispatch13 == 6 && phi260 == 8 && phi655 == 8 || dispatch13 == 2 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 && *(uint32_t*)(phi288 + 40) < *anon319 && phi351 == 8 && phi260 == 8 && phi655 == 8 || *(uint32_t*)(phi288 + 40) >= *anon319 && dispatch13 == 3 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 && phi260 == 8 && phi655 == 8 || *(uint32_t*)(phi195 + 28) >= *anon228 && dispatch13 == 2 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && phi655 == 8 || *(uint32_t*)(phi195 + 28) >= *anon228 && dispatch13 == 1 && phi43 < *anon54 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && phi655 == 8 || dispatch13 == 1 && phi43 < *anon54 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 && *(uint32_t*)(phi288 + 40) < *anon319 && phi351 == 8 && phi260 == 8 && phi655 == 8 || dispatch13 == 0 && phi18 < *anon28 && phi43 < *anon54 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 && *(uint32_t*)(phi288 + 40) < *anon319 && phi351 == 8 && phi260 == 8 && phi655 == 8 || *(uint32_t*)(phi195 + 28) >= *anon228 && dispatch13 == 0 && phi18 < *anon28 && phi43 < *anon54 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && phi655 == 8 || *(uint32_t*)(phi288 + 40) >= *anon319 && dispatch13 == 2 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 && phi260 == 8 && phi655 == 8))
			{
				phi_in82 = phi676;
				phi_in83 = phi677;
				phi_in84 = phi678;
				phi_in85 = phi679;
				phi_in86 = phi680;
				phi_in87 = phi681;
				phi_in88 = *(uint64_t*)(phi686 + 72);
				phi_in89 = phi682;
				phi_in90 = phi683;
				phi_in91 = phi684;
				phi_in92 = phi685;
				phi_in93 = phi687;
				phi_in94 = phi686;
			}
			if (dispatch13 == 6 && *(uint32_t*)(phi288 + 40) < *anon319 && phi351 == 8 && phi260 == 8 && phi655 == 8 && phi122 == 8 || dispatch13 == 5 && phi351 == 8 && phi260 == 8 && phi655 == 8 && phi122 == 8 || *(uint32_t*)(phi195 + 28) >= *anon228 && dispatch13 == 2 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && phi655 == 8 && phi122 == 8 || *(uint32_t*)(phi195 + 28) >= *anon228 && dispatch13 == 3 && *(uint32_t*)(phi121 + 24) < *anon138 && phi655 == 8 && phi122 == 8 || *(uint32_t*)(phi288 + 40) >= *anon319 && dispatch13 == 0 && phi18 < *anon28 && phi43 < *anon54 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 && phi260 == 8 && phi655 == 8 && phi122 == 8 || dispatch13 == 4 && *(uint32_t*)(phi195 + 28) < *anon228 && *(uint32_t*)(phi288 + 40) < *anon319 && phi351 == 8 && phi260 == 8 && phi655 == 8 && phi122 == 8 || *(uint32_t*)(phi195 + 28) >= *anon228 && dispatch13 == 4 && phi655 == 8 && phi122 == 8 || dispatch13 == 3 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 && *(uint32_t*)(phi288 + 40) < *anon319 && phi351 == 8 && phi260 == 8 && phi655 == 8 && phi122 == 8 || *(uint32_t*)(phi288 + 40) >= *anon319 && dispatch13 == 1 && phi43 < *anon54 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 && phi260 == 8 && phi655 == 8 && phi122 == 8 || *(uint32_t*)(phi121 + 24) >= *anon138 && dispatch13 == 0 && phi18 < *anon28 && phi43 < *anon54 && *(uint32_t*)(phi81 + 4) < *anon95 && phi122 == 8 || *(uint32_t*)(phi121 + 24) >= *anon138 && dispatch13 == 1 && phi43 < *anon54 && *(uint32_t*)(phi81 + 4) < *anon95 && phi122 == 8 || dispatch13 == 2 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 && *(uint32_t*)(phi288 + 40) < *anon319 && phi351 == 8 && phi260 == 8 && phi655 == 8 && phi122 == 8 || *(uint32_t*)(phi288 + 40) >= *anon319 && dispatch13 == 2 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 && phi260 == 8 && phi655 == 8 && phi122 == 8 || dispatch13 == 1 && phi43 < *anon54 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 && *(uint32_t*)(phi288 + 40) < *anon319 && phi351 == 8 && phi260 == 8 && phi655 == 8 && phi122 == 8 || *(uint32_t*)(phi121 + 24) >= *anon138 && dispatch13 == 2 && *(uint32_t*)(phi81 + 4) < *anon95 && phi122 == 8 || *(uint32_t*)(phi288 + 40) >= *anon319 && dispatch13 == 3 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 && phi260 == 8 && phi655 == 8 && phi122 == 8 || *(uint32_t*)(phi121 + 24) >= *anon138 && dispatch13 == 3 && phi122 == 8 || *(uint32_t*)(phi288 + 40) >= *anon319 && dispatch13 == 4 && *(uint32_t*)(phi195 + 28) < *anon228 && phi260 == 8 && phi655 == 8 && phi122 == 8 || dispatch13 == 0 && phi18 < *anon28 && phi43 < *anon54 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 && *(uint32_t*)(phi288 + 40) < *anon319 && phi351 == 8 && phi260 == 8 && phi655 == 8 && phi122 == 8 || *(uint32_t*)(phi288 + 40) >= *anon319 && dispatch13 == 6 && phi260 == 8 && phi655 == 8 && phi122 == 8 || *(uint32_t*)(phi81 + 4) >= *anon95 && dispatch13 == 2 || *(uint32_t*)(phi195 + 28) >= *anon228 && dispatch13 == 0 && phi18 < *anon28 && phi43 < *anon54 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && phi655 == 8 && phi122 == 8 || *(uint32_t*)(phi81 + 4) >= *anon95 && dispatch13 == 1 && phi43 < *anon54 || *(uint32_t*)(phi81 + 4) >= *anon95 && dispatch13 == 0 && phi18 < *anon28 && phi43 < *anon54 || *(uint32_t*)(phi195 + 28) >= *anon228 && dispatch13 == 1 && phi43 < *anon54 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && phi655 == 8 && phi122 == 8)
			{
				uint32_t phi688 = phi_in82;
				uint32_t phi689 = phi_in83;
				uint32_t phi690 = phi_in84;
				uint32_t phi691 = phi_in85;
				uint32_t phi692 = phi_in86;
				phi693 = phi_in87;
				phi694 = phi_in88;
				uint32_t phi695 = phi_in89;
				uint32_t phi696 = phi_in90;
				uint32_t phi697 = phi_in91;
				uint32_t phi698 = phi_in92;
				uint64_t phi699 = phi_in93;
				phi700 = phi_in94;
				phi_in56 = phi688;
				phi_in57 = phi689;
				phi_in58 = phi690;
				phi_in59 = phi691;
				phi_in60 = phi692;
				phi_in61 = phi693;
				phi_in62 = phi695;
				phi_in63 = phi696;
				phi_in64 = phi697;
				phi_in65 = phi698;
				phi_in66 = phi699;
				phi_in67 = phi694 + 4;
				phi_in68 = phi700;
				dispatch13 = 2;
			}
			if (phi694 == 8 && (*(uint32_t*)(phi195 + 28) >= *anon228 && dispatch13 == 4 && phi655 == 8 && phi122 == 8 || *(uint32_t*)(phi81 + 4) >= *anon95 && dispatch13 == 1 && phi43 < *anon54 || *(uint32_t*)(phi81 + 4) >= *anon95 && dispatch13 == 0 && phi18 < *anon28 && phi43 < *anon54 || *(uint32_t*)(phi288 + 40) >= *anon319 && dispatch13 == 0 && phi18 < *anon28 && phi43 < *anon54 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 && phi260 == 8 && phi655 == 8 && phi122 == 8 || *(uint32_t*)(phi121 + 24) >= *anon138 && dispatch13 == 0 && phi18 < *anon28 && phi43 < *anon54 && *(uint32_t*)(phi81 + 4) < *anon95 && phi122 == 8 || dispatch13 == 0 && phi18 < *anon28 && phi43 < *anon54 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 && *(uint32_t*)(phi288 + 40) < *anon319 && phi351 == 8 && phi260 == 8 && phi655 == 8 && phi122 == 8 || *(uint32_t*)(phi195 + 28) >= *anon228 && dispatch13 == 3 && *(uint32_t*)(phi121 + 24) < *anon138 && phi655 == 8 && phi122 == 8 || *(uint32_t*)(phi81 + 4) >= *anon95 && dispatch13 == 2 || *(uint32_t*)(phi288 + 40) >= *anon319 && dispatch13 == 1 && phi43 < *anon54 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 && phi260 == 8 && phi655 == 8 && phi122 == 8 || *(uint32_t*)(phi121 + 24) >= *anon138 && dispatch13 == 2 && *(uint32_t*)(phi81 + 4) < *anon95 && phi122 == 8 || *(uint32_t*)(phi288 + 40) >= *anon319 && dispatch13 == 2 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 && phi260 == 8 && phi655 == 8 && phi122 == 8 || dispatch13 == 1 && phi43 < *anon54 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 && *(uint32_t*)(phi288 + 40) < *anon319 && phi351 == 8 && phi260 == 8 && phi655 == 8 && phi122 == 8 || *(uint32_t*)(phi121 + 24) >= *anon138 && dispatch13 == 3 && phi122 == 8 || *(uint32_t*)(phi288 + 40) >= *anon319 && dispatch13 == 3 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 && phi260 == 8 && phi655 == 8 && phi122 == 8 || dispatch13 == 2 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 && *(uint32_t*)(phi288 + 40) < *anon319 && phi351 == 8 && phi260 == 8 && phi655 == 8 && phi122 == 8 || *(uint32_t*)(phi121 + 24) >= *anon138 && dispatch13 == 1 && phi43 < *anon54 && *(uint32_t*)(phi81 + 4) < *anon95 && phi122 == 8 || *(uint32_t*)(phi288 + 40) >= *anon319 && dispatch13 == 4 && *(uint32_t*)(phi195 + 28) < *anon228 && phi260 == 8 && phi655 == 8 && phi122 == 8 || *(uint32_t*)(phi195 + 28) >= *anon228 && dispatch13 == 0 && phi18 < *anon28 && phi43 < *anon54 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && phi655 == 8 && phi122 == 8 || dispatch13 == 4 && *(uint32_t*)(phi195 + 28) < *anon228 && *(uint32_t*)(phi288 + 40) < *anon319 && phi351 == 8 && phi260 == 8 && phi655 == 8 && phi122 == 8 || dispatch13 == 3 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 && *(uint32_t*)(phi288 + 40) < *anon319 && phi351 == 8 && phi260 == 8 && phi655 == 8 && phi122 == 8 || *(uint32_t*)(phi288 + 40) >= *anon319 && dispatch13 == 6 && phi260 == 8 && phi655 == 8 && phi122 == 8 || *(uint32_t*)(phi195 + 28) >= *anon228 && dispatch13 == 1 && phi43 < *anon54 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && phi655 == 8 && phi122 == 8 || dispatch13 == 6 && *(uint32_t*)(phi288 + 40) < *anon319 && phi351 == 8 && phi260 == 8 && phi655 == 8 && phi122 == 8 || dispatch13 == 5 && phi351 == 8 && phi260 == 8 && phi655 == 8 && phi122 == 8 || *(uint32_t*)(phi195 + 28) >= *anon228 && dispatch13 == 2 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && phi655 == 8 && phi122 == 8))
			{
				phi_in46 = *(uint32_t*)(phi700 + 68);
				phi_in47 = phi693;
				phi_in48 = *(uint64_t*)(phi700 + 56);
				phi_in49 = phi693;
				phi_in50 = *(uint32_t*)(phi700 + 68);
				phi_in51 = phi693;
				phi_in52 = *(uint32_t*)(phi700 + 68);
				phi_in53 = phi700;
			}
			if (*(uint32_t*)(phi81 + 4) >= *anon95 && dispatch13 == 1 && phi43 < *anon54 && phi694 == 8 || *(uint32_t*)(phi81 + 4) >= *anon95 && dispatch13 == 2 && phi694 == 8 || *(uint32_t*)(phi121 + 24) >= *anon138 && dispatch13 == 1 && phi43 < *anon54 && *(uint32_t*)(phi81 + 4) < *anon95 && phi122 == 8 && phi694 == 8 || *(uint32_t*)(phi288 + 40) >= *anon319 && dispatch13 == 3 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 && phi260 == 8 && phi655 == 8 && phi122 == 8 && phi694 == 8 || *(uint32_t*)(phi81 + 4) >= *anon95 && dispatch13 == 0 && phi18 < *anon28 && phi43 < *anon54 && phi694 == 8 || phi43 >= *anon54 && dispatch13 == 1 || *(uint32_t*)(phi121 + 24) >= *anon138 && dispatch13 == 0 && phi18 < *anon28 && phi43 < *anon54 && *(uint32_t*)(phi81 + 4) < *anon95 && phi122 == 8 && phi694 == 8 || *(uint32_t*)(phi288 + 40) >= *anon319 && dispatch13 == 2 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 && phi260 == 8 && phi655 == 8 && phi122 == 8 && phi694 == 8 || *(uint32_t*)(phi288 + 40) >= *anon319 && dispatch13 == 6 && phi260 == 8 && phi655 == 8 && phi122 == 8 && phi694 == 8 || dispatch13 == 1 && phi43 < *anon54 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 && *(uint32_t*)(phi288 + 40) < *anon319 && phi351 == 8 && phi260 == 8 && phi655 == 8 && phi122 == 8 && phi694 == 8 || dispatch13 == 0 && phi18 < *anon28 && phi43 < *anon54 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 && *(uint32_t*)(phi288 + 40) < *anon319 && phi351 == 8 && phi260 == 8 && phi655 == 8 && phi122 == 8 && phi694 == 8 || *(uint32_t*)(phi121 + 24) >= *anon138 && dispatch13 == 3 && phi122 == 8 && phi694 == 8 || *(uint32_t*)(phi288 + 40) >= *anon319 && dispatch13 == 4 && *(uint32_t*)(phi195 + 28) < *anon228 && phi260 == 8 && phi655 == 8 && phi122 == 8 && phi694 == 8 || *(uint32_t*)(phi121 + 24) >= *anon138 && dispatch13 == 2 && *(uint32_t*)(phi81 + 4) < *anon95 && phi122 == 8 && phi694 == 8 || *(uint32_t*)(phi288 + 40) >= *anon319 && dispatch13 == 0 && phi18 < *anon28 && phi43 < *anon54 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 && phi260 == 8 && phi655 == 8 && phi122 == 8 && phi694 == 8 || dispatch13 == 5 && phi351 == 8 && phi260 == 8 && phi655 == 8 && phi122 == 8 && phi694 == 8 || *(uint32_t*)(phi195 + 28) >= *anon228 && dispatch13 == 1 && phi43 < *anon54 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && phi655 == 8 && phi122 == 8 && phi694 == 8 || dispatch13 == 2 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 && *(uint32_t*)(phi288 + 40) < *anon319 && phi351 == 8 && phi260 == 8 && phi655 == 8 && phi122 == 8 && phi694 == 8 || *(uint32_t*)(phi195 + 28) >= *anon228 && dispatch13 == 0 && phi18 < *anon28 && phi43 < *anon54 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && phi655 == 8 && phi122 == 8 && phi694 == 8 || dispatch13 == 6 && *(uint32_t*)(phi288 + 40) < *anon319 && phi351 == 8 && phi260 == 8 && phi655 == 8 && phi122 == 8 && phi694 == 8 || *(uint32_t*)(phi195 + 28) >= *anon228 && dispatch13 == 4 && phi655 == 8 && phi122 == 8 && phi694 == 8 || dispatch13 == 4 && *(uint32_t*)(phi195 + 28) < *anon228 && *(uint32_t*)(phi288 + 40) < *anon319 && phi351 == 8 && phi260 == 8 && phi655 == 8 && phi122 == 8 && phi694 == 8 || phi43 >= *anon54 && dispatch13 == 0 && phi18 < *anon28 || *(uint32_t*)(phi288 + 40) >= *anon319 && dispatch13 == 1 && phi43 < *anon54 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 && phi260 == 8 && phi655 == 8 && phi122 == 8 && phi694 == 8 || *(uint32_t*)(phi195 + 28) >= *anon228 && dispatch13 == 3 && *(uint32_t*)(phi121 + 24) < *anon138 && phi655 == 8 && phi122 == 8 && phi694 == 8 || dispatch13 == 3 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 && *(uint32_t*)(phi288 + 40) < *anon319 && phi351 == 8 && phi260 == 8 && phi655 == 8 && phi122 == 8 && phi694 == 8 || *(uint32_t*)(phi195 + 28) >= *anon228 && dispatch13 == 2 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && phi655 == 8 && phi122 == 8 && phi694 == 8)
			{
				phi701 = phi_in46;
				phi702 = phi_in47;
				phi703 = phi_in48;
				uint32_t phi704 = phi_in49;
				uint32_t phi705 = phi_in50;
				uint32_t phi706 = phi_in51;
				uint32_t phi707 = phi_in52;
				phi708 = phi_in53;
				phi_in30 = phi701;
				phi_in31 = phi702;
				phi_in32 = phi704;
				phi_in33 = phi705;
				phi_in34 = phi706;
				phi_in35 = phi707;
				phi_in36 = phi703 + 4;
				phi_in37 = phi708;
				dispatch13 = 1;
			}
			if (phi703 == 8 && (dispatch13 == 1 && phi43 < *anon54 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 && *(uint32_t*)(phi288 + 40) < *anon319 && phi351 == 8 && phi260 == 8 && phi655 == 8 && phi122 == 8 && phi694 == 8 || *(uint32_t*)(phi288 + 40) >= *anon319 && dispatch13 == 2 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 && phi260 == 8 && phi655 == 8 && phi122 == 8 && phi694 == 8 || *(uint32_t*)(phi195 + 28) >= *anon228 && dispatch13 == 4 && phi655 == 8 && phi122 == 8 && phi694 == 8 || *(uint32_t*)(phi121 + 24) >= *anon138 && dispatch13 == 1 && phi43 < *anon54 && *(uint32_t*)(phi81 + 4) < *anon95 && phi122 == 8 && phi694 == 8 || dispatch13 == 2 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 && *(uint32_t*)(phi288 + 40) < *anon319 && phi351 == 8 && phi260 == 8 && phi655 == 8 && phi122 == 8 && phi694 == 8 || *(uint32_t*)(phi121 + 24) >= *anon138 && dispatch13 == 0 && phi18 < *anon28 && phi43 < *anon54 && *(uint32_t*)(phi81 + 4) < *anon95 && phi122 == 8 && phi694 == 8 || *(uint32_t*)(phi195 + 28) >= *anon228 && dispatch13 == 2 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && phi655 == 8 && phi122 == 8 && phi694 == 8 || *(uint32_t*)(phi81 + 4) >= *anon95 && dispatch13 == 1 && phi43 < *anon54 && phi694 == 8 || *(uint32_t*)(phi81 + 4) >= *anon95 && dispatch13 == 2 && phi694 == 8 || *(uint32_t*)(phi288 + 40) >= *anon319 && dispatch13 == 0 && phi18 < *anon28 && phi43 < *anon54 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 && phi260 == 8 && phi655 == 8 && phi122 == 8 && phi694 == 8 || *(uint32_t*)(phi195 + 28) >= *anon228 && dispatch13 == 3 && *(uint32_t*)(phi121 + 24) < *anon138 && phi655 == 8 && phi122 == 8 && phi694 == 8 || dispatch13 == 0 && phi18 < *anon28 && phi43 < *anon54 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 && *(uint32_t*)(phi288 + 40) < *anon319 && phi351 == 8 && phi260 == 8 && phi655 == 8 && phi122 == 8 && phi694 == 8 || *(uint32_t*)(phi288 + 40) >= *anon319 && dispatch13 == 1 && phi43 < *anon54 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 && phi260 == 8 && phi655 == 8 && phi122 == 8 && phi694 == 8 || *(uint32_t*)(phi195 + 28) >= *anon228 && dispatch13 == 0 && phi18 < *anon28 && phi43 < *anon54 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && phi655 == 8 && phi122 == 8 && phi694 == 8 || phi43 >= *anon54 && dispatch13 == 0 && phi18 < *anon28 || dispatch13 == 6 && *(uint32_t*)(phi288 + 40) < *anon319 && phi351 == 8 && phi260 == 8 && phi655 == 8 && phi122 == 8 && phi694 == 8 || phi43 >= *anon54 && dispatch13 == 1 || *(uint32_t*)(phi195 + 28) >= *anon228 && dispatch13 == 1 && phi43 < *anon54 && *(uint32_t*)(phi81 + 4) < *anon95 && *(uint32_t*)(phi121 + 24) < *anon138 && phi655 == 8 && phi122 == 8 && phi694 == 8 || *(uint32_t*)(phi81 + 4) >= *anon95 && dispatch13 == 0 && phi18 < *anon28 && phi43 < *anon54 && phi694 == 8 || dispatch13 == 5 && phi351 == 8 && phi260 == 8 && phi655 == 8 && phi122 == 8 && phi694 == 8 || *(uint32_t*)(phi121 + 24) >= *anon138 && dispatch13 == 2 && *(uint32_t*)(phi81 + 4) < *anon95 && phi122 == 8 && phi694 == 8 || *(uint32_t*)(phi288 + 40) >= *anon319 && dispatch13 == 4 && *(uint32_t*)(phi195 + 28) < *anon228 && phi260 == 8 && phi655 == 8 && phi122 == 8 && phi694 == 8 || *(uint32_t*)(phi288 + 40) >= *anon319 && dispatch13 == 3 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 && phi260 == 8 && phi655 == 8 && phi122 == 8 && phi694 == 8 || dispatch13 == 3 && *(uint32_t*)(phi121 + 24) < *anon138 && *(uint32_t*)(phi195 + 28) < *anon228 && *(uint32_t*)(phi288 + 40) < *anon319 && phi351 == 8 && phi260 == 8 && phi655 == 8 && phi122 == 8 && phi694 == 8 || *(uint32_t*)(phi288 + 40) >= *anon319 && dispatch13 == 6 && phi260 == 8 && phi655 == 8 && phi122 == 8 && phi694 == 8 || *(uint32_t*)(phi121 + 24) >= *anon138 && dispatch13 == 3 && phi122 == 8 && phi694 == 8 || dispatch13 == 4 && *(uint32_t*)(phi195 + 28) < *anon228 && *(uint32_t*)(phi288 + 40) < *anon319 && phi351 == 8 && phi260 == 8 && phi655 == 8 && phi122 == 8 && phi694 == 8))
			{
				phi_in21 = *(uint64_t*)(phi708 + 48);
				phi_in22 = phi702;
				phi_in23 = phi701;
				phi_in24 = (__zext uint64_t)phi702;
				phi_in25 = phi701;
				phi_in26 = phi702;
				phi_in27 = phi708;
				break;
			}
		}
		phi709 = phi_in21;
		uint32_t phi710 = phi_in22;
		uint32_t phi711 = phi_in23;
		uint64_t phi712 = phi_in24;
		uint32_t phi713 = phi_in25;
		uint32_t phi714 = phi_in26;
		uint64_t phi715 = phi_in27;
		phi_in4 = phi710;
		phi_in5 = phi711;
		phi_in7 = phi712;
		phi_in8 = phi713;
		phi_in9 = phi714;
		phi_in10 = phi709 + 4;
		phi_in11 = phi715;
		dispatch13 = 0;
	}
	while (phi709 != 8);
	return;
}
void t(uint64_t arg0)
{
	uint32_t anon13;
	struct { uint8_t field0[24]; uint64_t field1; } alloca1;
	uint32_t anon22;
	alloca1.field1 = arg0;
	uint64_t phi_in2 = 4;
	uint32_t dispatch3 = 0;
	do
	{
		uint32_t* anon12;
		uint64_t phi4;
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
						uint64_t anon7 = anon5 + (((anon5 & 0xffffffff) * 2290649225 + anon8 >> 32 >> 4) - (anon8 >> 32 >> 31) << 32 >> 32) * 4294967266 << 32 >> 30;
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
				anon10 = anon9 + (((anon9 & 0xffffffff) * 2290649225 + anon11 >> 32 >> 4) - (anon11 >> 32 >> 31) << 32 >> 32) * 4294967266 << 32 >> 30;
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
	w(4198271, (uint64_t)&alloca1, anon14 + (((anon14 & 0xffffffff) * 2290649225 + anon15 >> 32 >> 4) - (anon15 >> 32 >> 31) << 32 >> 32) * 4294967266 & 0xffffffff, 0);
	uint64_t phi_in16 = 3;
	do
	{
		uint64_t anon19;
		uint64_t phi17;
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
						anon19 = anon18 + (((anon18 & 0xffffffff) * 2290649225 + anon20 >> 32 >> 4) - (anon20 >> 32 >> 31) << 32 >> 32) * 4294967266 << 32 >> 30;
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
	uint32_t phi_in2;
	uint32_t phi_in1 = 0;
	uint64_t anon4 = arg1 << 32;
	uint32_t* anon3 = (uint32_t*)((anon4 >> 30) + 6301376);
	phi_in2 = *anon3;
	uint32_t dispatch5 = 0;
	while (true)
	{
		uint64_t anon12;
		uint32_t phi_in8;
		uint32_t phi11;
		uint32_t phi_in9;
		uint32_t phi10;
		uint32_t phi7;
		if (dispatch5 == 0)
		{
			uint32_t phi6 = phi_in1;
			phi7 = phi_in2;
			if (phi7 == 0)
			{
				break;
			}
			else 
			{
				*anon3 = phi7 - 1;
				phi_in8 = 3;
				phi_in9 = phi6;
			}
		}
		if (dispatch5 == 1 || phi7 != 0 && dispatch5 == 0)
		{
			phi10 = phi_in8;
			phi11 = phi_in9;
			anon12 = random();
			if (phi11 > 1000)
			{
				break;
			}
		}
		if (phi11 <= 1000 && (dispatch5 == 1 || phi7 != 0 && dispatch5 == 0))
		{
			uint32_t anon14 = phi11 + 1;
			uint32_t anon13 = phi10 - (__zext uint32_t)(anon14 == ((uint32_t)((__zext uint64_t)anon14 * 1374389535 >> 37) - (anon14 >> 31)) * 100);
			phi_in8 = anon13;
			phi_in9 = anon14;
			dispatch5 = 1;
			uint64_t anon16 = anon12 << 32;
			uint32_t anon15 = (uint32_t)anon12 + (uint32_t)(((anon12 & 0xffffffff) * 2290649225 + anon16 >> 36) - (anon16 >> 32 >> 31)) * 4294967266;
			uint64_t anon18 = anon4 >> 32;
			uint32_t anon17 = (uint32_t)anon18;
			if (anon15 != anon17)
			{
				phi_in8 = anon13;
				phi_in9 = anon14;
				dispatch5 = 1;
				uint32_t* anon19 = (uint32_t*)(((__sext int64_t)anon15 << 2) + 6301376);
				if ((*anon19 >> 31 | (__zext uint32_t)(*anon19 == 0)) == 0)
				{
					phi_in8 = anon13;
					phi_in9 = anon14;
					dispatch5 = 1;
					uint64_t anon20 = anon18 * 12;
					if (!(*(uint32_t*)(anon20 + 6301640) == anon15 | anon13 > *anon19))
					{
						phi_in8 = anon13;
						phi_in9 = anon14;
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
							phi_in1 = anon14;
							phi_in2 = 0;
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
	struct { uint8_t field0[48]; uint8_t field1[24]; uint64_t field2; } alloca1;
	alloca1.field2 = arg0;
	getpid(4198911);
	srandom(0);
	(__asm "pcmpeqd xmm0, xmm0")();
	(__asm "movdqa xmm2, xmmword ptr [rip + 0xc6c]")();
	(__asm "movdqa xmm1, xmmword ptr [rip + 0xc74]")();
	uint32_t dispatch2 = 0;
	while (true)
	{
		uint32_t anon60;
		uint64_t phi10;
		uint64_t phi33;
		uint32_t anon69;
		uint64_t phi_in12;
		uint64_t phi14;
		uint64_t phi13;
		uint64_t phi_in11;
		uint64_t phi_in7;
		uint64_t phi9;
		uint64_t phi_in8;
		do
		{
			uint32_t phi48;
			uint64_t phi_in32;
			do
			{
				uint32_t* anon39;
				uint32_t phi_in38;
				uint32_t phi_in37;
				uint32_t phi_in42;
				uint32_t phi_in36;
				uint32_t phi_in41;
				uint32_t phi_in40;
				while (dispatch2 != 3)
				{
					uint32_t phi31;
					uint64_t phi_in3;
					uint64_t phi16;
					uint64_t phi5;
					uint64_t phi6;
					uint64_t phi_in4;
					uint64_t phi_in15;
					if (dispatch2 == 0)
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
						phi_in3 = 6301504;
						phi_in4 = 15;
					}
					if (dispatch2 == 5 || dispatch2 == 0)
					{
						phi5 = phi_in3;
						phi6 = phi_in4;
					}
					if (phi6 == 0)
					{
						if (dispatch2 == 5 || dispatch2 == 0)
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
							phi_in7 = 15;
							phi_in8 = 6300864;
						}
					}
					else if (dispatch2 == 5 || dispatch2 == 0)
					{
						*(uint64_t*)phi5 = 0;
						phi_in3 = phi5 + 8;
						phi_in4 = phi6 - 1;
						dispatch2 = 5;
					}
					if (dispatch2 == 1 || dispatch2 == 5 && phi6 == 0 || dispatch2 == 0 && phi6 == 0)
					{
						phi9 = phi_in7;
						phi10 = phi_in8;
						phi_in11 = 6301248;
						phi_in12 = 15;
					}
					if (dispatch2 == 2 || dispatch2 == 1 && phi9 == 0 || dispatch2 == 5 && phi6 == 0 && phi9 == 0 || dispatch2 == 0 && phi6 == 0 && phi9 == 0)
					{
						phi13 = phi_in11;
						phi14 = phi_in12;
					}
					if (phi14 == 0 && (dispatch2 == 2 || dispatch2 == 1 && phi9 == 0 || dispatch2 == 5 && phi6 == 0 && phi9 == 0 || dispatch2 == 0 && phi6 == 0 && phi9 == 0))
					{
						r(4199339, 0);
						(__asm "movdqa xmm0, xmmword ptr [rsp + 0x20]")();
						(__asm "movdqa xmm2, xmmword ptr [rsp + 0x10]")();
						(__asm "movdqa xmm1, xmmword ptr [rsp]")();
						phi_in15 = 6301636;
					}
					if (dispatch2 == 4 || dispatch2 == 2 && phi14 == 0 || dispatch2 == 1 && phi9 == 0 && phi14 == 0 || dispatch2 == 5 && phi6 == 0 && phi9 == 0 && phi14 == 0 || dispatch2 == 0 && phi6 == 0 && phi9 == 0 && phi14 == 0)
					{
						uint32_t phi_in20;
						uint32_t* anon22;
						uint32_t phi_in23;
						uint32_t phi_in24;
						uint32_t phi_in21;
						uint32_t phi_in19;
						uint32_t phi_in25;
						phi16 = phi_in15;
						uint32_t* anon17 = (uint32_t*)(phi16 + 4);
						uint32_t* anon18 = (uint32_t*)phi16;
						if (*anon17 < *anon18)
						{
							*anon18 = *anon17;
							*anon17 = *anon18;
							phi_in19 = *anon18;
							phi_in20 = *anon17;
							anon22 = (uint32_t*)(phi16 - 4);
							phi_in21 = *anon22;
							phi_in23 = *anon18;
							phi_in24 = *anon17;
						}
						else 
						{
							phi_in19 = *anon17;
							phi_in20 = *anon18;
							phi_in25 = *anon22;
						}
						if (*anon17 < *anon18 && *anon17 < *anon22 || *anon17 >= *anon18 && *anon18 < *anon22)
						{
							uint32_t phi26 = phi_in19;
							uint32_t phi27 = phi_in20;
							*anon18 = *anon22;
							*anon22 = phi27;
							phi_in21 = phi27;
							phi_in23 = phi26;
							phi_in24 = *anon22;
						}
						if (*anon17 < *anon18 && *anon17 < *anon22 || *anon17 >= *anon18 && *anon18 < *anon22 || *anon17 >= *anon22 && *anon17 < *anon18)
						{
							uint32_t phi28 = phi_in21;
							uint32_t phi29 = phi_in23;
							uint32_t phi30 = phi_in24;
							phi_in25 = phi28;
							if (phi29 < phi30)
							{
								*anon17 = phi30;
								*anon18 = phi29;
								phi_in25 = *anon22;
							}
						}
						phi31 = phi_in25;
						phi_in32 = 6301636;
						if (phi31 == 255)
						{
							break;
						}
					}
					if (phi31 != 255 && (dispatch2 == 4 || dispatch2 == 2 && phi14 == 0 || dispatch2 == 1 && phi9 == 0 && phi14 == 0 || dispatch2 == 5 && phi6 == 0 && phi9 == 0 && phi14 == 0 || dispatch2 == 0 && phi6 == 0 && phi9 == 0 && phi14 == 0))
					{
						phi_in32 = 6301636;
						phi_in15 = phi16 + 12;
						dispatch2 = 4;
						if (phi16 == 6301984)
						{
							break;
						}
					}
				}
				phi33 = phi_in32;
				uint32_t* anon34 = (uint32_t*)(phi33 + 4);
				uint32_t* anon35 = (uint32_t*)phi33;
				if (*anon34 < *anon35)
				{
					*anon35 = *anon34;
					*anon34 = *anon35;
					phi_in36 = *anon35;
					phi_in37 = *anon34;
					anon39 = (uint32_t*)(phi33 - 4);
					phi_in38 = *anon39;
					phi_in40 = *anon35;
					phi_in41 = *anon34;
				}
				else 
				{
					phi_in36 = *anon34;
					phi_in37 = *anon35;
					phi_in42 = *anon39;
				}
				if (*anon34 < *anon35 && *anon34 < *anon39 || *anon34 >= *anon35 && *anon35 < *anon39)
				{
					uint32_t phi43 = phi_in36;
					uint32_t phi44 = phi_in37;
					*anon35 = *anon39;
					*anon39 = phi44;
					phi_in38 = phi44;
					phi_in40 = phi43;
					phi_in41 = *anon39;
				}
				if (*anon34 < *anon35 && *anon34 < *anon39 || *anon34 >= *anon35 && *anon35 < *anon39 || *anon34 >= *anon39 && *anon34 < *anon35)
				{
					uint32_t phi45 = phi_in38;
					uint32_t phi46 = phi_in40;
					uint32_t phi47 = phi_in41;
					phi_in42 = phi45;
					if (phi46 < phi47)
					{
						*anon34 = phi47;
						*anon35 = phi46;
						phi_in42 = *anon39;
					}
				}
				phi48 = phi_in42;
				dispatch2 = 0;
			}
			while (phi48 == 255);
			phi_in32 = phi33 + 12;
			dispatch2 = 3;
		}
		while (phi33 != 6301984);
		uint64_t phi_in49 = 4;
		uint32_t dispatch50 = 0;
		do
		{
			uint64_t phi51;
			uint32_t* anon59;
			do
			{
				uint64_t anon57;
				do
				{
					while (dispatch50 != 1)
					{
						if (dispatch50 == 0)
						{
							phi51 = phi_in49;
							uint64_t anon52 = random();
							phi_in49 = phi51;
							dispatch50 = 0;
							uint64_t anon55 = anon52 << 32;
							uint64_t anon54 = anon52 + (((anon52 & 0xffffffff) * 2290649225 + anon55 >> 32 >> 4) - (anon55 >> 32 >> 31) << 32 >> 32) * 4294967266 << 32 >> 30;
							uint32_t* anon53 = (uint32_t*)(anon54 + 6301504);
							if (*anon53 == 0)
							{
								phi_in49 = phi51;
								dispatch50 = 0;
								if (*(uint32_t*)(anon54 + 6300864) == 0)
								{
									*anon53 = 1;
									break;
								}
							}
						}
					}
					uint64_t anon56 = random();
					dispatch50 = 1;
					uint64_t anon58 = anon56 << 32;
					anon57 = anon56 + (((anon56 & 0xffffffff) * 2290649225 + anon58 >> 32 >> 4) - (anon58 >> 32 >> 31) << 32 >> 32) * 4294967266 << 32 >> 30;
				}
				while (*(uint32_t*)(anon57 + 6301504) != 0);
				dispatch50 = 1;
				anon59 = (uint32_t*)(anon57 + 6300864);
			}
			while (*anon59 != 0);
			*anon59 = 1;
			anon60 = (uint32_t)phi51 - 1;
			phi_in49 = (__zext uint64_t)anon60;
			dispatch50 = 0;
		}
		while (anon60 != 0);
		uint64_t anon61 = random();
		uint64_t anon62 = anon61 << 32;
		w(4198271, (uint64_t)&alloca1.field1, anon61 + (((anon61 & 0xffffffff) * 2290649225 + anon62 >> 32 >> 4) - (anon62 >> 32 >> 31) << 32 >> 32) * 4294967266 & 0xffffffff, 0);
		uint64_t phi_in63 = 3;
		do
		{
			uint32_t* anon68;
			uint64_t phi64;
			uint64_t anon66;
			do
			{
				do
				{
					do
					{
						do
						{
							phi64 = phi_in63;
							uint64_t anon65 = random();
							phi_in63 = phi64;
							uint64_t anon67 = anon65 << 32;
							anon66 = anon65 + (((anon65 & 0xffffffff) * 2290649225 + anon67 >> 32 >> 4) - (anon67 >> 32 >> 31) << 32 >> 32) * 4294967266 << 32 >> 30;
						}
						while (*(uint32_t*)(anon66 + 6301504) != 0);
						phi_in63 = phi64;
					}
					while (*(uint32_t*)(anon66 + 6300864) != 0);
					phi_in63 = phi64;
					anon68 = (uint32_t*)(anon66 + 6301120);
				}
				while (*anon68 != 0);
				phi_in63 = phi64;
			}
			while (*(uint32_t*)(anon66 + 6300992) == 0);
			*anon68 = 1;
			anon69 = (uint32_t)phi64 - 1;
			phi_in63 = (__zext uint64_t)anon69;
		}
		while (anon69 != 0);
		while (true)
		{
			uint64_t anon70 = random();
			uint64_t anon71 = anon70 << 32;
			*(uint32_t*)0x60292c = (uint32_t)anon70 + (uint32_t)(((anon70 & 0xffffffff) * 2290649225 + anon71 >> 32 >> 4) - (anon71 >> 32 >> 31)) * 4294967266;
		}
		*(uint64_t*)phi13 = 0;
		phi_in11 = phi13 + 8;
		phi_in12 = phi14 - 1;
		dispatch2 = 2;
		*(uint64_t*)phi10 = 0;
		phi_in7 = phi9 - 1;
		phi_in8 = phi10 + 8;
		dispatch2 = 1;
	}
}
void q(uint64_t arg0, uint64_t arg1)
{
	uint64_t phi_in17;
	struct { uint8_t field0[56]; uint64_t field1; } alloca1;
	alloca1.field1 = arg0;
	uint32_t* anon2 = (uint32_t*)0x602928;
	if (*anon2 == 0)
	{
		__indirect_jump(*(uint64_t*)0x6023f8);
	}
	else 
	{
		uint32_t* anon8;
		uint8_t* anon29;
		uint32_t dispatch12;
		*anon2 = *anon2 - 1;
		printf((uint8_t*)0x401ca7);
		uint64_t phi_in3 = arg1 & 0xffffffff;
		uint32_t phi_in4 = 0;
		uint32_t dispatch5 = 0;
		while (true)
		{
			uint64_t phi28;
			uint32_t anon24;
			uint32_t anon22;
			uint64_t anon21;
			uint8_t anon19;
			uint64_t phi_in27;
			uint32_t anon13;
			uint32_t phi7;
			uint16_t** anon14;
			uint64_t phi6;
			uint64_t phi20;
			if (dispatch5 == 0)
			{
				phi6 = phi_in3;
				phi7 = phi_in4;
				anon8 = (uint32_t*)0x602490;
				*anon8 = *anon8 + phi7;
			}
			struct _IO_FILE** anon10 = (struct _IO_FILE**)0x602480;
			uint32_t anon9 = _IO_getc(*anon10);
			uint8_t anon11 = (uint8_t)anon9;
			if (anon11 == 10)
			{
				dispatch12 = 2;
				anon13 = *anon2 >> 31 | (__zext uint32_t)(*anon2 == 0);
				if (anon13 == 0)
				{
					break;
				}
			}
			if (anon11 != 10 || anon13 != 0 && anon11 == 10)
			{
				anon14 = __ctype_b_loc();
				dispatch5 = 1;
			}
			uint64_t* anon15 = (uint64_t*)anon14;
			if ((*(uint8_t*)(*anon15 + ((__sext int64_t)anon11 << 1 | 1)) & 8) != 0)
			{
				if (anon11 != 10 || anon13 != 0 && anon11 == 10)
				{
					uint32_t anon16 = _IO_getc(*anon10);
					uint64_t anon18 = (__zext uint64_t)((anon9 << 24 >> 24) - 48);
					phi_in17 = anon18;
					if ((*(uint8_t*)(*anon15 + ((__zext uint64_t)anon16 << 56 >> 55 | 1)) & 8) != 0)
					{
						anon19 = (uint8_t)(anon16 >> 8);
						phi_in17 = (__sext int64_t)anon19 + (anon18 * 10 & 0x1fffffffe) + 4294967248;
					}
					phi20 = phi_in17;
				}
				anon21 = (phi6 << 32 >> 32) * 12;
				anon22 = (uint32_t)phi20;
				if (*(uint32_t*)(anon21 + 6301632) != anon22 && anon22 != *(uint32_t*)(anon21 + 6301636) && anon22 != *(uint32_t*)(anon21 + 6301640))
				{
					if (anon11 != 10 || anon13 != 0 && anon11 == 10)
					{
						uint64_t anon23 = random();
						dispatch12 = 0;
						anon24 = (uint32_t)anon23 + ((uint32_t)((anon23 & 0xffffffff) * 1431655766 >> 32) - (uint32_t)(anon23 << 32 >> 32 >> 31)) * 4294967293;
						if (anon24 == 1)
						{
							break;
						}
					}
					if (anon24 != 1 && (anon11 != 10 || anon13 != 0 && anon11 == 10))
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
						uint64_t anon25 = random();
						uint64_t anon26 = anon25 << 32;
						w(4199968, (uint64_t)&alloca1, anon25 + (((anon25 & 0xffffffff) * 2290649225 + anon26 >> 32 >> 4) - (anon26 >> 32 >> 31) << 32 >> 32) * 4294967266 & 0xffffffff, 0);
						*anon8 = *anon8 - 100;
						phi_in27 = phi6;
					}
				}
			}
			if (anon13 != 0 && anon11 == 10 && (*(uint8_t*)(*anon15 + ((__sext int64_t)anon11 << 1 | 1)) & 8) != 0 && *(uint32_t*)(anon21 + 6301632) == anon22 || anon11 != 10 && (*(uint8_t*)(*anon15 + ((__sext int64_t)anon11 << 1 | 1)) & 8) != 0 && *(uint32_t*)(anon21 + 6301632) == anon22 || anon13 != 0 && *(uint32_t*)(anon21 + 6301632) != anon22 && anon11 == 10 && (*(uint8_t*)(*anon15 + ((__sext int64_t)anon11 << 1 | 1)) & 8) != 0 && anon22 == *(uint32_t*)(anon21 + 6301636) || anon11 != 10 && *(uint32_t*)(anon21 + 6301632) != anon22 && (*(uint8_t*)(*anon15 + ((__sext int64_t)anon11 << 1 | 1)) & 8) != 0 && anon22 == *(uint32_t*)(anon21 + 6301636) || anon13 != 0 && *(uint32_t*)(anon21 + 6301632) != anon22 && anon22 != *(uint32_t*)(anon21 + 6301636) && anon11 == 10 && (*(uint8_t*)(*anon15 + ((__sext int64_t)anon11 << 1 | 1)) & 8) != 0 && anon22 == *(uint32_t*)(anon21 + 6301640) || anon11 != 10 && *(uint32_t*)(anon21 + 6301632) != anon22 && anon22 != *(uint32_t*)(anon21 + 6301636) && (*(uint8_t*)(*anon15 + ((__sext int64_t)anon11 << 1 | 1)) & 8) != 0 && anon22 == *(uint32_t*)(anon21 + 6301640))
			{
				dispatch12 = 3;
				if (*(uint32_t*)((phi20 << 32 >> 30) + 6300992) == 0)
				{
					break;
				}
			}
			if (*(uint32_t*)((phi20 << 32 >> 30) + 6300992) != 0 && (anon13 != 0 && anon11 == 10 && (*(uint8_t*)(*anon15 + ((__sext int64_t)anon11 << 1 | 1)) & 8) != 0 && *(uint32_t*)(anon21 + 6301632) == anon22 || anon11 != 10 && (*(uint8_t*)(*anon15 + ((__sext int64_t)anon11 << 1 | 1)) & 8) != 0 && *(uint32_t*)(anon21 + 6301632) == anon22 || anon13 != 0 && *(uint32_t*)(anon21 + 6301632) != anon22 && anon11 == 10 && (*(uint8_t*)(*anon15 + ((__sext int64_t)anon11 << 1 | 1)) & 8) != 0 && anon22 == *(uint32_t*)(anon21 + 6301636) || anon11 != 10 && *(uint32_t*)(anon21 + 6301632) != anon22 && (*(uint8_t*)(*anon15 + ((__sext int64_t)anon11 << 1 | 1)) & 8) != 0 && anon22 == *(uint32_t*)(anon21 + 6301636) || anon13 != 0 && *(uint32_t*)(anon21 + 6301632) != anon22 && anon22 != *(uint32_t*)(anon21 + 6301636) && anon11 == 10 && (*(uint8_t*)(*anon15 + ((__sext int64_t)anon11 << 1 | 1)) & 8) != 0 && anon22 == *(uint32_t*)(anon21 + 6301640) || anon11 != 10 && *(uint32_t*)(anon21 + 6301632) != anon22 && anon22 != *(uint32_t*)(anon21 + 6301636) && (*(uint8_t*)(*anon15 + ((__sext int64_t)anon11 << 1 | 1)) & 8) != 0 && anon22 == *(uint32_t*)(anon21 + 6301640)))
			{
				phi_in27 = phi20 & 0xffffffff;
			}
			if (anon13 != 0 && *(uint32_t*)((phi20 << 32 >> 30) + 6300992) != 0 && anon11 == 10 && (*(uint8_t*)(*anon15 + ((__sext int64_t)anon11 << 1 | 1)) & 8) != 0 && *(uint32_t*)(anon21 + 6301632) == anon22 || anon11 != 10 && *(uint32_t*)((phi20 << 32 >> 30) + 6300992) != 0 && (*(uint8_t*)(*anon15 + ((__sext int64_t)anon11 << 1 | 1)) & 8) != 0 && *(uint32_t*)(anon21 + 6301632) == anon22 || anon13 != 0 && *(uint32_t*)(anon21 + 6301632) != anon22 && *(uint32_t*)((phi20 << 32 >> 30) + 6300992) != 0 && anon11 == 10 && (*(uint8_t*)(*anon15 + ((__sext int64_t)anon11 << 1 | 1)) & 8) != 0 && anon22 == *(uint32_t*)(anon21 + 6301636) || anon11 != 10 && *(uint32_t*)(anon21 + 6301632) != anon22 && *(uint32_t*)((phi20 << 32 >> 30) + 6300992) != 0 && (*(uint8_t*)(*anon15 + ((__sext int64_t)anon11 << 1 | 1)) & 8) != 0 && anon22 == *(uint32_t*)(anon21 + 6301636) || anon13 != 0 && *(uint32_t*)(anon21 + 6301632) != anon22 && anon22 != *(uint32_t*)(anon21 + 6301636) && *(uint32_t*)((phi20 << 32 >> 30) + 6300992) != 0 && anon11 == 10 && (*(uint8_t*)(*anon15 + ((__sext int64_t)anon11 << 1 | 1)) & 8) != 0 && anon22 == *(uint32_t*)(anon21 + 6301640) || anon11 != 10 && *(uint32_t*)(anon21 + 6301632) != anon22 && anon22 != *(uint32_t*)(anon21 + 6301636) && *(uint32_t*)((phi20 << 32 >> 30) + 6300992) != 0 && (*(uint8_t*)(*anon15 + ((__sext int64_t)anon11 << 1 | 1)) & 8) != 0 && anon22 == *(uint32_t*)(anon21 + 6301640) || anon13 != 0 && *(uint32_t*)(anon21 + 6301632) != anon22 && anon22 != *(uint32_t*)(anon21 + 6301636) && anon22 != *(uint32_t*)(anon21 + 6301640) && anon24 != 1 && anon11 == 10 && (*(uint8_t*)(*anon15 + ((__sext int64_t)anon11 << 1 | 1)) & 8) != 0 || anon11 != 10 && *(uint32_t*)(anon21 + 6301632) != anon22 && anon22 != *(uint32_t*)(anon21 + 6301636) && anon22 != *(uint32_t*)(anon21 + 6301640) && anon24 != 1 && (*(uint8_t*)(*anon15 + ((__sext int64_t)anon11 << 1 | 1)) & 8) != 0)
			{
				phi28 = phi_in27;
				dispatch12 = 2;
				if (anon19 == 10)
				{
					break;
				}
			}
			if (anon19 != 10 && (anon13 != 0 && *(uint32_t*)((phi20 << 32 >> 30) + 6300992) != 0 && anon11 == 10 && (*(uint8_t*)(*anon15 + ((__sext int64_t)anon11 << 1 | 1)) & 8) != 0 && *(uint32_t*)(anon21 + 6301632) == anon22 || anon11 != 10 && *(uint32_t*)((phi20 << 32 >> 30) + 6300992) != 0 && (*(uint8_t*)(*anon15 + ((__sext int64_t)anon11 << 1 | 1)) & 8) != 0 && *(uint32_t*)(anon21 + 6301632) == anon22 || anon13 != 0 && *(uint32_t*)(anon21 + 6301632) != anon22 && *(uint32_t*)((phi20 << 32 >> 30) + 6300992) != 0 && anon11 == 10 && (*(uint8_t*)(*anon15 + ((__sext int64_t)anon11 << 1 | 1)) & 8) != 0 && anon22 == *(uint32_t*)(anon21 + 6301636) || anon11 != 10 && *(uint32_t*)(anon21 + 6301632) != anon22 && *(uint32_t*)((phi20 << 32 >> 30) + 6300992) != 0 && (*(uint8_t*)(*anon15 + ((__sext int64_t)anon11 << 1 | 1)) & 8) != 0 && anon22 == *(uint32_t*)(anon21 + 6301636) || anon13 != 0 && *(uint32_t*)(anon21 + 6301632) != anon22 && anon22 != *(uint32_t*)(anon21 + 6301636) && *(uint32_t*)((phi20 << 32 >> 30) + 6300992) != 0 && anon11 == 10 && (*(uint8_t*)(*anon15 + ((__sext int64_t)anon11 << 1 | 1)) & 8) != 0 && anon22 == *(uint32_t*)(anon21 + 6301640) || anon11 != 10 && *(uint32_t*)(anon21 + 6301632) != anon22 && anon22 != *(uint32_t*)(anon21 + 6301636) && *(uint32_t*)((phi20 << 32 >> 30) + 6300992) != 0 && (*(uint8_t*)(*anon15 + ((__sext int64_t)anon11 << 1 | 1)) & 8) != 0 && anon22 == *(uint32_t*)(anon21 + 6301640) || anon13 != 0 && *(uint32_t*)(anon21 + 6301632) != anon22 && anon22 != *(uint32_t*)(anon21 + 6301636) && anon22 != *(uint32_t*)(anon21 + 6301640) && anon24 != 1 && anon11 == 10 && (*(uint8_t*)(*anon15 + ((__sext int64_t)anon11 << 1 | 1)) & 8) != 0 || anon11 != 10 && *(uint32_t*)(anon21 + 6301632) != anon22 && anon22 != *(uint32_t*)(anon21 + 6301636) && anon22 != *(uint32_t*)(anon21 + 6301640) && anon24 != 1 && (*(uint8_t*)(*anon15 + ((__sext int64_t)anon11 << 1 | 1)) & 8) != 0))
			{
				phi_in3 = phi28;
				phi_in4 = phi7 - 20;
				dispatch5 = 0;
				dispatch12 = 1;
				if (phi7 == 196)
				{
					break;
				}
			}
		}
		if (dispatch12 == 3)
		{
			puts((uint8_t*)0x401cd5);
			*anon8 = *anon2 * 100 + *anon8 + 500;
			anon29 = (uint8_t*)0x401cf1;
			printf(anon29);
			exit(0);
		}
		if (dispatch12 == 2)
		{
			*anon8 = *anon8 - 50;
			__indirect_jump(*(uint64_t*)0x602408);
		}
		if (dispatch12 == 1)
		{
			return;
		}
		if (dispatch12 == 0)
		{
			puts((uint8_t*)0x401dd0);
			*anon8 = *anon8 - 100;
			printf(anon29);
			exit(0);
		}
	}
}
struct nn(uint64_t arg0)
{
	uint32_t phi_in54;
	uint32_t* anon20;
	uint32_t dispatch16;
	uint32_t dispatch11;
	uint32_t* anon18;
	uint64_t phi_in10;
	uint64_t phi_in9;
	int64_t anon8;
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
										anon3 = (__sext int64_t)(anon4 + ((uint32_t)((anon1 & 0xffffffff) * 6585616521 >> 36) - (anon4 >> 31)) * 4294967266);
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
		uint16_t** anon38;
		uint8_t anon31;
		uint32_t anon29;
		struct _IO_FILE** anon30;
		uint16_t** phi_in34;
		uint32_t* anon24;
		uint16_t** anon33;
		uint64_t anon25;
		uint64_t anon15;
		uint32_t anon19;
		uint32_t* anon14;
		uint64_t phi12;
		uint64_t phi13;
		uint32_t* anon22;
		uint32_t* anon21;
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
					dispatch16 = 2;
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
			if (*anon22 == 0 && (*(uint32_t*)(anon15 + 6300992) != 0 && *anon14 == 0 && *(uint32_t*)(anon15 + 6300864) == 0 && anon19 == *anon20 && *anon21 == 3 || *anon14 != 0 && *(uint32_t*)(anon15 + 6300992) != 0 && *(uint32_t*)(anon15 + 6300864) == 0 && anon19 == *anon20 && *anon21 == 3 || *(uint32_t*)(anon15 + 6300992) != 0 && anon19 != *anon20 && *anon14 == 0 && *(uint32_t*)(anon15 + 6300864) == 0 || *anon14 != 0 && anon19 != *anon20 && *(uint32_t*)(anon15 + 6300992) != 0 && *(uint32_t*)(anon15 + 6300864) == 0))
			{
				uint64_t phi_in26;
				if (*(uint32_t*)(anon15 + 6300992) < 3)
				{
					puts((uint8_t*)0x401d7b);
				}
				anon25 = phi12 * 12;
				anon24 = (uint32_t*)(anon25 + 6301632);
				int64_t anon23 = (__sext int64_t)*anon24;
				if (*(uint32_t*)((anon23 << 2) + 6300864) == 0 && *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon25 + 6301636) << 2) + 6300864) == 0)
				{
					phi_in26 = anon23;
				}
				if (*(uint32_t*)((anon23 << 2) + 6300864) != 0 || *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon25 + 6301636) << 2) + 6300864) != 0 && *(uint32_t*)((anon23 << 2) + 6300864) == 0 || *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon25 + 6301640) << 2) + 6300864) != 0 && *(uint32_t*)((anon23 << 2) + 6300864) == 0 && *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon25 + 6301636) << 2) + 6300864) == 0)
				{
					puts((uint8_t*)0x401d8e);
					phi_in26 = (__sext int64_t)*anon24;
				}
				uint64_t phi27 = phi_in26;
				if (*(uint32_t*)((phi27 << 2) + 6301504) != 0 || *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon25 + 6301636) << 2) + 6301504) != 0 && *(uint32_t*)((phi27 << 2) + 6301504) == 0 || *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon25 + 6301640) << 2) + 6301504) != 0 && *(uint32_t*)((phi27 << 2) + 6301504) == 0 && *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon25 + 6301636) << 2) + 6301504) == 0)
				{
					puts((uint8_t*)0x401da0);
				}
				printf((uint8_t*)0x401e58);
				uint32_t* anon28 = (uint32_t*)(anon15 + 6301248);
				if (*anon28 == 0)
				{
					*anon18 = *anon18 + 10;
					*anon28 = 1;
				}
			}
		}
		if (*(uint32_t*)(anon15 + 6300992) != 0 && dispatch11 == 0 && *anon14 == 0 && *(uint32_t*)(anon15 + 6300864) == 0 && anon19 == *anon20 && *anon21 == 3 && *anon22 == 0 || *anon14 != 0 && dispatch11 == 0 && *(uint32_t*)(anon15 + 6300992) != 0 && *(uint32_t*)(anon15 + 6300864) == 0 && anon19 == *anon20 && *anon21 == 3 && *anon22 == 0 || *(uint32_t*)(anon15 + 6300992) != 0 && anon19 != *anon20 && dispatch11 == 0 && *anon14 == 0 && *(uint32_t*)(anon15 + 6300864) == 0 && *anon22 == 0 || *anon14 != 0 && anon19 != *anon20 && dispatch11 == 0 && *(uint32_t*)(anon15 + 6300992) != 0 && *(uint32_t*)(anon15 + 6300864) == 0 && *anon22 == 0 || dispatch11 == 1)
		{
			anon30 = (struct _IO_FILE**)0x602480;
			anon29 = _IO_getc(*anon30);
			dispatch16 = 1;
			anon31 = (uint8_t)anon29;
			if (anon31 == 113)
			{
				break;
			}
		}
		bool anon32 = anon31 == 108;
		if (anon32 && (*(uint32_t*)(anon15 + 6300992) != 0 && dispatch11 == 0 && *anon14 == 0 && *(uint32_t*)(anon15 + 6300864) == 0 && anon19 == *anon20 && *anon21 == 3 && *anon22 == 0 || *anon14 != 0 && dispatch11 == 0 && *(uint32_t*)(anon15 + 6300992) != 0 && *(uint32_t*)(anon15 + 6300864) == 0 && anon19 == *anon20 && *anon21 == 3 && *anon22 == 0 || *(uint32_t*)(anon15 + 6300992) != 0 && anon19 != *anon20 && dispatch11 == 0 && *anon14 == 0 && *(uint32_t*)(anon15 + 6300864) == 0 && *anon22 == 0 || *anon14 != 0 && anon19 != *anon20 && dispatch11 == 0 && *(uint32_t*)(anon15 + 6300992) != 0 && *(uint32_t*)(anon15 + 6300864) == 0 && *anon22 == 0 || dispatch11 == 1))
		{
			anon33 = __ctype_b_loc();
			phi_in9 = phi12;
			phi_in10 = phi13;
			phi_in34 = anon33;
			dispatch11 = 0;
		}
		bool anon35 = anon31 == 105;
		if (anon35 && (*(uint32_t*)(anon15 + 6300992) != 0 && dispatch11 == 0 && *anon14 == 0 && *(uint32_t*)(anon15 + 6300864) == 0 && anon19 == *anon20 && *anon21 == 3 && *anon22 == 0 || *anon14 != 0 && dispatch11 == 0 && *(uint32_t*)(anon15 + 6300992) != 0 && *(uint32_t*)(anon15 + 6300864) == 0 && anon19 == *anon20 && *anon21 == 3 && *anon22 == 0 || *(uint32_t*)(anon15 + 6300992) != 0 && anon19 != *anon20 && dispatch11 == 0 && *anon14 == 0 && *(uint32_t*)(anon15 + 6300864) == 0 && *anon22 == 0 || *anon14 != 0 && anon19 != *anon20 && dispatch11 == 0 && *(uint32_t*)(anon15 + 6300992) != 0 && *(uint32_t*)(anon15 + 6300864) == 0 && *anon22 == 0 || dispatch11 == 1))
		{
			printf((uint8_t*)0x401dba);
		}
		bool anon36 = anon31 == 115;
		if (anon36 && (*(uint32_t*)(anon15 + 6300992) != 0 && dispatch11 == 0 && *anon14 == 0 && *(uint32_t*)(anon15 + 6300864) == 0 && anon19 == *anon20 && *anon21 == 3 && *anon22 == 0 || *anon14 != 0 && dispatch11 == 0 && *(uint32_t*)(anon15 + 6300992) != 0 && *(uint32_t*)(anon15 + 6300864) == 0 && anon19 == *anon20 && *anon21 == 3 && *anon22 == 0 || *(uint32_t*)(anon15 + 6300992) != 0 && anon19 != *anon20 && dispatch11 == 0 && *anon14 == 0 && *(uint32_t*)(anon15 + 6300864) == 0 && *anon22 == 0 || *anon14 != 0 && anon19 != *anon20 && dispatch11 == 0 && *(uint32_t*)(anon15 + 6300992) != 0 && *(uint32_t*)(anon15 + 6300864) == 0 && *anon22 == 0 || dispatch11 == 1))
		{
			q(4200890, phi13 & 0xffffffff);
		}
		bool anon37 = !(anon31 == 115 || anon31 == 108 || anon31 == 105 || anon31 == 113);
		if (*(uint32_t*)(anon15 + 6300992) != 0 && dispatch11 == 0 && *anon14 == 0 && *(uint32_t*)(anon15 + 6300864) == 0 && anon19 == *anon20 && *anon21 == 3 && *anon22 == 0 && anon36 || *anon14 != 0 && dispatch11 == 0 && *(uint32_t*)(anon15 + 6300992) != 0 && *(uint32_t*)(anon15 + 6300864) == 0 && anon19 == *anon20 && *anon21 == 3 && *anon22 == 0 && anon36 || *(uint32_t*)(anon15 + 6300992) != 0 && anon19 != *anon20 && dispatch11 == 0 && *anon14 == 0 && *(uint32_t*)(anon15 + 6300864) == 0 && *anon22 == 0 && anon36 || *anon14 != 0 && anon19 != *anon20 && dispatch11 == 0 && *(uint32_t*)(anon15 + 6300992) != 0 && *(uint32_t*)(anon15 + 6300864) == 0 && *anon22 == 0 && anon36 || dispatch11 == 1 && anon36 || *(uint32_t*)(anon15 + 6300992) != 0 && dispatch11 == 0 && *anon14 == 0 && *(uint32_t*)(anon15 + 6300864) == 0 && anon19 == *anon20 && *anon21 == 3 && *anon22 == 0 && anon35 || *anon14 != 0 && dispatch11 == 0 && *(uint32_t*)(anon15 + 6300992) != 0 && *(uint32_t*)(anon15 + 6300864) == 0 && anon19 == *anon20 && *anon21 == 3 && *anon22 == 0 && anon35 || *(uint32_t*)(anon15 + 6300992) != 0 && anon19 != *anon20 && dispatch11 == 0 && *anon14 == 0 && *(uint32_t*)(anon15 + 6300864) == 0 && *anon22 == 0 && anon35 || *anon14 != 0 && anon19 != *anon20 && dispatch11 == 0 && *(uint32_t*)(anon15 + 6300992) != 0 && *(uint32_t*)(anon15 + 6300864) == 0 && *anon22 == 0 && anon35 || dispatch11 == 1 && anon35 || *(uint32_t*)(anon15 + 6300992) != 0 && dispatch11 == 0 && *anon14 == 0 && *(uint32_t*)(anon15 + 6300864) == 0 && anon19 == *anon20 && *anon21 == 3 && *anon22 == 0 && anon37 || *anon14 != 0 && dispatch11 == 0 && *(uint32_t*)(anon15 + 6300992) != 0 && *(uint32_t*)(anon15 + 6300864) == 0 && anon19 == *anon20 && *anon21 == 3 && *anon22 == 0 && anon37 || *(uint32_t*)(anon15 + 6300992) != 0 && anon19 != *anon20 && dispatch11 == 0 && *anon14 == 0 && *(uint32_t*)(anon15 + 6300864) == 0 && *anon22 == 0 && anon37 || *anon14 != 0 && anon19 != *anon20 && dispatch11 == 0 && *(uint32_t*)(anon15 + 6300992) != 0 && *(uint32_t*)(anon15 + 6300864) == 0 && *anon22 == 0 && anon37 || dispatch11 == 1 && anon37)
		{
			anon38 = __ctype_b_loc();
			phi_in34 = anon38;
			dispatch11 = 1;
		}
		uint8_t anon39 = *(uint8_t*)(*(uint64_t*)anon38 + ((__zext uint64_t)(anon29 << 24 >> 24) >> 7 | 1)) & 8;
		uint8_t anon40 = *(uint8_t*)(*(uint64_t*)anon33 + 217) & 8;
		if (anon39 != 0 && dispatch11 == 1 && anon37 || *anon14 != 0 && anon39 != 0 && dispatch11 == 0 && *(uint32_t*)(anon15 + 6300992) != 0 && *(uint32_t*)(anon15 + 6300864) == 0 && anon19 == *anon20 && *anon21 == 3 && *anon22 == 0 && anon35 || *(uint32_t*)(anon15 + 6300992) != 0 && anon40 != 0 && dispatch11 == 0 && *anon14 == 0 && *(uint32_t*)(anon15 + 6300864) == 0 && anon19 == *anon20 && *anon21 == 3 && *anon22 == 0 && anon32 || *(uint32_t*)(anon15 + 6300992) != 0 && anon19 != *anon20 && anon39 != 0 && dispatch11 == 0 && *anon14 == 0 && *(uint32_t*)(anon15 + 6300864) == 0 && *anon22 == 0 && anon37 || *anon14 != 0 && anon19 != *anon20 && anon39 != 0 && dispatch11 == 0 && *(uint32_t*)(anon15 + 6300992) != 0 && *(uint32_t*)(anon15 + 6300864) == 0 && *anon22 == 0 && anon36 || anon39 != 0 && dispatch11 == 1 && anon36 || *anon14 != 0 && anon19 != *anon20 && anon39 != 0 && dispatch11 == 0 && *(uint32_t*)(anon15 + 6300992) != 0 && *(uint32_t*)(anon15 + 6300864) == 0 && *anon22 == 0 && anon37 || *(uint32_t*)(anon15 + 6300992) != 0 && anon39 != 0 && dispatch11 == 0 && *anon14 == 0 && *(uint32_t*)(anon15 + 6300864) == 0 && anon19 == *anon20 && *anon21 == 3 && *anon22 == 0 && anon35 || anon40 != 0 && dispatch11 == 1 && anon32 || *anon14 != 0 && anon39 != 0 && dispatch11 == 0 && *(uint32_t*)(anon15 + 6300992) != 0 && *(uint32_t*)(anon15 + 6300864) == 0 && anon19 == *anon20 && *anon21 == 3 && *anon22 == 0 && anon36 || *anon14 != 0 && anon19 != *anon20 && anon40 != 0 && dispatch11 == 0 && *(uint32_t*)(anon15 + 6300992) != 0 && *(uint32_t*)(anon15 + 6300864) == 0 && *anon22 == 0 && anon32 || *(uint32_t*)(anon15 + 6300992) != 0 && anon39 != 0 && dispatch11 == 0 && *anon14 == 0 && *(uint32_t*)(anon15 + 6300864) == 0 && anon19 == *anon20 && *anon21 == 3 && *anon22 == 0 && anon37 || *(uint32_t*)(anon15 + 6300992) != 0 && anon19 != *anon20 && anon39 != 0 && dispatch11 == 0 && *anon14 == 0 && *(uint32_t*)(anon15 + 6300864) == 0 && *anon22 == 0 && anon36 || *anon14 != 0 && anon39 != 0 && dispatch11 == 0 && *(uint32_t*)(anon15 + 6300992) != 0 && *(uint32_t*)(anon15 + 6300864) == 0 && anon19 == *anon20 && *anon21 == 3 && *anon22 == 0 && anon37 || *(uint32_t*)(anon15 + 6300992) != 0 && anon19 != *anon20 && anon39 != 0 && dispatch11 == 0 && *anon14 == 0 && *(uint32_t*)(anon15 + 6300864) == 0 && *anon22 == 0 && anon35 || *anon14 != 0 && anon40 != 0 && dispatch11 == 0 && *(uint32_t*)(anon15 + 6300992) != 0 && *(uint32_t*)(anon15 + 6300864) == 0 && anon19 == *anon20 && *anon21 == 3 && *anon22 == 0 && anon32 || *anon14 != 0 && anon19 != *anon20 && anon39 != 0 && dispatch11 == 0 && *(uint32_t*)(anon15 + 6300992) != 0 && *(uint32_t*)(anon15 + 6300864) == 0 && *anon22 == 0 && anon35 || anon39 != 0 && dispatch11 == 1 && anon35 || *(uint32_t*)(anon15 + 6300992) != 0 && anon39 != 0 && dispatch11 == 0 && *anon14 == 0 && *(uint32_t*)(anon15 + 6300864) == 0 && anon19 == *anon20 && *anon21 == 3 && *anon22 == 0 && anon36 || *(uint32_t*)(anon15 + 6300992) != 0 && anon19 != *anon20 && anon40 != 0 && dispatch11 == 0 && *anon14 == 0 && *(uint32_t*)(anon15 + 6300864) == 0 && *anon22 == 0 && anon32)
		{
			uint64_t phi_in43;
			uint16_t** phi41 = phi_in34;
			uint32_t anon42 = _IO_getc(*anon30);
			int64_t anon44 = (__sext int64_t)anon31 + 4294967248;
			phi_in43 = anon44 & 0xffffffff;
			uint32_t anon45 = anon42 << 24 >> 24;
			if ((*(uint8_t*)(*(uint64_t*)phi41 + ((__zext uint64_t)anon45 << 1 | 1)) & 8) != 0)
			{
				phi_in43 = (__zext uint64_t)((uint32_t)anon44 * 10 + anon45 - 48);
			}
			uint64_t phi46 = phi_in43;
			uint32_t anon47 = (uint32_t)phi46;
			if (*anon24 != anon47 && *(uint32_t*)(anon25 + 6301636) != anon47)
			{
				phi_in9 = phi12;
				phi_in10 = phi13;
				dispatch11 = 0;
			}
			if (*anon24 == anon47 || *anon24 != anon47 && *(uint32_t*)(anon25 + 6301636) == anon47 || *anon24 != anon47 && *(uint32_t*)(anon25 + 6301636) != anon47 && *(uint32_t*)(anon25 + 6301640) == anon47)
			{
				uint64_t anon48 = phi46 << 32 >> 32;
				phi_in9 = anon48;
				phi_in10 = anon48;
				dispatch11 = 0;
			}
		}
		if (*anon22 != 0 && dispatch11 == 0 && (*(uint32_t*)(anon15 + 6300992) != 0 && *anon14 == 0 && *(uint32_t*)(anon15 + 6300864) == 0 && anon19 == *anon20 && *anon21 == 3 || *anon14 != 0 && *(uint32_t*)(anon15 + 6300992) != 0 && *(uint32_t*)(anon15 + 6300864) == 0 && anon19 == *anon20 && *anon21 == 3 || *(uint32_t*)(anon15 + 6300992) != 0 && anon19 != *anon20 && *anon14 == 0 && *(uint32_t*)(anon15 + 6300864) == 0 || *anon14 != 0 && anon19 != *anon20 && *(uint32_t*)(anon15 + 6300992) != 0 && *(uint32_t*)(anon15 + 6300864) == 0))
		{
			*anon22 = 0;
			uint64_t anon49 = random();
			uint32_t anon50 = (uint32_t)anon49;
			*(uint32_t*)(((__sext int64_t)(anon50 + (((uint32_t)((anon49 & 0xffffffff) * 2290649225 >> 32) + anon50 >> 4) - (anon50 >> 31)) * 4294967266) << 2) + 6301504) = 1;
			uint64_t anon51 = random();
			printf((uint8_t*)0x401e28);
			*anon18 = *anon18 - 10;
			uint32_t anon53 = (uint32_t)anon51;
			int64_t anon52 = (__sext int64_t)(anon53 + ((uint32_t)((anon51 & 0xffffffff) * 6585616521 >> 36) - (anon53 >> 31)) * 4294967266);
			phi_in9 = anon52;
			phi_in10 = anon52;
			dispatch11 = 0;
		}
	}
	if (dispatch16 == 3)
	{
		puts((uint8_t*)0x401d36);
		phi_in54 = *anon18 - 50;
	}
	if (dispatch16 == 2)
	{
		puts((uint8_t*)0x401d62);
		while (true)
		{
			uint64_t anon55 = random();
			uint32_t anon56 = (uint32_t)anon55;
			*anon20 = anon56 + (((uint32_t)((anon55 & 0xffffffff) * 2290649225 >> 32) + anon56 >> 4) - (anon56 >> 31)) * 4294967266;
		}
	}
	if (dispatch16 == 0)
	{
		puts((uint8_t*)0x401d2a);
		phi_in54 = *anon18 - 100;
	}
	if (dispatch16 == 0 || dispatch16 == 3)
	{
		uint32_t phi57 = phi_in54;
		*anon18 = phi57;
	}
	if (dispatch16 == 1 || dispatch16 == 0 || dispatch16 == 3)
	{
		printf((uint8_t*)0x401cf1);
		exit(0);
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
