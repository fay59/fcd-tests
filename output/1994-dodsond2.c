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
	uint64_t anon3 = anon1 & 0xfffffffffffffff0;
	uint64_t anon2 = anon3 - 8;
	struct nanon4 = n(4195954);
	*(uint64_t*)anon2 = anon4.rax;
	uint64_t anon5 = anon3 - 16;
	*(uint64_t*)anon5 = anon2;
	__libc_start_main((uint32_t(*)(uint32_t, uint8_t**, uint8_t**))0x400660, (uint32_t)arg0, (uint8_t**)anon1, (void(*)())0x401c10, (void(*)())0x401c80, (void(*)())anon4.rdx, *(uint8_t**)anon5);
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
		uint32_t* anon6;
		uint32_t phi7;
		uint32_t phi8;
		uint32_t phi9;
		uint64_t phi3 = phi_in2;
		uint32_t* anon4 = (uint32_t*)(phi3 + 4);
		if (*anon4 < *phi1)
		{
			*anon4 = *phi1;
			*phi1 = *anon4;
			phi5 = *phi1;
			anon6 = (uint32_t*)(phi3 - 4);
			*anon6 = *anon4;
			phi7 = *anon6;
			phi8 = *phi1;
			phi9 = *anon4;
		}
		else 
		{
			phi5 = *anon4;
			*anon6 = *phi1;
			phi10 = *anon6;
		}
		if (*anon4 < *phi1 && *anon4 < *anon6 || *anon4 >= *phi1 && *phi1 < *anon6)
		{
			uint32_t phi_in11 = phi5;
			phi7 = *anon6;
			*phi1 = *anon6;
			*anon6 = phi7;
			phi8 = phi_in11;
			phi9 = *anon6;
		}
		if (*anon4 < *phi1 && *anon4 < *anon6 || *anon4 >= *phi1 && *phi1 < *anon6 || *anon4 >= *anon6 && *anon4 < *phi1)
		{
			uint32_t phi_in12 = phi7;
			*phi1 = phi8;
			*anon4 = phi9;
			phi10 = phi_in12;
			if (*anon4 > *phi1)
			{
				phi10 = *anon6;
			}
		}
		if (phi10 != 255)
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
	while (phi10 != 255);
	return;
}
void w(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4)
{
	struct { uint8_t field0[4]; uint32_t field1; uint64_t field2; uint8_t field3[8]; uint32_t field4; uint32_t field5; uint8_t field6[48]; uint64_t field7; uint32_t field8; uint8_t field9[4]; uint64_t field10; uint64_t field11; uint32_t field12; uint8_t field13[8]; uint32_t field14; uint8_t field15[56]; uint64_t field16; } alloca1;
	uint32_t phi5;
	uint64_t phi11;
	uint64_t phi380;
	alloca1.field16 = arg0;
	uint64_t anon2 = arg2 << 32;
	uint32_t anon3 = (uint32_t)arg4;
	*(uint32_t*)((anon2 >> 30) + 6300992) = anon3;
	alloca1.field2 = (anon2 >> 32) * 12;
	alloca1.field1 = anon3 + 2;
	alloca1.field4 = anon3 + 3;
	alloca1.field5 = anon3 + 4;
	uint32_t phi4 = anon3;
	uint32_t anon6 = anon3 + 1;
	phi5 = anon6;
	uint64_t phi7 = arg4 & 0xffffffff;
	uint32_t phi8 = anon6;
	uint32_t phi9 = anon3;
	uint64_t phi10 = 0;
	uint64_t anon12 = (uint64_t)&alloca1;
	phi11 = anon12;
	do
	{
		uint64_t phi379;
		uint32_t phi381;
		uint64_t phi382;
		uint32_t phi383;
		int64_t anon14 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi11 + 48) + *(uint64_t*)(phi11 + 8) + 6301632);
		uint32_t* anon13 = (uint32_t*)((anon14 << 2) + 6300992);
		*anon13 = phi8;
		*(uint64_t*)(phi11 + 48) = phi10;
		if (phi9 < *anon13)
		{
			uint32_t phi_in376;
			uint32_t phi_in377;
			uint64_t phi378;
			*(uint64_t*)(phi11 + 16) = anon14 * 12;
			*(uint32_t*)(phi11 + 40) = (uint32_t)phi7 + 5;
			uint32_t phi15 = phi5;
			uint32_t phi16 = phi4;
			uint64_t phi17 = (__zext uint64_t)phi4;
			*(uint32_t*)(phi18 + 68) = phi5;
			uint32_t phi19 = phi4;
			uint32_t phi20 = phi5;
			uint64_t phi21 = 0;
			uint64_t phi18 = phi11;
			do
			{
				uint32_t phi_in369;
				uint64_t phi_in370;
				uint64_t phi371;
				uint32_t phi_in372;
				uint32_t phi373;
				uint32_t phi374;
				uint64_t phi375;
				uint32_t phi22 = phi15;
				uint32_t phi_in23 = phi16;
				*(uint64_t*)(phi18 + 56) = phi21;
				int64_t anon25 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi18 + 56) + *(uint64_t*)(phi18 + 16) + 6301632);
				uint32_t* anon24 = (uint32_t*)((anon25 << 2) + 6300992);
				if (phi20 < *anon24)
				{
					uint64_t phi_in356;
					uint32_t phi_in361;
					uint64_t phi368;
					*anon24 = *(uint32_t*)(phi18 + 4);
					*(uint64_t*)(phi18 + 32) = anon25 * 12;
					*(uint32_t*)(phi18 + 44) = (uint32_t)phi17 + 6;
					uint32_t phi26 = phi19;
					uint32_t phi27 = phi19;
					uint32_t phi28 = phi19;
					uint32_t phi29 = phi19;
					uint32_t phi30 = phi19;
					uint32_t phi31 = phi19;
					uint32_t phi32 = phi19;
					uint32_t phi33 = phi19;
					uint32_t phi34 = phi19;
					uint32_t phi35 = phi19;
					uint64_t phi36 = (__zext uint64_t)phi19;
					uint64_t phi37 = 0;
					uint64_t phi38 = phi18;
					do
					{
						uint32_t phi335;
						uint32_t phi354;
						uint32_t phi358;
						uint32_t phi359;
						uint32_t phi360;
						uint64_t phi_in362;
						uint32_t phi363;
						uint32_t phi364;
						uint32_t phi365;
						uint32_t phi366;
						uint64_t phi367;
						*(uint64_t*)(phi38 + 72) = phi37;
						int64_t anon40 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi38 + 72) + *(uint64_t*)(phi38 + 32) + 6301632);
						uint32_t* anon39 = (uint32_t*)((anon40 << 2) + 6300992);
						if (*(uint32_t*)(phi38 + 4) < *anon39)
						{
							uint32_t phi_in338;
							uint32_t phi_in345;
							uint32_t phi_in347;
							uint32_t phi_in349;
							uint32_t phi_in352;
							uint32_t phi_in353;
							uint32_t phi_in355;
							uint64_t phi_in357;
							*anon39 = *(uint32_t*)(phi38 + 24);
							*(uint32_t*)(phi38 + 64) = (uint32_t)phi36 + 7;
							uint32_t phi41 = phi26;
							uint32_t phi42 = phi27;
							uint32_t phi43 = phi28;
							uint32_t phi44 = phi29;
							uint32_t phi45 = phi30;
							uint32_t phi46 = phi31;
							uint32_t phi47 = phi32;
							uint32_t phi48 = phi33;
							uint32_t phi49 = phi34;
							uint32_t phi50 = phi35;
							uint64_t phi51 = phi38;
							uint64_t phi52 = 0;
							uint64_t phi53 = anon40 * 12;
							uint64_t phi54 = phi36;
							do
							{
								uint32_t phi334;
								uint32_t phi336;
								uint32_t phi344;
								uint64_t phi346;
								uint32_t phi348;
								uint64_t phi350;
								uint64_t phi351;
								int64_t anon56 = (__sext int64_t)*(uint32_t*)(phi52 + phi53 + 6301632);
								uint32_t* anon55 = (uint32_t*)((anon56 << 2) + 6300992);
								if (*(uint32_t*)(phi51 + 24) < *anon55)
								{
									uint32_t phi_in60;
									uint64_t phi100;
									*anon55 = *(uint32_t*)(phi51 + 28);
									uint32_t phi57 = phi41;
									uint32_t phi_in58 = phi42;
									uint32_t phi_in59 = phi43;
									uint32_t anon61 = (uint32_t)phi54 + 8;
									phi_in60 = anon61;
									uint32_t phi62 = phi44;
									uint32_t phi_in63 = phi45;
									uint32_t phi_in64 = anon61;
									uint32_t phi65 = phi46;
									uint32_t phi_in66 = phi47;
									uint32_t phi_in67 = anon61;
									uint32_t phi68 = anon61;
									uint32_t phi69 = anon61;
									uint32_t phi_in70 = phi48;
									uint32_t phi71 = anon61;
									uint32_t phi72 = anon61;
									uint32_t phi73 = phi49;
									uint32_t phi_in74 = anon61;
									uint32_t phi_in75 = anon61;
									uint32_t phi76 = phi50;
									uint64_t phi77 = phi53;
									uint32_t phi78 = anon61;
									uint32_t phi79 = anon61;
									uint32_t phi_in80 = anon61;
									uint64_t phi_in81 = phi51;
									uint64_t phi82 = 0;
									uint64_t phi83 = anon56 * 12;
									uint64_t phi84 = phi54;
									do
									{
										uint32_t phi_in85 = phi57;
										uint32_t phi_in86 = phi_in58;
										uint32_t phi87 = phi62;
										uint32_t phi_in88 = phi_in63;
										uint32_t phi_in89 = phi65;
										uint32_t phi90 = phi_in66;
										uint32_t phi_in91 = phi68;
										uint32_t phi_in92 = phi69;
										uint32_t phi_in93 = phi72;
										uint32_t phi94 = phi73;
										uint32_t phi95 = phi76;
										uint64_t phi96 = phi77;
										uint32_t phi97 = phi78;
										uint32_t phi98 = phi79;
										uint32_t phi_in99 = phi_in80;
										phi100 = phi82;
										uint64_t phi_in101 = phi83;
										uint64_t phi_in102 = phi84;
										uint32_t phi103 = phi_in85;
										uint32_t phi104 = phi_in86;
										uint32_t phi_in105 = phi_in59;
										uint32_t phi_in106 = phi_in60;
										uint32_t phi107 = phi_in88;
										uint32_t phi108 = phi_in64;
										phi65 = phi_in89;
										uint64_t phi109 = phi_in101;
										uint32_t phi110 = phi_in67;
										uint32_t phi111 = phi_in91;
										uint32_t phi112 = phi_in92;
										uint32_t phi113 = phi_in70;
										uint32_t phi114 = phi71;
										phi72 = phi_in93;
										uint32_t phi_in115 = phi94;
										uint32_t phi_in116 = phi_in74;
										uint32_t phi117 = phi_in75;
										uint32_t phi118 = phi95;
										uint64_t phi119 = phi96;
										phi78 = phi97;
										phi79 = phi98;
										phi_in80 = phi_in99;
										uint64_t phi_in120 = phi_in81;
										uint64_t phi121 = phi_in102;
										int64_t anon123 = (__sext int64_t)*(uint32_t*)(phi100 + phi_in101 + 6301632);
										uint32_t* anon122 = (uint32_t*)((anon123 << 2) + 6300992);
										if (*(uint32_t*)(phi_in81 + 28) < *anon122)
										{
											*anon122 = *(uint32_t*)(phi_in81 + 40);
											*(uint32_t*)(phi_in81 + 120) = (uint32_t)phi_in102 + 9;
											uint64_t phi124 = 0;
											phi57 = phi_in85;
											uint32_t phi_in125 = phi_in86;
											uint32_t phi126 = phi_in59;
											uint32_t phi_in127 = phi_in60;
											uint32_t phi_in128 = phi87;
											uint32_t phi_in129 = phi_in88;
											uint32_t phi130 = phi_in64;
											uint32_t phi131 = phi_in89;
											phi_in66 = phi90;
											uint32_t phi132 = phi_in67;
											uint32_t phi133 = phi_in91;
											uint32_t phi134 = phi_in70;
											uint32_t phi_in135 = phi_in93;
											uint32_t phi_in136 = phi_in74;
											uint32_t phi_in137 = phi_in75;
											uint64_t phi_in138 = phi100;
											uint64_t phi139 = phi_in101;
											uint32_t phi140 = phi_in99;
											uint64_t phi_in141 = phi_in81;
											uint64_t phi142 = phi_in102 & 0xffffffff;
											do
											{
												uint64_t phi_in147;
												uint32_t phi_in143 = phi57;
												phi_in58 = phi_in125;
												uint32_t phi_in144 = phi126;
												uint32_t phi145 = phi_in128;
												uint32_t phi_in146 = phi131;
												*(uint32_t*)(phi_in147 + 96) = phi_in66;
												uint32_t phi_in148 = phi132;
												uint32_t phi_in149 = phi133;
												uint32_t phi_in150 = phi_in92;
												uint32_t phi151 = phi134;
												uint32_t phi_in152 = phi71;
												uint32_t phi153 = phi94;
												uint32_t phi_in154 = phi_in136;
												uint64_t phi155 = phi_in138;
												uint32_t phi156 = phi95;
												uint64_t phi157 = phi96;
												uint64_t phi_in158 = phi139;
												uint32_t phi_in159 = phi97;
												uint32_t phi_in160 = phi98;
												uint32_t phi_in161 = phi140;
												uint64_t phi_in162 = phi142;
												uint32_t phi163 = phi_in143;
												phi126 = phi_in144;
												uint32_t phi164 = phi_in129;
												uint32_t phi165 = phi130;
												uint32_t phi166 = phi_in146;
												uint32_t phi167 = *(uint32_t*)(phi_in147 + 96);
												phi132 = phi_in148;
												uint32_t phi168 = phi_in149;
												uint32_t phi169 = phi151;
												phi114 = phi_in152;
												uint32_t phi170 = phi153;
												phi_in136 = phi_in154;
												uint32_t phi171 = phi_in137;
												uint64_t phi172 = phi157;
												uint64_t phi173 = phi_in158;
												uint32_t phi174 = phi_in159;
												uint32_t phi175 = phi_in160;
												uint32_t phi176 = phi_in161;
												uint64_t phi177 = phi_in162;
												int64_t anon179 = (__sext int64_t)*(uint32_t*)(phi124 + anon123 * 12 + 6301632);
												uint32_t* anon178 = (uint32_t*)((anon179 << 2) + 6300992);
												if (*(uint32_t*)(phi_in141 + 40) < *anon178)
												{
													uint64_t phi195;
													*anon178 = *(uint32_t*)(phi_in141 + 44);
													uint64_t phi180 = 0;
													uint32_t phi_in181 = phi_in143;
													uint32_t phi_in182 = phi_in58;
													uint32_t phi_in183 = phi_in144;
													uint32_t phi184 = phi_in127;
													uint32_t phi185 = phi145;
													uint32_t phi186 = phi_in129;
													uint32_t phi187 = phi_in146;
													uint32_t phi_in188 = phi_in148;
													uint32_t phi_in189 = phi_in149;
													uint32_t phi_in190 = phi_in150;
													uint32_t phi_in191 = phi_in152;
													uint32_t phi192 = phi_in135;
													uint32_t phi_in193 = phi_in154;
													uint32_t phi194 = phi_in137;
													*(uint64_t*)(phi195 + 88) = phi155;
													uint32_t phi196 = phi156;
													uint32_t phi_in197 = phi_in159;
													uint32_t phi198 = phi_in160;
													uint32_t phi199 = phi_in161;
													uint64_t phi200 = phi_in141;
													do
													{
														uint32_t phi_in201 = phi_in181;
														uint32_t phi202 = phi_in182;
														uint32_t phi_in203 = phi186;
														uint32_t phi204 = phi130;
														uint32_t phi205 = phi187;
														*(uint32_t*)(phi_in147 + 124) = phi_in188;
														uint32_t phi206 = phi_in189;
														int64_t anon210 = (__sext int64_t)*(uint32_t*)(phi180 + anon179 * 12 + 6301632);
														int64_t anon209 = anon210 * 12;
														int64_t anon208 = (__sext int64_t)*(uint32_t*)(anon209 + 6301636);
														uint32_t* anon207 = (uint32_t*)((anon208 << 2) + 6300992);
														*anon207 = phi_in190;
														uint32_t phi211 = phi151;
														uint32_t phi_in212 = phi_in191;
														uint32_t phi_in213 = phi192;
														uint32_t phi_in214 = phi153;
														uint32_t phi215 = phi194;
														uint32_t phi216 = phi196;
														uint64_t phi217 = phi157;
														*(uint64_t*)(phi_in147 + 112) = phi_in158;
														uint32_t phi_in218 = phi_in197;
														uint32_t phi_in219 = phi198;
														uint32_t phi_in220 = phi199;
														phi_in147 = phi200;
														uint64_t phi_in221 = phi_in162;
														uint32_t phi222 = phi_in201;
														phi_in182 = phi202;
														uint32_t phi223 = phi_in183;
														uint32_t phi_in224 = phi184;
														uint32_t phi225 = phi185;
														uint32_t phi226 = phi_in203;
														phi130 = phi204;
														phi_in146 = phi205;
														uint32_t phi_in227 = *(uint32_t*)(phi_in147 + 96);
														uint32_t phi_in228 = *(uint32_t*)(phi_in147 + 124);
														uint32_t phi_in229 = *anon207;
														uint32_t phi_in230 = phi211;
														phi_in191 = phi_in212;
														uint32_t phi231 = phi_in213;
														uint32_t phi_in232 = phi_in214;
														uint32_t phi233 = phi_in193;
														phi_in137 = phi215;
														uint64_t phi_in234 = *(uint64_t*)(phi195 + 88);
														phi196 = phi216;
														uint64_t phi235 = phi217;
														uint64_t phi_in236 = *(uint64_t*)(phi_in147 + 112);
														uint32_t phi237 = phi_in218;
														phi198 = phi_in219;
														phi199 = phi_in220;
														uint64_t phi238 = phi_in147;
														uint64_t phi239 = phi_in221;
														uint32_t* anon240 = (uint32_t*)((anon210 << 2) + 6300992);
														if (*(uint32_t*)(phi_in147 + 44) < *anon240)
														{
															*anon240 = *(uint32_t*)(phi_in147 + 64);
															uint32_t phi241 = phi_in201;
															uint32_t phi242 = phi202;
															uint32_t phi243 = phi_in183;
															phi_in224 = phi184;
															phi200 = phi_in147;
															uint32_t phi244 = phi185;
															uint32_t phi245 = phi_in203;
															uint32_t phi_in246 = phi205;
															uint32_t phi247 = *(uint32_t*)(phi_in147 + 96);
															uint32_t phi248 = *(uint32_t*)(phi_in147 + 124);
															uint32_t phi249 = phi206;
															uint32_t phi250 = *anon207;
															uint32_t phi251 = phi211;
															uint32_t phi252 = phi_in212;
															uint32_t phi253 = phi_in213;
															uint32_t phi254 = phi_in193;
															*(uint64_t*)(phi255 + 80) = *(uint64_t*)(phi195 + 88);
															uint32_t phi_in256 = phi216;
															uint64_t phi257 = phi217;
															uint64_t phi258 = *(uint64_t*)(phi_in147 + 112);
															uint32_t phi259 = phi_in218;
															uint32_t phi260 = phi_in219;
															uint32_t phi_in261 = phi_in220;
															uint64_t phi262 = phi_in221;
															if (*(uint32_t*)(phi_in147 + 64) < *anon207)
															{
																uint32_t phi263 = phi_in183;
																phi186 = phi_in203;
																phi195 = phi_in147;
																uint32_t phi264 = phi204;
																uint64_t phi265 = anon208;
																uint32_t phi266 = *(uint32_t*)(phi_in147 + 96);
																uint32_t phi267 = phi_in214;
																*(uint64_t*)(phi200 + 104) = *(uint64_t*)(phi_in147 + 112);
																uint64_t phi_in268 = phi_in221;
																if (phi206 < *anon207)
																{
																	*(uint64_t*)(phi_in147 + 104) = phi217;
																	*(uint64_t*)(phi_in147 + 88) = *(uint64_t*)(phi195 + 88);
																	*(uint64_t*)(phi_in147 + 80) = anon208;
																	uint64_t anon269 = (__zext uint64_t)*anon207;
																	w(4197873, anon12, (__sext int64_t)*anon207, anon269, anon269);
																	phi_in201 = *(uint32_t*)(arg1 - 96);
																	phi202 = *(uint32_t*)(arg1 - 96);
																	phi263 = *(uint32_t*)(arg1 - 96);
																	phi184 = *(uint32_t*)(arg1 - 68);
																	phi185 = *(uint32_t*)(arg1 - 96);
																	phi186 = *(uint32_t*)(arg1 - 96);
																	phi195 = anon12;
																	phi264 = *(uint32_t*)(arg1 - 68);
																	phi205 = *(uint32_t*)(arg1 - 96);
																	phi265 = *(uint64_t*)(arg1 - 112);
																	phi266 = *(uint32_t*)(arg1 - 96);
																	phi211 = *(uint32_t*)(arg1 - 96);
																	phi267 = *(uint32_t*)(arg1 - 96);
																	*(uint64_t*)(phi195 + 88) = *(uint64_t*)(arg1 - 104);
																	phi216 = *(uint32_t*)(arg1 - 96);
																	phi217 = *(uint64_t*)(arg1 - 88);
																	*(uint64_t*)(phi200 + 104) = *(uint64_t*)(arg1 - 80);
																	phi_in268 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
																}
																uint32_t phi_in270 = phi202;
																uint32_t phi271 = phi263;
																uint32_t phi_in272 = phi184;
																uint32_t phi_in273 = phi185;
																*(uint32_t*)(phi195 + 96) = phi186;
																phi_in191 = phi264;
																uint32_t phi274 = phi205;
																*(uint64_t*)(phi195 + 80) = phi265;
																uint32_t phi_in275 = phi266;
																uint32_t phi_in276 = phi211;
																uint32_t phi277 = phi267;
																uint64_t phi_in278 = *(uint64_t*)(phi195 + 88);
																uint32_t phi_in279 = phi216;
																*(uint64_t*)(phi195 + 104) = phi217;
																uint32_t phi280 = phi_in201;
																uint32_t phi281 = phi_in270;
																*(uint32_t*)(phi200 + 88) = phi_in273;
																phi245 = *(uint32_t*)(phi195 + 96);
																uint64_t phi282 = *(uint64_t*)(phi195 + 80);
																uint32_t phi283 = phi_in275;
																uint32_t phi284 = phi_in279;
																uint64_t phi285 = *(uint64_t*)(phi195 + 104);
																uint64_t phi286 = phi_in268;
																int64_t anon287 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi195 + 80) * 12 + 6301636);
																if (phi_in191 < *(uint32_t*)((anon287 << 2) + 6300992))
																{
																	*(uint32_t*)(phi195 + 124) = phi_in191;
																	*(uint64_t*)(phi195 + 112) = *(uint64_t*)(phi200 + 104);
																	*(uint64_t*)(phi195 + 88) = phi_in278;
																	uint64_t anon288 = (__zext uint64_t)*(uint32_t*)(phi195 + 120);
																	w(4197793, anon12, anon287, anon288, anon288);
																	phi280 = *(uint32_t*)(arg1 - 96);
																	phi281 = *(uint32_t*)(arg1 - 96);
																	phi271 = *(uint32_t*)(arg1 - 96);
																	phi_in272 = alloca1.field14;
																	*(uint32_t*)(phi200 + 88) = *(uint32_t*)(arg1 - 96);
																	phi195 = anon12;
																	phi245 = *(uint32_t*)(arg1 - 96);
																	phi_in191 = alloca1.field14;
																	phi274 = *(uint32_t*)(arg1 - 96);
																	phi282 = *(uint64_t*)(arg1 - 112);
																	phi283 = *(uint32_t*)(arg1 - 96);
																	phi_in276 = *(uint32_t*)(arg1 - 96);
																	phi277 = *(uint32_t*)(arg1 - 96);
																	phi_in278 = *(uint64_t*)(arg1 - 104);
																	phi284 = *(uint32_t*)(arg1 - 96);
																	phi285 = *(uint64_t*)(arg1 - 88);
																	*(uint64_t*)(phi200 + 104) = *(uint64_t*)(arg1 - 80);
																	phi286 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
																}
																phi241 = phi280;
																phi242 = phi281;
																phi243 = phi271;
																uint32_t phi_in289 = *(uint32_t*)(phi200 + 88);
																phi200 = phi195;
																phi215 = phi_in191;
																uint32_t phi_in290 = phi274;
																uint32_t phi_in291 = phi283;
																phi_in214 = phi277;
																*(uint64_t*)(phi200 + 80) = phi_in278;
																uint32_t phi_in292 = phi284;
																uint64_t phi_in293 = phi285;
																phi_in158 = *(uint64_t*)(phi200 + 104);
																uint64_t phi_in294 = phi286;
																phi_in224 = phi_in272;
																phi244 = phi_in289;
																phi204 = phi215;
																phi_in246 = phi_in290;
																phi247 = phi_in291;
																phi248 = phi215;
																phi249 = phi215;
																phi250 = phi215;
																phi251 = phi_in276;
																phi252 = phi215;
																phi253 = phi215;
																phi254 = phi215;
																*(uint64_t*)(phi255 + 80) = *(uint64_t*)(phi200 + 80);
																phi_in256 = phi_in292;
																phi257 = phi_in293;
																phi258 = phi_in158;
																phi259 = phi215;
																phi260 = phi215;
																phi_in261 = phi215;
																phi262 = phi_in294;
																int64_t anon295 = (__sext int64_t)*(uint32_t*)(phi282 * 12 + 6301640);
																if (phi215 < *(uint32_t*)((anon295 << 2) + 6300992))
																{
																	*(uint32_t*)(phi200 + 112) = phi215;
																	*(uint64_t*)(phi200 + 104) = phi_in158;
																	*(uint64_t*)(phi200 + 96) = phi_in293;
																	*(uint32_t*)(phi200 + 88) = phi_in289;
																	uint64_t anon296 = (__zext uint64_t)*(uint32_t*)(phi200 + 120);
																	w(4197395, anon12, anon295, anon296, anon296);
																	phi241 = *(uint32_t*)(arg1 - 104);
																	phi242 = *(uint32_t*)(arg1 - 104);
																	phi243 = *(uint32_t*)(arg1 - 104);
																	phi_in224 = *(uint32_t*)(arg1 - 80);
																	phi200 = anon12;
																	phi244 = *(uint32_t*)(arg1 - 104);
																	phi245 = *(uint32_t*)(arg1 - 104);
																	phi204 = *(uint32_t*)(arg1 - 80);
																	phi_in246 = *(uint32_t*)(arg1 - 104);
																	phi247 = *(uint32_t*)(arg1 - 104);
																	phi248 = *(uint32_t*)(arg1 - 80);
																	phi249 = *(uint32_t*)(arg1 - 80);
																	phi250 = *(uint32_t*)(arg1 - 80);
																	phi251 = *(uint32_t*)(arg1 - 104);
																	phi252 = *(uint32_t*)(arg1 - 80);
																	phi253 = *(uint32_t*)(arg1 - 80);
																	phi_in214 = *(uint32_t*)(arg1 - 104);
																	phi254 = *(uint32_t*)(arg1 - 80);
																	phi215 = *(uint32_t*)(arg1 - 80);
																	*(uint64_t*)(phi255 + 80) = *(uint64_t*)(arg1 - 112);
																	phi_in256 = *(uint32_t*)(arg1 - 104);
																	phi257 = *(uint64_t*)(arg1 - 96);
																	phi258 = *(uint64_t*)(arg1 - 88);
																	phi259 = *(uint32_t*)(arg1 - 80);
																	phi260 = *(uint32_t*)(arg1 - 80);
																	phi_in261 = *(uint32_t*)(arg1 - 80);
																	phi262 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
																}
															}
															uint32_t phi297 = phi241;
															*(uint32_t*)(phi255 + 88) = phi242;
															uint32_t phi_in298 = phi243;
															*(uint32_t*)(phi255 + 112) = phi_in224;
															uint64_t phi255 = phi200;
															uint32_t phi_in299 = phi244;
															uint32_t phi_in300 = phi245;
															uint32_t phi_in301 = phi204;
															uint32_t phi302 = phi247;
															phi_in228 = phi248;
															phi206 = phi249;
															phi_in190 = phi250;
															phi_in230 = phi251;
															phi_in212 = phi252;
															phi231 = phi253;
															uint32_t phi_in303 = phi_in214;
															uint32_t phi_in304 = phi254;
															uint32_t phi_in305 = phi215;
															uint64_t phi_in306 = *(uint64_t*)(phi255 + 80);
															uint32_t phi307 = phi_in256;
															*(uint64_t*)(phi255 + 96) = phi257;
															*(uint64_t*)(phi255 + 104) = phi258;
															phi237 = phi259;
															phi198 = phi260;
															uint64_t phi_in308 = phi262;
															phi222 = phi297;
															phi_in182 = *(uint32_t*)(phi255 + 88);
															phi223 = phi_in298;
															phi_in224 = *(uint32_t*)(phi255 + 112);
															phi225 = phi_in299;
															phi226 = phi_in300;
															phi130 = phi_in301;
															phi_in146 = phi_in246;
															phi_in227 = phi302;
															phi_in229 = phi_in190;
															phi_in191 = phi_in212;
															phi_in232 = phi_in303;
															phi233 = phi_in304;
															phi_in137 = phi_in305;
															phi_in234 = phi_in306;
															phi196 = phi307;
															phi235 = *(uint64_t*)(phi255 + 96);
															phi_in236 = *(uint64_t*)(phi255 + 104);
															phi199 = phi_in261;
															phi238 = phi255;
															phi239 = phi_in308;
															int64_t anon310 = (__sext int64_t)*(uint32_t*)(anon209 + 6301640);
															uint32_t* anon309 = (uint32_t*)((anon310 << 2) + 6300992);
															if (*(uint32_t*)(phi255 + 64) < *anon309)
															{
																*anon309 = *(uint32_t*)(phi255 + 112);
																uint32_t phi_in311 = *(uint32_t*)(phi255 + 88);
																phi206 = *(uint32_t*)(phi255 + 112);
																uint32_t phi_in312 = phi_in299;
																phi_in203 = phi_in300;
																uint32_t phi313 = phi_in246;
																uint32_t phi314 = phi_in230;
																uint32_t phi315 = phi_in303;
																uint64_t phi_in316 = phi_in306;
																phi257 = *(uint64_t*)(phi255 + 96);
																uint64_t phi_in317 = *(uint64_t*)(phi255 + 104);
																uint64_t phi318 = phi_in308;
																int64_t anon320 = anon310 * 12;
																int64_t anon319 = (__sext int64_t)*(uint32_t*)(anon320 + 6301636);
																if (*(uint32_t*)(phi255 + 112) < *(uint32_t*)((anon319 << 2) + 6300992))
																{
																	*(uint64_t*)(phi255 + 80) = phi_in306;
																	uint64_t anon321 = (__zext uint64_t)*(uint32_t*)(phi255 + 120);
																	w(4197948, anon12, anon319, anon321, anon321);
																	phi297 = *(uint32_t*)(arg1 - 104);
																	phi_in311 = *(uint32_t*)(arg1 - 104);
																	phi_in298 = *(uint32_t*)(arg1 - 104);
																	phi206 = *(uint32_t*)(arg1 - 80);
																	phi_in312 = *(uint32_t*)(arg1 - 104);
																	phi_in203 = *(uint32_t*)(arg1 - 104);
																	phi313 = *(uint32_t*)(arg1 - 104);
																	phi302 = *(uint32_t*)(arg1 - 104);
																	phi314 = *(uint32_t*)(arg1 - 104);
																	phi315 = *(uint32_t*)(arg1 - 104);
																	phi_in316 = *(uint64_t*)(arg1 - 112);
																	phi307 = *(uint32_t*)(arg1 - 104);
																	phi257 = *(uint64_t*)(arg1 - 96);
																	phi_in317 = *(uint64_t*)(arg1 - 88);
																	phi255 = anon12;
																	phi318 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
																}
																*(uint32_t*)(phi238 + 88) = phi297;
																phi_in228 = phi206;
																phi_in246 = phi313;
																uint32_t phi_in322 = phi302;
																uint32_t phi_in323 = phi314;
																phi_in303 = phi315;
																phi196 = phi307;
																*(uint64_t*)(phi238 + 96) = phi257;
																*(uint64_t*)(phi238 + 104) = phi_in317;
																phi238 = phi255;
																phi239 = phi318;
																phi222 = *(uint32_t*)(phi238 + 88);
																phi_in182 = phi_in311;
																phi223 = phi_in298;
																phi_in224 = phi_in228;
																phi225 = phi_in312;
																phi226 = phi_in203;
																phi130 = phi_in228;
																phi_in146 = phi_in246;
																phi_in227 = phi_in322;
																phi206 = phi_in228;
																phi_in229 = phi_in228;
																phi_in230 = phi_in323;
																phi_in191 = phi_in228;
																phi231 = phi_in228;
																phi_in232 = phi_in303;
																phi233 = phi_in228;
																phi_in137 = phi_in228;
																phi_in234 = phi_in316;
																phi235 = *(uint64_t*)(phi238 + 96);
																phi_in236 = *(uint64_t*)(phi238 + 104);
																phi237 = phi_in228;
																phi198 = phi_in228;
																phi199 = phi_in228;
																int64_t anon324 = (__sext int64_t)*(uint32_t*)(anon320 + 6301640);
																if (phi_in228 < *(uint32_t*)((anon324 << 2) + 6300992))
																{
																	*(uint32_t*)(phi238 + 112) = phi_in228;
																	*(uint64_t*)(phi238 + 80) = phi_in316;
																	uint64_t anon325 = (__zext uint64_t)*(uint32_t*)(phi238 + 120);
																	w(4197231, anon12, anon324, anon325, anon325);
																	phi222 = alloca1.field8;
																	phi_in182 = alloca1.field8;
																	phi223 = alloca1.field8;
																	phi_in224 = alloca1.field12;
																	phi225 = alloca1.field8;
																	phi226 = alloca1.field8;
																	phi130 = alloca1.field12;
																	phi_in146 = alloca1.field8;
																	phi_in227 = alloca1.field8;
																	phi_in228 = alloca1.field12;
																	phi206 = alloca1.field12;
																	phi_in229 = alloca1.field12;
																	phi_in230 = alloca1.field8;
																	phi_in191 = alloca1.field12;
																	phi231 = alloca1.field12;
																	phi_in232 = alloca1.field8;
																	phi233 = alloca1.field12;
																	phi_in137 = alloca1.field12;
																	phi_in234 = alloca1.field7;
																	phi196 = alloca1.field8;
																	phi235 = alloca1.field10;
																	phi_in236 = alloca1.field11;
																	phi237 = alloca1.field12;
																	phi198 = alloca1.field12;
																	phi199 = alloca1.field12;
																	phi238 = anon12;
																	phi239 = (__zext uint64_t)alloca1.field8;
																}
															}
														}
														phi163 = phi222;
														uint32_t phi_in326 = phi223;
														phi145 = phi225;
														phi_in129 = phi226;
														phi168 = phi206;
														uint32_t phi_in327 = phi231;
														phi_in154 = phi233;
														uint64_t phi_in328 = phi235;
														phi174 = phi237;
														phi175 = phi198;
														uint64_t phi_in329 = phi238;
														uint64_t phi_in330 = phi239;
														phi_in58 = phi_in182;
														phi126 = phi_in326;
														phi_in127 = phi_in224;
														phi164 = phi_in129;
														phi165 = phi130;
														phi166 = phi_in146;
														phi167 = phi_in227;
														phi132 = phi_in228;
														phi_in150 = phi_in229;
														phi169 = phi_in230;
														phi114 = phi_in191;
														phi_in135 = phi_in327;
														phi170 = phi_in232;
														phi_in136 = phi_in154;
														phi171 = phi_in137;
														phi155 = phi_in234;
														phi156 = phi196;
														phi172 = phi_in328;
														phi173 = phi_in236;
														phi176 = phi199;
														phi_in141 = phi_in329;
														phi177 = phi_in330;
														phi180 = phi180 + 4;
														phi_in181 = phi163;
														phi_in183 = phi_in326;
														phi184 = phi_in224;
														phi185 = phi145;
														phi186 = phi_in129;
														phi187 = phi_in146;
														*(uint32_t*)(phi_in147 + 96) = phi_in227;
														phi_in188 = phi_in228;
														phi_in189 = phi168;
														phi_in190 = phi_in229;
														phi151 = phi_in230;
														phi192 = phi_in327;
														phi153 = phi_in232;
														phi_in193 = phi_in154;
														phi194 = phi_in137;
														*(uint64_t*)(phi195 + 88) = phi_in234;
														phi157 = phi_in328;
														phi_in158 = phi_in236;
														phi_in197 = phi174;
														phi198 = phi175;
														phi200 = phi_in329;
														phi_in162 = phi_in330;
													}
													while (phi180 != 8);
												}
												phi103 = phi163;
												phi87 = phi145;
												phi107 = phi164;
												phi_in64 = phi165;
												phi65 = phi166;
												phi90 = phi167;
												phi111 = phi168;
												phi113 = phi169;
												uint32_t phi_in331 = phi170;
												phi_in75 = phi171;
												phi100 = phi155;
												uint32_t phi_in332 = phi156;
												phi119 = phi172;
												phi109 = phi173;
												phi78 = phi174;
												uint32_t phi_in333 = phi175;
												phi_in99 = phi176;
												phi121 = phi177;
												phi104 = phi_in58;
												phi_in105 = phi126;
												phi_in106 = phi_in127;
												phi108 = phi_in64;
												phi110 = phi132;
												phi112 = phi_in150;
												phi72 = phi_in135;
												phi_in115 = phi_in331;
												phi_in116 = phi_in136;
												phi117 = phi_in75;
												phi118 = phi_in332;
												phi79 = phi_in333;
												phi_in80 = phi_in99;
												phi_in120 = phi_in141;
												phi124 = phi124 + 4;
												phi57 = phi103;
												phi_in125 = phi_in58;
												phi_in128 = phi87;
												phi_in129 = phi107;
												phi130 = phi_in64;
												phi131 = phi65;
												phi_in66 = phi90;
												phi133 = phi111;
												phi_in92 = phi_in150;
												phi134 = phi113;
												phi71 = phi114;
												phi94 = phi_in331;
												phi_in137 = phi_in75;
												phi_in138 = phi100;
												phi95 = phi_in332;
												phi96 = phi119;
												phi139 = phi109;
												phi97 = phi78;
												phi98 = phi_in333;
												phi140 = phi_in99;
												phi142 = phi121;
											}
											while (phi124 != 8);
										}
										phi334 = phi103;
										phi335 = phi104;
										phi336 = phi87;
										uint32_t phi_in337 = phi107;
										phi_in338 = phi65;
										uint32_t phi_in339 = phi90;
										uint32_t phi_in340 = phi113;
										uint32_t phi_in341 = phi118;
										uint64_t phi_in342 = phi119;
										uint64_t phi_in343 = phi121;
										phi344 = phi_in105;
										phi_in345 = phi_in337;
										phi346 = phi_in342;
										phi_in347 = phi_in339;
										phi48 = phi_in340;
										phi348 = phi_in115;
										phi_in349 = phi_in341;
										phi350 = phi_in120;
										phi351 = phi_in343;
										if (phi100 != 8)
										{
											phi57 = phi334;
											phi_in58 = phi335;
											phi_in59 = phi_in105;
											phi_in60 = phi_in106;
											phi62 = phi336;
											phi_in63 = phi_in337;
											phi_in64 = phi108;
											phi65 = phi_in338;
											phi_in66 = phi_in339;
											phi_in67 = phi110;
											phi68 = phi111;
											phi69 = phi112;
											phi_in70 = phi_in340;
											phi71 = phi114;
											phi73 = phi_in115;
											phi_in74 = phi_in116;
											phi_in75 = phi117;
											phi76 = phi_in341;
											phi77 = phi_in342;
											phi_in81 = phi_in120;
											phi82 = phi100 + 4;
											phi83 = phi109;
											phi84 = phi_in343;
										}
									}
									while (phi100 != 8);
								}
								else 
								{
									phi334 = phi41;
									phi335 = phi42;
									phi344 = phi43;
									phi336 = phi44;
									phi_in345 = phi45;
									phi_in338 = phi46;
									phi346 = phi53;
									phi_in347 = phi47;
									phi48 = phi48;
									phi348 = phi49;
									phi_in349 = phi50;
									phi350 = phi51;
									phi351 = phi54 & 0xffffffff;
								}
								phi_in352 = phi334;
								phi_in353 = phi344;
								phi354 = phi336;
								phi_in355 = phi348;
								phi_in356 = phi350;
								phi_in357 = phi351;
								if (phi52 != 8)
								{
									phi41 = phi_in352;
									phi42 = phi335;
									phi43 = phi_in353;
									phi44 = phi354;
									phi45 = phi_in345;
									phi46 = phi_in338;
									phi47 = phi_in347;
									phi49 = phi_in355;
									phi50 = phi_in349;
									phi51 = phi_in356;
									phi52 = phi52 + 4;
									phi53 = phi346;
									phi54 = phi_in357;
								}
							}
							while (phi52 != 8);
							phi358 = phi_in352;
							phi359 = phi_in353;
							phi360 = phi_in345;
							phi_in361 = phi_in338;
							phi_in362 = *(uint64_t*)(phi_in356 + 72);
							phi363 = phi_in347;
							phi364 = phi48;
							phi365 = phi_in355;
							phi366 = phi_in349;
							phi367 = phi_in357;
						}
						else 
						{
							phi358 = phi26;
							phi335 = phi27;
							phi359 = phi28;
							phi354 = phi29;
							phi360 = phi30;
							phi_in361 = phi31;
							phi_in362 = *(uint64_t*)(phi38 + 72);
							phi363 = phi32;
							phi364 = phi33;
							phi365 = phi34;
							phi366 = phi35;
							phi367 = phi36 & 0xffffffff;
							phi_in356 = phi38;
						}
						phi368 = phi_in362;
						if (phi368 != 8)
						{
							phi26 = phi358;
							phi27 = phi335;
							phi28 = phi359;
							phi29 = phi354;
							phi30 = phi360;
							phi31 = phi_in361;
							phi32 = phi363;
							phi33 = phi364;
							phi34 = phi365;
							phi35 = phi366;
							phi36 = phi367;
							phi37 = phi368 + 4;
							phi38 = phi_in356;
						}
					}
					while (phi368 != 8);
					phi22 = *(uint32_t*)(phi_in356 + 68);
					phi_in369 = phi_in361;
					phi_in370 = *(uint64_t*)(phi_in356 + 56);
					phi371 = (__zext uint64_t)phi_in361;
					phi_in372 = *(uint32_t*)(phi_in356 + 68);
					phi373 = phi_in361;
					phi374 = *(uint32_t*)(phi_in356 + 68);
					phi375 = phi_in356;
				}
				else 
				{
					phi_in369 = phi_in23;
					phi_in370 = *(uint64_t*)(phi18 + 56);
					phi371 = phi17 & 0xffffffff;
					phi_in372 = *(uint32_t*)(phi18 + 68);
					phi373 = phi19;
					phi374 = phi20;
					phi375 = phi18;
				}
				phi_in376 = phi22;
				phi_in377 = phi_in369;
				phi378 = phi_in370;
				phi379 = phi375;
				if (phi378 != 8)
				{
					phi15 = phi_in376;
					phi16 = phi_in377;
					phi17 = phi371;
					*(uint32_t*)(phi18 + 68) = phi_in372;
					phi19 = phi373;
					phi20 = phi374;
					phi21 = phi378 + 4;
					phi18 = phi379;
				}
			}
			while (phi378 != 8);
			phi380 = *(uint64_t*)(phi379 + 48);
			phi4 = phi_in377;
			phi381 = phi_in376;
			phi382 = (__zext uint64_t)phi_in377;
			phi383 = phi_in376;
			phi9 = phi_in377;
		}
		else 
		{
			phi380 = *(uint64_t*)(phi11 + 48);
			phi4 = phi4;
			phi381 = phi5;
			phi382 = phi7 & 0xffffffff;
			phi383 = *anon13;
			phi9 = phi9;
			phi379 = phi11;
		}
		if (phi380 != 8)
		{
			phi5 = phi381;
			phi7 = phi382;
			phi8 = phi383;
			phi10 = phi380 + 4;
			phi11 = phi379;
		}
	}
	while (phi380 != 8);
	return;
}
void t(uint64_t arg0)
{
	struct { uint8_t field0[24]; uint64_t field1; } alloca1;
	uint32_t anon11;
	uint32_t anon19;
	alloca1.field1 = arg0;
	uint64_t phi2 = 4;
	do
	{
		uint32_t* anon4;
		uint64_t anon5;
		uint32_t* anon10;
		do
		{
			do
			{
				uint64_t anon3 = random();
				phi2 = phi2;
				uint64_t anon6 = anon3 << 32;
				anon5 = anon3 + (((anon3 & 0xffffffff) * 2290649225 + anon6 >> 32 >> 4) - (anon6 >> 32 >> 31)) * -30 << 32 >> 30;
				anon4 = (uint32_t*)(anon5 + 6301504);
			}
			while (*anon4 != 0);
			phi2 = phi2;
		}
		while (*(uint32_t*)(anon5 + 6300864) != 0);
		*anon4 = 1;
		do
		{
			uint64_t anon8;
			do
			{
				uint64_t anon7 = random();
				uint64_t anon9 = anon7 << 32;
				anon8 = anon7 + (((anon7 & 0xffffffff) * 2290649225 + anon9 >> 32 >> 4) - (anon9 >> 32 >> 31)) * -30 << 32 >> 30;
			}
			while (*(uint32_t*)(anon8 + 6301504) != 0);
			anon10 = (uint32_t*)(anon8 + 6300864);
		}
		while (*anon10 != 0);
		*anon10 = 1;
		anon11 = (uint32_t)phi2 - 1;
		if (anon11 != 0)
		{
			phi2 = (__zext uint64_t)anon11;
		}
	}
	while (anon11 != 0);
	uint64_t anon12 = random();
	uint64_t anon13 = anon12 << 32;
	w(4198271, (uint64_t)&alloca1, anon12 + (((anon12 & 0xffffffff) * 2290649225 + anon13 >> 32 >> 4) - (anon13 >> 32 >> 31)) * 4294967266 & 0xffffffff, 0, 0);
	uint64_t phi14 = 3;
	do
	{
		uint64_t anon16;
		uint32_t* anon18;
		do
		{
			do
			{
				do
				{
					do
					{
						uint64_t anon15 = random();
						phi14 = phi14;
						uint64_t anon17 = anon15 << 32;
						anon16 = anon15 + (((anon15 & 0xffffffff) * 2290649225 + anon17 >> 32 >> 4) - (anon17 >> 32 >> 31)) * -30 << 32 >> 30;
					}
					while (*(uint32_t*)(anon16 + 6301504) != 0);
					phi14 = phi14;
				}
				while (*(uint32_t*)(anon16 + 6300864) != 0);
				phi14 = phi14;
				anon18 = (uint32_t*)(anon16 + 6301120);
			}
			while (*anon18 != 0);
			phi14 = phi14;
		}
		while (*(uint32_t*)(anon16 + 6300992) == 0);
		*anon18 = 1;
		anon19 = (uint32_t)phi14 - 1;
		if (anon19 != 0)
		{
			phi14 = (__zext uint64_t)anon19;
		}
	}
	while (anon19 != 0);
	while (true)
	{
		uint64_t anon20 = random();
		uint64_t anon21 = anon20 << 32;
		*(uint32_t*)0x60292c = (uint32_t)anon20 + (uint32_t)(((anon20 & 0xffffffff) * 2290649225 + anon21 >> 32 >> 4) - (anon21 >> 32 >> 31)) * 4294967266;
	}
}
void r(uint64_t arg0, uint64_t arg1)
{
	uint32_t phi2;
	uint32_t phi1 = 0;
	uint64_t anon4 = arg1 << 32;
	uint32_t* anon3 = (uint32_t*)((anon4 >> 30) + 6301376);
	phi2 = *anon3;
	do
	{
		uint32_t phi_in5 = phi1;
		if (phi2 != 0)
		{
			*anon3 = phi2 - 1;
			uint32_t phi6 = 3;
			uint32_t phi7 = phi_in5;
			uint64_t anon8 = random();
			if (phi7 > 1000)
			{
				break;
			}
			else 
			{
				uint32_t anon9 = phi7 + 1;
				phi_in5 = anon9;
				uint32_t anon10 = phi6 - (__zext uint32_t)(anon9 == (anon9 / 100 - (uint32_t)((__zext uint64_t)anon9 << 32 >> 63)) * 100);
				phi6 = anon10;
				uint64_t anon13 = anon8 << 32;
				uint64_t anon12 = anon8 + (((anon8 & 0xffffffff) * 2290649225 + anon13 >> 36) - (anon13 >> 32 >> 31)) * 4294967266;
				uint32_t anon11 = (uint32_t)anon12;
				uint64_t anon15 = anon4 >> 32;
				uint32_t anon14 = (uint32_t)anon15;
				if (anon11 != anon14)
				{
					phi_in5 = anon9;
					phi6 = anon10;
					uint64_t anon17 = anon12 << 32;
					uint32_t* anon16 = (uint32_t*)((anon17 >> 30) + 6301376);
					if (*anon16 >= 1)
					{
						phi_in5 = anon9;
						phi6 = anon10;
						uint64_t anon18 = anon15 * 12;
						if (!(*(uint32_t*)(anon18 + 6301640) == anon11 | anon10 > *anon16))
						{
							phi_in5 = anon9;
							phi6 = anon10;
							if (anon11 != *(uint32_t*)(anon18 + 6301636))
							{
								uint32_t anon19 = *anon16 - 1;
								*anon16 = anon19;
								uint64_t anon20 = anon15 * 3;
								*(uint32_t*)(((__sext int64_t)anon19 + anon20 << 2) + 6301632) = anon11;
								uint62_t anon21 = (uint62_t)(anon17 >> 32) * 3;
								*(uint32_t*)(((__zext uint64_t)((__sext int62_t)anon19 + anon21) << 2) + 6301632) = anon14;
								r(4198736, anon12 & 0xffffffff);
								uint32_t* anon22 = (uint32_t*)((anon17 >> 30) + 6301376);
								*(uint32_t*)(((__zext uint64_t)(anon21 + (__sext int62_t)*anon22) << 2) + 6301632) = 4294967295;
								*anon22 = *anon22 + 1;
								*(uint32_t*)(((__sext int64_t)*anon3 + anon20 << 2) + 6301632) = 4294967295;
								*anon3 = 0;
								phi1 = anon9;
								phi2 = 0;
							}
						}
					}
				}
			}
		}
	}
	while (phi2 != 0);
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
		uint64_t phi5;
		uint64_t phi6;
		uint64_t phi24;
		uint32_t anon25;
		uint32_t anon39;
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
		uint64_t phi2 = 15;
		while (phi2 != 0)
		{
			*(uint64_t*)phi1 = 0;
			phi1 = phi1 + 8;
			phi2 = phi2 - 1;
		}
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
		uint64_t phi3 = 15;
		uint64_t phi4 = 6300864;
		do
		{
			phi5 = 6301248;
			phi6 = 15;
			if (phi3 != 0)
			{
				*(uint64_t*)phi4 = 0;
				phi3 = phi3 - 1;
				phi4 = phi4 + 8;
			}
		}
		while (phi3 != 0);
		while (phi6 != 0)
		{
			*(uint64_t*)phi5 = 0;
			phi5 = phi5 + 8;
			phi6 = phi6 - 1;
		}
		r(4199339, 0);
		(__asm "movdqa xmm0, xmmword ptr [rsp + 0x20]")();
		(__asm "movdqa xmm2, xmmword ptr [rsp + 0x10]")();
		(__asm "movdqa xmm1, xmmword ptr [rsp]")();
		uint32_t* phi7 = (uint32_t*)0x6027c4;
		uint64_t phi_in8 = 6301636;
		do
		{
			uint32_t phi11;
			uint32_t phi12;
			uint32_t phi13;
			uint32_t* anon14;
			uint32_t phi15;
			uint32_t phi_in16;
			uint32_t phi18;
			uint32_t phi20;
			uint32_t phi21;
			uint32_t phi22;
			uint64_t phi9 = phi_in8;
			uint32_t* anon10 = (uint32_t*)(phi9 + 4);
			if (*anon10 < *phi7)
			{
				*phi7 = *anon10;
				*anon10 = *phi7;
				phi11 = *phi7;
				phi12 = *phi7;
				phi13 = *anon10;
				anon14 = (uint32_t*)(phi9 - 4);
				*anon14 = *anon10;
				phi15 = *anon14;
			}
			else 
			{
				phi_in16 = *anon14;
				if (*phi7 < *anon14)
				{
					phi11 = *anon10 & 0xf;
					phi12 = *anon10;
					phi13 = *phi7 & 0xf;
					*anon14 = *phi7;
					phi15 = *anon14 & 0xf;
				}
			}
			if (*anon10 >= *phi7 && *phi7 < *anon14 || *anon10 < *phi7 && *anon10 < *anon14)
			{
				uint32_t phi_in17 = phi11;
				phi18 = phi12;
				uint32_t phi_in19 = phi13;
				*phi7 = phi15;
				phi20 = phi_in19;
				phi21 = phi_in17;
				phi22 = *anon14;
			}
			if (*anon10 < *phi7)
			{
				if (*anon10 >= *anon14)
				{
					phi20 = *anon14 & 0xf;
					phi21 = *phi7;
					phi22 = *anon10;
					phi18 = *phi7;
				}
			}
			if (*anon10 >= *phi7 && *phi7 < *anon14 || *anon10 < *phi7 && *anon10 < *anon14 || *anon10 < *phi7 && *anon10 >= *anon14)
			{
				phi_in16 = phi20;
				*phi7 = phi21;
				*anon10 = phi22;
				if (phi18 - *anon10 <= 4294967295)
				{
					phi_in16 = *(uint32_t*)((phi9 & 0xc) - 4);
				}
			}
			uint32_t phi23 = phi_in16;
			phi24 = 6301636;
			anon25 = phi23 + 1 & 0xff;
			if (anon25 != 0)
			{
				phi24 = 6301636;
				uint64_t anon26 = phi9 + 12;
				phi7 = (uint32_t*)(anon26 & 0xc);
				phi_in8 = anon26;
				if (phi9 == 6301984)
				{
					break;
				}
			}
		}
		while (anon25 != 0);
		do
		{
			uint32_t phi29;
			uint32_t phi30;
			uint32_t phi31;
			uint32_t phi32;
			uint32_t phi33;
			uint32_t* anon34;
			uint32_t phi_in35;
			uint32_t phi37;
			uint32_t* anon27 = (uint32_t*)(phi24 + 4);
			uint32_t* anon28 = (uint32_t*)phi24;
			if (*anon27 < *anon28)
			{
				*anon28 = *anon27;
				*anon27 = *anon28;
				phi29 = *anon28;
				phi30 = *anon28;
				phi31 = *anon27;
				phi32 = *anon27;
				anon34 = (uint32_t*)(phi24 - 4);
				phi33 = *anon34;
			}
			else 
			{
				phi_in35 = *anon34;
				if (*anon28 < *anon34)
				{
					phi29 = *anon27 & 0xf;
					phi30 = *anon27;
					phi31 = *anon28 & 0xf;
					phi32 = *anon28;
					phi33 = *anon34 & 0xf;
				}
			}
			if (*anon27 >= *anon28 && *anon28 < *anon34 || *anon27 < *anon28 && *anon27 < *anon34)
			{
				uint32_t phi_in36 = phi29;
				*anon34 = phi32;
				*anon28 = phi33;
				*anon28 = phi_in36;
				phi37 = *anon34;
			}
			if (*anon27 < *anon28)
			{
				if (*anon27 >= *anon34)
				{
					phi31 = *anon34 & 0xf;
					*anon28 = *anon28;
					phi37 = *anon27;
					phi30 = *anon28;
				}
			}
			if (*anon27 >= *anon28 && *anon28 < *anon34 || *anon27 < *anon28 && *anon27 < *anon34 || *anon27 < *anon28 && *anon27 >= *anon34)
			{
				phi_in35 = phi31;
				*anon27 = phi37;
				if (phi30 - *anon27 <= 4294967295)
				{
					phi_in35 = *(uint32_t*)((phi24 & 0xf) - 4);
				}
			}
			uint32_t phi38 = phi_in35;
			anon39 = phi38 + 1 & 0xff;
			if (anon39 != 0)
			{
				phi24 = phi24 + 12;
			}
		}
		while (anon39 != 0);
	}
}
void q(uint64_t arg0, uint64_t arg1)
{
	struct { uint8_t field0[56]; uint64_t field1; } alloca1;
	uint64_t phi4;
	uint32_t phi5;
	uint64_t phi_in6;
	uint32_t* anon7;
	uint32_t dispatch12;
	uint32_t phi15;
	uint32_t anon17;
	alloca1.field1 = arg0;
	uint32_t dispatch2 = 0;
	uint32_t* anon3 = (uint32_t*)0x602928;
	if (*anon3 != 0)
	{
		uint16_t** anon11;
		*anon3 = *anon3 - 1;
		printf((uint8_t*)0x401ca7);
		phi4 = arg1 & 0xffffffff;
		phi5 = 0;
		phi_in6 = phi4;
		anon7 = (uint32_t*)0x602490;
		*anon7 = *anon7 + phi5;
		struct _IO_FILE** anon10 = (struct _IO_FILE**)0x602480;
		uint32_t anon9 = _IO_getc(*anon10);
		uint8_t anon8 = (uint8_t)anon9;
		if (anon8 == 10)
		{
			dispatch2 = 1;
		}
		if (anon8 != 10 || *anon3 < 1)
		{
			anon11 = __ctype_b_loc();
			dispatch12 = 0;
		}
		uint64_t* anon13 = (uint64_t*)anon11;
		if ((*(uint8_t*)(*anon13 + ((__sext int64_t)anon8 << 1 | 1)) & 8) != 0)
		{
			if (anon8 != 10 || *anon3 < 1)
			{
				uint32_t anon14 = _IO_getc(*anon10);
				uint32_t anon16 = (anon9 << 24 >> 24) - 48;
				phi15 = anon16;
				if ((*(uint8_t*)(*anon13 + ((__zext uint64_t)anon14 << 56 >> 55 | 1)) & 8) != 0)
				{
					anon17 = anon14 >> 8;
					phi15 = (anon17 << 24 >> 24) + anon16 * 10 - 48;
				}
			}
		}
	}
	while (true)
	{
		uint64_t phi18;
		uint8_t* anon19;
		dispatch2 = 4;
		if (*(uint32_t*)(((__sext int64_t)phi15 << 2) + 6300992) != 0)
		{
			phi18 = (__zext uint64_t)phi15;
		}
		if (dispatch2 == 4)
		{
			puts((uint8_t*)0x401cd5);
			*anon7 = *anon3 * 100 + *anon7 + 500;
			anon19 = (uint8_t*)0x401cf1;
			printf(anon19);
			exit(0);
		}
		uint64_t anon20 = random();
		dispatch2 = 2;
		if (dispatch2 == 2)
		{
			puts((uint8_t*)0x401dd0);
			*anon7 = *anon7 - 100;
			printf(anon19);
			exit(0);
		}
		if ((uint32_t)anon20 + ((uint32_t)((anon20 & 0xffffffff) / 3) - (uint32_t)(anon20 << 32 >> 32 >> 31)) * 4294967293 != 1)
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
			w(4199968, (uint64_t)&alloca1, anon21 + (((anon21 & 0xffffffff) * 2290649225 + anon22 >> 32 >> 4) - (anon22 >> 32 >> 31)) * 4294967266 & 0xffffffff, 0, 0);
			*anon7 = *anon7 - 100;
			phi18 = phi_in6;
		}
		if (*(uint32_t*)(((__sext int64_t)phi15 << 2) + 6300992) != 0 || (uint32_t)anon20 + ((uint32_t)((anon20 & 0xffffffff) / 3) - (uint32_t)(anon20 << 32 >> 32 >> 31)) * 4294967293 != 1)
		{
			phi4 = phi18;
			dispatch2 = 1;
		}
		if ((uint8_t)anon17 != 10)
		{
			if (*(uint32_t*)(((__sext int64_t)phi15 << 2) + 6300992) != 0 || (uint32_t)anon20 + ((uint32_t)((anon20 & 0xffffffff) / 3) - (uint32_t)(anon20 << 32 >> 32 >> 31)) * 4294967293 != 1)
			{
				phi5 = phi5 - 20;
				dispatch12 = 1;
				dispatch2 = 3;
				if (phi5 != 196)
				{
					break;
				}
			}
		}
		if (dispatch2 == 3)
		{
			return;
		}
		if (dispatch2 == 1)
		{
			*anon7 = *anon7 - 50;
			__indirect_jump(*(uint64_t*)0x602408);
		}
		if (dispatch2 == 0)
		{
			__indirect_jump(*(uint64_t*)0x6023f8);
		}
	}
}
struct nn(uint64_t arg0)
{
	int64_t anon8;
	uint64_t phi_in9;
	uint64_t phi_in10;
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
	while (true)
	{
		uint32_t phi18;
		uint32_t anon19;
		uint32_t* anon20;
		uint32_t* anon21;
		uint32_t* anon25;
		uint64_t anon26;
		uint16_t** phi33;
		uint8_t anon34;
		uint16_t** anon38;
		uint32_t dispatch13 = 0;
		uint32_t* anon14 = (uint32_t*)0x602928;
		*anon14 = *anon14 + 1;
		puts((uint8_t*)0x401d17);
		uint32_t* anon15 = (uint32_t*)0x602490;
		*anon15 = *anon15 + 20;
		uint64_t anon17 = phi11 << 2;
		uint32_t* anon16 = (uint32_t*)(anon17 + 6301120);
		*anon16 = 0;
		dispatch13 = 0;
		if (dispatch13 == 0)
		{
			puts((uint8_t*)0x401d2a);
			phi18 = 4294967196;
		}
		if (*(uint32_t*)(anon17 + 6300992) != 0)
		{
			dispatch13 = 1;
			if (*(uint32_t*)(anon17 + 6300864) == 0)
			{
				anon19 = (uint32_t)phi12;
				anon20 = (uint32_t*)0x60292c;
				if (anon19 == *anon20)
				{
					if (*anon14 != 0)
					{
						anon21 = (uint32_t*)0x60248c;
						*anon21 = *anon21 + 1;
						*anon14 = *anon14 - 1;
						*anon15 = *anon15 - 20;
						puts((uint8_t*)0x401d48);
					}
					dispatch13 = 2;
				}
			}
		}
		if (dispatch13 == 2)
		{
			puts((uint8_t*)0x401d62);
			while (true)
			{
				uint64_t anon23 = random();
				uint32_t anon22 = (uint32_t)anon23;
				*anon20 = anon22 + (((uint32_t)((anon23 & 0xffffffff) * 2290649225 >> 32) + anon22 >> 4) - (anon22 >> 31)) * 4294967266;
			}
		}
		if (*(uint32_t*)(anon17 + 6300992) != 0)
		{
			if (*(uint32_t*)(anon17 + 6300864) == 0)
			{
				if (anon19 == *anon20)
				{
					if (*anon21 == 3)
					{
						puts((uint8_t*)0x401df8);
						*anon14 = 3;
						*anon15 = *anon15 + 200;
						*anon20 = 4294967295;
					}
				}
				if (anon19 != *anon20 || *anon21 == 3)
				{
					dispatch13 = 3;
				}
			}
		}
		if (dispatch13 == 3)
		{
			uint64_t phi27;
			if (*(uint32_t*)(anon17 + 6300992) < 3)
			{
				puts((uint8_t*)0x401d7b);
			}
			anon26 = phi11 * 12;
			anon25 = (uint32_t*)(anon26 + 6301632);
			int64_t anon24 = (__sext int64_t)*anon25;
			if (*(uint32_t*)((anon24 << 2) + 6300864) == 0)
			{
				if (*(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon26 + 6301636) << 2) + 6300864) == 0)
				{
					phi27 = anon24;
				}
			}
			if (*(uint32_t*)((anon24 << 2) + 6300864) != 0 || *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon26 + 6301636) << 2) + 6300864) != 0 || *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon26 + 6301640) << 2) + 6300864) != 0 && *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon26 + 6301636) << 2) + 6300864) == 0)
			{
				puts((uint8_t*)0x401d8e);
				phi27 = (__sext int64_t)*anon25;
			}
			if (*(uint32_t*)((phi27 << 2) + 6301504) != 0 || *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon26 + 6301636) << 2) + 6301504) != 0 || *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon26 + 6301640) << 2) + 6301504) != 0 && *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon26 + 6301636) << 2) + 6301504) == 0)
			{
				puts((uint8_t*)0x401da0);
			}
			printf((uint8_t*)0x401e58);
			uint32_t* anon28 = (uint32_t*)(anon17 + 6301248);
			if (*anon28 == 0)
			{
				*anon15 = *anon15 + 10;
				*anon28 = 1;
			}
		}
		struct _IO_FILE** anon31 = (struct _IO_FILE**)0x602480;
		uint8_t anon30 = (uint8_t)_IO_getc(*anon31);
		bool anon29 = anon30 == 108;
		if (anon29)
		{
			uint16_t** anon32 = __ctype_b_loc();
			phi_in9 = phi11;
			phi_in10 = phi12;
			phi33 = anon32;
			anon34 = *(uint8_t*)(*(uint64_t*)anon32 + 217) & 8;
			if (anon34 == 0)
			{
				break;
			}
		}
		bool anon35 = anon30 == 105;
		if (anon35)
		{
			printf((uint8_t*)0x401dba);
		}
		bool anon36 = anon30 == 115;
		if (anon36)
		{
			q(4200890, phi12 & 0xffffffff);
		}
		bool anon37 = anon30 == 115 || anon30 == 108 || anon30 == 105 || anon30 == 113;
		if (!anon37 || anon30 == 105 || anon30 == 115)
		{
			anon38 = __ctype_b_loc();
			phi33 = anon38;
		}
		int64_t anon40 = (__sext int64_t)anon30;
		uint8_t anon39 = *(uint8_t*)(*(uint64_t*)anon38 + (anon40 >> 7 | 1)) & 8;
		bool anon41 = !anon37;
		if (anon39 != 0 && anon35 || anon39 != 0 && anon36 || anon39 != 0 && anon41 || anon34 != 0 && anon29)
		{
			uint32_t phi43;
			uint32_t anon42 = _IO_getc(*anon31);
			uint32_t anon44 = (uint32_t)(anon40 + 4294967248);
			phi43 = anon44;
			uint32_t anon45 = anon42 << 24 >> 24;
			if ((*(uint8_t*)(*(uint64_t*)phi33 + ((__zext uint64_t)anon45 << 1 | 1)) & 8) != 0)
			{
				phi43 = anon44 * 10 + anon45 - 48;
			}
			if (*anon25 != phi43)
			{
				if (*(uint32_t*)(anon26 + 6301636) != phi43)
				{
					phi_in9 = phi11;
					phi_in10 = phi12;
				}
			}
			if (*anon25 == phi43 || *(uint32_t*)(anon26 + 6301636) == phi43 || *(uint32_t*)(anon26 + 6301636) != phi43 && *(uint32_t*)(anon26 + 6301640) == phi43)
			{
				int64_t anon46 = (__sext int64_t)phi43;
				phi_in9 = anon46;
				phi_in10 = anon46;
			}
			break;
		}
		if (*(uint32_t*)(anon17 + 6300992) != 0)
		{
			if (*(uint32_t*)(anon17 + 6300864) == 0)
			{
				uint32_t* anon47 = (uint32_t*)(anon17 + 6301504);
				if (*anon47 != 0)
				{
					if (anon19 != *anon20 || *anon21 == 3)
					{
						*anon47 = 0;
						uint64_t anon49 = random();
						uint32_t anon48 = (uint32_t)anon49;
						*(uint32_t*)(((__sext int64_t)(anon48 + (((uint32_t)((anon49 & 0xffffffff) * 2290649225 >> 32) + anon48 >> 4) - (anon48 >> 31)) * 4294967266) << 2) + 6301504) = 1;
						uint64_t anon50 = random();
						printf((uint8_t*)0x401e28);
						*anon15 = *anon15 - 10;
						uint32_t anon52 = (uint32_t)anon50;
						int64_t anon51 = (__sext int64_t)(anon52 + ((uint32_t)((anon50 & 0xffffffff) * 2290649225 + (anon50 << 32) >> 36) - (anon52 >> 31)) * 4294967266);
						phi_in9 = anon51;
						phi_in10 = anon51;
						break;
					}
				}
			}
		}
		if (dispatch13 == 1)
		{
			puts((uint8_t*)0x401d36);
			phi18 = 4294967246;
		}
		if (dispatch13 == 1 || dispatch13 == 0)
		{
			*anon15 = *anon15 + phi18;
		}
		if (dispatch13 == 1 || dispatch13 == 0 || anon30 == 113)
		{
			printf((uint8_t*)0x401cf1);
			exit(0);
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
