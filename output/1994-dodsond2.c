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
	uint32_t phi5;
	uint64_t phi10;
	uint64_t phi14;
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
	do
	{
		*(uint64_t*)(phi10 + 48) = phi12;
		phi14 = *(uint64_t*)(phi10 + 48);
		uint32_t phi15 = phi5;
		uint64_t phi16 = phi7 & 0xffffffff;
		uint32_t phi_in17 = phi11;
		if (phi11 < *anon8)
		{
			uint64_t phi_in21;
			uint64_t phi361;
			uint64_t phi_in362;
			*(uint64_t*)(phi10 + 16) = anon9 * 12;
			*(uint32_t*)(phi10 + 40) = (uint32_t)phi7 + 5;
			uint32_t phi18 = phi5;
			uint32_t phi19 = phi_in4;
			uint64_t phi20 = (__zext uint64_t)phi_in4;
			*(uint32_t*)(phi_in21 + 68) = phi5;
			uint32_t phi22 = phi_in4;
			uint64_t phi23 = 0;
			do
			{
				uint32_t phi_in24 = phi18;
				uint32_t phi_in25 = phi19;
				uint32_t phi_in26 = phi22;
				uint32_t phi27 = phi5;
				uint64_t phi_in28 = phi23;
				phi_in21 = phi10;
				phi18 = phi_in24;
				phi_in17 = phi_in25;
				phi20 = phi20 & 0xffffffff;
				uint32_t phi29 = *(uint32_t*)(phi_in21 + 68);
				phi_in4 = phi_in26;
				uint64_t phi30 = phi_in21;
				int64_t anon32 = (__sext int64_t)*(uint32_t*)(phi_in28 + *(uint64_t*)(phi_in21 + 16) + 6301632);
				uint32_t* anon31 = (uint32_t*)((anon32 << 2) + 6300992);
				if (phi27 < *anon31)
				{
					uint64_t phi_in50;
					uint64_t phi360;
					*(uint64_t*)(phi_in21 + 56) = phi_in28;
					*anon31 = *(uint32_t*)(phi_in21 + 4);
					*(uint64_t*)(phi_in21 + 32) = anon32 * 12;
					*(uint32_t*)(phi_in21 + 44) = (uint32_t)phi20 + 6;
					uint32_t phi33 = phi_in26;
					uint32_t phi34 = phi_in26;
					uint32_t phi_in35 = phi_in26;
					uint32_t phi_in36 = phi_in26;
					uint32_t phi37 = phi_in26;
					uint32_t phi38 = phi_in26;
					uint32_t phi_in39 = phi_in26;
					uint32_t phi40 = phi_in26;
					uint32_t phi_in41 = phi_in26;
					uint64_t phi_in42 = (__zext uint64_t)phi_in26;
					uint64_t phi_in43 = 0;
					uint64_t phi44 = phi_in21;
					do
					{
						uint32_t phi_in45 = phi33;
						uint32_t phi_in46 = phi34;
						uint32_t phi47 = phi37;
						uint32_t phi_in48 = phi38;
						uint32_t phi49 = phi40;
						phi_in50 = phi44;
						uint32_t phi51 = phi_in45;
						uint32_t phi52 = phi_in46;
						uint32_t phi_in53 = phi_in35;
						uint32_t phi54 = phi_in36;
						uint32_t phi55 = phi47;
						uint32_t phi56 = phi_in48;
						uint32_t phi57 = phi49;
						uint32_t phi58 = phi_in26;
						uint32_t phi59 = phi_in41;
						uint64_t phi_in60 = phi_in42 & 0xffffffff;
						int64_t anon62 = (__sext int64_t)*(uint32_t*)(phi_in43 + *(uint64_t*)(phi_in50 + 32) + 6301632);
						uint32_t* anon61 = (uint32_t*)((anon62 << 2) + 6300992);
						if (*(uint32_t*)(phi_in50 + 4) < *anon61)
						{
							uint64_t phi78;
							uint32_t phi_in82;
							uint32_t phi_in354;
							uint32_t phi_in355;
							uint32_t phi_in356;
							uint32_t phi_in357;
							uint32_t phi_in358;
							uint64_t phi_in359;
							*(uint64_t*)(phi_in50 + 72) = phi_in43;
							*anon61 = *(uint32_t*)(phi_in50 + 24);
							*(uint32_t*)(phi_in50 + 64) = (uint32_t)phi_in42 + 7;
							uint32_t phi_in63 = phi_in46;
							uint32_t phi64 = phi_in35;
							uint32_t phi_in65 = phi_in36;
							uint32_t phi_in66 = phi_in39;
							uint32_t phi67 = phi_in26;
							uint32_t phi68 = phi_in41;
							uint64_t phi69 = phi_in50;
							uint64_t phi_in70 = 0;
							uint64_t phi_in71 = anon62 * 12;
							uint64_t phi72 = phi_in42;
							do
							{
								uint32_t phi73 = phi64;
								uint32_t phi_in74 = phi47;
								uint32_t phi_in75 = phi49;
								uint32_t phi_in76 = phi67;
								uint32_t phi_in77 = phi68;
								phi78 = phi_in70;
								uint64_t phi_in79 = phi72;
								uint64_t phi80 = phi_in71;
								phi51 = phi_in45;
								uint32_t phi81 = phi_in63;
								phi64 = phi73;
								phi_in82 = phi_in65;
								uint32_t phi83 = phi_in74;
								uint32_t phi84 = phi_in48;
								uint32_t phi85 = phi_in66;
								uint32_t phi86 = phi_in75;
								uint32_t phi87 = phi_in76;
								uint32_t phi88 = phi_in77;
								uint64_t phi89 = phi69;
								uint64_t phi90 = phi_in79 & 0xffffffff;
								int64_t anon92 = (__sext int64_t)*(uint32_t*)(phi78 + phi_in71 + 6301632);
								uint32_t* anon91 = (uint32_t*)((anon92 << 2) + 6300992);
								if (*(uint32_t*)(phi69 + 24) < *anon91)
								{
									uint32_t phi_in95;
									uint64_t phi353;
									*anon91 = *(uint32_t*)(phi69 + 28);
									uint32_t phi93 = phi_in45;
									uint32_t phi_in94 = phi_in63;
									uint32_t anon96 = (uint32_t)phi_in79 + 8;
									phi_in95 = anon96;
									uint32_t phi_in97 = phi_in65;
									uint32_t phi98 = anon96;
									uint32_t phi_in99 = phi_in74;
									uint32_t phi_in100 = phi_in48;
									uint32_t phi101 = anon96;
									uint32_t phi_in102 = anon96;
									uint32_t phi_in103 = phi_in66;
									uint32_t phi_in104 = anon96;
									uint32_t phi105 = anon96;
									uint32_t phi106 = anon96;
									uint32_t phi107 = phi_in75;
									uint32_t phi_in108 = anon96;
									uint32_t phi_in109 = anon96;
									uint32_t phi110 = phi_in76;
									uint32_t phi111 = anon96;
									uint32_t phi_in112 = anon96;
									uint32_t phi_in113 = phi_in77;
									uint32_t phi114 = anon96;
									uint32_t phi115 = anon96;
									uint32_t phi_in116 = anon96;
									uint64_t phi_in117 = 0;
									uint64_t phi118 = anon92 * 12;
									uint64_t phi119 = phi_in79;
									do
									{
										uint32_t phi_in120 = phi73;
										uint32_t phi121 = phi98;
										uint32_t phi_in122 = phi101;
										uint32_t phi_in123 = phi106;
										uint32_t phi_in124 = phi107;
										uint32_t phi125 = phi110;
										uint32_t phi_in126 = phi111;
										uint32_t phi127 = phi_in112;
										uint32_t phi128 = phi115;
										uint64_t phi129 = phi69;
										phi118 = phi118;
										phi_in45 = phi93;
										uint32_t phi130 = phi_in94;
										uint32_t phi131 = phi_in120;
										uint32_t phi132 = phi_in95;
										uint32_t phi133 = phi_in97;
										phi98 = phi121;
										uint32_t phi134 = phi_in99;
										phi_in48 = phi_in100;
										uint32_t phi135 = phi_in122;
										uint32_t phi_in136 = phi_in102;
										uint32_t phi137 = phi_in103;
										uint32_t phi138 = phi_in104;
										uint32_t phi139 = phi105;
										phi106 = phi_in123;
										uint32_t phi140 = phi_in124;
										uint32_t phi_in141 = phi_in108;
										uint32_t phi_in142 = phi_in109;
										phi_in76 = phi125;
										uint32_t phi143 = phi_in126;
										uint32_t phi144 = phi_in113;
										phi80 = phi_in71;
										uint32_t phi145 = phi128;
										uint32_t phi146 = phi_in116;
										uint64_t phi147 = phi129;
										uint64_t phi148 = phi119;
										int64_t anon150 = (__sext int64_t)*(uint32_t*)(phi_in117 + phi118 + 6301632);
										uint32_t* anon149 = (uint32_t*)((anon150 << 2) + 6300992);
										if (*(uint32_t*)(phi129 + 28) < *anon149)
										{
											uint64_t phi172;
											*anon149 = *(uint32_t*)(phi129 + 40);
											*(uint32_t*)(phi129 + 120) = (uint32_t)phi119 + 9;
											uint64_t phi_in151 = 0;
											uint32_t phi_in152 = phi_in94;
											uint32_t phi_in153 = phi_in120;
											uint32_t phi_in154 = phi_in95;
											uint32_t phi_in155 = phi_in97;
											uint32_t phi156 = phi_in99;
											uint32_t phi157 = phi_in100;
											uint32_t phi_in158 = phi_in122;
											uint32_t phi_in159 = phi_in102;
											uint32_t phi160 = phi_in103;
											uint32_t phi161 = phi_in104;
											uint32_t phi162 = phi_in124;
											uint32_t phi163 = phi_in108;
											uint32_t phi164 = phi_in109;
											uint32_t phi165 = phi127;
											uint64_t phi_in166 = phi_in117;
											uint32_t phi167 = phi_in113;
											uint64_t phi_in168 = phi_in71;
											uint64_t phi169 = phi118;
											uint32_t phi_in170 = phi_in116;
											uint64_t phi171 = phi119 & 0xffffffff;
											do
											{
												phi172 = phi_in151;
												uint32_t phi173 = phi93;
												uint32_t phi174 = phi121;
												uint32_t phi175 = phi157;
												uint32_t phi_in176 = phi160;
												uint32_t phi177 = phi161;
												uint32_t phi178 = phi105;
												uint32_t phi_in179 = phi162;
												uint32_t phi180 = phi163;
												uint32_t phi_in181 = phi164;
												uint32_t phi_in182 = phi125;
												uint32_t phi183 = phi165;
												uint64_t phi184 = phi_in166;
												uint32_t phi185 = phi167;
												uint32_t phi186 = phi114;
												uint32_t phi187 = phi128;
												uint32_t phi188 = phi_in170;
												uint64_t phi_in189 = phi129;
												uint64_t phi190 = phi171;
												uint32_t phi_in191 = phi173;
												uint32_t phi192 = phi_in152;
												uint32_t phi193 = phi_in153;
												uint32_t phi194 = phi_in154;
												uint32_t phi195 = phi_in155;
												uint32_t phi196 = phi174;
												phi_in100 = phi175;
												uint32_t phi197 = phi_in158;
												phi_in136 = phi_in159;
												uint32_t phi198 = phi_in176;
												phi161 = phi177;
												phi139 = phi178;
												uint32_t phi199 = phi_in123;
												uint32_t phi200 = phi_in179;
												uint32_t phi201 = phi180;
												uint32_t phi202 = phi_in181;
												uint32_t phi203 = phi_in182;
												uint32_t phi_in204 = phi_in126;
												uint32_t phi205 = phi183;
												phi167 = phi185;
												uint64_t phi206 = phi_in168;
												uint64_t phi207 = phi169;
												uint32_t phi208 = phi187;
												phi147 = phi_in189;
												uint64_t phi209 = phi190;
												int64_t anon211 = (__sext int64_t)*(uint32_t*)(phi172 + anon150 * 12 + 6301632);
												uint32_t* anon210 = (uint32_t*)((anon211 << 2) + 6300992);
												if (*(uint32_t*)(phi_in189 + 40) < *anon210)
												{
													uint64_t phi225;
													*anon210 = *(uint32_t*)(phi_in189 + 44);
													uint64_t phi_in212 = 0;
													uint32_t phi213 = phi_in152;
													uint32_t phi214 = phi_in153;
													uint32_t phi215 = phi_in154;
													uint32_t phi216 = phi_in155;
													uint32_t phi_in217 = phi156;
													uint32_t phi218 = phi_in158;
													uint32_t phi219 = phi_in159;
													uint32_t phi220 = phi_in176;
													int64_t anon224 = (__sext int64_t)*(uint32_t*)(phi225 + anon211 * 12 + 6301632);
													int64_t anon223 = anon224 * 12;
													int64_t anon222 = (__sext int64_t)*(uint32_t*)(anon223 + 6301636);
													uint32_t* anon221 = (uint32_t*)((anon222 << 2) + 6300992);
													*anon221 = phi_in123;
													uint32_t phi226 = phi_in179;
													uint32_t phi227 = phi_in181;
													uint32_t phi_in228 = phi_in126;
													uint64_t phi229 = phi184;
													uint64_t phi230 = phi_in168;
													uint32_t phi231 = phi186;
													uint32_t phi_in232 = phi188;
													uint64_t phi233 = phi_in189;
													do
													{
														phi225 = phi_in212;
														uint32_t phi234 = phi173;
														uint32_t phi235 = phi214;
														uint32_t phi236 = phi215;
														uint32_t phi_in237 = phi216;
														uint32_t phi238 = phi174;
														uint32_t phi_in239 = phi175;
														uint32_t phi240 = phi219;
														uint32_t phi_in241 = phi220;
														*(uint32_t*)(phi233 + 124) = phi177;
														uint32_t phi_in242 = phi226;
														uint32_t phi_in243 = phi180;
														uint32_t phi_in244 = phi183;
														uint64_t phi245 = phi229;
														uint32_t phi_in246 = phi185;
														uint64_t phi247 = phi230;
														*(uint64_t*)(phi233 + 112) = phi169;
														uint32_t phi248 = phi231;
														phi208 = phi187;
														uint64_t phi249 = phi190;
														phi_in191 = phi234;
														uint32_t phi250 = phi213;
														uint32_t phi251 = phi235;
														uint32_t phi252 = phi236;
														uint32_t phi253 = phi_in237;
														phi196 = phi238;
														uint32_t phi254 = phi_in217;
														uint32_t phi255 = phi_in239;
														phi197 = phi218;
														uint32_t phi256 = phi240;
														uint32_t phi257 = phi_in241;
														uint32_t phi258 = *(uint32_t*)(phi233 + 124);
														uint32_t phi259 = phi178;
														uint32_t phi260 = *anon221;
														uint32_t phi261 = phi_in242;
														uint32_t phi_in262 = phi_in243;
														phi_in181 = phi227;
														uint32_t phi263 = phi_in182;
														phi_in126 = phi_in228;
														phi205 = phi_in244;
														uint32_t phi264 = phi_in246;
														uint64_t phi265 = phi247;
														phi169 = *(uint64_t*)(phi233 + 112);
														phi186 = phi248;
														uint32_t phi266 = phi_in232;
														uint64_t phi267 = phi233;
														uint32_t* anon268 = (uint32_t*)((anon224 << 2) + 6300992);
														if (*(uint32_t*)(phi233 + 44) < *anon268)
														{
															*anon268 = *(uint32_t*)(phi233 + 64);
															uint32_t phi269 = phi213;
															uint32_t phi270 = phi235;
															uint32_t phi271 = phi236;
															uint64_t phi272 = phi233;
															uint32_t phi_in273 = phi_in237;
															uint32_t phi_in274 = phi238;
															uint32_t phi275 = phi_in217;
															uint32_t phi_in276 = phi_in239;
															uint32_t phi277 = phi218;
															uint32_t phi278 = phi240;
															uint32_t phi279 = phi_in241;
															uint32_t phi280 = *(uint32_t*)(phi233 + 124);
															uint32_t phi281 = phi178;
															uint32_t phi282 = *anon221;
															uint32_t phi283 = phi_in242;
															uint32_t phi284 = phi_in243;
															phi263 = phi_in182;
															uint32_t phi285 = phi_in228;
															uint64_t phi286 = phi245;
															uint32_t phi287 = phi_in246;
															uint64_t phi288 = phi247;
															uint64_t phi289 = *(uint64_t*)(phi233 + 112);
															uint32_t phi290 = phi208;
															uint32_t phi_in291 = phi_in232;
															uint64_t phi292 = phi249;
															if (*(uint32_t*)(phi233 + 64) < *anon221)
															{
																uint32_t phi293 = phi234;
																uint32_t phi_in294 = phi_in237;
																*(uint32_t*)(phi295 + 96) = phi_in217;
																uint32_t phi296 = phi_in239;
																uint64_t phi295 = phi233;
																uint64_t phi297 = anon222;
																uint32_t phi298 = phi_in242;
																uint32_t phi299 = phi_in182;
																*(uint64_t*)(phi295 + 88) = phi245;
																uint64_t phi300 = *(uint64_t*)(phi233 + 112);
																uint64_t phi301 = phi249;
																if (phi178 < *anon221)
																{
																	*(uint64_t*)(phi233 + 104) = phi247;
																	*(uint32_t*)(phi233 + 96) = phi_in241;
																	*(uint64_t*)(phi233 + 88) = phi245;
																	*(uint64_t*)(phi233 + 80) = anon222;
																	w(4197873, anon13, (__sext int64_t)*anon221, (__zext uint64_t)*anon221);
																	phi293 = *(uint32_t*)(arg1 - 96);
																	phi213 = *(uint32_t*)(arg1 - 96);
																	phi235 = *(uint32_t*)(arg1 - 96);
																	phi236 = *(uint32_t*)(arg1 - 68);
																	phi_in294 = *(uint32_t*)(arg1 - 96);
																	phi238 = *(uint32_t*)(arg1 - 68);
																	*(uint32_t*)(phi295 + 96) = *(uint32_t*)(arg1 - 96);
																	phi296 = *(uint32_t*)(arg1 - 96);
																	phi218 = *(uint32_t*)(arg1 - 68);
																	phi295 = anon13;
																	phi240 = *(uint32_t*)(arg1 - 68);
																	phi297 = *(uint64_t*)(arg1 - 112);
																	phi_in241 = *(uint32_t*)(arg1 - 96);
																	phi298 = *(uint32_t*)(arg1 - 96);
																	phi299 = *(uint32_t*)(arg1 - 96);
																	*(uint64_t*)(phi295 + 88) = *(uint64_t*)(arg1 - 104);
																	phi_in246 = *(uint32_t*)(arg1 - 96);
																	phi247 = *(uint64_t*)(arg1 - 88);
																	phi300 = *(uint64_t*)(arg1 - 80);
																	phi301 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
																}
																uint32_t phi_in302 = phi293;
																uint32_t phi303 = phi213;
																uint32_t phi304 = phi235;
																uint32_t phi305 = phi236;
																uint32_t phi306 = phi238;
																*(uint32_t*)(phi295 + 124) = phi218;
																*(uint64_t*)(phi295 + 80) = phi297;
																uint32_t phi_in307 = phi298;
																uint32_t phi_in308 = phi299;
																*(uint64_t*)(phi295 + 104) = phi247;
																*(uint64_t*)(phi295 + 112) = phi300;
																uint64_t phi309 = phi301;
																uint32_t phi310 = phi_in302;
																uint32_t phi311 = phi_in294;
																uint64_t phi312 = phi295;
																uint32_t phi313 = *(uint32_t*)(phi295 + 96);
																uint64_t phi314 = *(uint64_t*)(phi295 + 80);
																uint32_t phi_in315 = phi_in241;
																uint32_t phi_in316 = phi_in307;
																uint32_t phi317 = phi_in308;
																uint64_t phi318 = *(uint64_t*)(phi295 + 88);
																uint32_t phi_in319 = phi_in246;
																phi288 = *(uint64_t*)(phi295 + 104);
																*(uint64_t*)(phi312 + 104) = *(uint64_t*)(phi295 + 112);
																int64_t anon320 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi295 + 80) * 12 + 6301636);
																if (phi240 < *(uint32_t*)((anon320 << 2) + 6300992))
																{
																	w(4197793, anon13, anon320, (__zext uint64_t)*(uint32_t*)(phi295 + 120));
																	phi310 = *(uint32_t*)(arg1 - 96);
																	phi303 = *(uint32_t*)(arg1 - 96);
																	phi304 = *(uint32_t*)(arg1 - 96);
																	phi305 = alloca1.field14;
																	phi311 = *(uint32_t*)(arg1 - 96);
																	phi312 = anon13;
																	phi306 = alloca1.field14;
																	phi313 = *(uint32_t*)(arg1 - 96);
																	phi296 = *(uint32_t*)(arg1 - 96);
																	phi314 = *(uint64_t*)(arg1 - 112);
																	phi_in315 = *(uint32_t*)(arg1 - 96);
																	phi_in316 = *(uint32_t*)(arg1 - 96);
																	phi317 = *(uint32_t*)(arg1 - 96);
																	phi318 = *(uint64_t*)(arg1 - 104);
																	phi_in319 = *(uint32_t*)(arg1 - 96);
																	phi288 = *(uint64_t*)(arg1 - 88);
																	*(uint64_t*)(phi312 + 104) = *(uint64_t*)(arg1 - 80);
																	phi309 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
																}
																phi234 = phi310;
																phi269 = phi303;
																uint32_t phi_in321 = phi304;
																phi271 = phi305;
																*(uint32_t*)(phi312 + 88) = phi311;
																*(uint32_t*)(phi312 + 112) = phi306;
																phi275 = phi313;
																phi_in276 = phi296;
																uint32_t phi_in322 = phi317;
																*(uint64_t*)(phi312 + 80) = phi318;
																phi292 = phi309;
																phi270 = phi_in321;
																phi272 = phi312;
																phi_in273 = *(uint32_t*)(phi312 + 88);
																phi_in274 = *(uint32_t*)(phi312 + 112);
																phi277 = *(uint32_t*)(phi312 + 112);
																phi278 = *(uint32_t*)(phi312 + 112);
																phi279 = phi_in315;
																phi280 = *(uint32_t*)(phi312 + 112);
																phi281 = *(uint32_t*)(phi312 + 112);
																phi282 = *(uint32_t*)(phi312 + 112);
																phi283 = phi_in316;
																phi284 = *(uint32_t*)(phi312 + 112);
																phi227 = *(uint32_t*)(phi312 + 112);
																phi263 = phi_in322;
																phi285 = *(uint32_t*)(phi312 + 112);
																phi_in244 = *(uint32_t*)(phi312 + 112);
																phi286 = *(uint64_t*)(phi312 + 80);
																phi287 = phi_in319;
																phi289 = *(uint64_t*)(phi312 + 104);
																phi248 = *(uint32_t*)(phi312 + 112);
																phi290 = *(uint32_t*)(phi312 + 112);
																phi_in291 = *(uint32_t*)(phi312 + 112);
																int64_t anon323 = (__sext int64_t)*(uint32_t*)(phi314 * 12 + 6301640);
																if (*(uint32_t*)(phi312 + 112) < *(uint32_t*)((anon323 << 2) + 6300992))
																{
																	*(uint64_t*)(phi312 + 96) = phi288;
																	w(4197395, anon13, anon323, (__zext uint64_t)*(uint32_t*)(phi312 + 120));
																	phi234 = *(uint32_t*)(arg1 - 104);
																	phi269 = *(uint32_t*)(arg1 - 104);
																	phi270 = *(uint32_t*)(arg1 - 104);
																	phi271 = *(uint32_t*)(arg1 - 80);
																	phi272 = anon13;
																	phi_in273 = *(uint32_t*)(arg1 - 104);
																	phi_in274 = *(uint32_t*)(arg1 - 80);
																	phi275 = *(uint32_t*)(arg1 - 104);
																	phi_in276 = *(uint32_t*)(arg1 - 104);
																	phi277 = *(uint32_t*)(arg1 - 80);
																	phi278 = *(uint32_t*)(arg1 - 80);
																	phi279 = *(uint32_t*)(arg1 - 104);
																	phi280 = *(uint32_t*)(arg1 - 80);
																	phi281 = *(uint32_t*)(arg1 - 80);
																	phi282 = *(uint32_t*)(arg1 - 80);
																	phi283 = *(uint32_t*)(arg1 - 104);
																	phi284 = *(uint32_t*)(arg1 - 80);
																	phi227 = *(uint32_t*)(arg1 - 80);
																	phi263 = *(uint32_t*)(arg1 - 104);
																	phi285 = *(uint32_t*)(arg1 - 80);
																	phi_in244 = *(uint32_t*)(arg1 - 80);
																	phi286 = *(uint64_t*)(arg1 - 112);
																	phi287 = *(uint32_t*)(arg1 - 104);
																	phi288 = *(uint64_t*)(arg1 - 96);
																	phi289 = *(uint64_t*)(arg1 - 88);
																	phi248 = *(uint32_t*)(arg1 - 80);
																	phi290 = *(uint32_t*)(arg1 - 80);
																	phi_in291 = *(uint32_t*)(arg1 - 80);
																	phi292 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
																}
															}
															uint32_t phi_in324 = phi234;
															*(uint32_t*)(phi272 + 88) = phi269;
															uint32_t phi325 = phi270;
															int64_t anon327 = (__sext int64_t)*(uint32_t*)(anon223 + 6301640);
															uint32_t* anon326 = (uint32_t*)((anon327 << 2) + 6300992);
															*anon326 = phi271;
															uint32_t phi_in328 = phi275;
															uint32_t phi_in329 = phi277;
															phi256 = phi278;
															phi257 = phi279;
															phi258 = phi280;
															uint32_t phi_in330 = phi281;
															phi260 = phi282;
															phi_in262 = phi284;
															uint32_t phi_in331 = phi227;
															uint32_t phi_in332 = phi285;
															*(uint64_t*)(phi272 + 80) = phi286;
															uint32_t phi_in333 = phi287;
															*(uint64_t*)(phi272 + 96) = phi288;
															*(uint64_t*)(phi272 + 104) = phi289;
															uint32_t phi_in334 = phi248;
															uint32_t phi_in335 = phi290;
															uint64_t phi336 = phi292;
															phi_in191 = phi_in324;
															phi250 = *(uint32_t*)(phi272 + 88);
															phi251 = phi325;
															phi252 = *anon326;
															phi253 = phi_in273;
															phi196 = phi_in274;
															phi254 = phi_in328;
															phi255 = phi_in276;
															phi197 = phi_in329;
															phi259 = phi_in330;
															phi261 = phi283;
															phi_in181 = phi_in331;
															phi_in126 = phi_in332;
															phi205 = phi_in244;
															phi245 = *(uint64_t*)(phi272 + 80);
															phi264 = phi_in333;
															phi265 = *(uint64_t*)(phi272 + 96);
															phi169 = *(uint64_t*)(phi272 + 104);
															phi186 = phi_in334;
															phi208 = phi_in335;
															phi266 = phi_in291;
															phi267 = phi272;
															phi249 = phi336;
															if (*(uint32_t*)(phi272 + 64) < *anon326)
															{
																uint32_t phi337 = phi_in324;
																uint32_t phi338 = *(uint32_t*)(phi272 + 88);
																uint32_t phi339 = *anon326;
																uint32_t phi_in340 = phi_in273;
																uint32_t phi341 = phi_in328;
																uint32_t phi_in342 = phi_in276;
																uint32_t phi_in343 = phi257;
																uint32_t phi344 = phi263;
																*(uint64_t*)(phi345 + 80) = *(uint64_t*)(phi272 + 80);
																uint32_t phi_in346 = phi_in333;
																*(uint64_t*)(phi345 + 96) = *(uint64_t*)(phi272 + 96);
																uint64_t phi347 = *(uint64_t*)(phi272 + 104);
																uint64_t phi345 = phi272;
																int64_t anon349 = anon327 * 12;
																int64_t anon348 = (__sext int64_t)*(uint32_t*)(anon349 + 6301636);
																if (*anon326 < *(uint32_t*)((anon348 << 2) + 6300992))
																{
																	*(uint32_t*)(phi272 + 112) = *anon326;
																	w(4197948, anon13, anon348, (__zext uint64_t)*(uint32_t*)(phi272 + 120));
																	phi337 = *(uint32_t*)(arg1 - 104);
																	phi338 = *(uint32_t*)(arg1 - 104);
																	phi325 = *(uint32_t*)(arg1 - 104);
																	phi339 = *(uint32_t*)(arg1 - 80);
																	phi_in340 = *(uint32_t*)(arg1 - 104);
																	phi341 = *(uint32_t*)(arg1 - 104);
																	phi_in342 = *(uint32_t*)(arg1 - 104);
																	phi_in343 = *(uint32_t*)(arg1 - 104);
																	phi283 = *(uint32_t*)(arg1 - 104);
																	phi344 = *(uint32_t*)(arg1 - 104);
																	*(uint64_t*)(phi345 + 80) = *(uint64_t*)(arg1 - 112);
																	phi_in346 = *(uint32_t*)(arg1 - 104);
																	*(uint64_t*)(phi345 + 96) = *(uint64_t*)(arg1 - 96);
																	phi347 = *(uint64_t*)(arg1 - 88);
																	phi345 = anon13;
																	phi336 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
																}
																*(uint32_t*)(phi345 + 88) = phi337;
																uint32_t phi_in350 = phi338;
																phi251 = phi325;
																phi197 = phi339;
																uint32_t phi_in351 = phi341;
																phi261 = phi283;
																phi263 = phi344;
																phi245 = *(uint64_t*)(phi345 + 80);
																phi169 = phi347;
																phi249 = phi336;
																phi_in191 = *(uint32_t*)(phi345 + 88);
																phi250 = phi_in350;
																phi252 = phi197;
																phi253 = phi_in340;
																phi196 = phi197;
																phi254 = phi_in351;
																phi255 = phi_in342;
																phi256 = phi197;
																phi257 = phi_in343;
																phi258 = phi197;
																phi259 = phi197;
																phi260 = phi197;
																phi_in262 = phi197;
																phi_in181 = phi197;
																phi_in126 = phi197;
																phi205 = phi197;
																phi264 = phi_in346;
																phi265 = *(uint64_t*)(phi345 + 96);
																phi186 = phi197;
																phi208 = phi197;
																phi266 = phi197;
																phi267 = phi345;
																int64_t anon352 = (__sext int64_t)*(uint32_t*)(anon349 + 6301640);
																if (phi197 < *(uint32_t*)((anon352 << 2) + 6300992))
																{
																	*(uint32_t*)(phi345 + 112) = phi197;
																	*(uint64_t*)(phi345 + 104) = phi169;
																	*(uint64_t*)(phi345 + 80) = phi245;
																	w(4197231, anon13, anon352, (__zext uint64_t)*(uint32_t*)(phi345 + 120));
																	phi_in191 = alloca1.field8;
																	phi250 = alloca1.field8;
																	phi251 = alloca1.field8;
																	phi252 = alloca1.field12;
																	phi253 = alloca1.field8;
																	phi196 = alloca1.field12;
																	phi254 = alloca1.field8;
																	phi255 = alloca1.field8;
																	phi197 = alloca1.field12;
																	phi256 = alloca1.field12;
																	phi257 = alloca1.field8;
																	phi258 = alloca1.field12;
																	phi259 = alloca1.field12;
																	phi260 = alloca1.field12;
																	phi261 = alloca1.field8;
																	phi_in262 = alloca1.field12;
																	phi_in181 = alloca1.field12;
																	phi263 = alloca1.field8;
																	phi_in126 = alloca1.field12;
																	phi205 = alloca1.field12;
																	phi245 = alloca1.field7;
																	phi264 = alloca1.field8;
																	phi265 = alloca1.field10;
																	phi169 = alloca1.field11;
																	phi186 = alloca1.field12;
																	phi208 = alloca1.field12;
																	phi266 = alloca1.field12;
																	phi267 = anon13;
																	phi249 = (__zext uint64_t)alloca1.field8;
																}
															}
														}
														phi192 = phi250;
														phi193 = phi251;
														phi194 = phi252;
														phi156 = phi254;
														phi198 = phi257;
														phi200 = phi261;
														phi203 = phi263;
														phi184 = phi245;
														phi188 = phi266;
														phi147 = phi267;
														phi195 = phi253;
														phi_in100 = phi255;
														phi_in136 = phi256;
														phi161 = phi258;
														phi139 = phi259;
														phi199 = phi260;
														phi201 = phi_in262;
														phi202 = phi_in181;
														phi_in204 = phi_in126;
														phi167 = phi264;
														phi206 = phi265;
														phi207 = phi169;
														phi209 = phi249;
														phi_in212 = phi225 + 4;
														phi173 = phi_in191;
														phi213 = phi192;
														phi214 = phi193;
														phi215 = phi194;
														phi216 = phi253;
														phi174 = phi196;
														phi_in217 = phi156;
														phi175 = phi255;
														phi218 = phi197;
														phi219 = phi256;
														phi220 = phi198;
														phi177 = phi258;
														phi178 = phi259;
														*anon221 = phi260;
														phi226 = phi200;
														phi180 = phi_in262;
														phi227 = phi_in181;
														phi_in182 = phi203;
														phi_in228 = phi_in126;
														phi183 = phi205;
														phi229 = phi184;
														phi185 = phi264;
														phi230 = phi265;
														phi231 = phi186;
														phi187 = phi208;
														phi_in232 = phi188;
														phi233 = phi147;
														phi190 = phi249;
													}
													while (phi225 != 8);
												}
												phi132 = phi194;
												phi133 = phi195;
												phi135 = phi197;
												phi106 = phi199;
												phi140 = phi200;
												phi_in142 = phi202;
												phi127 = phi205;
												phi_in117 = phi184;
												phi145 = phi208;
												phi146 = phi188;
												phi118 = phi207;
												phi_in45 = phi_in191;
												phi130 = phi192;
												phi131 = phi193;
												phi98 = phi196;
												phi134 = phi156;
												phi_in48 = phi_in100;
												phi137 = phi198;
												phi138 = phi161;
												phi_in141 = phi201;
												phi_in76 = phi203;
												phi143 = phi_in204;
												phi144 = phi167;
												phi80 = phi206;
												phi114 = phi186;
												phi148 = phi209;
												phi_in151 = phi172 + 4;
												phi93 = phi_in191;
												phi_in152 = phi192;
												phi_in153 = phi193;
												phi_in154 = phi132;
												phi_in155 = phi133;
												phi121 = phi196;
												phi156 = phi156;
												phi157 = phi_in100;
												phi_in158 = phi135;
												phi_in159 = phi_in136;
												phi160 = phi198;
												phi105 = phi139;
												phi_in123 = phi106;
												phi162 = phi140;
												phi163 = phi201;
												phi164 = phi_in142;
												phi125 = phi203;
												phi_in126 = phi_in204;
												phi165 = phi127;
												phi_in166 = phi_in117;
												phi_in168 = phi206;
												phi169 = phi207;
												phi114 = phi186;
												phi128 = phi145;
												phi_in170 = phi146;
												phi129 = phi147;
												phi171 = phi209;
											}
											while (phi172 != 8);
										}
										phi353 = phi_in117;
										phi85 = phi137;
										phi51 = phi_in45;
										phi81 = phi130;
										phi64 = phi131;
										phi_in82 = phi133;
										phi83 = phi134;
										phi84 = phi_in48;
										phi86 = phi140;
										phi87 = phi_in76;
										phi88 = phi144;
										phi89 = phi147;
										phi90 = phi148;
										phi93 = phi_in45;
										phi_in94 = phi130;
										phi73 = phi131;
										phi_in95 = phi132;
										phi_in97 = phi133;
										phi_in99 = phi134;
										phi_in100 = phi_in48;
										phi101 = phi135;
										phi_in102 = phi_in136;
										phi_in103 = phi85;
										phi_in104 = phi138;
										phi105 = phi139;
										phi107 = phi140;
										phi_in108 = phi_in141;
										phi_in109 = phi_in142;
										phi110 = phi_in76;
										phi111 = phi143;
										phi_in112 = phi127;
										phi_in113 = phi144;
										phi_in71 = phi80;
										phi115 = phi145;
										phi_in116 = phi146;
										phi69 = phi147;
										phi_in117 = phi353 + 4;
										phi119 = phi148;
									}
									while (phi353 != 8);
								}
								phi_in354 = phi81;
								phi55 = phi83;
								phi_in355 = phi84;
								phi_in356 = phi85;
								phi57 = phi86;
								phi_in357 = phi87;
								phi_in358 = phi88;
								phi_in50 = phi89;
								phi_in359 = phi90;
								phi_in45 = phi51;
								phi_in63 = phi_in354;
								phi_in65 = phi_in82;
								phi47 = phi55;
								phi_in48 = phi_in355;
								phi_in66 = phi_in356;
								phi49 = phi57;
								phi67 = phi_in357;
								phi68 = phi_in358;
								phi69 = phi_in50;
								phi_in70 = phi78 + 4;
								phi_in71 = phi80;
								phi72 = phi_in359;
							}
							while (phi78 != 8);
							phi52 = phi_in354;
							phi_in53 = phi64;
							phi54 = phi_in82;
							phi56 = phi_in355;
							phi_in43 = *(uint64_t*)(phi_in50 + 72);
							phi_in39 = phi_in356;
							phi58 = phi_in357;
							phi59 = phi_in358;
							phi_in60 = phi_in359;
						}
						phi_in4 = phi56;
						phi360 = phi_in43;
						phi33 = phi51;
						phi34 = phi52;
						phi_in35 = phi_in53;
						phi_in36 = phi54;
						phi37 = phi55;
						phi38 = phi_in4;
						phi40 = phi57;
						phi_in26 = phi58;
						phi_in41 = phi59;
						phi_in42 = phi_in60;
						phi_in43 = phi360 + 4;
						phi44 = phi_in50;
					}
					while (phi360 != 8);
					phi18 = *(uint32_t*)(phi_in50 + 68);
					phi_in17 = phi_in4;
					phi_in28 = *(uint64_t*)(phi_in50 + 56);
					phi20 = (__zext uint64_t)phi_in4;
					phi29 = *(uint32_t*)(phi_in50 + 68);
					phi27 = *(uint32_t*)(phi_in50 + 68);
					phi30 = phi_in50;
				}
				phi361 = phi_in28;
				phi_in362 = phi30;
				phi19 = phi_in17;
				*(uint32_t*)(phi_in21 + 68) = phi29;
				phi22 = phi_in4;
				phi5 = phi27;
				phi23 = phi361 + 4;
				phi10 = phi_in362;
			}
			while (phi361 != 8);
			phi14 = *(uint64_t*)(phi_in362 + 48);
			phi_in4 = phi_in17;
			phi15 = phi18;
			phi16 = (__zext uint64_t)phi_in17;
			*anon8 = phi18;
			phi10 = phi_in362;
		}
		phi5 = phi15;
		phi7 = phi16;
		phi11 = phi_in17;
		phi12 = phi14 + 4;
	}
	while (phi14 != 8);
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
		uint64_t phi18;
		uint32_t anon19;
		uint32_t anon29;
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
			uint32_t phi_in13;
			uint32_t phi14;
			uint32_t phi_in15;
			uint32_t* anon16;
			uint32_t* anon11 = (uint32_t*)((phi10 & 0xc) + 4);
			uint32_t* anon12 = (uint32_t*)phi10;
			if (*anon11 < *anon12)
			{
				*anon12 = *anon11;
				*anon11 = *anon12;
				phi_in13 = *anon12;
				phi14 = *anon11;
				anon16 = (uint32_t*)(phi10 - 4);
				phi_in15 = *anon16;
				*anon12 = *anon12;
				*anon11 = *anon11;
			}
			else 
			{
				phi_in13 = *anon11;
				phi14 = *anon12;
				phi_in15 = *anon16;
			}
			if (*anon11 < *anon12 && *anon11 < *anon16 || *anon11 >= *anon12 && *anon12 < *anon16)
			{
				phi_in15 = phi14;
				*anon12 = *anon16;
				*anon16 = phi_in15;
				*anon12 = phi_in13;
				*anon11 = *anon16;
			}
			if ((*anon11 < *anon12 && *anon11 < *anon16 || *anon11 >= *anon12 && *anon12 < *anon16 || *anon11 >= *anon16 && *anon11 < *anon12) && *anon12 < *anon11)
			{
				phi_in15 = *anon16;
			}
			uint32_t phi17 = phi_in15;
			phi18 = 6301636;
			anon19 = phi17 + 1 & 0xff;
			if (anon19 != 0)
			{
				phi10 = phi10 + 12;
			}
		}
		while (anon19 != 0);
		do
		{
			uint32_t phi_in22;
			uint32_t phi23;
			uint32_t phi24;
			uint32_t* anon25;
			uint32_t phi26;
			uint32_t phi_in27;
			uint32_t* anon20 = (uint32_t*)(phi18 + 4);
			uint32_t* anon21 = (uint32_t*)phi18;
			if (*anon20 < *anon21)
			{
				*anon21 = *anon20;
				*anon20 = *anon21;
				phi_in22 = *anon21;
				phi23 = *anon20;
				anon25 = (uint32_t*)((phi18 & 0xc) - 4);
				phi24 = *anon25;
				*anon21 = *anon21;
				phi26 = *anon20;
			}
			else 
			{
				phi_in22 = *anon20;
				phi23 = *anon21;
				phi_in27 = *anon25;
			}
			if (*anon20 < *anon21 && *anon20 < *anon25 || *anon20 >= *anon21 && *anon21 < *anon25)
			{
				phi24 = phi23;
				*anon21 = *anon25;
				*anon25 = phi24;
				*anon21 = phi_in22;
				phi26 = *anon25;
			}
			if (*anon20 < *anon21 && *anon20 < *anon25 || *anon20 >= *anon21 && *anon21 < *anon25 || *anon20 >= *anon25 && *anon20 < *anon21)
			{
				phi_in27 = phi24;
				*anon20 = phi26;
				if (*anon21 < *anon20)
				{
					phi_in27 = *anon25;
				}
			}
			uint32_t phi28 = phi_in27;
			anon29 = phi28 + 1 & 0xff;
			if (anon29 != 0)
			{
				phi18 = phi18 + 12;
			}
		}
		while (anon29 != 0);
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
		uint64_t phi20;
		uint64_t anon21;
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
				phi20 = (__zext uint64_t)phi15;
			}
			if (*(uint32_t*)(anon18 + 6301632) != phi15 && phi15 != *(uint32_t*)(anon18 + 6301636) && phi15 != *(uint32_t*)(anon18 + 6301640))
			{
				anon21 = random();
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
			uint32_t anon22 = (uint32_t)anon21 + ((uint32_t)((anon21 & 0xffffffff) / 3) - (uint32_t)(anon21 << 32 >> 32 >> 31)) * 4294967293;
			if (*(uint32_t*)(anon18 + 6301632) != phi15 && phi15 != *(uint32_t*)(anon18 + 6301636) && phi15 != *(uint32_t*)(anon18 + 6301640) && anon22 != 1)
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
				phi20 = phi4;
			}
			if (*(uint32_t*)(((__sext int64_t)phi15 << 2) + 6300992) != 0 && *(uint32_t*)(anon18 + 6301632) == phi15 || *(uint32_t*)(anon18 + 6301632) != phi15 && *(uint32_t*)(((__sext int64_t)phi15 << 2) + 6300992) != 0 && phi15 == *(uint32_t*)(anon18 + 6301636) || *(uint32_t*)(anon18 + 6301632) != phi15 && phi15 != *(uint32_t*)(anon18 + 6301636) && *(uint32_t*)(((__sext int64_t)phi15 << 2) + 6300992) != 0 && phi15 == *(uint32_t*)(anon18 + 6301640) || *(uint32_t*)(anon18 + 6301632) != phi15 && phi15 != *(uint32_t*)(anon18 + 6301636) && phi15 != *(uint32_t*)(anon18 + 6301640) && anon22 != 1)
			{
				phi4 = phi20;
				dispatch2 = 2;
			}
			if ((uint8_t)anon17 != 10 && (*(uint32_t*)(((__sext int64_t)phi15 << 2) + 6300992) != 0 && *(uint32_t*)(anon18 + 6301632) == phi15 || *(uint32_t*)(anon18 + 6301632) != phi15 && *(uint32_t*)(((__sext int64_t)phi15 << 2) + 6300992) != 0 && phi15 == *(uint32_t*)(anon18 + 6301636) || *(uint32_t*)(anon18 + 6301632) != phi15 && phi15 != *(uint32_t*)(anon18 + 6301636) && *(uint32_t*)(((__sext int64_t)phi15 << 2) + 6300992) != 0 && phi15 == *(uint32_t*)(anon18 + 6301640) || *(uint32_t*)(anon18 + 6301632) != phi15 && phi15 != *(uint32_t*)(anon18 + 6301636) && phi15 != *(uint32_t*)(anon18 + 6301640) && anon22 != 1))
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
	uint32_t* anon29;
	uint64_t anon30;
	struct _IO_FILE** anon34;
	bool anon35;
	uint16_t** phi38;
	uint8_t anon39;
	bool anon40;
	bool anon41;
	bool anon42;
	uint8_t anon44;
	int64_t anon45;
	uint32_t phi47;
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
		uint32_t* anon19;
		uint16_t** anon43;
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
			*anon14 = *anon14 - 100;
		}
		if (*(uint32_t*)(anon15 + 6300992) != 0)
		{
			dispatch16 = 1;
		}
		if (dispatch16 == 1)
		{
			puts((uint8_t*)0x401d36);
			*anon14 = *anon14 - 50;
		}
		uint32_t anon17 = (uint32_t)phi12;
		uint32_t* anon18 = (uint32_t*)0x60292c;
		if (*(uint32_t*)(anon15 + 6300992) != 0 && *(uint32_t*)(anon15 + 6300864) == 0 && anon17 == *anon18)
		{
			if (*anon13 != 0)
			{
				anon19 = (uint32_t*)0x60248c;
				*anon19 = *anon19 + 1;
				*anon13 = *anon13 - 1;
				*anon14 = *anon14 - 20;
				puts((uint8_t*)0x401d48);
			}
			dispatch16 = 3;
			if (*anon19 == 3)
			{
				puts((uint8_t*)0x401df8);
				*anon13 = 3;
				*anon14 = *anon14 + 200;
				*anon18 = 4294967295;
			}
		}
		if (dispatch16 == 3)
		{
			puts((uint8_t*)0x401d62);
			while (true)
			{
				uint64_t anon20 = random();
				uint32_t anon21 = (uint32_t)anon20;
				*anon18 = anon21 + (((uint32_t)((anon20 & 0xffffffff) * 2290649225 >> 32) + anon21 >> 4) - (anon21 >> 31)) * 4294967266;
			}
		}
		if (*(uint32_t*)(anon15 + 6300992) != 0 && *(uint32_t*)(anon15 + 6300864) == 0)
		{
			if (anon17 != *anon18 || anon17 == *anon18 && *anon19 == 3 || anon17 == *anon18 && *anon19 == 3)
			{
				dispatch16 = 2;
			}
			uint32_t* anon22 = (uint32_t*)(anon15 + 6301504);
			if (*anon22 != 0 && (anon17 != *anon18 || anon17 == *anon18 && *anon19 == 3 || anon17 == *anon18 && *anon19 == 3))
			{
				*anon22 = 0;
				uint64_t anon23 = random();
				uint32_t anon24 = (uint32_t)anon23;
				*(uint32_t*)(((__sext int64_t)(anon24 + (((uint32_t)((anon23 & 0xffffffff) * 2290649225 >> 32) + anon24 >> 4) - (anon24 >> 31)) * 4294967266) << 2) + 6301504) = 1;
				uint64_t anon25 = random();
				printf((uint8_t*)0x401e28);
				*anon14 = *anon14 - 10;
				uint32_t anon27 = (uint32_t)anon25;
				int64_t anon26 = (__sext int64_t)(anon27 + ((uint32_t)((anon25 & 0xffffffff) * 2290649225 + (anon25 << 32) >> 36) - (anon27 >> 31)) * 4294967266);
				phi_in9 = anon26;
				phi_in10 = anon26;
				break;
			}
		}
		if (dispatch16 == 2)
		{
			uint64_t phi31;
			if (*(uint32_t*)(anon15 + 6300992) < 3)
			{
				puts((uint8_t*)0x401d7b);
			}
			anon30 = phi11 * 12;
			anon29 = (uint32_t*)(anon30 + 6301632);
			int64_t anon28 = (__sext int64_t)*anon29;
			if (*(uint32_t*)((anon28 << 2) + 6300864) == 0 && *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon30 + 6301636) << 2) + 6300864) == 0)
			{
				phi31 = anon28;
			}
			if (*(uint32_t*)((anon28 << 2) + 6300864) != 0 || *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon30 + 6301636) << 2) + 6300864) != 0 && *(uint32_t*)((anon28 << 2) + 6300864) == 0 || *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon30 + 6301640) << 2) + 6300864) != 0 && *(uint32_t*)((anon28 << 2) + 6300864) == 0 && *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon30 + 6301636) << 2) + 6300864) == 0)
			{
				puts((uint8_t*)0x401d8e);
				phi31 = (__sext int64_t)*anon29;
			}
			if (*(uint32_t*)((phi31 << 2) + 6301504) != 0 || *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon30 + 6301636) << 2) + 6301504) != 0 && *(uint32_t*)((phi31 << 2) + 6301504) == 0 || *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon30 + 6301640) << 2) + 6301504) != 0 && *(uint32_t*)((phi31 << 2) + 6301504) == 0 && *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon30 + 6301636) << 2) + 6301504) == 0)
			{
				puts((uint8_t*)0x401da0);
			}
			printf((uint8_t*)0x401e58);
			uint32_t* anon32 = (uint32_t*)(anon15 + 6301248);
			if (*anon32 == 0)
			{
				*anon14 = *anon14 + 10;
				*anon32 = 1;
			}
		}
		anon34 = (struct _IO_FILE**)0x602480;
		uint32_t anon33 = _IO_getc(*anon34);
		uint8_t anon36 = (uint8_t)anon33;
		anon35 = anon36 == 108;
		if (anon35)
		{
			uint16_t** anon37 = __ctype_b_loc();
			phi_in9 = phi11;
			phi_in10 = phi12;
			phi38 = anon37;
			anon39 = *(uint8_t*)(*(uint64_t*)anon37 + 217) & 8;
			if (anon39 == 0)
			{
				break;
			}
		}
		if (dispatch16 == 1 || dispatch16 == 0 || anon36 == 113)
		{
			printf((uint8_t*)0x401cf1);
			exit(0);
		}
		anon40 = anon36 == 115;
		if (anon40)
		{
			q(4200890, phi12 & 0xffffffff);
		}
		anon41 = anon36 == 105;
		if (anon41)
		{
			printf((uint8_t*)0x401dba);
		}
		anon42 = anon36 == 115 || anon36 == 108 || anon36 == 105 || anon36 == 113;
		if (!anon42 || anon36 == 105 || anon36 == 115)
		{
			anon43 = __ctype_b_loc();
			phi38 = anon43;
		}
		anon45 = (__sext int64_t)anon36;
		anon44 = *(uint8_t*)(*(uint64_t*)anon43 + (anon45 >> 7 | 1)) & 8;
	}
	while (!(anon44 != 0 && anon41 || anon44 != 0 && anon40 || anon44 != 0 && (!anon42) || anon39 != 0 && anon35));
	uint32_t anon46 = _IO_getc(*anon34);
	uint32_t anon48 = (uint32_t)(anon45 + 4294967248);
	phi47 = anon48;
	uint32_t anon49 = anon46 << 24 >> 24;
	if ((*(uint8_t*)(*(uint64_t*)phi38 + ((__zext uint64_t)anon49 << 1 | 1)) & 8) != 0)
	{
		phi47 = anon48 * 10 + anon49 - 48;
	}
	if (*anon29 != phi47 && *(uint32_t*)(anon30 + 6301636) != phi47)
	{
		phi_in9 = phi11;
		phi_in10 = phi12;
	}
	if (*anon29 == phi47 || *anon29 != phi47 && *(uint32_t*)(anon30 + 6301636) == phi47 || *anon29 != phi47 && *(uint32_t*)(anon30 + 6301636) != phi47 && *(uint32_t*)(anon30 + 6301640) == phi47)
	{
		int64_t anon50 = (__sext int64_t)phi47;
		phi_in9 = anon50;
		phi_in10 = anon50;
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
