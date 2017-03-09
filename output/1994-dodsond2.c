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
			phi9 = phi5;
			*anon8 = phi6;
			*phi1 = *anon8;
			phi7 = *anon8;
			phi10 = *anon8;
		}
		if (*anon4 >= *phi1 && *phi1 < *anon8 || *anon4 < *phi1 && *anon4 < *anon8 || *anon4 >= *anon8 && *anon4 < *phi1)
		{
			phi11 = phi7;
			*phi1 = phi9;
			*anon4 = phi10;
			if (*anon4 > *phi1)
			{
				phi11 = *anon8;
			}
		}
		if (phi11 != 255)
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
	while (phi11 != 255);
	return;
}
void w(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	struct { uint8_t field0[4]; uint32_t field1; uint64_t field2; uint8_t field3[8]; uint32_t field4; uint32_t field5; uint8_t field6[48]; uint64_t field7; uint32_t field8; uint8_t field9[4]; uint64_t field10; uint64_t field11; uint32_t field12; uint8_t field13[8]; uint32_t field14; uint8_t field15[56]; uint64_t field16; } alloca1;
	uint32_t phi_in5;
	uint64_t phi10;
	uint64_t phi12;
	uint64_t phi15;
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
	uint64_t phi7 = arg3 & 0xffffffff;
	int64_t anon9 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi10 + 48) + *(uint64_t*)(phi10 + 8) + 6301632);
	uint32_t* anon8 = (uint32_t*)((anon9 << 2) + 6300992);
	*anon8 = anon6;
	uint32_t phi11 = anon3;
	*(uint64_t*)(phi10 + 48) = 0;
	uint64_t anon13 = (uint64_t)&alloca1;
	phi12 = anon13;
	do
	{
		uint32_t phi14 = *anon8;
		phi10 = phi12;
		phi15 = *(uint64_t*)(phi10 + 48);
		uint32_t phi16 = phi_in4;
		uint32_t phi17 = phi_in5;
		uint64_t phi18 = phi7 & 0xffffffff;
		uint32_t phi19 = phi11;
		phi12 = phi10;
		if (phi11 < *anon8)
		{
			uint64_t phi_in23;
			uint64_t phi372;
			uint64_t phi_in373;
			*anon8 = phi14;
			*(uint64_t*)(phi10 + 16) = anon9 * 12;
			*(uint32_t*)(phi10 + 40) = (uint32_t)phi7 + 5;
			uint32_t phi20 = phi_in5;
			uint32_t phi21 = phi_in4;
			uint64_t phi22 = (__zext uint64_t)phi_in4;
			*(uint32_t*)(phi_in23 + 68) = phi_in5;
			uint32_t phi24 = phi_in4;
			uint32_t phi25 = phi_in5;
			uint64_t phi26 = 0;
			do
			{
				uint32_t phi27 = phi20;
				uint32_t phi_in28 = phi21;
				uint32_t phi_in29 = phi24;
				uint64_t phi_in30 = phi26;
				phi_in23 = phi10;
				uint32_t phi31 = phi_in28;
				uint64_t phi32 = phi22 & 0xffffffff;
				uint32_t phi33 = *(uint32_t*)(phi_in23 + 68);
				uint32_t phi34 = phi_in29;
				phi25 = phi25;
				uint64_t phi35 = phi_in23;
				int64_t anon37 = (__sext int64_t)*(uint32_t*)(phi_in30 + *(uint64_t*)(phi_in23 + 16) + 6301632);
				uint32_t* anon36 = (uint32_t*)((anon37 << 2) + 6300992);
				if (phi25 < *anon36)
				{
					uint64_t phi371;
					*(uint64_t*)(phi_in23 + 56) = phi_in30;
					*anon36 = *(uint32_t*)(phi_in23 + 4);
					*(uint64_t*)(phi_in23 + 32) = anon37 * 12;
					*(uint32_t*)(phi_in23 + 44) = (uint32_t)phi22 + 6;
					uint32_t phi38 = phi_in29;
					uint32_t phi39 = phi_in29;
					uint32_t phi40 = phi_in29;
					uint32_t phi_in41 = phi_in29;
					uint32_t phi_in42 = phi_in29;
					uint32_t phi43 = phi_in29;
					uint32_t phi_in44 = phi_in29;
					uint32_t phi45 = phi_in29;
					uint32_t phi46 = phi_in29;
					uint64_t phi47 = (__zext uint64_t)phi_in29;
					uint64_t phi_in48 = 0;
					uint64_t phi_in49 = phi_in23;
					do
					{
						uint32_t phi50 = phi38;
						uint32_t phi51 = phi39;
						uint32_t phi52 = phi40;
						uint32_t phi_in53 = phi46;
						uint64_t phi_in54 = phi47;
						uint32_t phi55 = phi50;
						phi39 = phi51;
						uint32_t phi56 = phi52;
						uint32_t phi57 = phi_in41;
						uint32_t phi58 = phi_in42;
						uint32_t phi_in59 = phi43;
						uint32_t phi60 = phi_in44;
						uint32_t phi61 = phi_in53;
						phi47 = phi_in54 & 0xffffffff;
						uint64_t phi62 = phi_in49;
						int64_t anon64 = (__sext int64_t)*(uint32_t*)(phi_in48 + *(uint64_t*)(phi_in49 + 32) + 6301632);
						uint32_t* anon63 = (uint32_t*)((anon64 << 2) + 6300992);
						if (*(uint32_t*)(phi_in49 + 4) < *anon63)
						{
							uint64_t phi78;
							uint32_t phi_in88;
							uint32_t phi_in366;
							uint32_t phi_in367;
							uint32_t phi_in368;
							uint32_t phi_in369;
							uint32_t phi_in370;
							*(uint64_t*)(phi_in49 + 72) = phi_in48;
							*anon63 = *(uint32_t*)(phi_in49 + 24);
							*(uint32_t*)(phi_in49 + 64) = (uint32_t)phi_in54 + 7;
							uint32_t phi_in65 = phi_in29;
							uint32_t phi_in66 = phi_in41;
							uint32_t phi67 = phi_in42;
							uint32_t phi_in68 = phi_in44;
							uint32_t phi69 = phi45;
							uint64_t phi_in70 = 0;
							uint64_t phi71 = anon64 * 12;
							do
							{
								uint32_t phi72 = phi50;
								uint32_t phi73 = phi51;
								uint32_t phi74 = phi52;
								uint32_t phi75 = phi67;
								uint32_t phi_in76 = phi43;
								uint64_t phi77 = phi_in49;
								phi78 = phi_in70;
								uint64_t phi_in79 = phi71;
								uint64_t phi80 = phi_in79;
								uint32_t phi81 = phi72;
								uint32_t phi82 = phi_in65;
								uint32_t phi83 = phi73;
								uint32_t phi84 = phi74;
								uint32_t phi85 = phi_in66;
								uint32_t phi86 = phi75;
								uint32_t phi87 = phi_in76;
								phi_in88 = phi_in68;
								uint64_t phi89 = phi_in54 & 0xffffffff;
								int64_t anon91 = (__sext int64_t)*(uint32_t*)(phi78 + phi_in79 + 6301632);
								uint32_t* anon90 = (uint32_t*)((anon91 << 2) + 6300992);
								if (*(uint32_t*)(phi77 + 24) < *anon90)
								{
									uint32_t phi_in93;
									uint64_t phi365;
									*anon90 = *(uint32_t*)(phi77 + 28);
									uint32_t phi_in92 = phi_in65;
									uint32_t anon94 = (uint32_t)phi_in54 + 8;
									phi_in93 = anon94;
									uint32_t phi_in95 = anon94;
									uint32_t phi96 = phi_in66;
									uint32_t phi_in97 = anon94;
									uint32_t phi_in98 = anon94;
									uint32_t phi99 = phi_in76;
									uint32_t phi_in100 = anon94;
									uint32_t phi101 = anon94;
									uint32_t phi102 = anon94;
									uint32_t phi103 = phi_in68;
									uint32_t phi104 = anon94;
									uint32_t phi105 = anon94;
									uint32_t phi106 = phi69;
									uint32_t phi107 = anon94;
									uint32_t phi_in108 = anon94;
									uint32_t phi109 = phi_in53;
									uint32_t phi110 = anon94;
									uint32_t phi111 = anon94;
									uint32_t phi112 = anon94;
									uint64_t phi113 = phi77;
									uint64_t phi114 = 0;
									uint64_t phi115 = anon91 * 12;
									uint64_t phi116 = phi_in54;
									do
									{
										uint32_t phi_in117 = phi72;
										uint32_t phi_in118 = phi73;
										uint32_t phi119 = phi_in93;
										uint32_t phi_in120 = phi74;
										uint32_t phi121 = phi96;
										uint32_t phi_in122 = phi75;
										uint32_t phi_in123 = phi101;
										uint32_t phi124 = phi103;
										uint32_t phi_in125 = phi104;
										uint32_t phi126 = phi105;
										uint32_t phi_in127 = phi107;
										uint32_t phi128 = phi109;
										uint64_t phi129 = phi_in79;
										uint32_t phi_in130 = phi110;
										uint32_t phi131 = phi111;
										uint32_t phi132 = phi112;
										uint64_t phi_in133 = phi113;
										uint64_t phi_in134 = phi115;
										uint32_t phi135 = phi_in117;
										uint32_t phi136 = phi_in92;
										uint32_t phi137 = phi_in118;
										uint32_t phi138 = phi_in120;
										uint32_t phi139 = phi_in95;
										uint32_t phi140 = phi121;
										uint32_t phi141 = phi_in122;
										uint64_t phi_in142 = phi114;
										uint32_t phi143 = phi_in97;
										uint32_t phi144 = phi_in98;
										uint32_t phi145 = phi99;
										phi101 = phi_in123;
										uint32_t phi146 = phi124;
										uint32_t phi_in147 = phi_in125;
										phi107 = phi_in127;
										uint32_t phi148 = phi_in108;
										uint32_t phi149 = phi128;
										uint32_t phi150 = phi_in130;
										uint32_t phi151 = phi131;
										uint32_t phi152 = phi132;
										uint64_t phi153 = phi_in133;
										uint64_t phi154 = phi116;
										int64_t anon156 = (__sext int64_t)*(uint32_t*)(phi114 + phi115 + 6301632);
										uint32_t* anon155 = (uint32_t*)((anon156 << 2) + 6300992);
										if (*(uint32_t*)(phi_in133 + 28) < *anon155)
										{
											uint64_t phi166;
											uint64_t phi178;
											*anon155 = *(uint32_t*)(phi_in133 + 40);
											*(uint32_t*)(phi_in133 + 120) = (uint32_t)phi116 + 9;
											uint64_t phi_in157 = 0;
											uint32_t phi158 = phi_in92;
											uint32_t phi159 = phi_in118;
											uint32_t phi160 = phi119;
											uint32_t phi161 = phi_in120;
											uint32_t phi_in162 = phi_in95;
											uint32_t phi163 = phi_in122;
											uint32_t phi_in164 = phi_in97;
											uint32_t phi165 = phi_in98;
											*(uint32_t*)(phi166 + 124) = phi_in100;
											uint32_t phi167 = phi_in123;
											uint32_t phi168 = phi_in125;
											uint32_t phi_in169 = phi126;
											uint32_t phi170 = phi106;
											uint32_t phi_in171 = phi_in127;
											uint32_t phi172 = phi_in108;
											uint64_t phi173 = phi114;
											uint64_t phi174 = phi129;
											uint64_t phi_in175 = phi115;
											uint64_t phi176 = phi_in133;
											uint64_t phi177 = phi116 & 0xffffffff;
											do
											{
												phi178 = phi_in157;
												uint32_t phi179 = phi158;
												uint32_t phi180 = phi159;
												uint32_t phi_in181 = phi160;
												uint32_t phi182 = phi161;
												uint32_t phi183 = phi121;
												uint32_t phi184 = phi165;
												uint32_t phi185 = phi99;
												uint32_t phi186 = phi167;
												uint32_t phi187 = phi102;
												uint32_t phi_in188 = phi124;
												uint32_t phi189 = phi168;
												uint32_t phi190 = phi170;
												phi_in127 = phi_in171;
												uint32_t phi_in191 = phi172;
												uint32_t phi192 = phi128;
												uint32_t phi193 = phi131;
												uint32_t phi194 = phi132;
												uint64_t phi_in195 = phi177;
												phi135 = phi_in117;
												uint32_t phi196 = phi179;
												uint32_t phi197 = phi180;
												uint32_t phi198 = phi_in181;
												uint32_t phi199 = phi182;
												uint32_t phi200 = phi_in162;
												uint32_t phi201 = phi183;
												uint32_t phi202 = phi163;
												uint32_t phi203 = phi184;
												phi99 = phi185;
												uint32_t phi204 = *(uint32_t*)(phi166 + 124);
												phi102 = phi187;
												uint32_t phi205 = phi_in188;
												uint32_t phi206 = phi189;
												uint32_t phi207 = phi_in169;
												phi170 = phi190;
												phi_in108 = phi_in191;
												uint32_t phi_in208 = phi192;
												uint64_t phi209 = phi174;
												uint64_t phi210 = phi_in175;
												uint32_t phi211 = phi_in130;
												uint32_t phi212 = phi193;
												uint32_t phi213 = phi194;
												uint64_t phi214 = phi176;
												phi177 = phi_in195;
												int64_t anon216 = (__sext int64_t)*(uint32_t*)(phi178 + anon156 * 12 + 6301632);
												uint32_t* anon215 = (uint32_t*)((anon216 << 2) + 6300992);
												if (*(uint32_t*)(phi176 + 40) < *anon215)
												{
													uint64_t phi230;
													*anon215 = *(uint32_t*)(phi176 + 44);
													uint64_t phi_in217 = 0;
													uint32_t phi218 = phi_in117;
													uint32_t phi219 = phi_in181;
													uint32_t phi220 = phi_in162;
													uint32_t phi221 = phi_in164;
													uint32_t phi222 = phi186;
													uint32_t phi223 = phi_in188;
													uint32_t phi_in224 = phi_in169;
													uint32_t phi225 = phi_in127;
													uint32_t phi226 = phi_in191;
													uint64_t phi227 = phi173;
													*(uint64_t*)(phi166 + 112) = phi_in175;
													uint32_t phi228 = phi_in130;
													uint64_t phi_in229 = phi_in195;
													do
													{
														phi230 = phi_in217;
														uint32_t phi_in231 = phi218;
														uint32_t phi232 = phi179;
														uint32_t phi233 = phi180;
														uint32_t phi_in234 = phi219;
														uint32_t phi_in235 = phi182;
														uint32_t phi236 = phi220;
														uint32_t phi_in237 = phi183;
														uint32_t phi238 = phi163;
														uint32_t phi_in239 = phi221;
														*(uint32_t*)(phi166 + 96) = phi185;
														uint32_t phi_in240 = phi222;
														int64_t anon244 = (__sext int64_t)*(uint32_t*)(phi230 + anon216 * 12 + 6301632);
														int64_t anon243 = anon244 * 12;
														int64_t anon242 = (__sext int64_t)*(uint32_t*)(anon243 + 6301636);
														uint32_t* anon241 = (uint32_t*)((anon242 << 2) + 6300992);
														*anon241 = phi187;
														uint32_t phi_in245 = phi223;
														uint32_t phi_in246 = phi189;
														uint32_t phi_in247 = phi190;
														uint32_t phi248 = phi225;
														uint32_t phi_in249 = phi226;
														*(uint64_t*)(phi166 + 88) = phi227;
														uint32_t phi250 = phi192;
														*(uint64_t*)(phi166 + 104) = phi174;
														uint64_t phi251 = *(uint64_t*)(phi166 + 112);
														uint32_t phi_in252 = phi228;
														uint32_t phi_in253 = phi193;
														uint32_t phi_in254 = phi194;
														phi166 = phi176;
														phi218 = phi_in231;
														uint32_t phi255 = phi232;
														uint32_t phi256 = phi233;
														uint32_t phi257 = phi_in234;
														uint32_t phi258 = phi_in235;
														uint32_t phi259 = phi236;
														uint32_t phi260 = phi_in237;
														uint32_t phi261 = phi238;
														phi_in164 = phi_in239;
														phi185 = *(uint32_t*)(phi166 + 96);
														uint32_t phi262 = *(uint32_t*)(phi166 + 124);
														uint32_t phi263 = phi_in240;
														uint32_t phi264 = *anon241;
														uint32_t phi265 = phi_in245;
														uint32_t phi266 = phi_in246;
														phi190 = phi_in247;
														uint32_t phi267 = phi_in249;
														uint64_t phi268 = *(uint64_t*)(phi166 + 88);
														phi192 = phi250;
														uint64_t phi269 = *(uint64_t*)(phi166 + 104);
														phi210 = phi251;
														uint32_t phi270 = phi_in252;
														uint32_t phi271 = phi_in253;
														uint32_t phi272 = phi_in254;
														uint64_t phi273 = phi166;
														uint64_t phi274 = phi_in229;
														uint32_t* anon275 = (uint32_t*)((anon244 << 2) + 6300992);
														if (*(uint32_t*)(phi166 + 44) < *anon275)
														{
															*anon275 = *(uint32_t*)(phi166 + 64);
															uint32_t phi_in276 = phi_in231;
															int64_t anon278 = (__sext int64_t)*(uint32_t*)(anon243 + 6301640);
															uint32_t* anon277 = (uint32_t*)((anon278 << 2) + 6300992);
															*anon277 = phi_in234;
															uint64_t phi279 = phi166;
															uint32_t phi_in280 = phi_in235;
															uint32_t phi281 = phi_in237;
															uint32_t phi_in282 = phi238;
															uint32_t phi283 = phi_in239;
															uint32_t phi284 = phi184;
															uint32_t phi_in285 = *(uint32_t*)(phi166 + 96);
															uint32_t phi286 = *(uint32_t*)(phi166 + 124);
															uint32_t phi_in287 = *anon241;
															uint32_t phi288 = phi_in246;
															uint32_t phi_in289 = phi_in224;
															uint32_t phi290 = phi_in247;
															uint32_t phi291 = phi248;
															uint32_t phi_in292 = phi_in249;
															*(uint64_t*)(phi293 + 80) = *(uint64_t*)(phi166 + 88);
															uint32_t phi_in294 = phi250;
															uint64_t phi295 = *(uint64_t*)(phi166 + 104);
															uint64_t phi296 = phi251;
															uint32_t phi_in297 = phi_in252;
															phi271 = phi_in253;
															uint32_t phi298 = phi_in254;
															uint64_t phi299 = phi_in229;
															if (*(uint32_t*)(phi166 + 64) < *anon241)
															{
																uint32_t phi_in300 = phi_in231;
																phi179 = phi232;
																uint32_t phi301 = phi233;
																uint32_t phi302 = phi_in234;
																uint32_t phi303 = phi_in235;
																uint32_t phi304 = phi236;
																uint32_t phi305 = phi_in237;
																uint32_t phi306 = phi_in239;
																uint32_t phi307 = phi184;
																uint64_t phi308 = anon242;
																uint32_t phi309 = *(uint32_t*)(phi166 + 96);
																phi223 = phi_in245;
																uint32_t phi310 = phi_in247;
																uint64_t phi311 = *(uint64_t*)(phi166 + 88);
																*(uint64_t*)(phi312 + 104) = *(uint64_t*)(phi166 + 104);
																uint64_t phi_in313 = phi_in229;
																if (phi_in240 < *anon241)
																{
																	*(uint64_t*)(phi166 + 112) = phi251;
																	*(uint64_t*)(phi166 + 80) = anon242;
																	w(4197873, anon13, (__sext int64_t)*anon241, (__zext uint64_t)*anon241);
																	phi_in300 = *(uint32_t*)(arg1 - 96);
																	phi179 = *(uint32_t*)(arg1 - 96);
																	phi301 = *(uint32_t*)(arg1 - 96);
																	phi302 = *(uint32_t*)(arg1 - 68);
																	phi303 = *(uint32_t*)(arg1 - 96);
																	phi304 = *(uint32_t*)(arg1 - 68);
																	phi305 = *(uint32_t*)(arg1 - 96);
																	phi238 = *(uint32_t*)(arg1 - 96);
																	phi306 = *(uint32_t*)(arg1 - 68);
																	phi166 = anon13;
																	phi307 = *(uint32_t*)(arg1 - 68);
																	phi308 = *(uint64_t*)(arg1 - 112);
																	phi309 = *(uint32_t*)(arg1 - 96);
																	phi223 = *(uint32_t*)(arg1 - 96);
																	phi310 = *(uint32_t*)(arg1 - 96);
																	phi311 = *(uint64_t*)(arg1 - 104);
																	phi250 = *(uint32_t*)(arg1 - 96);
																	*(uint64_t*)(phi312 + 104) = *(uint64_t*)(arg1 - 88);
																	phi251 = *(uint64_t*)(arg1 - 80);
																	phi_in313 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
																}
																uint32_t phi_in314 = phi179;
																uint32_t phi_in315 = phi301;
																uint32_t phi_in316 = phi302;
																*(uint32_t*)(phi312 + 88) = phi303;
																uint32_t phi_in317 = phi304;
																*(uint32_t*)(phi312 + 96) = phi305;
																uint32_t phi_in318 = phi238;
																*(uint32_t*)(phi312 + 124) = phi306;
																uint64_t phi312 = phi166;
																uint64_t phi319 = phi308;
																uint32_t phi_in320 = phi309;
																uint32_t phi_in321 = phi223;
																uint32_t phi_in322 = phi310;
																uint64_t phi323 = phi311;
																uint32_t phi_in324 = phi250;
																uint64_t phi325 = *(uint64_t*)(phi312 + 104);
																*(uint64_t*)(phi312 + 112) = phi251;
																uint32_t phi_in326 = phi_in300;
																phi232 = phi_in314;
																phi233 = phi_in315;
																uint32_t phi_in327 = phi_in316;
																uint32_t phi328 = phi_in317;
																uint32_t phi329 = *(uint32_t*)(phi312 + 96);
																uint32_t phi330 = phi_in321;
																uint32_t phi_in331 = phi_in322;
																uint32_t phi_in332 = phi_in324;
																uint64_t phi333 = *(uint64_t*)(phi312 + 112);
																uint64_t phi_in334 = phi_in313;
																int64_t anon335 = (__sext int64_t)*(uint32_t*)(phi319 * 12 + 6301636);
																if (phi307 < *(uint32_t*)((anon335 << 2) + 6300992))
																{
																	*(uint64_t*)(phi312 + 104) = phi325;
																	*(uint64_t*)(phi312 + 88) = phi323;
																	*(uint64_t*)(phi312 + 80) = phi319;
																	w(4197793, anon13, anon335, (__zext uint64_t)*(uint32_t*)(phi312 + 120));
																	phi_in326 = *(uint32_t*)(arg1 - 96);
																	phi232 = *(uint32_t*)(arg1 - 96);
																	phi233 = *(uint32_t*)(arg1 - 96);
																	phi_in327 = alloca1.field14;
																	*(uint32_t*)(phi312 + 88) = *(uint32_t*)(arg1 - 96);
																	phi312 = anon13;
																	phi328 = alloca1.field14;
																	phi329 = *(uint32_t*)(arg1 - 96);
																	phi_in318 = *(uint32_t*)(arg1 - 96);
																	phi319 = *(uint64_t*)(arg1 - 112);
																	phi_in320 = *(uint32_t*)(arg1 - 96);
																	phi330 = *(uint32_t*)(arg1 - 96);
																	phi_in331 = *(uint32_t*)(arg1 - 96);
																	phi323 = *(uint64_t*)(arg1 - 104);
																	phi_in332 = *(uint32_t*)(arg1 - 96);
																	phi325 = *(uint64_t*)(arg1 - 88);
																	phi333 = *(uint64_t*)(arg1 - 80);
																	phi_in334 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
																}
																phi_in280 = *(uint32_t*)(phi312 + 88);
																*(uint32_t*)(phi312 + 112) = phi328;
																uint32_t phi_in336 = phi329;
																uint32_t phi_in337 = phi330;
																*(uint64_t*)(phi312 + 80) = phi323;
																phi295 = phi325;
																phi296 = phi333;
																phi_in276 = phi_in326;
																*anon277 = phi_in327;
																phi279 = phi312;
																phi236 = *(uint32_t*)(phi312 + 112);
																phi281 = phi_in336;
																phi_in282 = phi_in318;
																phi283 = *(uint32_t*)(phi312 + 112);
																phi284 = *(uint32_t*)(phi312 + 112);
																phi_in285 = phi_in320;
																phi286 = *(uint32_t*)(phi312 + 112);
																phi_in240 = *(uint32_t*)(phi312 + 112);
																phi_in287 = *(uint32_t*)(phi312 + 112);
																phi_in245 = phi_in337;
																phi288 = *(uint32_t*)(phi312 + 112);
																phi_in289 = *(uint32_t*)(phi312 + 112);
																phi290 = phi_in331;
																phi291 = *(uint32_t*)(phi312 + 112);
																phi_in292 = *(uint32_t*)(phi312 + 112);
																*(uint64_t*)(phi293 + 80) = *(uint64_t*)(phi312 + 80);
																phi_in294 = phi_in332;
																phi_in297 = *(uint32_t*)(phi312 + 112);
																phi271 = *(uint32_t*)(phi312 + 112);
																phi298 = *(uint32_t*)(phi312 + 112);
																phi299 = phi_in334;
																int64_t anon338 = (__sext int64_t)*(uint32_t*)(phi319 * 12 + 6301640);
																if (*(uint32_t*)(phi312 + 112) < *(uint32_t*)((anon338 << 2) + 6300992))
																{
																	*(uint64_t*)(phi312 + 104) = phi296;
																	*(uint64_t*)(phi312 + 96) = phi295;
																	*(uint32_t*)(phi312 + 88) = phi_in280;
																	w(4197395, anon13, anon338, (__zext uint64_t)*(uint32_t*)(phi312 + 120));
																	phi_in276 = *(uint32_t*)(arg1 - 104);
																	phi232 = *(uint32_t*)(arg1 - 104);
																	phi233 = *(uint32_t*)(arg1 - 104);
																	*anon277 = *(uint32_t*)(arg1 - 80);
																	phi279 = anon13;
																	phi_in280 = *(uint32_t*)(arg1 - 104);
																	phi236 = *(uint32_t*)(arg1 - 80);
																	phi281 = *(uint32_t*)(arg1 - 104);
																	phi_in282 = *(uint32_t*)(arg1 - 104);
																	phi283 = *(uint32_t*)(arg1 - 80);
																	phi284 = *(uint32_t*)(arg1 - 80);
																	phi_in285 = *(uint32_t*)(arg1 - 104);
																	phi286 = *(uint32_t*)(arg1 - 80);
																	phi_in240 = *(uint32_t*)(arg1 - 80);
																	phi_in287 = *(uint32_t*)(arg1 - 80);
																	phi_in245 = *(uint32_t*)(arg1 - 104);
																	phi288 = *(uint32_t*)(arg1 - 80);
																	phi_in289 = *(uint32_t*)(arg1 - 80);
																	phi290 = *(uint32_t*)(arg1 - 104);
																	phi291 = *(uint32_t*)(arg1 - 80);
																	phi_in292 = *(uint32_t*)(arg1 - 80);
																	*(uint64_t*)(phi293 + 80) = *(uint64_t*)(arg1 - 112);
																	phi_in294 = *(uint32_t*)(arg1 - 104);
																	phi295 = *(uint64_t*)(arg1 - 96);
																	phi296 = *(uint64_t*)(arg1 - 88);
																	phi_in297 = *(uint32_t*)(arg1 - 80);
																	phi271 = *(uint32_t*)(arg1 - 80);
																	phi298 = *(uint32_t*)(arg1 - 80);
																	phi299 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
																}
															}
															phi255 = phi232;
															uint32_t phi_in339 = phi233;
															uint64_t phi293 = phi279;
															uint32_t phi_in340 = phi236;
															uint32_t phi341 = phi281;
															uint32_t phi_in342 = phi283;
															phi184 = phi284;
															phi185 = phi_in285;
															uint32_t phi_in343 = phi286;
															phi265 = phi_in245;
															uint32_t phi_in344 = phi288;
															uint32_t phi345 = phi290;
															uint32_t phi_in346 = phi291;
															phi269 = phi295;
															*(uint64_t*)(phi293 + 104) = phi296;
															phi272 = phi298;
															uint64_t phi_in347 = phi299;
															phi218 = phi_in276;
															phi256 = phi_in339;
															phi257 = *anon277;
															phi258 = phi_in280;
															phi259 = phi_in340;
															phi260 = phi341;
															phi261 = phi_in282;
															phi_in164 = phi_in342;
															phi262 = phi_in343;
															phi263 = phi_in240;
															phi264 = phi_in287;
															phi266 = phi_in344;
															phi_in224 = phi_in289;
															phi190 = phi345;
															phi248 = phi_in346;
															phi267 = phi_in292;
															phi268 = *(uint64_t*)(phi293 + 80);
															phi192 = phi_in294;
															phi210 = *(uint64_t*)(phi293 + 104);
															phi270 = phi_in297;
															phi273 = phi293;
															phi274 = phi_in347;
															if (*(uint32_t*)(phi293 + 64) < *anon277)
															{
																*(uint32_t*)(phi293 + 88) = phi_in276;
																uint32_t phi348 = phi255;
																uint32_t phi349 = phi_in339;
																*(uint32_t*)(phi293 + 112) = *anon277;
																uint32_t phi350 = phi_in280;
																uint32_t phi351 = phi_in282;
																uint32_t phi_in352 = phi185;
																uint32_t phi353 = phi265;
																*(uint64_t*)(phi293 + 80) = *(uint64_t*)(phi293 + 80);
																uint32_t phi354 = phi_in294;
																uint64_t phi355 = phi269;
																uint64_t phi356 = *(uint64_t*)(phi293 + 104);
																uint64_t phi_in357 = phi_in347;
																int64_t anon359 = anon278 * 12;
																int64_t anon358 = (__sext int64_t)*(uint32_t*)(anon359 + 6301636);
																if (*anon277 < *(uint32_t*)((anon358 << 2) + 6300992))
																{
																	*(uint32_t*)(phi293 + 112) = *anon277;
																	*(uint64_t*)(phi293 + 96) = phi269;
																	*(uint32_t*)(phi293 + 88) = phi255;
																	w(4197948, anon13, anon358, (__zext uint64_t)*(uint32_t*)(phi293 + 120));
																	*(uint32_t*)(phi293 + 88) = *(uint32_t*)(arg1 - 104);
																	phi348 = *(uint32_t*)(arg1 - 104);
																	phi349 = *(uint32_t*)(arg1 - 104);
																	*(uint32_t*)(phi293 + 112) = *(uint32_t*)(arg1 - 80);
																	phi350 = *(uint32_t*)(arg1 - 104);
																	phi341 = *(uint32_t*)(arg1 - 104);
																	phi351 = *(uint32_t*)(arg1 - 104);
																	phi_in352 = *(uint32_t*)(arg1 - 104);
																	phi353 = *(uint32_t*)(arg1 - 104);
																	phi345 = *(uint32_t*)(arg1 - 104);
																	*(uint64_t*)(phi293 + 80) = *(uint64_t*)(arg1 - 112);
																	phi354 = *(uint32_t*)(arg1 - 104);
																	phi355 = *(uint64_t*)(arg1 - 96);
																	phi356 = *(uint64_t*)(arg1 - 88);
																	phi293 = anon13;
																	phi_in357 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
																}
																phi255 = phi348;
																uint32_t phi_in360 = phi349;
																phi184 = *(uint32_t*)(phi293 + 112);
																uint32_t phi_in361 = phi350;
																phi260 = phi341;
																uint32_t phi_in362 = phi351;
																phi265 = phi353;
																phi190 = phi345;
																uint32_t phi_in363 = phi354;
																*(uint64_t*)(phi293 + 96) = phi355;
																*(uint64_t*)(phi293 + 104) = phi356;
																phi218 = *(uint32_t*)(phi293 + 88);
																phi256 = phi_in360;
																phi257 = phi184;
																phi258 = phi_in361;
																phi259 = phi184;
																phi261 = phi_in362;
																phi_in164 = phi184;
																phi185 = phi_in352;
																phi262 = phi184;
																phi263 = phi184;
																phi264 = phi184;
																phi266 = phi184;
																phi_in224 = phi184;
																phi248 = phi184;
																phi267 = phi184;
																phi268 = *(uint64_t*)(phi293 + 80);
																phi192 = phi_in363;
																phi269 = *(uint64_t*)(phi293 + 96);
																phi210 = *(uint64_t*)(phi293 + 104);
																phi270 = phi184;
																phi271 = phi184;
																phi272 = phi184;
																phi273 = phi293;
																phi274 = phi_in357;
																int64_t anon364 = (__sext int64_t)*(uint32_t*)(anon359 + 6301640);
																if (phi184 < *(uint32_t*)((anon364 << 2) + 6300992))
																{
																	*(uint32_t*)(phi293 + 112) = phi184;
																	w(4197231, anon13, anon364, (__zext uint64_t)*(uint32_t*)(phi293 + 120));
																	phi218 = alloca1.field8;
																	phi255 = alloca1.field8;
																	phi256 = alloca1.field8;
																	phi257 = alloca1.field12;
																	phi258 = alloca1.field8;
																	phi259 = alloca1.field12;
																	phi260 = alloca1.field8;
																	phi261 = alloca1.field8;
																	phi_in164 = alloca1.field12;
																	phi184 = alloca1.field12;
																	phi185 = alloca1.field8;
																	phi262 = alloca1.field12;
																	phi263 = alloca1.field12;
																	phi264 = alloca1.field12;
																	phi265 = alloca1.field8;
																	phi266 = alloca1.field12;
																	phi_in224 = alloca1.field12;
																	phi190 = alloca1.field8;
																	phi248 = alloca1.field12;
																	phi267 = alloca1.field12;
																	phi268 = alloca1.field7;
																	phi192 = alloca1.field8;
																	phi269 = alloca1.field10;
																	phi210 = alloca1.field11;
																	phi270 = alloca1.field12;
																	phi271 = alloca1.field12;
																	phi272 = alloca1.field12;
																	phi273 = anon13;
																	phi274 = (__zext uint64_t)alloca1.field8;
																}
															}
														}
														phi197 = phi256;
														phi199 = phi258;
														phi200 = phi259;
														phi201 = phi260;
														phi203 = phi184;
														phi204 = phi262;
														phi186 = phi263;
														phi205 = phi265;
														phi206 = phi266;
														phi_in127 = phi248;
														phi_in108 = phi267;
														phi173 = phi268;
														phi213 = phi272;
														phi135 = phi218;
														phi196 = phi255;
														phi198 = phi257;
														phi202 = phi261;
														phi_in164 = phi_in164;
														phi99 = phi185;
														phi102 = phi264;
														phi207 = phi_in224;
														phi170 = phi190;
														phi_in208 = phi192;
														phi209 = phi269;
														phi211 = phi270;
														phi212 = phi271;
														phi214 = phi273;
														phi177 = phi274;
														phi_in217 = phi230 + 4;
														phi179 = phi255;
														phi180 = phi197;
														phi219 = phi257;
														phi182 = phi199;
														phi220 = phi200;
														phi183 = phi201;
														phi163 = phi261;
														phi221 = phi_in164;
														phi184 = phi203;
														*(uint32_t*)(phi166 + 124) = phi204;
														phi222 = phi186;
														phi187 = phi264;
														phi223 = phi205;
														phi189 = phi206;
														phi225 = phi_in127;
														phi226 = phi_in108;
														phi227 = phi173;
														phi174 = phi269;
														*(uint64_t*)(phi166 + 112) = phi210;
														phi228 = phi270;
														phi193 = phi271;
														phi194 = phi213;
														phi176 = phi273;
														phi_in229 = phi274;
													}
													while (phi230 != 8);
												}
												phi137 = phi197;
												phi119 = phi198;
												phi138 = phi199;
												phi139 = phi200;
												phi141 = phi202;
												phi144 = phi203;
												phi126 = phi207;
												phi_in142 = phi173;
												phi129 = phi209;
												phi150 = phi211;
												phi152 = phi213;
												phi_in134 = phi210;
												phi136 = phi196;
												phi140 = phi201;
												phi143 = phi_in164;
												phi145 = phi99;
												phi_in100 = phi204;
												phi101 = phi186;
												phi146 = phi205;
												phi_in147 = phi206;
												phi106 = phi170;
												phi107 = phi_in127;
												phi148 = phi_in108;
												phi149 = phi_in208;
												phi151 = phi212;
												phi153 = phi214;
												phi154 = phi177;
												phi_in157 = phi178 + 4;
												phi_in117 = phi135;
												phi158 = phi196;
												phi159 = phi137;
												phi160 = phi119;
												phi161 = phi138;
												phi_in162 = phi139;
												phi121 = phi201;
												phi163 = phi141;
												phi165 = phi144;
												*(uint32_t*)(phi166 + 124) = phi204;
												phi167 = phi186;
												phi124 = phi205;
												phi168 = phi206;
												phi_in169 = phi126;
												phi_in171 = phi_in127;
												phi172 = phi_in108;
												phi173 = phi_in142;
												phi128 = phi_in208;
												phi174 = phi129;
												phi_in175 = phi210;
												phi_in130 = phi150;
												phi131 = phi212;
												phi132 = phi152;
												phi176 = phi214;
											}
											while (phi178 != 8);
										}
										phi83 = phi137;
										phi84 = phi138;
										phi365 = phi_in142;
										phi87 = phi145;
										phi69 = phi106;
										phi77 = phi153;
										phi89 = phi154;
										phi80 = phi129;
										phi81 = phi135;
										phi82 = phi136;
										phi85 = phi140;
										phi86 = phi141;
										phi_in88 = phi146;
										phi_in53 = phi149;
										phi72 = phi135;
										phi_in92 = phi136;
										phi73 = phi83;
										phi_in93 = phi119;
										phi74 = phi84;
										phi_in95 = phi139;
										phi96 = phi140;
										phi75 = phi141;
										phi_in97 = phi143;
										phi_in98 = phi144;
										phi99 = phi87;
										phi103 = phi146;
										phi104 = phi_in147;
										phi105 = phi126;
										phi106 = phi69;
										phi_in108 = phi148;
										phi109 = phi149;
										phi_in79 = phi129;
										phi110 = phi150;
										phi111 = phi151;
										phi112 = phi152;
										phi113 = phi77;
										phi114 = phi365 + 4;
										phi115 = phi_in134;
										phi116 = phi89;
									}
									while (phi365 != 8);
								}
								phi_in366 = phi81;
								phi_in367 = phi82;
								phi39 = phi83;
								phi_in368 = phi84;
								phi57 = phi85;
								phi_in369 = phi86;
								phi_in370 = phi87;
								phi45 = phi69;
								phi62 = phi77;
								phi47 = phi89;
								phi50 = phi_in366;
								phi_in65 = phi_in367;
								phi51 = phi39;
								phi52 = phi_in368;
								phi_in66 = phi57;
								phi67 = phi_in369;
								phi43 = phi_in370;
								phi_in68 = phi_in88;
								phi69 = phi45;
								phi_in49 = phi62;
								phi_in70 = phi78 + 4;
								phi71 = phi80;
								phi_in54 = phi47;
							}
							while (phi78 != 8);
							phi55 = phi_in366;
							phi_in29 = phi_in367;
							phi56 = phi_in368;
							phi58 = phi_in369;
							phi_in48 = *(uint64_t*)(phi62 + 72);
							phi_in59 = phi_in370;
							phi60 = phi_in88;
							phi61 = phi_in53;
						}
						phi34 = phi58;
						phi371 = phi_in48;
						phi35 = phi62;
						phi38 = phi55;
						phi40 = phi56;
						phi_in41 = phi57;
						phi_in42 = phi34;
						phi43 = phi_in59;
						phi_in44 = phi60;
						phi45 = phi45;
						phi46 = phi61;
						phi_in48 = phi371 + 4;
						phi_in49 = phi35;
					}
					while (phi371 != 8);
					phi27 = *(uint32_t*)(phi35 + 68);
					phi31 = phi34;
					phi_in30 = *(uint64_t*)(phi35 + 56);
					phi32 = (__zext uint64_t)phi34;
					phi33 = *(uint32_t*)(phi35 + 68);
					phi25 = *(uint32_t*)(phi35 + 68);
				}
				phi14 = phi27;
				phi19 = phi31;
				phi372 = phi_in30;
				phi_in373 = phi35;
				phi20 = phi14;
				phi21 = phi19;
				phi22 = phi32;
				*(uint32_t*)(phi_in23 + 68) = phi33;
				phi24 = phi34;
				phi26 = phi372 + 4;
				phi10 = phi_in373;
			}
			while (phi372 != 8);
			phi15 = *(uint64_t*)(phi_in373 + 48);
			phi16 = phi19;
			phi17 = phi14;
			phi18 = (__zext uint64_t)phi19;
			phi12 = phi_in373;
		}
		phi_in4 = phi16;
		phi_in5 = phi17;
		phi7 = phi18;
		*anon8 = phi14;
		phi11 = phi19;
		*(uint64_t*)(phi10 + 48) = phi15 + 4;
	}
	while (phi15 != 8);
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
		uint64_t phi19;
		uint32_t anon20;
		uint32_t anon30;
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
			uint32_t phi_in17;
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
				phi13 = *anon12;
				*anon11 = *anon11;
			}
			else 
			{
				phi13 = *anon11;
				phi_in14 = *anon12;
				phi_in17 = *anon16;
			}
			if (*anon11 < *anon12 && *anon11 < *anon16 || *anon11 >= *anon12 && *anon12 < *anon16)
			{
				*anon16 = phi_in14;
				*anon12 = *anon16;
				phi15 = *anon16;
				*anon11 = *anon16;
			}
			if (*anon11 < *anon12 && *anon11 < *anon16 || *anon11 >= *anon12 && *anon12 < *anon16 || *anon11 >= *anon16 && *anon11 < *anon12)
			{
				phi_in17 = phi15;
				*anon12 = phi13;
				if (*anon12 < *anon11)
				{
					phi_in17 = *anon16;
				}
			}
			uint32_t phi18 = phi_in17;
			phi19 = 6301636;
			anon20 = phi18 + 1 & 0xff;
			if (anon20 != 0)
			{
				phi10 = phi10 + 12;
			}
		}
		while (anon20 != 0);
		do
		{
			uint32_t phi23;
			uint32_t phi24;
			uint32_t phi25;
			uint32_t* anon26;
			uint32_t phi27;
			uint32_t phi_in28;
			uint32_t* anon21 = (uint32_t*)(phi19 + 4);
			uint32_t* anon22 = (uint32_t*)phi19;
			if (*anon21 < *anon22)
			{
				*anon22 = *anon21;
				*anon21 = *anon22;
				phi23 = *anon22;
				phi24 = *anon21;
				anon26 = (uint32_t*)((phi19 & 0xc) - 4);
				phi25 = *anon26;
				phi23 = *anon22;
				phi27 = *anon21;
			}
			else 
			{
				phi23 = *anon21;
				phi24 = *anon22;
				phi_in28 = *anon26;
			}
			if (*anon21 < *anon22 && *anon21 < *anon26 || *anon21 >= *anon22 && *anon22 < *anon26)
			{
				phi25 = phi24;
				*anon22 = *anon26;
				*anon26 = phi25;
				phi27 = *anon26;
			}
			if (*anon21 < *anon22 && *anon21 < *anon26 || *anon21 >= *anon22 && *anon22 < *anon26 || *anon21 >= *anon26 && *anon21 < *anon22)
			{
				phi_in28 = phi25;
				*anon22 = phi23;
				*anon21 = phi27;
				if (*anon22 < *anon21)
				{
					phi_in28 = *anon26;
				}
			}
			uint32_t phi29 = phi_in28;
			anon30 = phi29 + 1 & 0xff;
			if (anon30 != 0)
			{
				phi19 = phi19 + 12;
			}
		}
		while (anon30 != 0);
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
