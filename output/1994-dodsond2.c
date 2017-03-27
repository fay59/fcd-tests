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
			phi7 = phi6;
			*phi1 = *anon8;
			*anon8 = phi7;
			phi9 = phi_in12;
			phi10 = *anon8;
		}
		if (*anon4 < *phi1 && *anon4 < *anon8 || *anon4 >= *phi1 && *phi1 < *anon8 || *anon4 >= *anon8 && *anon4 < *phi1)
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
void w(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4)
{
	struct { uint8_t field0[4]; uint32_t field1; uint64_t field2; uint8_t field3[8]; uint32_t field4; uint32_t field5; uint8_t field6[48]; uint64_t field7; uint32_t field8; uint8_t field9[4]; uint64_t field10; uint64_t field11; uint32_t field12; uint8_t field13[8]; uint32_t field14; uint8_t field15[56]; uint64_t field16; } alloca1;
	uint32_t phi5;
	uint64_t phi10;
	uint64_t phi360;
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
	*(uint64_t*)(phi10 + 48) = 0;
	uint64_t anon11 = (uint64_t)&alloca1;
	phi10 = anon11;
	do
	{
		uint64_t phi359;
		uint32_t phi361;
		uint32_t phi362;
		uint64_t phi363;
		int64_t anon13 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi10 + 48) + *(uint64_t*)(phi10 + 8) + 6301632);
		uint32_t* anon12 = (uint32_t*)((anon13 << 2) + 6300992);
		*anon12 = phi8;
		if (phi9 < *anon12)
		{
			uint32_t phi_in356;
			uint32_t phi_in357;
			uint64_t phi358;
			*(uint64_t*)(phi10 + 16) = anon13 * 12;
			*(uint32_t*)(phi10 + 40) = (uint32_t)phi7 + 5;
			uint32_t phi14 = phi5;
			uint32_t phi15 = phi4;
			uint64_t phi16 = (__zext uint64_t)phi4;
			uint32_t phi17 = phi5;
			uint32_t phi18 = phi4;
			uint32_t phi19 = phi5;
			uint64_t phi20 = 0;
			uint64_t phi21 = phi10;
			do
			{
				uint64_t phi_in351;
				uint64_t phi352;
				uint32_t phi353;
				uint32_t phi_in354;
				uint64_t phi355;
				uint32_t phi22 = phi14;
				uint32_t phi23 = phi15;
				*(uint32_t*)(phi21 + 68) = phi17;
				*(uint64_t*)(phi21 + 56) = phi20;
				int64_t anon25 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi21 + 56) + *(uint64_t*)(phi21 + 16) + 6301632);
				uint32_t* anon24 = (uint32_t*)((anon25 << 2) + 6300992);
				if (phi19 < *anon24)
				{
					uint32_t phi_in348;
					uint64_t phi349;
					uint64_t phi_in350;
					*anon24 = *(uint32_t*)(phi21 + 4);
					*(uint64_t*)(phi21 + 32) = anon25 * 12;
					*(uint32_t*)(phi21 + 44) = (uint32_t)phi16 + 6;
					uint32_t phi26 = phi18;
					uint32_t phi27 = phi18;
					uint32_t phi28 = phi18;
					uint32_t phi29 = phi18;
					uint32_t phi30 = phi18;
					uint32_t phi31 = phi18;
					uint32_t phi32 = phi18;
					uint32_t phi33 = phi18;
					uint32_t phi34 = phi18;
					uint32_t phi35 = phi18;
					uint64_t phi36 = (__zext uint64_t)phi18;
					*(uint64_t*)(phi37 + 72) = 0;
					uint64_t phi37 = phi21;
					do
					{
						uint32_t phi324;
						uint64_t phi334;
						uint32_t phi336;
						uint32_t phi_in339;
						uint32_t phi340;
						uint32_t phi343;
						uint64_t phi344;
						uint32_t phi345;
						uint64_t phi_in346;
						uint32_t phi347;
						int64_t anon39 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi37 + 72) + *(uint64_t*)(phi37 + 32) + 6301632);
						uint32_t* anon38 = (uint32_t*)((anon39 << 2) + 6300992);
						if (*(uint32_t*)(phi37 + 4) < *anon38)
						{
							uint32_t phi_in328;
							uint32_t phi_in337;
							uint32_t phi_in338;
							uint32_t phi_in341;
							uint32_t phi_in342;
							*anon38 = *(uint32_t*)(phi37 + 24);
							*(uint32_t*)(phi37 + 64) = (uint32_t)phi36 + 7;
							uint32_t phi40 = phi26;
							uint32_t phi41 = phi27;
							uint32_t phi42 = phi28;
							uint32_t phi43 = phi29;
							uint32_t phi44 = phi30;
							uint32_t phi45 = phi31;
							uint32_t phi46 = phi32;
							uint32_t phi47 = phi33;
							uint32_t phi48 = phi34;
							uint32_t phi49 = phi35;
							uint64_t phi50 = phi37;
							uint64_t phi51 = 0;
							uint64_t phi52 = anon39 * 12;
							uint64_t phi53 = phi36;
							do
							{
								uint32_t phi110;
								uint32_t phi114;
								uint32_t phi319;
								uint32_t phi322;
								uint32_t phi329;
								uint32_t phi330;
								uint64_t phi331;
								uint32_t phi332;
								uint32_t phi333;
								uint64_t phi335;
								int64_t anon55 = (__sext int64_t)*(uint32_t*)(phi51 + phi52 + 6301632);
								uint32_t* anon54 = (uint32_t*)((anon55 << 2) + 6300992);
								if (*(uint32_t*)(phi50 + 24) < *anon54)
								{
									uint32_t phi_in59;
									uint64_t phi105;
									*anon54 = *(uint32_t*)(phi50 + 28);
									uint32_t phi56 = phi40;
									uint32_t phi57 = phi41;
									uint32_t phi58 = phi42;
									uint32_t anon60 = (uint32_t)phi53 + 8;
									phi_in59 = anon60;
									uint32_t phi_in61 = phi43;
									uint32_t phi62 = phi44;
									uint32_t phi_in63 = anon60;
									uint32_t phi64 = phi45;
									uint32_t phi65 = phi46;
									uint32_t phi66 = anon60;
									uint32_t phi67 = anon60;
									uint32_t phi68 = anon60;
									uint32_t phi69 = phi47;
									uint32_t phi70 = anon60;
									uint32_t phi_in71 = anon60;
									uint32_t phi72 = phi48;
									uint32_t phi_in73 = anon60;
									uint32_t phi74 = anon60;
									uint32_t phi75 = phi49;
									uint64_t phi76 = phi52;
									uint32_t phi_in77 = anon60;
									uint32_t phi78 = anon60;
									uint32_t phi79 = anon60;
									uint64_t phi80 = phi50;
									uint64_t phi81 = 0;
									uint64_t phi_in82 = anon55 * 12;
									uint64_t phi_in83 = phi53;
									do
									{
										uint32_t phi_in84 = phi56;
										uint32_t phi_in85 = phi57;
										uint32_t phi_in86 = phi58;
										uint32_t phi_in87 = phi_in61;
										uint32_t phi_in88 = phi62;
										uint32_t phi_in89 = phi_in63;
										uint32_t phi_in90 = phi64;
										uint32_t phi_in91 = phi65;
										uint32_t phi_in92 = phi66;
										uint32_t phi93 = phi67;
										uint32_t phi94 = phi68;
										uint32_t phi_in95 = phi69;
										uint32_t phi_in96 = phi_in71;
										uint32_t phi_in97 = phi72;
										uint32_t phi_in98 = phi_in73;
										uint32_t phi99 = phi74;
										uint32_t phi_in100 = phi75;
										uint64_t phi101 = phi76;
										uint32_t phi_in102 = phi_in77;
										uint32_t phi_in103 = phi78;
										uint64_t phi104 = phi80;
										phi105 = phi81;
										uint32_t phi106 = phi_in84;
										uint32_t phi_in107 = phi_in85;
										uint32_t phi108 = phi_in86;
										uint32_t phi109 = phi_in87;
										phi110 = phi_in88;
										uint32_t phi_in111 = phi_in89;
										uint32_t phi112 = phi_in90;
										uint64_t phi113 = phi_in82;
										phi114 = phi_in91;
										uint32_t phi115 = phi_in92;
										phi68 = phi94;
										uint32_t phi116 = phi_in95;
										uint32_t phi117 = phi_in96;
										uint32_t phi_in118 = phi_in97;
										uint32_t phi119 = phi_in98;
										uint32_t phi120 = phi_in100;
										uint64_t phi121 = phi101;
										phi_in77 = phi_in102;
										phi78 = phi_in103;
										uint32_t phi122 = phi79;
										uint64_t phi123 = phi_in83;
										int64_t anon125 = (__sext int64_t)*(uint32_t*)(phi105 + phi_in82 + 6301632);
										uint32_t* anon124 = (uint32_t*)((anon125 << 2) + 6300992);
										if (*(uint32_t*)(phi104 + 28) < *anon124)
										{
											*anon124 = *(uint32_t*)(phi104 + 40);
											*(uint32_t*)(phi104 + 120) = (uint32_t)phi_in83 + 9;
											uint64_t phi126 = 0;
											uint32_t phi127 = phi_in84;
											uint32_t phi128 = phi_in85;
											uint32_t phi_in129 = phi_in86;
											uint32_t phi130 = phi_in59;
											uint32_t phi_in131 = phi_in88;
											uint32_t phi_in132 = phi_in89;
											uint32_t phi133 = phi_in90;
											uint32_t phi134 = phi_in91;
											uint32_t phi_in135 = phi_in92;
											uint32_t phi_in136 = phi93;
											uint32_t phi137 = phi_in95;
											uint32_t phi_in138 = phi70;
											uint32_t phi139 = phi_in96;
											uint32_t phi140 = phi_in97;
											uint32_t phi_in141 = phi_in98;
											uint32_t phi_in142 = phi99;
											uint64_t phi143 = phi105;
											uint32_t phi_in144 = phi_in100;
											uint64_t phi_in145 = phi_in82;
											phi_in77 = phi_in102;
											uint32_t phi146 = phi_in103;
											phi80 = phi104;
											uint64_t phi147 = phi_in83 & 0xffffffff;
											do
											{
												uint32_t phi_in148 = phi_in129;
												uint32_t phi_in149 = phi_in87;
												uint32_t phi150 = phi133;
												uint32_t phi151 = phi_in135;
												uint32_t phi_in152 = phi_in136;
												uint32_t phi153 = phi94;
												uint32_t phi154 = phi137;
												uint32_t phi_in155 = phi_in138;
												uint32_t phi_in156 = phi140;
												uint64_t phi_in157 = phi143;
												uint32_t phi_in158 = phi_in144;
												uint64_t phi159 = phi101;
												uint64_t phi160 = phi_in145;
												uint32_t phi161 = phi_in77;
												uint32_t phi_in162 = phi79;
												uint64_t phi_in163 = phi80;
												uint64_t phi_in164 = phi147;
												uint32_t phi_in165 = phi127;
												uint32_t phi166 = phi_in148;
												phi_in59 = phi130;
												phi_in61 = phi_in149;
												uint32_t phi167 = phi_in131;
												phi_in63 = phi_in132;
												uint32_t phi168 = phi_in152;
												uint32_t phi169 = phi153;
												phi137 = phi154;
												uint32_t phi170 = phi_in155;
												uint32_t phi171 = phi_in156;
												phi_in73 = phi_in141;
												phi105 = phi_in157;
												phi_in144 = phi_in158;
												uint64_t phi172 = phi160;
												uint32_t phi173 = phi146;
												uint32_t phi174 = phi_in162;
												phi104 = phi_in163;
												uint64_t phi175 = phi_in164;
												int64_t anon177 = (__sext int64_t)*(uint32_t*)(phi126 + anon125 * 12 + 6301632);
												uint32_t* anon176 = (uint32_t*)((anon177 << 2) + 6300992);
												if (*(uint32_t*)(phi_in163 + 40) < *anon176)
												{
													*anon176 = *(uint32_t*)(phi_in163 + 44);
													uint64_t phi178 = 0;
													phi_in129 = phi_in148;
													uint32_t phi179 = phi_in149;
													uint32_t phi_in180 = phi_in131;
													uint32_t phi181 = phi_in132;
													uint32_t phi182 = phi150;
													uint32_t phi183 = phi134;
													uint32_t phi184 = phi151;
													uint32_t phi185 = phi_in152;
													uint32_t phi186 = phi_in155;
													uint32_t phi_in187 = phi139;
													uint32_t phi_in188 = phi_in141;
													uint32_t phi189 = phi_in142;
													uint64_t phi_in190 = phi_in157;
													uint32_t phi_in191 = phi_in158;
													uint64_t phi192 = phi159;
													uint32_t phi193 = phi161;
													uint32_t phi_in194 = phi_in162;
													uint64_t phi195 = phi_in163;
													do
													{
														uint64_t phi_in216;
														uint32_t phi_in196 = phi127;
														uint32_t phi_in197 = phi128;
														uint32_t phi198 = phi_in129;
														uint32_t phi_in199 = phi130;
														uint32_t phi200 = phi_in180;
														uint32_t phi201 = phi181;
														uint32_t phi202 = phi182;
														uint32_t phi203 = phi183;
														uint32_t phi_in204 = phi184;
														int64_t anon208 = (__sext int64_t)*(uint32_t*)(phi178 + anon177 * 12 + 6301632);
														int64_t anon207 = anon208 * 12;
														int64_t anon206 = (__sext int64_t)*(uint32_t*)(anon207 + 6301636);
														uint32_t* anon205 = (uint32_t*)((anon206 << 2) + 6300992);
														*anon205 = phi153;
														uint32_t phi_in209 = phi154;
														uint32_t phi210 = phi_in187;
														uint32_t phi_in211 = phi_in156;
														uint32_t phi_in212 = phi189;
														*(uint64_t*)(phi_in213 + 88) = phi_in190;
														uint32_t phi214 = phi_in191;
														uint64_t phi215 = phi192;
														*(uint64_t*)(phi_in216 + 104) = phi160;
														uint32_t phi_in217 = phi193;
														uint32_t phi_in218 = phi146;
														uint64_t phi_in213 = phi195;
														uint64_t phi219 = phi_in164;
														uint32_t phi220 = phi_in196;
														uint32_t phi221 = phi_in197;
														phi_in129 = phi198;
														uint32_t phi222 = phi_in199;
														uint32_t phi223 = phi200;
														phi182 = phi202;
														uint32_t phi224 = phi203;
														uint32_t phi_in225 = *anon205;
														phi137 = phi_in209;
														uint32_t phi226 = phi186;
														uint32_t phi227 = phi_in211;
														uint32_t phi228 = phi_in188;
														phi_in142 = phi_in212;
														uint64_t phi_in229 = *(uint64_t*)(phi_in213 + 88);
														phi_in144 = phi214;
														phi159 = phi215;
														uint64_t phi230 = *(uint64_t*)(phi_in216 + 104);
														uint32_t phi231 = phi_in217;
														phi146 = phi_in218;
														uint32_t phi232 = phi_in194;
														uint64_t phi233 = phi_in213;
														uint64_t phi_in234 = phi219;
														uint32_t* anon235 = (uint32_t*)((anon208 << 2) + 6300992);
														if (*(uint32_t*)(phi_in213 + 44) < *anon235)
														{
															*anon235 = *(uint32_t*)(phi_in213 + 64);
															uint32_t phi236 = phi_in196;
															phi221 = phi_in197;
															int64_t anon238 = (__sext int64_t)*(uint32_t*)(anon207 + 6301640);
															uint32_t* anon237 = (uint32_t*)((anon238 << 2) + 6300992);
															*anon237 = phi_in199;
															uint32_t phi_in239 = phi179;
															uint32_t phi_in240 = phi200;
															uint32_t phi241 = phi201;
															uint32_t phi_in242 = phi203;
															uint32_t phi243 = phi_in204;
															uint32_t phi244 = phi185;
															uint32_t phi245 = *anon205;
															uint32_t phi246 = phi_in209;
															uint32_t phi247 = phi_in211;
															uint32_t phi248 = phi_in188;
															phi_in212 = phi_in212;
															*(uint64_t*)(phi_in216 + 80) = *(uint64_t*)(phi_in213 + 88);
															*(uint64_t*)(phi_in216 + 96) = phi215;
															uint32_t phi_in249 = phi_in217;
															uint32_t phi250 = phi_in218;
															uint32_t phi251 = phi_in194;
															if (*(uint32_t*)(phi_in213 + 64) < *anon205)
															{
																uint32_t phi_in252 = phi_in196;
																uint32_t phi253 = phi_in197;
																uint32_t phi254 = phi198;
																phi_in199 = phi_in199;
																uint32_t phi_in255 = phi179;
																uint64_t phi_in256 = phi_in213;
																uint32_t phi257 = phi201;
																uint32_t phi258 = phi202;
																uint64_t phi259 = anon206;
																uint32_t phi_in260 = phi_in209;
																uint32_t phi261 = phi_in211;
																uint64_t phi262 = *(uint64_t*)(phi_in213 + 88);
																uint32_t phi263 = phi214;
																uint64_t phi_in264 = *(uint64_t*)(phi_in216 + 104);
																phi_in164 = phi219;
																if (phi185 < *anon205)
																{
																	*(uint32_t*)(phi_in213 + 124) = phi_in204;
																	*(uint64_t*)(phi_in213 + 112) = *(uint64_t*)(phi_in216 + 104);
																	*(uint64_t*)(phi_in213 + 104) = phi215;
																	*(uint32_t*)(phi_in213 + 96) = phi203;
																	*(uint64_t*)(phi_in213 + 80) = anon206;
																	uint64_t anon265 = (__zext uint64_t)*anon205;
																	w(4197873, anon11, (__sext int64_t)*anon205, anon265, anon265);
																	phi_in252 = *(uint32_t*)(arg1 - 96);
																	phi253 = *(uint32_t*)(arg1 - 96);
																	phi254 = *(uint32_t*)(arg1 - 96);
																	phi_in199 = *(uint32_t*)(arg1 - 68);
																	phi_in255 = *(uint32_t*)(arg1 - 96);
																	phi200 = *(uint32_t*)(arg1 - 96);
																	phi_in256 = anon11;
																	phi257 = *(uint32_t*)(arg1 - 68);
																	phi258 = *(uint32_t*)(arg1 - 96);
																	phi259 = *(uint64_t*)(arg1 - 112);
																	phi203 = *(uint32_t*)(arg1 - 96);
																	phi_in260 = *(uint32_t*)(arg1 - 96);
																	phi261 = *(uint32_t*)(arg1 - 96);
																	phi262 = *(uint64_t*)(arg1 - 104);
																	phi263 = *(uint32_t*)(arg1 - 96);
																	phi215 = *(uint64_t*)(arg1 - 88);
																	phi_in264 = *(uint64_t*)(arg1 - 80);
																	phi_in164 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
																}
																uint32_t phi266 = phi253;
																uint32_t phi267 = phi254;
																*(uint32_t*)(phi_in256 + 96) = phi200;
																uint32_t phi268 = phi257;
																uint32_t phi_in269 = phi258;
																uint64_t phi270 = phi259;
																uint32_t phi271 = phi203;
																uint32_t phi272 = phi261;
																uint64_t phi273 = phi262;
																uint32_t phi_in274 = phi263;
																*(uint64_t*)(phi_in256 + 104) = phi215;
																*(uint64_t*)(phi_in256 + 112) = phi_in264;
																uint32_t phi275 = phi_in252;
																uint32_t phi_in276 = phi_in255;
																uint64_t phi277 = phi_in256;
																uint32_t phi278 = *(uint32_t*)(phi_in256 + 96);
																phi202 = phi_in269;
																uint32_t phi279 = phi_in260;
																uint64_t phi280 = *(uint64_t*)(phi_in256 + 104);
																uint64_t phi_in281 = *(uint64_t*)(phi_in256 + 112);
																int64_t anon282 = (__sext int64_t)*(uint32_t*)(phi270 * 12 + 6301636);
																if (phi268 < *(uint32_t*)((anon282 << 2) + 6300992))
																{
																	*(uint32_t*)(phi_in256 + 124) = phi268;
																	*(uint64_t*)(phi_in256 + 88) = phi273;
																	*(uint64_t*)(phi_in256 + 80) = phi270;
																	uint64_t anon283 = (__zext uint64_t)*(uint32_t*)(phi_in256 + 120);
																	w(4197793, anon11, anon282, anon283, anon283);
																	phi275 = *(uint32_t*)(arg1 - 96);
																	phi266 = *(uint32_t*)(arg1 - 96);
																	phi267 = *(uint32_t*)(arg1 - 96);
																	phi_in199 = alloca1.field14;
																	phi_in276 = *(uint32_t*)(arg1 - 96);
																	phi277 = anon11;
																	phi278 = *(uint32_t*)(arg1 - 96);
																	phi268 = alloca1.field14;
																	phi202 = *(uint32_t*)(arg1 - 96);
																	phi270 = *(uint64_t*)(arg1 - 112);
																	phi271 = *(uint32_t*)(arg1 - 96);
																	phi279 = *(uint32_t*)(arg1 - 96);
																	phi272 = *(uint32_t*)(arg1 - 96);
																	phi273 = *(uint64_t*)(arg1 - 104);
																	phi_in274 = *(uint32_t*)(arg1 - 96);
																	phi280 = *(uint64_t*)(arg1 - 88);
																	phi_in281 = *(uint64_t*)(arg1 - 80);
																	phi_in164 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
																}
																phi_in196 = phi275;
																uint32_t phi_in284 = phi266;
																uint32_t phi_in285 = phi267;
																uint64_t phi_in286 = phi277;
																phi_in240 = phi278;
																*(uint32_t*)(phi_in286 + 112) = phi268;
																phi_in242 = phi271;
																uint32_t phi_in287 = phi279;
																phi247 = phi272;
																*(uint64_t*)(phi_in286 + 80) = phi273;
																*(uint64_t*)(phi_in286 + 96) = phi280;
																*(uint64_t*)(phi_in286 + 104) = phi_in281;
																phi236 = phi_in196;
																phi221 = phi_in284;
																phi198 = phi_in285;
																*anon237 = phi_in199;
																phi_in213 = phi_in286;
																phi_in239 = phi_in276;
																phi241 = *(uint32_t*)(phi_in286 + 112);
																phi243 = *(uint32_t*)(phi_in286 + 112);
																phi244 = *(uint32_t*)(phi_in286 + 112);
																phi245 = *(uint32_t*)(phi_in286 + 112);
																phi246 = phi_in287;
																phi186 = *(uint32_t*)(phi_in286 + 112);
																phi210 = *(uint32_t*)(phi_in286 + 112);
																phi248 = *(uint32_t*)(phi_in286 + 112);
																phi_in212 = *(uint32_t*)(phi_in286 + 112);
																*(uint64_t*)(phi_in216 + 80) = *(uint64_t*)(phi_in286 + 80);
																phi214 = phi_in274;
																*(uint64_t*)(phi_in216 + 96) = *(uint64_t*)(phi_in286 + 96);
																*(uint64_t*)(phi_in216 + 104) = *(uint64_t*)(phi_in286 + 104);
																phi_in249 = *(uint32_t*)(phi_in286 + 112);
																phi250 = *(uint32_t*)(phi_in286 + 112);
																phi251 = *(uint32_t*)(phi_in286 + 112);
																phi219 = phi_in164;
																int64_t anon288 = (__sext int64_t)*(uint32_t*)(phi270 * 12 + 6301640);
																if (*(uint32_t*)(phi_in286 + 112) < *(uint32_t*)((anon288 << 2) + 6300992))
																{
																	*(uint32_t*)(phi_in286 + 88) = phi_in276;
																	uint64_t anon289 = (__zext uint64_t)*(uint32_t*)(phi_in286 + 120);
																	w(4197395, anon11, anon288, anon289, anon289);
																	phi236 = *(uint32_t*)(arg1 - 104);
																	phi221 = *(uint32_t*)(arg1 - 104);
																	phi198 = *(uint32_t*)(arg1 - 104);
																	*anon237 = *(uint32_t*)(arg1 - 80);
																	phi_in213 = anon11;
																	phi_in239 = *(uint32_t*)(arg1 - 104);
																	phi_in240 = *(uint32_t*)(arg1 - 104);
																	phi241 = *(uint32_t*)(arg1 - 80);
																	phi202 = *(uint32_t*)(arg1 - 104);
																	phi_in242 = *(uint32_t*)(arg1 - 104);
																	phi243 = *(uint32_t*)(arg1 - 80);
																	phi244 = *(uint32_t*)(arg1 - 80);
																	phi245 = *(uint32_t*)(arg1 - 80);
																	phi246 = *(uint32_t*)(arg1 - 104);
																	phi186 = *(uint32_t*)(arg1 - 80);
																	phi210 = *(uint32_t*)(arg1 - 80);
																	phi247 = *(uint32_t*)(arg1 - 104);
																	phi248 = *(uint32_t*)(arg1 - 80);
																	phi_in212 = *(uint32_t*)(arg1 - 80);
																	*(uint64_t*)(phi_in216 + 80) = *(uint64_t*)(arg1 - 112);
																	phi214 = *(uint32_t*)(arg1 - 104);
																	*(uint64_t*)(phi_in216 + 96) = *(uint64_t*)(arg1 - 96);
																	*(uint64_t*)(phi_in216 + 104) = *(uint64_t*)(arg1 - 88);
																	phi_in249 = *(uint32_t*)(arg1 - 80);
																	phi250 = *(uint32_t*)(arg1 - 80);
																	phi251 = *(uint32_t*)(arg1 - 80);
																	phi219 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
																}
															}
															uint32_t phi290 = phi236;
															*(uint32_t*)(phi_in216 + 88) = phi221;
															uint32_t phi_in291 = phi198;
															*(uint32_t*)(phi_in216 + 112) = *anon237;
															phi_in216 = phi_in213;
															phi179 = phi_in239;
															uint32_t phi_in292 = phi_in240;
															phi201 = phi241;
															uint32_t phi_in293 = phi202;
															uint32_t phi294 = phi_in242;
															uint32_t phi_in295 = phi243;
															phi185 = phi244;
															phi_in225 = phi245;
															uint32_t phi296 = phi246;
															uint32_t phi_in297 = phi186;
															uint32_t phi_in298 = phi247;
															phi228 = phi248;
															phi_in190 = *(uint64_t*)(phi_in216 + 80);
															*(uint64_t*)(phi_in216 + 104) = *(uint64_t*)(phi_in216 + 104);
															phi_in218 = phi250;
															phi232 = phi251;
															phi_in234 = phi219;
															phi220 = phi290;
															phi221 = *(uint32_t*)(phi_in216 + 88);
															phi_in129 = phi_in291;
															phi222 = *(uint32_t*)(phi_in216 + 112);
															phi223 = phi_in292;
															phi182 = phi_in293;
															phi224 = phi294;
															phi_in204 = phi_in295;
															phi137 = phi296;
															phi226 = phi_in297;
															phi227 = phi_in298;
															phi_in142 = phi_in212;
															phi_in229 = phi_in190;
															phi_in144 = phi214;
															phi159 = *(uint64_t*)(phi_in216 + 96);
															phi230 = *(uint64_t*)(phi_in216 + 104);
															phi231 = phi_in249;
															phi146 = phi_in218;
															phi233 = phi_in216;
															if (*(uint32_t*)(phi_in216 + 64) < *anon237)
															{
																*anon237 = *(uint32_t*)(phi_in216 + 112);
																uint32_t phi299 = *(uint32_t*)(phi_in216 + 88);
																uint32_t phi_in300 = phi_in291;
																uint32_t phi_in301 = *(uint32_t*)(phi_in216 + 112);
																phi223 = phi_in292;
																phi182 = phi_in293;
																phi_in211 = phi_in298;
																*(uint64_t*)(phi_in216 + 80) = phi_in190;
																*(uint64_t*)(phi_in216 + 96) = *(uint64_t*)(phi_in216 + 96);
																uint64_t phi302 = phi_in216;
																uint64_t phi303 = phi_in234;
																int64_t anon305 = anon238 * 12;
																int64_t anon304 = (__sext int64_t)*(uint32_t*)(anon305 + 6301636);
																if (*(uint32_t*)(phi_in216 + 112) < *(uint32_t*)((anon304 << 2) + 6300992))
																{
																	*(uint64_t*)(phi_in216 + 104) = *(uint64_t*)(phi_in216 + 104);
																	*(uint64_t*)(phi_in216 + 80) = phi_in190;
																	uint64_t anon306 = (__zext uint64_t)*(uint32_t*)(phi_in216 + 120);
																	w(4197948, anon11, anon304, anon306, anon306);
																	phi290 = *(uint32_t*)(arg1 - 104);
																	phi299 = *(uint32_t*)(arg1 - 104);
																	phi_in300 = *(uint32_t*)(arg1 - 104);
																	phi_in301 = *(uint32_t*)(arg1 - 80);
																	phi179 = *(uint32_t*)(arg1 - 104);
																	phi223 = *(uint32_t*)(arg1 - 104);
																	phi182 = *(uint32_t*)(arg1 - 104);
																	phi294 = *(uint32_t*)(arg1 - 104);
																	phi296 = *(uint32_t*)(arg1 - 104);
																	phi_in211 = *(uint32_t*)(arg1 - 104);
																	*(uint64_t*)(phi_in216 + 80) = *(uint64_t*)(arg1 - 112);
																	phi214 = *(uint32_t*)(arg1 - 104);
																	*(uint64_t*)(phi_in216 + 96) = *(uint64_t*)(arg1 - 96);
																	*(uint64_t*)(phi_in216 + 104) = *(uint64_t*)(arg1 - 88);
																	phi302 = anon11;
																	phi303 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
																}
																*(uint32_t*)(phi_in216 + 88) = phi290;
																phi221 = phi299;
																phi201 = phi_in301;
																phi_in242 = phi294;
																uint32_t phi_in307 = phi296;
																phi_in190 = *(uint64_t*)(phi_in216 + 80);
																phi_in191 = phi214;
																phi159 = *(uint64_t*)(phi_in216 + 96);
																phi_in216 = phi302;
																phi_in234 = phi303;
																phi220 = *(uint32_t*)(phi_in216 + 88);
																phi_in129 = phi_in300;
																phi222 = phi201;
																phi224 = phi_in242;
																phi_in204 = phi201;
																phi185 = phi201;
																phi_in225 = phi201;
																phi137 = phi_in307;
																phi226 = phi201;
																phi210 = phi201;
																phi227 = phi_in211;
																phi228 = phi201;
																phi_in142 = phi201;
																phi_in229 = phi_in190;
																phi_in144 = phi_in191;
																phi230 = *(uint64_t*)(phi_in216 + 104);
																phi231 = phi201;
																phi146 = phi201;
																phi232 = phi201;
																phi233 = phi_in216;
																int64_t anon308 = (__sext int64_t)*(uint32_t*)(anon305 + 6301640);
																if (phi201 < *(uint32_t*)((anon308 << 2) + 6300992))
																{
																	*(uint32_t*)(phi_in216 + 112) = phi201;
																	*(uint64_t*)(phi_in216 + 96) = phi159;
																	*(uint64_t*)(phi_in216 + 80) = phi_in190;
																	uint64_t anon309 = (__zext uint64_t)*(uint32_t*)(phi_in216 + 120);
																	w(4197231, anon11, anon308, anon309, anon309);
																	phi220 = alloca1.field8;
																	phi221 = alloca1.field8;
																	phi_in129 = alloca1.field8;
																	phi222 = alloca1.field12;
																	phi179 = alloca1.field8;
																	phi223 = alloca1.field8;
																	phi201 = alloca1.field12;
																	phi182 = alloca1.field8;
																	phi224 = alloca1.field8;
																	phi_in204 = alloca1.field12;
																	phi185 = alloca1.field12;
																	phi_in225 = alloca1.field12;
																	phi137 = alloca1.field8;
																	phi226 = alloca1.field12;
																	phi210 = alloca1.field12;
																	phi227 = alloca1.field8;
																	phi228 = alloca1.field12;
																	phi_in142 = alloca1.field12;
																	phi_in229 = alloca1.field7;
																	phi_in144 = alloca1.field8;
																	phi159 = alloca1.field10;
																	phi230 = alloca1.field11;
																	phi231 = alloca1.field12;
																	phi146 = alloca1.field12;
																	phi232 = alloca1.field12;
																	phi233 = anon11;
																	phi_in234 = (__zext uint64_t)alloca1.field8;
																}
															}
														}
														uint32_t phi_in310 = phi220;
														uint32_t phi_in311 = phi221;
														uint32_t phi_in312 = phi222;
														phi_in61 = phi179;
														uint32_t phi_in313 = phi223;
														phi_in132 = phi201;
														uint32_t phi_in314 = phi182;
														phi134 = phi224;
														phi168 = phi185;
														phi170 = phi226;
														uint32_t phi_in315 = phi210;
														uint32_t phi_in316 = phi227;
														phi_in73 = phi228;
														phi172 = phi230;
														phi161 = phi231;
														phi174 = phi232;
														phi_in163 = phi233;
														phi_in165 = phi_in310;
														phi128 = phi_in311;
														phi166 = phi_in129;
														phi_in59 = phi_in312;
														phi167 = phi_in313;
														phi_in63 = phi_in132;
														phi150 = phi_in314;
														phi151 = phi_in204;
														phi169 = phi_in225;
														phi139 = phi_in315;
														phi171 = phi_in316;
														phi105 = phi_in229;
														phi_in144 = phi_in144;
														phi173 = phi146;
														phi104 = phi_in163;
														phi175 = phi_in234;
														phi178 = phi178 + 4;
														phi127 = phi_in310;
														phi128 = phi_in311;
														phi130 = phi_in312;
														phi179 = phi_in61;
														phi_in180 = phi_in313;
														phi181 = phi_in132;
														phi182 = phi_in314;
														phi183 = phi134;
														phi184 = phi_in204;
														phi185 = phi168;
														phi153 = phi_in225;
														phi154 = phi137;
														phi186 = phi170;
														phi_in187 = phi_in315;
														phi_in156 = phi_in316;
														phi_in188 = phi_in73;
														phi189 = phi_in142;
														phi_in190 = phi_in229;
														phi_in191 = phi_in144;
														phi192 = phi159;
														phi160 = phi172;
														phi193 = phi161;
														phi_in194 = phi174;
														phi195 = phi_in163;
														phi_in164 = phi_in234;
													}
													while (phi178 != 8);
												}
												phi108 = phi166;
												phi_in88 = phi167;
												phi112 = phi150;
												phi_in91 = phi134;
												phi115 = phi151;
												phi93 = phi168;
												phi68 = phi169;
												phi_in95 = phi137;
												phi70 = phi170;
												phi_in71 = phi139;
												phi_in97 = phi171;
												uint64_t phi_in317 = phi159;
												phi113 = phi172;
												phi_in102 = phi161;
												uint32_t phi_in318 = phi173;
												phi122 = phi174;
												phi123 = phi175;
												phi106 = phi_in165;
												phi_in107 = phi128;
												phi_in59 = phi_in59;
												phi109 = phi_in61;
												phi110 = phi_in88;
												phi_in111 = phi_in63;
												phi114 = phi_in91;
												phi116 = phi_in95;
												phi117 = phi_in71;
												phi_in118 = phi_in97;
												phi119 = phi_in73;
												phi99 = phi_in142;
												phi120 = phi_in144;
												phi121 = phi_in317;
												phi_in77 = phi_in102;
												phi78 = phi_in318;
												phi126 = phi126 + 4;
												phi127 = phi_in165;
												phi_in129 = phi108;
												phi130 = phi_in59;
												phi_in87 = phi_in61;
												phi_in131 = phi_in88;
												phi_in132 = phi_in63;
												phi133 = phi112;
												phi134 = phi_in91;
												phi_in135 = phi115;
												phi_in136 = phi93;
												phi94 = phi68;
												phi137 = phi_in95;
												phi_in138 = phi70;
												phi139 = phi_in71;
												phi140 = phi_in97;
												phi_in141 = phi_in73;
												phi143 = phi105;
												phi101 = phi_in317;
												phi_in145 = phi113;
												phi_in77 = phi_in102;
												phi146 = phi_in318;
												phi79 = phi122;
												phi80 = phi104;
												phi147 = phi123;
											}
											while (phi126 != 8);
										}
										phi319 = phi106;
										uint32_t phi_in320 = phi108;
										uint32_t phi_in321 = phi109;
										phi322 = phi112;
										uint32_t phi_in323 = phi116;
										phi324 = phi120;
										uint64_t phi_in325 = phi121;
										uint64_t phi_in326 = phi104;
										uint64_t phi_in327 = phi123;
										phi_in328 = phi_in107;
										phi329 = phi_in320;
										phi330 = phi_in321;
										phi331 = phi_in325;
										phi332 = phi_in323;
										phi333 = phi_in118;
										phi334 = phi_in326;
										phi335 = phi_in327;
										if (phi105 != 8)
										{
											phi56 = phi319;
											phi57 = phi_in107;
											phi58 = phi_in320;
											phi_in61 = phi_in321;
											phi62 = phi110;
											phi_in63 = phi_in111;
											phi64 = phi322;
											phi65 = phi114;
											phi66 = phi115;
											phi67 = phi93;
											phi68 = phi68;
											phi69 = phi_in323;
											phi70 = phi70;
											phi_in71 = phi117;
											phi72 = phi_in118;
											phi_in73 = phi119;
											phi74 = phi99;
											phi75 = phi324;
											phi76 = phi_in325;
											phi79 = phi122;
											phi80 = phi_in326;
											phi81 = phi105 + 4;
											phi_in82 = phi113;
											phi_in83 = phi_in327;
										}
									}
									while (phi105 != 8);
								}
								else 
								{
									phi319 = phi40;
									phi_in328 = phi41;
									phi329 = phi42;
									phi330 = phi43;
									phi110 = phi44;
									phi322 = phi45;
									phi331 = phi52;
									phi114 = phi46;
									phi332 = phi47;
									phi333 = phi48;
									phi324 = phi49;
									phi334 = phi50;
									phi335 = phi53 & 0xffffffff;
								}
								phi336 = phi319;
								phi_in337 = phi329;
								phi_in338 = phi330;
								phi_in339 = phi110;
								phi340 = phi322;
								phi_in341 = phi114;
								phi_in342 = phi332;
								phi343 = phi333;
								phi344 = phi335;
								if (phi51 != 8)
								{
									phi40 = phi336;
									phi41 = phi_in328;
									phi42 = phi_in337;
									phi43 = phi_in338;
									phi44 = phi_in339;
									phi45 = phi340;
									phi46 = phi_in341;
									phi47 = phi_in342;
									phi48 = phi343;
									phi49 = phi324;
									phi50 = phi334;
									phi51 = phi51 + 4;
									phi52 = phi331;
									phi53 = phi344;
								}
							}
							while (phi51 != 8);
							phi27 = phi_in328;
							phi28 = phi_in337;
							phi345 = phi_in338;
							phi_in346 = *(uint64_t*)(phi334 + 72);
							phi32 = phi_in341;
							phi347 = phi_in342;
						}
						else 
						{
							phi336 = phi26;
							phi27 = phi27;
							phi28 = phi28;
							phi345 = phi29;
							phi_in339 = phi30;
							phi340 = phi31;
							phi_in346 = *(uint64_t*)(phi37 + 72);
							phi32 = phi32;
							phi347 = phi33;
							phi343 = phi34;
							phi324 = phi35;
							phi344 = phi36 & 0xffffffff;
							phi334 = phi37;
						}
						phi_in348 = phi340;
						phi349 = phi_in346;
						phi_in350 = phi334;
						if (phi349 != 8)
						{
							phi26 = phi336;
							phi29 = phi345;
							phi30 = phi_in339;
							phi31 = phi_in348;
							phi33 = phi347;
							phi34 = phi343;
							phi35 = phi324;
							phi36 = phi344;
							*(uint64_t*)(phi37 + 72) = phi349 + 4;
							phi37 = phi_in350;
						}
					}
					while (phi349 != 8);
					phi22 = *(uint32_t*)(phi_in350 + 68);
					phi23 = phi_in348;
					phi_in351 = *(uint64_t*)(phi_in350 + 56);
					phi352 = (__zext uint64_t)phi_in348;
					phi17 = *(uint32_t*)(phi_in350 + 68);
					phi353 = phi_in348;
					phi_in354 = *(uint32_t*)(phi_in350 + 68);
					phi355 = phi_in350;
				}
				else 
				{
					phi_in351 = *(uint64_t*)(phi21 + 56);
					phi352 = phi16 & 0xffffffff;
					phi17 = *(uint32_t*)(phi21 + 68);
					phi353 = phi18;
					phi_in354 = phi19;
					phi355 = phi21;
				}
				phi_in356 = phi22;
				phi_in357 = phi23;
				phi358 = phi_in351;
				phi359 = phi355;
				if (phi358 != 8)
				{
					phi14 = phi_in356;
					phi15 = phi_in357;
					phi16 = phi352;
					phi18 = phi353;
					phi19 = phi_in354;
					phi20 = phi358 + 4;
					phi21 = phi359;
				}
			}
			while (phi358 != 8);
			phi360 = *(uint64_t*)(phi359 + 48);
			phi361 = phi_in357;
			phi362 = phi_in356;
			phi363 = (__zext uint64_t)phi_in357;
			phi8 = phi_in356;
			phi9 = phi_in357;
		}
		else 
		{
			phi360 = *(uint64_t*)(phi10 + 48);
			phi361 = phi4;
			phi362 = phi5;
			phi363 = phi7 & 0xffffffff;
			phi8 = *anon12;
			phi9 = phi9;
			phi359 = phi10;
		}
		if (phi360 != 8)
		{
			phi4 = phi361;
			phi5 = phi362;
			phi7 = phi363;
			*(uint64_t*)(phi10 + 48) = phi360 + 4;
			phi10 = phi359;
		}
	}
	while (phi360 != 8);
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
		uint64_t phi22;
		uint32_t anon23;
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
			uint32_t phi11;
			uint32_t phi12;
			uint32_t phi13;
			uint32_t phi14;
			uint32_t phi15;
			uint32_t* anon16;
			uint32_t phi_in17;
			uint32_t phi18;
			uint32_t phi20;
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
				*phi7 = phi11;
				phi18 = phi12;
				uint32_t phi_in19 = phi13;
				*anon16 = phi14;
				*phi7 = phi15;
				phi_in17 = phi_in19;
				phi20 = *anon16;
			}
			if (*anon10 < *phi7)
			{
				if (*anon10 >= *anon16)
				{
					phi_in17 = *anon16 & 0xf;
					*phi7 = *phi7;
					phi20 = *anon10;
					phi18 = *phi7;
				}
			}
			if (*anon10 >= *phi7 && *phi7 < *anon16 || *anon10 < *phi7 && *anon10 < *anon16 || *anon10 < *phi7 && *anon10 >= *anon16)
			{
				*anon10 = phi20;
				if (phi18 - *anon10 <= 4294967295)
				{
					phi_in17 = *(uint32_t*)((phi9 & 0xc) - 4);
				}
			}
			uint32_t phi21 = phi_in17;
			phi22 = 6301636;
			anon23 = phi21 + 1 & 0xff;
			if (anon23 != 0)
			{
				phi22 = 6301636;
				uint64_t anon24 = phi9 + 12;
				phi7 = (uint32_t*)(anon24 & 0xc);
				phi_in8 = anon24;
				if (phi9 == 6301984)
				{
					break;
				}
			}
		}
		while (anon23 != 0);
		do
		{
			uint32_t phi27;
			uint32_t phi28;
			uint32_t phi29;
			uint32_t phi30;
			uint32_t phi31;
			uint32_t* anon32;
			uint32_t phi_in33;
			uint32_t phi34;
			uint32_t phi36;
			uint32_t phi37;
			uint32_t phi38;
			uint32_t* anon25 = (uint32_t*)(phi22 + 4);
			uint32_t* anon26 = (uint32_t*)phi22;
			if (*anon25 < *anon26)
			{
				*anon26 = *anon25;
				*anon25 = *anon26;
				phi27 = *anon26;
				phi28 = *anon26;
				phi29 = *anon25;
				phi30 = *anon25;
				anon32 = (uint32_t*)(phi22 - 4);
				phi31 = *anon32;
			}
			else 
			{
				phi_in33 = *anon32;
				if (*anon26 < *anon32)
				{
					phi27 = *anon25 & 0xf;
					phi28 = *anon25;
					phi29 = *anon26 & 0xf;
					phi30 = *anon26;
					phi31 = *anon32 & 0xf;
				}
			}
			if (*anon25 >= *anon26 && *anon26 < *anon32 || *anon25 < *anon26 && *anon25 < *anon32)
			{
				phi34 = phi27;
				uint32_t phi_in35 = phi28;
				phi36 = phi29;
				*anon32 = phi30;
				*anon26 = phi31;
				phi37 = *anon32;
				phi38 = phi_in35;
			}
			if (*anon25 < *anon26)
			{
				if (*anon25 >= *anon32)
				{
					phi36 = *anon32 & 0xf;
					phi34 = *anon26;
					phi37 = *anon25;
					phi38 = *anon26;
				}
			}
			if (*anon25 >= *anon26 && *anon26 < *anon32 || *anon25 < *anon26 && *anon25 < *anon32 || *anon25 < *anon26 && *anon25 >= *anon32)
			{
				phi_in33 = phi36;
				*anon26 = phi34;
				*anon25 = phi37;
				if (phi38 - *anon25 <= 4294967295)
				{
					phi_in33 = *(uint32_t*)((phi22 & 0xf) - 4);
				}
			}
			uint32_t phi39 = phi_in33;
			anon40 = phi39 + 1 & 0xff;
			if (anon40 != 0)
			{
				phi22 = phi22 + 12;
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
		if (anon8 != 10 || anon11 != 0)
		{
			anon12 = __ctype_b_loc();
			dispatch13 = 0;
		}
		uint64_t* anon14 = (uint64_t*)anon12;
		if ((*(uint8_t*)(*anon14 + ((__sext int64_t)anon8 << 1 | 1)) & 8) != 0)
		{
			if (anon8 != 10 || anon11 != 0)
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
			if (*(uint32_t*)((anon24 << 2) + 6300864) != 0 || *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon26 + 6301636) << 2) + 6300864) != 0 || *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon26 + 6301640) << 2) + 6300864) != 0)
			{
				puts((uint8_t*)0x401d8e);
				phi27 = (__sext int64_t)*anon25;
			}
			if (*(uint32_t*)((phi27 << 2) + 6301504) != 0 || *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon26 + 6301636) << 2) + 6301504) != 0 || *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon26 + 6301640) << 2) + 6301504) != 0)
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
			if (*anon25 == phi43 || *(uint32_t*)(anon26 + 6301636) == phi43 || *(uint32_t*)(anon26 + 6301640) == phi43)
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
