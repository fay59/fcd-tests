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
	uint32_t phi10;
	uint32_t* phi1 = (uint32_t*)0x6027c4;
	uint64_t phi_in2 = 6301636;
	do
	{
		uint32_t phi5;
		uint32_t phi6;
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
			phi6 = *anon4;
			anon8 = (uint32_t*)(phi3 - 4);
			phi_in7 = *anon8;
			*phi1 = *phi1;
			phi9 = *anon4;
		}
		else 
		{
			phi5 = *anon4;
			phi6 = *phi1;
			phi10 = *anon8;
		}
		if (*anon4 >= *phi1 && *phi1 < *anon8 || *anon4 < *phi1 && *anon4 < *anon8)
		{
			uint32_t phi_in11 = phi5;
			phi_in7 = phi6;
			*phi1 = *anon8;
			*anon8 = phi_in7;
			*phi1 = phi_in11;
			phi9 = *anon8;
		}
		if (*anon4 >= *phi1 && *phi1 < *anon8 || *anon4 < *phi1 && *anon4 < *anon8 || *anon4 >= *anon8 && *anon4 < *phi1)
		{
			*anon4 = phi9;
			phi10 = phi_in7;
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
	uint64_t phi_in11;
	uint64_t phi16;
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
	uint32_t phi8 = anon6;
	uint32_t phi9 = anon3;
	uint64_t phi10 = 0;
	uint64_t anon12 = (uint64_t)&alloca1;
	phi_in11 = anon12;
	do
	{
		uint32_t phi13 = phi4;
		int64_t anon15 = (__sext int64_t)*(uint32_t*)(phi16 + *(uint64_t*)(phi_in11 + 8) + 6301632);
		uint32_t* anon14 = (uint32_t*)((anon15 << 2) + 6300992);
		*anon14 = phi8;
		phi16 = phi10;
		phi4 = phi13;
		uint32_t phi17 = phi5;
		uint64_t phi18 = phi7 & 0xffffffff;
		phi8 = *anon14;
		phi9 = phi9;
		uint64_t phi_in19 = phi_in11;
		if (phi9 < *anon14)
		{
			uint32_t phi_in358;
			uint64_t phi359;
			uint64_t phi_in360;
			*(uint64_t*)(phi_in11 + 48) = phi16;
			*(uint64_t*)(phi_in11 + 16) = anon15 * 12;
			*(uint32_t*)(phi_in11 + 40) = (uint32_t)phi7 + 5;
			uint32_t phi20 = phi5;
			uint32_t phi21 = phi13;
			uint64_t phi22 = (__zext uint64_t)phi13;
			uint32_t phi23 = phi5;
			uint64_t phi24 = 0;
			uint64_t phi25 = phi_in11;
			do
			{
				uint32_t phi26 = phi20;
				uint32_t phi_in27 = phi21;
				*(uint32_t*)(phi28 + 68) = phi23;
				uint32_t phi29 = phi13;
				uint64_t phi_in30 = phi24;
				uint64_t phi28 = phi25;
				phi21 = phi_in27;
				phi22 = phi22 & 0xffffffff;
				uint32_t phi31 = *(uint32_t*)(phi28 + 68);
				uint32_t phi32 = phi29;
				uint32_t phi33 = phi5;
				uint64_t phi34 = phi28;
				int64_t anon36 = (__sext int64_t)*(uint32_t*)(phi_in30 + *(uint64_t*)(phi28 + 16) + 6301632);
				uint32_t* anon35 = (uint32_t*)((anon36 << 2) + 6300992);
				if (phi5 < *anon35)
				{
					uint64_t phi47;
					uint64_t phi357;
					*(uint64_t*)(phi28 + 56) = phi_in30;
					*anon35 = *(uint32_t*)(phi28 + 4);
					*(uint64_t*)(phi28 + 32) = anon36 * 12;
					*(uint32_t*)(phi28 + 44) = (uint32_t)phi22 + 6;
					uint32_t phi37 = phi29;
					uint32_t phi_in38 = phi29;
					uint32_t phi39 = phi29;
					uint32_t phi_in40 = phi29;
					uint32_t phi41 = phi29;
					uint32_t phi42 = phi29;
					uint32_t phi_in43 = phi29;
					uint32_t phi44 = phi29;
					uint32_t phi_in45 = phi29;
					uint64_t phi46 = (__zext uint64_t)phi29;
					*(uint64_t*)(phi47 + 72) = 0;
					do
					{
						uint32_t phi_in48 = phi37;
						uint32_t phi_in49 = phi39;
						uint32_t phi_in50 = phi41;
						uint32_t phi_in51 = phi42;
						uint32_t phi52 = phi44;
						uint32_t phi53 = phi29;
						uint64_t phi54 = phi46;
						phi47 = phi28;
						phi37 = phi_in48;
						uint32_t phi55 = phi_in38;
						phi39 = phi_in49;
						uint32_t phi56 = phi_in40;
						phi41 = phi_in50;
						uint32_t phi57 = phi_in51;
						uint64_t phi_in58 = *(uint64_t*)(phi47 + 72);
						uint32_t phi59 = phi_in43;
						uint32_t phi_in60 = phi_in45;
						uint32_t phi61 = phi53;
						uint64_t phi62 = phi54 & 0xffffffff;
						uint64_t phi63 = phi47;
						int64_t anon65 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi47 + 72) + *(uint64_t*)(phi47 + 32) + 6301632);
						uint32_t* anon64 = (uint32_t*)((anon65 << 2) + 6300992);
						if (*(uint32_t*)(phi47 + 4) < *anon64)
						{
							uint64_t phi83;
							uint32_t phi_in94;
							uint32_t phi_in95;
							uint64_t phi_in96;
							uint64_t phi_in97;
							uint32_t phi_in355;
							uint32_t phi_in356;
							*anon64 = *(uint32_t*)(phi47 + 24);
							*(uint32_t*)(phi47 + 64) = (uint32_t)phi54 + 7;
							uint32_t phi_in66 = phi_in48;
							uint32_t phi67 = phi_in38;
							uint32_t phi68 = phi_in49;
							uint32_t phi69 = phi_in40;
							uint32_t phi70 = phi_in50;
							uint32_t phi_in71 = phi_in51;
							uint32_t phi_in72 = phi_in43;
							uint32_t phi73 = phi52;
							uint32_t phi_in74 = phi_in45;
							uint64_t phi_in75 = 0;
							uint64_t phi76 = anon65 * 12;
							do
							{
								uint32_t phi_in77 = phi67;
								uint32_t phi_in78 = phi68;
								uint32_t phi_in79 = phi69;
								uint32_t phi80 = phi73;
								uint32_t phi81 = phi53;
								uint64_t phi82 = phi47;
								phi83 = phi_in75;
								uint64_t phi84 = phi76;
								uint64_t phi_in85 = phi54;
								uint64_t phi86 = phi84;
								uint32_t phi87 = phi_in66;
								uint32_t phi88 = phi_in77;
								uint32_t phi89 = phi_in78;
								uint32_t phi90 = phi_in79;
								uint32_t phi91 = phi70;
								uint32_t phi92 = phi_in71;
								uint32_t phi93 = phi_in72;
								phi52 = phi80;
								phi_in94 = phi_in74;
								phi_in95 = phi81;
								phi_in96 = phi82;
								phi_in97 = phi_in85 & 0xffffffff;
								int64_t anon99 = (__sext int64_t)*(uint32_t*)(phi83 + phi84 + 6301632);
								uint32_t* anon98 = (uint32_t*)((anon99 << 2) + 6300992);
								if (*(uint32_t*)(phi82 + 24) < *anon98)
								{
									uint32_t phi101;
									uint64_t phi354;
									*anon98 = *(uint32_t*)(phi82 + 28);
									uint32_t phi100 = phi_in78;
									uint32_t anon102 = (uint32_t)phi_in85 + 8;
									phi101 = anon102;
									uint32_t phi_in103 = phi_in79;
									uint32_t phi104 = anon102;
									uint32_t phi105 = phi_in71;
									uint32_t phi106 = anon102;
									uint32_t phi107 = anon102;
									uint32_t phi_in108 = phi_in72;
									uint32_t phi109 = anon102;
									uint32_t phi110 = anon102;
									uint32_t phi111 = anon102;
									uint32_t phi112 = anon102;
									uint32_t phi_in113 = anon102;
									uint32_t phi114 = phi_in74;
									uint32_t phi_in115 = anon102;
									uint32_t phi116 = anon102;
									uint32_t phi117 = anon102;
									uint32_t phi_in118 = anon102;
									uint32_t phi_in119 = anon102;
									uint64_t phi120 = 0;
									uint64_t phi121 = anon99 * 12;
									uint64_t phi122 = phi_in85;
									do
									{
										uint32_t phi_in123 = phi100;
										uint32_t phi_in124 = phi101;
										uint32_t phi_in125 = phi70;
										uint32_t phi126 = phi105;
										uint32_t phi_in127 = phi106;
										uint32_t phi_in128 = phi107;
										uint32_t phi_in129 = phi109;
										uint32_t phi130 = phi110;
										uint32_t phi_in131 = phi111;
										uint32_t phi132 = phi80;
										uint32_t phi133 = phi112;
										uint32_t phi_in134 = phi114;
										uint32_t phi_in135 = phi116;
										uint32_t phi136 = phi81;
										uint64_t phi137 = phi84;
										uint64_t phi_in138 = phi82;
										uint64_t phi_in139 = phi120;
										uint64_t phi_in140 = phi121;
										uint32_t phi141 = phi_in66;
										uint32_t phi142 = phi_in77;
										uint32_t phi143 = phi_in123;
										uint32_t phi_in144 = phi_in124;
										uint32_t phi145 = phi_in103;
										uint32_t phi_in146 = phi104;
										uint32_t phi147 = phi_in125;
										phi_in71 = phi126;
										uint32_t phi148 = phi_in127;
										phi107 = phi_in128;
										uint32_t phi149 = phi_in108;
										uint32_t phi_in150 = phi_in129;
										uint32_t phi151 = phi130;
										phi111 = phi_in131;
										uint32_t phi152 = phi132;
										uint32_t phi153 = phi133;
										uint32_t phi154 = phi_in113;
										uint32_t phi155 = phi_in134;
										uint32_t phi156 = phi_in115;
										phi116 = phi_in135;
										uint32_t phi157 = phi136;
										uint64_t phi158 = phi137;
										uint32_t phi159 = phi117;
										uint32_t phi160 = phi_in118;
										uint32_t phi161 = phi_in119;
										uint64_t phi162 = phi_in138;
										uint64_t phi163 = phi122;
										int64_t anon165 = (__sext int64_t)*(uint32_t*)(phi_in139 + phi121 + 6301632);
										uint32_t* anon164 = (uint32_t*)((anon165 << 2) + 6300992);
										if (*(uint32_t*)(phi_in138 + 28) < *anon164)
										{
											uint64_t phi177;
											uint64_t phi179;
											*anon164 = *(uint32_t*)(phi_in138 + 40);
											*(uint32_t*)(phi_in138 + 120) = (uint32_t)phi122 + 9;
											uint64_t phi_in166 = 0;
											uint32_t phi_in167 = phi_in66;
											uint32_t phi_in168 = phi_in77;
											uint32_t phi169 = phi_in124;
											uint32_t phi_in170 = phi_in103;
											uint32_t phi171 = phi_in128;
											uint32_t phi172 = phi_in108;
											int64_t anon178 = (__sext int64_t)*(uint32_t*)(phi179 + anon165 * 12 + 6301632);
											int64_t anon176 = (__sext int64_t)*(uint32_t*)(phi177 + anon178 * 12 + 6301632);
											int64_t anon175 = anon176 * 12;
											int64_t anon174 = (__sext int64_t)*(uint32_t*)(anon175 + 6301636);
											uint32_t* anon173 = (uint32_t*)((anon174 << 2) + 6300992);
											*anon173 = phi_in131;
											uint32_t phi180 = phi_in113;
											uint32_t phi_in181 = phi_in134;
											uint32_t phi182 = phi_in115;
											uint32_t phi183 = phi_in135;
											uint64_t phi184 = phi_in139;
											uint64_t phi_in185 = phi121;
											uint32_t phi186 = phi_in118;
											uint32_t phi187 = phi_in119;
											uint64_t phi188 = phi_in138;
											uint64_t phi189 = phi122 & 0xffffffff;
											do
											{
												phi179 = phi_in166;
												uint32_t phi_in190 = phi169;
												uint32_t phi_in191 = phi104;
												uint32_t phi192 = phi126;
												uint32_t phi_in193 = phi172;
												uint32_t phi_in194 = phi130;
												uint32_t phi195 = phi132;
												uint32_t phi_in196 = phi133;
												uint32_t phi_in197 = phi180;
												uint32_t phi198 = phi182;
												uint32_t phi199 = phi183;
												uint64_t phi_in200 = phi184;
												uint32_t phi201 = phi136;
												uint64_t phi_in202 = phi137;
												uint32_t phi_in203 = phi117;
												uint32_t phi204 = phi187;
												uint64_t phi_in205 = phi189;
												uint32_t phi206 = phi_in168;
												uint32_t phi207 = phi_in123;
												uint32_t phi208 = phi_in190;
												uint32_t phi209 = phi_in170;
												phi104 = phi_in191;
												phi126 = phi192;
												uint32_t phi210 = phi_in127;
												uint32_t phi211 = phi171;
												uint32_t phi212 = phi_in193;
												uint32_t phi213 = phi_in129;
												uint32_t phi214 = phi_in194;
												phi_in131 = *anon173;
												uint32_t phi215 = phi195;
												uint32_t phi216 = phi_in196;
												phi180 = phi_in197;
												phi_in134 = phi_in181;
												phi183 = phi199;
												uint64_t phi217 = phi_in200;
												uint32_t phi218 = phi201;
												uint64_t phi219 = phi_in202;
												uint64_t phi_in220 = phi_in185;
												phi159 = phi_in203;
												uint32_t phi221 = phi186;
												uint32_t phi222 = phi204;
												phi_in138 = phi188;
												uint64_t phi_in223 = phi_in205;
												uint32_t* anon224 = (uint32_t*)((anon178 << 2) + 6300992);
												if (*(uint32_t*)(phi188 + 40) < *anon224)
												{
													*anon224 = *(uint32_t*)(phi188 + 44);
													uint64_t phi_in225 = 0;
													uint32_t phi_in226 = phi_in167;
													uint32_t phi_in227 = phi_in168;
													uint32_t phi228 = phi_in123;
													uint32_t phi229 = phi_in190;
													uint32_t phi230 = phi_in170;
													uint32_t phi231 = phi_in191;
													uint32_t phi232 = phi_in125;
													uint32_t phi_in233 = phi_in127;
													uint32_t phi234 = phi_in193;
													uint32_t phi235 = phi_in129;
													uint32_t phi236 = phi_in194;
													uint32_t phi_in237 = phi_in196;
													uint32_t phi238 = phi198;
													uint64_t phi239 = phi_in200;
													uint64_t phi240 = phi_in202;
													*(uint64_t*)(phi188 + 112) = phi_in185;
													uint32_t phi241 = phi_in203;
													do
													{
														phi177 = phi_in225;
														uint32_t phi_in242 = phi230;
														uint32_t phi243 = phi231;
														phi_in125 = phi232;
														uint32_t phi244 = phi192;
														uint32_t phi245 = phi171;
														uint32_t phi246 = phi234;
														*(uint32_t*)(phi188 + 124) = phi235;
														uint32_t phi_in247 = phi195;
														uint32_t phi_in248 = phi_in197;
														uint32_t phi249 = phi_in181;
														uint32_t phi250 = phi238;
														uint32_t phi_in251 = phi199;
														uint64_t phi252 = phi239;
														uint32_t phi_in253 = phi201;
														*(uint64_t*)(phi188 + 104) = phi240;
														uint32_t phi254 = phi241;
														uint32_t phi_in255 = phi186;
														uint32_t phi256 = phi204;
														phi_in223 = phi_in205;
														phi_in167 = phi_in226;
														uint32_t phi257 = phi_in227;
														uint32_t phi258 = phi229;
														uint32_t phi259 = phi_in242;
														uint32_t phi260 = phi243;
														uint32_t phi261 = phi244;
														phi_in127 = phi_in233;
														uint32_t phi262 = phi245;
														uint32_t phi263 = phi246;
														phi235 = *(uint32_t*)(phi188 + 124);
														uint32_t phi264 = phi236;
														uint32_t phi265 = *anon173;
														phi195 = phi_in247;
														phi216 = phi_in237;
														uint32_t phi266 = phi249;
														uint32_t phi267 = phi250;
														uint32_t phi268 = phi_in251;
														uint32_t phi269 = phi_in253;
														uint64_t phi270 = *(uint64_t*)(phi188 + 104);
														uint64_t phi271 = *(uint64_t*)(phi188 + 112);
														uint32_t phi272 = phi254;
														uint32_t phi273 = phi_in255;
														uint32_t phi274 = phi256;
														uint32_t* anon275 = (uint32_t*)((anon176 << 2) + 6300992);
														if (*(uint32_t*)(phi188 + 44) < *anon275)
														{
															*anon275 = *(uint32_t*)(phi188 + 64);
															uint32_t phi276 = phi_in226;
															uint32_t phi277 = phi_in227;
															uint32_t phi278 = phi228;
															uint64_t phi279 = phi188;
															uint32_t phi_in280 = phi_in242;
															uint32_t phi281 = phi_in125;
															uint32_t phi282 = phi244;
															uint32_t phi283 = phi_in233;
															uint32_t phi284 = phi245;
															uint32_t phi285 = phi246;
															uint32_t phi286 = *(uint32_t*)(phi188 + 124);
															uint32_t phi_in287 = phi236;
															uint32_t phi288 = *anon173;
															uint32_t phi289 = phi_in247;
															uint32_t phi_in290 = phi_in237;
															*(uint64_t*)(phi291 + 80) = phi252;
															uint32_t phi_in292 = phi_in253;
															*(uint64_t*)(phi291 + 96) = *(uint64_t*)(phi188 + 104);
															uint64_t phi293 = *(uint64_t*)(phi188 + 112);
															uint32_t phi_in294 = phi_in255;
															uint64_t phi295 = phi_in223;
															if (*(uint32_t*)(phi188 + 64) < *anon173)
															{
																uint32_t phi_in296 = phi_in226;
																uint32_t phi297 = phi228;
																uint32_t phi298 = phi229;
																uint32_t phi299 = phi_in242;
																uint32_t phi300 = phi243;
																phi232 = phi_in125;
																*(uint32_t*)(phi301 + 124) = phi_in233;
																uint64_t phi301 = phi188;
																uint64_t phi302 = anon174;
																uint32_t phi303 = phi_in247;
																uint32_t phi304 = phi249;
																*(uint64_t*)(phi301 + 88) = phi252;
																uint32_t phi_in305 = phi_in253;
																*(uint64_t*)(phi301 + 104) = *(uint64_t*)(phi188 + 104);
																uint64_t phi306 = *(uint64_t*)(phi188 + 112);
																uint64_t phi307 = phi_in223;
																if (phi236 < *anon173)
																{
																	*(uint32_t*)(phi188 + 96) = phi246;
																	*(uint64_t*)(phi188 + 88) = phi252;
																	*(uint64_t*)(phi188 + 80) = anon174;
																	w(4197873, anon12, (__sext int64_t)*anon173, (__zext uint64_t)*anon173);
																	phi_in296 = *(uint32_t*)(arg1 - 96);
																	phi_in227 = *(uint32_t*)(arg1 - 96);
																	phi297 = *(uint32_t*)(arg1 - 96);
																	phi298 = *(uint32_t*)(arg1 - 68);
																	phi299 = *(uint32_t*)(arg1 - 96);
																	phi300 = *(uint32_t*)(arg1 - 68);
																	phi232 = *(uint32_t*)(arg1 - 96);
																	phi244 = *(uint32_t*)(arg1 - 96);
																	*(uint32_t*)(phi301 + 124) = *(uint32_t*)(arg1 - 68);
																	phi301 = anon12;
																	phi245 = *(uint32_t*)(arg1 - 68);
																	phi302 = *(uint64_t*)(arg1 - 112);
																	phi246 = *(uint32_t*)(arg1 - 96);
																	phi303 = *(uint32_t*)(arg1 - 96);
																	phi304 = *(uint32_t*)(arg1 - 96);
																	*(uint64_t*)(phi301 + 88) = *(uint64_t*)(arg1 - 104);
																	phi_in305 = *(uint32_t*)(arg1 - 96);
																	*(uint64_t*)(phi301 + 104) = *(uint64_t*)(arg1 - 88);
																	phi306 = *(uint64_t*)(arg1 - 80);
																	phi307 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
																}
																uint32_t phi_in308 = phi297;
																phi229 = phi298;
																*(uint32_t*)(phi309 + 88) = phi299;
																uint32_t phi310 = phi300;
																*(uint32_t*)(phi301 + 96) = phi232;
																uint32_t phi_in311 = phi244;
																uint64_t phi312 = phi302;
																uint32_t phi313 = phi246;
																uint32_t phi_in314 = phi303;
																uint32_t phi315 = phi304;
																*(uint64_t*)(phi301 + 112) = phi306;
																uint64_t phi_in316 = phi307;
																uint32_t phi317 = phi_in296;
																phi277 = phi_in227;
																uint32_t phi318 = phi_in308;
																uint64_t phi309 = phi301;
																uint32_t phi319 = *(uint32_t*)(phi301 + 96);
																uint32_t phi_in320 = phi_in311;
																phi289 = phi_in314;
																uint64_t phi321 = *(uint64_t*)(phi301 + 88);
																uint32_t phi_in322 = phi_in305;
																uint64_t phi323 = *(uint64_t*)(phi301 + 104);
																uint64_t phi324 = *(uint64_t*)(phi301 + 112);
																uint64_t phi_in325 = phi_in316;
																int64_t anon326 = (__sext int64_t)*(uint32_t*)(phi312 * 12 + 6301636);
																if (phi245 < *(uint32_t*)((anon326 << 2) + 6300992))
																{
																	*(uint64_t*)(phi301 + 80) = phi312;
																	w(4197793, anon12, anon326, (__zext uint64_t)*(uint32_t*)(phi301 + 120));
																	phi317 = *(uint32_t*)(arg1 - 96);
																	phi277 = *(uint32_t*)(arg1 - 96);
																	phi318 = *(uint32_t*)(arg1 - 96);
																	phi229 = alloca1.field14;
																	*(uint32_t*)(phi309 + 88) = *(uint32_t*)(arg1 - 96);
																	phi309 = anon12;
																	phi310 = alloca1.field14;
																	phi319 = *(uint32_t*)(arg1 - 96);
																	phi_in320 = *(uint32_t*)(arg1 - 96);
																	phi312 = *(uint64_t*)(arg1 - 112);
																	phi313 = *(uint32_t*)(arg1 - 96);
																	phi289 = *(uint32_t*)(arg1 - 96);
																	phi315 = *(uint32_t*)(arg1 - 96);
																	phi321 = *(uint64_t*)(arg1 - 104);
																	phi_in322 = *(uint32_t*)(arg1 - 96);
																	phi323 = *(uint64_t*)(arg1 - 88);
																	phi324 = *(uint64_t*)(arg1 - 80);
																	phi_in325 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
																}
																uint32_t phi_in327 = phi317;
																phi278 = phi318;
																phi250 = phi310;
																phi281 = phi319;
																phi285 = phi313;
																phi249 = phi315;
																*(uint64_t*)(phi309 + 80) = phi321;
																*(uint64_t*)(phi309 + 96) = phi323;
																*(uint64_t*)(phi309 + 104) = phi324;
																phi276 = phi_in327;
																phi279 = phi309;
																phi_in280 = *(uint32_t*)(phi309 + 88);
																phi243 = phi250;
																phi282 = phi_in320;
																phi283 = phi250;
																phi284 = phi250;
																phi286 = phi250;
																phi_in287 = phi250;
																phi288 = phi250;
																phi_in290 = phi250;
																phi_in248 = phi250;
																phi_in251 = phi250;
																*(uint64_t*)(phi291 + 80) = *(uint64_t*)(phi309 + 80);
																phi_in292 = phi_in322;
																*(uint64_t*)(phi291 + 96) = *(uint64_t*)(phi309 + 96);
																phi293 = *(uint64_t*)(phi309 + 104);
																phi254 = phi250;
																phi_in294 = phi250;
																phi256 = phi250;
																phi295 = phi_in325;
																int64_t anon328 = (__sext int64_t)*(uint32_t*)(phi312 * 12 + 6301640);
																if (phi250 < *(uint32_t*)((anon328 << 2) + 6300992))
																{
																	*(uint32_t*)(phi309 + 112) = phi250;
																	w(4197395, anon12, anon328, (__zext uint64_t)*(uint32_t*)(phi309 + 120));
																	phi276 = *(uint32_t*)(arg1 - 104);
																	phi277 = *(uint32_t*)(arg1 - 104);
																	phi278 = *(uint32_t*)(arg1 - 104);
																	phi229 = *(uint32_t*)(arg1 - 80);
																	phi279 = anon12;
																	phi_in280 = *(uint32_t*)(arg1 - 104);
																	phi243 = *(uint32_t*)(arg1 - 80);
																	phi281 = *(uint32_t*)(arg1 - 104);
																	phi282 = *(uint32_t*)(arg1 - 104);
																	phi283 = *(uint32_t*)(arg1 - 80);
																	phi284 = *(uint32_t*)(arg1 - 80);
																	phi285 = *(uint32_t*)(arg1 - 104);
																	phi286 = *(uint32_t*)(arg1 - 80);
																	phi_in287 = *(uint32_t*)(arg1 - 80);
																	phi288 = *(uint32_t*)(arg1 - 80);
																	phi289 = *(uint32_t*)(arg1 - 104);
																	phi_in290 = *(uint32_t*)(arg1 - 80);
																	phi_in248 = *(uint32_t*)(arg1 - 80);
																	phi249 = *(uint32_t*)(arg1 - 104);
																	phi250 = *(uint32_t*)(arg1 - 80);
																	phi_in251 = *(uint32_t*)(arg1 - 80);
																	*(uint64_t*)(phi291 + 80) = *(uint64_t*)(arg1 - 112);
																	phi_in292 = *(uint32_t*)(arg1 - 104);
																	*(uint64_t*)(phi291 + 96) = *(uint64_t*)(arg1 - 96);
																	phi293 = *(uint64_t*)(arg1 - 88);
																	phi254 = *(uint32_t*)(arg1 - 80);
																	phi_in294 = *(uint32_t*)(arg1 - 80);
																	phi256 = *(uint32_t*)(arg1 - 80);
																	phi295 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
																}
															}
															uint32_t phi_in329 = phi276;
															*(uint32_t*)(phi291 + 88) = phi277;
															uint32_t phi330 = phi278;
															*(uint32_t*)(phi291 + 112) = phi229;
															uint64_t phi291 = phi279;
															phi259 = phi_in280;
															phi260 = phi243;
															phi_in125 = phi281;
															uint32_t phi331 = phi282;
															uint32_t phi_in332 = phi283;
															phi262 = phi284;
															uint32_t phi333 = phi285;
															uint32_t phi_in334 = phi286;
															phi265 = phi288;
															uint32_t phi_in335 = phi249;
															uint32_t phi_in336 = phi250;
															uint64_t phi337 = *(uint64_t*)(phi291 + 80);
															phi270 = *(uint64_t*)(phi291 + 96);
															*(uint64_t*)(phi291 + 104) = phi293;
															uint32_t phi_in338 = phi254;
															phi274 = phi256;
															uint64_t phi_in339 = phi295;
															phi_in167 = phi_in329;
															phi257 = *(uint32_t*)(phi291 + 88);
															phi228 = phi330;
															phi258 = *(uint32_t*)(phi291 + 112);
															phi261 = phi331;
															phi_in127 = phi_in332;
															phi263 = phi333;
															phi235 = phi_in334;
															phi264 = phi_in287;
															phi195 = phi289;
															phi216 = phi_in290;
															phi266 = phi_in335;
															phi267 = phi_in336;
															phi268 = phi_in251;
															phi252 = phi337;
															phi269 = phi_in292;
															phi271 = *(uint64_t*)(phi291 + 104);
															phi272 = phi_in338;
															phi273 = phi_in294;
															phi188 = phi291;
															phi_in223 = phi_in339;
															int64_t anon341 = (__sext int64_t)*(uint32_t*)(anon175 + 6301640);
															uint32_t* anon340 = (uint32_t*)((anon341 << 2) + 6300992);
															if (*(uint32_t*)(phi291 + 64) < *anon340)
															{
																*anon340 = *(uint32_t*)(phi291 + 112);
																*(uint32_t*)(phi291 + 88) = phi_in329;
																uint32_t phi_in342 = *(uint32_t*)(phi291 + 88);
																uint32_t phi343 = *(uint32_t*)(phi291 + 112);
																uint32_t phi_in344 = phi259;
																uint32_t phi345 = phi_in125;
																uint32_t phi_in346 = phi_in335;
																uint32_t phi_in347 = phi_in292;
																uint64_t phi348 = phi270;
																*(uint64_t*)(phi291 + 104) = *(uint64_t*)(phi291 + 104);
																phi_in223 = phi_in339;
																int64_t anon350 = anon341 * 12;
																int64_t anon349 = (__sext int64_t)*(uint32_t*)(anon350 + 6301636);
																if (*(uint32_t*)(phi291 + 112) < *(uint32_t*)((anon349 << 2) + 6300992))
																{
																	*(uint64_t*)(phi291 + 96) = phi270;
																	*(uint64_t*)(phi291 + 80) = phi337;
																	w(4197948, anon12, anon349, (__zext uint64_t)*(uint32_t*)(phi291 + 120));
																	*(uint32_t*)(phi291 + 88) = *(uint32_t*)(arg1 - 104);
																	phi_in342 = *(uint32_t*)(arg1 - 104);
																	phi330 = *(uint32_t*)(arg1 - 104);
																	phi343 = *(uint32_t*)(arg1 - 80);
																	phi_in344 = *(uint32_t*)(arg1 - 104);
																	phi345 = *(uint32_t*)(arg1 - 104);
																	phi331 = *(uint32_t*)(arg1 - 104);
																	phi333 = *(uint32_t*)(arg1 - 104);
																	phi289 = *(uint32_t*)(arg1 - 104);
																	phi_in346 = *(uint32_t*)(arg1 - 104);
																	phi337 = *(uint64_t*)(arg1 - 112);
																	phi_in347 = *(uint32_t*)(arg1 - 104);
																	phi348 = *(uint64_t*)(arg1 - 96);
																	*(uint64_t*)(phi291 + 104) = *(uint64_t*)(arg1 - 88);
																	phi291 = anon12;
																	phi_in223 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
																}
																phi_in167 = *(uint32_t*)(phi291 + 88);
																phi228 = phi330;
																phi274 = phi343;
																phi_in125 = phi345;
																uint32_t phi_in351 = phi331;
																phi263 = phi333;
																uint32_t phi_in352 = phi289;
																*(uint64_t*)(phi291 + 80) = phi337;
																*(uint64_t*)(phi291 + 96) = phi348;
																phi257 = phi_in342;
																phi258 = phi274;
																phi259 = phi_in344;
																phi260 = phi274;
																phi261 = phi_in351;
																phi_in127 = phi274;
																phi262 = phi274;
																phi235 = phi274;
																phi264 = phi274;
																phi265 = phi274;
																phi195 = phi_in352;
																phi216 = phi274;
																phi_in248 = phi274;
																phi266 = phi_in346;
																phi267 = phi274;
																phi268 = phi274;
																phi252 = *(uint64_t*)(phi291 + 80);
																phi269 = phi_in347;
																phi270 = *(uint64_t*)(phi291 + 96);
																phi271 = *(uint64_t*)(phi291 + 104);
																phi272 = phi274;
																phi273 = phi274;
																phi188 = phi291;
																int64_t anon353 = (__sext int64_t)*(uint32_t*)(anon350 + 6301640);
																if (phi274 < *(uint32_t*)((anon353 << 2) + 6300992))
																{
																	*(uint32_t*)(phi291 + 112) = phi274;
																	*(uint32_t*)(phi291 + 88) = phi_in167;
																	w(4197231, anon12, anon353, (__zext uint64_t)*(uint32_t*)(phi291 + 120));
																	phi_in167 = alloca1.field8;
																	phi257 = alloca1.field8;
																	phi228 = alloca1.field8;
																	phi258 = alloca1.field12;
																	phi259 = alloca1.field8;
																	phi260 = alloca1.field12;
																	phi_in125 = alloca1.field8;
																	phi261 = alloca1.field8;
																	phi_in127 = alloca1.field12;
																	phi262 = alloca1.field12;
																	phi263 = alloca1.field8;
																	phi235 = alloca1.field12;
																	phi264 = alloca1.field12;
																	phi265 = alloca1.field12;
																	phi195 = alloca1.field8;
																	phi216 = alloca1.field12;
																	phi_in248 = alloca1.field12;
																	phi266 = alloca1.field8;
																	phi267 = alloca1.field12;
																	phi268 = alloca1.field12;
																	phi252 = alloca1.field7;
																	phi269 = alloca1.field8;
																	phi270 = alloca1.field10;
																	phi271 = alloca1.field11;
																	phi272 = alloca1.field12;
																	phi273 = alloca1.field12;
																	phi274 = alloca1.field12;
																	phi188 = anon12;
																	phi_in223 = (__zext uint64_t)alloca1.field8;
																}
															}
														}
														phi206 = phi257;
														phi207 = phi228;
														phi126 = phi261;
														phi211 = phi262;
														phi212 = phi263;
														phi_in134 = phi266;
														phi198 = phi267;
														phi218 = phi269;
														phi_in220 = phi271;
														phi159 = phi272;
														phi221 = phi273;
														phi222 = phi274;
														phi208 = phi258;
														phi209 = phi259;
														phi104 = phi260;
														phi_in125 = phi_in125;
														phi210 = phi_in127;
														phi213 = phi235;
														phi214 = phi264;
														phi_in131 = phi265;
														phi215 = phi195;
														phi180 = phi_in248;
														phi183 = phi268;
														phi217 = phi252;
														phi219 = phi270;
														phi_in138 = phi188;
														phi_in225 = phi177 + 4;
														phi_in226 = phi_in167;
														phi_in227 = phi206;
														phi228 = phi207;
														phi229 = phi258;
														phi230 = phi259;
														phi231 = phi260;
														phi232 = phi_in125;
														phi192 = phi126;
														phi_in233 = phi_in127;
														phi171 = phi211;
														phi234 = phi212;
														phi236 = phi264;
														*anon173 = phi265;
														phi_in237 = phi216;
														phi_in197 = phi_in248;
														phi_in181 = phi_in134;
														phi238 = phi198;
														phi199 = phi268;
														phi239 = phi252;
														phi201 = phi218;
														phi240 = phi270;
														*(uint64_t*)(phi188 + 112) = phi_in220;
														phi241 = phi159;
														phi186 = phi221;
														phi204 = phi222;
														phi_in205 = phi_in223;
													}
													while (phi177 != 8);
												}
												phi151 = phi214;
												phi153 = phi216;
												phi_in139 = phi217;
												phi158 = phi219;
												phi161 = phi222;
												phi_in140 = phi_in220;
												phi141 = phi_in167;
												phi142 = phi206;
												phi143 = phi207;
												phi_in144 = phi208;
												phi145 = phi209;
												phi_in146 = phi104;
												phi147 = phi_in125;
												phi_in71 = phi126;
												phi148 = phi210;
												phi107 = phi211;
												phi149 = phi212;
												phi_in150 = phi213;
												phi111 = phi_in131;
												phi152 = phi215;
												phi154 = phi180;
												phi155 = phi_in134;
												phi156 = phi198;
												phi116 = phi183;
												phi157 = phi218;
												phi160 = phi221;
												phi162 = phi_in138;
												phi163 = phi_in223;
												phi_in166 = phi179 + 4;
												phi_in168 = phi206;
												phi_in123 = phi207;
												phi169 = phi208;
												phi_in170 = phi209;
												phi_in127 = phi210;
												phi171 = phi211;
												phi172 = phi212;
												phi_in129 = phi213;
												phi130 = phi151;
												*anon173 = phi_in131;
												phi132 = phi215;
												phi133 = phi153;
												phi_in181 = phi_in134;
												phi182 = phi198;
												phi184 = phi_in139;
												phi136 = phi218;
												phi137 = phi158;
												phi_in185 = phi_in220;
												phi117 = phi159;
												phi186 = phi221;
												phi187 = phi161;
												phi188 = phi_in138;
												phi189 = phi_in223;
											}
											while (phi179 != 8);
										}
										phi87 = phi141;
										phi89 = phi143;
										phi354 = phi_in139;
										phi_in95 = phi157;
										phi86 = phi158;
										phi88 = phi142;
										phi90 = phi145;
										phi91 = phi147;
										phi92 = phi_in71;
										phi93 = phi149;
										phi52 = phi152;
										phi_in94 = phi155;
										phi_in96 = phi162;
										phi_in97 = phi163;
										phi_in66 = phi87;
										phi_in77 = phi142;
										phi100 = phi89;
										phi101 = phi_in144;
										phi_in103 = phi145;
										phi104 = phi_in146;
										phi70 = phi147;
										phi105 = phi_in71;
										phi106 = phi148;
										phi_in108 = phi149;
										phi109 = phi_in150;
										phi110 = phi151;
										phi80 = phi152;
										phi112 = phi153;
										phi_in113 = phi154;
										phi114 = phi155;
										phi_in115 = phi156;
										phi81 = phi_in95;
										phi84 = phi86;
										phi117 = phi159;
										phi_in118 = phi160;
										phi_in119 = phi161;
										phi82 = phi162;
										phi120 = phi354 + 4;
										phi121 = phi_in140;
										phi122 = phi163;
									}
									while (phi354 != 8);
								}
								phi37 = phi87;
								phi55 = phi88;
								phi_in355 = phi89;
								phi_in356 = phi90;
								phi41 = phi91;
								phi57 = phi92;
								phi59 = phi93;
								phi_in66 = phi37;
								phi67 = phi55;
								phi68 = phi_in355;
								phi69 = phi_in356;
								phi70 = phi41;
								phi_in71 = phi57;
								phi_in72 = phi59;
								phi73 = phi52;
								phi_in74 = phi_in94;
								phi53 = phi_in95;
								phi47 = phi_in96;
								phi_in75 = phi83 + 4;
								phi76 = phi86;
								phi54 = phi_in97;
							}
							while (phi83 != 8);
							phi39 = phi_in355;
							phi56 = phi_in356;
							phi_in58 = *(uint64_t*)(phi_in96 + 72);
							phi_in60 = phi_in94;
							phi61 = phi_in95;
							phi62 = phi_in97;
							phi63 = phi_in96;
						}
						phi32 = phi57;
						phi357 = phi_in58;
						phi34 = phi63;
						phi_in38 = phi55;
						phi_in40 = phi56;
						phi42 = phi32;
						phi_in43 = phi59;
						phi44 = phi52;
						phi_in45 = phi_in60;
						phi29 = phi61;
						phi46 = phi62;
						*(uint64_t*)(phi47 + 72) = phi357 + 4;
						phi28 = phi34;
					}
					while (phi357 != 8);
					phi26 = *(uint32_t*)(phi34 + 68);
					phi21 = phi32;
					phi_in30 = *(uint64_t*)(phi34 + 56);
					phi22 = (__zext uint64_t)phi32;
					phi31 = *(uint32_t*)(phi34 + 68);
					phi33 = *(uint32_t*)(phi34 + 68);
				}
				phi_in358 = phi26;
				phi359 = phi_in30;
				phi_in360 = phi34;
				phi20 = phi_in358;
				phi23 = phi31;
				phi13 = phi32;
				phi5 = phi33;
				phi24 = phi359 + 4;
				phi25 = phi_in360;
			}
			while (phi359 != 8);
			phi16 = *(uint64_t*)(phi_in360 + 48);
			phi4 = phi21;
			phi17 = phi_in358;
			phi18 = (__zext uint64_t)phi21;
			phi8 = phi_in358;
			phi9 = phi21;
			phi_in19 = phi_in360;
		}
		phi5 = phi17;
		phi7 = phi18;
		phi10 = phi16 + 4;
		phi_in11 = phi_in19;
	}
	while (phi16 != 8);
	return;
}
void t(uint64_t arg0)
{
	struct { uint8_t field0[24]; uint64_t field1; } alloca1;
	uint32_t anon12;
	uint32_t anon21;
	alloca1.field1 = arg0;
	uint64_t phi_in2 = 4;
	do
	{
		uint64_t phi3;
		uint32_t* anon5;
		uint64_t anon6;
		uint32_t* anon11;
		do
		{
			do
			{
				phi3 = phi_in2;
				uint64_t anon4 = random();
				phi_in2 = phi3;
				uint64_t anon7 = anon4 << 32;
				anon6 = anon4 + (((anon4 & 0xffffffff) * 2290649225 + anon7 >> 32 >> 4) - (anon7 >> 32 >> 31)) * -30 << 32 >> 30;
				anon5 = (uint32_t*)(anon6 + 6301504);
			}
			while (*anon5 != 0);
			phi_in2 = phi3;
		}
		while (*(uint32_t*)(anon6 + 6300864) != 0);
		*anon5 = 1;
		do
		{
			uint64_t anon9;
			do
			{
				uint64_t anon8 = random();
				uint64_t anon10 = anon8 << 32;
				anon9 = anon8 + (((anon8 & 0xffffffff) * 2290649225 + anon10 >> 32 >> 4) - (anon10 >> 32 >> 31)) * -30 << 32 >> 30;
			}
			while (*(uint32_t*)(anon9 + 6301504) != 0);
			anon11 = (uint32_t*)(anon9 + 6300864);
		}
		while (*anon11 != 0);
		*anon11 = 1;
		anon12 = (uint32_t)phi3 - 1;
		phi_in2 = (__zext uint64_t)anon12;
	}
	while (anon12 != 0);
	uint64_t anon13 = random();
	uint64_t anon14 = anon13 << 32;
	w(4198271, (uint64_t)&alloca1, anon13 + (((anon13 & 0xffffffff) * 2290649225 + anon14 >> 32 >> 4) - (anon14 >> 32 >> 31)) * 4294967266 & 0xffffffff, 0);
	uint64_t phi_in15 = 3;
	do
	{
		uint64_t phi16;
		uint64_t anon18;
		uint32_t* anon20;
		do
		{
			do
			{
				do
				{
					do
					{
						phi16 = phi_in15;
						uint64_t anon17 = random();
						phi_in15 = phi16;
						uint64_t anon19 = anon17 << 32;
						anon18 = anon17 + (((anon17 & 0xffffffff) * 2290649225 + anon19 >> 32 >> 4) - (anon19 >> 32 >> 31)) * -30 << 32 >> 30;
					}
					while (*(uint32_t*)(anon18 + 6301504) != 0);
					phi_in15 = phi16;
				}
				while (*(uint32_t*)(anon18 + 6300864) != 0);
				phi_in15 = phi16;
				anon20 = (uint32_t*)(anon18 + 6301120);
			}
			while (*anon20 != 0);
			phi_in15 = phi16;
		}
		while (*(uint32_t*)(anon18 + 6300992) == 0);
		*anon20 = 1;
		anon21 = (uint32_t)phi16 - 1;
		phi_in15 = (__zext uint64_t)anon21;
	}
	while (anon21 != 0);
	while (true)
	{
		uint64_t anon22 = random();
		uint64_t anon23 = anon22 << 32;
		*(uint32_t*)0x60292c = (uint32_t)anon22 + (uint32_t)(((anon22 & 0xffffffff) * 2290649225 + anon23 >> 32 >> 4) - (anon23 >> 32 >> 31)) * 4294967266;
	}
}
void r(uint64_t arg0, uint64_t arg1)
{
	uint32_t phi_in2;
	uint32_t phi6;
	uint64_t phi1 = 0;
	uint64_t anon4 = arg1 << 32;
	uint32_t* anon3 = (uint32_t*)((anon4 >> 30) + 6301376);
	phi_in2 = *anon3;
	do
	{
		uint64_t phi_in5 = phi1;
		phi6 = phi_in2;
		if (phi6 != 0)
		{
			*anon3 = phi6 - 1;
			uint32_t phi_in7 = 3;
			uint32_t phi8 = phi_in7;
			uint64_t phi9 = phi_in5;
			uint64_t anon10 = random();
			uint64_t anon12 = phi9 + 1;
			uint32_t anon11 = (uint32_t)anon12;
			if (anon11 > 1001)
			{
				break;
			}
			else 
			{
				uint64_t anon14 = anon12 & 0xffffffff;
				uint32_t anon13 = phi8 - (__zext uint32_t)(anon11 == (uint32_t)(anon14 / 100 - (anon12 << 32 >> 32 >> 31)) * 100);
				phi_in7 = anon13;
				phi_in5 = anon14;
				uint64_t anon16 = anon10 << 32;
				uint32_t anon15 = (uint32_t)anon10 + (uint32_t)(((anon10 & 0xffffffff) * 2290649225 + anon16 >> 36) - (anon16 >> 32 >> 31)) * 4294967266;
				uint64_t anon18 = anon4 >> 32;
				uint32_t anon17 = (uint32_t)anon18;
				if (anon15 != anon17)
				{
					phi_in7 = anon13;
					phi_in5 = anon14;
					uint32_t* anon19 = (uint32_t*)(((__sext int64_t)anon15 << 2) + 6301376);
					if ((*anon19 >> 31 | (__zext uint32_t)(*anon19 == 0)) == 0)
					{
						phi_in7 = anon13;
						phi_in5 = anon14;
						uint64_t anon20 = anon18 * 12;
						if (!(*(uint32_t*)(anon20 + 6301640) == anon15 | anon13 > *anon19))
						{
							phi_in7 = anon13;
							phi_in5 = anon14;
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
		uint64_t phi21;
		uint32_t anon22;
		uint32_t anon34;
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
		uint64_t phi10 = 6301636;
		do
		{
			uint32_t phi13;
			uint32_t phi14;
			uint32_t phi15;
			uint32_t* anon16;
			uint32_t phi17;
			uint32_t phi18;
			uint32_t phi_in19;
			uint32_t* anon11 = (uint32_t*)((phi10 & 0xc) + 4);
			uint32_t* anon12 = (uint32_t*)phi10;
			if (*anon11 < *anon12)
			{
				*anon12 = *anon11;
				*anon11 = *anon12;
				phi13 = *anon12;
				phi14 = *anon11;
				anon16 = (uint32_t*)(phi10 - 4);
				phi15 = *anon16;
				phi17 = *anon12;
				phi18 = *anon11;
			}
			else 
			{
				phi13 = *anon11;
				phi14 = *anon12;
				phi_in19 = *anon16;
			}
			if (*anon11 < *anon12 && *anon11 < *anon16 || *anon11 >= *anon12 && *anon12 < *anon16)
			{
				phi17 = phi13;
				*anon16 = phi14;
				*anon12 = *anon16;
				phi15 = *anon16;
				phi18 = *anon16;
			}
			if (*anon11 < *anon12 && *anon11 < *anon16 || *anon11 >= *anon12 && *anon12 < *anon16 || *anon11 >= *anon16 && *anon11 < *anon12)
			{
				phi_in19 = phi15;
				*anon12 = phi17;
				*anon11 = phi18;
				if (*anon12 < *anon11)
				{
					phi_in19 = *anon16;
				}
			}
			uint32_t phi20 = phi_in19;
			phi21 = 6301636;
			anon22 = phi20 + 1 & 0xff;
			if (anon22 != 0)
			{
				phi10 = phi10 + 12;
			}
		}
		while (anon22 != 0);
		do
		{
			uint32_t phi25;
			uint32_t phi26;
			uint32_t phi27;
			uint32_t* anon28;
			uint32_t phi29;
			uint32_t phi_in30;
			uint32_t* anon23 = (uint32_t*)(phi21 + 4);
			uint32_t* anon24 = (uint32_t*)phi21;
			if (*anon23 < *anon24)
			{
				*anon24 = *anon23;
				*anon23 = *anon24;
				phi25 = *anon24;
				phi26 = *anon23;
				anon28 = (uint32_t*)((phi21 & 0xc) - 4);
				phi27 = *anon28;
				*anon24 = *anon24;
				phi29 = *anon23;
			}
			else 
			{
				phi25 = *anon23;
				phi26 = *anon24;
				phi_in30 = *anon28;
			}
			if (*anon23 < *anon24 && *anon23 < *anon28 || *anon23 >= *anon24 && *anon24 < *anon28)
			{
				uint32_t phi_in31 = phi25;
				uint32_t phi_in32 = phi26;
				*anon24 = *anon28;
				*anon28 = phi_in32;
				phi27 = phi_in32;
				*anon24 = phi_in31;
				phi29 = *anon28;
			}
			if (*anon23 < *anon24 && *anon23 < *anon28 || *anon23 >= *anon24 && *anon24 < *anon28 || *anon23 >= *anon28 && *anon23 < *anon24)
			{
				phi_in30 = phi27;
				*anon23 = phi29;
				if (*anon24 < *anon23)
				{
					phi_in30 = *anon28;
				}
			}
			uint32_t phi33 = phi_in30;
			anon34 = phi33 + 1 & 0xff;
			if (anon34 != 0)
			{
				phi21 = phi21 + 12;
			}
		}
		while (anon34 != 0);
	}
}
void q(uint64_t arg0, uint64_t arg1)
{
	struct { uint8_t field0[56]; uint64_t field1; } alloca1;
	uint64_t phi4;
	uint32_t phi_in5;
	uint32_t phi6;
	uint32_t* anon7;
	uint32_t anon8;
	struct _IO_FILE** anon9;
	uint32_t phi15;
	alloca1.field1 = arg0;
	uint32_t dispatch2 = 0;
	__indirect_jump(*(uint64_t*)0x6023f8);
	uint32_t* anon3 = (uint32_t*)0x602928;
	if (*anon3 != 0)
	{
		*anon3 = *anon3 - 1;
		printf((uint8_t*)0x401ca7);
		phi4 = arg1 & 0xffffffff;
		phi_in5 = 0;
		phi6 = phi_in5;
		anon7 = (uint32_t*)0x602490;
		*anon7 = *anon7 + phi6;
		anon9 = (struct _IO_FILE**)0x602480;
		anon8 = _IO_getc(*anon9);
	}
	while (true)
	{
		uint32_t dispatch11;
		uint8_t anon12;
		uint32_t anon17;
		uint64_t anon18;
		uint8_t* anon19;
		uint64_t anon20;
		dispatch2 = 2;
		if ((*anon3 >> 31 | (__zext uint32_t)(*anon3 == 0)) != 0)
		{
			uint16_t** anon10 = __ctype_b_loc();
			dispatch11 = 0;
			uint64_t* anon13 = (uint64_t*)anon10;
			anon12 = *(uint8_t*)(*anon13 + ((__sext int64_t)(uint8_t)anon8 << 1 | 1)) & 8;
			if (anon12 == 0)
			{
				break;
			}
			else 
			{
				uint32_t anon14 = _IO_getc(*anon9);
				uint32_t anon16 = (anon8 << 24 >> 24) - 48;
				phi15 = anon16;
				if ((*(uint8_t*)(*anon13 + ((__zext uint64_t)anon14 << 56 >> 55 | 1)) & 8) != 0)
				{
					anon17 = anon14 >> 8;
					phi15 = (anon17 << 24 >> 24) + anon16 * 10 - 48;
				}
				anon18 = (phi4 << 32 >> 32) * 12;
				if (*(uint32_t*)(anon18 + 6301632) == phi15 || *(uint32_t*)(anon18 + 6301632) != phi15 && phi15 == *(uint32_t*)(anon18 + 6301636) || *(uint32_t*)(anon18 + 6301632) != phi15 && phi15 != *(uint32_t*)(anon18 + 6301636) && phi15 == *(uint32_t*)(anon18 + 6301640))
				{
					dispatch2 = 4;
				}
			}
		}
		if (dispatch2 == 4)
		{
			puts((uint8_t*)0x401cd5);
			*anon7 = *anon3 * 100 + *anon7 + 500;
			anon19 = (uint8_t*)0x401cf1;
			printf(anon19);
			exit(0);
		}
		if ((*anon3 >> 31 | (__zext uint32_t)(*anon3 == 0)) != 0 && anon12 != 0)
		{
			if (*(uint32_t*)(((__sext int64_t)phi15 << 2) + 6300992) != 0 && (*(uint32_t*)(anon18 + 6301632) == phi15 || *(uint32_t*)(anon18 + 6301632) != phi15 && phi15 == *(uint32_t*)(anon18 + 6301636) || *(uint32_t*)(anon18 + 6301632) != phi15 && phi15 != *(uint32_t*)(anon18 + 6301636) && phi15 == *(uint32_t*)(anon18 + 6301640)))
			{
				phi4 = (__zext uint64_t)phi15;
			}
			if (*(uint32_t*)(anon18 + 6301632) != phi15 && phi15 != *(uint32_t*)(anon18 + 6301636) && phi15 != *(uint32_t*)(anon18 + 6301640))
			{
				anon20 = random();
				dispatch2 = 1;
			}
		}
		if (dispatch2 == 1)
		{
			puts((uint8_t*)0x401dd0);
			*anon7 = *anon7 - 100;
			printf(anon19);
			exit(0);
		}
		if ((*anon3 >> 31 | (__zext uint32_t)(*anon3 == 0)) != 0 && anon12 != 0)
		{
			uint32_t anon21 = (uint32_t)anon20 + ((uint32_t)((anon20 & 0xffffffff) / 3) - (uint32_t)(anon20 << 32 >> 32 >> 31)) * 4294967293;
			if (*(uint32_t*)(anon18 + 6301632) != phi15 && phi15 != *(uint32_t*)(anon18 + 6301636) && phi15 != *(uint32_t*)(anon18 + 6301640) && anon21 != 1)
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
				w(4199968, (uint64_t)&alloca1, anon22 + (((anon22 & 0xffffffff) * 2290649225 + anon23 >> 32 >> 4) - (anon23 >> 32 >> 31)) * 4294967266 & 0xffffffff, 0);
				*anon7 = *anon7 - 100;
				phi4 = phi4;
			}
			if (*(uint32_t*)(((__sext int64_t)phi15 << 2) + 6300992) != 0 && *(uint32_t*)(anon18 + 6301632) == phi15 || *(uint32_t*)(anon18 + 6301632) != phi15 && *(uint32_t*)(((__sext int64_t)phi15 << 2) + 6300992) != 0 && phi15 == *(uint32_t*)(anon18 + 6301636) || *(uint32_t*)(anon18 + 6301632) != phi15 && phi15 != *(uint32_t*)(anon18 + 6301636) && *(uint32_t*)(((__sext int64_t)phi15 << 2) + 6300992) != 0 && phi15 == *(uint32_t*)(anon18 + 6301640) || *(uint32_t*)(anon18 + 6301632) != phi15 && phi15 != *(uint32_t*)(anon18 + 6301636) && phi15 != *(uint32_t*)(anon18 + 6301640) && anon21 != 1)
			{
				dispatch2 = 2;
			}
			if ((uint8_t)anon17 != 10 && (*(uint32_t*)(((__sext int64_t)phi15 << 2) + 6300992) != 0 && *(uint32_t*)(anon18 + 6301632) == phi15 || *(uint32_t*)(anon18 + 6301632) != phi15 && *(uint32_t*)(((__sext int64_t)phi15 << 2) + 6300992) != 0 && phi15 == *(uint32_t*)(anon18 + 6301636) || *(uint32_t*)(anon18 + 6301632) != phi15 && phi15 != *(uint32_t*)(anon18 + 6301636) && *(uint32_t*)(((__sext int64_t)phi15 << 2) + 6300992) != 0 && phi15 == *(uint32_t*)(anon18 + 6301640) || *(uint32_t*)(anon18 + 6301632) != phi15 && phi15 != *(uint32_t*)(anon18 + 6301636) && phi15 != *(uint32_t*)(anon18 + 6301640) && anon21 != 1))
			{
				phi_in5 = phi6 - 20;
				dispatch11 = 1;
				dispatch2 = 3;
				if (phi6 != 196)
				{
					break;
				}
			}
		}
		if (dispatch2 == 3)
		{
			return;
		}
		if (dispatch2 == 2)
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
	uint32_t* anon30;
	uint64_t anon31;
	struct _IO_FILE** anon35;
	bool anon36;
	uint16_t** phi39;
	uint8_t anon40;
	bool anon41;
	bool anon42;
	bool anon43;
	uint8_t anon45;
	int64_t anon46;
	uint32_t phi48;
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
	do
	{
		uint32_t phi17;
		uint32_t* anon20;
		uint16_t** anon44;
		uint32_t* anon13 = (uint32_t*)0x602928;
		*anon13 = *anon13 + 1;
		puts((uint8_t*)0x401d17);
		uint32_t* anon14 = (uint32_t*)0x602490;
		*anon14 = *anon14 + 20;
		uint64_t anon15 = phi11 << 2;
		*(uint32_t*)(anon15 + 6301120) = 0;
		uint32_t dispatch16 = 0;
		dispatch16 = 0;
		if (dispatch16 == 0)
		{
			puts((uint8_t*)0x401d2a);
			phi17 = *anon14 - 100;
		}
		if (*(uint32_t*)(anon15 + 6300992) != 0)
		{
			dispatch16 = 1;
		}
		if (dispatch16 == 1)
		{
			puts((uint8_t*)0x401d36);
			phi17 = *anon14 - 50;
		}
		if (dispatch16 == 1 || dispatch16 == 0)
		{
			*anon14 = phi17;
		}
		uint32_t anon18 = (uint32_t)phi12;
		uint32_t* anon19 = (uint32_t*)0x60292c;
		if (*(uint32_t*)(anon15 + 6300992) != 0 && *(uint32_t*)(anon15 + 6300864) == 0 && anon18 == *anon19)
		{
			if (*anon13 != 0)
			{
				anon20 = (uint32_t*)0x60248c;
				*anon20 = *anon20 + 1;
				*anon13 = *anon13 - 1;
				*anon14 = *anon14 - 20;
				puts((uint8_t*)0x401d48);
			}
			dispatch16 = 3;
			if (*anon20 == 3)
			{
				puts((uint8_t*)0x401df8);
				*anon13 = 3;
				*anon14 = *anon14 + 200;
				*anon19 = 4294967295;
			}
		}
		if (dispatch16 == 3)
		{
			puts((uint8_t*)0x401d62);
			while (true)
			{
				uint64_t anon21 = random();
				uint32_t anon22 = (uint32_t)anon21;
				*anon19 = anon22 + (((uint32_t)((anon21 & 0xffffffff) * 2290649225 >> 32) + anon22 >> 4) - (anon22 >> 31)) * 4294967266;
			}
		}
		if (*(uint32_t*)(anon15 + 6300992) != 0 && *(uint32_t*)(anon15 + 6300864) == 0)
		{
			if (anon18 != *anon19 || anon18 == *anon19 && *anon20 == 3 || anon18 == *anon19 && *anon20 == 3)
			{
				dispatch16 = 2;
			}
			uint32_t* anon23 = (uint32_t*)(anon15 + 6301504);
			if (*anon23 != 0 && (anon18 != *anon19 || anon18 == *anon19 && *anon20 == 3 || anon18 == *anon19 && *anon20 == 3))
			{
				*anon23 = 0;
				uint64_t anon24 = random();
				uint32_t anon25 = (uint32_t)anon24;
				*(uint32_t*)(((__sext int64_t)(anon25 + (((uint32_t)((anon24 & 0xffffffff) * 2290649225 >> 32) + anon25 >> 4) - (anon25 >> 31)) * 4294967266) << 2) + 6301504) = 1;
				uint64_t anon26 = random();
				printf((uint8_t*)0x401e28);
				*anon14 = *anon14 - 10;
				uint32_t anon28 = (uint32_t)anon26;
				int64_t anon27 = (__sext int64_t)(anon28 + ((uint32_t)((anon26 & 0xffffffff) * 2290649225 + (anon26 << 32) >> 36) - (anon28 >> 31)) * 4294967266);
				phi_in9 = anon27;
				phi_in10 = anon27;
				break;
			}
		}
		if (dispatch16 == 2)
		{
			uint64_t phi32;
			if (*(uint32_t*)(anon15 + 6300992) < 3)
			{
				puts((uint8_t*)0x401d7b);
			}
			anon31 = phi11 * 12;
			anon30 = (uint32_t*)(anon31 + 6301632);
			int64_t anon29 = (__sext int64_t)*anon30;
			if (*(uint32_t*)((anon29 << 2) + 6300864) == 0 && *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon31 + 6301636) << 2) + 6300864) == 0)
			{
				phi32 = anon29;
			}
			if (*(uint32_t*)((anon29 << 2) + 6300864) != 0 || *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon31 + 6301636) << 2) + 6300864) != 0 && *(uint32_t*)((anon29 << 2) + 6300864) == 0 || *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon31 + 6301640) << 2) + 6300864) != 0 && *(uint32_t*)((anon29 << 2) + 6300864) == 0 && *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon31 + 6301636) << 2) + 6300864) == 0)
			{
				puts((uint8_t*)0x401d8e);
				phi32 = (__sext int64_t)*anon30;
			}
			if (*(uint32_t*)((phi32 << 2) + 6301504) != 0 || *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon31 + 6301636) << 2) + 6301504) != 0 && *(uint32_t*)((phi32 << 2) + 6301504) == 0 || *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon31 + 6301640) << 2) + 6301504) != 0 && *(uint32_t*)((phi32 << 2) + 6301504) == 0 && *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon31 + 6301636) << 2) + 6301504) == 0)
			{
				puts((uint8_t*)0x401da0);
			}
			printf((uint8_t*)0x401e58);
			uint32_t* anon33 = (uint32_t*)(anon15 + 6301248);
			if (*anon33 == 0)
			{
				*anon14 = *anon14 + 10;
				*anon33 = 1;
			}
		}
		anon35 = (struct _IO_FILE**)0x602480;
		uint32_t anon34 = _IO_getc(*anon35);
		uint8_t anon37 = (uint8_t)anon34;
		anon36 = anon37 == 108;
		if (anon36)
		{
			uint16_t** anon38 = __ctype_b_loc();
			phi_in9 = phi11;
			phi_in10 = phi12;
			phi39 = anon38;
			anon40 = *(uint8_t*)(*(uint64_t*)anon38 + 217) & 8;
			if (anon40 == 0)
			{
				break;
			}
		}
		if (dispatch16 == 1 || dispatch16 == 0 || anon37 == 113)
		{
			printf((uint8_t*)0x401cf1);
			exit(0);
		}
		anon41 = anon37 == 115;
		if (anon41)
		{
			q(4200890, phi12 & 0xffffffff);
		}
		anon42 = anon37 == 105;
		if (anon42)
		{
			printf((uint8_t*)0x401dba);
		}
		anon43 = anon37 == 115 || anon37 == 108 || anon37 == 105 || anon37 == 113;
		if (!anon43 || anon37 == 105 || anon37 == 115)
		{
			anon44 = __ctype_b_loc();
			phi39 = anon44;
		}
		anon46 = (__sext int64_t)anon37;
		anon45 = *(uint8_t*)(*(uint64_t*)anon44 + (anon46 >> 7 | 1)) & 8;
	}
	while (!(anon45 != 0 && anon42 || anon45 != 0 && anon41 || anon45 != 0 && (!anon43) || anon40 != 0 && anon36));
	uint32_t anon47 = _IO_getc(*anon35);
	uint32_t anon49 = (uint32_t)(anon46 + 4294967248);
	phi48 = anon49;
	uint32_t anon50 = anon47 << 24 >> 24;
	if ((*(uint8_t*)(*(uint64_t*)phi39 + ((__zext uint64_t)anon50 << 1 | 1)) & 8) != 0)
	{
		phi48 = anon49 * 10 + anon50 - 48;
	}
	if (*anon30 != phi48 && *(uint32_t*)(anon31 + 6301636) != phi48)
	{
		phi_in9 = phi11;
		phi_in10 = phi12;
	}
	if (*anon30 == phi48 || *anon30 != phi48 && *(uint32_t*)(anon31 + 6301636) == phi48 || *anon30 != phi48 && *(uint32_t*)(anon31 + 6301636) != phi48 && *(uint32_t*)(anon31 + 6301640) == phi48)
	{
		int64_t anon51 = (__sext int64_t)phi48;
		phi_in9 = anon51;
		phi_in10 = anon51;
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
