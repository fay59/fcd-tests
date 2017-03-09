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
		uint32_t phi_in5;
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
			phi_in5 = *phi1;
			phi6 = *anon4;
			anon8 = (uint32_t*)(phi3 - 4);
			phi7 = *anon8;
			phi9 = *phi1;
			phi10 = *anon4;
		}
		else 
		{
			phi_in5 = *anon4;
			phi6 = *phi1;
			phi11 = *anon8;
		}
		if (*anon4 >= *phi1 && *phi1 < *anon8 || *anon4 < *phi1 && *anon4 < *anon8)
		{
			uint32_t phi_in12 = phi6;
			*phi1 = *anon8;
			*anon8 = phi_in12;
			phi7 = phi_in12;
			phi9 = phi_in5;
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
	uint32_t phi_in5;
	uint64_t phi10;
	uint64_t phi13;
	uint64_t phi18;
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
	int64_t anon9 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi10 + 48) + *(uint64_t*)(phi10 + 8) + 6301632);
	uint32_t* anon8 = (uint32_t*)((anon9 << 2) + 6300992);
	*anon8 = anon6;
	uint32_t phi11 = anon3;
	uint64_t phi12 = 0;
	uint64_t anon14 = (uint64_t)&alloca1;
	phi13 = anon14;
	do
	{
		uint32_t phi_in15 = phi4;
		uint32_t phi_in16 = phi_in5;
		uint32_t phi17 = *anon8;
		*(uint64_t*)(phi10 + 48) = phi12;
		phi10 = phi13;
		phi18 = *(uint64_t*)(phi10 + 48);
		uint32_t phi19 = phi_in15;
		uint32_t phi20 = phi_in16;
		uint64_t phi21 = phi7 & 0xffffffff;
		uint32_t phi22 = phi11;
		phi13 = phi10;
		if (phi11 < *anon8)
		{
			uint64_t phi25;
			uint32_t phi_in30;
			uint64_t phi350;
			*anon8 = phi17;
			*(uint64_t*)(phi10 + 16) = anon9 * 12;
			*(uint32_t*)(phi10 + 40) = (uint32_t)phi7 + 5;
			uint32_t phi_in23 = phi_in15;
			uint64_t phi24 = (__zext uint64_t)phi_in15;
			*(uint32_t*)(phi25 + 68) = phi_in16;
			uint32_t phi26 = phi_in15;
			uint32_t phi27 = phi_in16;
			uint64_t phi28 = 0;
			do
			{
				uint64_t phi_in29 = phi28;
				phi25 = phi10;
				phi17 = phi_in16;
				phi_in30 = phi_in23;
				phi24 = phi24 & 0xffffffff;
				uint32_t phi31 = phi26;
				phi27 = phi27;
				uint64_t phi32 = phi25;
				int64_t anon34 = (__sext int64_t)*(uint32_t*)(phi_in29 + *(uint64_t*)(phi25 + 16) + 6301632);
				uint32_t* anon33 = (uint32_t*)((anon34 << 2) + 6300992);
				if (phi27 < *anon33)
				{
					uint32_t phi_in52;
					uint64_t phi_in59;
					uint64_t phi349;
					*(uint64_t*)(phi25 + 56) = phi_in29;
					*anon33 = *(uint32_t*)(phi25 + 4);
					*(uint64_t*)(phi25 + 32) = anon34 * 12;
					*(uint32_t*)(phi25 + 44) = (uint32_t)phi24 + 6;
					uint32_t phi_in35 = phi26;
					uint32_t phi36 = phi26;
					uint32_t phi_in37 = phi26;
					uint32_t phi38 = phi26;
					uint32_t phi39 = phi26;
					uint32_t phi40 = phi26;
					uint32_t phi_in41 = phi26;
					uint32_t phi_in42 = phi26;
					uint32_t phi43 = phi26;
					uint64_t phi_in44 = (__zext uint64_t)phi26;
					*(uint64_t*)(phi25 + 72) = 0;
					do
					{
						uint32_t phi45 = phi38;
						uint32_t phi46 = phi40;
						uint32_t phi47 = phi26;
						uint32_t phi48 = phi_in35;
						uint32_t phi_in49 = phi_in37;
						uint32_t phi50 = phi45;
						uint32_t phi51 = phi39;
						phi_in52 = phi46;
						uint64_t phi_in53 = *(uint64_t*)(phi25 + 72);
						uint32_t phi54 = phi_in41;
						uint32_t phi55 = phi_in42;
						uint32_t phi56 = phi43;
						uint32_t phi57 = phi47;
						uint64_t phi58 = phi_in44 & 0xffffffff;
						phi_in59 = phi25;
						int64_t anon61 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi25 + 72) + *(uint64_t*)(phi25 + 32) + 6301632);
						uint32_t* anon60 = (uint32_t*)((anon61 << 2) + 6300992);
						if (*(uint32_t*)(phi25 + 4) < *anon60)
						{
							uint32_t phi_in75;
							uint64_t phi78;
							uint32_t phi_in82;
							uint64_t phi_in86;
							uint32_t phi_in347;
							uint32_t phi_in348;
							*anon60 = *(uint32_t*)(phi25 + 24);
							*(uint32_t*)(phi25 + 64) = (uint32_t)phi_in44 + 7;
							uint32_t phi62 = phi_in35;
							uint32_t phi63 = phi_in37;
							uint32_t phi_in64 = phi_in41;
							uint32_t phi_in65 = phi_in42;
							uint64_t phi_in66 = phi25;
							uint64_t phi_in67 = 0;
							uint64_t phi68 = anon61 * 12;
							uint64_t phi_in69 = phi_in44;
							do
							{
								uint32_t phi_in70 = phi62;
								uint32_t phi_in71 = phi36;
								uint32_t phi72 = phi63;
								uint32_t phi73 = phi45;
								uint32_t phi74 = phi39;
								phi_in75 = phi46;
								uint32_t phi_in76 = phi43;
								uint32_t phi77 = phi47;
								phi78 = phi_in67;
								uint64_t phi79 = phi68;
								uint32_t phi80 = phi_in70;
								uint32_t phi81 = phi_in71;
								phi63 = phi72;
								phi_in82 = phi74;
								uint32_t phi83 = phi_in64;
								uint32_t phi84 = phi_in76;
								uint32_t phi85 = phi77;
								phi_in86 = phi_in66;
								uint64_t phi87 = phi_in69 & 0xffffffff;
								int64_t anon89 = (__sext int64_t)*(uint32_t*)(phi78 + phi68 + 6301632);
								uint32_t* anon88 = (uint32_t*)((anon89 << 2) + 6300992);
								if (*(uint32_t*)(phi_in66 + 24) < *anon88)
								{
									uint32_t phi92;
									uint64_t phi346;
									*anon88 = *(uint32_t*)(phi_in66 + 28);
									uint32_t phi90 = phi_in70;
									uint32_t phi_in91 = phi_in71;
									uint32_t anon93 = (uint32_t)phi_in69 + 8;
									phi92 = anon93;
									uint32_t phi94 = phi73;
									uint32_t phi_in95 = anon93;
									uint32_t phi96 = phi_in75;
									uint32_t phi97 = anon93;
									uint32_t phi98 = anon93;
									uint32_t phi_in99 = phi_in64;
									uint32_t phi100 = anon93;
									uint32_t phi101 = anon93;
									uint32_t phi_in102 = anon93;
									uint32_t phi_in103 = phi_in65;
									uint32_t phi104 = anon93;
									uint32_t phi_in105 = anon93;
									uint32_t phi106 = phi_in76;
									uint32_t phi107 = anon93;
									uint32_t phi108 = anon93;
									uint64_t phi109 = phi68;
									uint32_t phi_in110 = anon93;
									uint32_t phi111 = anon93;
									uint32_t phi112 = anon93;
									uint64_t phi_in113 = phi_in66;
									uint64_t phi114 = 0;
									uint64_t phi115 = anon89 * 12;
									uint64_t phi116 = phi_in69;
									do
									{
										uint32_t phi117 = phi90;
										uint32_t phi_in118 = phi72;
										uint32_t phi119 = phi94;
										uint32_t phi_in120 = phi74;
										uint32_t phi121 = phi96;
										uint32_t phi122 = phi97;
										uint32_t phi123 = phi98;
										uint32_t phi_in124 = phi104;
										uint32_t phi_in125 = phi106;
										uint32_t phi_in126 = phi77;
										uint32_t phi_in127 = phi111;
										uint32_t phi_in128 = phi112;
										uint64_t phi_in129 = phi114;
										phi115 = phi115;
										phi_in70 = phi117;
										uint32_t phi130 = phi_in91;
										phi72 = phi_in118;
										uint32_t phi_in131 = phi92;
										uint32_t phi132 = phi119;
										uint32_t phi133 = phi_in95;
										uint32_t phi134 = phi_in120;
										uint32_t phi135 = phi121;
										uint32_t phi136 = phi122;
										uint32_t phi137 = phi_in99;
										uint32_t phi138 = phi100;
										uint32_t phi139 = phi101;
										uint32_t phi140 = phi_in102;
										phi_in65 = phi_in103;
										uint32_t phi141 = phi_in124;
										uint32_t phi_in142 = phi_in105;
										uint32_t phi143 = phi_in125;
										uint32_t phi144 = phi107;
										uint32_t phi145 = phi_in126;
										uint64_t phi146 = phi109;
										uint32_t phi147 = phi_in110;
										uint32_t phi148 = phi_in127;
										phi112 = phi_in128;
										phi_in66 = phi_in113;
										uint64_t phi149 = phi116;
										int64_t anon151 = (__sext int64_t)*(uint32_t*)(phi_in129 + phi115 + 6301632);
										uint32_t* anon150 = (uint32_t*)((anon151 << 2) + 6300992);
										if (*(uint32_t*)(phi_in113 + 28) < *anon150)
										{
											uint64_t phi173;
											*anon150 = *(uint32_t*)(phi_in113 + 40);
											*(uint32_t*)(phi_in113 + 120) = (uint32_t)phi116 + 9;
											uint64_t phi_in152 = 0;
											uint32_t phi153 = phi_in91;
											uint32_t phi154 = phi_in118;
											uint32_t phi155 = phi_in95;
											uint32_t phi156 = phi_in120;
											uint32_t phi157 = phi123;
											uint32_t phi_in158 = phi_in99;
											uint32_t phi159 = phi_in102;
											uint32_t phi160 = phi_in103;
											uint32_t phi161 = phi_in124;
											uint32_t phi_in162 = phi_in105;
											uint32_t phi163 = phi_in125;
											uint32_t phi164 = phi108;
											uint64_t phi_in165 = phi_in129;
											uint32_t phi166 = phi_in126;
											uint64_t phi_in167 = phi115;
											uint32_t phi168 = phi_in110;
											uint32_t phi_in169 = phi_in127;
											uint32_t phi_in170 = phi_in128;
											uint64_t phi_in171 = phi_in113;
											uint64_t phi172 = phi116 & 0xffffffff;
											do
											{
												phi173 = phi_in152;
												uint32_t phi174 = phi117;
												uint32_t phi175 = phi154;
												uint32_t phi_in176 = phi92;
												uint32_t phi177 = phi119;
												uint32_t phi_in178 = phi155;
												uint32_t phi_in179 = phi156;
												uint32_t phi_in180 = phi121;
												uint32_t phi181 = phi122;
												uint32_t phi182 = phi157;
												uint32_t phi183 = phi100;
												uint32_t phi184 = phi101;
												uint32_t phi185 = phi159;
												uint32_t phi186 = phi163;
												uint32_t phi187 = phi107;
												uint32_t phi_in188 = phi164;
												uint32_t phi189 = phi166;
												uint64_t phi190 = phi109;
												uint32_t phi_in191 = phi168;
												uint64_t phi192 = phi172;
												phi_in118 = phi175;
												phi92 = phi_in176;
												phi119 = phi177;
												uint32_t phi193 = phi_in178;
												phi156 = phi_in179;
												phi121 = phi_in180;
												uint32_t phi_in194 = phi181;
												uint32_t phi195 = phi182;
												phi_in99 = phi_in158;
												phi138 = phi183;
												uint32_t phi196 = phi184;
												phi_in102 = phi185;
												uint32_t phi197 = phi_in162;
												uint32_t phi198 = phi186;
												phi108 = phi_in188;
												uint64_t phi199 = phi_in165;
												uint32_t phi200 = phi189;
												uint64_t phi201 = phi190;
												uint64_t phi202 = phi_in167;
												uint32_t phi203 = phi_in191;
												uint32_t phi204 = phi_in170;
												phi_in113 = phi_in171;
												uint64_t phi205 = phi192;
												int64_t anon207 = (__sext int64_t)*(uint32_t*)(phi173 + anon151 * 12 + 6301632);
												uint32_t* anon206 = (uint32_t*)((anon207 << 2) + 6300992);
												if (*(uint32_t*)(phi_in171 + 40) < *anon206)
												{
													uint64_t phi225;
													*anon206 = *(uint32_t*)(phi_in171 + 44);
													uint64_t phi_in208 = 0;
													uint32_t phi209 = phi174;
													uint32_t phi_in210 = phi153;
													uint32_t phi211 = phi_in176;
													uint32_t phi212 = phi_in179;
													uint32_t phi213 = phi_in180;
													uint32_t phi214 = phi_in158;
													uint32_t phi215 = phi160;
													uint32_t phi216 = phi161;
													uint32_t phi_in217 = phi_in162;
													uint32_t phi218 = phi187;
													uint32_t phi_in219 = phi_in188;
													uint64_t phi220 = phi_in165;
													uint64_t phi221 = phi_in167;
													uint32_t phi222 = phi_in191;
													uint32_t phi223 = phi_in170;
													uint64_t phi224 = phi_in171;
													do
													{
														phi225 = phi_in208;
														uint32_t phi_in226 = phi209;
														uint32_t phi227 = phi_in210;
														uint32_t phi228 = phi175;
														uint32_t phi_in229 = phi177;
														uint32_t phi_in230 = phi212;
														uint32_t phi231 = phi181;
														uint32_t phi232 = phi182;
														*(uint32_t*)(phi224 + 96) = phi214;
														*(uint32_t*)(phi224 + 124) = phi183;
														int64_t anon236 = (__sext int64_t)*(uint32_t*)(phi225 + anon207 * 12 + 6301632);
														int64_t anon235 = anon236 * 12;
														int64_t anon234 = (__sext int64_t)*(uint32_t*)(anon235 + 6301636);
														uint32_t* anon233 = (uint32_t*)((anon234 << 2) + 6300992);
														*anon233 = phi185;
														uint32_t phi237 = phi215;
														uint32_t phi_in238 = phi216;
														uint32_t phi_in239 = phi186;
														uint32_t phi_in240 = phi218;
														uint32_t phi241 = phi_in219;
														*(uint64_t*)(phi224 + 88) = phi220;
														uint32_t phi_in242 = phi189;
														*(uint64_t*)(phi224 + 104) = phi190;
														*(uint64_t*)(phi224 + 112) = phi221;
														uint32_t phi_in243 = phi222;
														uint32_t phi244 = phi_in169;
														uint32_t phi_in245 = phi223;
														uint64_t phi246 = phi192;
														uint32_t phi247 = phi_in226;
														phi_in176 = phi211;
														phi177 = phi_in229;
														uint32_t phi248 = phi_in178;
														uint32_t phi249 = phi_in230;
														uint32_t phi250 = phi213;
														uint32_t phi251 = phi231;
														phi195 = phi232;
														uint32_t phi252 = *(uint32_t*)(phi224 + 96);
														uint32_t phi253 = *(uint32_t*)(phi224 + 124);
														uint32_t phi_in254 = phi184;
														phi_in102 = *anon233;
														uint32_t phi255 = phi237;
														uint32_t phi256 = phi_in238;
														phi_in162 = phi_in217;
														uint32_t phi257 = phi_in239;
														uint32_t phi258 = phi_in240;
														uint64_t phi259 = *(uint64_t*)(phi224 + 88);
														uint32_t phi260 = phi_in242;
														phi190 = *(uint64_t*)(phi224 + 104);
														phi221 = *(uint64_t*)(phi224 + 112);
														phi_in191 = phi_in243;
														uint32_t phi261 = phi_in245;
														uint64_t phi262 = phi224;
														uint64_t phi263 = phi246;
														uint32_t* anon264 = (uint32_t*)((anon236 << 2) + 6300992);
														if (*(uint32_t*)(phi224 + 44) < *anon264)
														{
															*anon264 = *(uint32_t*)(phi224 + 64);
															uint32_t phi265 = phi_in226;
															uint32_t phi266 = phi227;
															uint32_t phi_in267 = phi228;
															*(uint32_t*)(phi262 + 112) = phi211;
															uint64_t phi268 = phi224;
															uint32_t phi269 = phi_in229;
															uint32_t phi270 = phi_in178;
															uint32_t phi271 = phi_in230;
															uint32_t phi272 = phi231;
															uint32_t phi273 = phi232;
															uint32_t phi_in274 = *(uint32_t*)(phi224 + 96);
															uint32_t phi275 = *(uint32_t*)(phi224 + 124);
															uint32_t phi276 = phi184;
															uint32_t phi_in277 = *anon233;
															uint32_t phi278 = phi237;
															uint32_t phi_in279 = phi_in217;
															uint32_t phi_in280 = phi_in239;
															uint32_t phi_in281 = phi_in240;
															uint32_t phi282 = phi241;
															uint64_t phi283 = *(uint64_t*)(phi224 + 88);
															uint64_t phi284 = *(uint64_t*)(phi224 + 104);
															*(uint64_t*)(phi262 + 104) = *(uint64_t*)(phi224 + 112);
															uint32_t phi_in285 = phi_in243;
															uint32_t phi286 = phi_in245;
															uint64_t phi_in287 = phi246;
															if (*(uint32_t*)(phi224 + 64) < *anon233)
															{
																uint32_t phi288 = phi_in226;
																uint32_t phi_in289 = phi227;
																uint32_t phi_in290 = phi228;
																uint32_t phi_in291 = phi_in229;
																uint32_t phi_in292 = phi_in178;
																*(uint32_t*)(phi293 + 96) = phi_in230;
																uint32_t phi_in294 = phi213;
																uint64_t phi293 = phi224;
																uint64_t phi295 = anon234;
																uint32_t phi_in296 = *(uint32_t*)(phi224 + 96);
																uint32_t phi297 = phi_in239;
																*(uint64_t*)(phi293 + 88) = *(uint64_t*)(phi224 + 88);
																uint32_t phi298 = phi_in242;
																*(uint64_t*)(phi293 + 104) = *(uint64_t*)(phi224 + 104);
																*(uint64_t*)(phi293 + 112) = *(uint64_t*)(phi224 + 112);
																if (phi184 < *anon233)
																{
																	*(uint64_t*)(phi224 + 80) = anon234;
																	w(4197873, anon14, (__sext int64_t)*anon233, (__zext uint64_t)*anon233);
																	phi288 = *(uint32_t*)(arg1 - 96);
																	phi_in289 = *(uint32_t*)(arg1 - 96);
																	phi_in290 = *(uint32_t*)(arg1 - 96);
																	phi211 = *(uint32_t*)(arg1 - 68);
																	phi_in291 = *(uint32_t*)(arg1 - 96);
																	phi_in292 = *(uint32_t*)(arg1 - 68);
																	*(uint32_t*)(phi293 + 96) = *(uint32_t*)(arg1 - 96);
																	phi_in294 = *(uint32_t*)(arg1 - 96);
																	phi231 = *(uint32_t*)(arg1 - 68);
																	phi293 = anon14;
																	phi232 = *(uint32_t*)(arg1 - 68);
																	phi295 = *(uint64_t*)(arg1 - 112);
																	phi_in296 = *(uint32_t*)(arg1 - 96);
																	phi237 = *(uint32_t*)(arg1 - 96);
																	phi297 = *(uint32_t*)(arg1 - 96);
																	*(uint64_t*)(phi293 + 88) = *(uint64_t*)(arg1 - 104);
																	phi298 = *(uint32_t*)(arg1 - 96);
																	*(uint64_t*)(phi293 + 104) = *(uint64_t*)(arg1 - 88);
																	*(uint64_t*)(phi293 + 112) = *(uint64_t*)(arg1 - 80);
																	phi246 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
																}
																uint32_t phi299 = phi288;
																uint32_t phi300 = phi211;
																*(uint32_t*)(phi293 + 124) = phi231;
																*(uint64_t*)(phi293 + 80) = phi295;
																uint32_t phi301 = phi237;
																uint32_t phi_in302 = phi297;
																uint32_t phi303 = phi298;
																uint64_t phi304 = *(uint64_t*)(phi293 + 104);
																uint64_t phi_in305 = phi246;
																uint32_t phi306 = phi_in289;
																uint32_t phi_in307 = phi_in290;
																uint32_t phi308 = phi_in291;
																uint64_t phi309 = phi293;
																uint32_t phi310 = phi_in292;
																uint32_t phi311 = *(uint32_t*)(phi293 + 96);
																phi213 = phi_in294;
																uint64_t phi312 = *(uint64_t*)(phi293 + 80);
																uint32_t phi313 = phi_in296;
																uint64_t phi314 = *(uint64_t*)(phi293 + 88);
																*(uint64_t*)(phi309 + 104) = *(uint64_t*)(phi293 + 112);
																uint64_t phi_in315 = phi_in305;
																int64_t anon316 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi293 + 80) * 12 + 6301636);
																if (phi232 < *(uint32_t*)((anon316 << 2) + 6300992))
																{
																	*(uint64_t*)(phi293 + 104) = phi304;
																	w(4197793, anon14, anon316, (__zext uint64_t)*(uint32_t*)(phi293 + 120));
																	phi299 = *(uint32_t*)(arg1 - 96);
																	phi306 = *(uint32_t*)(arg1 - 96);
																	phi_in307 = *(uint32_t*)(arg1 - 96);
																	phi300 = alloca1.field14;
																	phi308 = *(uint32_t*)(arg1 - 96);
																	phi309 = anon14;
																	phi310 = alloca1.field14;
																	phi311 = *(uint32_t*)(arg1 - 96);
																	phi213 = *(uint32_t*)(arg1 - 96);
																	phi312 = *(uint64_t*)(arg1 - 112);
																	phi313 = *(uint32_t*)(arg1 - 96);
																	phi301 = *(uint32_t*)(arg1 - 96);
																	phi_in302 = *(uint32_t*)(arg1 - 96);
																	phi314 = *(uint64_t*)(arg1 - 104);
																	phi303 = *(uint32_t*)(arg1 - 96);
																	phi304 = *(uint64_t*)(arg1 - 88);
																	*(uint64_t*)(phi309 + 104) = *(uint64_t*)(arg1 - 80);
																	phi_in315 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
																}
																uint32_t phi_in317 = phi299;
																phi266 = phi306;
																*(uint32_t*)(phi262 + 112) = phi300;
																*(uint32_t*)(phi309 + 88) = phi308;
																phi282 = phi310;
																uint32_t phi_in318 = phi311;
																uint32_t phi_in319 = phi313;
																phi278 = phi301;
																*(uint64_t*)(phi309 + 80) = phi314;
																phi_in242 = phi303;
																*(uint64_t*)(phi309 + 96) = phi304;
																phi265 = phi_in317;
																phi_in267 = phi_in307;
																phi268 = phi309;
																phi269 = *(uint32_t*)(phi309 + 88);
																phi270 = phi282;
																phi271 = phi_in318;
																phi272 = phi282;
																phi273 = phi282;
																phi_in274 = phi_in319;
																phi275 = phi282;
																phi276 = phi282;
																phi_in277 = phi282;
																phi_in238 = phi282;
																phi_in279 = phi282;
																phi_in280 = phi_in302;
																phi_in281 = phi282;
																phi283 = *(uint64_t*)(phi309 + 80);
																phi284 = *(uint64_t*)(phi309 + 96);
																*(uint64_t*)(phi262 + 104) = *(uint64_t*)(phi309 + 104);
																phi_in285 = phi282;
																phi244 = phi282;
																phi286 = phi282;
																phi_in287 = phi_in315;
																int64_t anon320 = (__sext int64_t)*(uint32_t*)(phi312 * 12 + 6301640);
																if (phi282 < *(uint32_t*)((anon320 << 2) + 6300992))
																{
																	*(uint32_t*)(phi309 + 112) = phi282;
																	w(4197395, anon14, anon320, (__zext uint64_t)*(uint32_t*)(phi309 + 120));
																	phi265 = *(uint32_t*)(arg1 - 104);
																	phi266 = *(uint32_t*)(arg1 - 104);
																	phi_in267 = *(uint32_t*)(arg1 - 104);
																	*(uint32_t*)(phi262 + 112) = *(uint32_t*)(arg1 - 80);
																	phi268 = anon14;
																	phi269 = *(uint32_t*)(arg1 - 104);
																	phi270 = *(uint32_t*)(arg1 - 80);
																	phi271 = *(uint32_t*)(arg1 - 104);
																	phi213 = *(uint32_t*)(arg1 - 104);
																	phi272 = *(uint32_t*)(arg1 - 80);
																	phi273 = *(uint32_t*)(arg1 - 80);
																	phi_in274 = *(uint32_t*)(arg1 - 104);
																	phi275 = *(uint32_t*)(arg1 - 80);
																	phi276 = *(uint32_t*)(arg1 - 80);
																	phi_in277 = *(uint32_t*)(arg1 - 80);
																	phi278 = *(uint32_t*)(arg1 - 104);
																	phi_in238 = *(uint32_t*)(arg1 - 80);
																	phi_in279 = *(uint32_t*)(arg1 - 80);
																	phi_in280 = *(uint32_t*)(arg1 - 104);
																	phi_in281 = *(uint32_t*)(arg1 - 80);
																	phi282 = *(uint32_t*)(arg1 - 80);
																	phi283 = *(uint64_t*)(arg1 - 112);
																	phi_in242 = *(uint32_t*)(arg1 - 104);
																	phi284 = *(uint64_t*)(arg1 - 96);
																	*(uint64_t*)(phi262 + 104) = *(uint64_t*)(arg1 - 88);
																	phi_in285 = *(uint32_t*)(arg1 - 80);
																	phi244 = *(uint32_t*)(arg1 - 80);
																	phi286 = *(uint32_t*)(arg1 - 80);
																	phi_in287 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
																}
															}
															uint32_t phi321 = phi265;
															*(uint32_t*)(phi262 + 88) = phi266;
															phi228 = phi_in267;
															int64_t anon323 = (__sext int64_t)*(uint32_t*)(anon235 + 6301640);
															uint32_t* anon322 = (uint32_t*)((anon323 << 2) + 6300992);
															*anon322 = *(uint32_t*)(phi262 + 112);
															phi262 = phi268;
															uint32_t phi_in324 = phi269;
															phi248 = phi270;
															uint32_t phi325 = phi271;
															uint32_t phi_in326 = phi213;
															uint32_t phi_in327 = phi272;
															uint32_t phi_in328 = phi273;
															phi253 = phi275;
															phi_in254 = phi276;
															uint32_t phi329 = phi278;
															phi257 = phi_in280;
															phi241 = phi282;
															*(uint64_t*)(phi262 + 96) = phi284;
															uint64_t phi330 = *(uint64_t*)(phi262 + 104);
															phi261 = phi286;
															phi263 = phi_in287;
															phi247 = phi321;
															phi227 = *(uint32_t*)(phi262 + 88);
															phi_in176 = *anon322;
															phi177 = phi_in324;
															phi249 = phi325;
															phi250 = phi_in326;
															phi251 = phi_in327;
															phi195 = phi_in328;
															phi252 = phi_in274;
															phi_in102 = phi_in277;
															phi255 = phi329;
															phi256 = phi_in238;
															phi_in162 = phi_in279;
															phi258 = phi_in281;
															phi259 = phi283;
															phi260 = phi_in242;
															phi190 = *(uint64_t*)(phi262 + 96);
															phi221 = phi330;
															phi_in191 = phi_in285;
															if (*(uint32_t*)(phi262 + 64) < *anon322)
															{
																uint32_t phi_in331 = *(uint32_t*)(phi262 + 88);
																uint32_t phi332 = phi228;
																uint32_t phi333 = *anon322;
																uint32_t phi334 = phi_in324;
																phi250 = phi_in326;
																uint32_t phi_in335 = phi_in274;
																uint32_t phi_in336 = phi257;
																uint32_t phi_in337 = phi_in242;
																uint64_t phi338 = *(uint64_t*)(phi262 + 96);
																uint64_t phi339 = phi262;
																uint64_t phi340 = phi263;
																int64_t anon342 = anon323 * 12;
																int64_t anon341 = (__sext int64_t)*(uint32_t*)(anon342 + 6301636);
																if (*anon322 < *(uint32_t*)((anon341 << 2) + 6300992))
																{
																	*(uint32_t*)(phi262 + 112) = *anon322;
																	*(uint64_t*)(phi262 + 104) = phi330;
																	*(uint64_t*)(phi262 + 80) = phi283;
																	w(4197948, anon14, anon341, (__zext uint64_t)*(uint32_t*)(phi262 + 120));
																	phi321 = *(uint32_t*)(arg1 - 104);
																	phi_in331 = *(uint32_t*)(arg1 - 104);
																	phi332 = *(uint32_t*)(arg1 - 104);
																	phi333 = *(uint32_t*)(arg1 - 80);
																	phi334 = *(uint32_t*)(arg1 - 104);
																	phi325 = *(uint32_t*)(arg1 - 104);
																	phi250 = *(uint32_t*)(arg1 - 104);
																	phi_in335 = *(uint32_t*)(arg1 - 104);
																	phi329 = *(uint32_t*)(arg1 - 104);
																	phi_in336 = *(uint32_t*)(arg1 - 104);
																	phi283 = *(uint64_t*)(arg1 - 112);
																	phi_in337 = *(uint32_t*)(arg1 - 104);
																	phi338 = *(uint64_t*)(arg1 - 96);
																	phi330 = *(uint64_t*)(arg1 - 88);
																	phi339 = anon14;
																	phi340 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
																}
																*(uint32_t*)(phi262 + 88) = phi321;
																phi228 = phi332;
																phi261 = phi333;
																uint32_t phi_in343 = phi334;
																phi249 = phi325;
																uint32_t phi_in344 = phi329;
																phi259 = phi283;
																*(uint64_t*)(phi262 + 96) = phi338;
																*(uint64_t*)(phi262 + 104) = phi330;
																phi262 = phi339;
																phi263 = phi340;
																phi247 = *(uint32_t*)(phi262 + 88);
																phi227 = phi_in331;
																phi_in176 = phi261;
																phi177 = phi_in343;
																phi248 = phi261;
																phi251 = phi261;
																phi195 = phi261;
																phi252 = phi_in335;
																phi253 = phi261;
																phi_in254 = phi261;
																phi_in102 = phi261;
																phi255 = phi_in344;
																phi256 = phi261;
																phi_in162 = phi261;
																phi257 = phi_in336;
																phi258 = phi261;
																phi241 = phi261;
																phi260 = phi_in337;
																phi190 = *(uint64_t*)(phi262 + 96);
																phi221 = *(uint64_t*)(phi262 + 104);
																phi_in191 = phi261;
																phi244 = phi261;
																int64_t anon345 = (__sext int64_t)*(uint32_t*)(anon342 + 6301640);
																if (phi261 < *(uint32_t*)((anon345 << 2) + 6300992))
																{
																	*(uint32_t*)(phi262 + 112) = phi261;
																	*(uint64_t*)(phi262 + 80) = phi259;
																	w(4197231, anon14, anon345, (__zext uint64_t)*(uint32_t*)(phi262 + 120));
																	phi247 = alloca1.field8;
																	phi227 = alloca1.field8;
																	phi228 = alloca1.field8;
																	phi_in176 = alloca1.field12;
																	phi177 = alloca1.field8;
																	phi248 = alloca1.field12;
																	phi249 = alloca1.field8;
																	phi250 = alloca1.field8;
																	phi251 = alloca1.field12;
																	phi195 = alloca1.field12;
																	phi252 = alloca1.field8;
																	phi253 = alloca1.field12;
																	phi_in254 = alloca1.field12;
																	phi_in102 = alloca1.field12;
																	phi255 = alloca1.field8;
																	phi256 = alloca1.field12;
																	phi_in162 = alloca1.field12;
																	phi257 = alloca1.field8;
																	phi258 = alloca1.field12;
																	phi241 = alloca1.field12;
																	phi259 = alloca1.field7;
																	phi260 = alloca1.field8;
																	phi190 = alloca1.field10;
																	phi221 = alloca1.field11;
																	phi_in191 = alloca1.field12;
																	phi244 = alloca1.field12;
																	phi261 = alloca1.field12;
																	phi262 = anon14;
																	phi263 = (__zext uint64_t)alloca1.field8;
																}
															}
														}
														phi174 = phi247;
														phi153 = phi227;
														phi_in118 = phi228;
														phi193 = phi248;
														phi_in99 = phi252;
														phi138 = phi253;
														phi161 = phi256;
														phi198 = phi257;
														phi187 = phi258;
														phi200 = phi260;
														phi204 = phi261;
														phi_in113 = phi262;
														phi205 = phi263;
														phi92 = phi_in176;
														phi119 = phi177;
														phi156 = phi249;
														phi121 = phi250;
														phi_in194 = phi251;
														phi196 = phi_in254;
														phi160 = phi255;
														phi197 = phi_in162;
														phi108 = phi241;
														phi199 = phi259;
														phi201 = phi190;
														phi202 = phi221;
														phi203 = phi_in191;
														phi_in169 = phi244;
														phi_in208 = phi225 + 4;
														phi209 = phi174;
														phi_in210 = phi153;
														phi175 = phi_in118;
														phi211 = phi_in176;
														phi_in178 = phi193;
														phi212 = phi249;
														phi213 = phi250;
														phi181 = phi251;
														phi182 = phi195;
														phi214 = phi_in99;
														phi183 = phi138;
														phi184 = phi_in254;
														phi185 = phi_in102;
														phi215 = phi255;
														phi216 = phi161;
														phi_in217 = phi_in162;
														phi186 = phi198;
														phi218 = phi187;
														phi_in219 = phi241;
														phi220 = phi259;
														phi189 = phi200;
														phi222 = phi_in191;
														phi_in169 = phi244;
														phi223 = phi204;
														phi224 = phi_in113;
														phi192 = phi205;
													}
													while (phi225 != 8);
												}
												phi123 = phi195;
												phi139 = phi196;
												phi_in142 = phi197;
												phi144 = phi187;
												phi_in129 = phi199;
												phi147 = phi203;
												phi112 = phi204;
												phi115 = phi202;
												phi_in70 = phi174;
												phi130 = phi153;
												phi72 = phi_in118;
												phi_in131 = phi92;
												phi132 = phi119;
												phi133 = phi193;
												phi134 = phi156;
												phi135 = phi121;
												phi136 = phi_in194;
												phi137 = phi_in99;
												phi140 = phi_in102;
												phi_in65 = phi160;
												phi141 = phi161;
												phi143 = phi198;
												phi145 = phi200;
												phi146 = phi201;
												phi148 = phi_in169;
												phi_in66 = phi_in113;
												phi149 = phi205;
												phi_in152 = phi173 + 4;
												phi117 = phi174;
												phi153 = phi153;
												phi154 = phi_in118;
												phi155 = phi193;
												phi122 = phi_in194;
												phi157 = phi123;
												phi_in158 = phi_in99;
												phi100 = phi138;
												phi101 = phi139;
												phi159 = phi_in102;
												phi161 = phi161;
												phi_in162 = phi_in142;
												phi163 = phi198;
												phi107 = phi144;
												phi164 = phi108;
												phi_in165 = phi_in129;
												phi166 = phi200;
												phi109 = phi201;
												phi_in167 = phi202;
												phi168 = phi147;
												phi_in170 = phi112;
												phi_in171 = phi_in113;
												phi172 = phi205;
											}
											while (phi173 != 8);
										}
										phi73 = phi132;
										phi346 = phi_in129;
										phi84 = phi143;
										phi85 = phi145;
										phi87 = phi149;
										phi79 = phi146;
										phi80 = phi_in70;
										phi81 = phi130;
										phi63 = phi72;
										phi_in82 = phi134;
										phi_in75 = phi135;
										phi83 = phi137;
										phi_in86 = phi_in66;
										phi90 = phi_in70;
										phi_in91 = phi130;
										phi92 = phi_in131;
										phi94 = phi73;
										phi_in95 = phi133;
										phi74 = phi134;
										phi96 = phi135;
										phi97 = phi136;
										phi98 = phi123;
										phi_in99 = phi137;
										phi100 = phi138;
										phi101 = phi139;
										phi_in102 = phi140;
										phi_in103 = phi_in65;
										phi104 = phi141;
										phi_in105 = phi_in142;
										phi106 = phi84;
										phi107 = phi144;
										phi108 = phi108;
										phi77 = phi85;
										phi109 = phi146;
										phi_in110 = phi147;
										phi111 = phi148;
										phi_in113 = phi_in66;
										phi114 = phi346 + 4;
										phi116 = phi87;
									}
									while (phi346 != 8);
								}
								phi48 = phi80;
								phi_in347 = phi81;
								phi50 = phi73;
								phi_in348 = phi83;
								phi56 = phi84;
								phi57 = phi85;
								phi58 = phi87;
								phi62 = phi48;
								phi36 = phi_in347;
								phi45 = phi50;
								phi39 = phi_in82;
								phi46 = phi_in75;
								phi_in64 = phi_in348;
								phi43 = phi56;
								phi47 = phi57;
								phi_in66 = phi_in86;
								phi_in67 = phi78 + 4;
								phi68 = phi79;
								phi_in69 = phi58;
							}
							while (phi78 != 8);
							phi36 = phi_in347;
							phi_in49 = phi63;
							phi51 = phi_in82;
							phi_in52 = phi_in75;
							phi_in53 = *(uint64_t*)(phi_in86 + 72);
							phi54 = phi_in348;
							phi55 = phi_in65;
							phi_in59 = phi_in86;
						}
						phi349 = phi_in53;
						phi_in35 = phi48;
						phi_in37 = phi_in49;
						phi38 = phi50;
						phi39 = phi51;
						phi40 = phi_in52;
						phi_in41 = phi54;
						phi_in42 = phi55;
						phi43 = phi56;
						phi26 = phi57;
						phi_in44 = phi58;
						*(uint64_t*)(phi25 + 72) = phi349 + 4;
						phi25 = phi_in59;
					}
					while (phi349 != 8);
					phi17 = *(uint32_t*)(phi_in59 + 68);
					phi_in30 = phi_in52;
					phi_in29 = *(uint64_t*)(phi_in59 + 56);
					phi24 = (__zext uint64_t)phi_in52;
					*(uint32_t*)(phi25 + 68) = *(uint32_t*)(phi_in59 + 68);
					phi31 = phi_in52;
					phi27 = *(uint32_t*)(phi_in59 + 68);
					phi32 = phi_in59;
				}
				phi20 = phi17;
				phi350 = phi_in29;
				phi13 = phi32;
				phi_in16 = phi20;
				phi_in23 = phi_in30;
				phi26 = phi31;
				phi28 = phi350 + 4;
				phi10 = phi13;
			}
			while (phi350 != 8);
			phi18 = *(uint64_t*)(phi13 + 48);
			phi19 = phi_in30;
			phi21 = (__zext uint64_t)phi_in30;
			phi17 = phi20;
			phi22 = phi_in30;
		}
		phi4 = phi19;
		phi_in5 = phi20;
		phi7 = phi21;
		*anon8 = phi17;
		phi11 = phi22;
		phi12 = phi18 + 4;
	}
	while (phi18 != 8);
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
		uint64_t phi22;
		uint32_t anon23;
		uint32_t anon33;
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
			uint32_t phi_in15;
			uint32_t* anon16;
			uint32_t phi17;
			uint32_t phi18;
			uint32_t* anon11 = (uint32_t*)((phi10 & 0xc) + 4);
			uint32_t* anon12 = (uint32_t*)phi10;
			if (*anon11 < *anon12)
			{
				*anon12 = *anon11;
				*anon11 = *anon12;
				phi13 = *anon12;
				phi_in14 = *anon11;
				anon16 = (uint32_t*)(phi10 - 4);
				phi_in15 = *anon16;
				phi17 = *anon12;
				phi18 = *anon11;
			}
			else 
			{
				phi13 = *anon11 & 0xf;
				phi_in14 = *anon12 & 0xf;
				phi_in15 = *anon16;
			}
			if (*anon11 < *anon12 && *anon11 < *anon16 || *anon11 >= *anon12 && *anon12 < *anon16)
			{
				uint32_t phi_in19 = phi13;
				*anon12 = *anon16 & 0xf;
				*anon16 = phi_in14;
				phi_in15 = phi_in14;
				phi17 = phi_in19;
				phi18 = *anon16;
			}
			if (*anon11 < *anon12 && *anon11 < *anon16 || *anon11 >= *anon12 && *anon12 < *anon16 || *anon11 >= *anon16 && *anon11 < *anon12)
			{
				*anon12 = phi17;
				*anon11 = phi18;
				struct { uint32_t field0; bool field1; } anon20 = llvm.ssub.with.overflow.i32(*anon12, *anon11);
				if ((uint8_t)((*anon12 & 0xf) - (*anon11 & 0xf) >> 31) != (__zext uint8_t)anon20.field1)
				{
					phi_in15 = *anon16;
				}
			}
			uint32_t phi21 = phi_in15;
			phi22 = 6301636;
			anon23 = phi21 + 1 & 0xff;
			if (anon23 != 0)
			{
				phi10 = phi10 + 12;
			}
		}
		while (anon23 != 0);
		do
		{
			uint32_t phi26;
			uint32_t* anon27;
			uint32_t phi_in28;
			uint32_t phi29;
			uint32_t phi30;
			uint32_t* anon24 = (uint32_t*)(phi22 + 4);
			uint32_t* anon25 = (uint32_t*)phi22;
			if (*anon24 < *anon25)
			{
				*anon25 = *anon24;
				*anon24 = *anon25;
				phi26 = *anon25;
				anon27 = (uint32_t*)((phi22 & 0xc) - 4);
				*anon27 = *anon24;
				phi_in28 = *anon27;
				phi29 = *anon25;
				phi30 = *anon24;
			}
			else 
			{
				phi26 = *anon24 & 0xf;
				*anon27 = *anon25 & 0xf;
				phi_in28 = *anon27;
			}
			if (*anon24 < *anon25 && *anon24 < *anon27 || *anon24 >= *anon25 && *anon25 < *anon27)
			{
				phi29 = phi26;
				*anon25 = *anon27 & 0xf;
				phi_in28 = *anon27;
				phi30 = *anon27;
			}
			if (*anon24 < *anon25 && *anon24 < *anon27 || *anon24 >= *anon25 && *anon25 < *anon27 || *anon24 >= *anon27 && *anon24 < *anon25)
			{
				*anon25 = phi29;
				*anon24 = phi30;
				struct { uint32_t field0; bool field1; } anon31 = llvm.ssub.with.overflow.i32(*anon25, *anon24);
				if ((uint8_t)((*anon25 & 0xf) - (*anon24 & 0xf) >> 31) != (__zext uint8_t)anon31.field1)
				{
					phi_in28 = *anon27;
				}
			}
			uint32_t phi32 = phi_in28;
			anon33 = phi32 + 1 & 0xff;
			if (anon33 != 0)
			{
				phi22 = phi22 + 12;
			}
		}
		while (anon33 != 0);
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
