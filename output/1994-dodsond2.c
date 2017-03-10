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
			phi6 = *anon4;
			anon8 = (uint32_t*)(phi3 - 4);
			phi7 = *anon8;
			phi9 = *phi1;
			*anon4 = *anon4;
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
			uint32_t phi_in12 = phi6;
			*phi1 = *anon8;
			*anon8 = phi_in12;
			phi7 = phi_in12;
			phi9 = phi_in11;
			*anon4 = *anon8;
		}
		if (*anon4 >= *phi1 && *phi1 < *anon8 || *anon4 < *phi1 && *anon4 < *anon8 || *anon4 >= *anon8 && *anon4 < *phi1)
		{
			uint32_t phi_in13 = phi7;
			*phi1 = phi9;
			phi10 = phi_in13;
			if (*anon4 > *phi1)
			{
				phi10 = *anon8;
			}
		}
		if (phi10 != 255)
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
	while (phi10 != 255);
	return;
}
void w(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	struct { uint8_t field0[4]; uint32_t field1; uint64_t field2; uint8_t field3[8]; uint32_t field4; uint32_t field5; uint8_t field6[48]; uint64_t field7; uint32_t field8; uint8_t field9[4]; uint64_t field10; uint64_t field11; uint32_t field12; uint8_t field13[8]; uint32_t field14; uint8_t field15[56]; uint64_t field16; } alloca1;
	uint32_t phi_in5;
	uint64_t phi11;
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
	phi_in5 = anon6;
	uint64_t phi7 = arg3 & 0xffffffff;
	uint32_t phi8 = anon6;
	uint32_t phi9 = anon3;
	uint64_t phi10 = 0;
	uint64_t anon12 = (uint64_t)&alloca1;
	phi11 = anon12;
	do
	{
		uint32_t phi_in13 = phi_in5;
		int64_t anon15 = (__sext int64_t)*(uint32_t*)(phi16 + *(uint64_t*)(phi_in17 + 8) + 6301632);
		uint32_t* anon14 = (uint32_t*)((anon15 << 2) + 6300992);
		*anon14 = phi8;
		phi16 = phi10;
		uint64_t phi_in17 = phi11;
		uint32_t phi18 = phi4;
		phi_in5 = phi_in13;
		phi7 = phi7 & 0xffffffff;
		uint32_t phi_in19 = *anon14;
		uint32_t phi20 = phi9;
		uint64_t phi21 = phi_in17;
		if (phi9 < *anon14)
		{
			uint32_t phi_in30;
			uint32_t phi_in357;
			uint64_t phi358;
			*(uint64_t*)(phi_in17 + 48) = phi16;
			*(uint64_t*)(phi_in17 + 16) = anon15 * 12;
			*(uint32_t*)(phi_in17 + 40) = (uint32_t)phi7 + 5;
			uint64_t phi22 = (__zext uint64_t)phi4;
			uint32_t phi23 = phi_in13;
			uint32_t phi24 = phi4;
			uint32_t phi25 = phi_in13;
			uint64_t phi26 = 0;
			do
			{
				uint32_t phi_in27 = phi4;
				*(uint32_t*)(phi_in17 + 68) = phi23;
				uint32_t phi28 = phi24;
				*(uint64_t*)(phi_in17 + 56) = phi26;
				uint32_t phi29 = phi_in13;
				phi_in30 = phi_in27;
				uint64_t phi_in31 = *(uint64_t*)(phi_in17 + 56);
				phi22 = phi22 & 0xffffffff;
				uint32_t phi32 = *(uint32_t*)(phi_in17 + 68);
				phi24 = phi28;
				phi_in5 = phi25;
				phi21 = phi_in17;
				int64_t anon34 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi_in17 + 56) + *(uint64_t*)(phi_in17 + 16) + 6301632);
				uint32_t* anon33 = (uint32_t*)((anon34 << 2) + 6300992);
				if (phi25 < *anon33)
				{
					uint32_t phi_in354;
					uint64_t phi355;
					uint64_t phi_in356;
					*anon33 = *(uint32_t*)(phi_in17 + 4);
					*(uint64_t*)(phi_in17 + 32) = anon34 * 12;
					*(uint32_t*)(phi_in17 + 44) = (uint32_t)phi22 + 6;
					uint32_t phi_in35 = phi28;
					uint32_t phi36 = phi28;
					uint32_t phi37 = phi28;
					uint32_t phi38 = phi28;
					uint32_t phi_in39 = phi28;
					uint32_t phi_in40 = phi28;
					uint32_t phi41 = phi28;
					uint32_t phi42 = phi28;
					uint32_t phi_in43 = phi28;
					uint64_t phi44 = (__zext uint64_t)phi28;
					uint64_t phi45 = 0;
					uint64_t phi46 = phi_in17;
					do
					{
						uint32_t phi_in47 = phi36;
						uint32_t phi_in48 = phi28;
						uint32_t phi_in49 = phi42;
						uint64_t phi50 = phi44;
						*(uint64_t*)(phi51 + 72) = phi45;
						uint64_t phi51 = phi46;
						uint32_t phi52 = phi_in35;
						uint32_t phi53 = phi_in47;
						uint32_t phi54 = phi37;
						uint32_t phi55 = phi38;
						uint32_t phi56 = phi_in39;
						uint32_t phi57 = phi_in40;
						uint64_t phi_in58 = *(uint64_t*)(phi51 + 72);
						phi28 = phi_in48;
						phi42 = phi_in49;
						uint32_t phi_in59 = phi_in43;
						uint64_t phi60 = phi50 & 0xffffffff;
						int64_t anon62 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi51 + 72) + *(uint64_t*)(phi51 + 32) + 6301632);
						uint32_t* anon61 = (uint32_t*)((anon62 << 2) + 6300992);
						if (*(uint32_t*)(phi51 + 4) < *anon61)
						{
							uint64_t phi78;
							uint32_t phi_in82;
							uint32_t phi_in84;
							uint32_t phi_in85;
							uint32_t phi_in87;
							uint32_t phi_in88;
							uint32_t phi_in350;
							uint32_t phi_in351;
							uint32_t phi_in352;
							uint32_t phi_in353;
							*anon61 = *(uint32_t*)(phi51 + 24);
							*(uint32_t*)(phi51 + 64) = (uint32_t)phi50 + 7;
							uint32_t phi_in63 = phi_in35;
							uint32_t phi_in64 = phi_in47;
							uint32_t phi65 = phi_in39;
							uint32_t phi66 = phi_in40;
							uint32_t phi67 = phi_in48;
							uint32_t phi_in68 = phi41;
							uint32_t phi_in69 = phi_in49;
							uint32_t phi_in70 = phi_in43;
							uint64_t phi_in71 = phi51;
							uint64_t phi_in72 = 0;
							uint64_t phi73 = anon62 * 12;
							do
							{
								uint32_t phi_in74 = phi37;
								uint32_t phi75 = phi38;
								uint32_t phi_in76 = phi65;
								uint32_t phi77 = phi66;
								phi78 = phi_in72;
								uint64_t phi79 = phi50;
								uint64_t phi80 = phi73;
								uint32_t phi81 = phi_in63;
								phi_in82 = phi_in64;
								uint32_t phi83 = phi_in74;
								phi_in84 = phi75;
								phi_in85 = phi_in76;
								uint32_t phi86 = phi77;
								phi_in87 = phi67;
								phi_in88 = phi_in68;
								uint32_t phi89 = phi_in69;
								uint32_t phi90 = phi_in70;
								uint64_t phi91 = phi_in71;
								phi50 = phi79 & 0xffffffff;
								int64_t anon93 = (__sext int64_t)*(uint32_t*)(phi78 + phi73 + 6301632);
								uint32_t* anon92 = (uint32_t*)((anon93 << 2) + 6300992);
								if (*(uint32_t*)(phi_in71 + 24) < *anon92)
								{
									uint32_t phi96;
									uint64_t phi349;
									*anon92 = *(uint32_t*)(phi_in71 + 28);
									uint32_t phi_in94 = phi_in63;
									uint32_t phi95 = phi_in64;
									uint32_t anon97 = (uint32_t)phi79 + 8;
									phi96 = anon97;
									uint32_t phi_in98 = anon97;
									uint32_t phi99 = anon97;
									uint32_t phi_in100 = anon97;
									uint32_t phi_in101 = anon97;
									uint32_t phi102 = anon97;
									uint32_t phi103 = anon97;
									uint32_t phi104 = phi_in68;
									uint32_t phi105 = anon97;
									uint32_t phi106 = anon97;
									uint32_t phi_in107 = phi_in69;
									uint32_t phi108 = anon97;
									uint32_t phi109 = anon97;
									uint32_t phi_in110 = phi_in70;
									uint64_t phi_in111 = phi73;
									uint32_t phi112 = anon97;
									uint32_t phi113 = anon97;
									uint32_t phi114 = anon97;
									uint64_t phi115 = phi_in71;
									uint64_t phi_in116 = 0;
									uint64_t phi117 = anon93 * 12;
									do
									{
										uint32_t phi118 = phi95;
										uint32_t phi119 = phi75;
										uint32_t phi120 = phi_in76;
										uint32_t phi_in121 = phi77;
										uint32_t phi122 = phi99;
										uint32_t phi123 = phi_in100;
										uint32_t phi124 = phi102;
										uint32_t phi_in125 = phi103;
										uint32_t phi_in126 = phi104;
										uint32_t phi127 = phi105;
										uint32_t phi_in128 = phi106;
										uint32_t phi129 = phi108;
										uint32_t phi130 = phi109;
										uint32_t phi_in131 = phi112;
										uint64_t phi_in132 = phi115;
										phi117 = phi117;
										phi_in63 = phi_in94;
										uint32_t phi133 = phi118;
										uint32_t phi134 = phi_in74;
										uint32_t phi135 = phi96;
										phi75 = phi119;
										uint32_t phi136 = phi_in98;
										uint32_t phi_in137 = phi_in121;
										phi99 = phi122;
										uint32_t phi138 = phi67;
										uint32_t phi139 = phi_in101;
										uint32_t phi140 = phi124;
										phi103 = phi_in125;
										phi_in68 = phi_in126;
										uint32_t phi141 = phi_in128;
										phi89 = phi_in107;
										uint32_t phi142 = phi129;
										uint32_t phi143 = phi_in110;
										phi112 = phi_in131;
										uint32_t phi144 = phi113;
										phi115 = phi_in132;
										phi79 = phi79;
										int64_t anon146 = (__sext int64_t)*(uint32_t*)(phi_in116 + phi117 + 6301632);
										uint32_t* anon145 = (uint32_t*)((anon146 << 2) + 6300992);
										if (*(uint32_t*)(phi_in132 + 28) < *anon145)
										{
											uint64_t phi168;
											*anon145 = *(uint32_t*)(phi_in132 + 40);
											*(uint32_t*)(phi_in132 + 120) = (uint32_t)phi79 + 9;
											uint64_t phi_in147 = 0;
											uint32_t phi148 = phi_in94;
											uint32_t phi149 = phi_in74;
											uint32_t phi150 = phi_in98;
											uint32_t phi_in151 = phi120;
											uint32_t phi_in152 = phi_in121;
											uint32_t phi153 = phi123;
											uint32_t phi154 = phi_in101;
											uint32_t phi_in155 = phi_in125;
											uint32_t phi156 = phi_in126;
											uint32_t phi_in157 = phi127;
											uint32_t phi158 = phi_in128;
											uint32_t phi159 = phi_in107;
											uint32_t phi160 = phi130;
											uint64_t phi161 = phi_in116;
											uint32_t phi_in162 = phi_in110;
											uint64_t phi_in163 = phi_in111;
											uint64_t phi164 = phi117;
											uint32_t phi165 = phi_in131;
											uint32_t phi166 = phi114;
											uint64_t phi167 = phi79 & 0xffffffff;
											do
											{
												phi168 = phi_in147;
												uint32_t phi169 = phi148;
												uint32_t phi170 = phi118;
												uint32_t phi171 = phi96;
												uint32_t phi_in172 = phi119;
												uint32_t phi173 = phi150;
												uint32_t phi_in174 = phi122;
												phi123 = phi153;
												uint32_t phi_in175 = phi67;
												uint32_t phi_in176 = phi154;
												uint32_t phi_in177 = phi124;
												uint32_t phi178 = phi156;
												uint32_t phi_in179 = phi158;
												uint32_t phi_in180 = phi129;
												uint32_t phi_in181 = phi160;
												uint64_t phi182 = phi164;
												uint32_t phi183 = phi113;
												uint32_t phi_in184 = phi166;
												uint64_t phi_in185 = phi167;
												phi_in94 = phi169;
												phi118 = phi170;
												uint32_t phi186 = phi149;
												uint32_t phi187 = phi171;
												uint32_t phi188 = phi_in172;
												phi136 = phi173;
												uint32_t phi189 = phi_in151;
												uint32_t phi190 = phi_in152;
												uint32_t phi191 = phi_in174;
												uint32_t phi192 = phi_in175;
												uint32_t phi193 = phi_in176;
												phi124 = phi_in177;
												uint32_t phi194 = phi_in155;
												uint32_t phi195 = phi178;
												uint32_t phi196 = phi_in157;
												uint32_t phi197 = phi_in179;
												uint32_t phi198 = phi159;
												uint32_t phi199 = phi_in180;
												phi130 = phi_in181;
												phi_in116 = phi161;
												uint32_t phi200 = phi_in162;
												uint64_t phi201 = phi_in163;
												uint64_t phi202 = phi182;
												uint32_t phi203 = phi165;
												phi113 = phi183;
												uint32_t phi204 = phi_in184;
												uint64_t phi205 = phi_in132;
												uint64_t phi206 = phi_in185;
												int64_t anon208 = (__sext int64_t)*(uint32_t*)(phi168 + anon146 * 12 + 6301632);
												uint32_t* anon207 = (uint32_t*)((anon208 << 2) + 6300992);
												if (*(uint32_t*)(phi_in132 + 40) < *anon207)
												{
													uint64_t phi222;
													*anon207 = *(uint32_t*)(phi_in132 + 44);
													uint64_t phi_in209 = 0;
													uint32_t phi210 = phi_in172;
													uint32_t phi_in211 = phi_in151;
													uint32_t phi_in212 = phi_in152;
													uint32_t phi213 = phi_in174;
													uint32_t phi214 = phi123;
													*(uint32_t*)(phi215 + 96) = phi_in175;
													uint32_t phi216 = phi_in176;
													uint32_t phi217 = phi_in177;
													int64_t anon221 = (__sext int64_t)*(uint32_t*)(phi222 + anon208 * 12 + 6301632);
													int64_t anon220 = anon221 * 12;
													int64_t anon219 = (__sext int64_t)*(uint32_t*)(anon220 + 6301636);
													uint32_t* anon218 = (uint32_t*)((anon219 << 2) + 6300992);
													*anon218 = phi_in155;
													uint32_t phi223 = phi_in157;
													uint32_t phi224 = phi_in179;
													uint32_t phi225 = phi_in180;
													uint32_t phi226 = phi_in181;
													uint32_t phi227 = phi_in162;
													uint64_t phi228 = phi_in163;
													uint32_t phi_in229 = phi_in184;
													uint64_t phi215 = phi_in132;
													uint64_t phi230 = phi_in185;
													do
													{
														phi222 = phi_in209;
														uint32_t phi_in231 = phi169;
														uint32_t phi_in232 = phi170;
														uint32_t phi_in233 = phi149;
														uint32_t phi234 = phi171;
														uint32_t phi235 = phi173;
														uint32_t phi236 = phi_in212;
														uint32_t phi_in237 = phi214;
														*(uint32_t*)(phi215 + 124) = phi216;
														uint32_t phi238 = phi178;
														uint32_t phi239 = phi223;
														uint32_t phi_in240 = phi224;
														uint32_t phi_in241 = phi159;
														uint32_t phi242 = phi226;
														*(uint64_t*)(phi215 + 88) = phi161;
														uint32_t phi243 = phi227;
														uint64_t phi244 = phi228;
														uint64_t phi245 = phi182;
														uint32_t phi246 = phi165;
														uint32_t phi_in247 = phi183;
														uint64_t phi248 = phi230;
														phi169 = phi_in231;
														uint32_t phi249 = phi_in232;
														uint32_t phi250 = phi_in233;
														phi188 = phi210;
														phi173 = phi235;
														uint32_t phi251 = phi_in211;
														phi190 = phi236;
														phi123 = phi_in237;
														uint32_t phi252 = *(uint32_t*)(phi215 + 96);
														phi_in176 = *(uint32_t*)(phi215 + 124);
														phi_in177 = phi217;
														uint32_t phi253 = *anon218;
														uint32_t phi254 = phi238;
														phi_in179 = phi_in240;
														phi159 = phi_in241;
														phi_in180 = phi225;
														uint32_t phi255 = phi242;
														uint64_t phi256 = *(uint64_t*)(phi215 + 88);
														uint32_t phi257 = phi243;
														uint64_t phi258 = phi244;
														phi182 = phi245;
														uint32_t phi259 = phi_in247;
														uint32_t phi260 = phi_in229;
														uint64_t phi261 = phi215;
														phi230 = phi248;
														uint32_t* anon262 = (uint32_t*)((anon221 << 2) + 6300992);
														if (*(uint32_t*)(phi215 + 44) < *anon262)
														{
															uint64_t phi322;
															*anon262 = *(uint32_t*)(phi215 + 64);
															uint32_t phi263 = phi_in232;
															uint32_t phi264 = phi_in233;
															*(uint32_t*)(phi265 + 112) = phi234;
															uint64_t phi265 = phi215;
															uint32_t phi266 = phi210;
															uint32_t phi267 = phi235;
															uint32_t phi_in268 = phi_in211;
															uint32_t phi269 = phi213;
															uint32_t phi_in270 = phi_in237;
															phi252 = *(uint32_t*)(phi215 + 96);
															uint32_t phi271 = *(uint32_t*)(phi215 + 124);
															uint32_t phi_in272 = phi217;
															uint32_t phi_in273 = *anon218;
															phi223 = phi239;
															uint32_t phi_in274 = phi_in240;
															uint32_t phi275 = phi_in241;
															uint64_t phi276 = *(uint64_t*)(phi215 + 88);
															uint32_t phi_in277 = phi243;
															uint64_t phi278 = phi244;
															uint32_t phi279 = phi_in247;
															uint32_t phi280 = phi_in229;
															uint64_t phi281 = phi248;
															if (*(uint32_t*)(phi215 + 64) < *anon218)
															{
																uint32_t phi282 = phi_in231;
																uint32_t phi283 = phi_in232;
																uint32_t phi_in284 = phi_in233;
																uint32_t phi285 = phi234;
																uint32_t phi286 = phi_in211;
																uint32_t phi_in287 = phi236;
																uint32_t phi288 = phi213;
																uint64_t phi289 = phi215;
																uint32_t phi290 = phi_in237;
																uint64_t phi291 = anon219;
																uint32_t phi292 = *(uint32_t*)(phi215 + 96);
																phi178 = phi238;
																uint32_t phi293 = phi_in241;
																uint64_t phi294 = *(uint64_t*)(phi215 + 88);
																*(uint64_t*)(phi289 + 112) = phi245;
																if (phi217 < *anon218)
																{
																	*(uint64_t*)(phi215 + 112) = phi245;
																	*(uint64_t*)(phi215 + 104) = phi244;
																	*(uint64_t*)(phi215 + 80) = anon219;
																	w(4197873, anon12, (__sext int64_t)*anon218, (__zext uint64_t)*anon218);
																	phi282 = *(uint32_t*)(arg1 - 96);
																	phi283 = *(uint32_t*)(arg1 - 96);
																	phi_in284 = *(uint32_t*)(arg1 - 96);
																	phi285 = *(uint32_t*)(arg1 - 68);
																	phi210 = *(uint32_t*)(arg1 - 96);
																	phi235 = *(uint32_t*)(arg1 - 68);
																	phi286 = *(uint32_t*)(arg1 - 96);
																	phi_in287 = *(uint32_t*)(arg1 - 96);
																	phi288 = *(uint32_t*)(arg1 - 68);
																	phi289 = anon12;
																	phi290 = *(uint32_t*)(arg1 - 68);
																	phi291 = *(uint64_t*)(arg1 - 112);
																	phi292 = *(uint32_t*)(arg1 - 96);
																	phi178 = *(uint32_t*)(arg1 - 96);
																	phi293 = *(uint32_t*)(arg1 - 96);
																	phi294 = *(uint64_t*)(arg1 - 104);
																	phi243 = *(uint32_t*)(arg1 - 96);
																	phi244 = *(uint64_t*)(arg1 - 88);
																	*(uint64_t*)(phi289 + 112) = *(uint64_t*)(arg1 - 80);
																	phi248 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
																}
																uint32_t phi_in295 = phi282;
																uint32_t phi_in296 = phi283;
																uint32_t phi_in297 = phi285;
																uint32_t phi_in298 = phi210;
																uint32_t phi_in299 = phi235;
																uint32_t phi300 = phi286;
																*(uint32_t*)(phi289 + 124) = phi288;
																*(uint64_t*)(phi289 + 80) = phi291;
																uint32_t phi301 = phi292;
																uint32_t phi_in302 = phi178;
																uint32_t phi_in303 = phi293;
																*(uint64_t*)(phi289 + 88) = phi294;
																uint32_t phi_in304 = phi243;
																*(uint64_t*)(phi289 + 104) = phi244;
																uint64_t phi_in305 = phi248;
																uint32_t phi_in306 = phi_in295;
																uint32_t phi307 = phi_in284;
																*(uint32_t*)(phi265 + 112) = phi_in297;
																uint32_t phi308 = phi_in298;
																uint64_t phi309 = phi289;
																*(uint32_t*)(phi265 + 112) = phi_in299;
																phi236 = phi_in287;
																uint64_t phi310 = *(uint64_t*)(phi289 + 80);
																uint32_t phi311 = phi_in302;
																uint32_t phi312 = phi_in303;
																uint64_t phi313 = *(uint64_t*)(phi289 + 88);
																uint32_t phi_in314 = phi_in304;
																uint64_t phi315 = *(uint64_t*)(phi289 + 104);
																*(uint64_t*)(phi265 + 104) = *(uint64_t*)(phi289 + 112);
																uint64_t phi_in316 = phi_in305;
																int64_t anon317 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi289 + 80) * 12 + 6301636);
																if (phi290 < *(uint32_t*)((anon317 << 2) + 6300992))
																{
																	*(uint32_t*)(phi289 + 96) = phi300;
																	w(4197793, anon12, anon317, (__zext uint64_t)*(uint32_t*)(phi289 + 120));
																	phi_in306 = *(uint32_t*)(arg1 - 96);
																	phi_in296 = *(uint32_t*)(arg1 - 96);
																	phi307 = *(uint32_t*)(arg1 - 96);
																	*(uint32_t*)(phi265 + 112) = alloca1.field14;
																	phi308 = *(uint32_t*)(arg1 - 96);
																	phi309 = anon12;
																	*(uint32_t*)(phi265 + 112) = alloca1.field14;
																	phi300 = *(uint32_t*)(arg1 - 96);
																	phi236 = *(uint32_t*)(arg1 - 96);
																	phi310 = *(uint64_t*)(arg1 - 112);
																	phi301 = *(uint32_t*)(arg1 - 96);
																	phi311 = *(uint32_t*)(arg1 - 96);
																	phi312 = *(uint32_t*)(arg1 - 96);
																	phi313 = *(uint64_t*)(arg1 - 104);
																	phi_in314 = *(uint32_t*)(arg1 - 96);
																	phi315 = *(uint64_t*)(arg1 - 88);
																	*(uint64_t*)(phi265 + 104) = *(uint64_t*)(arg1 - 80);
																	phi_in316 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
																}
																phi264 = phi307;
																*(uint32_t*)(phi265 + 88) = phi308;
																phi265 = phi309;
																phi246 = *(uint32_t*)(phi265 + 112);
																uint32_t phi_in318 = phi300;
																uint32_t phi_in319 = phi301;
																phi238 = phi311;
																uint32_t phi_in320 = phi312;
																*(uint64_t*)(phi265 + 80) = phi313;
																*(uint64_t*)(phi265 + 96) = phi315;
																phi245 = *(uint64_t*)(phi265 + 104);
																phi_in231 = phi_in306;
																phi263 = phi_in296;
																phi266 = *(uint32_t*)(phi265 + 88);
																phi267 = phi246;
																phi_in268 = phi_in318;
																phi269 = phi246;
																phi_in270 = phi246;
																phi252 = phi_in319;
																phi271 = phi246;
																phi_in272 = phi246;
																phi_in273 = phi246;
																phi223 = phi246;
																phi_in274 = phi246;
																phi275 = phi_in320;
																phi225 = phi246;
																phi242 = phi246;
																phi276 = *(uint64_t*)(phi265 + 80);
																phi_in277 = phi_in314;
																phi278 = *(uint64_t*)(phi265 + 96);
																phi279 = phi246;
																phi280 = phi246;
																phi281 = phi_in316;
																int64_t anon321 = (__sext int64_t)*(uint32_t*)(phi310 * 12 + 6301640);
																if (phi246 < *(uint32_t*)((anon321 << 2) + 6300992))
																{
																	*(uint32_t*)(phi265 + 112) = phi246;
																	*(uint64_t*)(phi265 + 104) = phi245;
																	w(4197395, anon12, anon321, (__zext uint64_t)*(uint32_t*)(phi265 + 120));
																	phi_in231 = *(uint32_t*)(arg1 - 104);
																	phi263 = *(uint32_t*)(arg1 - 104);
																	phi264 = *(uint32_t*)(arg1 - 104);
																	*(uint32_t*)(phi265 + 112) = *(uint32_t*)(arg1 - 80);
																	phi265 = anon12;
																	phi266 = *(uint32_t*)(arg1 - 104);
																	phi267 = *(uint32_t*)(arg1 - 80);
																	phi_in268 = *(uint32_t*)(arg1 - 104);
																	phi236 = *(uint32_t*)(arg1 - 104);
																	phi269 = *(uint32_t*)(arg1 - 80);
																	phi_in270 = *(uint32_t*)(arg1 - 80);
																	phi252 = *(uint32_t*)(arg1 - 104);
																	phi271 = *(uint32_t*)(arg1 - 80);
																	phi_in272 = *(uint32_t*)(arg1 - 80);
																	phi_in273 = *(uint32_t*)(arg1 - 80);
																	phi238 = *(uint32_t*)(arg1 - 104);
																	phi223 = *(uint32_t*)(arg1 - 80);
																	phi_in274 = *(uint32_t*)(arg1 - 80);
																	phi275 = *(uint32_t*)(arg1 - 104);
																	phi225 = *(uint32_t*)(arg1 - 80);
																	phi242 = *(uint32_t*)(arg1 - 80);
																	phi276 = *(uint64_t*)(arg1 - 112);
																	phi_in277 = *(uint32_t*)(arg1 - 104);
																	phi278 = *(uint64_t*)(arg1 - 96);
																	phi245 = *(uint64_t*)(arg1 - 88);
																	phi246 = *(uint32_t*)(arg1 - 80);
																	phi279 = *(uint32_t*)(arg1 - 80);
																	phi280 = *(uint32_t*)(arg1 - 80);
																	phi281 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
																}
															}
															*(uint32_t*)(phi265 + 88) = phi263;
															phi250 = phi264;
															*(uint32_t*)(phi322 + 112) = *(uint32_t*)(phi265 + 112);
															uint32_t phi323 = phi266;
															uint32_t phi_in324 = phi267;
															uint32_t phi_in325 = phi236;
															phi213 = phi269;
															uint32_t phi_in326 = phi271;
															phi254 = phi238;
															phi239 = phi223;
															uint32_t phi_in327 = phi275;
															uint32_t phi_in328 = phi225;
															uint32_t phi_in329 = phi242;
															*(uint64_t*)(phi265 + 80) = phi276;
															phi257 = phi_in277;
															*(uint64_t*)(phi265 + 96) = phi278;
															*(uint64_t*)(phi265 + 104) = phi245;
															uint32_t phi_in330 = phi279;
															phi260 = phi280;
															uint64_t phi331 = phi281;
															phi169 = phi_in231;
															phi249 = *(uint32_t*)(phi265 + 88);
															phi234 = *(uint32_t*)(phi322 + 112);
															phi188 = phi323;
															phi173 = phi_in324;
															phi251 = phi_in268;
															phi190 = phi_in325;
															phi123 = phi_in270;
															phi_in176 = phi_in326;
															phi_in177 = phi_in272;
															phi253 = phi_in273;
															phi_in179 = phi_in274;
															phi159 = phi_in327;
															phi_in180 = phi_in328;
															phi255 = phi_in329;
															phi256 = *(uint64_t*)(phi265 + 80);
															phi258 = *(uint64_t*)(phi265 + 96);
															phi182 = *(uint64_t*)(phi265 + 104);
															phi259 = phi_in330;
															phi261 = phi265;
															phi230 = phi331;
															int64_t anon333 = (__sext int64_t)*(uint32_t*)(anon220 + 6301640);
															uint32_t* anon332 = (uint32_t*)((anon333 << 2) + 6300992);
															if (*(uint32_t*)(phi265 + 64) < *anon332)
															{
																*anon332 = *(uint32_t*)(phi322 + 112);
																uint32_t phi334 = phi_in231;
																uint32_t phi335 = *(uint32_t*)(phi265 + 88);
																uint32_t phi336 = phi250;
																uint32_t phi337 = phi_in268;
																uint32_t phi338 = phi_in325;
																uint32_t phi339 = phi252;
																uint32_t phi340 = phi_in327;
																*(uint64_t*)(phi322 + 80) = *(uint64_t*)(phi265 + 80);
																uint32_t phi341 = phi257;
																*(uint64_t*)(phi322 + 96) = *(uint64_t*)(phi265 + 96);
																*(uint64_t*)(phi322 + 104) = *(uint64_t*)(phi265 + 104);
																phi322 = phi265;
																int64_t anon343 = anon333 * 12;
																int64_t anon342 = (__sext int64_t)*(uint32_t*)(anon343 + 6301636);
																if (*(uint32_t*)(phi322 + 112) < *(uint32_t*)((anon342 << 2) + 6300992))
																{
																	*(uint32_t*)(phi265 + 112) = *(uint32_t*)(phi322 + 112);
																	w(4197948, anon12, anon342, (__zext uint64_t)*(uint32_t*)(phi265 + 120));
																	phi334 = *(uint32_t*)(arg1 - 104);
																	phi335 = *(uint32_t*)(arg1 - 104);
																	phi336 = *(uint32_t*)(arg1 - 104);
																	*(uint32_t*)(phi322 + 112) = *(uint32_t*)(arg1 - 80);
																	phi323 = *(uint32_t*)(arg1 - 104);
																	phi337 = *(uint32_t*)(arg1 - 104);
																	phi338 = *(uint32_t*)(arg1 - 104);
																	phi339 = *(uint32_t*)(arg1 - 104);
																	phi254 = *(uint32_t*)(arg1 - 104);
																	phi340 = *(uint32_t*)(arg1 - 104);
																	*(uint64_t*)(phi322 + 80) = *(uint64_t*)(arg1 - 112);
																	phi341 = *(uint32_t*)(arg1 - 104);
																	*(uint64_t*)(phi322 + 96) = *(uint64_t*)(arg1 - 96);
																	*(uint64_t*)(phi322 + 104) = *(uint64_t*)(arg1 - 88);
																	phi322 = anon12;
																	phi331 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
																}
																*(uint32_t*)(phi322 + 88) = phi334;
																phi249 = phi335;
																uint32_t phi_in344 = phi336;
																phi246 = *(uint32_t*)(phi322 + 112);
																phi188 = phi323;
																uint32_t phi_in345 = phi337;
																phi190 = phi338;
																phi252 = phi339;
																uint32_t phi_in346 = phi340;
																phi257 = phi341;
																uint64_t phi_in347 = phi331;
																phi169 = *(uint32_t*)(phi322 + 88);
																phi250 = phi_in344;
																phi234 = phi246;
																phi173 = phi246;
																phi251 = phi_in345;
																phi213 = phi246;
																phi123 = phi246;
																phi_in176 = phi246;
																phi_in177 = phi246;
																phi253 = phi246;
																phi239 = phi246;
																phi_in179 = phi246;
																phi159 = phi_in346;
																phi_in180 = phi246;
																phi255 = phi246;
																phi256 = *(uint64_t*)(phi322 + 80);
																phi258 = *(uint64_t*)(phi322 + 96);
																phi182 = *(uint64_t*)(phi322 + 104);
																phi259 = phi246;
																phi260 = phi246;
																phi261 = phi322;
																phi230 = phi_in347;
																int64_t anon348 = (__sext int64_t)*(uint32_t*)(anon343 + 6301640);
																if (phi246 < *(uint32_t*)((anon348 << 2) + 6300992))
																{
																	*(uint32_t*)(phi322 + 112) = phi246;
																	w(4197231, anon12, anon348, (__zext uint64_t)*(uint32_t*)(phi322 + 120));
																	phi169 = alloca1.field8;
																	phi249 = alloca1.field8;
																	phi250 = alloca1.field8;
																	phi234 = alloca1.field12;
																	phi188 = alloca1.field8;
																	phi173 = alloca1.field12;
																	phi251 = alloca1.field8;
																	phi190 = alloca1.field8;
																	phi213 = alloca1.field12;
																	phi123 = alloca1.field12;
																	phi252 = alloca1.field8;
																	phi_in176 = alloca1.field12;
																	phi_in177 = alloca1.field12;
																	phi253 = alloca1.field12;
																	phi254 = alloca1.field8;
																	phi239 = alloca1.field12;
																	phi_in179 = alloca1.field12;
																	phi159 = alloca1.field8;
																	phi_in180 = alloca1.field12;
																	phi255 = alloca1.field12;
																	phi256 = alloca1.field7;
																	phi257 = alloca1.field8;
																	phi258 = alloca1.field10;
																	phi182 = alloca1.field11;
																	phi246 = alloca1.field12;
																	phi259 = alloca1.field12;
																	phi260 = alloca1.field12;
																	phi261 = anon12;
																	phi230 = (__zext uint64_t)alloca1.field8;
																}
															}
														}
														phi187 = phi234;
														phi189 = phi251;
														phi192 = phi252;
														phi194 = phi253;
														phi195 = phi254;
														phi196 = phi239;
														phi205 = phi261;
														phi_in94 = phi169;
														phi118 = phi249;
														phi186 = phi250;
														phi136 = phi173;
														phi191 = phi213;
														phi193 = phi_in176;
														phi124 = phi_in177;
														phi197 = phi_in179;
														phi198 = phi159;
														phi199 = phi_in180;
														phi130 = phi255;
														phi_in116 = phi256;
														phi200 = phi257;
														phi201 = phi258;
														phi202 = phi182;
														phi203 = phi246;
														phi113 = phi259;
														phi204 = phi260;
														phi206 = phi230;
														phi_in209 = phi222 + 4;
														phi170 = phi249;
														phi149 = phi250;
														phi171 = phi187;
														phi210 = phi188;
														phi_in211 = phi189;
														phi_in212 = phi190;
														phi213 = phi213;
														phi214 = phi123;
														*(uint32_t*)(phi215 + 96) = phi192;
														phi216 = phi_in176;
														phi217 = phi_in177;
														*anon218 = phi194;
														phi178 = phi195;
														phi223 = phi196;
														phi224 = phi_in179;
														phi225 = phi_in180;
														phi226 = phi255;
														phi161 = phi256;
														phi227 = phi257;
														phi228 = phi258;
														phi165 = phi246;
														phi183 = phi259;
														phi_in229 = phi260;
														phi215 = phi205;
													}
													while (phi222 != 8);
												}
												phi135 = phi187;
												phi138 = phi192;
												phi89 = phi198;
												phi114 = phi204;
												phi117 = phi202;
												phi_in63 = phi_in94;
												phi133 = phi118;
												phi134 = phi186;
												phi75 = phi188;
												phi120 = phi189;
												phi_in137 = phi190;
												phi99 = phi191;
												phi139 = phi193;
												phi140 = phi124;
												phi103 = phi194;
												phi_in68 = phi195;
												phi127 = phi196;
												phi141 = phi197;
												phi142 = phi199;
												phi143 = phi200;
												phi_in111 = phi201;
												phi112 = phi203;
												phi144 = phi113;
												phi115 = phi205;
												phi79 = phi206;
												phi_in147 = phi168 + 4;
												phi148 = phi_in94;
												phi149 = phi186;
												phi96 = phi135;
												phi119 = phi188;
												phi150 = phi136;
												phi_in151 = phi189;
												phi_in152 = phi190;
												phi122 = phi191;
												phi153 = phi123;
												phi67 = phi138;
												phi154 = phi193;
												phi_in155 = phi194;
												phi156 = phi195;
												phi_in157 = phi196;
												phi158 = phi197;
												phi159 = phi89;
												phi129 = phi199;
												phi160 = phi130;
												phi161 = phi_in116;
												phi_in162 = phi200;
												phi_in163 = phi201;
												phi164 = phi202;
												phi165 = phi203;
												phi166 = phi114;
												phi_in132 = phi205;
												phi167 = phi206;
											}
											while (phi168 != 8);
										}
										phi83 = phi134;
										phi349 = phi_in116;
										phi_in87 = phi138;
										phi80 = phi_in111;
										phi81 = phi_in63;
										phi_in82 = phi133;
										phi_in84 = phi75;
										phi_in85 = phi120;
										phi86 = phi_in137;
										phi_in88 = phi_in68;
										phi90 = phi143;
										phi91 = phi115;
										phi50 = phi79;
										phi_in94 = phi_in63;
										phi95 = phi133;
										phi_in74 = phi83;
										phi96 = phi135;
										phi_in98 = phi136;
										phi_in76 = phi120;
										phi77 = phi_in137;
										phi_in100 = phi123;
										phi67 = phi_in87;
										phi_in101 = phi139;
										phi102 = phi140;
										phi104 = phi_in68;
										phi105 = phi127;
										phi106 = phi141;
										phi_in107 = phi89;
										phi108 = phi142;
										phi109 = phi130;
										phi_in110 = phi143;
										phi113 = phi144;
										phi114 = phi114;
										phi_in116 = phi349 + 4;
									}
									while (phi349 != 8);
								}
								phi52 = phi81;
								phi_in350 = phi83;
								phi_in351 = phi86;
								phi_in352 = phi89;
								phi_in353 = phi90;
								phi51 = phi91;
								phi_in63 = phi52;
								phi_in64 = phi_in82;
								phi37 = phi_in350;
								phi38 = phi_in84;
								phi65 = phi_in85;
								phi66 = phi_in351;
								phi67 = phi_in87;
								phi_in68 = phi_in88;
								phi_in69 = phi_in352;
								phi_in70 = phi_in353;
								phi_in71 = phi51;
								phi_in72 = phi78 + 4;
								phi73 = phi80;
							}
							while (phi78 != 8);
							phi53 = phi_in82;
							phi54 = phi_in350;
							phi55 = phi_in84;
							phi56 = phi_in85;
							phi57 = phi_in351;
							phi_in58 = *(uint64_t*)(phi51 + 72);
							phi28 = phi_in87;
							phi41 = phi_in88;
							phi42 = phi_in352;
							phi_in59 = phi_in353;
							phi60 = phi50;
						}
						phi_in354 = phi57;
						phi355 = phi_in58;
						phi_in356 = phi51;
						phi_in35 = phi52;
						phi36 = phi53;
						phi37 = phi54;
						phi38 = phi55;
						phi_in39 = phi56;
						phi_in40 = phi_in354;
						phi41 = phi41;
						phi_in43 = phi_in59;
						phi44 = phi60;
						phi45 = phi355 + 4;
						phi46 = phi_in356;
					}
					while (phi355 != 8);
					phi29 = *(uint32_t*)(phi_in356 + 68);
					phi_in30 = phi_in354;
					phi_in31 = *(uint64_t*)(phi_in356 + 56);
					phi22 = (__zext uint64_t)phi_in354;
					phi32 = *(uint32_t*)(phi_in356 + 68);
					phi24 = phi_in354;
					phi_in5 = *(uint32_t*)(phi_in356 + 68);
					phi21 = phi_in356;
				}
				phi_in357 = phi29;
				phi358 = phi_in31;
				phi_in13 = phi_in357;
				phi4 = phi_in30;
				phi23 = phi32;
				phi25 = phi_in5;
				phi26 = phi358 + 4;
				phi_in17 = phi21;
			}
			while (phi358 != 8);
			phi16 = *(uint64_t*)(phi21 + 48);
			phi18 = phi_in30;
			phi_in5 = phi_in357;
			phi7 = (__zext uint64_t)phi_in30;
			phi_in19 = phi_in357;
			phi20 = phi_in30;
		}
		phi4 = phi18;
		phi8 = phi_in19;
		phi9 = phi20;
		phi10 = phi16 + 4;
		phi11 = phi21;
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
			uint32_t phi_in15;
			uint32_t* anon16;
			uint32_t phi17;
			uint32_t* anon11 = (uint32_t*)((phi10 & 0xc) + 4);
			uint32_t* anon12 = (uint32_t*)phi10;
			if (*anon11 < *anon12)
			{
				*anon12 = *anon11;
				*anon11 = *anon12;
				phi13 = *anon12;
				phi14 = *anon11;
				anon16 = (uint32_t*)(phi10 - 4);
				phi_in15 = *anon16;
				phi17 = *anon12;
				*anon11 = *anon11;
			}
			else 
			{
				phi13 = *anon11 & 0xf;
				phi14 = *anon12 & 0xf;
				phi_in15 = *anon16;
			}
			if (*anon11 < *anon12 && *anon11 < *anon16 || *anon11 >= *anon12 && *anon12 < *anon16)
			{
				uint32_t phi_in18 = phi13;
				phi_in15 = phi14;
				*anon12 = *anon16 & 0xf;
				*anon16 = phi_in15;
				phi17 = phi_in18;
				*anon11 = *anon16;
			}
			if (*anon11 < *anon12 && *anon11 < *anon16 || *anon11 >= *anon12 && *anon12 < *anon16 || *anon11 >= *anon16 && *anon11 < *anon12)
			{
				*anon12 = phi17;
				struct { uint32_t field0; bool field1; } anon19 = llvm.ssub.with.overflow.i32(*anon12, *anon11);
				if ((uint8_t)((*anon12 & 0xf) - (*anon11 & 0xf) >> 31) != (__zext uint8_t)anon19.field1)
				{
					phi_in15 = *anon16;
				}
			}
			uint32_t phi20 = phi_in15;
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
				phi25 = *anon23 & 0xf;
				phi26 = *anon24 & 0xf;
				phi_in30 = *anon28;
			}
			if (*anon23 < *anon24 && *anon23 < *anon28 || *anon23 >= *anon24 && *anon24 < *anon28)
			{
				uint32_t phi_in31 = phi25;
				phi27 = phi26;
				*anon24 = *anon28 & 0xf;
				*anon28 = phi27;
				*anon24 = phi_in31;
				phi29 = *anon28;
			}
			if (*anon23 < *anon24 && *anon23 < *anon28 || *anon23 >= *anon24 && *anon24 < *anon28 || *anon23 >= *anon28 && *anon23 < *anon24)
			{
				phi_in30 = phi27;
				*anon23 = phi29;
				struct { uint32_t field0; bool field1; } anon32 = llvm.ssub.with.overflow.i32(*anon24, *anon23);
				if ((uint8_t)((*anon24 & 0xf) - (*anon23 & 0xf) >> 31) != (__zext uint8_t)anon32.field1)
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
		uint64_t phi20;
		uint64_t anon21;
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
		if (*anon3 < 1 && anon12 != 0)
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
