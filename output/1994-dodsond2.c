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
		if (*anon4 < *phi1 && *anon4 < *anon8 || *anon4 >= *phi1 && *phi1 < *anon8)
		{
			uint32_t phi_in12 = phi5;
			uint32_t phi_in13 = phi6;
			*phi1 = *anon8;
			*anon8 = phi_in13;
			phi7 = phi_in13;
			phi9 = phi_in12;
			phi10 = *anon8;
		}
		if (*anon4 < *phi1 && *anon4 < *anon8 || *anon4 >= *phi1 && *phi1 < *anon8 || *anon4 >= *anon8 && *anon4 < *phi1)
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
void w(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4)
{
	struct { uint8_t field0[4]; uint32_t field1; uint64_t field2; uint8_t field3[8]; uint32_t field4; uint32_t field5; uint8_t field6[48]; uint64_t field7; uint32_t field8; uint8_t field9[4]; uint64_t field10; uint64_t field11; uint32_t field12; uint8_t field13[8]; uint32_t field14; uint8_t field15[56]; uint64_t field16; } alloca1;
	uint32_t phi5;
	uint64_t phi10;
	uint64_t phi381;
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
	int64_t anon9 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi10 + 48) + *(uint64_t*)(phi10 + 8) + 6301632);
	uint32_t* anon8 = (uint32_t*)((anon9 << 2) + 6300992);
	*anon8 = anon6;
	uint32_t phi11 = anon3;
	*(uint64_t*)(phi10 + 48) = 0;
	uint64_t anon12 = (uint64_t)&alloca1;
	phi10 = anon12;
	do
	{
		uint32_t phi382;
		uint32_t phi383;
		uint64_t phi384;
		uint32_t phi385;
		uint32_t phi386;
		if (phi11 < *anon8)
		{
			uint64_t phi_in370;
			uint32_t phi_in378;
			uint32_t phi_in379;
			uint64_t phi380;
			*(uint64_t*)(phi10 + 16) = anon9 * 12;
			*(uint32_t*)(phi10 + 40) = (uint32_t)phi7 + 5;
			uint32_t phi_in13 = phi5;
			uint32_t phi14 = phi4;
			uint64_t phi15 = (__zext uint64_t)phi4;
			uint32_t phi16 = phi5;
			uint32_t phi17 = phi4;
			uint32_t phi18 = phi5;
			*(uint64_t*)(phi19 + 56) = 0;
			uint64_t phi19 = phi10;
			do
			{
				uint32_t phi_in371;
				uint32_t phi_in372;
				uint64_t phi_in373;
				uint64_t phi374;
				uint32_t phi375;
				uint32_t phi376;
				uint32_t phi_in377;
				uint32_t phi_in20 = phi14;
				*(uint32_t*)(phi19 + 68) = phi16;
				int64_t anon22 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi19 + 56) + *(uint64_t*)(phi19 + 16) + 6301632);
				uint32_t* anon21 = (uint32_t*)((anon22 << 2) + 6300992);
				if (phi18 < *anon21)
				{
					uint64_t phi369;
					*anon21 = *(uint32_t*)(phi19 + 4);
					*(uint64_t*)(phi19 + 32) = anon22 * 12;
					*(uint32_t*)(phi19 + 44) = (uint32_t)phi15 + 6;
					uint32_t phi23 = phi17;
					uint32_t phi24 = phi17;
					uint32_t phi25 = phi17;
					uint32_t phi26 = phi17;
					uint32_t phi27 = phi17;
					uint32_t phi28 = phi17;
					uint32_t phi29 = phi17;
					uint32_t phi30 = phi17;
					uint32_t phi31 = phi17;
					uint32_t phi32 = phi17;
					uint64_t phi33 = (__zext uint64_t)phi17;
					*(uint64_t*)(phi34 + 72) = 0;
					uint64_t phi34 = phi19;
					do
					{
						uint32_t phi357;
						uint64_t phi360;
						uint32_t phi_in361;
						uint32_t phi_in362;
						uint32_t phi363;
						uint32_t phi364;
						uint64_t phi_in365;
						uint32_t phi366;
						uint32_t phi367;
						uint64_t phi368;
						int64_t anon36 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi34 + 72) + *(uint64_t*)(phi34 + 32) + 6301632);
						uint32_t* anon35 = (uint32_t*)((anon36 << 2) + 6300992);
						if (*(uint32_t*)(phi34 + 4) < *anon35)
						{
							uint32_t phi_in348;
							uint32_t phi_in349;
							uint32_t phi_in352;
							uint32_t phi_in353;
							uint32_t phi_in354;
							uint32_t phi_in355;
							uint32_t phi_in356;
							uint32_t phi_in358;
							uint64_t phi_in359;
							*anon35 = *(uint32_t*)(phi34 + 24);
							*(uint32_t*)(phi34 + 64) = (uint32_t)phi33 + 7;
							uint32_t phi37 = phi23;
							uint32_t phi38 = phi24;
							uint32_t phi39 = phi25;
							uint32_t phi40 = phi26;
							uint32_t phi41 = phi27;
							uint32_t phi42 = phi28;
							uint32_t phi43 = phi29;
							uint32_t phi44 = phi30;
							uint32_t phi45 = phi31;
							uint32_t phi46 = phi32;
							uint64_t phi47 = phi34;
							uint64_t phi48 = 0;
							uint64_t phi49 = anon36 * 12;
							uint64_t phi50 = phi33;
							do
							{
								uint32_t phi336;
								uint32_t phi338;
								uint32_t phi341;
								uint64_t phi343;
								uint32_t phi344;
								uint32_t phi345;
								uint32_t phi346;
								uint32_t phi347;
								uint32_t phi350;
								uint64_t phi351;
								int64_t anon52 = (__sext int64_t)*(uint32_t*)(phi48 + phi49 + 6301632);
								uint32_t* anon51 = (uint32_t*)((anon52 << 2) + 6300992);
								if (*(uint32_t*)(phi47 + 24) < *anon51)
								{
									uint32_t phi_in56;
									uint64_t phi339;
									*anon51 = *(uint32_t*)(phi47 + 28);
									uint32_t phi_in53 = phi37;
									uint32_t phi54 = phi38;
									uint32_t phi_in55 = phi39;
									uint32_t anon57 = (uint32_t)phi50 + 8;
									phi_in56 = anon57;
									uint32_t phi58 = phi40;
									uint32_t phi59 = phi41;
									uint32_t phi60 = anon57;
									uint32_t phi_in61 = phi42;
									uint32_t phi62 = phi43;
									uint32_t phi63 = anon57;
									uint32_t phi64 = anon57;
									uint32_t phi65 = anon57;
									uint32_t phi_in66 = phi44;
									uint32_t phi_in67 = anon57;
									uint32_t phi_in68 = anon57;
									uint32_t phi_in69 = phi45;
									uint32_t phi70 = anon57;
									uint32_t phi_in71 = anon57;
									uint32_t phi_in72 = phi46;
									uint64_t phi_in73 = phi49;
									uint32_t phi74 = anon57;
									uint32_t phi75 = anon57;
									uint32_t phi76 = anon57;
									uint64_t phi77 = phi47;
									uint64_t phi78 = 0;
									uint64_t phi79 = anon52 * 12;
									uint64_t phi80 = phi50;
									do
									{
										uint32_t phi_in81 = phi54;
										uint32_t phi_in82 = phi_in56;
										uint32_t phi_in83 = phi58;
										uint32_t phi84 = phi59;
										uint32_t phi_in85 = phi60;
										uint32_t phi_in86 = phi62;
										uint32_t phi_in87 = phi63;
										uint32_t phi_in88 = phi64;
										uint32_t phi_in89 = phi65;
										uint32_t phi_in90 = phi_in68;
										uint32_t phi_in91 = phi_in69;
										uint32_t phi_in92 = phi70;
										uint32_t phi_in93 = phi_in71;
										uint64_t phi_in94 = phi_in73;
										uint32_t phi_in95 = phi74;
										uint32_t phi96 = phi75;
										uint32_t phi_in97 = phi76;
										uint64_t phi_in98 = phi78;
										uint32_t phi99 = phi_in81;
										uint32_t phi100 = phi_in82;
										uint32_t phi101 = phi_in83;
										uint32_t phi102 = phi84;
										phi60 = phi_in85;
										uint32_t phi103 = phi_in61;
										uint64_t phi_in104 = phi79;
										uint32_t phi105 = phi_in86;
										uint32_t phi106 = phi_in87;
										uint32_t phi_in107 = phi_in88;
										uint32_t phi_in108 = phi_in89;
										uint32_t phi109 = phi_in66;
										uint32_t phi110 = phi_in67;
										uint32_t phi111 = phi_in90;
										uint32_t phi112 = phi_in91;
										phi70 = phi_in92;
										uint32_t phi113 = phi_in93;
										uint32_t phi_in114 = phi_in72;
										uint64_t phi115 = phi_in94;
										uint32_t phi116 = phi_in95;
										phi75 = phi96;
										uint32_t phi117 = phi_in97;
										uint64_t phi_in118 = phi77;
										int64_t anon120 = (__sext int64_t)*(uint32_t*)(phi_in98 + phi79 + 6301632);
										uint32_t* anon119 = (uint32_t*)((anon120 << 2) + 6300992);
										if (*(uint32_t*)(phi77 + 28) < *anon119)
										{
											*anon119 = *(uint32_t*)(phi77 + 40);
											*(uint32_t*)(phi77 + 120) = (uint32_t)phi80 + 9;
											uint64_t phi121 = 0;
											uint32_t phi_in122 = phi_in53;
											uint32_t phi_in123 = phi_in81;
											uint32_t phi124 = phi_in55;
											uint32_t phi125 = phi_in82;
											uint32_t phi_in126 = phi_in83;
											uint32_t phi_in127 = phi_in61;
											uint32_t phi_in128 = phi_in86;
											uint32_t phi_in129 = phi_in88;
											uint32_t phi_in130 = phi_in89;
											uint32_t phi_in131 = phi_in66;
											uint32_t phi_in132 = phi_in67;
											uint32_t phi133 = phi_in90;
											uint32_t phi134 = phi_in91;
											uint32_t phi135 = phi_in92;
											uint32_t phi136 = phi_in93;
											uint64_t phi_in137 = phi_in98;
											uint32_t phi_in138 = phi_in72;
											uint64_t phi139 = phi79;
											uint32_t phi_in140 = phi_in95;
											uint64_t phi141 = phi80 & 0xffffffff;
											do
											{
												uint32_t phi_in142 = phi_in122;
												uint32_t phi_in143 = phi124;
												uint32_t phi_in144 = phi125;
												uint32_t phi_in145 = phi84;
												uint32_t phi_in146 = phi_in85;
												uint32_t phi_in147 = phi_in127;
												uint32_t phi_in148 = phi_in128;
												uint32_t phi149 = phi_in130;
												uint32_t phi150 = phi133;
												uint32_t phi151 = phi134;
												uint32_t phi152 = phi135;
												uint32_t phi153 = phi136;
												uint64_t phi_in154 = phi_in137;
												uint32_t phi155 = phi_in138;
												uint64_t phi_in156 = phi_in94;
												uint64_t phi_in157 = phi139;
												uint32_t phi_in158 = phi_in140;
												uint32_t phi_in159 = phi96;
												uint32_t phi160 = phi_in97;
												uint64_t phi_in161 = phi77;
												uint64_t phi_in162 = phi141;
												uint32_t phi163 = phi_in142;
												uint32_t phi164 = phi_in123;
												uint32_t phi165 = phi_in143;
												uint32_t phi166 = phi_in144;
												uint32_t phi_in167 = phi_in126;
												uint32_t phi_in168 = phi_in145;
												uint32_t phi169 = phi_in146;
												uint32_t phi170 = phi_in147;
												uint32_t phi171 = phi_in148;
												uint32_t phi_in172 = phi_in87;
												uint32_t phi173 = phi_in129;
												uint32_t phi_in174 = phi149;
												phi109 = phi_in131;
												uint32_t phi175 = phi_in132;
												uint32_t phi176 = phi150;
												uint32_t phi177 = phi151;
												phi135 = phi152;
												phi_in93 = phi153;
												uint64_t phi178 = phi_in154;
												uint32_t phi179 = phi155;
												phi_in94 = phi_in156;
												uint64_t phi_in180 = phi_in157;
												phi_in140 = phi_in158;
												uint32_t phi181 = phi_in159;
												uint64_t phi182 = phi_in161;
												phi141 = phi_in162;
												int64_t anon184 = (__sext int64_t)*(uint32_t*)(phi121 + anon120 * 12 + 6301632);
												uint32_t* anon183 = (uint32_t*)((anon184 << 2) + 6300992);
												if (*(uint32_t*)(phi_in161 + 40) < *anon183)
												{
													uint64_t phi_in192;
													*anon183 = *(uint32_t*)(phi_in161 + 44);
													uint64_t phi185 = 0;
													uint32_t phi_in186 = phi_in142;
													uint32_t phi187 = phi_in144;
													uint32_t phi188 = phi_in126;
													uint32_t phi189 = phi_in145;
													uint32_t phi_in190 = phi_in146;
													uint32_t phi_in191 = phi_in147;
													*(uint32_t*)(phi_in192 + 124) = phi_in87;
													uint32_t phi_in193 = phi_in129;
													uint32_t phi194 = phi_in131;
													uint32_t phi_in195 = phi_in132;
													uint64_t phi_in196 = phi_in156;
													uint64_t phi197 = phi_in157;
													phi_in158 = phi_in158;
													uint32_t phi198 = phi_in159;
													uint32_t phi_in199 = phi160;
													uint64_t phi200 = phi_in161;
													uint64_t phi201 = phi_in162;
													do
													{
														uint32_t phi_in202 = phi_in123;
														uint32_t phi203 = phi_in143;
														uint32_t phi_in204 = phi187;
														uint32_t phi_in205 = phi188;
														uint32_t phi206 = phi189;
														uint32_t phi_in207 = phi_in190;
														uint32_t phi208 = phi_in191;
														uint32_t phi209 = phi_in148;
														uint32_t phi210 = phi_in193;
														int64_t anon214 = (__sext int64_t)*(uint32_t*)(phi185 + anon184 * 12 + 6301632);
														int64_t anon213 = anon214 * 12;
														int64_t anon212 = (__sext int64_t)*(uint32_t*)(anon213 + 6301636);
														uint32_t* anon211 = (uint32_t*)((anon212 << 2) + 6300992);
														*anon211 = phi149;
														uint32_t phi_in215 = phi194;
														uint32_t phi216 = phi150;
														uint32_t phi_in217 = phi151;
														uint32_t phi218 = phi152;
														uint32_t phi_in219 = phi153;
														uint64_t phi220 = phi_in154;
														uint32_t phi221 = phi155;
														*(uint64_t*)(phi_in192 + 104) = phi_in196;
														*(uint64_t*)(phi_in192 + 112) = phi197;
														uint32_t phi_in222 = phi198;
														uint32_t phi223 = phi_in199;
														phi_in192 = phi200;
														uint64_t phi_in224 = phi201;
														uint32_t phi225 = phi_in186;
														uint32_t phi226 = phi_in202;
														uint32_t phi_in227 = phi203;
														uint32_t phi_in228 = phi_in204;
														uint32_t phi229 = phi_in205;
														phi189 = phi206;
														phi_in146 = phi_in207;
														uint32_t phi230 = phi208;
														uint32_t phi231 = phi209;
														phi_in87 = *(uint32_t*)(phi_in192 + 124);
														uint32_t phi232 = *anon211;
														uint32_t phi233 = phi_in215;
														phi175 = phi_in195;
														uint32_t phi234 = phi216;
														phi151 = phi_in217;
														uint32_t phi235 = phi218;
														uint32_t phi236 = phi_in219;
														uint32_t phi237 = phi221;
														uint64_t phi238 = *(uint64_t*)(phi_in192 + 104);
														phi_in180 = *(uint64_t*)(phi_in192 + 112);
														uint32_t phi239 = phi_in222;
														uint32_t phi240 = phi223;
														uint64_t phi241 = phi_in192;
														uint64_t phi_in242 = phi_in224;
														uint32_t* anon243 = (uint32_t*)((anon214 << 2) + 6300992);
														if (*(uint32_t*)(phi_in192 + 44) < *anon243)
														{
															*anon243 = *(uint32_t*)(phi_in192 + 64);
															uint32_t phi_in244 = phi_in186;
															uint32_t phi245 = phi_in202;
															int64_t anon247 = (__sext int64_t)*(uint32_t*)(anon213 + 6301640);
															uint32_t* anon246 = (uint32_t*)((anon247 << 2) + 6300992);
															*anon246 = phi_in204;
															uint64_t phi_in248 = phi_in192;
															uint32_t phi249 = phi_in205;
															phi189 = phi206;
															uint32_t phi250 = phi_in207;
															uint32_t phi251 = phi208;
															uint32_t phi252 = phi209;
															uint32_t phi253 = *(uint32_t*)(phi_in192 + 124);
															uint32_t phi254 = phi210;
															uint32_t phi_in255 = *anon211;
															uint32_t phi_in256 = phi_in215;
															uint32_t phi257 = phi_in195;
															uint32_t phi_in258 = phi_in217;
															uint32_t phi259 = phi_in219;
															uint64_t phi_in260 = phi220;
															uint32_t phi_in261 = phi221;
															phi_in196 = *(uint64_t*)(phi_in192 + 104);
															uint64_t phi_in262 = *(uint64_t*)(phi_in192 + 112);
															uint32_t phi_in263 = phi_in158;
															uint32_t phi264 = phi_in222;
															uint64_t phi265 = phi_in224;
															if (*(uint32_t*)(phi_in192 + 64) < *anon211)
															{
																uint32_t phi_in266 = phi_in186;
																uint32_t phi267 = phi203;
																uint32_t phi_in268 = phi_in204;
																uint32_t phi269 = phi_in205;
																uint64_t phi270 = phi_in192;
																uint32_t phi271 = phi_in207;
																uint64_t phi272 = anon212;
																uint32_t phi_in273 = phi_in215;
																uint32_t phi_in274 = phi_in217;
																uint64_t phi_in275 = phi220;
																*(uint64_t*)(phi_in276 + 104) = *(uint64_t*)(phi_in192 + 104);
																uint64_t phi277 = *(uint64_t*)(phi_in192 + 112);
																uint64_t phi_in278 = phi_in224;
																if (phi210 < *anon211)
																{
																	*(uint32_t*)(phi_in192 + 96) = phi209;
																	*(uint64_t*)(phi_in192 + 88) = phi220;
																	*(uint64_t*)(phi_in192 + 80) = anon212;
																	uint64_t anon279 = (__zext uint64_t)*anon211;
																	w(4197873, anon12, (__sext int64_t)*anon211, anon279, anon279);
																	phi_in266 = *(uint32_t*)(arg1 - 96);
																	phi_in202 = *(uint32_t*)(arg1 - 96);
																	phi267 = *(uint32_t*)(arg1 - 96);
																	phi_in268 = *(uint32_t*)(arg1 - 68);
																	phi269 = *(uint32_t*)(arg1 - 96);
																	phi206 = *(uint32_t*)(arg1 - 96);
																	phi270 = anon12;
																	phi271 = *(uint32_t*)(arg1 - 68);
																	phi208 = *(uint32_t*)(arg1 - 96);
																	phi272 = *(uint64_t*)(arg1 - 112);
																	phi209 = *(uint32_t*)(arg1 - 96);
																	phi_in273 = *(uint32_t*)(arg1 - 96);
																	phi_in274 = *(uint32_t*)(arg1 - 96);
																	phi_in275 = *(uint64_t*)(arg1 - 104);
																	phi221 = *(uint32_t*)(arg1 - 96);
																	*(uint64_t*)(phi_in276 + 104) = *(uint64_t*)(arg1 - 88);
																	phi277 = *(uint64_t*)(arg1 - 80);
																	phi_in278 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
																}
																uint32_t phi_in280 = phi267;
																uint32_t phi_in281 = phi269;
																*(uint32_t*)(phi_in276 + 96) = phi206;
																uint64_t phi_in276 = phi270;
																*(uint32_t*)(phi_in276 + 124) = phi271;
																uint32_t phi282 = phi208;
																uint64_t phi_in283 = phi272;
																uint32_t phi_in284 = phi209;
																uint32_t phi285 = phi221;
																uint64_t phi286 = *(uint64_t*)(phi_in276 + 104);
																*(uint64_t*)(phi_in276 + 112) = phi277;
																uint32_t phi287 = phi_in266;
																phi245 = phi_in202;
																phi203 = phi_in280;
																uint32_t phi288 = phi_in268;
																uint32_t phi_in289 = phi_in281;
																phi_in192 = phi_in276;
																phi189 = *(uint32_t*)(phi_in276 + 96);
																phi218 = *(uint32_t*)(phi_in276 + 124);
																uint64_t phi290 = phi_in283;
																uint32_t phi_in291 = phi_in284;
																uint32_t phi_in292 = phi_in273;
																uint32_t phi293 = phi_in274;
																*(uint64_t*)(phi_in192 + 80) = phi_in275;
																uint64_t phi294 = *(uint64_t*)(phi_in276 + 112);
																uint64_t phi295 = phi_in278;
																int64_t anon296 = (__sext int64_t)*(uint32_t*)(phi_in283 * 12 + 6301636);
																if (*(uint32_t*)(phi_in276 + 124) < *(uint32_t*)((anon296 << 2) + 6300992))
																{
																	*(uint64_t*)(phi_in276 + 104) = phi286;
																	*(uint64_t*)(phi_in276 + 88) = phi_in275;
																	*(uint64_t*)(phi_in276 + 80) = phi_in283;
																	uint64_t anon297 = (__zext uint64_t)*(uint32_t*)(phi_in276 + 120);
																	w(4197793, anon12, anon296, anon297, anon297);
																	phi287 = *(uint32_t*)(arg1 - 96);
																	phi245 = *(uint32_t*)(arg1 - 96);
																	phi203 = *(uint32_t*)(arg1 - 96);
																	phi288 = alloca1.field14;
																	phi_in289 = *(uint32_t*)(arg1 - 96);
																	phi_in192 = anon12;
																	phi189 = *(uint32_t*)(arg1 - 96);
																	phi218 = alloca1.field14;
																	phi282 = *(uint32_t*)(arg1 - 96);
																	phi290 = *(uint64_t*)(arg1 - 112);
																	phi_in291 = *(uint32_t*)(arg1 - 96);
																	phi_in292 = *(uint32_t*)(arg1 - 96);
																	phi293 = *(uint32_t*)(arg1 - 96);
																	*(uint64_t*)(phi_in192 + 80) = *(uint64_t*)(arg1 - 104);
																	phi285 = *(uint32_t*)(arg1 - 96);
																	phi286 = *(uint64_t*)(arg1 - 88);
																	phi294 = *(uint64_t*)(arg1 - 80);
																	phi295 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
																}
																uint32_t phi_in298 = phi287;
																uint32_t phi_in299 = phi288;
																*(uint32_t*)(phi_in192 + 88) = phi_in289;
																phi250 = phi218;
																phi_in191 = phi282;
																uint32_t phi_in300 = phi293;
																phi_in154 = *(uint64_t*)(phi_in192 + 80);
																uint32_t phi_in301 = phi285;
																phi_in196 = phi286;
																*(uint64_t*)(phi_in192 + 104) = phi294;
																uint64_t phi_in302 = phi295;
																phi_in244 = phi_in298;
																*anon246 = phi_in299;
																phi_in248 = phi_in192;
																phi249 = *(uint32_t*)(phi_in192 + 88);
																phi251 = phi_in191;
																phi252 = phi_in291;
																phi253 = phi250;
																phi254 = phi250;
																phi_in255 = phi250;
																phi_in256 = phi_in292;
																phi257 = phi250;
																phi216 = phi250;
																phi_in258 = phi_in300;
																phi218 = phi250;
																phi259 = phi250;
																phi_in260 = phi_in154;
																phi_in261 = phi_in301;
																phi_in262 = *(uint64_t*)(phi_in192 + 104);
																phi_in263 = phi250;
																phi264 = phi250;
																phi223 = phi250;
																phi265 = phi_in302;
																int64_t anon303 = (__sext int64_t)*(uint32_t*)(phi290 * 12 + 6301640);
																if (phi250 < *(uint32_t*)((anon303 << 2) + 6300992))
																{
																	*(uint32_t*)(phi_in192 + 112) = phi250;
																	*(uint64_t*)(phi_in192 + 96) = phi_in196;
																	*(uint64_t*)(phi_in192 + 80) = phi_in154;
																	uint64_t anon304 = (__zext uint64_t)*(uint32_t*)(phi_in192 + 120);
																	w(4197395, anon12, anon303, anon304, anon304);
																	phi_in244 = *(uint32_t*)(arg1 - 104);
																	phi245 = *(uint32_t*)(arg1 - 104);
																	phi203 = *(uint32_t*)(arg1 - 104);
																	*anon246 = *(uint32_t*)(arg1 - 80);
																	phi_in248 = anon12;
																	phi249 = *(uint32_t*)(arg1 - 104);
																	phi189 = *(uint32_t*)(arg1 - 104);
																	phi250 = *(uint32_t*)(arg1 - 80);
																	phi251 = *(uint32_t*)(arg1 - 104);
																	phi252 = *(uint32_t*)(arg1 - 104);
																	phi253 = *(uint32_t*)(arg1 - 80);
																	phi254 = *(uint32_t*)(arg1 - 80);
																	phi_in255 = *(uint32_t*)(arg1 - 80);
																	phi_in256 = *(uint32_t*)(arg1 - 104);
																	phi257 = *(uint32_t*)(arg1 - 80);
																	phi216 = *(uint32_t*)(arg1 - 80);
																	phi_in258 = *(uint32_t*)(arg1 - 104);
																	phi218 = *(uint32_t*)(arg1 - 80);
																	phi259 = *(uint32_t*)(arg1 - 80);
																	phi_in260 = *(uint64_t*)(arg1 - 112);
																	phi_in261 = *(uint32_t*)(arg1 - 104);
																	phi_in196 = *(uint64_t*)(arg1 - 96);
																	phi_in262 = *(uint64_t*)(arg1 - 88);
																	phi_in263 = *(uint32_t*)(arg1 - 80);
																	phi264 = *(uint32_t*)(arg1 - 80);
																	phi223 = *(uint32_t*)(arg1 - 80);
																	phi265 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
																}
															}
															uint32_t phi_in305 = phi_in244;
															*(uint32_t*)(phi_in248 + 88) = phi245;
															uint32_t phi_in306 = phi203;
															uint32_t phi_in307 = *anon246;
															uint32_t phi308 = phi249;
															uint32_t phi_in309 = phi189;
															phi_in146 = phi250;
															uint32_t phi_in310 = phi251;
															phi_in148 = phi252;
															phi_in87 = phi253;
															phi210 = phi254;
															phi_in195 = phi257;
															uint32_t phi_in311 = phi216;
															phi235 = phi218;
															phi_in219 = phi259;
															*(uint64_t*)(phi_in248 + 80) = phi_in260;
															*(uint64_t*)(phi_in248 + 96) = phi_in196;
															uint64_t phi_in312 = phi_in262;
															phi239 = phi264;
															phi240 = phi223;
															phi225 = phi_in305;
															phi226 = *(uint32_t*)(phi_in248 + 88);
															phi_in227 = phi_in306;
															phi_in228 = phi_in307;
															phi229 = phi308;
															phi189 = phi_in309;
															phi230 = phi_in310;
															phi231 = phi_in148;
															phi232 = phi_in255;
															phi233 = phi_in256;
															phi175 = phi_in195;
															phi234 = phi_in311;
															phi151 = phi_in258;
															phi236 = phi_in219;
															phi220 = *(uint64_t*)(phi_in248 + 80);
															phi237 = phi_in261;
															phi238 = *(uint64_t*)(phi_in248 + 96);
															phi_in180 = phi_in312;
															phi_in158 = phi_in263;
															phi241 = phi_in248;
															phi_in242 = phi265;
															if (*(uint32_t*)(phi_in248 + 64) < *anon246)
															{
																*anon246 = phi_in307;
																*(uint32_t*)(phi_in248 + 88) = phi_in305;
																uint32_t phi313 = *(uint32_t*)(phi_in248 + 88);
																uint32_t phi314 = phi_in306;
																phi189 = phi_in309;
																uint32_t phi_in315 = phi_in310;
																phi252 = phi_in148;
																uint32_t phi_in316 = phi_in256;
																phi_in217 = phi_in258;
																*(uint64_t*)(phi_in248 + 80) = *(uint64_t*)(phi_in248 + 80);
																uint32_t phi317 = phi_in261;
																*(uint64_t*)(phi_in248 + 96) = *(uint64_t*)(phi_in248 + 96);
																uint64_t phi318 = phi_in312;
																phi_in248 = phi_in248;
																int64_t anon320 = anon247 * 12;
																int64_t anon319 = (__sext int64_t)*(uint32_t*)(anon320 + 6301636);
																if (phi_in307 < *(uint32_t*)((anon319 << 2) + 6300992))
																{
																	*(uint32_t*)(phi_in248 + 112) = phi_in307;
																	*(uint64_t*)(phi_in248 + 104) = phi_in312;
																	uint64_t anon321 = (__zext uint64_t)*(uint32_t*)(phi_in248 + 120);
																	w(4197948, anon12, anon319, anon321, anon321);
																	*(uint32_t*)(phi_in248 + 88) = *(uint32_t*)(arg1 - 104);
																	phi313 = *(uint32_t*)(arg1 - 104);
																	phi314 = *(uint32_t*)(arg1 - 104);
																	phi_in307 = *(uint32_t*)(arg1 - 80);
																	phi308 = *(uint32_t*)(arg1 - 104);
																	phi189 = *(uint32_t*)(arg1 - 104);
																	phi_in315 = *(uint32_t*)(arg1 - 104);
																	phi252 = *(uint32_t*)(arg1 - 104);
																	phi_in316 = *(uint32_t*)(arg1 - 104);
																	phi_in217 = *(uint32_t*)(arg1 - 104);
																	*(uint64_t*)(phi_in248 + 80) = *(uint64_t*)(arg1 - 112);
																	phi317 = *(uint32_t*)(arg1 - 104);
																	*(uint64_t*)(phi_in248 + 96) = *(uint64_t*)(arg1 - 96);
																	phi318 = *(uint64_t*)(arg1 - 88);
																	phi_in248 = anon12;
																	phi265 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
																}
																phi225 = *(uint32_t*)(phi_in248 + 88);
																phi_in123 = phi313;
																phi_in306 = phi314;
																*(uint32_t*)(phi_in248 + 112) = phi_in307;
																phi_in205 = phi308;
																phi_in148 = phi252;
																phi_in261 = phi317;
																phi238 = *(uint64_t*)(phi_in248 + 96);
																*(uint64_t*)(phi_in248 + 104) = phi318;
																phi_in242 = phi265;
																phi226 = phi_in123;
																phi_in227 = phi_in306;
																phi_in228 = *(uint32_t*)(phi_in248 + 112);
																phi229 = phi_in205;
																phi_in146 = *(uint32_t*)(phi_in248 + 112);
																phi230 = phi_in315;
																phi231 = phi_in148;
																phi_in87 = *(uint32_t*)(phi_in248 + 112);
																phi210 = *(uint32_t*)(phi_in248 + 112);
																phi232 = *(uint32_t*)(phi_in248 + 112);
																phi233 = phi_in316;
																phi175 = *(uint32_t*)(phi_in248 + 112);
																phi234 = *(uint32_t*)(phi_in248 + 112);
																phi151 = phi_in217;
																phi235 = *(uint32_t*)(phi_in248 + 112);
																phi236 = *(uint32_t*)(phi_in248 + 112);
																phi220 = *(uint64_t*)(phi_in248 + 80);
																phi237 = phi_in261;
																phi_in180 = *(uint64_t*)(phi_in248 + 104);
																phi_in158 = *(uint32_t*)(phi_in248 + 112);
																phi239 = *(uint32_t*)(phi_in248 + 112);
																phi240 = *(uint32_t*)(phi_in248 + 112);
																phi241 = phi_in248;
																int64_t anon322 = (__sext int64_t)*(uint32_t*)(anon320 + 6301640);
																if (*(uint32_t*)(phi_in248 + 112) < *(uint32_t*)((anon322 << 2) + 6300992))
																{
																	*(uint64_t*)(phi_in248 + 96) = phi238;
																	*(uint32_t*)(phi_in248 + 88) = phi225;
																	uint64_t anon323 = (__zext uint64_t)*(uint32_t*)(phi_in248 + 120);
																	w(4197231, anon12, anon322, anon323, anon323);
																	phi225 = alloca1.field8;
																	phi226 = alloca1.field8;
																	phi_in227 = alloca1.field8;
																	phi_in228 = alloca1.field12;
																	phi229 = alloca1.field8;
																	phi189 = alloca1.field8;
																	phi_in146 = alloca1.field12;
																	phi230 = alloca1.field8;
																	phi231 = alloca1.field8;
																	phi_in87 = alloca1.field12;
																	phi210 = alloca1.field12;
																	phi232 = alloca1.field12;
																	phi233 = alloca1.field8;
																	phi175 = alloca1.field12;
																	phi234 = alloca1.field12;
																	phi151 = alloca1.field8;
																	phi235 = alloca1.field12;
																	phi236 = alloca1.field12;
																	phi220 = alloca1.field7;
																	phi237 = alloca1.field8;
																	phi238 = alloca1.field10;
																	phi_in180 = alloca1.field11;
																	phi_in158 = alloca1.field12;
																	phi239 = alloca1.field12;
																	phi240 = alloca1.field12;
																	phi241 = anon12;
																	phi_in242 = (__zext uint64_t)alloca1.field8;
																}
															}
														}
														phi_in142 = phi225;
														uint32_t phi_in324 = phi226;
														phi_in126 = phi229;
														uint32_t phi_in325 = phi189;
														phi_in127 = phi230;
														phi171 = phi231;
														uint32_t phi_in326 = phi210;
														phi_in174 = phi232;
														uint32_t phi_in327 = phi233;
														uint32_t phi_in328 = phi234;
														uint32_t phi_in329 = phi235;
														phi_in93 = phi236;
														phi178 = phi220;
														phi_in138 = phi237;
														phi_in156 = phi238;
														phi_in159 = phi239;
														phi160 = phi240;
														phi182 = phi241;
														phi163 = phi_in142;
														phi164 = phi_in324;
														phi165 = phi_in227;
														phi166 = phi_in228;
														phi_in167 = phi_in126;
														phi_in168 = phi_in325;
														phi169 = phi_in146;
														phi170 = phi_in127;
														phi_in172 = phi_in87;
														phi173 = phi_in326;
														phi109 = phi_in327;
														phi176 = phi_in328;
														phi177 = phi151;
														phi135 = phi_in329;
														phi179 = phi_in138;
														phi_in94 = phi_in156;
														phi_in140 = phi_in158;
														phi181 = phi_in159;
														phi141 = phi_in242;
														phi185 = phi185 + 4;
														phi_in186 = phi_in142;
														phi_in123 = phi_in324;
														phi_in143 = phi_in227;
														phi187 = phi_in228;
														phi188 = phi_in126;
														phi189 = phi_in325;
														phi_in190 = phi_in146;
														phi_in191 = phi_in127;
														phi_in148 = phi171;
														*(uint32_t*)(phi_in192 + 124) = phi_in87;
														phi_in193 = phi_in326;
														phi149 = phi_in174;
														phi194 = phi_in327;
														phi_in195 = phi175;
														phi150 = phi_in328;
														phi152 = phi_in329;
														phi153 = phi_in93;
														phi_in154 = phi178;
														phi155 = phi_in138;
														phi_in196 = phi_in156;
														phi197 = phi_in180;
														phi198 = phi_in159;
														phi_in199 = phi160;
														phi200 = phi182;
														phi201 = phi_in242;
													}
													while (phi185 != 8);
												}
												phi_in53 = phi163;
												phi99 = phi164;
												phi_in55 = phi165;
												phi100 = phi166;
												phi60 = phi169;
												phi103 = phi170;
												uint32_t phi_in330 = phi171;
												uint32_t phi_in331 = phi173;
												phi110 = phi175;
												phi111 = phi176;
												phi_in91 = phi177;
												phi_in98 = phi178;
												uint32_t phi_in332 = phi179;
												phi75 = phi181;
												uint32_t phi_in333 = phi160;
												uint64_t phi_in334 = phi182;
												phi_in53 = phi_in53;
												phi101 = phi_in167;
												phi102 = phi_in168;
												phi_in104 = phi_in180;
												phi105 = phi_in330;
												phi106 = phi_in172;
												phi_in107 = phi_in331;
												phi_in108 = phi_in174;
												phi112 = phi_in91;
												phi70 = phi135;
												phi113 = phi_in93;
												phi_in114 = phi_in332;
												phi115 = phi_in94;
												phi116 = phi_in140;
												phi117 = phi_in333;
												phi_in118 = phi_in334;
												phi80 = phi141;
												phi121 = phi121 + 4;
												phi_in122 = phi_in53;
												phi_in123 = phi99;
												phi124 = phi_in55;
												phi125 = phi100;
												phi_in126 = phi_in167;
												phi84 = phi_in168;
												phi_in85 = phi60;
												phi_in127 = phi103;
												phi_in128 = phi_in330;
												phi_in87 = phi_in172;
												phi_in129 = phi_in331;
												phi_in130 = phi_in174;
												phi_in131 = phi109;
												phi_in132 = phi110;
												phi133 = phi111;
												phi134 = phi_in91;
												phi136 = phi_in93;
												phi_in137 = phi_in98;
												phi_in138 = phi_in332;
												phi139 = phi_in180;
												phi96 = phi75;
												phi_in97 = phi_in333;
												phi77 = phi_in334;
											}
											while (phi121 != 8);
										}
										uint32_t phi_in335 = phi99;
										phi336 = phi101;
										uint32_t phi_in337 = phi102;
										phi338 = phi103;
										phi339 = phi_in98;
										uint32_t phi_in340 = phi105;
										phi341 = phi109;
										uint32_t phi_in342 = phi112;
										phi49 = phi115;
										phi343 = phi80;
										phi344 = phi_in53;
										phi345 = phi_in335;
										phi346 = phi_in55;
										phi347 = phi_in337;
										phi_in348 = phi_in340;
										phi_in349 = phi_in342;
										phi350 = phi_in114;
										phi351 = phi_in118;
										if (phi339 != 8)
										{
											phi54 = phi_in335;
											phi_in56 = phi100;
											phi58 = phi336;
											phi59 = phi_in337;
											phi_in61 = phi338;
											phi62 = phi_in340;
											phi63 = phi106;
											phi64 = phi_in107;
											phi65 = phi_in108;
											phi_in66 = phi341;
											phi_in67 = phi110;
											phi_in68 = phi111;
											phi_in69 = phi_in342;
											phi_in71 = phi113;
											phi_in72 = phi_in114;
											phi_in73 = phi49;
											phi74 = phi116;
											phi76 = phi117;
											phi77 = phi_in118;
											phi78 = phi339 + 4;
											phi79 = phi_in104;
											phi80 = phi343;
										}
									}
									while (phi339 != 8);
								}
								else 
								{
									phi344 = phi37;
									phi345 = phi38;
									phi346 = phi39;
									phi336 = phi40;
									phi347 = phi41;
									phi338 = phi42;
									phi49 = phi49;
									phi_in348 = phi43;
									phi341 = phi44;
									phi_in349 = phi45;
									phi350 = phi46;
									phi351 = phi47;
									phi343 = phi50 & 0xffffffff;
								}
								phi_in352 = phi344;
								phi_in353 = phi345;
								phi_in354 = phi346;
								phi_in355 = phi336;
								phi27 = phi347;
								phi_in356 = phi338;
								phi357 = phi341;
								phi_in358 = phi350;
								phi_in359 = phi351;
								phi360 = phi343;
								if (phi48 != 8)
								{
									phi37 = phi_in352;
									phi38 = phi_in353;
									phi39 = phi_in354;
									phi40 = phi_in355;
									phi41 = phi27;
									phi42 = phi_in356;
									phi43 = phi_in348;
									phi44 = phi357;
									phi45 = phi_in349;
									phi46 = phi_in358;
									phi47 = phi_in359;
									phi48 = phi48 + 4;
									phi50 = phi360;
								}
							}
							while (phi48 != 8);
							phi_in361 = phi_in352;
							phi_in362 = phi_in353;
							phi363 = phi_in354;
							phi364 = phi_in355;
							phi_in20 = phi_in356;
							phi_in365 = *(uint64_t*)(phi_in359 + 72);
							phi366 = phi_in348;
							phi367 = phi_in349;
							phi32 = phi_in358;
							phi368 = phi_in359;
						}
						else 
						{
							phi_in361 = phi23;
							phi_in362 = phi24;
							phi363 = phi25;
							phi364 = phi26;
							phi27 = phi27;
							phi_in20 = phi28;
							phi_in365 = *(uint64_t*)(phi34 + 72);
							phi366 = phi29;
							phi357 = phi30;
							phi367 = phi31;
							phi32 = phi32;
							phi360 = phi33 & 0xffffffff;
							phi368 = phi34;
						}
						phi369 = phi_in365;
						phi_in370 = phi368;
						if (phi369 != 8)
						{
							phi23 = phi_in361;
							phi24 = phi_in362;
							phi25 = phi363;
							phi26 = phi364;
							phi28 = phi_in20;
							phi29 = phi366;
							phi30 = phi357;
							phi31 = phi367;
							phi33 = phi360;
							*(uint64_t*)(phi34 + 72) = phi369 + 4;
							phi34 = phi_in370;
						}
					}
					while (phi369 != 8);
					phi_in371 = *(uint32_t*)(phi_in370 + 68);
					phi_in372 = phi_in20;
					phi_in373 = *(uint64_t*)(phi_in370 + 56);
					phi374 = (__zext uint64_t)phi_in20;
					phi375 = *(uint32_t*)(phi_in370 + 68);
					phi376 = phi_in20;
					phi_in377 = *(uint32_t*)(phi_in370 + 68);
				}
				else 
				{
					phi_in371 = phi_in13;
					phi_in372 = phi_in20;
					phi_in373 = *(uint64_t*)(phi19 + 56);
					phi374 = phi15 & 0xffffffff;
					phi375 = *(uint32_t*)(phi19 + 68);
					phi376 = phi17;
					phi_in377 = phi18;
					phi_in370 = phi19;
				}
				phi_in378 = phi_in371;
				phi_in379 = phi_in372;
				phi380 = phi_in373;
				if (phi380 != 8)
				{
					phi_in13 = phi_in378;
					phi14 = phi_in379;
					phi15 = phi374;
					phi16 = phi375;
					phi17 = phi376;
					phi18 = phi_in377;
					*(uint64_t*)(phi19 + 56) = phi380 + 4;
					phi19 = phi_in370;
				}
			}
			while (phi380 != 8);
			phi381 = *(uint64_t*)(phi_in370 + 48);
			phi382 = phi_in379;
			phi383 = phi_in378;
			phi384 = (__zext uint64_t)phi_in379;
			phi385 = phi_in378;
			phi386 = phi_in379;
			phi10 = phi_in370;
		}
		else 
		{
			phi381 = *(uint64_t*)(phi10 + 48);
			phi382 = phi4;
			phi383 = phi5;
			phi384 = phi7 & 0xffffffff;
			phi385 = *anon8;
			phi386 = phi11;
			phi10 = phi10;
		}
		if (phi381 != 8)
		{
			phi4 = phi382;
			phi5 = phi383;
			phi7 = phi384;
			*anon8 = phi385;
			phi11 = phi386;
			*(uint64_t*)(phi10 + 48) = phi381 + 4;
		}
	}
	while (phi381 != 8);
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
			uint32_t phi14;
			uint32_t phi15;
			uint32_t* anon16;
			uint32_t phi_in17;
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
				phi14 = *anon10;
				anon16 = (uint32_t*)(phi9 - 4);
				phi15 = *anon16;
			}
			else 
			{
				phi_in17 = *anon16;
				if (*phi7 < *anon16)
				{
					phi11 = *anon10 & 0xf;
					phi12 = *anon10;
					phi13 = *phi7 & 0xf;
					phi14 = *phi7;
					phi15 = *anon16 & 0xf;
				}
			}
			if (*anon10 >= *phi7 && *phi7 < *anon16 || *anon10 < *phi7 && *anon10 < *anon16)
			{
				phi18 = phi11;
				uint32_t phi_in19 = phi12;
				phi20 = phi13;
				*anon16 = phi14;
				*phi7 = phi15;
				phi21 = *anon16;
				phi22 = phi_in19;
			}
			if (*anon10 < *phi7)
			{
				if (*anon10 >= *anon16)
				{
					phi20 = *anon16 & 0xf;
					phi18 = *phi7;
					phi21 = *anon10;
					phi22 = *phi7;
				}
			}
			if (*anon10 >= *phi7 && *phi7 < *anon16 || *anon10 < *phi7 && *anon10 < *anon16 || *anon10 < *phi7 && *anon10 >= *anon16)
			{
				phi_in17 = phi20;
				*phi7 = phi18;
				*anon10 = phi21;
				if (phi22 - *anon10 <= 4294967295)
				{
					phi_in17 = *(uint32_t*)((phi9 & 0xc) - 4);
				}
			}
			uint32_t phi23 = phi_in17;
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
			uint32_t* anon33;
			uint32_t phi_in34;
			uint32_t phi35;
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
				anon33 = (uint32_t*)(phi24 - 4);
				*anon28 = *anon33;
			}
			else 
			{
				phi_in34 = *anon33;
				if (*anon28 < *anon33)
				{
					phi29 = *anon27 & 0xf;
					phi30 = *anon27;
					phi31 = *anon28 & 0xf;
					phi32 = *anon28;
					*anon28 = *anon33 & 0xf;
				}
			}
			if (*anon27 >= *anon28 && *anon28 < *anon33 || *anon27 < *anon28 && *anon27 < *anon33)
			{
				phi35 = phi30;
				uint32_t phi_in36 = phi31;
				*anon33 = phi32;
				phi_in34 = phi_in36;
				phi37 = *anon33;
			}
			if (*anon27 < *anon28)
			{
				if (*anon27 >= *anon33)
				{
					phi_in34 = *anon33 & 0xf;
					phi29 = *anon28;
					phi37 = *anon27;
					phi35 = *anon28;
				}
			}
			if (*anon27 >= *anon28 && *anon28 < *anon33 || *anon27 < *anon28 && *anon27 < *anon33 || *anon27 < *anon28 && *anon27 >= *anon33)
			{
				*anon28 = phi29;
				*anon27 = phi37;
				if (phi35 - *anon27 <= 4294967295)
				{
					phi_in34 = *(uint32_t*)((phi24 & 0xf) - 4);
				}
			}
			uint32_t phi38 = phi_in34;
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
