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
	__builtin_trap();
}
void _start(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	*(uint64_t*)(arg1 - 8) = arg0;
	uint64_t anon2 = arg1 & 0xfffffffffffffff0;
	uint64_t anon1 = anon2 - 16;
	*(uint64_t*)anon1 = anon2 - 8;
	__libc_start_main((uint32_t(*)(uint32_t, uint8_t**, uint8_t**))0x400660, (uint32_t)arg0, (uint8_t**)arg1, (void(*)())0x401c10, (void(*)())0x401c80, (void(*)())arg2, *(uint8_t**)anon1);
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
	uint32_t phi7;
	uint32_t* phi1 = (uint32_t*)0x6027c4;
	uint64_t phi_in2 = 6301636;
	do
	{
		uint32_t phi5;
		uint32_t phi6;
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
			phi7 = *anon8;
		}
		if (*anon4 < *phi1 && *anon4 < *anon8 || *anon4 >= *phi1 && *phi1 < *anon8)
		{
			phi9 = phi5;
			uint32_t phi_in11 = phi6;
			*phi1 = *anon8;
			*anon8 = phi_in11;
			phi7 = phi_in11;
			phi10 = *anon8;
		}
		if (*anon4 < *phi1 && *anon4 < *anon8 || *anon4 >= *phi1 && *phi1 < *anon8 || *anon4 >= *anon8 && *anon4 < *phi1)
		{
			*phi1 = phi9;
			*anon4 = phi10;
			if (*anon4 > *phi1)
			{
				phi7 = *anon8;
			}
		}
		if (phi7 != 255)
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
	while (phi7 != 255);
	return;
}
void w(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4)
{
	struct { uint8_t field0[4]; uint32_t field1; uint64_t field2; uint8_t field3[8]; uint32_t field4; uint32_t field5; uint8_t field6[48]; uint64_t field7; uint32_t field8; uint8_t field9[4]; uint64_t field10; uint64_t field11; uint32_t field12; uint8_t field13[8]; uint32_t field14; uint8_t field15[56]; uint64_t field16; } alloca1;
	uint32_t phi5;
	uint64_t phi11;
	alloca1.field16 = arg0;
	uint64_t anon2 = arg2 << 32;
	uint32_t anon3 = (uint32_t)arg4;
	*(uint32_t*)((anon2 >> 30) + 6300992) = anon3;
	alloca1.field2 = (anon2 >> 32) * 12;
	alloca1.field1 = anon3 + 2;
	alloca1.field4 = anon3 + 3;
	alloca1.field5 = anon3 + 4;
	uint32_t phi4 = anon3;
	uint32_t anon6 = anon3 + 1;
	phi5 = anon6;
	uint64_t phi7 = arg4 & 0xffffffff;
	uint32_t phi8 = anon6;
	uint32_t phi9 = anon3;
	uint64_t phi10 = 0;
	uint64_t anon12 = (uint64_t)&alloca1;
	phi11 = anon12;
	while (true)
	{
		uint64_t phi17;
		uint32_t phi18;
		uint64_t phi33;
		uint64_t phi34;
		uint32_t phi42;
		uint64_t phi47;
		uint32_t phi_in308;
		uint64_t phi_in315;
		uint64_t phi321;
		uint64_t phi_in326;
		uint64_t phi329;
		uint32_t phi_in331;
		uint64_t phi333;
		uint32_t phi334;
		uint32_t phi335;
		uint32_t phi336;
		uint32_t phi_in337;
		uint64_t phi338;
		int64_t anon14 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi11 + 48) + *(uint64_t*)(phi11 + 8) + 6301632);
		uint32_t* anon13 = (uint32_t*)((anon14 << 2) + 6300992);
		*anon13 = phi8;
		*(uint64_t*)(phi11 + 48) = phi10;
		if (phi9 < *anon13)
		{
			uint32_t phi327;
			uint32_t phi328;
			uint32_t phi330;
			uint32_t phi332;
			*(uint64_t*)(phi11 + 16) = anon14 * 12;
			*(uint32_t*)(phi11 + 40) = (uint32_t)phi7 + 5;
			uint32_t phi15 = phi4;
			uint64_t phi16 = (__zext uint64_t)phi4;
			*(uint32_t*)(phi17 + 68) = phi5;
			phi18 = phi4;
			uint32_t phi19 = phi5;
			*(uint64_t*)(phi17 + 56) = 0;
			phi17 = phi11;
			uint32_t phi20 = phi18;
			int64_t anon22 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi17 + 56) + *(uint64_t*)(phi17 + 16) + 6301632);
			uint32_t* anon21 = (uint32_t*)((anon22 << 2) + 6300992);
			if (phi19 < *anon21)
			{
				uint32_t phi316;
				uint32_t phi317;
				uint32_t phi318;
				uint32_t phi319;
				uint32_t phi320;
				uint32_t phi322;
				uint32_t phi323;
				uint32_t phi324;
				uint64_t phi325;
				*anon21 = *(uint32_t*)(phi17 + 4);
				*(uint64_t*)(phi17 + 32) = anon22 * 12;
				*(uint32_t*)(phi17 + 44) = (uint32_t)phi16 + 6;
				uint32_t phi23 = phi20;
				uint32_t phi24 = phi20;
				uint32_t phi25 = phi20;
				uint32_t phi26 = phi20;
				uint32_t phi27 = phi20;
				uint32_t phi28 = phi20;
				uint32_t phi29 = phi20;
				uint32_t phi30 = phi20;
				uint32_t phi31 = phi20;
				uint64_t phi32 = (__zext uint64_t)phi20;
				*(uint64_t*)(phi33 + 72) = 0;
				phi34 = phi17;
				uint32_t phi35 = phi25;
				uint32_t phi36 = phi27;
				uint32_t phi37 = phi29;
				uint32_t phi38 = phi30;
				phi33 = phi34;
				int64_t anon40 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi33 + 72) + *(uint64_t*)(phi33 + 32) + 6301632);
				uint32_t* anon39 = (uint32_t*)((anon40 << 2) + 6300992);
				if (*(uint32_t*)(phi33 + 4) < *anon39)
				{
					uint32_t phi97;
					uint32_t phi99;
					uint32_t phi306;
					uint64_t phi307;
					uint32_t phi309;
					uint32_t phi310;
					uint64_t phi311;
					uint32_t phi312;
					uint32_t phi313;
					uint32_t phi314;
					*anon39 = *(uint32_t*)(phi33 + 24);
					*(uint32_t*)(phi33 + 64) = (uint32_t)phi32 + 7;
					uint32_t phi41 = phi23;
					phi42 = phi24;
					uint32_t phi43 = phi26;
					uint32_t phi44 = phi20;
					uint32_t phi45 = phi28;
					uint32_t phi46 = phi31;
					phi47 = 0;
					uint64_t phi48 = anon40 * 12;
					int64_t anon50 = (__sext int64_t)*(uint32_t*)(phi47 + phi48 + 6301632);
					uint32_t* anon49 = (uint32_t*)((anon50 << 2) + 6300992);
					if (*(uint32_t*)(phi33 + 24) < *anon49)
					{
						uint32_t phi54;
						uint64_t phi95;
						*anon49 = *(uint32_t*)(phi33 + 28);
						uint32_t phi_in51 = phi41;
						uint32_t phi52 = phi42;
						uint32_t phi53 = phi35;
						uint32_t anon55 = (uint32_t)phi32 + 8;
						phi54 = anon55;
						uint32_t phi56 = phi43;
						uint32_t phi57 = phi44;
						uint32_t phi58 = anon55;
						uint32_t phi59 = phi36;
						uint32_t phi_in60 = phi45;
						uint32_t phi_in61 = anon55;
						uint32_t phi62 = anon55;
						uint32_t phi63 = anon55;
						uint32_t phi_in64 = phi37;
						uint32_t phi65 = anon55;
						uint32_t phi66 = anon55;
						uint32_t phi67 = phi38;
						uint32_t phi_in68 = anon55;
						uint32_t phi_in69 = anon55;
						uint32_t phi70 = phi46;
						uint64_t phi_in71 = phi48;
						uint32_t phi72 = anon55;
						uint32_t phi73 = anon55;
						uint32_t phi_in74 = anon55;
						uint64_t phi75 = phi33;
						uint64_t phi76 = 0;
						uint64_t phi77 = anon50 * 12;
						uint64_t phi78 = phi32;
						do
						{
							uint32_t phi79 = phi52;
							uint32_t phi_in80 = phi53;
							uint32_t phi_in81 = phi54;
							uint32_t phi_in82 = phi57;
							uint32_t phi83 = phi58;
							uint32_t phi_in84 = phi59;
							uint32_t phi85 = phi62;
							uint32_t phi86 = phi63;
							uint32_t phi_in87 = phi65;
							uint32_t phi88 = phi66;
							uint32_t phi_in89 = phi67;
							uint32_t phi90 = phi_in69;
							uint32_t phi91 = phi70;
							uint32_t phi_in92 = phi72;
							uint32_t phi93 = phi73;
							uint64_t phi94 = phi75;
							phi95 = phi76;
							uint32_t phi96 = phi_in51;
							phi52 = phi79;
							phi97 = phi_in80;
							phi54 = phi_in81;
							uint32_t phi98 = phi56;
							phi99 = phi_in82;
							uint32_t phi100 = phi83;
							uint32_t phi101 = phi_in84;
							phi77 = phi77;
							uint32_t phi102 = phi_in61;
							phi62 = phi85;
							uint32_t phi103 = phi86;
							uint32_t phi104 = phi_in64;
							phi65 = phi_in87;
							phi66 = phi88;
							uint32_t phi105 = phi_in89;
							uint32_t phi106 = phi_in68;
							uint32_t phi107 = phi91;
							uint64_t phi_in108 = phi_in71;
							uint32_t phi109 = phi_in92;
							uint32_t phi110 = phi93;
							uint32_t phi111 = phi_in74;
							phi75 = phi94;
							uint64_t phi112 = phi78;
							int64_t anon114 = (__sext int64_t)*(uint32_t*)(phi95 + phi77 + 6301632);
							uint32_t* anon113 = (uint32_t*)((anon114 << 2) + 6300992);
							if (*(uint32_t*)(phi94 + 28) < *anon113)
							{
								uint64_t phi132;
								*anon113 = *(uint32_t*)(phi94 + 40);
								*(uint32_t*)(phi94 + 120) = (uint32_t)phi78 + 9;
								uint64_t phi_in115 = 0;
								uint32_t phi116 = phi_in51;
								uint32_t phi_in117 = phi_in80;
								uint32_t phi118 = phi_in81;
								uint32_t phi119 = phi_in82;
								uint32_t phi120 = phi_in60;
								phi_in61 = phi_in61;
								uint32_t phi121 = phi_in64;
								uint32_t phi122 = phi_in87;
								uint32_t phi_in123 = phi_in89;
								uint32_t phi124 = phi_in68;
								uint32_t phi_in125 = phi90;
								uint64_t phi_in126 = phi95;
								uint64_t phi127 = phi_in71;
								uint64_t phi128 = phi77;
								uint32_t phi129 = phi_in92;
								uint32_t phi_in130 = phi_in74;
								uint64_t phi_in131 = phi78 & 0xffffffff;
								do
								{
									uint64_t phi139;
									phi132 = phi_in115;
									uint32_t phi_in133 = phi116;
									uint32_t phi_in134 = phi79;
									uint32_t phi135 = phi_in117;
									uint32_t phi136 = phi56;
									uint32_t phi137 = phi119;
									uint32_t phi138 = phi83;
									*(uint32_t*)(phi139 + 96) = phi120;
									uint32_t phi140 = phi85;
									uint32_t phi_in141 = phi86;
									uint32_t phi142 = phi121;
									uint32_t phi_in143 = phi122;
									uint32_t phi144 = phi88;
									uint32_t phi_in145 = phi124;
									uint64_t phi146 = phi_in126;
									uint32_t phi147 = phi91;
									uint64_t phi148 = phi128;
									uint32_t phi149 = phi93;
									uint64_t phi150 = phi94;
									phi_in51 = phi_in133;
									uint32_t phi151 = phi_in134;
									phi_in81 = phi118;
									uint32_t phi152 = phi136;
									uint32_t phi153 = phi137;
									uint32_t phi154 = phi_in84;
									phi120 = *(uint32_t*)(phi139 + 96);
									phi85 = phi140;
									phi103 = phi_in141;
									uint32_t phi155 = phi142;
									uint32_t phi156 = phi_in143;
									uint32_t phi157 = phi144;
									uint32_t phi158 = phi_in123;
									phi_in68 = phi_in145;
									phi_in69 = phi_in125;
									phi107 = phi147;
									uint64_t phi159 = phi127;
									phi_in92 = phi129;
									phi93 = phi149;
									phi75 = phi150;
									uint64_t phi160 = phi_in131;
									int64_t anon162 = (__sext int64_t)*(uint32_t*)(phi132 + anon114 * 12 + 6301632);
									uint32_t* anon161 = (uint32_t*)((anon162 << 2) + 6300992);
									if (*(uint32_t*)(phi150 + 40) < *anon161)
									{
										uint64_t phi179;
										*anon161 = *(uint32_t*)(phi150 + 44);
										uint64_t phi_in163 = 0;
										uint32_t phi164 = phi_in133;
										uint32_t phi_in165 = phi_in134;
										uint32_t phi166 = phi135;
										uint32_t phi167 = phi138;
										uint32_t phi_in168 = phi_in84;
										uint32_t phi169 = phi_in61;
										uint32_t phi170 = phi_in141;
										uint32_t phi171 = phi_in143;
										uint32_t phi172 = phi_in123;
										uint32_t phi_in173 = phi_in145;
										uint32_t phi174 = phi_in125;
										uint64_t phi175 = phi146;
										uint64_t phi176 = phi148;
										uint32_t phi177 = phi_in130;
										uint64_t phi178 = phi_in131;
										do
										{
											phi179 = phi_in163;
											uint32_t phi180 = phi166;
											uint32_t phi_in181 = phi118;
											uint32_t phi182 = phi136;
											uint32_t phi_in183 = phi137;
											uint32_t phi_in184 = phi167;
											uint32_t phi185 = *(uint32_t*)(phi139 + 96);
											uint32_t phi186 = phi169;
											uint32_t phi187 = phi170;
											uint32_t phi188 = phi142;
											uint32_t phi_in189 = phi144;
											uint32_t phi190 = phi172;
											uint32_t phi_in191 = phi174;
											*(uint64_t*)(phi139 + 88) = phi175;
											uint32_t phi_in192 = phi147;
											uint64_t phi193 = phi127;
											*(uint64_t*)(phi139 + 112) = phi176;
											uint32_t phi_in194 = phi129;
											uint32_t phi195 = phi149;
											uint32_t phi_in196 = phi177;
											phi139 = phi150;
											uint64_t phi197 = phi178;
											uint32_t phi198 = phi164;
											uint32_t phi199 = phi_in165;
											phi118 = phi_in181;
											uint32_t phi200 = phi182;
											phi138 = phi_in184;
											uint32_t phi201 = phi_in168;
											*(uint32_t*)(phi139 + 96) = phi185;
											uint32_t phi202 = phi140;
											uint32_t phi_in203 = phi_in189;
											phi172 = phi190;
											uint32_t phi204 = phi_in173;
											uint32_t phi205 = phi_in191;
											uint64_t phi206 = *(uint64_t*)(phi139 + 88);
											uint32_t phi207 = phi_in192;
											phi127 = phi193;
											uint64_t phi208 = *(uint64_t*)(phi139 + 112);
											uint32_t phi209 = phi_in194;
											phi149 = phi195;
											uint32_t phi210 = phi_in196;
											phi160 = phi197;
											int64_t anon212 = (__sext int64_t)*(uint32_t*)(phi179 + anon162 * 12 + 6301632);
											uint32_t* anon211 = (uint32_t*)((anon212 << 2) + 6300992);
											if (*(uint32_t*)(phi139 + 44) < *anon211)
											{
												*anon211 = *(uint32_t*)(phi139 + 64);
												*(uint32_t*)(phi213 + 88) = phi_in165;
												uint32_t phi_in214 = phi180;
												uint32_t phi215 = phi_in181;
												uint64_t phi216 = phi139;
												phi200 = phi182;
												uint32_t phi217 = phi_in183;
												uint32_t phi_in218 = phi_in184;
												uint32_t phi219 = phi_in168;
												uint32_t phi_in220 = phi185;
												uint32_t phi221 = phi186;
												uint32_t phi_in222 = phi140;
												uint32_t phi_in223 = phi188;
												uint32_t phi224 = phi_in189;
												uint32_t phi225 = phi190;
												uint32_t phi226 = phi_in173;
												uint32_t phi227 = phi_in191;
												uint64_t phi228 = *(uint64_t*)(phi139 + 88);
												uint32_t phi229 = phi_in192;
												uint64_t phi230 = *(uint64_t*)(phi139 + 112);
												uint32_t phi231 = phi_in194;
												uint64_t phi232 = phi197;
												int64_t anon235 = anon212 * 12;
												int64_t anon234 = (__sext int64_t)*(uint32_t*)(anon235 + 6301636);
												uint32_t* anon233 = (uint32_t*)((anon234 << 2) + 6300992);
												if (*(uint32_t*)(phi139 + 64) < *anon233)
												{
													*anon233 = phi187;
													uint32_t phi_in236 = phi164;
													uint32_t phi237 = phi_in165;
													phi166 = phi180;
													uint32_t phi_in238 = phi_in181;
													*(uint32_t*)(phi239 + 96) = phi_in183;
													uint64_t phi240 = phi139;
													*(uint32_t*)(phi239 + 124) = phi_in184;
													uint32_t phi241 = phi_in168;
													uint64_t phi242 = anon234;
													uint32_t phi243 = phi188;
													*(uint64_t*)(phi239 + 88) = *(uint64_t*)(phi139 + 88);
													uint32_t phi244 = phi_in192;
													*(uint64_t*)(phi239 + 104) = phi193;
													uint64_t phi245 = *(uint64_t*)(phi139 + 112);
													if (phi140 < phi187)
													{
														*(uint32_t*)(phi139 + 124) = phi186;
														*(uint64_t*)(phi139 + 104) = phi193;
														*(uint32_t*)(phi139 + 96) = phi185;
														*(uint64_t*)(phi139 + 80) = anon234;
														uint64_t anon246 = (__zext uint64_t)phi187;
														w(4197873, anon12, (__sext int64_t)phi187, anon246, anon246);
														phi_in236 = *(uint32_t*)(arg1 - 96);
														phi237 = *(uint32_t*)(arg1 - 96);
														phi166 = *(uint32_t*)(arg1 - 96);
														phi_in238 = *(uint32_t*)(arg1 - 68);
														phi182 = *(uint32_t*)(arg1 - 96);
														*(uint32_t*)(phi239 + 96) = *(uint32_t*)(arg1 - 96);
														phi240 = anon12;
														*(uint32_t*)(phi239 + 124) = *(uint32_t*)(arg1 - 68);
														phi241 = *(uint32_t*)(arg1 - 96);
														phi242 = *(uint64_t*)(arg1 - 112);
														phi185 = *(uint32_t*)(arg1 - 96);
														phi243 = *(uint32_t*)(arg1 - 96);
														phi190 = *(uint32_t*)(arg1 - 96);
														*(uint64_t*)(phi239 + 88) = *(uint64_t*)(arg1 - 104);
														phi244 = *(uint32_t*)(arg1 - 96);
														*(uint64_t*)(phi239 + 104) = *(uint64_t*)(arg1 - 88);
														phi245 = *(uint64_t*)(arg1 - 80);
														phi197 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
													}
													uint32_t phi247 = phi237;
													uint32_t phi_in248 = phi166;
													uint32_t phi249 = phi182;
													uint32_t phi250 = *(uint32_t*)(phi239 + 96);
													uint64_t phi239 = phi240;
													uint32_t phi_in251 = phi241;
													*(uint64_t*)(phi239 + 80) = phi242;
													uint32_t phi_in252 = phi185;
													uint32_t phi_in253 = phi243;
													uint32_t phi254 = phi190;
													uint64_t phi255 = phi245;
													uint64_t phi_in256 = phi197;
													uint32_t phi257 = phi_in236;
													uint32_t phi258 = phi_in248;
													uint32_t phi259 = phi_in238;
													phi195 = *(uint32_t*)(phi239 + 124);
													uint32_t phi260 = phi_in251;
													uint64_t phi261 = *(uint64_t*)(phi239 + 80);
													uint32_t phi_in262 = phi_in252;
													uint32_t phi_in263 = phi_in253;
													uint64_t phi264 = *(uint64_t*)(phi239 + 88);
													uint64_t phi265 = *(uint64_t*)(phi239 + 104);
													int64_t anon266 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi239 + 80) * 12 + 6301636);
													if (*(uint32_t*)(phi239 + 124) < *(uint32_t*)((anon266 << 2) + 6300992))
													{
														*(uint64_t*)(phi239 + 112) = phi255;
														*(uint32_t*)(phi239 + 96) = phi250;
														uint64_t anon267 = (__zext uint64_t)*(uint32_t*)(phi239 + 120);
														w(4197793, anon12, anon266, anon267, anon267);
														phi257 = *(uint32_t*)(arg1 - 96);
														phi247 = *(uint32_t*)(arg1 - 96);
														phi258 = *(uint32_t*)(arg1 - 96);
														phi259 = alloca1.field14;
														phi249 = *(uint32_t*)(arg1 - 96);
														phi239 = anon12;
														phi250 = *(uint32_t*)(arg1 - 96);
														phi195 = alloca1.field14;
														phi260 = *(uint32_t*)(arg1 - 96);
														phi261 = *(uint64_t*)(arg1 - 112);
														phi_in262 = *(uint32_t*)(arg1 - 96);
														phi_in263 = *(uint32_t*)(arg1 - 96);
														phi254 = *(uint32_t*)(arg1 - 96);
														phi264 = *(uint64_t*)(arg1 - 104);
														phi244 = *(uint32_t*)(arg1 - 96);
														phi265 = *(uint64_t*)(arg1 - 88);
														phi255 = *(uint64_t*)(arg1 - 80);
														phi_in256 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
													}
													uint32_t phi_in268 = phi257;
													uint32_t phi_in269 = phi247;
													phi_in214 = phi258;
													uint32_t phi_in270 = phi259;
													*(uint32_t*)(phi239 + 88) = phi249;
													phi217 = phi250;
													phi219 = phi260;
													phi225 = phi254;
													*(uint64_t*)(phi239 + 80) = phi264;
													uint32_t phi_in271 = phi244;
													*(uint64_t*)(phi239 + 96) = phi265;
													*(uint64_t*)(phi239 + 104) = phi255;
													phi164 = phi_in268;
													*(uint32_t*)(phi213 + 88) = phi_in269;
													phi215 = phi_in270;
													phi216 = phi239;
													phi200 = *(uint32_t*)(phi239 + 88);
													phi_in218 = phi195;
													phi_in220 = phi_in262;
													phi221 = phi195;
													phi_in222 = phi195;
													phi187 = phi195;
													phi_in223 = phi_in263;
													phi171 = phi195;
													phi224 = phi195;
													phi226 = phi195;
													phi227 = phi195;
													phi228 = *(uint64_t*)(phi239 + 80);
													phi229 = phi_in271;
													phi193 = *(uint64_t*)(phi239 + 96);
													phi230 = *(uint64_t*)(phi239 + 104);
													phi231 = phi195;
													phi_in196 = phi195;
													phi232 = phi_in256;
													int64_t anon272 = (__sext int64_t)*(uint32_t*)(phi261 * 12 + 6301640);
													if (phi195 < *(uint32_t*)((anon272 << 2) + 6300992))
													{
														*(uint32_t*)(phi239 + 112) = phi195;
														uint64_t anon273 = (__zext uint64_t)*(uint32_t*)(phi239 + 120);
														w(4197395, anon12, anon272, anon273, anon273);
														phi164 = *(uint32_t*)(arg1 - 104);
														*(uint32_t*)(phi213 + 88) = *(uint32_t*)(arg1 - 104);
														phi_in214 = *(uint32_t*)(arg1 - 104);
														phi215 = *(uint32_t*)(arg1 - 80);
														phi216 = anon12;
														phi200 = *(uint32_t*)(arg1 - 104);
														phi217 = *(uint32_t*)(arg1 - 104);
														phi_in218 = *(uint32_t*)(arg1 - 80);
														phi219 = *(uint32_t*)(arg1 - 104);
														phi_in220 = *(uint32_t*)(arg1 - 104);
														phi221 = *(uint32_t*)(arg1 - 80);
														phi_in222 = *(uint32_t*)(arg1 - 80);
														phi187 = *(uint32_t*)(arg1 - 80);
														phi_in223 = *(uint32_t*)(arg1 - 104);
														phi171 = *(uint32_t*)(arg1 - 80);
														phi224 = *(uint32_t*)(arg1 - 80);
														phi225 = *(uint32_t*)(arg1 - 104);
														phi226 = *(uint32_t*)(arg1 - 80);
														phi227 = *(uint32_t*)(arg1 - 80);
														phi228 = *(uint64_t*)(arg1 - 112);
														phi229 = *(uint32_t*)(arg1 - 104);
														phi193 = *(uint64_t*)(arg1 - 96);
														phi230 = *(uint64_t*)(arg1 - 88);
														phi231 = *(uint32_t*)(arg1 - 80);
														phi195 = *(uint32_t*)(arg1 - 80);
														phi_in196 = *(uint32_t*)(arg1 - 80);
														phi232 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
													}
												}
												uint32_t phi_in274 = phi164;
												phi180 = phi_in214;
												*(uint32_t*)(phi213 + 112) = phi215;
												uint64_t phi213 = phi216;
												uint32_t phi275 = phi217;
												uint32_t phi_in276 = phi219;
												*(uint32_t*)(phi139 + 96) = phi_in220;
												uint32_t phi_in277 = phi221;
												phi188 = phi_in223;
												uint32_t phi_in278 = phi224;
												uint32_t phi_in279 = phi225;
												uint32_t phi_in280 = phi226;
												phi205 = phi227;
												*(uint64_t*)(phi213 + 80) = phi228;
												uint32_t phi281 = phi229;
												*(uint64_t*)(phi213 + 96) = phi193;
												*(uint64_t*)(phi213 + 104) = phi230;
												uint32_t phi_in282 = phi231;
												uint32_t phi_in283 = phi195;
												uint64_t phi_in284 = phi232;
												phi198 = phi_in274;
												phi199 = *(uint32_t*)(phi213 + 88);
												phi118 = *(uint32_t*)(phi213 + 112);
												phi_in183 = phi275;
												phi138 = phi_in218;
												phi201 = phi_in276;
												phi186 = phi_in277;
												phi202 = phi_in222;
												phi_in203 = phi_in278;
												phi172 = phi_in279;
												phi204 = phi_in280;
												phi206 = *(uint64_t*)(phi213 + 80);
												phi207 = phi281;
												phi127 = *(uint64_t*)(phi213 + 96);
												phi208 = *(uint64_t*)(phi213 + 104);
												phi209 = phi_in282;
												phi149 = phi_in283;
												phi210 = phi_in196;
												phi139 = phi213;
												phi160 = phi_in284;
												int64_t anon286 = (__sext int64_t)*(uint32_t*)(anon235 + 6301640);
												uint32_t* anon285 = (uint32_t*)((anon286 << 2) + 6300992);
												if (*(uint32_t*)(phi213 + 64) < *anon285)
												{
													*anon285 = *(uint32_t*)(phi213 + 112);
													uint32_t phi287 = phi_in274;
													uint32_t phi_in288 = *(uint32_t*)(phi213 + 88);
													uint32_t phi289 = phi180;
													uint32_t phi290 = *(uint32_t*)(phi213 + 112);
													uint32_t phi291 = phi200;
													uint32_t phi292 = phi_in276;
													uint32_t phi_in293 = *(uint32_t*)(phi139 + 96);
													uint32_t phi294 = phi188;
													uint64_t phi295 = *(uint64_t*)(phi213 + 80);
													*(uint64_t*)(phi213 + 96) = *(uint64_t*)(phi213 + 96);
													uint64_t phi296 = *(uint64_t*)(phi213 + 104);
													uint64_t phi297 = phi_in284;
													int64_t anon299 = anon286 * 12;
													int64_t anon298 = (__sext int64_t)*(uint32_t*)(anon299 + 6301636);
													if (*(uint32_t*)(phi213 + 112) < *(uint32_t*)((anon298 << 2) + 6300992))
													{
														uint64_t anon300 = (__zext uint64_t)*(uint32_t*)(phi213 + 120);
														w(4197948, anon12, anon298, anon300, anon300);
														phi287 = *(uint32_t*)(arg1 - 104);
														phi_in288 = *(uint32_t*)(arg1 - 104);
														phi289 = *(uint32_t*)(arg1 - 104);
														phi290 = *(uint32_t*)(arg1 - 80);
														phi291 = *(uint32_t*)(arg1 - 104);
														phi275 = *(uint32_t*)(arg1 - 104);
														phi292 = *(uint32_t*)(arg1 - 104);
														phi_in293 = *(uint32_t*)(arg1 - 104);
														phi294 = *(uint32_t*)(arg1 - 104);
														phi_in279 = *(uint32_t*)(arg1 - 104);
														phi295 = *(uint64_t*)(arg1 - 112);
														phi281 = *(uint32_t*)(arg1 - 104);
														*(uint64_t*)(phi213 + 96) = *(uint64_t*)(arg1 - 96);
														phi296 = *(uint64_t*)(arg1 - 88);
														phi213 = anon12;
														phi297 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
													}
													phi198 = phi287;
													phi180 = phi289;
													*(uint32_t*)(phi213 + 112) = phi290;
													phi200 = phi291;
													phi_in183 = phi275;
													uint32_t phi_in301 = phi292;
													phi188 = phi294;
													*(uint64_t*)(phi213 + 80) = phi295;
													uint32_t phi_in302 = phi281;
													*(uint64_t*)(phi213 + 104) = phi296;
													uint64_t phi_in303 = phi297;
													phi199 = phi_in288;
													phi118 = *(uint32_t*)(phi213 + 112);
													phi138 = *(uint32_t*)(phi213 + 112);
													phi201 = phi_in301;
													*(uint32_t*)(phi139 + 96) = phi_in293;
													phi186 = *(uint32_t*)(phi213 + 112);
													phi202 = *(uint32_t*)(phi213 + 112);
													phi187 = *(uint32_t*)(phi213 + 112);
													phi171 = *(uint32_t*)(phi213 + 112);
													phi_in203 = *(uint32_t*)(phi213 + 112);
													phi172 = phi_in279;
													phi204 = *(uint32_t*)(phi213 + 112);
													phi205 = *(uint32_t*)(phi213 + 112);
													phi206 = *(uint64_t*)(phi213 + 80);
													phi207 = phi_in302;
													phi127 = *(uint64_t*)(phi213 + 96);
													phi208 = *(uint64_t*)(phi213 + 104);
													phi209 = *(uint32_t*)(phi213 + 112);
													phi149 = *(uint32_t*)(phi213 + 112);
													phi210 = *(uint32_t*)(phi213 + 112);
													phi139 = phi213;
													phi160 = phi_in303;
													int64_t anon304 = (__sext int64_t)*(uint32_t*)(anon299 + 6301640);
													if (*(uint32_t*)(phi213 + 112) < *(uint32_t*)((anon304 << 2) + 6300992))
													{
														*(uint32_t*)(phi213 + 88) = phi198;
														uint64_t anon305 = (__zext uint64_t)*(uint32_t*)(phi213 + 120);
														w(4197231, anon12, anon304, anon305, anon305);
														phi198 = alloca1.field8;
														phi199 = alloca1.field8;
														phi180 = alloca1.field8;
														phi118 = alloca1.field12;
														phi200 = alloca1.field8;
														phi_in183 = alloca1.field8;
														phi138 = alloca1.field12;
														phi201 = alloca1.field8;
														*(uint32_t*)(phi139 + 96) = alloca1.field8;
														phi186 = alloca1.field12;
														phi202 = alloca1.field12;
														phi187 = alloca1.field12;
														phi188 = alloca1.field8;
														phi171 = alloca1.field12;
														phi_in203 = alloca1.field12;
														phi172 = alloca1.field8;
														phi204 = alloca1.field12;
														phi205 = alloca1.field12;
														phi206 = alloca1.field7;
														phi207 = alloca1.field8;
														phi127 = alloca1.field10;
														phi208 = alloca1.field11;
														phi209 = alloca1.field12;
														phi149 = alloca1.field12;
														phi210 = alloca1.field12;
														phi139 = anon12;
														phi160 = (__zext uint64_t)alloca1.field8;
													}
												}
											}
											phi135 = phi180;
											phi_in61 = phi186;
											phi155 = phi188;
											phi146 = phi206;
											phi148 = phi208;
											phi_in51 = phi198;
											phi151 = phi199;
											phi_in81 = phi118;
											phi152 = phi200;
											phi153 = phi_in183;
											phi154 = phi201;
											phi120 = *(uint32_t*)(phi139 + 96);
											phi85 = phi202;
											phi103 = phi187;
											phi156 = phi171;
											phi157 = phi_in203;
											phi158 = phi172;
											phi_in68 = phi204;
											phi_in69 = phi205;
											phi107 = phi207;
											phi159 = phi127;
											phi_in92 = phi209;
											phi93 = phi149;
											phi_in130 = phi210;
											phi75 = phi139;
											phi_in163 = phi179 + 4;
											phi164 = phi198;
											phi_in165 = phi199;
											phi166 = phi135;
											phi136 = phi200;
											phi137 = phi_in183;
											phi167 = phi138;
											phi_in168 = phi201;
											phi169 = phi_in61;
											phi140 = phi202;
											phi170 = phi187;
											phi142 = phi155;
											phi171 = phi171;
											phi144 = phi_in203;
											phi_in173 = phi204;
											phi174 = phi205;
											phi175 = phi146;
											phi147 = phi207;
											phi176 = phi148;
											phi129 = phi209;
											phi177 = phi210;
											phi150 = phi139;
											phi178 = phi160;
										}
										while (phi179 != 8);
									}
									phi100 = phi138;
									phi104 = phi155;
									phi95 = phi146;
									phi96 = phi_in51;
									phi52 = phi151;
									phi97 = phi135;
									phi54 = phi_in81;
									phi98 = phi152;
									phi99 = phi153;
									phi101 = phi154;
									phi77 = phi148;
									phi_in60 = phi120;
									phi102 = phi_in61;
									phi62 = phi85;
									phi65 = phi156;
									phi66 = phi157;
									phi105 = phi158;
									phi106 = phi_in68;
									phi90 = phi_in69;
									phi_in108 = phi159;
									phi109 = phi_in92;
									phi110 = phi93;
									phi111 = phi_in130;
									phi112 = phi160;
									phi_in115 = phi132 + 4;
									phi116 = phi_in51;
									phi79 = phi151;
									phi_in117 = phi135;
									phi118 = phi_in81;
									phi56 = phi152;
									phi119 = phi153;
									phi83 = phi100;
									phi_in84 = phi154;
									phi86 = phi103;
									phi121 = phi104;
									phi122 = phi156;
									phi88 = phi157;
									phi_in123 = phi158;
									phi124 = phi_in68;
									phi_in125 = phi_in69;
									phi_in126 = phi95;
									phi91 = phi107;
									phi127 = phi159;
									phi128 = phi148;
									phi129 = phi_in92;
									phi94 = phi75;
									phi_in131 = phi160;
								}
								while (phi132 != 8);
							}
							phi306 = phi96;
							phi307 = phi112;
							phi_in308 = phi52;
							phi309 = phi98;
							phi310 = phi101;
							phi311 = phi_in108;
							phi312 = phi_in60;
							phi313 = phi104;
							phi314 = phi105;
							phi46 = phi107;
							phi_in315 = phi75;
							if (phi95 != 8)
							{
								phi_in51 = phi306;
								phi53 = phi97;
								phi56 = phi98;
								phi57 = phi99;
								phi58 = phi100;
								phi59 = phi101;
								phi_in61 = phi102;
								phi63 = phi103;
								phi_in64 = phi104;
								phi67 = phi105;
								phi_in68 = phi106;
								phi_in69 = phi90;
								phi70 = phi107;
								phi_in71 = phi_in108;
								phi72 = phi109;
								phi73 = phi110;
								phi_in74 = phi111;
								phi76 = phi95 + 4;
								phi78 = phi307;
							}
						}
						while (phi95 != 8);
					}
					else 
					{
						phi306 = phi41;
						phi_in308 = phi42;
						phi97 = phi35;
						phi309 = phi43;
						phi99 = phi44;
						phi310 = phi36;
						phi311 = phi48;
						phi312 = phi45;
						phi313 = phi37;
						phi314 = phi38;
						phi46 = phi46;
						phi_in315 = phi33;
						phi307 = phi32 & 0xffffffff;
					}
					phi41 = phi306;
					phi35 = phi97;
					phi43 = phi309;
					phi44 = phi99;
					phi36 = phi310;
					phi48 = phi311;
					phi45 = phi312;
					phi37 = phi313;
					phi38 = phi314;
					phi32 = phi307;
					phi316 = phi41;
					phi317 = phi_in308;
					phi318 = phi35;
					phi319 = phi43;
					phi320 = phi44;
					phi27 = phi36;
					phi321 = *(uint64_t*)(phi_in315 + 72);
					phi322 = phi45;
					phi323 = phi37;
					phi324 = phi38;
					phi31 = phi46;
					phi325 = phi32;
					phi_in326 = phi_in315;
				}
				else 
				{
					phi316 = phi23;
					phi317 = phi24;
					phi318 = phi35;
					phi319 = phi26;
					phi320 = phi20;
					phi27 = phi36;
					phi321 = *(uint64_t*)(phi33 + 72);
					phi322 = phi28;
					phi323 = phi37;
					phi324 = phi38;
					phi31 = phi31;
					phi325 = phi32 & 0xffffffff;
					phi_in326 = phi33;
				}
				phi23 = phi316;
				phi24 = phi317;
				phi25 = phi318;
				phi26 = phi319;
				phi20 = phi320;
				phi28 = phi322;
				phi29 = phi323;
				phi30 = phi324;
				phi32 = phi325;
				phi327 = *(uint32_t*)(phi_in326 + 68);
				phi328 = phi27;
				phi329 = *(uint64_t*)(phi_in326 + 56);
				phi16 = (__zext uint64_t)phi27;
				phi330 = *(uint32_t*)(phi_in326 + 68);
				phi_in331 = phi27;
				phi332 = *(uint32_t*)(phi_in326 + 68);
				phi17 = phi_in326;
			}
			else 
			{
				phi327 = phi5;
				phi328 = phi15;
				phi329 = *(uint64_t*)(phi17 + 56);
				phi16 = phi16 & 0xffffffff;
				phi330 = *(uint32_t*)(phi17 + 68);
				phi_in331 = phi20;
				phi332 = phi19;
				phi17 = phi17;
			}
			phi5 = phi327;
			phi15 = phi328;
			*(uint32_t*)(phi17 + 68) = phi330;
			phi19 = phi332;
			phi333 = *(uint64_t*)(phi17 + 48);
			phi334 = phi15;
			phi335 = phi5;
			phi7 = (__zext uint64_t)phi15;
			phi336 = phi5;
			phi_in337 = phi15;
			phi338 = phi17;
		}
		else 
		{
			phi333 = *(uint64_t*)(phi11 + 48);
			phi334 = phi4;
			phi335 = phi5;
			phi7 = phi7 & 0xffffffff;
			phi336 = *anon13;
			phi_in337 = phi9;
			phi338 = phi11;
		}
		if (phi333 != 8)
		{
			phi4 = phi334;
			phi5 = phi335;
			phi8 = phi336;
			phi9 = phi_in337;
			phi10 = phi333 + 4;
			phi11 = phi338;
		}
		phi18 = phi_in331;
		*(uint64_t*)(phi17 + 56) = phi329 + 4;
		*(uint64_t*)(phi33 + 72) = phi321 + 4;
		phi34 = phi_in326;
		phi42 = phi_in308;
		phi33 = phi_in315;
		phi47 = phi47 + 4;
		break;
	}
	return;
}
void t(uint64_t arg0)
{
	struct { uint8_t field0[24]; uint64_t field1; } alloca1;
	alloca1.field1 = arg0;
	uint64_t phi2 = 4;
	while (true)
	{
		uint32_t* anon4;
		uint64_t anon5;
		uint32_t* anon10;
		do
		{
			do
			{
				uint64_t anon3 = random();
				phi2 = phi2;
				uint64_t anon6 = anon3 << 32;
				anon5 = anon3 + (((anon3 & 0xffffffff) * 2290649225 + anon6 >> 32 >> 4) - (anon6 >> 32 >> 31)) * -30 << 32 >> 30;
				anon4 = (uint32_t*)(anon5 + 6301504);
			}
			while (*anon4 != 0);
			phi2 = phi2;
		}
		while (*(uint32_t*)(anon5 + 6300864) != 0);
		*anon4 = 1;
		do
		{
			uint64_t anon8;
			do
			{
				uint64_t anon7 = random();
				uint64_t anon9 = anon7 << 32;
				anon8 = anon7 + (((anon7 & 0xffffffff) * 2290649225 + anon9 >> 32 >> 4) - (anon9 >> 32 >> 31)) * -30 << 32 >> 30;
			}
			while (*(uint32_t*)(anon8 + 6301504) != 0);
			anon10 = (uint32_t*)(anon8 + 6300864);
		}
		while (*anon10 != 0);
		*anon10 = 1;
		uint64_t anon11 = random();
		uint64_t anon12 = anon11 << 32;
		w(4198271, (uint64_t)&alloca1, anon11 + (((anon11 & 0xffffffff) * 2290649225 + anon12 >> 32 >> 4) - (anon12 >> 32 >> 31)) * 4294967266 & 0xffffffff, 0, 0);
		uint64_t phi13 = 3;
		while (true)
		{
			uint64_t anon15;
			uint32_t* anon17;
			do
			{
				do
				{
					do
					{
						do
						{
							uint64_t anon14 = random();
							phi13 = phi13;
							uint64_t anon16 = anon14 << 32;
							anon15 = anon14 + (((anon14 & 0xffffffff) * 2290649225 + anon16 >> 32 >> 4) - (anon16 >> 32 >> 31)) * -30 << 32 >> 30;
						}
						while (*(uint32_t*)(anon15 + 6301504) != 0);
						phi13 = phi13;
					}
					while (*(uint32_t*)(anon15 + 6300864) != 0);
					phi13 = phi13;
					anon17 = (uint32_t*)(anon15 + 6301120);
				}
				while (*anon17 != 0);
				phi13 = phi13;
			}
			while (*(uint32_t*)(anon15 + 6300992) == 0);
			*anon17 = 1;
			while (true)
			{
				uint64_t anon18 = random();
				uint64_t anon19 = anon18 << 32;
				*(uint32_t*)0x60292c = (uint32_t)anon18 + (uint32_t)(((anon18 & 0xffffffff) * 2290649225 + anon19 >> 32 >> 4) - (anon19 >> 32 >> 31)) * 4294967266;
			}
			break;
			uint32_t anon20 = (uint32_t)phi13 - 1;
			phi13 = (__zext uint64_t)anon20;
		}
		break;
		uint32_t anon21 = (uint32_t)phi2 - 1;
		phi2 = (__zext uint64_t)anon21;
	}
}
void r(uint64_t arg0, uint64_t arg1)
{
	uint32_t phi_in2;
	uint32_t phi6;
	uint32_t phi1 = 0;
	uint64_t anon4 = arg1 << 32;
	uint32_t* anon3 = (uint32_t*)((anon4 >> 30) + 6301376);
	phi_in2 = *anon3;
	do
	{
		uint32_t phi_in5 = phi1;
		phi6 = phi_in2;
		if (phi6 != 0)
		{
			*anon3 = phi6 - 1;
			uint32_t phi_in7 = 3;
			uint32_t phi8 = phi_in5;
			uint32_t phi9 = phi_in7;
			uint64_t anon10 = random();
			if (phi8 > 1000)
			{
				break;
			}
			else 
			{
				uint32_t anon11 = phi8 + 1;
				phi_in5 = anon11;
				uint32_t anon12 = phi9 - (__zext uint32_t)(anon11 == (anon11 / 100 - (uint32_t)((__zext uint64_t)anon11 << 32 >> 63)) * 100);
				phi_in7 = anon12;
				uint64_t anon15 = anon10 << 32;
				uint64_t anon14 = anon10 + (((anon10 & 0xffffffff) * 2290649225 + anon15 >> 36) - (anon15 >> 32 >> 31)) * 4294967266;
				uint32_t anon13 = (uint32_t)anon14;
				uint64_t anon17 = anon4 >> 32;
				uint32_t anon16 = (uint32_t)anon17;
				if (anon13 != anon16)
				{
					phi_in5 = anon11;
					phi_in7 = anon12;
					uint64_t anon19 = anon14 << 32;
					uint32_t* anon18 = (uint32_t*)((anon19 >> 30) + 6301376);
					if ((*anon18 >> 31 | (__zext uint32_t)(*anon18 == 0)) == 0)
					{
						phi_in5 = anon11;
						phi_in7 = anon12;
						uint64_t anon20 = anon17 * 12;
						if (!(*(uint32_t*)(anon20 + 6301640) == anon13 | anon12 > *anon18))
						{
							phi_in5 = anon11;
							phi_in7 = anon12;
							if (anon13 != *(uint32_t*)(anon20 + 6301636))
							{
								uint32_t anon21 = *anon18 - 1;
								*anon18 = anon21;
								uint64_t anon22 = anon17 * 3;
								*(uint32_t*)(((__sext int64_t)anon21 + anon22 << 2) + 6301632) = anon13;
								uint62_t anon23 = (uint62_t)(anon19 >> 32) * 3;
								*(uint32_t*)(((__zext uint64_t)((__sext int62_t)anon21 + anon23) << 2) + 6301632) = anon16;
								r(4198736, anon14 & 0xffffffff);
								uint32_t* anon24 = (uint32_t*)((anon19 >> 30) + 6301376);
								*(uint32_t*)(((__zext uint64_t)(anon23 + (__sext int62_t)*anon24) << 2) + 6301632) = 4294967295;
								*anon24 = *anon24 + 1;
								*(uint32_t*)(((__sext int64_t)*anon3 + anon22 << 2) + 6301632) = 4294967295;
								*anon3 = 0;
								phi1 = anon11;
								phi_in2 = 0;
							}
						}
					}
				}
			}
		}
	}
	while (phi6 != 0);
	return;
}
void m(uint64_t arg0)
{
	getpid(4198911);
	srandom(0);
	(__asm "pcmpeqd xmm0, xmm0")();
	(__asm "movdqa xmm2, xmmword ptr [rip + 0xc6c]")();
	(__asm "movdqa xmm1, xmmword ptr [rip + 0xc74]")();
	while (true)
	{
		uint64_t phi3;
		uint64_t phi6;
		uint64_t phi7;
		uint64_t phi_in8;
		uint64_t phi9;
		uint64_t phi27;
		uint32_t anon28;
		uint32_t anon44;
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
		uint64_t phi1 = 6301504;
		uint64_t phi_in2 = 15;
		do
		{
			phi3 = phi_in2;
			if (phi3 != 0)
			{
				*(uint64_t*)phi1 = 0;
				phi1 = phi1 + 8;
				phi_in2 = phi3 - 1;
			}
		}
		while (phi3 != 0);
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
		uint64_t phi_in4 = 15;
		uint64_t phi5 = 6300864;
		do
		{
			phi6 = phi_in4;
			phi7 = 6301248;
			phi_in8 = 15;
			if (phi6 != 0)
			{
				*(uint64_t*)phi5 = 0;
				phi_in4 = phi6 - 1;
				phi5 = phi5 + 8;
			}
		}
		while (phi6 != 0);
		do
		{
			phi9 = phi_in8;
			if (phi9 != 0)
			{
				*(uint64_t*)phi7 = 0;
				phi7 = phi7 + 8;
				phi_in8 = phi9 - 1;
			}
		}
		while (phi9 != 0);
		r(4199339, 0);
		(__asm "movdqa xmm0, xmmword ptr [rsp + 0x20]")();
		(__asm "movdqa xmm2, xmmword ptr [rsp + 0x10]")();
		(__asm "movdqa xmm1, xmmword ptr [rsp]")();
		uint32_t* phi10 = (uint32_t*)0x6027c4;
		uint64_t phi_in11 = 6301636;
		do
		{
			uint32_t phi14;
			uint32_t phi15;
			uint32_t phi16;
			uint32_t phi17;
			uint32_t phi18;
			uint32_t* anon19;
			uint32_t phi_in20;
			uint32_t phi23;
			uint32_t phi24;
			uint32_t phi25;
			uint64_t phi12 = phi_in11;
			uint32_t* anon13 = (uint32_t*)(phi12 + 4);
			if (*anon13 < *phi10)
			{
				*phi10 = *anon13;
				*anon13 = *phi10;
				phi14 = *phi10;
				phi15 = *phi10;
				phi16 = *anon13;
				phi17 = *anon13;
				anon19 = (uint32_t*)(phi12 - 4);
				phi18 = *anon19;
			}
			else 
			{
				phi_in20 = *anon19;
				if (*phi10 < *anon19)
				{
					phi14 = *anon13 & 0xf;
					phi15 = *anon13;
					phi16 = *phi10 & 0xf;
					phi17 = *phi10;
					phi18 = *anon19 & 0xf;
				}
			}
			if (*anon13 >= *phi10 && *phi10 < *anon19 || *anon13 < *phi10 && *anon13 < *anon19)
			{
				uint32_t phi_in21 = phi14;
				uint32_t phi_in22 = phi15;
				phi23 = phi16;
				*anon19 = phi17;
				*phi10 = phi18;
				*phi10 = phi_in21;
				phi24 = *anon19;
				phi25 = phi_in22;
			}
			if (*anon13 >= *anon19 && *anon13 < *phi10)
			{
				phi23 = *anon19 & 0xf;
				*phi10 = *phi10;
				phi24 = *anon13;
				phi25 = *phi10;
			}
			if (*anon13 >= *phi10 && *phi10 < *anon19 || *anon13 < *phi10 && *anon13 < *anon19 || *anon13 >= *anon19 && *anon13 < *phi10)
			{
				phi_in20 = phi23;
				*anon13 = phi24;
				if (phi25 - *anon13 <= 4294967295)
				{
					phi_in20 = *(uint32_t*)((phi12 & 0xc) - 4);
				}
			}
			uint32_t phi26 = phi_in20;
			phi27 = 6301636;
			anon28 = phi26 + 1 & 0xff;
			if (anon28 != 0)
			{
				phi27 = 6301636;
				uint64_t anon29 = phi12 + 12;
				phi10 = (uint32_t*)(anon29 & 0xc);
				phi_in11 = anon29;
				if (phi12 == 6301984)
				{
					break;
				}
			}
		}
		while (anon28 != 0);
		do
		{
			uint32_t phi32;
			uint32_t phi33;
			uint32_t phi34;
			uint32_t* anon35;
			uint32_t phi36;
			uint32_t phi_in37;
			uint32_t phi38;
			uint32_t phi41;
			uint32_t phi42;
			uint32_t* anon30 = (uint32_t*)(phi27 + 4);
			uint32_t* anon31 = (uint32_t*)phi27;
			if (*anon30 < *anon31)
			{
				*anon31 = *anon30;
				*anon30 = *anon31;
				phi32 = *anon31;
				phi33 = *anon31;
				phi34 = *anon30;
				anon35 = (uint32_t*)(phi27 - 4);
				*anon35 = *anon30;
				phi36 = *anon35;
			}
			else 
			{
				phi_in37 = *anon35;
				if (*anon31 < *anon35)
				{
					phi32 = *anon30 & 0xf;
					phi33 = *anon30;
					phi34 = *anon31 & 0xf;
					*anon35 = *anon31;
					phi36 = *anon35 & 0xf;
				}
			}
			if (*anon30 >= *anon31 && *anon31 < *anon35 || *anon30 < *anon31 && *anon30 < *anon35)
			{
				phi38 = phi32;
				uint32_t phi_in39 = phi33;
				uint32_t phi_in40 = phi34;
				*anon31 = phi36;
				phi_in37 = phi_in40;
				phi41 = *anon35;
				phi42 = phi_in39;
			}
			if (*anon30 >= *anon35 && *anon30 < *anon31)
			{
				phi_in37 = *anon35 & 0xf;
				phi38 = *anon31;
				phi41 = *anon30;
				phi42 = *anon31;
			}
			if (*anon30 >= *anon31 && *anon31 < *anon35 || *anon30 < *anon31 && *anon30 < *anon35 || *anon30 >= *anon35 && *anon30 < *anon31)
			{
				*anon31 = phi38;
				*anon30 = phi41;
				if (phi42 - *anon30 <= 4294967295)
				{
					phi_in37 = *(uint32_t*)((phi27 & 0xf) - 4);
				}
			}
			uint32_t phi43 = phi_in37;
			anon44 = phi43 + 1 & 0xff;
			if (anon44 != 0)
			{
				phi27 = phi27 + 12;
			}
		}
		while (anon44 != 0);
	}
}
void q(uint64_t arg0, uint64_t arg1)
{
	struct { uint8_t field0[56]; uint64_t field1; } alloca1;
	uint64_t phi4;
	uint32_t phi_in5;
	uint32_t phi6;
	uint32_t* anon7;
	uint32_t dispatch13;
	uint32_t phi16;
	uint32_t anon18;
	alloca1.field1 = arg0;
	uint32_t dispatch2 = 0;
	uint32_t* anon3 = (uint32_t*)0x602928;
	if (*anon3 != 0)
	{
		uint16_t** anon12;
		*anon3 = *anon3 - 1;
		printf((uint8_t*)0x401ca7);
		phi4 = arg1 & 0xffffffff;
		phi_in5 = 0;
		phi6 = phi_in5;
		anon7 = (uint32_t*)0x602490;
		*anon7 = *anon7 + phi6;
		struct _IO_FILE** anon9 = (struct _IO_FILE**)0x602480;
		uint32_t anon8 = _IO_getc(*anon9);
		uint8_t anon10 = (uint8_t)anon8;
		if (anon10 == 10)
		{
			dispatch2 = 1;
		}
		uint32_t anon11 = *anon3 >> 31 | (__zext uint32_t)(*anon3 == 0);
		if (anon10 != 10 || anon11 != 0 && anon10 == 10)
		{
			anon12 = __ctype_b_loc();
			dispatch13 = 0;
		}
		uint64_t* anon14 = (uint64_t*)anon12;
		if ((*(uint8_t*)(*anon14 + ((__sext int64_t)anon10 << 1 | 1)) & 8) != 0 && (anon10 != 10 || anon11 != 0 && anon10 == 10))
		{
			uint32_t anon15 = _IO_getc(*anon9);
			uint32_t anon17 = (anon8 << 24 >> 24) - 48;
			phi16 = anon17;
			if ((*(uint8_t*)(*anon14 + ((__zext uint64_t)anon15 << 56 >> 55 | 1)) & 8) != 0)
			{
				anon18 = anon15 >> 8;
				phi16 = (anon18 << 24 >> 24) + anon17 * 10 - 48;
			}
		}
	}
	while (true)
	{
		uint8_t* anon19;
		dispatch2 = 4;
		if (*(uint32_t*)(((__sext int64_t)phi16 << 2) + 6300992) != 0)
		{
			phi4 = (__zext uint64_t)phi16;
		}
		if (dispatch2 == 4)
		{
			puts((uint8_t*)0x401cd5);
			*anon7 = *anon3 * 100 + *anon7 + 500;
			anon19 = (uint8_t*)0x401cf1;
			printf(anon19);
			exit(0);
		}
		uint64_t anon20 = random();
		dispatch2 = 2;
		if (dispatch2 == 2)
		{
			puts((uint8_t*)0x401dd0);
			*anon7 = *anon7 - 100;
			printf(anon19);
			exit(0);
		}
		if ((uint32_t)anon20 + ((uint32_t)((anon20 & 0xffffffff) / 3) - (uint32_t)(anon20 << 32 >> 32 >> 31)) * 4294967293 != 1)
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
			uint64_t anon21 = random();
			uint64_t anon22 = anon21 << 32;
			w(4199968, (uint64_t)&alloca1, anon21 + (((anon21 & 0xffffffff) * 2290649225 + anon22 >> 32 >> 4) - (anon22 >> 32 >> 31)) * 4294967266 & 0xffffffff, 0, 0);
			*anon7 = *anon7 - 100;
			phi4 = phi4;
		}
		if (*(uint32_t*)(((__sext int64_t)phi16 << 2) + 6300992) != 0 || (uint32_t)anon20 + ((uint32_t)((anon20 & 0xffffffff) / 3) - (uint32_t)(anon20 << 32 >> 32 >> 31)) * 4294967293 != 1)
		{
			dispatch2 = 1;
		}
		if ((uint8_t)anon18 != 10 && (*(uint32_t*)(((__sext int64_t)phi16 << 2) + 6300992) != 0 || (uint32_t)anon20 + ((uint32_t)((anon20 & 0xffffffff) / 3) - (uint32_t)(anon20 << 32 >> 32 >> 31)) * 4294967293 != 1))
		{
			phi_in5 = phi6 - 20;
			dispatch13 = 1;
			dispatch2 = 3;
			if (phi6 != 196)
			{
				break;
			}
		}
		if (dispatch2 == 3)
		{
			return;
		}
		if (dispatch2 == 1)
		{
			*anon7 = *anon7 - 50;
			__indirect_jump(*(uint64_t*)0x602408);
		}
		if (dispatch2 == 0)
		{
			__indirect_jump(*(uint64_t*)0x6023f8);
		}
	}
}
struct nn(uint64_t arg0)
{
	int64_t anon8;
	uint64_t phi_in9;
	uint64_t phi_in10;
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
	}
	while (*(uint32_t*)(anon8 + 6301504) != 0);
	uint64_t phi11 = phi_in9;
	uint64_t phi12 = phi_in10;
	printf((uint8_t*)0x401d03);
	while (true)
	{
		uint32_t phi18;
		uint32_t anon19;
		uint32_t* anon20;
		uint32_t* anon21;
		uint32_t* anon25;
		uint64_t anon26;
		uint16_t** phi34;
		uint8_t anon35;
		uint16_t** anon39;
		uint32_t dispatch13 = 0;
		uint32_t* anon14 = (uint32_t*)0x602928;
		*anon14 = *anon14 + 1;
		puts((uint8_t*)0x401d17);
		uint32_t* anon15 = (uint32_t*)0x602490;
		*anon15 = *anon15 + 20;
		uint64_t anon17 = phi11 << 2;
		uint32_t* anon16 = (uint32_t*)(anon17 + 6301120);
		*anon16 = 0;
		dispatch13 = 0;
		if (dispatch13 == 0)
		{
			puts((uint8_t*)0x401d2a);
			phi18 = 4294967196;
		}
		if (*(uint32_t*)(anon17 + 6300992) != 0)
		{
			dispatch13 = 1;
			anon19 = (uint32_t)phi12;
			anon20 = (uint32_t*)0x60292c;
			if (*(uint32_t*)(anon17 + 6300864) == 0 && anon19 == *anon20)
			{
				if (*anon14 != 0)
				{
					anon21 = (uint32_t*)0x60248c;
					*anon21 = *anon21 + 1;
					*anon14 = *anon14 - 1;
					*anon15 = *anon15 - 20;
					puts((uint8_t*)0x401d48);
				}
				dispatch13 = 2;
			}
		}
		if (dispatch13 == 2)
		{
			puts((uint8_t*)0x401d62);
			while (true)
			{
				uint64_t anon22 = random();
				uint32_t anon23 = (uint32_t)anon22;
				*anon20 = anon23 + (((uint32_t)((anon22 & 0xffffffff) * 2290649225 >> 32) + anon23 >> 4) - (anon23 >> 31)) * 4294967266;
			}
		}
		if (*(uint32_t*)(anon17 + 6300992) != 0 && *(uint32_t*)(anon17 + 6300864) == 0)
		{
			if (anon19 == *anon20 && *anon21 == 3)
			{
				puts((uint8_t*)0x401df8);
				*anon14 = 3;
				*anon15 = *anon15 + 200;
				*anon20 = 4294967295;
			}
			if (anon19 != *anon20 || anon19 == *anon20 && *anon21 == 3 || anon19 == *anon20 && *anon21 == 3)
			{
				dispatch13 = 3;
			}
		}
		if (dispatch13 == 3)
		{
			uint64_t phi27;
			if (*(uint32_t*)(anon17 + 6300992) < 3)
			{
				puts((uint8_t*)0x401d7b);
			}
			anon26 = phi11 * 12;
			anon25 = (uint32_t*)(anon26 + 6301632);
			int64_t anon24 = (__sext int64_t)*anon25;
			if (*(uint32_t*)((anon24 << 2) + 6300864) == 0 && *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon26 + 6301636) << 2) + 6300864) == 0)
			{
				phi27 = anon24;
			}
			if (*(uint32_t*)((anon24 << 2) + 6300864) != 0 || *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon26 + 6301636) << 2) + 6300864) != 0 && *(uint32_t*)((anon24 << 2) + 6300864) == 0 || *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon26 + 6301640) << 2) + 6300864) != 0 && *(uint32_t*)((anon24 << 2) + 6300864) == 0 && *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon26 + 6301636) << 2) + 6300864) == 0)
			{
				puts((uint8_t*)0x401d8e);
				phi27 = (__sext int64_t)*anon25;
			}
			if (*(uint32_t*)((phi27 << 2) + 6301504) != 0 || *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon26 + 6301636) << 2) + 6301504) != 0 && *(uint32_t*)((phi27 << 2) + 6301504) == 0 || *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon26 + 6301640) << 2) + 6301504) != 0 && *(uint32_t*)((phi27 << 2) + 6301504) == 0 && *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon26 + 6301636) << 2) + 6301504) == 0)
			{
				puts((uint8_t*)0x401da0);
			}
			printf((uint8_t*)0x401e58);
			uint32_t* anon28 = (uint32_t*)(anon17 + 6301248);
			if (*anon28 == 0)
			{
				*anon15 = *anon15 + 10;
				*anon28 = 1;
			}
		}
		struct _IO_FILE** anon30 = (struct _IO_FILE**)0x602480;
		uint32_t anon29 = _IO_getc(*anon30);
		uint8_t anon32 = (uint8_t)anon29;
		bool anon31 = anon32 == 108;
		if (anon31)
		{
			uint16_t** anon33 = __ctype_b_loc();
			phi_in9 = phi11;
			phi_in10 = phi12;
			phi34 = anon33;
			anon35 = *(uint8_t*)(*(uint64_t*)anon33 + 217) & 8;
			if (anon35 == 0)
			{
				break;
			}
		}
		bool anon36 = anon32 == 105;
		if (anon36)
		{
			printf((uint8_t*)0x401dba);
		}
		bool anon37 = anon32 == 115;
		if (anon37)
		{
			q(4200890, phi12 & 0xffffffff);
		}
		bool anon38 = anon32 == 115 || anon32 == 108 || anon32 == 105 || anon32 == 113;
		if (!anon38 || anon32 == 105 || anon32 == 115)
		{
			anon39 = __ctype_b_loc();
			phi34 = anon39;
		}
		int64_t anon41 = (__sext int64_t)anon32;
		uint8_t anon40 = *(uint8_t*)(*(uint64_t*)anon39 + (anon41 >> 7 | 1)) & 8;
		if (anon40 != 0 && anon36 || anon40 != 0 && anon37 || anon40 != 0 && (!anon38) || anon35 != 0 && anon31)
		{
			uint32_t phi43;
			uint32_t anon42 = _IO_getc(*anon30);
			uint32_t anon44 = (uint32_t)(anon41 + 4294967248);
			phi43 = anon44;
			uint32_t anon45 = anon42 << 24 >> 24;
			if ((*(uint8_t*)(*(uint64_t*)phi34 + ((__zext uint64_t)anon45 << 1 | 1)) & 8) != 0)
			{
				phi43 = anon44 * 10 + anon45 - 48;
			}
			if (*anon25 != phi43 && *(uint32_t*)(anon26 + 6301636) != phi43)
			{
				phi_in9 = phi11;
				phi_in10 = phi12;
			}
			if (*anon25 == phi43 || *anon25 != phi43 && *(uint32_t*)(anon26 + 6301636) == phi43 || *anon25 != phi43 && *(uint32_t*)(anon26 + 6301636) != phi43 && *(uint32_t*)(anon26 + 6301640) == phi43)
			{
				int64_t anon46 = (__sext int64_t)phi43;
				phi_in9 = anon46;
				phi_in10 = anon46;
			}
			break;
		}
		uint32_t* anon47 = (uint32_t*)(anon17 + 6301504);
		if (*anon47 != 0 && *(uint32_t*)(anon17 + 6300992) != 0 && *(uint32_t*)(anon17 + 6300864) == 0 && (anon19 != *anon20 || anon19 == *anon20 && *anon21 == 3 || anon19 == *anon20 && *anon21 == 3))
		{
			*anon47 = 0;
			uint64_t anon48 = random();
			uint32_t anon49 = (uint32_t)anon48;
			*(uint32_t*)(((__sext int64_t)(anon49 + (((uint32_t)((anon48 & 0xffffffff) * 2290649225 >> 32) + anon49 >> 4) - (anon49 >> 31)) * 4294967266) << 2) + 6301504) = 1;
			uint64_t anon50 = random();
			printf((uint8_t*)0x401e28);
			*anon15 = *anon15 - 10;
			uint32_t anon52 = (uint32_t)anon50;
			int64_t anon51 = (__sext int64_t)(anon52 + ((uint32_t)((anon50 & 0xffffffff) * 2290649225 + (anon50 << 32) >> 36) - (anon52 >> 31)) * 4294967266);
			phi_in9 = anon51;
			phi_in10 = anon51;
			break;
		}
		if (dispatch13 == 1)
		{
			puts((uint8_t*)0x401d36);
			phi18 = 4294967246;
		}
		if (dispatch13 == 1 || dispatch13 == 0)
		{
			*anon15 = *anon15 + phi18;
		}
		if (dispatch13 == 1 || dispatch13 == 0 || anon32 == 113)
		{
			printf((uint8_t*)0x401cf1);
			exit(0);
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
