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
			phi7 = phi6;
			*phi1 = *anon8;
			*anon8 = phi7;
			phi9 = phi_in12;
			phi10 = *anon8;
		}
		if (*anon4 >= *phi1 && *phi1 < *anon8 || *anon4 < *phi1 && *anon4 < *anon8 || *anon4 >= *anon8 && *anon4 < *phi1)
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
void w(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	struct { uint8_t field0[4]; uint32_t field1; uint64_t field2; uint8_t field3[8]; uint32_t field4; uint32_t field5; uint8_t field6[48]; uint64_t field7; uint32_t field8; uint8_t field9[4]; uint64_t field10; uint64_t field11; uint32_t field12; uint8_t field13[8]; uint32_t field14; uint8_t field15[56]; uint64_t field16; } alloca1;
	uint32_t phi5;
	uint64_t phi_in11;
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
	uint64_t phi10 = 0;
	uint64_t anon12 = (uint64_t)&alloca1;
	phi_in11 = anon12;
	while (true)
	{
		uint32_t phi13 = phi5;
		int64_t anon15 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi_in11 + 48) + *(uint64_t*)(phi_in11 + 8) + 6301632);
		uint32_t* anon14 = (uint32_t*)((anon15 << 2) + 6300992);
		*anon14 = phi8;
		*(uint64_t*)(phi_in11 + 48) = phi10;
		uint64_t phi16 = *(uint64_t*)(phi_in11 + 48);
		uint32_t phi17 = phi_in4;
		phi7 = phi7 & 0xffffffff;
		phi8 = *anon14;
		uint32_t phi18 = phi9;
		uint64_t phi19 = phi_in11;
		if (phi9 < *anon14)
		{
			uint64_t phi_in32;
			*(uint64_t*)(phi_in11 + 16) = anon15 * 12;
			*(uint32_t*)(phi_in11 + 40) = (uint32_t)phi7 + 5;
			uint32_t phi_in20 = phi13;
			uint64_t phi21 = (__zext uint64_t)phi_in4;
			uint32_t phi22 = phi13;
			uint32_t phi23 = phi_in4;
			phi5 = phi13;
			*(uint64_t*)(phi_in24 + 56) = 0;
			uint64_t phi_in24 = phi_in11;
			while (true)
			{
				*(uint32_t*)(phi_in24 + 68) = phi22;
				uint32_t phi25 = phi5;
				uint32_t phi26 = phi_in20;
				uint32_t phi27 = phi_in4;
				uint64_t phi28 = *(uint64_t*)(phi_in24 + 56);
				uint64_t phi29 = phi21 & 0xffffffff;
				uint32_t phi30 = *(uint32_t*)(phi_in24 + 68);
				uint32_t phi31 = phi23;
				phi_in32 = phi_in24;
				int64_t anon34 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi_in24 + 56) + *(uint64_t*)(phi_in24 + 16) + 6301632);
				uint32_t* anon33 = (uint32_t*)((anon34 << 2) + 6300992);
				if (phi25 < *anon33)
				{
					*anon33 = *(uint32_t*)(phi_in24 + 4);
					*(uint64_t*)(phi_in24 + 32) = anon34 * 12;
					*(uint32_t*)(phi_in24 + 44) = (uint32_t)phi21 + 6;
					uint32_t phi35 = phi23;
					uint32_t phi36 = phi23;
					uint32_t phi37 = phi23;
					uint32_t phi_in38 = phi23;
					uint32_t phi39 = phi23;
					uint32_t phi40 = phi23;
					uint32_t phi_in41 = phi23;
					uint32_t phi_in42 = phi23;
					uint32_t phi_in43 = phi23;
					uint64_t phi_in44 = (__zext uint64_t)phi23;
					uint64_t phi45 = 0;
					uint64_t phi46 = phi_in24;
					while (true)
					{
						uint32_t phi47 = phi35;
						uint32_t phi48 = phi36;
						uint32_t phi_in49 = phi23;
						uint32_t phi_in50 = phi37;
						uint32_t phi_in51 = phi39;
						uint32_t phi_in52 = phi40;
						uint64_t phi53 = phi45;
						uint32_t phi54 = phi48;
						phi23 = phi_in49;
						phi37 = phi_in50;
						uint32_t phi55 = phi_in38;
						uint32_t phi56 = phi_in51;
						uint32_t phi_in57 = phi_in52;
						uint32_t phi58 = phi_in41;
						uint32_t phi_in59 = phi_in42;
						uint32_t phi_in60 = phi_in43;
						uint64_t phi61 = phi_in44 & 0xffffffff;
						phi_in32 = phi46;
						int64_t anon63 = (__sext int64_t)*(uint32_t*)(phi53 + *(uint64_t*)(phi46 + 32) + 6301632);
						uint32_t* anon62 = (uint32_t*)((anon63 << 2) + 6300992);
						if (*(uint32_t*)(phi46 + 4) < *anon62)
						{
							uint32_t phi_in88;
							uint32_t phi_in89;
							uint64_t phi_in92;
							uint32_t phi_in348;
							uint32_t phi_in349;
							uint32_t phi_in350;
							uint32_t phi_in351;
							*(uint64_t*)(phi46 + 72) = phi53;
							*anon62 = *(uint32_t*)(phi46 + 24);
							*(uint32_t*)(phi46 + 64) = (uint32_t)phi_in44 + 7;
							uint32_t phi64 = phi47;
							uint32_t phi65 = phi_in49;
							uint32_t phi66 = phi_in50;
							uint32_t phi67 = phi_in38;
							uint32_t phi68 = phi_in51;
							uint32_t phi69 = phi_in52;
							uint32_t phi_in70 = phi_in41;
							uint32_t phi_in71 = phi_in42;
							uint32_t phi72 = phi_in43;
							uint64_t phi73 = phi46;
							uint64_t phi74 = 0;
							uint64_t phi75 = anon63 * 12;
							uint64_t phi_in76 = phi_in44;
							while (true)
							{
								uint32_t phi_in77 = phi64;
								uint32_t phi_in78 = phi48;
								uint32_t phi_in79 = phi65;
								uint32_t phi80 = phi66;
								uint32_t phi81 = phi68;
								uint32_t phi82 = phi72;
								uint64_t phi_in83 = phi73;
								uint64_t phi84 = phi75;
								uint32_t phi85 = phi_in77;
								phi48 = phi_in78;
								uint32_t phi86 = phi_in79;
								uint32_t phi87 = phi80;
								phi_in88 = phi67;
								phi_in89 = phi81;
								phi_in57 = phi69;
								uint32_t phi90 = phi_in70;
								uint32_t phi91 = phi_in71;
								phi_in92 = phi_in83;
								uint64_t phi93 = phi_in76 & 0xffffffff;
								int64_t anon95 = (__sext int64_t)*(uint32_t*)(phi74 + phi75 + 6301632);
								uint32_t* anon94 = (uint32_t*)((anon95 << 2) + 6300992);
								if (*(uint32_t*)(phi_in83 + 24) < *anon94)
								{
									uint32_t phi_in98;
									uint64_t phi347;
									*anon94 = *(uint32_t*)(phi_in83 + 28);
									uint32_t phi96 = phi_in78;
									uint32_t phi_in97 = phi_in79;
									uint32_t anon99 = (uint32_t)phi_in76 + 8;
									phi_in98 = anon99;
									uint32_t phi100 = anon99;
									uint32_t phi_in101 = anon99;
									uint32_t phi_in102 = anon99;
									uint32_t phi_in103 = anon99;
									uint32_t phi_in104 = anon99;
									uint32_t phi105 = anon99;
									uint32_t phi106 = phi_in70;
									uint32_t phi_in107 = anon99;
									uint32_t phi108 = anon99;
									uint32_t phi_in109 = phi_in71;
									uint32_t phi110 = anon99;
									uint32_t phi111 = anon99;
									uint32_t phi_in112 = phi82;
									uint64_t phi_in113 = phi75;
									uint32_t phi_in114 = anon99;
									uint32_t phi_in115 = anon99;
									uint32_t phi116 = anon99;
									uint64_t phi117 = 0;
									uint64_t phi118 = anon95 * 12;
									uint64_t phi119 = phi_in76;
									do
									{
										uint32_t phi120 = phi80;
										uint32_t phi_in121 = phi100;
										uint32_t phi_in122 = phi67;
										uint32_t phi_in123 = phi81;
										uint32_t phi124 = phi69;
										uint32_t phi125 = phi_in103;
										uint32_t phi_in126 = phi105;
										uint32_t phi127 = phi106;
										uint32_t phi128 = phi110;
										uint32_t phi129 = phi111;
										uint32_t phi130 = phi116;
										uint64_t phi_in131 = phi117;
										phi118 = phi118;
										uint32_t phi132 = phi_in77;
										phi86 = phi_in97;
										uint32_t phi133 = phi_in98;
										uint32_t phi134 = phi120;
										uint32_t phi135 = phi_in121;
										uint32_t phi136 = phi_in122;
										uint32_t phi137 = phi_in123;
										uint32_t phi_in138 = phi_in101;
										uint32_t phi139 = phi_in102;
										uint32_t phi140 = phi124;
										uint32_t phi141 = phi_in104;
										uint32_t phi_in142 = phi_in126;
										uint32_t phi143 = phi127;
										uint32_t phi_in144 = phi_in107;
										uint32_t phi145 = phi108;
										uint32_t phi146 = phi_in109;
										uint32_t phi147 = phi128;
										uint32_t phi_in148 = phi129;
										uint32_t phi149 = phi_in112;
										uint32_t phi150 = phi_in115;
										uint32_t phi151 = phi130;
										uint64_t phi_in152 = phi_in83;
										phi93 = phi119;
										int64_t anon154 = (__sext int64_t)*(uint32_t*)(phi_in131 + phi118 + 6301632);
										uint32_t* anon153 = (uint32_t*)((anon154 << 2) + 6300992);
										if (*(uint32_t*)(phi_in83 + 28) < *anon153)
										{
											uint64_t phi176;
											*anon153 = *(uint32_t*)(phi_in83 + 40);
											*(uint32_t*)(phi_in83 + 120) = (uint32_t)phi119 + 9;
											uint64_t phi_in155 = 0;
											uint32_t phi_in156 = phi_in77;
											uint32_t phi_in157 = phi_in97;
											uint32_t phi158 = phi_in98;
											uint32_t phi_in159 = phi_in121;
											uint32_t phi160 = phi_in122;
											uint32_t phi161 = phi_in123;
											uint32_t phi162 = phi_in101;
											uint32_t phi163 = phi_in102;
											uint32_t phi164 = phi125;
											uint32_t phi165 = phi_in104;
											uint32_t phi_in166 = phi_in126;
											uint32_t phi_in167 = phi_in109;
											uint64_t phi168 = phi_in131;
											uint32_t phi_in169 = phi_in112;
											uint64_t phi_in170 = phi_in113;
											uint64_t phi_in171 = phi118;
											uint32_t phi_in172 = phi_in114;
											uint32_t phi173 = phi_in115;
											uint64_t phi174 = phi_in83;
											uint64_t phi175 = phi119 & 0xffffffff;
											do
											{
												uint64_t phi181;
												phi176 = phi_in155;
												uint32_t phi_in177 = phi96;
												uint32_t phi_in178 = phi120;
												uint32_t phi179 = phi160;
												uint32_t phi180 = phi162;
												*(uint32_t*)(phi181 + 96) = phi124;
												uint32_t phi_in182 = phi165;
												uint32_t phi183 = phi127;
												uint32_t phi184 = phi108;
												uint32_t phi_in185 = phi128;
												uint64_t phi186 = phi168;
												uint32_t phi187 = phi173;
												uint32_t phi188 = phi130;
												uint64_t phi_in189 = phi174;
												phi132 = phi_in156;
												uint32_t phi190 = phi_in177;
												uint32_t phi191 = phi_in157;
												uint32_t phi192 = phi158;
												uint32_t phi193 = phi_in178;
												phi_in121 = phi_in159;
												phi_in122 = phi179;
												phi_in123 = phi161;
												phi_in101 = phi180;
												uint32_t phi194 = phi163;
												phi124 = *(uint32_t*)(phi181 + 96);
												phi_in103 = phi164;
												uint32_t phi195 = phi_in182;
												phi_in126 = phi_in166;
												uint32_t phi196 = phi183;
												uint32_t phi197 = phi_in107;
												uint32_t phi198 = phi184;
												uint32_t phi199 = phi_in167;
												phi128 = phi_in185;
												uint32_t phi200 = phi129;
												uint64_t phi201 = phi186;
												phi_in112 = phi_in169;
												uint64_t phi202 = phi_in170;
												uint64_t phi203 = phi_in171;
												uint32_t phi204 = phi_in172;
												phi130 = phi188;
												uint64_t phi205 = phi_in189;
												uint64_t phi206 = phi175;
												int64_t anon208 = (__sext int64_t)*(uint32_t*)(phi176 + anon154 * 12 + 6301632);
												uint32_t* anon207 = (uint32_t*)((anon208 << 2) + 6300992);
												if (*(uint32_t*)(phi_in189 + 40) < *anon207)
												{
													uint64_t phi211;
													uint64_t phi219;
													*anon207 = *(uint32_t*)(phi_in189 + 44);
													uint64_t phi_in209 = 0;
													uint32_t phi210 = phi_in156;
													*(uint32_t*)(phi211 + 88) = phi_in177;
													uint32_t phi212 = phi_in157;
													uint32_t phi_in213 = phi_in159;
													uint32_t phi214 = phi_in182;
													int64_t anon218 = (__sext int64_t)*(uint32_t*)(phi219 + anon208 * 12 + 6301632);
													int64_t anon217 = anon218 * 12;
													int64_t anon216 = (__sext int64_t)*(uint32_t*)(anon217 + 6301636);
													uint32_t* anon215 = (uint32_t*)((anon216 << 2) + 6300992);
													*anon215 = phi_in166;
													uint32_t phi_in220 = phi_in107;
													uint32_t phi221 = phi_in167;
													uint32_t phi_in222 = phi_in185;
													uint32_t phi223 = phi_in169;
													uint64_t phi224 = phi_in170;
													*(uint64_t*)(phi181 + 112) = phi_in171;
													uint32_t phi_in225 = phi_in172;
													uint32_t phi226 = phi187;
													phi181 = phi_in189;
													do
													{
														uint64_t phi230;
														phi219 = phi_in209;
														uint32_t phi_in227 = phi210;
														uint32_t phi_in228 = phi158;
														uint32_t phi229 = phi_in178;
														*(uint32_t*)(phi230 + 96) = phi179;
														uint32_t phi_in231 = phi180;
														uint32_t phi232 = phi163;
														uint32_t phi233 = *(uint32_t*)(phi181 + 96);
														*(uint32_t*)(phi181 + 124) = phi164;
														uint32_t phi234 = phi214;
														uint32_t phi235 = phi183;
														uint32_t phi_in236 = phi184;
														uint32_t phi237 = phi221;
														uint32_t phi238 = phi_in222;
														uint32_t phi_in239 = phi129;
														*(uint64_t*)(phi181 + 88) = phi186;
														uint32_t phi240 = phi223;
														*(uint64_t*)(phi181 + 104) = phi224;
														*(uint64_t*)(phi211 + 104) = *(uint64_t*)(phi181 + 112);
														uint32_t phi241 = phi_in225;
														uint32_t phi_in242 = phi226;
														uint32_t phi_in243 = phi188;
														uint64_t phi244 = phi175;
														uint32_t phi245 = phi_in227;
														uint32_t phi246 = *(uint32_t*)(phi211 + 88);
														uint32_t phi247 = phi212;
														phi192 = phi_in228;
														uint32_t phi248 = phi_in213;
														uint32_t phi249 = *(uint32_t*)(phi230 + 96);
														uint32_t phi_in250 = phi_in231;
														uint32_t phi251 = phi232;
														uint32_t phi252 = phi233;
														uint32_t phi253 = *(uint32_t*)(phi181 + 124);
														uint32_t phi254 = *anon215;
														uint32_t phi255 = phi235;
														uint32_t phi256 = phi_in220;
														phi184 = phi_in236;
														phi_in167 = phi237;
														uint32_t phi257 = phi_in239;
														uint64_t phi258 = *(uint64_t*)(phi181 + 88);
														uint32_t phi259 = phi240;
														uint64_t phi260 = *(uint64_t*)(phi181 + 104);
														uint64_t phi261 = *(uint64_t*)(phi211 + 104);
														uint32_t phi262 = phi_in242;
														uint32_t phi263 = phi_in243;
														phi_in189 = phi181;
														uint64_t phi_in264 = phi244;
														uint32_t* anon265 = (uint32_t*)((anon218 << 2) + 6300992);
														if (*(uint32_t*)(phi181 + 44) < *anon265)
														{
															uint64_t phi319;
															*anon265 = *(uint32_t*)(phi181 + 64);
															uint32_t phi266 = phi_in227;
															*(uint32_t*)(phi211 + 112) = phi_in228;
															phi211 = phi181;
															uint32_t phi267 = phi229;
															uint32_t phi_in268 = phi_in213;
															uint32_t phi269 = *(uint32_t*)(phi230 + 96);
															uint32_t phi270 = phi161;
															uint32_t phi_in271 = phi_in231;
															uint32_t phi272 = phi232;
															phi253 = *(uint32_t*)(phi181 + 124);
															uint32_t phi_in273 = phi234;
															uint32_t phi_in274 = *anon215;
															uint32_t phi275 = phi235;
															uint32_t phi276 = phi_in220;
															uint32_t phi277 = phi_in236;
															uint32_t phi_in278 = phi237;
															uint32_t phi279 = phi238;
															uint32_t phi280 = phi_in239;
															*(uint64_t*)(phi211 + 80) = *(uint64_t*)(phi181 + 88);
															uint32_t phi281 = phi240;
															uint64_t phi282 = *(uint64_t*)(phi181 + 104);
															uint32_t phi283 = phi241;
															uint32_t phi284 = phi_in242;
															uint64_t phi285 = phi244;
															if (*(uint32_t*)(phi181 + 64) < *anon215)
															{
																uint32_t phi_in286 = phi_in227;
																uint32_t phi287 = *(uint32_t*)(phi211 + 88);
																uint32_t phi288 = phi212;
																uint32_t phi289 = phi_in228;
																uint32_t phi290 = phi229;
																uint32_t phi291 = phi_in213;
																uint32_t phi292 = phi161;
																uint32_t phi293 = phi_in231;
																uint64_t phi294 = phi181;
																*(uint64_t*)(phi230 + 80) = anon216;
																uint32_t phi295 = phi233;
																uint64_t phi296 = *(uint64_t*)(phi181 + 88);
																uint64_t phi297 = *(uint64_t*)(phi181 + 104);
																uint64_t phi298 = *(uint64_t*)(phi211 + 104);
																if (phi234 < *anon215)
																{
																	*(uint64_t*)(phi181 + 112) = *(uint64_t*)(phi211 + 104);
																	*(uint32_t*)(phi181 + 96) = phi233;
																	*(uint64_t*)(phi181 + 80) = anon216;
																	w(4197873, anon12, (__sext int64_t)*anon215, (__zext uint64_t)*anon215);
																	phi_in286 = *(uint32_t*)(arg1 - 96);
																	phi287 = *(uint32_t*)(arg1 - 96);
																	phi288 = *(uint32_t*)(arg1 - 96);
																	phi289 = *(uint32_t*)(arg1 - 68);
																	phi290 = *(uint32_t*)(arg1 - 96);
																	phi291 = *(uint32_t*)(arg1 - 68);
																	*(uint32_t*)(phi230 + 96) = *(uint32_t*)(arg1 - 96);
																	phi292 = *(uint32_t*)(arg1 - 96);
																	phi293 = *(uint32_t*)(arg1 - 68);
																	phi294 = anon12;
																	phi232 = *(uint32_t*)(arg1 - 68);
																	*(uint64_t*)(phi230 + 80) = *(uint64_t*)(arg1 - 112);
																	phi295 = *(uint32_t*)(arg1 - 96);
																	phi235 = *(uint32_t*)(arg1 - 96);
																	phi237 = *(uint32_t*)(arg1 - 96);
																	phi296 = *(uint64_t*)(arg1 - 104);
																	phi240 = *(uint32_t*)(arg1 - 96);
																	phi297 = *(uint64_t*)(arg1 - 88);
																	phi298 = *(uint64_t*)(arg1 - 80);
																	phi244 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
																}
																uint32_t phi299 = phi287;
																uint32_t phi_in300 = phi288;
																uint32_t phi_in301 = phi289;
																uint32_t phi302 = phi290;
																uint32_t phi303 = phi291;
																uint32_t phi_in304 = phi292;
																*(uint32_t*)(phi230 + 124) = phi293;
																phi230 = phi294;
																uint32_t phi305 = phi235;
																*(uint64_t*)(phi230 + 88) = phi296;
																uint32_t phi306 = phi240;
																*(uint64_t*)(phi230 + 104) = phi297;
																*(uint64_t*)(phi230 + 112) = phi298;
																uint64_t phi307 = phi244;
																uint32_t phi308 = phi_in286;
																uint32_t phi_in309 = phi_in300;
																uint32_t phi_in310 = *(uint32_t*)(phi230 + 96);
																uint32_t phi_in311 = phi_in304;
																uint64_t phi312 = *(uint64_t*)(phi230 + 80);
																uint64_t phi313 = *(uint64_t*)(phi230 + 88);
																*(uint64_t*)(phi230 + 96) = *(uint64_t*)(phi230 + 104);
																*(uint64_t*)(phi211 + 104) = *(uint64_t*)(phi230 + 112);
																int64_t anon314 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi230 + 80) * 12 + 6301636);
																if (phi232 < *(uint32_t*)((anon314 << 2) + 6300992))
																{
																	w(4197793, anon12, anon314, (__zext uint64_t)*(uint32_t*)(phi230 + 120));
																	phi308 = *(uint32_t*)(arg1 - 96);
																	phi299 = *(uint32_t*)(arg1 - 96);
																	phi_in309 = *(uint32_t*)(arg1 - 96);
																	phi_in301 = alloca1.field14;
																	phi302 = *(uint32_t*)(arg1 - 96);
																	phi230 = anon12;
																	phi303 = alloca1.field14;
																	phi_in310 = *(uint32_t*)(arg1 - 96);
																	phi_in311 = *(uint32_t*)(arg1 - 96);
																	phi312 = *(uint64_t*)(arg1 - 112);
																	phi295 = *(uint32_t*)(arg1 - 96);
																	phi305 = *(uint32_t*)(arg1 - 96);
																	phi237 = *(uint32_t*)(arg1 - 96);
																	phi313 = *(uint64_t*)(arg1 - 104);
																	phi306 = *(uint32_t*)(arg1 - 96);
																	*(uint64_t*)(phi230 + 96) = *(uint64_t*)(arg1 - 88);
																	*(uint64_t*)(phi211 + 104) = *(uint64_t*)(arg1 - 80);
																	phi307 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
																}
																uint32_t phi_in315 = phi308;
																*(uint32_t*)(phi211 + 88) = phi299;
																*(uint32_t*)(phi230 + 88) = phi302;
																phi280 = phi303;
																phi233 = phi295;
																phi275 = phi305;
																uint32_t phi_in316 = phi237;
																*(uint64_t*)(phi230 + 80) = phi313;
																uint32_t phi_in317 = phi306;
																phi282 = *(uint64_t*)(phi230 + 96);
																phi285 = phi307;
																phi266 = phi_in315;
																phi212 = phi_in309;
																*(uint32_t*)(phi211 + 112) = phi_in301;
																phi211 = phi230;
																phi267 = *(uint32_t*)(phi230 + 88);
																phi_in268 = phi280;
																phi269 = phi_in310;
																phi270 = phi_in311;
																phi_in271 = phi280;
																phi272 = phi280;
																phi253 = phi280;
																phi_in273 = phi280;
																phi_in274 = phi280;
																phi276 = phi280;
																phi277 = phi280;
																phi_in278 = phi_in316;
																phi279 = phi280;
																*(uint64_t*)(phi211 + 80) = *(uint64_t*)(phi230 + 80);
																phi281 = phi_in317;
																phi283 = phi280;
																phi284 = phi280;
																phi_in243 = phi280;
																int64_t anon318 = (__sext int64_t)*(uint32_t*)(phi312 * 12 + 6301640);
																if (phi280 < *(uint32_t*)((anon318 << 2) + 6300992))
																{
																	*(uint32_t*)(phi230 + 112) = phi280;
																	*(uint64_t*)(phi230 + 104) = *(uint64_t*)(phi211 + 104);
																	*(uint64_t*)(phi230 + 96) = phi282;
																	w(4197395, anon12, anon318, (__zext uint64_t)*(uint32_t*)(phi230 + 120));
																	phi266 = *(uint32_t*)(arg1 - 104);
																	*(uint32_t*)(phi211 + 88) = *(uint32_t*)(arg1 - 104);
																	phi212 = *(uint32_t*)(arg1 - 104);
																	*(uint32_t*)(phi211 + 112) = *(uint32_t*)(arg1 - 80);
																	phi211 = anon12;
																	phi267 = *(uint32_t*)(arg1 - 104);
																	phi_in268 = *(uint32_t*)(arg1 - 80);
																	phi269 = *(uint32_t*)(arg1 - 104);
																	phi270 = *(uint32_t*)(arg1 - 104);
																	phi_in271 = *(uint32_t*)(arg1 - 80);
																	phi272 = *(uint32_t*)(arg1 - 80);
																	phi233 = *(uint32_t*)(arg1 - 104);
																	phi253 = *(uint32_t*)(arg1 - 80);
																	phi_in273 = *(uint32_t*)(arg1 - 80);
																	phi_in274 = *(uint32_t*)(arg1 - 80);
																	phi275 = *(uint32_t*)(arg1 - 104);
																	phi276 = *(uint32_t*)(arg1 - 80);
																	phi277 = *(uint32_t*)(arg1 - 80);
																	phi_in278 = *(uint32_t*)(arg1 - 104);
																	phi279 = *(uint32_t*)(arg1 - 80);
																	phi280 = *(uint32_t*)(arg1 - 80);
																	*(uint64_t*)(phi211 + 80) = *(uint64_t*)(arg1 - 112);
																	phi281 = *(uint32_t*)(arg1 - 104);
																	phi282 = *(uint64_t*)(arg1 - 96);
																	*(uint64_t*)(phi211 + 104) = *(uint64_t*)(arg1 - 88);
																	phi283 = *(uint32_t*)(arg1 - 80);
																	phi284 = *(uint32_t*)(arg1 - 80);
																	phi_in243 = *(uint32_t*)(arg1 - 80);
																	phi285 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
																}
															}
															*(uint32_t*)(phi319 + 88) = phi266;
															uint32_t phi_in320 = phi212;
															uint32_t phi321 = phi267;
															uint32_t phi_in322 = phi269;
															uint32_t phi323 = phi270;
															uint32_t phi_in324 = phi272;
															uint32_t phi_in325 = phi233;
															uint32_t phi_in326 = phi275;
															phi256 = phi276;
															uint32_t phi_in327 = phi277;
															uint32_t phi_in328 = phi279;
															phi257 = phi280;
															uint32_t phi_in329 = phi281;
															*(uint64_t*)(phi211 + 96) = phi282;
															phi261 = *(uint64_t*)(phi211 + 104);
															phi241 = phi283;
															uint32_t phi_in330 = phi284;
															uint64_t phi331 = phi285;
															phi245 = *(uint32_t*)(phi319 + 88);
															phi246 = *(uint32_t*)(phi211 + 88);
															phi247 = phi_in320;
															phi192 = *(uint32_t*)(phi211 + 112);
															phi229 = phi321;
															phi248 = phi_in268;
															phi249 = phi_in322;
															phi161 = phi323;
															phi_in250 = phi_in271;
															phi251 = phi_in324;
															phi252 = phi_in325;
															phi234 = phi_in273;
															phi254 = phi_in274;
															phi255 = phi_in326;
															phi184 = phi_in327;
															phi_in167 = phi_in278;
															phi238 = phi_in328;
															phi258 = *(uint64_t*)(phi211 + 80);
															phi259 = phi_in329;
															phi260 = *(uint64_t*)(phi211 + 96);
															phi262 = phi_in330;
															phi263 = phi_in243;
															phi_in189 = phi211;
															phi_in264 = phi331;
															int64_t anon333 = (__sext int64_t)*(uint32_t*)(anon217 + 6301640);
															uint32_t* anon332 = (uint32_t*)((anon333 << 2) + 6300992);
															if (*(uint32_t*)(phi211 + 64) < *anon332)
															{
																*anon332 = *(uint32_t*)(phi211 + 112);
																uint32_t phi334 = *(uint32_t*)(phi211 + 88);
																phi247 = phi_in320;
																uint32_t phi335 = *(uint32_t*)(phi211 + 112);
																uint32_t phi_in336 = phi_in322;
																uint32_t phi337 = phi_in325;
																uint32_t phi338 = phi_in326;
																uint32_t phi339 = phi_in278;
																uint64_t phi340 = *(uint64_t*)(phi211 + 80);
																phi259 = phi_in329;
																*(uint64_t*)(phi319 + 96) = *(uint64_t*)(phi211 + 96);
																*(uint64_t*)(phi319 + 104) = phi261;
																phi319 = phi211;
																int64_t anon342 = anon333 * 12;
																int64_t anon341 = (__sext int64_t)*(uint32_t*)(anon342 + 6301636);
																if (*(uint32_t*)(phi211 + 112) < *(uint32_t*)((anon341 << 2) + 6300992))
																{
																	*(uint64_t*)(phi211 + 104) = phi261;
																	w(4197948, anon12, anon341, (__zext uint64_t)*(uint32_t*)(phi211 + 120));
																	*(uint32_t*)(phi319 + 88) = *(uint32_t*)(arg1 - 104);
																	phi334 = *(uint32_t*)(arg1 - 104);
																	phi247 = *(uint32_t*)(arg1 - 104);
																	phi335 = *(uint32_t*)(arg1 - 80);
																	phi321 = *(uint32_t*)(arg1 - 104);
																	phi_in336 = *(uint32_t*)(arg1 - 104);
																	phi323 = *(uint32_t*)(arg1 - 104);
																	phi337 = *(uint32_t*)(arg1 - 104);
																	phi338 = *(uint32_t*)(arg1 - 104);
																	phi339 = *(uint32_t*)(arg1 - 104);
																	phi340 = *(uint64_t*)(arg1 - 112);
																	phi259 = *(uint32_t*)(arg1 - 104);
																	*(uint64_t*)(phi319 + 96) = *(uint64_t*)(arg1 - 96);
																	*(uint64_t*)(phi319 + 104) = *(uint64_t*)(arg1 - 88);
																	phi319 = anon12;
																	phi331 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
																}
																uint32_t phi_in343 = phi334;
																phi_in250 = phi335;
																phi229 = phi321;
																phi161 = phi323;
																phi252 = phi337;
																uint32_t phi_in344 = phi338;
																uint32_t phi_in345 = phi339;
																*(uint64_t*)(phi319 + 80) = phi340;
																phi261 = *(uint64_t*)(phi319 + 104);
																phi_in264 = phi331;
																phi245 = *(uint32_t*)(phi319 + 88);
																phi246 = phi_in343;
																phi192 = phi_in250;
																phi248 = phi_in250;
																phi249 = phi_in336;
																phi251 = phi_in250;
																phi253 = phi_in250;
																phi234 = phi_in250;
																phi254 = phi_in250;
																phi255 = phi_in344;
																phi256 = phi_in250;
																phi184 = phi_in250;
																phi_in167 = phi_in345;
																phi238 = phi_in250;
																phi257 = phi_in250;
																phi258 = *(uint64_t*)(phi319 + 80);
																phi260 = *(uint64_t*)(phi319 + 96);
																phi241 = phi_in250;
																phi262 = phi_in250;
																phi263 = phi_in250;
																phi_in189 = phi319;
																int64_t anon346 = (__sext int64_t)*(uint32_t*)(anon342 + 6301640);
																if (phi_in250 < *(uint32_t*)((anon346 << 2) + 6300992))
																{
																	*(uint32_t*)(phi319 + 112) = phi_in250;
																	*(uint64_t*)(phi319 + 104) = phi261;
																	w(4197231, anon12, anon346, (__zext uint64_t)*(uint32_t*)(phi319 + 120));
																	phi245 = alloca1.field8;
																	phi246 = alloca1.field8;
																	phi247 = alloca1.field8;
																	phi192 = alloca1.field12;
																	phi229 = alloca1.field8;
																	phi248 = alloca1.field12;
																	phi249 = alloca1.field8;
																	phi161 = alloca1.field8;
																	phi_in250 = alloca1.field12;
																	phi251 = alloca1.field12;
																	phi252 = alloca1.field8;
																	phi253 = alloca1.field12;
																	phi234 = alloca1.field12;
																	phi254 = alloca1.field12;
																	phi255 = alloca1.field8;
																	phi256 = alloca1.field12;
																	phi184 = alloca1.field12;
																	phi_in167 = alloca1.field8;
																	phi238 = alloca1.field12;
																	phi257 = alloca1.field12;
																	phi258 = alloca1.field7;
																	phi259 = alloca1.field8;
																	phi260 = alloca1.field10;
																	phi261 = alloca1.field11;
																	phi241 = alloca1.field12;
																	phi262 = alloca1.field12;
																	phi263 = alloca1.field12;
																	phi_in189 = anon12;
																	phi_in264 = (__zext uint64_t)alloca1.field8;
																}
															}
														}
														phi190 = phi246;
														phi191 = phi247;
														phi_in121 = phi248;
														phi195 = phi234;
														phi_in126 = phi254;
														phi197 = phi256;
														phi204 = phi241;
														phi187 = phi262;
														phi132 = phi245;
														phi193 = phi229;
														phi_in122 = phi249;
														phi_in123 = phi161;
														phi_in101 = phi_in250;
														phi194 = phi251;
														phi124 = phi252;
														phi_in103 = phi253;
														phi196 = phi255;
														phi198 = phi184;
														phi199 = phi_in167;
														phi128 = phi238;
														phi200 = phi257;
														phi201 = phi258;
														phi_in112 = phi259;
														phi202 = phi260;
														phi203 = phi261;
														phi130 = phi263;
														phi205 = phi_in189;
														phi206 = phi_in264;
														phi_in209 = phi219 + 4;
														phi210 = phi245;
														*(uint32_t*)(phi211 + 88) = phi190;
														phi212 = phi191;
														phi158 = phi192;
														phi_in178 = phi229;
														phi_in213 = phi_in121;
														phi179 = phi249;
														phi180 = phi_in250;
														phi163 = phi251;
														*(uint32_t*)(phi181 + 96) = phi252;
														phi164 = phi253;
														phi214 = phi195;
														*anon215 = phi_in126;
														phi183 = phi255;
														phi_in220 = phi197;
														phi221 = phi_in167;
														phi_in222 = phi238;
														phi129 = phi257;
														phi186 = phi258;
														phi223 = phi259;
														phi224 = phi260;
														*(uint64_t*)(phi181 + 112) = phi261;
														phi_in225 = phi204;
														phi226 = phi187;
														phi188 = phi263;
														phi181 = phi_in189;
														phi175 = phi_in264;
													}
													while (phi219 != 8);
												}
												phi134 = phi193;
												phi141 = phi195;
												phi_in131 = phi201;
												phi93 = phi206;
												phi118 = phi203;
												phi96 = phi190;
												phi86 = phi191;
												phi133 = phi192;
												phi135 = phi_in121;
												phi136 = phi_in122;
												phi137 = phi_in123;
												phi_in138 = phi_in101;
												phi139 = phi194;
												phi140 = phi124;
												phi125 = phi_in103;
												phi_in142 = phi_in126;
												phi143 = phi196;
												phi_in144 = phi197;
												phi145 = phi198;
												phi146 = phi199;
												phi147 = phi128;
												phi_in148 = phi200;
												phi149 = phi_in112;
												phi_in113 = phi202;
												phi_in114 = phi204;
												phi150 = phi187;
												phi151 = phi130;
												phi_in152 = phi205;
												phi_in155 = phi176 + 4;
												phi_in156 = phi132;
												phi96 = phi190;
												phi_in157 = phi191;
												phi158 = phi192;
												phi120 = phi134;
												phi_in159 = phi_in121;
												phi160 = phi_in122;
												phi161 = phi_in123;
												phi162 = phi_in101;
												phi163 = phi194;
												phi164 = phi_in103;
												phi165 = phi141;
												phi_in166 = phi_in126;
												phi127 = phi196;
												phi_in107 = phi197;
												phi108 = phi198;
												phi_in167 = phi199;
												phi129 = phi200;
												phi168 = phi_in131;
												phi_in169 = phi_in112;
												phi_in170 = phi202;
												phi_in171 = phi203;
												phi_in172 = phi204;
												phi173 = phi187;
												phi174 = phi205;
												phi175 = phi93;
											}
											while (phi176 != 8);
										}
										phi87 = phi134;
										phi_in89 = phi137;
										phi347 = phi_in131;
										phi90 = phi143;
										phi82 = phi149;
										phi84 = phi_in113;
										phi85 = phi132;
										phi48 = phi96;
										phi_in88 = phi136;
										phi_in57 = phi140;
										phi91 = phi146;
										phi_in92 = phi_in152;
										phi_in77 = phi132;
										phi_in97 = phi86;
										phi_in98 = phi133;
										phi80 = phi87;
										phi100 = phi135;
										phi67 = phi136;
										phi81 = phi_in89;
										phi_in101 = phi_in138;
										phi_in102 = phi139;
										phi69 = phi140;
										phi_in103 = phi125;
										phi_in104 = phi141;
										phi105 = phi_in142;
										phi106 = phi90;
										phi_in107 = phi_in144;
										phi108 = phi145;
										phi_in109 = phi146;
										phi110 = phi147;
										phi111 = phi_in148;
										phi_in112 = phi82;
										phi_in115 = phi150;
										phi116 = phi151;
										phi_in83 = phi_in152;
										phi117 = phi347 + 4;
										phi119 = phi93;
									}
									while (phi347 != 8);
								}
								break;
								phi47 = phi85;
								phi23 = phi86;
								phi_in348 = phi87;
								phi_in349 = phi90;
								phi_in350 = phi91;
								phi_in351 = phi82;
								phi61 = phi93;
								phi64 = phi47;
								phi65 = phi23;
								phi66 = phi_in348;
								phi67 = phi_in88;
								phi68 = phi_in89;
								phi69 = phi_in57;
								phi_in70 = phi_in349;
								phi_in71 = phi_in350;
								phi72 = phi_in351;
								phi73 = phi_in92;
								phi74 = phi74 + 4;
								phi75 = phi84;
								phi_in76 = phi61;
							}
							phi54 = phi48;
							phi37 = phi_in348;
							phi55 = phi_in88;
							phi56 = phi_in89;
							phi53 = *(uint64_t*)(phi_in92 + 72);
							phi58 = phi_in349;
							phi_in59 = phi_in350;
							phi_in60 = phi_in351;
							phi_in32 = phi_in92;
						}
						break;
						phi31 = phi56;
						phi35 = phi47;
						phi36 = phi54;
						phi_in38 = phi55;
						phi39 = phi31;
						phi40 = phi_in57;
						phi_in41 = phi58;
						phi_in42 = phi_in59;
						phi_in43 = phi_in60;
						phi_in44 = phi61;
						phi45 = phi53 + 4;
						phi46 = phi_in32;
					}
					phi26 = *(uint32_t*)(phi_in32 + 68);
					phi27 = phi31;
					phi28 = *(uint64_t*)(phi_in32 + 56);
					phi29 = (__zext uint64_t)phi31;
					phi30 = *(uint32_t*)(phi_in32 + 68);
					phi25 = *(uint32_t*)(phi_in32 + 68);
				}
				break;
				phi8 = phi26;
				phi18 = phi27;
				phi_in20 = phi8;
				phi_in4 = phi18;
				phi21 = phi29;
				phi22 = phi30;
				phi23 = phi31;
				phi5 = phi25;
				*(uint64_t*)(phi_in24 + 56) = phi28 + 4;
				phi_in24 = phi_in32;
			}
			phi16 = *(uint64_t*)(phi_in32 + 48);
			phi17 = phi18;
			phi13 = phi8;
			phi7 = (__zext uint64_t)phi18;
			phi19 = phi_in32;
		}
		break;
		phi_in4 = phi17;
		phi5 = phi13;
		phi9 = phi18;
		phi10 = phi16 + 4;
		phi_in11 = phi19;
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
		uint64_t anon7;
		while (true)
		{
			do
			{
				uint64_t anon3 = random();
				phi2 = phi2;
				uint64_t anon5 = anon3 << 32;
				anon4 = (uint32_t*)((anon3 + (((anon3 & 0xffffffff) * 2290649225 + anon5 >> 32 >> 4) - (anon5 >> 32 >> 31)) * -30 << 32 >> 30) + 6301504);
			}
			while (*anon4 != 0);
			break;
			phi2 = phi2;
		}
		*anon4 = 1;
		while (true)
		{
			do
			{
				uint64_t anon6 = random();
				uint64_t anon8 = anon6 << 32;
				anon7 = anon6 + (((anon6 & 0xffffffff) * 2290649225 + anon8 >> 32 >> 4) - (anon8 >> 32 >> 31)) * -30 << 32 >> 30;
			}
			while (*(uint32_t*)(anon7 + 6301504) != 0);
			break;
		}
		break;
		*(uint32_t*)(anon7 + 6300864) = 1;
		phi2 = (__zext uint64_t)((uint32_t)phi2 - 1);
	}
	uint64_t anon9 = random();
	uint64_t anon10 = anon9 << 32;
	w(4198271, (uint64_t)&alloca1, anon9 + (((anon9 & 0xffffffff) * 2290649225 + anon10 >> 32 >> 4) - (anon10 >> 32 >> 31)) * 4294967266 & 0xffffffff, 0);
	uint64_t phi11 = 3;
	while (true)
	{
		uint64_t anon13;
		while (true)
		{
			while (true)
			{
				while (true)
				{
					do
					{
						uint64_t anon12 = random();
						phi11 = phi11;
						uint64_t anon14 = anon12 << 32;
						anon13 = anon12 + (((anon12 & 0xffffffff) * 2290649225 + anon14 >> 32 >> 4) - (anon14 >> 32 >> 31)) * -30 << 32 >> 30;
					}
					while (*(uint32_t*)(anon13 + 6301504) != 0);
					break;
					phi11 = phi11;
				}
				break;
				phi11 = phi11;
			}
			break;
			phi11 = phi11;
		}
		break;
		*(uint32_t*)(anon13 + 6301120) = 1;
		phi11 = (__zext uint64_t)((uint32_t)phi11 - 1);
	}
	while (true)
	{
		uint64_t anon15 = random();
		uint64_t anon16 = anon15 << 32;
		*(uint32_t*)0x60292c = (uint32_t)anon15 + (uint32_t)(((anon15 & 0xffffffff) * 2290649225 + anon16 >> 32 >> 4) - (anon16 >> 32 >> 31)) * 4294967266;
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
		uint64_t phi19;
		uint32_t anon20;
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
			uint32_t phi_in14;
			uint32_t phi_in15;
			uint32_t* anon16;
			uint32_t phi17;
			uint32_t* anon11 = (uint32_t*)((phi10 & 0xc) + 4);
			uint32_t* anon12 = (uint32_t*)phi10;
			if (*anon11 < *anon12)
			{
				*anon12 = *anon11;
				*anon11 = *anon12;
				phi_in13 = *anon12;
				phi_in14 = *anon11;
				anon16 = (uint32_t*)(phi10 - 4);
				phi_in15 = *anon16;
				*anon12 = *anon12;
				phi17 = *anon11;
			}
			else 
			{
				phi_in13 = *anon11;
				phi_in14 = *anon12;
				phi_in15 = *anon16;
			}
			if (*anon11 < *anon12 && *anon11 < *anon16 || *anon11 >= *anon12 && *anon12 < *anon16)
			{
				*anon12 = *anon16;
				*anon16 = phi_in14;
				phi_in15 = phi_in14;
				*anon12 = phi_in13;
				phi17 = *anon16;
			}
			if (*anon11 < *anon12 && *anon11 < *anon16 || *anon11 >= *anon12 && *anon12 < *anon16 || *anon11 >= *anon16 && *anon11 < *anon12)
			{
				*anon11 = phi17;
				if (*anon12 < *anon11)
				{
					phi_in15 = *anon16;
				}
			}
			uint32_t phi18 = phi_in15;
			phi19 = 6301636;
			anon20 = phi18 + 1 & 0xff;
			if (anon20 != 0)
			{
				phi10 = phi10 + 12;
			}
		}
		while (anon20 != 0);
		while (true)
		{
			uint32_t phi23;
			uint32_t phi24;
			uint32_t phi_in25;
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
				phi_in25 = *anon26;
				*anon22 = *anon22;
				phi27 = *anon21;
			}
			else 
			{
				phi23 = *anon21;
				phi24 = *anon22;
				phi28 = *anon26;
			}
			if (*anon21 < *anon22 && *anon21 < *anon26 || *anon21 >= *anon22 && *anon22 < *anon26)
			{
				uint32_t phi_in29 = phi23;
				uint32_t phi_in30 = phi24;
				*anon22 = *anon26;
				*anon26 = phi_in30;
				phi_in25 = phi_in30;
				*anon22 = phi_in29;
				phi27 = *anon26;
			}
			if (*anon21 < *anon22 && *anon21 < *anon26 || *anon21 >= *anon22 && *anon22 < *anon26 || *anon21 >= *anon26 && *anon21 < *anon22)
			{
				*anon21 = phi27;
				phi28 = phi_in25;
				if (*anon22 < *anon21)
				{
					phi28 = *anon26;
				}
			}
			if ((phi28 + 1 & 0xff) != 0)
			{
				break;
				phi19 = phi19 + 12;
			}
		}
	}
}
void q(uint64_t arg0, uint64_t arg1)
{
	struct { uint8_t field0[56]; uint64_t field1; } alloca1;
	uint64_t phi_in4;
	uint32_t phi5;
	uint64_t phi6;
	uint32_t* anon7;
	uint32_t anon8;
	struct _IO_FILE** anon9;
	uint32_t phi14;
	alloca1.field1 = arg0;
	uint32_t dispatch2 = 0;
	__indirect_jump(*(uint64_t*)0x6023f8);
	uint32_t* anon3 = (uint32_t*)0x602928;
	if (*anon3 != 0)
	{
		*anon3 = *anon3 - 1;
		printf((uint8_t*)0x401ca7);
		phi_in4 = arg1 & 0xffffffff;
		phi5 = 0;
		phi6 = phi_in4;
		anon7 = (uint32_t*)0x602490;
		*anon7 = *anon7 + phi5;
		anon9 = (struct _IO_FILE**)0x602480;
		anon8 = _IO_getc(*anon9);
	}
	while (true)
	{
		uint32_t dispatch11;
		uint64_t* anon12;
		uint32_t anon16;
		uint64_t anon17;
		uint8_t* anon18;
		uint64_t anon19;
		dispatch2 = 2;
		if ((*anon3 >> 31 | (__zext uint32_t)(*anon3 == 0)) != 0)
		{
			break;
			uint16_t** anon10 = __ctype_b_loc();
			dispatch11 = 0;
			anon12 = (uint64_t*)anon10;
			if ((*(uint8_t*)(*anon12 + ((__sext int64_t)(uint8_t)anon8 << 1 | 1)) & 8) != 0)
			{
				uint32_t anon13 = _IO_getc(*anon9);
				uint32_t anon15 = (anon8 << 24 >> 24) - 48;
				phi14 = anon15;
				if ((*(uint8_t*)(*anon12 + ((__zext uint64_t)anon13 << 56 >> 55 | 1)) & 8) != 0)
				{
					anon16 = anon13 >> 8;
					phi14 = (anon16 << 24 >> 24) + anon15 * 10 - 48;
				}
				anon17 = (phi6 << 32 >> 32) * 12;
				if (*(uint32_t*)(anon17 + 6301632) == phi14 || *(uint32_t*)(anon17 + 6301632) != phi14 && phi14 == *(uint32_t*)(anon17 + 6301636) || *(uint32_t*)(anon17 + 6301632) != phi14 && phi14 != *(uint32_t*)(anon17 + 6301636) && phi14 == *(uint32_t*)(anon17 + 6301640))
				{
					dispatch2 = 4;
				}
			}
		}
		if (dispatch2 == 4)
		{
			puts((uint8_t*)0x401cd5);
			*anon7 = *anon3 * 100 + *anon7 + 500;
			anon18 = (uint8_t*)0x401cf1;
			printf(anon18);
			exit(0);
		}
		if ((*anon3 >> 31 | (__zext uint32_t)(*anon3 == 0)) != 0 && (*(uint8_t*)(*anon12 + ((__sext int64_t)(uint8_t)anon8 << 1 | 1)) & 8) != 0)
		{
			if (*(uint32_t*)(((__sext int64_t)phi14 << 2) + 6300992) != 0 && (*(uint32_t*)(anon17 + 6301632) == phi14 || *(uint32_t*)(anon17 + 6301632) != phi14 && phi14 == *(uint32_t*)(anon17 + 6301636) || *(uint32_t*)(anon17 + 6301632) != phi14 && phi14 != *(uint32_t*)(anon17 + 6301636) && phi14 == *(uint32_t*)(anon17 + 6301640)))
			{
				phi_in4 = (__zext uint64_t)phi14;
			}
			if (*(uint32_t*)(anon17 + 6301632) != phi14 && phi14 != *(uint32_t*)(anon17 + 6301636) && phi14 != *(uint32_t*)(anon17 + 6301640))
			{
				anon19 = random();
				dispatch2 = 1;
			}
		}
		if (dispatch2 == 1)
		{
			puts((uint8_t*)0x401dd0);
			*anon7 = *anon7 - 100;
			printf(anon18);
			exit(0);
		}
		if ((*anon3 >> 31 | (__zext uint32_t)(*anon3 == 0)) != 0 && (*(uint8_t*)(*anon12 + ((__sext int64_t)(uint8_t)anon8 << 1 | 1)) & 8) != 0)
		{
			uint32_t anon20 = (uint32_t)anon19 + ((uint32_t)((anon19 & 0xffffffff) / 3) - (uint32_t)(anon19 << 32 >> 32 >> 31)) * 4294967293;
			if (*(uint32_t*)(anon17 + 6301632) != phi14 && phi14 != *(uint32_t*)(anon17 + 6301636) && phi14 != *(uint32_t*)(anon17 + 6301640) && anon20 != 1)
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
				w(4199968, (uint64_t)&alloca1, anon21 + (((anon21 & 0xffffffff) * 2290649225 + anon22 >> 32 >> 4) - (anon22 >> 32 >> 31)) * 4294967266 & 0xffffffff, 0);
				*anon7 = *anon7 - 100;
				phi_in4 = phi6;
			}
			if (*(uint32_t*)(((__sext int64_t)phi14 << 2) + 6300992) != 0 && *(uint32_t*)(anon17 + 6301632) == phi14 || *(uint32_t*)(anon17 + 6301632) != phi14 && *(uint32_t*)(((__sext int64_t)phi14 << 2) + 6300992) != 0 && phi14 == *(uint32_t*)(anon17 + 6301636) || *(uint32_t*)(anon17 + 6301632) != phi14 && phi14 != *(uint32_t*)(anon17 + 6301636) && *(uint32_t*)(((__sext int64_t)phi14 << 2) + 6300992) != 0 && phi14 == *(uint32_t*)(anon17 + 6301640) || *(uint32_t*)(anon17 + 6301632) != phi14 && phi14 != *(uint32_t*)(anon17 + 6301636) && phi14 != *(uint32_t*)(anon17 + 6301640) && anon20 != 1)
			{
				dispatch2 = 2;
			}
			if ((uint8_t)anon16 != 10 && (*(uint32_t*)(((__sext int64_t)phi14 << 2) + 6300992) != 0 && *(uint32_t*)(anon17 + 6301632) == phi14 || *(uint32_t*)(anon17 + 6301632) != phi14 && *(uint32_t*)(((__sext int64_t)phi14 << 2) + 6300992) != 0 && phi14 == *(uint32_t*)(anon17 + 6301636) || *(uint32_t*)(anon17 + 6301632) != phi14 && phi14 != *(uint32_t*)(anon17 + 6301636) && *(uint32_t*)(((__sext int64_t)phi14 << 2) + 6300992) != 0 && phi14 == *(uint32_t*)(anon17 + 6301640) || *(uint32_t*)(anon17 + 6301632) != phi14 && phi14 != *(uint32_t*)(anon17 + 6301636) && phi14 != *(uint32_t*)(anon17 + 6301640) && anon20 != 1))
			{
				phi5 = phi5 - 20;
				dispatch11 = 1;
				dispatch2 = 3;
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
	uint64_t phi_in4;
	uint64_t phi_in5;
	while (true)
	{
		int64_t anon2;
		while (true)
		{
			while (true)
			{
				while (true)
				{
					while (true)
					{
						while (true)
						{
							while (true)
							{
								while (true)
								{
									do
									{
										uint64_t anon1 = random();
										uint32_t anon3 = (uint32_t)anon1;
										anon2 = (__sext int64_t)(anon3 + ((uint32_t)((anon1 & 0xffffffff) * 2290649225 + (anon1 << 32) >> 36) - (anon3 >> 31)) * 4294967266);
									}
									while (*(uint32_t*)((anon2 << 2) + 6301504) != 0);
									break;
								}
								break;
							}
							break;
						}
						break;
					}
					break;
				}
				break;
			}
			break;
		}
		break;
		phi_in4 = anon2;
		phi_in5 = anon2;
	}
	uint64_t phi6 = phi_in4;
	uint64_t phi7 = phi_in5;
	printf((uint8_t*)0x401d03);
	while (true)
	{
		uint32_t* anon14;
		uint32_t* anon24;
		uint64_t anon25;
		uint16_t** anon32;
		uint16_t** phi33;
		uint16_t** anon37;
		uint32_t* anon8 = (uint32_t*)0x602928;
		*anon8 = *anon8 + 1;
		puts((uint8_t*)0x401d17);
		uint32_t* anon9 = (uint32_t*)0x602490;
		*anon9 = *anon9 + 20;
		uint64_t anon10 = phi6 << 2;
		*(uint32_t*)(anon10 + 6301120) = 0;
		uint32_t dispatch11 = 0;
		if (*(uint32_t*)(anon10 + 6300992) != 0)
		{
			break;
			break;
		}
		dispatch11 = 0;
		if (dispatch11 == 0)
		{
			puts((uint8_t*)0x401d2a);
			*anon9 = *anon9 - 100;
		}
		if (*(uint32_t*)(anon10 + 6300992) != 0)
		{
			dispatch11 = 1;
		}
		if (dispatch11 == 1)
		{
			puts((uint8_t*)0x401d36);
			*anon9 = *anon9 - 50;
		}
		uint32_t anon12 = (uint32_t)phi7;
		uint32_t* anon13 = (uint32_t*)0x60292c;
		if (*(uint32_t*)(anon10 + 6300992) != 0 && *(uint32_t*)(anon10 + 6300864) == 0 && anon12 == *anon13)
		{
			if (*anon8 != 0)
			{
				anon14 = (uint32_t*)0x60248c;
				*anon14 = *anon14 + 1;
				*anon8 = *anon8 - 1;
				*anon9 = *anon9 - 20;
				puts((uint8_t*)0x401d48);
			}
			dispatch11 = 3;
			if (*anon14 == 3)
			{
				puts((uint8_t*)0x401df8);
				*anon8 = 3;
				*anon9 = *anon9 + 200;
				*anon13 = 4294967295;
			}
		}
		if (dispatch11 == 3)
		{
			puts((uint8_t*)0x401d62);
			while (true)
			{
				uint64_t anon15 = random();
				uint32_t anon16 = (uint32_t)anon15;
				*anon13 = anon16 + (((uint32_t)((anon15 & 0xffffffff) * 2290649225 >> 32) + anon16 >> 4) - (anon16 >> 31)) * 4294967266;
			}
		}
		if (*(uint32_t*)(anon10 + 6300992) != 0 && *(uint32_t*)(anon10 + 6300864) == 0)
		{
			if (anon12 != *anon13 || anon12 == *anon13 && *anon14 == 3 || anon12 == *anon13 && *anon14 == 3)
			{
				dispatch11 = 2;
			}
			uint32_t* anon17 = (uint32_t*)(anon10 + 6301504);
			if (*anon17 != 0 && (anon12 != *anon13 || anon12 == *anon13 && *anon14 == 3 || anon12 == *anon13 && *anon14 == 3))
			{
				*anon17 = 0;
				uint64_t anon18 = random();
				uint32_t anon19 = (uint32_t)anon18;
				*(uint32_t*)(((__sext int64_t)(anon19 + (((uint32_t)((anon18 & 0xffffffff) * 2290649225 >> 32) + anon19 >> 4) - (anon19 >> 31)) * 4294967266) << 2) + 6301504) = 1;
				uint64_t anon20 = random();
				printf((uint8_t*)0x401e28);
				*anon9 = *anon9 - 10;
				uint32_t anon22 = (uint32_t)anon20;
				int64_t anon21 = (__sext int64_t)(anon22 + ((uint32_t)((anon20 & 0xffffffff) * 2290649225 + (anon20 << 32) >> 36) - (anon22 >> 31)) * 4294967266);
				phi_in4 = anon21;
				phi_in5 = anon21;
			}
		}
		if (dispatch11 == 2)
		{
			uint64_t phi26;
			if (*(uint32_t*)(anon10 + 6300992) < 3)
			{
				puts((uint8_t*)0x401d7b);
			}
			anon25 = phi6 * 12;
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
			uint32_t* anon27 = (uint32_t*)(anon10 + 6301248);
			if (*anon27 == 0)
			{
				*anon9 = *anon9 + 10;
				*anon27 = 1;
			}
		}
		struct _IO_FILE** anon29 = (struct _IO_FILE**)0x602480;
		uint32_t anon28 = _IO_getc(*anon29);
		uint8_t anon31 = (uint8_t)anon28;
		bool anon30 = anon31 == 108;
		if (anon30)
		{
			anon32 = __ctype_b_loc();
			phi_in4 = phi6;
			phi_in5 = phi7;
			phi33 = anon32;
		}
		if (dispatch11 == 1 || dispatch11 == 0 || anon31 == 113)
		{
			printf((uint8_t*)0x401cf1);
			exit(0);
		}
		bool anon34 = anon31 == 115;
		if (anon34)
		{
			q(4200890, phi7 & 0xffffffff);
		}
		bool anon35 = anon31 == 105;
		if (anon35)
		{
			printf((uint8_t*)0x401dba);
		}
		bool anon36 = anon31 == 115 || anon31 == 108 || anon31 == 105 || anon31 == 113;
		if (!anon36 || anon31 == 105 || anon31 == 115)
		{
			anon37 = __ctype_b_loc();
			phi33 = anon37;
		}
		int64_t anon39 = (__sext int64_t)anon31;
		uint8_t anon38 = *(uint8_t*)(*(uint64_t*)anon37 + (anon39 >> 7 | 1)) & 8;
		if (anon38 != 0 && anon35 || anon38 != 0 && anon34 || anon38 != 0 && (!anon36) || (*(uint8_t*)(*(uint64_t*)anon32 + 217) & 8) != 0 && anon30)
		{
			uint32_t phi41;
			uint32_t anon40 = _IO_getc(*anon29);
			uint32_t anon42 = (uint32_t)(anon39 + 4294967248);
			phi41 = anon42;
			uint32_t anon43 = anon40 << 24 >> 24;
			if ((*(uint8_t*)(*(uint64_t*)phi33 + ((__zext uint64_t)anon43 << 1 | 1)) & 8) != 0)
			{
				phi41 = anon42 * 10 + anon43 - 48;
			}
			if (*anon24 != phi41 && *(uint32_t*)(anon25 + 6301636) != phi41)
			{
				phi_in4 = phi6;
				phi_in5 = phi7;
			}
			if (*anon24 == phi41 || *anon24 != phi41 && *(uint32_t*)(anon25 + 6301636) == phi41 || *anon24 != phi41 && *(uint32_t*)(anon25 + 6301636) != phi41 && *(uint32_t*)(anon25 + 6301640) == phi41)
			{
				int64_t anon44 = (__sext int64_t)phi41;
				phi_in4 = anon44;
				phi_in5 = anon44;
			}
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
