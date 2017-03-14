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
		uint32_t phi5;
		uint32_t phi6;
		uint32_t phi_in7;
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
			phi_in7 = *anon8;
			phi9 = *phi1;
			phi10 = *anon4;
		}
		else 
		{
			phi5 = *anon4;
			phi6 = *phi1;
			phi11 = *anon8;
		}
		if (*anon4 >= *phi1 && *phi1 < *anon8 || *anon4 < *phi1 && *anon4 < *anon8)
		{
			phi9 = phi5;
			uint32_t phi_in12 = phi6;
			*phi1 = *anon8;
			*anon8 = phi_in12;
			phi_in7 = phi_in12;
			phi10 = *anon8;
		}
		if (*anon4 >= *phi1 && *phi1 < *anon8 || *anon4 < *phi1 && *anon4 < *anon8 || *anon4 >= *anon8 && *anon4 < *phi1)
		{
			*phi1 = phi9;
			*anon4 = phi10;
			phi11 = phi_in7;
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
	uint32_t phi5;
	uint64_t phi10;
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
	int64_t anon9 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi10 + 48) + *(uint64_t*)(phi10 + 8) + 6301632);
	uint32_t* anon8 = (uint32_t*)((anon9 << 2) + 6300992);
	*anon8 = anon6;
	uint32_t phi11 = anon3;
	*(uint64_t*)(phi10 + 48) = 0;
	uint64_t anon12 = (uint64_t)&alloca1;
	phi10 = anon12;
	do
	{
		uint64_t phi14;
		uint32_t phi13 = phi4;
		*(uint32_t*)(phi14 + 68) = phi5;
		phi15 = *(uint64_t*)(phi10 + 48);
		phi4 = phi13;
		phi5 = *(uint32_t*)(phi14 + 68);
		phi7 = phi7 & 0xffffffff;
		uint32_t phi16 = *anon8;
		uint32_t phi17 = phi11;
		uint64_t phi_in18 = phi10;
		if (phi11 < *anon8)
		{
			uint64_t phi_in31;
			uint32_t phi_in370;
			uint64_t phi371;
			*(uint64_t*)(phi10 + 16) = anon9 * 12;
			*(uint32_t*)(phi10 + 40) = (uint32_t)phi7 + 5;
			uint32_t phi_in19 = *(uint32_t*)(phi14 + 68);
			uint32_t phi20 = phi13;
			uint64_t phi21 = (__zext uint64_t)phi13;
			uint32_t phi22 = *(uint32_t*)(phi14 + 68);
			uint64_t phi23 = 0;
			do
			{
				uint32_t phi_in24 = phi20;
				uint32_t phi25 = phi13;
				*(uint64_t*)(phi14 + 56) = phi23;
				phi14 = phi10;
				uint32_t phi26 = phi_in19;
				phi20 = phi_in24;
				uint64_t phi_in27 = *(uint64_t*)(phi14 + 56);
				uint64_t phi28 = phi21 & 0xffffffff;
				uint32_t phi29 = *(uint32_t*)(phi14 + 68);
				phi13 = phi25;
				uint32_t phi30 = phi22;
				phi_in31 = phi14;
				int64_t anon33 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi14 + 56) + *(uint64_t*)(phi14 + 16) + 6301632);
				uint32_t* anon32 = (uint32_t*)((anon33 << 2) + 6300992);
				if (phi22 < *anon32)
				{
					uint32_t phi_in55;
					uint64_t phi_in62;
					uint64_t phi369;
					*anon32 = *(uint32_t*)(phi14 + 4);
					*(uint64_t*)(phi14 + 32) = anon33 * 12;
					*(uint32_t*)(phi14 + 44) = (uint32_t)phi21 + 6;
					uint32_t phi_in34 = phi25;
					uint32_t phi_in35 = phi25;
					uint32_t phi36 = phi25;
					uint32_t phi37 = phi25;
					uint32_t phi38 = phi25;
					uint32_t phi_in39 = phi25;
					uint32_t phi_in40 = phi25;
					uint32_t phi41 = phi25;
					uint32_t phi42 = phi25;
					uint64_t phi43 = (__zext uint64_t)phi25;
					*(uint64_t*)(phi14 + 72) = 0;
					do
					{
						uint32_t phi44 = phi36;
						uint32_t phi_in45 = phi25;
						uint32_t phi46 = phi37;
						uint32_t phi47 = phi38;
						uint32_t phi48 = phi41;
						uint32_t phi49 = phi42;
						uint64_t phi50 = phi43;
						uint32_t phi_in51 = phi_in34;
						uint32_t phi52 = phi_in35;
						uint32_t phi53 = phi44;
						uint32_t phi54 = phi_in45;
						phi37 = phi46;
						phi_in55 = phi47;
						uint64_t phi_in56 = *(uint64_t*)(phi14 + 72);
						uint32_t phi57 = phi_in39;
						uint32_t phi58 = phi_in40;
						uint32_t phi59 = phi48;
						uint32_t phi60 = phi49;
						uint64_t phi_in61 = phi50 & 0xffffffff;
						phi_in62 = phi14;
						int64_t anon64 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi14 + 72) + *(uint64_t*)(phi14 + 32) + 6301632);
						uint32_t* anon63 = (uint32_t*)((anon64 << 2) + 6300992);
						if (*(uint32_t*)(phi14 + 4) < *anon63)
						{
							uint64_t phi82;
							uint32_t phi_in88;
							uint32_t phi_in89;
							uint32_t phi_in364;
							uint32_t phi_in365;
							uint32_t phi_in366;
							uint32_t phi_in367;
							uint64_t phi_in368;
							*anon63 = *(uint32_t*)(phi14 + 24);
							*(uint32_t*)(phi14 + 64) = (uint32_t)phi50 + 7;
							uint32_t phi_in65 = phi_in34;
							uint32_t phi66 = phi_in35;
							uint32_t phi_in67 = phi_in45;
							uint32_t phi68 = phi_in39;
							uint32_t phi69 = phi_in40;
							uint64_t phi70 = phi14;
							uint64_t phi_in71 = 0;
							uint64_t phi72 = anon64 * 12;
							do
							{
								uint32_t phi73 = phi66;
								uint32_t phi74 = phi44;
								uint32_t phi75 = phi46;
								uint32_t phi76 = phi47;
								uint32_t phi_in77 = phi68;
								uint32_t phi_in78 = phi69;
								uint32_t phi79 = phi48;
								uint32_t phi80 = phi49;
								uint64_t phi_in81 = phi70;
								phi82 = phi_in71;
								uint64_t phi83 = phi72;
								uint64_t phi_in84 = phi50;
								uint64_t phi85 = phi83;
								uint32_t phi86 = phi_in65;
								uint32_t phi87 = phi_in67;
								phi_in88 = phi75;
								phi47 = phi76;
								phi68 = phi_in77;
								phi_in89 = phi_in78;
								uint32_t phi90 = phi79;
								uint32_t phi91 = phi80;
								uint64_t phi92 = phi_in81;
								uint64_t phi93 = phi_in84 & 0xffffffff;
								int64_t anon95 = (__sext int64_t)*(uint32_t*)(phi82 + phi83 + 6301632);
								uint32_t* anon94 = (uint32_t*)((anon95 << 2) + 6300992);
								if (*(uint32_t*)(phi_in81 + 24) < *anon94)
								{
									uint32_t phi99;
									uint64_t phi363;
									*anon94 = *(uint32_t*)(phi_in81 + 28);
									uint32_t phi_in96 = phi_in65;
									uint32_t phi97 = phi73;
									uint32_t phi_in98 = phi74;
									uint32_t anon100 = (uint32_t)phi_in84 + 8;
									phi99 = anon100;
									uint32_t phi101 = phi_in67;
									uint32_t phi102 = anon100;
									uint32_t phi103 = anon100;
									uint32_t phi104 = anon100;
									uint32_t phi105 = phi_in77;
									uint32_t phi106 = anon100;
									uint32_t phi107 = anon100;
									uint32_t phi108 = anon100;
									uint32_t phi_in109 = phi_in78;
									uint32_t phi110 = anon100;
									uint32_t phi111 = anon100;
									uint32_t phi112 = anon100;
									uint32_t phi113 = anon100;
									uint32_t phi_in114 = anon100;
									uint32_t phi115 = anon100;
									uint32_t phi116 = anon100;
									uint64_t phi_in117 = 0;
									uint64_t phi118 = anon95 * 12;
									uint64_t phi119 = phi_in84;
									do
									{
										uint32_t phi_in120 = phi97;
										uint32_t phi_in121 = phi101;
										uint32_t phi122 = phi102;
										uint32_t phi123 = phi75;
										uint32_t phi124 = phi76;
										uint32_t phi_in125 = phi103;
										uint32_t phi_in126 = phi105;
										uint32_t phi_in127 = phi106;
										uint32_t phi_in128 = phi107;
										uint32_t phi_in129 = phi108;
										uint32_t phi130 = phi110;
										uint32_t phi131 = phi79;
										uint32_t phi132 = phi112;
										uint32_t phi133 = phi113;
										uint32_t phi_in134 = phi80;
										uint64_t phi_in135 = phi83;
										uint32_t phi_in136 = phi115;
										uint32_t phi_in137 = phi116;
										phi118 = phi118;
										uint32_t phi138 = phi_in96;
										phi73 = phi_in120;
										uint32_t phi139 = phi_in98;
										uint32_t phi_in140 = phi99;
										uint32_t phi141 = phi_in121;
										uint32_t phi_in142 = phi122;
										phi75 = phi123;
										phi76 = phi124;
										uint32_t phi143 = phi_in125;
										uint32_t phi144 = phi104;
										uint32_t phi145 = phi_in126;
										uint32_t phi_in146 = phi_in127;
										uint32_t phi_in147 = phi_in128;
										uint32_t phi148 = phi_in129;
										uint32_t phi149 = phi_in109;
										uint32_t phi150 = phi111;
										phi79 = phi131;
										uint32_t phi151 = phi132;
										uint32_t phi152 = phi133;
										uint32_t phi153 = phi_in134;
										uint64_t phi154 = phi_in135;
										uint32_t phi155 = phi_in114;
										uint32_t phi156 = phi_in136;
										phi116 = phi_in137;
										uint64_t phi157 = phi119;
										int64_t anon159 = (__sext int64_t)*(uint32_t*)(phi_in117 + phi118 + 6301632);
										uint32_t* anon158 = (uint32_t*)((anon159 << 2) + 6300992);
										if (*(uint32_t*)(phi_in81 + 28) < *anon158)
										{
											uint64_t phi167;
											uint64_t phi180;
											*anon158 = *(uint32_t*)(phi_in81 + 40);
											*(uint32_t*)(phi_in81 + 120) = (uint32_t)phi119 + 9;
											uint64_t phi_in160 = 0;
											uint32_t phi161 = phi_in96;
											uint32_t phi162 = phi_in120;
											uint32_t phi163 = phi_in98;
											uint32_t phi_in164 = phi_in121;
											uint32_t phi_in165 = phi_in125;
											uint32_t phi166 = phi_in126;
											*(uint32_t*)(phi167 + 124) = phi_in127;
											uint32_t phi168 = phi_in128;
											uint32_t phi169 = phi_in129;
											uint32_t phi_in170 = phi_in109;
											uint32_t phi_in171 = phi130;
											*(uint64_t*)(phi167 + 88) = phi_in117;
											uint32_t phi_in172 = phi_in134;
											uint64_t phi173 = phi_in135;
											uint64_t phi174 = phi118;
											uint32_t phi_in175 = phi_in114;
											uint32_t phi176 = phi_in136;
											uint32_t phi177 = phi_in137;
											uint64_t phi_in178 = phi_in81;
											uint64_t phi179 = phi119 & 0xffffffff;
											do
											{
												phi180 = phi_in160;
												uint32_t phi_in181 = phi162;
												uint32_t phi_in182 = phi163;
												uint32_t phi183 = phi99;
												uint32_t phi184 = phi122;
												uint32_t phi_in185 = phi123;
												uint32_t phi186 = phi124;
												uint32_t phi187 = phi104;
												uint32_t phi188 = phi166;
												uint32_t phi_in189 = phi168;
												uint32_t phi190 = phi169;
												uint32_t phi_in191 = phi111;
												uint32_t phi_in192 = phi131;
												uint32_t phi_in193 = phi133;
												uint64_t phi_in194 = phi173;
												uint64_t phi_in195 = phi174;
												uint32_t phi196 = phi176;
												uint32_t phi_in197 = phi177;
												uint64_t phi198 = phi_in178;
												uint64_t phi199 = phi179;
												phi_in96 = phi161;
												uint32_t phi200 = phi_in181;
												phi_in98 = phi_in182;
												uint32_t phi201 = phi_in164;
												uint32_t phi202 = phi_in185;
												uint32_t phi_in203 = phi186;
												uint32_t phi204 = phi_in165;
												uint32_t phi205 = phi187;
												uint32_t phi206 = phi188;
												uint32_t phi207 = phi_in189;
												uint32_t phi208 = phi190;
												uint32_t phi209 = phi_in170;
												uint32_t phi210 = phi_in171;
												phi111 = phi_in191;
												uint32_t phi211 = phi_in192;
												uint32_t phi212 = phi132;
												uint32_t phi213 = phi_in193;
												uint64_t phi214 = *(uint64_t*)(phi167 + 88);
												uint32_t phi215 = phi_in172;
												uint64_t phi216 = phi_in194;
												uint64_t phi217 = phi_in195;
												uint32_t phi218 = phi_in175;
												uint32_t phi219 = phi196;
												uint32_t phi220 = phi_in197;
												uint64_t phi_in221 = phi199;
												int64_t anon223 = (__sext int64_t)*(uint32_t*)(phi180 + anon159 * 12 + 6301632);
												uint32_t* anon222 = (uint32_t*)((anon223 << 2) + 6300992);
												if (*(uint32_t*)(phi198 + 40) < *anon222)
												{
													uint64_t phi240;
													*anon222 = *(uint32_t*)(phi198 + 44);
													uint64_t phi_in224 = 0;
													uint32_t phi225 = phi183;
													uint32_t phi_in226 = phi_in164;
													uint32_t phi_in227 = phi184;
													uint32_t phi228 = phi_in185;
													uint32_t phi_in229 = phi_in165;
													uint32_t phi230 = phi_in189;
													uint32_t phi_in231 = phi_in170;
													uint32_t phi232 = phi_in171;
													uint32_t phi233 = phi_in191;
													uint32_t phi234 = phi_in192;
													uint32_t phi_in235 = phi_in193;
													uint32_t phi236 = phi_in172;
													uint64_t phi237 = phi_in194;
													uint64_t phi238 = phi_in195;
													uint32_t phi_in239 = phi_in197;
													phi167 = phi198;
													do
													{
														phi240 = phi_in224;
														uint32_t phi_in241 = phi161;
														uint32_t phi242 = phi_in181;
														uint32_t phi_in243 = phi225;
														uint32_t phi_in244 = phi_in226;
														uint32_t phi245 = phi228;
														uint32_t phi246 = phi186;
														uint32_t phi247 = phi_in229;
														uint32_t phi_in248 = phi187;
														uint32_t phi249 = phi188;
														uint32_t phi_in250 = *(uint32_t*)(phi167 + 124);
														uint32_t phi251 = phi190;
														uint32_t phi252 = phi233;
														uint32_t phi_in253 = phi132;
														uint64_t phi254 = *(uint64_t*)(phi167 + 88);
														*(uint64_t*)(phi167 + 112) = phi238;
														uint32_t phi255 = phi_in175;
														uint32_t phi_in256 = phi196;
														uint64_t phi257 = phi199;
														uint32_t phi258 = phi_in241;
														uint32_t phi259 = phi_in182;
														uint32_t phi260 = phi_in243;
														uint32_t phi261 = phi_in244;
														uint32_t phi262 = phi_in227;
														phi_in185 = phi245;
														uint32_t phi_in263 = phi246;
														uint32_t phi264 = phi247;
														phi187 = phi_in248;
														uint32_t phi265 = phi249;
														uint32_t phi266 = phi_in250;
														uint32_t phi267 = phi230;
														phi209 = phi_in231;
														uint32_t phi268 = phi232;
														phi233 = phi252;
														phi132 = phi_in253;
														phi_in193 = phi_in235;
														uint64_t phi269 = phi254;
														uint32_t phi270 = phi236;
														uint64_t phi271 = *(uint64_t*)(phi167 + 112);
														uint32_t phi272 = phi_in256;
														uint32_t phi273 = phi_in239;
														phi198 = phi167;
														uint64_t phi274 = phi257;
														int64_t anon276 = (__sext int64_t)*(uint32_t*)(phi240 + anon223 * 12 + 6301632);
														uint32_t* anon275 = (uint32_t*)((anon276 << 2) + 6300992);
														if (*(uint32_t*)(phi167 + 44) < *anon275)
														{
															*anon275 = *(uint32_t*)(phi167 + 64);
															uint32_t phi277 = phi_in241;
															*(uint32_t*)(phi278 + 88) = phi242;
															uint32_t phi279 = phi_in182;
															int64_t anon282 = anon276 * 12;
															int64_t anon281 = (__sext int64_t)*(uint32_t*)(anon282 + 6301640);
															uint32_t* anon280 = (uint32_t*)((anon281 << 2) + 6300992);
															*anon280 = phi_in243;
															uint64_t phi278 = phi167;
															uint32_t phi_in283 = phi_in227;
															uint32_t phi_in284 = phi245;
															uint32_t phi285 = phi246;
															uint32_t phi286 = phi_in248;
															uint32_t phi_in287 = phi249;
															uint32_t phi288 = phi230;
															uint32_t phi289 = phi251;
															uint32_t phi290 = phi_in231;
															uint32_t phi291 = phi234;
															uint32_t phi292 = phi_in235;
															uint64_t phi293 = phi254;
															uint32_t phi294 = phi236;
															*(uint64_t*)(phi278 + 96) = phi237;
															uint64_t phi295 = *(uint64_t*)(phi167 + 112);
															uint32_t phi296 = phi255;
															uint32_t phi297 = phi_in256;
															phi273 = phi_in239;
															int64_t anon299 = (__sext int64_t)*(uint32_t*)(anon282 + 6301636);
															uint32_t* anon298 = (uint32_t*)((anon299 << 2) + 6300992);
															if (*(uint32_t*)(phi167 + 64) < *anon298)
															{
																*anon298 = phi251;
																uint32_t phi_in300 = phi_in241;
																uint32_t phi301 = phi242;
																uint32_t phi302 = phi_in182;
																uint32_t phi303 = phi_in244;
																uint32_t phi_in304 = phi_in227;
																uint32_t phi305 = phi247;
																uint64_t phi306 = phi167;
																uint32_t phi307 = phi_in248;
																uint64_t phi308 = anon299;
																uint32_t phi309 = phi_in231;
																uint32_t phi310 = phi234;
																uint64_t phi311 = phi237;
																*(uint64_t*)(phi306 + 112) = *(uint64_t*)(phi167 + 112);
																uint64_t phi312 = phi257;
																if (phi230 < phi251)
																{
																	*(uint32_t*)(phi167 + 124) = phi_in250;
																	*(uint64_t*)(phi167 + 104) = phi237;
																	*(uint32_t*)(phi167 + 96) = phi249;
																	*(uint64_t*)(phi167 + 88) = phi254;
																	*(uint64_t*)(phi167 + 80) = anon299;
																	w(4197873, anon12, (__sext int64_t)phi251, (__zext uint64_t)phi251);
																	phi_in300 = *(uint32_t*)(arg1 - 96);
																	phi301 = *(uint32_t*)(arg1 - 96);
																	phi302 = *(uint32_t*)(arg1 - 96);
																	phi_in243 = *(uint32_t*)(arg1 - 68);
																	phi303 = *(uint32_t*)(arg1 - 96);
																	phi_in304 = *(uint32_t*)(arg1 - 68);
																	phi245 = *(uint32_t*)(arg1 - 96);
																	phi246 = *(uint32_t*)(arg1 - 96);
																	phi305 = *(uint32_t*)(arg1 - 68);
																	phi306 = anon12;
																	phi307 = *(uint32_t*)(arg1 - 68);
																	phi308 = *(uint64_t*)(arg1 - 112);
																	phi249 = *(uint32_t*)(arg1 - 96);
																	phi309 = *(uint32_t*)(arg1 - 96);
																	phi310 = *(uint32_t*)(arg1 - 96);
																	phi254 = *(uint64_t*)(arg1 - 104);
																	phi236 = *(uint32_t*)(arg1 - 96);
																	phi311 = *(uint64_t*)(arg1 - 88);
																	*(uint64_t*)(phi306 + 112) = *(uint64_t*)(arg1 - 80);
																	phi312 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
																}
																uint32_t phi_in313 = phi301;
																uint32_t phi_in314 = phi302;
																uint32_t phi315 = phi303;
																*(uint32_t*)(phi306 + 96) = phi245;
																uint32_t phi316 = phi246;
																*(uint32_t*)(phi306 + 124) = phi305;
																*(uint64_t*)(phi306 + 80) = phi308;
																uint32_t phi317 = phi249;
																uint32_t phi318 = phi309;
																uint32_t phi_in319 = phi310;
																uint64_t phi320 = phi254;
																uint32_t phi_in321 = phi236;
																*(uint64_t*)(phi306 + 104) = phi311;
																uint64_t phi_in322 = phi312;
																uint32_t phi323 = phi_in300;
																uint32_t phi_in324 = phi_in314;
																uint32_t phi325 = phi_in243;
																uint64_t phi326 = phi306;
																*(uint32_t*)(phi326 + 112) = phi_in304;
																uint32_t phi_in327 = *(uint32_t*)(phi306 + 96);
																uint64_t phi328 = *(uint64_t*)(phi306 + 80);
																uint32_t phi_in329 = phi_in319;
																uint32_t phi330 = phi_in321;
																*(uint64_t*)(phi326 + 96) = *(uint64_t*)(phi306 + 104);
																*(uint64_t*)(phi326 + 104) = *(uint64_t*)(phi306 + 112);
																uint64_t phi331 = phi_in322;
																int64_t anon332 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi306 + 80) * 12 + 6301636);
																if (phi307 < *(uint32_t*)((anon332 << 2) + 6300992))
																{
																	*(uint64_t*)(phi306 + 88) = phi320;
																	w(4197793, anon12, anon332, (__zext uint64_t)*(uint32_t*)(phi306 + 120));
																	phi323 = *(uint32_t*)(arg1 - 96);
																	phi_in313 = *(uint32_t*)(arg1 - 96);
																	phi_in324 = *(uint32_t*)(arg1 - 96);
																	phi325 = alloca1.field14;
																	phi315 = *(uint32_t*)(arg1 - 96);
																	phi326 = anon12;
																	*(uint32_t*)(phi326 + 112) = alloca1.field14;
																	phi_in327 = *(uint32_t*)(arg1 - 96);
																	phi316 = *(uint32_t*)(arg1 - 96);
																	phi328 = *(uint64_t*)(arg1 - 112);
																	phi317 = *(uint32_t*)(arg1 - 96);
																	phi318 = *(uint32_t*)(arg1 - 96);
																	phi_in329 = *(uint32_t*)(arg1 - 96);
																	phi320 = *(uint64_t*)(arg1 - 104);
																	phi330 = *(uint32_t*)(arg1 - 96);
																	*(uint64_t*)(phi326 + 96) = *(uint64_t*)(arg1 - 88);
																	*(uint64_t*)(phi326 + 104) = *(uint64_t*)(arg1 - 80);
																	phi331 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
																}
																uint32_t phi_in333 = phi323;
																uint32_t phi_in334 = phi325;
																*(uint32_t*)(phi326 + 88) = phi315;
																uint32_t phi_in335 = phi316;
																uint32_t phi_in336 = phi317;
																phi290 = phi318;
																*(uint64_t*)(phi326 + 80) = phi320;
																uint32_t phi_in337 = phi330;
																*(uint64_t*)(phi278 + 96) = *(uint64_t*)(phi326 + 96);
																uint64_t phi_in338 = phi331;
																phi277 = phi_in333;
																*(uint32_t*)(phi278 + 88) = phi_in313;
																phi279 = phi_in324;
																*anon280 = phi_in334;
																phi278 = phi326;
																phi_in244 = *(uint32_t*)(phi326 + 88);
																phi_in283 = *(uint32_t*)(phi326 + 112);
																phi_in284 = phi_in327;
																phi285 = phi_in335;
																phi247 = *(uint32_t*)(phi326 + 112);
																phi286 = *(uint32_t*)(phi326 + 112);
																phi_in287 = phi_in336;
																phi_in250 = *(uint32_t*)(phi326 + 112);
																phi288 = *(uint32_t*)(phi326 + 112);
																phi289 = *(uint32_t*)(phi326 + 112);
																phi232 = *(uint32_t*)(phi326 + 112);
																phi252 = *(uint32_t*)(phi326 + 112);
																phi291 = phi_in329;
																phi_in253 = *(uint32_t*)(phi326 + 112);
																phi292 = *(uint32_t*)(phi326 + 112);
																phi293 = *(uint64_t*)(phi326 + 80);
																phi294 = phi_in337;
																phi295 = *(uint64_t*)(phi326 + 104);
																phi296 = *(uint32_t*)(phi326 + 112);
																phi297 = *(uint32_t*)(phi326 + 112);
																phi273 = *(uint32_t*)(phi326 + 112);
																phi257 = phi_in338;
																int64_t anon339 = (__sext int64_t)*(uint32_t*)(phi328 * 12 + 6301640);
																if (*(uint32_t*)(phi326 + 112) < *(uint32_t*)((anon339 << 2) + 6300992))
																{
																	*(uint64_t*)(phi326 + 96) = *(uint64_t*)(phi278 + 96);
																	w(4197395, anon12, anon339, (__zext uint64_t)*(uint32_t*)(phi326 + 120));
																	phi277 = *(uint32_t*)(arg1 - 104);
																	*(uint32_t*)(phi278 + 88) = *(uint32_t*)(arg1 - 104);
																	phi279 = *(uint32_t*)(arg1 - 104);
																	*anon280 = *(uint32_t*)(arg1 - 80);
																	phi278 = anon12;
																	phi_in244 = *(uint32_t*)(arg1 - 104);
																	phi_in283 = *(uint32_t*)(arg1 - 80);
																	phi_in284 = *(uint32_t*)(arg1 - 104);
																	phi285 = *(uint32_t*)(arg1 - 104);
																	phi247 = *(uint32_t*)(arg1 - 80);
																	phi286 = *(uint32_t*)(arg1 - 80);
																	phi_in287 = *(uint32_t*)(arg1 - 104);
																	phi_in250 = *(uint32_t*)(arg1 - 80);
																	phi288 = *(uint32_t*)(arg1 - 80);
																	phi289 = *(uint32_t*)(arg1 - 80);
																	phi290 = *(uint32_t*)(arg1 - 104);
																	phi232 = *(uint32_t*)(arg1 - 80);
																	phi252 = *(uint32_t*)(arg1 - 80);
																	phi291 = *(uint32_t*)(arg1 - 104);
																	phi_in253 = *(uint32_t*)(arg1 - 80);
																	phi292 = *(uint32_t*)(arg1 - 80);
																	phi293 = *(uint64_t*)(arg1 - 112);
																	phi294 = *(uint32_t*)(arg1 - 104);
																	*(uint64_t*)(phi278 + 96) = *(uint64_t*)(arg1 - 96);
																	phi295 = *(uint64_t*)(arg1 - 88);
																	phi296 = *(uint32_t*)(arg1 - 80);
																	phi297 = *(uint32_t*)(arg1 - 80);
																	phi273 = *(uint32_t*)(arg1 - 80);
																	phi257 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
																}
															}
															uint32_t phi_in340 = phi277;
															uint32_t phi_in341 = *(uint32_t*)(phi278 + 88);
															uint32_t phi_in342 = phi279;
															uint32_t phi_in343 = phi247;
															phi187 = phi286;
															phi265 = phi_in287;
															phi267 = phi288;
															phi251 = phi289;
															uint32_t phi344 = phi290;
															uint32_t phi_in345 = phi232;
															phi233 = phi252;
															uint32_t phi_in346 = phi291;
															uint32_t phi_in347 = phi292;
															uint64_t phi348 = phi293;
															uint32_t phi_in349 = phi294;
															uint64_t phi350 = *(uint64_t*)(phi278 + 96);
															*(uint64_t*)(phi278 + 104) = phi295;
															phi255 = phi296;
															uint32_t phi_in351 = phi297;
															phi274 = phi257;
															phi258 = phi_in340;
															phi242 = phi_in341;
															phi259 = phi_in342;
															phi260 = *anon280;
															phi261 = phi_in244;
															phi262 = phi_in283;
															phi_in185 = phi_in284;
															phi_in263 = phi285;
															phi264 = phi_in343;
															phi266 = phi_in250;
															phi209 = phi344;
															phi268 = phi_in345;
															phi234 = phi_in346;
															phi132 = phi_in253;
															phi_in193 = phi_in347;
															phi269 = phi348;
															phi270 = phi_in349;
															phi237 = phi350;
															phi271 = *(uint64_t*)(phi278 + 104);
															phi272 = phi_in351;
															phi198 = phi278;
															if (*(uint32_t*)(phi278 + 64) < *anon280)
															{
																phi258 = phi_in340;
																uint32_t phi_in352 = phi_in342;
																*(uint32_t*)(phi353 + 112) = *anon280;
																uint32_t phi_in354 = phi_in244;
																uint32_t phi_in355 = phi_in284;
																uint32_t phi356 = phi265;
																uint32_t phi357 = phi_in346;
																uint32_t phi_in358 = phi_in349;
																*(uint64_t*)(phi353 + 104) = *(uint64_t*)(phi278 + 104);
																uint64_t phi353 = phi278;
																int64_t anon360 = anon281 * 12;
																int64_t anon359 = (__sext int64_t)*(uint32_t*)(anon360 + 6301636);
																if (*anon280 < *(uint32_t*)((anon359 << 2) + 6300992))
																{
																	*(uint32_t*)(phi278 + 112) = *anon280;
																	*(uint64_t*)(phi278 + 96) = phi350;
																	*(uint32_t*)(phi278 + 88) = phi_in341;
																	*(uint64_t*)(phi278 + 80) = phi348;
																	w(4197948, anon12, anon359, (__zext uint64_t)*(uint32_t*)(phi278 + 120));
																	phi258 = *(uint32_t*)(arg1 - 104);
																	phi_in341 = *(uint32_t*)(arg1 - 104);
																	phi_in352 = *(uint32_t*)(arg1 - 104);
																	*(uint32_t*)(phi353 + 112) = *(uint32_t*)(arg1 - 80);
																	phi_in354 = *(uint32_t*)(arg1 - 104);
																	phi_in355 = *(uint32_t*)(arg1 - 104);
																	phi285 = *(uint32_t*)(arg1 - 104);
																	phi356 = *(uint32_t*)(arg1 - 104);
																	phi344 = *(uint32_t*)(arg1 - 104);
																	phi357 = *(uint32_t*)(arg1 - 104);
																	phi348 = *(uint64_t*)(arg1 - 112);
																	phi_in358 = *(uint32_t*)(arg1 - 104);
																	phi350 = *(uint64_t*)(arg1 - 96);
																	*(uint64_t*)(phi353 + 104) = *(uint64_t*)(arg1 - 88);
																	phi353 = anon12;
																	phi274 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
																}
																phi268 = *(uint32_t*)(phi353 + 112);
																uint32_t phi_in361 = phi285;
																phi265 = phi356;
																phi209 = phi344;
																phi234 = phi357;
																*(uint64_t*)(phi353 + 80) = phi348;
																phi237 = phi350;
																phi242 = phi_in341;
																phi259 = phi_in352;
																phi260 = phi268;
																phi261 = phi_in354;
																phi262 = phi268;
																phi_in185 = phi_in355;
																phi_in263 = phi_in361;
																phi264 = phi268;
																phi187 = phi268;
																phi266 = phi268;
																phi267 = phi268;
																phi251 = phi268;
																phi233 = phi268;
																phi132 = phi268;
																phi_in193 = phi268;
																phi269 = *(uint64_t*)(phi353 + 80);
																phi270 = phi_in358;
																phi271 = *(uint64_t*)(phi353 + 104);
																phi255 = phi268;
																phi272 = phi268;
																phi273 = phi268;
																phi198 = phi353;
																int64_t anon362 = (__sext int64_t)*(uint32_t*)(anon360 + 6301640);
																if (phi268 < *(uint32_t*)((anon362 << 2) + 6300992))
																{
																	*(uint32_t*)(phi353 + 112) = phi268;
																	*(uint64_t*)(phi353 + 96) = phi237;
																	*(uint32_t*)(phi353 + 88) = phi258;
																	w(4197231, anon12, anon362, (__zext uint64_t)*(uint32_t*)(phi353 + 120));
																	phi258 = alloca1.field8;
																	phi242 = alloca1.field8;
																	phi259 = alloca1.field8;
																	phi260 = alloca1.field12;
																	phi261 = alloca1.field8;
																	phi262 = alloca1.field12;
																	phi_in185 = alloca1.field8;
																	phi_in263 = alloca1.field8;
																	phi264 = alloca1.field12;
																	phi187 = alloca1.field12;
																	phi265 = alloca1.field8;
																	phi266 = alloca1.field12;
																	phi267 = alloca1.field12;
																	phi251 = alloca1.field12;
																	phi209 = alloca1.field8;
																	phi268 = alloca1.field12;
																	phi233 = alloca1.field12;
																	phi234 = alloca1.field8;
																	phi132 = alloca1.field12;
																	phi_in193 = alloca1.field12;
																	phi269 = alloca1.field7;
																	phi270 = alloca1.field8;
																	phi237 = alloca1.field10;
																	phi271 = alloca1.field11;
																	phi255 = alloca1.field12;
																	phi272 = alloca1.field12;
																	phi273 = alloca1.field12;
																	phi198 = anon12;
																	phi274 = (__zext uint64_t)alloca1.field8;
																}
															}
														}
														phi_in96 = phi258;
														phi_in98 = phi259;
														phi201 = phi261;
														phi184 = phi262;
														phi207 = phi267;
														phi208 = phi251;
														phi210 = phi268;
														phi215 = phi270;
														phi216 = phi237;
														phi217 = phi271;
														phi200 = phi242;
														phi183 = phi260;
														phi202 = phi_in185;
														phi_in203 = phi_in263;
														phi204 = phi264;
														phi205 = phi187;
														phi206 = phi265;
														*(uint32_t*)(phi167 + 124) = phi266;
														phi111 = phi233;
														phi211 = phi234;
														phi212 = phi132;
														phi213 = phi_in193;
														phi214 = phi269;
														phi218 = phi255;
														phi219 = phi272;
														phi220 = phi273;
														phi_in221 = phi274;
														phi_in224 = phi240 + 4;
														phi161 = phi_in96;
														phi_in181 = phi242;
														phi_in182 = phi_in98;
														phi225 = phi260;
														phi_in226 = phi201;
														phi_in227 = phi184;
														phi228 = phi_in185;
														phi186 = phi_in263;
														phi_in229 = phi264;
														phi188 = phi265;
														*(uint32_t*)(phi167 + 124) = phi266;
														phi230 = phi207;
														phi190 = phi208;
														phi_in231 = phi209;
														phi232 = phi210;
														phi234 = phi234;
														phi_in235 = phi_in193;
														*(uint64_t*)(phi167 + 88) = phi269;
														phi236 = phi215;
														phi237 = phi216;
														phi238 = phi217;
														phi_in175 = phi255;
														phi196 = phi272;
														phi_in239 = phi273;
														phi167 = phi198;
														phi199 = phi274;
													}
													while (phi240 != 8);
												}
												phi144 = phi205;
												phi130 = phi210;
												phi_in117 = phi214;
												phi118 = phi217;
												phi138 = phi_in96;
												phi73 = phi200;
												phi139 = phi_in98;
												phi_in140 = phi183;
												phi141 = phi201;
												phi_in142 = phi184;
												phi75 = phi202;
												phi76 = phi_in203;
												phi143 = phi204;
												phi145 = phi206;
												phi_in146 = *(uint32_t*)(phi167 + 124);
												phi_in147 = phi207;
												phi148 = phi208;
												phi149 = phi209;
												phi150 = phi111;
												phi79 = phi211;
												phi151 = phi212;
												phi152 = phi213;
												phi153 = phi215;
												phi154 = phi216;
												phi155 = phi218;
												phi156 = phi219;
												phi116 = phi220;
												phi_in81 = phi198;
												phi157 = phi_in221;
												phi_in160 = phi180 + 4;
												phi161 = phi_in96;
												phi162 = phi200;
												phi163 = phi_in98;
												phi99 = phi183;
												phi_in164 = phi201;
												phi122 = phi184;
												phi123 = phi202;
												phi124 = phi_in203;
												phi_in165 = phi204;
												phi104 = phi144;
												phi166 = phi206;
												phi168 = phi207;
												phi169 = phi208;
												phi_in170 = phi209;
												phi_in171 = phi130;
												phi131 = phi211;
												phi132 = phi212;
												phi133 = phi213;
												*(uint64_t*)(phi167 + 88) = phi_in117;
												phi_in172 = phi215;
												phi173 = phi216;
												phi174 = phi217;
												phi_in175 = phi218;
												phi176 = phi219;
												phi177 = phi220;
												phi_in178 = phi198;
												phi179 = phi_in221;
											}
											while (phi180 != 8);
										}
										phi86 = phi138;
										phi74 = phi139;
										phi363 = phi_in117;
										phi_in89 = phi149;
										phi91 = phi153;
										phi85 = phi154;
										phi87 = phi141;
										phi_in88 = phi75;
										phi47 = phi76;
										phi68 = phi145;
										phi90 = phi79;
										phi92 = phi_in81;
										phi93 = phi157;
										phi_in96 = phi86;
										phi97 = phi73;
										phi_in98 = phi74;
										phi99 = phi_in140;
										phi101 = phi141;
										phi102 = phi_in142;
										phi103 = phi143;
										phi104 = phi144;
										phi105 = phi145;
										phi106 = phi_in146;
										phi107 = phi_in147;
										phi108 = phi148;
										phi_in109 = phi_in89;
										phi110 = phi130;
										phi111 = phi150;
										phi112 = phi151;
										phi113 = phi152;
										phi80 = phi91;
										phi83 = phi154;
										phi_in114 = phi155;
										phi115 = phi156;
										phi_in117 = phi363 + 4;
										phi119 = phi157;
									}
									while (phi363 != 8);
								}
								phi_in364 = phi86;
								phi_in365 = phi73;
								phi_in366 = phi74;
								phi54 = phi87;
								phi59 = phi90;
								phi_in367 = phi91;
								phi_in368 = phi92;
								phi_in61 = phi93;
								phi_in65 = phi_in364;
								phi66 = phi_in365;
								phi44 = phi_in366;
								phi_in67 = phi54;
								phi46 = phi_in88;
								phi69 = phi_in89;
								phi48 = phi59;
								phi49 = phi_in367;
								phi70 = phi_in368;
								phi_in71 = phi82 + 4;
								phi72 = phi85;
								phi50 = phi_in61;
							}
							while (phi82 != 8);
							phi_in51 = phi_in364;
							phi52 = phi_in365;
							phi53 = phi_in366;
							phi37 = phi_in88;
							phi_in55 = phi47;
							phi_in56 = *(uint64_t*)(phi_in368 + 72);
							phi57 = phi68;
							phi58 = phi_in89;
							phi60 = phi_in367;
							phi_in62 = phi_in368;
						}
						phi369 = phi_in56;
						phi_in34 = phi_in51;
						phi_in35 = phi52;
						phi36 = phi53;
						phi25 = phi54;
						phi38 = phi_in55;
						phi_in39 = phi57;
						phi_in40 = phi58;
						phi41 = phi59;
						phi42 = phi60;
						phi43 = phi_in61;
						*(uint64_t*)(phi14 + 72) = phi369 + 4;
						phi14 = phi_in62;
					}
					while (phi369 != 8);
					phi26 = *(uint32_t*)(phi_in62 + 68);
					phi20 = phi_in55;
					phi_in27 = *(uint64_t*)(phi_in62 + 56);
					phi28 = (__zext uint64_t)phi_in55;
					phi29 = *(uint32_t*)(phi_in62 + 68);
					phi13 = phi_in55;
					phi30 = *(uint32_t*)(phi_in62 + 68);
					phi_in31 = phi_in62;
				}
				phi_in370 = phi26;
				phi371 = phi_in27;
				phi_in19 = phi_in370;
				phi21 = phi28;
				*(uint32_t*)(phi14 + 68) = phi29;
				phi22 = phi30;
				phi23 = phi371 + 4;
				phi10 = phi_in31;
			}
			while (phi371 != 8);
			phi15 = *(uint64_t*)(phi_in31 + 48);
			phi4 = phi20;
			phi5 = phi_in370;
			phi7 = (__zext uint64_t)phi20;
			phi16 = phi_in370;
			phi17 = phi20;
			phi_in18 = phi_in31;
		}
		*anon8 = phi16;
		phi11 = phi17;
		*(uint64_t*)(phi10 + 48) = phi15 + 4;
		phi10 = phi_in18;
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
		uint32_t anon35;
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
			uint32_t* anon14;
			uint32_t phi15;
			uint32_t phi16;
			uint32_t phi17;
			uint32_t phi_in18;
			uint32_t* anon11 = (uint32_t*)((phi10 & 0xc) + 4);
			uint32_t* anon12 = (uint32_t*)phi10;
			if (*anon11 < *anon12)
			{
				*anon12 = *anon11;
				*anon11 = *anon12;
				phi13 = *anon12;
				anon14 = (uint32_t*)(phi10 - 4);
				*anon14 = *anon11;
				phi15 = *anon14;
				phi16 = *anon12;
				phi17 = *anon11;
			}
			else 
			{
				phi13 = *anon11 & 0xf;
				*anon14 = *anon12 & 0xf;
				phi_in18 = *anon14;
			}
			if (*anon11 < *anon12 && *anon11 < *anon14 || *anon11 >= *anon12 && *anon12 < *anon14)
			{
				uint32_t phi_in19 = phi13;
				*anon12 = *anon14 & 0xf;
				phi15 = *anon14;
				phi16 = phi_in19;
				phi17 = *anon14;
			}
			if (*anon11 < *anon12 && *anon11 < *anon14 || *anon11 >= *anon12 && *anon12 < *anon14 || *anon11 >= *anon14 && *anon11 < *anon12)
			{
				phi_in18 = phi15;
				*anon12 = phi16;
				*anon11 = phi17;
				struct { uint32_t field0; bool field1; } anon20 = llvm.ssub.with.overflow.i32(*anon12, *anon11);
				if ((uint8_t)((*anon12 & 0xf) - (*anon11 & 0xf) >> 31) != (__zext uint8_t)anon20.field1)
				{
					phi_in18 = *anon14;
				}
			}
			uint32_t phi21 = phi_in18;
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
			uint32_t phi27;
			uint32_t phi28;
			uint32_t* anon29;
			uint32_t phi_in30;
			uint32_t* anon24 = (uint32_t*)(phi22 + 4);
			uint32_t* anon25 = (uint32_t*)phi22;
			if (*anon24 < *anon25)
			{
				*anon25 = *anon24;
				*anon24 = *anon25;
				phi26 = *anon25;
				phi27 = *anon24;
				anon29 = (uint32_t*)((phi22 & 0xc) - 4);
				phi28 = *anon29;
				*anon25 = *anon25;
				*anon24 = *anon24;
			}
			else 
			{
				phi26 = *anon24 & 0xf;
				phi27 = *anon25 & 0xf;
				phi_in30 = *anon29;
			}
			if (*anon24 < *anon25 && *anon24 < *anon29 || *anon24 >= *anon25 && *anon25 < *anon29)
			{
				uint32_t phi_in31 = phi26;
				uint32_t phi_in32 = phi27;
				*anon25 = *anon29 & 0xf;
				*anon29 = phi_in32;
				phi28 = phi_in32;
				*anon25 = phi_in31;
				*anon24 = *anon29;
			}
			if (*anon24 < *anon25 && *anon24 < *anon29 || *anon24 >= *anon25 && *anon25 < *anon29 || *anon24 >= *anon29 && *anon24 < *anon25)
			{
				phi_in30 = phi28;
				struct { uint32_t field0; bool field1; } anon33 = llvm.ssub.with.overflow.i32(*anon25, *anon24);
				if ((uint8_t)((*anon25 & 0xf) - (*anon24 & 0xf) >> 31) != (__zext uint8_t)anon33.field1)
				{
					phi_in30 = *anon29;
				}
			}
			uint32_t phi34 = phi_in30;
			anon35 = phi34 + 1 & 0xff;
			if (anon35 != 0)
			{
				phi22 = phi22 + 12;
			}
		}
		while (anon35 != 0);
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
