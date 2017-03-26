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
	uint32_t phi8;
	uint32_t* phi1 = (uint32_t*)0x6027c4;
	uint64_t phi_in2 = 6301636;
	do
	{
		uint32_t phi5;
		uint32_t phi6;
		uint32_t* anon7;
		uint64_t phi3 = phi_in2;
		uint32_t* anon4 = (uint32_t*)(phi3 + 4);
		if (*anon4 < *phi1)
		{
			*anon4 = *phi1;
			*phi1 = *anon4;
			phi5 = *phi1;
			phi6 = *anon4;
			anon7 = (uint32_t*)(phi3 - 4);
			phi6 = *anon7;
			*phi1 = *phi1;
			*anon4 = *anon4;
		}
		else 
		{
			phi5 = *anon4;
			phi6 = *phi1;
			phi8 = *anon7;
		}
		if (*anon4 < *phi1 && *anon4 < *anon7 || *anon4 >= *phi1 && *phi1 < *anon7)
		{
			uint32_t phi_in9 = phi5;
			*phi1 = *anon7;
			*anon7 = phi6;
			*phi1 = phi_in9;
			*anon4 = *anon7;
		}
		if (*anon4 < *phi1 && *anon4 < *anon7 || *anon4 >= *phi1 && *phi1 < *anon7 || *anon4 >= *anon7 && *anon4 < *phi1)
		{
			uint32_t phi_in10 = phi6;
			phi8 = phi_in10;
			if (*anon4 > *phi1)
			{
				phi8 = *anon7;
			}
		}
		if (phi8 != 255)
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
	while (phi8 != 255);
	return;
}
void w(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4)
{
	struct { uint8_t field0[4]; uint32_t field1; uint64_t field2; uint8_t field3[8]; uint32_t field4; uint32_t field5; uint8_t field6[48]; uint64_t field7; uint32_t field8; uint8_t field9[4]; uint64_t field10; uint64_t field11; uint32_t field12; uint8_t field13[8]; uint32_t field14; uint8_t field15[56]; uint64_t field16; } alloca1;
	uint32_t phi5;
	uint64_t phi11;
	uint64_t phi364;
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
		uint32_t phi_in355;
		uint32_t phi365;
		uint32_t phi366;
		uint64_t phi367;
		int64_t anon14 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi11 + 48) + *(uint64_t*)(phi11 + 8) + 6301632);
		uint32_t* anon13 = (uint32_t*)((anon14 << 2) + 6300992);
		*anon13 = phi8;
		*(uint64_t*)(phi11 + 48) = phi10;
		if (phi9 < *anon13)
		{
			uint32_t phi_in356;
			uint32_t phi_in361;
			uint64_t phi362;
			uint64_t phi_in363;
			*(uint64_t*)(phi11 + 16) = anon14 * 12;
			*(uint32_t*)(phi11 + 40) = (uint32_t)phi7 + 5;
			uint32_t phi_in15 = phi5;
			uint32_t phi16 = phi4;
			uint64_t phi17 = (__zext uint64_t)phi4;
			uint32_t phi18 = phi5;
			uint32_t phi19 = phi4;
			uint32_t phi20 = phi5;
			*(uint64_t*)(phi21 + 56) = 0;
			uint64_t phi21 = phi11;
			do
			{
				uint64_t phi342;
				uint32_t phi353;
				uint64_t phi_in357;
				uint64_t phi358;
				uint32_t phi_in359;
				uint32_t phi360;
				uint32_t phi_in22 = phi16;
				*(uint32_t*)(phi21 + 68) = phi18;
				int64_t anon24 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi21 + 56) + *(uint64_t*)(phi21 + 16) + 6301632);
				uint32_t* anon23 = (uint32_t*)((anon24 << 2) + 6300992);
				if (phi20 < *anon23)
				{
					uint64_t phi354;
					*anon23 = *(uint32_t*)(phi21 + 4);
					*(uint64_t*)(phi21 + 32) = anon24 * 12;
					*(uint32_t*)(phi21 + 44) = (uint32_t)phi17 + 6;
					uint32_t phi25 = phi19;
					uint32_t phi26 = phi19;
					uint32_t phi27 = phi19;
					uint32_t phi28 = phi19;
					uint32_t phi29 = phi19;
					uint32_t phi30 = phi19;
					uint32_t phi31 = phi19;
					uint32_t phi32 = phi19;
					uint32_t phi33 = phi19;
					uint32_t phi34 = phi19;
					uint64_t phi35 = (__zext uint64_t)phi19;
					*(uint64_t*)(phi36 + 72) = 0;
					uint64_t phi36 = phi21;
					do
					{
						uint32_t phi335;
						uint32_t phi338;
						uint32_t phi339;
						uint32_t phi344;
						uint32_t phi345;
						uint32_t phi346;
						uint32_t phi347;
						uint64_t phi_in348;
						uint32_t phi349;
						uint32_t phi_in350;
						uint32_t phi_in351;
						uint64_t phi352;
						int64_t anon38 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi36 + 72) + *(uint64_t*)(phi36 + 32) + 6301632);
						uint32_t* anon37 = (uint32_t*)((anon38 << 2) + 6300992);
						if (*(uint32_t*)(phi36 + 4) < *anon37)
						{
							uint32_t phi_in319;
							uint32_t phi_in329;
							uint32_t phi_in330;
							uint32_t phi_in332;
							uint32_t phi_in340;
							uint32_t phi_in341;
							uint64_t phi_in343;
							*anon37 = *(uint32_t*)(phi36 + 24);
							*(uint32_t*)(phi36 + 64) = (uint32_t)phi35 + 7;
							uint32_t phi39 = phi25;
							uint32_t phi40 = phi26;
							uint32_t phi41 = phi27;
							uint32_t phi42 = phi28;
							uint32_t phi43 = phi29;
							uint32_t phi44 = phi30;
							uint32_t phi45 = phi31;
							uint32_t phi46 = phi32;
							uint32_t phi47 = phi33;
							uint32_t phi48 = phi34;
							uint64_t phi49 = phi36;
							uint64_t phi50 = 0;
							uint64_t phi51 = anon38 * 12;
							uint64_t phi52 = phi35;
							do
							{
								uint32_t phi318;
								uint32_t phi328;
								uint64_t phi331;
								uint32_t phi333;
								uint32_t phi334;
								uint64_t phi336;
								uint64_t phi337;
								int64_t anon54 = (__sext int64_t)*(uint32_t*)(phi50 + phi51 + 6301632);
								uint32_t* anon53 = (uint32_t*)((anon54 << 2) + 6300992);
								if (*(uint32_t*)(phi49 + 24) < *anon53)
								{
									uint32_t phi58;
									uint64_t phi322;
									*anon53 = *(uint32_t*)(phi49 + 28);
									uint32_t phi_in55 = phi39;
									uint32_t phi56 = phi40;
									uint32_t phi57 = phi41;
									uint32_t anon59 = (uint32_t)phi52 + 8;
									phi58 = anon59;
									uint32_t phi_in60 = phi42;
									uint32_t phi61 = phi43;
									uint32_t phi62 = anon59;
									uint32_t phi63 = phi44;
									uint32_t phi_in64 = phi45;
									uint32_t phi65 = anon59;
									uint32_t phi66 = anon59;
									uint32_t phi_in67 = anon59;
									uint32_t phi68 = phi46;
									uint32_t phi_in69 = anon59;
									uint32_t phi70 = anon59;
									uint32_t phi_in71 = phi47;
									uint32_t phi_in72 = anon59;
									uint32_t phi_in73 = anon59;
									uint32_t phi_in74 = phi48;
									uint64_t phi_in75 = phi51;
									uint32_t phi_in76 = anon59;
									uint32_t phi77 = anon59;
									uint32_t phi_in78 = anon59;
									uint64_t phi79 = phi49;
									uint64_t phi_in80 = 0;
									uint64_t phi81 = anon54 * 12;
									uint64_t phi82 = phi52;
									do
									{
										uint32_t phi_in83 = phi_in55;
										uint32_t phi84 = phi57;
										uint32_t phi85 = phi58;
										uint32_t phi_in86 = phi61;
										uint32_t phi_in87 = phi62;
										uint32_t phi_in88 = phi_in64;
										uint32_t phi89 = phi65;
										uint32_t phi_in90 = phi66;
										uint32_t phi91 = phi_in67;
										uint32_t phi_in92 = phi_in69;
										uint32_t phi_in93 = phi70;
										uint32_t phi_in94 = phi_in71;
										uint32_t phi95 = phi_in72;
										uint32_t phi_in96 = phi_in73;
										uint64_t phi_in97 = phi_in75;
										uint32_t phi98 = phi_in76;
										uint32_t phi_in99 = phi77;
										uint32_t phi_in100 = phi_in78;
										uint64_t phi_in101 = phi79;
										uint64_t phi102 = phi82;
										uint32_t phi103 = phi_in83;
										uint32_t phi104 = phi56;
										uint32_t phi105 = phi85;
										uint32_t phi106 = phi_in86;
										phi62 = phi_in87;
										uint32_t phi_in107 = phi63;
										uint64_t phi_in108 = phi81;
										uint64_t phi_in109 = phi_in80;
										uint32_t phi_in110 = phi_in88;
										uint32_t phi111 = phi_in90;
										uint32_t phi112 = phi91;
										phi_in69 = phi_in92;
										uint32_t phi_in113 = phi_in93;
										uint32_t phi114 = phi_in94;
										phi_in72 = phi95;
										phi_in73 = phi_in96;
										uint32_t phi115 = phi_in74;
										uint64_t phi116 = phi_in97;
										uint32_t phi117 = phi98;
										uint32_t phi118 = phi_in99;
										uint64_t phi_in119 = phi_in101;
										int64_t anon121 = (__sext int64_t)*(uint32_t*)(phi_in80 + phi81 + 6301632);
										uint32_t* anon120 = (uint32_t*)((anon121 << 2) + 6300992);
										if (*(uint32_t*)(phi_in101 + 28) < *anon120)
										{
											*anon120 = *(uint32_t*)(phi_in101 + 40);
											*(uint32_t*)(phi_in101 + 120) = (uint32_t)phi102 + 9;
											uint64_t phi122 = 0;
											uint32_t phi_in123 = phi_in83;
											uint32_t phi_in124 = phi84;
											uint32_t phi125 = phi_in60;
											uint32_t phi126 = phi_in86;
											uint32_t phi_in127 = phi_in87;
											uint32_t phi128 = phi89;
											uint32_t phi_in129 = phi_in90;
											uint32_t phi_in130 = phi68;
											uint32_t phi_in131 = phi_in93;
											uint32_t phi_in132 = phi_in94;
											uint64_t phi133 = phi_in80;
											uint32_t phi134 = phi_in74;
											uint64_t phi135 = phi81;
											uint32_t phi136 = phi_in99;
											phi_in78 = phi_in100;
											uint64_t phi_in137 = phi_in101;
											uint64_t phi138 = phi102 & 0xffffffff;
											do
											{
												uint32_t phi_in139 = phi_in123;
												uint32_t phi_in140 = phi56;
												uint32_t phi141 = phi85;
												uint32_t phi142 = phi125;
												uint32_t phi_in143 = phi126;
												uint32_t phi_in144 = phi_in127;
												uint32_t phi145 = phi63;
												uint32_t phi146 = phi_in88;
												uint32_t phi147 = phi128;
												uint32_t phi148 = phi_in129;
												uint32_t phi_in149 = phi91;
												uint32_t phi150 = phi_in130;
												uint32_t phi151 = phi_in92;
												uint32_t phi_in152 = phi_in131;
												uint32_t phi_in153 = phi_in132;
												uint32_t phi_in154 = phi95;
												uint32_t phi_in155 = phi_in96;
												uint64_t phi_in156 = phi133;
												uint32_t phi_in157 = phi134;
												uint64_t phi_in158 = phi_in97;
												uint64_t phi_in159 = phi135;
												uint32_t phi160 = phi98;
												uint32_t phi_in161 = phi136;
												uint64_t phi_in162 = phi138;
												uint32_t phi163 = phi_in139;
												uint32_t phi164 = phi_in140;
												uint32_t phi165 = phi_in124;
												uint32_t phi_in166 = phi141;
												phi_in86 = phi_in143;
												uint32_t phi167 = phi_in144;
												uint32_t phi168 = phi145;
												uint32_t phi169 = phi146;
												phi128 = phi147;
												uint32_t phi170 = phi148;
												uint32_t phi171 = phi_in149;
												phi_in130 = phi150;
												uint32_t phi172 = phi151;
												uint32_t phi173 = phi_in152;
												uint32_t phi174 = phi_in153;
												phi95 = phi_in154;
												phi_in96 = phi_in155;
												phi133 = phi_in156;
												uint32_t phi_in175 = phi_in157;
												uint64_t phi176 = phi_in158;
												uint32_t phi177 = phi160;
												phi_in100 = phi_in78;
												uint64_t phi178 = phi_in137;
												uint64_t phi179 = phi_in162;
												int64_t anon181 = (__sext int64_t)*(uint32_t*)(phi122 + anon121 * 12 + 6301632);
												uint32_t* anon180 = (uint32_t*)((anon181 << 2) + 6300992);
												if (*(uint32_t*)(phi_in137 + 40) < *anon180)
												{
													uint64_t phi_in195;
													*anon180 = *(uint32_t*)(phi_in137 + 44);
													uint64_t phi182 = 0;
													uint32_t phi_in183 = phi_in139;
													uint32_t phi184 = phi_in140;
													uint32_t phi185 = phi_in124;
													uint32_t phi186 = phi142;
													uint32_t phi187 = phi_in143;
													uint32_t phi188 = phi_in149;
													uint32_t phi189 = phi_in152;
													uint32_t phi190 = phi_in153;
													uint32_t phi191 = phi_in154;
													uint32_t phi192 = phi_in155;
													uint64_t phi193 = phi_in156;
													uint64_t phi_in194 = phi_in158;
													*(uint64_t*)(phi_in195 + 112) = phi_in159;
													uint32_t phi196 = phi_in161;
													uint32_t phi197 = phi_in78;
													uint64_t phi_in198 = phi_in137;
													uint64_t phi199 = phi_in162;
													do
													{
														uint32_t phi200 = phi_in183;
														uint32_t phi_in201 = phi141;
														uint32_t phi_in202 = phi186;
														uint32_t phi_in203 = phi187;
														uint32_t phi204 = phi_in144;
														uint32_t phi_in205 = phi145;
														*(uint32_t*)(phi_in195 + 96) = phi146;
														*(uint32_t*)(phi_in195 + 124) = phi147;
														uint32_t phi_in206 = phi148;
														uint32_t phi_in207 = phi188;
														uint32_t phi_in208 = phi150;
														uint32_t phi_in209 = phi151;
														uint32_t phi_in210 = phi189;
														uint32_t phi_in211 = phi191;
														uint32_t phi_in212 = phi192;
														uint64_t phi213 = phi193;
														uint32_t phi_in214 = phi_in157;
														*(uint64_t*)(phi_in195 + 104) = phi_in194;
														uint32_t phi_in215 = phi160;
														uint32_t phi216 = phi197;
														phi_in195 = phi_in198;
														uint32_t phi217 = phi200;
														uint32_t phi218 = phi184;
														phi_in124 = phi185;
														uint32_t phi_in219 = phi_in201;
														phi186 = phi_in202;
														phi_in143 = phi_in203;
														phi167 = phi204;
														uint32_t phi220 = phi_in205;
														uint32_t phi221 = *(uint32_t*)(phi_in195 + 96);
														phi147 = *(uint32_t*)(phi_in195 + 124);
														uint32_t phi222 = phi_in206;
														uint32_t phi223 = phi_in208;
														uint32_t phi224 = phi_in209;
														uint32_t phi225 = phi_in210;
														phi174 = phi190;
														uint32_t phi226 = phi_in211;
														uint32_t phi227 = phi_in212;
														uint64_t phi228 = phi213;
														uint32_t phi229 = phi_in214;
														uint64_t phi230 = *(uint64_t*)(phi_in195 + 104);
														uint64_t phi231 = *(uint64_t*)(phi_in195 + 112);
														phi160 = phi_in215;
														uint64_t phi232 = phi_in195;
														uint64_t phi_in233 = phi199;
														int64_t anon235 = (__sext int64_t)*(uint32_t*)(phi182 + anon181 * 12 + 6301632);
														uint32_t* anon234 = (uint32_t*)((anon235 << 2) + 6300992);
														if (*(uint32_t*)(phi_in195 + 44) < *anon234)
														{
															*anon234 = *(uint32_t*)(phi_in195 + 64);
															uint32_t phi236 = phi200;
															phi218 = phi184;
															uint32_t phi_in237 = phi185;
															uint32_t phi_in238 = phi_in201;
															phi_in198 = phi_in195;
															phi186 = phi_in202;
															uint32_t phi239 = phi_in203;
															uint32_t phi240 = phi204;
															uint32_t phi241 = phi_in205;
															uint32_t phi_in242 = *(uint32_t*)(phi_in195 + 96);
															uint32_t phi243 = *(uint32_t*)(phi_in195 + 124);
															uint32_t phi244 = phi_in206;
															phi188 = phi_in207;
															uint32_t phi245 = phi_in208;
															uint32_t phi246 = phi_in209;
															phi_in210 = phi_in210;
															uint32_t phi_in247 = phi_in211;
															uint32_t phi248 = phi_in212;
															*(uint64_t*)(phi249 + 80) = phi213;
															uint32_t phi250 = phi_in214;
															*(uint64_t*)(phi249 + 96) = *(uint64_t*)(phi_in195 + 104);
															uint64_t phi251 = *(uint64_t*)(phi_in195 + 112);
															uint32_t phi252 = phi_in215;
															uint32_t phi253 = phi196;
															phi197 = phi216;
															uint64_t phi254 = phi199;
															int64_t anon257 = anon235 * 12;
															int64_t anon256 = (__sext int64_t)*(uint32_t*)(anon257 + 6301636);
															uint32_t* anon255 = (uint32_t*)((anon256 << 2) + 6300992);
															if (*(uint32_t*)(phi_in195 + 64) < *anon255)
															{
																*anon255 = phi_in207;
																uint32_t phi258 = phi_in201;
																uint32_t phi259 = phi_in202;
																uint64_t phi_in260 = phi_in195;
																uint32_t phi_in261 = phi_in205;
																uint64_t phi262 = anon256;
																uint32_t phi_in263 = *(uint32_t*)(phi_in195 + 96);
																uint32_t phi_in264 = phi_in208;
																uint32_t phi265 = phi190;
																*(uint64_t*)(phi_in260 + 104) = *(uint64_t*)(phi_in195 + 104);
																uint64_t phi_in266 = *(uint64_t*)(phi_in195 + 112);
																if (phi_in206 < phi_in207)
																{
																	*(uint64_t*)(phi_in195 + 88) = phi213;
																	*(uint64_t*)(phi_in195 + 80) = anon256;
																	uint64_t anon267 = (__zext uint64_t)phi_in207;
																	w(4197873, anon12, (__sext int64_t)phi_in207, anon267, anon267);
																	phi200 = *(uint32_t*)(arg1 - 96);
																	phi184 = *(uint32_t*)(arg1 - 96);
																	phi185 = *(uint32_t*)(arg1 - 96);
																	phi258 = *(uint32_t*)(arg1 - 68);
																	phi259 = *(uint32_t*)(arg1 - 96);
																	phi_in203 = *(uint32_t*)(arg1 - 96);
																	phi_in260 = anon12;
																	phi204 = *(uint32_t*)(arg1 - 68);
																	phi_in261 = *(uint32_t*)(arg1 - 96);
																	phi262 = *(uint64_t*)(arg1 - 112);
																	phi_in263 = *(uint32_t*)(arg1 - 96);
																	phi_in264 = *(uint32_t*)(arg1 - 96);
																	phi265 = *(uint32_t*)(arg1 - 96);
																	phi213 = *(uint64_t*)(arg1 - 104);
																	phi_in214 = *(uint32_t*)(arg1 - 96);
																	*(uint64_t*)(phi_in260 + 104) = *(uint64_t*)(arg1 - 88);
																	phi_in266 = *(uint64_t*)(arg1 - 80);
																	phi199 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
																}
																uint32_t phi_in268 = phi200;
																uint32_t phi_in269 = phi184;
																uint32_t phi_in270 = phi185;
																uint32_t phi_in271 = phi258;
																uint32_t phi272 = phi259;
																*(uint32_t*)(phi_in260 + 96) = phi_in203;
																*(uint32_t*)(phi_in260 + 124) = phi204;
																uint64_t phi273 = phi262;
																phi190 = phi265;
																uint64_t phi_in274 = phi213;
																uint64_t phi_in275 = phi199;
																uint32_t phi276 = phi_in268;
																uint32_t phi277 = phi_in269;
																uint32_t phi278 = phi_in270;
																phi_in201 = phi_in271;
																phi_in195 = phi_in260;
																uint32_t phi279 = *(uint32_t*)(phi_in260 + 96);
																phi243 = *(uint32_t*)(phi_in260 + 124);
																uint32_t phi280 = phi_in263;
																uint32_t phi281 = phi_in264;
																uint32_t phi282 = phi_in214;
																uint64_t phi283 = *(uint64_t*)(phi_in260 + 104);
																*(uint64_t*)(phi_in195 + 104) = phi_in266;
																uint64_t phi284 = phi_in275;
																int64_t anon285 = (__sext int64_t)*(uint32_t*)(phi273 * 12 + 6301636);
																if (*(uint32_t*)(phi_in260 + 124) < *(uint32_t*)((anon285 << 2) + 6300992))
																{
																	*(uint64_t*)(phi_in260 + 112) = phi_in266;
																	*(uint64_t*)(phi_in260 + 88) = phi_in274;
																	*(uint64_t*)(phi_in260 + 80) = phi273;
																	uint64_t anon286 = (__zext uint64_t)*(uint32_t*)(phi_in260 + 120);
																	w(4197793, anon12, anon285, anon286, anon286);
																	phi276 = *(uint32_t*)(arg1 - 96);
																	phi277 = *(uint32_t*)(arg1 - 96);
																	phi278 = *(uint32_t*)(arg1 - 96);
																	phi_in201 = alloca1.field14;
																	phi272 = *(uint32_t*)(arg1 - 96);
																	phi_in195 = anon12;
																	phi279 = *(uint32_t*)(arg1 - 96);
																	phi243 = alloca1.field14;
																	phi_in261 = *(uint32_t*)(arg1 - 96);
																	phi273 = *(uint64_t*)(arg1 - 112);
																	phi280 = *(uint32_t*)(arg1 - 96);
																	phi281 = *(uint32_t*)(arg1 - 96);
																	phi190 = *(uint32_t*)(arg1 - 96);
																	phi_in274 = *(uint64_t*)(arg1 - 104);
																	phi282 = *(uint32_t*)(arg1 - 96);
																	phi283 = *(uint64_t*)(arg1 - 88);
																	*(uint64_t*)(phi_in195 + 104) = *(uint64_t*)(arg1 - 80);
																	phi284 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
																}
																phi236 = phi276;
																uint32_t phi_in287 = phi277;
																uint32_t phi_in288 = phi278;
																*(uint32_t*)(phi_in195 + 88) = phi272;
																phi239 = phi279;
																phi_in210 = phi243;
																phi_in242 = phi280;
																phi245 = phi281;
																*(uint64_t*)(phi_in195 + 80) = phi_in274;
																phi_in157 = phi282;
																*(uint64_t*)(phi_in195 + 96) = phi283;
																uint64_t phi_in289 = *(uint64_t*)(phi_in195 + 104);
																phi254 = phi284;
																phi218 = phi_in287;
																phi_in237 = phi_in288;
																phi_in238 = phi_in201;
																phi_in198 = phi_in195;
																phi186 = *(uint32_t*)(phi_in195 + 88);
																phi240 = phi_in210;
																phi241 = phi_in261;
																phi243 = phi_in210;
																phi244 = phi_in210;
																phi188 = phi_in210;
																phi246 = phi_in210;
																phi_in247 = phi_in210;
																phi248 = phi_in210;
																*(uint64_t*)(phi249 + 80) = *(uint64_t*)(phi_in195 + 80);
																phi250 = phi_in157;
																*(uint64_t*)(phi249 + 96) = *(uint64_t*)(phi_in195 + 96);
																phi251 = phi_in289;
																phi252 = phi_in210;
																phi253 = phi_in210;
																phi197 = phi_in210;
																int64_t anon290 = (__sext int64_t)*(uint32_t*)(phi273 * 12 + 6301640);
																if (phi_in210 < *(uint32_t*)((anon290 << 2) + 6300992))
																{
																	*(uint32_t*)(phi_in195 + 112) = phi_in210;
																	*(uint64_t*)(phi_in195 + 104) = phi_in289;
																	uint64_t anon291 = (__zext uint64_t)*(uint32_t*)(phi_in195 + 120);
																	w(4197395, anon12, anon290, anon291, anon291);
																	phi236 = *(uint32_t*)(arg1 - 104);
																	phi218 = *(uint32_t*)(arg1 - 104);
																	phi_in237 = *(uint32_t*)(arg1 - 104);
																	phi_in238 = *(uint32_t*)(arg1 - 80);
																	phi_in198 = anon12;
																	phi186 = *(uint32_t*)(arg1 - 104);
																	phi239 = *(uint32_t*)(arg1 - 104);
																	phi240 = *(uint32_t*)(arg1 - 80);
																	phi241 = *(uint32_t*)(arg1 - 104);
																	phi_in242 = *(uint32_t*)(arg1 - 104);
																	phi243 = *(uint32_t*)(arg1 - 80);
																	phi244 = *(uint32_t*)(arg1 - 80);
																	phi188 = *(uint32_t*)(arg1 - 80);
																	phi245 = *(uint32_t*)(arg1 - 104);
																	phi246 = *(uint32_t*)(arg1 - 80);
																	phi_in210 = *(uint32_t*)(arg1 - 80);
																	phi190 = *(uint32_t*)(arg1 - 104);
																	phi_in247 = *(uint32_t*)(arg1 - 80);
																	phi248 = *(uint32_t*)(arg1 - 80);
																	*(uint64_t*)(phi249 + 80) = *(uint64_t*)(arg1 - 112);
																	phi250 = *(uint32_t*)(arg1 - 104);
																	*(uint64_t*)(phi249 + 96) = *(uint64_t*)(arg1 - 96);
																	phi251 = *(uint64_t*)(arg1 - 88);
																	phi252 = *(uint32_t*)(arg1 - 80);
																	phi253 = *(uint32_t*)(arg1 - 80);
																	phi197 = *(uint32_t*)(arg1 - 80);
																	phi254 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
																}
															}
															uint32_t phi292 = phi236;
															*(uint32_t*)(phi249 + 88) = phi218;
															phi_in237 = phi_in237;
															*(uint32_t*)(phi249 + 112) = phi_in238;
															uint64_t phi249 = phi_in198;
															uint32_t phi_in293 = phi186;
															phi_in143 = phi239;
															phi167 = phi240;
															phi220 = phi241;
															phi221 = phi_in242;
															uint32_t phi_in294 = phi243;
															uint32_t phi_in295 = phi244;
															phi_in207 = phi188;
															phi_in208 = phi245;
															phi224 = phi246;
															uint32_t phi_in296 = phi190;
															phi227 = phi248;
															uint64_t phi_in297 = *(uint64_t*)(phi249 + 80);
															uint32_t phi298 = phi250;
															uint64_t phi_in299 = *(uint64_t*)(phi249 + 96);
															*(uint64_t*)(phi249 + 104) = phi251;
															phi160 = phi252;
															phi196 = phi253;
															phi216 = phi197;
															uint64_t phi_in300 = phi254;
															phi217 = phi292;
															phi218 = *(uint32_t*)(phi249 + 88);
															phi_in124 = phi_in237;
															phi_in219 = *(uint32_t*)(phi249 + 112);
															phi186 = phi_in293;
															phi147 = phi_in294;
															phi222 = phi_in295;
															phi223 = phi_in208;
															phi225 = phi_in210;
															phi174 = phi_in296;
															phi226 = phi_in247;
															phi228 = phi_in297;
															phi229 = phi298;
															phi230 = phi_in299;
															phi231 = *(uint64_t*)(phi249 + 104);
															phi232 = phi249;
															phi_in233 = phi_in300;
															int64_t anon302 = (__sext int64_t)*(uint32_t*)(anon257 + 6301640);
															uint32_t* anon301 = (uint32_t*)((anon302 << 2) + 6300992);
															if (*(uint32_t*)(phi249 + 64) < *anon301)
															{
																*anon301 = *(uint32_t*)(phi249 + 112);
																uint32_t phi303 = *(uint32_t*)(phi249 + 88);
																phi224 = *(uint32_t*)(phi249 + 112);
																uint32_t phi304 = phi_in293;
																uint32_t phi305 = phi_in143;
																phi241 = phi220;
																uint32_t phi_in306 = phi221;
																phi_in208 = phi_in208;
																uint64_t phi_in307 = phi_in297;
																phi230 = phi_in299;
																uint64_t phi_in308 = *(uint64_t*)(phi249 + 104);
																uint64_t phi_in309 = phi_in300;
																int64_t anon311 = anon302 * 12;
																int64_t anon310 = (__sext int64_t)*(uint32_t*)(anon311 + 6301636);
																if (*(uint32_t*)(phi249 + 112) < *(uint32_t*)((anon310 << 2) + 6300992))
																{
																	*(uint64_t*)(phi249 + 96) = phi_in299;
																	*(uint64_t*)(phi249 + 80) = phi_in297;
																	uint64_t anon312 = (__zext uint64_t)*(uint32_t*)(phi249 + 120);
																	w(4197948, anon12, anon310, anon312, anon312);
																	phi292 = *(uint32_t*)(arg1 - 104);
																	phi303 = *(uint32_t*)(arg1 - 104);
																	phi_in237 = *(uint32_t*)(arg1 - 104);
																	phi224 = *(uint32_t*)(arg1 - 80);
																	phi304 = *(uint32_t*)(arg1 - 104);
																	phi305 = *(uint32_t*)(arg1 - 104);
																	phi241 = *(uint32_t*)(arg1 - 104);
																	phi_in306 = *(uint32_t*)(arg1 - 104);
																	phi_in208 = *(uint32_t*)(arg1 - 104);
																	phi_in296 = *(uint32_t*)(arg1 - 104);
																	phi_in307 = *(uint64_t*)(arg1 - 112);
																	phi298 = *(uint32_t*)(arg1 - 104);
																	phi230 = *(uint64_t*)(arg1 - 96);
																	phi_in308 = *(uint64_t*)(arg1 - 88);
																	phi249 = anon12;
																	phi_in309 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
																}
																*(uint32_t*)(phi232 + 88) = phi292;
																phi218 = phi303;
																phi167 = phi224;
																phi_in202 = phi304;
																phi_in143 = phi305;
																phi220 = phi241;
																*(uint64_t*)(phi232 + 80) = phi_in307;
																phi229 = phi298;
																*(uint64_t*)(phi232 + 96) = phi230;
																phi232 = phi249;
																phi217 = *(uint32_t*)(phi232 + 88);
																phi_in124 = phi_in237;
																phi_in219 = phi167;
																phi186 = phi_in202;
																phi221 = phi_in306;
																phi147 = phi167;
																phi222 = phi167;
																phi_in207 = phi167;
																phi223 = phi_in208;
																phi224 = phi167;
																phi225 = phi167;
																phi174 = phi_in296;
																phi226 = phi167;
																phi227 = phi167;
																phi228 = *(uint64_t*)(phi232 + 80);
																phi230 = *(uint64_t*)(phi232 + 96);
																phi231 = phi_in308;
																phi160 = phi167;
																phi196 = phi167;
																phi216 = phi167;
																phi_in233 = phi_in309;
																int64_t anon313 = (__sext int64_t)*(uint32_t*)(anon311 + 6301640);
																if (phi167 < *(uint32_t*)((anon313 << 2) + 6300992))
																{
																	*(uint32_t*)(phi232 + 112) = phi167;
																	*(uint64_t*)(phi232 + 104) = phi_in308;
																	uint64_t anon314 = (__zext uint64_t)*(uint32_t*)(phi232 + 120);
																	w(4197231, anon12, anon313, anon314, anon314);
																	phi217 = alloca1.field8;
																	phi218 = alloca1.field8;
																	phi_in124 = alloca1.field8;
																	phi_in219 = alloca1.field12;
																	phi186 = alloca1.field8;
																	phi_in143 = alloca1.field8;
																	phi167 = alloca1.field12;
																	phi220 = alloca1.field8;
																	phi221 = alloca1.field8;
																	phi147 = alloca1.field12;
																	phi222 = alloca1.field12;
																	phi_in207 = alloca1.field12;
																	phi223 = alloca1.field8;
																	phi224 = alloca1.field12;
																	phi225 = alloca1.field12;
																	phi174 = alloca1.field8;
																	phi226 = alloca1.field12;
																	phi227 = alloca1.field12;
																	phi228 = alloca1.field7;
																	phi229 = alloca1.field8;
																	phi230 = alloca1.field10;
																	phi231 = alloca1.field11;
																	phi160 = alloca1.field12;
																	phi196 = alloca1.field12;
																	phi216 = alloca1.field12;
																	phi232 = anon12;
																	phi_in233 = (__zext uint64_t)alloca1.field8;
																}
															}
														}
														phi_in139 = phi217;
														uint32_t phi_in315 = phi218;
														phi168 = phi220;
														phi_in88 = phi221;
														phi170 = phi222;
														phi_in130 = phi223;
														phi_in92 = phi224;
														phi173 = phi225;
														uint32_t phi_in316 = phi226;
														phi_in96 = phi227;
														phi_in156 = phi228;
														phi_in175 = phi229;
														phi_in158 = phi230;
														phi_in159 = phi231;
														phi_in161 = phi196;
														phi_in100 = phi216;
														phi178 = phi232;
														phi163 = phi_in139;
														phi164 = phi_in315;
														phi165 = phi_in124;
														phi_in166 = phi_in219;
														phi142 = phi186;
														phi_in86 = phi_in143;
														phi169 = phi_in88;
														phi128 = phi147;
														phi171 = phi_in207;
														phi_in130 = phi_in130;
														phi172 = phi_in92;
														phi95 = phi_in316;
														phi133 = phi_in156;
														phi176 = phi_in158;
														phi177 = phi160;
														phi179 = phi_in233;
														phi182 = phi182 + 4;
														phi_in183 = phi_in139;
														phi184 = phi_in315;
														phi185 = phi_in124;
														phi141 = phi_in219;
														phi187 = phi_in143;
														phi_in144 = phi167;
														phi145 = phi168;
														phi146 = phi_in88;
														phi148 = phi170;
														phi188 = phi_in207;
														phi150 = phi_in130;
														phi151 = phi_in92;
														phi189 = phi173;
														phi190 = phi174;
														phi191 = phi_in316;
														phi192 = phi_in96;
														phi193 = phi_in156;
														phi_in157 = phi_in175;
														phi_in194 = phi_in158;
														*(uint64_t*)(phi_in195 + 112) = phi_in159;
														phi196 = phi_in161;
														phi197 = phi_in100;
														phi_in198 = phi178;
														phi199 = phi_in233;
													}
													while (phi182 != 8);
												}
												phi103 = phi163;
												phi104 = phi164;
												phi84 = phi165;
												phi_in60 = phi142;
												phi62 = phi167;
												uint32_t phi_in317 = phi168;
												phi_in64 = phi169;
												phi111 = phi170;
												phi112 = phi171;
												phi_in69 = phi172;
												phi_in113 = phi173;
												phi_in94 = phi174;
												phi116 = phi176;
												phi117 = phi177;
												phi_in101 = phi178;
												phi102 = phi179;
												phi105 = phi_in166;
												phi_in60 = phi_in60;
												phi106 = phi_in86;
												phi_in107 = phi_in317;
												phi_in108 = phi_in159;
												phi_in109 = phi133;
												phi_in110 = phi_in64;
												phi89 = phi128;
												phi68 = phi_in130;
												phi_in69 = phi_in69;
												phi114 = phi_in94;
												phi_in72 = phi95;
												phi_in73 = phi_in96;
												phi115 = phi_in175;
												phi118 = phi_in161;
												phi_in119 = phi_in101;
												phi122 = phi122 + 4;
												phi_in123 = phi103;
												phi56 = phi104;
												phi_in124 = phi84;
												phi85 = phi_in166;
												phi125 = phi_in60;
												phi126 = phi_in86;
												phi_in127 = phi62;
												phi63 = phi_in317;
												phi_in88 = phi_in64;
												phi_in129 = phi111;
												phi91 = phi112;
												phi_in92 = phi_in69;
												phi_in131 = phi_in113;
												phi_in132 = phi_in94;
												phi134 = phi_in175;
												phi_in97 = phi116;
												phi135 = phi_in159;
												phi98 = phi117;
												phi136 = phi_in161;
												phi_in78 = phi_in100;
												phi_in137 = phi_in101;
												phi138 = phi102;
											}
											while (phi122 != 8);
										}
										phi318 = phi103;
										phi_in319 = phi104;
										uint32_t phi_in320 = phi84;
										uint32_t phi_in321 = phi106;
										phi322 = phi_in109;
										uint32_t phi_in323 = phi68;
										uint32_t phi_in324 = phi114;
										uint32_t phi_in325 = phi115;
										uint64_t phi_in326 = phi116;
										uint64_t phi_in327 = phi102;
										phi328 = phi_in320;
										phi_in329 = phi_in60;
										phi_in330 = phi_in321;
										phi44 = phi_in107;
										phi331 = phi_in326;
										phi_in332 = phi_in110;
										phi333 = phi_in323;
										phi334 = phi_in324;
										phi335 = phi_in325;
										phi336 = phi_in119;
										phi337 = phi_in327;
										if (phi322 != 8)
										{
											phi_in55 = phi318;
											phi56 = phi_in319;
											phi57 = phi_in320;
											phi58 = phi105;
											phi61 = phi_in321;
											phi63 = phi_in107;
											phi_in64 = phi_in110;
											phi65 = phi89;
											phi66 = phi111;
											phi_in67 = phi112;
											phi68 = phi_in323;
											phi70 = phi_in113;
											phi_in71 = phi_in324;
											phi_in74 = phi_in325;
											phi_in75 = phi_in326;
											phi_in76 = phi117;
											phi77 = phi118;
											phi_in78 = phi_in100;
											phi79 = phi_in119;
											phi_in80 = phi322 + 4;
											phi81 = phi_in108;
											phi82 = phi_in327;
										}
									}
									while (phi322 != 8);
								}
								else 
								{
									phi318 = phi39;
									phi_in319 = phi40;
									phi328 = phi41;
									phi_in329 = phi42;
									phi_in330 = phi43;
									phi44 = phi44;
									phi331 = phi51;
									phi_in332 = phi45;
									phi333 = phi46;
									phi334 = phi47;
									phi335 = phi48;
									phi336 = phi49;
									phi337 = phi52 & 0xffffffff;
								}
								phi338 = phi318;
								phi339 = phi328;
								phi_in340 = phi333;
								phi_in341 = phi334;
								phi342 = phi336;
								phi_in343 = phi337;
								if (phi50 != 8)
								{
									phi39 = phi338;
									phi40 = phi_in319;
									phi41 = phi339;
									phi42 = phi_in329;
									phi43 = phi_in330;
									phi45 = phi_in332;
									phi46 = phi_in340;
									phi47 = phi_in341;
									phi48 = phi335;
									phi49 = phi342;
									phi50 = phi50 + 4;
									phi51 = phi331;
									phi52 = phi_in343;
								}
							}
							while (phi50 != 8);
							phi344 = phi_in319;
							phi345 = phi_in329;
							phi346 = phi_in330;
							phi347 = phi44;
							phi_in348 = *(uint64_t*)(phi342 + 72);
							phi349 = phi_in332;
							phi_in350 = phi_in340;
							phi_in351 = phi_in341;
							phi352 = phi_in343;
						}
						else 
						{
							phi338 = phi25;
							phi344 = phi26;
							phi339 = phi27;
							phi345 = phi28;
							phi346 = phi29;
							phi347 = phi30;
							phi_in348 = *(uint64_t*)(phi36 + 72);
							phi349 = phi31;
							phi_in350 = phi32;
							phi_in351 = phi33;
							phi335 = phi34;
							phi352 = phi35 & 0xffffffff;
							phi342 = phi36;
						}
						phi353 = phi347;
						phi354 = phi_in348;
						if (phi354 != 8)
						{
							phi25 = phi338;
							phi26 = phi344;
							phi27 = phi339;
							phi28 = phi345;
							phi29 = phi346;
							phi30 = phi353;
							phi31 = phi349;
							phi32 = phi_in350;
							phi33 = phi_in351;
							phi34 = phi335;
							phi35 = phi352;
							*(uint64_t*)(phi36 + 72) = phi354 + 4;
							phi36 = phi342;
						}
					}
					while (phi354 != 8);
					phi_in355 = *(uint32_t*)(phi342 + 68);
					phi_in356 = phi353;
					phi_in357 = *(uint64_t*)(phi342 + 56);
					phi358 = (__zext uint64_t)phi353;
					phi_in359 = *(uint32_t*)(phi342 + 68);
					phi360 = *(uint32_t*)(phi342 + 68);
				}
				else 
				{
					phi_in355 = phi_in15;
					phi_in356 = phi_in22;
					phi_in357 = *(uint64_t*)(phi21 + 56);
					phi358 = phi17 & 0xffffffff;
					phi_in359 = *(uint32_t*)(phi21 + 68);
					phi353 = phi19;
					phi360 = phi20;
					phi342 = phi21;
				}
				phi_in361 = phi_in355;
				phi362 = phi_in357;
				phi_in363 = phi342;
				if (phi362 != 8)
				{
					phi_in15 = phi_in361;
					phi16 = phi_in356;
					phi17 = phi358;
					phi18 = phi_in359;
					phi19 = phi353;
					phi20 = phi360;
					*(uint64_t*)(phi21 + 56) = phi362 + 4;
					phi21 = phi_in363;
				}
			}
			while (phi362 != 8);
			phi364 = *(uint64_t*)(phi_in363 + 48);
			phi4 = phi_in356;
			phi365 = phi_in361;
			phi7 = (__zext uint64_t)phi_in356;
			phi_in355 = phi_in361;
			phi366 = phi_in356;
			phi367 = phi_in363;
		}
		else 
		{
			phi364 = *(uint64_t*)(phi11 + 48);
			phi4 = phi4;
			phi365 = phi5;
			phi7 = phi7 & 0xffffffff;
			phi_in355 = *anon13;
			phi366 = phi9;
			phi367 = phi11;
		}
		if (phi364 != 8)
		{
			phi5 = phi365;
			phi8 = phi_in355;
			phi9 = phi366;
			phi10 = phi364 + 4;
			phi11 = phi367;
		}
	}
	while (phi364 != 8);
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
					if ((*anon16 >> 31 | (__zext uint32_t)(*anon16 == 0)) == 0)
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
		uint64_t phi23;
		uint32_t anon24;
		uint32_t anon40;
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
			uint32_t phi_in11;
			uint32_t phi12;
			uint32_t phi13;
			uint32_t phi14;
			uint32_t phi15;
			uint32_t* anon16;
			uint32_t phi_in17;
			uint32_t phi19;
			uint32_t phi20;
			uint32_t phi21;
			uint64_t phi9 = phi_in8;
			uint32_t* anon10 = (uint32_t*)(phi9 + 4);
			if (*anon10 < *phi7)
			{
				*phi7 = *anon10;
				*anon10 = *phi7;
				phi_in11 = *phi7;
				phi12 = *phi7;
				phi13 = *anon10;
				phi14 = *anon10;
				anon16 = (uint32_t*)(phi9 - 4);
				phi15 = *anon16;
			}
			else 
			{
				phi_in17 = *anon16;
				if (*phi7 < *anon16)
				{
					phi_in11 = *anon10 & 0xf;
					phi12 = *anon10;
					phi13 = *phi7 & 0xf;
					phi14 = *phi7;
					phi15 = *anon16 & 0xf;
				}
			}
			if (*anon10 >= *phi7 && *phi7 < *anon16 || *anon10 < *phi7 && *anon10 < *anon16)
			{
				uint32_t phi_in18 = phi12;
				phi19 = phi13;
				*anon16 = phi14;
				*phi7 = phi15;
				*phi7 = phi_in11;
				phi20 = *anon16;
				phi21 = phi_in18;
			}
			if (*anon10 < *phi7)
			{
				if (*anon10 >= *anon16)
				{
					phi19 = *anon16 & 0xf;
					*phi7 = *phi7;
					phi20 = *anon10;
					phi21 = *phi7;
				}
			}
			if (*anon10 >= *phi7 && *phi7 < *anon16 || *anon10 < *phi7 && *anon10 < *anon16 || *anon10 < *phi7 && *anon10 >= *anon16)
			{
				phi_in17 = phi19;
				*anon10 = phi20;
				if (phi21 - *anon10 <= 4294967295)
				{
					phi_in17 = *(uint32_t*)((phi9 & 0xc) - 4);
				}
			}
			uint32_t phi22 = phi_in17;
			phi23 = 6301636;
			anon24 = phi22 + 1 & 0xff;
			if (anon24 != 0)
			{
				phi23 = 6301636;
				uint64_t anon25 = phi9 + 12;
				phi7 = (uint32_t*)(anon25 & 0xc);
				phi_in8 = anon25;
				if (phi9 == 6301984)
				{
					break;
				}
			}
		}
		while (anon24 != 0);
		do
		{
			uint32_t phi28;
			uint32_t phi29;
			uint32_t phi30;
			uint32_t phi31;
			uint32_t phi32;
			uint32_t* anon33;
			uint32_t phi_in34;
			uint32_t phi35;
			uint32_t phi36;
			uint32_t phi37;
			uint32_t phi38;
			uint32_t* anon26 = (uint32_t*)(phi23 + 4);
			uint32_t* anon27 = (uint32_t*)phi23;
			if (*anon26 < *anon27)
			{
				*anon27 = *anon26;
				*anon26 = *anon27;
				phi28 = *anon27;
				phi29 = *anon27;
				phi30 = *anon26;
				phi31 = *anon26;
				anon33 = (uint32_t*)(phi23 - 4);
				phi32 = *anon33;
			}
			else 
			{
				phi_in34 = *anon33;
				if (*anon27 < *anon33)
				{
					phi28 = *anon26 & 0xf;
					phi29 = *anon26;
					phi30 = *anon27 & 0xf;
					phi31 = *anon27;
					phi32 = *anon33 & 0xf;
				}
			}
			if (*anon26 >= *anon27 && *anon27 < *anon33 || *anon26 < *anon27 && *anon26 < *anon33)
			{
				phi35 = phi28;
				phi36 = phi29;
				phi37 = phi30;
				*anon33 = phi31;
				*anon27 = phi32;
				phi38 = *anon33;
			}
			if (*anon26 < *anon27)
			{
				if (*anon26 >= *anon33)
				{
					phi37 = *anon33 & 0xf;
					phi35 = *anon27;
					phi38 = *anon26;
					phi36 = *anon27;
				}
			}
			if (*anon26 >= *anon27 && *anon27 < *anon33 || *anon26 < *anon27 && *anon26 < *anon33 || *anon26 < *anon27 && *anon26 >= *anon33)
			{
				phi_in34 = phi37;
				*anon27 = phi35;
				*anon26 = phi38;
				if (phi36 - *anon26 <= 4294967295)
				{
					phi_in34 = *(uint32_t*)((phi23 & 0xf) - 4);
				}
			}
			uint32_t phi39 = phi_in34;
			anon40 = phi39 + 1 & 0xff;
			if (anon40 != 0)
			{
				phi23 = phi23 + 12;
			}
		}
		while (anon40 != 0);
	}
}
void q(uint64_t arg0, uint64_t arg1)
{
	struct { uint8_t field0[56]; uint64_t field1; } alloca1;
	uint64_t phi4;
	uint32_t phi5;
	uint64_t phi_in6;
	uint32_t* anon7;
	uint32_t dispatch13;
	uint32_t phi16;
	uint32_t anon18;
	alloca1.field1 = arg0;
	uint32_t dispatch2 = 0;
	uint32_t* anon3 = (uint32_t*)0x602928;
	if (*anon3 != 0)
	{
		uint16_t** anon12;
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
		uint32_t anon11 = *anon3 >> 31 | (__zext uint32_t)(*anon3 == 0);
		if (anon8 != 10 || anon11 != 0 && anon8 == 10)
		{
			anon12 = __ctype_b_loc();
			dispatch13 = 0;
		}
		uint64_t* anon14 = (uint64_t*)anon12;
		if ((*(uint8_t*)(*anon14 + ((__sext int64_t)anon8 << 1 | 1)) & 8) != 0)
		{
			if (anon8 != 10 || anon11 != 0 && anon8 == 10)
			{
				uint32_t anon15 = _IO_getc(*anon10);
				uint32_t anon17 = (anon9 << 24 >> 24) - 48;
				phi16 = anon17;
				if ((*(uint8_t*)(*anon14 + ((__zext uint64_t)anon15 << 56 >> 55 | 1)) & 8) != 0)
				{
					anon18 = anon15 >> 8;
					phi16 = (anon18 << 24 >> 24) + anon17 * 10 - 48;
				}
			}
		}
	}
	while (true)
	{
		uint64_t phi19;
		uint8_t* anon20;
		dispatch2 = 4;
		if (*(uint32_t*)(((__sext int64_t)phi16 << 2) + 6300992) != 0)
		{
			phi19 = (__zext uint64_t)phi16;
		}
		if (dispatch2 == 4)
		{
			puts((uint8_t*)0x401cd5);
			*anon7 = *anon3 * 100 + *anon7 + 500;
			anon20 = (uint8_t*)0x401cf1;
			printf(anon20);
			exit(0);
		}
		uint64_t anon21 = random();
		dispatch2 = 2;
		if (dispatch2 == 2)
		{
			puts((uint8_t*)0x401dd0);
			*anon7 = *anon7 - 100;
			printf(anon20);
			exit(0);
		}
		if ((uint32_t)anon21 + ((uint32_t)((anon21 & 0xffffffff) / 3) - (uint32_t)(anon21 << 32 >> 32 >> 31)) * 4294967293 != 1)
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
			w(4199968, (uint64_t)&alloca1, anon22 + (((anon22 & 0xffffffff) * 2290649225 + anon23 >> 32 >> 4) - (anon23 >> 32 >> 31)) * 4294967266 & 0xffffffff, 0, 0);
			*anon7 = *anon7 - 100;
			phi19 = phi_in6;
		}
		if (*(uint32_t*)(((__sext int64_t)phi16 << 2) + 6300992) != 0 || (uint32_t)anon21 + ((uint32_t)((anon21 & 0xffffffff) / 3) - (uint32_t)(anon21 << 32 >> 32 >> 31)) * 4294967293 != 1)
		{
			phi4 = phi19;
			dispatch2 = 1;
		}
		if ((uint8_t)anon18 != 10)
		{
			if (*(uint32_t*)(((__sext int64_t)phi16 << 2) + 6300992) != 0 || (uint32_t)anon21 + ((uint32_t)((anon21 & 0xffffffff) / 3) - (uint32_t)(anon21 << 32 >> 32 >> 31)) * 4294967293 != 1)
			{
				phi5 = phi5 - 20;
				dispatch13 = 1;
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
				if (anon19 != *anon20 || anon19 == *anon20 && *anon21 == 3 || anon19 == *anon20 && *anon21 == 3)
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
			if (*(uint32_t*)((anon24 << 2) + 6300864) != 0 || *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon26 + 6301636) << 2) + 6300864) != 0 && *(uint32_t*)((anon24 << 2) + 6300864) == 0 || *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon26 + 6301640) << 2) + 6300864) != 0 && *(uint32_t*)((anon24 << 2) + 6300864) == 0 && *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon26 + 6301636) << 2) + 6300864) == 0)
			{
				puts((uint8_t*)0x401d8e);
				phi27 = (__sext int64_t)*anon25;
			}
			if (*(uint32_t*)((phi27 << 2) + 6301504) != 0 || *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon26 + 6301636) << 2) + 6301504) != 0 && *(uint32_t*)((phi27 << 2) + 6301504) == 0 || *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon26 + 6301640) << 2) + 6301504) != 0 && *(uint32_t*)((phi27 << 2) + 6301504) == 0 && *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon26 + 6301636) << 2) + 6301504) == 0)
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
		if (anon39 != 0 && anon35 || anon39 != 0 && anon36 || anon39 != 0 && (!anon37) || anon34 != 0 && anon29)
		{
			uint32_t phi42;
			uint32_t anon41 = _IO_getc(*anon31);
			uint32_t anon43 = (uint32_t)(anon40 + 4294967248);
			phi42 = anon43;
			uint32_t anon44 = anon41 << 24 >> 24;
			if ((*(uint8_t*)(*(uint64_t*)phi33 + ((__zext uint64_t)anon44 << 1 | 1)) & 8) != 0)
			{
				phi42 = anon43 * 10 + anon44 - 48;
			}
			if (*anon25 != phi42)
			{
				if (*(uint32_t*)(anon26 + 6301636) != phi42)
				{
					phi_in9 = phi11;
					phi_in10 = phi12;
				}
			}
			if (*anon25 == phi42 || *anon25 != phi42 && *(uint32_t*)(anon26 + 6301636) == phi42 || *anon25 != phi42 && *(uint32_t*)(anon26 + 6301636) != phi42 && *(uint32_t*)(anon26 + 6301640) == phi42)
			{
				int64_t anon45 = (__sext int64_t)phi42;
				phi_in9 = anon45;
				phi_in10 = anon45;
			}
			break;
		}
		if (*(uint32_t*)(anon17 + 6300992) != 0)
		{
			if (*(uint32_t*)(anon17 + 6300864) == 0)
			{
				uint32_t* anon46 = (uint32_t*)(anon17 + 6301504);
				if (*anon46 != 0)
				{
					if (anon19 != *anon20 || anon19 == *anon20 && *anon21 == 3 || anon19 == *anon20 && *anon21 == 3)
					{
						*anon46 = 0;
						uint64_t anon48 = random();
						uint32_t anon47 = (uint32_t)anon48;
						*(uint32_t*)(((__sext int64_t)(anon47 + (((uint32_t)((anon48 & 0xffffffff) * 2290649225 >> 32) + anon47 >> 4) - (anon47 >> 31)) * 4294967266) << 2) + 6301504) = 1;
						uint64_t anon49 = random();
						printf((uint8_t*)0x401e28);
						*anon15 = *anon15 - 10;
						uint32_t anon51 = (uint32_t)anon49;
						int64_t anon50 = (__sext int64_t)(anon51 + ((uint32_t)((anon49 & 0xffffffff) * 2290649225 + (anon49 << 32) >> 36) - (anon51 >> 31)) * 4294967266);
						phi_in9 = anon50;
						phi_in10 = anon50;
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
