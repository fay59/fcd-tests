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
		uint32_t phi_in6;
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
			phi_in6 = *anon4;
			anon8 = (uint32_t*)(phi3 - 4);
			phi7 = *anon8;
			phi9 = *phi1;
			phi10 = *anon4;
		}
		else 
		{
			phi5 = *anon4;
			phi_in6 = *phi1;
			phi11 = *anon8;
		}
		if (*anon4 < *phi1 && *anon4 < *anon8 || *anon4 >= *phi1 && *phi1 < *anon8)
		{
			uint32_t phi_in12 = phi5;
			*phi1 = *anon8;
			*anon8 = phi_in6;
			phi7 = phi_in6;
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
	while (true)
	{
		uint64_t phi13;
		uint32_t phi_in26;
		uint32_t phi_in28;
		uint64_t phi35;
		uint32_t phi_in36;
		uint64_t phi38;
		uint32_t phi42;
		uint32_t phi44;
		uint32_t phi47;
		uint64_t phi50;
		uint64_t phi_in336;
		uint64_t phi_in337;
		uint64_t phi342;
		uint64_t phi349;
		uint64_t phi354;
		uint32_t phi355;
		uint64_t phi356;
		uint32_t phi_in12 = phi4;
		*(uint32_t*)(phi13 + 68) = phi5;
		int64_t anon15 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi10 + 48) + *(uint64_t*)(phi10 + 8) + 6301632);
		uint32_t* anon14 = (uint32_t*)((anon15 << 2) + 6300992);
		*anon14 = phi8;
		if (phi9 < *anon14)
		{
			uint32_t phi348;
			uint64_t phi350;
			uint32_t phi351;
			uint32_t phi352;
			uint64_t phi353;
			*(uint64_t*)(phi10 + 16) = anon15 * 12;
			*(uint32_t*)(phi10 + 40) = (uint32_t)phi7 + 5;
			uint32_t phi16 = *(uint32_t*)(phi13 + 68);
			uint32_t phi17 = phi_in12;
			uint64_t phi18 = (__zext uint64_t)phi_in12;
			uint32_t phi19 = *(uint32_t*)(phi13 + 68);
			*(uint64_t*)(phi13 + 56) = 0;
			uint32_t phi_in20 = phi16;
			uint32_t phi_in21 = phi17;
			uint32_t phi_in22 = phi_in12;
			phi13 = phi10;
			int64_t anon24 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi13 + 56) + *(uint64_t*)(phi13 + 16) + 6301632);
			uint32_t* anon23 = (uint32_t*)((anon24 << 2) + 6300992);
			if (phi19 < *anon23)
			{
				uint32_t phi338;
				uint32_t phi339;
				uint32_t phi340;
				uint32_t phi341;
				uint32_t phi343;
				uint32_t phi344;
				uint32_t phi345;
				uint64_t phi346;
				uint64_t phi347;
				*anon23 = *(uint32_t*)(phi13 + 4);
				*(uint64_t*)(phi13 + 32) = anon24 * 12;
				*(uint32_t*)(phi13 + 44) = (uint32_t)phi18 + 6;
				uint32_t phi_in25 = phi_in22;
				phi_in26 = phi_in22;
				uint32_t phi_in27 = phi_in22;
				phi_in28 = phi_in22;
				uint32_t phi_in29 = phi_in22;
				uint32_t phi_in30 = phi_in22;
				uint32_t phi31 = phi_in22;
				uint32_t phi32 = phi_in22;
				uint32_t phi_in33 = phi_in22;
				uint64_t phi34 = (__zext uint64_t)phi_in22;
				*(uint64_t*)(phi35 + 72) = 0;
				phi_in36 = phi31;
				uint32_t phi37 = phi32;
				phi38 = phi34;
				phi35 = phi13;
				int64_t anon40 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi35 + 72) + *(uint64_t*)(phi35 + 32) + 6301632);
				uint32_t* anon39 = (uint32_t*)((anon40 << 2) + 6300992);
				if (*(uint32_t*)(phi35 + 4) < *anon39)
				{
					uint32_t phi103;
					uint32_t phi326;
					uint32_t phi330;
					uint32_t phi332;
					uint64_t phi333;
					uint32_t phi334;
					uint32_t phi335;
					*anon39 = *(uint32_t*)(phi35 + 24);
					*(uint32_t*)(phi35 + 64) = (uint32_t)phi38 + 7;
					uint32_t phi41 = phi_in25;
					phi42 = phi_in26;
					uint32_t phi43 = phi_in27;
					phi44 = phi_in28;
					uint32_t phi45 = phi_in29;
					uint32_t phi46 = phi_in30;
					phi47 = phi_in36;
					uint32_t phi48 = phi_in33;
					uint32_t phi49 = phi_in22;
					phi50 = 0;
					uint64_t phi51 = anon40 * 12;
					int64_t anon53 = (__sext int64_t)*(uint32_t*)(phi50 + phi51 + 6301632);
					uint32_t* anon52 = (uint32_t*)((anon53 << 2) + 6300992);
					if (*(uint32_t*)(phi35 + 24) < *anon52)
					{
						uint32_t phi_in57;
						uint64_t phi327;
						*anon52 = *(uint32_t*)(phi35 + 28);
						uint32_t phi54 = phi41;
						uint32_t phi55 = phi42;
						uint32_t phi56 = phi43;
						uint32_t anon58 = (uint32_t)phi38 + 8;
						phi_in57 = anon58;
						uint32_t phi59 = phi44;
						uint32_t phi60 = phi45;
						uint32_t phi61 = anon58;
						uint32_t phi62 = phi46;
						uint32_t phi63 = phi47;
						uint32_t phi64 = anon58;
						uint32_t phi_in65 = anon58;
						uint32_t phi_in66 = anon58;
						uint32_t phi_in67 = phi37;
						uint32_t phi_in68 = anon58;
						uint32_t phi_in69 = anon58;
						uint32_t phi70 = phi48;
						uint32_t phi71 = anon58;
						uint32_t phi_in72 = anon58;
						uint32_t phi73 = phi49;
						uint64_t phi_in74 = phi51;
						uint32_t phi_in75 = anon58;
						uint32_t phi76 = anon58;
						uint32_t phi77 = anon58;
						uint64_t phi_in78 = phi35;
						uint64_t phi_in79 = 0;
						uint64_t phi80 = anon53 * 12;
						uint64_t phi81 = phi38;
						do
						{
							uint32_t phi_in82 = phi54;
							uint32_t phi83 = phi55;
							uint32_t phi_in84 = phi59;
							uint32_t phi_in85 = phi60;
							uint32_t phi86 = phi61;
							uint32_t phi_in87 = phi62;
							uint32_t phi_in88 = phi63;
							uint32_t phi_in89 = phi64;
							uint32_t phi_in90 = phi_in65;
							uint32_t phi91 = phi_in67;
							uint32_t phi92 = phi_in68;
							uint32_t phi_in93 = phi_in69;
							uint32_t phi94 = phi70;
							uint32_t phi_in95 = phi71;
							uint32_t phi96 = phi_in72;
							uint32_t phi_in97 = phi73;
							uint32_t phi98 = phi77;
							uint64_t phi_in99 = phi_in78;
							uint64_t phi_in100 = phi80;
							uint64_t phi_in101 = phi81;
							phi41 = phi_in82;
							uint32_t phi_in102 = phi83;
							phi103 = phi56;
							uint32_t phi104 = phi_in57;
							uint32_t phi105 = phi_in84;
							uint32_t phi106 = phi_in85;
							phi61 = phi86;
							uint32_t phi_in107 = phi_in87;
							uint64_t phi108 = phi_in100;
							uint32_t phi109 = phi_in88;
							uint32_t phi110 = phi_in89;
							phi_in65 = phi_in90;
							uint32_t phi_in111 = phi_in66;
							phi_in67 = phi91;
							uint32_t phi_in112 = phi92;
							phi_in69 = phi_in93;
							uint32_t phi113 = phi_in95;
							uint32_t phi114 = phi96;
							uint32_t phi115 = phi_in97;
							uint64_t phi_in116 = phi_in74;
							uint32_t phi117 = phi_in75;
							uint32_t phi118 = phi76;
							uint64_t phi119 = phi_in99;
							uint64_t phi_in120 = phi_in101;
							int64_t anon122 = (__sext int64_t)*(uint32_t*)(phi_in79 + phi_in100 + 6301632);
							uint32_t* anon121 = (uint32_t*)((anon122 << 2) + 6300992);
							if (*(uint32_t*)(phi_in99 + 28) < *anon121)
							{
								*anon121 = *(uint32_t*)(phi_in99 + 40);
								*(uint32_t*)(phi_in99 + 120) = (uint32_t)phi_in101 + 9;
								uint64_t phi123 = 0;
								uint32_t phi_in124 = phi_in57;
								uint32_t phi125 = phi_in84;
								uint32_t phi_in126 = phi_in87;
								uint32_t phi127 = phi_in88;
								uint32_t phi_in128 = phi_in89;
								uint32_t phi129 = phi_in90;
								uint32_t phi_in130 = phi_in66;
								uint32_t phi_in131 = phi_in93;
								uint32_t phi_in132 = phi94;
								uint64_t phi_in133 = phi_in79;
								uint32_t phi134 = phi_in97;
								uint64_t phi135 = phi_in74;
								uint64_t phi_in136 = phi_in100;
								uint32_t phi137 = phi_in75;
								phi77 = phi98;
								uint64_t phi138 = phi_in99;
								uint64_t phi139 = phi_in101 & 0xffffffff;
								do
								{
									uint32_t phi_in140 = phi83;
									uint32_t phi_in141 = phi56;
									uint32_t phi142 = phi_in85;
									uint32_t phi_in143 = phi86;
									uint32_t phi_in144 = phi_in126;
									uint32_t phi_in145 = phi_in128;
									uint32_t phi146 = phi129;
									uint32_t phi147 = phi91;
									uint32_t phi_in148 = phi92;
									uint32_t phi_in149 = phi_in131;
									uint32_t phi_in150 = phi_in95;
									uint32_t phi151 = phi96;
									uint64_t phi_in152 = phi_in133;
									uint32_t phi_in153 = phi134;
									uint32_t phi_in154 = phi137;
									uint32_t phi_in155 = phi76;
									uint32_t phi_in156 = phi77;
									uint64_t phi_in157 = phi138;
									uint64_t phi_in158 = phi139;
									uint32_t phi_in159 = phi_in82;
									uint32_t phi160 = phi_in140;
									uint32_t phi161 = phi_in141;
									uint32_t phi_in162 = phi_in124;
									uint32_t phi163 = phi_in143;
									uint32_t phi_in164 = phi_in144;
									uint32_t phi165 = phi127;
									uint32_t phi166 = phi_in145;
									uint32_t phi_in167 = phi_in130;
									phi92 = phi_in148;
									phi_in93 = phi_in149;
									uint32_t phi_in168 = phi_in132;
									phi113 = phi_in150;
									phi_in79 = phi_in152;
									uint32_t phi_in169 = phi_in153;
									phi_in74 = phi135;
									uint64_t phi170 = phi_in136;
									uint32_t phi171 = phi_in154;
									uint32_t phi172 = phi_in155;
									phi98 = phi_in156;
									uint64_t phi173 = phi_in157;
									phi_in101 = phi_in158;
									int64_t anon175 = (__sext int64_t)*(uint32_t*)(phi123 + anon122 * 12 + 6301632);
									uint32_t* anon174 = (uint32_t*)((anon175 << 2) + 6300992);
									if (*(uint32_t*)(phi_in157 + 40) < *anon174)
									{
										*anon174 = *(uint32_t*)(phi_in157 + 44);
										uint64_t phi176 = 0;
										uint32_t phi_in177 = phi_in82;
										uint32_t phi_in178 = phi_in140;
										uint32_t phi_in179 = phi_in141;
										uint32_t phi_in180 = phi_in124;
										uint32_t phi_in181 = phi142;
										uint32_t phi182 = phi_in143;
										uint32_t phi183 = phi_in145;
										uint32_t phi184 = phi146;
										uint32_t phi_in185 = phi_in130;
										uint32_t phi_in186 = phi147;
										uint32_t phi_in187 = phi_in148;
										uint32_t phi188 = phi_in149;
										uint32_t phi_in189 = phi_in132;
										uint32_t phi_in190 = phi_in150;
										uint32_t phi_in191 = phi151;
										uint32_t phi192 = phi_in153;
										uint64_t phi_in193 = phi_in136;
										uint32_t phi194 = phi_in155;
										uint32_t phi_in195 = phi_in156;
										uint64_t phi196 = phi_in157;
										uint64_t phi_in197 = phi_in158;
										do
										{
											uint64_t phi_in211;
											uint32_t phi_in198 = phi_in177;
											uint32_t phi_in199 = phi_in179;
											uint32_t phi200 = phi_in180;
											uint32_t phi_in201 = phi125;
											uint32_t phi_in202 = phi182;
											uint32_t phi_in203 = phi_in144;
											uint32_t phi204 = phi127;
											uint32_t phi_in205 = phi184;
											phi_in185 = phi_in185;
											uint32_t phi_in206 = phi_in186;
											uint32_t phi_in207 = phi188;
											uint32_t phi_in208 = phi_in189;
											uint32_t phi_in209 = phi_in190;
											uint32_t phi_in210 = phi_in191;
											*(uint64_t*)(phi_in211 + 88) = phi_in152;
											uint32_t phi212 = phi192;
											*(uint64_t*)(phi196 + 104) = phi135;
											uint64_t phi213 = phi_in193;
											uint32_t phi_in214 = phi_in154;
											uint32_t phi215 = phi194;
											uint32_t phi216 = phi_in198;
											uint32_t phi_in217 = phi_in178;
											uint32_t phi218 = phi_in199;
											uint32_t phi219 = phi200;
											uint32_t phi220 = phi_in201;
											uint32_t phi_in221 = phi_in181;
											uint32_t phi222 = phi_in202;
											phi_in126 = phi_in203;
											uint32_t phi223 = phi204;
											uint32_t phi224 = phi183;
											phi146 = phi_in205;
											uint32_t phi225 = phi_in185;
											uint32_t phi_in226 = phi_in206;
											uint32_t phi227 = phi_in187;
											uint32_t phi228 = phi_in207;
											uint32_t phi_in229 = phi_in208;
											phi_in190 = phi_in209;
											uint32_t phi230 = phi_in210;
											phi_in133 = *(uint64_t*)(phi_in211 + 88);
											uint64_t phi231 = *(uint64_t*)(phi196 + 104);
											uint32_t phi232 = phi_in214;
											uint32_t phi233 = phi215;
											uint32_t phi234 = phi_in195;
											uint64_t phi235 = phi196;
											uint64_t phi236 = phi_in197;
											int64_t anon238 = (__sext int64_t)*(uint32_t*)(phi176 + anon175 * 12 + 6301632);
											uint32_t* anon237 = (uint32_t*)((anon238 << 2) + 6300992);
											if (*(uint32_t*)(phi196 + 44) < *anon237)
											{
												*anon237 = *(uint32_t*)(phi196 + 64);
												phi_in177 = phi_in198;
												uint32_t phi239 = phi_in178;
												uint32_t phi_in240 = phi_in199;
												*(uint32_t*)(phi_in241 + 112) = phi200;
												uint32_t phi242 = phi_in201;
												uint32_t phi_in243 = phi_in202;
												uint32_t phi244 = phi_in203;
												uint32_t phi_in245 = phi204;
												uint32_t phi246 = phi_in205;
												uint32_t phi_in247 = phi_in187;
												phi_in207 = phi_in207;
												uint32_t phi_in248 = phi_in208;
												uint32_t phi249 = phi_in209;
												uint32_t phi250 = phi_in210;
												uint64_t phi251 = *(uint64_t*)(phi_in211 + 88);
												uint32_t phi_in252 = phi212;
												*(uint64_t*)(phi_in241 + 96) = *(uint64_t*)(phi196 + 104);
												uint64_t phi253 = phi213;
												uint32_t phi254 = phi_in214;
												uint32_t phi255 = phi_in195;
												uint64_t phi256 = phi_in197;
												int64_t anon259 = anon238 * 12;
												int64_t anon258 = (__sext int64_t)*(uint32_t*)(anon259 + 6301636);
												uint32_t* anon257 = (uint32_t*)((anon258 << 2) + 6300992);
												if (*(uint32_t*)(phi196 + 64) < *anon257)
												{
													*anon257 = phi_in185;
													uint32_t phi_in260 = phi_in198;
													uint32_t phi261 = phi_in178;
													uint32_t phi_in262 = phi_in199;
													uint32_t phi263 = phi_in201;
													*(uint32_t*)(phi_in211 + 96) = phi_in181;
													uint64_t phi264 = phi196;
													*(uint32_t*)(phi_in211 + 124) = phi_in202;
													uint32_t phi_in265 = phi_in203;
													uint64_t phi266 = anon258;
													uint32_t phi_in267 = phi_in206;
													uint32_t phi_in268 = phi_in208;
													uint32_t phi_in269 = phi212;
													uint64_t phi270 = *(uint64_t*)(phi196 + 104);
													uint64_t phi271 = phi213;
													uint64_t phi272 = phi_in197;
													if (phi_in205 < phi_in185)
													{
														*(uint32_t*)(phi196 + 124) = phi183;
														*(uint64_t*)(phi196 + 112) = phi213;
														*(uint32_t*)(phi196 + 96) = phi204;
														*(uint64_t*)(phi196 + 88) = *(uint64_t*)(phi_in211 + 88);
														*(uint64_t*)(phi196 + 80) = anon258;
														uint64_t anon273 = (__zext uint64_t)phi_in185;
														w(4197873, anon11, (__sext int64_t)phi_in185, anon273, anon273);
														phi_in260 = *(uint32_t*)(arg1 - 96);
														phi261 = *(uint32_t*)(arg1 - 96);
														phi_in262 = *(uint32_t*)(arg1 - 96);
														phi200 = *(uint32_t*)(arg1 - 68);
														phi263 = *(uint32_t*)(arg1 - 96);
														*(uint32_t*)(phi_in211 + 96) = *(uint32_t*)(arg1 - 96);
														phi264 = anon11;
														*(uint32_t*)(phi_in211 + 124) = *(uint32_t*)(arg1 - 68);
														phi_in265 = *(uint32_t*)(arg1 - 96);
														phi266 = *(uint64_t*)(arg1 - 112);
														phi204 = *(uint32_t*)(arg1 - 96);
														phi_in267 = *(uint32_t*)(arg1 - 96);
														phi_in268 = *(uint32_t*)(arg1 - 96);
														*(uint64_t*)(phi_in211 + 88) = *(uint64_t*)(arg1 - 104);
														phi_in269 = *(uint32_t*)(arg1 - 96);
														phi270 = *(uint64_t*)(arg1 - 88);
														phi271 = *(uint64_t*)(arg1 - 80);
														phi272 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
													}
													uint32_t phi_in274 = phi200;
													uint32_t phi_in275 = phi263;
													phi_in211 = phi264;
													uint32_t phi_in276 = *(uint32_t*)(phi_in211 + 124);
													*(uint64_t*)(phi_in211 + 80) = phi266;
													uint32_t phi_in277 = phi204;
													*(uint64_t*)(phi196 + 80) = *(uint64_t*)(phi_in211 + 88);
													*(uint64_t*)(phi_in211 + 104) = phi270;
													uint64_t phi_in278 = phi271;
													uint64_t phi279 = phi272;
													uint32_t phi280 = phi_in260;
													uint32_t phi281 = phi_in262;
													uint32_t phi_in282 = phi_in274;
													uint32_t phi_in283 = phi_in275;
													uint64_t phi284 = phi_in211;
													phi_in181 = *(uint32_t*)(phi_in211 + 96);
													phi244 = phi_in265;
													uint64_t phi285 = *(uint64_t*)(phi_in211 + 80);
													phi_in245 = phi_in277;
													uint32_t phi_in286 = phi_in267;
													uint32_t phi287 = phi_in268;
													uint32_t phi288 = phi_in269;
													*(uint64_t*)(phi196 + 96) = *(uint64_t*)(phi_in211 + 104);
													uint64_t phi289 = phi_in278;
													int64_t anon290 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi_in211 + 80) * 12 + 6301636);
													if (phi_in276 < *(uint32_t*)((anon290 << 2) + 6300992))
													{
														*(uint32_t*)(phi_in211 + 124) = phi_in276;
														*(uint64_t*)(phi_in211 + 112) = phi_in278;
														*(uint64_t*)(phi_in211 + 88) = *(uint64_t*)(phi196 + 80);
														uint64_t anon291 = (__zext uint64_t)*(uint32_t*)(phi_in211 + 120);
														w(4197793, anon11, anon290, anon291, anon291);
														phi280 = *(uint32_t*)(arg1 - 96);
														phi261 = *(uint32_t*)(arg1 - 96);
														phi281 = *(uint32_t*)(arg1 - 96);
														phi_in282 = alloca1.field14;
														phi_in283 = *(uint32_t*)(arg1 - 96);
														phi284 = anon11;
														phi_in181 = *(uint32_t*)(arg1 - 96);
														phi_in276 = alloca1.field14;
														phi244 = *(uint32_t*)(arg1 - 96);
														phi285 = *(uint64_t*)(arg1 - 112);
														phi_in245 = *(uint32_t*)(arg1 - 96);
														phi_in286 = *(uint32_t*)(arg1 - 96);
														phi287 = *(uint32_t*)(arg1 - 96);
														*(uint64_t*)(phi196 + 80) = *(uint64_t*)(arg1 - 104);
														phi288 = *(uint32_t*)(arg1 - 96);
														*(uint64_t*)(phi196 + 96) = *(uint64_t*)(arg1 - 88);
														phi289 = *(uint64_t*)(arg1 - 80);
														phi279 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
													}
													phi_in198 = phi280;
													phi239 = phi261;
													phi_in179 = phi281;
													*(uint32_t*)(phi196 + 88) = phi_in283;
													phi196 = phi284;
													phi_in190 = phi_in276;
													phi_in189 = phi287;
													uint64_t phi_in292 = *(uint64_t*)(phi196 + 80);
													uint32_t phi_in293 = phi288;
													*(uint64_t*)(phi_in241 + 96) = *(uint64_t*)(phi196 + 96);
													phi253 = phi289;
													phi_in197 = phi279;
													phi_in177 = phi_in198;
													phi_in240 = phi_in179;
													*(uint32_t*)(phi_in241 + 112) = phi_in282;
													phi242 = *(uint32_t*)(phi196 + 88);
													phi_in243 = phi_in190;
													phi183 = phi_in190;
													phi246 = phi_in190;
													phi_in185 = phi_in190;
													phi_in206 = phi_in286;
													phi_in247 = phi_in190;
													phi_in207 = phi_in190;
													phi_in248 = phi_in189;
													phi249 = phi_in190;
													phi250 = phi_in190;
													phi251 = phi_in292;
													phi_in252 = phi_in293;
													phi254 = phi_in190;
													phi215 = phi_in190;
													phi255 = phi_in190;
													phi256 = phi_in197;
													int64_t anon294 = (__sext int64_t)*(uint32_t*)(phi285 * 12 + 6301640);
													if (phi_in190 < *(uint32_t*)((anon294 << 2) + 6300992))
													{
														*(uint32_t*)(phi196 + 112) = phi_in190;
														*(uint64_t*)(phi196 + 104) = phi253;
														*(uint64_t*)(phi196 + 96) = *(uint64_t*)(phi_in241 + 96);
														*(uint64_t*)(phi196 + 80) = phi_in292;
														uint64_t anon295 = (__zext uint64_t)*(uint32_t*)(phi196 + 120);
														w(4197395, anon11, anon294, anon295, anon295);
														phi_in177 = *(uint32_t*)(arg1 - 104);
														phi239 = *(uint32_t*)(arg1 - 104);
														phi_in240 = *(uint32_t*)(arg1 - 104);
														*(uint32_t*)(phi_in241 + 112) = *(uint32_t*)(arg1 - 80);
														phi196 = anon11;
														phi242 = *(uint32_t*)(arg1 - 104);
														phi_in181 = *(uint32_t*)(arg1 - 104);
														phi_in243 = *(uint32_t*)(arg1 - 80);
														phi244 = *(uint32_t*)(arg1 - 104);
														phi_in245 = *(uint32_t*)(arg1 - 104);
														phi183 = *(uint32_t*)(arg1 - 80);
														phi246 = *(uint32_t*)(arg1 - 80);
														phi_in185 = *(uint32_t*)(arg1 - 80);
														phi_in206 = *(uint32_t*)(arg1 - 104);
														phi_in247 = *(uint32_t*)(arg1 - 80);
														phi_in207 = *(uint32_t*)(arg1 - 80);
														phi_in248 = *(uint32_t*)(arg1 - 104);
														phi249 = *(uint32_t*)(arg1 - 80);
														phi250 = *(uint32_t*)(arg1 - 80);
														phi251 = *(uint64_t*)(arg1 - 112);
														phi_in252 = *(uint32_t*)(arg1 - 104);
														*(uint64_t*)(phi_in241 + 96) = *(uint64_t*)(arg1 - 96);
														phi253 = *(uint64_t*)(arg1 - 88);
														phi254 = *(uint32_t*)(arg1 - 80);
														phi215 = *(uint32_t*)(arg1 - 80);
														phi255 = *(uint32_t*)(arg1 - 80);
														phi256 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
													}
												}
												uint32_t phi_in296 = phi239;
												phi218 = phi_in240;
												int64_t anon298 = (__sext int64_t)*(uint32_t*)(anon259 + 6301640);
												uint32_t* anon297 = (uint32_t*)((anon298 << 2) + 6300992);
												*anon297 = *(uint32_t*)(phi_in241 + 112);
												uint64_t phi_in241 = phi196;
												uint32_t phi299 = phi242;
												uint32_t phi_in300 = phi_in181;
												uint32_t phi_in301 = phi244;
												uint32_t phi_in302 = phi_in245;
												phi224 = phi183;
												phi_in205 = phi246;
												uint32_t phi_in303 = phi_in248;
												phi_in209 = phi249;
												phi_in210 = phi250;
												*(uint64_t*)(phi_in241 + 80) = phi251;
												uint32_t phi_in304 = phi_in252;
												uint64_t phi305 = *(uint64_t*)(phi_in241 + 96);
												phi213 = phi253;
												phi232 = phi254;
												uint32_t phi_in306 = phi215;
												phi234 = phi255;
												phi216 = phi_in177;
												phi_in217 = phi_in296;
												phi219 = *anon297;
												phi220 = phi299;
												phi_in221 = phi_in300;
												phi222 = phi_in243;
												phi_in126 = phi_in301;
												phi223 = phi_in302;
												phi146 = phi_in205;
												phi225 = phi_in185;
												phi_in226 = phi_in206;
												phi227 = phi_in247;
												phi228 = phi_in207;
												phi_in229 = phi_in303;
												phi_in190 = phi_in209;
												phi230 = phi_in210;
												phi_in133 = *(uint64_t*)(phi_in241 + 80);
												phi212 = phi_in304;
												phi231 = phi305;
												phi233 = phi_in306;
												phi235 = phi_in241;
												phi236 = phi256;
												if (*(uint32_t*)(phi_in241 + 64) < *anon297)
												{
													phi_in177 = phi_in177;
													uint32_t phi307 = phi218;
													phi_in185 = *anon297;
													uint32_t phi308 = phi_in300;
													uint32_t phi309 = phi_in301;
													phi_in302 = phi_in302;
													uint32_t phi310 = phi_in206;
													phi_in229 = phi_in303;
													*(uint64_t*)(phi_in311 + 80) = *(uint64_t*)(phi_in241 + 80);
													phi212 = phi_in304;
													*(uint64_t*)(phi_in311 + 104) = phi213;
													uint64_t phi_in311 = phi_in241;
													int64_t anon313 = anon298 * 12;
													int64_t anon312 = (__sext int64_t)*(uint32_t*)(anon313 + 6301636);
													if (*anon297 < *(uint32_t*)((anon312 << 2) + 6300992))
													{
														*(uint32_t*)(phi_in241 + 112) = *anon297;
														*(uint64_t*)(phi_in241 + 104) = phi213;
														*(uint64_t*)(phi_in241 + 96) = phi305;
														*(uint32_t*)(phi_in241 + 88) = phi_in296;
														uint64_t anon314 = (__zext uint64_t)*(uint32_t*)(phi_in241 + 120);
														w(4197948, anon11, anon312, anon314, anon314);
														phi_in177 = *(uint32_t*)(arg1 - 104);
														phi_in296 = *(uint32_t*)(arg1 - 104);
														phi307 = *(uint32_t*)(arg1 - 104);
														phi_in185 = *(uint32_t*)(arg1 - 80);
														phi299 = *(uint32_t*)(arg1 - 104);
														phi308 = *(uint32_t*)(arg1 - 104);
														phi309 = *(uint32_t*)(arg1 - 104);
														phi_in302 = *(uint32_t*)(arg1 - 104);
														phi310 = *(uint32_t*)(arg1 - 104);
														phi_in229 = *(uint32_t*)(arg1 - 104);
														*(uint64_t*)(phi_in311 + 80) = *(uint64_t*)(arg1 - 112);
														phi212 = *(uint32_t*)(arg1 - 104);
														phi305 = *(uint64_t*)(arg1 - 96);
														*(uint64_t*)(phi_in311 + 104) = *(uint64_t*)(arg1 - 88);
														phi_in311 = anon11;
														phi256 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
													}
													*(uint32_t*)(phi_in311 + 88) = phi_in177;
													phi218 = phi307;
													phi_in247 = phi_in185;
													phi220 = phi299;
													phi_in300 = phi308;
													phi_in126 = phi309;
													phi_in226 = phi310;
													phi_in133 = *(uint64_t*)(phi_in311 + 80);
													*(uint64_t*)(phi_in311 + 96) = phi305;
													phi213 = *(uint64_t*)(phi_in311 + 104);
													uint64_t phi_in315 = phi256;
													phi216 = *(uint32_t*)(phi_in311 + 88);
													phi_in217 = phi_in296;
													phi219 = phi_in247;
													phi_in221 = phi_in300;
													phi222 = phi_in247;
													phi223 = phi_in302;
													phi224 = phi_in247;
													phi146 = phi_in247;
													phi225 = phi_in247;
													phi227 = phi_in247;
													phi228 = phi_in247;
													phi_in190 = phi_in247;
													phi230 = phi_in247;
													phi231 = *(uint64_t*)(phi_in311 + 96);
													phi232 = phi_in247;
													phi233 = phi_in247;
													phi234 = phi_in247;
													phi235 = phi_in311;
													phi236 = phi_in315;
													int64_t anon316 = (__sext int64_t)*(uint32_t*)(anon313 + 6301640);
													if (phi_in247 < *(uint32_t*)((anon316 << 2) + 6300992))
													{
														*(uint32_t*)(phi_in311 + 112) = phi_in247;
														*(uint64_t*)(phi_in311 + 104) = phi213;
														*(uint64_t*)(phi_in311 + 80) = phi_in133;
														uint64_t anon317 = (__zext uint64_t)*(uint32_t*)(phi_in311 + 120);
														w(4197231, anon11, anon316, anon317, anon317);
														phi216 = alloca1.field8;
														phi_in217 = alloca1.field8;
														phi218 = alloca1.field8;
														phi219 = alloca1.field12;
														phi220 = alloca1.field8;
														phi_in221 = alloca1.field8;
														phi222 = alloca1.field12;
														phi_in126 = alloca1.field8;
														phi223 = alloca1.field8;
														phi224 = alloca1.field12;
														phi146 = alloca1.field12;
														phi225 = alloca1.field12;
														phi_in226 = alloca1.field8;
														phi227 = alloca1.field12;
														phi228 = alloca1.field12;
														phi_in229 = alloca1.field8;
														phi_in190 = alloca1.field12;
														phi230 = alloca1.field12;
														phi_in133 = alloca1.field7;
														phi212 = alloca1.field8;
														phi231 = alloca1.field10;
														phi213 = alloca1.field11;
														phi232 = alloca1.field12;
														phi233 = alloca1.field12;
														phi234 = alloca1.field12;
														phi235 = anon11;
														phi236 = (__zext uint64_t)alloca1.field8;
													}
												}
											}
											phi_in159 = phi216;
											phi161 = phi218;
											phi_in162 = phi219;
											uint32_t phi_in318 = phi220;
											phi_in143 = phi222;
											phi165 = phi223;
											phi166 = phi224;
											phi_in167 = phi225;
											uint32_t phi_in319 = phi227;
											phi_in131 = phi228;
											uint32_t phi_in320 = phi230;
											uint32_t phi_in321 = phi212;
											uint64_t phi_in322 = phi231;
											phi170 = phi213;
											phi171 = phi232;
											phi172 = phi233;
											phi98 = phi234;
											phi_in157 = phi235;
											phi_in101 = phi236;
											phi160 = phi_in217;
											phi125 = phi_in318;
											phi142 = phi_in221;
											phi163 = phi_in143;
											phi_in164 = phi_in126;
											phi147 = phi_in226;
											phi92 = phi_in319;
											phi_in93 = phi_in131;
											phi_in168 = phi_in229;
											phi113 = phi_in190;
											phi151 = phi_in320;
											phi_in79 = phi_in133;
											phi_in169 = phi_in321;
											phi_in74 = phi_in322;
											phi173 = phi_in157;
											phi176 = phi176 + 4;
											phi_in177 = phi_in159;
											phi_in178 = phi_in217;
											phi_in179 = phi161;
											phi_in180 = phi_in162;
											phi125 = phi_in318;
											phi_in181 = phi_in221;
											phi182 = phi_in143;
											phi_in144 = phi_in126;
											phi127 = phi165;
											phi183 = phi166;
											phi184 = phi146;
											phi_in185 = phi_in167;
											phi_in186 = phi_in226;
											phi_in187 = phi_in319;
											phi188 = phi_in131;
											phi_in189 = phi_in229;
											phi_in191 = phi_in320;
											phi_in152 = phi_in133;
											phi192 = phi_in321;
											phi135 = phi_in322;
											phi_in193 = phi170;
											phi_in154 = phi171;
											phi194 = phi172;
											phi_in195 = phi98;
											phi196 = phi_in157;
											phi_in197 = phi_in101;
										}
										while (phi176 != 8);
									}
									uint32_t phi_in323 = phi160;
									uint32_t phi_in324 = phi161;
									phi106 = phi142;
									phi61 = phi163;
									phi_in88 = phi165;
									phi110 = phi166;
									phi_in90 = phi146;
									phi_in67 = phi147;
									phi114 = phi151;
									phi108 = phi170;
									phi117 = phi171;
									phi118 = phi172;
									phi_in99 = phi173;
									phi41 = phi_in159;
									phi_in102 = phi_in323;
									phi103 = phi_in324;
									phi104 = phi_in162;
									phi105 = phi125;
									phi_in107 = phi_in164;
									phi109 = phi_in88;
									phi_in65 = phi_in90;
									phi_in111 = phi_in167;
									phi_in67 = phi_in67;
									phi_in112 = phi92;
									phi_in69 = phi_in93;
									phi94 = phi_in168;
									phi115 = phi_in169;
									phi_in116 = phi_in74;
									phi119 = phi_in99;
									phi_in120 = phi_in101;
									phi123 = phi123 + 4;
									phi_in82 = phi_in159;
									phi83 = phi_in323;
									phi56 = phi_in324;
									phi_in124 = phi_in162;
									phi_in85 = phi106;
									phi86 = phi61;
									phi_in126 = phi_in164;
									phi127 = phi_in88;
									phi_in128 = phi110;
									phi129 = phi_in90;
									phi_in130 = phi_in167;
									phi91 = phi_in67;
									phi_in131 = phi_in93;
									phi_in132 = phi_in168;
									phi_in95 = phi113;
									phi96 = phi114;
									phi_in133 = phi_in79;
									phi134 = phi_in169;
									phi135 = phi_in74;
									phi_in136 = phi108;
									phi137 = phi117;
									phi76 = phi118;
									phi77 = phi98;
									phi138 = phi_in99;
									phi139 = phi_in101;
								}
								while (phi123 != 8);
							}
							uint32_t phi_in325 = phi105;
							phi326 = phi106;
							phi327 = phi_in79;
							uint32_t phi_in328 = phi109;
							uint32_t phi_in329 = phi94;
							phi330 = phi115;
							uint64_t phi_in331 = phi119;
							phi_in26 = phi_in102;
							phi_in28 = phi_in325;
							phi332 = phi_in107;
							phi333 = phi_in116;
							phi_in36 = phi_in328;
							phi334 = phi_in67;
							phi335 = phi_in329;
							phi_in336 = phi_in331;
							phi_in337 = phi_in120;
							if (phi327 != 8)
							{
								phi54 = phi41;
								phi55 = phi_in102;
								phi56 = phi103;
								phi_in57 = phi104;
								phi59 = phi_in325;
								phi60 = phi326;
								phi61 = phi61;
								phi62 = phi_in107;
								phi63 = phi_in328;
								phi64 = phi110;
								phi_in66 = phi_in111;
								phi_in68 = phi_in112;
								phi70 = phi_in329;
								phi71 = phi113;
								phi_in72 = phi114;
								phi73 = phi330;
								phi_in74 = phi_in116;
								phi_in75 = phi117;
								phi76 = phi118;
								phi77 = phi98;
								phi_in78 = phi_in331;
								phi_in79 = phi327 + 4;
								phi80 = phi108;
								phi81 = phi_in120;
							}
						}
						while (phi327 != 8);
					}
					else 
					{
						phi41 = phi41;
						phi_in26 = phi42;
						phi103 = phi43;
						phi_in28 = phi44;
						phi326 = phi45;
						phi332 = phi46;
						phi333 = phi51;
						phi_in36 = phi47;
						phi334 = phi37;
						phi335 = phi48;
						phi330 = phi49;
						phi_in336 = phi35;
						phi_in337 = phi38 & 0xffffffff;
					}
					phi43 = phi103;
					phi45 = phi326;
					phi46 = phi332;
					phi51 = phi333;
					phi37 = phi334;
					phi48 = phi335;
					phi49 = phi330;
					phi338 = phi41;
					phi_in26 = phi_in26;
					phi339 = phi43;
					phi_in12 = phi_in28;
					phi340 = phi45;
					phi341 = phi46;
					phi342 = *(uint64_t*)(phi_in336 + 72);
					phi31 = phi_in36;
					phi343 = phi37;
					phi344 = phi48;
					phi345 = phi49;
					phi346 = phi_in337;
					phi347 = phi_in336;
				}
				else 
				{
					phi338 = phi_in25;
					phi339 = phi_in27;
					phi_in12 = phi_in28;
					phi340 = phi_in29;
					phi341 = phi_in30;
					phi342 = *(uint64_t*)(phi35 + 72);
					phi31 = phi_in36;
					phi343 = phi37;
					phi344 = phi_in33;
					phi345 = phi_in22;
					phi346 = phi38 & 0xffffffff;
					phi347 = phi35;
				}
				phi_in25 = phi338;
				phi_in27 = phi339;
				phi_in29 = phi340;
				phi_in30 = phi341;
				phi32 = phi343;
				phi_in33 = phi344;
				phi_in22 = phi345;
				phi34 = phi346;
				phi13 = phi347;
				phi348 = *(uint32_t*)(phi13 + 68);
				phi17 = phi_in30;
				phi349 = *(uint64_t*)(phi13 + 56);
				phi350 = (__zext uint64_t)phi_in30;
				phi351 = *(uint32_t*)(phi13 + 68);
				phi_in12 = phi_in30;
				phi352 = *(uint32_t*)(phi13 + 68);
				phi353 = phi13;
			}
			else 
			{
				phi348 = phi_in20;
				phi17 = phi_in21;
				phi349 = *(uint64_t*)(phi13 + 56);
				phi350 = phi18 & 0xffffffff;
				phi351 = *(uint32_t*)(phi13 + 68);
				phi_in12 = phi_in22;
				phi352 = phi19;
				phi353 = phi13;
			}
			phi16 = phi348;
			phi18 = phi350;
			*(uint32_t*)(phi13 + 68) = phi351;
			phi19 = phi352;
			phi10 = phi353;
			phi354 = *(uint64_t*)(phi10 + 48);
			phi4 = phi17;
			phi5 = phi16;
			phi7 = (__zext uint64_t)phi17;
			phi8 = phi16;
			phi355 = phi17;
			phi356 = phi10;
		}
		else 
		{
			phi354 = *(uint64_t*)(phi10 + 48);
			phi4 = phi_in12;
			phi5 = *(uint32_t*)(phi13 + 68);
			phi7 = phi7 & 0xffffffff;
			phi8 = *anon14;
			phi355 = phi9;
			phi356 = phi10;
		}
		if (phi354 != 8)
		{
			phi9 = phi355;
			*(uint64_t*)(phi10 + 48) = phi354 + 4;
			phi10 = phi356;
		}
		*(uint64_t*)(phi13 + 56) = phi349 + 4;
		phi_in28 = phi_in12;
		*(uint64_t*)(phi35 + 72) = phi342 + 4;
		phi42 = phi_in26;
		phi44 = phi_in28;
		phi47 = phi_in36;
		phi35 = phi_in336;
		phi50 = phi50 + 4;
		phi38 = phi_in337;
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
			uint32_t anon20 = (uint32_t)phi13 - 1;
			phi13 = (__zext uint64_t)anon20;
		}
		break;
		uint32_t anon21 = (uint32_t)phi2 - 1;
		phi2 = (__zext uint64_t)anon21;
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
		uint32_t anon37;
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
			uint32_t phi_in12;
			uint32_t phi13;
			uint32_t phi14;
			uint32_t* anon15;
			uint32_t phi_in16;
			uint32_t phi17;
			uint32_t phi19;
			uint32_t phi20;
			uint64_t phi9 = phi_in8;
			uint32_t* anon10 = (uint32_t*)(phi9 + 4);
			if (*anon10 < *phi7)
			{
				*phi7 = *anon10;
				*anon10 = *phi7;
				phi11 = *phi7;
				phi_in12 = *phi7;
				phi13 = *anon10;
				phi14 = *anon10;
				anon15 = (uint32_t*)(phi9 - 4);
				*phi7 = *anon15;
			}
			else 
			{
				phi_in16 = *anon15;
				if (*phi7 < *anon15)
				{
					phi11 = *anon10 & 0xf;
					phi_in12 = *anon10;
					phi13 = *phi7 & 0xf;
					phi14 = *phi7;
					*phi7 = *anon15 & 0xf;
				}
			}
			if (*anon10 >= *phi7 && *phi7 < *anon15 || *anon10 < *phi7 && *anon10 < *anon15)
			{
				phi17 = phi11;
				uint32_t phi_in18 = phi13;
				*anon15 = phi14;
				phi_in16 = phi_in18;
				phi19 = *anon15;
				phi20 = phi_in12;
			}
			if (*anon10 < *phi7)
			{
				if (*anon10 >= *anon15)
				{
					phi_in16 = *anon15 & 0xf;
					phi17 = *phi7;
					phi19 = *anon10;
					phi20 = *phi7;
				}
			}
			if (*anon10 >= *phi7 && *phi7 < *anon15 || *anon10 < *phi7 && *anon10 < *anon15 || *anon10 < *phi7 && *anon10 >= *anon15)
			{
				*phi7 = phi17;
				*anon10 = phi19;
				if (phi20 - *anon10 <= 4294967295)
				{
					phi_in16 = *(uint32_t*)((phi9 & 0xc) - 4);
				}
			}
			uint32_t phi21 = phi_in16;
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
			uint32_t phi_in28;
			uint32_t phi29;
			uint32_t phi30;
			uint32_t phi31;
			uint32_t* anon32;
			uint32_t phi_in33;
			uint32_t phi34;
			uint32_t phi35;
			uint32_t* anon25 = (uint32_t*)(phi22 + 4);
			uint32_t* anon26 = (uint32_t*)phi22;
			if (*anon25 < *anon26)
			{
				*anon26 = *anon25;
				*anon25 = *anon26;
				phi27 = *anon26;
				phi_in28 = *anon26;
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
					phi_in28 = *anon25;
					phi29 = *anon26 & 0xf;
					phi30 = *anon26;
					phi31 = *anon32 & 0xf;
				}
			}
			if (*anon25 >= *anon26 && *anon26 < *anon32 || *anon25 < *anon26 && *anon25 < *anon32)
			{
				phi34 = phi29;
				*anon32 = phi30;
				*anon26 = phi31;
				*anon25 = *anon32;
				phi35 = phi_in28;
			}
			if (*anon25 < *anon26)
			{
				if (*anon25 >= *anon32)
				{
					phi34 = *anon32 & 0xf;
					phi27 = *anon26;
					*anon25 = *anon25;
					phi35 = *anon26;
				}
			}
			if (*anon25 >= *anon26 && *anon26 < *anon32 || *anon25 < *anon26 && *anon25 < *anon32 || *anon25 < *anon26 && *anon25 >= *anon32)
			{
				phi_in33 = phi34;
				*anon26 = phi27;
				if (phi35 - *anon25 <= 4294967295)
				{
					phi_in33 = *(uint32_t*)((phi22 & 0xf) - 4);
				}
			}
			uint32_t phi36 = phi_in33;
			anon37 = phi36 + 1 & 0xff;
			if (anon37 != 0)
			{
				phi22 = phi22 + 12;
			}
		}
		while (anon37 != 0);
	}
}
void q(uint64_t arg0, uint64_t arg1)
{
	struct { uint8_t field0[56]; uint64_t field1; } alloca1;
	uint64_t phi_in4;
	uint32_t phi5;
	uint32_t* anon6;
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
		phi_in4 = arg1 & 0xffffffff;
		phi5 = 0;
		anon6 = (uint32_t*)0x602490;
		*anon6 = *anon6 + phi5;
		struct _IO_FILE** anon9 = (struct _IO_FILE**)0x602480;
		uint32_t anon8 = _IO_getc(*anon9);
		uint8_t anon7 = (uint8_t)anon8;
		if (anon7 == 10)
		{
			dispatch2 = 1;
		}
		uint32_t anon10 = *anon3 >> 31 | (__zext uint32_t)(*anon3 == 0);
		if (anon7 != 10 || anon10 != 0 && anon7 == 10)
		{
			anon11 = __ctype_b_loc();
			dispatch12 = 0;
		}
		uint64_t* anon13 = (uint64_t*)anon11;
		if ((*(uint8_t*)(*anon13 + ((__sext int64_t)anon7 << 1 | 1)) & 8) != 0)
		{
			if (anon7 != 10 || anon10 != 0 && anon7 == 10)
			{
				uint32_t anon14 = _IO_getc(*anon9);
				uint32_t anon16 = (anon8 << 24 >> 24) - 48;
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
			*anon6 = *anon3 * 100 + *anon6 + 500;
			anon19 = (uint8_t*)0x401cf1;
			printf(anon19);
			exit(0);
		}
		uint64_t anon20 = random();
		dispatch2 = 2;
		if (dispatch2 == 2)
		{
			puts((uint8_t*)0x401dd0);
			*anon6 = *anon6 - 100;
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
			*anon6 = *anon6 - 100;
			phi18 = phi_in4;
		}
		if (*(uint32_t*)(((__sext int64_t)phi15 << 2) + 6300992) != 0 || (uint32_t)anon20 + ((uint32_t)((anon20 & 0xffffffff) / 3) - (uint32_t)(anon20 << 32 >> 32 >> 31)) * 4294967293 != 1)
		{
			phi_in4 = phi18;
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
			*anon6 = *anon6 - 50;
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
