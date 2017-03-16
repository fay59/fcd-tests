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
void w(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4)
{
	struct { uint8_t field0[4]; uint32_t field1; uint64_t field2; uint8_t field3[8]; uint32_t field4; uint32_t field5; uint8_t field6[48]; uint64_t field7; uint32_t field8; uint8_t field9[4]; uint64_t field10; uint64_t field11; uint32_t field12; uint8_t field13[8]; uint32_t field14; uint8_t field15[56]; uint64_t field16; } alloca1;
	uint32_t phi_in5;
	uint64_t phi11;
	uint64_t phi18;
	alloca1.field16 = arg0;
	uint64_t anon2 = arg2 << 32;
	uint32_t anon3 = (uint32_t)arg4;
	*(uint32_t*)((anon2 >> 30) + 6300992) = anon3;
	alloca1.field2 = (anon2 >> 32) * 12;
	alloca1.field1 = anon3 + 2;
	alloca1.field4 = anon3 + 3;
	alloca1.field5 = anon3 + 4;
	uint32_t phi_in4 = anon3;
	uint32_t anon6 = anon3 + 1;
	phi_in5 = anon6;
	uint64_t phi7 = arg4 & 0xffffffff;
	uint32_t phi8 = anon6;
	uint32_t phi9 = anon3;
	uint64_t phi10 = 0;
	uint64_t anon12 = (uint64_t)&alloca1;
	phi11 = anon12;
	do
	{
		uint32_t phi_in13 = phi_in4;
		uint32_t phi14 = phi_in5;
		int64_t anon16 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi17 + 48) + *(uint64_t*)(phi17 + 8) + 6301632);
		uint32_t* anon15 = (uint32_t*)((anon16 << 2) + 6300992);
		*anon15 = phi8;
		*(uint64_t*)(phi17 + 48) = phi10;
		uint64_t phi17 = phi11;
		phi18 = *(uint64_t*)(phi17 + 48);
		uint32_t phi19 = phi_in13;
		uint32_t phi20 = phi14;
		phi7 = phi7 & 0xffffffff;
		uint32_t phi21 = *anon15;
		phi9 = phi9;
		if (phi9 < *anon15)
		{
			uint32_t phi_in382;
			uint64_t phi383;
			*(uint64_t*)(phi17 + 16) = anon16 * 12;
			*(uint32_t*)(phi17 + 40) = (uint32_t)phi7 + 5;
			uint32_t phi_in22 = phi14;
			uint64_t phi23 = (__zext uint64_t)phi_in13;
			uint32_t phi24 = phi_in13;
			uint32_t phi25 = phi14;
			uint64_t phi26 = 0;
			uint64_t phi27 = phi17;
			do
			{
				*(uint32_t*)(phi28 + 68) = phi14;
				uint32_t phi_in29 = phi24;
				*(uint64_t*)(phi28 + 56) = phi26;
				uint64_t phi28 = phi27;
				uint32_t phi30 = phi_in22;
				uint32_t phi31 = phi_in13;
				uint64_t phi_in32 = *(uint64_t*)(phi28 + 56);
				uint64_t phi33 = phi23 & 0xffffffff;
				phi14 = *(uint32_t*)(phi28 + 68);
				uint32_t phi34 = phi_in29;
				uint32_t phi35 = phi25;
				int64_t anon37 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi28 + 56) + *(uint64_t*)(phi28 + 16) + 6301632);
				uint32_t* anon36 = (uint32_t*)((anon37 << 2) + 6300992);
				if (phi25 < *anon36)
				{
					uint32_t phi_in58;
					uint64_t phi381;
					*anon36 = *(uint32_t*)(phi28 + 4);
					*(uint64_t*)(phi28 + 32) = anon37 * 12;
					*(uint32_t*)(phi28 + 44) = (uint32_t)phi23 + 6;
					uint32_t phi_in38 = phi_in29;
					uint32_t phi39 = phi_in29;
					uint32_t phi40 = phi_in29;
					uint32_t phi41 = phi_in29;
					uint32_t phi_in42 = phi_in29;
					uint32_t phi_in43 = phi_in29;
					uint32_t phi44 = phi_in29;
					uint32_t phi45 = phi_in29;
					uint32_t phi46 = phi_in29;
					uint64_t phi47 = (__zext uint64_t)phi_in29;
					*(uint64_t*)(phi_in48 + 72) = 0;
					uint64_t phi_in48 = phi28;
					do
					{
						uint32_t phi_in49 = phi39;
						uint32_t phi_in50 = phi40;
						uint32_t phi_in51 = phi41;
						uint32_t phi52 = phi44;
						uint32_t phi53 = phi45;
						uint32_t phi_in54 = phi46;
						uint64_t phi_in55 = phi47;
						uint32_t phi56 = phi_in38;
						phi39 = phi_in49;
						phi40 = phi_in50;
						uint32_t phi57 = phi_in51;
						phi_in58 = phi_in42;
						uint64_t phi_in59 = *(uint64_t*)(phi_in48 + 72);
						uint32_t phi_in60 = phi_in43;
						phi44 = phi52;
						uint32_t phi_in61 = phi53;
						uint32_t phi62 = phi_in54;
						phi47 = phi_in55 & 0xffffffff;
						uint64_t phi63 = phi_in48;
						int64_t anon65 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi_in48 + 72) + *(uint64_t*)(phi_in48 + 32) + 6301632);
						uint32_t* anon64 = (uint32_t*)((anon65 << 2) + 6300992);
						if (*(uint32_t*)(phi_in48 + 4) < *anon64)
						{
							uint64_t phi80;
							uint32_t phi_in90;
							uint32_t phi_in374;
							uint32_t phi_in375;
							uint32_t phi_in376;
							uint32_t phi_in377;
							uint32_t phi_in378;
							uint32_t phi_in379;
							uint32_t phi_in380;
							*anon64 = *(uint32_t*)(phi_in48 + 24);
							*(uint32_t*)(phi_in48 + 64) = (uint32_t)phi_in55 + 7;
							uint32_t phi_in66 = phi_in38;
							uint32_t phi_in67 = phi_in49;
							uint32_t phi68 = phi_in50;
							uint32_t phi_in69 = phi_in29;
							uint32_t phi70 = phi_in51;
							uint32_t phi71 = phi_in42;
							uint32_t phi72 = phi_in43;
							uint64_t phi_in73 = 0;
							uint64_t phi74 = anon65 * 12;
							uint64_t phi75 = phi_in55;
							do
							{
								uint32_t phi76 = phi71;
								uint32_t phi_in77 = phi72;
								uint32_t phi78 = phi52;
								uint32_t phi_in79 = phi53;
								phi80 = phi_in73;
								uint64_t phi_in81 = phi74;
								uint64_t phi_in82 = phi75;
								uint32_t phi83 = phi_in66;
								uint32_t phi84 = phi_in67;
								uint32_t phi85 = phi68;
								uint32_t phi86 = phi_in69;
								uint32_t phi87 = phi76;
								uint32_t phi88 = phi_in77;
								uint32_t phi89 = phi_in79;
								phi_in90 = phi_in54;
								uint64_t phi91 = phi_in48;
								phi47 = phi_in82 & 0xffffffff;
								int64_t anon93 = (__sext int64_t)*(uint32_t*)(phi80 + phi_in81 + 6301632);
								uint32_t* anon92 = (uint32_t*)((anon93 << 2) + 6300992);
								if (*(uint32_t*)(phi_in48 + 24) < *anon92)
								{
									uint32_t phi96;
									uint64_t phi373;
									*anon92 = *(uint32_t*)(phi_in48 + 28);
									uint32_t phi94 = phi_in66;
									uint32_t phi95 = phi_in67;
									uint32_t anon97 = (uint32_t)phi_in82 + 8;
									phi96 = anon97;
									uint32_t phi98 = phi_in69;
									uint32_t phi99 = anon97;
									uint32_t phi_in100 = phi70;
									uint32_t phi101 = anon97;
									uint32_t phi102 = anon97;
									uint32_t phi103 = phi_in77;
									uint32_t phi104 = anon97;
									uint32_t phi105 = anon97;
									uint32_t phi106 = anon97;
									uint32_t phi107 = phi78;
									uint32_t phi108 = anon97;
									uint32_t phi_in109 = anon97;
									uint32_t phi_in110 = phi_in79;
									uint32_t phi111 = anon97;
									uint32_t phi112 = anon97;
									uint32_t phi_in113 = phi_in54;
									uint64_t phi_in114 = phi_in81;
									uint32_t phi115 = anon97;
									uint32_t phi116 = anon97;
									uint32_t phi_in117 = anon97;
									uint64_t phi118 = phi_in48;
									uint64_t phi_in119 = 0;
									uint64_t phi120 = anon93 * 12;
									uint64_t phi121 = phi_in82;
									do
									{
										uint32_t phi122 = phi94;
										uint32_t phi_in123 = phi95;
										uint32_t phi_in124 = phi68;
										uint32_t phi125 = phi96;
										uint32_t phi_in126 = phi99;
										uint32_t phi127 = phi_in100;
										uint32_t phi_in128 = phi76;
										uint32_t phi129 = phi101;
										uint32_t phi130 = phi103;
										uint32_t phi131 = phi104;
										uint32_t phi_in132 = phi105;
										uint32_t phi133 = phi106;
										uint32_t phi_in134 = phi107;
										uint32_t phi135 = phi108;
										uint32_t phi136 = phi111;
										uint32_t phi137 = phi112;
										uint32_t phi138 = phi115;
										uint32_t phi_in139 = phi116;
										uint64_t phi_in140 = phi118;
										uint64_t phi141 = phi120;
										uint32_t phi142 = phi_in123;
										uint32_t phi143 = phi_in124;
										phi96 = phi125;
										uint32_t phi144 = phi98;
										uint32_t phi145 = phi_in126;
										uint32_t phi146 = phi_in128;
										phi101 = phi129;
										uint32_t phi147 = phi102;
										uint32_t phi148 = phi130;
										uint32_t phi149 = phi131;
										uint32_t phi150 = phi_in132;
										uint32_t phi151 = phi133;
										uint32_t phi152 = phi_in134;
										uint32_t phi_in153 = phi_in109;
										uint32_t phi154 = phi_in110;
										uint32_t phi155 = phi136;
										uint32_t phi156 = phi137;
										uint32_t phi157 = phi_in113;
										uint64_t phi158 = phi_in114;
										uint32_t phi_in159 = phi138;
										uint32_t phi160 = phi_in139;
										uint32_t phi_in161 = phi_in117;
										phi91 = phi_in140;
										uint64_t phi162 = phi121;
										int64_t anon164 = (__sext int64_t)*(uint32_t*)(phi_in119 + phi120 + 6301632);
										uint32_t* anon163 = (uint32_t*)((anon164 << 2) + 6300992);
										if (*(uint32_t*)(phi_in140 + 28) < *anon163)
										{
											uint64_t phi183;
											*anon163 = *(uint32_t*)(phi_in140 + 40);
											*(uint32_t*)(phi_in140 + 120) = (uint32_t)phi121 + 9;
											uint64_t phi_in165 = 0;
											uint32_t phi_in166 = phi122;
											uint32_t phi_in167 = phi_in123;
											uint32_t phi_in168 = phi_in124;
											uint32_t phi169 = phi_in126;
											uint32_t phi_in170 = phi127;
											uint32_t phi171 = phi_in132;
											uint32_t phi172 = phi135;
											uint32_t phi173 = phi_in109;
											uint32_t phi174 = phi_in110;
											uint64_t phi175 = phi_in119;
											uint32_t phi176 = phi_in113;
											uint64_t phi177 = phi_in114;
											uint64_t phi178 = phi120;
											uint32_t phi179 = phi_in139;
											uint32_t phi180 = phi_in117;
											uint64_t phi181 = phi_in140;
											uint64_t phi182 = phi121 & 0xffffffff;
											do
											{
												uint64_t phi188;
												phi183 = phi_in165;
												uint32_t phi184 = phi125;
												uint32_t phi_in185 = phi98;
												uint32_t phi_in186 = phi129;
												uint32_t phi_in187 = phi102;
												*(uint32_t*)(phi188 + 96) = phi130;
												uint32_t phi_in189 = phi131;
												uint32_t phi190 = phi171;
												uint32_t phi_in191 = phi133;
												uint32_t phi192 = phi_in134;
												uint32_t phi_in193 = phi172;
												uint32_t phi_in194 = phi173;
												uint32_t phi195 = phi174;
												uint32_t phi_in196 = phi136;
												uint32_t phi_in197 = phi137;
												uint64_t phi_in198 = phi175;
												uint32_t phi_in199 = phi176;
												uint64_t phi_in200 = phi177;
												uint64_t phi201 = phi178;
												uint32_t phi202 = phi138;
												uint32_t phi203 = phi180;
												uint64_t phi204 = phi181;
												uint64_t phi205 = phi182;
												uint32_t phi206 = phi_in166;
												uint32_t phi207 = phi_in167;
												uint32_t phi208 = phi_in168;
												uint32_t phi209 = phi_in185;
												uint32_t phi210 = phi169;
												uint32_t phi211 = phi_in170;
												uint32_t phi212 = phi_in186;
												uint32_t phi213 = phi_in187;
												uint32_t phi214 = *(uint32_t*)(phi188 + 96);
												uint32_t phi215 = phi_in189;
												uint32_t phi216 = phi190;
												uint32_t phi_in217 = phi_in191;
												phi135 = phi_in193;
												uint32_t phi218 = phi_in194;
												phi174 = phi195;
												uint32_t phi219 = phi_in196;
												uint32_t phi220 = phi_in197;
												uint64_t phi221 = phi_in198;
												phi176 = phi_in199;
												phi158 = phi_in200;
												uint64_t phi222 = phi201;
												uint32_t phi223 = phi203;
												uint64_t phi224 = phi204;
												uint64_t phi225 = phi205;
												int64_t anon227 = (__sext int64_t)*(uint32_t*)(phi183 + anon164 * 12 + 6301632);
												uint32_t* anon226 = (uint32_t*)((anon227 << 2) + 6300992);
												if (*(uint32_t*)(phi204 + 40) < *anon226)
												{
													uint64_t phi245;
													*anon226 = *(uint32_t*)(phi204 + 44);
													uint64_t phi_in228 = 0;
													uint32_t phi_in229 = phi_in166;
													uint32_t phi_in230 = phi_in167;
													uint32_t phi231 = phi_in168;
													uint32_t phi232 = phi184;
													uint32_t phi233 = phi_in185;
													uint32_t phi234 = phi_in170;
													uint32_t phi235 = phi_in128;
													uint32_t phi236 = phi_in186;
													uint32_t phi237 = phi_in189;
													uint32_t phi238 = phi_in191;
													uint32_t phi239 = phi192;
													uint32_t phi240 = phi_in194;
													uint32_t phi241 = phi_in196;
													*(uint64_t*)(phi188 + 88) = phi_in198;
													uint64_t phi242 = phi_in200;
													uint32_t phi_in243 = phi202;
													uint32_t phi244 = phi179;
													do
													{
														phi245 = phi_in228;
														uint32_t phi246 = phi_in229;
														uint32_t phi247 = phi_in230;
														uint32_t phi248 = phi232;
														uint32_t phi249 = phi233;
														uint32_t phi250 = phi169;
														uint32_t phi_in251 = phi234;
														uint32_t phi252 = phi235;
														uint32_t phi_in253 = phi237;
														uint32_t phi254 = phi190;
														int64_t anon258 = (__sext int64_t)*(uint32_t*)(phi245 + anon227 * 12 + 6301632);
														int64_t anon257 = anon258 * 12;
														int64_t anon256 = (__sext int64_t)*(uint32_t*)(anon257 + 6301636);
														uint32_t* anon255 = (uint32_t*)((anon256 << 2) + 6300992);
														*anon255 = phi238;
														uint32_t phi_in259 = phi239;
														uint32_t phi_in260 = phi240;
														uint32_t phi261 = phi195;
														uint64_t phi262 = *(uint64_t*)(phi188 + 88);
														uint32_t phi263 = phi_in199;
														*(uint64_t*)(phi188 + 104) = phi242;
														*(uint64_t*)(phi188 + 112) = phi201;
														uint32_t phi_in264 = phi244;
														uint32_t phi_in265 = phi203;
														phi188 = phi204;
														uint64_t phi266 = phi205;
														uint32_t phi267 = phi247;
														phi209 = phi249;
														uint32_t phi268 = phi250;
														uint32_t phi269 = phi_in251;
														uint32_t phi270 = phi252;
														uint32_t phi271 = phi236;
														uint32_t phi272 = *(uint32_t*)(phi188 + 96);
														phi215 = phi_in253;
														uint32_t phi273 = *anon255;
														phi239 = phi_in259;
														uint32_t phi274 = phi_in193;
														uint32_t phi275 = phi_in260;
														phi195 = phi261;
														phi_in196 = phi241;
														uint32_t phi276 = phi_in197;
														uint64_t phi277 = phi262;
														phi_in199 = phi263;
														phi_in200 = *(uint64_t*)(phi188 + 104);
														uint64_t phi278 = *(uint64_t*)(phi188 + 112);
														uint32_t phi279 = phi_in243;
														uint32_t phi280 = phi_in264;
														phi203 = phi_in265;
														uint64_t phi_in281 = phi188;
														uint64_t phi_in282 = phi266;
														uint32_t* anon283 = (uint32_t*)((anon258 << 2) + 6300992);
														if (*(uint32_t*)(phi188 + 44) < *anon283)
														{
															uint64_t phi357;
															*anon283 = *(uint32_t*)(phi188 + 64);
															uint32_t phi284 = phi246;
															uint32_t phi285 = phi231;
															uint32_t phi286 = phi248;
															uint64_t phi287 = phi188;
															uint32_t phi288 = phi250;
															uint32_t phi_in289 = phi236;
															uint32_t phi_in290 = phi_in187;
															uint32_t phi291 = *(uint32_t*)(phi188 + 96);
															uint32_t phi292 = phi254;
															uint32_t phi293 = *anon255;
															uint32_t phi294 = phi_in259;
															uint32_t phi295 = phi_in193;
															uint32_t phi296 = phi_in260;
															uint32_t phi297 = phi_in197;
															*(uint64_t*)(phi_in281 + 96) = *(uint64_t*)(phi188 + 104);
															uint64_t phi298 = *(uint64_t*)(phi188 + 112);
															uint32_t phi_in299 = phi_in243;
															uint32_t phi_in300 = phi_in265;
															uint64_t phi301 = phi266;
															if (*(uint32_t*)(phi188 + 64) < *anon255)
															{
																uint32_t phi302 = phi246;
																uint32_t phi303 = phi247;
																uint32_t phi304 = phi231;
																uint32_t phi305 = phi248;
																phi233 = phi249;
																uint32_t phi306 = phi_in251;
																uint32_t phi307 = phi252;
																uint32_t phi308 = phi_in187;
																*(uint64_t*)(phi309 + 80) = anon256;
																uint32_t phi310 = *(uint32_t*)(phi188 + 96);
																uint32_t phi311 = phi_in259;
																uint32_t phi312 = phi261;
																*(uint64_t*)(phi309 + 88) = phi262;
																uint32_t phi313 = phi263;
																uint64_t phi314 = *(uint64_t*)(phi188 + 104);
																uint64_t phi315 = *(uint64_t*)(phi188 + 112);
																if (phi254 < *anon255)
																{
																	*(uint32_t*)(phi188 + 124) = phi_in253;
																	*(uint64_t*)(phi188 + 88) = phi262;
																	*(uint64_t*)(phi188 + 80) = anon256;
																	uint64_t anon316 = (__zext uint64_t)*anon255;
																	w(4197873, anon12, (__sext int64_t)*anon255, anon316, anon316);
																	phi302 = *(uint32_t*)(arg1 - 96);
																	phi303 = *(uint32_t*)(arg1 - 96);
																	phi304 = *(uint32_t*)(arg1 - 96);
																	phi305 = *(uint32_t*)(arg1 - 68);
																	phi233 = *(uint32_t*)(arg1 - 96);
																	phi250 = *(uint32_t*)(arg1 - 68);
																	phi306 = *(uint32_t*)(arg1 - 96);
																	phi307 = *(uint32_t*)(arg1 - 96);
																	phi236 = *(uint32_t*)(arg1 - 68);
																	phi188 = anon12;
																	phi308 = *(uint32_t*)(arg1 - 68);
																	*(uint64_t*)(phi309 + 80) = *(uint64_t*)(arg1 - 112);
																	phi310 = *(uint32_t*)(arg1 - 96);
																	phi311 = *(uint32_t*)(arg1 - 96);
																	phi312 = *(uint32_t*)(arg1 - 96);
																	*(uint64_t*)(phi309 + 88) = *(uint64_t*)(arg1 - 104);
																	phi313 = *(uint32_t*)(arg1 - 96);
																	phi314 = *(uint64_t*)(arg1 - 88);
																	phi315 = *(uint64_t*)(arg1 - 80);
																	phi266 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
																}
																uint32_t phi_in317 = phi302;
																uint32_t phi_in318 = phi303;
																uint32_t phi_in319 = phi304;
																uint32_t phi320 = phi305;
																uint32_t phi_in321 = phi233;
																uint32_t phi322 = phi250;
																*(uint32_t*)(phi309 + 96) = phi306;
																uint32_t phi_in323 = phi307;
																*(uint32_t*)(phi309 + 124) = phi236;
																uint64_t phi309 = phi188;
																uint32_t phi324 = phi310;
																uint32_t phi_in325 = phi311;
																uint32_t phi_in326 = phi312;
																*(uint64_t*)(phi309 + 104) = phi314;
																*(uint64_t*)(phi309 + 112) = phi315;
																uint64_t phi327 = phi266;
																uint32_t phi328 = phi_in317;
																uint32_t phi329 = phi_in321;
																uint32_t phi330 = *(uint32_t*)(phi309 + 96);
																uint32_t phi331 = phi_in323;
																uint64_t phi332 = *(uint64_t*)(phi309 + 80);
																uint32_t phi333 = phi_in325;
																phi261 = phi_in326;
																*(uint64_t*)(phi309 + 80) = *(uint64_t*)(phi309 + 88);
																*(uint64_t*)(phi309 + 96) = *(uint64_t*)(phi309 + 104);
																*(uint64_t*)(phi309 + 104) = *(uint64_t*)(phi309 + 112);
																int64_t anon334 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi309 + 80) * 12 + 6301636);
																if (phi308 < *(uint32_t*)((anon334 << 2) + 6300992))
																{
																	uint64_t anon335 = (__zext uint64_t)*(uint32_t*)(phi309 + 120);
																	w(4197793, anon12, anon334, anon335, anon335);
																	phi328 = *(uint32_t*)(arg1 - 96);
																	phi_in318 = *(uint32_t*)(arg1 - 96);
																	phi_in319 = *(uint32_t*)(arg1 - 96);
																	phi320 = alloca1.field14;
																	phi329 = *(uint32_t*)(arg1 - 96);
																	phi309 = anon12;
																	phi322 = alloca1.field14;
																	phi330 = *(uint32_t*)(arg1 - 96);
																	phi331 = *(uint32_t*)(arg1 - 96);
																	phi332 = *(uint64_t*)(arg1 - 112);
																	phi324 = *(uint32_t*)(arg1 - 96);
																	phi333 = *(uint32_t*)(arg1 - 96);
																	phi261 = *(uint32_t*)(arg1 - 96);
																	*(uint64_t*)(phi309 + 80) = *(uint64_t*)(arg1 - 104);
																	phi313 = *(uint32_t*)(arg1 - 96);
																	*(uint64_t*)(phi309 + 96) = *(uint64_t*)(arg1 - 88);
																	*(uint64_t*)(phi309 + 104) = *(uint64_t*)(arg1 - 80);
																	phi327 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
																}
																phi284 = phi328;
																uint32_t phi_in336 = phi320;
																*(uint32_t*)(phi309 + 88) = phi329;
																phi_in300 = phi322;
																uint32_t phi_in337 = phi330;
																uint32_t phi_in338 = phi331;
																uint32_t phi_in339 = phi324;
																phi294 = phi333;
																phi262 = *(uint64_t*)(phi309 + 80);
																phi263 = phi313;
																phi301 = phi327;
																phi247 = phi_in318;
																phi285 = phi_in319;
																phi286 = phi_in336;
																phi287 = phi309;
																phi249 = *(uint32_t*)(phi309 + 88);
																phi288 = phi_in300;
																phi_in251 = phi_in337;
																phi252 = phi_in338;
																phi_in289 = phi_in300;
																phi_in290 = phi_in300;
																phi291 = phi_in339;
																phi_in253 = phi_in300;
																phi292 = phi_in300;
																phi293 = phi_in300;
																phi295 = phi_in300;
																phi296 = phi_in300;
																phi241 = phi_in300;
																phi297 = phi_in300;
																*(uint64_t*)(phi_in281 + 96) = *(uint64_t*)(phi309 + 96);
																phi298 = *(uint64_t*)(phi309 + 104);
																phi_in299 = phi_in300;
																phi_in264 = phi_in300;
																int64_t anon340 = (__sext int64_t)*(uint32_t*)(phi332 * 12 + 6301640);
																if (phi_in300 < *(uint32_t*)((anon340 << 2) + 6300992))
																{
																	*(uint32_t*)(phi309 + 112) = phi_in300;
																	*(uint64_t*)(phi309 + 80) = phi262;
																	uint64_t anon341 = (__zext uint64_t)*(uint32_t*)(phi309 + 120);
																	w(4197395, anon12, anon340, anon341, anon341);
																	phi284 = *(uint32_t*)(arg1 - 104);
																	phi247 = *(uint32_t*)(arg1 - 104);
																	phi285 = *(uint32_t*)(arg1 - 104);
																	phi286 = *(uint32_t*)(arg1 - 80);
																	phi287 = anon12;
																	phi249 = *(uint32_t*)(arg1 - 104);
																	phi288 = *(uint32_t*)(arg1 - 80);
																	phi_in251 = *(uint32_t*)(arg1 - 104);
																	phi252 = *(uint32_t*)(arg1 - 104);
																	phi_in289 = *(uint32_t*)(arg1 - 80);
																	phi_in290 = *(uint32_t*)(arg1 - 80);
																	phi291 = *(uint32_t*)(arg1 - 104);
																	phi_in253 = *(uint32_t*)(arg1 - 80);
																	phi292 = *(uint32_t*)(arg1 - 80);
																	phi293 = *(uint32_t*)(arg1 - 80);
																	phi294 = *(uint32_t*)(arg1 - 104);
																	phi295 = *(uint32_t*)(arg1 - 80);
																	phi296 = *(uint32_t*)(arg1 - 80);
																	phi261 = *(uint32_t*)(arg1 - 104);
																	phi241 = *(uint32_t*)(arg1 - 80);
																	phi297 = *(uint32_t*)(arg1 - 80);
																	phi262 = *(uint64_t*)(arg1 - 112);
																	phi263 = *(uint32_t*)(arg1 - 104);
																	*(uint64_t*)(phi_in281 + 96) = *(uint64_t*)(arg1 - 96);
																	phi298 = *(uint64_t*)(arg1 - 88);
																	phi_in299 = *(uint32_t*)(arg1 - 80);
																	phi_in264 = *(uint32_t*)(arg1 - 80);
																	phi_in300 = *(uint32_t*)(arg1 - 80);
																	phi301 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
																}
															}
															uint32_t phi_in342 = phi284;
															*(uint32_t*)(phi_in281 + 88) = phi247;
															uint32_t phi_in343 = phi285;
															int64_t anon345 = (__sext int64_t)*(uint32_t*)(anon257 + 6301640);
															uint32_t* anon344 = (uint32_t*)((anon345 << 2) + 6300992);
															*anon344 = phi286;
															phi_in281 = phi287;
															uint32_t phi_in346 = phi249;
															uint32_t phi_in347 = phi288;
															phi269 = phi_in251;
															uint32_t phi348 = phi252;
															uint32_t phi349 = phi291;
															phi254 = phi292;
															phi273 = phi293;
															uint32_t phi350 = phi294;
															uint32_t phi_in351 = phi295;
															uint32_t phi_in352 = phi296;
															uint32_t phi353 = phi261;
															uint32_t phi_in354 = phi241;
															phi276 = phi297;
															uint64_t phi355 = phi262;
															uint32_t phi_in356 = phi263;
															*(uint64_t*)(phi357 + 96) = *(uint64_t*)(phi_in281 + 96);
															uint64_t phi358 = phi298;
															uint64_t phi359 = phi301;
															phi246 = phi_in342;
															phi267 = *(uint32_t*)(phi_in281 + 88);
															phi231 = phi_in343;
															phi248 = *anon344;
															phi209 = phi_in346;
															phi268 = phi_in347;
															phi270 = phi348;
															phi271 = phi_in289;
															phi_in187 = phi_in290;
															phi272 = phi349;
															phi215 = phi_in253;
															phi239 = phi350;
															phi274 = phi_in351;
															phi275 = phi_in352;
															phi195 = phi353;
															phi_in196 = phi_in354;
															phi277 = phi355;
															phi_in199 = phi_in356;
															phi_in200 = *(uint64_t*)(phi357 + 96);
															phi278 = phi358;
															phi279 = phi_in299;
															phi280 = phi_in264;
															phi203 = phi_in300;
															phi_in282 = phi359;
															if (*(uint32_t*)(phi_in281 + 64) < *anon344)
															{
																*(uint32_t*)(phi357 + 88) = phi_in342;
																uint32_t phi360 = *(uint32_t*)(phi_in281 + 88);
																uint32_t phi361 = *anon344;
																uint32_t phi362 = phi269;
																uint32_t phi363 = phi_in356;
																phi357 = phi_in281;
																int64_t anon365 = anon345 * 12;
																int64_t anon364 = (__sext int64_t)*(uint32_t*)(anon365 + 6301636);
																if (*anon344 < *(uint32_t*)((anon364 << 2) + 6300992))
																{
																	*(uint32_t*)(phi_in281 + 112) = *anon344;
																	*(uint64_t*)(phi_in281 + 104) = phi358;
																	*(uint64_t*)(phi_in281 + 96) = *(uint64_t*)(phi357 + 96);
																	*(uint64_t*)(phi_in281 + 80) = phi355;
																	uint64_t anon366 = (__zext uint64_t)*(uint32_t*)(phi_in281 + 120);
																	w(4197948, anon12, anon364, anon366, anon366);
																	*(uint32_t*)(phi357 + 88) = *(uint32_t*)(arg1 - 104);
																	phi360 = *(uint32_t*)(arg1 - 104);
																	phi_in343 = *(uint32_t*)(arg1 - 104);
																	phi361 = *(uint32_t*)(arg1 - 80);
																	phi_in346 = *(uint32_t*)(arg1 - 104);
																	phi362 = *(uint32_t*)(arg1 - 104);
																	phi348 = *(uint32_t*)(arg1 - 104);
																	phi349 = *(uint32_t*)(arg1 - 104);
																	phi350 = *(uint32_t*)(arg1 - 104);
																	phi353 = *(uint32_t*)(arg1 - 104);
																	phi355 = *(uint64_t*)(arg1 - 112);
																	phi363 = *(uint32_t*)(arg1 - 104);
																	*(uint64_t*)(phi357 + 96) = *(uint64_t*)(arg1 - 96);
																	phi358 = *(uint64_t*)(arg1 - 88);
																	phi357 = anon12;
																	phi359 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
																}
																phi267 = phi360;
																*(uint32_t*)(phi357 + 112) = phi361;
																phi269 = phi362;
																phi270 = phi348;
																uint32_t phi_in367 = phi349;
																uint32_t phi_in368 = phi350;
																phi195 = phi353;
																*(uint64_t*)(phi357 + 80) = phi355;
																uint32_t phi_in369 = phi363;
																phi278 = phi358;
																uint64_t phi_in370 = phi359;
																phi246 = *(uint32_t*)(phi357 + 88);
																phi231 = phi_in343;
																phi248 = *(uint32_t*)(phi357 + 112);
																phi209 = phi_in346;
																phi268 = *(uint32_t*)(phi357 + 112);
																phi271 = *(uint32_t*)(phi357 + 112);
																phi_in187 = *(uint32_t*)(phi357 + 112);
																phi272 = phi_in367;
																phi215 = *(uint32_t*)(phi357 + 112);
																phi254 = *(uint32_t*)(phi357 + 112);
																phi273 = *(uint32_t*)(phi357 + 112);
																phi239 = phi_in368;
																phi274 = *(uint32_t*)(phi357 + 112);
																phi275 = *(uint32_t*)(phi357 + 112);
																phi_in196 = *(uint32_t*)(phi357 + 112);
																phi276 = *(uint32_t*)(phi357 + 112);
																phi277 = *(uint64_t*)(phi357 + 80);
																phi_in199 = phi_in369;
																phi_in200 = *(uint64_t*)(phi357 + 96);
																phi279 = *(uint32_t*)(phi357 + 112);
																phi280 = *(uint32_t*)(phi357 + 112);
																phi203 = *(uint32_t*)(phi357 + 112);
																phi_in281 = phi357;
																phi_in282 = phi_in370;
																int64_t anon371 = (__sext int64_t)*(uint32_t*)(anon365 + 6301640);
																if (*(uint32_t*)(phi357 + 112) < *(uint32_t*)((anon371 << 2) + 6300992))
																{
																	*(uint64_t*)(phi357 + 104) = phi278;
																	uint64_t anon372 = (__zext uint64_t)*(uint32_t*)(phi357 + 120);
																	w(4197231, anon12, anon371, anon372, anon372);
																	phi246 = alloca1.field8;
																	phi267 = alloca1.field8;
																	phi231 = alloca1.field8;
																	phi248 = alloca1.field12;
																	phi209 = alloca1.field8;
																	phi268 = alloca1.field12;
																	phi269 = alloca1.field8;
																	phi270 = alloca1.field8;
																	phi271 = alloca1.field12;
																	phi_in187 = alloca1.field12;
																	phi272 = alloca1.field8;
																	phi215 = alloca1.field12;
																	phi254 = alloca1.field12;
																	phi273 = alloca1.field12;
																	phi239 = alloca1.field8;
																	phi274 = alloca1.field12;
																	phi275 = alloca1.field12;
																	phi195 = alloca1.field8;
																	phi_in196 = alloca1.field12;
																	phi276 = alloca1.field12;
																	phi277 = alloca1.field7;
																	phi_in199 = alloca1.field8;
																	phi_in200 = alloca1.field10;
																	phi278 = alloca1.field11;
																	phi279 = alloca1.field12;
																	phi280 = alloca1.field12;
																	phi203 = alloca1.field12;
																	phi_in281 = anon12;
																	phi_in282 = (__zext uint64_t)alloca1.field8;
																}
															}
														}
														phi208 = phi231;
														phi184 = phi248;
														phi210 = phi268;
														phi211 = phi269;
														phi214 = phi272;
														phi135 = phi274;
														phi218 = phi275;
														phi220 = phi276;
														phi221 = phi277;
														phi222 = phi278;
														phi202 = phi279;
														phi179 = phi280;
														phi206 = phi246;
														phi207 = phi267;
														phi_in128 = phi270;
														phi212 = phi271;
														phi213 = phi_in187;
														phi216 = phi254;
														phi_in217 = phi273;
														phi192 = phi239;
														phi174 = phi195;
														phi219 = phi_in196;
														phi176 = phi_in199;
														phi158 = phi_in200;
														phi223 = phi203;
														phi224 = phi_in281;
														phi225 = phi_in282;
														phi_in228 = phi245 + 4;
														phi_in229 = phi246;
														phi_in230 = phi267;
														phi231 = phi208;
														phi232 = phi184;
														phi233 = phi209;
														phi169 = phi210;
														phi234 = phi211;
														phi235 = phi270;
														phi236 = phi271;
														*(uint32_t*)(phi188 + 96) = phi214;
														phi237 = phi215;
														phi190 = phi254;
														phi238 = phi273;
														phi_in193 = phi135;
														phi240 = phi218;
														phi241 = phi_in196;
														phi_in197 = phi220;
														*(uint64_t*)(phi188 + 88) = phi221;
														phi242 = phi_in200;
														phi201 = phi222;
														phi_in243 = phi202;
														phi244 = phi179;
														phi204 = phi_in281;
														phi205 = phi_in282;
													}
													while (phi245 != 8);
												}
												phi122 = phi206;
												phi142 = phi207;
												phi143 = phi208;
												phi144 = phi209;
												phi101 = phi212;
												phi147 = phi213;
												phi148 = phi214;
												phi152 = phi192;
												phi_in119 = phi221;
												phi141 = phi222;
												phi160 = phi179;
												phi162 = phi225;
												phi96 = phi184;
												phi145 = phi210;
												phi127 = phi211;
												phi146 = phi_in128;
												phi149 = phi215;
												phi150 = phi216;
												phi151 = phi_in217;
												phi_in153 = phi218;
												phi154 = phi174;
												phi155 = phi219;
												phi156 = phi220;
												phi157 = phi176;
												phi_in159 = phi202;
												phi_in161 = phi223;
												phi91 = phi224;
												phi_in165 = phi183 + 4;
												phi_in166 = phi122;
												phi_in167 = phi142;
												phi_in168 = phi143;
												phi125 = phi184;
												phi98 = phi144;
												phi169 = phi210;
												phi_in170 = phi211;
												phi129 = phi101;
												phi102 = phi147;
												phi130 = phi148;
												phi131 = phi215;
												phi171 = phi216;
												phi133 = phi_in217;
												phi_in134 = phi152;
												phi172 = phi135;
												phi173 = phi218;
												phi136 = phi219;
												phi137 = phi220;
												phi175 = phi_in119;
												phi177 = phi158;
												phi178 = phi141;
												phi138 = phi202;
												phi179 = phi160;
												phi180 = phi223;
												phi181 = phi224;
												phi182 = phi162;
											}
											while (phi183 != 8);
										}
										phi84 = phi142;
										phi86 = phi144;
										phi70 = phi127;
										phi373 = phi_in119;
										phi78 = phi152;
										phi_in81 = phi158;
										phi83 = phi122;
										phi85 = phi143;
										phi87 = phi146;
										phi88 = phi148;
										phi89 = phi154;
										phi_in90 = phi157;
										phi47 = phi162;
										phi94 = phi122;
										phi95 = phi84;
										phi68 = phi143;
										phi98 = phi86;
										phi99 = phi145;
										phi_in100 = phi70;
										phi76 = phi146;
										phi102 = phi147;
										phi103 = phi148;
										phi104 = phi149;
										phi105 = phi150;
										phi106 = phi151;
										phi107 = phi78;
										phi108 = phi135;
										phi_in109 = phi_in153;
										phi_in110 = phi154;
										phi111 = phi155;
										phi112 = phi156;
										phi_in113 = phi157;
										phi_in114 = phi_in81;
										phi115 = phi_in159;
										phi116 = phi160;
										phi_in117 = phi_in161;
										phi118 = phi91;
										phi_in119 = phi373 + 4;
										phi120 = phi141;
										phi121 = phi162;
									}
									while (phi373 != 8);
								}
								phi56 = phi83;
								phi_in374 = phi84;
								phi_in375 = phi85;
								phi_in376 = phi86;
								phi_in377 = phi70;
								phi_in58 = phi87;
								phi_in378 = phi88;
								phi_in379 = phi78;
								phi_in380 = phi89;
								phi63 = phi91;
								phi_in66 = phi56;
								phi_in67 = phi_in374;
								phi68 = phi_in375;
								phi_in69 = phi_in376;
								phi70 = phi_in377;
								phi71 = phi_in58;
								phi72 = phi_in378;
								phi52 = phi_in379;
								phi53 = phi_in380;
								phi_in54 = phi_in90;
								phi_in48 = phi63;
								phi_in73 = phi80 + 4;
								phi74 = phi_in81;
								phi75 = phi47;
							}
							while (phi80 != 8);
							phi39 = phi_in374;
							phi40 = phi_in375;
							phi_in29 = phi_in376;
							phi57 = phi_in377;
							phi_in59 = *(uint64_t*)(phi63 + 72);
							phi_in60 = phi_in378;
							phi44 = phi_in379;
							phi_in61 = phi_in380;
							phi62 = phi_in90;
						}
						phi381 = phi_in59;
						phi28 = phi63;
						phi_in38 = phi56;
						phi41 = phi57;
						phi_in42 = phi_in58;
						phi_in43 = phi_in60;
						phi45 = phi_in61;
						phi46 = phi62;
						*(uint64_t*)(phi_in48 + 72) = phi381 + 4;
						phi_in48 = phi28;
					}
					while (phi381 != 8);
					phi30 = *(uint32_t*)(phi28 + 68);
					phi31 = phi_in58;
					phi_in32 = *(uint64_t*)(phi28 + 56);
					phi33 = (__zext uint64_t)phi_in58;
					phi14 = *(uint32_t*)(phi28 + 68);
					phi34 = phi_in58;
					phi35 = *(uint32_t*)(phi28 + 68);
				}
				phi21 = phi30;
				phi_in382 = phi31;
				phi383 = phi_in32;
				phi17 = phi28;
				phi_in22 = phi21;
				phi_in13 = phi_in382;
				phi23 = phi33;
				phi24 = phi34;
				phi25 = phi35;
				phi26 = phi383 + 4;
				phi27 = phi17;
			}
			while (phi383 != 8);
			phi18 = *(uint64_t*)(phi17 + 48);
			phi19 = phi_in382;
			phi20 = phi21;
			phi7 = (__zext uint64_t)phi_in382;
			phi9 = phi_in382;
		}
		phi_in4 = phi19;
		phi_in5 = phi20;
		phi8 = phi21;
		phi10 = phi18 + 4;
		phi11 = phi17;
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
	w(4198271, (uint64_t)&alloca1, anon13 + (((anon13 & 0xffffffff) * 2290649225 + anon14 >> 32 >> 4) - (anon14 >> 32 >> 31)) * 4294967266 & 0xffffffff, 0, 0);
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
	uint32_t phi1 = 0;
	uint64_t anon4 = arg1 << 32;
	uint32_t* anon3 = (uint32_t*)((anon4 >> 30) + 6301376);
	phi_in2 = *anon3;
	do
	{
		uint32_t phi_in5 = phi1;
		phi6 = phi_in2;
		if (phi6 != 0)
		{
			*anon3 = phi6 - 1;
			uint32_t phi_in7 = 3;
			uint32_t phi8 = phi_in5;
			uint32_t phi9 = phi_in7;
			uint64_t anon10 = random();
			if (phi8 > 1000)
			{
				break;
			}
			else 
			{
				uint32_t anon11 = phi8 + 1;
				phi_in5 = anon11;
				uint32_t anon12 = phi9 - (__zext uint32_t)(anon11 == (anon11 / 100 - (uint32_t)((__zext uint64_t)anon11 << 32 >> 63)) * 100);
				phi_in7 = anon12;
				uint64_t anon15 = anon10 << 32;
				uint64_t anon14 = anon10 + (((anon10 & 0xffffffff) * 2290649225 + anon15 >> 36) - (anon15 >> 32 >> 31)) * 4294967266;
				uint32_t anon13 = (uint32_t)anon14;
				uint64_t anon17 = anon4 >> 32;
				uint32_t anon16 = (uint32_t)anon17;
				if (anon13 != anon16)
				{
					phi_in5 = anon11;
					phi_in7 = anon12;
					uint64_t anon19 = anon14 << 32;
					uint32_t* anon18 = (uint32_t*)((anon19 >> 30) + 6301376);
					if (*anon18 >= 1)
					{
						phi_in5 = anon11;
						phi_in7 = anon12;
						uint64_t anon20 = anon17 * 12;
						if (!(*(uint32_t*)(anon20 + 6301640) == anon13 | anon12 > *anon18))
						{
							phi_in5 = anon11;
							phi_in7 = anon12;
							if (anon13 != *(uint32_t*)(anon20 + 6301636))
							{
								uint32_t anon21 = *anon18 - 1;
								*anon18 = anon21;
								uint64_t anon22 = anon17 * 3;
								*(uint32_t*)(((__sext int64_t)anon21 + anon22 << 2) + 6301632) = anon13;
								uint62_t anon23 = (uint62_t)(anon19 >> 32) * 3;
								*(uint32_t*)(((__zext uint64_t)((__sext int62_t)anon21 + anon23) << 2) + 6301632) = anon16;
								r(4198736, anon14 & 0xffffffff);
								uint32_t* anon24 = (uint32_t*)((anon19 >> 30) + 6301376);
								*(uint32_t*)(((__zext uint64_t)(anon23 + (__sext int62_t)*anon24) << 2) + 6301632) = 4294967295;
								*anon24 = *anon24 + 1;
								*(uint32_t*)(((__sext int64_t)*anon3 + anon22 << 2) + 6301632) = 4294967295;
								*anon3 = 0;
								phi1 = anon11;
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
				phi17 = phi13;
				uint32_t phi_in18 = phi14;
				*anon12 = *anon16 & 0xf;
				*anon16 = phi_in18;
				phi_in15 = phi_in18;
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
			uint32_t phi_in26;
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
				phi_in26 = *anon23;
				anon28 = (uint32_t*)(phi21 - 4);
				phi27 = *anon28;
				*anon24 = *anon24;
				phi29 = *anon23;
			}
			else 
			{
				phi25 = *anon23 & 0xf;
				phi_in26 = *anon24 & 0xf;
				phi_in30 = *anon28;
			}
			if (*anon23 < *anon24 && *anon23 < *anon28 || *anon23 >= *anon24 && *anon24 < *anon28)
			{
				uint32_t phi_in31 = phi25;
				*anon28 = phi_in26;
				*anon24 = *anon28 & 0xf;
				phi27 = *anon28;
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
					phi_in30 = *(uint32_t*)((phi21 & 0xc) - 4);
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
				w(4199968, (uint64_t)&alloca1, anon23 + (((anon23 & 0xffffffff) * 2290649225 + anon24 >> 32 >> 4) - (anon24 >> 32 >> 31)) * 4294967266 & 0xffffffff, 0, 0);
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
