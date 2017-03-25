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
	uint32_t phi_in5;
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
	phi_in5 = anon6;
	uint64_t phi7 = arg4 & 0xffffffff;
	uint32_t phi8 = anon6;
	uint32_t phi9 = anon3;
	*(uint64_t*)(phi10 + 48) = 0;
	uint64_t anon12 = (uint64_t)&alloca1;
	phi11 = anon12;
	while (true)
	{
		uint64_t phi20;
		uint32_t phi26;
		uint32_t phi28;
		uint32_t phi32;
		uint64_t phi36;
		uint64_t phi51;
		uint64_t phi52;
		uint64_t phi_in325;
		uint32_t phi_in328;
		uint32_t phi_in330;
		uint64_t phi333;
		uint32_t phi_in335;
		uint64_t phi339;
		uint64_t phi343;
		uint32_t phi344;
		uint64_t phi345;
		uint32_t phi_in346;
		uint32_t phi_in13 = phi_in5;
		int64_t anon15 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi10 + 48) + *(uint64_t*)(phi10 + 8) + 6301632);
		uint32_t* anon14 = (uint32_t*)((anon15 << 2) + 6300992);
		*anon14 = phi8;
		phi10 = phi11;
		if (phi9 < *anon14)
		{
			uint32_t phi338;
			uint64_t phi340;
			uint32_t phi341;
			uint32_t phi342;
			*(uint64_t*)(phi10 + 16) = anon15 * 12;
			*(uint32_t*)(phi10 + 40) = (uint32_t)phi7 + 5;
			uint32_t phi16 = phi_in13;
			uint32_t phi17 = phi4;
			uint64_t phi18 = (__zext uint64_t)phi4;
			*(uint32_t*)(phi10 + 68) = phi_in13;
			uint32_t phi19 = phi_in13;
			phi20 = 0;
			uint32_t phi_in21 = phi16;
			uint32_t phi_in22 = phi17;
			uint32_t phi23 = phi4;
			*(uint64_t*)(phi10 + 56) = phi20;
			int64_t anon25 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi10 + 56) + *(uint64_t*)(phi10 + 16) + 6301632);
			uint32_t* anon24 = (uint32_t*)((anon25 << 2) + 6300992);
			if (phi19 < *anon24)
			{
				uint32_t phi329;
				uint32_t phi331;
				uint32_t phi332;
				uint32_t phi334;
				uint64_t phi336;
				uint64_t phi337;
				*anon24 = *(uint32_t*)(phi10 + 4);
				*(uint64_t*)(phi10 + 32) = anon25 * 12;
				*(uint32_t*)(phi10 + 44) = (uint32_t)phi18 + 6;
				phi26 = phi23;
				uint32_t phi27 = phi23;
				phi28 = phi23;
				uint32_t phi29 = phi23;
				uint32_t phi30 = phi23;
				uint32_t phi31 = phi23;
				phi32 = phi23;
				uint32_t phi33 = phi23;
				uint32_t phi_in34 = phi23;
				uint64_t phi35 = (__zext uint64_t)phi23;
				*(uint64_t*)(phi36 + 72) = 0;
				uint64_t phi37 = phi10;
				uint32_t phi_in38 = phi26;
				uint32_t phi39 = phi27;
				uint32_t phi40 = phi29;
				uint32_t phi41 = phi23;
				uint32_t phi_in42 = phi31;
				uint32_t phi_in43 = phi33;
				uint64_t phi_in44 = phi35;
				phi36 = phi37;
				int64_t anon46 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi36 + 72) + *(uint64_t*)(phi36 + 32) + 6301632);
				uint32_t* anon45 = (uint32_t*)((anon46 << 2) + 6300992);
				if (*(uint32_t*)(phi36 + 4) < *anon45)
				{
					uint32_t phi100;
					uint32_t phi317;
					uint32_t phi318;
					uint32_t phi321;
					uint32_t phi322;
					uint32_t phi323;
					uint32_t phi324;
					uint32_t phi326;
					uint32_t phi327;
					*anon45 = *(uint32_t*)(phi36 + 24);
					*(uint32_t*)(phi36 + 64) = (uint32_t)phi_in44 + 7;
					uint32_t phi47 = phi_in38;
					uint32_t phi48 = phi_in42;
					uint32_t phi49 = phi_in43;
					uint32_t phi50 = phi_in34;
					phi51 = 0;
					phi52 = anon46 * 12;
					uint64_t phi53 = phi_in44;
					int64_t anon55 = (__sext int64_t)*(uint32_t*)(phi51 + phi52 + 6301632);
					uint32_t* anon54 = (uint32_t*)((anon55 << 2) + 6300992);
					if (*(uint32_t*)(phi36 + 24) < *anon54)
					{
						uint32_t phi59;
						uint64_t phi316;
						*anon54 = *(uint32_t*)(phi36 + 28);
						uint32_t phi56 = phi47;
						uint32_t phi57 = phi39;
						uint32_t phi58 = phi28;
						uint32_t anon60 = (uint32_t)phi53 + 8;
						phi59 = anon60;
						uint32_t phi_in61 = phi40;
						uint32_t phi62 = phi30;
						uint32_t phi_in63 = anon60;
						uint32_t phi_in64 = phi41;
						uint32_t phi_in65 = phi48;
						uint32_t phi_in66 = anon60;
						uint32_t phi_in67 = anon60;
						uint32_t phi_in68 = anon60;
						uint32_t phi_in69 = phi32;
						uint32_t phi70 = anon60;
						uint32_t phi71 = anon60;
						uint32_t phi72 = phi49;
						uint32_t phi73 = anon60;
						uint32_t phi74 = anon60;
						uint32_t phi_in75 = phi50;
						uint64_t phi_in76 = phi52;
						uint32_t phi77 = anon60;
						uint32_t phi78 = anon60;
						uint32_t phi79 = anon60;
						uint64_t phi80 = phi36;
						uint64_t phi81 = 0;
						uint64_t phi82 = anon55 * 12;
						uint64_t phi_in83 = phi53;
						do
						{
							uint32_t phi84 = phi56;
							uint32_t phi_in85 = phi58;
							uint32_t phi_in86 = phi59;
							uint32_t phi87 = phi_in61;
							uint32_t phi_in88 = phi62;
							uint32_t phi_in89 = phi_in63;
							uint32_t phi_in90 = phi_in64;
							uint32_t phi91 = phi_in66;
							uint32_t phi_in92 = phi_in69;
							uint32_t phi93 = phi70;
							uint32_t phi_in94 = phi73;
							uint32_t phi_in95 = phi74;
							uint32_t phi_in96 = phi_in75;
							uint64_t phi_in97 = phi_in76;
							uint32_t phi98 = phi78;
							uint32_t phi_in99 = phi79;
							phi100 = phi84;
							uint32_t phi101 = phi_in85;
							phi59 = phi_in86;
							uint32_t phi_in102 = phi87;
							uint32_t phi103 = phi_in88;
							uint32_t phi_in104 = phi_in89;
							uint32_t phi_in105 = phi_in90;
							phi82 = phi82;
							uint64_t phi_in106 = phi81;
							uint32_t phi107 = phi_in65;
							uint32_t phi108 = phi_in67;
							uint32_t phi_in109 = phi_in68;
							uint32_t phi110 = phi_in92;
							phi70 = phi93;
							uint32_t phi_in111 = phi72;
							phi73 = phi_in94;
							phi74 = phi_in95;
							uint32_t phi112 = phi_in96;
							uint64_t phi_in113 = phi_in97;
							uint32_t phi114 = phi_in99;
							uint64_t phi115 = phi80;
							uint64_t phi_in116 = phi_in83;
							int64_t anon118 = (__sext int64_t)*(uint32_t*)(phi81 + phi82 + 6301632);
							uint32_t* anon117 = (uint32_t*)((anon118 << 2) + 6300992);
							if (*(uint32_t*)(phi80 + 28) < *anon117)
							{
								*anon117 = *(uint32_t*)(phi80 + 40);
								*(uint32_t*)(phi80 + 120) = (uint32_t)phi_in83 + 9;
								uint64_t phi119 = 0;
								uint32_t phi120 = phi57;
								uint32_t phi121 = phi_in85;
								uint32_t phi122 = phi_in86;
								uint32_t phi123 = phi_in88;
								uint32_t phi124 = phi_in89;
								uint32_t phi_in125 = phi_in90;
								uint32_t phi_in126 = phi_in65;
								uint32_t phi127 = phi91;
								uint32_t phi_in128 = phi_in67;
								uint32_t phi_in129 = phi_in68;
								uint32_t phi_in130 = phi_in92;
								uint32_t phi131 = phi71;
								phi73 = phi_in94;
								uint32_t phi132 = phi_in95;
								uint64_t phi133 = phi81;
								uint32_t phi134 = phi_in96;
								uint64_t phi135 = phi_in97;
								uint64_t phi136 = phi82;
								uint32_t phi_in137 = phi77;
								uint32_t phi138 = phi98;
								uint32_t phi_in139 = phi_in99;
								uint64_t phi_in140 = phi_in83 & 0xffffffff;
								do
								{
									uint32_t phi_in141 = phi84;
									uint32_t phi_in142 = phi120;
									uint32_t phi_in143 = phi121;
									uint32_t phi_in144 = phi87;
									uint32_t phi_in145 = phi123;
									uint32_t phi146 = phi124;
									uint32_t phi_in147 = phi127;
									uint32_t phi_in148 = phi_in128;
									uint32_t phi149 = phi_in130;
									uint32_t phi_in150 = phi131;
									uint32_t phi151 = phi72;
									uint32_t phi_in152 = phi73;
									uint32_t phi_in153 = phi132;
									uint64_t phi_in154 = phi133;
									uint32_t phi155 = phi134;
									uint64_t phi156 = phi136;
									uint64_t phi_in157 = phi80;
									uint32_t phi158 = phi_in141;
									uint32_t phi159 = phi_in142;
									uint32_t phi160 = phi_in143;
									phi87 = phi_in144;
									uint32_t phi161 = phi_in145;
									phi_in64 = phi_in125;
									uint32_t phi162 = phi_in126;
									uint32_t phi163 = phi_in147;
									phi108 = phi_in148;
									phi_in69 = phi149;
									uint32_t phi164 = phi93;
									uint32_t phi165 = phi_in150;
									phi_in94 = phi_in152;
									uint32_t phi_in166 = phi_in153;
									phi_in106 = phi_in154;
									uint32_t phi167 = phi155;
									phi_in99 = phi_in139;
									phi80 = phi_in157;
									uint64_t phi168 = phi_in140;
									int64_t anon170 = (__sext int64_t)*(uint32_t*)(phi119 + anon118 * 12 + 6301632);
									uint32_t* anon169 = (uint32_t*)((anon170 << 2) + 6300992);
									if (*(uint32_t*)(phi_in157 + 40) < *anon169)
									{
										uint64_t phi_in181;
										*anon169 = *(uint32_t*)(phi_in157 + 44);
										uint64_t phi171 = 0;
										uint32_t phi_in172 = phi_in141;
										uint32_t phi_in173 = phi_in142;
										uint32_t phi_in174 = phi_in143;
										uint32_t phi175 = phi122;
										uint32_t phi176 = phi_in144;
										uint32_t phi_in177 = phi_in145;
										uint32_t phi_in178 = phi146;
										uint32_t phi179 = phi_in125;
										uint32_t phi180 = phi_in126;
										*(uint32_t*)(phi_in181 + 124) = phi_in147;
										uint32_t phi_in182 = phi_in148;
										int64_t anon186 = (__sext int64_t)*(uint32_t*)(phi171 + anon170 * 12 + 6301632);
										int64_t anon185 = anon186 * 12;
										int64_t anon184 = (__sext int64_t)*(uint32_t*)(anon185 + 6301636);
										uint32_t* anon183 = (uint32_t*)((anon184 << 2) + 6300992);
										*anon183 = phi_in129;
										uint32_t phi_in187 = phi151;
										uint32_t phi_in188 = phi_in152;
										uint32_t phi189 = phi_in153;
										uint64_t phi_in190 = phi_in154;
										uint64_t phi191 = phi135;
										uint64_t phi_in192 = phi156;
										uint32_t phi193 = phi_in137;
										uint32_t phi194 = phi138;
										uint32_t phi195 = phi_in139;
										do
										{
											uint32_t phi_in196 = phi_in172;
											uint32_t phi197 = phi_in173;
											uint32_t phi_in198 = phi_in174;
											uint32_t phi_in199 = phi175;
											uint32_t phi200 = phi176;
											uint32_t phi201 = phi_in177;
											uint32_t phi_in202 = phi_in178;
											phi_in125 = phi179;
											*(uint32_t*)(phi_in181 + 96) = phi180;
											uint32_t phi_in203 = phi93;
											uint32_t phi_in204 = phi_in150;
											uint32_t phi_in205 = phi_in187;
											uint32_t phi206 = phi_in188;
											uint32_t phi_in207 = phi189;
											uint32_t phi_in208 = phi155;
											uint64_t phi_in209 = phi191;
											*(uint64_t*)(phi_in181 + 112) = phi_in192;
											uint32_t phi210 = phi193;
											uint32_t phi_in211 = phi194;
											uint32_t phi_in212 = phi195;
											phi_in181 = phi_in157;
											uint32_t phi213 = phi_in196;
											phi159 = phi197;
											uint32_t phi214 = phi_in198;
											uint32_t phi215 = phi_in199;
											phi176 = phi200;
											uint32_t phi216 = phi_in202;
											uint32_t phi217 = *(uint32_t*)(phi_in181 + 96);
											phi163 = *(uint32_t*)(phi_in181 + 124);
											uint32_t phi218 = phi_in182;
											phi_in129 = *anon183;
											uint32_t phi219 = phi149;
											uint32_t phi_in220 = phi_in203;
											phi165 = phi_in204;
											uint32_t phi_in221 = phi_in205;
											phi_in166 = phi_in207;
											phi_in154 = phi_in190;
											phi167 = phi_in208;
											phi135 = phi_in209;
											uint64_t phi_in222 = *(uint64_t*)(phi_in181 + 112);
											phi138 = phi_in211;
											phi_in139 = phi_in212;
											uint64_t phi223 = phi_in181;
											uint64_t phi224 = phi_in140;
											uint32_t* anon225 = (uint32_t*)((anon186 << 2) + 6300992);
											if (*(uint32_t*)(phi_in181 + 44) < *anon225)
											{
												*anon225 = *(uint32_t*)(phi_in181 + 64);
												uint32_t phi_in226 = phi_in196;
												uint32_t phi_in227 = phi197;
												uint32_t phi_in228 = phi_in198;
												phi163 = phi_in199;
												phi_in181 = phi_in181;
												phi176 = phi200;
												uint32_t phi_in229 = phi201;
												phi_in178 = phi_in202;
												uint32_t phi230 = phi_in125;
												uint32_t phi_in231 = *(uint32_t*)(phi_in181 + 96);
												phi163 = *(uint32_t*)(phi_in181 + 124);
												uint32_t phi232 = *anon183;
												uint32_t phi233 = phi149;
												phi93 = phi_in203;
												uint32_t phi234 = phi_in204;
												phi_in205 = phi_in205;
												uint32_t phi235 = phi206;
												uint32_t phi_in236 = phi_in207;
												uint32_t phi237 = phi_in208;
												*(uint64_t*)(phi238 + 96) = phi_in209;
												*(uint64_t*)(phi238 + 104) = *(uint64_t*)(phi_in181 + 112);
												uint32_t phi_in239 = phi210;
												uint32_t phi_in240 = phi_in211;
												phi_in212 = phi_in212;
												uint64_t phi241 = phi_in140;
												if (*(uint32_t*)(phi_in181 + 64) < *anon183)
												{
													uint32_t phi242 = phi_in199;
													uint32_t phi_in243 = phi201;
													uint64_t phi_in244 = phi_in181;
													uint32_t phi245 = phi_in202;
													uint32_t phi246 = phi_in125;
													uint64_t phi_in247 = anon184;
													uint32_t phi248 = *(uint32_t*)(phi_in181 + 96);
													uint32_t phi_in249 = phi_in205;
													uint64_t phi250 = phi_in190;
													uint32_t phi251 = phi_in208;
													uint64_t phi252 = *(uint64_t*)(phi_in181 + 112);
													uint64_t phi253 = phi_in140;
													if (phi_in182 < *anon183)
													{
														*(uint64_t*)(phi_in181 + 104) = phi_in209;
														*(uint64_t*)(phi_in181 + 88) = phi_in190;
														*(uint64_t*)(phi_in181 + 80) = anon184;
														uint64_t anon254 = (__zext uint64_t)*anon183;
														w(4197873, anon12, (__sext int64_t)*anon183, anon254, anon254);
														phi_in196 = *(uint32_t*)(arg1 - 96);
														phi197 = *(uint32_t*)(arg1 - 96);
														phi_in198 = *(uint32_t*)(arg1 - 96);
														phi242 = *(uint32_t*)(arg1 - 68);
														phi200 = *(uint32_t*)(arg1 - 96);
														phi_in243 = *(uint32_t*)(arg1 - 96);
														phi_in244 = anon12;
														phi245 = *(uint32_t*)(arg1 - 68);
														phi246 = *(uint32_t*)(arg1 - 96);
														phi_in247 = *(uint64_t*)(arg1 - 112);
														phi248 = *(uint32_t*)(arg1 - 96);
														phi149 = *(uint32_t*)(arg1 - 96);
														phi_in249 = *(uint32_t*)(arg1 - 96);
														phi250 = *(uint64_t*)(arg1 - 104);
														phi251 = *(uint32_t*)(arg1 - 96);
														phi_in209 = *(uint64_t*)(arg1 - 88);
														phi252 = *(uint64_t*)(arg1 - 80);
														phi253 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
													}
													phi_in173 = phi197;
													uint32_t phi255 = phi242;
													uint32_t phi256 = phi200;
													*(uint32_t*)(phi_in244 + 96) = phi_in243;
													uint32_t phi_in257 = phi246;
													*(uint64_t*)(phi_in244 + 80) = phi_in247;
													uint32_t phi_in258 = phi248;
													uint32_t phi_in259 = phi149;
													*(uint64_t*)(phi_in244 + 88) = phi250;
													uint32_t phi260 = phi251;
													*(uint64_t*)(phi_in244 + 104) = phi_in209;
													uint64_t phi261 = phi252;
													uint32_t phi262 = phi_in196;
													uint32_t phi263 = phi_in198;
													uint64_t phi264 = phi_in244;
													uint32_t phi265 = *(uint32_t*)(phi_in244 + 96);
													uint32_t phi266 = phi_in257;
													uint64_t phi267 = *(uint64_t*)(phi_in244 + 80);
													uint32_t phi268 = phi_in258;
													uint32_t phi269 = phi_in259;
													uint32_t phi270 = phi_in249;
													uint64_t phi_in271 = *(uint64_t*)(phi_in244 + 88);
													*(uint64_t*)(phi_in157 + 96) = *(uint64_t*)(phi_in244 + 104);
													int64_t anon272 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi_in244 + 80) * 12 + 6301636);
													if (phi245 < *(uint32_t*)((anon272 << 2) + 6300992))
													{
														*(uint32_t*)(phi_in244 + 124) = phi245;
														*(uint64_t*)(phi_in244 + 112) = phi261;
														uint64_t anon273 = (__zext uint64_t)*(uint32_t*)(phi_in244 + 120);
														w(4197793, anon12, anon272, anon273, anon273);
														phi262 = *(uint32_t*)(arg1 - 96);
														phi_in173 = *(uint32_t*)(arg1 - 96);
														phi263 = *(uint32_t*)(arg1 - 96);
														phi255 = alloca1.field14;
														phi256 = *(uint32_t*)(arg1 - 96);
														phi264 = anon12;
														phi265 = *(uint32_t*)(arg1 - 96);
														phi245 = alloca1.field14;
														phi266 = *(uint32_t*)(arg1 - 96);
														phi267 = *(uint64_t*)(arg1 - 112);
														phi268 = *(uint32_t*)(arg1 - 96);
														phi269 = *(uint32_t*)(arg1 - 96);
														phi270 = *(uint32_t*)(arg1 - 96);
														phi_in271 = *(uint64_t*)(arg1 - 104);
														phi260 = *(uint32_t*)(arg1 - 96);
														*(uint64_t*)(phi_in157 + 96) = *(uint64_t*)(arg1 - 88);
														phi261 = *(uint64_t*)(arg1 - 80);
														phi253 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
													}
													uint32_t phi_in274 = phi262;
													phi_in174 = phi263;
													phi_in199 = phi255;
													phi176 = phi256;
													phi_in157 = phi264;
													phi_in177 = phi265;
													phi_in240 = phi245;
													uint32_t phi_in275 = phi266;
													phi_in231 = phi268;
													phi233 = phi269;
													uint32_t phi_in276 = phi270;
													*(uint64_t*)(phi_in157 + 80) = phi_in271;
													phi237 = phi260;
													uint64_t phi_in277 = *(uint64_t*)(phi_in157 + 96);
													*(uint64_t*)(phi238 + 104) = phi261;
													uint64_t phi_in278 = phi253;
													phi_in226 = phi_in274;
													phi_in227 = phi_in173;
													phi_in228 = phi_in174;
													phi163 = phi_in199;
													phi_in181 = phi_in157;
													phi_in229 = phi_in177;
													phi_in178 = phi_in240;
													phi230 = phi_in275;
													phi163 = phi_in240;
													phi_in182 = phi_in240;
													phi232 = phi_in240;
													phi93 = phi_in240;
													phi234 = phi_in240;
													phi_in205 = phi_in276;
													phi235 = phi_in240;
													phi_in236 = phi_in240;
													phi_in190 = *(uint64_t*)(phi_in157 + 80);
													*(uint64_t*)(phi238 + 96) = phi_in277;
													phi_in239 = phi_in240;
													phi_in212 = phi_in240;
													phi241 = phi_in278;
													int64_t anon279 = (__sext int64_t)*(uint32_t*)(phi267 * 12 + 6301640);
													if (phi_in240 < *(uint32_t*)((anon279 << 2) + 6300992))
													{
														*(uint32_t*)(phi_in157 + 112) = phi_in240;
														*(uint64_t*)(phi_in157 + 104) = *(uint64_t*)(phi238 + 104);
														*(uint64_t*)(phi_in157 + 96) = phi_in277;
														*(uint32_t*)(phi_in157 + 88) = phi176;
														uint64_t anon280 = (__zext uint64_t)*(uint32_t*)(phi_in157 + 120);
														w(4197395, anon12, anon279, anon280, anon280);
														phi_in226 = *(uint32_t*)(arg1 - 104);
														phi_in227 = *(uint32_t*)(arg1 - 104);
														phi_in228 = *(uint32_t*)(arg1 - 104);
														phi163 = *(uint32_t*)(arg1 - 80);
														phi_in181 = anon12;
														phi176 = *(uint32_t*)(arg1 - 104);
														phi_in229 = *(uint32_t*)(arg1 - 104);
														phi_in178 = *(uint32_t*)(arg1 - 80);
														phi230 = *(uint32_t*)(arg1 - 104);
														phi_in231 = *(uint32_t*)(arg1 - 104);
														phi163 = *(uint32_t*)(arg1 - 80);
														phi_in182 = *(uint32_t*)(arg1 - 80);
														phi232 = *(uint32_t*)(arg1 - 80);
														phi233 = *(uint32_t*)(arg1 - 104);
														phi93 = *(uint32_t*)(arg1 - 80);
														phi234 = *(uint32_t*)(arg1 - 80);
														phi_in205 = *(uint32_t*)(arg1 - 104);
														phi235 = *(uint32_t*)(arg1 - 80);
														phi_in236 = *(uint32_t*)(arg1 - 80);
														phi_in190 = *(uint64_t*)(arg1 - 112);
														phi237 = *(uint32_t*)(arg1 - 104);
														*(uint64_t*)(phi238 + 96) = *(uint64_t*)(arg1 - 96);
														*(uint64_t*)(phi238 + 104) = *(uint64_t*)(arg1 - 88);
														phi_in239 = *(uint32_t*)(arg1 - 80);
														phi_in240 = *(uint32_t*)(arg1 - 80);
														phi_in212 = *(uint32_t*)(arg1 - 80);
														phi241 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
													}
												}
												phi_in172 = phi_in226;
												*(uint32_t*)(phi238 + 88) = phi_in227;
												uint32_t phi_in281 = phi_in228;
												*(uint32_t*)(phi238 + 112) = phi163;
												uint64_t phi238 = phi_in181;
												uint32_t phi_in282 = phi176;
												uint32_t phi_in283 = phi_in229;
												uint32_t phi_in284 = phi_in231;
												uint32_t phi_in285 = phi232;
												uint32_t phi_in286 = phi233;
												phi_in203 = phi93;
												phi165 = phi234;
												uint32_t phi_in287 = phi_in205;
												phi206 = phi235;
												phi_in208 = phi237;
												*(uint64_t*)(phi_in181 + 96) = *(uint64_t*)(phi238 + 96);
												uint64_t phi288 = *(uint64_t*)(phi238 + 104);
												uint64_t phi_in289 = phi241;
												phi213 = phi_in172;
												phi159 = *(uint32_t*)(phi238 + 88);
												phi214 = phi_in281;
												phi215 = *(uint32_t*)(phi238 + 112);
												phi176 = phi_in282;
												phi201 = phi_in283;
												phi216 = phi_in178;
												phi_in125 = phi230;
												phi217 = phi_in284;
												phi218 = phi_in182;
												phi_in129 = phi_in285;
												phi219 = phi_in286;
												phi_in220 = phi_in203;
												phi_in221 = phi_in287;
												phi_in166 = phi_in236;
												phi_in154 = phi_in190;
												phi167 = phi_in208;
												phi135 = *(uint64_t*)(phi_in181 + 96);
												phi_in222 = phi288;
												phi210 = phi_in239;
												phi138 = phi_in240;
												phi_in139 = phi_in212;
												phi223 = phi238;
												phi224 = phi_in289;
												int64_t anon291 = (__sext int64_t)*(uint32_t*)(anon185 + 6301640);
												uint32_t* anon290 = (uint32_t*)((anon291 << 2) + 6300992);
												if (*(uint32_t*)(phi238 + 64) < *anon290)
												{
													*anon290 = *(uint32_t*)(phi238 + 112);
													uint32_t phi292 = phi_in172;
													uint32_t phi_in293 = *(uint32_t*)(phi238 + 88);
													uint32_t phi294 = phi_in281;
													phi163 = *(uint32_t*)(phi238 + 112);
													uint32_t phi_in295 = phi_in282;
													phi201 = phi_in283;
													uint32_t phi296 = phi_in284;
													phi_in205 = phi_in287;
													uint64_t phi297 = phi_in190;
													phi_in208 = phi_in208;
													phi_in140 = phi_in289;
													int64_t anon299 = anon291 * 12;
													int64_t anon298 = (__sext int64_t)*(uint32_t*)(anon299 + 6301636);
													if (*(uint32_t*)(phi238 + 112) < *(uint32_t*)((anon298 << 2) + 6300992))
													{
														*(uint64_t*)(phi238 + 104) = phi288;
														*(uint64_t*)(phi238 + 96) = *(uint64_t*)(phi_in181 + 96);
														*(uint64_t*)(phi238 + 80) = phi_in190;
														uint64_t anon300 = (__zext uint64_t)*(uint32_t*)(phi238 + 120);
														w(4197948, anon12, anon298, anon300, anon300);
														phi292 = *(uint32_t*)(arg1 - 104);
														phi_in293 = *(uint32_t*)(arg1 - 104);
														phi294 = *(uint32_t*)(arg1 - 104);
														phi163 = *(uint32_t*)(arg1 - 80);
														phi_in295 = *(uint32_t*)(arg1 - 104);
														phi201 = *(uint32_t*)(arg1 - 104);
														phi230 = *(uint32_t*)(arg1 - 104);
														phi296 = *(uint32_t*)(arg1 - 104);
														phi_in286 = *(uint32_t*)(arg1 - 104);
														phi_in205 = *(uint32_t*)(arg1 - 104);
														phi297 = *(uint64_t*)(arg1 - 112);
														phi_in208 = *(uint32_t*)(arg1 - 104);
														*(uint64_t*)(phi_in181 + 96) = *(uint64_t*)(arg1 - 96);
														phi288 = *(uint64_t*)(arg1 - 88);
														phi238 = anon12;
														phi_in140 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
													}
													*(uint32_t*)(phi_in181 + 88) = phi292;
													phi214 = phi294;
													phi218 = phi163;
													phi_in125 = phi230;
													phi217 = phi296;
													phi_in190 = phi297;
													uint64_t phi_in301 = *(uint64_t*)(phi_in181 + 96);
													*(uint64_t*)(phi_in181 + 104) = phi288;
													phi_in181 = phi238;
													phi213 = *(uint32_t*)(phi_in181 + 88);
													phi159 = phi_in293;
													phi215 = phi218;
													phi176 = phi_in295;
													phi216 = phi218;
													phi163 = phi218;
													phi_in129 = phi218;
													phi219 = phi_in286;
													phi_in220 = phi218;
													phi165 = phi218;
													phi_in221 = phi_in205;
													phi206 = phi218;
													phi_in166 = phi218;
													phi_in154 = phi_in190;
													phi167 = phi_in208;
													phi135 = phi_in301;
													phi_in222 = *(uint64_t*)(phi_in181 + 104);
													phi210 = phi218;
													phi138 = phi218;
													phi_in139 = phi218;
													phi223 = phi_in181;
													phi224 = phi_in140;
													int64_t anon302 = (__sext int64_t)*(uint32_t*)(anon299 + 6301640);
													if (phi218 < *(uint32_t*)((anon302 << 2) + 6300992))
													{
														*(uint32_t*)(phi_in181 + 112) = phi218;
														*(uint64_t*)(phi_in181 + 96) = phi_in301;
														*(uint64_t*)(phi_in181 + 80) = phi_in190;
														uint64_t anon303 = (__zext uint64_t)*(uint32_t*)(phi_in181 + 120);
														w(4197231, anon12, anon302, anon303, anon303);
														phi213 = alloca1.field8;
														phi159 = alloca1.field8;
														phi214 = alloca1.field8;
														phi215 = alloca1.field12;
														phi176 = alloca1.field8;
														phi201 = alloca1.field8;
														phi216 = alloca1.field12;
														phi_in125 = alloca1.field8;
														phi217 = alloca1.field8;
														phi163 = alloca1.field12;
														phi218 = alloca1.field12;
														phi_in129 = alloca1.field12;
														phi219 = alloca1.field8;
														phi_in220 = alloca1.field12;
														phi165 = alloca1.field12;
														phi_in221 = alloca1.field8;
														phi206 = alloca1.field12;
														phi_in166 = alloca1.field12;
														phi_in154 = alloca1.field7;
														phi167 = alloca1.field8;
														phi135 = alloca1.field10;
														phi_in222 = alloca1.field11;
														phi210 = alloca1.field12;
														phi138 = alloca1.field12;
														phi_in139 = alloca1.field12;
														phi223 = anon12;
														phi224 = (__zext uint64_t)alloca1.field8;
													}
												}
											}
											phi158 = phi213;
											phi_in143 = phi214;
											phi122 = phi215;
											phi_in144 = phi176;
											phi161 = phi201;
											phi146 = phi216;
											uint32_t phi_in304 = phi217;
											phi108 = phi218;
											phi_in130 = phi219;
											uint32_t phi_in305 = phi206;
											uint32_t phi_in306 = phi210;
											phi80 = phi223;
											phi168 = phi224;
											phi160 = phi_in143;
											phi87 = phi_in144;
											phi_in64 = phi_in125;
											phi162 = phi_in304;
											phi_in129 = phi_in129;
											phi_in69 = phi_in130;
											phi164 = phi_in220;
											phi151 = phi_in221;
											phi_in94 = phi_in305;
											phi_in106 = phi_in154;
											phi156 = phi_in222;
											phi_in137 = phi_in306;
											phi_in99 = phi_in139;
											phi171 = phi171 + 4;
											phi_in172 = phi158;
											phi_in173 = phi159;
											phi_in174 = phi_in143;
											phi175 = phi122;
											phi176 = phi_in144;
											phi_in177 = phi161;
											phi_in178 = phi146;
											phi179 = phi_in125;
											phi180 = phi_in304;
											*(uint32_t*)(phi_in181 + 124) = phi163;
											phi_in182 = phi108;
											*anon183 = phi_in129;
											phi149 = phi_in130;
											phi93 = phi_in220;
											phi_in150 = phi165;
											phi_in187 = phi_in221;
											phi_in188 = phi_in305;
											phi189 = phi_in166;
											phi_in190 = phi_in154;
											phi155 = phi167;
											phi191 = phi135;
											phi_in192 = phi_in222;
											phi193 = phi_in306;
											phi194 = phi138;
											phi195 = phi_in139;
											phi_in157 = phi80;
											phi_in140 = phi168;
										}
										while (phi171 != 8);
									}
									uint32_t phi_in307 = phi158;
									phi57 = phi159;
									phi_in85 = phi160;
									phi_in86 = phi122;
									phi103 = phi161;
									phi_in104 = phi146;
									uint32_t phi_in308 = phi162;
									phi91 = phi163;
									uint32_t phi_in309 = phi164;
									uint32_t phi_in310 = phi165;
									uint32_t phi_in311 = phi151;
									phi_in75 = phi167;
									phi_in76 = phi135;
									uint64_t phi_in312 = phi156;
									phi98 = phi138;
									phi_in116 = phi168;
									phi100 = phi_in307;
									phi101 = phi_in85;
									phi59 = phi_in86;
									phi_in102 = phi87;
									phi_in105 = phi_in64;
									phi82 = phi_in312;
									phi107 = phi_in308;
									phi_in109 = phi_in129;
									phi110 = phi_in69;
									phi70 = phi_in309;
									phi71 = phi_in310;
									phi_in111 = phi_in311;
									phi73 = phi_in94;
									phi74 = phi_in166;
									phi112 = phi_in75;
									phi_in113 = phi_in76;
									phi77 = phi_in137;
									phi114 = phi_in99;
									phi115 = phi80;
									phi119 = phi119 + 4;
									phi84 = phi_in307;
									phi120 = phi57;
									phi121 = phi_in85;
									phi122 = phi_in86;
									phi123 = phi103;
									phi124 = phi_in104;
									phi_in125 = phi_in64;
									phi_in126 = phi_in308;
									phi127 = phi91;
									phi_in128 = phi108;
									phi_in130 = phi_in69;
									phi93 = phi_in309;
									phi131 = phi_in310;
									phi72 = phi_in311;
									phi73 = phi_in94;
									phi132 = phi_in166;
									phi133 = phi_in106;
									phi134 = phi_in75;
									phi135 = phi_in76;
									phi136 = phi_in312;
									phi138 = phi98;
									phi_in139 = phi_in99;
									phi_in140 = phi_in116;
								}
								while (phi119 != 8);
							}
							uint32_t phi_in313 = phi57;
							uint32_t phi_in314 = phi101;
							uint32_t phi_in315 = phi103;
							phi316 = phi_in106;
							phi317 = phi107;
							phi318 = phi110;
							uint32_t phi_in319 = phi112;
							uint64_t phi_in320 = phi115;
							phi39 = phi_in313;
							phi321 = phi_in314;
							phi322 = phi_in102;
							phi323 = phi_in315;
							phi324 = phi_in105;
							phi_in325 = phi_in113;
							phi326 = phi_in111;
							phi327 = phi_in319;
							phi36 = phi_in320;
							phi53 = phi_in116;
							if (phi316 != 8)
							{
								phi56 = phi100;
								phi57 = phi_in313;
								phi58 = phi_in314;
								phi_in61 = phi_in102;
								phi62 = phi_in315;
								phi_in63 = phi_in104;
								phi_in64 = phi_in105;
								phi_in65 = phi317;
								phi_in66 = phi91;
								phi_in67 = phi108;
								phi_in68 = phi_in109;
								phi_in69 = phi318;
								phi72 = phi_in111;
								phi_in75 = phi_in319;
								phi_in76 = phi_in113;
								phi78 = phi98;
								phi79 = phi114;
								phi80 = phi_in320;
								phi81 = phi316 + 4;
								phi_in83 = phi_in116;
							}
						}
						while (phi316 != 8);
					}
					else 
					{
						phi100 = phi47;
						phi39 = phi39;
						phi321 = phi28;
						phi322 = phi40;
						phi323 = phi30;
						phi324 = phi41;
						phi_in325 = phi52;
						phi317 = phi48;
						phi318 = phi32;
						phi326 = phi49;
						phi327 = phi50;
						phi36 = phi36;
						phi53 = phi53 & 0xffffffff;
					}
					phi47 = phi100;
					phi28 = phi321;
					phi40 = phi322;
					phi30 = phi323;
					phi41 = phi324;
					phi48 = phi317;
					phi32 = phi318;
					phi49 = phi326;
					phi50 = phi327;
					phi_in328 = phi47;
					phi329 = phi39;
					phi_in330 = phi28;
					phi331 = phi40;
					phi332 = phi30;
					phi23 = phi41;
					phi333 = *(uint64_t*)(phi36 + 72);
					phi334 = phi48;
					phi_in335 = phi32;
					phi33 = phi49;
					phi_in34 = phi50;
					phi336 = phi53;
					phi337 = phi36;
				}
				else 
				{
					phi_in328 = phi_in38;
					phi329 = phi39;
					phi_in330 = phi28;
					phi331 = phi40;
					phi332 = phi30;
					phi23 = phi41;
					phi333 = *(uint64_t*)(phi36 + 72);
					phi334 = phi_in42;
					phi_in335 = phi32;
					phi33 = phi_in43;
					phi336 = phi_in44 & 0xffffffff;
					phi337 = phi36;
				}
				phi27 = phi329;
				phi29 = phi331;
				phi30 = phi332;
				phi31 = phi334;
				phi35 = phi336;
				phi37 = phi337;
				phi16 = *(uint32_t*)(phi37 + 68);
				phi338 = phi23;
				phi339 = *(uint64_t*)(phi37 + 56);
				phi340 = (__zext uint64_t)phi23;
				*(uint32_t*)(phi10 + 68) = *(uint32_t*)(phi37 + 68);
				phi341 = phi23;
				phi342 = *(uint32_t*)(phi37 + 68);
				phi10 = phi37;
			}
			else 
			{
				phi16 = phi_in21;
				phi338 = phi_in22;
				phi339 = *(uint64_t*)(phi10 + 56);
				phi340 = phi18 & 0xffffffff;
				phi341 = phi23;
				phi342 = phi19;
				phi10 = phi10;
			}
			phi17 = phi338;
			phi18 = phi340;
			phi4 = phi341;
			phi19 = phi342;
			phi343 = *(uint64_t*)(phi10 + 48);
			phi344 = phi17;
			phi_in5 = phi16;
			phi345 = (__zext uint64_t)phi17;
			phi8 = phi16;
			phi_in346 = phi17;
			phi11 = phi10;
		}
		else 
		{
			phi343 = *(uint64_t*)(phi10 + 48);
			phi344 = phi4;
			phi_in5 = phi_in13;
			phi345 = phi7 & 0xffffffff;
			phi8 = *anon14;
			phi_in346 = phi9;
			phi11 = phi10;
		}
		if (phi343 != 8)
		{
			phi4 = phi344;
			phi7 = phi345;
			phi9 = phi_in346;
			*(uint64_t*)(phi10 + 48) = phi343 + 4;
		}
		phi20 = phi339 + 4;
		phi26 = phi_in328;
		phi28 = phi_in330;
		phi32 = phi_in335;
		*(uint64_t*)(phi36 + 72) = phi333 + 4;
		phi51 = phi51 + 4;
		phi52 = phi_in325;
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
			uint32_t* anon15;
			uint32_t phi_in16;
			uint32_t phi18;
			uint32_t phi19;
			uint32_t phi20;
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
				anon15 = (uint32_t*)(phi9 - 4);
				*phi7 = *anon15;
			}
			else 
			{
				phi_in16 = *anon15;
				if (*phi7 < *anon15)
				{
					phi_in11 = *anon10 & 0xf;
					phi12 = *anon10;
					phi13 = *phi7 & 0xf;
					phi14 = *phi7;
					*phi7 = *anon15 & 0xf;
				}
			}
			if (*anon10 >= *phi7 && *phi7 < *anon15 || *anon10 < *phi7 && *anon10 < *anon15)
			{
				uint32_t phi_in17 = phi12;
				phi_in16 = phi13;
				*anon15 = phi14;
				phi18 = phi_in11;
				phi19 = *anon15;
				phi20 = phi_in17;
			}
			if (*anon10 < *phi7)
			{
				if (*anon10 >= *anon15)
				{
					phi_in16 = *anon15 & 0xf;
					phi18 = *phi7;
					phi19 = *anon10;
					phi20 = *phi7;
				}
			}
			if (*anon10 >= *phi7 && *phi7 < *anon15 || *anon10 < *phi7 && *anon10 < *anon15 || *anon10 < *phi7 && *anon10 >= *anon15)
			{
				*phi7 = phi18;
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
			uint32_t phi28;
			uint32_t phi29;
			uint32_t phi30;
			uint32_t* anon31;
			uint32_t phi_in32;
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
				anon31 = (uint32_t*)(phi22 - 4);
				*anon26 = *anon31;
			}
			else 
			{
				phi_in32 = *anon31;
				if (*anon26 < *anon31)
				{
					phi27 = *anon25 & 0xf;
					phi28 = *anon25;
					phi29 = *anon26 & 0xf;
					phi30 = *anon26;
					*anon26 = *anon31 & 0xf;
				}
			}
			if (*anon25 >= *anon26 && *anon26 < *anon31 || *anon25 < *anon26 && *anon25 < *anon31)
			{
				uint32_t phi_in33 = phi27;
				phi34 = phi28;
				uint32_t phi_in35 = phi29;
				*anon31 = phi30;
				phi36 = phi_in35;
				phi37 = phi_in33;
				phi38 = *anon31;
			}
			if (*anon25 < *anon26)
			{
				if (*anon25 >= *anon31)
				{
					phi36 = *anon31 & 0xf;
					phi37 = *anon26;
					phi38 = *anon25;
					phi34 = *anon26;
				}
			}
			if (*anon25 >= *anon26 && *anon26 < *anon31 || *anon25 < *anon26 && *anon25 < *anon31 || *anon25 < *anon26 && *anon25 >= *anon31)
			{
				phi_in32 = phi36;
				*anon26 = phi37;
				*anon25 = phi38;
				if (phi34 - *anon25 <= 4294967295)
				{
					phi_in32 = *(uint32_t*)((phi22 & 0xf) - 4);
				}
			}
			uint32_t phi39 = phi_in32;
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
	uint64_t phi6;
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
		phi6 = phi4;
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
		uint8_t* anon19;
		dispatch2 = 4;
		if (*(uint32_t*)(((__sext int64_t)phi16 << 2) + 6300992) != 0)
		{
			phi6 = (__zext uint64_t)phi16;
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
		}
		if (*(uint32_t*)(((__sext int64_t)phi16 << 2) + 6300992) != 0 || (uint32_t)anon20 + ((uint32_t)((anon20 & 0xffffffff) / 3) - (uint32_t)(anon20 << 32 >> 32 >> 31)) * 4294967293 != 1)
		{
			phi4 = phi6;
			dispatch2 = 1;
		}
		if ((uint8_t)anon18 != 10)
		{
			if (*(uint32_t*)(((__sext int64_t)phi16 << 2) + 6300992) != 0 || (uint32_t)anon20 + ((uint32_t)((anon20 & 0xffffffff) / 3) - (uint32_t)(anon20 << 32 >> 32 >> 31)) * 4294967293 != 1)
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
