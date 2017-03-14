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
			uint32_t phi_in12 = phi5;
			uint32_t phi_in13 = phi6;
			*phi1 = *anon8;
			*anon8 = phi_in13;
			phi7 = phi_in13;
			phi9 = phi_in12;
			phi10 = *anon8;
		}
		if (*anon4 >= *phi1 && *phi1 < *anon8 || *anon4 < *phi1 && *anon4 < *anon8 || *anon4 >= *anon8 && *anon4 < *phi1)
		{
			uint32_t phi_in14 = phi7;
			*phi1 = phi9;
			*anon4 = phi10;
			phi11 = phi_in14;
			if (*anon4 > *phi1)
			{
				phi11 = *anon8;
			}
		}
		if (phi11 != 255)
		{
			uint64_t anon15 = phi3 + 12;
			phi1 = (uint32_t*)anon15;
			phi_in2 = anon15;
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
	uint64_t phi_in10;
	uint64_t phi14;
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
	int64_t anon9 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi_in10 + 48) + *(uint64_t*)(phi_in10 + 8) + 6301632);
	uint32_t* anon8 = (uint32_t*)((anon9 << 2) + 6300992);
	*anon8 = anon6;
	uint32_t phi11 = anon3;
	uint64_t phi12 = 0;
	uint64_t anon13 = (uint64_t)&alloca1;
	phi_in10 = anon13;
	do
	{
		*(uint64_t*)(phi_in10 + 48) = phi12;
		phi14 = *(uint64_t*)(phi_in10 + 48);
		uint32_t phi15 = phi4;
		uint32_t phi_in16 = phi_in5;
		uint64_t phi17 = phi7 & 0xffffffff;
		uint32_t phi18 = *anon8;
		uint32_t phi19 = phi11;
		if (phi11 < *anon8)
		{
			uint32_t phi_in29;
			uint32_t phi_in374;
			uint64_t phi375;
			*(uint64_t*)(phi_in10 + 16) = anon9 * 12;
			*(uint32_t*)(phi_in10 + 40) = (uint32_t)phi7 + 5;
			uint32_t phi_in20 = phi_in5;
			uint64_t phi21 = (__zext uint64_t)phi4;
			*(uint32_t*)(phi22 + 68) = phi_in5;
			uint32_t phi23 = phi4;
			uint32_t phi24 = phi_in5;
			uint64_t phi25 = 0;
			uint64_t phi22 = phi_in10;
			do
			{
				uint32_t phi26 = phi4;
				uint32_t phi27 = phi23;
				uint32_t phi28 = phi24;
				*(uint64_t*)(phi22 + 56) = phi25;
				phi_in29 = phi_in20;
				uint64_t phi_in30 = *(uint64_t*)(phi22 + 56);
				phi21 = phi21 & 0xffffffff;
				phi23 = phi27;
				uint64_t phi31 = phi22;
				int64_t anon33 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi22 + 56) + *(uint64_t*)(phi22 + 16) + 6301632);
				uint32_t* anon32 = (uint32_t*)((anon33 << 2) + 6300992);
				if (phi28 < *anon32)
				{
					uint32_t phi_in58;
					uint64_t phi372;
					uint64_t phi_in373;
					*anon32 = *(uint32_t*)(phi22 + 4);
					*(uint64_t*)(phi22 + 32) = anon33 * 12;
					*(uint32_t*)(phi22 + 44) = (uint32_t)phi21 + 6;
					uint32_t phi_in34 = phi27;
					uint32_t phi35 = phi27;
					uint32_t phi36 = phi27;
					uint32_t phi_in37 = phi27;
					uint32_t phi38 = phi27;
					uint32_t phi39 = phi27;
					uint32_t phi_in40 = phi27;
					uint32_t phi41 = phi27;
					uint32_t phi42 = phi27;
					uint64_t phi43 = (__zext uint64_t)phi27;
					uint64_t phi44 = 0;
					do
					{
						uint32_t phi_in45 = phi35;
						uint32_t phi_in46 = phi36;
						uint32_t phi47 = phi_in37;
						uint32_t phi48 = phi38;
						uint32_t phi_in49 = phi39;
						uint32_t phi_in50 = phi41;
						uint32_t phi_in51 = phi42;
						uint64_t phi_in52 = phi43;
						uint64_t phi_in53 = phi44;
						uint32_t phi_in54 = phi_in34;
						uint32_t phi_in55 = phi_in45;
						uint32_t phi56 = phi_in46;
						uint32_t phi57 = phi48;
						phi_in58 = phi_in49;
						uint32_t phi_in59 = phi_in40;
						uint32_t phi60 = phi_in50;
						uint32_t phi61 = phi_in51;
						uint32_t phi62 = phi27;
						uint64_t phi63 = phi_in52 & 0xffffffff;
						uint64_t phi64 = phi22;
						int64_t anon66 = (__sext int64_t)*(uint32_t*)(phi_in53 + *(uint64_t*)(phi22 + 32) + 6301632);
						uint32_t* anon65 = (uint32_t*)((anon66 << 2) + 6300992);
						if (*(uint32_t*)(phi22 + 4) < *anon65)
						{
							uint64_t phi84;
							uint32_t phi_in85;
							uint32_t phi_in367;
							uint32_t phi_in368;
							uint32_t phi_in369;
							uint32_t phi_in370;
							uint32_t phi_in371;
							*(uint64_t*)(phi22 + 72) = phi_in53;
							*anon65 = *(uint32_t*)(phi22 + 24);
							*(uint32_t*)(phi22 + 64) = (uint32_t)phi_in52 + 7;
							uint32_t phi_in67 = phi_in34;
							uint32_t phi68 = phi_in45;
							uint32_t phi_in69 = phi47;
							uint32_t phi70 = phi_in49;
							uint32_t phi71 = phi_in40;
							uint32_t phi72 = phi_in50;
							uint32_t phi73 = phi_in51;
							uint64_t phi74 = phi22;
							uint64_t phi_in75 = 0;
							uint64_t phi76 = anon66 * 12;
							uint64_t phi_in77 = phi_in52;
							do
							{
								uint32_t phi78 = phi68;
								uint32_t phi_in79 = phi48;
								uint32_t phi_in80 = phi70;
								uint32_t phi81 = phi71;
								uint32_t phi82 = phi27;
								uint64_t phi_in83 = phi74;
								phi84 = phi_in75;
								phi76 = phi76;
								phi_in85 = phi_in67;
								uint32_t phi86 = phi78;
								uint32_t phi87 = phi_in46;
								phi47 = phi_in69;
								phi57 = phi_in79;
								uint32_t phi88 = phi_in80;
								uint32_t phi89 = phi81;
								uint32_t phi90 = phi72;
								uint32_t phi91 = phi73;
								uint32_t phi92 = phi82;
								uint64_t phi93 = phi_in83;
								uint64_t phi94 = phi_in77 & 0xffffffff;
								int64_t anon96 = (__sext int64_t)*(uint32_t*)(phi84 + phi76 + 6301632);
								uint32_t* anon95 = (uint32_t*)((anon96 << 2) + 6300992);
								if (*(uint32_t*)(phi_in83 + 24) < *anon95)
								{
									uint32_t phi99;
									uint64_t phi366;
									*anon95 = *(uint32_t*)(phi_in83 + 28);
									uint32_t phi_in97 = phi_in67;
									uint32_t phi98 = phi_in46;
									uint32_t anon100 = (uint32_t)phi_in77 + 8;
									phi99 = anon100;
									uint32_t phi_in101 = phi_in69;
									uint32_t phi_in102 = anon100;
									uint32_t phi103 = phi_in79;
									uint32_t phi_in104 = anon100;
									uint32_t phi_in105 = anon100;
									uint32_t phi106 = anon100;
									uint32_t phi107 = anon100;
									uint32_t phi108 = anon100;
									uint32_t phi109 = anon100;
									uint32_t phi110 = anon100;
									uint32_t phi111 = anon100;
									uint32_t phi112 = anon100;
									uint64_t phi113 = phi76;
									uint32_t phi114 = anon100;
									uint32_t phi115 = anon100;
									uint32_t phi116 = anon100;
									uint64_t phi_in117 = 0;
									uint64_t phi118 = anon96 * 12;
									uint64_t phi119 = phi_in77;
									do
									{
										uint32_t phi120 = phi_in97;
										uint32_t phi121 = phi78;
										uint32_t phi122 = phi98;
										uint32_t phi_in123 = phi99;
										uint32_t phi_in124 = phi103;
										uint32_t phi_in125 = phi81;
										uint32_t phi126 = phi106;
										uint32_t phi_in127 = phi107;
										uint32_t phi_in128 = phi108;
										uint32_t phi_in129 = phi72;
										uint32_t phi130 = phi109;
										uint32_t phi_in131 = phi110;
										uint32_t phi_in132 = phi73;
										uint32_t phi133 = phi111;
										uint32_t phi_in134 = phi82;
										uint64_t phi_in135 = phi113;
										uint32_t phi136 = phi114;
										uint32_t phi_in137 = phi116;
										uint64_t phi138 = phi118;
										phi78 = phi121;
										uint32_t phi139 = phi122;
										uint32_t phi140 = phi_in123;
										uint32_t phi141 = phi_in101;
										uint32_t phi_in142 = phi_in102;
										uint32_t phi143 = phi_in124;
										uint32_t phi_in144 = phi_in80;
										uint32_t phi145 = phi_in104;
										uint32_t phi146 = phi_in105;
										phi89 = phi_in125;
										uint32_t phi147 = phi126;
										uint32_t phi148 = phi_in127;
										uint32_t phi_in149 = phi_in128;
										uint32_t phi150 = phi_in129;
										uint32_t phi151 = phi_in131;
										uint32_t phi152 = phi_in132;
										uint32_t phi153 = phi112;
										phi82 = phi_in134;
										uint64_t phi154 = phi_in135;
										uint32_t phi155 = phi136;
										uint32_t phi156 = phi115;
										uint32_t phi157 = phi_in137;
										uint64_t phi158 = phi_in83;
										uint64_t phi159 = phi119;
										int64_t anon161 = (__sext int64_t)*(uint32_t*)(phi_in117 + phi118 + 6301632);
										uint32_t* anon160 = (uint32_t*)((anon161 << 2) + 6300992);
										if (*(uint32_t*)(phi_in83 + 28) < *anon160)
										{
											uint64_t phi182;
											*anon160 = *(uint32_t*)(phi_in83 + 40);
											*(uint32_t*)(phi_in83 + 120) = (uint32_t)phi119 + 9;
											uint64_t phi_in162 = 0;
											uint32_t phi163 = phi120;
											uint32_t phi164 = phi_in101;
											uint32_t phi165 = phi_in102;
											uint32_t phi_in166 = phi_in80;
											uint32_t phi167 = phi_in104;
											uint32_t phi168 = phi_in105;
											uint32_t phi169 = phi_in125;
											uint32_t phi170 = phi_in127;
											uint32_t phi171 = phi_in128;
											uint32_t phi172 = phi130;
											uint32_t phi_in173 = phi_in131;
											uint32_t phi174 = phi133;
											uint64_t phi_in175 = phi_in117;
											uint32_t phi_in176 = phi_in134;
											uint64_t phi_in177 = phi_in135;
											uint64_t phi_in178 = phi118;
											uint32_t phi_in179 = phi_in137;
											uint64_t phi180 = phi_in83;
											uint64_t phi181 = phi119 & 0xffffffff;
											do
											{
												uint64_t phi191;
												phi182 = phi_in162;
												phi120 = phi163;
												uint32_t phi_in183 = phi121;
												uint32_t phi184 = phi122;
												uint32_t phi185 = phi_in123;
												uint32_t phi_in186 = phi164;
												uint32_t phi_in187 = phi165;
												uint32_t phi188 = phi167;
												uint32_t phi_in189 = phi168;
												uint32_t phi190 = phi169;
												*(uint32_t*)(phi191 + 124) = phi126;
												uint32_t phi_in192 = phi170;
												uint32_t phi193 = phi171;
												uint32_t phi_in194 = phi172;
												phi_in131 = phi_in173;
												uint32_t phi195 = phi174;
												uint32_t phi_in196 = phi112;
												uint32_t phi_in197 = phi136;
												uint32_t phi198 = phi115;
												uint64_t phi199 = phi180;
												uint64_t phi_in200 = phi181;
												phi121 = phi_in183;
												uint32_t phi201 = phi184;
												uint32_t phi202 = phi_in186;
												uint32_t phi203 = phi_in187;
												uint32_t phi204 = phi_in124;
												uint32_t phi205 = phi_in166;
												uint32_t phi206 = phi188;
												phi168 = phi_in189;
												phi169 = phi190;
												uint32_t phi207 = *(uint32_t*)(phi191 + 124);
												uint32_t phi208 = phi_in192;
												uint32_t phi209 = phi193;
												uint32_t phi210 = phi_in129;
												phi130 = phi_in194;
												uint32_t phi211 = phi_in132;
												uint32_t phi212 = phi195;
												uint32_t phi213 = phi_in196;
												phi_in117 = phi_in175;
												uint32_t phi214 = phi_in176;
												phi_in135 = phi_in177;
												uint64_t phi_in215 = phi_in178;
												uint32_t phi216 = phi_in197;
												phi156 = phi198;
												uint32_t phi217 = phi_in179;
												uint64_t phi218 = phi_in200;
												int64_t anon220 = (__sext int64_t)*(uint32_t*)(phi182 + anon161 * 12 + 6301632);
												uint32_t* anon219 = (uint32_t*)((anon220 << 2) + 6300992);
												if (*(uint32_t*)(phi199 + 40) < *anon219)
												{
													uint64_t phi242;
													*anon219 = *(uint32_t*)(phi199 + 44);
													uint64_t phi_in221 = 0;
													uint32_t phi222 = phi120;
													uint32_t phi_in223 = phi_in183;
													uint32_t phi_in224 = phi185;
													uint32_t phi_in225 = phi_in186;
													uint32_t phi226 = phi_in187;
													uint32_t phi227 = phi_in166;
													uint32_t phi228 = phi_in192;
													uint32_t phi229 = phi_in129;
													uint32_t phi_in230 = phi_in194;
													uint32_t phi231 = phi_in131;
													uint32_t phi_in232 = phi_in132;
													uint32_t phi_in233 = phi_in196;
													uint64_t phi234 = phi_in175;
													uint32_t phi_in235 = phi_in176;
													uint64_t phi236 = phi_in177;
													uint64_t phi237 = phi_in178;
													uint32_t phi_in238 = phi_in197;
													uint32_t phi_in239 = phi_in179;
													uint64_t phi240 = phi199;
													uint64_t phi241 = phi_in200;
													do
													{
														phi242 = phi_in221;
														uint32_t phi243 = phi222;
														uint32_t phi244 = phi184;
														uint32_t phi245 = phi_in224;
														uint32_t phi246 = phi_in124;
														uint32_t phi_in247 = phi227;
														uint32_t phi248 = phi188;
														uint32_t phi249 = phi190;
														uint32_t phi250 = *(uint32_t*)(phi191 + 124);
														uint32_t phi251 = phi228;
														int64_t anon255 = (__sext int64_t)*(uint32_t*)(phi242 + anon220 * 12 + 6301632);
														int64_t anon254 = anon255 * 12;
														int64_t anon253 = (__sext int64_t)*(uint32_t*)(anon254 + 6301636);
														uint32_t* anon252 = (uint32_t*)((anon253 << 2) + 6300992);
														*anon252 = phi193;
														uint32_t phi_in256 = phi229;
														uint32_t phi257 = phi_in230;
														uint32_t phi258 = phi231;
														uint32_t phi259 = phi_in232;
														uint32_t phi260 = phi195;
														uint32_t phi261 = phi_in233;
														*(uint64_t*)(phi191 + 88) = phi234;
														uint32_t phi262 = phi_in235;
														uint64_t phi263 = phi236;
														uint32_t phi264 = phi_in238;
														uint32_t phi_in265 = phi198;
														phi191 = phi240;
														uint64_t phi_in266 = phi241;
														uint32_t phi267 = phi243;
														phi_in183 = phi_in223;
														uint32_t phi268 = phi245;
														uint32_t phi269 = phi_in225;
														uint32_t phi270 = phi226;
														phi_in124 = phi246;
														uint32_t phi271 = phi_in247;
														uint32_t phi272 = phi248;
														uint32_t phi_in273 = phi_in189;
														phi190 = phi249;
														phi207 = phi250;
														uint32_t phi274 = *anon252;
														uint32_t phi275 = phi_in256;
														uint32_t phi276 = phi258;
														phi211 = phi259;
														uint32_t phi277 = phi260;
														uint64_t phi278 = *(uint64_t*)(phi191 + 88);
														uint64_t phi279 = phi263;
														uint64_t phi280 = phi237;
														phi156 = phi_in265;
														phi_in179 = phi_in239;
														uint64_t phi281 = phi191;
														uint64_t phi282 = phi_in266;
														uint32_t* anon283 = (uint32_t*)((anon255 << 2) + 6300992);
														if (*(uint32_t*)(phi191 + 44) < *anon283)
														{
															*anon283 = *(uint32_t*)(phi191 + 64);
															uint32_t phi284 = phi_in223;
															uint32_t phi_in285 = phi244;
															uint32_t phi_in286 = phi_in225;
															uint32_t phi287 = phi226;
															uint32_t phi288 = phi_in247;
															phi272 = phi248;
															uint32_t phi_in289 = phi_in189;
															uint32_t phi290 = phi249;
															uint32_t phi291 = phi251;
															uint32_t phi_in292 = *anon252;
															uint32_t phi_in293 = phi_in256;
															uint32_t phi_in294 = phi257;
															uint32_t phi_in295 = phi261;
															uint64_t phi296 = *(uint64_t*)(phi191 + 88);
															uint32_t phi297 = phi262;
															*(uint64_t*)(phi281 + 104) = phi237;
															uint32_t phi298 = phi264;
															uint32_t phi299 = phi_in265;
															uint32_t phi300 = phi_in239;
															uint64_t phi301 = phi_in266;
															if (*(uint32_t*)(phi191 + 64) < *anon252)
															{
																uint32_t phi_in302 = phi243;
																uint32_t phi303 = phi244;
																uint32_t phi304 = phi245;
																uint32_t phi305 = phi_in225;
																*(uint32_t*)(phi306 + 96) = phi246;
																uint32_t phi_in307 = phi_in247;
																uint64_t phi308 = phi191;
																uint32_t phi309 = phi_in189;
																*(uint64_t*)(phi306 + 80) = anon253;
																uint32_t phi_in310 = phi_in256;
																uint32_t phi311 = phi259;
																uint64_t phi312 = *(uint64_t*)(phi191 + 88);
																uint32_t phi313 = phi262;
																uint64_t phi314 = phi263;
																uint64_t phi315 = phi_in266;
																if (phi251 < *anon252)
																{
																	*(uint32_t*)(phi191 + 124) = phi250;
																	*(uint64_t*)(phi191 + 112) = phi237;
																	*(uint64_t*)(phi191 + 104) = phi263;
																	*(uint32_t*)(phi191 + 96) = phi249;
																	*(uint64_t*)(phi191 + 80) = anon253;
																	w(4197873, anon13, (__sext int64_t)*anon252, (__zext uint64_t)*anon252);
																	phi_in302 = *(uint32_t*)(arg1 - 96);
																	phi_in223 = *(uint32_t*)(arg1 - 96);
																	phi303 = *(uint32_t*)(arg1 - 96);
																	phi304 = *(uint32_t*)(arg1 - 68);
																	phi305 = *(uint32_t*)(arg1 - 96);
																	phi226 = *(uint32_t*)(arg1 - 68);
																	*(uint32_t*)(phi306 + 96) = *(uint32_t*)(arg1 - 96);
																	phi_in307 = *(uint32_t*)(arg1 - 96);
																	phi248 = *(uint32_t*)(arg1 - 68);
																	phi308 = anon13;
																	phi309 = *(uint32_t*)(arg1 - 68);
																	*(uint64_t*)(phi306 + 80) = *(uint64_t*)(arg1 - 112);
																	phi249 = *(uint32_t*)(arg1 - 96);
																	phi_in310 = *(uint32_t*)(arg1 - 96);
																	phi311 = *(uint32_t*)(arg1 - 96);
																	phi312 = *(uint64_t*)(arg1 - 104);
																	phi313 = *(uint32_t*)(arg1 - 96);
																	phi314 = *(uint64_t*)(arg1 - 88);
																	phi237 = *(uint64_t*)(arg1 - 80);
																	phi315 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
																}
																uint32_t phi316 = phi303;
																phi245 = phi304;
																uint32_t phi_in317 = phi305;
																uint32_t phi318 = phi226;
																*(uint32_t*)(phi306 + 124) = phi248;
																uint64_t phi306 = phi308;
																uint32_t phi_in319 = phi249;
																uint32_t phi_in320 = phi311;
																uint64_t phi321 = phi312;
																uint32_t phi322 = phi313;
																*(uint64_t*)(phi306 + 104) = phi314;
																*(uint64_t*)(phi306 + 112) = phi237;
																uint64_t phi323 = phi315;
																uint32_t phi324 = phi_in302;
																uint32_t phi325 = phi_in223;
																*(uint32_t*)(phi191 + 88) = phi_in317;
																phi246 = *(uint32_t*)(phi306 + 96);
																uint32_t phi326 = phi_in307;
																uint64_t phi327 = *(uint64_t*)(phi306 + 80);
																uint32_t phi328 = phi_in319;
																uint32_t phi329 = phi_in310;
																phi259 = phi_in320;
																uint64_t phi330 = *(uint64_t*)(phi306 + 104);
																uint64_t phi331 = *(uint64_t*)(phi306 + 112);
																int64_t anon332 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi306 + 80) * 12 + 6301636);
																if (phi309 < *(uint32_t*)((anon332 << 2) + 6300992))
																{
																	*(uint64_t*)(phi306 + 88) = phi321;
																	w(4197793, anon13, anon332, (__zext uint64_t)*(uint32_t*)(phi306 + 120));
																	phi324 = *(uint32_t*)(arg1 - 96);
																	phi325 = *(uint32_t*)(arg1 - 96);
																	phi316 = *(uint32_t*)(arg1 - 96);
																	phi245 = alloca1.field14;
																	*(uint32_t*)(phi191 + 88) = *(uint32_t*)(arg1 - 96);
																	phi306 = anon13;
																	phi318 = alloca1.field14;
																	phi246 = *(uint32_t*)(arg1 - 96);
																	phi326 = *(uint32_t*)(arg1 - 96);
																	phi327 = *(uint64_t*)(arg1 - 112);
																	phi328 = *(uint32_t*)(arg1 - 96);
																	phi329 = *(uint32_t*)(arg1 - 96);
																	phi259 = *(uint32_t*)(arg1 - 96);
																	phi321 = *(uint64_t*)(arg1 - 104);
																	phi322 = *(uint32_t*)(arg1 - 96);
																	phi330 = *(uint64_t*)(arg1 - 88);
																	phi331 = *(uint64_t*)(arg1 - 80);
																	phi323 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
																}
																phi243 = phi324;
																uint32_t phi_in333 = phi325;
																phi_in285 = phi316;
																phi191 = phi306;
																phi300 = phi318;
																uint32_t phi_in334 = phi326;
																phi290 = phi328;
																uint32_t phi_in335 = phi329;
																*(uint64_t*)(phi191 + 80) = phi321;
																phi297 = phi322;
																phi263 = phi330;
																*(uint64_t*)(phi191 + 104) = phi331;
																uint64_t phi_in336 = phi323;
																phi284 = phi_in333;
																phi_in286 = *(uint32_t*)(phi191 + 88);
																phi287 = phi300;
																phi288 = phi_in334;
																phi272 = phi300;
																phi_in289 = phi300;
																phi250 = phi300;
																phi291 = phi300;
																phi_in292 = phi300;
																phi_in293 = phi_in335;
																phi_in294 = phi300;
																phi258 = phi300;
																phi260 = phi300;
																phi_in295 = phi300;
																phi296 = *(uint64_t*)(phi191 + 80);
																*(uint64_t*)(phi281 + 104) = *(uint64_t*)(phi191 + 104);
																phi298 = phi300;
																phi299 = phi300;
																phi301 = phi_in336;
																int64_t anon337 = (__sext int64_t)*(uint32_t*)(phi327 * 12 + 6301640);
																if (phi300 < *(uint32_t*)((anon337 << 2) + 6300992))
																{
																	*(uint32_t*)(phi191 + 112) = phi300;
																	*(uint64_t*)(phi191 + 96) = phi263;
																	w(4197395, anon13, anon337, (__zext uint64_t)*(uint32_t*)(phi191 + 120));
																	phi243 = *(uint32_t*)(arg1 - 104);
																	phi284 = *(uint32_t*)(arg1 - 104);
																	phi_in285 = *(uint32_t*)(arg1 - 104);
																	phi245 = *(uint32_t*)(arg1 - 80);
																	phi191 = anon13;
																	phi_in286 = *(uint32_t*)(arg1 - 104);
																	phi287 = *(uint32_t*)(arg1 - 80);
																	phi246 = *(uint32_t*)(arg1 - 104);
																	phi288 = *(uint32_t*)(arg1 - 104);
																	phi272 = *(uint32_t*)(arg1 - 80);
																	phi_in289 = *(uint32_t*)(arg1 - 80);
																	phi290 = *(uint32_t*)(arg1 - 104);
																	phi250 = *(uint32_t*)(arg1 - 80);
																	phi291 = *(uint32_t*)(arg1 - 80);
																	phi_in292 = *(uint32_t*)(arg1 - 80);
																	phi_in293 = *(uint32_t*)(arg1 - 104);
																	phi_in294 = *(uint32_t*)(arg1 - 80);
																	phi258 = *(uint32_t*)(arg1 - 80);
																	phi259 = *(uint32_t*)(arg1 - 104);
																	phi260 = *(uint32_t*)(arg1 - 80);
																	phi_in295 = *(uint32_t*)(arg1 - 80);
																	phi296 = *(uint64_t*)(arg1 - 112);
																	phi297 = *(uint32_t*)(arg1 - 104);
																	phi263 = *(uint64_t*)(arg1 - 96);
																	*(uint64_t*)(phi281 + 104) = *(uint64_t*)(arg1 - 88);
																	phi298 = *(uint32_t*)(arg1 - 80);
																	phi299 = *(uint32_t*)(arg1 - 80);
																	phi300 = *(uint32_t*)(arg1 - 80);
																	phi301 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
																}
															}
															uint32_t phi_in338 = phi243;
															*(uint32_t*)(phi281 + 88) = phi284;
															*(uint32_t*)(phi281 + 112) = phi245;
															phi281 = phi191;
															uint32_t phi_in339 = phi287;
															uint32_t phi_in340 = phi246;
															uint32_t phi_in341 = phi288;
															uint32_t phi_in342 = phi290;
															uint32_t phi_in343 = phi250;
															phi251 = phi291;
															phi275 = phi_in293;
															phi276 = phi258;
															uint32_t phi_in344 = phi259;
															uint32_t phi_in345 = phi260;
															phi278 = phi296;
															uint32_t phi346 = phi297;
															*(uint64_t*)(phi281 + 96) = phi263;
															uint64_t phi347 = *(uint64_t*)(phi281 + 104);
															phi264 = phi298;
															uint32_t phi_in348 = phi299;
															phi_in179 = phi300;
															phi282 = phi301;
															phi267 = phi_in338;
															phi_in183 = *(uint32_t*)(phi281 + 88);
															phi244 = phi_in285;
															phi268 = *(uint32_t*)(phi281 + 112);
															phi269 = phi_in286;
															phi270 = phi_in339;
															phi_in124 = phi_in340;
															phi271 = phi_in341;
															phi_in273 = phi_in289;
															phi190 = phi_in342;
															phi207 = phi_in343;
															phi274 = phi_in292;
															phi257 = phi_in294;
															phi211 = phi_in344;
															phi277 = phi_in345;
															phi261 = phi_in295;
															phi262 = phi346;
															phi279 = *(uint64_t*)(phi281 + 96);
															phi280 = phi347;
															phi156 = phi_in348;
															int64_t anon350 = (__sext int64_t)*(uint32_t*)(anon254 + 6301640);
															uint32_t* anon349 = (uint32_t*)((anon350 << 2) + 6300992);
															if (*(uint32_t*)(phi281 + 64) < *anon349)
															{
																*anon349 = *(uint32_t*)(phi281 + 112);
																uint32_t phi351 = phi_in338;
																uint32_t phi352 = *(uint32_t*)(phi281 + 88);
																uint32_t phi_in353 = phi_in285;
																uint32_t phi354 = *(uint32_t*)(phi281 + 112);
																phi269 = phi_in286;
																uint32_t phi355 = phi_in340;
																uint32_t phi356 = phi_in341;
																uint32_t phi_in357 = phi_in342;
																uint32_t phi358 = phi_in344;
																*(uint64_t*)(phi281 + 80) = phi278;
																uint64_t phi359 = *(uint64_t*)(phi281 + 96);
																int64_t anon361 = anon350 * 12;
																int64_t anon360 = (__sext int64_t)*(uint32_t*)(anon361 + 6301636);
																if (*(uint32_t*)(phi281 + 112) < *(uint32_t*)((anon360 << 2) + 6300992))
																{
																	*(uint64_t*)(phi281 + 104) = phi347;
																	*(uint64_t*)(phi281 + 80) = phi278;
																	w(4197948, anon13, anon360, (__zext uint64_t)*(uint32_t*)(phi281 + 120));
																	phi351 = *(uint32_t*)(arg1 - 104);
																	phi352 = *(uint32_t*)(arg1 - 104);
																	phi_in353 = *(uint32_t*)(arg1 - 104);
																	phi354 = *(uint32_t*)(arg1 - 80);
																	phi269 = *(uint32_t*)(arg1 - 104);
																	phi355 = *(uint32_t*)(arg1 - 104);
																	phi356 = *(uint32_t*)(arg1 - 104);
																	phi_in357 = *(uint32_t*)(arg1 - 104);
																	phi275 = *(uint32_t*)(arg1 - 104);
																	phi358 = *(uint32_t*)(arg1 - 104);
																	*(uint64_t*)(phi281 + 80) = *(uint64_t*)(arg1 - 112);
																	phi346 = *(uint32_t*)(arg1 - 104);
																	phi359 = *(uint64_t*)(arg1 - 96);
																	phi347 = *(uint64_t*)(arg1 - 88);
																	phi281 = anon13;
																	phi282 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
																}
																*(uint32_t*)(phi281 + 88) = phi351;
																uint32_t phi_in362 = phi352;
																phi_in179 = phi354;
																uint32_t phi_in363 = phi355;
																uint32_t phi_in364 = phi356;
																phi211 = phi358;
																phi262 = phi346;
																*(uint64_t*)(phi281 + 96) = phi359;
																*(uint64_t*)(phi281 + 104) = phi347;
																phi267 = *(uint32_t*)(phi281 + 88);
																phi_in183 = phi_in362;
																phi244 = phi_in353;
																phi268 = phi_in179;
																phi270 = phi_in179;
																phi_in124 = phi_in363;
																phi271 = phi_in364;
																phi272 = phi_in179;
																phi_in273 = phi_in179;
																phi190 = phi_in357;
																phi207 = phi_in179;
																phi251 = phi_in179;
																phi274 = phi_in179;
																phi257 = phi_in179;
																phi276 = phi_in179;
																phi277 = phi_in179;
																phi261 = phi_in179;
																phi278 = *(uint64_t*)(phi281 + 80);
																phi279 = *(uint64_t*)(phi281 + 96);
																phi280 = *(uint64_t*)(phi281 + 104);
																phi264 = phi_in179;
																phi156 = phi_in179;
																int64_t anon365 = (__sext int64_t)*(uint32_t*)(anon361 + 6301640);
																if (phi_in179 < *(uint32_t*)((anon365 << 2) + 6300992))
																{
																	*(uint32_t*)(phi281 + 112) = phi_in179;
																	w(4197231, anon13, anon365, (__zext uint64_t)*(uint32_t*)(phi281 + 120));
																	phi267 = alloca1.field8;
																	phi_in183 = alloca1.field8;
																	phi244 = alloca1.field8;
																	phi268 = alloca1.field12;
																	phi269 = alloca1.field8;
																	phi270 = alloca1.field12;
																	phi_in124 = alloca1.field8;
																	phi271 = alloca1.field8;
																	phi272 = alloca1.field12;
																	phi_in273 = alloca1.field12;
																	phi190 = alloca1.field8;
																	phi207 = alloca1.field12;
																	phi251 = alloca1.field12;
																	phi274 = alloca1.field12;
																	phi275 = alloca1.field8;
																	phi257 = alloca1.field12;
																	phi276 = alloca1.field12;
																	phi211 = alloca1.field8;
																	phi277 = alloca1.field12;
																	phi261 = alloca1.field12;
																	phi278 = alloca1.field7;
																	phi262 = alloca1.field8;
																	phi279 = alloca1.field10;
																	phi280 = alloca1.field11;
																	phi264 = alloca1.field12;
																	phi156 = alloca1.field12;
																	phi_in179 = alloca1.field12;
																	phi281 = anon13;
																	phi282 = (__zext uint64_t)alloca1.field8;
																}
															}
														}
														phi201 = phi244;
														phi185 = phi268;
														phi205 = phi271;
														phi209 = phi274;
														phi210 = phi275;
														phi130 = phi257;
														phi213 = phi261;
														phi_in215 = phi280;
														phi216 = phi264;
														phi199 = phi281;
														phi218 = phi282;
														phi120 = phi267;
														phi121 = phi_in183;
														phi202 = phi269;
														phi203 = phi270;
														phi204 = phi_in124;
														phi206 = phi272;
														phi168 = phi_in273;
														phi169 = phi190;
														phi208 = phi251;
														phi_in131 = phi276;
														phi212 = phi277;
														phi_in117 = phi278;
														phi214 = phi262;
														phi_in135 = phi279;
														phi217 = phi_in179;
														phi_in221 = phi242 + 4;
														phi222 = phi267;
														phi_in223 = phi_in183;
														phi184 = phi201;
														phi_in224 = phi185;
														phi_in225 = phi269;
														phi226 = phi270;
														phi227 = phi205;
														phi188 = phi272;
														phi_in189 = phi_in273;
														*(uint32_t*)(phi191 + 124) = phi207;
														phi228 = phi251;
														phi193 = phi209;
														phi229 = phi210;
														phi_in230 = phi130;
														phi231 = phi276;
														phi_in232 = phi211;
														phi195 = phi277;
														phi_in233 = phi213;
														phi234 = phi278;
														phi_in235 = phi262;
														phi236 = phi279;
														phi237 = phi_in215;
														phi_in238 = phi216;
														phi198 = phi156;
														phi_in239 = phi_in179;
														phi240 = phi199;
														phi241 = phi218;
													}
													while (phi242 != 8);
												}
												phi141 = phi202;
												phi_in144 = phi205;
												phi147 = phi207;
												phi133 = phi212;
												phi159 = phi218;
												phi138 = phi_in215;
												phi78 = phi121;
												phi139 = phi201;
												phi140 = phi185;
												phi_in142 = phi203;
												phi143 = phi204;
												phi145 = phi206;
												phi146 = phi168;
												phi89 = phi169;
												phi148 = phi208;
												phi_in149 = phi209;
												phi150 = phi210;
												phi151 = phi_in131;
												phi152 = phi211;
												phi153 = phi213;
												phi82 = phi214;
												phi154 = phi_in135;
												phi155 = phi216;
												phi157 = phi217;
												phi158 = phi199;
												phi_in162 = phi182 + 4;
												phi163 = phi120;
												phi122 = phi201;
												phi_in123 = phi185;
												phi164 = phi141;
												phi165 = phi203;
												phi_in124 = phi204;
												phi_in166 = phi_in144;
												phi167 = phi206;
												phi126 = phi147;
												phi170 = phi208;
												phi171 = phi209;
												phi_in129 = phi210;
												phi172 = phi130;
												phi_in173 = phi_in131;
												phi_in132 = phi211;
												phi174 = phi133;
												phi112 = phi213;
												phi_in175 = phi_in117;
												phi_in176 = phi214;
												phi_in177 = phi_in135;
												phi_in178 = phi_in215;
												phi136 = phi216;
												phi115 = phi156;
												phi_in179 = phi217;
												phi180 = phi199;
												phi181 = phi159;
											}
											while (phi182 != 8);
										}
										phi87 = phi139;
										phi366 = phi_in117;
										phi90 = phi150;
										phi91 = phi152;
										phi76 = phi154;
										phi_in85 = phi120;
										phi86 = phi78;
										phi47 = phi141;
										phi57 = phi143;
										phi88 = phi_in144;
										phi92 = phi82;
										phi93 = phi158;
										phi94 = phi159;
										phi_in97 = phi120;
										phi98 = phi87;
										phi99 = phi140;
										phi_in101 = phi141;
										phi_in102 = phi_in142;
										phi103 = phi143;
										phi_in80 = phi_in144;
										phi_in104 = phi145;
										phi_in105 = phi146;
										phi81 = phi89;
										phi106 = phi147;
										phi107 = phi148;
										phi108 = phi_in149;
										phi72 = phi90;
										phi109 = phi130;
										phi110 = phi151;
										phi73 = phi91;
										phi111 = phi133;
										phi112 = phi153;
										phi113 = phi76;
										phi114 = phi155;
										phi115 = phi156;
										phi116 = phi157;
										phi_in83 = phi158;
										phi_in117 = phi366 + 4;
										phi118 = phi138;
										phi119 = phi159;
									}
									while (phi366 != 8);
								}
								phi_in55 = phi86;
								phi_in367 = phi87;
								phi_in58 = phi88;
								phi_in368 = phi89;
								phi_in369 = phi90;
								phi_in370 = phi91;
								phi_in371 = phi92;
								phi64 = phi93;
								phi63 = phi94;
								phi_in67 = phi_in85;
								phi68 = phi_in55;
								phi_in46 = phi_in367;
								phi_in69 = phi47;
								phi48 = phi57;
								phi70 = phi_in58;
								phi71 = phi_in368;
								phi72 = phi_in369;
								phi73 = phi_in370;
								phi27 = phi_in371;
								phi74 = phi64;
								phi_in75 = phi84 + 4;
								phi_in77 = phi63;
							}
							while (phi84 != 8);
							phi_in54 = phi_in85;
							phi56 = phi_in367;
							phi_in53 = *(uint64_t*)(phi64 + 72);
							phi_in59 = phi_in368;
							phi60 = phi_in369;
							phi61 = phi_in370;
							phi62 = phi_in371;
						}
						phi372 = phi_in53;
						phi_in373 = phi64;
						phi_in34 = phi_in54;
						phi35 = phi_in55;
						phi36 = phi56;
						phi_in37 = phi47;
						phi38 = phi57;
						phi39 = phi_in58;
						phi_in40 = phi_in59;
						phi41 = phi60;
						phi42 = phi61;
						phi27 = phi62;
						phi43 = phi63;
						phi44 = phi372 + 4;
						phi22 = phi_in373;
					}
					while (phi372 != 8);
					phi_in29 = *(uint32_t*)(phi_in373 + 68);
					phi26 = phi_in58;
					phi_in30 = *(uint64_t*)(phi_in373 + 56);
					phi21 = (__zext uint64_t)phi_in58;
					*(uint32_t*)(phi22 + 68) = *(uint32_t*)(phi_in373 + 68);
					phi23 = phi_in58;
					phi28 = *(uint32_t*)(phi_in373 + 68);
					phi31 = phi_in373;
				}
				phi_in374 = phi26;
				phi375 = phi_in30;
				phi_in10 = phi31;
				phi_in20 = phi_in29;
				phi4 = phi_in374;
				phi24 = phi28;
				phi25 = phi375 + 4;
				phi22 = phi_in10;
			}
			while (phi375 != 8);
			phi14 = *(uint64_t*)(phi_in10 + 48);
			phi15 = phi_in374;
			phi_in16 = phi_in29;
			phi17 = (__zext uint64_t)phi_in374;
			phi18 = phi_in29;
			phi19 = phi_in374;
		}
		phi4 = phi15;
		phi_in5 = phi_in16;
		phi7 = phi17;
		*anon8 = phi18;
		phi11 = phi19;
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
				uint32_t anon13 = phi8 - (__zext uint32_t)(anon11 == ((uint32_t)(anon14 / 100) - (uint32_t)(anon12 << 32 >> 63)) * 100);
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
					if (*anon19 >= 1)
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
		uint64_t phi23;
		uint32_t anon24;
		uint32_t anon35;
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
			uint32_t phi_in14;
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
				phi_in14 = *anon11;
				anon16 = (uint32_t*)(phi10 - 4);
				phi15 = *anon16;
				phi17 = *anon12;
				phi18 = *anon11;
			}
			else 
			{
				phi13 = *anon11 & 0xf;
				phi_in14 = *anon12 & 0xf;
				phi_in19 = *anon16;
			}
			if (*anon11 < *anon12 && *anon11 < *anon16 || *anon11 >= *anon12 && *anon12 < *anon16)
			{
				uint32_t phi_in20 = phi13;
				*anon16 = phi_in14;
				*anon12 = *anon16 & 0xf;
				phi15 = *anon16;
				phi17 = phi_in20;
				phi18 = *anon16;
			}
			if (*anon11 < *anon12 && *anon11 < *anon16 || *anon11 >= *anon12 && *anon12 < *anon16 || *anon11 >= *anon16 && *anon11 < *anon12)
			{
				phi_in19 = phi15;
				*anon12 = phi17;
				*anon11 = phi18;
				struct { uint32_t field0; bool field1; } anon21 = llvm.ssub.with.overflow.i32(*anon12, *anon11);
				if ((uint8_t)((*anon12 & 0xf) - (*anon11 & 0xf) >> 31) != (__zext uint8_t)anon21.field1)
				{
					phi_in19 = *anon16;
				}
			}
			uint32_t phi22 = phi_in19;
			phi23 = 6301636;
			anon24 = phi22 + 1 & 0xff;
			if (anon24 != 0)
			{
				phi10 = phi10 + 12;
			}
		}
		while (anon24 != 0);
		do
		{
			uint32_t phi27;
			uint32_t phi28;
			uint32_t phi29;
			uint32_t* anon30;
			uint32_t phi_in31;
			uint32_t* anon25 = (uint32_t*)(phi23 + 4);
			uint32_t* anon26 = (uint32_t*)phi23;
			if (*anon25 < *anon26)
			{
				*anon26 = *anon25;
				*anon25 = *anon26;
				phi27 = *anon26;
				phi28 = *anon25;
				anon30 = (uint32_t*)((phi23 & 0xc) - 4);
				phi29 = *anon30;
				*anon26 = *anon26;
				*anon25 = *anon25;
			}
			else 
			{
				phi27 = *anon25 & 0xf;
				phi28 = *anon26 & 0xf;
				phi_in31 = *anon30;
			}
			if (*anon25 < *anon26 && *anon25 < *anon30 || *anon25 >= *anon26 && *anon26 < *anon30)
			{
				uint32_t phi_in32 = phi27;
				phi29 = phi28;
				*anon26 = *anon30 & 0xf;
				*anon30 = phi29;
				*anon26 = phi_in32;
				*anon25 = *anon30;
			}
			if (*anon25 < *anon26 && *anon25 < *anon30 || *anon25 >= *anon26 && *anon26 < *anon30 || *anon25 >= *anon30 && *anon25 < *anon26)
			{
				phi_in31 = phi29;
				struct { uint32_t field0; bool field1; } anon33 = llvm.ssub.with.overflow.i32(*anon26, *anon25);
				if ((uint8_t)((*anon26 & 0xf) - (*anon25 & 0xf) >> 31) != (__zext uint8_t)anon33.field1)
				{
					phi_in31 = *anon30;
				}
			}
			uint32_t phi34 = phi_in31;
			anon35 = phi34 + 1 & 0xff;
			if (anon35 != 0)
			{
				phi23 = phi23 + 12;
			}
		}
		while (anon35 != 0);
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
		if (*anon3 < 1)
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
		if (*anon3 < 1 && anon12 != 0)
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
		if (*anon3 < 1 && anon12 != 0)
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
			phi17 = 4294967196;
		}
		if (*(uint32_t*)(anon15 + 6300992) != 0)
		{
			dispatch16 = 1;
		}
		if (dispatch16 == 1)
		{
			puts((uint8_t*)0x401d36);
			phi17 = 4294967246;
		}
		if (dispatch16 == 1 || dispatch16 == 0)
		{
			*anon14 = *anon14 + phi17;
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
	while (!(anon45 != 0 && (!anon43) || anon45 != 0 && anon42 || anon45 != 0 && anon41 || anon40 != 0 && anon36));
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
