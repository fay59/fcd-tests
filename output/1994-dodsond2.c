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
			uint64_t anon13 = phi3 + 12;
			phi1 = (uint32_t*)anon13;
			phi_in2 = anon13;
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
		int64_t anon15 = (__sext int64_t)*(uint32_t*)(phi16 + *(uint64_t*)(phi11 + 8) + 6301632);
		uint32_t* anon14 = (uint32_t*)((anon15 << 2) + 6300992);
		*anon14 = phi8;
		phi16 = phi10;
		uint32_t phi17 = phi4;
		phi_in5 = phi_in13;
		uint64_t phi18 = phi7 & 0xffffffff;
		uint32_t phi19 = *anon14;
		uint32_t phi20 = phi9;
		uint64_t phi21 = phi11;
		if (phi9 < *anon14)
		{
			uint32_t phi_in361;
			uint64_t phi362;
			uint64_t phi_in363;
			*(uint64_t*)(phi11 + 48) = phi16;
			*(uint64_t*)(phi11 + 16) = anon15 * 12;
			*(uint32_t*)(phi11 + 40) = (uint32_t)phi7 + 5;
			uint32_t phi22 = phi4;
			uint64_t phi23 = (__zext uint64_t)phi4;
			uint32_t phi24 = phi_in13;
			uint32_t phi25 = phi_in13;
			uint64_t phi26 = 0;
			do
			{
				*(uint32_t*)(phi_in27 + 68) = phi24;
				uint32_t phi28 = phi4;
				uint64_t phi_in29 = phi26;
				uint64_t phi_in27 = phi11;
				uint32_t phi30 = phi_in13;
				uint64_t phi31 = phi23 & 0xffffffff;
				uint32_t phi32 = *(uint32_t*)(phi_in27 + 68);
				phi4 = phi28;
				uint32_t phi33 = phi25;
				uint64_t phi34 = phi_in27;
				int64_t anon36 = (__sext int64_t)*(uint32_t*)(phi_in29 + *(uint64_t*)(phi_in27 + 16) + 6301632);
				uint32_t* anon35 = (uint32_t*)((anon36 << 2) + 6300992);
				if (phi25 < *anon35)
				{
					uint64_t phi_in65;
					uint32_t phi_in359;
					uint64_t phi360;
					*(uint64_t*)(phi_in27 + 56) = phi_in29;
					*anon35 = *(uint32_t*)(phi_in27 + 4);
					*(uint64_t*)(phi_in27 + 32) = anon36 * 12;
					*(uint32_t*)(phi_in27 + 44) = (uint32_t)phi23 + 6;
					uint32_t phi37 = phi28;
					uint32_t phi38 = phi28;
					uint32_t phi39 = phi28;
					uint32_t phi40 = phi28;
					uint32_t phi41 = phi28;
					uint32_t phi_in42 = phi28;
					uint32_t phi_in43 = phi28;
					uint32_t phi_in44 = phi28;
					uint32_t phi45 = phi28;
					uint64_t phi_in46 = (__zext uint64_t)phi28;
					uint64_t phi47 = 0;
					uint64_t phi48 = phi_in27;
					do
					{
						uint32_t phi_in49 = phi38;
						uint32_t phi_in50 = phi39;
						uint32_t phi_in51 = phi41;
						uint32_t phi52 = phi_in43;
						uint32_t phi_in53 = phi28;
						uint32_t phi54 = phi45;
						*(uint64_t*)(phi48 + 72) = phi47;
						uint32_t phi55 = phi37;
						uint32_t phi_in56 = phi_in49;
						uint32_t phi57 = phi_in50;
						uint32_t phi58 = phi40;
						uint32_t phi59 = phi_in51;
						uint32_t phi60 = phi_in42;
						uint64_t phi_in61 = *(uint64_t*)(phi48 + 72);
						uint32_t phi62 = phi_in53;
						uint32_t phi63 = phi54;
						uint64_t phi64 = phi_in46 & 0xffffffff;
						phi_in65 = phi48;
						int64_t anon67 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi48 + 72) + *(uint64_t*)(phi48 + 32) + 6301632);
						uint32_t* anon66 = (uint32_t*)((anon67 << 2) + 6300992);
						if (*(uint32_t*)(phi48 + 4) < *anon66)
						{
							uint64_t phi88;
							uint32_t phi_in93;
							uint32_t phi_in354;
							uint32_t phi_in355;
							uint32_t phi_in356;
							uint32_t phi_in357;
							uint64_t phi_in358;
							*anon66 = *(uint32_t*)(phi48 + 24);
							*(uint32_t*)(phi48 + 64) = (uint32_t)phi_in46 + 7;
							uint32_t phi68 = phi_in49;
							uint32_t phi69 = phi_in50;
							uint32_t phi70 = phi_in51;
							uint32_t phi71 = phi_in42;
							uint32_t phi72 = phi52;
							uint32_t phi73 = phi_in44;
							uint32_t phi74 = phi_in53;
							uint64_t phi75 = phi48;
							uint64_t phi_in76 = 0;
							uint64_t phi77 = anon67 * 12;
							uint64_t phi_in78 = phi_in46;
							do
							{
								uint32_t phi79 = phi37;
								uint32_t phi_in80 = phi68;
								uint32_t phi_in81 = phi40;
								uint32_t phi82 = phi71;
								uint32_t phi_in83 = phi72;
								uint32_t phi_in84 = phi73;
								uint32_t phi_in85 = phi74;
								uint32_t phi_in86 = phi54;
								uint64_t phi87 = phi75;
								phi88 = phi_in76;
								uint64_t phi89 = phi77;
								phi77 = phi89;
								uint32_t phi90 = phi_in80;
								uint32_t phi91 = phi69;
								uint32_t phi92 = phi_in81;
								phi_in93 = phi70;
								uint32_t phi94 = phi82;
								uint32_t phi95 = phi_in83;
								uint32_t phi96 = phi_in84;
								uint32_t phi97 = phi_in85;
								uint32_t phi98 = phi_in86;
								uint64_t phi99 = phi87;
								uint64_t phi100 = phi_in78 & 0xffffffff;
								int64_t anon102 = (__sext int64_t)*(uint32_t*)(phi88 + phi89 + 6301632);
								uint32_t* anon101 = (uint32_t*)((anon102 << 2) + 6300992);
								if (*(uint32_t*)(phi87 + 24) < *anon101)
								{
									uint32_t phi105;
									uint64_t phi353;
									*anon101 = *(uint32_t*)(phi87 + 28);
									uint32_t phi_in103 = phi79;
									uint32_t phi_in104 = phi_in80;
									uint32_t anon106 = (uint32_t)phi_in78 + 8;
									phi105 = anon106;
									uint32_t phi107 = anon106;
									uint32_t phi108 = anon106;
									uint32_t phi_in109 = anon106;
									uint32_t phi110 = phi_in83;
									uint32_t phi111 = anon106;
									uint32_t phi112 = anon106;
									uint32_t phi113 = anon106;
									phi_in84 = phi_in84;
									uint32_t phi114 = anon106;
									uint32_t phi115 = anon106;
									uint32_t phi116 = anon106;
									uint32_t phi117 = anon106;
									uint32_t phi118 = phi_in86;
									uint32_t phi119 = anon106;
									uint32_t phi120 = anon106;
									uint32_t phi121 = anon106;
									uint64_t phi122 = 0;
									uint64_t phi123 = anon102 * 12;
									uint64_t phi124 = phi_in78;
									do
									{
										uint32_t phi_in125 = phi69;
										uint32_t phi_in126 = phi105;
										uint32_t phi_in127 = phi70;
										uint32_t phi_in128 = phi82;
										uint32_t phi_in129 = phi108;
										uint32_t phi130 = phi110;
										uint32_t phi131 = phi111;
										uint32_t phi_in132 = phi112;
										uint32_t phi133 = phi113;
										uint32_t phi134 = phi115;
										uint32_t phi135 = phi116;
										uint32_t phi_in136 = phi117;
										uint32_t phi_in137 = phi118;
										uint64_t phi_in138 = phi89;
										uint32_t phi_in139 = phi119;
										uint32_t phi140 = phi121;
										uint64_t phi_in141 = phi87;
										uint64_t phi142 = phi123;
										uint32_t phi143 = phi_in103;
										uint32_t phi144 = phi_in104;
										uint32_t phi145 = phi_in125;
										phi105 = phi_in126;
										phi92 = phi_in81;
										uint32_t phi_in146 = phi107;
										uint32_t phi147 = phi_in127;
										uint32_t phi148 = phi_in128;
										uint64_t phi_in149 = phi122;
										phi108 = phi_in129;
										uint32_t phi150 = phi_in109;
										uint32_t phi151 = phi130;
										uint32_t phi152 = phi131;
										uint32_t phi153 = phi_in132;
										uint32_t phi154 = phi114;
										uint32_t phi155 = phi134;
										uint32_t phi156 = phi_in85;
										uint32_t phi157 = phi135;
										uint32_t phi158 = phi_in136;
										uint32_t phi159 = phi_in137;
										uint64_t phi160 = phi_in138;
										uint32_t phi161 = phi_in139;
										uint32_t phi162 = phi140;
										uint64_t phi163 = phi_in141;
										uint64_t phi164 = phi124;
										int64_t anon166 = (__sext int64_t)*(uint32_t*)(phi122 + phi123 + 6301632);
										uint32_t* anon165 = (uint32_t*)((anon166 << 2) + 6300992);
										if (*(uint32_t*)(phi_in141 + 28) < *anon165)
										{
											uint64_t phi186;
											*anon165 = *(uint32_t*)(phi_in141 + 40);
											*(uint32_t*)(phi_in141 + 120) = (uint32_t)phi124 + 9;
											uint64_t phi_in167 = 0;
											uint32_t phi_in168 = phi_in103;
											uint32_t phi_in169 = phi_in104;
											uint32_t phi_in170 = phi_in126;
											uint32_t phi171 = phi_in81;
											uint32_t phi_in172 = phi_in127;
											uint32_t phi_in173 = phi_in128;
											uint32_t phi174 = phi_in129;
											uint32_t phi_in175 = phi_in109;
											uint32_t phi_in176 = phi133;
											uint32_t phi177 = phi_in84;
											uint32_t phi_in178 = phi_in85;
											uint32_t phi179 = phi_in136;
											uint64_t phi180 = phi122;
											uint32_t phi181 = phi_in137;
											uint64_t phi182 = phi_in138;
											uint64_t phi183 = phi123;
											uint64_t phi184 = phi_in141;
											uint64_t phi185 = phi124 & 0xffffffff;
											do
											{
												phi186 = phi_in167;
												uint32_t phi187 = phi_in125;
												uint32_t phi188 = phi171;
												uint32_t phi_in189 = phi107;
												uint32_t phi190 = phi_in173;
												uint32_t phi191 = phi174;
												uint32_t phi_in192 = phi130;
												uint32_t phi_in193 = phi131;
												uint32_t phi_in194 = phi177;
												uint32_t phi_in195 = phi114;
												uint32_t phi_in196 = phi134;
												uint32_t phi197 = phi135;
												uint32_t phi198 = phi179;
												uint64_t phi199 = phi180;
												uint64_t phi_in200 = phi183;
												uint32_t phi_in201 = phi120;
												uint32_t phi202 = phi140;
												uint64_t phi203 = phi184;
												uint64_t phi_in204 = phi185;
												phi143 = phi_in168;
												uint32_t phi205 = phi_in169;
												uint32_t phi206 = phi_in170;
												uint32_t phi207 = phi188;
												uint32_t phi208 = phi_in189;
												uint32_t phi209 = phi_in172;
												uint32_t phi210 = phi191;
												uint32_t phi211 = phi_in192;
												uint32_t phi212 = phi_in193;
												uint32_t phi_in213 = phi_in132;
												uint32_t phi214 = phi_in176;
												phi177 = phi_in194;
												uint32_t phi215 = phi_in195;
												phi134 = phi_in196;
												phi_in85 = phi_in178;
												uint32_t phi216 = phi197;
												uint32_t phi217 = phi198;
												phi_in149 = phi199;
												phi159 = phi181;
												uint64_t phi218 = phi_in200;
												uint32_t phi219 = phi_in139;
												phi120 = phi_in201;
												uint64_t phi220 = phi203;
												uint64_t phi_in221 = phi_in204;
												int64_t anon223 = (__sext int64_t)*(uint32_t*)(phi186 + anon166 * 12 + 6301632);
												uint32_t* anon222 = (uint32_t*)((anon223 << 2) + 6300992);
												if (*(uint32_t*)(phi203 + 40) < *anon222)
												{
													uint64_t phi240;
													*anon222 = *(uint32_t*)(phi203 + 44);
													uint64_t phi_in224 = 0;
													uint32_t phi225 = phi_in168;
													uint32_t phi226 = phi_in169;
													uint32_t phi227 = phi187;
													uint32_t phi_in228 = phi_in170;
													uint32_t phi_in229 = phi_in189;
													uint32_t phi230 = phi_in172;
													uint32_t phi231 = phi190;
													uint32_t phi232 = phi_in175;
													uint32_t phi233 = phi_in192;
													uint32_t phi234 = phi_in193;
													uint32_t phi235 = phi_in132;
													int64_t anon239 = (__sext int64_t)*(uint32_t*)(phi240 + anon223 * 12 + 6301632);
													int64_t anon238 = anon239 * 12;
													int64_t anon237 = (__sext int64_t)*(uint32_t*)(anon238 + 6301636);
													uint32_t* anon236 = (uint32_t*)((anon237 << 2) + 6300992);
													*anon236 = phi_in176;
													uint32_t phi241 = phi_in194;
													uint32_t phi242 = phi_in195;
													uint32_t phi243 = phi_in196;
													uint32_t phi244 = phi_in178;
													uint64_t phi245 = phi182;
													uint64_t phi246 = phi_in200;
													uint32_t phi_in247 = phi_in139;
													uint32_t phi_in248 = phi_in201;
													uint32_t phi_in249 = phi202;
													uint64_t phi_in250 = phi_in204;
													do
													{
														phi240 = phi_in224;
														uint32_t phi251 = phi227;
														uint32_t phi_in252 = phi188;
														uint32_t phi253 = phi230;
														uint32_t phi254 = phi191;
														uint32_t phi255 = phi232;
														uint32_t phi256 = phi233;
														*(uint32_t*)(phi257 + 124) = phi234;
														uint32_t phi258 = phi241;
														uint32_t phi259 = phi242;
														uint32_t phi_in260 = phi244;
														uint32_t phi261 = phi197;
														uint32_t phi_in262 = phi198;
														*(uint64_t*)(phi257 + 88) = phi199;
														uint32_t phi263 = phi181;
														*(uint64_t*)(phi257 + 104) = phi245;
														*(uint64_t*)(phi257 + 112) = phi246;
														uint64_t phi257 = phi203;
														phi227 = phi251;
														uint32_t phi264 = phi_in228;
														uint32_t phi265 = phi_in252;
														uint32_t phi266 = phi_in229;
														uint32_t phi267 = phi254;
														phi_in175 = phi255;
														uint32_t phi268 = phi256;
														phi_in193 = *(uint32_t*)(phi257 + 124);
														uint32_t phi269 = phi235;
														phi_in176 = *anon236;
														uint32_t phi270 = phi258;
														uint32_t phi271 = phi259;
														phi_in178 = phi_in260;
														uint32_t phi272 = phi_in262;
														uint64_t phi273 = *(uint64_t*)(phi257 + 88);
														phi181 = phi263;
														uint64_t phi274 = *(uint64_t*)(phi257 + 104);
														uint64_t phi275 = *(uint64_t*)(phi257 + 112);
														uint32_t phi276 = phi_in247;
														uint32_t phi277 = phi_in249;
														phi203 = phi257;
														uint64_t phi278 = phi_in250;
														uint32_t* anon279 = (uint32_t*)((anon239 << 2) + 6300992);
														if (*(uint32_t*)(phi257 + 44) < *anon279)
														{
															uint64_t phi328;
															*anon279 = *(uint32_t*)(phi257 + 64);
															uint32_t phi280 = phi_in228;
															uint64_t phi281 = phi257;
															phi265 = phi_in252;
															uint32_t phi282 = phi_in229;
															uint32_t phi283 = phi253;
															uint32_t phi284 = phi231;
															phi267 = phi254;
															uint32_t phi285 = phi255;
															uint32_t phi286 = phi256;
															uint32_t phi_in287 = *(uint32_t*)(phi257 + 124);
															uint32_t phi_in288 = phi235;
															uint32_t phi289 = *anon236;
															uint32_t phi_in290 = phi258;
															uint32_t phi_in291 = phi_in260;
															uint32_t phi292 = phi261;
															*(uint64_t*)(phi281 + 80) = *(uint64_t*)(phi257 + 88);
															uint32_t phi293 = phi263;
															uint64_t phi294 = *(uint64_t*)(phi257 + 104);
															uint64_t phi295 = *(uint64_t*)(phi257 + 112);
															uint32_t phi296 = phi_in247;
															uint32_t phi_in297 = phi_in248;
															uint32_t phi298 = phi_in249;
															uint64_t phi299 = phi_in250;
															if (*(uint32_t*)(phi257 + 64) < *anon236)
															{
																uint32_t phi_in300 = phi225;
																uint32_t phi301 = phi226;
																uint32_t phi302 = phi251;
																uint32_t phi303 = phi_in228;
																uint32_t phi_in304 = phi_in252;
																uint32_t phi305 = phi_in229;
																*(uint32_t*)(phi257 + 96) = phi253;
																uint64_t phi306 = anon237;
																*(uint64_t*)(phi257 + 88) = *(uint64_t*)(phi257 + 88);
																*(uint64_t*)(phi257 + 104) = *(uint64_t*)(phi257 + 104);
																uint64_t phi307 = *(uint64_t*)(phi257 + 112);
																uint64_t phi_in308 = phi_in250;
																if (phi235 < *anon236)
																{
																	*(uint32_t*)(phi257 + 96) = phi256;
																	*(uint64_t*)(phi257 + 80) = anon237;
																	w(4197873, anon12, (__sext int64_t)*anon236, (__zext uint64_t)*anon236);
																	phi_in300 = *(uint32_t*)(arg1 - 96);
																	phi301 = *(uint32_t*)(arg1 - 96);
																	phi302 = *(uint32_t*)(arg1 - 96);
																	phi303 = *(uint32_t*)(arg1 - 68);
																	phi_in304 = *(uint32_t*)(arg1 - 96);
																	phi305 = *(uint32_t*)(arg1 - 68);
																	*(uint32_t*)(phi257 + 96) = *(uint32_t*)(arg1 - 96);
																	phi231 = *(uint32_t*)(arg1 - 96);
																	phi254 = *(uint32_t*)(arg1 - 68);
																	phi257 = anon12;
																	phi255 = *(uint32_t*)(arg1 - 68);
																	phi306 = *(uint64_t*)(arg1 - 112);
																	phi256 = *(uint32_t*)(arg1 - 96);
																	phi258 = *(uint32_t*)(arg1 - 96);
																	phi_in260 = *(uint32_t*)(arg1 - 96);
																	*(uint64_t*)(phi257 + 88) = *(uint64_t*)(arg1 - 104);
																	phi263 = *(uint32_t*)(arg1 - 96);
																	*(uint64_t*)(phi257 + 104) = *(uint64_t*)(arg1 - 88);
																	phi307 = *(uint64_t*)(arg1 - 80);
																	phi_in308 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
																}
																uint32_t phi_in309 = phi301;
																uint32_t phi310 = phi302;
																uint32_t phi311 = phi303;
																uint32_t phi312 = phi305;
																uint32_t phi_in313 = phi231;
																*(uint32_t*)(phi257 + 124) = phi254;
																*(uint64_t*)(phi257 + 80) = phi306;
																phi286 = phi256;
																uint32_t phi314 = phi258;
																uint32_t phi_in315 = phi263;
																*(uint64_t*)(phi257 + 112) = phi307;
																uint32_t phi316 = phi_in300;
																uint32_t phi317 = phi_in309;
																*(uint32_t*)(phi281 + 88) = phi_in304;
																uint64_t phi318 = phi257;
																phi283 = *(uint32_t*)(phi257 + 96);
																uint32_t phi319 = phi_in313;
																uint64_t phi320 = *(uint64_t*)(phi257 + 80);
																uint32_t phi_in321 = phi_in260;
																*(uint64_t*)(phi281 + 80) = *(uint64_t*)(phi257 + 88);
																uint32_t phi322 = phi_in315;
																*(uint64_t*)(phi281 + 96) = *(uint64_t*)(phi257 + 104);
																*(uint64_t*)(phi281 + 104) = *(uint64_t*)(phi257 + 112);
																uint64_t phi323 = phi_in308;
																int64_t anon324 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi257 + 80) * 12 + 6301636);
																if (phi255 < *(uint32_t*)((anon324 << 2) + 6300992))
																{
																	w(4197793, anon12, anon324, (__zext uint64_t)*(uint32_t*)(phi257 + 120));
																	phi316 = *(uint32_t*)(arg1 - 96);
																	phi317 = *(uint32_t*)(arg1 - 96);
																	phi310 = *(uint32_t*)(arg1 - 96);
																	phi311 = alloca1.field14;
																	*(uint32_t*)(phi281 + 88) = *(uint32_t*)(arg1 - 96);
																	phi318 = anon12;
																	phi312 = alloca1.field14;
																	phi283 = *(uint32_t*)(arg1 - 96);
																	phi319 = *(uint32_t*)(arg1 - 96);
																	phi320 = *(uint64_t*)(arg1 - 112);
																	phi286 = *(uint32_t*)(arg1 - 96);
																	phi314 = *(uint32_t*)(arg1 - 96);
																	phi_in321 = *(uint32_t*)(arg1 - 96);
																	*(uint64_t*)(phi281 + 80) = *(uint64_t*)(arg1 - 104);
																	phi322 = *(uint32_t*)(arg1 - 96);
																	*(uint64_t*)(phi281 + 96) = *(uint64_t*)(arg1 - 88);
																	*(uint64_t*)(phi281 + 104) = *(uint64_t*)(arg1 - 80);
																	phi323 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
																}
																phi225 = phi316;
																phi226 = phi317;
																phi251 = phi310;
																uint32_t phi_in325 = phi311;
																phi281 = phi318;
																phi285 = phi312;
																uint32_t phi_in326 = phi319;
																phi_in290 = phi314;
																phi293 = phi322;
																phi294 = *(uint64_t*)(phi281 + 96);
																phi295 = *(uint64_t*)(phi281 + 104);
																phi299 = phi323;
																phi280 = phi_in325;
																phi265 = *(uint32_t*)(phi281 + 88);
																phi282 = phi285;
																phi284 = phi_in326;
																phi267 = phi285;
																phi_in287 = phi285;
																phi_in288 = phi285;
																phi289 = phi285;
																phi259 = phi285;
																phi243 = phi285;
																phi_in291 = phi_in321;
																phi292 = phi285;
																phi_in262 = phi285;
																*(uint64_t*)(phi281 + 80) = *(uint64_t*)(phi281 + 80);
																phi296 = phi285;
																phi_in297 = phi285;
																phi298 = phi285;
																int64_t anon327 = (__sext int64_t)*(uint32_t*)(phi320 * 12 + 6301640);
																if (phi285 < *(uint32_t*)((anon327 << 2) + 6300992))
																{
																	*(uint32_t*)(phi281 + 112) = phi285;
																	*(uint64_t*)(phi281 + 104) = phi295;
																	*(uint64_t*)(phi281 + 96) = phi294;
																	w(4197395, anon12, anon327, (__zext uint64_t)*(uint32_t*)(phi281 + 120));
																	phi225 = *(uint32_t*)(arg1 - 104);
																	phi226 = *(uint32_t*)(arg1 - 104);
																	phi251 = *(uint32_t*)(arg1 - 104);
																	phi280 = *(uint32_t*)(arg1 - 80);
																	phi281 = anon12;
																	phi265 = *(uint32_t*)(arg1 - 104);
																	phi282 = *(uint32_t*)(arg1 - 80);
																	phi283 = *(uint32_t*)(arg1 - 104);
																	phi284 = *(uint32_t*)(arg1 - 104);
																	phi267 = *(uint32_t*)(arg1 - 80);
																	phi285 = *(uint32_t*)(arg1 - 80);
																	phi286 = *(uint32_t*)(arg1 - 104);
																	phi_in287 = *(uint32_t*)(arg1 - 80);
																	phi_in288 = *(uint32_t*)(arg1 - 80);
																	phi289 = *(uint32_t*)(arg1 - 80);
																	phi_in290 = *(uint32_t*)(arg1 - 104);
																	phi259 = *(uint32_t*)(arg1 - 80);
																	phi243 = *(uint32_t*)(arg1 - 80);
																	phi_in291 = *(uint32_t*)(arg1 - 104);
																	phi292 = *(uint32_t*)(arg1 - 80);
																	phi_in262 = *(uint32_t*)(arg1 - 80);
																	*(uint64_t*)(phi281 + 80) = *(uint64_t*)(arg1 - 112);
																	phi293 = *(uint32_t*)(arg1 - 104);
																	phi294 = *(uint64_t*)(arg1 - 96);
																	phi295 = *(uint64_t*)(arg1 - 88);
																	phi296 = *(uint32_t*)(arg1 - 80);
																	phi_in297 = *(uint32_t*)(arg1 - 80);
																	phi298 = *(uint32_t*)(arg1 - 80);
																	phi299 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
																}
															}
															*(uint32_t*)(phi328 + 88) = phi225;
															*(uint32_t*)(phi281 + 88) = phi226;
															uint32_t phi329 = phi251;
															*(uint32_t*)(phi281 + 112) = phi280;
															phi266 = phi282;
															uint32_t phi_in330 = phi283;
															uint32_t phi331 = phi284;
															uint32_t phi_in332 = phi285;
															phi268 = phi286;
															phi_in176 = phi289;
															phi271 = phi259;
															uint32_t phi_in333 = phi243;
															phi261 = phi292;
															*(uint64_t*)(phi328 + 80) = *(uint64_t*)(phi281 + 80);
															uint32_t phi_in334 = phi293;
															*(uint64_t*)(phi281 + 96) = phi294;
															*(uint64_t*)(phi281 + 104) = phi295;
															uint32_t phi_in335 = phi296;
															phi277 = phi298;
															uint64_t phi_in336 = phi299;
															phi225 = *(uint32_t*)(phi328 + 88);
															phi226 = *(uint32_t*)(phi281 + 88);
															phi227 = phi329;
															phi264 = *(uint32_t*)(phi281 + 112);
															phi253 = phi_in330;
															phi231 = phi331;
															phi_in175 = phi_in332;
															phi_in193 = phi_in287;
															phi269 = phi_in288;
															phi270 = phi_in290;
															phi243 = phi_in333;
															phi_in178 = phi_in291;
															phi272 = phi_in262;
															phi273 = *(uint64_t*)(phi328 + 80);
															phi181 = phi_in334;
															phi274 = *(uint64_t*)(phi281 + 96);
															phi275 = *(uint64_t*)(phi281 + 104);
															phi276 = phi_in335;
															phi_in248 = phi_in297;
															phi203 = phi281;
															phi278 = phi_in336;
															int64_t anon338 = (__sext int64_t)*(uint32_t*)(anon238 + 6301640);
															uint32_t* anon337 = (uint32_t*)((anon338 << 2) + 6300992);
															if (*(uint32_t*)(phi281 + 64) < *anon337)
															{
																*anon337 = *(uint32_t*)(phi281 + 112);
																uint32_t phi_in339 = *(uint32_t*)(phi281 + 88);
																uint32_t phi340 = *(uint32_t*)(phi281 + 112);
																uint32_t phi341 = phi265;
																phi253 = phi_in330;
																uint32_t phi342 = phi268;
																uint32_t phi_in343 = phi_in290;
																uint32_t phi_in344 = phi_in291;
																uint64_t phi345 = *(uint64_t*)(phi281 + 96);
																uint64_t phi346 = *(uint64_t*)(phi281 + 104);
																phi328 = phi281;
																uint64_t phi_in347 = phi_in336;
																int64_t anon349 = anon338 * 12;
																int64_t anon348 = (__sext int64_t)*(uint32_t*)(anon349 + 6301636);
																if (*(uint32_t*)(phi281 + 112) < *(uint32_t*)((anon348 << 2) + 6300992))
																{
																	*(uint64_t*)(phi281 + 80) = *(uint64_t*)(phi328 + 80);
																	w(4197948, anon12, anon348, (__zext uint64_t)*(uint32_t*)(phi281 + 120));
																	*(uint32_t*)(phi328 + 88) = *(uint32_t*)(arg1 - 104);
																	phi_in339 = *(uint32_t*)(arg1 - 104);
																	phi329 = *(uint32_t*)(arg1 - 104);
																	phi340 = *(uint32_t*)(arg1 - 80);
																	phi341 = *(uint32_t*)(arg1 - 104);
																	phi253 = *(uint32_t*)(arg1 - 104);
																	phi331 = *(uint32_t*)(arg1 - 104);
																	phi342 = *(uint32_t*)(arg1 - 104);
																	phi_in343 = *(uint32_t*)(arg1 - 104);
																	phi_in344 = *(uint32_t*)(arg1 - 104);
																	*(uint64_t*)(phi328 + 80) = *(uint64_t*)(arg1 - 112);
																	phi_in334 = *(uint32_t*)(arg1 - 104);
																	phi345 = *(uint64_t*)(arg1 - 96);
																	phi346 = *(uint64_t*)(arg1 - 88);
																	phi328 = anon12;
																	phi_in347 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
																}
																uint32_t phi_in350 = phi329;
																phi277 = phi340;
																phi265 = phi341;
																uint32_t phi_in351 = phi331;
																phi268 = phi342;
																phi273 = *(uint64_t*)(phi328 + 80);
																*(uint64_t*)(phi328 + 96) = phi345;
																*(uint64_t*)(phi328 + 104) = phi346;
																phi225 = *(uint32_t*)(phi328 + 88);
																phi226 = phi_in339;
																phi227 = phi_in350;
																phi264 = phi277;
																phi266 = phi277;
																phi231 = phi_in351;
																phi267 = phi277;
																phi_in175 = phi277;
																phi_in193 = phi277;
																phi269 = phi277;
																phi_in176 = phi277;
																phi270 = phi_in343;
																phi271 = phi277;
																phi243 = phi277;
																phi_in178 = phi_in344;
																phi261 = phi277;
																phi272 = phi277;
																phi181 = phi_in334;
																phi274 = *(uint64_t*)(phi328 + 96);
																phi275 = *(uint64_t*)(phi328 + 104);
																phi276 = phi277;
																phi_in248 = phi277;
																phi203 = phi328;
																phi278 = phi_in347;
																int64_t anon352 = (__sext int64_t)*(uint32_t*)(anon349 + 6301640);
																if (phi277 < *(uint32_t*)((anon352 << 2) + 6300992))
																{
																	*(uint32_t*)(phi328 + 112) = phi277;
																	*(uint64_t*)(phi328 + 80) = phi273;
																	w(4197231, anon12, anon352, (__zext uint64_t)*(uint32_t*)(phi328 + 120));
																	phi225 = alloca1.field8;
																	phi226 = alloca1.field8;
																	phi227 = alloca1.field8;
																	phi264 = alloca1.field12;
																	phi265 = alloca1.field8;
																	phi266 = alloca1.field12;
																	phi253 = alloca1.field8;
																	phi231 = alloca1.field8;
																	phi267 = alloca1.field12;
																	phi_in175 = alloca1.field12;
																	phi268 = alloca1.field8;
																	phi_in193 = alloca1.field12;
																	phi269 = alloca1.field12;
																	phi_in176 = alloca1.field12;
																	phi270 = alloca1.field8;
																	phi271 = alloca1.field12;
																	phi243 = alloca1.field12;
																	phi_in178 = alloca1.field8;
																	phi261 = alloca1.field12;
																	phi272 = alloca1.field12;
																	phi273 = alloca1.field7;
																	phi181 = alloca1.field8;
																	phi274 = alloca1.field10;
																	phi275 = alloca1.field11;
																	phi276 = alloca1.field12;
																	phi_in248 = alloca1.field12;
																	phi277 = alloca1.field12;
																	phi203 = anon12;
																	phi278 = (__zext uint64_t)alloca1.field8;
																}
															}
														}
														phi206 = phi264;
														phi210 = phi267;
														phi_in213 = phi269;
														phi215 = phi271;
														phi216 = phi261;
														phi217 = phi272;
														phi182 = phi274;
														phi218 = phi275;
														phi202 = phi277;
														phi_in221 = phi278;
														phi143 = phi225;
														phi205 = phi226;
														phi187 = phi227;
														phi207 = phi265;
														phi208 = phi266;
														phi209 = phi253;
														phi190 = phi231;
														phi_in175 = phi_in175;
														phi211 = phi268;
														phi212 = phi_in193;
														phi214 = phi_in176;
														phi177 = phi270;
														phi134 = phi243;
														phi_in85 = phi_in178;
														phi_in149 = phi273;
														phi159 = phi181;
														phi219 = phi276;
														phi120 = phi_in248;
														phi220 = phi203;
														phi_in224 = phi240 + 4;
														phi_in228 = phi206;
														phi188 = phi265;
														phi_in229 = phi266;
														phi230 = phi253;
														phi191 = phi210;
														phi232 = phi_in175;
														phi233 = phi268;
														phi234 = phi_in193;
														phi235 = phi_in213;
														*anon236 = phi_in176;
														phi241 = phi270;
														phi242 = phi215;
														phi244 = phi_in178;
														phi197 = phi216;
														phi198 = phi217;
														phi199 = phi273;
														phi245 = phi182;
														phi246 = phi218;
														phi_in247 = phi276;
														phi_in249 = phi202;
														phi_in250 = phi_in221;
													}
													while (phi240 != 8);
												}
												phi144 = phi205;
												phi_in146 = phi208;
												phi148 = phi190;
												phi133 = phi214;
												phi154 = phi215;
												phi160 = phi182;
												phi162 = phi202;
												phi142 = phi218;
												phi145 = phi187;
												phi105 = phi206;
												phi92 = phi207;
												phi147 = phi209;
												phi108 = phi210;
												phi150 = phi_in175;
												phi151 = phi211;
												phi152 = phi212;
												phi153 = phi_in213;
												phi_in84 = phi177;
												phi155 = phi134;
												phi156 = phi_in85;
												phi157 = phi216;
												phi158 = phi217;
												phi161 = phi219;
												phi163 = phi220;
												phi164 = phi_in221;
												phi_in167 = phi186 + 4;
												phi_in168 = phi143;
												phi_in169 = phi144;
												phi_in125 = phi187;
												phi_in170 = phi206;
												phi171 = phi207;
												phi107 = phi_in146;
												phi_in172 = phi209;
												phi_in173 = phi148;
												phi174 = phi210;
												phi130 = phi211;
												phi131 = phi212;
												phi_in132 = phi_in213;
												phi_in176 = phi133;
												phi114 = phi154;
												phi_in178 = phi_in85;
												phi135 = phi216;
												phi179 = phi217;
												phi180 = phi_in149;
												phi181 = phi159;
												phi182 = phi160;
												phi183 = phi218;
												phi_in139 = phi219;
												phi140 = phi162;
												phi184 = phi220;
												phi185 = phi_in221;
											}
											while (phi186 != 8);
										}
										phi79 = phi143;
										phi91 = phi145;
										phi353 = phi_in149;
										phi95 = phi151;
										phi97 = phi156;
										phi77 = phi160;
										phi99 = phi163;
										phi90 = phi144;
										phi_in93 = phi147;
										phi94 = phi148;
										phi96 = phi_in84;
										phi98 = phi159;
										phi100 = phi164;
										phi_in103 = phi79;
										phi_in104 = phi144;
										phi69 = phi91;
										phi_in81 = phi92;
										phi107 = phi_in146;
										phi70 = phi147;
										phi82 = phi148;
										phi_in109 = phi150;
										phi110 = phi95;
										phi111 = phi152;
										phi112 = phi153;
										phi113 = phi133;
										phi114 = phi154;
										phi115 = phi155;
										phi_in85 = phi97;
										phi116 = phi157;
										phi117 = phi158;
										phi118 = phi159;
										phi89 = phi77;
										phi119 = phi161;
										phi121 = phi162;
										phi87 = phi99;
										phi122 = phi353 + 4;
										phi123 = phi142;
										phi124 = phi164;
									}
									while (phi353 != 8);
								}
								phi_in354 = phi79;
								phi_in355 = phi90;
								phi57 = phi91;
								phi_in356 = phi92;
								phi60 = phi94;
								phi52 = phi95;
								phi_in357 = phi96;
								phi62 = phi97;
								phi63 = phi98;
								phi_in358 = phi99;
								phi64 = phi100;
								phi37 = phi_in354;
								phi68 = phi_in355;
								phi69 = phi57;
								phi40 = phi_in356;
								phi70 = phi_in93;
								phi71 = phi60;
								phi72 = phi52;
								phi73 = phi_in357;
								phi74 = phi62;
								phi54 = phi63;
								phi75 = phi_in358;
								phi_in76 = phi88 + 4;
								phi_in78 = phi64;
							}
							while (phi88 != 8);
							phi55 = phi_in354;
							phi_in56 = phi_in355;
							phi58 = phi_in356;
							phi59 = phi_in93;
							phi_in61 = *(uint64_t*)(phi_in358 + 72);
							phi_in44 = phi_in357;
							phi_in65 = phi_in358;
						}
						phi_in359 = phi60;
						phi360 = phi_in61;
						phi37 = phi55;
						phi38 = phi_in56;
						phi39 = phi57;
						phi40 = phi58;
						phi41 = phi59;
						phi_in42 = phi_in359;
						phi_in43 = phi52;
						phi28 = phi62;
						phi45 = phi63;
						phi_in46 = phi64;
						phi47 = phi360 + 4;
						phi48 = phi_in65;
					}
					while (phi360 != 8);
					phi30 = *(uint32_t*)(phi_in65 + 68);
					phi22 = phi_in359;
					phi_in29 = *(uint64_t*)(phi_in65 + 56);
					phi31 = (__zext uint64_t)phi_in359;
					phi32 = *(uint32_t*)(phi_in65 + 68);
					phi4 = phi_in359;
					phi33 = *(uint32_t*)(phi_in65 + 68);
					phi34 = phi_in65;
				}
				phi_in361 = phi30;
				phi17 = phi22;
				phi362 = phi_in29;
				phi_in363 = phi34;
				phi_in13 = phi_in361;
				phi22 = phi17;
				phi23 = phi31;
				phi24 = phi32;
				phi25 = phi33;
				phi26 = phi362 + 4;
				phi11 = phi_in363;
			}
			while (phi362 != 8);
			phi16 = *(uint64_t*)(phi_in363 + 48);
			phi_in5 = phi_in361;
			phi18 = (__zext uint64_t)phi17;
			phi19 = phi_in361;
			phi20 = phi17;
			phi21 = phi_in363;
		}
		phi4 = phi17;
		phi7 = phi18;
		phi8 = phi19;
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
		uint64_t phi20;
		uint32_t anon21;
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
			uint32_t phi_in17;
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
				*anon12 = *anon12;
				*anon11 = *anon11;
			}
			else 
			{
				phi13 = *anon11;
				phi14 = *anon12;
				phi_in17 = *anon16;
			}
			if (*anon11 < *anon12 && *anon11 < *anon16 || *anon11 >= *anon12 && *anon12 < *anon16)
			{
				uint32_t phi_in18 = phi13;
				*anon16 = phi14;
				*anon12 = *anon16;
				phi15 = *anon16;
				*anon12 = phi_in18;
				*anon11 = *anon16;
			}
			if (*anon11 < *anon12 && *anon11 < *anon16 || *anon11 >= *anon12 && *anon12 < *anon16 || *anon11 >= *anon16 && *anon11 < *anon12)
			{
				phi_in17 = phi15;
				if (*anon12 < *anon11)
				{
					phi_in17 = *anon16;
				}
			}
			uint32_t phi19 = phi_in17;
			phi20 = 6301636;
			anon21 = phi19 + 1 & 0xff;
			if (anon21 != 0)
			{
				phi10 = phi10 + 12;
			}
		}
		while (anon21 != 0);
		do
		{
			uint32_t phi24;
			uint32_t phi25;
			uint32_t phi26;
			uint32_t* anon27;
			uint32_t phi28;
			uint32_t phi29;
			uint32_t phi_in30;
			uint32_t* anon22 = (uint32_t*)(phi20 + 4);
			uint32_t* anon23 = (uint32_t*)phi20;
			if (*anon22 < *anon23)
			{
				*anon23 = *anon22;
				*anon22 = *anon23;
				phi24 = *anon23;
				phi25 = *anon22;
				anon27 = (uint32_t*)((phi20 & 0xc) - 4);
				phi26 = *anon27;
				phi28 = *anon23;
				phi29 = *anon22;
			}
			else 
			{
				phi24 = *anon22;
				phi25 = *anon23;
				phi_in30 = *anon27;
			}
			if (*anon22 < *anon23 && *anon22 < *anon27 || *anon22 >= *anon23 && *anon23 < *anon27)
			{
				uint32_t phi_in31 = phi24;
				uint32_t phi_in32 = phi25;
				*anon23 = *anon27;
				*anon27 = phi_in32;
				phi26 = phi_in32;
				phi28 = phi_in31;
				phi29 = *anon27;
			}
			if (*anon22 < *anon23 && *anon22 < *anon27 || *anon22 >= *anon23 && *anon23 < *anon27 || *anon22 >= *anon27 && *anon22 < *anon23)
			{
				phi_in30 = phi26;
				*anon23 = phi28;
				*anon22 = phi29;
				if (*anon23 < *anon22)
				{
					phi_in30 = *anon27;
				}
			}
			uint32_t phi33 = phi_in30;
			anon34 = phi33 + 1 & 0xff;
			if (anon34 != 0)
			{
				phi20 = phi20 + 12;
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
