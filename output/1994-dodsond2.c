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
			uint32_t phi_in14 = phi7;
			*phi1 = phi9;
			*anon4 = phi10;
			phi11 = phi_in14;
			if (*anon4 > *phi1)
			{
				phi11 = *anon8;
			}
		}
		if (phi11 != 255)
		{
			uint64_t anon15 = phi3 + 12;
			phi1 = (uint32_t*)anon15;
			phi_in2 = anon15;
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
	uint64_t phi10 = 0;
	uint64_t anon12 = (uint64_t)&alloca1;
	phi11 = anon12;
	while (true)
	{
		uint64_t phi20;
		uint32_t phi29;
		uint64_t phi34;
		uint32_t phi43;
		uint32_t phi45;
		uint64_t phi48;
		uint32_t phi_in317;
		uint32_t phi_in320;
		uint64_t phi327;
		uint32_t phi_in334;
		uint64_t phi336;
		uint64_t phi341;
		uint32_t phi342;
		uint32_t phi343;
		uint64_t phi344;
		uint32_t phi345;
		uint64_t phi_in346;
		uint32_t phi13 = phi4;
		int64_t anon15 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi11 + 48) + *(uint64_t*)(phi11 + 8) + 6301632);
		uint32_t* anon14 = (uint32_t*)((anon15 << 2) + 6300992);
		*anon14 = phi8;
		*(uint64_t*)(phi11 + 48) = phi10;
		if (phi9 < *anon14)
		{
			uint32_t phi335;
			uint64_t phi337;
			uint32_t phi338;
			uint32_t phi339;
			uint64_t phi340;
			*(uint64_t*)(phi11 + 16) = anon15 * 12;
			*(uint32_t*)(phi11 + 40) = (uint32_t)phi7 + 5;
			uint32_t phi16 = phi5;
			uint32_t phi17 = phi13;
			uint64_t phi18 = (__zext uint64_t)phi13;
			uint32_t phi19 = phi5;
			phi20 = 0;
			*(uint32_t*)(phi11 + 68) = phi5;
			uint32_t phi21 = phi13;
			*(uint64_t*)(phi11 + 56) = phi20;
			int64_t anon23 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi11 + 56) + *(uint64_t*)(phi11 + 16) + 6301632);
			uint32_t* anon22 = (uint32_t*)((anon23 << 2) + 6300992);
			if (phi19 < *anon22)
			{
				uint32_t phi323;
				uint32_t phi324;
				uint32_t phi325;
				uint32_t phi326;
				uint32_t phi328;
				uint32_t phi329;
				uint32_t phi330;
				uint32_t phi331;
				uint64_t phi332;
				uint64_t phi333;
				*anon22 = *(uint32_t*)(phi11 + 4);
				*(uint64_t*)(phi11 + 32) = anon23 * 12;
				*(uint32_t*)(phi11 + 44) = (uint32_t)phi18 + 6;
				uint32_t phi24 = phi21;
				uint32_t phi25 = phi21;
				uint32_t phi26 = phi21;
				uint32_t phi27 = phi21;
				uint32_t phi28 = phi21;
				phi29 = phi21;
				uint32_t phi30 = phi21;
				uint32_t phi31 = phi21;
				uint32_t phi32 = phi21;
				uint64_t phi33 = (__zext uint64_t)phi21;
				phi34 = 0;
				uint64_t phi35 = phi11;
				uint32_t phi36 = phi24;
				uint32_t phi37 = phi26;
				uint32_t phi38 = phi28;
				uint32_t phi39 = phi30;
				*(uint64_t*)(phi35 + 72) = phi34;
				int64_t anon41 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi35 + 72) + *(uint64_t*)(phi35 + 32) + 6301632);
				uint32_t* anon40 = (uint32_t*)((anon41 << 2) + 6300992);
				if (*(uint32_t*)(phi35 + 4) < *anon40)
				{
					uint32_t phi96;
					uint32_t phi102;
					uint32_t phi313;
					uint64_t phi314;
					uint32_t phi315;
					uint32_t phi316;
					uint32_t phi318;
					uint64_t phi319;
					uint32_t phi321;
					uint64_t phi322;
					*anon40 = *(uint32_t*)(phi35 + 24);
					*(uint32_t*)(phi35 + 64) = (uint32_t)phi33 + 7;
					uint32_t phi42 = phi25;
					phi43 = phi27;
					uint32_t phi44 = phi21;
					phi45 = phi29;
					uint32_t phi46 = phi32;
					uint64_t phi47 = phi35;
					phi48 = 0;
					uint64_t phi49 = anon41 * 12;
					int64_t anon51 = (__sext int64_t)*(uint32_t*)(phi48 + phi49 + 6301632);
					uint32_t* anon50 = (uint32_t*)((anon51 << 2) + 6300992);
					if (*(uint32_t*)(phi47 + 24) < *anon50)
					{
						uint32_t phi55;
						uint64_t phi312;
						*anon50 = *(uint32_t*)(phi47 + 28);
						uint32_t phi52 = phi36;
						uint32_t phi_in53 = phi42;
						uint32_t phi54 = phi37;
						uint32_t anon56 = (uint32_t)phi33 + 8;
						phi55 = anon56;
						uint32_t phi57 = phi43;
						uint32_t phi58 = phi44;
						uint32_t phi_in59 = anon56;
						uint32_t phi60 = phi38;
						uint32_t phi61 = phi45;
						uint32_t phi62 = anon56;
						uint32_t phi_in63 = anon56;
						uint32_t phi64 = anon56;
						uint32_t phi_in65 = phi39;
						uint32_t phi_in66 = anon56;
						uint32_t phi67 = anon56;
						uint32_t phi68 = phi31;
						uint32_t phi69 = anon56;
						uint32_t phi_in70 = anon56;
						uint32_t phi71 = phi46;
						uint64_t phi72 = phi49;
						uint32_t phi_in73 = anon56;
						uint32_t phi74 = anon56;
						uint32_t phi75 = anon56;
						uint64_t phi_in76 = phi47;
						uint64_t phi_in77 = 0;
						uint64_t phi78 = anon51 * 12;
						uint64_t phi79 = phi33;
						do
						{
							uint32_t phi80 = phi52;
							uint32_t phi81 = phi55;
							uint32_t phi_in82 = phi57;
							uint32_t phi_in83 = phi60;
							uint32_t phi84 = phi61;
							uint32_t phi_in85 = phi62;
							uint32_t phi86 = phi64;
							uint32_t phi_in87 = phi67;
							uint32_t phi88 = phi68;
							uint32_t phi_in89 = phi69;
							uint32_t phi_in90 = phi71;
							uint32_t phi_in91 = phi74;
							uint32_t phi_in92 = phi75;
							uint64_t phi93 = phi78;
							uint32_t phi94 = phi80;
							uint32_t phi95 = phi_in53;
							phi96 = phi54;
							phi55 = phi81;
							phi57 = phi_in82;
							uint32_t phi_in97 = phi_in83;
							uint32_t phi98 = phi84;
							uint32_t phi99 = phi_in85;
							uint32_t phi100 = phi_in63;
							uint32_t phi_in101 = phi86;
							phi102 = phi_in65;
							uint32_t phi103 = phi_in89;
							uint32_t phi_in104 = phi_in70;
							uint32_t phi105 = phi_in90;
							uint64_t phi_in106 = phi72;
							uint32_t phi_in107 = phi_in73;
							uint32_t phi108 = phi_in91;
							uint64_t phi109 = phi_in76;
							uint64_t phi110 = phi79;
							int64_t anon112 = (__sext int64_t)*(uint32_t*)(phi_in77 + phi93 + 6301632);
							uint32_t* anon111 = (uint32_t*)((anon112 << 2) + 6300992);
							if (*(uint32_t*)(phi_in76 + 28) < *anon111)
							{
								uint64_t phi131;
								*anon111 = *(uint32_t*)(phi_in76 + 40);
								*(uint32_t*)(phi_in76 + 120) = (uint32_t)phi79 + 9;
								uint64_t phi_in113 = 0;
								uint32_t phi114 = phi_in53;
								uint32_t phi_in115 = phi58;
								uint32_t phi116 = phi_in59;
								uint32_t phi117 = phi_in83;
								uint32_t phi_in118 = phi_in85;
								uint32_t phi119 = phi_in63;
								uint32_t phi120 = phi_in65;
								uint32_t phi_in121 = phi_in66;
								phi67 = phi_in87;
								uint32_t phi_in122 = phi88;
								uint32_t phi123 = phi_in89;
								uint32_t phi124 = phi_in70;
								uint64_t phi125 = phi_in77;
								uint64_t phi126 = phi93;
								uint32_t phi127 = phi_in73;
								uint32_t phi128 = phi_in92;
								uint64_t phi129 = phi_in76;
								uint64_t phi130 = phi79 & 0xffffffff;
								do
								{
									phi131 = phi_in113;
									uint32_t phi_in132 = phi114;
									uint32_t phi133 = phi54;
									uint32_t phi_in134 = phi81;
									uint32_t phi135 = phi_in82;
									uint32_t phi136 = phi_in115;
									uint32_t phi_in137 = phi116;
									uint32_t phi138 = phi117;
									uint32_t phi139 = phi84;
									uint32_t phi_in140 = phi119;
									uint32_t phi141 = phi86;
									uint32_t phi_in142 = phi67;
									uint32_t phi143 = phi124;
									uint64_t phi_in144 = phi72;
									uint64_t phi145 = phi126;
									uint32_t phi_in146 = phi127;
									uint64_t phi_in147 = phi129;
									uint64_t phi148 = phi130;
									uint32_t phi149 = phi80;
									phi_in53 = phi_in132;
									phi54 = phi133;
									phi81 = phi_in134;
									uint32_t phi150 = phi_in137;
									uint32_t phi151 = phi138;
									uint32_t phi152 = phi139;
									uint32_t phi153 = phi_in140;
									phi_in101 = phi141;
									uint32_t phi154 = phi120;
									uint32_t phi155 = phi_in121;
									uint32_t phi156 = phi_in142;
									uint32_t phi157 = phi_in122;
									uint32_t phi158 = phi123;
									phi124 = phi143;
									uint32_t phi159 = phi_in90;
									uint64_t phi160 = phi_in144;
									uint64_t phi161 = phi145;
									uint32_t phi162 = phi_in146;
									phi108 = phi_in91;
									uint32_t phi163 = phi128;
									uint64_t phi164 = phi_in147;
									phi130 = phi148;
									int64_t anon166 = (__sext int64_t)*(uint32_t*)(phi131 + anon112 * 12 + 6301632);
									uint32_t* anon165 = (uint32_t*)((anon166 << 2) + 6300992);
									if (*(uint32_t*)(phi_in147 + 40) < *anon165)
									{
										uint64_t phi183;
										*anon165 = *(uint32_t*)(phi_in147 + 44);
										uint64_t phi_in167 = 0;
										uint32_t phi168 = phi_in134;
										uint32_t phi_in169 = phi135;
										uint32_t phi170 = phi136;
										uint32_t phi171 = phi_in137;
										uint32_t phi172 = phi_in118;
										uint32_t phi173 = phi_in140;
										uint32_t phi174 = phi_in121;
										uint32_t phi_in175 = phi_in142;
										uint32_t phi_in176 = phi_in122;
										uint64_t phi177 = phi125;
										uint32_t phi178 = phi_in90;
										uint64_t phi179 = phi_in144;
										uint32_t phi_in180 = phi_in146;
										uint32_t phi181 = phi_in91;
										uint64_t phi182 = phi_in147;
										do
										{
											phi183 = phi_in167;
											uint32_t phi_in184 = phi80;
											uint32_t phi185 = phi133;
											uint32_t phi_in186 = phi168;
											uint32_t phi187 = phi170;
											*(uint32_t*)(phi182 + 124) = phi171;
											uint32_t phi188 = phi138;
											*(uint32_t*)(phi182 + 96) = phi139;
											*(uint32_t*)(phi182 + 124) = phi172;
											uint32_t phi_in189 = phi141;
											uint32_t phi190 = phi120;
											uint32_t phi_in191 = phi174;
											uint32_t phi_in192 = phi123;
											uint32_t phi_in193 = phi143;
											uint64_t phi194 = phi177;
											uint32_t phi195 = phi178;
											uint64_t phi196 = phi179;
											uint64_t phi197 = phi145;
											uint32_t phi198 = phi181;
											uint32_t phi_in199 = phi128;
											uint64_t phi200 = phi148;
											uint32_t phi201 = phi_in184;
											uint32_t phi202 = phi_in132;
											uint32_t phi203 = phi185;
											uint32_t phi204 = phi_in186;
											uint32_t phi205 = phi_in169;
											uint32_t phi206 = phi187;
											uint32_t phi207 = *(uint32_t*)(phi182 + 124);
											phi138 = phi188;
											uint32_t phi208 = *(uint32_t*)(phi182 + 96);
											phi172 = *(uint32_t*)(phi182 + 124);
											phi153 = phi173;
											uint32_t phi209 = phi_in189;
											uint32_t phi210 = phi_in191;
											uint32_t phi211 = phi_in175;
											uint32_t phi212 = phi_in176;
											uint32_t phi213 = phi_in192;
											phi143 = phi_in193;
											uint32_t phi214 = phi195;
											phi_in144 = phi196;
											uint64_t phi215 = phi197;
											phi_in146 = phi_in180;
											phi_in91 = phi198;
											uint32_t phi216 = phi_in199;
											phi_in147 = phi182;
											uint64_t phi217 = phi200;
											int64_t anon219 = (__sext int64_t)*(uint32_t*)(phi183 + anon166 * 12 + 6301632);
											uint32_t* anon218 = (uint32_t*)((anon219 << 2) + 6300992);
											if (*(uint32_t*)(phi182 + 44) < *anon218)
											{
												*anon218 = *(uint32_t*)(phi182 + 64);
												uint32_t phi_in220 = phi_in184;
												uint32_t phi221 = phi_in132;
												uint32_t phi222 = phi185;
												uint32_t phi223 = phi_in186;
												uint64_t phi224 = phi182;
												uint32_t phi225 = phi_in169;
												uint32_t phi226 = phi187;
												uint32_t phi_in227 = *(uint32_t*)(phi182 + 124);
												uint32_t phi_in228 = phi188;
												uint32_t phi_in229 = *(uint32_t*)(phi182 + 96);
												uint32_t phi230 = *(uint32_t*)(phi182 + 124);
												uint32_t phi231 = phi173;
												uint32_t phi232 = phi190;
												phi210 = phi_in191;
												phi211 = phi_in175;
												uint32_t phi233 = phi_in176;
												uint32_t phi_in234 = phi_in192;
												uint32_t phi235 = phi_in193;
												uint64_t phi236 = phi194;
												*(uint64_t*)(phi_in147 + 96) = phi196;
												uint32_t phi_in237 = phi_in180;
												uint32_t phi238 = phi_in199;
												uint64_t phi239 = phi200;
												int64_t anon242 = anon219 * 12;
												int64_t anon241 = (__sext int64_t)*(uint32_t*)(anon242 + 6301636);
												uint32_t* anon240 = (uint32_t*)((anon241 << 2) + 6300992);
												if (*(uint32_t*)(phi182 + 64) < *anon240)
												{
													*anon240 = phi_in189;
													uint32_t phi243 = phi_in132;
													uint32_t phi244 = phi_in169;
													uint64_t phi245 = anon241;
													uint32_t phi246 = *(uint32_t*)(phi182 + 96);
													uint32_t phi_in247 = phi190;
													uint32_t phi248 = phi_in176;
													*(uint64_t*)(phi182 + 88) = phi194;
													uint32_t phi249 = phi195;
													uint64_t phi250 = phi197;
													if (phi173 < phi_in189)
													{
														*(uint64_t*)(phi182 + 112) = phi197;
														*(uint64_t*)(phi182 + 104) = phi196;
														*(uint64_t*)(phi182 + 88) = phi194;
														*(uint64_t*)(phi182 + 80) = anon241;
														uint64_t anon251 = (__zext uint64_t)phi_in189;
														w(4197873, anon12, (__sext int64_t)phi_in189, anon251, anon251);
														phi_in184 = *(uint32_t*)(arg1 - 96);
														phi243 = *(uint32_t*)(arg1 - 96);
														phi185 = *(uint32_t*)(arg1 - 96);
														phi_in186 = *(uint32_t*)(arg1 - 68);
														phi244 = *(uint32_t*)(arg1 - 96);
														phi187 = *(uint32_t*)(arg1 - 96);
														phi182 = anon12;
														*(uint32_t*)(phi182 + 124) = *(uint32_t*)(arg1 - 68);
														phi188 = *(uint32_t*)(arg1 - 96);
														phi245 = *(uint64_t*)(arg1 - 112);
														phi246 = *(uint32_t*)(arg1 - 96);
														phi_in247 = *(uint32_t*)(arg1 - 96);
														phi248 = *(uint32_t*)(arg1 - 96);
														*(uint64_t*)(phi182 + 88) = *(uint64_t*)(arg1 - 104);
														phi249 = *(uint32_t*)(arg1 - 96);
														phi196 = *(uint64_t*)(arg1 - 88);
														phi250 = *(uint64_t*)(arg1 - 80);
														phi200 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
													}
													uint32_t phi_in252 = phi243;
													uint32_t phi_in253 = phi185;
													*(uint32_t*)(phi182 + 96) = phi187;
													uint32_t phi254 = phi188;
													*(uint64_t*)(phi182 + 80) = phi245;
													uint32_t phi255 = phi246;
													uint32_t phi256 = phi248;
													uint32_t phi257 = phi249;
													*(uint64_t*)(phi182 + 104) = phi196;
													*(uint64_t*)(phi182 + 112) = phi250;
													uint64_t phi_in258 = phi200;
													uint32_t phi259 = phi_in184;
													uint32_t phi_in260 = phi_in252;
													uint32_t phi261 = phi_in253;
													uint32_t phi262 = phi_in186;
													uint64_t phi263 = phi182;
													uint32_t phi264 = *(uint32_t*)(phi182 + 96);
													*(uint32_t*)(phi263 + 112) = *(uint32_t*)(phi182 + 124);
													uint64_t phi265 = *(uint64_t*)(phi182 + 80);
													uint32_t phi266 = phi_in247;
													*(uint64_t*)(phi263 + 80) = *(uint64_t*)(phi182 + 88);
													uint64_t phi267 = *(uint64_t*)(phi182 + 104);
													uint64_t phi268 = *(uint64_t*)(phi182 + 112);
													uint64_t phi269 = phi_in258;
													int64_t anon270 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi182 + 80) * 12 + 6301636);
													if (*(uint32_t*)(phi182 + 124) < *(uint32_t*)((anon270 << 2) + 6300992))
													{
														uint64_t anon271 = (__zext uint64_t)*(uint32_t*)(phi182 + 120);
														w(4197793, anon12, anon270, anon271, anon271);
														phi259 = *(uint32_t*)(arg1 - 96);
														phi_in260 = *(uint32_t*)(arg1 - 96);
														phi261 = *(uint32_t*)(arg1 - 96);
														phi262 = alloca1.field14;
														phi244 = *(uint32_t*)(arg1 - 96);
														phi263 = anon12;
														phi264 = *(uint32_t*)(arg1 - 96);
														*(uint32_t*)(phi263 + 112) = alloca1.field14;
														phi254 = *(uint32_t*)(arg1 - 96);
														phi265 = *(uint64_t*)(arg1 - 112);
														phi255 = *(uint32_t*)(arg1 - 96);
														phi266 = *(uint32_t*)(arg1 - 96);
														phi256 = *(uint32_t*)(arg1 - 96);
														*(uint64_t*)(phi263 + 80) = *(uint64_t*)(arg1 - 104);
														phi257 = *(uint32_t*)(arg1 - 96);
														phi267 = *(uint64_t*)(arg1 - 88);
														phi268 = *(uint64_t*)(arg1 - 80);
														phi269 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
													}
													uint32_t phi_in272 = phi259;
													phi222 = phi261;
													uint32_t phi_in273 = phi262;
													*(uint32_t*)(phi263 + 88) = phi244;
													uint32_t phi_in274 = phi264;
													phi231 = *(uint32_t*)(phi263 + 112);
													uint32_t phi_in275 = phi254;
													uint32_t phi_in276 = phi255;
													phi232 = phi266;
													uint32_t phi_in277 = phi256;
													phi195 = phi257;
													*(uint64_t*)(phi263 + 96) = phi267;
													*(uint64_t*)(phi263 + 104) = phi268;
													uint64_t phi_in278 = phi269;
													phi_in220 = phi_in272;
													phi221 = phi_in260;
													phi223 = phi_in273;
													phi224 = phi263;
													phi225 = *(uint32_t*)(phi263 + 88);
													phi226 = phi_in274;
													phi_in227 = phi231;
													phi_in228 = phi_in275;
													phi_in229 = phi_in276;
													phi230 = phi231;
													phi_in189 = phi231;
													phi210 = phi231;
													phi211 = phi231;
													phi233 = phi_in277;
													phi_in234 = phi231;
													phi235 = phi231;
													phi236 = *(uint64_t*)(phi263 + 80);
													*(uint64_t*)(phi_in147 + 96) = *(uint64_t*)(phi263 + 96);
													phi197 = *(uint64_t*)(phi263 + 104);
													phi_in237 = phi231;
													phi198 = phi231;
													phi238 = phi231;
													phi239 = phi_in278;
													int64_t anon279 = (__sext int64_t)*(uint32_t*)(phi265 * 12 + 6301640);
													if (phi231 < *(uint32_t*)((anon279 << 2) + 6300992))
													{
														*(uint32_t*)(phi263 + 112) = phi231;
														uint64_t anon280 = (__zext uint64_t)*(uint32_t*)(phi263 + 120);
														w(4197395, anon12, anon279, anon280, anon280);
														phi_in220 = *(uint32_t*)(arg1 - 104);
														phi221 = *(uint32_t*)(arg1 - 104);
														phi222 = *(uint32_t*)(arg1 - 104);
														phi223 = *(uint32_t*)(arg1 - 80);
														phi224 = anon12;
														phi225 = *(uint32_t*)(arg1 - 104);
														phi226 = *(uint32_t*)(arg1 - 104);
														phi_in227 = *(uint32_t*)(arg1 - 80);
														phi_in228 = *(uint32_t*)(arg1 - 104);
														phi_in229 = *(uint32_t*)(arg1 - 104);
														phi230 = *(uint32_t*)(arg1 - 80);
														phi231 = *(uint32_t*)(arg1 - 80);
														phi_in189 = *(uint32_t*)(arg1 - 80);
														phi232 = *(uint32_t*)(arg1 - 104);
														phi210 = *(uint32_t*)(arg1 - 80);
														phi211 = *(uint32_t*)(arg1 - 80);
														phi233 = *(uint32_t*)(arg1 - 104);
														phi_in234 = *(uint32_t*)(arg1 - 80);
														phi235 = *(uint32_t*)(arg1 - 80);
														phi236 = *(uint64_t*)(arg1 - 112);
														phi195 = *(uint32_t*)(arg1 - 104);
														*(uint64_t*)(phi_in147 + 96) = *(uint64_t*)(arg1 - 96);
														phi197 = *(uint64_t*)(arg1 - 88);
														phi_in237 = *(uint32_t*)(arg1 - 80);
														phi198 = *(uint32_t*)(arg1 - 80);
														phi238 = *(uint32_t*)(arg1 - 80);
														phi239 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
													}
												}
												*(uint32_t*)(phi_in147 + 88) = phi221;
												uint32_t phi281 = phi222;
												*(uint32_t*)(phi_in147 + 112) = phi223;
												phi_in147 = phi224;
												uint32_t phi282 = phi225;
												uint32_t phi_in283 = phi230;
												uint32_t phi_in284 = phi231;
												uint32_t phi_in285 = phi232;
												uint32_t phi286 = phi233;
												uint32_t phi_in287 = phi235;
												uint32_t phi_in288 = phi195;
												*(uint64_t*)(phi_in147 + 104) = phi197;
												phi_in91 = phi198;
												phi216 = phi238;
												phi201 = phi_in220;
												phi202 = *(uint32_t*)(phi_in147 + 88);
												phi203 = phi281;
												phi204 = *(uint32_t*)(phi_in147 + 112);
												phi205 = phi282;
												phi206 = phi226;
												phi207 = phi_in227;
												phi138 = phi_in228;
												phi208 = phi_in229;
												phi172 = phi_in283;
												phi153 = phi_in284;
												phi209 = phi_in189;
												phi190 = phi_in285;
												phi212 = phi286;
												phi213 = phi_in234;
												phi143 = phi_in287;
												phi194 = phi236;
												phi214 = phi_in288;
												phi_in144 = *(uint64_t*)(phi_in147 + 96);
												phi215 = *(uint64_t*)(phi_in147 + 104);
												phi_in146 = phi_in237;
												phi217 = phi239;
												int64_t anon290 = (__sext int64_t)*(uint32_t*)(anon242 + 6301640);
												uint32_t* anon289 = (uint32_t*)((anon290 << 2) + 6300992);
												if (*(uint32_t*)(phi_in147 + 64) < *anon289)
												{
													*anon289 = *(uint32_t*)(phi_in147 + 112);
													uint32_t phi291 = phi_in220;
													uint32_t phi292 = *(uint32_t*)(phi_in147 + 88);
													uint32_t phi293 = *(uint32_t*)(phi_in147 + 112);
													uint32_t phi_in294 = phi_in228;
													uint32_t phi295 = phi_in229;
													uint32_t phi_in296 = phi_in285;
													uint32_t phi297 = phi_in288;
													uint64_t phi298 = *(uint64_t*)(phi_in147 + 96);
													uint64_t phi299 = *(uint64_t*)(phi_in147 + 104);
													uint64_t phi300 = phi_in147;
													int64_t anon302 = anon290 * 12;
													int64_t anon301 = (__sext int64_t)*(uint32_t*)(anon302 + 6301636);
													if (*(uint32_t*)(phi_in147 + 112) < *(uint32_t*)((anon301 << 2) + 6300992))
													{
														*(uint64_t*)(phi_in147 + 80) = phi236;
														uint64_t anon303 = (__zext uint64_t)*(uint32_t*)(phi_in147 + 120);
														w(4197948, anon12, anon301, anon303, anon303);
														phi291 = *(uint32_t*)(arg1 - 104);
														phi292 = *(uint32_t*)(arg1 - 104);
														phi281 = *(uint32_t*)(arg1 - 104);
														phi293 = *(uint32_t*)(arg1 - 80);
														phi282 = *(uint32_t*)(arg1 - 104);
														phi226 = *(uint32_t*)(arg1 - 104);
														phi_in294 = *(uint32_t*)(arg1 - 104);
														phi295 = *(uint32_t*)(arg1 - 104);
														phi_in296 = *(uint32_t*)(arg1 - 104);
														phi286 = *(uint32_t*)(arg1 - 104);
														phi236 = *(uint64_t*)(arg1 - 112);
														phi297 = *(uint32_t*)(arg1 - 104);
														phi298 = *(uint64_t*)(arg1 - 96);
														phi299 = *(uint64_t*)(arg1 - 88);
														phi300 = anon12;
														phi239 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
													}
													*(uint32_t*)(phi_in147 + 88) = phi291;
													uint32_t phi_in304 = phi292;
													uint32_t phi_in305 = phi281;
													*(uint32_t*)(phi_in147 + 112) = phi293;
													phi205 = phi282;
													uint32_t phi_in306 = phi226;
													phi208 = phi295;
													uint32_t phi_in307 = phi286;
													*(uint64_t*)(phi_in147 + 80) = phi236;
													uint32_t phi_in308 = phi297;
													*(uint64_t*)(phi_in147 + 96) = phi298;
													*(uint64_t*)(phi_in147 + 104) = phi299;
													phi_in147 = phi300;
													uint64_t phi_in309 = phi239;
													phi201 = *(uint32_t*)(phi_in147 + 88);
													phi202 = phi_in304;
													phi203 = phi_in305;
													phi204 = *(uint32_t*)(phi_in147 + 112);
													phi206 = phi_in306;
													phi207 = *(uint32_t*)(phi_in147 + 112);
													phi138 = phi_in294;
													phi172 = *(uint32_t*)(phi_in147 + 112);
													phi153 = *(uint32_t*)(phi_in147 + 112);
													phi209 = *(uint32_t*)(phi_in147 + 112);
													phi190 = phi_in296;
													phi210 = *(uint32_t*)(phi_in147 + 112);
													phi211 = *(uint32_t*)(phi_in147 + 112);
													phi212 = phi_in307;
													phi213 = *(uint32_t*)(phi_in147 + 112);
													phi143 = *(uint32_t*)(phi_in147 + 112);
													phi194 = *(uint64_t*)(phi_in147 + 80);
													phi214 = phi_in308;
													phi_in144 = *(uint64_t*)(phi_in147 + 96);
													phi215 = *(uint64_t*)(phi_in147 + 104);
													phi_in146 = *(uint32_t*)(phi_in147 + 112);
													phi_in91 = *(uint32_t*)(phi_in147 + 112);
													phi216 = *(uint32_t*)(phi_in147 + 112);
													phi217 = phi_in309;
													int64_t anon310 = (__sext int64_t)*(uint32_t*)(anon302 + 6301640);
													if (*(uint32_t*)(phi_in147 + 112) < *(uint32_t*)((anon310 << 2) + 6300992))
													{
														uint64_t anon311 = (__zext uint64_t)*(uint32_t*)(phi_in147 + 120);
														w(4197231, anon12, anon310, anon311, anon311);
														phi201 = alloca1.field8;
														phi202 = alloca1.field8;
														phi203 = alloca1.field8;
														phi204 = alloca1.field12;
														phi205 = alloca1.field8;
														phi206 = alloca1.field8;
														phi207 = alloca1.field12;
														phi138 = alloca1.field8;
														phi208 = alloca1.field8;
														phi172 = alloca1.field12;
														phi153 = alloca1.field12;
														phi209 = alloca1.field12;
														phi190 = alloca1.field8;
														phi210 = alloca1.field12;
														phi211 = alloca1.field12;
														phi212 = alloca1.field8;
														phi213 = alloca1.field12;
														phi143 = alloca1.field12;
														phi194 = alloca1.field7;
														phi214 = alloca1.field8;
														phi_in144 = alloca1.field10;
														phi215 = alloca1.field11;
														phi_in146 = alloca1.field12;
														phi_in91 = alloca1.field12;
														phi216 = alloca1.field12;
														phi_in147 = anon12;
														phi217 = (__zext uint64_t)alloca1.field8;
													}
												}
											}
											phi_in53 = phi202;
											phi54 = phi203;
											phi135 = phi205;
											phi136 = phi206;
											phi152 = phi208;
											phi155 = phi210;
											phi156 = phi211;
											phi157 = phi212;
											phi158 = phi213;
											phi125 = phi194;
											phi159 = phi214;
											phi161 = phi215;
											phi163 = phi216;
											phi149 = phi201;
											phi81 = phi204;
											phi150 = phi207;
											phi151 = phi138;
											phi_in118 = phi172;
											phi_in101 = phi209;
											phi154 = phi190;
											phi124 = phi143;
											phi160 = phi_in144;
											phi162 = phi_in146;
											phi108 = phi_in91;
											phi164 = phi_in147;
											phi130 = phi217;
											phi_in167 = phi183 + 4;
											phi80 = phi201;
											phi_in132 = phi_in53;
											phi133 = phi54;
											phi168 = phi204;
											phi_in169 = phi135;
											phi170 = phi136;
											phi171 = phi207;
											phi139 = phi152;
											phi173 = phi153;
											phi141 = phi209;
											phi120 = phi190;
											phi174 = phi155;
											phi_in175 = phi156;
											phi_in176 = phi157;
											phi123 = phi158;
											phi177 = phi125;
											phi178 = phi159;
											phi179 = phi_in144;
											phi145 = phi161;
											phi_in180 = phi_in146;
											phi181 = phi_in91;
											phi128 = phi163;
											phi182 = phi_in147;
											phi148 = phi217;
										}
										while (phi183 != 8);
									}
									phi58 = phi136;
									phi_in66 = phi155;
									phi_in87 = phi156;
									phi88 = phi157;
									phi_in77 = phi125;
									phi105 = phi159;
									phi_in106 = phi160;
									phi93 = phi161;
									phi_in107 = phi162;
									phi_in92 = phi163;
									phi94 = phi149;
									phi95 = phi_in53;
									phi96 = phi54;
									phi55 = phi81;
									phi57 = phi135;
									phi_in59 = phi150;
									phi_in97 = phi151;
									phi98 = phi152;
									phi99 = phi_in118;
									phi100 = phi153;
									phi102 = phi154;
									phi103 = phi158;
									phi_in104 = phi124;
									phi109 = phi164;
									phi110 = phi130;
									phi_in113 = phi131 + 4;
									phi80 = phi149;
									phi114 = phi_in53;
									phi_in82 = phi135;
									phi_in115 = phi58;
									phi116 = phi150;
									phi117 = phi151;
									phi84 = phi152;
									phi119 = phi153;
									phi86 = phi_in101;
									phi120 = phi154;
									phi_in121 = phi_in66;
									phi67 = phi_in87;
									phi_in122 = phi88;
									phi123 = phi158;
									phi125 = phi_in77;
									phi_in90 = phi105;
									phi72 = phi_in106;
									phi126 = phi93;
									phi127 = phi_in107;
									phi_in91 = phi108;
									phi128 = phi_in92;
									phi129 = phi164;
								}
								while (phi131 != 8);
							}
							phi312 = phi_in77;
							phi313 = phi88;
							phi314 = phi109;
							phi315 = phi94;
							phi316 = phi95;
							phi_in317 = phi57;
							phi318 = phi58;
							phi38 = phi_in97;
							phi319 = phi_in106;
							phi_in320 = phi98;
							phi321 = phi105;
							phi322 = phi110;
							if (phi312 != 8)
							{
								phi52 = phi94;
								phi_in53 = phi95;
								phi54 = phi96;
								phi58 = phi58;
								phi60 = phi_in97;
								phi61 = phi98;
								phi62 = phi99;
								phi_in63 = phi100;
								phi64 = phi_in101;
								phi_in65 = phi102;
								phi67 = phi_in87;
								phi68 = phi313;
								phi69 = phi103;
								phi_in70 = phi_in104;
								phi71 = phi105;
								phi72 = phi_in106;
								phi_in73 = phi_in107;
								phi74 = phi108;
								phi75 = phi_in92;
								phi_in76 = phi314;
								phi_in77 = phi312 + 4;
								phi78 = phi93;
								phi79 = phi110;
							}
						}
						while (phi312 != 8);
					}
					else 
					{
						phi315 = phi36;
						phi316 = phi42;
						phi96 = phi37;
						phi_in317 = phi43;
						phi318 = phi44;
						phi38 = phi38;
						phi319 = phi49;
						phi_in320 = phi45;
						phi102 = phi39;
						phi313 = phi31;
						phi321 = phi46;
						phi314 = phi47;
						phi322 = phi33 & 0xffffffff;
					}
					phi36 = phi315;
					phi42 = phi316;
					phi37 = phi96;
					phi44 = phi318;
					phi49 = phi319;
					phi39 = phi102;
					phi31 = phi313;
					phi46 = phi321;
					phi47 = phi314;
					phi33 = phi322;
					phi24 = phi36;
					phi323 = phi42;
					phi324 = phi37;
					phi27 = phi_in317;
					phi325 = phi44;
					phi326 = phi38;
					phi327 = *(uint64_t*)(phi47 + 72);
					phi328 = phi_in320;
					phi329 = phi39;
					phi330 = phi31;
					phi331 = phi46;
					phi332 = phi33;
					phi333 = phi47;
				}
				else 
				{
					phi24 = phi36;
					phi323 = phi25;
					phi324 = phi37;
					phi27 = phi27;
					phi325 = phi21;
					phi326 = phi38;
					phi327 = *(uint64_t*)(phi35 + 72);
					phi328 = phi29;
					phi329 = phi39;
					phi330 = phi31;
					phi331 = phi32;
					phi332 = phi33 & 0xffffffff;
					phi333 = phi35;
				}
				phi25 = phi323;
				phi26 = phi324;
				phi21 = phi325;
				phi28 = phi326;
				phi_in334 = phi328;
				phi30 = phi329;
				phi31 = phi330;
				phi32 = phi331;
				phi33 = phi332;
				phi35 = phi333;
				phi335 = *(uint32_t*)(phi35 + 68);
				phi17 = phi28;
				phi336 = *(uint64_t*)(phi35 + 56);
				phi337 = (__zext uint64_t)phi28;
				phi5 = *(uint32_t*)(phi35 + 68);
				phi338 = phi28;
				phi339 = *(uint32_t*)(phi35 + 68);
				phi340 = phi35;
			}
			else 
			{
				phi335 = phi16;
				phi17 = phi17;
				phi336 = *(uint64_t*)(phi11 + 56);
				phi337 = phi18 & 0xffffffff;
				phi5 = *(uint32_t*)(phi11 + 68);
				phi338 = phi21;
				phi339 = phi19;
				phi340 = phi11;
			}
			phi16 = phi335;
			phi18 = phi337;
			phi13 = phi338;
			phi19 = phi339;
			phi11 = phi340;
			phi341 = *(uint64_t*)(phi11 + 48);
			phi342 = phi17;
			phi343 = phi16;
			phi344 = (__zext uint64_t)phi17;
			phi8 = phi16;
			phi345 = phi17;
			phi_in346 = phi11;
		}
		else 
		{
			phi341 = *(uint64_t*)(phi11 + 48);
			phi342 = phi13;
			phi343 = phi5;
			phi344 = phi7 & 0xffffffff;
			phi8 = *anon14;
			phi345 = phi9;
			phi_in346 = phi11;
		}
		if (phi341 != 8)
		{
			phi4 = phi342;
			phi5 = phi343;
			phi7 = phi344;
			phi9 = phi345;
			phi10 = phi341 + 4;
			phi11 = phi_in346;
		}
		phi20 = phi336 + 4;
		phi29 = phi_in334;
		phi34 = phi327 + 4;
		phi43 = phi_in317;
		phi45 = phi_in320;
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
		uint64_t phi25;
		uint32_t anon26;
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
			uint32_t phi_in18;
			uint32_t phi20;
			uint32_t phi22;
			uint32_t phi23;
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
				*phi10 = *anon17;
			}
			else 
			{
				phi_in18 = *anon17;
				if (*phi10 < *anon17)
				{
					phi14 = *anon13 & 0xf;
					phi15 = *anon13;
					phi16 = *phi10 & 0xf;
					*anon17 = *phi10;
					*phi10 = *anon17 & 0xf;
				}
			}
			if (*anon13 >= *phi10 && *phi10 < *anon17 || *anon13 < *phi10 && *anon13 < *anon17)
			{
				uint32_t phi_in19 = phi14;
				phi20 = phi15;
				uint32_t phi_in21 = phi16;
				phi_in18 = phi_in21;
				phi22 = phi_in19;
				phi23 = *anon17;
			}
			if (*anon13 >= *anon17 && *anon13 < *phi10)
			{
				phi_in18 = *anon17 & 0xf;
				phi22 = *phi10;
				phi23 = *anon13;
				phi20 = *phi10;
			}
			if (*anon13 >= *phi10 && *phi10 < *anon17 || *anon13 < *phi10 && *anon13 < *anon17 || *anon13 >= *anon17 && *anon13 < *phi10)
			{
				*phi10 = phi22;
				*anon13 = phi23;
				if (phi20 - *anon13 <= 4294967295)
				{
					phi_in18 = *(uint32_t*)((phi12 & 0xc) - 4);
				}
			}
			uint32_t phi24 = phi_in18;
			phi25 = 6301636;
			anon26 = phi24 + 1 & 0xff;
			if (anon26 != 0)
			{
				phi25 = 6301636;
				uint64_t anon27 = phi12 + 12;
				phi10 = (uint32_t*)(anon27 & 0xc);
				phi_in11 = anon27;
				if (phi12 == 6301984)
				{
					break;
				}
			}
		}
		while (anon26 != 0);
		do
		{
			uint32_t phi_in30;
			uint32_t phi31;
			uint32_t phi32;
			uint32_t* anon33;
			uint32_t phi34;
			uint32_t phi_in35;
			uint32_t phi37;
			uint32_t phi38;
			uint32_t phi39;
			uint32_t* anon28 = (uint32_t*)(phi25 + 4);
			uint32_t* anon29 = (uint32_t*)phi25;
			if (*anon28 < *anon29)
			{
				*anon29 = *anon28;
				*anon28 = *anon29;
				phi_in30 = *anon29;
				phi31 = *anon29;
				phi32 = *anon28;
				anon33 = (uint32_t*)(phi25 - 4);
				*anon33 = *anon28;
				phi34 = *anon33;
			}
			else 
			{
				phi_in35 = *anon33;
				if (*anon29 < *anon33)
				{
					phi_in30 = *anon28 & 0xf;
					phi31 = *anon28;
					phi32 = *anon29 & 0xf;
					*anon33 = *anon29;
					phi34 = *anon33 & 0xf;
				}
			}
			if (*anon28 >= *anon29 && *anon29 < *anon33 || *anon28 < *anon29 && *anon28 < *anon33)
			{
				uint32_t phi_in36 = phi31;
				phi_in35 = phi32;
				*anon29 = phi34;
				phi37 = phi_in30;
				phi38 = *anon33;
				phi39 = phi_in36;
			}
			if (*anon28 >= *anon33 && *anon28 < *anon29)
			{
				phi_in35 = *anon33 & 0xf;
				phi37 = *anon29;
				phi38 = *anon28;
				phi39 = *anon29;
			}
			if (*anon28 >= *anon29 && *anon29 < *anon33 || *anon28 < *anon29 && *anon28 < *anon33 || *anon28 >= *anon33 && *anon28 < *anon29)
			{
				*anon29 = phi37;
				*anon28 = phi38;
				if (phi39 - *anon28 <= 4294967295)
				{
					phi_in35 = *(uint32_t*)((phi25 & 0xf) - 4);
				}
			}
			uint32_t phi40 = phi_in35;
			anon41 = phi40 + 1 & 0xff;
			if (anon41 != 0)
			{
				phi25 = phi25 + 12;
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
		uint32_t phi18;
		uint32_t anon19;
		uint32_t* anon20;
		uint32_t* anon21;
		uint32_t* anon25;
		uint64_t anon26;
		uint16_t** phi34;
		uint8_t anon35;
		uint16_t** anon39;
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
		struct _IO_FILE** anon30 = (struct _IO_FILE**)0x602480;
		uint32_t anon29 = _IO_getc(*anon30);
		uint8_t anon32 = (uint8_t)anon29;
		bool anon31 = anon32 == 108;
		if (anon31)
		{
			uint16_t** anon33 = __ctype_b_loc();
			phi_in9 = phi11;
			phi_in10 = phi12;
			phi34 = anon33;
			anon35 = *(uint8_t*)(*(uint64_t*)anon33 + 217) & 8;
			if (anon35 == 0)
			{
				break;
			}
		}
		bool anon36 = anon32 == 105;
		if (anon36)
		{
			printf((uint8_t*)0x401dba);
		}
		bool anon37 = anon32 == 115;
		if (anon37)
		{
			q(4200890, phi12 & 0xffffffff);
		}
		bool anon38 = anon32 == 115 || anon32 == 108 || anon32 == 105 || anon32 == 113;
		if (!anon38 || anon32 == 105 || anon32 == 115)
		{
			anon39 = __ctype_b_loc();
			phi34 = anon39;
		}
		int64_t anon41 = (__sext int64_t)anon32;
		uint8_t anon40 = *(uint8_t*)(*(uint64_t*)anon39 + (anon41 >> 7 | 1)) & 8;
		if (anon40 != 0 && anon36 || anon40 != 0 && anon37 || anon40 != 0 && (!anon38) || anon35 != 0 && anon31)
		{
			uint32_t phi43;
			uint32_t anon42 = _IO_getc(*anon30);
			uint32_t anon44 = (uint32_t)(anon41 + 4294967248);
			phi43 = anon44;
			uint32_t anon45 = anon42 << 24 >> 24;
			if ((*(uint8_t*)(*(uint64_t*)phi34 + ((__zext uint64_t)anon45 << 1 | 1)) & 8) != 0)
			{
				phi43 = anon44 * 10 + anon45 - 48;
			}
			if (*anon25 != phi43 && *(uint32_t*)(anon26 + 6301636) != phi43)
			{
				phi_in9 = phi11;
				phi_in10 = phi12;
			}
			if (*anon25 == phi43 || *anon25 != phi43 && *(uint32_t*)(anon26 + 6301636) == phi43 || *anon25 != phi43 && *(uint32_t*)(anon26 + 6301636) != phi43 && *(uint32_t*)(anon26 + 6301640) == phi43)
			{
				int64_t anon46 = (__sext int64_t)phi43;
				phi_in9 = anon46;
				phi_in10 = anon46;
			}
			break;
		}
		uint32_t* anon47 = (uint32_t*)(anon17 + 6301504);
		if (*anon47 != 0 && *(uint32_t*)(anon17 + 6300992) != 0 && *(uint32_t*)(anon17 + 6300864) == 0 && (anon19 != *anon20 || anon19 == *anon20 && *anon21 == 3 || anon19 == *anon20 && *anon21 == 3))
		{
			*anon47 = 0;
			uint64_t anon48 = random();
			uint32_t anon49 = (uint32_t)anon48;
			*(uint32_t*)(((__sext int64_t)(anon49 + (((uint32_t)((anon48 & 0xffffffff) * 2290649225 >> 32) + anon49 >> 4) - (anon49 >> 31)) * 4294967266) << 2) + 6301504) = 1;
			uint64_t anon50 = random();
			printf((uint8_t*)0x401e28);
			*anon15 = *anon15 - 10;
			uint32_t anon52 = (uint32_t)anon50;
			int64_t anon51 = (__sext int64_t)(anon52 + ((uint32_t)((anon50 & 0xffffffff) * 2290649225 + (anon50 << 32) >> 36) - (anon52 >> 31)) * 4294967266);
			phi_in9 = anon51;
			phi_in10 = anon51;
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
		if (dispatch13 == 1 || dispatch13 == 0 || anon32 == 113)
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
