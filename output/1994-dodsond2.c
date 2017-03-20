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
	uint64_t anon5 = anon2.rax;
	*(uint64_t*)anon3 = anon5;
	uint64_t anon6 = anon4 - 16;
	*(uint64_t*)anon6 = anon3;
	uint64_t anon7 = anon2.rdx;
	__libc_start_main((uint32_t(*)(uint32_t, uint8_t**, uint8_t**))0x400660, (uint32_t)arg0, (uint8_t**)anon1, (void(*)())0x401c10, (void(*)())0x401c80, (void(*)())anon7, *(uint8_t**)anon6);
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
		uint32_t phi_in6;
		uint32_t phi7;
		uint32_t* anon8;
		uint32_t phi9;
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
			*phi1 = *phi1;
			phi9 = *anon4;
		}
		else 
		{
			phi5 = *anon4;
			phi_in6 = *phi1;
			phi10 = *anon8;
		}
		if (*anon4 < *phi1 && *anon4 < *anon8 || *anon4 >= *phi1 && *phi1 < *anon8)
		{
			uint32_t phi_in11 = phi5;
			*phi1 = *anon8;
			*anon8 = phi_in6;
			phi7 = phi_in6;
			*phi1 = phi_in11;
			phi9 = *anon8;
		}
		if (*anon4 < *phi1 && *anon4 < *anon8 || *anon4 >= *phi1 && *phi1 < *anon8 || *anon4 >= *anon8 && *anon4 < *phi1)
		{
			uint32_t phi_in12 = phi7;
			*anon4 = phi9;
			phi10 = phi_in12;
			if (*anon4 > *phi1)
			{
				phi10 = *anon8;
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
	int64_t anon9 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi10 + 48) + *(uint64_t*)(phi10 + 8) + 6301632);
	uint32_t* anon8 = (uint32_t*)((anon9 << 2) + 6300992);
	*anon8 = anon6;
	uint32_t phi11 = anon3;
	uint64_t phi12 = 0;
	uint64_t anon13 = (uint64_t)&alloca1;
	phi10 = anon13;
	while (true)
	{
		uint32_t phi19;
		uint64_t phi20;
		uint32_t phi26;
		uint64_t phi33;
		uint64_t phi34;
		uint32_t phi37;
		uint64_t phi47;
		uint32_t phi_in308;
		uint32_t phi_in313;
		uint64_t phi314;
		uint64_t phi_in318;
		uint64_t phi321;
		uint32_t phi_in322;
		uint64_t phi325;
		uint32_t phi326;
		uint32_t phi327;
		uint64_t phi328;
		uint32_t phi14 = phi4;
		uint32_t phi15 = phi5;
		*(uint64_t*)(phi10 + 48) = phi12;
		if (phi11 < *anon8)
		{
			uint32_t phi319;
			uint32_t phi320;
			uint32_t phi323;
			uint64_t phi324;
			*(uint64_t*)(phi10 + 16) = anon9 * 12;
			*(uint32_t*)(phi10 + 40) = (uint32_t)phi7 + 5;
			uint32_t phi16 = phi15;
			uint64_t phi17 = (__zext uint64_t)phi14;
			*(uint32_t*)(phi18 + 68) = phi15;
			phi19 = phi14;
			phi20 = 0;
			uint64_t phi18 = phi10;
			*(uint64_t*)(phi18 + 56) = phi20;
			int64_t anon22 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi18 + 56) + *(uint64_t*)(phi18 + 16) + 6301632);
			uint32_t* anon21 = (uint32_t*)((anon22 << 2) + 6300992);
			if (phi15 < *anon21)
			{
				uint32_t phi311;
				uint32_t phi312;
				uint32_t phi315;
				uint32_t phi316;
				uint64_t phi317;
				*anon21 = *(uint32_t*)(phi18 + 4);
				*(uint64_t*)(phi18 + 32) = anon22 * 12;
				*(uint32_t*)(phi18 + 44) = (uint32_t)phi17 + 6;
				uint32_t phi23 = phi19;
				uint32_t phi24 = phi19;
				uint32_t phi25 = phi19;
				phi26 = phi19;
				uint32_t phi27 = phi19;
				uint32_t phi28 = phi19;
				uint32_t phi29 = phi19;
				uint32_t phi30 = phi19;
				uint32_t phi31 = phi19;
				uint64_t phi32 = (__zext uint64_t)phi19;
				phi33 = 0;
				phi34 = phi18;
				uint32_t phi35 = phi19;
				uint32_t phi36 = phi25;
				phi37 = phi26;
				uint32_t phi38 = phi28;
				uint32_t phi39 = phi31;
				uint64_t phi40 = phi32;
				*(uint64_t*)(phi34 + 72) = phi33;
				int64_t anon42 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi34 + 72) + *(uint64_t*)(phi34 + 32) + 6301632);
				uint32_t* anon41 = (uint32_t*)((anon42 << 2) + 6300992);
				if (*(uint32_t*)(phi34 + 4) < *anon41)
				{
					uint64_t phi109;
					uint32_t phi301;
					uint32_t phi303;
					uint32_t phi304;
					uint64_t phi305;
					uint32_t phi306;
					uint32_t phi307;
					uint64_t phi309;
					uint32_t phi310;
					*anon41 = *(uint32_t*)(phi34 + 24);
					*(uint32_t*)(phi34 + 64) = (uint32_t)phi40 + 7;
					uint32_t phi43 = phi24;
					uint32_t phi44 = phi27;
					uint32_t phi45 = phi29;
					uint32_t phi46 = phi30;
					phi47 = 0;
					uint64_t phi48 = anon42 * 12;
					int64_t anon50 = (__sext int64_t)*(uint32_t*)(phi47 + phi48 + 6301632);
					uint32_t* anon49 = (uint32_t*)((anon50 << 2) + 6300992);
					if (*(uint32_t*)(phi34 + 24) < *anon49)
					{
						uint32_t phi_in54;
						uint64_t phi302;
						*anon49 = *(uint32_t*)(phi34 + 28);
						uint32_t phi51 = phi23;
						uint32_t phi52 = phi35;
						uint32_t phi53 = phi43;
						uint32_t anon55 = (uint32_t)phi40 + 8;
						phi_in54 = anon55;
						uint32_t phi_in56 = phi36;
						uint32_t phi57 = phi37;
						uint32_t phi_in58 = anon55;
						uint32_t phi59 = phi44;
						uint32_t phi60 = phi38;
						uint32_t phi61 = anon55;
						uint32_t phi_in62 = anon55;
						uint32_t phi63 = anon55;
						uint32_t phi64 = phi45;
						uint32_t phi65 = anon55;
						uint32_t phi66 = anon55;
						uint32_t phi_in67 = phi46;
						uint32_t phi68 = anon55;
						uint32_t phi69 = anon55;
						uint32_t phi70 = phi39;
						uint64_t phi71 = phi48;
						uint32_t phi72 = anon55;
						uint32_t phi73 = anon55;
						uint32_t phi_in74 = anon55;
						uint64_t phi75 = phi34;
						uint64_t phi76 = 0;
						uint64_t phi77 = anon50 * 12;
						uint64_t phi78 = phi40;
						do
						{
							uint32_t phi_in79 = phi52;
							uint32_t phi80 = phi53;
							uint32_t phi81 = phi57;
							uint32_t phi_in82 = phi_in58;
							uint32_t phi83 = phi59;
							uint32_t phi_in84 = phi60;
							uint32_t phi85 = phi_in62;
							uint32_t phi86 = phi64;
							uint32_t phi87 = phi65;
							uint32_t phi88 = phi66;
							uint32_t phi89 = phi70;
							uint64_t phi_in90 = phi71;
							uint32_t phi_in91 = phi72;
							uint32_t phi92 = phi73;
							uint64_t phi_in93 = phi76;
							uint32_t phi94 = phi51;
							uint32_t phi95 = phi_in79;
							uint32_t phi96 = phi80;
							uint32_t phi97 = phi_in54;
							uint32_t phi98 = phi81;
							uint64_t phi99 = phi77;
							uint32_t phi100 = phi_in84;
							uint32_t phi_in101 = phi61;
							uint32_t phi102 = phi63;
							phi64 = phi86;
							phi66 = phi88;
							uint32_t phi_in103 = phi_in67;
							uint32_t phi104 = phi69;
							uint32_t phi105 = phi89;
							uint64_t phi106 = phi_in90;
							uint32_t phi107 = phi_in91;
							uint32_t phi108 = phi92;
							phi109 = phi78;
							int64_t anon111 = (__sext int64_t)*(uint32_t*)(phi_in93 + phi77 + 6301632);
							uint32_t* anon110 = (uint32_t*)((anon111 << 2) + 6300992);
							if (*(uint32_t*)(phi75 + 28) < *anon110)
							{
								uint64_t phi129;
								*anon110 = *(uint32_t*)(phi75 + 40);
								*(uint32_t*)(phi75 + 120) = (uint32_t)phi78 + 9;
								uint64_t phi_in112 = 0;
								uint32_t phi_in113 = phi_in79;
								uint32_t phi_in114 = phi_in54;
								uint32_t phi115 = phi_in56;
								uint32_t phi116 = phi_in82;
								uint32_t phi117 = phi83;
								uint32_t phi118 = phi85;
								uint32_t phi119 = phi87;
								uint32_t phi_in120 = phi_in67;
								uint32_t phi121 = phi68;
								uint64_t phi122 = phi_in93;
								uint64_t phi_in123 = phi_in90;
								uint64_t phi_in124 = phi77;
								uint32_t phi125 = phi_in91;
								uint32_t phi_in126 = phi_in74;
								uint64_t phi127 = phi75;
								uint64_t phi128 = phi78 & 0xffffffff;
								do
								{
									phi129 = phi_in112;
									uint32_t phi130 = phi51;
									uint32_t phi131 = phi80;
									uint32_t phi132 = phi_in114;
									uint32_t phi133 = phi115;
									uint32_t phi134 = phi81;
									uint32_t phi135 = phi116;
									phi83 = phi117;
									uint32_t phi_in136 = phi61;
									uint32_t phi137 = phi118;
									uint32_t phi138 = phi63;
									uint32_t phi139 = phi86;
									uint32_t phi140 = phi119;
									uint32_t phi_in141 = phi88;
									uint32_t phi142 = phi121;
									uint32_t phi143 = phi69;
									uint64_t phi144 = phi122;
									uint32_t phi_in145 = phi89;
									uint32_t phi_in146 = phi125;
									uint32_t phi_in147 = phi92;
									uint64_t phi148 = phi127;
									uint32_t phi149 = phi130;
									uint32_t phi150 = phi_in113;
									phi80 = phi131;
									phi_in56 = phi133;
									uint32_t phi151 = phi134;
									uint32_t phi152 = phi135;
									uint32_t phi_in153 = phi_in84;
									phi61 = phi_in136;
									uint32_t phi154 = phi137;
									uint32_t phi155 = phi139;
									phi87 = phi140;
									phi88 = phi_in141;
									uint32_t phi156 = phi_in120;
									phi121 = phi142;
									phi69 = phi143;
									phi_in93 = phi144;
									uint32_t phi157 = phi_in145;
									phi106 = phi_in123;
									uint64_t phi158 = phi_in124;
									phi125 = phi_in146;
									phi92 = phi_in147;
									uint32_t phi159 = phi_in126;
									phi75 = phi148;
									uint64_t phi160 = phi128;
									int64_t anon162 = (__sext int64_t)*(uint32_t*)(phi129 + anon111 * 12 + 6301632);
									uint32_t* anon161 = (uint32_t*)((anon162 << 2) + 6300992);
									if (*(uint32_t*)(phi148 + 40) < *anon161)
									{
										uint64_t phi167;
										uint64_t phi176;
										*anon161 = *(uint32_t*)(phi148 + 44);
										uint64_t phi_in163 = 0;
										uint32_t phi_in164 = phi_in113;
										uint32_t phi165 = phi132;
										uint32_t phi166 = phi83;
										*(uint32_t*)(phi167 + 96) = phi_in84;
										uint32_t phi168 = phi_in136;
										uint32_t phi169 = phi138;
										uint32_t phi_in170 = phi_in141;
										uint32_t phi_in171 = phi_in145;
										*(uint64_t*)(phi167 + 104) = phi_in123;
										uint64_t phi172 = phi_in124;
										uint32_t phi173 = phi_in146;
										uint32_t phi174 = phi_in147;
										uint32_t phi_in175 = phi_in126;
										do
										{
											phi176 = phi_in163;
											uint32_t phi177 = phi130;
											uint32_t phi178 = phi_in164;
											uint32_t phi_in179 = phi131;
											uint32_t phi180 = phi133;
											uint32_t phi181 = phi135;
											uint32_t phi182 = phi166;
											*(uint32_t*)(phi167 + 124) = phi168;
											int64_t anon186 = (__sext int64_t)*(uint32_t*)(phi176 + anon162 * 12 + 6301632);
											int64_t anon185 = anon186 * 12;
											int64_t anon184 = (__sext int64_t)*(uint32_t*)(anon185 + 6301636);
											uint32_t* anon183 = (uint32_t*)((anon184 << 2) + 6300992);
											*anon183 = phi169;
											uint32_t phi_in187 = phi139;
											uint32_t phi188 = phi140;
											uint32_t phi189 = phi_in120;
											uint32_t phi_in190 = phi142;
											uint32_t phi_in191 = phi143;
											*(uint64_t*)(phi167 + 88) = phi144;
											uint32_t phi192 = phi_in171;
											uint64_t phi193 = *(uint64_t*)(phi167 + 104);
											*(uint64_t*)(phi167 + 112) = phi172;
											uint32_t phi_in194 = phi173;
											uint32_t phi_in195 = phi174;
											phi167 = phi148;
											uint64_t phi196 = phi128;
											uint32_t phi197 = phi177;
											phi_in113 = phi178;
											phi131 = phi_in179;
											phi_in114 = phi165;
											uint32_t phi198 = phi180;
											uint32_t phi199 = phi134;
											uint32_t phi_in200 = phi181;
											uint32_t phi201 = phi182;
											phi_in136 = *(uint32_t*)(phi167 + 124);
											uint32_t phi202 = phi137;
											uint32_t phi203 = *anon183;
											uint32_t phi204 = phi_in187;
											uint32_t phi205 = phi188;
											uint32_t phi206 = phi_in170;
											uint32_t phi207 = phi189;
											uint32_t phi208 = phi_in190;
											phi143 = phi_in191;
											uint64_t phi209 = *(uint64_t*)(phi167 + 88);
											*(uint64_t*)(phi167 + 104) = phi193;
											phi172 = *(uint64_t*)(phi167 + 112);
											uint32_t phi210 = phi_in194;
											phi_in147 = phi_in195;
											uint32_t phi211 = phi_in175;
											uint64_t phi212 = phi167;
											uint64_t phi213 = phi196;
											uint32_t* anon214 = (uint32_t*)((anon186 << 2) + 6300992);
											if (*(uint32_t*)(phi167 + 44) < *anon214)
											{
												*anon214 = *(uint32_t*)(phi167 + 64);
												uint32_t phi215 = phi177;
												uint32_t phi216 = phi_in179;
												*(uint32_t*)(phi217 + 112) = phi165;
												uint64_t phi218 = phi167;
												uint32_t phi219 = phi180;
												uint32_t phi_in220 = phi134;
												uint32_t phi_in221 = phi181;
												uint32_t phi222 = phi182;
												uint32_t phi223 = *(uint32_t*)(phi167 + 96);
												uint32_t phi224 = *(uint32_t*)(phi167 + 124);
												uint32_t phi_in225 = phi137;
												uint32_t phi_in226 = *anon183;
												uint32_t phi_in227 = phi_in187;
												uint32_t phi228 = phi_in170;
												uint32_t phi_in229 = phi_in190;
												uint32_t phi230 = phi_in191;
												uint64_t phi231 = *(uint64_t*)(phi167 + 88);
												uint32_t phi232 = phi192;
												uint64_t phi233 = phi193;
												uint64_t phi234 = *(uint64_t*)(phi167 + 112);
												uint32_t phi235 = phi_in195;
												uint32_t phi236 = phi_in175;
												uint64_t phi237 = phi196;
												if (*(uint32_t*)(phi167 + 64) < *anon183)
												{
													uint32_t phi238 = phi178;
													uint32_t phi_in239 = phi_in179;
													uint64_t phi240 = anon184;
													uint32_t phi241 = *(uint32_t*)(phi167 + 96);
													uint32_t phi_in242 = phi_in187;
													uint32_t phi243 = phi189;
													uint64_t phi244 = *(uint64_t*)(phi167 + 88);
													uint32_t phi245 = phi192;
													uint64_t phi246 = *(uint64_t*)(phi167 + 112);
													if (phi137 < *anon183)
													{
														*(uint64_t*)(phi167 + 104) = phi193;
														*(uint64_t*)(phi167 + 80) = anon184;
														uint64_t anon247 = (__zext uint64_t)*anon183;
														w(4197873, anon13, (__sext int64_t)*anon183, anon247, anon247);
														phi177 = *(uint32_t*)(arg1 - 96);
														phi238 = *(uint32_t*)(arg1 - 96);
														phi_in239 = *(uint32_t*)(arg1 - 96);
														phi165 = *(uint32_t*)(arg1 - 68);
														phi180 = *(uint32_t*)(arg1 - 96);
														phi134 = *(uint32_t*)(arg1 - 96);
														phi167 = anon13;
														phi181 = *(uint32_t*)(arg1 - 68);
														phi182 = *(uint32_t*)(arg1 - 96);
														phi240 = *(uint64_t*)(arg1 - 112);
														phi241 = *(uint32_t*)(arg1 - 96);
														phi_in242 = *(uint32_t*)(arg1 - 96);
														phi243 = *(uint32_t*)(arg1 - 96);
														phi244 = *(uint64_t*)(arg1 - 104);
														phi245 = *(uint32_t*)(arg1 - 96);
														phi193 = *(uint64_t*)(arg1 - 88);
														phi246 = *(uint64_t*)(arg1 - 80);
														phi196 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
													}
													uint32_t phi248 = phi177;
													uint32_t phi_in249 = phi165;
													uint32_t phi250 = phi180;
													*(uint32_t*)(phi251 + 96) = phi134;
													uint64_t phi251 = phi167;
													*(uint32_t*)(phi251 + 124) = phi181;
													uint32_t phi252 = phi182;
													*(uint64_t*)(phi251 + 80) = phi240;
													uint32_t phi253 = phi243;
													*(uint64_t*)(phi251 + 88) = phi244;
													uint32_t phi_in254 = phi245;
													*(uint64_t*)(phi251 + 104) = phi193;
													*(uint64_t*)(phi251 + 112) = phi246;
													uint64_t phi_in255 = phi196;
													uint32_t phi256 = phi_in239;
													uint32_t phi257 = phi_in249;
													uint32_t phi_in258 = *(uint32_t*)(phi251 + 96);
													uint32_t phi259 = *(uint32_t*)(phi251 + 124);
													uint64_t phi260 = *(uint64_t*)(phi251 + 80);
													uint32_t phi261 = phi_in242;
													uint64_t phi262 = *(uint64_t*)(phi251 + 88);
													uint32_t phi263 = phi_in254;
													*(uint64_t*)(phi251 + 96) = *(uint64_t*)(phi251 + 104);
													uint64_t phi264 = *(uint64_t*)(phi251 + 112);
													uint64_t phi_in265 = phi_in255;
													int64_t anon266 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi251 + 80) * 12 + 6301636);
													if (*(uint32_t*)(phi251 + 124) < *(uint32_t*)((anon266 << 2) + 6300992))
													{
														uint64_t anon267 = (__zext uint64_t)*(uint32_t*)(phi251 + 120);
														w(4197793, anon13, anon266, anon267, anon267);
														phi248 = *(uint32_t*)(arg1 - 96);
														phi238 = *(uint32_t*)(arg1 - 96);
														phi256 = *(uint32_t*)(arg1 - 96);
														phi257 = alloca1.field14;
														phi250 = *(uint32_t*)(arg1 - 96);
														phi251 = anon13;
														phi_in258 = *(uint32_t*)(arg1 - 96);
														phi259 = alloca1.field14;
														phi252 = *(uint32_t*)(arg1 - 96);
														phi260 = *(uint64_t*)(arg1 - 112);
														phi241 = *(uint32_t*)(arg1 - 96);
														phi261 = *(uint32_t*)(arg1 - 96);
														phi253 = *(uint32_t*)(arg1 - 96);
														phi262 = *(uint64_t*)(arg1 - 104);
														phi263 = *(uint32_t*)(arg1 - 96);
														*(uint64_t*)(phi251 + 96) = *(uint64_t*)(arg1 - 88);
														phi264 = *(uint64_t*)(arg1 - 80);
														phi_in265 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
													}
													uint32_t phi_in268 = phi248;
													phi178 = phi238;
													uint32_t phi_in269 = phi256;
													*(uint32_t*)(phi217 + 112) = phi257;
													*(uint32_t*)(phi251 + 88) = phi250;
													phi_in221 = phi259;
													uint32_t phi_in270 = phi252;
													phi223 = phi241;
													phi_in227 = phi261;
													phi189 = phi253;
													*(uint64_t*)(phi251 + 80) = phi262;
													uint32_t phi_in271 = phi263;
													*(uint64_t*)(phi251 + 104) = phi264;
													phi215 = phi_in268;
													phi216 = phi_in269;
													phi218 = phi251;
													phi219 = *(uint32_t*)(phi251 + 88);
													phi_in220 = phi_in258;
													phi222 = phi_in270;
													phi224 = phi_in221;
													phi_in225 = phi_in221;
													phi_in226 = phi_in221;
													phi188 = phi_in221;
													phi228 = phi_in221;
													phi_in229 = phi_in221;
													phi230 = phi_in221;
													phi231 = *(uint64_t*)(phi251 + 80);
													phi232 = phi_in271;
													phi233 = *(uint64_t*)(phi251 + 96);
													phi234 = *(uint64_t*)(phi251 + 104);
													phi_in194 = phi_in221;
													phi235 = phi_in221;
													phi236 = phi_in221;
													phi237 = phi_in265;
													int64_t anon272 = (__sext int64_t)*(uint32_t*)(phi260 * 12 + 6301640);
													if (phi_in221 < *(uint32_t*)((anon272 << 2) + 6300992))
													{
														*(uint32_t*)(phi251 + 112) = phi_in221;
														uint64_t anon273 = (__zext uint64_t)*(uint32_t*)(phi251 + 120);
														w(4197395, anon13, anon272, anon273, anon273);
														phi215 = *(uint32_t*)(arg1 - 104);
														phi178 = *(uint32_t*)(arg1 - 104);
														phi216 = *(uint32_t*)(arg1 - 104);
														*(uint32_t*)(phi217 + 112) = *(uint32_t*)(arg1 - 80);
														phi218 = anon13;
														phi219 = *(uint32_t*)(arg1 - 104);
														phi_in220 = *(uint32_t*)(arg1 - 104);
														phi_in221 = *(uint32_t*)(arg1 - 80);
														phi222 = *(uint32_t*)(arg1 - 104);
														phi223 = *(uint32_t*)(arg1 - 104);
														phi224 = *(uint32_t*)(arg1 - 80);
														phi_in225 = *(uint32_t*)(arg1 - 80);
														phi_in226 = *(uint32_t*)(arg1 - 80);
														phi_in227 = *(uint32_t*)(arg1 - 104);
														phi188 = *(uint32_t*)(arg1 - 80);
														phi228 = *(uint32_t*)(arg1 - 80);
														phi189 = *(uint32_t*)(arg1 - 104);
														phi_in229 = *(uint32_t*)(arg1 - 80);
														phi230 = *(uint32_t*)(arg1 - 80);
														phi231 = *(uint64_t*)(arg1 - 112);
														phi232 = *(uint32_t*)(arg1 - 104);
														phi233 = *(uint64_t*)(arg1 - 96);
														phi234 = *(uint64_t*)(arg1 - 88);
														phi_in194 = *(uint32_t*)(arg1 - 80);
														phi235 = *(uint32_t*)(arg1 - 80);
														phi236 = *(uint32_t*)(arg1 - 80);
														phi237 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
													}
												}
												uint32_t phi_in274 = phi215;
												phi_in113 = phi178;
												phi_in114 = *(uint32_t*)(phi217 + 112);
												uint64_t phi217 = phi218;
												uint32_t phi_in275 = phi219;
												phi199 = phi_in220;
												phi201 = phi222;
												uint32_t phi276 = phi223;
												uint32_t phi_in277 = phi224;
												uint32_t phi_in278 = phi188;
												phi206 = phi228;
												uint32_t phi_in279 = phi189;
												uint32_t phi_in280 = phi230;
												*(uint64_t*)(phi217 + 80) = phi231;
												uint32_t phi281 = phi232;
												*(uint64_t*)(phi217 + 96) = phi233;
												*(uint64_t*)(phi217 + 104) = phi234;
												phi_in147 = phi235;
												uint32_t phi_in282 = phi236;
												uint64_t phi283 = phi237;
												phi197 = phi_in274;
												phi131 = phi216;
												phi198 = phi_in275;
												phi_in200 = phi_in221;
												*(uint32_t*)(phi167 + 96) = phi276;
												phi_in136 = phi_in277;
												phi202 = phi_in225;
												phi203 = phi_in226;
												phi204 = phi_in227;
												phi205 = phi_in278;
												phi207 = phi_in279;
												phi208 = phi_in229;
												phi143 = phi_in280;
												phi209 = *(uint64_t*)(phi217 + 80);
												phi192 = phi281;
												*(uint64_t*)(phi167 + 104) = *(uint64_t*)(phi217 + 96);
												phi172 = *(uint64_t*)(phi217 + 104);
												phi210 = phi_in194;
												phi211 = phi_in282;
												phi212 = phi217;
												phi213 = phi283;
												int64_t anon285 = (__sext int64_t)*(uint32_t*)(anon185 + 6301640);
												uint32_t* anon284 = (uint32_t*)((anon285 << 2) + 6300992);
												if (*(uint32_t*)(phi217 + 64) < *anon284)
												{
													*anon284 = phi_in114;
													phi197 = phi_in274;
													uint32_t phi286 = phi_in113;
													uint32_t phi287 = phi_in114;
													uint32_t phi_in288 = phi_in275;
													uint32_t phi289 = phi199;
													phi222 = phi201;
													uint32_t phi290 = phi_in227;
													phi207 = phi_in279;
													uint64_t phi291 = *(uint64_t*)(phi217 + 80);
													*(uint64_t*)(phi217 + 96) = *(uint64_t*)(phi217 + 96);
													uint64_t phi292 = *(uint64_t*)(phi217 + 104);
													int64_t anon294 = anon285 * 12;
													int64_t anon293 = (__sext int64_t)*(uint32_t*)(anon294 + 6301636);
													if (phi_in114 < *(uint32_t*)((anon293 << 2) + 6300992))
													{
														*(uint32_t*)(phi217 + 112) = phi_in114;
														*(uint32_t*)(phi217 + 88) = phi_in113;
														uint64_t anon295 = (__zext uint64_t)*(uint32_t*)(phi217 + 120);
														w(4197948, anon13, anon293, anon295, anon295);
														phi197 = *(uint32_t*)(arg1 - 104);
														phi286 = *(uint32_t*)(arg1 - 104);
														phi216 = *(uint32_t*)(arg1 - 104);
														phi287 = *(uint32_t*)(arg1 - 80);
														phi_in288 = *(uint32_t*)(arg1 - 104);
														phi289 = *(uint32_t*)(arg1 - 104);
														phi222 = *(uint32_t*)(arg1 - 104);
														phi276 = *(uint32_t*)(arg1 - 104);
														phi290 = *(uint32_t*)(arg1 - 104);
														phi207 = *(uint32_t*)(arg1 - 104);
														phi291 = *(uint64_t*)(arg1 - 112);
														phi281 = *(uint32_t*)(arg1 - 104);
														*(uint64_t*)(phi217 + 96) = *(uint64_t*)(arg1 - 96);
														phi292 = *(uint64_t*)(arg1 - 88);
														phi217 = anon13;
														phi283 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
													}
													phi_in113 = phi286;
													uint32_t phi_in296 = phi216;
													phi211 = phi287;
													phi199 = phi289;
													phi201 = phi222;
													uint32_t phi_in297 = phi276;
													phi204 = phi290;
													*(uint64_t*)(phi217 + 80) = phi291;
													phi192 = phi281;
													*(uint64_t*)(phi217 + 104) = phi292;
													uint64_t phi_in298 = phi283;
													phi131 = phi_in296;
													phi_in114 = phi211;
													phi198 = phi_in288;
													phi_in200 = phi211;
													*(uint32_t*)(phi167 + 96) = phi_in297;
													phi_in136 = phi211;
													phi202 = phi211;
													phi203 = phi211;
													phi205 = phi211;
													phi206 = phi211;
													phi208 = phi211;
													phi143 = phi211;
													phi209 = *(uint64_t*)(phi217 + 80);
													*(uint64_t*)(phi167 + 104) = *(uint64_t*)(phi217 + 96);
													phi172 = *(uint64_t*)(phi217 + 104);
													phi210 = phi211;
													phi_in147 = phi211;
													phi212 = phi217;
													phi213 = phi_in298;
													int64_t anon299 = (__sext int64_t)*(uint32_t*)(anon294 + 6301640);
													if (phi211 < *(uint32_t*)((anon299 << 2) + 6300992))
													{
														*(uint32_t*)(phi217 + 112) = phi211;
														*(uint32_t*)(phi217 + 88) = phi197;
														uint64_t anon300 = (__zext uint64_t)*(uint32_t*)(phi217 + 120);
														w(4197231, anon13, anon299, anon300, anon300);
														phi197 = alloca1.field8;
														phi_in113 = alloca1.field8;
														phi131 = alloca1.field8;
														phi_in114 = alloca1.field12;
														phi198 = alloca1.field8;
														phi199 = alloca1.field8;
														phi_in200 = alloca1.field12;
														phi201 = alloca1.field8;
														*(uint32_t*)(phi167 + 96) = alloca1.field8;
														phi_in136 = alloca1.field12;
														phi202 = alloca1.field12;
														phi203 = alloca1.field12;
														phi204 = alloca1.field8;
														phi205 = alloca1.field12;
														phi206 = alloca1.field12;
														phi207 = alloca1.field8;
														phi208 = alloca1.field12;
														phi143 = alloca1.field12;
														phi209 = alloca1.field7;
														phi192 = alloca1.field8;
														*(uint64_t*)(phi167 + 104) = alloca1.field10;
														phi172 = alloca1.field11;
														phi210 = alloca1.field12;
														phi_in147 = alloca1.field12;
														phi211 = alloca1.field12;
														phi212 = anon13;
														phi213 = (__zext uint64_t)alloca1.field8;
													}
												}
											}
											phi149 = phi197;
											phi83 = phi201;
											phi138 = phi203;
											phi156 = phi207;
											phi157 = phi192;
											phi159 = phi211;
											phi75 = phi212;
											phi150 = phi_in113;
											phi80 = phi131;
											phi132 = phi_in114;
											phi_in56 = phi198;
											phi151 = phi199;
											phi152 = phi_in200;
											phi_in153 = *(uint32_t*)(phi167 + 96);
											phi61 = phi_in136;
											phi154 = phi202;
											phi155 = phi204;
											phi87 = phi205;
											phi88 = phi206;
											phi121 = phi208;
											phi69 = phi143;
											phi_in93 = phi209;
											phi106 = *(uint64_t*)(phi167 + 104);
											phi158 = phi172;
											phi125 = phi210;
											phi92 = phi_in147;
											phi160 = phi213;
											phi_in163 = phi176 + 4;
											phi130 = phi149;
											phi_in164 = phi_in113;
											phi165 = phi_in114;
											phi133 = phi198;
											phi134 = phi199;
											phi135 = phi_in200;
											phi166 = phi83;
											phi168 = phi_in136;
											phi137 = phi202;
											phi169 = phi138;
											phi139 = phi204;
											phi140 = phi205;
											phi_in170 = phi206;
											phi_in120 = phi156;
											phi142 = phi208;
											phi144 = phi209;
											phi_in171 = phi157;
											phi173 = phi210;
											phi174 = phi_in147;
											phi_in175 = phi159;
											phi148 = phi75;
											phi128 = phi213;
										}
										while (phi176 != 8);
									}
									phi94 = phi149;
									phi95 = phi150;
									phi_in82 = phi152;
									phi85 = phi154;
									phi_in103 = phi156;
									phi109 = phi160;
									phi96 = phi80;
									phi97 = phi132;
									phi98 = phi151;
									phi99 = phi158;
									phi100 = phi_in153;
									phi_in101 = phi61;
									phi102 = phi138;
									phi64 = phi155;
									phi66 = phi88;
									phi68 = phi121;
									phi104 = phi69;
									phi105 = phi157;
									phi107 = phi125;
									phi108 = phi92;
									phi_in74 = phi159;
									phi_in112 = phi129 + 4;
									phi51 = phi94;
									phi_in113 = phi95;
									phi_in114 = phi132;
									phi115 = phi_in56;
									phi81 = phi151;
									phi116 = phi_in82;
									phi117 = phi83;
									phi_in84 = phi_in153;
									phi118 = phi85;
									phi63 = phi138;
									phi86 = phi155;
									phi119 = phi87;
									phi_in120 = phi_in103;
									phi122 = phi_in93;
									phi89 = phi157;
									phi_in123 = phi106;
									phi_in124 = phi158;
									phi_in126 = phi159;
									phi127 = phi75;
									phi128 = phi109;
								}
								while (phi129 != 8);
							}
							phi301 = phi83;
							phi302 = phi_in93;
							phi303 = phi100;
							phi304 = phi105;
							phi305 = phi75;
							phi306 = phi94;
							phi307 = phi95;
							phi43 = phi96;
							phi36 = phi_in56;
							phi_in308 = phi98;
							phi309 = phi106;
							phi310 = phi64;
							phi46 = phi_in103;
							if (phi302 != 8)
							{
								phi51 = phi94;
								phi52 = phi95;
								phi53 = phi96;
								phi_in54 = phi97;
								phi57 = phi98;
								phi_in58 = phi_in82;
								phi59 = phi301;
								phi60 = phi303;
								phi61 = phi_in101;
								phi_in62 = phi85;
								phi63 = phi102;
								phi65 = phi87;
								phi_in67 = phi_in103;
								phi68 = phi68;
								phi69 = phi104;
								phi70 = phi304;
								phi71 = phi106;
								phi72 = phi107;
								phi73 = phi108;
								phi75 = phi305;
								phi76 = phi302 + 4;
								phi77 = phi99;
								phi78 = phi109;
							}
						}
						while (phi302 != 8);
					}
					else 
					{
						phi306 = phi23;
						phi307 = phi35;
						phi43 = phi43;
						phi36 = phi36;
						phi_in308 = phi37;
						phi301 = phi44;
						phi309 = phi48;
						phi303 = phi38;
						phi310 = phi45;
						phi46 = phi46;
						phi304 = phi39;
						phi305 = phi34;
						phi109 = phi40 & 0xffffffff;
					}
					phi23 = phi306;
					phi35 = phi307;
					phi44 = phi301;
					phi48 = phi309;
					phi38 = phi303;
					phi45 = phi310;
					phi39 = phi304;
					phi34 = phi305;
					phi40 = phi109;
					phi311 = phi35;
					phi312 = phi43;
					phi25 = phi36;
					phi_in313 = phi_in308;
					phi27 = phi44;
					phi314 = *(uint64_t*)(phi34 + 72);
					phi315 = phi38;
					phi29 = phi45;
					phi30 = phi46;
					phi316 = phi39;
					phi317 = phi40;
					phi_in318 = phi34;
				}
				else 
				{
					phi311 = phi35;
					phi312 = phi24;
					phi25 = phi36;
					phi_in313 = phi37;
					phi27 = phi27;
					phi314 = *(uint64_t*)(phi34 + 72);
					phi315 = phi38;
					phi29 = phi29;
					phi30 = phi30;
					phi316 = phi39;
					phi317 = phi40 & 0xffffffff;
					phi_in318 = phi34;
				}
				phi19 = phi311;
				phi24 = phi312;
				phi28 = phi315;
				phi31 = phi316;
				phi32 = phi317;
				phi319 = *(uint32_t*)(phi_in318 + 68);
				phi320 = phi27;
				phi321 = *(uint64_t*)(phi_in318 + 56);
				phi17 = (__zext uint64_t)phi27;
				*(uint32_t*)(phi18 + 68) = *(uint32_t*)(phi_in318 + 68);
				phi_in322 = phi27;
				phi323 = *(uint32_t*)(phi_in318 + 68);
				phi324 = phi_in318;
			}
			else 
			{
				phi319 = phi16;
				phi320 = phi14;
				phi321 = *(uint64_t*)(phi18 + 56);
				phi17 = phi17 & 0xffffffff;
				phi_in322 = phi19;
				phi323 = phi15;
				phi324 = phi18;
			}
			phi16 = phi319;
			phi14 = phi320;
			phi15 = phi323;
			phi18 = phi324;
			phi325 = *(uint64_t*)(phi18 + 48);
			phi4 = phi14;
			phi326 = phi16;
			phi7 = (__zext uint64_t)phi14;
			phi327 = phi16;
			phi11 = phi14;
			phi328 = phi18;
		}
		else 
		{
			phi325 = *(uint64_t*)(phi10 + 48);
			phi4 = phi14;
			phi326 = phi15;
			phi7 = phi7 & 0xffffffff;
			phi327 = *anon8;
			phi11 = phi11;
			phi328 = phi10;
		}
		if (phi325 != 8)
		{
			phi5 = phi326;
			*anon8 = phi327;
			phi12 = phi325 + 4;
			phi10 = phi328;
		}
		phi19 = phi_in322;
		phi20 = phi321 + 4;
		phi26 = phi_in313;
		phi33 = phi314 + 4;
		phi34 = phi_in318;
		phi37 = phi_in308;
		phi47 = phi47 + 4;
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
		uint32_t anon42;
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
			uint32_t phi_in16;
			uint32_t phi17;
			uint32_t* anon18;
			uint32_t phi_in19;
			uint32_t phi21;
			uint32_t phi22;
			uint64_t phi12 = phi_in11;
			uint32_t* anon13 = (uint32_t*)(phi12 + 4);
			if (*anon13 < *phi10)
			{
				*phi10 = *anon13;
				*anon13 = *phi10;
				phi14 = *phi10;
				phi15 = *phi10;
				phi_in16 = *anon13;
				phi17 = *anon13;
				anon18 = (uint32_t*)(phi12 - 4);
				*phi10 = *anon18;
			}
			else 
			{
				phi_in19 = *anon18;
				if (*phi10 < *anon18)
				{
					phi14 = *anon13 & 0xf;
					phi15 = *anon13;
					phi_in16 = *phi10 & 0xf;
					phi17 = *phi10;
					*phi10 = *anon18 & 0xf;
				}
			}
			if (*anon13 >= *phi10 && *phi10 < *anon18 || *anon13 < *phi10 && *anon13 < *anon18)
			{
				uint32_t phi_in20 = phi15;
				*anon18 = phi17;
				phi_in19 = phi_in16;
				phi21 = *anon18;
				phi22 = phi_in20;
			}
			if (*anon13 >= *anon18 && *anon13 < *phi10)
			{
				phi_in19 = *anon18 & 0xf;
				phi14 = *phi10;
				phi21 = *anon13;
				phi22 = *phi10;
			}
			if (*anon13 >= *phi10 && *phi10 < *anon18 || *anon13 < *phi10 && *anon13 < *anon18 || *anon13 >= *anon18 && *anon13 < *phi10)
			{
				*phi10 = phi14;
				*anon13 = phi21;
				if (phi22 - *anon13 <= 4294967295)
				{
					phi_in19 = *(uint32_t*)((phi12 & 0xc) - 4);
				}
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
			uint32_t phi32;
			uint32_t phi33;
			uint32_t* anon34;
			uint32_t phi_in35;
			uint32_t phi36;
			uint32_t phi39;
			uint32_t phi40;
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
				phi36 = phi29;
				uint32_t phi_in37 = phi30;
				uint32_t phi_in38 = phi31;
				*anon34 = phi32;
				*anon28 = phi33;
				phi39 = phi_in38;
				*anon27 = *anon34;
				phi40 = phi_in37;
			}
			if (*anon27 >= *anon34 && *anon27 < *anon28)
			{
				phi39 = *anon34 & 0xf;
				phi36 = *anon28;
				*anon27 = *anon27;
				phi40 = *anon28;
			}
			if (*anon27 >= *anon28 && *anon28 < *anon34 || *anon27 < *anon28 && *anon27 < *anon34 || *anon27 >= *anon34 && *anon27 < *anon28)
			{
				phi_in35 = phi39;
				*anon28 = phi36;
				if (phi40 - *anon27 <= 4294967295)
				{
					phi_in35 = *(uint32_t*)((phi24 & 0xf) - 4);
				}
			}
			uint32_t phi41 = phi_in35;
			anon42 = phi41 + 1 & 0xff;
			if (anon42 != 0)
			{
				phi24 = phi24 + 12;
			}
		}
		while (anon42 != 0);
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
		uint8_t* anon19;
		dispatch2 = 4;
		if (*(uint32_t*)(((__sext int64_t)phi16 << 2) + 6300992) != 0)
		{
			phi4 = (__zext uint64_t)phi16;
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
			phi4 = phi4;
		}
		if (*(uint32_t*)(((__sext int64_t)phi16 << 2) + 6300992) != 0 || (uint32_t)anon20 + ((uint32_t)((anon20 & 0xffffffff) / 3) - (uint32_t)(anon20 << 32 >> 32 >> 31)) * 4294967293 != 1)
		{
			dispatch2 = 1;
		}
		if ((uint8_t)anon18 != 10 && (*(uint32_t*)(((__sext int64_t)phi16 << 2) + 6300992) != 0 || (uint32_t)anon20 + ((uint32_t)((anon20 & 0xffffffff) / 3) - (uint32_t)(anon20 << 32 >> 32 >> 31)) * 4294967293 != 1))
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
			anon19 = (uint32_t)phi12;
			anon20 = (uint32_t*)0x60292c;
			if (*(uint32_t*)(anon17 + 6300864) == 0 && anon19 == *anon20)
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
		if (dispatch13 == 2)
		{
			puts((uint8_t*)0x401d62);
			while (true)
			{
				uint64_t anon22 = random();
				uint32_t anon23 = (uint32_t)anon22;
				*anon20 = anon23 + (((uint32_t)((anon22 & 0xffffffff) * 2290649225 >> 32) + anon23 >> 4) - (anon23 >> 31)) * 4294967266;
			}
		}
		if (*(uint32_t*)(anon17 + 6300992) != 0 && *(uint32_t*)(anon17 + 6300864) == 0)
		{
			if (anon19 == *anon20 && *anon21 == 3)
			{
				puts((uint8_t*)0x401df8);
				*anon14 = 3;
				*anon15 = *anon15 + 200;
				*anon20 = 4294967295;
			}
			if (anon19 != *anon20 || anon19 == *anon20 && *anon21 == 3 || anon19 == *anon20 && *anon21 == 3)
			{
				dispatch13 = 3;
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
			if (*(uint32_t*)((anon24 << 2) + 6300864) == 0 && *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon26 + 6301636) << 2) + 6300864) == 0)
			{
				phi27 = anon24;
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
			if (*anon25 != phi42 && *(uint32_t*)(anon26 + 6301636) != phi42)
			{
				phi_in9 = phi11;
				phi_in10 = phi12;
			}
			if (*anon25 == phi42 || *anon25 != phi42 && *(uint32_t*)(anon26 + 6301636) == phi42 || *anon25 != phi42 && *(uint32_t*)(anon26 + 6301636) != phi42 && *(uint32_t*)(anon26 + 6301640) == phi42)
			{
				int64_t anon45 = (__sext int64_t)phi42;
				phi_in9 = anon45;
				phi_in10 = anon45;
			}
			break;
		}
		uint32_t* anon46 = (uint32_t*)(anon17 + 6301504);
		if (*anon46 != 0 && *(uint32_t*)(anon17 + 6300992) != 0 && *(uint32_t*)(anon17 + 6300864) == 0 && (anon19 != *anon20 || anon19 == *anon20 && *anon21 == 3 || anon19 == *anon20 && *anon21 == 3))
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
