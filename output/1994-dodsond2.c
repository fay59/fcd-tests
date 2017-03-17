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
			phi5 = *phi1;
			phi9 = *anon4;
		}
		else 
		{
			phi5 = *anon4;
			phi6 = *phi1;
			phi10 = *anon8;
		}
		if (*anon4 < *phi1 && *anon4 < *anon8 || *anon4 >= *phi1 && *phi1 < *anon8)
		{
			uint32_t phi_in11 = phi6;
			*phi1 = *anon8;
			*anon8 = phi_in11;
			phi_in7 = phi_in11;
			phi9 = *anon8;
		}
		if (*anon4 < *phi1 && *anon4 < *anon8 || *anon4 >= *phi1 && *phi1 < *anon8 || *anon4 >= *anon8 && *anon4 < *phi1)
		{
			*phi1 = phi5;
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
	uint32_t phi5;
	uint64_t phi10;
	uint64_t phi11;
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
	uint64_t anon12 = (uint64_t)&alloca1;
	phi11 = anon12;
	while (true)
	{
		uint32_t phi16;
		uint64_t phi21;
		uint32_t phi25;
		uint64_t phi35;
		uint32_t phi46;
		uint64_t phi48;
		uint32_t phi_in305;
		uint32_t phi_in311;
		uint64_t phi316;
		uint32_t phi_in322;
		uint64_t phi323;
		uint64_t phi326;
		uint32_t phi327;
		uint32_t phi328;
		uint32_t phi329;
		uint64_t phi330;
		int64_t anon14 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi10 + 48) + *(uint64_t*)(phi10 + 8) + 6301632);
		uint32_t* anon13 = (uint32_t*)((anon14 << 2) + 6300992);
		*anon13 = phi8;
		phi10 = phi11;
		if (phi9 < *anon13)
		{
			uint32_t phi321;
			uint32_t phi324;
			uint32_t phi325;
			*(uint64_t*)(phi10 + 16) = anon14 * 12;
			*(uint32_t*)(phi10 + 40) = (uint32_t)phi7 + 5;
			uint32_t phi15 = phi5;
			phi16 = phi4;
			uint64_t phi17 = (__zext uint64_t)phi4;
			uint32_t phi18 = phi5;
			uint32_t phi19 = phi4;
			uint32_t phi20 = phi5;
			phi21 = 0;
			*(uint32_t*)(phi10 + 68) = phi18;
			uint32_t phi22 = phi19;
			*(uint64_t*)(phi10 + 56) = phi21;
			int64_t anon24 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi10 + 56) + *(uint64_t*)(phi10 + 16) + 6301632);
			uint32_t* anon23 = (uint32_t*)((anon24 << 2) + 6300992);
			if (phi20 < *anon23)
			{
				uint32_t phi312;
				uint32_t phi313;
				uint32_t phi314;
				uint32_t phi315;
				uint32_t phi317;
				uint32_t phi318;
				uint64_t phi319;
				uint64_t phi320;
				*anon23 = *(uint32_t*)(phi10 + 4);
				*(uint64_t*)(phi10 + 32) = anon24 * 12;
				*(uint32_t*)(phi10 + 44) = (uint32_t)phi17 + 6;
				phi25 = phi22;
				uint32_t phi26 = phi22;
				uint32_t phi27 = phi22;
				uint32_t phi28 = phi22;
				uint32_t phi29 = phi22;
				uint32_t phi30 = phi22;
				uint32_t phi31 = phi22;
				uint32_t phi32 = phi22;
				uint32_t phi33 = phi22;
				uint64_t phi34 = (__zext uint64_t)phi22;
				*(uint64_t*)(phi35 + 72) = 0;
				phi35 = phi10;
				uint32_t phi36 = phi31;
				uint32_t phi37 = phi22;
				uint32_t phi38 = phi32;
				uint64_t phi39 = phi34;
				int64_t anon41 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi35 + 72) + *(uint64_t*)(phi35 + 32) + 6301632);
				uint32_t* anon40 = (uint32_t*)((anon41 << 2) + 6300992);
				if (*(uint32_t*)(phi35 + 4) < *anon40)
				{
					uint32_t phi97;
					uint64_t phi108;
					uint32_t phi303;
					uint32_t phi304;
					uint64_t phi306;
					uint32_t phi307;
					uint32_t phi308;
					uint32_t phi309;
					uint32_t phi310;
					*anon40 = *(uint32_t*)(phi35 + 24);
					*(uint32_t*)(phi35 + 64) = (uint32_t)phi39 + 7;
					uint32_t phi42 = phi25;
					uint32_t phi43 = phi26;
					uint32_t phi44 = phi29;
					uint32_t phi45 = phi30;
					phi46 = phi33;
					uint64_t phi47 = phi35;
					phi48 = 0;
					uint64_t phi49 = anon41 * 12;
					int64_t anon51 = (__sext int64_t)*(uint32_t*)(phi48 + phi49 + 6301632);
					uint32_t* anon50 = (uint32_t*)((anon51 << 2) + 6300992);
					if (*(uint32_t*)(phi47 + 24) < *anon50)
					{
						uint32_t phi_in55;
						uint64_t phi302;
						*anon50 = *(uint32_t*)(phi47 + 28);
						uint32_t phi_in52 = phi42;
						uint32_t phi53 = phi43;
						uint32_t phi54 = phi27;
						uint32_t anon56 = (uint32_t)phi39 + 8;
						phi_in55 = anon56;
						uint32_t phi_in57 = phi28;
						uint32_t phi58 = phi44;
						uint32_t phi59 = anon56;
						uint32_t phi_in60 = phi45;
						uint32_t phi_in61 = phi36;
						uint32_t phi_in62 = anon56;
						uint32_t phi63 = anon56;
						uint32_t phi64 = anon56;
						uint32_t phi65 = phi37;
						uint32_t phi66 = anon56;
						uint32_t phi67 = anon56;
						uint32_t phi_in68 = phi38;
						uint32_t phi_in69 = anon56;
						uint32_t phi70 = anon56;
						uint32_t phi71 = phi46;
						uint64_t phi_in72 = phi49;
						uint32_t phi73 = anon56;
						uint32_t phi74 = anon56;
						uint32_t phi75 = anon56;
						uint64_t phi76 = phi47;
						uint64_t phi77 = 0;
						uint64_t phi78 = anon51 * 12;
						uint64_t phi79 = phi39;
						do
						{
							uint32_t phi80 = phi53;
							uint32_t phi_in81 = phi54;
							uint32_t phi82 = phi_in57;
							uint32_t phi83 = phi58;
							uint32_t phi84 = phi_in62;
							uint32_t phi85 = phi63;
							uint32_t phi_in86 = phi64;
							uint32_t phi87 = phi66;
							uint32_t phi88 = phi70;
							uint32_t phi89 = phi71;
							uint32_t phi_in90 = phi75;
							uint64_t phi91 = phi76;
							uint32_t phi92 = phi_in52;
							phi53 = phi80;
							uint32_t phi93 = phi_in81;
							uint32_t phi_in94 = phi_in55;
							uint32_t phi95 = phi83;
							uint32_t phi96 = phi59;
							phi97 = phi_in60;
							uint64_t phi_in98 = phi78;
							uint64_t phi_in99 = phi77;
							uint32_t phi100 = phi_in61;
							uint32_t phi101 = phi85;
							phi64 = phi_in86;
							uint32_t phi102 = phi65;
							uint32_t phi_in103 = phi87;
							uint32_t phi_in104 = phi67;
							uint32_t phi105 = phi_in68;
							uint32_t phi_in106 = phi_in69;
							phi70 = phi88;
							uint32_t phi107 = phi89;
							phi108 = phi_in72;
							uint32_t phi_in109 = phi_in90;
							uint64_t phi110 = phi91;
							uint64_t phi111 = phi79;
							int64_t anon113 = (__sext int64_t)*(uint32_t*)(phi77 + phi78 + 6301632);
							uint32_t* anon112 = (uint32_t*)((anon113 << 2) + 6300992);
							if (*(uint32_t*)(phi91 + 28) < *anon112)
							{
								uint64_t phi128;
								*anon112 = *(uint32_t*)(phi91 + 40);
								*(uint32_t*)(phi91 + 120) = (uint32_t)phi79 + 9;
								uint64_t phi_in114 = 0;
								uint32_t phi_in115 = phi_in52;
								uint32_t phi116 = phi_in55;
								phi_in57 = phi82;
								uint32_t phi117 = phi_in60;
								uint32_t phi118 = phi_in61;
								phi_in62 = phi84;
								uint32_t phi_in119 = phi_in86;
								uint32_t phi120 = phi_in68;
								uint32_t phi121 = phi_in69;
								uint64_t phi122 = phi77;
								uint64_t phi123 = phi_in72;
								uint64_t phi124 = phi78;
								uint32_t phi125 = phi73;
								uint32_t phi126 = phi74;
								uint64_t phi127 = phi79 & 0xffffffff;
								do
								{
									phi128 = phi_in114;
									uint32_t phi_in129 = phi80;
									uint32_t phi130 = phi116;
									uint32_t phi131 = phi83;
									uint32_t phi132 = phi59;
									uint32_t phi133 = phi117;
									uint32_t phi134 = phi85;
									uint32_t phi_in135 = phi65;
									uint32_t phi136 = phi87;
									uint32_t phi137 = phi67;
									uint32_t phi138 = phi121;
									uint32_t phi139 = phi88;
									uint64_t phi_in140 = phi122;
									uint32_t phi_in141 = phi89;
									uint64_t phi142 = phi123;
									uint64_t phi143 = phi124;
									uint32_t phi_in144 = phi126;
									uint64_t phi_in145 = phi91;
									uint32_t phi146 = phi_in115;
									uint32_t phi147 = phi_in129;
									uint32_t phi148 = phi_in57;
									uint32_t phi149 = phi131;
									uint32_t phi150 = phi132;
									uint32_t phi151 = phi133;
									phi_in61 = phi118;
									uint32_t phi152 = phi_in62;
									uint32_t phi153 = phi134;
									phi_in86 = phi_in119;
									uint32_t phi154 = phi_in135;
									phi87 = phi136;
									uint32_t phi155 = phi137;
									uint32_t phi156 = phi120;
									phi121 = phi138;
									phi_in99 = phi_in140;
									phi107 = phi_in141;
									uint64_t phi157 = phi142;
									phi124 = phi143;
									phi73 = phi125;
									phi74 = phi_in144;
									uint32_t phi_in158 = phi_in90;
									uint64_t phi159 = phi_in145;
									int64_t anon161 = (__sext int64_t)*(uint32_t*)(phi128 + anon113 * 12 + 6301632);
									uint32_t* anon160 = (uint32_t*)((anon161 << 2) + 6300992);
									if (*(uint32_t*)(phi_in145 + 40) < *anon160)
									{
										uint64_t phi168;
										uint64_t phi176;
										*anon160 = *(uint32_t*)(phi_in145 + 44);
										uint64_t phi_in162 = 0;
										uint32_t phi163 = phi_in115;
										uint32_t phi_in164 = phi_in129;
										uint32_t phi_in165 = phi_in81;
										uint32_t phi166 = phi130;
										uint32_t phi167 = phi_in57;
										*(uint32_t*)(phi168 + 124) = phi_in62;
										uint32_t phi169 = phi_in119;
										uint32_t phi170 = phi_in135;
										uint32_t phi_in171 = phi139;
										*(uint64_t*)(phi168 + 88) = phi_in140;
										uint32_t phi172 = phi_in141;
										uint32_t phi173 = phi_in90;
										uint64_t phi174 = phi_in145;
										uint64_t phi_in175 = phi127;
										do
										{
											phi176 = phi_in162;
											uint32_t phi177 = phi163;
											uint32_t phi178 = phi166;
											uint32_t phi_in179 = phi167;
											uint32_t phi180 = phi131;
											uint32_t phi_in181 = phi132;
											uint32_t phi_in182 = phi133;
											uint32_t phi_in183 = phi118;
											uint32_t phi184 = *(uint32_t*)(phi168 + 124);
											uint32_t phi185 = phi134;
											uint32_t phi186 = phi169;
											uint32_t phi187 = phi170;
											uint32_t phi188 = phi136;
											uint32_t phi_in189 = phi137;
											uint32_t phi_in190 = phi120;
											uint32_t phi_in191 = phi138;
											uint32_t phi192 = phi172;
											*(uint64_t*)(phi168 + 104) = phi142;
											*(uint64_t*)(phi168 + 112) = phi143;
											uint32_t phi193 = phi125;
											uint32_t phi_in194 = phi173;
											phi168 = phi174;
											phi_in115 = phi177;
											uint32_t phi195 = phi_in164;
											uint32_t phi196 = phi178;
											phi148 = phi_in179;
											uint32_t phi197 = phi180;
											uint32_t phi198 = phi_in181;
											uint32_t phi199 = phi_in182;
											uint32_t phi200 = phi_in183;
											uint32_t phi201 = phi184;
											phi_in119 = phi186;
											uint32_t phi202 = phi187;
											uint32_t phi_in203 = phi188;
											uint32_t phi204 = phi_in189;
											uint32_t phi205 = phi_in190;
											phi138 = phi_in191;
											uint32_t phi206 = phi_in171;
											phi_in140 = *(uint64_t*)(phi168 + 88);
											uint32_t phi207 = phi192;
											uint64_t phi208 = *(uint64_t*)(phi168 + 104);
											uint64_t phi209 = *(uint64_t*)(phi168 + 112);
											uint32_t phi210 = phi_in144;
											uint32_t phi211 = phi_in194;
											phi174 = phi168;
											uint64_t phi212 = phi_in175;
											int64_t anon214 = (__sext int64_t)*(uint32_t*)(phi176 + anon161 * 12 + 6301632);
											uint32_t* anon213 = (uint32_t*)((anon214 << 2) + 6300992);
											if (*(uint32_t*)(phi168 + 44) < *anon213)
											{
												*anon213 = *(uint32_t*)(phi168 + 64);
												*(uint32_t*)(phi215 + 88) = phi_in164;
												uint32_t phi216 = phi_in165;
												uint32_t phi217 = phi178;
												uint64_t phi215 = phi168;
												uint32_t phi218 = phi_in179;
												uint32_t phi219 = phi180;
												uint32_t phi_in220 = phi_in181;
												uint32_t phi221 = phi_in182;
												uint32_t phi222 = phi_in183;
												uint32_t phi_in223 = phi185;
												uint32_t phi224 = phi_in189;
												uint32_t phi225 = phi_in190;
												uint32_t phi_in226 = phi_in171;
												uint64_t phi227 = *(uint64_t*)(phi168 + 88);
												uint64_t phi228 = *(uint64_t*)(phi168 + 104);
												uint64_t phi229 = *(uint64_t*)(phi168 + 112);
												uint32_t phi_in230 = phi193;
												uint32_t phi231 = phi_in144;
												uint32_t phi_in232 = phi_in194;
												uint64_t phi233 = phi_in175;
												int64_t anon236 = anon214 * 12;
												int64_t anon235 = (__sext int64_t)*(uint32_t*)(anon236 + 6301636);
												uint32_t* anon234 = (uint32_t*)((anon235 << 2) + 6300992);
												if (*(uint32_t*)(phi168 + 64) < *anon234)
												{
													*anon234 = phi186;
													uint32_t phi237 = phi177;
													uint32_t phi_in238 = phi_in164;
													uint32_t phi239 = phi_in165;
													*(uint32_t*)(phi168 + 124) = phi_in181;
													uint32_t phi_in240 = phi_in182;
													uint64_t phi241 = anon235;
													uint32_t phi_in242 = phi187;
													uint64_t phi243 = *(uint64_t*)(phi168 + 88);
													uint32_t phi_in244 = phi192;
													uint64_t phi245 = *(uint64_t*)(phi168 + 104);
													uint64_t phi246 = *(uint64_t*)(phi168 + 112);
													uint64_t phi_in247 = phi_in175;
													if (phi185 < phi186)
													{
														*(uint32_t*)(phi168 + 124) = phi184;
														*(uint32_t*)(phi168 + 96) = phi_in183;
														*(uint64_t*)(phi168 + 80) = anon235;
														uint64_t anon248 = (__zext uint64_t)phi186;
														w(4197873, anon12, (__sext int64_t)phi186, anon248, anon248);
														phi237 = *(uint32_t*)(arg1 - 96);
														phi_in238 = *(uint32_t*)(arg1 - 96);
														phi239 = *(uint32_t*)(arg1 - 96);
														phi178 = *(uint32_t*)(arg1 - 68);
														phi_in179 = *(uint32_t*)(arg1 - 96);
														phi180 = *(uint32_t*)(arg1 - 96);
														phi168 = anon12;
														*(uint32_t*)(phi168 + 124) = *(uint32_t*)(arg1 - 68);
														phi_in240 = *(uint32_t*)(arg1 - 96);
														phi241 = *(uint64_t*)(arg1 - 112);
														phi_in183 = *(uint32_t*)(arg1 - 96);
														phi_in242 = *(uint32_t*)(arg1 - 96);
														phi_in190 = *(uint32_t*)(arg1 - 96);
														phi243 = *(uint64_t*)(arg1 - 104);
														phi_in244 = *(uint32_t*)(arg1 - 96);
														phi245 = *(uint64_t*)(arg1 - 88);
														phi246 = *(uint64_t*)(arg1 - 80);
														phi_in247 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
													}
													uint32_t phi_in249 = phi237;
													uint32_t phi250 = phi239;
													uint32_t phi_in251 = phi178;
													*(uint32_t*)(phi168 + 96) = phi180;
													*(uint64_t*)(phi168 + 80) = phi241;
													*(uint64_t*)(phi168 + 88) = phi243;
													*(uint64_t*)(phi168 + 104) = phi245;
													*(uint64_t*)(phi168 + 112) = phi246;
													uint32_t phi_in252 = phi_in249;
													uint32_t phi253 = phi_in238;
													uint32_t phi_in254 = phi_in251;
													*(uint32_t*)(phi215 + 88) = phi_in179;
													uint64_t phi255 = phi168;
													uint32_t phi256 = *(uint32_t*)(phi168 + 96);
													*(uint32_t*)(phi215 + 112) = *(uint32_t*)(phi168 + 124);
													uint32_t phi257 = phi_in240;
													uint64_t phi258 = *(uint64_t*)(phi168 + 80);
													uint32_t phi259 = phi_in183;
													uint32_t phi260 = phi_in242;
													uint32_t phi_in261 = phi_in190;
													uint64_t phi262 = *(uint64_t*)(phi168 + 88);
													uint32_t phi_in263 = phi_in244;
													*(uint64_t*)(phi215 + 96) = *(uint64_t*)(phi168 + 104);
													uint64_t phi264 = *(uint64_t*)(phi168 + 112);
													uint64_t phi265 = phi_in247;
													int64_t anon266 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi168 + 80) * 12 + 6301636);
													if (*(uint32_t*)(phi168 + 124) < *(uint32_t*)((anon266 << 2) + 6300992))
													{
														uint64_t anon267 = (__zext uint64_t)*(uint32_t*)(phi168 + 120);
														w(4197793, anon12, anon266, anon267, anon267);
														phi_in252 = *(uint32_t*)(arg1 - 96);
														phi253 = *(uint32_t*)(arg1 - 96);
														phi250 = *(uint32_t*)(arg1 - 96);
														phi_in254 = alloca1.field14;
														*(uint32_t*)(phi215 + 88) = *(uint32_t*)(arg1 - 96);
														phi255 = anon12;
														phi256 = *(uint32_t*)(arg1 - 96);
														*(uint32_t*)(phi215 + 112) = alloca1.field14;
														phi257 = *(uint32_t*)(arg1 - 96);
														phi258 = *(uint64_t*)(arg1 - 112);
														phi259 = *(uint32_t*)(arg1 - 96);
														phi260 = *(uint32_t*)(arg1 - 96);
														phi_in261 = *(uint32_t*)(arg1 - 96);
														phi262 = *(uint64_t*)(arg1 - 104);
														phi_in263 = *(uint32_t*)(arg1 - 96);
														*(uint64_t*)(phi215 + 96) = *(uint64_t*)(arg1 - 88);
														phi264 = *(uint64_t*)(arg1 - 80);
														phi265 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
													}
													*(uint32_t*)(phi215 + 88) = phi253;
													phi216 = phi250;
													phi218 = *(uint32_t*)(phi215 + 88);
													phi215 = phi255;
													uint32_t phi_in268 = phi256;
													phi_in232 = *(uint32_t*)(phi215 + 112);
													uint32_t phi_in269 = phi257;
													phi222 = phi259;
													phi187 = phi260;
													*(uint64_t*)(phi215 + 80) = phi262;
													*(uint64_t*)(phi215 + 104) = phi264;
													uint64_t phi_in270 = phi265;
													phi177 = phi_in252;
													phi217 = phi_in254;
													phi219 = phi_in268;
													phi_in220 = phi_in232;
													phi221 = phi_in269;
													phi184 = phi_in232;
													phi_in223 = phi_in232;
													phi186 = phi_in232;
													phi188 = phi_in232;
													phi224 = phi_in232;
													phi225 = phi_in261;
													phi_in191 = phi_in232;
													phi_in226 = phi_in232;
													phi227 = *(uint64_t*)(phi215 + 80);
													phi192 = phi_in263;
													phi228 = *(uint64_t*)(phi215 + 96);
													phi229 = *(uint64_t*)(phi215 + 104);
													phi_in230 = phi_in232;
													phi231 = phi_in232;
													phi233 = phi_in270;
													int64_t anon271 = (__sext int64_t)*(uint32_t*)(phi258 * 12 + 6301640);
													if (phi_in232 < *(uint32_t*)((anon271 << 2) + 6300992))
													{
														*(uint32_t*)(phi215 + 112) = phi_in232;
														*(uint32_t*)(phi215 + 88) = phi218;
														uint64_t anon272 = (__zext uint64_t)*(uint32_t*)(phi215 + 120);
														w(4197395, anon12, anon271, anon272, anon272);
														phi177 = *(uint32_t*)(arg1 - 104);
														*(uint32_t*)(phi215 + 88) = *(uint32_t*)(arg1 - 104);
														phi216 = *(uint32_t*)(arg1 - 104);
														phi217 = *(uint32_t*)(arg1 - 80);
														phi215 = anon12;
														phi218 = *(uint32_t*)(arg1 - 104);
														phi219 = *(uint32_t*)(arg1 - 104);
														phi_in220 = *(uint32_t*)(arg1 - 80);
														phi221 = *(uint32_t*)(arg1 - 104);
														phi222 = *(uint32_t*)(arg1 - 104);
														phi184 = *(uint32_t*)(arg1 - 80);
														phi_in223 = *(uint32_t*)(arg1 - 80);
														phi186 = *(uint32_t*)(arg1 - 80);
														phi187 = *(uint32_t*)(arg1 - 104);
														phi188 = *(uint32_t*)(arg1 - 80);
														phi224 = *(uint32_t*)(arg1 - 80);
														phi225 = *(uint32_t*)(arg1 - 104);
														phi_in191 = *(uint32_t*)(arg1 - 80);
														phi_in226 = *(uint32_t*)(arg1 - 80);
														phi227 = *(uint64_t*)(arg1 - 112);
														phi192 = *(uint32_t*)(arg1 - 104);
														phi228 = *(uint64_t*)(arg1 - 96);
														phi229 = *(uint64_t*)(arg1 - 88);
														phi_in230 = *(uint32_t*)(arg1 - 80);
														phi231 = *(uint32_t*)(arg1 - 80);
														phi_in232 = *(uint32_t*)(arg1 - 80);
														phi233 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
													}
												}
												*(uint32_t*)(phi174 + 88) = phi177;
												phi_in165 = phi216;
												*(uint32_t*)(phi215 + 112) = phi217;
												phi148 = phi218;
												uint32_t phi_in273 = phi219;
												uint32_t phi_in274 = phi221;
												uint32_t phi_in275 = phi222;
												uint32_t phi_in276 = phi184;
												uint32_t phi_in277 = phi186;
												uint32_t phi_in278 = phi187;
												phi_in203 = phi188;
												phi204 = phi224;
												uint32_t phi279 = phi225;
												*(uint64_t*)(phi215 + 80) = phi227;
												uint32_t phi_in280 = phi192;
												*(uint64_t*)(phi215 + 96) = phi228;
												phi209 = phi229;
												uint32_t phi_in281 = phi231;
												phi212 = phi233;
												phi_in115 = *(uint32_t*)(phi174 + 88);
												phi195 = *(uint32_t*)(phi215 + 88);
												phi196 = *(uint32_t*)(phi215 + 112);
												phi197 = phi_in273;
												phi198 = phi_in220;
												phi199 = phi_in274;
												phi200 = phi_in275;
												phi201 = phi_in276;
												phi185 = phi_in223;
												phi_in119 = phi_in277;
												phi202 = phi_in278;
												phi205 = phi279;
												phi138 = phi_in191;
												phi206 = phi_in226;
												phi_in140 = *(uint64_t*)(phi215 + 80);
												phi207 = phi_in280;
												phi208 = *(uint64_t*)(phi215 + 96);
												phi193 = phi_in230;
												phi210 = phi_in281;
												phi211 = phi_in232;
												phi174 = phi215;
												int64_t anon283 = (__sext int64_t)*(uint32_t*)(anon236 + 6301640);
												uint32_t* anon282 = (uint32_t*)((anon283 << 2) + 6300992);
												if (*(uint32_t*)(phi215 + 64) < *anon282)
												{
													*anon282 = *(uint32_t*)(phi215 + 112);
													uint32_t phi284 = *(uint32_t*)(phi215 + 88);
													uint32_t phi285 = phi_in165;
													uint32_t phi286 = *(uint32_t*)(phi215 + 112);
													uint32_t phi287 = phi148;
													uint32_t phi288 = phi_in273;
													uint32_t phi_in289 = phi_in274;
													uint32_t phi290 = phi_in275;
													phi202 = phi_in278;
													*(uint64_t*)(phi174 + 80) = *(uint64_t*)(phi215 + 80);
													uint32_t phi_in291 = phi_in280;
													uint64_t phi292 = *(uint64_t*)(phi215 + 96);
													uint64_t phi293 = phi209;
													uint64_t phi294 = phi215;
													uint64_t phi_in295 = phi212;
													int64_t anon297 = anon283 * 12;
													int64_t anon296 = (__sext int64_t)*(uint32_t*)(anon297 + 6301636);
													if (*(uint32_t*)(phi215 + 112) < *(uint32_t*)((anon296 << 2) + 6300992))
													{
														*(uint64_t*)(phi215 + 104) = phi209;
														uint64_t anon298 = (__zext uint64_t)*(uint32_t*)(phi215 + 120);
														w(4197948, anon12, anon296, anon298, anon298);
														*(uint32_t*)(phi174 + 88) = *(uint32_t*)(arg1 - 104);
														phi284 = *(uint32_t*)(arg1 - 104);
														phi285 = *(uint32_t*)(arg1 - 104);
														phi286 = *(uint32_t*)(arg1 - 80);
														phi287 = *(uint32_t*)(arg1 - 104);
														phi288 = *(uint32_t*)(arg1 - 104);
														phi_in289 = *(uint32_t*)(arg1 - 104);
														phi290 = *(uint32_t*)(arg1 - 104);
														phi202 = *(uint32_t*)(arg1 - 104);
														phi279 = *(uint32_t*)(arg1 - 104);
														*(uint64_t*)(phi174 + 80) = *(uint64_t*)(arg1 - 112);
														phi_in291 = *(uint32_t*)(arg1 - 104);
														phi292 = *(uint64_t*)(arg1 - 96);
														phi293 = *(uint64_t*)(arg1 - 88);
														phi294 = anon12;
														phi_in295 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
													}
													phi195 = phi284;
													phi_in165 = phi285;
													*(uint32_t*)(phi174 + 112) = phi286;
													phi148 = phi287;
													phi197 = phi288;
													phi200 = phi290;
													uint32_t phi_in299 = phi279;
													*(uint64_t*)(phi174 + 96) = phi292;
													*(uint64_t*)(phi174 + 104) = phi293;
													phi174 = phi294;
													phi_in115 = *(uint32_t*)(phi174 + 88);
													phi196 = *(uint32_t*)(phi174 + 112);
													phi198 = *(uint32_t*)(phi174 + 112);
													phi199 = phi_in289;
													phi201 = *(uint32_t*)(phi174 + 112);
													phi185 = *(uint32_t*)(phi174 + 112);
													phi_in119 = *(uint32_t*)(phi174 + 112);
													phi_in203 = *(uint32_t*)(phi174 + 112);
													phi204 = *(uint32_t*)(phi174 + 112);
													phi205 = phi_in299;
													phi138 = *(uint32_t*)(phi174 + 112);
													phi206 = *(uint32_t*)(phi174 + 112);
													phi_in140 = *(uint64_t*)(phi174 + 80);
													phi207 = phi_in291;
													phi208 = *(uint64_t*)(phi174 + 96);
													phi209 = *(uint64_t*)(phi174 + 104);
													phi193 = *(uint32_t*)(phi174 + 112);
													phi210 = *(uint32_t*)(phi174 + 112);
													phi211 = *(uint32_t*)(phi174 + 112);
													phi212 = phi_in295;
													int64_t anon300 = (__sext int64_t)*(uint32_t*)(anon297 + 6301640);
													if (*(uint32_t*)(phi174 + 112) < *(uint32_t*)((anon300 << 2) + 6300992))
													{
														uint64_t anon301 = (__zext uint64_t)*(uint32_t*)(phi174 + 120);
														w(4197231, anon12, anon300, anon301, anon301);
														phi_in115 = alloca1.field8;
														phi195 = alloca1.field8;
														phi_in165 = alloca1.field8;
														phi196 = alloca1.field12;
														phi148 = alloca1.field8;
														phi197 = alloca1.field8;
														phi198 = alloca1.field12;
														phi199 = alloca1.field8;
														phi200 = alloca1.field8;
														phi201 = alloca1.field12;
														phi185 = alloca1.field12;
														phi_in119 = alloca1.field12;
														phi202 = alloca1.field8;
														phi_in203 = alloca1.field12;
														phi204 = alloca1.field12;
														phi205 = alloca1.field8;
														phi138 = alloca1.field12;
														phi206 = alloca1.field12;
														phi_in140 = alloca1.field7;
														phi207 = alloca1.field8;
														phi208 = alloca1.field10;
														phi209 = alloca1.field11;
														phi193 = alloca1.field12;
														phi210 = alloca1.field12;
														phi211 = alloca1.field12;
														phi174 = anon12;
														phi212 = (__zext uint64_t)alloca1.field8;
													}
												}
											}
											phi130 = phi196;
											phi151 = phi199;
											phi156 = phi205;
											phi139 = phi206;
											phi_in158 = phi211;
											phi146 = phi_in115;
											phi147 = phi195;
											phi_in81 = phi_in165;
											phi149 = phi197;
											phi150 = phi198;
											phi_in61 = phi200;
											phi152 = phi201;
											phi153 = phi185;
											phi_in86 = phi_in119;
											phi154 = phi202;
											phi87 = phi_in203;
											phi155 = phi204;
											phi121 = phi138;
											phi_in99 = phi_in140;
											phi107 = phi207;
											phi157 = phi208;
											phi124 = phi209;
											phi73 = phi193;
											phi74 = phi210;
											phi159 = phi174;
											phi127 = phi212;
											phi_in162 = phi176 + 4;
											phi163 = phi_in115;
											phi_in164 = phi195;
											phi166 = phi130;
											phi167 = phi148;
											phi131 = phi197;
											phi132 = phi198;
											phi133 = phi151;
											phi118 = phi200;
											*(uint32_t*)(phi168 + 124) = phi201;
											phi134 = phi185;
											phi169 = phi_in119;
											phi170 = phi202;
											phi136 = phi_in203;
											phi137 = phi204;
											phi120 = phi156;
											phi_in171 = phi139;
											*(uint64_t*)(phi168 + 88) = phi_in140;
											phi172 = phi207;
											phi142 = phi208;
											phi143 = phi209;
											phi125 = phi193;
											phi_in144 = phi210;
											phi173 = phi_in158;
											phi_in175 = phi212;
										}
										while (phi176 != 8);
									}
									phi92 = phi146;
									phi82 = phi148;
									phi84 = phi152;
									phi102 = phi154;
									phi110 = phi159;
									phi53 = phi147;
									phi93 = phi_in81;
									phi_in94 = phi130;
									phi95 = phi149;
									phi96 = phi150;
									phi97 = phi151;
									phi_in98 = phi124;
									phi100 = phi_in61;
									phi101 = phi153;
									phi64 = phi_in86;
									phi_in103 = phi87;
									phi_in104 = phi155;
									phi105 = phi156;
									phi_in106 = phi121;
									phi70 = phi139;
									phi108 = phi157;
									phi_in109 = phi_in158;
									phi111 = phi127;
									phi_in114 = phi128 + 4;
									phi_in115 = phi92;
									phi80 = phi147;
									phi116 = phi130;
									phi_in57 = phi82;
									phi83 = phi149;
									phi59 = phi150;
									phi117 = phi151;
									phi118 = phi_in61;
									phi_in62 = phi84;
									phi85 = phi153;
									phi_in119 = phi_in86;
									phi65 = phi102;
									phi67 = phi155;
									phi120 = phi156;
									phi88 = phi139;
									phi122 = phi_in99;
									phi89 = phi107;
									phi123 = phi157;
									phi125 = phi73;
									phi126 = phi74;
									phi_in90 = phi_in158;
									phi91 = phi110;
								}
								while (phi128 != 8);
							}
							phi302 = phi_in99;
							phi36 = phi100;
							phi303 = phi102;
							phi304 = phi105;
							phi_in305 = phi107;
							phi306 = phi110;
							phi42 = phi92;
							phi307 = phi53;
							phi308 = phi93;
							phi309 = phi82;
							phi310 = phi95;
							phi39 = phi111;
							if (phi302 != 8)
							{
								phi_in52 = phi92;
								phi54 = phi93;
								phi_in55 = phi_in94;
								phi_in57 = phi82;
								phi58 = phi95;
								phi59 = phi96;
								phi_in60 = phi97;
								phi_in61 = phi36;
								phi_in62 = phi84;
								phi63 = phi101;
								phi65 = phi303;
								phi66 = phi_in103;
								phi67 = phi_in104;
								phi_in68 = phi304;
								phi_in69 = phi_in106;
								phi71 = phi_in305;
								phi_in72 = phi108;
								phi73 = phi73;
								phi75 = phi_in109;
								phi76 = phi306;
								phi77 = phi302 + 4;
								phi78 = phi_in98;
								phi79 = phi111;
							}
						}
						while (phi302 != 8);
					}
					else 
					{
						phi42 = phi42;
						phi307 = phi43;
						phi308 = phi27;
						phi309 = phi28;
						phi310 = phi44;
						phi97 = phi45;
						phi108 = phi49;
						phi36 = phi36;
						phi303 = phi37;
						phi304 = phi38;
						phi_in305 = phi46;
						phi306 = phi47;
						phi39 = phi39 & 0xffffffff;
					}
					phi43 = phi307;
					phi27 = phi308;
					phi28 = phi309;
					phi44 = phi310;
					phi45 = phi97;
					phi49 = phi108;
					phi37 = phi303;
					phi38 = phi304;
					phi47 = phi306;
					phi_in311 = phi42;
					phi312 = phi43;
					phi313 = phi27;
					phi314 = phi44;
					phi315 = phi45;
					phi316 = *(uint64_t*)(phi47 + 72);
					phi317 = phi36;
					phi318 = phi37;
					phi32 = phi38;
					phi33 = phi_in305;
					phi319 = phi39;
					phi320 = phi47;
				}
				else 
				{
					phi_in311 = phi25;
					phi312 = phi26;
					phi313 = phi27;
					phi314 = phi29;
					phi315 = phi30;
					phi316 = *(uint64_t*)(phi35 + 72);
					phi317 = phi36;
					phi318 = phi37;
					phi32 = phi38;
					phi33 = phi33;
					phi319 = phi39 & 0xffffffff;
					phi320 = phi35;
				}
				phi26 = phi312;
				phi27 = phi313;
				phi29 = phi314;
				phi30 = phi315;
				phi31 = phi317;
				phi22 = phi318;
				phi34 = phi319;
				phi35 = phi320;
				phi321 = *(uint32_t*)(phi35 + 68);
				phi_in322 = phi30;
				phi323 = *(uint64_t*)(phi35 + 56);
				phi17 = (__zext uint64_t)phi30;
				phi18 = *(uint32_t*)(phi35 + 68);
				phi324 = phi30;
				phi325 = *(uint32_t*)(phi35 + 68);
				phi10 = phi35;
			}
			else 
			{
				phi321 = phi15;
				phi_in322 = phi16;
				phi323 = *(uint64_t*)(phi10 + 56);
				phi17 = phi17 & 0xffffffff;
				phi18 = *(uint32_t*)(phi10 + 68);
				phi324 = phi22;
				phi325 = phi20;
				phi10 = phi10;
			}
			phi15 = phi321;
			phi19 = phi324;
			phi20 = phi325;
			phi326 = *(uint64_t*)(phi10 + 48);
			phi4 = phi_in322;
			phi327 = phi15;
			phi7 = (__zext uint64_t)phi_in322;
			phi328 = phi15;
			phi329 = phi_in322;
			phi330 = phi10;
		}
		else 
		{
			phi326 = *(uint64_t*)(phi10 + 48);
			phi4 = phi4;
			phi327 = phi5;
			phi7 = phi7 & 0xffffffff;
			phi328 = *anon13;
			phi329 = phi9;
			phi330 = phi10;
		}
		if (phi326 != 8)
		{
			phi5 = phi327;
			phi8 = phi328;
			phi9 = phi329;
			*(uint64_t*)(phi10 + 48) = phi326 + 4;
			phi11 = phi330;
		}
		phi16 = phi_in322;
		phi21 = phi323 + 4;
		phi25 = phi_in311;
		*(uint64_t*)(phi35 + 72) = phi316 + 4;
		phi46 = phi_in305;
		phi48 = phi48 + 4;
		break;
	}
	return;
}
void t(uint64_t arg0)
{
	struct { uint8_t field0[24]; uint64_t field1; } alloca1;
	alloca1.field1 = arg0;
	uint64_t phi2 = 4;
	while (true)
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
		uint64_t anon11 = random();
		uint64_t anon12 = anon11 << 32;
		w(4198271, (uint64_t)&alloca1, anon11 + (((anon11 & 0xffffffff) * 2290649225 + anon12 >> 32 >> 4) - (anon12 >> 32 >> 31)) * 4294967266 & 0xffffffff, 0, 0);
		uint64_t phi13 = 3;
		while (true)
		{
			uint64_t anon15;
			uint32_t* anon17;
			do
			{
				do
				{
					do
					{
						do
						{
							uint64_t anon14 = random();
							phi13 = phi13;
							uint64_t anon16 = anon14 << 32;
							anon15 = anon14 + (((anon14 & 0xffffffff) * 2290649225 + anon16 >> 32 >> 4) - (anon16 >> 32 >> 31)) * -30 << 32 >> 30;
						}
						while (*(uint32_t*)(anon15 + 6301504) != 0);
						phi13 = phi13;
					}
					while (*(uint32_t*)(anon15 + 6300864) != 0);
					phi13 = phi13;
					anon17 = (uint32_t*)(anon15 + 6301120);
				}
				while (*anon17 != 0);
				phi13 = phi13;
			}
			while (*(uint32_t*)(anon15 + 6300992) == 0);
			*anon17 = 1;
			while (true)
			{
				uint64_t anon18 = random();
				uint64_t anon19 = anon18 << 32;
				*(uint32_t*)0x60292c = (uint32_t)anon18 + (uint32_t)(((anon18 & 0xffffffff) * 2290649225 + anon19 >> 32 >> 4) - (anon19 >> 32 >> 31)) * 4294967266;
			}
			break;
			phi13 = (__zext uint64_t)((uint32_t)phi13 - 1);
		}
		break;
		phi2 = (__zext uint64_t)((uint32_t)phi2 - 1);
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
					if ((*anon18 >> 31 | (__zext uint32_t)(*anon18 == 0)) == 0)
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
		uint64_t phi24;
		uint32_t anon25;
		uint32_t anon41;
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
		uint32_t* phi10 = (uint32_t*)0x6027c4;
		uint64_t phi_in11 = 6301636;
		do
		{
			uint32_t phi14;
			uint32_t phi15;
			uint32_t phi16;
			uint32_t* anon17;
			uint32_t phi18;
			uint32_t phi_in19;
			uint32_t phi21;
			uint64_t phi12 = phi_in11;
			uint32_t* anon13 = (uint32_t*)(phi12 + 4);
			if (*anon13 < *phi10)
			{
				*phi10 = *anon13;
				*anon13 = *phi10;
				phi14 = *phi10;
				phi15 = *phi10;
				phi16 = *anon13;
				anon17 = (uint32_t*)(phi12 - 4);
				*anon17 = *anon13;
				phi18 = *anon17;
			}
			else 
			{
				phi_in19 = *anon17;
				if (*phi10 < *anon17)
				{
					phi14 = *anon13 & 0xf;
					phi15 = *anon13;
					phi16 = *phi10 & 0xf;
					*anon17 = *phi10;
					phi18 = *anon17 & 0xf;
				}
			}
			if (*anon13 >= *phi10 && *phi10 < *anon17 || *anon13 < *phi10 && *anon13 < *anon17)
			{
				uint32_t phi_in20 = phi14;
				phi21 = phi15;
				uint32_t phi_in22 = phi16;
				*phi10 = phi18;
				phi_in19 = phi_in22;
				*phi10 = phi_in20;
				*anon13 = *anon17;
			}
			if (*anon13 >= *anon17 && *anon13 < *phi10)
			{
				phi_in19 = *anon17 & 0xf;
				*phi10 = *phi10;
				*anon13 = *anon13;
				phi21 = *phi10;
			}
			if ((*anon13 >= *phi10 && *phi10 < *anon17 || *anon13 < *phi10 && *anon13 < *anon17 || *anon13 >= *anon17 && *anon13 < *phi10) && phi21 - *anon13 <= 4294967295)
			{
				phi_in19 = *(uint32_t*)((phi12 & 0xc) - 4);
			}
			uint32_t phi23 = phi_in19;
			phi24 = 6301636;
			anon25 = phi23 + 1 & 0xff;
			if (anon25 != 0)
			{
				phi24 = 6301636;
				uint64_t anon26 = phi12 + 12;
				phi10 = (uint32_t*)(anon26 & 0xc);
				phi_in11 = anon26;
				if (phi12 == 6301984)
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
			uint32_t* anon32;
			uint32_t phi33;
			uint32_t phi_in34;
			uint32_t phi35;
			uint32_t phi38;
			uint32_t phi39;
			uint32_t* anon27 = (uint32_t*)(phi24 + 4);
			uint32_t* anon28 = (uint32_t*)phi24;
			if (*anon27 < *anon28)
			{
				*anon28 = *anon27;
				*anon27 = *anon28;
				phi29 = *anon28;
				phi30 = *anon28;
				phi31 = *anon27;
				anon32 = (uint32_t*)(phi24 - 4);
				*anon32 = *anon27;
				phi33 = *anon32;
			}
			else 
			{
				phi_in34 = *anon32;
				if (*anon28 < *anon32)
				{
					phi29 = *anon27 & 0xf;
					phi30 = *anon27;
					phi31 = *anon28 & 0xf;
					*anon32 = *anon28;
					phi33 = *anon32 & 0xf;
				}
			}
			if (*anon27 >= *anon28 && *anon28 < *anon32 || *anon27 < *anon28 && *anon27 < *anon32)
			{
				phi35 = phi29;
				uint32_t phi_in36 = phi30;
				uint32_t phi_in37 = phi31;
				*anon28 = phi33;
				phi38 = phi_in37;
				*anon27 = *anon32;
				phi39 = phi_in36;
			}
			if (*anon27 >= *anon32 && *anon27 < *anon28)
			{
				phi38 = *anon32 & 0xf;
				phi35 = *anon28;
				*anon27 = *anon27;
				phi39 = *anon28;
			}
			if (*anon27 >= *anon28 && *anon28 < *anon32 || *anon27 < *anon28 && *anon27 < *anon32 || *anon27 >= *anon32 && *anon27 < *anon28)
			{
				phi_in34 = phi38;
				*anon28 = phi35;
				if (phi39 - *anon27 <= 4294967295)
				{
					phi_in34 = *(uint32_t*)((phi24 & 0xf) - 4);
				}
			}
			uint32_t phi40 = phi_in34;
			anon41 = phi40 + 1 & 0xff;
			if (anon41 != 0)
			{
				phi24 = phi24 + 12;
			}
		}
		while (anon41 != 0);
	}
}
void q(uint64_t arg0, uint64_t arg1)
{
	struct { uint8_t field0[56]; uint64_t field1; } alloca1;
	uint64_t phi4;
	uint32_t phi_in5;
	uint32_t phi6;
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
		phi_in5 = 0;
		phi6 = phi_in5;
		anon7 = (uint32_t*)0x602490;
		*anon7 = *anon7 + phi6;
		struct _IO_FILE** anon9 = (struct _IO_FILE**)0x602480;
		uint32_t anon8 = _IO_getc(*anon9);
		uint8_t anon10 = (uint8_t)anon8;
		if (anon10 == 10)
		{
			dispatch2 = 1;
		}
		uint32_t anon11 = *anon3 >> 31 | (__zext uint32_t)(*anon3 == 0);
		if (anon10 != 10 || anon11 != 0 && anon10 == 10)
		{
			anon12 = __ctype_b_loc();
			dispatch13 = 0;
		}
		uint64_t* anon14 = (uint64_t*)anon12;
		if ((*(uint8_t*)(*anon14 + ((__sext int64_t)anon10 << 1 | 1)) & 8) != 0 && (anon10 != 10 || anon11 != 0 && anon10 == 10))
		{
			uint32_t anon15 = _IO_getc(*anon9);
			uint32_t anon17 = (anon8 << 24 >> 24) - 48;
			phi16 = anon17;
			if ((*(uint8_t*)(*anon14 + ((__zext uint64_t)anon15 << 56 >> 55 | 1)) & 8) != 0)
			{
				anon18 = anon15 >> 8;
				phi16 = (anon18 << 24 >> 24) + anon17 * 10 - 48;
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
			phi19 = phi4;
		}
		if (*(uint32_t*)(((__sext int64_t)phi16 << 2) + 6300992) != 0 || (uint32_t)anon21 + ((uint32_t)((anon21 & 0xffffffff) / 3) - (uint32_t)(anon21 << 32 >> 32 >> 31)) * 4294967293 != 1)
		{
			phi4 = phi19;
			dispatch2 = 1;
		}
		if ((uint8_t)anon18 != 10 && (*(uint32_t*)(((__sext int64_t)phi16 << 2) + 6300992) != 0 || (uint32_t)anon21 + ((uint32_t)((anon21 & 0xffffffff) / 3) - (uint32_t)(anon21 << 32 >> 32 >> 31)) * 4294967293 != 1))
		{
			phi_in5 = phi6 - 20;
			dispatch13 = 1;
			dispatch2 = 3;
			if (phi6 != 196)
			{
				break;
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
		uint32_t phi17;
		uint32_t anon18;
		uint32_t* anon19;
		uint32_t* anon20;
		uint32_t* anon24;
		uint64_t anon25;
		uint16_t** phi33;
		uint8_t anon34;
		uint16_t** anon38;
		uint32_t dispatch13 = 0;
		uint32_t* anon14 = (uint32_t*)0x602928;
		*anon14 = *anon14 + 1;
		puts((uint8_t*)0x401d17);
		uint32_t* anon15 = (uint32_t*)0x602490;
		*anon15 = *anon15 + 20;
		uint64_t anon16 = phi11 << 2;
		*(uint32_t*)(anon16 + 6301120) = 0;
		dispatch13 = 0;
		if (dispatch13 == 0)
		{
			puts((uint8_t*)0x401d2a);
			phi17 = 4294967196;
		}
		if (*(uint32_t*)(anon16 + 6300992) != 0)
		{
			dispatch13 = 1;
			anon18 = (uint32_t)phi12;
			anon19 = (uint32_t*)0x60292c;
			if (*(uint32_t*)(anon16 + 6300864) == 0 && anon18 == *anon19)
			{
				if (*anon14 != 0)
				{
					anon20 = (uint32_t*)0x60248c;
					*anon20 = *anon20 + 1;
					*anon14 = *anon14 - 1;
					*anon15 = *anon15 - 20;
					puts((uint8_t*)0x401d48);
				}
				dispatch13 = 2;
			}
		}
		if (dispatch13 == 2)
		{
			puts((uint8_t*)0x401d62);
			while (true)
			{
				uint64_t anon21 = random();
				uint32_t anon22 = (uint32_t)anon21;
				*anon19 = anon22 + (((uint32_t)((anon21 & 0xffffffff) * 2290649225 >> 32) + anon22 >> 4) - (anon22 >> 31)) * 4294967266;
			}
		}
		if (*(uint32_t*)(anon16 + 6300992) != 0 && *(uint32_t*)(anon16 + 6300864) == 0)
		{
			if (anon18 == *anon19 && *anon20 == 3)
			{
				puts((uint8_t*)0x401df8);
				*anon14 = 3;
				*anon15 = *anon15 + 200;
				*anon19 = 4294967295;
			}
			if (anon18 != *anon19 || anon18 == *anon19 && *anon20 == 3 || anon18 == *anon19 && *anon20 == 3)
			{
				dispatch13 = 3;
			}
		}
		if (dispatch13 == 3)
		{
			uint64_t phi26;
			if (*(uint32_t*)(anon16 + 6300992) < 3)
			{
				puts((uint8_t*)0x401d7b);
			}
			anon25 = phi11 * 12;
			anon24 = (uint32_t*)(anon25 + 6301632);
			int64_t anon23 = (__sext int64_t)*anon24;
			if (*(uint32_t*)((anon23 << 2) + 6300864) == 0 && *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon25 + 6301636) << 2) + 6300864) == 0)
			{
				phi26 = anon23;
			}
			if (*(uint32_t*)((anon23 << 2) + 6300864) != 0 || *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon25 + 6301636) << 2) + 6300864) != 0 && *(uint32_t*)((anon23 << 2) + 6300864) == 0 || *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon25 + 6301640) << 2) + 6300864) != 0 && *(uint32_t*)((anon23 << 2) + 6300864) == 0 && *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon25 + 6301636) << 2) + 6300864) == 0)
			{
				puts((uint8_t*)0x401d8e);
				phi26 = (__sext int64_t)*anon24;
			}
			if (*(uint32_t*)((phi26 << 2) + 6301504) != 0 || *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon25 + 6301636) << 2) + 6301504) != 0 && *(uint32_t*)((phi26 << 2) + 6301504) == 0 || *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon25 + 6301640) << 2) + 6301504) != 0 && *(uint32_t*)((phi26 << 2) + 6301504) == 0 && *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon25 + 6301636) << 2) + 6301504) == 0)
			{
				puts((uint8_t*)0x401da0);
			}
			printf((uint8_t*)0x401e58);
			uint32_t* anon27 = (uint32_t*)(anon16 + 6301248);
			if (*anon27 == 0)
			{
				*anon15 = *anon15 + 10;
				*anon27 = 1;
			}
		}
		struct _IO_FILE** anon29 = (struct _IO_FILE**)0x602480;
		uint32_t anon28 = _IO_getc(*anon29);
		uint8_t anon31 = (uint8_t)anon28;
		bool anon30 = anon31 == 108;
		if (anon30)
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
		bool anon35 = anon31 == 105;
		if (anon35)
		{
			printf((uint8_t*)0x401dba);
		}
		bool anon36 = anon31 == 115;
		if (anon36)
		{
			q(4200890, phi12 & 0xffffffff);
		}
		bool anon37 = anon31 == 115 || anon31 == 108 || anon31 == 105 || anon31 == 113;
		if (!anon37 || anon31 == 105 || anon31 == 115)
		{
			anon38 = __ctype_b_loc();
			phi33 = anon38;
		}
		int64_t anon40 = (__sext int64_t)anon31;
		uint8_t anon39 = *(uint8_t*)(*(uint64_t*)anon38 + (anon40 >> 7 | 1)) & 8;
		if (anon39 != 0 && anon35 || anon39 != 0 && anon36 || anon39 != 0 && (!anon37) || anon34 != 0 && anon30)
		{
			uint32_t phi42;
			uint32_t anon41 = _IO_getc(*anon29);
			uint32_t anon43 = (uint32_t)(anon40 + 4294967248);
			phi42 = anon43;
			uint32_t anon44 = anon41 << 24 >> 24;
			if ((*(uint8_t*)(*(uint64_t*)phi33 + ((__zext uint64_t)anon44 << 1 | 1)) & 8) != 0)
			{
				phi42 = anon43 * 10 + anon44 - 48;
			}
			if (*anon24 != phi42 && *(uint32_t*)(anon25 + 6301636) != phi42)
			{
				phi_in9 = phi11;
				phi_in10 = phi12;
			}
			if (*anon24 == phi42 || *anon24 != phi42 && *(uint32_t*)(anon25 + 6301636) == phi42 || *anon24 != phi42 && *(uint32_t*)(anon25 + 6301636) != phi42 && *(uint32_t*)(anon25 + 6301640) == phi42)
			{
				int64_t anon45 = (__sext int64_t)phi42;
				phi_in9 = anon45;
				phi_in10 = anon45;
			}
			break;
		}
		uint32_t* anon46 = (uint32_t*)(anon16 + 6301504);
		if (*anon46 != 0 && *(uint32_t*)(anon16 + 6300992) != 0 && *(uint32_t*)(anon16 + 6300864) == 0 && (anon18 != *anon19 || anon18 == *anon19 && *anon20 == 3 || anon18 == *anon19 && *anon20 == 3))
		{
			*anon46 = 0;
			uint64_t anon47 = random();
			uint32_t anon48 = (uint32_t)anon47;
			*(uint32_t*)(((__sext int64_t)(anon48 + (((uint32_t)((anon47 & 0xffffffff) * 2290649225 >> 32) + anon48 >> 4) - (anon48 >> 31)) * 4294967266) << 2) + 6301504) = 1;
			uint64_t anon49 = random();
			printf((uint8_t*)0x401e28);
			*anon15 = *anon15 - 10;
			uint32_t anon51 = (uint32_t)anon49;
			int64_t anon50 = (__sext int64_t)(anon51 + ((uint32_t)((anon49 & 0xffffffff) * 2290649225 + (anon49 << 32) >> 36) - (anon51 >> 31)) * 4294967266);
			phi_in9 = anon50;
			phi_in10 = anon50;
			break;
		}
		if (dispatch13 == 1)
		{
			puts((uint8_t*)0x401d36);
			phi17 = 4294967246;
		}
		if (dispatch13 == 1 || dispatch13 == 0)
		{
			*anon15 = *anon15 + phi17;
		}
		if (dispatch13 == 1 || dispatch13 == 0 || anon31 == 113)
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
