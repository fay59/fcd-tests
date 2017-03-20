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
		uint32_t phi_in5;
		uint32_t* anon6;
		uint32_t phi_in7;
		uint32_t phi8;
		uint32_t phi9;
		uint64_t phi3 = phi_in2;
		uint32_t* anon4 = (uint32_t*)(phi3 + 4);
		if (*anon4 < *phi1)
		{
			*anon4 = *phi1;
			*phi1 = *anon4;
			phi_in5 = *phi1;
			anon6 = (uint32_t*)(phi3 - 4);
			*anon6 = *anon4;
			phi_in7 = *anon6;
			phi8 = *phi1;
			phi9 = *anon4;
		}
		else 
		{
			phi_in5 = *anon4;
			*anon6 = *phi1;
			phi10 = *anon6;
		}
		if (*anon4 < *phi1 && *anon4 < *anon6 || *anon4 >= *phi1 && *phi1 < *anon6)
		{
			*phi1 = *anon6;
			phi_in7 = *anon6;
			phi8 = phi_in5;
			phi9 = *anon6;
		}
		if (*anon4 < *phi1 && *anon4 < *anon6 || *anon4 >= *phi1 && *phi1 < *anon6 || *anon4 >= *anon6 && *anon4 < *phi1)
		{
			*phi1 = phi8;
			*anon4 = phi9;
			phi10 = phi_in7;
			if (*anon4 > *phi1)
			{
				phi10 = *anon6;
			}
		}
		if (phi10 != 255)
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
	*(uint64_t*)(phi10 + 48) = 0;
	uint64_t anon12 = (uint64_t)&alloca1;
	phi10 = anon12;
	while (true)
	{
		uint64_t phi19;
		uint32_t phi20;
		uint32_t phi23;
		uint32_t phi24;
		uint32_t phi41;
		uint32_t phi42;
		uint32_t phi44;
		uint64_t phi45;
		uint64_t phi46;
		uint32_t phi_in286;
		uint32_t phi_in287;
		uint32_t phi_in289;
		uint64_t phi_in290;
		uint32_t phi_in291;
		uint32_t phi_in292;
		uint64_t phi297;
		uint32_t phi_in299;
		uint64_t phi306;
		uint64_t phi312;
		uint32_t phi313;
		uint32_t phi_in314;
		uint64_t phi315;
		uint32_t phi316;
		uint32_t phi317;
		uint64_t phi318;
		uint32_t phi13 = phi4;
		uint32_t phi14 = phi5;
		if (phi11 < *anon8)
		{
			uint32_t phi304;
			uint32_t phi305;
			uint64_t phi307;
			uint32_t phi308;
			uint32_t phi309;
			uint32_t phi310;
			uint64_t phi311;
			*(uint64_t*)(phi10 + 16) = anon9 * 12;
			*(uint32_t*)(phi10 + 40) = (uint32_t)phi7 + 5;
			uint32_t phi15 = phi14;
			uint32_t phi16 = phi13;
			uint64_t phi17 = (__zext uint64_t)phi13;
			uint32_t phi18 = phi14;
			*(uint64_t*)(phi19 + 56) = 0;
			*(uint32_t*)(phi19 + 68) = phi14;
			phi20 = phi13;
			phi19 = phi10;
			int64_t anon22 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi19 + 56) + *(uint64_t*)(phi19 + 16) + 6301632);
			uint32_t* anon21 = (uint32_t*)((anon22 << 2) + 6300992);
			if (phi18 < *anon21)
			{
				uint32_t phi293;
				uint32_t phi294;
				uint32_t phi295;
				uint32_t phi296;
				uint32_t phi298;
				uint32_t phi300;
				uint32_t phi301;
				uint64_t phi302;
				uint64_t phi303;
				*anon21 = *(uint32_t*)(phi19 + 4);
				*(uint64_t*)(phi19 + 32) = anon22 * 12;
				*(uint32_t*)(phi19 + 44) = (uint32_t)phi17 + 6;
				phi23 = phi20;
				phi24 = phi20;
				uint32_t phi25 = phi20;
				uint32_t phi26 = phi20;
				uint32_t phi27 = phi20;
				uint32_t phi28 = phi20;
				uint32_t phi29 = phi20;
				uint32_t phi30 = phi20;
				uint32_t phi31 = phi20;
				uint64_t phi32 = (__zext uint64_t)phi20;
				*(uint64_t*)(phi19 + 72) = 0;
				uint32_t phi33 = phi23;
				uint32_t phi34 = phi24;
				uint32_t phi35 = phi26;
				uint32_t phi36 = phi27;
				uint32_t phi37 = phi28;
				int64_t anon39 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi19 + 72) + *(uint64_t*)(phi19 + 32) + 6301632);
				uint32_t* anon38 = (uint32_t*)((anon39 << 2) + 6300992);
				if (*(uint32_t*)(phi19 + 4) < *anon38)
				{
					uint32_t phi278;
					uint32_t phi279;
					uint64_t phi281;
					uint32_t phi282;
					uint32_t phi283;
					uint32_t phi284;
					uint64_t phi285;
					uint32_t phi288;
					*anon38 = *(uint32_t*)(phi19 + 24);
					*(uint32_t*)(phi19 + 64) = (uint32_t)phi32 + 7;
					uint32_t phi40 = phi25;
					phi41 = phi29;
					phi42 = phi20;
					uint32_t phi43 = phi30;
					phi44 = phi31;
					phi45 = phi19;
					phi46 = 0;
					uint64_t phi47 = anon39 * 12;
					int64_t anon49 = (__sext int64_t)*(uint32_t*)(phi46 + phi47 + 6301632);
					uint32_t* anon48 = (uint32_t*)((anon49 << 2) + 6300992);
					if (*(uint32_t*)(phi45 + 24) < *anon48)
					{
						uint32_t phi53;
						uint64_t phi280;
						*anon48 = *(uint32_t*)(phi45 + 28);
						uint32_t phi50 = phi33;
						uint32_t phi_in51 = phi34;
						uint32_t phi52 = phi40;
						uint32_t anon54 = (uint32_t)phi32 + 8;
						phi53 = anon54;
						uint32_t phi55 = phi35;
						uint32_t phi56 = phi36;
						uint32_t phi57 = anon54;
						uint32_t phi58 = phi37;
						uint32_t phi59 = phi41;
						uint32_t phi_in60 = anon54;
						uint32_t phi61 = anon54;
						uint32_t phi_in62 = anon54;
						uint32_t phi63 = phi42;
						uint32_t phi64 = anon54;
						uint32_t phi65 = anon54;
						uint32_t phi_in66 = phi43;
						uint32_t phi67 = anon54;
						uint32_t phi_in68 = anon54;
						uint32_t phi69 = phi44;
						uint64_t phi70 = phi47;
						uint32_t phi71 = anon54;
						uint32_t phi72 = anon54;
						uint32_t phi73 = anon54;
						uint64_t phi_in74 = phi45;
						uint64_t phi75 = 0;
						uint64_t phi76 = anon49 * 12;
						uint64_t phi77 = phi32;
						do
						{
							uint32_t phi_in78 = phi50;
							uint32_t phi_in79 = phi52;
							uint32_t phi_in80 = phi55;
							uint32_t phi81 = phi57;
							uint32_t phi82 = phi58;
							uint32_t phi83 = phi59;
							uint32_t phi84 = phi61;
							uint32_t phi_in85 = phi63;
							uint32_t phi_in86 = phi65;
							uint32_t phi87 = phi67;
							uint32_t phi_in88 = phi69;
							uint64_t phi_in89 = phi70;
							uint32_t phi90 = phi71;
							uint32_t phi_in91 = phi72;
							uint32_t phi92 = phi73;
							uint32_t phi_in93 = phi_in79;
							uint32_t phi_in94 = phi53;
							uint32_t phi_in95 = phi_in80;
							uint64_t phi_in96 = phi76;
							uint64_t phi_in97 = phi75;
							uint32_t phi_in98 = phi83;
							uint32_t phi_in99 = phi_in60;
							uint32_t phi_in100 = phi84;
							uint32_t phi_in101 = phi_in86;
							uint32_t phi_in102 = phi87;
							phi69 = phi_in88;
							uint32_t phi_in103 = phi90;
							uint32_t phi_in104 = phi92;
							uint64_t phi105 = phi77;
							int64_t anon107 = (__sext int64_t)*(uint32_t*)(phi75 + phi76 + 6301632);
							uint32_t* anon106 = (uint32_t*)((anon107 << 2) + 6300992);
							if (*(uint32_t*)(phi_in74 + 28) < *anon106)
							{
								uint64_t phi127;
								*anon106 = *(uint32_t*)(phi_in74 + 40);
								*(uint32_t*)(phi_in74 + 120) = (uint32_t)phi77 + 9;
								uint64_t phi_in108 = 0;
								uint32_t phi_in109 = phi_in78;
								uint32_t phi110 = phi_in51;
								uint32_t phi111 = phi_in79;
								uint32_t phi112 = phi_in80;
								uint32_t phi113 = phi56;
								uint32_t phi114 = phi81;
								phi58 = phi82;
								uint32_t phi115 = phi_in60;
								uint32_t phi116 = phi_in62;
								uint32_t phi117 = phi_in85;
								uint32_t phi118 = phi64;
								uint32_t phi_in119 = phi_in66;
								uint32_t phi120 = phi_in68;
								uint64_t phi_in121 = phi75;
								uint32_t phi122 = phi_in88;
								phi70 = phi_in89;
								uint64_t phi123 = phi76;
								uint32_t phi124 = phi_in91;
								uint64_t phi125 = phi_in74;
								uint64_t phi126 = phi77 & 0xffffffff;
								do
								{
									phi127 = phi_in108;
									uint32_t phi128 = phi110;
									uint32_t phi_in129 = phi111;
									uint32_t phi130 = phi53;
									uint32_t phi131 = phi113;
									uint32_t phi_in132 = phi114;
									uint32_t phi133 = phi58;
									uint32_t phi134 = phi83;
									uint32_t phi135 = phi115;
									uint32_t phi136 = phi117;
									uint32_t phi137 = phi118;
									uint32_t phi_in138 = phi_in119;
									uint32_t phi139 = phi87;
									uint32_t phi140 = phi120;
									phi_in97 = phi_in121;
									uint64_t phi141 = phi70;
									uint64_t phi142 = phi123;
									uint32_t phi143 = phi90;
									uint32_t phi144 = phi124;
									uint32_t phi_in145 = phi92;
									uint64_t phi146 = phi125;
									uint64_t phi_in147 = phi126;
									uint32_t phi_in148 = phi128;
									phi_in79 = phi_in129;
									uint32_t phi_in149 = phi130;
									phi_in80 = phi112;
									uint32_t phi150 = phi131;
									uint32_t phi_in151 = phi134;
									uint32_t phi152 = phi135;
									uint32_t phi153 = phi116;
									uint32_t phi_in154 = phi136;
									uint32_t phi_in155 = phi137;
									uint32_t phi_in156 = phi_in86;
									uint32_t phi_in157 = phi139;
									uint32_t phi_in158 = phi140;
									phi_in88 = phi122;
									uint64_t phi_in159 = phi141;
									uint64_t phi_in160 = phi142;
									phi90 = phi143;
									uint32_t phi161 = phi_in145;
									uint64_t phi_in162 = phi146;
									uint64_t phi_in163 = phi_in147;
									int64_t anon165 = (__sext int64_t)*(uint32_t*)(phi127 + anon107 * 12 + 6301632);
									uint32_t* anon164 = (uint32_t*)((anon165 << 2) + 6300992);
									if (*(uint32_t*)(phi146 + 40) < *anon164)
									{
										uint64_t phi175;
										*anon164 = *(uint32_t*)(phi146 + 44);
										uint64_t phi_in166 = 0;
										uint32_t phi167 = phi_in109;
										uint32_t phi168 = phi_in129;
										phi114 = phi_in132;
										uint32_t phi169 = phi133;
										uint32_t phi170 = phi84;
										uint32_t phi171 = phi_in86;
										uint32_t phi_in172 = phi_in138;
										uint64_t phi173 = phi_in97;
										uint32_t phi174 = phi144;
										do
										{
											uint64_t phi181;
											phi175 = phi_in166;
											uint32_t phi176 = phi167;
											uint32_t phi177 = phi128;
											uint32_t phi178 = phi168;
											uint32_t phi179 = phi130;
											uint32_t phi180 = phi112;
											*(uint32_t*)(phi181 + 96) = phi131;
											uint32_t phi182 = phi114;
											uint32_t phi183 = phi169;
											*(uint32_t*)(phi184 + 96) = phi134;
											*(uint32_t*)(phi184 + 124) = phi135;
											uint32_t phi_in185 = phi170;
											uint32_t phi186 = phi116;
											uint32_t phi187 = phi136;
											uint32_t phi188 = phi137;
											uint32_t phi_in189 = phi171;
											phi_in138 = phi_in172;
											uint32_t phi_in190 = phi139;
											uint32_t phi_in191 = phi140;
											*(uint64_t*)(phi184 + 88) = phi173;
											uint32_t phi192 = phi122;
											*(uint64_t*)(phi184 + 104) = phi141;
											*(uint64_t*)(phi184 + 112) = phi142;
											uint32_t phi_in193 = phi143;
											uint32_t phi_in194 = phi174;
											uint32_t phi195 = phi_in145;
											uint64_t phi184 = phi146;
											uint64_t phi_in196 = phi_in147;
											uint32_t phi197 = phi176;
											uint32_t phi198 = phi177;
											phi_in129 = phi178;
											uint32_t phi_in199 = phi179;
											uint32_t phi200 = phi180;
											phi150 = *(uint32_t*)(phi181 + 96);
											uint32_t phi201 = phi182;
											uint32_t phi_in202 = phi183;
											uint32_t phi_in203 = *(uint32_t*)(phi184 + 96);
											uint32_t phi_in204 = *(uint32_t*)(phi184 + 124);
											uint32_t phi_in205 = phi_in185;
											uint32_t phi_in206 = phi186;
											uint32_t phi_in207 = phi187;
											uint32_t phi_in208 = phi188;
											phi_in86 = phi_in189;
											phi_in121 = *(uint64_t*)(phi184 + 88);
											uint32_t phi_in209 = phi192;
											uint64_t phi_in210 = *(uint64_t*)(phi184 + 104);
											uint64_t phi211 = *(uint64_t*)(phi184 + 112);
											uint32_t phi212 = phi_in193;
											uint32_t phi213 = phi_in194;
											uint64_t phi_in214 = phi184;
											int64_t anon216 = (__sext int64_t)*(uint32_t*)(phi175 + anon165 * 12 + 6301632);
											uint32_t* anon215 = (uint32_t*)((anon216 << 2) + 6300992);
											if (*(uint32_t*)(phi184 + 44) < *anon215)
											{
												*anon215 = *(uint32_t*)(phi184 + 64);
												phi197 = phi176;
												*(uint32_t*)(phi217 + 88) = phi177;
												uint32_t phi_in218 = phi178;
												int64_t anon221 = anon216 * 12;
												int64_t anon220 = (__sext int64_t)*(uint32_t*)(anon221 + 6301640);
												uint32_t* anon219 = (uint32_t*)((anon220 << 2) + 6300992);
												*anon219 = phi179;
												uint64_t phi217 = phi184;
												uint32_t phi222 = phi180;
												uint32_t phi223 = *(uint32_t*)(phi181 + 96);
												uint32_t phi_in224 = phi182;
												uint32_t phi_in225 = phi183;
												uint32_t phi_in226 = *(uint32_t*)(phi184 + 96);
												uint32_t phi_in227 = *(uint32_t*)(phi184 + 124);
												uint32_t phi_in228 = phi_in138;
												phi139 = phi_in190;
												uint32_t phi_in229 = phi_in191;
												*(uint64_t*)(phi217 + 80) = *(uint64_t*)(phi184 + 88);
												uint32_t phi_in230 = phi192;
												*(uint64_t*)(phi217 + 96) = *(uint64_t*)(phi184 + 104);
												*(uint64_t*)(phi217 + 104) = *(uint64_t*)(phi184 + 112);
												phi_in145 = phi195;
												uint64_t phi_in231 = phi_in196;
												int64_t anon233 = (__sext int64_t)*(uint32_t*)(anon221 + 6301636);
												uint32_t* anon232 = (uint32_t*)((anon233 << 2) + 6300992);
												if (*(uint32_t*)(phi184 + 64) < *anon232)
												{
													*anon232 = phi186;
													uint64_t phi234 = anon233;
													uint32_t phi235 = *(uint32_t*)(phi184 + 96);
													uint32_t phi236 = phi187;
													uint32_t phi237 = phi_in138;
													*(uint64_t*)(phi181 + 88) = *(uint64_t*)(phi184 + 88);
													uint64_t phi238 = *(uint64_t*)(phi184 + 104);
													uint64_t phi239 = *(uint64_t*)(phi184 + 112);
													uint64_t phi240 = phi_in196;
													if (phi_in185 < phi186)
													{
														*(uint64_t*)(phi184 + 80) = anon233;
														uint64_t anon241 = (__zext uint64_t)phi186;
														w(4197873, anon12, (__sext int64_t)phi186, anon241, anon241);
														phi176 = *(uint32_t*)(arg1 - 96);
														phi177 = *(uint32_t*)(arg1 - 96);
														phi178 = *(uint32_t*)(arg1 - 96);
														phi179 = *(uint32_t*)(arg1 - 68);
														phi180 = *(uint32_t*)(arg1 - 96);
														*(uint32_t*)(phi181 + 96) = *(uint32_t*)(arg1 - 96);
														phi184 = anon12;
														phi182 = *(uint32_t*)(arg1 - 68);
														phi183 = *(uint32_t*)(arg1 - 96);
														phi234 = *(uint64_t*)(arg1 - 112);
														phi235 = *(uint32_t*)(arg1 - 96);
														phi236 = *(uint32_t*)(arg1 - 96);
														phi237 = *(uint32_t*)(arg1 - 96);
														*(uint64_t*)(phi181 + 88) = *(uint64_t*)(arg1 - 104);
														phi192 = *(uint32_t*)(arg1 - 96);
														phi238 = *(uint64_t*)(arg1 - 88);
														phi239 = *(uint64_t*)(arg1 - 80);
														phi240 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
													}
													uint32_t phi242 = phi176;
													uint32_t phi243 = phi177;
													uint32_t phi244 = phi178;
													*anon219 = phi179;
													uint32_t phi245 = phi180;
													uint32_t phi246 = *(uint32_t*)(phi181 + 96);
													phi181 = phi184;
													*(uint32_t*)(phi181 + 124) = phi182;
													uint32_t phi247 = phi183;
													*(uint64_t*)(phi181 + 80) = phi234;
													phi_in226 = phi235;
													uint32_t phi248 = phi236;
													uint32_t phi_in249 = phi237;
													uint64_t phi250 = *(uint64_t*)(phi181 + 88);
													uint32_t phi_in251 = phi192;
													*(uint64_t*)(phi181 + 104) = phi238;
													*(uint64_t*)(phi217 + 104) = phi239;
													uint64_t phi252 = phi240;
													uint32_t phi253 = *(uint32_t*)(phi181 + 124);
													uint64_t phi254 = *(uint64_t*)(phi181 + 80);
													uint64_t phi255 = *(uint64_t*)(phi181 + 104);
													int64_t anon256 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi181 + 80) * 12 + 6301636);
													if (*(uint32_t*)(phi181 + 124) < *(uint32_t*)((anon256 << 2) + 6300992))
													{
														*(uint64_t*)(phi181 + 112) = *(uint64_t*)(phi217 + 104);
														*(uint32_t*)(phi181 + 96) = phi246;
														*(uint64_t*)(phi181 + 88) = phi250;
														uint64_t anon257 = (__zext uint64_t)*(uint32_t*)(phi181 + 120);
														w(4197793, anon12, anon256, anon257, anon257);
														phi242 = *(uint32_t*)(arg1 - 96);
														phi243 = *(uint32_t*)(arg1 - 96);
														phi244 = *(uint32_t*)(arg1 - 96);
														*anon219 = alloca1.field14;
														phi245 = *(uint32_t*)(arg1 - 96);
														phi181 = anon12;
														phi246 = *(uint32_t*)(arg1 - 96);
														phi253 = alloca1.field14;
														phi247 = *(uint32_t*)(arg1 - 96);
														phi254 = *(uint64_t*)(arg1 - 112);
														phi_in226 = *(uint32_t*)(arg1 - 96);
														phi248 = *(uint32_t*)(arg1 - 96);
														phi_in249 = *(uint32_t*)(arg1 - 96);
														phi250 = *(uint64_t*)(arg1 - 104);
														phi_in251 = *(uint32_t*)(arg1 - 96);
														phi255 = *(uint64_t*)(arg1 - 88);
														*(uint64_t*)(phi217 + 104) = *(uint64_t*)(arg1 - 80);
														phi252 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
													}
													phi197 = phi242;
													*(uint32_t*)(phi217 + 88) = phi243;
													uint32_t phi_in258 = phi244;
													phi222 = phi245;
													phi217 = phi181;
													uint32_t phi_in259 = phi246;
													phi_in193 = phi253;
													uint32_t phi_in260 = phi247;
													phi187 = phi248;
													*(uint64_t*)(phi217 + 80) = phi250;
													*(uint64_t*)(phi217 + 96) = phi255;
													uint64_t phi_in261 = phi252;
													phi_in218 = phi_in258;
													phi223 = phi_in259;
													phi_in224 = phi_in193;
													phi_in225 = phi_in260;
													phi_in227 = phi_in193;
													phi_in185 = phi_in193;
													phi186 = phi_in193;
													phi188 = phi_in193;
													phi_in189 = phi_in193;
													phi_in228 = phi_in249;
													phi139 = phi_in193;
													phi_in229 = phi_in193;
													phi_in230 = phi_in251;
													*(uint64_t*)(phi217 + 104) = *(uint64_t*)(phi217 + 104);
													phi_in194 = phi_in193;
													phi_in145 = phi_in193;
													phi_in231 = phi_in261;
													int64_t anon262 = (__sext int64_t)*(uint32_t*)(phi254 * 12 + 6301640);
													if (phi_in193 < *(uint32_t*)((anon262 << 2) + 6300992))
													{
														*(uint32_t*)(phi217 + 112) = phi_in193;
														*(uint64_t*)(phi217 + 96) = *(uint64_t*)(phi217 + 96);
														*(uint32_t*)(phi217 + 88) = phi222;
														*(uint64_t*)(phi217 + 80) = *(uint64_t*)(phi217 + 80);
														uint64_t anon263 = (__zext uint64_t)*(uint32_t*)(phi217 + 120);
														w(4197395, anon12, anon262, anon263, anon263);
														phi197 = *(uint32_t*)(arg1 - 104);
														*(uint32_t*)(phi217 + 88) = *(uint32_t*)(arg1 - 104);
														phi_in218 = *(uint32_t*)(arg1 - 104);
														*anon219 = *(uint32_t*)(arg1 - 80);
														phi217 = anon12;
														phi222 = *(uint32_t*)(arg1 - 104);
														phi223 = *(uint32_t*)(arg1 - 104);
														phi_in224 = *(uint32_t*)(arg1 - 80);
														phi_in225 = *(uint32_t*)(arg1 - 104);
														phi_in226 = *(uint32_t*)(arg1 - 104);
														phi_in227 = *(uint32_t*)(arg1 - 80);
														phi_in185 = *(uint32_t*)(arg1 - 80);
														phi186 = *(uint32_t*)(arg1 - 80);
														phi187 = *(uint32_t*)(arg1 - 104);
														phi188 = *(uint32_t*)(arg1 - 80);
														phi_in189 = *(uint32_t*)(arg1 - 80);
														phi_in228 = *(uint32_t*)(arg1 - 104);
														phi139 = *(uint32_t*)(arg1 - 80);
														phi_in229 = *(uint32_t*)(arg1 - 80);
														*(uint64_t*)(phi217 + 80) = *(uint64_t*)(arg1 - 112);
														phi_in230 = *(uint32_t*)(arg1 - 104);
														*(uint64_t*)(phi217 + 96) = *(uint64_t*)(arg1 - 96);
														*(uint64_t*)(phi217 + 104) = *(uint64_t*)(arg1 - 88);
														phi_in193 = *(uint32_t*)(arg1 - 80);
														phi_in194 = *(uint32_t*)(arg1 - 80);
														phi_in145 = *(uint32_t*)(arg1 - 80);
														phi_in231 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
													}
												}
												phi_in129 = phi_in218;
												uint32_t phi_in264 = phi222;
												uint32_t phi_in265 = phi223;
												phi_in203 = phi_in226;
												phi_in206 = phi186;
												uint32_t phi_in266 = phi187;
												phi_in208 = phi188;
												phi_in190 = phi139;
												phi_in209 = phi_in230;
												phi198 = *(uint32_t*)(phi217 + 88);
												phi_in199 = *anon219;
												phi200 = phi_in264;
												phi150 = phi_in265;
												phi201 = phi_in224;
												phi_in202 = phi_in225;
												phi_in204 = phi_in227;
												phi_in205 = phi_in185;
												phi_in207 = phi_in266;
												phi_in86 = phi_in189;
												phi_in138 = phi_in228;
												phi_in191 = phi_in229;
												phi_in121 = *(uint64_t*)(phi217 + 80);
												phi_in210 = *(uint64_t*)(phi217 + 96);
												phi211 = *(uint64_t*)(phi217 + 104);
												phi212 = phi_in193;
												phi213 = phi_in194;
												phi195 = phi_in145;
												phi_in214 = phi217;
												phi_in196 = phi_in231;
												if (*(uint32_t*)(phi217 + 64) < *anon219)
												{
													*(uint32_t*)(phi267 + 88) = phi197;
													uint32_t phi_in268 = *(uint32_t*)(phi217 + 88);
													phi_in218 = phi_in129;
													*(uint32_t*)(phi267 + 112) = *anon219;
													uint32_t phi_in269 = phi_in225;
													uint32_t phi_in270 = phi_in203;
													uint32_t phi_in271 = phi_in228;
													*(uint64_t*)(phi267 + 80) = *(uint64_t*)(phi217 + 80);
													uint32_t phi_in272 = phi_in209;
													*(uint64_t*)(phi267 + 96) = *(uint64_t*)(phi217 + 96);
													*(uint64_t*)(phi267 + 104) = *(uint64_t*)(phi217 + 104);
													uint64_t phi267 = phi217;
													phi_in196 = phi_in231;
													int64_t anon274 = anon220 * 12;
													int64_t anon273 = (__sext int64_t)*(uint32_t*)(anon274 + 6301636);
													if (*anon219 < *(uint32_t*)((anon273 << 2) + 6300992))
													{
														*(uint32_t*)(phi217 + 112) = *anon219;
														uint64_t anon275 = (__zext uint64_t)*(uint32_t*)(phi217 + 120);
														w(4197948, anon12, anon273, anon275, anon275);
														*(uint32_t*)(phi267 + 88) = *(uint32_t*)(arg1 - 104);
														phi_in268 = *(uint32_t*)(arg1 - 104);
														phi_in218 = *(uint32_t*)(arg1 - 104);
														*(uint32_t*)(phi267 + 112) = *(uint32_t*)(arg1 - 80);
														phi_in264 = *(uint32_t*)(arg1 - 104);
														phi_in265 = *(uint32_t*)(arg1 - 104);
														phi_in269 = *(uint32_t*)(arg1 - 104);
														phi_in270 = *(uint32_t*)(arg1 - 104);
														phi_in266 = *(uint32_t*)(arg1 - 104);
														phi_in271 = *(uint32_t*)(arg1 - 104);
														*(uint64_t*)(phi267 + 80) = *(uint64_t*)(arg1 - 112);
														phi_in272 = *(uint32_t*)(arg1 - 104);
														*(uint64_t*)(phi267 + 96) = *(uint64_t*)(arg1 - 96);
														*(uint64_t*)(phi267 + 104) = *(uint64_t*)(arg1 - 88);
														phi267 = anon12;
														phi_in196 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
													}
													phi_in210 = *(uint64_t*)(phi267 + 96);
													phi197 = *(uint32_t*)(phi267 + 88);
													phi198 = phi_in268;
													phi_in129 = phi_in218;
													phi_in199 = *(uint32_t*)(phi267 + 112);
													phi200 = phi_in264;
													phi150 = phi_in265;
													phi201 = *(uint32_t*)(phi267 + 112);
													phi_in202 = phi_in269;
													phi_in203 = phi_in270;
													phi_in204 = *(uint32_t*)(phi267 + 112);
													phi_in205 = *(uint32_t*)(phi267 + 112);
													phi_in206 = *(uint32_t*)(phi267 + 112);
													phi_in207 = phi_in266;
													phi_in208 = *(uint32_t*)(phi267 + 112);
													phi_in86 = *(uint32_t*)(phi267 + 112);
													phi_in138 = phi_in271;
													phi_in190 = *(uint32_t*)(phi267 + 112);
													phi_in191 = *(uint32_t*)(phi267 + 112);
													phi_in121 = *(uint64_t*)(phi267 + 80);
													phi_in209 = phi_in272;
													phi211 = *(uint64_t*)(phi267 + 104);
													phi212 = *(uint32_t*)(phi267 + 112);
													phi213 = *(uint32_t*)(phi267 + 112);
													phi195 = *(uint32_t*)(phi267 + 112);
													phi_in214 = phi267;
													int64_t anon276 = (__sext int64_t)*(uint32_t*)(anon274 + 6301640);
													if (*(uint32_t*)(phi267 + 112) < *(uint32_t*)((anon276 << 2) + 6300992))
													{
														*(uint64_t*)(phi267 + 96) = phi_in210;
														uint64_t anon277 = (__zext uint64_t)*(uint32_t*)(phi267 + 120);
														w(4197231, anon12, anon276, anon277, anon277);
														phi197 = alloca1.field8;
														phi198 = alloca1.field8;
														phi_in129 = alloca1.field8;
														phi_in199 = alloca1.field12;
														phi200 = alloca1.field8;
														phi150 = alloca1.field8;
														phi201 = alloca1.field12;
														phi_in202 = alloca1.field8;
														phi_in203 = alloca1.field8;
														phi_in204 = alloca1.field12;
														phi_in205 = alloca1.field12;
														phi_in206 = alloca1.field12;
														phi_in207 = alloca1.field8;
														phi_in208 = alloca1.field12;
														phi_in86 = alloca1.field12;
														phi_in138 = alloca1.field8;
														phi_in190 = alloca1.field12;
														phi_in191 = alloca1.field12;
														phi_in121 = alloca1.field7;
														phi_in209 = alloca1.field8;
														phi_in210 = alloca1.field10;
														phi211 = alloca1.field11;
														phi212 = alloca1.field12;
														phi213 = alloca1.field12;
														phi195 = alloca1.field12;
														phi_in214 = anon12;
														phi_in196 = (__zext uint64_t)alloca1.field8;
													}
												}
											}
											phi_in132 = phi201;
											phi_in160 = phi211;
											phi144 = phi213;
											phi161 = phi195;
											phi_in109 = phi197;
											phi_in148 = phi198;
											phi_in79 = phi_in129;
											phi_in149 = phi_in199;
											phi_in80 = phi200;
											phi133 = phi_in202;
											phi_in151 = phi_in203;
											phi152 = phi_in204;
											phi84 = phi_in205;
											phi153 = phi_in206;
											phi_in154 = phi_in207;
											phi_in155 = phi_in208;
											phi_in156 = phi_in86;
											phi_in157 = phi_in190;
											phi_in158 = phi_in191;
											phi_in97 = phi_in121;
											phi_in88 = phi_in209;
											phi_in159 = phi_in210;
											phi90 = phi212;
											phi_in162 = phi_in214;
											phi_in163 = phi_in196;
											phi_in166 = phi175 + 4;
											phi167 = phi197;
											phi128 = phi198;
											phi168 = phi_in129;
											phi130 = phi_in199;
											phi112 = phi200;
											phi131 = phi150;
											phi114 = phi_in132;
											phi169 = phi_in202;
											phi134 = phi_in203;
											phi135 = phi_in204;
											phi170 = phi_in205;
											phi116 = phi_in206;
											phi136 = phi_in207;
											phi137 = phi_in208;
											phi171 = phi_in86;
											phi_in172 = phi_in138;
											phi139 = phi_in190;
											phi140 = phi_in191;
											phi173 = phi_in121;
											phi122 = phi_in209;
											phi141 = phi_in210;
											phi142 = phi_in160;
											phi143 = phi212;
											phi174 = phi144;
											phi_in145 = phi161;
											phi146 = phi_in214;
											phi_in147 = phi_in196;
										}
										while (phi175 != 8);
									}
									phi_in78 = phi_in109;
									phi_in51 = phi_in148;
									phi_in93 = phi_in79;
									phi_in94 = phi_in149;
									phi_in95 = phi_in80;
									phi56 = phi150;
									phi81 = phi_in132;
									phi82 = phi133;
									phi_in96 = phi_in160;
									phi_in98 = phi_in151;
									phi_in99 = phi152;
									phi_in100 = phi84;
									phi_in62 = phi153;
									phi_in85 = phi_in154;
									phi64 = phi_in155;
									phi_in101 = phi_in156;
									phi_in66 = phi_in138;
									phi_in102 = phi_in157;
									phi_in68 = phi_in158;
									phi69 = phi_in88;
									phi_in89 = phi_in159;
									phi_in103 = phi90;
									phi_in91 = phi144;
									phi_in104 = phi161;
									phi_in74 = phi_in162;
									phi105 = phi_in163;
									phi_in108 = phi127 + 4;
									phi110 = phi_in148;
									phi111 = phi_in79;
									phi53 = phi_in149;
									phi112 = phi_in80;
									phi113 = phi150;
									phi114 = phi_in132;
									phi58 = phi133;
									phi83 = phi_in151;
									phi115 = phi152;
									phi116 = phi153;
									phi117 = phi_in154;
									phi118 = phi_in155;
									phi_in86 = phi_in156;
									phi_in119 = phi_in138;
									phi87 = phi_in157;
									phi120 = phi_in158;
									phi_in121 = phi_in97;
									phi122 = phi_in88;
									phi70 = phi_in159;
									phi123 = phi_in160;
									phi124 = phi144;
									phi92 = phi161;
									phi125 = phi_in162;
									phi126 = phi_in163;
								}
								while (phi127 != 8);
							}
							phi278 = phi56;
							phi279 = phi82;
							phi280 = phi_in97;
							phi281 = phi105;
							phi282 = phi_in78;
							phi34 = phi_in51;
							phi283 = phi_in93;
							phi284 = phi_in95;
							phi285 = phi_in89;
							phi_in286 = phi_in98;
							phi_in287 = phi_in85;
							phi288 = phi_in66;
							phi_in289 = phi69;
							phi_in290 = phi_in74;
							if (phi280 != 8)
							{
								phi50 = phi_in78;
								phi52 = phi_in93;
								phi53 = phi_in94;
								phi55 = phi_in95;
								phi56 = phi278;
								phi57 = phi81;
								phi58 = phi279;
								phi59 = phi_in98;
								phi_in60 = phi_in99;
								phi61 = phi_in100;
								phi63 = phi_in85;
								phi64 = phi64;
								phi65 = phi_in101;
								phi67 = phi_in102;
								phi70 = phi_in89;
								phi71 = phi_in103;
								phi72 = phi_in91;
								phi73 = phi_in104;
								phi75 = phi280 + 4;
								phi76 = phi_in96;
								phi77 = phi281;
							}
						}
						while (phi280 != 8);
					}
					else 
					{
						phi282 = phi33;
						phi34 = phi34;
						phi283 = phi40;
						phi284 = phi35;
						phi278 = phi36;
						phi279 = phi37;
						phi285 = phi47;
						phi_in286 = phi41;
						phi_in287 = phi42;
						phi288 = phi43;
						phi_in289 = phi44;
						phi_in290 = phi45;
						phi281 = phi32 & 0xffffffff;
					}
					phi33 = phi282;
					phi40 = phi283;
					phi35 = phi284;
					phi36 = phi278;
					phi37 = phi279;
					phi47 = phi285;
					phi43 = phi288;
					phi32 = phi281;
					phi_in291 = phi33;
					phi_in292 = phi34;
					phi293 = phi40;
					phi294 = phi35;
					phi295 = phi36;
					phi296 = phi37;
					phi297 = *(uint64_t*)(phi_in290 + 72);
					phi298 = phi_in286;
					phi_in299 = phi_in287;
					phi300 = phi43;
					phi301 = phi_in289;
					phi302 = phi32;
					phi303 = phi_in290;
				}
				else 
				{
					phi_in291 = phi33;
					phi_in292 = phi34;
					phi293 = phi25;
					phi294 = phi35;
					phi295 = phi36;
					phi296 = phi37;
					phi297 = *(uint64_t*)(phi19 + 72);
					phi298 = phi29;
					phi_in299 = phi20;
					phi300 = phi30;
					phi301 = phi31;
					phi302 = phi32 & 0xffffffff;
					phi303 = phi19;
				}
				phi25 = phi293;
				phi26 = phi294;
				phi27 = phi295;
				phi28 = phi296;
				phi29 = phi298;
				phi30 = phi300;
				phi31 = phi301;
				phi32 = phi302;
				phi19 = phi303;
				phi304 = *(uint32_t*)(phi19 + 68);
				phi305 = phi28;
				phi306 = *(uint64_t*)(phi19 + 56);
				phi307 = (__zext uint64_t)phi28;
				phi308 = *(uint32_t*)(phi19 + 68);
				phi309 = phi28;
				phi310 = *(uint32_t*)(phi19 + 68);
				phi311 = phi19;
			}
			else 
			{
				phi304 = phi15;
				phi305 = phi16;
				phi306 = *(uint64_t*)(phi19 + 56);
				phi307 = phi17 & 0xffffffff;
				phi308 = *(uint32_t*)(phi19 + 68);
				phi309 = phi20;
				phi310 = phi18;
				phi311 = phi19;
			}
			phi15 = phi304;
			phi16 = phi305;
			phi17 = phi307;
			phi14 = phi308;
			phi13 = phi309;
			phi18 = phi310;
			phi10 = phi311;
			phi312 = *(uint64_t*)(phi10 + 48);
			phi313 = phi16;
			phi_in314 = phi15;
			phi315 = (__zext uint64_t)phi16;
			phi316 = phi15;
			phi317 = phi16;
			phi318 = phi10;
		}
		else 
		{
			phi312 = *(uint64_t*)(phi10 + 48);
			phi313 = phi13;
			phi_in314 = phi14;
			phi315 = phi7 & 0xffffffff;
			phi316 = *anon8;
			phi317 = phi11;
			phi318 = phi10;
		}
		if (phi312 != 8)
		{
			phi4 = phi313;
			phi5 = phi_in314;
			phi7 = phi315;
			*anon8 = phi316;
			phi11 = phi317;
			*(uint64_t*)(phi10 + 48) = phi312 + 4;
			phi10 = phi318;
		}
		*(uint64_t*)(phi19 + 56) = phi306 + 4;
		phi23 = phi_in291;
		phi24 = phi_in292;
		phi20 = phi_in299;
		*(uint64_t*)(phi19 + 72) = phi297 + 4;
		phi41 = phi_in286;
		phi42 = phi_in287;
		phi44 = phi_in289;
		phi45 = phi_in290;
		phi46 = phi46 + 4;
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
	uint32_t phi5;
	uint32_t phi_in1 = 0;
	uint64_t anon4 = arg1 << 32;
	uint32_t* anon3 = (uint32_t*)((anon4 >> 30) + 6301376);
	phi_in2 = *anon3;
	do
	{
		phi5 = phi_in2;
		if (phi5 != 0)
		{
			*anon3 = phi5 - 1;
			uint32_t phi_in6 = 3;
			uint32_t phi7 = phi_in1;
			uint32_t phi8 = phi_in6;
			uint64_t anon9 = random();
			if (phi7 > 1000)
			{
				break;
			}
			else 
			{
				uint32_t anon10 = phi7 + 1;
				phi_in1 = anon10;
				uint32_t anon11 = phi8 - (__zext uint32_t)(anon10 == (anon10 / 100 - (uint32_t)((__zext uint64_t)anon10 << 32 >> 63)) * 100);
				phi_in6 = anon11;
				uint64_t anon14 = anon9 << 32;
				uint64_t anon13 = anon9 + (((anon9 & 0xffffffff) * 2290649225 + anon14 >> 36) - (anon14 >> 32 >> 31)) * 4294967266;
				uint32_t anon12 = (uint32_t)anon13;
				uint64_t anon16 = anon4 >> 32;
				uint32_t anon15 = (uint32_t)anon16;
				if (anon12 != anon15)
				{
					phi_in1 = anon10;
					phi_in6 = anon11;
					uint64_t anon18 = anon13 << 32;
					uint32_t* anon17 = (uint32_t*)((anon18 >> 30) + 6301376);
					if ((*anon17 >> 31 | (__zext uint32_t)(*anon17 == 0)) == 0)
					{
						phi_in1 = anon10;
						phi_in6 = anon11;
						uint64_t anon19 = anon16 * 12;
						if (!(*(uint32_t*)(anon19 + 6301640) == anon12 | anon11 > *anon17))
						{
							phi_in1 = anon10;
							phi_in6 = anon11;
							if (anon12 != *(uint32_t*)(anon19 + 6301636))
							{
								uint32_t anon20 = *anon17 - 1;
								*anon17 = anon20;
								uint64_t anon21 = anon16 * 3;
								*(uint32_t*)(((__sext int64_t)anon20 + anon21 << 2) + 6301632) = anon12;
								uint62_t anon22 = (uint62_t)(anon18 >> 32) * 3;
								*(uint32_t*)(((__zext uint64_t)((__sext int62_t)anon20 + anon22) << 2) + 6301632) = anon15;
								r(4198736, anon13 & 0xffffffff);
								uint32_t* anon23 = (uint32_t*)((anon18 >> 30) + 6301376);
								*(uint32_t*)(((__zext uint64_t)(anon22 + (__sext int62_t)*anon23) << 2) + 6301632) = 4294967295;
								*anon23 = *anon23 + 1;
								*(uint32_t*)(((__sext int64_t)*anon3 + anon21 << 2) + 6301632) = 4294967295;
								*anon3 = 0;
								phi_in1 = anon10;
								phi_in2 = 0;
							}
						}
					}
				}
			}
		}
	}
	while (phi5 != 0);
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
			uint32_t phi_in14;
			uint32_t phi_in15;
			uint32_t phi_in16;
			uint32_t* anon17;
			uint32_t phi_in18;
			uint32_t phi19;
			uint32_t phi20;
			uint32_t phi21;
			uint32_t phi22;
			uint64_t phi12 = phi_in11;
			uint32_t* anon13 = (uint32_t*)(phi12 + 4);
			if (*anon13 < *phi10)
			{
				*phi10 = *anon13;
				*anon13 = *phi10;
				phi_in14 = *phi10;
				phi_in15 = *phi10;
				phi_in16 = *anon13;
				anon17 = (uint32_t*)(phi12 - 4);
				*anon17 = *anon13;
				*phi10 = *anon17;
			}
			else 
			{
				phi_in18 = *anon17;
				if (*phi10 < *anon17)
				{
					phi_in14 = *anon13 & 0xf;
					phi_in15 = *anon13;
					phi_in16 = *phi10 & 0xf;
					*anon17 = *phi10;
					*phi10 = *anon17 & 0xf;
				}
			}
			if (*anon13 >= *phi10 && *phi10 < *anon17 || *anon13 < *phi10 && *anon13 < *anon17)
			{
				phi19 = phi_in16;
				phi20 = phi_in14;
				phi21 = *anon17;
				phi22 = phi_in15;
			}
			if (*anon13 >= *anon17 && *anon13 < *phi10)
			{
				phi19 = *anon17 & 0xf;
				phi20 = *phi10;
				phi21 = *anon13;
				phi22 = *phi10;
			}
			if (*anon13 >= *phi10 && *phi10 < *anon17 || *anon13 < *phi10 && *anon13 < *anon17 || *anon13 >= *anon17 && *anon13 < *phi10)
			{
				phi_in18 = phi19;
				*phi10 = phi20;
				*anon13 = phi21;
				if (phi22 - *anon13 <= 4294967295)
				{
					phi_in18 = *(uint32_t*)((phi12 & 0xc) - 4);
				}
			}
			uint32_t phi23 = phi_in18;
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
			uint32_t phi_in29;
			uint32_t phi30;
			uint32_t phi_in31;
			uint32_t phi32;
			uint32_t phi33;
			uint32_t* anon34;
			uint32_t phi_in35;
			uint32_t phi36;
			uint32_t phi37;
			uint32_t phi38;
			uint32_t phi39;
			uint32_t* anon27 = (uint32_t*)(phi24 + 4);
			uint32_t* anon28 = (uint32_t*)phi24;
			if (*anon27 < *anon28)
			{
				*anon28 = *anon27;
				*anon27 = *anon28;
				phi_in29 = *anon28;
				phi30 = *anon28;
				phi_in31 = *anon27;
				phi32 = *anon27;
				anon34 = (uint32_t*)(phi24 - 4);
				phi33 = *anon34;
			}
			else 
			{
				phi_in35 = *anon34;
				if (*anon28 < *anon34)
				{
					phi_in29 = *anon27 & 0xf;
					phi30 = *anon27;
					phi_in31 = *anon28 & 0xf;
					phi32 = *anon28;
					phi33 = *anon34 & 0xf;
				}
			}
			if (*anon27 >= *anon28 && *anon28 < *anon34 || *anon27 < *anon28 && *anon27 < *anon34)
			{
				phi36 = phi30;
				*anon34 = phi32;
				*anon28 = phi33;
				phi37 = phi_in31;
				phi38 = phi_in29;
				phi39 = *anon34;
			}
			if (*anon27 >= *anon34 && *anon27 < *anon28)
			{
				phi37 = *anon34 & 0xf;
				phi38 = *anon28;
				phi39 = *anon27;
				phi36 = *anon28;
			}
			if (*anon27 >= *anon28 && *anon28 < *anon34 || *anon27 < *anon28 && *anon27 < *anon34 || *anon27 >= *anon34 && *anon27 < *anon28)
			{
				phi_in35 = phi37;
				*anon28 = phi38;
				*anon27 = phi39;
				if (phi36 - *anon27 <= 4294967295)
				{
					phi_in35 = *(uint32_t*)((phi24 & 0xf) - 4);
				}
			}
			uint32_t phi40 = phi_in35;
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
	uint64_t phi_in4;
	uint32_t phi_in5;
	uint64_t phi6;
	uint32_t phi7;
	uint32_t* anon8;
	uint32_t dispatch14;
	uint32_t phi17;
	uint32_t anon19;
	alloca1.field1 = arg0;
	uint32_t dispatch2 = 0;
	uint32_t* anon3 = (uint32_t*)0x602928;
	if (*anon3 != 0)
	{
		uint16_t** anon13;
		*anon3 = *anon3 - 1;
		printf((uint8_t*)0x401ca7);
		phi_in4 = arg1 & 0xffffffff;
		phi_in5 = 0;
		phi6 = phi_in4;
		phi7 = phi_in5;
		anon8 = (uint32_t*)0x602490;
		*anon8 = *anon8 + phi7;
		struct _IO_FILE** anon10 = (struct _IO_FILE**)0x602480;
		uint32_t anon9 = _IO_getc(*anon10);
		uint8_t anon11 = (uint8_t)anon9;
		if (anon11 == 10)
		{
			dispatch2 = 1;
		}
		uint32_t anon12 = *anon3 >> 31 | (__zext uint32_t)(*anon3 == 0);
		if (anon11 != 10 || anon12 != 0 && anon11 == 10)
		{
			anon13 = __ctype_b_loc();
			dispatch14 = 0;
		}
		uint64_t* anon15 = (uint64_t*)anon13;
		if ((*(uint8_t*)(*anon15 + ((__sext int64_t)anon11 << 1 | 1)) & 8) != 0 && (anon11 != 10 || anon12 != 0 && anon11 == 10))
		{
			uint32_t anon16 = _IO_getc(*anon10);
			uint32_t anon18 = (anon9 << 24 >> 24) - 48;
			phi17 = anon18;
			if ((*(uint8_t*)(*anon15 + ((__zext uint64_t)anon16 << 56 >> 55 | 1)) & 8) != 0)
			{
				anon19 = anon16 >> 8;
				phi17 = (anon19 << 24 >> 24) + anon18 * 10 - 48;
			}
		}
	}
	while (true)
	{
		uint8_t* anon20;
		dispatch2 = 4;
		if (*(uint32_t*)(((__sext int64_t)phi17 << 2) + 6300992) != 0)
		{
			phi_in4 = (__zext uint64_t)phi17;
		}
		if (dispatch2 == 4)
		{
			puts((uint8_t*)0x401cd5);
			*anon8 = *anon3 * 100 + *anon8 + 500;
			anon20 = (uint8_t*)0x401cf1;
			printf(anon20);
			exit(0);
		}
		uint64_t anon21 = random();
		dispatch2 = 2;
		if (dispatch2 == 2)
		{
			puts((uint8_t*)0x401dd0);
			*anon8 = *anon8 - 100;
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
			*anon8 = *anon8 - 100;
			phi_in4 = phi6;
		}
		if (*(uint32_t*)(((__sext int64_t)phi17 << 2) + 6300992) != 0 || (uint32_t)anon21 + ((uint32_t)((anon21 & 0xffffffff) / 3) - (uint32_t)(anon21 << 32 >> 32 >> 31)) * 4294967293 != 1)
		{
			dispatch2 = 1;
		}
		if ((uint8_t)anon19 != 10 && (*(uint32_t*)(((__sext int64_t)phi17 << 2) + 6300992) != 0 || (uint32_t)anon21 + ((uint32_t)((anon21 & 0xffffffff) / 3) - (uint32_t)(anon21 << 32 >> 32 >> 31)) * 4294967293 != 1))
		{
			phi_in5 = phi7 - 20;
			dispatch14 = 1;
			dispatch2 = 3;
			if (phi7 != 196)
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
			*anon8 = *anon8 - 50;
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
