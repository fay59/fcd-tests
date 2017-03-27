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
			phi9 = *phi1;
			*anon4 = *anon4;
		}
		else 
		{
			phi5 = *anon4;
			phi_in6 = *phi1;
			phi10 = *anon8;
		}
		if (*anon4 < *phi1 && *anon4 < *anon8 || *anon4 >= *phi1 && *phi1 < *anon8)
		{
			uint32_t phi_in11 = phi5;
			*anon8 = phi_in6;
			*phi1 = *anon8;
			phi7 = *anon8;
			phi9 = phi_in11;
			*anon4 = *anon8;
		}
		if (*anon4 < *phi1 && *anon4 < *anon8 || *anon4 >= *phi1 && *phi1 < *anon8 || *anon4 >= *anon8 && *anon4 < *phi1)
		{
			phi10 = phi7;
			*phi1 = phi9;
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
void w(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4)
{
	struct { uint8_t field0[4]; uint32_t field1; uint64_t field2; uint8_t field3[8]; uint32_t field4; uint32_t field5; uint8_t field6[48]; uint64_t field7; uint32_t field8; uint8_t field9[4]; uint64_t field10; uint64_t field11; uint32_t field12; uint8_t field13[8]; uint32_t field14; uint8_t field15[56]; uint64_t field16; } alloca1;
	uint32_t phi5;
	uint64_t phi10;
	uint64_t phi375;
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
	uint64_t phi12 = 0;
	uint64_t anon13 = (uint64_t)&alloca1;
	phi10 = anon13;
	do
	{
		uint32_t phi376;
		uint32_t phi377;
		uint32_t phi378;
		uint32_t phi379;
		*(uint64_t*)(phi10 + 48) = phi12;
		if (phi11 < *anon8)
		{
			uint64_t phi_in371;
			uint32_t phi_in372;
			uint32_t phi_in373;
			uint64_t phi374;
			*(uint64_t*)(phi10 + 16) = anon9 * 12;
			*(uint32_t*)(phi10 + 40) = (uint32_t)phi7 + 5;
			uint32_t phi14 = phi5;
			uint32_t phi15 = phi4;
			uint64_t phi16 = (__zext uint64_t)phi4;
			uint32_t phi17 = phi5;
			uint32_t phi18 = phi4;
			uint32_t phi19 = phi5;
			*(uint64_t*)(phi20 + 56) = 0;
			uint64_t phi20 = phi10;
			do
			{
				uint32_t phi364;
				uint32_t phi366;
				uint64_t phi_in367;
				uint64_t phi368;
				uint32_t phi_in369;
				uint32_t phi370;
				uint32_t phi_in21 = phi14;
				uint32_t phi_in22 = phi15;
				*(uint32_t*)(phi20 + 68) = phi17;
				int64_t anon24 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi20 + 56) + *(uint64_t*)(phi20 + 16) + 6301632);
				uint32_t* anon23 = (uint32_t*)((anon24 << 2) + 6300992);
				if (phi19 < *anon23)
				{
					uint64_t phi_in363;
					uint64_t phi365;
					*anon23 = *(uint32_t*)(phi20 + 4);
					*(uint64_t*)(phi20 + 32) = anon24 * 12;
					*(uint32_t*)(phi20 + 44) = (uint32_t)phi16 + 6;
					uint32_t phi25 = phi18;
					uint32_t phi26 = phi18;
					uint32_t phi27 = phi18;
					uint32_t phi28 = phi18;
					uint32_t phi29 = phi18;
					uint32_t phi30 = phi18;
					uint32_t phi31 = phi18;
					uint32_t phi32 = phi18;
					uint32_t phi33 = phi18;
					uint32_t phi34 = phi18;
					uint64_t phi35 = (__zext uint64_t)phi18;
					*(uint64_t*)(phi36 + 72) = 0;
					uint64_t phi36 = phi20;
					do
					{
						uint32_t phi346;
						uint32_t phi351;
						uint32_t phi356;
						uint32_t phi357;
						uint64_t phi_in358;
						uint32_t phi359;
						uint32_t phi360;
						uint32_t phi361;
						uint64_t phi362;
						int64_t anon38 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi36 + 72) + *(uint64_t*)(phi36 + 32) + 6301632);
						uint32_t* anon37 = (uint32_t*)((anon38 << 2) + 6300992);
						if (*(uint32_t*)(phi36 + 4) < *anon37)
						{
							uint32_t phi_in341;
							uint32_t phi_in344;
							uint32_t phi_in348;
							uint64_t phi_in349;
							uint32_t phi_in350;
							uint32_t phi_in352;
							uint32_t phi_in353;
							uint32_t phi_in354;
							uint64_t phi_in355;
							*anon37 = *(uint32_t*)(phi36 + 24);
							*(uint32_t*)(phi36 + 64) = (uint32_t)phi35 + 7;
							uint32_t phi39 = phi25;
							uint32_t phi40 = phi26;
							uint32_t phi41 = phi27;
							uint32_t phi42 = phi28;
							uint32_t phi43 = phi29;
							uint32_t phi44 = phi30;
							uint32_t phi45 = phi31;
							uint32_t phi46 = phi32;
							uint32_t phi47 = phi33;
							uint32_t phi48 = phi34;
							uint64_t phi49 = phi36;
							uint64_t phi50 = 0;
							uint64_t phi51 = anon38 * 12;
							uint64_t phi52 = phi35;
							do
							{
								uint32_t phi336;
								uint32_t phi337;
								uint32_t phi340;
								uint64_t phi343;
								uint32_t phi345;
								uint32_t phi347;
								int64_t anon54 = (__sext int64_t)*(uint32_t*)(phi50 + phi51 + 6301632);
								uint32_t* anon53 = (uint32_t*)((anon54 << 2) + 6300992);
								if (*(uint32_t*)(phi49 + 24) < *anon53)
								{
									uint32_t phi58;
									*anon53 = *(uint32_t*)(phi49 + 28);
									uint32_t phi_in55 = phi39;
									uint32_t phi56 = phi40;
									uint32_t phi57 = phi41;
									uint32_t anon59 = (uint32_t)phi52 + 8;
									phi58 = anon59;
									uint32_t phi60 = phi42;
									uint32_t phi61 = phi43;
									uint32_t phi62 = anon59;
									uint32_t phi63 = phi44;
									uint32_t phi64 = phi45;
									uint32_t phi65 = anon59;
									uint32_t phi_in66 = anon59;
									uint32_t phi67 = anon59;
									uint32_t phi_in68 = phi46;
									uint32_t phi_in69 = anon59;
									uint32_t phi_in70 = anon59;
									uint32_t phi_in71 = phi47;
									uint32_t phi72 = anon59;
									uint32_t phi_in73 = anon59;
									uint32_t phi74 = phi48;
									uint64_t phi75 = phi51;
									uint32_t phi_in76 = anon59;
									uint32_t phi_in77 = anon59;
									uint32_t phi78 = anon59;
									uint64_t phi_in79 = phi49;
									uint64_t phi80 = 0;
									uint64_t phi81 = anon54 * 12;
									uint64_t phi82 = phi52;
									do
									{
										uint32_t phi_in83 = phi57;
										uint32_t phi84 = phi58;
										uint32_t phi_in85 = phi60;
										uint32_t phi_in86 = phi61;
										uint32_t phi87 = phi62;
										uint32_t phi_in88 = phi63;
										uint32_t phi_in89 = phi64;
										uint32_t phi_in90 = phi65;
										uint32_t phi_in91 = phi67;
										uint32_t phi_in92 = phi_in70;
										uint32_t phi_in93 = phi_in71;
										uint32_t phi94 = phi72;
										uint32_t phi95 = phi_in73;
										uint32_t phi_in96 = phi74;
										uint64_t phi_in97 = phi75;
										uint32_t phi98 = phi_in77;
										uint32_t phi_in99 = phi78;
										uint64_t phi_in100 = phi_in79;
										uint64_t phi_in101 = phi82;
										uint32_t phi_in102 = phi_in55;
										uint32_t phi103 = phi56;
										uint32_t phi104 = phi_in83;
										uint32_t phi105 = phi_in85;
										uint32_t phi106 = phi_in86;
										uint32_t phi107 = phi87;
										uint32_t phi108 = phi_in88;
										phi81 = phi81;
										uint32_t phi109 = phi_in89;
										phi65 = phi_in90;
										uint32_t phi110 = phi_in66;
										phi67 = phi_in91;
										uint32_t phi111 = phi_in68;
										uint32_t phi112 = phi_in69;
										uint32_t phi113 = phi_in92;
										uint32_t phi_in114 = phi_in93;
										uint32_t phi115 = phi95;
										uint32_t phi_in116 = phi_in96;
										phi75 = phi_in97;
										uint32_t phi117 = phi_in99;
										uint64_t phi118 = phi_in100;
										uint64_t phi_in119 = phi_in101;
										int64_t anon121 = (__sext int64_t)*(uint32_t*)(phi80 + phi81 + 6301632);
										uint32_t* anon120 = (uint32_t*)((anon121 << 2) + 6300992);
										if (*(uint32_t*)(phi_in100 + 28) < *anon120)
										{
											*anon120 = *(uint32_t*)(phi_in100 + 40);
											*(uint32_t*)(phi_in100 + 120) = (uint32_t)phi_in101 + 9;
											uint64_t phi122 = 0;
											uint32_t phi123 = phi_in55;
											uint32_t phi_in124 = phi84;
											uint32_t phi_in125 = phi_in85;
											uint32_t phi126 = phi_in86;
											uint32_t phi_in127 = phi_in88;
											phi64 = phi_in89;
											uint32_t phi128 = phi_in90;
											uint32_t phi_in129 = phi_in66;
											uint32_t phi130 = phi_in91;
											uint32_t phi131 = phi_in68;
											uint32_t phi132 = phi_in69;
											uint32_t phi133 = phi_in92;
											uint32_t phi134 = phi_in93;
											uint32_t phi_in135 = phi94;
											uint64_t phi_in136 = phi80;
											uint32_t phi_in137 = phi_in96;
											uint64_t phi138 = phi_in97;
											uint64_t phi_in139 = phi81;
											uint32_t phi_in140 = phi_in76;
											uint32_t phi141 = phi98;
											uint32_t phi142 = phi_in99;
											uint64_t phi_in143 = phi_in101 & 0xffffffff;
											do
											{
												uint32_t phi144 = phi56;
												uint32_t phi145 = phi_in83;
												uint32_t phi_in146 = phi_in124;
												uint32_t phi_in147 = phi_in125;
												uint32_t phi_in148 = phi126;
												uint32_t phi149 = phi87;
												uint32_t phi_in150 = phi64;
												uint32_t phi_in151 = phi128;
												uint32_t phi_in152 = phi_in129;
												uint32_t phi_in153 = phi130;
												uint32_t phi_in154 = phi131;
												uint32_t phi_in155 = phi132;
												uint32_t phi_in156 = phi134;
												uint32_t phi157 = phi95;
												uint64_t phi158 = phi138;
												uint32_t phi159 = phi_in140;
												uint32_t phi_in160 = phi141;
												uint32_t phi_in161 = phi142;
												uint64_t phi_in162 = phi_in100;
												uint64_t phi_in163 = phi_in143;
												phi103 = phi144;
												uint32_t phi164 = phi145;
												phi84 = phi_in146;
												uint32_t phi165 = phi_in147;
												uint32_t phi166 = phi_in148;
												uint32_t phi167 = phi149;
												uint32_t phi_in168 = phi_in127;
												uint32_t phi169 = phi_in150;
												uint32_t phi170 = phi_in151;
												phi_in129 = phi_in152;
												phi130 = phi_in153;
												phi131 = phi_in154;
												phi_in69 = phi_in155;
												phi113 = phi133;
												uint32_t phi171 = phi_in156;
												uint32_t phi172 = phi_in135;
												uint32_t phi173 = phi157;
												uint64_t phi174 = phi_in136;
												uint32_t phi175 = phi_in137;
												uint64_t phi_in176 = phi_in139;
												uint32_t phi177 = phi_in160;
												phi_in99 = phi_in161;
												phi_in100 = phi_in162;
												phi_in143 = phi_in163;
												int64_t anon179 = (__sext int64_t)*(uint32_t*)(phi122 + anon121 * 12 + 6301632);
												uint32_t* anon178 = (uint32_t*)((anon179 << 2) + 6300992);
												if (*(uint32_t*)(phi_in162 + 40) < *anon178)
												{
													uint64_t phi_in198;
													*anon178 = *(uint32_t*)(phi_in162 + 44);
													uint64_t phi180 = 0;
													uint32_t phi_in181 = phi123;
													uint32_t phi_in182 = phi_in146;
													uint32_t phi_in183 = phi_in147;
													uint32_t phi_in184 = phi_in148;
													uint32_t phi185 = phi_in127;
													uint32_t phi_in186 = phi_in151;
													uint32_t phi_in187 = phi_in152;
													int64_t anon191 = (__sext int64_t)*(uint32_t*)(phi180 + anon179 * 12 + 6301632);
													int64_t anon190 = anon191 * 12;
													int64_t anon189 = (__sext int64_t)*(uint32_t*)(anon190 + 6301636);
													uint32_t* anon188 = (uint32_t*)((anon189 << 2) + 6300992);
													*anon188 = phi_in153;
													phi131 = phi_in154;
													uint32_t phi192 = phi_in155;
													uint32_t phi_in193 = phi_in156;
													uint32_t phi_in194 = phi_in135;
													uint64_t phi195 = phi_in136;
													uint32_t phi_in196 = phi_in137;
													uint64_t phi197 = phi158;
													*(uint64_t*)(phi_in198 + 112) = phi_in139;
													uint32_t phi199 = phi159;
													uint32_t phi_in200 = phi_in160;
													uint32_t phi201 = phi_in161;
													uint64_t phi202 = phi_in162;
													uint64_t phi_in203 = phi_in163;
													do
													{
														uint64_t phi_in217;
														uint32_t phi204 = phi_in181;
														uint32_t phi_in205 = phi144;
														uint32_t phi206 = phi145;
														uint32_t phi207 = phi_in182;
														uint32_t phi_in208 = phi149;
														uint32_t phi_in209 = phi185;
														*(uint32_t*)(phi_in198 + 96) = phi_in150;
														uint32_t phi_in210 = phi_in187;
														uint32_t phi211 = phi131;
														uint32_t phi212 = phi192;
														uint32_t phi_in213 = phi133;
														uint32_t phi214 = phi_in193;
														uint32_t phi_in215 = phi_in194;
														uint32_t phi_in216 = phi157;
														*(uint64_t*)(phi_in217 + 80) = phi195;
														uint32_t phi218 = phi_in196;
														uint64_t phi219 = phi197;
														uint64_t phi_in220 = *(uint64_t*)(phi_in198 + 112);
														uint32_t phi_in221 = phi199;
														uint32_t phi_in222 = phi_in200;
														uint32_t phi223 = phi201;
														phi_in198 = phi202;
														phi_in143 = phi_in203;
														uint32_t phi224 = phi_in205;
														phi_in146 = phi207;
														uint32_t phi225 = phi_in183;
														uint32_t phi226 = phi_in184;
														uint32_t phi227 = phi_in208;
														uint32_t phi228 = phi_in209;
														uint32_t phi229 = *(uint32_t*)(phi_in198 + 96);
														uint32_t phi230 = phi_in186;
														uint32_t phi231 = phi_in210;
														uint32_t phi232 = *anon188;
														uint32_t phi233 = phi211;
														uint32_t phi234 = phi212;
														phi133 = phi_in213;
														uint32_t phi235 = phi214;
														uint32_t phi236 = phi_in215;
														uint32_t phi_in237 = phi_in216;
														phi174 = *(uint64_t*)(phi_in217 + 80);
														phi_in137 = phi218;
														*(uint64_t*)(phi_in198 + 112) = phi_in220;
														phi199 = phi_in221;
														phi_in200 = phi_in222;
														uint32_t phi238 = phi223;
														uint64_t phi239 = phi_in198;
														uint32_t* anon240 = (uint32_t*)((anon191 << 2) + 6300992);
														if (*(uint32_t*)(phi_in198 + 44) < *anon240)
														{
															*anon240 = *(uint32_t*)(phi_in198 + 64);
															uint32_t phi241 = phi204;
															*(uint32_t*)(phi_in217 + 88) = phi_in205;
															uint32_t phi242 = phi206;
															uint32_t phi_in243 = phi207;
															uint64_t phi244 = phi_in198;
															uint32_t phi_in245 = phi_in183;
															uint32_t phi246 = phi_in208;
															uint32_t phi247 = phi_in209;
															uint32_t phi_in248 = *(uint32_t*)(phi_in198 + 96);
															phi_in186 = phi_in186;
															phi231 = phi_in210;
															uint32_t phi_in249 = *anon188;
															uint32_t phi250 = phi211;
															uint32_t phi251 = phi_in213;
															phi_in194 = phi_in215;
															uint32_t phi_in252 = phi_in216;
															uint64_t phi253 = phi219;
															uint64_t phi254 = phi_in220;
															uint32_t phi255 = phi_in221;
															phi_in222 = phi_in222;
															uint64_t phi_in256 = phi_in143;
															if (*(uint32_t*)(phi_in198 + 64) < *anon188)
															{
																phi_in181 = phi204;
																uint32_t phi257 = phi_in205;
																uint32_t phi258 = phi206;
																uint32_t phi259 = phi_in183;
																uint32_t phi_in260 = phi_in184;
																uint64_t phi261 = phi_in198;
																uint32_t phi262 = phi_in208;
																phi185 = phi_in209;
																uint64_t phi_in263 = anon189;
																uint32_t phi264 = *(uint32_t*)(phi_in198 + 96);
																uint32_t phi265 = phi214;
																uint64_t phi_in266 = *(uint64_t*)(phi_in217 + 80);
																uint32_t phi_in267 = phi218;
																*(uint64_t*)(phi261 + 104) = phi219;
																*(uint64_t*)(phi261 + 112) = phi_in220;
																uint64_t phi268 = phi_in143;
																if (phi_in210 < *anon188)
																{
																	*(uint32_t*)(phi_in198 + 124) = phi_in186;
																	*(uint64_t*)(phi_in198 + 112) = phi_in220;
																	*(uint64_t*)(phi_in198 + 104) = phi219;
																	*(uint64_t*)(phi_in198 + 88) = *(uint64_t*)(phi_in217 + 80);
																	*(uint64_t*)(phi_in198 + 80) = anon189;
																	uint64_t anon269 = (__zext uint64_t)*anon188;
																	w(4197873, anon13, (__sext int64_t)*anon188, anon269, anon269);
																	phi_in181 = *(uint32_t*)(arg1 - 96);
																	phi257 = *(uint32_t*)(arg1 - 96);
																	phi258 = *(uint32_t*)(arg1 - 96);
																	phi207 = *(uint32_t*)(arg1 - 68);
																	phi259 = *(uint32_t*)(arg1 - 96);
																	phi_in260 = *(uint32_t*)(arg1 - 96);
																	phi261 = anon13;
																	phi262 = *(uint32_t*)(arg1 - 68);
																	phi185 = *(uint32_t*)(arg1 - 96);
																	phi_in263 = *(uint64_t*)(arg1 - 112);
																	phi264 = *(uint32_t*)(arg1 - 96);
																	phi211 = *(uint32_t*)(arg1 - 96);
																	phi265 = *(uint32_t*)(arg1 - 96);
																	phi_in266 = *(uint64_t*)(arg1 - 104);
																	phi_in267 = *(uint32_t*)(arg1 - 96);
																	*(uint64_t*)(phi261 + 104) = *(uint64_t*)(arg1 - 88);
																	*(uint64_t*)(phi261 + 112) = *(uint64_t*)(arg1 - 80);
																	phi268 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
																}
																uint32_t phi_in270 = phi257;
																uint32_t phi_in271 = phi258;
																uint32_t phi_in272 = phi207;
																*(uint32_t*)(phi_in273 + 88) = phi259;
																*(uint32_t*)(phi261 + 124) = phi262;
																phi_in209 = phi185;
																*(uint64_t*)(phi261 + 80) = phi_in263;
																uint32_t phi_in274 = phi264;
																uint32_t phi_in275 = phi211;
																uint32_t phi276 = phi265;
																uint64_t phi_in277 = *(uint64_t*)(phi261 + 104);
																*(uint64_t*)(phi_in273 + 104) = *(uint64_t*)(phi261 + 112);
																uint64_t phi_in278 = phi268;
																uint32_t phi279 = phi_in181;
																uint32_t phi_in280 = phi_in270;
																uint32_t phi_in281 = phi_in271;
																uint32_t phi282 = phi_in272;
																uint32_t phi_in283 = *(uint32_t*)(phi261 + 124);
																uint64_t phi284 = *(uint64_t*)(phi261 + 80);
																uint32_t phi_in285 = phi_in274;
																uint32_t phi_in286 = phi_in275;
																*(uint64_t*)(phi_in273 + 80) = phi_in266;
																uint32_t phi287 = phi_in267;
																*(uint64_t*)(phi_in273 + 96) = phi_in277;
																uint64_t phi_in288 = phi_in278;
																int64_t anon289 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi261 + 80) * 12 + 6301636);
																if (*(uint32_t*)(phi261 + 124) < *(uint32_t*)((anon289 << 2) + 6300992))
																{
																	*(uint64_t*)(phi261 + 112) = *(uint64_t*)(phi_in273 + 104);
																	*(uint64_t*)(phi261 + 104) = phi_in277;
																	*(uint32_t*)(phi261 + 96) = phi_in260;
																	*(uint64_t*)(phi261 + 88) = phi_in266;
																	uint64_t anon290 = (__zext uint64_t)*(uint32_t*)(phi261 + 120);
																	w(4197793, anon13, anon289, anon290, anon290);
																	phi279 = *(uint32_t*)(arg1 - 96);
																	phi_in280 = *(uint32_t*)(arg1 - 96);
																	phi_in281 = *(uint32_t*)(arg1 - 96);
																	phi282 = alloca1.field14;
																	*(uint32_t*)(phi_in273 + 88) = *(uint32_t*)(arg1 - 96);
																	phi261 = anon13;
																	phi_in260 = *(uint32_t*)(arg1 - 96);
																	phi_in283 = alloca1.field14;
																	phi_in209 = *(uint32_t*)(arg1 - 96);
																	phi284 = *(uint64_t*)(arg1 - 112);
																	phi_in285 = *(uint32_t*)(arg1 - 96);
																	phi_in286 = *(uint32_t*)(arg1 - 96);
																	phi276 = *(uint32_t*)(arg1 - 96);
																	*(uint64_t*)(phi_in273 + 80) = *(uint64_t*)(arg1 - 104);
																	phi287 = *(uint32_t*)(arg1 - 96);
																	*(uint64_t*)(phi_in273 + 96) = *(uint64_t*)(arg1 - 88);
																	*(uint64_t*)(phi_in273 + 104) = *(uint64_t*)(arg1 - 80);
																	phi_in288 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
																}
																uint32_t phi_in291 = phi279;
																phi_in243 = phi282;
																uint32_t phi_in292 = *(uint32_t*)(phi_in273 + 88);
																uint64_t phi_in273 = phi261;
																phi246 = phi_in283;
																phi214 = phi276;
																*(uint64_t*)(phi_in217 + 80) = *(uint64_t*)(phi_in273 + 80);
																phi218 = phi287;
																uint64_t phi_in293 = *(uint64_t*)(phi_in273 + 96);
																phi254 = *(uint64_t*)(phi_in273 + 104);
																phi241 = phi_in291;
																*(uint32_t*)(phi_in217 + 88) = phi_in280;
																phi242 = phi_in281;
																phi244 = phi_in273;
																phi_in245 = phi_in292;
																phi_in184 = phi_in260;
																phi247 = phi_in209;
																phi_in248 = phi_in285;
																phi_in186 = phi246;
																phi231 = phi246;
																phi_in249 = phi246;
																phi250 = phi_in286;
																phi212 = phi246;
																phi251 = phi246;
																phi_in194 = phi246;
																phi_in252 = phi246;
																phi253 = phi_in293;
																phi255 = phi246;
																phi_in222 = phi246;
																phi223 = phi246;
																phi_in256 = phi_in288;
																int64_t anon294 = (__sext int64_t)*(uint32_t*)(phi284 * 12 + 6301640);
																if (phi246 < *(uint32_t*)((anon294 << 2) + 6300992))
																{
																	*(uint32_t*)(phi_in273 + 112) = phi246;
																	*(uint64_t*)(phi_in273 + 104) = phi254;
																	*(uint64_t*)(phi_in273 + 96) = phi_in293;
																	*(uint32_t*)(phi_in273 + 88) = phi_in292;
																	*(uint64_t*)(phi_in273 + 80) = *(uint64_t*)(phi_in217 + 80);
																	uint64_t anon295 = (__zext uint64_t)*(uint32_t*)(phi_in273 + 120);
																	w(4197395, anon13, anon294, anon295, anon295);
																	phi241 = *(uint32_t*)(arg1 - 104);
																	*(uint32_t*)(phi_in217 + 88) = *(uint32_t*)(arg1 - 104);
																	phi242 = *(uint32_t*)(arg1 - 104);
																	phi_in243 = *(uint32_t*)(arg1 - 80);
																	phi244 = anon13;
																	phi_in245 = *(uint32_t*)(arg1 - 104);
																	phi_in184 = *(uint32_t*)(arg1 - 104);
																	phi246 = *(uint32_t*)(arg1 - 80);
																	phi247 = *(uint32_t*)(arg1 - 104);
																	phi_in248 = *(uint32_t*)(arg1 - 104);
																	phi_in186 = *(uint32_t*)(arg1 - 80);
																	phi231 = *(uint32_t*)(arg1 - 80);
																	phi_in249 = *(uint32_t*)(arg1 - 80);
																	phi250 = *(uint32_t*)(arg1 - 104);
																	phi212 = *(uint32_t*)(arg1 - 80);
																	phi251 = *(uint32_t*)(arg1 - 80);
																	phi214 = *(uint32_t*)(arg1 - 104);
																	phi_in194 = *(uint32_t*)(arg1 - 80);
																	phi_in252 = *(uint32_t*)(arg1 - 80);
																	*(uint64_t*)(phi_in217 + 80) = *(uint64_t*)(arg1 - 112);
																	phi218 = *(uint32_t*)(arg1 - 104);
																	phi253 = *(uint64_t*)(arg1 - 96);
																	phi254 = *(uint64_t*)(arg1 - 88);
																	phi255 = *(uint32_t*)(arg1 - 80);
																	phi_in222 = *(uint32_t*)(arg1 - 80);
																	phi223 = *(uint32_t*)(arg1 - 80);
																	phi_in256 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
																}
															}
															uint32_t phi296 = phi241;
															uint32_t phi_in297 = *(uint32_t*)(phi_in217 + 88);
															uint32_t phi_in298 = phi242;
															uint32_t phi_in299 = phi_in243;
															phi_in217 = phi244;
															phi_in183 = phi_in245;
															phi_in208 = phi246;
															phi228 = phi247;
															phi229 = phi_in248;
															uint32_t phi_in300 = phi250;
															uint32_t phi_in301 = phi212;
															uint32_t phi_in302 = phi251;
															uint32_t phi_in303 = phi214;
															uint64_t phi_in304 = *(uint64_t*)(phi_in217 + 80);
															phi_in196 = phi218;
															*(uint64_t*)(phi_in217 + 96) = phi253;
															*(uint64_t*)(phi_in217 + 104) = phi254;
															phi199 = phi255;
															phi238 = phi223;
															phi204 = phi296;
															phi224 = phi_in297;
															phi206 = phi_in298;
															phi_in146 = phi_in299;
															phi225 = phi_in183;
															phi226 = phi_in184;
															phi227 = phi_in208;
															phi230 = phi_in186;
															phi232 = phi_in249;
															phi233 = phi_in300;
															phi234 = phi_in301;
															phi133 = phi_in302;
															phi235 = phi_in303;
															phi236 = phi_in194;
															phi_in237 = phi_in252;
															phi174 = phi_in304;
															phi_in137 = phi_in196;
															phi219 = *(uint64_t*)(phi_in217 + 96);
															*(uint64_t*)(phi_in198 + 112) = *(uint64_t*)(phi_in217 + 104);
															phi_in200 = phi_in222;
															phi239 = phi_in217;
															phi_in143 = phi_in256;
															int64_t anon306 = (__sext int64_t)*(uint32_t*)(anon190 + 6301640);
															uint32_t* anon305 = (uint32_t*)((anon306 << 2) + 6300992);
															if (*(uint32_t*)(phi_in217 + 64) < *anon305)
															{
																*anon305 = phi_in299;
																uint32_t phi307 = phi_in297;
																phi206 = phi_in298;
																phi_in243 = phi_in299;
																uint32_t phi308 = phi_in184;
																phi247 = phi228;
																phi_in300 = phi_in300;
																uint32_t phi309 = phi_in303;
																uint64_t phi310 = phi_in304;
																uint32_t phi311 = phi_in196;
																uint64_t phi312 = *(uint64_t*)(phi_in217 + 96);
																uint64_t phi313 = *(uint64_t*)(phi_in217 + 104);
																uint64_t phi314 = phi_in217;
																phi_in256 = phi_in256;
																int64_t anon316 = anon306 * 12;
																int64_t anon315 = (__sext int64_t)*(uint32_t*)(anon316 + 6301636);
																if (phi_in299 < *(uint32_t*)((anon315 << 2) + 6300992))
																{
																	*(uint32_t*)(phi_in217 + 112) = phi_in299;
																	*(uint32_t*)(phi_in217 + 88) = phi_in297;
																	*(uint64_t*)(phi_in217 + 80) = phi_in304;
																	uint64_t anon317 = (__zext uint64_t)*(uint32_t*)(phi_in217 + 120);
																	w(4197948, anon13, anon315, anon317, anon317);
																	phi296 = *(uint32_t*)(arg1 - 104);
																	phi307 = *(uint32_t*)(arg1 - 104);
																	phi206 = *(uint32_t*)(arg1 - 104);
																	phi_in243 = *(uint32_t*)(arg1 - 80);
																	phi_in183 = *(uint32_t*)(arg1 - 104);
																	phi308 = *(uint32_t*)(arg1 - 104);
																	phi247 = *(uint32_t*)(arg1 - 104);
																	phi229 = *(uint32_t*)(arg1 - 104);
																	phi_in300 = *(uint32_t*)(arg1 - 104);
																	phi309 = *(uint32_t*)(arg1 - 104);
																	phi310 = *(uint64_t*)(arg1 - 112);
																	phi311 = *(uint32_t*)(arg1 - 104);
																	phi312 = *(uint64_t*)(arg1 - 96);
																	phi313 = *(uint64_t*)(arg1 - 88);
																	phi314 = anon13;
																	phi_in256 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
																}
																*(uint32_t*)(phi_in318 + 88) = phi296;
																phi_in205 = phi307;
																phi227 = phi_in243;
																uint32_t phi_in319 = phi308;
																phi228 = phi247;
																uint32_t phi_in320 = phi309;
																phi_in304 = phi310;
																phi_in196 = phi311;
																*(uint64_t*)(phi_in318 + 96) = phi312;
																*(uint64_t*)(phi_in318 + 104) = phi313;
																uint64_t phi_in318 = phi314;
																phi204 = *(uint32_t*)(phi_in318 + 88);
																phi224 = phi_in205;
																phi_in146 = phi227;
																phi225 = phi_in183;
																phi226 = phi_in319;
																phi230 = phi227;
																phi231 = phi227;
																phi232 = phi227;
																phi233 = phi_in300;
																phi234 = phi227;
																phi133 = phi227;
																phi235 = phi_in320;
																phi236 = phi227;
																phi_in237 = phi227;
																phi174 = phi_in304;
																phi_in137 = phi_in196;
																phi219 = *(uint64_t*)(phi_in318 + 96);
																*(uint64_t*)(phi_in198 + 112) = *(uint64_t*)(phi_in318 + 104);
																phi199 = phi227;
																phi_in200 = phi227;
																phi238 = phi227;
																phi239 = phi_in318;
																phi_in143 = phi_in256;
																int64_t anon321 = (__sext int64_t)*(uint32_t*)(anon316 + 6301640);
																if (phi227 < *(uint32_t*)((anon321 << 2) + 6300992))
																{
																	*(uint32_t*)(phi_in318 + 112) = phi227;
																	*(uint64_t*)(phi_in318 + 80) = phi_in304;
																	uint64_t anon322 = (__zext uint64_t)*(uint32_t*)(phi_in318 + 120);
																	w(4197231, anon13, anon321, anon322, anon322);
																	phi204 = alloca1.field8;
																	phi224 = alloca1.field8;
																	phi206 = alloca1.field8;
																	phi_in146 = alloca1.field12;
																	phi225 = alloca1.field8;
																	phi226 = alloca1.field8;
																	phi227 = alloca1.field12;
																	phi228 = alloca1.field8;
																	phi229 = alloca1.field8;
																	phi230 = alloca1.field12;
																	phi231 = alloca1.field12;
																	phi232 = alloca1.field12;
																	phi233 = alloca1.field8;
																	phi234 = alloca1.field12;
																	phi133 = alloca1.field12;
																	phi235 = alloca1.field8;
																	phi236 = alloca1.field12;
																	phi_in237 = alloca1.field12;
																	phi174 = alloca1.field7;
																	phi_in137 = alloca1.field8;
																	phi219 = alloca1.field10;
																	*(uint64_t*)(phi_in198 + 112) = alloca1.field11;
																	phi199 = alloca1.field12;
																	phi_in200 = alloca1.field12;
																	phi238 = alloca1.field12;
																	phi239 = anon13;
																	phi_in143 = (__zext uint64_t)alloca1.field8;
																}
															}
														}
														uint32_t phi_in323 = phi204;
														uint32_t phi_in324 = phi224;
														phi164 = phi206;
														phi_in147 = phi225;
														uint32_t phi_in325 = phi226;
														phi167 = phi227;
														phi_in127 = phi228;
														uint32_t phi_in326 = phi229;
														uint32_t phi_in327 = phi230;
														phi_in152 = phi231;
														uint32_t phi_in328 = phi232;
														phi_in154 = phi233;
														uint32_t phi_in329 = phi234;
														uint32_t phi_in330 = phi235;
														phi172 = phi236;
														phi158 = phi219;
														phi159 = phi199;
														phi_in99 = phi238;
														phi_in100 = phi239;
														phi123 = phi_in323;
														phi103 = phi_in324;
														phi84 = phi_in146;
														phi165 = phi_in147;
														phi166 = phi_in325;
														phi_in168 = phi_in127;
														phi169 = phi_in326;
														phi170 = phi_in327;
														phi_in129 = phi_in152;
														phi130 = phi_in328;
														phi131 = phi_in154;
														phi_in69 = phi_in329;
														phi113 = phi133;
														phi171 = phi_in330;
														phi173 = phi_in237;
														phi175 = phi_in137;
														phi_in176 = *(uint64_t*)(phi_in198 + 112);
														phi177 = phi_in200;
														phi_in143 = phi_in143;
														phi180 = phi180 + 4;
														phi_in181 = phi_in323;
														phi144 = phi_in324;
														phi145 = phi164;
														phi_in182 = phi_in146;
														phi_in183 = phi_in147;
														phi_in184 = phi_in325;
														phi149 = phi167;
														phi185 = phi_in127;
														phi_in150 = phi_in326;
														phi_in186 = phi_in327;
														phi_in187 = phi_in152;
														*anon188 = phi_in328;
														phi131 = phi_in154;
														phi192 = phi_in329;
														phi_in193 = phi_in330;
														phi_in194 = phi172;
														phi157 = phi_in237;
														phi195 = phi174;
														phi_in196 = phi_in137;
														phi197 = phi158;
														phi199 = phi159;
														phi201 = phi_in99;
														phi202 = phi_in100;
														phi_in203 = phi_in143;
													}
													while (phi180 != 8);
												}
												phi_in55 = phi123;
												uint32_t phi_in331 = phi164;
												phi105 = phi165;
												phi106 = phi166;
												uint32_t phi_in332 = phi167;
												phi_in89 = phi169;
												phi65 = phi170;
												phi_in114 = phi171;
												phi94 = phi172;
												phi115 = phi173;
												phi80 = phi174;
												uint32_t phi_in333 = phi175;
												phi75 = phi158;
												uint32_t phi_in334 = phi159;
												phi98 = phi177;
												phi_in102 = phi_in55;
												phi104 = phi_in331;
												phi107 = phi_in332;
												phi108 = phi_in168;
												phi81 = phi_in176;
												phi109 = phi_in89;
												phi110 = phi_in129;
												phi67 = phi130;
												phi111 = phi131;
												phi112 = phi_in69;
												phi_in116 = phi_in333;
												phi_in76 = phi_in334;
												phi117 = phi_in99;
												phi118 = phi_in100;
												phi_in119 = phi_in143;
												phi122 = phi122 + 4;
												phi123 = phi_in55;
												phi56 = phi103;
												phi_in83 = phi_in331;
												phi_in124 = phi84;
												phi_in125 = phi105;
												phi126 = phi106;
												phi87 = phi_in332;
												phi_in127 = phi_in168;
												phi64 = phi_in89;
												phi128 = phi65;
												phi132 = phi_in69;
												phi133 = phi113;
												phi134 = phi_in114;
												phi_in135 = phi94;
												phi95 = phi115;
												phi_in136 = phi80;
												phi_in137 = phi_in333;
												phi138 = phi75;
												phi_in139 = phi_in176;
												phi_in140 = phi_in334;
												phi141 = phi98;
												phi142 = phi_in99;
											}
											while (phi122 != 8);
										}
										uint32_t phi_in335 = phi103;
										phi336 = phi104;
										phi337 = phi105;
										uint32_t phi_in338 = phi106;
										uint32_t phi_in339 = phi108;
										phi340 = phi109;
										phi_in341 = phi111;
										uint64_t phi_in342 = phi75;
										phi343 = phi118;
										phi_in344 = phi_in102;
										phi345 = phi_in335;
										phi43 = phi_in338;
										phi346 = phi_in339;
										phi51 = phi_in342;
										phi347 = phi_in114;
										phi_in348 = phi_in116;
										phi_in349 = phi_in119;
										if (phi80 != 8)
										{
											phi_in55 = phi_in102;
											phi56 = phi_in335;
											phi57 = phi336;
											phi58 = phi84;
											phi60 = phi337;
											phi61 = phi_in338;
											phi62 = phi107;
											phi63 = phi_in339;
											phi64 = phi340;
											phi_in66 = phi110;
											phi_in68 = phi_in341;
											phi_in69 = phi112;
											phi_in70 = phi113;
											phi_in71 = phi_in114;
											phi72 = phi94;
											phi_in73 = phi115;
											phi74 = phi_in116;
											phi75 = phi_in342;
											phi_in77 = phi98;
											phi78 = phi117;
											phi_in79 = phi343;
											phi80 = phi80 + 4;
											phi82 = phi_in119;
										}
									}
									while (phi80 != 8);
								}
								else 
								{
									phi_in344 = phi39;
									phi345 = phi40;
									phi336 = phi41;
									phi337 = phi42;
									phi43 = phi43;
									phi346 = phi44;
									phi51 = phi51;
									phi340 = phi45;
									phi_in341 = phi46;
									phi347 = phi47;
									phi_in348 = phi48;
									phi343 = phi49;
									phi_in349 = phi52 & 0xffffffff;
								}
								phi_in350 = phi345;
								phi351 = phi336;
								phi_in352 = phi337;
								phi_in353 = phi340;
								phi_in354 = phi347;
								phi_in355 = phi343;
								if (phi50 != 8)
								{
									phi39 = phi_in344;
									phi40 = phi_in350;
									phi41 = phi351;
									phi42 = phi_in352;
									phi44 = phi346;
									phi45 = phi_in353;
									phi46 = phi_in341;
									phi47 = phi_in354;
									phi48 = phi_in348;
									phi49 = phi_in355;
									phi50 = phi50 + 4;
									phi52 = phi_in349;
								}
							}
							while (phi50 != 8);
							phi356 = phi_in344;
							phi357 = phi_in350;
							phi28 = phi_in352;
							phi29 = phi43;
							phi_in358 = *(uint64_t*)(phi_in355 + 72);
							phi359 = phi_in353;
							phi360 = phi_in341;
							phi33 = phi_in354;
							phi361 = phi_in348;
							phi362 = phi_in349;
							phi_in363 = phi_in355;
						}
						else 
						{
							phi356 = phi25;
							phi357 = phi26;
							phi351 = phi27;
							phi28 = phi28;
							phi29 = phi29;
							phi346 = phi30;
							phi_in358 = *(uint64_t*)(phi36 + 72);
							phi359 = phi31;
							phi360 = phi32;
							phi33 = phi33;
							phi361 = phi34;
							phi362 = phi35 & 0xffffffff;
							phi_in363 = phi36;
						}
						phi364 = phi346;
						phi365 = phi_in358;
						if (phi365 != 8)
						{
							phi25 = phi356;
							phi26 = phi357;
							phi27 = phi351;
							phi30 = phi364;
							phi31 = phi359;
							phi32 = phi360;
							phi34 = phi361;
							phi35 = phi362;
							*(uint64_t*)(phi36 + 72) = phi365 + 4;
							phi36 = phi_in363;
						}
					}
					while (phi365 != 8);
					phi366 = *(uint32_t*)(phi_in363 + 68);
					phi_in22 = phi364;
					phi_in367 = *(uint64_t*)(phi_in363 + 56);
					phi368 = (__zext uint64_t)phi364;
					phi_in369 = *(uint32_t*)(phi_in363 + 68);
					phi370 = *(uint32_t*)(phi_in363 + 68);
					phi_in371 = phi_in363;
				}
				else 
				{
					phi366 = phi_in21;
					phi_in367 = *(uint64_t*)(phi20 + 56);
					phi368 = phi16 & 0xffffffff;
					phi_in369 = *(uint32_t*)(phi20 + 68);
					phi364 = phi18;
					phi370 = phi19;
					phi_in371 = phi20;
				}
				phi_in372 = phi366;
				phi_in373 = phi_in22;
				phi374 = phi_in367;
				if (phi374 != 8)
				{
					phi14 = phi_in372;
					phi15 = phi_in373;
					phi16 = phi368;
					phi17 = phi_in369;
					phi18 = phi364;
					phi19 = phi370;
					*(uint64_t*)(phi20 + 56) = phi374 + 4;
					phi20 = phi_in371;
				}
			}
			while (phi374 != 8);
			phi375 = *(uint64_t*)(phi_in371 + 48);
			phi376 = phi_in373;
			phi377 = phi_in372;
			phi7 = (__zext uint64_t)phi_in373;
			phi378 = phi_in372;
			phi379 = phi_in373;
			phi10 = phi_in371;
		}
		else 
		{
			phi375 = *(uint64_t*)(phi10 + 48);
			phi376 = phi4;
			phi377 = phi5;
			phi7 = phi7 & 0xffffffff;
			phi378 = *anon8;
			phi379 = phi11;
			phi10 = phi10;
		}
		if (phi375 != 8)
		{
			phi4 = phi376;
			phi5 = phi377;
			*anon8 = phi378;
			phi11 = phi379;
			phi12 = phi375 + 4;
		}
	}
	while (phi375 != 8);
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
		uint64_t phi22;
		uint32_t anon23;
		uint32_t anon37;
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
			uint32_t phi18;
			uint32_t phi20;
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
				phi18 = phi11;
				uint32_t phi_in19 = phi12;
				phi_in17 = phi13;
				*anon16 = phi14;
				*phi7 = phi15;
				*anon10 = *anon16;
				phi20 = phi_in19;
			}
			if (*anon10 < *phi7)
			{
				if (*anon10 >= *anon16)
				{
					phi_in17 = *anon16 & 0xf;
					phi18 = *phi7;
					*anon10 = *anon10;
					phi20 = *phi7;
				}
			}
			if (*anon10 >= *phi7 && *phi7 < *anon16 || *anon10 < *phi7 && *anon10 < *anon16 || *anon10 < *phi7 && *anon10 >= *anon16)
			{
				*phi7 = phi18;
				if (phi20 - *anon10 <= 4294967295)
				{
					phi_in17 = *(uint32_t*)((phi9 & 0xc) - 4);
				}
			}
			uint32_t phi21 = phi_in17;
			phi22 = 6301636;
			anon23 = phi21 + 1 & 0xff;
			if (anon23 != 0)
			{
				phi22 = 6301636;
				uint64_t anon24 = phi9 + 12;
				phi7 = (uint32_t*)(anon24 & 0xc);
				phi_in8 = anon24;
				if (phi9 == 6301984)
				{
					break;
				}
			}
		}
		while (anon23 != 0);
		do
		{
			uint32_t phi27;
			uint32_t phi_in28;
			uint32_t phi_in29;
			uint32_t phi30;
			uint32_t phi31;
			uint32_t* anon32;
			uint32_t phi_in33;
			uint32_t phi34;
			uint32_t phi35;
			uint32_t* anon25 = (uint32_t*)(phi22 + 4);
			uint32_t* anon26 = (uint32_t*)phi22;
			if (*anon25 < *anon26)
			{
				*anon26 = *anon25;
				*anon25 = *anon26;
				phi27 = *anon26;
				phi_in28 = *anon26;
				phi_in29 = *anon25;
				phi30 = *anon25;
				anon32 = (uint32_t*)(phi22 - 4);
				phi31 = *anon32;
			}
			else 
			{
				phi_in33 = *anon32;
				if (*anon26 < *anon32)
				{
					phi27 = *anon25 & 0xf;
					phi_in28 = *anon25;
					phi_in29 = *anon26 & 0xf;
					phi30 = *anon26;
					phi31 = *anon32 & 0xf;
				}
			}
			if (*anon25 >= *anon26 && *anon26 < *anon32 || *anon25 < *anon26 && *anon25 < *anon32)
			{
				*anon32 = phi30;
				*anon26 = phi31;
				phi_in33 = phi_in29;
				phi34 = *anon32;
				phi35 = phi_in28;
			}
			if (*anon25 < *anon26)
			{
				if (*anon25 >= *anon32)
				{
					phi_in33 = *anon32 & 0xf;
					phi27 = *anon26;
					phi34 = *anon25;
					phi35 = *anon26;
				}
			}
			if (*anon25 >= *anon26 && *anon26 < *anon32 || *anon25 < *anon26 && *anon25 < *anon32 || *anon25 < *anon26 && *anon25 >= *anon32)
			{
				*anon26 = phi27;
				*anon25 = phi34;
				if (phi35 - *anon25 <= 4294967295)
				{
					phi_in33 = *(uint32_t*)((phi22 & 0xf) - 4);
				}
			}
			uint32_t phi36 = phi_in33;
			anon37 = phi36 + 1 & 0xff;
			if (anon37 != 0)
			{
				phi22 = phi22 + 12;
			}
		}
		while (anon37 != 0);
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
			phi4 = phi_in6;
		}
		if (*(uint32_t*)(((__sext int64_t)phi16 << 2) + 6300992) != 0 || (uint32_t)anon20 + ((uint32_t)((anon20 & 0xffffffff) / 3) - (uint32_t)(anon20 << 32 >> 32 >> 31)) * 4294967293 != 1)
		{
			dispatch2 = 1;
		}
		if ((uint8_t)anon18 != 10)
		{
			if (*(uint32_t*)(((__sext int64_t)phi16 << 2) + 6300992) != 0 || (uint32_t)anon20 + ((uint32_t)((anon20 & 0xffffffff) / 3) - (uint32_t)(anon20 << 32 >> 32 >> 31)) * 4294967293 != 1)
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
