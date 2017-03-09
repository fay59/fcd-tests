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
	uint32_t phi9;
	uint32_t* phi1 = (uint32_t*)0x6027c4;
	uint64_t phi_in2 = 6301636;
	do
	{
		uint32_t phi_in5;
		uint32_t phi6;
		uint32_t phi7;
		uint32_t* anon8;
		uint64_t phi3 = phi_in2;
		uint32_t* anon4 = (uint32_t*)(phi3 + 4);
		if (*anon4 < *phi1)
		{
			*anon4 = *phi1;
			*phi1 = *anon4;
			phi_in5 = *phi1;
			phi6 = *anon4;
			anon8 = (uint32_t*)(phi3 - 4);
			phi7 = *anon8;
			*phi1 = *phi1;
			*anon4 = *anon4;
		}
		else 
		{
			phi_in5 = *anon4;
			phi6 = *phi1;
			phi9 = *anon8;
		}
		if (*anon4 >= *phi1 && *phi1 < *anon8 || *anon4 < *phi1 && *anon4 < *anon8)
		{
			phi7 = phi6;
			*phi1 = *anon8;
			*anon8 = phi7;
			*phi1 = phi_in5;
			*anon4 = *anon8;
		}
		if (*anon4 >= *phi1 && *phi1 < *anon8 || *anon4 < *phi1 && *anon4 < *anon8 || *anon4 >= *anon8 && *anon4 < *phi1)
		{
			uint32_t phi_in10 = phi7;
			phi9 = phi_in10;
			if (*anon4 > *phi1)
			{
				phi9 = *anon8;
			}
		}
		if (phi9 != 255)
		{
			uint64_t anon11 = phi3 + 12;
			phi1 = (uint32_t*)anon11;
			phi_in2 = anon11;
			if (phi3 == 6301984)
			{
				break;
			}
		}
	}
	while (phi9 != 255);
	return;
}
void w(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	struct { uint8_t field0[4]; uint32_t field1; uint64_t field2; uint8_t field3[8]; uint32_t field4; uint32_t field5; uint8_t field6[48]; uint64_t field7; uint32_t field8; uint8_t field9[4]; uint64_t field10; uint64_t field11; uint32_t field12; uint8_t field13[8]; uint32_t field14; uint8_t field15[56]; uint64_t field16; } alloca1;
	uint32_t phi5;
	uint64_t phi_in10;
	uint64_t phi15;
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
	int64_t anon9 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi_in10 + 48) + *(uint64_t*)(phi_in10 + 8) + 6301632);
	uint32_t* anon8 = (uint32_t*)((anon9 << 2) + 6300992);
	*anon8 = anon6;
	uint32_t phi11 = anon3;
	*(uint64_t*)(phi_in10 + 48) = 0;
	uint64_t anon12 = (uint64_t)&alloca1;
	phi_in10 = anon12;
	do
	{
		uint32_t phi13 = phi4;
		uint32_t phi14 = phi5;
		phi15 = *(uint64_t*)(phi_in10 + 48);
		uint32_t phi16 = phi13;
		uint32_t phi17 = phi14;
		uint64_t phi18 = phi7 & 0xffffffff;
		uint32_t phi19 = *anon8;
		uint32_t phi20 = phi11;
		uint64_t phi21 = phi_in10;
		if (phi11 < *anon8)
		{
			uint32_t phi_in31;
			uint64_t phi360;
			*(uint64_t*)(phi_in10 + 16) = anon9 * 12;
			*(uint32_t*)(phi_in10 + 40) = (uint32_t)phi7 + 5;
			uint32_t phi_in22 = phi14;
			uint64_t phi23 = (__zext uint64_t)phi13;
			uint32_t phi24 = phi14;
			uint32_t phi25 = phi13;
			uint64_t phi26 = 0;
			uint64_t phi_in27 = phi_in10;
			do
			{
				uint32_t phi_in28 = phi13;
				*(uint32_t*)(phi_in27 + 68) = phi24;
				uint32_t phi29 = phi25;
				*(uint64_t*)(phi_in27 + 56) = phi26;
				uint32_t phi30 = phi_in22;
				phi_in31 = phi_in28;
				uint64_t phi_in32 = *(uint64_t*)(phi_in27 + 56);
				uint64_t phi33 = phi23 & 0xffffffff;
				uint32_t phi34 = *(uint32_t*)(phi_in27 + 68);
				uint32_t phi35 = phi29;
				uint32_t phi36 = phi14;
				int64_t anon38 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi_in27 + 56) + *(uint64_t*)(phi_in27 + 16) + 6301632);
				uint32_t* anon37 = (uint32_t*)((anon38 << 2) + 6300992);
				if (phi14 < *anon37)
				{
					uint64_t phi358;
					uint64_t phi_in359;
					*anon37 = *(uint32_t*)(phi_in27 + 4);
					*(uint64_t*)(phi_in27 + 32) = anon38 * 12;
					*(uint32_t*)(phi_in27 + 44) = (uint32_t)phi23 + 6;
					uint32_t phi39 = phi29;
					uint32_t phi40 = phi29;
					uint32_t phi_in41 = phi29;
					uint32_t phi_in42 = phi29;
					uint32_t phi43 = phi29;
					uint32_t phi44 = phi29;
					uint32_t phi45 = phi29;
					uint32_t phi_in46 = phi29;
					uint32_t phi47 = phi29;
					uint64_t phi_in48 = (__zext uint64_t)phi29;
					*(uint64_t*)(phi49 + 72) = 0;
					uint64_t phi49 = phi_in27;
					do
					{
						uint32_t phi_in50 = phi39;
						uint32_t phi51 = phi40;
						uint32_t phi52 = phi43;
						uint32_t phi53 = phi29;
						uint32_t phi_in54 = phi44;
						uint32_t phi_in55 = phi45;
						uint32_t phi56 = phi_in46;
						uint32_t phi57 = phi47;
						uint32_t phi58 = phi_in50;
						uint32_t phi59 = phi51;
						uint32_t phi60 = phi_in41;
						uint32_t phi61 = phi_in42;
						uint32_t phi62 = phi52;
						uint32_t phi63 = phi53;
						uint64_t phi_in64 = *(uint64_t*)(phi49 + 72);
						uint32_t phi65 = phi_in54;
						uint32_t phi66 = phi_in55;
						phi47 = phi57;
						uint64_t phi67 = phi_in48 & 0xffffffff;
						uint64_t phi68 = phi49;
						int64_t anon70 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi49 + 72) + *(uint64_t*)(phi49 + 32) + 6301632);
						uint32_t* anon69 = (uint32_t*)((anon70 << 2) + 6300992);
						if (*(uint32_t*)(phi49 + 4) < *anon69)
						{
							uint64_t phi87;
							uint32_t phi_in89;
							uint32_t phi_in90;
							uint32_t phi_in94;
							uint32_t phi_in353;
							uint32_t phi_in354;
							uint32_t phi_in355;
							uint32_t phi_in356;
							uint32_t phi_in357;
							*anon69 = *(uint32_t*)(phi49 + 24);
							*(uint32_t*)(phi49 + 64) = (uint32_t)phi_in48 + 7;
							uint32_t phi71 = phi_in50;
							uint32_t phi72 = phi_in41;
							uint32_t phi73 = phi_in42;
							uint32_t phi_in74 = phi_in55;
							uint32_t phi75 = phi56;
							uint64_t phi76 = phi49;
							uint64_t phi_in77 = 0;
							uint64_t phi78 = anon70 * 12;
							uint64_t phi_in79 = phi_in48;
							do
							{
								uint32_t phi80 = phi71;
								uint32_t phi81 = phi51;
								uint32_t phi_in82 = phi73;
								uint32_t phi83 = phi52;
								uint32_t phi84 = phi53;
								uint32_t phi85 = phi57;
								uint64_t phi86 = phi76;
								phi87 = phi_in77;
								uint64_t phi88 = phi78;
								phi_in89 = phi80;
								phi_in90 = phi81;
								uint32_t phi91 = phi72;
								uint32_t phi92 = phi_in82;
								uint32_t phi93 = phi83;
								phi_in94 = phi84;
								uint32_t phi95 = phi_in54;
								uint32_t phi96 = phi_in74;
								phi56 = phi75;
								phi57 = phi85;
								uint64_t phi97 = phi86;
								uint64_t phi98 = phi_in79 & 0xffffffff;
								int64_t anon100 = (__sext int64_t)*(uint32_t*)(phi87 + phi78 + 6301632);
								uint32_t* anon99 = (uint32_t*)((anon100 << 2) + 6300992);
								if (*(uint32_t*)(phi86 + 24) < *anon99)
								{
									uint32_t phi101;
									uint64_t phi352;
									*anon99 = *(uint32_t*)(phi86 + 28);
									uint32_t anon102 = (uint32_t)phi_in79 + 8;
									phi101 = anon102;
									uint32_t phi103 = phi_in82;
									uint32_t phi104 = anon102;
									uint32_t phi105 = anon102;
									uint32_t phi_in106 = anon102;
									uint32_t phi107 = anon102;
									uint32_t phi108 = anon102;
									uint32_t phi109 = anon102;
									uint32_t phi110 = phi_in74;
									uint32_t phi111 = anon102;
									uint32_t phi112 = anon102;
									uint32_t phi113 = anon102;
									uint32_t phi114 = anon102;
									uint64_t phi_in115 = phi78;
									uint32_t phi116 = anon102;
									uint32_t phi_in117 = anon102;
									uint32_t phi_in118 = anon102;
									uint64_t phi119 = 0;
									uint64_t phi120 = anon100 * 12;
									uint64_t phi121 = phi_in79;
									do
									{
										uint32_t phi_in122 = phi80;
										uint32_t phi123 = phi81;
										uint32_t phi124 = phi72;
										uint32_t phi_in125 = phi101;
										uint32_t phi_in126 = phi103;
										uint32_t phi_in127 = phi104;
										uint32_t phi_in128 = phi83;
										uint32_t phi_in129 = phi84;
										uint32_t phi130 = phi_in106;
										uint32_t phi_in131 = phi107;
										uint32_t phi132 = phi108;
										uint32_t phi133 = phi109;
										uint32_t phi134 = phi110;
										uint32_t phi135 = phi111;
										uint32_t phi136 = phi112;
										uint32_t phi137 = phi75;
										uint32_t phi138 = phi113;
										uint32_t phi_in139 = phi85;
										uint32_t phi_in140 = phi116;
										uint64_t phi_in141 = phi86;
										uint64_t phi_in142 = phi119;
										uint64_t phi143 = phi121;
										phi120 = phi120;
										uint32_t phi144 = phi_in122;
										uint32_t phi145 = phi123;
										uint32_t phi146 = phi124;
										uint32_t phi147 = phi_in125;
										uint32_t phi148 = phi_in126;
										uint32_t phi149 = phi_in127;
										uint32_t phi150 = phi_in128;
										uint32_t phi151 = phi_in129;
										uint32_t phi152 = phi_in54;
										uint32_t phi153 = phi_in131;
										uint32_t phi_in154 = phi132;
										uint32_t phi_in155 = phi133;
										phi110 = phi134;
										uint32_t phi156 = phi136;
										uint32_t phi157 = phi137;
										uint32_t phi158 = phi138;
										phi57 = phi_in139;
										phi88 = phi_in115;
										uint32_t phi159 = phi_in140;
										uint32_t phi160 = phi_in117;
										uint32_t phi161 = phi_in118;
										uint64_t phi162 = phi_in141;
										int64_t anon164 = (__sext int64_t)*(uint32_t*)(phi_in142 + phi120 + 6301632);
										uint32_t* anon163 = (uint32_t*)((anon164 << 2) + 6300992);
										if (*(uint32_t*)(phi_in141 + 28) < *anon163)
										{
											uint64_t phi181;
											*anon163 = *(uint32_t*)(phi_in141 + 40);
											*(uint32_t*)(phi_in141 + 120) = (uint32_t)phi143 + 9;
											uint64_t phi_in165 = 0;
											uint32_t phi166 = phi_in125;
											uint32_t phi167 = phi_in126;
											uint32_t phi168 = phi_in127;
											uint32_t phi169 = phi_in128;
											uint32_t phi170 = phi130;
											uint32_t phi171 = phi_in54;
											uint32_t phi_in172 = phi_in131;
											uint32_t phi173 = phi135;
											uint64_t phi174 = phi_in142;
											uint32_t phi175 = phi_in139;
											uint64_t phi_in176 = phi120;
											uint32_t phi177 = phi_in140;
											uint32_t phi_in178 = phi_in117;
											uint64_t phi179 = phi_in141;
											uint64_t phi180 = phi143 & 0xffffffff;
											do
											{
												phi181 = phi_in165;
												uint32_t phi182 = phi123;
												uint32_t phi183 = phi124;
												uint32_t phi_in184 = phi166;
												uint32_t phi185 = phi168;
												uint32_t phi186 = phi169;
												uint32_t phi_in187 = phi105;
												uint32_t phi_in188 = phi170;
												uint32_t phi_in189 = phi171;
												uint32_t phi190 = phi132;
												uint32_t phi191 = phi133;
												uint32_t phi192 = phi134;
												uint32_t phi_in193 = phi173;
												uint32_t phi_in194 = phi136;
												uint32_t phi195 = phi137;
												uint32_t phi196 = phi138;
												uint32_t phi_in197 = phi114;
												uint64_t phi198 = phi174;
												uint32_t phi199 = phi177;
												uint32_t phi200 = phi_in118;
												uint32_t phi201 = phi_in184;
												phi_in126 = phi167;
												phi_in127 = phi185;
												phi151 = phi_in129;
												uint32_t phi202 = phi_in187;
												phi130 = phi_in188;
												uint32_t phi203 = phi_in189;
												phi132 = phi190;
												uint32_t phi204 = phi191;
												uint32_t phi205 = phi192;
												phi135 = phi_in193;
												phi136 = phi_in194;
												phi157 = phi195;
												uint32_t phi206 = phi196;
												uint32_t phi207 = phi_in197;
												uint64_t phi208 = phi198;
												uint32_t phi209 = phi175;
												uint64_t phi210 = phi_in115;
												phi_in140 = phi199;
												phi_in117 = phi_in178;
												uint64_t phi211 = phi179;
												phi143 = phi180;
												int64_t anon213 = (__sext int64_t)*(uint32_t*)(phi181 + anon164 * 12 + 6301632);
												uint32_t* anon212 = (uint32_t*)((anon213 << 2) + 6300992);
												if (*(uint32_t*)(phi179 + 40) < *anon212)
												{
													uint64_t phi222;
													uint64_t phi228;
													*anon212 = *(uint32_t*)(phi179 + 44);
													uint64_t phi_in214 = 0;
													uint32_t phi215 = phi_in122;
													uint32_t phi216 = phi182;
													uint32_t phi_in217 = phi183;
													uint32_t phi218 = phi186;
													uint32_t phi219 = phi_in129;
													uint32_t phi220 = phi_in187;
													uint32_t phi221 = phi_in188;
													*(uint32_t*)(phi222 + 96) = phi_in189;
													uint32_t phi223 = phi_in172;
													uint32_t phi224 = phi_in193;
													uint32_t phi225 = phi_in194;
													phi_in197 = phi_in197;
													*(uint64_t*)(phi222 + 104) = phi_in115;
													*(uint64_t*)(phi222 + 112) = phi_in176;
													uint32_t phi_in226 = phi_in178;
													uint32_t phi_in227 = phi200;
													do
													{
														phi228 = phi_in214;
														uint32_t phi229 = phi215;
														uint32_t phi230 = phi_in184;
														uint32_t phi231 = phi167;
														uint32_t phi232 = phi185;
														uint32_t phi233 = phi218;
														uint32_t phi_in234 = phi219;
														uint32_t phi_in235 = phi220;
														uint32_t phi236 = *(uint32_t*)(phi222 + 96);
														*(uint32_t*)(phi222 + 124) = phi223;
														int64_t anon240 = (__sext int64_t)*(uint32_t*)(phi228 + anon213 * 12 + 6301632);
														int64_t anon239 = anon240 * 12;
														int64_t anon238 = (__sext int64_t)*(uint32_t*)(anon239 + 6301636);
														uint32_t* anon237 = (uint32_t*)((anon238 << 2) + 6300992);
														*anon237 = phi191;
														uint32_t phi_in241 = phi192;
														uint32_t phi_in242 = phi224;
														uint32_t phi243 = phi225;
														uint32_t phi244 = phi195;
														uint32_t phi245 = phi196;
														uint64_t phi246 = phi198;
														uint32_t phi_in247 = phi175;
														uint64_t phi248 = *(uint64_t*)(phi222 + 112);
														uint32_t phi_in249 = phi199;
														phi222 = phi179;
														uint64_t phi250 = phi180;
														uint32_t phi251 = phi229;
														uint32_t phi_in252 = phi216;
														uint32_t phi253 = phi_in217;
														uint32_t phi254 = phi230;
														phi167 = phi231;
														uint32_t phi255 = phi233;
														phi_in129 = phi_in234;
														uint32_t phi256 = phi_in235;
														uint32_t phi257 = phi221;
														uint32_t phi258 = phi236;
														uint32_t phi259 = *(uint32_t*)(phi222 + 124);
														uint32_t phi260 = phi190;
														uint32_t phi261 = *anon237;
														uint32_t phi_in262 = phi_in241;
														uint32_t phi263 = phi_in242;
														uint32_t phi264 = phi243;
														uint32_t phi265 = phi244;
														uint64_t phi266 = phi246;
														uint32_t phi267 = phi_in247;
														uint64_t phi268 = *(uint64_t*)(phi222 + 104);
														*(uint64_t*)(phi222 + 112) = phi248;
														phi199 = phi_in249;
														uint32_t phi269 = phi_in226;
														uint32_t phi270 = phi_in227;
														uint64_t phi271 = phi222;
														phi180 = phi250;
														uint32_t* anon272 = (uint32_t*)((anon240 << 2) + 6300992);
														if (*(uint32_t*)(phi222 + 44) < *anon272)
														{
															*anon272 = *(uint32_t*)(phi222 + 64);
															uint32_t phi273 = phi229;
															uint32_t phi274 = phi_in217;
															uint64_t phi275 = phi222;
															uint32_t phi276 = phi231;
															uint32_t phi277 = phi232;
															uint32_t phi278 = phi233;
															uint32_t phi_in279 = phi_in234;
															uint32_t phi280 = phi_in235;
															uint32_t phi281 = phi221;
															uint32_t phi282 = *(uint32_t*)(phi222 + 124);
															uint32_t phi283 = phi190;
															uint32_t phi284 = *anon237;
															uint32_t phi_in285 = phi_in241;
															uint32_t phi286 = phi_in242;
															uint32_t phi287 = phi244;
															uint32_t phi_in288 = phi_in197;
															uint64_t phi289 = phi246;
															uint32_t phi290 = phi_in247;
															*(uint64_t*)(phi275 + 96) = *(uint64_t*)(phi222 + 104);
															*(uint64_t*)(phi275 + 104) = phi248;
															uint32_t phi_in291 = phi_in249;
															uint32_t phi292 = phi_in226;
															uint32_t phi293 = phi_in227;
															if (*(uint32_t*)(phi222 + 64) < *anon237)
															{
																uint32_t phi294 = phi216;
																uint32_t phi_in295 = phi_in217;
																uint32_t phi_in296 = phi230;
																uint32_t phi_in297 = phi232;
																uint32_t phi298 = phi_in234;
																uint32_t phi299 = phi_in235;
																*(uint64_t*)(phi222 + 80) = anon238;
																uint32_t phi300 = phi236;
																uint32_t phi_in301 = phi_in241;
																uint32_t phi302 = phi_in247;
																*(uint64_t*)(phi222 + 104) = *(uint64_t*)(phi222 + 104);
																uint64_t phi303 = phi250;
																if (phi190 < *anon237)
																{
																	*(uint64_t*)(phi222 + 112) = phi248;
																	*(uint32_t*)(phi222 + 96) = phi236;
																	*(uint64_t*)(phi222 + 88) = phi246;
																	*(uint64_t*)(phi222 + 80) = anon238;
																	w(4197873, anon12, (__sext int64_t)*anon237, (__zext uint64_t)*anon237);
																	phi229 = *(uint32_t*)(arg1 - 96);
																	phi294 = *(uint32_t*)(arg1 - 96);
																	phi_in295 = *(uint32_t*)(arg1 - 96);
																	phi_in296 = *(uint32_t*)(arg1 - 68);
																	phi231 = *(uint32_t*)(arg1 - 96);
																	phi_in297 = *(uint32_t*)(arg1 - 68);
																	phi233 = *(uint32_t*)(arg1 - 96);
																	phi298 = *(uint32_t*)(arg1 - 96);
																	phi299 = *(uint32_t*)(arg1 - 68);
																	phi222 = anon12;
																	phi221 = *(uint32_t*)(arg1 - 68);
																	*(uint64_t*)(phi222 + 80) = *(uint64_t*)(arg1 - 112);
																	phi300 = *(uint32_t*)(arg1 - 96);
																	phi_in301 = *(uint32_t*)(arg1 - 96);
																	phi244 = *(uint32_t*)(arg1 - 96);
																	phi246 = *(uint64_t*)(arg1 - 104);
																	phi302 = *(uint32_t*)(arg1 - 96);
																	*(uint64_t*)(phi222 + 104) = *(uint64_t*)(arg1 - 88);
																	phi248 = *(uint64_t*)(arg1 - 80);
																	phi303 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
																}
																uint32_t phi_in304 = phi229;
																uint32_t phi_in305 = phi294;
																uint32_t phi306 = phi231;
																*(uint32_t*)(phi222 + 96) = phi233;
																uint32_t phi307 = phi298;
																*(uint32_t*)(phi222 + 124) = phi299;
																uint32_t phi308 = phi244;
																uint64_t phi309 = phi246;
																uint32_t phi_in310 = phi302;
																*(uint64_t*)(phi222 + 112) = phi248;
																phi250 = phi303;
																uint32_t phi_in311 = phi_in304;
																uint32_t phi312 = phi_in305;
																uint32_t phi_in313 = phi_in295;
																uint32_t phi314 = phi_in296;
																uint32_t phi315 = phi_in297;
																uint32_t phi_in316 = *(uint32_t*)(phi222 + 96);
																uint64_t phi317 = *(uint64_t*)(phi222 + 80);
																uint32_t phi_in318 = phi_in301;
																*(uint64_t*)(phi222 + 96) = *(uint64_t*)(phi222 + 104);
																uint64_t phi319 = *(uint64_t*)(phi222 + 112);
																int64_t anon320 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi222 + 80) * 12 + 6301636);
																if (phi221 < *(uint32_t*)((anon320 << 2) + 6300992))
																{
																	*(uint64_t*)(phi222 + 88) = phi309;
																	w(4197793, anon12, anon320, (__zext uint64_t)*(uint32_t*)(phi222 + 120));
																	phi_in311 = *(uint32_t*)(arg1 - 96);
																	phi312 = *(uint32_t*)(arg1 - 96);
																	phi_in313 = *(uint32_t*)(arg1 - 96);
																	phi314 = alloca1.field14;
																	phi306 = *(uint32_t*)(arg1 - 96);
																	phi222 = anon12;
																	phi315 = alloca1.field14;
																	phi_in316 = *(uint32_t*)(arg1 - 96);
																	phi307 = *(uint32_t*)(arg1 - 96);
																	phi317 = *(uint64_t*)(arg1 - 112);
																	phi300 = *(uint32_t*)(arg1 - 96);
																	phi_in318 = *(uint32_t*)(arg1 - 96);
																	phi308 = *(uint32_t*)(arg1 - 96);
																	phi309 = *(uint64_t*)(arg1 - 104);
																	phi_in310 = *(uint32_t*)(arg1 - 96);
																	*(uint64_t*)(phi222 + 96) = *(uint64_t*)(arg1 - 88);
																	phi319 = *(uint64_t*)(arg1 - 80);
																	phi250 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
																}
																uint32_t phi_in321 = phi312;
																phi230 = phi314;
																*(uint32_t*)(phi222 + 88) = phi306;
																phi245 = phi315;
																uint32_t phi_in322 = phi307;
																phi236 = phi300;
																phi287 = phi308;
																*(uint64_t*)(phi222 + 80) = phi309;
																*(uint64_t*)(phi222 + 104) = phi319;
																phi273 = phi_in311;
																phi216 = phi_in321;
																phi274 = phi_in313;
																phi275 = phi222;
																phi276 = *(uint32_t*)(phi222 + 88);
																phi277 = phi245;
																phi278 = phi_in316;
																phi_in279 = phi_in322;
																phi280 = phi245;
																phi281 = phi245;
																phi282 = phi245;
																phi283 = phi245;
																phi284 = phi245;
																phi_in285 = phi_in318;
																phi286 = phi245;
																phi243 = phi245;
																phi_in288 = phi245;
																phi289 = *(uint64_t*)(phi222 + 80);
																phi290 = phi_in310;
																*(uint64_t*)(phi275 + 96) = *(uint64_t*)(phi222 + 96);
																*(uint64_t*)(phi275 + 104) = *(uint64_t*)(phi222 + 104);
																phi_in291 = phi245;
																phi292 = phi245;
																phi293 = phi245;
																int64_t anon323 = (__sext int64_t)*(uint32_t*)(phi317 * 12 + 6301640);
																if (phi245 < *(uint32_t*)((anon323 << 2) + 6300992))
																{
																	*(uint32_t*)(phi222 + 112) = phi245;
																	w(4197395, anon12, anon323, (__zext uint64_t)*(uint32_t*)(phi222 + 120));
																	phi273 = *(uint32_t*)(arg1 - 104);
																	phi216 = *(uint32_t*)(arg1 - 104);
																	phi274 = *(uint32_t*)(arg1 - 104);
																	phi230 = *(uint32_t*)(arg1 - 80);
																	phi275 = anon12;
																	phi276 = *(uint32_t*)(arg1 - 104);
																	phi277 = *(uint32_t*)(arg1 - 80);
																	phi278 = *(uint32_t*)(arg1 - 104);
																	phi_in279 = *(uint32_t*)(arg1 - 104);
																	phi280 = *(uint32_t*)(arg1 - 80);
																	phi281 = *(uint32_t*)(arg1 - 80);
																	phi236 = *(uint32_t*)(arg1 - 104);
																	phi282 = *(uint32_t*)(arg1 - 80);
																	phi283 = *(uint32_t*)(arg1 - 80);
																	phi284 = *(uint32_t*)(arg1 - 80);
																	phi_in285 = *(uint32_t*)(arg1 - 104);
																	phi286 = *(uint32_t*)(arg1 - 80);
																	phi243 = *(uint32_t*)(arg1 - 80);
																	phi287 = *(uint32_t*)(arg1 - 104);
																	phi245 = *(uint32_t*)(arg1 - 80);
																	phi_in288 = *(uint32_t*)(arg1 - 80);
																	phi289 = *(uint64_t*)(arg1 - 112);
																	phi290 = *(uint32_t*)(arg1 - 104);
																	*(uint64_t*)(phi275 + 96) = *(uint64_t*)(arg1 - 96);
																	*(uint64_t*)(phi275 + 104) = *(uint64_t*)(arg1 - 88);
																	phi_in291 = *(uint32_t*)(arg1 - 80);
																	phi292 = *(uint32_t*)(arg1 - 80);
																	phi293 = *(uint32_t*)(arg1 - 80);
																	phi250 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
																}
															}
															uint32_t phi_in324 = phi273;
															uint32_t phi325 = phi216;
															uint32_t phi_in326 = phi274;
															int64_t anon328 = (__sext int64_t)*(uint32_t*)(anon239 + 6301640);
															uint32_t* anon327 = (uint32_t*)((anon328 << 2) + 6300992);
															*anon327 = phi230;
															uint32_t phi_in329 = phi276;
															uint32_t phi_in330 = phi277;
															phi255 = phi278;
															phi256 = phi280;
															phi257 = phi281;
															uint32_t phi_in331 = phi236;
															uint32_t phi_in332 = phi282;
															phi260 = phi283;
															phi261 = phi284;
															phi263 = phi286;
															phi264 = phi243;
															uint32_t phi_in333 = phi287;
															*(uint64_t*)(phi275 + 80) = phi289;
															phi267 = phi290;
															phi268 = *(uint64_t*)(phi275 + 96);
															uint32_t phi_in334 = phi292;
															uint32_t phi_in335 = phi293;
															uint64_t phi336 = phi250;
															phi251 = phi_in324;
															phi_in252 = phi325;
															phi253 = phi_in326;
															phi254 = *anon327;
															phi167 = phi_in329;
															phi232 = phi_in330;
															phi_in129 = phi_in279;
															phi258 = phi_in331;
															phi259 = phi_in332;
															phi_in262 = phi_in285;
															phi265 = phi_in333;
															phi_in197 = phi_in288;
															phi266 = *(uint64_t*)(phi275 + 80);
															*(uint64_t*)(phi222 + 112) = *(uint64_t*)(phi275 + 104);
															phi199 = phi_in291;
															phi269 = phi_in334;
															phi270 = phi_in335;
															phi271 = phi275;
															phi180 = phi336;
															if (*(uint32_t*)(phi275 + 64) < *anon327)
															{
																*(uint32_t*)(phi271 + 88) = phi_in324;
																uint32_t phi337 = phi_in326;
																*(uint32_t*)(phi271 + 112) = *anon327;
																phi167 = phi_in329;
																uint32_t phi338 = phi255;
																uint32_t phi339 = phi_in279;
																uint32_t phi340 = phi_in331;
																uint32_t phi341 = phi_in285;
																phi265 = phi_in333;
																*(uint64_t*)(phi271 + 80) = *(uint64_t*)(phi275 + 80);
																phi290 = phi267;
																uint64_t phi342 = phi268;
																uint64_t phi343 = *(uint64_t*)(phi275 + 104);
																uint64_t phi344 = phi275;
																int64_t anon346 = anon328 * 12;
																int64_t anon345 = (__sext int64_t)*(uint32_t*)(anon346 + 6301636);
																if (*anon327 < *(uint32_t*)((anon345 << 2) + 6300992))
																{
																	*(uint32_t*)(phi275 + 112) = *anon327;
																	*(uint64_t*)(phi275 + 96) = phi268;
																	*(uint32_t*)(phi275 + 88) = phi325;
																	w(4197948, anon12, anon345, (__zext uint64_t)*(uint32_t*)(phi275 + 120));
																	*(uint32_t*)(phi271 + 88) = *(uint32_t*)(arg1 - 104);
																	phi325 = *(uint32_t*)(arg1 - 104);
																	phi337 = *(uint32_t*)(arg1 - 104);
																	*(uint32_t*)(phi271 + 112) = *(uint32_t*)(arg1 - 80);
																	phi167 = *(uint32_t*)(arg1 - 104);
																	phi338 = *(uint32_t*)(arg1 - 104);
																	phi339 = *(uint32_t*)(arg1 - 104);
																	phi340 = *(uint32_t*)(arg1 - 104);
																	phi341 = *(uint32_t*)(arg1 - 104);
																	phi265 = *(uint32_t*)(arg1 - 104);
																	*(uint64_t*)(phi271 + 80) = *(uint64_t*)(arg1 - 112);
																	phi290 = *(uint32_t*)(arg1 - 104);
																	phi342 = *(uint64_t*)(arg1 - 96);
																	phi343 = *(uint64_t*)(arg1 - 88);
																	phi344 = anon12;
																	phi336 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
																}
																uint32_t phi_in347 = phi325;
																uint32_t phi_in348 = phi337;
																phi245 = *(uint32_t*)(phi271 + 112);
																phi255 = phi338;
																uint32_t phi_in349 = phi339;
																phi258 = phi340;
																phi_in262 = phi341;
																phi266 = *(uint64_t*)(phi271 + 80);
																phi267 = phi290;
																*(uint64_t*)(phi271 + 96) = phi342;
																*(uint64_t*)(phi271 + 104) = phi343;
																phi271 = phi344;
																uint64_t phi_in350 = phi336;
																phi251 = *(uint32_t*)(phi271 + 88);
																phi_in252 = phi_in347;
																phi253 = phi_in348;
																phi254 = phi245;
																phi232 = phi245;
																phi_in129 = phi_in349;
																phi256 = phi245;
																phi257 = phi245;
																phi259 = phi245;
																phi260 = phi245;
																phi261 = phi245;
																phi263 = phi245;
																phi264 = phi245;
																phi_in197 = phi245;
																phi268 = *(uint64_t*)(phi271 + 96);
																*(uint64_t*)(phi222 + 112) = *(uint64_t*)(phi271 + 104);
																phi199 = phi245;
																phi269 = phi245;
																phi270 = phi245;
																phi180 = phi_in350;
																int64_t anon351 = (__sext int64_t)*(uint32_t*)(anon346 + 6301640);
																if (phi245 < *(uint32_t*)((anon351 << 2) + 6300992))
																{
																	*(uint32_t*)(phi271 + 112) = phi245;
																	*(uint64_t*)(phi271 + 80) = phi266;
																	w(4197231, anon12, anon351, (__zext uint64_t)*(uint32_t*)(phi271 + 120));
																	phi251 = alloca1.field8;
																	phi_in252 = alloca1.field8;
																	phi253 = alloca1.field8;
																	phi254 = alloca1.field12;
																	phi167 = alloca1.field8;
																	phi232 = alloca1.field12;
																	phi255 = alloca1.field8;
																	phi_in129 = alloca1.field8;
																	phi256 = alloca1.field12;
																	phi257 = alloca1.field12;
																	phi258 = alloca1.field8;
																	phi259 = alloca1.field12;
																	phi260 = alloca1.field12;
																	phi261 = alloca1.field12;
																	phi_in262 = alloca1.field8;
																	phi263 = alloca1.field12;
																	phi264 = alloca1.field12;
																	phi265 = alloca1.field8;
																	phi245 = alloca1.field12;
																	phi_in197 = alloca1.field12;
																	phi266 = alloca1.field7;
																	phi267 = alloca1.field8;
																	phi268 = alloca1.field10;
																	*(uint64_t*)(phi222 + 112) = alloca1.field11;
																	phi199 = alloca1.field12;
																	phi269 = alloca1.field12;
																	phi270 = alloca1.field12;
																	phi271 = anon12;
																	phi180 = (__zext uint64_t)alloca1.field8;
																}
															}
														}
														phi183 = phi253;
														phi_in127 = phi232;
														phi186 = phi255;
														phi202 = phi256;
														phi_in172 = phi259;
														phi208 = phi266;
														phi_in117 = phi269;
														phi200 = phi270;
														phi211 = phi271;
														phi_in122 = phi251;
														phi182 = phi_in252;
														phi201 = phi254;
														phi_in126 = phi167;
														phi151 = phi_in129;
														phi130 = phi257;
														phi203 = phi258;
														phi132 = phi260;
														phi204 = phi261;
														phi205 = phi_in262;
														phi135 = phi263;
														phi136 = phi264;
														phi157 = phi265;
														phi206 = phi245;
														phi207 = phi_in197;
														phi209 = phi267;
														phi210 = phi268;
														phi_in176 = *(uint64_t*)(phi222 + 112);
														phi_in140 = phi199;
														phi143 = phi180;
														phi_in214 = phi228 + 4;
														phi215 = phi251;
														phi216 = phi_in252;
														phi_in217 = phi183;
														phi_in184 = phi254;
														phi185 = phi_in127;
														phi218 = phi186;
														phi219 = phi_in129;
														phi220 = phi202;
														phi221 = phi257;
														*(uint32_t*)(phi222 + 96) = phi258;
														phi223 = phi_in172;
														phi190 = phi260;
														phi191 = phi261;
														phi192 = phi_in262;
														phi224 = phi263;
														phi225 = phi264;
														phi195 = phi265;
														phi196 = phi245;
														phi198 = phi208;
														phi175 = phi267;
														*(uint64_t*)(phi222 + 104) = phi268;
														phi_in226 = phi_in117;
														phi_in227 = phi200;
														phi179 = phi211;
													}
													while (phi228 != 8);
												}
												phi150 = phi186;
												phi_in142 = phi208;
												phi120 = phi_in176;
												phi144 = phi_in122;
												phi145 = phi182;
												phi146 = phi183;
												phi147 = phi201;
												phi148 = phi_in126;
												phi149 = phi_in127;
												phi105 = phi202;
												phi152 = phi203;
												phi153 = phi_in172;
												phi_in154 = phi132;
												phi_in155 = phi204;
												phi110 = phi205;
												phi156 = phi136;
												phi158 = phi206;
												phi114 = phi207;
												phi57 = phi209;
												phi88 = phi210;
												phi159 = phi_in140;
												phi160 = phi_in117;
												phi161 = phi200;
												phi162 = phi211;
												phi_in165 = phi181 + 4;
												phi123 = phi182;
												phi124 = phi183;
												phi166 = phi201;
												phi167 = phi_in126;
												phi168 = phi_in127;
												phi169 = phi150;
												phi_in129 = phi151;
												phi105 = phi202;
												phi170 = phi130;
												phi171 = phi203;
												phi133 = phi204;
												phi134 = phi205;
												phi173 = phi135;
												phi137 = phi157;
												phi138 = phi206;
												phi114 = phi207;
												phi174 = phi_in142;
												phi175 = phi209;
												phi_in115 = phi210;
												phi177 = phi_in140;
												phi_in178 = phi_in117;
												phi_in118 = phi200;
												phi179 = phi211;
												phi180 = phi143;
											}
											while (phi181 != 8);
										}
										phi_in89 = phi144;
										phi_in90 = phi145;
										phi91 = phi146;
										phi93 = phi150;
										phi352 = phi_in142;
										phi92 = phi148;
										phi_in94 = phi151;
										phi95 = phi152;
										phi96 = phi110;
										phi56 = phi157;
										phi97 = phi162;
										phi98 = phi143;
										phi80 = phi_in89;
										phi81 = phi_in90;
										phi72 = phi91;
										phi101 = phi147;
										phi103 = phi148;
										phi104 = phi149;
										phi83 = phi93;
										phi84 = phi151;
										phi_in106 = phi130;
										phi_in54 = phi152;
										phi107 = phi153;
										phi108 = phi_in154;
										phi109 = phi_in155;
										phi111 = phi135;
										phi112 = phi156;
										phi75 = phi157;
										phi113 = phi158;
										phi85 = phi57;
										phi_in115 = phi88;
										phi116 = phi159;
										phi_in117 = phi160;
										phi_in118 = phi161;
										phi86 = phi162;
										phi119 = phi352 + 4;
										phi121 = phi143;
									}
									while (phi352 != 8);
								}
								phi_in353 = phi91;
								phi_in354 = phi92;
								phi_in355 = phi93;
								phi_in356 = phi95;
								phi_in357 = phi96;
								phi68 = phi97;
								phi67 = phi98;
								phi71 = phi_in89;
								phi51 = phi_in90;
								phi72 = phi_in353;
								phi73 = phi_in354;
								phi52 = phi_in355;
								phi53 = phi_in94;
								phi_in54 = phi_in356;
								phi_in74 = phi_in357;
								phi75 = phi56;
								phi76 = phi68;
								phi_in77 = phi87 + 4;
								phi78 = phi88;
								phi_in79 = phi67;
							}
							while (phi87 != 8);
							phi58 = phi_in89;
							phi59 = phi_in90;
							phi60 = phi_in353;
							phi61 = phi_in354;
							phi62 = phi_in355;
							phi63 = phi_in94;
							phi_in64 = *(uint64_t*)(phi68 + 72);
							phi65 = phi_in356;
							phi66 = phi_in357;
							phi47 = phi57;
						}
						phi35 = phi63;
						phi358 = phi_in64;
						phi_in359 = phi68;
						phi39 = phi58;
						phi40 = phi59;
						phi_in41 = phi60;
						phi_in42 = phi61;
						phi43 = phi62;
						phi29 = phi35;
						phi44 = phi65;
						phi45 = phi66;
						phi_in46 = phi56;
						phi_in48 = phi67;
						*(uint64_t*)(phi49 + 72) = phi358 + 4;
						phi49 = phi_in359;
					}
					while (phi358 != 8);
					phi30 = *(uint32_t*)(phi_in359 + 68);
					phi_in31 = phi35;
					phi_in32 = *(uint64_t*)(phi_in359 + 56);
					phi33 = (__zext uint64_t)phi35;
					phi34 = *(uint32_t*)(phi_in359 + 68);
					phi36 = *(uint32_t*)(phi_in359 + 68);
					phi_in27 = phi_in359;
				}
				phi19 = phi30;
				phi360 = phi_in32;
				phi_in22 = phi19;
				phi13 = phi_in31;
				phi23 = phi33;
				phi24 = phi34;
				phi25 = phi35;
				phi14 = phi36;
				phi26 = phi360 + 4;
			}
			while (phi360 != 8);
			phi15 = *(uint64_t*)(phi_in27 + 48);
			phi16 = phi_in31;
			phi17 = phi19;
			phi18 = (__zext uint64_t)phi_in31;
			phi20 = phi_in31;
			phi21 = phi_in27;
		}
		phi4 = phi16;
		phi5 = phi17;
		phi7 = phi18;
		*anon8 = phi19;
		phi11 = phi20;
		*(uint64_t*)(phi_in10 + 48) = phi15 + 4;
		phi_in10 = phi21;
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
			uint32_t* anon14;
			uint32_t phi15;
			uint32_t phi_in16;
			uint32_t* anon11 = (uint32_t*)((phi10 & 0xc) + 4);
			uint32_t* anon12 = (uint32_t*)phi10;
			if (*anon11 < *anon12)
			{
				*anon12 = *anon11;
				*anon11 = *anon12;
				phi_in13 = *anon12;
				anon14 = (uint32_t*)(phi10 - 4);
				*anon14 = *anon11;
				phi15 = *anon14;
				*anon12 = *anon12;
				*anon11 = *anon11;
			}
			else 
			{
				phi_in13 = *anon11;
				*anon14 = *anon12;
				phi_in16 = *anon14;
			}
			if (*anon11 < *anon12 && *anon11 < *anon14 || *anon11 >= *anon12 && *anon12 < *anon14)
			{
				*anon12 = *anon14;
				phi15 = *anon14;
				*anon12 = phi_in13;
				*anon11 = *anon14;
			}
			if (*anon11 < *anon12 && *anon11 < *anon14 || *anon11 >= *anon12 && *anon12 < *anon14 || *anon11 >= *anon14 && *anon11 < *anon12)
			{
				phi_in16 = phi15;
				if (*anon12 < *anon11)
				{
					phi_in16 = *anon14;
				}
			}
			uint32_t phi17 = phi_in16;
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
			uint32_t phi22;
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
				phi22 = *anon21;
				phi23 = *anon20;
				anon25 = (uint32_t*)((phi18 & 0xc) - 4);
				phi24 = *anon25;
				phi26 = *anon21;
				*anon20 = *anon20;
			}
			else 
			{
				phi22 = *anon20;
				phi23 = *anon21;
				phi_in27 = *anon25;
			}
			if (*anon20 < *anon21 && *anon20 < *anon25 || *anon20 >= *anon21 && *anon21 < *anon25)
			{
				phi26 = phi22;
				*anon25 = phi23;
				*anon21 = *anon25;
				phi24 = *anon25;
				*anon20 = *anon25;
			}
			if (*anon20 < *anon21 && *anon20 < *anon25 || *anon20 >= *anon21 && *anon21 < *anon25 || *anon20 >= *anon25 && *anon20 < *anon21)
			{
				phi_in27 = phi24;
				*anon21 = phi26;
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
