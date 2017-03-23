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
	struct nanon5 = n(4195954);
	uint64_t anon4 = anon5.rax;
	*(uint64_t*)anon2 = anon4;
	uint64_t anon6 = anon3 - 16;
	*(uint64_t*)anon6 = anon2;
	uint64_t anon7 = anon5.rdx;
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
	*(uint64_t*)(phi10 + 48) = 0;
	uint64_t anon12 = (uint64_t)&alloca1;
	phi10 = anon12;
	while (true)
	{
		uint64_t phi13;
		uint32_t phi26;
		uint64_t phi30;
		uint64_t phi31;
		uint64_t phi43;
		uint64_t phi44;
		uint64_t phi_in306;
		uint64_t phi317;
		uint32_t phi_in324;
		uint64_t phi_in325;
		uint64_t phi328;
		uint64_t phi333;
		uint32_t phi334;
		uint32_t phi335;
		uint64_t phi336;
		uint32_t phi337;
		uint32_t phi338;
		uint64_t phi339;
		*(uint32_t*)(phi13 + 68) = phi5;
		if (phi11 < *anon8)
		{
			uint32_t phi326;
			uint32_t phi327;
			uint64_t phi329;
			uint32_t phi330;
			uint32_t phi331;
			uint64_t phi332;
			*(uint64_t*)(phi10 + 16) = anon9 * 12;
			*(uint32_t*)(phi10 + 40) = (uint32_t)phi7 + 5;
			uint32_t phi14 = *(uint32_t*)(phi13 + 68);
			uint64_t phi15 = (__zext uint64_t)phi4;
			uint32_t phi16 = phi4;
			uint32_t phi17 = *(uint32_t*)(phi13 + 68);
			*(uint64_t*)(phi13 + 56) = 0;
			phi13 = phi10;
			uint32_t phi18 = phi16;
			int64_t anon20 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi13 + 56) + *(uint64_t*)(phi13 + 16) + 6301632);
			uint32_t* anon19 = (uint32_t*)((anon20 << 2) + 6300992);
			if (phi17 < *anon19)
			{
				uint32_t phi313;
				uint32_t phi314;
				uint32_t phi315;
				uint32_t phi316;
				uint32_t phi318;
				uint32_t phi319;
				uint32_t phi320;
				uint32_t phi321;
				uint64_t phi322;
				uint64_t phi323;
				*anon19 = *(uint32_t*)(phi13 + 4);
				*(uint64_t*)(phi13 + 32) = anon20 * 12;
				*(uint32_t*)(phi13 + 44) = (uint32_t)phi15 + 6;
				uint32_t phi21 = phi18;
				uint32_t phi22 = phi18;
				uint32_t phi23 = phi18;
				uint32_t phi24 = phi18;
				uint32_t phi25 = phi18;
				phi26 = phi18;
				uint32_t phi27 = phi18;
				uint32_t phi28 = phi18;
				uint32_t phi29 = phi18;
				phi30 = (__zext uint64_t)phi18;
				*(uint64_t*)(phi31 + 72) = 0;
				uint64_t phi32 = phi13;
				uint32_t phi33 = phi18;
				uint32_t phi34 = phi27;
				uint32_t phi35 = phi29;
				uint64_t phi36 = phi30;
				phi31 = phi32;
				int64_t anon38 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi31 + 72) + *(uint64_t*)(phi31 + 32) + 6301632);
				uint32_t* anon37 = (uint32_t*)((anon38 << 2) + 6300992);
				if (*(uint32_t*)(phi31 + 4) < *anon37)
				{
					uint32_t phi87;
					uint64_t phi104;
					uint32_t phi303;
					uint32_t phi305;
					uint32_t phi307;
					uint32_t phi308;
					uint32_t phi309;
					uint32_t phi310;
					uint32_t phi311;
					uint32_t phi312;
					*anon37 = *(uint32_t*)(phi31 + 24);
					*(uint32_t*)(phi31 + 64) = (uint32_t)phi36 + 7;
					uint32_t phi39 = phi22;
					uint32_t phi40 = phi23;
					uint32_t phi41 = phi24;
					uint32_t phi42 = phi25;
					phi43 = 0;
					phi44 = anon38 * 12;
					int64_t anon46 = (__sext int64_t)*(uint32_t*)(phi43 + phi44 + 6301632);
					uint32_t* anon45 = (uint32_t*)((anon46 << 2) + 6300992);
					if (*(uint32_t*)(phi31 + 24) < *anon45)
					{
						uint32_t phi50;
						uint64_t phi304;
						*anon45 = *(uint32_t*)(phi31 + 28);
						uint32_t phi47 = phi21;
						uint32_t phi48 = phi33;
						uint32_t phi49 = phi39;
						uint32_t anon51 = (uint32_t)phi36 + 8;
						phi50 = anon51;
						uint32_t phi_in52 = phi40;
						uint32_t phi_in53 = phi41;
						uint32_t phi_in54 = anon51;
						uint32_t phi55 = phi42;
						uint32_t phi56 = phi26;
						uint32_t phi57 = anon51;
						uint32_t phi58 = anon51;
						uint32_t phi59 = anon51;
						uint32_t phi60 = phi34;
						uint32_t phi_in61 = anon51;
						uint32_t phi62 = anon51;
						uint32_t phi_in63 = phi28;
						uint32_t phi64 = anon51;
						uint32_t phi_in65 = anon51;
						uint32_t phi66 = phi35;
						uint64_t phi_in67 = phi44;
						uint32_t phi68 = anon51;
						uint32_t phi69 = anon51;
						uint32_t phi_in70 = anon51;
						uint64_t phi_in71 = phi31;
						uint64_t phi72 = 0;
						uint64_t phi73 = anon46 * 12;
						uint64_t phi74 = phi36;
						do
						{
							uint32_t phi_in75 = phi47;
							uint32_t phi76 = phi48;
							uint32_t phi77 = phi49;
							uint32_t phi_in78 = phi56;
							uint32_t phi79 = phi58;
							uint32_t phi_in80 = phi59;
							uint32_t phi_in81 = phi64;
							uint32_t phi82 = phi68;
							uint32_t phi_in83 = phi69;
							uint64_t phi_in84 = phi72;
							uint32_t phi85 = phi_in75;
							uint32_t phi_in86 = phi_in52;
							phi87 = phi_in53;
							uint32_t phi_in88 = phi_in54;
							uint32_t phi89 = phi55;
							uint64_t phi90 = phi73;
							uint32_t phi91 = phi_in78;
							uint32_t phi92 = phi57;
							uint32_t phi93 = phi79;
							phi59 = phi_in80;
							uint32_t phi_in94 = phi60;
							uint32_t phi95 = phi_in61;
							uint32_t phi96 = phi62;
							uint32_t phi_in97 = phi_in81;
							uint32_t phi98 = phi_in65;
							uint32_t phi_in99 = phi66;
							uint64_t phi100 = phi_in67;
							uint32_t phi101 = phi82;
							uint32_t phi102 = phi_in83;
							uint32_t phi_in103 = phi_in70;
							phi104 = phi_in71;
							phi74 = phi74;
							int64_t anon106 = (__sext int64_t)*(uint32_t*)(phi_in84 + phi73 + 6301632);
							uint32_t* anon105 = (uint32_t*)((anon106 << 2) + 6300992);
							if (*(uint32_t*)(phi_in71 + 28) < *anon105)
							{
								uint64_t phi124;
								*anon105 = *(uint32_t*)(phi_in71 + 40);
								*(uint32_t*)(phi_in71 + 120) = (uint32_t)phi74 + 9;
								uint64_t phi_in107 = 0;
								uint32_t phi108 = phi76;
								uint32_t phi109 = phi77;
								uint32_t phi110 = phi50;
								uint32_t phi_in111 = phi_in52;
								uint32_t phi112 = phi_in54;
								uint32_t phi113 = phi_in78;
								uint32_t phi114 = phi_in80;
								uint32_t phi115 = phi_in61;
								uint32_t phi116 = phi_in63;
								uint32_t phi117 = phi_in81;
								uint64_t phi_in118 = phi_in84;
								uint64_t phi119 = phi_in67;
								uint64_t phi120 = phi73;
								uint32_t phi121 = phi_in83;
								uint32_t phi122 = phi_in70;
								uint64_t phi_in123 = phi74 & 0xffffffff;
								do
								{
									phi124 = phi_in107;
									uint32_t phi125 = phi108;
									uint32_t phi126 = phi109;
									uint32_t phi127 = phi110;
									uint32_t phi128 = phi112;
									uint32_t phi_in129 = phi55;
									uint32_t phi_in130 = phi113;
									uint32_t phi131 = phi57;
									uint32_t phi132 = phi79;
									uint32_t phi133 = phi114;
									uint32_t phi_in134 = phi60;
									uint32_t phi135 = phi115;
									uint32_t phi_in136 = phi62;
									uint32_t phi137 = phi116;
									uint32_t phi138 = phi117;
									uint32_t phi_in139 = phi66;
									uint64_t phi_in140 = phi119;
									uint64_t phi141 = phi120;
									uint32_t phi_in142 = phi121;
									uint32_t phi143 = phi125;
									uint32_t phi144 = phi126;
									phi50 = phi127;
									uint32_t phi145 = phi_in111;
									uint32_t phi146 = phi_in53;
									uint32_t phi147 = phi_in129;
									phi91 = phi_in130;
									uint32_t phi148 = phi131;
									uint32_t phi149 = phi132;
									phi114 = phi133;
									uint32_t phi150 = phi_in134;
									phi_in61 = phi135;
									phi62 = phi_in136;
									phi_in81 = phi138;
									uint32_t phi151 = phi_in65;
									phi_in84 = phi_in118;
									uint32_t phi152 = phi_in139;
									uint64_t phi153 = phi_in140;
									uint32_t phi154 = phi_in142;
									uint64_t phi155 = phi_in123;
									int64_t anon157 = (__sext int64_t)*(uint32_t*)(phi124 + anon106 * 12 + 6301632);
									uint32_t* anon156 = (uint32_t*)((anon157 << 2) + 6300992);
									if (*(uint32_t*)(phi_in71 + 40) < *anon156)
									{
										uint64_t phi170;
										uint64_t phi175;
										*anon156 = *(uint32_t*)(phi_in71 + 44);
										uint64_t phi_in158 = 0;
										uint32_t phi159 = phi_in75;
										uint32_t phi_in160 = phi_in111;
										uint32_t phi_in161 = phi_in53;
										uint32_t phi162 = phi128;
										uint32_t phi163 = phi_in129;
										uint32_t phi164 = phi_in130;
										uint32_t phi165 = phi_in136;
										uint32_t phi166 = phi137;
										uint32_t phi_in167 = phi_in65;
										uint64_t phi168 = phi_in118;
										uint32_t phi_in169 = phi_in139;
										*(uint64_t*)(phi170 + 104) = phi_in140;
										uint64_t phi171 = phi141;
										uint32_t phi_in172 = phi_in142;
										uint64_t phi173 = phi_in71;
										uint64_t phi_in174 = phi_in123;
										do
										{
											uint64_t phi188;
											phi175 = phi_in158;
											uint32_t phi176 = phi159;
											uint32_t phi_in177 = phi125;
											uint32_t phi_in178 = phi126;
											uint32_t phi_in179 = phi127;
											uint32_t phi_in180 = phi163;
											*(uint32_t*)(phi170 + 124) = phi131;
											uint32_t phi181 = phi133;
											uint32_t phi182 = phi_in134;
											uint32_t phi183 = phi135;
											uint32_t phi_in184 = phi165;
											uint32_t phi_in185 = phi166;
											uint32_t phi_in186 = phi138;
											uint32_t phi187 = phi_in167;
											*(uint64_t*)(phi188 + 80) = phi168;
											*(uint64_t*)(phi170 + 112) = phi171;
											uint32_t phi189 = phi82;
											uint32_t phi190 = phi122;
											phi170 = phi173;
											uint32_t phi191 = phi176;
											phi143 = phi_in177;
											uint32_t phi_in192 = phi_in178;
											phi127 = phi_in179;
											phi_in111 = phi_in160;
											uint32_t phi193 = phi162;
											phi_in129 = phi_in180;
											phi_in130 = phi164;
											phi131 = *(uint32_t*)(phi170 + 124);
											uint32_t phi194 = phi132;
											uint32_t phi_in195 = phi183;
											phi165 = phi_in184;
											uint32_t phi196 = phi_in185;
											uint32_t phi197 = phi_in186;
											phi168 = *(uint64_t*)(phi188 + 80);
											uint32_t phi198 = phi_in169;
											uint64_t phi199 = *(uint64_t*)(phi170 + 104);
											uint64_t phi200 = *(uint64_t*)(phi170 + 112);
											phi82 = phi189;
											uint32_t phi201 = phi_in172;
											uint32_t phi202 = phi190;
											uint64_t phi203 = phi170;
											uint64_t phi204 = phi_in174;
											int64_t anon206 = (__sext int64_t)*(uint32_t*)(phi175 + anon157 * 12 + 6301632);
											uint32_t* anon205 = (uint32_t*)((anon206 << 2) + 6300992);
											if (*(uint32_t*)(phi170 + 44) < *anon205)
											{
												*anon205 = *(uint32_t*)(phi170 + 64);
												phi191 = phi176;
												uint32_t phi207 = phi_in177;
												uint32_t phi208 = phi_in178;
												uint32_t phi209 = phi_in179;
												uint64_t phi210 = phi170;
												uint32_t phi_in211 = phi_in160;
												uint32_t phi212 = phi_in161;
												uint32_t phi_in213 = phi_in180;
												uint32_t phi_in214 = phi164;
												uint32_t phi215 = *(uint32_t*)(phi170 + 124);
												uint32_t phi216 = phi132;
												uint32_t phi217 = phi181;
												uint32_t phi218 = phi182;
												uint32_t phi219 = phi_in184;
												uint32_t phi220 = phi_in185;
												uint32_t phi221 = phi_in186;
												uint32_t phi_in222 = phi_in169;
												uint64_t phi223 = *(uint64_t*)(phi170 + 104);
												phi200 = *(uint64_t*)(phi170 + 112);
												uint32_t phi224 = phi_in172;
												uint64_t phi225 = phi_in174;
												int64_t anon228 = anon206 * 12;
												int64_t anon227 = (__sext int64_t)*(uint32_t*)(anon228 + 6301636);
												uint32_t* anon226 = (uint32_t*)((anon227 << 2) + 6300992);
												if (*(uint32_t*)(phi170 + 64) < *anon226)
												{
													*anon226 = phi181;
													uint32_t phi_in229 = phi_in177;
													uint32_t phi_in230 = phi_in178;
													uint32_t phi231 = phi_in179;
													uint32_t phi232 = phi_in160;
													*(uint32_t*)(phi170 + 96) = phi_in161;
													uint32_t phi233 = phi162;
													uint32_t phi234 = phi_in180;
													uint64_t phi235 = anon227;
													uint32_t phi_in236 = phi182;
													uint32_t phi_in237 = phi_in185;
													uint64_t phi238 = *(uint64_t*)(phi188 + 80);
													uint32_t phi239 = phi_in169;
													*(uint64_t*)(phi170 + 112) = *(uint64_t*)(phi170 + 112);
													uint64_t phi240 = phi_in174;
													if (phi132 < phi181)
													{
														*(uint64_t*)(phi170 + 104) = *(uint64_t*)(phi170 + 104);
														*(uint32_t*)(phi170 + 96) = phi164;
														*(uint64_t*)(phi170 + 88) = *(uint64_t*)(phi188 + 80);
														*(uint64_t*)(phi170 + 80) = anon227;
														uint64_t anon241 = (__zext uint64_t)phi181;
														w(4197873, anon12, (__sext int64_t)phi181, anon241, anon241);
														phi176 = *(uint32_t*)(arg1 - 96);
														phi_in229 = *(uint32_t*)(arg1 - 96);
														phi_in230 = *(uint32_t*)(arg1 - 96);
														phi231 = *(uint32_t*)(arg1 - 68);
														phi232 = *(uint32_t*)(arg1 - 96);
														*(uint32_t*)(phi170 + 96) = *(uint32_t*)(arg1 - 96);
														phi170 = anon12;
														phi233 = *(uint32_t*)(arg1 - 68);
														phi234 = *(uint32_t*)(arg1 - 96);
														phi235 = *(uint64_t*)(arg1 - 112);
														phi164 = *(uint32_t*)(arg1 - 96);
														phi_in236 = *(uint32_t*)(arg1 - 96);
														phi_in237 = *(uint32_t*)(arg1 - 96);
														phi238 = *(uint64_t*)(arg1 - 104);
														phi239 = *(uint32_t*)(arg1 - 96);
														*(uint64_t*)(phi170 + 104) = *(uint64_t*)(arg1 - 88);
														*(uint64_t*)(phi170 + 112) = *(uint64_t*)(arg1 - 80);
														phi240 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
													}
													uint32_t phi_in242 = phi176;
													uint32_t phi_in243 = phi231;
													*(uint32_t*)(phi210 + 112) = phi233;
													uint32_t phi244 = phi234;
													*(uint64_t*)(phi170 + 80) = phi235;
													uint32_t phi245 = phi164;
													*(uint64_t*)(phi170 + 88) = phi238;
													uint32_t phi246 = phi239;
													uint64_t phi247 = *(uint64_t*)(phi170 + 112);
													uint64_t phi248 = phi240;
													uint32_t phi249 = phi_in242;
													uint32_t phi250 = phi_in229;
													uint32_t phi251 = phi_in230;
													uint32_t phi_in252 = phi_in243;
													phi210 = phi170;
													uint32_t phi253 = *(uint32_t*)(phi170 + 96);
													uint64_t phi254 = *(uint64_t*)(phi170 + 80);
													phi218 = phi_in236;
													uint32_t phi_in255 = phi_in237;
													uint64_t phi256 = *(uint64_t*)(phi170 + 88);
													*(uint64_t*)(phi210 + 96) = *(uint64_t*)(phi170 + 104);
													int64_t anon257 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi170 + 80) * 12 + 6301636);
													if (*(uint32_t*)(phi210 + 112) < *(uint32_t*)((anon257 << 2) + 6300992))
													{
														*(uint32_t*)(phi170 + 124) = *(uint32_t*)(phi210 + 112);
														*(uint64_t*)(phi170 + 112) = phi247;
														uint64_t anon258 = (__zext uint64_t)*(uint32_t*)(phi170 + 120);
														w(4197793, anon12, anon257, anon258, anon258);
														phi249 = *(uint32_t*)(arg1 - 96);
														phi250 = *(uint32_t*)(arg1 - 96);
														phi251 = *(uint32_t*)(arg1 - 96);
														phi_in252 = alloca1.field14;
														phi232 = *(uint32_t*)(arg1 - 96);
														phi210 = anon12;
														phi253 = *(uint32_t*)(arg1 - 96);
														*(uint32_t*)(phi210 + 112) = alloca1.field14;
														phi244 = *(uint32_t*)(arg1 - 96);
														phi254 = *(uint64_t*)(arg1 - 112);
														phi245 = *(uint32_t*)(arg1 - 96);
														phi218 = *(uint32_t*)(arg1 - 96);
														phi_in255 = *(uint32_t*)(arg1 - 96);
														phi256 = *(uint64_t*)(arg1 - 104);
														phi246 = *(uint32_t*)(arg1 - 96);
														*(uint64_t*)(phi210 + 96) = *(uint64_t*)(arg1 - 88);
														phi247 = *(uint64_t*)(arg1 - 80);
														phi248 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
													}
													uint32_t phi_in259 = phi249;
													phi207 = phi250;
													uint32_t phi_in260 = phi251;
													*(uint32_t*)(phi210 + 88) = phi232;
													uint32_t phi_in261 = phi253;
													phi162 = *(uint32_t*)(phi210 + 112);
													uint32_t phi_in262 = phi244;
													uint32_t phi_in263 = phi245;
													*(uint64_t*)(phi210 + 80) = phi256;
													uint32_t phi_in264 = phi246;
													*(uint64_t*)(phi210 + 104) = phi247;
													phi225 = phi248;
													phi191 = phi_in259;
													phi208 = phi_in260;
													phi209 = phi_in252;
													phi_in211 = *(uint32_t*)(phi210 + 88);
													phi212 = phi_in261;
													phi_in213 = phi_in262;
													phi_in214 = phi_in263;
													phi215 = phi162;
													phi216 = phi162;
													phi217 = phi162;
													phi183 = phi162;
													phi219 = phi162;
													phi220 = phi_in255;
													phi221 = phi162;
													phi187 = phi162;
													*(uint64_t*)(phi188 + 80) = *(uint64_t*)(phi210 + 80);
													phi_in222 = phi_in264;
													phi223 = *(uint64_t*)(phi210 + 96);
													phi200 = *(uint64_t*)(phi210 + 104);
													phi189 = phi162;
													phi224 = phi162;
													phi190 = phi162;
													int64_t anon265 = (__sext int64_t)*(uint32_t*)(phi254 * 12 + 6301640);
													if (phi162 < *(uint32_t*)((anon265 << 2) + 6300992))
													{
														*(uint32_t*)(phi210 + 112) = phi162;
														uint64_t anon266 = (__zext uint64_t)*(uint32_t*)(phi210 + 120);
														w(4197395, anon12, anon265, anon266, anon266);
														phi191 = *(uint32_t*)(arg1 - 104);
														phi207 = *(uint32_t*)(arg1 - 104);
														phi208 = *(uint32_t*)(arg1 - 104);
														phi209 = *(uint32_t*)(arg1 - 80);
														phi210 = anon12;
														phi_in211 = *(uint32_t*)(arg1 - 104);
														phi212 = *(uint32_t*)(arg1 - 104);
														phi162 = *(uint32_t*)(arg1 - 80);
														phi_in213 = *(uint32_t*)(arg1 - 104);
														phi_in214 = *(uint32_t*)(arg1 - 104);
														phi215 = *(uint32_t*)(arg1 - 80);
														phi216 = *(uint32_t*)(arg1 - 80);
														phi217 = *(uint32_t*)(arg1 - 80);
														phi218 = *(uint32_t*)(arg1 - 104);
														phi183 = *(uint32_t*)(arg1 - 80);
														phi219 = *(uint32_t*)(arg1 - 80);
														phi220 = *(uint32_t*)(arg1 - 104);
														phi221 = *(uint32_t*)(arg1 - 80);
														phi187 = *(uint32_t*)(arg1 - 80);
														*(uint64_t*)(phi188 + 80) = *(uint64_t*)(arg1 - 112);
														phi_in222 = *(uint32_t*)(arg1 - 104);
														phi223 = *(uint64_t*)(arg1 - 96);
														phi200 = *(uint64_t*)(arg1 - 88);
														phi189 = *(uint32_t*)(arg1 - 80);
														phi224 = *(uint32_t*)(arg1 - 80);
														phi190 = *(uint32_t*)(arg1 - 80);
														phi225 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
													}
												}
												*(uint32_t*)(phi188 + 88) = phi207;
												uint32_t phi_in267 = phi208;
												*(uint32_t*)(phi188 + 112) = phi209;
												phi188 = phi210;
												phi_in111 = phi_in211;
												uint32_t phi268 = phi212;
												phi193 = phi162;
												phi_in130 = phi_in214;
												uint32_t phi_in269 = phi215;
												uint32_t phi_in270 = phi216;
												phi181 = phi217;
												uint32_t phi_in271 = phi218;
												uint32_t phi_in272 = phi183;
												uint32_t phi_in273 = phi219;
												uint32_t phi_in274 = phi220;
												phi197 = phi221;
												uint64_t phi275 = *(uint64_t*)(phi188 + 80);
												*(uint64_t*)(phi188 + 96) = phi223;
												uint32_t phi_in276 = phi189;
												uint32_t phi_in277 = phi224;
												uint32_t phi_in278 = phi190;
												uint64_t phi_in279 = phi225;
												phi143 = *(uint32_t*)(phi188 + 88);
												phi_in192 = phi_in267;
												phi127 = *(uint32_t*)(phi188 + 112);
												phi_in161 = phi268;
												phi_in129 = phi_in213;
												phi131 = phi_in269;
												phi194 = phi_in270;
												phi182 = phi_in271;
												phi_in195 = phi_in272;
												phi165 = phi_in273;
												phi196 = phi_in274;
												phi168 = phi275;
												phi198 = phi_in222;
												phi199 = *(uint64_t*)(phi188 + 96);
												phi82 = phi_in276;
												phi201 = phi_in277;
												phi202 = phi_in278;
												phi203 = phi188;
												phi204 = phi_in279;
												int64_t anon281 = (__sext int64_t)*(uint32_t*)(anon228 + 6301640);
												uint32_t* anon280 = (uint32_t*)((anon281 << 2) + 6300992);
												if (*(uint32_t*)(phi188 + 64) < *anon280)
												{
													*anon280 = *(uint32_t*)(phi188 + 112);
													uint32_t phi282 = phi191;
													uint32_t phi_in283 = *(uint32_t*)(phi188 + 88);
													uint32_t phi284 = phi_in267;
													uint32_t phi285 = *(uint32_t*)(phi188 + 112);
													uint32_t phi286 = phi_in111;
													uint32_t phi287 = phi_in213;
													uint32_t phi288 = phi_in130;
													uint32_t phi289 = phi_in271;
													uint32_t phi290 = phi_in274;
													uint32_t phi_in291 = phi_in222;
													uint64_t phi292 = *(uint64_t*)(phi188 + 96);
													*(uint64_t*)(phi188 + 104) = phi200;
													uint64_t phi293 = phi_in279;
													int64_t anon295 = anon281 * 12;
													int64_t anon294 = (__sext int64_t)*(uint32_t*)(anon295 + 6301636);
													if (*(uint32_t*)(phi188 + 112) < *(uint32_t*)((anon294 << 2) + 6300992))
													{
														*(uint64_t*)(phi188 + 104) = phi200;
														*(uint64_t*)(phi188 + 80) = phi275;
														uint64_t anon296 = (__zext uint64_t)*(uint32_t*)(phi188 + 120);
														w(4197948, anon12, anon294, anon296, anon296);
														phi282 = *(uint32_t*)(arg1 - 104);
														phi_in283 = *(uint32_t*)(arg1 - 104);
														phi284 = *(uint32_t*)(arg1 - 104);
														phi285 = *(uint32_t*)(arg1 - 80);
														phi286 = *(uint32_t*)(arg1 - 104);
														phi268 = *(uint32_t*)(arg1 - 104);
														phi287 = *(uint32_t*)(arg1 - 104);
														phi288 = *(uint32_t*)(arg1 - 104);
														phi289 = *(uint32_t*)(arg1 - 104);
														phi290 = *(uint32_t*)(arg1 - 104);
														phi275 = *(uint64_t*)(arg1 - 112);
														phi_in291 = *(uint32_t*)(arg1 - 104);
														phi292 = *(uint64_t*)(arg1 - 96);
														*(uint64_t*)(phi188 + 104) = *(uint64_t*)(arg1 - 88);
														phi188 = anon12;
														phi293 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
													}
													*(uint32_t*)(phi188 + 88) = phi282;
													uint32_t phi_in297 = phi284;
													phi197 = phi285;
													uint32_t phi_in298 = phi286;
													phi_in161 = phi268;
													uint32_t phi_in299 = phi287;
													phi_in130 = phi288;
													phi182 = phi289;
													phi196 = phi290;
													*(uint64_t*)(phi188 + 80) = phi275;
													*(uint64_t*)(phi188 + 96) = phi292;
													uint64_t phi_in300 = phi293;
													phi191 = *(uint32_t*)(phi188 + 88);
													phi143 = phi_in283;
													phi_in192 = phi_in297;
													phi127 = phi197;
													phi_in111 = phi_in298;
													phi193 = phi197;
													phi_in129 = phi_in299;
													phi131 = phi197;
													phi194 = phi197;
													phi181 = phi197;
													phi_in195 = phi197;
													phi165 = phi197;
													phi187 = phi197;
													phi168 = *(uint64_t*)(phi188 + 80);
													phi198 = phi_in291;
													phi199 = *(uint64_t*)(phi188 + 96);
													phi200 = *(uint64_t*)(phi188 + 104);
													phi82 = phi197;
													phi201 = phi197;
													phi202 = phi197;
													phi203 = phi188;
													phi204 = phi_in300;
													int64_t anon301 = (__sext int64_t)*(uint32_t*)(anon295 + 6301640);
													if (phi197 < *(uint32_t*)((anon301 << 2) + 6300992))
													{
														*(uint32_t*)(phi188 + 112) = phi197;
														uint64_t anon302 = (__zext uint64_t)*(uint32_t*)(phi188 + 120);
														w(4197231, anon12, anon301, anon302, anon302);
														phi191 = alloca1.field8;
														phi143 = alloca1.field8;
														phi_in192 = alloca1.field8;
														phi127 = alloca1.field12;
														phi_in111 = alloca1.field8;
														phi_in161 = alloca1.field8;
														phi193 = alloca1.field12;
														phi_in129 = alloca1.field8;
														phi_in130 = alloca1.field8;
														phi131 = alloca1.field12;
														phi194 = alloca1.field12;
														phi181 = alloca1.field12;
														phi182 = alloca1.field8;
														phi_in195 = alloca1.field12;
														phi165 = alloca1.field12;
														phi196 = alloca1.field8;
														phi197 = alloca1.field12;
														phi187 = alloca1.field12;
														phi168 = alloca1.field7;
														phi198 = alloca1.field8;
														phi199 = alloca1.field10;
														phi200 = alloca1.field11;
														phi82 = alloca1.field12;
														phi201 = alloca1.field12;
														phi202 = alloca1.field12;
														phi203 = anon12;
														phi204 = (__zext uint64_t)alloca1.field8;
													}
												}
											}
											phi149 = phi194;
											phi137 = phi196;
											phi154 = phi201;
											phi_in75 = phi191;
											phi144 = phi_in192;
											phi50 = phi127;
											phi145 = phi_in111;
											phi146 = phi_in161;
											phi128 = phi193;
											phi147 = phi_in129;
											phi91 = phi_in130;
											phi148 = phi131;
											phi114 = phi181;
											phi150 = phi182;
											phi_in61 = phi_in195;
											phi62 = phi165;
											phi_in81 = phi197;
											phi151 = phi187;
											phi_in84 = phi168;
											phi152 = phi198;
											phi153 = phi199;
											phi141 = phi200;
											phi122 = phi202;
											phi_in71 = phi203;
											phi155 = phi204;
											phi_in158 = phi175 + 4;
											phi159 = phi191;
											phi125 = phi143;
											phi126 = phi_in192;
											phi_in160 = phi_in111;
											phi162 = phi193;
											phi163 = phi_in129;
											phi164 = phi_in130;
											phi132 = phi149;
											phi133 = phi181;
											phi_in134 = phi182;
											phi135 = phi_in195;
											phi166 = phi137;
											phi138 = phi197;
											phi_in167 = phi187;
											phi_in169 = phi198;
											*(uint64_t*)(phi170 + 104) = phi199;
											phi171 = phi200;
											phi_in172 = phi154;
											phi122 = phi202;
											phi173 = phi203;
											phi_in174 = phi204;
										}
										while (phi175 != 8);
									}
									phi76 = phi143;
									phi92 = phi148;
									phi_in63 = phi137;
									phi98 = phi151;
									phi90 = phi141;
									phi102 = phi154;
									phi85 = phi_in75;
									phi77 = phi144;
									phi_in86 = phi145;
									phi87 = phi146;
									phi_in88 = phi128;
									phi89 = phi147;
									phi93 = phi149;
									phi59 = phi114;
									phi_in94 = phi150;
									phi95 = phi_in61;
									phi96 = phi62;
									phi_in97 = phi_in81;
									phi_in99 = phi152;
									phi100 = phi153;
									phi101 = phi82;
									phi_in103 = phi122;
									phi104 = phi_in71;
									phi74 = phi155;
									phi_in107 = phi124 + 4;
									phi108 = phi76;
									phi109 = phi144;
									phi110 = phi50;
									phi_in111 = phi145;
									phi_in53 = phi146;
									phi112 = phi128;
									phi55 = phi147;
									phi113 = phi91;
									phi57 = phi92;
									phi79 = phi149;
									phi60 = phi150;
									phi115 = phi_in61;
									phi116 = phi_in63;
									phi117 = phi_in81;
									phi_in65 = phi98;
									phi_in118 = phi_in84;
									phi66 = phi152;
									phi119 = phi153;
									phi120 = phi90;
									phi121 = phi102;
									phi_in123 = phi155;
								}
								while (phi124 != 8);
							}
							phi303 = phi85;
							phi304 = phi_in84;
							phi305 = phi91;
							phi_in306 = phi100;
							phi307 = phi76;
							phi308 = phi77;
							phi309 = phi_in86;
							phi310 = phi89;
							phi34 = phi_in94;
							phi311 = phi_in63;
							phi312 = phi_in99;
							phi36 = phi74;
							if (phi304 != 8)
							{
								phi47 = phi303;
								phi48 = phi76;
								phi49 = phi77;
								phi50 = phi50;
								phi_in52 = phi_in86;
								phi_in53 = phi87;
								phi_in54 = phi_in88;
								phi55 = phi89;
								phi56 = phi305;
								phi57 = phi92;
								phi58 = phi93;
								phi60 = phi_in94;
								phi_in61 = phi95;
								phi62 = phi96;
								phi64 = phi_in97;
								phi_in65 = phi98;
								phi66 = phi_in99;
								phi_in67 = phi_in306;
								phi68 = phi101;
								phi69 = phi102;
								phi_in70 = phi_in103;
								phi_in71 = phi104;
								phi72 = phi304 + 4;
								phi73 = phi90;
							}
						}
						while (phi304 != 8);
					}
					else 
					{
						phi303 = phi21;
						phi307 = phi33;
						phi308 = phi39;
						phi309 = phi40;
						phi87 = phi41;
						phi310 = phi42;
						phi_in306 = phi44;
						phi305 = phi26;
						phi34 = phi34;
						phi311 = phi28;
						phi312 = phi35;
						phi104 = phi31;
						phi36 = phi36 & 0xffffffff;
					}
					phi21 = phi303;
					phi33 = phi307;
					phi39 = phi308;
					phi40 = phi309;
					phi41 = phi87;
					phi42 = phi310;
					phi26 = phi305;
					phi28 = phi311;
					phi35 = phi312;
					phi31 = phi104;
					phi18 = phi33;
					phi313 = phi39;
					phi314 = phi40;
					phi315 = phi41;
					phi316 = phi42;
					phi317 = *(uint64_t*)(phi31 + 72);
					phi318 = phi26;
					phi319 = phi34;
					phi320 = phi28;
					phi321 = phi35;
					phi322 = phi36;
					phi323 = phi31;
				}
				else 
				{
					phi18 = phi33;
					phi313 = phi22;
					phi314 = phi23;
					phi315 = phi24;
					phi316 = phi25;
					phi317 = *(uint64_t*)(phi31 + 72);
					phi318 = phi26;
					phi319 = phi34;
					phi320 = phi28;
					phi321 = phi35;
					phi322 = phi36 & 0xffffffff;
					phi323 = phi31;
				}
				phi22 = phi313;
				phi23 = phi314;
				phi24 = phi315;
				phi25 = phi316;
				phi_in324 = phi318;
				phi27 = phi319;
				phi28 = phi320;
				phi29 = phi321;
				phi_in325 = phi322;
				phi32 = phi323;
				phi326 = *(uint32_t*)(phi32 + 68);
				phi327 = phi25;
				phi328 = *(uint64_t*)(phi32 + 56);
				phi329 = (__zext uint64_t)phi25;
				*(uint32_t*)(phi13 + 68) = *(uint32_t*)(phi32 + 68);
				phi330 = phi25;
				phi331 = *(uint32_t*)(phi32 + 68);
				phi332 = phi32;
			}
			else 
			{
				phi326 = phi14;
				phi327 = phi4;
				phi328 = *(uint64_t*)(phi13 + 56);
				phi329 = phi15 & 0xffffffff;
				phi330 = phi18;
				phi331 = phi17;
				phi332 = phi13;
			}
			phi14 = phi326;
			phi4 = phi327;
			phi15 = phi329;
			phi16 = phi330;
			phi17 = phi331;
			phi13 = phi332;
			phi333 = *(uint64_t*)(phi13 + 48);
			phi334 = phi4;
			phi335 = phi14;
			phi336 = (__zext uint64_t)phi4;
			phi337 = phi14;
			phi338 = phi4;
			phi339 = phi13;
		}
		else 
		{
			phi333 = *(uint64_t*)(phi10 + 48);
			phi334 = phi4;
			phi335 = *(uint32_t*)(phi13 + 68);
			phi336 = phi7 & 0xffffffff;
			phi337 = *anon8;
			phi338 = phi11;
			phi339 = phi10;
		}
		if (phi333 != 8)
		{
			phi4 = phi334;
			phi5 = phi335;
			phi7 = phi336;
			*anon8 = phi337;
			phi11 = phi338;
			*(uint64_t*)(phi10 + 48) = phi333 + 4;
			phi10 = phi339;
		}
		*(uint64_t*)(phi13 + 56) = phi328 + 4;
		phi26 = phi_in324;
		phi30 = phi_in325;
		*(uint64_t*)(phi31 + 72) = phi317 + 4;
		phi43 = phi43 + 4;
		phi44 = phi_in306;
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
		uint64_t phi28;
		uint32_t anon29;
		uint32_t anon45;
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
			uint32_t phi17;
			uint32_t phi18;
			uint32_t* anon19;
			uint32_t phi_in20;
			uint32_t phi24;
			uint32_t phi25;
			uint32_t phi26;
			uint64_t phi12 = phi_in11;
			uint32_t* anon13 = (uint32_t*)(phi12 + 4);
			if (*anon13 < *phi10)
			{
				*phi10 = *anon13;
				*anon13 = *phi10;
				phi14 = *phi10;
				phi15 = *phi10;
				phi16 = *anon13;
				phi17 = *anon13;
				anon19 = (uint32_t*)(phi12 - 4);
				phi18 = *anon19;
			}
			else 
			{
				phi_in20 = *anon19;
				if (*phi10 < *anon19)
				{
					phi14 = *anon13 & 0xf;
					phi15 = *anon13;
					phi16 = *phi10 & 0xf;
					phi17 = *phi10;
					phi18 = *anon19 & 0xf;
				}
			}
			if (*anon13 >= *phi10 && *phi10 < *anon19 || *anon13 < *phi10 && *anon13 < *anon19)
			{
				uint32_t phi_in21 = phi14;
				uint32_t phi_in22 = phi15;
				uint32_t phi_in23 = phi16;
				*anon19 = phi17;
				*phi10 = phi18;
				phi24 = phi_in23;
				*phi10 = phi_in21;
				phi25 = *anon19;
				phi26 = phi_in22;
			}
			if (*anon13 < *phi10)
			{
				if (*anon13 >= *anon19)
				{
					phi24 = *anon19 & 0xf;
					*phi10 = *phi10;
					phi25 = *anon13;
					phi26 = *phi10;
				}
			}
			if (*anon13 >= *phi10 && *phi10 < *anon19 || *anon13 < *phi10 && *anon13 < *anon19 || *anon13 < *phi10 && *anon13 >= *anon19)
			{
				phi_in20 = phi24;
				*anon13 = phi25;
				if (phi26 - *anon13 <= 4294967295)
				{
					phi_in20 = *(uint32_t*)((phi12 & 0xc) - 4);
				}
			}
			uint32_t phi27 = phi_in20;
			phi28 = 6301636;
			anon29 = phi27 + 1 & 0xff;
			if (anon29 != 0)
			{
				phi28 = 6301636;
				uint64_t anon30 = phi12 + 12;
				phi10 = (uint32_t*)(anon30 & 0xc);
				phi_in11 = anon30;
				if (phi12 == 6301984)
				{
					break;
				}
			}
		}
		while (anon29 != 0);
		do
		{
			uint32_t phi33;
			uint32_t phi_in34;
			uint32_t phi35;
			uint32_t phi36;
			uint32_t phi37;
			uint32_t* anon38;
			uint32_t phi_in39;
			uint32_t phi40;
			uint32_t phi41;
			uint32_t phi42;
			uint32_t phi43;
			uint32_t* anon31 = (uint32_t*)(phi28 + 4);
			uint32_t* anon32 = (uint32_t*)phi28;
			if (*anon31 < *anon32)
			{
				*anon32 = *anon31;
				*anon31 = *anon32;
				phi33 = *anon32;
				phi_in34 = *anon32;
				phi35 = *anon31;
				phi36 = *anon31;
				anon38 = (uint32_t*)(phi28 - 4);
				phi37 = *anon38;
			}
			else 
			{
				phi_in39 = *anon38;
				if (*anon32 < *anon38)
				{
					phi33 = *anon31 & 0xf;
					phi_in34 = *anon31;
					phi35 = *anon32 & 0xf;
					phi36 = *anon32;
					phi37 = *anon38 & 0xf;
				}
			}
			if (*anon31 >= *anon32 && *anon32 < *anon38 || *anon31 < *anon32 && *anon31 < *anon38)
			{
				phi40 = phi33;
				phi41 = phi35;
				*anon38 = phi36;
				*anon32 = phi37;
				phi42 = *anon38;
				phi43 = phi_in34;
			}
			if (*anon31 < *anon32)
			{
				if (*anon31 >= *anon38)
				{
					phi41 = *anon38 & 0xf;
					phi40 = *anon32;
					phi42 = *anon31;
					phi43 = *anon32;
				}
			}
			if (*anon31 >= *anon32 && *anon32 < *anon38 || *anon31 < *anon32 && *anon31 < *anon38 || *anon31 < *anon32 && *anon31 >= *anon38)
			{
				phi_in39 = phi41;
				*anon32 = phi40;
				*anon31 = phi42;
				if (phi43 - *anon31 <= 4294967295)
				{
					phi_in39 = *(uint32_t*)((phi28 & 0xf) - 4);
				}
			}
			uint32_t phi44 = phi_in39;
			anon45 = phi44 + 1 & 0xff;
			if (anon45 != 0)
			{
				phi28 = phi28 + 12;
			}
		}
		while (anon45 != 0);
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
			phi19 = phi4;
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
				phi_in5 = phi6 - 20;
				dispatch13 = 1;
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
