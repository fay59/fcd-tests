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
	uint64_t anon3 = anon1 & 0xfffffffffffffff0;
	uint64_t anon2 = anon3 - 8;
	struct nanon4 = n(4195954);
	*(uint64_t*)anon2 = anon4.rax;
	uint64_t anon5 = anon3 - 16;
	*(uint64_t*)anon5 = anon2;
	__libc_start_main((uint32_t(*)(uint32_t, uint8_t**, uint8_t**))0x400660, (uint32_t)arg0, (uint8_t**)anon1, (void(*)())0x401c10, (void(*)())0x401c80, (void(*)())anon4.rdx, *(uint8_t**)anon5);
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
		if (*anon4 < *phi1 && *anon4 < *anon8 || *anon4 >= *phi1 && *phi1 < *anon8)
		{
			uint32_t phi_in12 = phi5;
			phi7 = phi6;
			*phi1 = *anon8;
			*anon8 = phi7;
			phi9 = phi_in12;
			phi10 = *anon8;
		}
		if (*anon4 < *phi1 && *anon4 < *anon8 || *anon4 >= *phi1 && *phi1 < *anon8 || *anon4 >= *anon8 && *anon4 < *phi1)
		{
			uint32_t phi_in13 = phi7;
			*phi1 = phi9;
			*anon4 = phi10;
			phi11 = phi_in13;
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
void w(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4)
{
	struct { uint8_t field0[4]; uint32_t field1; uint64_t field2; uint8_t field3[8]; uint32_t field4; uint32_t field5; uint8_t field6[48]; uint64_t field7; uint32_t field8; uint8_t field9[4]; uint64_t field10; uint64_t field11; uint32_t field12; uint8_t field13[8]; uint32_t field14; uint8_t field15[56]; uint64_t field16; } alloca1;
	uint32_t phi5;
	uint64_t phi10;
	uint64_t phi364;
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
	int64_t anon9 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi10 + 48) + *(uint64_t*)(phi10 + 8) + 6301632);
	uint32_t* anon8 = (uint32_t*)((anon9 << 2) + 6300992);
	*anon8 = anon6;
	uint32_t phi11 = anon3;
	*(uint64_t*)(phi10 + 48) = 0;
	uint64_t anon12 = (uint64_t)&alloca1;
	phi10 = anon12;
	do
	{
		uint32_t phi_in355;
		uint32_t phi362;
		uint32_t phi_in365;
		uint64_t phi_in366;
		uint64_t phi367;
		if (phi11 < *anon8)
		{
			uint64_t phi_in360;
			uint32_t phi_in361;
			uint64_t phi363;
			*(uint64_t*)(phi10 + 16) = anon9 * 12;
			*(uint32_t*)(phi10 + 40) = (uint32_t)phi7 + 5;
			uint32_t phi13 = phi5;
			uint32_t phi14 = phi4;
			uint64_t phi15 = (__zext uint64_t)phi4;
			*(uint32_t*)(phi16 + 68) = phi5;
			uint32_t phi17 = phi4;
			uint32_t phi18 = phi5;
			uint64_t phi19 = 0;
			uint64_t phi16 = phi10;
			do
			{
				uint64_t phi_in356;
				uint32_t phi357;
				uint32_t phi358;
				uint32_t phi359;
				uint32_t phi_in20 = phi13;
				uint32_t phi21 = phi14;
				*(uint64_t*)(phi16 + 56) = phi19;
				int64_t anon23 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi16 + 56) + *(uint64_t*)(phi16 + 16) + 6301632);
				uint32_t* anon22 = (uint32_t*)((anon23 << 2) + 6300992);
				if (phi18 < *anon22)
				{
					uint64_t phi_in352;
					uint32_t phi_in353;
					uint64_t phi354;
					*anon22 = *(uint32_t*)(phi16 + 4);
					*(uint64_t*)(phi16 + 32) = anon23 * 12;
					*(uint32_t*)(phi16 + 44) = (uint32_t)phi15 + 6;
					uint32_t phi24 = phi17;
					uint32_t phi25 = phi17;
					uint32_t phi26 = phi17;
					uint32_t phi27 = phi17;
					uint32_t phi28 = phi17;
					uint32_t phi29 = phi17;
					uint32_t phi30 = phi17;
					uint32_t phi31 = phi17;
					uint32_t phi32 = phi17;
					uint32_t phi33 = phi17;
					uint64_t phi34 = (__zext uint64_t)phi17;
					uint64_t phi35 = 0;
					uint64_t phi36 = phi16;
					do
					{
						uint32_t phi339;
						uint32_t phi340;
						uint32_t phi342;
						uint64_t phi344;
						uint32_t phi345;
						uint32_t phi346;
						uint32_t phi347;
						uint32_t phi348;
						uint64_t phi_in349;
						uint32_t phi350;
						uint32_t phi351;
						*(uint64_t*)(phi36 + 72) = phi35;
						int64_t anon38 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi36 + 72) + *(uint64_t*)(phi36 + 32) + 6301632);
						uint32_t* anon37 = (uint32_t*)((anon38 << 2) + 6300992);
						if (*(uint32_t*)(phi36 + 4) < *anon37)
						{
							uint32_t phi_in329;
							uint32_t phi_in332;
							uint32_t phi_in335;
							uint32_t phi_in337;
							uint32_t phi_in338;
							uint32_t phi_in341;
							uint64_t phi_in343;
							*anon37 = *(uint32_t*)(phi36 + 24);
							*(uint32_t*)(phi36 + 64) = (uint32_t)phi34 + 7;
							uint32_t phi39 = phi24;
							uint32_t phi40 = phi25;
							uint32_t phi41 = phi26;
							uint32_t phi42 = phi27;
							uint32_t phi43 = phi28;
							uint32_t phi44 = phi29;
							uint32_t phi45 = phi30;
							uint32_t phi46 = phi31;
							uint32_t phi47 = phi32;
							uint32_t phi48 = phi33;
							uint64_t phi49 = phi36;
							uint64_t phi50 = 0;
							uint64_t phi51 = anon38 * 12;
							uint64_t phi52 = phi34;
							do
							{
								uint32_t phi109;
								uint64_t phi118;
								uint64_t phi120;
								uint32_t phi328;
								uint32_t phi330;
								uint32_t phi331;
								uint32_t phi333;
								uint32_t phi334;
								uint64_t phi336;
								int64_t anon54 = (__sext int64_t)*(uint32_t*)(phi50 + phi51 + 6301632);
								uint32_t* anon53 = (uint32_t*)((anon54 << 2) + 6300992);
								if (*(uint32_t*)(phi49 + 24) < *anon53)
								{
									uint32_t phi_in58;
									uint64_t phi325;
									*anon53 = *(uint32_t*)(phi49 + 28);
									uint32_t phi_in55 = phi39;
									uint32_t phi56 = phi40;
									uint32_t phi_in57 = phi41;
									uint32_t anon59 = (uint32_t)phi52 + 8;
									phi_in58 = anon59;
									uint32_t phi_in60 = phi42;
									uint32_t phi61 = phi43;
									uint32_t phi_in62 = anon59;
									uint32_t phi63 = phi44;
									uint32_t phi64 = phi45;
									uint32_t phi_in65 = anon59;
									uint32_t phi_in66 = anon59;
									uint32_t phi_in67 = anon59;
									uint32_t phi_in68 = phi46;
									uint32_t phi_in69 = anon59;
									uint32_t phi_in70 = anon59;
									uint32_t phi71 = phi47;
									uint32_t phi_in72 = anon59;
									uint32_t phi73 = anon59;
									uint32_t phi74 = phi48;
									uint64_t phi_in75 = phi51;
									uint32_t phi_in76 = anon59;
									uint32_t phi77 = anon59;
									uint32_t phi78 = anon59;
									uint64_t phi79 = phi49;
									uint64_t phi80 = 0;
									uint64_t phi81 = anon54 * 12;
									uint64_t phi82 = phi52;
									do
									{
										uint32_t phi_in83 = phi56;
										uint32_t phi_in84 = phi_in60;
										uint32_t phi_in85 = phi61;
										uint32_t phi_in86 = phi_in62;
										uint32_t phi_in87 = phi63;
										uint32_t phi_in88 = phi64;
										uint32_t phi_in89 = phi_in65;
										uint32_t phi90 = phi_in66;
										uint32_t phi_in91 = phi_in67;
										uint32_t phi_in92 = phi_in68;
										uint32_t phi_in93 = phi71;
										uint32_t phi_in94 = phi_in72;
										uint32_t phi_in95 = phi73;
										uint32_t phi_in96 = phi74;
										uint32_t phi_in97 = phi77;
										uint32_t phi_in98 = phi78;
										uint64_t phi99 = phi79;
										uint64_t phi_in100 = phi81;
										uint32_t phi101 = phi_in83;
										uint32_t phi102 = phi_in57;
										uint32_t phi103 = phi_in58;
										uint32_t phi_in104 = phi_in84;
										uint32_t phi105 = phi_in85;
										phi_in62 = phi_in86;
										uint32_t phi106 = phi_in87;
										uint64_t phi107 = phi_in100;
										uint64_t phi_in108 = phi80;
										phi109 = phi_in88;
										uint32_t phi110 = phi_in89;
										uint32_t phi111 = phi_in91;
										uint32_t phi_in112 = phi_in92;
										uint32_t phi113 = phi_in69;
										uint32_t phi114 = phi_in70;
										uint32_t phi_in115 = phi_in93;
										uint32_t phi_in116 = phi_in94;
										phi73 = phi_in95;
										uint32_t phi117 = phi_in96;
										phi118 = phi_in75;
										uint32_t phi119 = phi_in76;
										phi77 = phi_in97;
										phi78 = phi_in98;
										phi120 = phi99;
										int64_t anon122 = (__sext int64_t)*(uint32_t*)(phi80 + phi_in100 + 6301632);
										uint32_t* anon121 = (uint32_t*)((anon122 << 2) + 6300992);
										if (*(uint32_t*)(phi99 + 28) < *anon121)
										{
											*anon121 = *(uint32_t*)(phi99 + 40);
											*(uint32_t*)(phi99 + 120) = (uint32_t)phi82 + 9;
											uint64_t phi123 = 0;
											uint32_t phi124 = phi_in55;
											uint32_t phi_in125 = phi_in57;
											uint32_t phi_in126 = phi_in58;
											uint32_t phi_in127 = phi_in84;
											uint32_t phi128 = phi_in85;
											uint32_t phi_in129 = phi_in86;
											uint32_t phi_in130 = phi_in88;
											uint32_t phi131 = phi90;
											uint32_t phi132 = phi_in92;
											uint32_t phi133 = phi_in69;
											uint32_t phi134 = phi_in70;
											uint32_t phi_in135 = phi_in93;
											uint32_t phi136 = phi_in94;
											uint64_t phi137 = phi80;
											uint32_t phi138 = phi_in96;
											uint64_t phi_in139 = phi_in75;
											uint64_t phi140 = phi_in100;
											uint32_t phi141 = phi_in76;
											uint32_t phi142 = phi_in97;
											uint32_t phi143 = phi_in98;
											uint64_t phi_in144 = phi82 & 0xffffffff;
											do
											{
												phi_in55 = phi124;
												uint32_t phi_in145 = phi_in83;
												uint32_t phi146 = phi128;
												uint32_t phi_in147 = phi_in87;
												uint32_t phi148 = phi_in89;
												uint32_t phi_in149 = phi131;
												uint32_t phi150 = phi132;
												uint32_t phi_in151 = phi133;
												uint32_t phi152 = phi134;
												uint32_t phi_in153 = phi_in135;
												uint32_t phi154 = phi136;
												uint32_t phi155 = phi_in95;
												uint32_t phi_in156 = phi138;
												uint64_t phi_in157 = phi_in139;
												uint64_t phi_in158 = phi140;
												uint32_t phi159 = phi141;
												uint32_t phi160 = phi142;
												uint32_t phi161 = phi143;
												uint64_t phi_in162 = phi99;
												uint64_t phi_in163 = phi_in144;
												uint32_t phi164 = phi_in145;
												uint32_t phi165 = phi_in125;
												uint32_t phi166 = phi_in126;
												uint32_t phi167 = phi_in129;
												phi_in87 = phi_in147;
												uint32_t phi168 = phi_in130;
												uint32_t phi169 = phi148;
												phi90 = phi_in149;
												uint32_t phi170 = phi_in151;
												phi_in70 = phi152;
												uint32_t phi171 = phi154;
												phi_in108 = phi137;
												uint32_t phi172 = phi_in156;
												uint64_t phi_in173 = phi_in157;
												phi140 = phi_in158;
												phi_in97 = phi160;
												uint32_t phi174 = phi161;
												phi99 = phi_in162;
												uint64_t phi175 = phi_in163;
												int64_t anon177 = (__sext int64_t)*(uint32_t*)(phi123 + anon122 * 12 + 6301632);
												uint32_t* anon176 = (uint32_t*)((anon177 << 2) + 6300992);
												if (*(uint32_t*)(phi_in162 + 40) < *anon176)
												{
													*anon176 = *(uint32_t*)(phi_in162 + 44);
													uint64_t phi178 = 0;
													uint32_t phi_in179 = phi_in55;
													uint32_t phi_in180 = phi_in145;
													uint32_t phi181 = phi_in125;
													uint32_t phi_in182 = phi_in127;
													uint32_t phi183 = phi146;
													uint32_t phi184 = phi_in129;
													uint32_t phi185 = phi_in147;
													uint32_t phi_in186 = phi_in130;
													uint32_t phi_in187 = phi_in149;
													uint32_t phi_in188 = phi_in91;
													uint32_t phi189 = phi150;
													uint32_t phi_in190 = phi_in153;
													uint32_t phi191 = phi155;
													uint64_t phi_in192 = phi_in157;
													phi140 = phi_in158;
													uint32_t phi193 = phi159;
													uint64_t phi194 = phi_in162;
													uint64_t phi_in195 = phi_in163;
													do
													{
														uint32_t phi196 = phi_in179;
														uint32_t phi197 = phi_in180;
														uint32_t phi_in198 = phi181;
														uint32_t phi199 = phi_in126;
														uint32_t phi_in200 = phi183;
														uint32_t phi_in201 = phi184;
														phi_in147 = phi185;
														uint32_t phi_in202 = phi_in186;
														uint32_t phi_in203 = phi_in187;
														uint32_t phi_in204 = phi_in188;
														uint32_t phi205 = phi189;
														uint32_t phi206 = phi152;
														uint32_t phi207 = phi154;
														uint32_t phi_in208 = phi191;
														*(uint64_t*)(phi209 + 88) = phi137;
														uint32_t phi_in210 = phi_in156;
														uint64_t phi211 = phi140;
														uint32_t phi212 = phi160;
														phi174 = phi161;
														uint64_t phi209 = phi194;
														uint32_t phi213 = phi196;
														uint32_t phi214 = phi197;
														uint32_t phi215 = phi_in198;
														uint32_t phi216 = phi199;
														uint32_t phi_in217 = phi_in182;
														uint32_t phi218 = phi_in200;
														phi_in129 = phi_in201;
														uint32_t phi219 = phi_in202;
														phi_in149 = phi_in203;
														uint32_t phi220 = phi_in204;
														phi189 = phi205;
														uint32_t phi_in221 = phi_in151;
														uint32_t phi_in222 = phi206;
														phi154 = phi207;
														uint32_t phi223 = phi_in208;
														uint64_t phi224 = *(uint64_t*)(phi209 + 88);
														uint32_t phi_in225 = phi_in210;
														uint64_t phi226 = phi_in192;
														uint32_t phi227 = phi193;
														uint32_t phi_in228 = phi212;
														uint64_t phi229 = phi209;
														uint64_t phi230 = phi_in195;
														int64_t anon232 = (__sext int64_t)*(uint32_t*)(phi178 + anon177 * 12 + 6301632);
														uint32_t* anon231 = (uint32_t*)((anon232 << 2) + 6300992);
														if (*(uint32_t*)(phi209 + 44) < *anon231)
														{
															*anon231 = *(uint32_t*)(phi209 + 64);
															uint32_t phi233 = phi196;
															*(uint32_t*)(phi_in234 + 88) = phi197;
															uint32_t phi235 = phi_in198;
															uint32_t phi236 = phi199;
															phi_in182 = phi_in182;
															uint32_t phi_in237 = phi_in200;
															uint32_t phi238 = phi_in201;
															uint32_t phi_in239 = phi_in147;
															phi219 = phi_in202;
															phi_in203 = phi_in203;
															uint32_t phi240 = phi_in204;
															uint32_t phi_in241 = phi_in151;
															uint32_t phi242 = phi_in190;
															uint32_t phi243 = phi_in208;
															*(uint64_t*)(phi_in234 + 80) = *(uint64_t*)(phi209 + 88);
															phi_in210 = phi_in210;
															*(uint64_t*)(phi_in234 + 104) = phi211;
															uint32_t phi244 = phi174;
															uint64_t phi245 = phi_in195;
															int64_t anon248 = anon232 * 12;
															int64_t anon247 = (__sext int64_t)*(uint32_t*)(anon248 + 6301636);
															uint32_t* anon246 = (uint32_t*)((anon247 << 2) + 6300992);
															if (*(uint32_t*)(phi209 + 64) < *anon246)
															{
																*anon246 = phi_in204;
																uint32_t phi249 = phi_in198;
																uint32_t phi_in250 = phi_in182;
																*(uint32_t*)(phi_in251 + 96) = phi_in200;
																uint64_t phi252 = phi209;
																uint32_t phi_in253 = phi_in201;
																uint32_t phi_in254 = phi_in147;
																uint64_t phi255 = anon247;
																uint32_t phi_in256 = phi_in202;
																uint32_t phi257 = phi205;
																uint32_t phi_in258 = phi_in190;
																*(uint64_t*)(phi_in251 + 88) = *(uint64_t*)(phi209 + 88);
																uint32_t phi259 = phi_in210;
																uint64_t phi_in260 = phi_in192;
																*(uint64_t*)(phi_in251 + 112) = phi211;
																uint64_t phi_in261 = phi_in195;
																if (phi_in203 < phi_in204)
																{
																	*(uint32_t*)(phi209 + 124) = phi148;
																	*(uint64_t*)(phi209 + 112) = phi211;
																	*(uint64_t*)(phi209 + 104) = phi_in192;
																	*(uint32_t*)(phi209 + 96) = phi_in202;
																	*(uint64_t*)(phi209 + 80) = anon247;
																	uint64_t anon262 = (__zext uint64_t)phi_in204;
																	w(4197873, anon12, (__sext int64_t)phi_in204, anon262, anon262);
																	phi196 = *(uint32_t*)(arg1 - 96);
																	phi197 = *(uint32_t*)(arg1 - 96);
																	phi249 = *(uint32_t*)(arg1 - 96);
																	phi199 = *(uint32_t*)(arg1 - 68);
																	phi_in250 = *(uint32_t*)(arg1 - 96);
																	*(uint32_t*)(phi_in251 + 96) = *(uint32_t*)(arg1 - 96);
																	phi252 = anon12;
																	phi_in253 = *(uint32_t*)(arg1 - 68);
																	phi_in254 = *(uint32_t*)(arg1 - 96);
																	phi255 = *(uint64_t*)(arg1 - 112);
																	phi_in256 = *(uint32_t*)(arg1 - 96);
																	phi257 = *(uint32_t*)(arg1 - 96);
																	phi_in258 = *(uint32_t*)(arg1 - 96);
																	*(uint64_t*)(phi_in251 + 88) = *(uint64_t*)(arg1 - 104);
																	phi259 = *(uint32_t*)(arg1 - 96);
																	phi_in260 = *(uint64_t*)(arg1 - 88);
																	*(uint64_t*)(phi_in251 + 112) = *(uint64_t*)(arg1 - 80);
																	phi_in261 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
																}
																uint32_t phi_in263 = phi196;
																uint32_t phi_in264 = phi197;
																uint32_t phi_in265 = phi199;
																uint64_t phi_in251 = phi252;
																uint64_t phi_in266 = phi255;
																uint32_t phi267 = phi257;
																uint64_t phi_in268 = *(uint64_t*)(phi_in251 + 88);
																uint32_t phi269 = phi_in263;
																uint32_t phi270 = phi_in264;
																uint32_t phi271 = phi_in265;
																uint32_t phi272 = phi_in250;
																phi209 = phi_in251;
																uint32_t phi273 = *(uint32_t*)(phi_in251 + 96);
																*(uint32_t*)(phi209 + 112) = phi_in253;
																phi_in239 = phi_in254;
																uint64_t phi274 = phi_in266;
																phi_in186 = phi_in256;
																phi_in190 = phi_in258;
																uint64_t phi275 = phi_in268;
																uint64_t phi276 = phi_in260;
																uint64_t phi277 = *(uint64_t*)(phi_in251 + 112);
																uint64_t phi_in278 = phi_in261;
																int64_t anon279 = (__sext int64_t)*(uint32_t*)(phi_in266 * 12 + 6301636);
																if (phi_in253 < *(uint32_t*)((anon279 << 2) + 6300992))
																{
																	*(uint32_t*)(phi_in251 + 124) = phi_in253;
																	*(uint64_t*)(phi_in251 + 104) = phi_in260;
																	*(uint64_t*)(phi_in251 + 88) = phi_in268;
																	*(uint64_t*)(phi_in251 + 80) = phi_in266;
																	uint64_t anon280 = (__zext uint64_t)*(uint32_t*)(phi_in251 + 120);
																	w(4197793, anon12, anon279, anon280, anon280);
																	phi269 = *(uint32_t*)(arg1 - 96);
																	phi270 = *(uint32_t*)(arg1 - 96);
																	phi249 = *(uint32_t*)(arg1 - 96);
																	phi271 = alloca1.field14;
																	phi272 = *(uint32_t*)(arg1 - 96);
																	phi209 = anon12;
																	phi273 = *(uint32_t*)(arg1 - 96);
																	*(uint32_t*)(phi209 + 112) = alloca1.field14;
																	phi_in239 = *(uint32_t*)(arg1 - 96);
																	phi274 = *(uint64_t*)(arg1 - 112);
																	phi_in186 = *(uint32_t*)(arg1 - 96);
																	phi267 = *(uint32_t*)(arg1 - 96);
																	phi_in190 = *(uint32_t*)(arg1 - 96);
																	phi275 = *(uint64_t*)(arg1 - 104);
																	phi259 = *(uint32_t*)(arg1 - 96);
																	phi276 = *(uint64_t*)(arg1 - 88);
																	phi277 = *(uint64_t*)(arg1 - 80);
																	phi_in278 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
																}
																uint32_t phi_in281 = phi269;
																uint32_t phi_in282 = phi270;
																phi_in198 = phi249;
																phi236 = phi271;
																*(uint32_t*)(phi209 + 88) = phi272;
																uint32_t phi_in283 = phi273;
																phi244 = *(uint32_t*)(phi209 + 112);
																uint32_t phi_in284 = phi267;
																*(uint64_t*)(phi209 + 80) = phi275;
																uint32_t phi_in285 = phi259;
																*(uint64_t*)(phi209 + 96) = phi276;
																*(uint64_t*)(phi209 + 104) = phi277;
																phi233 = phi_in281;
																*(uint32_t*)(phi_in234 + 88) = phi_in282;
																phi235 = phi_in198;
																phi_in182 = *(uint32_t*)(phi209 + 88);
																phi_in237 = phi_in283;
																phi238 = phi244;
																phi219 = phi_in186;
																phi148 = phi244;
																phi_in203 = phi244;
																phi240 = phi244;
																phi205 = phi_in284;
																phi_in241 = phi244;
																phi206 = phi244;
																phi242 = phi_in190;
																phi207 = phi244;
																phi243 = phi244;
																*(uint64_t*)(phi_in234 + 80) = *(uint64_t*)(phi209 + 80);
																phi_in210 = phi_in285;
																phi_in192 = *(uint64_t*)(phi209 + 96);
																*(uint64_t*)(phi_in234 + 104) = *(uint64_t*)(phi209 + 104);
																phi193 = phi244;
																phi212 = phi244;
																phi245 = phi_in278;
																int64_t anon286 = (__sext int64_t)*(uint32_t*)(phi274 * 12 + 6301640);
																if (phi244 < *(uint32_t*)((anon286 << 2) + 6300992))
																{
																	*(uint32_t*)(phi209 + 112) = phi244;
																	uint64_t anon287 = (__zext uint64_t)*(uint32_t*)(phi209 + 120);
																	w(4197395, anon12, anon286, anon287, anon287);
																	phi233 = *(uint32_t*)(arg1 - 104);
																	*(uint32_t*)(phi_in234 + 88) = *(uint32_t*)(arg1 - 104);
																	phi235 = *(uint32_t*)(arg1 - 104);
																	phi236 = *(uint32_t*)(arg1 - 80);
																	phi209 = anon12;
																	phi_in182 = *(uint32_t*)(arg1 - 104);
																	phi_in237 = *(uint32_t*)(arg1 - 104);
																	phi238 = *(uint32_t*)(arg1 - 80);
																	phi_in239 = *(uint32_t*)(arg1 - 104);
																	phi219 = *(uint32_t*)(arg1 - 104);
																	phi148 = *(uint32_t*)(arg1 - 80);
																	phi_in203 = *(uint32_t*)(arg1 - 80);
																	phi240 = *(uint32_t*)(arg1 - 80);
																	phi205 = *(uint32_t*)(arg1 - 104);
																	phi_in241 = *(uint32_t*)(arg1 - 80);
																	phi206 = *(uint32_t*)(arg1 - 80);
																	phi242 = *(uint32_t*)(arg1 - 104);
																	phi207 = *(uint32_t*)(arg1 - 80);
																	phi243 = *(uint32_t*)(arg1 - 80);
																	*(uint64_t*)(phi_in234 + 80) = *(uint64_t*)(arg1 - 112);
																	phi_in210 = *(uint32_t*)(arg1 - 104);
																	phi_in192 = *(uint64_t*)(arg1 - 96);
																	*(uint64_t*)(phi_in234 + 104) = *(uint64_t*)(arg1 - 88);
																	phi193 = *(uint32_t*)(arg1 - 80);
																	phi212 = *(uint32_t*)(arg1 - 80);
																	phi244 = *(uint32_t*)(arg1 - 80);
																	phi245 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
																}
															}
															phi_in179 = phi233;
															uint32_t phi288 = *(uint32_t*)(phi_in234 + 88);
															uint32_t phi289 = phi235;
															*(uint32_t*)(phi_in234 + 112) = phi236;
															uint64_t phi_in234 = phi209;
															phi218 = phi_in237;
															phi_in129 = phi238;
															uint32_t phi_in290 = phi_in239;
															phi_in204 = phi240;
															uint32_t phi_in291 = phi205;
															uint32_t phi_in292 = phi206;
															uint32_t phi_in293 = phi242;
															uint32_t phi_in294 = phi207;
															phi223 = phi243;
															uint32_t phi295 = phi_in210;
															*(uint64_t*)(phi_in234 + 96) = phi_in192;
															phi211 = *(uint64_t*)(phi_in234 + 104);
															phi227 = phi193;
															uint32_t phi_in296 = phi212;
															uint32_t phi_in297 = phi244;
															uint64_t phi_in298 = phi245;
															phi213 = phi_in179;
															phi214 = phi288;
															phi215 = phi289;
															phi216 = *(uint32_t*)(phi_in234 + 112);
															phi_in217 = phi_in182;
															phi_in147 = phi_in290;
															phi_in149 = phi_in203;
															phi220 = phi_in204;
															phi189 = phi_in291;
															phi_in221 = phi_in241;
															phi_in222 = phi_in292;
															phi_in190 = phi_in293;
															phi154 = phi_in294;
															phi224 = *(uint64_t*)(phi_in234 + 80);
															phi_in225 = phi295;
															phi226 = *(uint64_t*)(phi_in234 + 96);
															phi_in228 = phi_in296;
															phi174 = phi_in297;
															phi229 = phi_in234;
															phi230 = phi_in298;
															int64_t anon300 = (__sext int64_t)*(uint32_t*)(anon248 + 6301640);
															uint32_t* anon299 = (uint32_t*)((anon300 << 2) + 6300992);
															if (*(uint32_t*)(phi_in234 + 64) < *anon299)
															{
																*anon299 = *(uint32_t*)(phi_in234 + 112);
																phi233 = phi_in179;
																uint32_t phi_in301 = phi218;
																uint32_t phi302 = phi_in290;
																uint32_t phi303 = phi219;
																phi189 = phi_in291;
																uint32_t phi_in304 = phi_in293;
																*(uint64_t*)(phi_in234 + 80) = *(uint64_t*)(phi_in234 + 80);
																uint64_t phi_in305 = *(uint64_t*)(phi_in234 + 96);
																uint64_t phi306 = phi211;
																phi_in195 = phi_in298;
																int64_t anon308 = anon300 * 12;
																int64_t anon307 = (__sext int64_t)*(uint32_t*)(anon308 + 6301636);
																if (*(uint32_t*)(phi_in234 + 112) < *(uint32_t*)((anon307 << 2) + 6300992))
																{
																	*(uint32_t*)(phi_in234 + 112) = *(uint32_t*)(phi_in234 + 112);
																	*(uint64_t*)(phi_in234 + 104) = phi211;
																	*(uint32_t*)(phi_in234 + 88) = phi288;
																	uint64_t anon309 = (__zext uint64_t)*(uint32_t*)(phi_in234 + 120);
																	w(4197948, anon12, anon307, anon309, anon309);
																	phi233 = *(uint32_t*)(arg1 - 104);
																	phi288 = *(uint32_t*)(arg1 - 104);
																	phi289 = *(uint32_t*)(arg1 - 104);
																	*(uint32_t*)(phi_in234 + 112) = *(uint32_t*)(arg1 - 80);
																	phi_in182 = *(uint32_t*)(arg1 - 104);
																	phi_in301 = *(uint32_t*)(arg1 - 104);
																	phi302 = *(uint32_t*)(arg1 - 104);
																	phi303 = *(uint32_t*)(arg1 - 104);
																	phi189 = *(uint32_t*)(arg1 - 104);
																	phi_in304 = *(uint32_t*)(arg1 - 104);
																	*(uint64_t*)(phi_in234 + 80) = *(uint64_t*)(arg1 - 112);
																	phi295 = *(uint32_t*)(arg1 - 104);
																	phi_in305 = *(uint64_t*)(arg1 - 96);
																	phi306 = *(uint64_t*)(arg1 - 88);
																	phi_in234 = anon12;
																	phi_in195 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
																}
																*(uint32_t*)(phi_in234 + 88) = phi233;
																phi214 = phi288;
																phi215 = phi289;
																phi_in241 = *(uint32_t*)(phi_in234 + 112);
																phi_in239 = phi302;
																phi219 = phi303;
																phi224 = *(uint64_t*)(phi_in234 + 80);
																phi_in210 = phi295;
																phi211 = phi306;
																phi213 = *(uint32_t*)(phi_in234 + 88);
																phi216 = phi_in241;
																phi_in217 = phi_in182;
																phi218 = phi_in301;
																phi_in129 = phi_in241;
																phi_in147 = phi_in239;
																phi148 = phi_in241;
																phi_in149 = phi_in241;
																phi220 = phi_in241;
																phi_in221 = phi_in241;
																phi_in222 = phi_in241;
																phi_in190 = phi_in304;
																phi154 = phi_in241;
																phi223 = phi_in241;
																phi_in225 = phi_in210;
																phi226 = phi_in305;
																phi227 = phi_in241;
																phi_in228 = phi_in241;
																phi174 = phi_in241;
																phi229 = phi_in234;
																phi230 = phi_in195;
																int64_t anon310 = (__sext int64_t)*(uint32_t*)(anon308 + 6301640);
																if (phi_in241 < *(uint32_t*)((anon310 << 2) + 6300992))
																{
																	*(uint32_t*)(phi_in234 + 112) = phi_in241;
																	*(uint64_t*)(phi_in234 + 104) = phi211;
																	*(uint64_t*)(phi_in234 + 96) = phi_in305;
																	*(uint64_t*)(phi_in234 + 80) = phi224;
																	uint64_t anon311 = (__zext uint64_t)*(uint32_t*)(phi_in234 + 120);
																	w(4197231, anon12, anon310, anon311, anon311);
																	phi213 = alloca1.field8;
																	phi214 = alloca1.field8;
																	phi215 = alloca1.field8;
																	phi216 = alloca1.field12;
																	phi_in217 = alloca1.field8;
																	phi218 = alloca1.field8;
																	phi_in129 = alloca1.field12;
																	phi_in147 = alloca1.field8;
																	phi219 = alloca1.field8;
																	phi148 = alloca1.field12;
																	phi_in149 = alloca1.field12;
																	phi220 = alloca1.field12;
																	phi189 = alloca1.field8;
																	phi_in221 = alloca1.field12;
																	phi_in222 = alloca1.field12;
																	phi_in190 = alloca1.field8;
																	phi154 = alloca1.field12;
																	phi223 = alloca1.field12;
																	phi224 = alloca1.field7;
																	phi_in225 = alloca1.field8;
																	phi226 = alloca1.field10;
																	phi211 = alloca1.field11;
																	phi227 = alloca1.field12;
																	phi_in228 = alloca1.field12;
																	phi174 = alloca1.field12;
																	phi229 = anon12;
																	phi230 = (__zext uint64_t)alloca1.field8;
																}
															}
														}
														phi_in55 = phi213;
														phi164 = phi214;
														phi_in125 = phi215;
														uint32_t phi_in312 = phi216;
														phi146 = phi218;
														uint32_t phi_in313 = phi219;
														phi_in89 = phi148;
														uint32_t phi_in314 = phi220;
														phi150 = phi189;
														uint32_t phi_in315 = phi223;
														phi_in108 = phi224;
														phi_in157 = phi226;
														phi_in158 = phi211;
														uint32_t phi_in316 = phi227;
														phi_in162 = phi229;
														phi175 = phi230;
														phi165 = phi_in125;
														phi166 = phi_in312;
														phi_in127 = phi_in217;
														phi167 = phi_in129;
														phi_in87 = phi_in147;
														phi168 = phi_in313;
														phi169 = phi_in89;
														phi90 = phi_in149;
														phi_in91 = phi_in314;
														phi170 = phi_in221;
														phi_in70 = phi_in222;
														phi_in153 = phi_in190;
														phi171 = phi154;
														phi155 = phi_in315;
														phi172 = phi_in225;
														phi_in173 = phi_in157;
														phi140 = phi_in158;
														phi159 = phi_in316;
														phi_in97 = phi_in228;
														phi99 = phi_in162;
														phi178 = phi178 + 4;
														phi_in179 = phi_in55;
														phi_in180 = phi164;
														phi181 = phi_in125;
														phi_in126 = phi_in312;
														phi_in182 = phi_in217;
														phi183 = phi146;
														phi184 = phi_in129;
														phi185 = phi_in147;
														phi_in186 = phi_in313;
														phi148 = phi_in89;
														phi_in187 = phi_in149;
														phi_in188 = phi_in314;
														phi189 = phi150;
														phi_in151 = phi_in221;
														phi152 = phi_in222;
														phi191 = phi_in315;
														phi137 = phi_in108;
														phi_in156 = phi_in225;
														phi_in192 = phi_in157;
														phi140 = phi_in158;
														phi193 = phi_in316;
														phi160 = phi_in228;
														phi161 = phi174;
														phi194 = phi_in162;
														phi_in195 = phi175;
													}
													while (phi178 != 8);
												}
												phi101 = phi164;
												phi102 = phi165;
												uint32_t phi_in317 = phi166;
												phi_in85 = phi146;
												phi_in86 = phi167;
												uint32_t phi_in318 = phi168;
												phi_in65 = phi169;
												phi_in92 = phi150;
												uint32_t phi_in319 = phi170;
												phi_in94 = phi171;
												uint32_t phi_in320 = phi155;
												phi117 = phi172;
												phi_in76 = phi159;
												phi_in98 = phi174;
												phi82 = phi175;
												phi103 = phi_in317;
												phi_in104 = phi_in127;
												phi105 = phi_in85;
												phi_in62 = phi_in86;
												phi106 = phi_in87;
												phi107 = phi140;
												phi109 = phi_in318;
												phi110 = phi_in65;
												phi111 = phi_in91;
												phi_in112 = phi_in92;
												phi113 = phi_in319;
												phi114 = phi_in70;
												phi_in115 = phi_in153;
												phi_in116 = phi_in94;
												phi73 = phi_in320;
												phi118 = phi_in173;
												phi119 = phi_in76;
												phi77 = phi_in97;
												phi78 = phi_in98;
												phi120 = phi99;
												phi123 = phi123 + 4;
												phi124 = phi_in55;
												phi_in83 = phi101;
												phi_in125 = phi102;
												phi_in126 = phi_in317;
												phi128 = phi_in85;
												phi_in129 = phi_in86;
												phi_in130 = phi_in318;
												phi_in89 = phi_in65;
												phi131 = phi90;
												phi132 = phi_in92;
												phi133 = phi_in319;
												phi134 = phi_in70;
												phi_in135 = phi_in153;
												phi136 = phi_in94;
												phi_in95 = phi_in320;
												phi137 = phi_in108;
												phi138 = phi117;
												phi_in139 = phi_in173;
												phi141 = phi_in76;
												phi142 = phi_in97;
												phi143 = phi_in98;
												phi_in144 = phi82;
											}
											while (phi123 != 8);
										}
										uint32_t phi_in321 = phi101;
										uint32_t phi_in322 = phi102;
										uint32_t phi_in323 = phi105;
										uint32_t phi_in324 = phi106;
										phi325 = phi_in108;
										uint32_t phi_in326 = phi117;
										uint64_t phi_in327 = phi82;
										phi328 = phi_in55;
										phi_in329 = phi_in321;
										phi330 = phi_in322;
										phi331 = phi_in104;
										phi43 = phi_in323;
										phi_in332 = phi_in324;
										phi333 = phi_in112;
										phi334 = phi_in115;
										phi_in335 = phi_in326;
										phi336 = phi_in327;
										if (phi325 != 8)
										{
											phi56 = phi_in321;
											phi_in57 = phi_in322;
											phi_in58 = phi103;
											phi_in60 = phi_in104;
											phi61 = phi_in323;
											phi63 = phi_in324;
											phi64 = phi109;
											phi_in65 = phi110;
											phi_in66 = phi90;
											phi_in67 = phi111;
											phi_in68 = phi_in112;
											phi_in69 = phi113;
											phi_in70 = phi114;
											phi71 = phi_in115;
											phi_in72 = phi_in116;
											phi74 = phi_in326;
											phi_in75 = phi118;
											phi_in76 = phi119;
											phi79 = phi120;
											phi80 = phi325 + 4;
											phi81 = phi107;
											phi82 = phi_in327;
										}
									}
									while (phi325 != 8);
								}
								else 
								{
									phi328 = phi39;
									phi_in329 = phi40;
									phi330 = phi41;
									phi331 = phi42;
									phi43 = phi43;
									phi_in332 = phi44;
									phi118 = phi51;
									phi109 = phi45;
									phi333 = phi46;
									phi334 = phi47;
									phi_in335 = phi48;
									phi120 = phi49;
									phi336 = phi52 & 0xffffffff;
								}
								phi_in337 = phi328;
								phi_in338 = phi330;
								phi339 = phi331;
								phi340 = phi109;
								phi_in341 = phi333;
								phi342 = phi334;
								phi_in343 = phi120;
								phi344 = phi336;
								if (phi50 != 8)
								{
									phi39 = phi_in337;
									phi40 = phi_in329;
									phi41 = phi_in338;
									phi42 = phi339;
									phi44 = phi_in332;
									phi45 = phi340;
									phi46 = phi_in341;
									phi47 = phi342;
									phi48 = phi_in335;
									phi49 = phi_in343;
									phi50 = phi50 + 4;
									phi51 = phi118;
									phi52 = phi344;
								}
							}
							while (phi50 != 8);
							phi24 = phi_in337;
							phi345 = phi_in329;
							phi346 = phi_in338;
							phi347 = phi43;
							phi348 = phi_in332;
							phi_in349 = *(uint64_t*)(phi_in343 + 72);
							phi350 = phi_in341;
							phi351 = phi_in335;
							phi_in352 = phi_in343;
						}
						else 
						{
							phi24 = phi24;
							phi345 = phi25;
							phi346 = phi26;
							phi339 = phi27;
							phi347 = phi28;
							phi348 = phi29;
							phi_in349 = *(uint64_t*)(phi36 + 72);
							phi340 = phi30;
							phi350 = phi31;
							phi342 = phi32;
							phi351 = phi33;
							phi344 = phi34 & 0xffffffff;
							phi_in352 = phi36;
						}
						phi_in353 = phi348;
						phi354 = phi_in349;
						if (phi354 != 8)
						{
							phi25 = phi345;
							phi26 = phi346;
							phi27 = phi339;
							phi28 = phi347;
							phi29 = phi_in353;
							phi30 = phi340;
							phi31 = phi350;
							phi32 = phi342;
							phi33 = phi351;
							phi34 = phi344;
							phi35 = phi354 + 4;
							phi36 = phi_in352;
						}
					}
					while (phi354 != 8);
					phi_in355 = *(uint32_t*)(phi_in352 + 68);
					phi21 = phi_in353;
					phi_in356 = *(uint64_t*)(phi_in352 + 56);
					phi15 = (__zext uint64_t)phi_in353;
					phi357 = *(uint32_t*)(phi_in352 + 68);
					phi358 = phi_in353;
					phi359 = *(uint32_t*)(phi_in352 + 68);
					phi_in360 = phi_in352;
				}
				else 
				{
					phi_in355 = phi_in20;
					phi_in356 = *(uint64_t*)(phi16 + 56);
					phi15 = phi15 & 0xffffffff;
					phi357 = *(uint32_t*)(phi16 + 68);
					phi358 = phi17;
					phi359 = phi18;
					phi_in360 = phi16;
				}
				phi_in361 = phi_in355;
				phi362 = phi21;
				phi363 = phi_in356;
				if (phi363 != 8)
				{
					phi13 = phi_in361;
					phi14 = phi362;
					*(uint32_t*)(phi16 + 68) = phi357;
					phi17 = phi358;
					phi18 = phi359;
					phi19 = phi363 + 4;
					phi16 = phi_in360;
				}
			}
			while (phi363 != 8);
			phi364 = *(uint64_t*)(phi_in360 + 48);
			phi_in365 = phi362;
			phi5 = phi_in361;
			phi_in366 = (__zext uint64_t)phi362;
			phi_in355 = phi_in361;
			phi367 = phi_in360;
		}
		else 
		{
			phi364 = *(uint64_t*)(phi10 + 48);
			phi_in365 = phi4;
			phi5 = phi5;
			phi_in366 = phi7 & 0xffffffff;
			phi_in355 = *anon8;
			phi362 = phi11;
			phi367 = phi10;
		}
		if (phi364 != 8)
		{
			phi4 = phi_in365;
			phi7 = phi_in366;
			*anon8 = phi_in355;
			phi11 = phi362;
			*(uint64_t*)(phi10 + 48) = phi364 + 4;
			phi10 = phi367;
		}
	}
	while (phi364 != 8);
	return;
}
void t(uint64_t arg0)
{
	struct { uint8_t field0[24]; uint64_t field1; } alloca1;
	uint32_t anon11;
	uint32_t anon19;
	alloca1.field1 = arg0;
	uint64_t phi2 = 4;
	do
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
		anon11 = (uint32_t)phi2 - 1;
		if (anon11 != 0)
		{
			phi2 = (__zext uint64_t)anon11;
		}
	}
	while (anon11 != 0);
	uint64_t anon12 = random();
	uint64_t anon13 = anon12 << 32;
	w(4198271, (uint64_t)&alloca1, anon12 + (((anon12 & 0xffffffff) * 2290649225 + anon13 >> 32 >> 4) - (anon13 >> 32 >> 31)) * 4294967266 & 0xffffffff, 0, 0);
	uint64_t phi14 = 3;
	do
	{
		uint64_t anon16;
		uint32_t* anon18;
		do
		{
			do
			{
				do
				{
					do
					{
						uint64_t anon15 = random();
						phi14 = phi14;
						uint64_t anon17 = anon15 << 32;
						anon16 = anon15 + (((anon15 & 0xffffffff) * 2290649225 + anon17 >> 32 >> 4) - (anon17 >> 32 >> 31)) * -30 << 32 >> 30;
					}
					while (*(uint32_t*)(anon16 + 6301504) != 0);
					phi14 = phi14;
				}
				while (*(uint32_t*)(anon16 + 6300864) != 0);
				phi14 = phi14;
				anon18 = (uint32_t*)(anon16 + 6301120);
			}
			while (*anon18 != 0);
			phi14 = phi14;
		}
		while (*(uint32_t*)(anon16 + 6300992) == 0);
		*anon18 = 1;
		anon19 = (uint32_t)phi14 - 1;
		if (anon19 != 0)
		{
			phi14 = (__zext uint64_t)anon19;
		}
	}
	while (anon19 != 0);
	while (true)
	{
		uint64_t anon20 = random();
		uint64_t anon21 = anon20 << 32;
		*(uint32_t*)0x60292c = (uint32_t)anon20 + (uint32_t)(((anon20 & 0xffffffff) * 2290649225 + anon21 >> 32 >> 4) - (anon21 >> 32 >> 31)) * 4294967266;
	}
}
void r(uint64_t arg0, uint64_t arg1)
{
	uint32_t phi2;
	uint32_t phi1 = 0;
	uint64_t anon4 = arg1 << 32;
	uint32_t* anon3 = (uint32_t*)((anon4 >> 30) + 6301376);
	phi2 = *anon3;
	do
	{
		uint32_t phi_in5 = phi1;
		if (phi2 != 0)
		{
			*anon3 = phi2 - 1;
			uint32_t phi6 = 3;
			uint32_t phi7 = phi_in5;
			uint64_t anon8 = random();
			if (phi7 > 1000)
			{
				break;
			}
			else 
			{
				uint32_t anon9 = phi7 + 1;
				phi_in5 = anon9;
				uint32_t anon10 = phi6 - (__zext uint32_t)(anon9 == (anon9 / 100 - (uint32_t)((__zext uint64_t)anon9 << 32 >> 63)) * 100);
				phi6 = anon10;
				uint64_t anon13 = anon8 << 32;
				uint64_t anon12 = anon8 + (((anon8 & 0xffffffff) * 2290649225 + anon13 >> 36) - (anon13 >> 32 >> 31)) * 4294967266;
				uint32_t anon11 = (uint32_t)anon12;
				uint64_t anon15 = anon4 >> 32;
				uint32_t anon14 = (uint32_t)anon15;
				if (anon11 != anon14)
				{
					phi_in5 = anon9;
					phi6 = anon10;
					uint64_t anon17 = anon12 << 32;
					uint32_t* anon16 = (uint32_t*)((anon17 >> 30) + 6301376);
					if ((*anon16 >> 31 | (__zext uint32_t)(*anon16 == 0)) == 0)
					{
						phi_in5 = anon9;
						phi6 = anon10;
						uint64_t anon18 = anon15 * 12;
						if (!(*(uint32_t*)(anon18 + 6301640) == anon11 | anon10 > *anon16))
						{
							phi_in5 = anon9;
							phi6 = anon10;
							if (anon11 != *(uint32_t*)(anon18 + 6301636))
							{
								uint32_t anon19 = *anon16 - 1;
								*anon16 = anon19;
								uint64_t anon20 = anon15 * 3;
								*(uint32_t*)(((__sext int64_t)anon19 + anon20 << 2) + 6301632) = anon11;
								uint62_t anon21 = (uint62_t)(anon17 >> 32) * 3;
								*(uint32_t*)(((__zext uint64_t)((__sext int62_t)anon19 + anon21) << 2) + 6301632) = anon14;
								r(4198736, anon12 & 0xffffffff);
								uint32_t* anon22 = (uint32_t*)((anon17 >> 30) + 6301376);
								*(uint32_t*)(((__zext uint64_t)(anon21 + (__sext int62_t)*anon22) << 2) + 6301632) = 4294967295;
								*anon22 = *anon22 + 1;
								*(uint32_t*)(((__sext int64_t)*anon3 + anon20 << 2) + 6301632) = 4294967295;
								*anon3 = 0;
								phi1 = anon9;
								phi2 = 0;
							}
						}
					}
				}
			}
		}
	}
	while (phi2 != 0);
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
		uint64_t phi5;
		uint64_t phi6;
		uint64_t phi23;
		uint32_t anon24;
		uint32_t anon39;
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
		uint64_t phi2 = 15;
		while (phi2 != 0)
		{
			*(uint64_t*)phi1 = 0;
			phi1 = phi1 + 8;
			phi2 = phi2 - 1;
		}
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
		uint64_t phi3 = 15;
		uint64_t phi4 = 6300864;
		do
		{
			phi5 = 6301248;
			phi6 = 15;
			if (phi3 != 0)
			{
				*(uint64_t*)phi4 = 0;
				phi3 = phi3 - 1;
				phi4 = phi4 + 8;
			}
		}
		while (phi3 != 0);
		while (phi6 != 0)
		{
			*(uint64_t*)phi5 = 0;
			phi5 = phi5 + 8;
			phi6 = phi6 - 1;
		}
		r(4199339, 0);
		(__asm "movdqa xmm0, xmmword ptr [rsp + 0x20]")();
		(__asm "movdqa xmm2, xmmword ptr [rsp + 0x10]")();
		(__asm "movdqa xmm1, xmmword ptr [rsp]")();
		uint32_t* phi7 = (uint32_t*)0x6027c4;
		uint64_t phi_in8 = 6301636;
		do
		{
			uint32_t phi11;
			uint32_t phi12;
			uint32_t phi13;
			uint32_t phi14;
			uint32_t phi15;
			uint32_t* anon16;
			uint32_t phi_in17;
			uint32_t phi19;
			uint32_t phi21;
			uint64_t phi9 = phi_in8;
			uint32_t* anon10 = (uint32_t*)(phi9 + 4);
			if (*anon10 < *phi7)
			{
				*phi7 = *anon10;
				*anon10 = *phi7;
				phi11 = *phi7;
				phi12 = *phi7;
				phi13 = *anon10;
				phi14 = *anon10;
				anon16 = (uint32_t*)(phi9 - 4);
				phi15 = *anon16;
			}
			else 
			{
				phi_in17 = *anon16;
				if (*phi7 < *anon16)
				{
					phi11 = *anon10 & 0xf;
					phi12 = *anon10;
					phi13 = *phi7 & 0xf;
					phi14 = *phi7;
					phi15 = *anon16 & 0xf;
				}
			}
			if (*anon10 >= *phi7 && *phi7 < *anon16 || *anon10 < *phi7 && *anon10 < *anon16)
			{
				uint32_t phi_in18 = phi11;
				phi19 = phi12;
				uint32_t phi_in20 = phi13;
				*anon16 = phi14;
				*phi7 = phi15;
				phi_in17 = phi_in20;
				*phi7 = phi_in18;
				phi21 = *anon16;
			}
			if (*anon10 < *phi7)
			{
				if (*anon10 >= *anon16)
				{
					phi_in17 = *anon16 & 0xf;
					*phi7 = *phi7;
					phi21 = *anon10;
					phi19 = *phi7;
				}
			}
			if (*anon10 >= *phi7 && *phi7 < *anon16 || *anon10 < *phi7 && *anon10 < *anon16 || *anon10 < *phi7 && *anon10 >= *anon16)
			{
				*anon10 = phi21;
				if (phi19 - *anon10 <= 4294967295)
				{
					phi_in17 = *(uint32_t*)((phi9 & 0xc) - 4);
				}
			}
			uint32_t phi22 = phi_in17;
			phi23 = 6301636;
			anon24 = phi22 + 1 & 0xff;
			if (anon24 != 0)
			{
				phi23 = 6301636;
				uint64_t anon25 = phi9 + 12;
				phi7 = (uint32_t*)(anon25 & 0xc);
				phi_in8 = anon25;
				if (phi9 == 6301984)
				{
					break;
				}
			}
		}
		while (anon24 != 0);
		do
		{
			uint32_t phi28;
			uint32_t phi29;
			uint32_t phi_in30;
			uint32_t phi31;
			uint32_t phi32;
			uint32_t* anon33;
			uint32_t phi_in34;
			uint32_t phi36;
			uint32_t phi37;
			uint32_t* anon26 = (uint32_t*)(phi23 + 4);
			uint32_t* anon27 = (uint32_t*)phi23;
			if (*anon26 < *anon27)
			{
				*anon27 = *anon26;
				*anon26 = *anon27;
				phi28 = *anon27;
				phi29 = *anon27;
				phi_in30 = *anon26;
				phi31 = *anon26;
				anon33 = (uint32_t*)(phi23 - 4);
				phi32 = *anon33;
			}
			else 
			{
				phi_in34 = *anon33;
				if (*anon27 < *anon33)
				{
					phi28 = *anon26 & 0xf;
					phi29 = *anon26;
					phi_in30 = *anon27 & 0xf;
					phi31 = *anon27;
					phi32 = *anon33 & 0xf;
				}
			}
			if (*anon26 >= *anon27 && *anon27 < *anon33 || *anon26 < *anon27 && *anon26 < *anon33)
			{
				uint32_t phi_in35 = phi28;
				phi36 = phi29;
				*anon33 = phi31;
				*anon27 = phi32;
				phi_in34 = phi_in30;
				*anon27 = phi_in35;
				phi37 = *anon33;
			}
			if (*anon26 < *anon27)
			{
				if (*anon26 >= *anon33)
				{
					phi_in34 = *anon33 & 0xf;
					*anon27 = *anon27;
					phi37 = *anon26;
					phi36 = *anon27;
				}
			}
			if (*anon26 >= *anon27 && *anon27 < *anon33 || *anon26 < *anon27 && *anon26 < *anon33 || *anon26 < *anon27 && *anon26 >= *anon33)
			{
				*anon26 = phi37;
				if (phi36 - *anon26 <= 4294967295)
				{
					phi_in34 = *(uint32_t*)((phi23 & 0xf) - 4);
				}
			}
			uint32_t phi38 = phi_in34;
			anon39 = phi38 + 1 & 0xff;
			if (anon39 != 0)
			{
				phi23 = phi23 + 12;
			}
		}
		while (anon39 != 0);
	}
}
void q(uint64_t arg0, uint64_t arg1)
{
	struct { uint8_t field0[56]; uint64_t field1; } alloca1;
	uint64_t phi4;
	uint32_t phi5;
	uint64_t phi_in6;
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
		phi5 = 0;
		phi_in6 = phi4;
		anon7 = (uint32_t*)0x602490;
		*anon7 = *anon7 + phi5;
		struct _IO_FILE** anon10 = (struct _IO_FILE**)0x602480;
		uint32_t anon9 = _IO_getc(*anon10);
		uint8_t anon8 = (uint8_t)anon9;
		if (anon8 == 10)
		{
			dispatch2 = 1;
		}
		uint32_t anon11 = *anon3 >> 31 | (__zext uint32_t)(*anon3 == 0);
		if (anon8 != 10 || anon11 != 0)
		{
			anon12 = __ctype_b_loc();
			dispatch13 = 0;
		}
		uint64_t* anon14 = (uint64_t*)anon12;
		if ((*(uint8_t*)(*anon14 + ((__sext int64_t)anon8 << 1 | 1)) & 8) != 0)
		{
			if (anon8 != 10 || anon11 != 0)
			{
				uint32_t anon15 = _IO_getc(*anon10);
				uint32_t anon17 = (anon9 << 24 >> 24) - 48;
				phi16 = anon17;
				if ((*(uint8_t*)(*anon14 + ((__zext uint64_t)anon15 << 56 >> 55 | 1)) & 8) != 0)
				{
					anon18 = anon15 >> 8;
					phi16 = (anon18 << 24 >> 24) + anon17 * 10 - 48;
				}
			}
		}
	}
	while (true)
	{
		uint64_t phi19;
		uint8_t* anon20;
		dispatch2 = 4;
		if (*(uint32_t*)(((__sext int64_t)phi16 << 2) + 6300992) != 0)
		{
			phi19 = (__zext uint64_t)phi16;
		}
		if (dispatch2 == 4)
		{
			puts((uint8_t*)0x401cd5);
			*anon7 = *anon3 * 100 + *anon7 + 500;
			anon20 = (uint8_t*)0x401cf1;
			printf(anon20);
			exit(0);
		}
		uint64_t anon21 = random();
		dispatch2 = 2;
		if (dispatch2 == 2)
		{
			puts((uint8_t*)0x401dd0);
			*anon7 = *anon7 - 100;
			printf(anon20);
			exit(0);
		}
		if ((uint32_t)anon21 + ((uint32_t)((anon21 & 0xffffffff) / 3) - (uint32_t)(anon21 << 32 >> 32 >> 31)) * 4294967293 != 1)
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
			uint64_t anon22 = random();
			uint64_t anon23 = anon22 << 32;
			w(4199968, (uint64_t)&alloca1, anon22 + (((anon22 & 0xffffffff) * 2290649225 + anon23 >> 32 >> 4) - (anon23 >> 32 >> 31)) * 4294967266 & 0xffffffff, 0, 0);
			*anon7 = *anon7 - 100;
			phi19 = phi_in6;
		}
		if (*(uint32_t*)(((__sext int64_t)phi16 << 2) + 6300992) != 0 || (uint32_t)anon21 + ((uint32_t)((anon21 & 0xffffffff) / 3) - (uint32_t)(anon21 << 32 >> 32 >> 31)) * 4294967293 != 1)
		{
			phi4 = phi19;
			dispatch2 = 1;
		}
		if ((uint8_t)anon18 != 10)
		{
			if (*(uint32_t*)(((__sext int64_t)phi16 << 2) + 6300992) != 0 || (uint32_t)anon21 + ((uint32_t)((anon21 & 0xffffffff) / 3) - (uint32_t)(anon21 << 32 >> 32 >> 31)) * 4294967293 != 1)
			{
				phi5 = phi5 - 20;
				dispatch13 = 1;
				dispatch2 = 3;
				if (phi5 != 196)
				{
					break;
				}
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
		uint16_t** phi33;
		uint8_t anon34;
		uint16_t** anon38;
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
			if (*(uint32_t*)(anon17 + 6300864) == 0)
			{
				anon19 = (uint32_t)phi12;
				anon20 = (uint32_t*)0x60292c;
				if (anon19 == *anon20)
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
		}
		if (dispatch13 == 2)
		{
			puts((uint8_t*)0x401d62);
			while (true)
			{
				uint64_t anon23 = random();
				uint32_t anon22 = (uint32_t)anon23;
				*anon20 = anon22 + (((uint32_t)((anon23 & 0xffffffff) * 2290649225 >> 32) + anon22 >> 4) - (anon22 >> 31)) * 4294967266;
			}
		}
		if (*(uint32_t*)(anon17 + 6300992) != 0)
		{
			if (*(uint32_t*)(anon17 + 6300864) == 0)
			{
				if (anon19 == *anon20)
				{
					if (*anon21 == 3)
					{
						puts((uint8_t*)0x401df8);
						*anon14 = 3;
						*anon15 = *anon15 + 200;
						*anon20 = 4294967295;
					}
				}
				if (anon19 != *anon20 || *anon21 == 3)
				{
					dispatch13 = 3;
				}
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
			if (*(uint32_t*)((anon24 << 2) + 6300864) == 0)
			{
				if (*(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon26 + 6301636) << 2) + 6300864) == 0)
				{
					phi27 = anon24;
				}
			}
			if (*(uint32_t*)((anon24 << 2) + 6300864) != 0 || *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon26 + 6301636) << 2) + 6300864) != 0 || *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon26 + 6301640) << 2) + 6300864) != 0 && *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon26 + 6301636) << 2) + 6300864) == 0)
			{
				puts((uint8_t*)0x401d8e);
				phi27 = (__sext int64_t)*anon25;
			}
			if (*(uint32_t*)((phi27 << 2) + 6301504) != 0 || *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon26 + 6301636) << 2) + 6301504) != 0 || *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon26 + 6301640) << 2) + 6301504) != 0 && *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon26 + 6301636) << 2) + 6301504) == 0)
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
		struct _IO_FILE** anon31 = (struct _IO_FILE**)0x602480;
		uint8_t anon30 = (uint8_t)_IO_getc(*anon31);
		bool anon29 = anon30 == 108;
		if (anon29)
		{
			uint16_t** anon32 = __ctype_b_loc();
			phi_in9 = phi11;
			phi_in10 = phi12;
			phi33 = anon32;
			anon34 = *(uint8_t*)(*(uint64_t*)anon32 + 217) & 8;
			if (anon34 == 0)
			{
				break;
			}
		}
		bool anon35 = anon30 == 105;
		if (anon35)
		{
			printf((uint8_t*)0x401dba);
		}
		bool anon36 = anon30 == 115;
		if (anon36)
		{
			q(4200890, phi12 & 0xffffffff);
		}
		bool anon37 = anon30 == 115 || anon30 == 108 || anon30 == 105 || anon30 == 113;
		if (!anon37 || anon30 == 105 || anon30 == 115)
		{
			anon38 = __ctype_b_loc();
			phi33 = anon38;
		}
		int64_t anon40 = (__sext int64_t)anon30;
		uint8_t anon39 = *(uint8_t*)(*(uint64_t*)anon38 + (anon40 >> 7 | 1)) & 8;
		bool anon41 = !anon37;
		if (anon39 != 0 && anon35 || anon39 != 0 && anon36 || anon39 != 0 && anon41 || anon34 != 0 && anon29)
		{
			uint32_t phi43;
			uint32_t anon42 = _IO_getc(*anon31);
			uint32_t anon44 = (uint32_t)(anon40 + 4294967248);
			phi43 = anon44;
			uint32_t anon45 = anon42 << 24 >> 24;
			if ((*(uint8_t*)(*(uint64_t*)phi33 + ((__zext uint64_t)anon45 << 1 | 1)) & 8) != 0)
			{
				phi43 = anon44 * 10 + anon45 - 48;
			}
			if (*anon25 != phi43)
			{
				if (*(uint32_t*)(anon26 + 6301636) != phi43)
				{
					phi_in9 = phi11;
					phi_in10 = phi12;
				}
			}
			if (*anon25 == phi43 || *(uint32_t*)(anon26 + 6301636) == phi43 || *(uint32_t*)(anon26 + 6301636) != phi43 && *(uint32_t*)(anon26 + 6301640) == phi43)
			{
				int64_t anon46 = (__sext int64_t)phi43;
				phi_in9 = anon46;
				phi_in10 = anon46;
			}
			break;
		}
		if (*(uint32_t*)(anon17 + 6300992) != 0)
		{
			if (*(uint32_t*)(anon17 + 6300864) == 0)
			{
				uint32_t* anon47 = (uint32_t*)(anon17 + 6301504);
				if (*anon47 != 0)
				{
					if (anon19 != *anon20 || *anon21 == 3)
					{
						*anon47 = 0;
						uint64_t anon49 = random();
						uint32_t anon48 = (uint32_t)anon49;
						*(uint32_t*)(((__sext int64_t)(anon48 + (((uint32_t)((anon49 & 0xffffffff) * 2290649225 >> 32) + anon48 >> 4) - (anon48 >> 31)) * 4294967266) << 2) + 6301504) = 1;
						uint64_t anon50 = random();
						printf((uint8_t*)0x401e28);
						*anon15 = *anon15 - 10;
						uint32_t anon52 = (uint32_t)anon50;
						int64_t anon51 = (__sext int64_t)(anon52 + ((uint32_t)((anon50 & 0xffffffff) * 2290649225 + (anon50 << 32) >> 36) - (anon52 >> 31)) * 4294967266);
						phi_in9 = anon51;
						phi_in10 = anon51;
						break;
					}
				}
			}
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
		if (dispatch13 == 1 || dispatch13 == 0 || anon30 == 113)
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
