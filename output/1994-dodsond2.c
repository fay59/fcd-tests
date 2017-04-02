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
	uint32_t phi_in6;
	uint32_t* phi_in1 = (uint32_t*)0x6027c4;
	uint64_t phi_in2 = 6301636;
	do
	{
		uint32_t phi_in5;
		uint32_t* anon7;
		uint32_t phi_in8;
		uint64_t phi3 = phi_in2;
		uint32_t* anon4 = (uint32_t*)(phi3 + 4);
		if (*anon4 < *phi_in1)
		{
			*anon4 = *phi_in1;
			*phi_in1 = *anon4;
			phi_in5 = *phi_in1;
			phi_in6 = *anon4;
			anon7 = (uint32_t*)(phi3 - 4);
			phi_in6 = *anon7;
			phi_in5 = *phi_in1;
			phi_in8 = *anon4;
		}
		else 
		{
			phi_in5 = *anon4;
			phi_in6 = *phi_in1;
			phi_in6 = *anon7;
		}
		if (*anon4 < *phi_in1 && *anon4 < *anon7 || *anon4 >= *phi_in1 && *phi_in1 < *anon7)
		{
			*phi_in1 = *anon7;
			phi_in8 = *anon7;
		}
		if ((*anon4 < *phi_in1 && *anon4 < *anon7 || *anon4 >= *phi_in1 && *phi_in1 < *anon7 || *anon4 >= *anon7 && *anon4 < *phi_in1) && phi_in8 > phi_in5)
		{
			phi_in6 = *anon7;
		}
		if (phi_in6 != 255)
		{
			uint64_t anon9 = phi3 + 12;
			phi_in1 = (uint32_t*)anon9;
			phi_in2 = anon9;
			if (phi3 == 6301984)
			{
				break;
			}
		}
	}
	while (phi_in6 != 255);
	return;
}
void w(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4)
{
	struct { uint8_t field0[4]; uint32_t field1; uint64_t field2; uint8_t field3[8]; uint32_t field4; uint32_t field5; uint8_t field6[48]; uint64_t field7; uint32_t field8; uint8_t field9[4]; uint64_t field10; uint64_t field11; uint32_t field12; uint8_t field13[8]; uint32_t field14; uint8_t field15[56]; uint64_t field16; } alloca1;
	uint32_t phi_in5;
	uint64_t phi_in10;
	uint64_t phi_in97;
	alloca1.field16 = arg0;
	uint64_t anon2 = arg2 << 32;
	uint32_t anon3 = (uint32_t)arg4;
	*(uint32_t*)((anon2 >> 30) + 6300992) = anon3;
	alloca1.field2 = (anon2 >> 32) * 12;
	alloca1.field1 = anon3 + 2;
	alloca1.field4 = anon3 + 3;
	alloca1.field5 = anon3 + 4;
	uint32_t phi_in4 = anon3;
	uint32_t anon6 = anon3 + 1;
	phi_in5 = anon6;
	uint64_t phi_in7 = arg4 & 0xffffffff;
	int64_t anon9 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi_in10 + 48) + *(uint64_t*)(phi_in10 + 8) + 6301632);
	uint32_t* anon8 = (uint32_t*)((anon9 << 2) + 6300992);
	*anon8 = anon6;
	uint32_t phi_in11 = anon3;
	*(uint64_t*)(phi_in10 + 48) = 0;
	uint64_t anon12 = (uint64_t)&alloca1;
	phi_in10 = anon12;
	do
	{
		uint32_t phi_in13;
		uint32_t phi_in14;
		uint64_t phi51;
		uint64_t phi_in98;
		if (phi_in11 < *anon8)
		{
			uint64_t phi96;
			*(uint64_t*)(phi_in10 + 16) = anon9 * 12;
			*(uint32_t*)(phi_in10 + 40) = (uint32_t)phi_in7 + 5;
			phi_in13 = phi_in5;
			phi_in14 = phi_in4;
			uint64_t phi_in15 = (__zext uint64_t)phi_in4;
			*(uint32_t*)(phi_in16 + 68) = phi_in5;
			uint32_t phi_in17 = phi_in4;
			uint32_t phi_in18 = phi_in5;
			*(uint64_t*)(phi_in16 + 56) = 0;
			uint64_t phi_in16 = phi_in10;
			do
			{
				uint64_t phi_in92;
				uint64_t phi_in93;
				uint32_t phi_in94;
				uint32_t phi_in95;
				int64_t anon20 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi_in16 + 56) + *(uint64_t*)(phi_in16 + 16) + 6301632);
				uint32_t* anon19 = (uint32_t*)((anon20 << 2) + 6300992);
				if (phi_in18 < *anon19)
				{
					uint64_t phi91;
					*anon19 = *(uint32_t*)(phi_in16 + 4);
					*(uint64_t*)(phi_in16 + 32) = anon20 * 12;
					*(uint32_t*)(phi_in16 + 44) = (uint32_t)phi_in15 + 6;
					uint32_t phi_in21 = phi_in17;
					uint32_t phi_in22 = phi_in17;
					uint32_t phi_in23 = phi_in17;
					uint32_t phi_in24 = phi_in17;
					uint32_t phi_in25 = phi_in17;
					uint32_t phi_in26 = phi_in17;
					uint32_t phi_in27 = phi_in17;
					uint32_t phi_in28 = phi_in17;
					uint32_t phi_in29 = phi_in17;
					uint32_t phi_in30 = phi_in17;
					uint64_t phi_in31 = (__zext uint64_t)phi_in17;
					*(uint64_t*)(phi_in32 + 72) = 0;
					uint64_t phi_in32 = phi_in16;
					do
					{
						uint32_t phi_in52;
						uint32_t phi_in55;
						uint32_t phi_in56;
						uint32_t phi_in57;
						uint32_t phi_in58;
						uint32_t phi_in59;
						uint32_t phi_in60;
						uint64_t phi_in63;
						uint64_t phi_in90;
						int64_t anon34 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi_in32 + 72) + *(uint64_t*)(phi_in32 + 32) + 6301632);
						uint32_t* anon33 = (uint32_t*)((anon34 << 2) + 6300992);
						if (*(uint32_t*)(phi_in32 + 4) < *anon33)
						{
							*anon33 = *(uint32_t*)(phi_in32 + 24);
							*(uint32_t*)(phi_in32 + 64) = (uint32_t)phi_in31 + 7;
							uint32_t phi_in35 = phi_in21;
							uint32_t phi_in36 = phi_in22;
							uint32_t phi_in37 = phi_in23;
							uint32_t phi_in38 = phi_in24;
							uint32_t phi_in39 = phi_in25;
							uint32_t phi_in40 = phi_in26;
							uint32_t phi_in41 = phi_in27;
							uint32_t phi_in42 = phi_in28;
							uint32_t phi_in43 = phi_in29;
							uint32_t phi_in44 = phi_in30;
							uint64_t phi_in45 = phi_in32;
							uint64_t phi_in46 = 0;
							uint64_t phi_in47 = anon34 * 12;
							uint64_t phi_in48 = phi_in31;
							do
							{
								int64_t anon50 = (__sext int64_t)*(uint32_t*)(phi_in46 + phi_in47 + 6301632);
								uint32_t* anon49 = (uint32_t*)((anon50 << 2) + 6300992);
								if (*(uint32_t*)(phi_in45 + 24) < *anon49)
								{
									uint64_t phi89;
									*anon49 = *(uint32_t*)(phi_in45 + 28);
									*(uint32_t*)(phi51 + 88) = phi_in35;
									*(uint32_t*)(phi51 + 88) = phi_in36;
									phi_in52 = phi_in37;
									uint32_t anon54 = (uint32_t)phi_in48 + 8;
									phi_in53 = anon54;
									phi_in55 = phi_in38;
									phi_in56 = phi_in39;
									uint32_t phi_in53 = anon54;
									phi_in14 = phi_in40;
									phi_in57 = phi_in41;
									phi_in53 = anon54;
									phi_in53 = anon54;
									phi_in53 = anon54;
									phi_in58 = phi_in42;
									phi_in53 = anon54;
									phi_in53 = anon54;
									phi_in59 = phi_in43;
									phi_in53 = anon54;
									phi_in53 = anon54;
									phi_in60 = phi_in44;
									*(uint64_t*)(phi51 + 96) = phi_in47;
									phi_in53 = anon54;
									phi_in53 = anon54;
									phi_in53 = anon54;
									phi51 = phi_in45;
									uint64_t phi_in61 = 0;
									uint64_t phi_in62 = anon50 * 12;
									phi_in63 = phi_in48;
									do
									{
										uint64_t phi_in64 = phi_in62;
										uint64_t phi_in65 = phi_in61;
										int64_t anon67 = (__sext int64_t)*(uint32_t*)(phi_in61 + phi_in62 + 6301632);
										uint32_t* anon66 = (uint32_t*)((anon67 << 2) + 6300992);
										if (*(uint32_t*)(phi51 + 28) < *anon66)
										{
											*anon66 = *(uint32_t*)(phi51 + 40);
											*(uint32_t*)(phi51 + 120) = (uint32_t)phi_in63 + 9;
											uint64_t phi_in68 = 0;
											phi_in65 = phi_in61;
											phi_in64 = phi_in62;
											phi_in63 = phi_in63 & 0xffffffff;
											do
											{
												int64_t anon70 = (__sext int64_t)*(uint32_t*)(phi_in68 + anon67 * 12 + 6301632);
												uint32_t* anon69 = (uint32_t*)((anon70 << 2) + 6300992);
												if (*(uint32_t*)(phi51 + 40) < *anon69)
												{
													*anon69 = *(uint32_t*)(phi51 + 44);
													uint64_t phi_in71 = 0;
													do
													{
														int64_t anon73 = (__sext int64_t)*(uint32_t*)(phi_in71 + anon70 * 12 + 6301632);
														uint32_t* anon72 = (uint32_t*)((anon73 << 2) + 6300992);
														if (*(uint32_t*)(phi51 + 44) < *anon72)
														{
															*anon72 = *(uint32_t*)(phi51 + 64);
															int64_t anon76 = anon73 * 12;
															int64_t anon75 = (__sext int64_t)*(uint32_t*)(anon76 + 6301636);
															uint32_t* anon74 = (uint32_t*)((anon75 << 2) + 6300992);
															if (*(uint32_t*)(phi51 + 64) < *anon74)
															{
																*(uint64_t*)(phi51 + 80) = anon75;
																if (phi_in53 < phi_in53)
																{
																	*(uint64_t*)(phi51 + 80) = anon75;
																	uint64_t anon77 = (__zext uint64_t)phi_in53;
																	w(4197873, anon12, (__sext int64_t)phi_in53, anon77, anon77);
																	*(uint32_t*)(phi51 + 88) = *(uint32_t*)(arg1 - 96);
																	*(uint32_t*)(phi51 + 88) = *(uint32_t*)(arg1 - 96);
																	phi_in52 = *(uint32_t*)(arg1 - 96);
																	phi_in53 = *(uint32_t*)(arg1 - 68);
																	phi_in55 = *(uint32_t*)(arg1 - 96);
																	phi_in56 = *(uint32_t*)(arg1 - 96);
																	phi51 = anon12;
																	phi_in53 = *(uint32_t*)(arg1 - 68);
																	phi_in14 = *(uint32_t*)(arg1 - 96);
																	*(uint64_t*)(phi51 + 80) = *(uint64_t*)(arg1 - 112);
																	phi_in57 = *(uint32_t*)(arg1 - 96);
																	phi_in58 = *(uint32_t*)(arg1 - 96);
																	phi_in59 = *(uint32_t*)(arg1 - 96);
																	phi_in65 = *(uint64_t*)(arg1 - 104);
																	phi_in60 = *(uint32_t*)(arg1 - 96);
																	*(uint64_t*)(phi51 + 96) = *(uint64_t*)(arg1 - 88);
																	phi_in64 = *(uint64_t*)(arg1 - 80);
																	phi_in63 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
																}
																int64_t anon78 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi51 + 80) * 12 + 6301636);
																if (phi_in53 < *(uint32_t*)((anon78 << 2) + 6300992))
																{
																	uint64_t anon79 = (__zext uint64_t)*(uint32_t*)(phi51 + 120);
																	w(4197793, anon12, anon78, anon79, anon79);
																	*(uint32_t*)(phi51 + 88) = *(uint32_t*)(arg1 - 96);
																	*(uint32_t*)(phi51 + 88) = *(uint32_t*)(arg1 - 96);
																	phi_in52 = *(uint32_t*)(arg1 - 96);
																	phi_in53 = alloca1.field14;
																	phi_in55 = *(uint32_t*)(arg1 - 96);
																	phi51 = anon12;
																	phi_in56 = *(uint32_t*)(arg1 - 96);
																	phi_in53 = alloca1.field14;
																	phi_in14 = *(uint32_t*)(arg1 - 96);
																	*(uint64_t*)(phi51 + 80) = *(uint64_t*)(arg1 - 112);
																	phi_in57 = *(uint32_t*)(arg1 - 96);
																	phi_in58 = *(uint32_t*)(arg1 - 96);
																	phi_in59 = *(uint32_t*)(arg1 - 96);
																	phi_in65 = *(uint64_t*)(arg1 - 104);
																	phi_in60 = *(uint32_t*)(arg1 - 96);
																	*(uint64_t*)(phi51 + 96) = *(uint64_t*)(arg1 - 88);
																	phi_in64 = *(uint64_t*)(arg1 - 80);
																	phi_in63 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
																}
																int64_t anon80 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi51 + 80) * 12 + 6301640);
																if (phi_in53 < *(uint32_t*)((anon80 << 2) + 6300992))
																{
																	uint64_t anon81 = (__zext uint64_t)*(uint32_t*)(phi51 + 120);
																	w(4197395, anon12, anon80, anon81, anon81);
																	*(uint32_t*)(phi51 + 88) = *(uint32_t*)(arg1 - 104);
																	*(uint32_t*)(phi51 + 88) = *(uint32_t*)(arg1 - 104);
																	phi_in52 = *(uint32_t*)(arg1 - 104);
																	phi_in53 = *(uint32_t*)(arg1 - 80);
																	phi51 = anon12;
																	phi_in55 = *(uint32_t*)(arg1 - 104);
																	phi_in56 = *(uint32_t*)(arg1 - 104);
																	phi_in53 = *(uint32_t*)(arg1 - 80);
																	phi_in14 = *(uint32_t*)(arg1 - 104);
																	phi_in57 = *(uint32_t*)(arg1 - 104);
																	phi_in53 = *(uint32_t*)(arg1 - 80);
																	phi_in53 = *(uint32_t*)(arg1 - 80);
																	phi_in53 = *(uint32_t*)(arg1 - 80);
																	phi_in58 = *(uint32_t*)(arg1 - 104);
																	phi_in53 = *(uint32_t*)(arg1 - 80);
																	phi_in53 = *(uint32_t*)(arg1 - 80);
																	phi_in59 = *(uint32_t*)(arg1 - 104);
																	phi_in53 = *(uint32_t*)(arg1 - 80);
																	phi_in53 = *(uint32_t*)(arg1 - 80);
																	phi_in65 = *(uint64_t*)(arg1 - 112);
																	phi_in60 = *(uint32_t*)(arg1 - 104);
																	*(uint64_t*)(phi51 + 96) = *(uint64_t*)(arg1 - 96);
																	phi_in64 = *(uint64_t*)(arg1 - 88);
																	phi_in53 = *(uint32_t*)(arg1 - 80);
																	phi_in53 = *(uint32_t*)(arg1 - 80);
																	phi_in53 = *(uint32_t*)(arg1 - 80);
																	phi_in63 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
																}
															}
															int64_t anon83 = (__sext int64_t)*(uint32_t*)(anon76 + 6301640);
															uint32_t* anon82 = (uint32_t*)((anon83 << 2) + 6300992);
															if (*(uint32_t*)(phi51 + 64) < *anon82)
															{
																int64_t anon85 = anon83 * 12;
																int64_t anon84 = (__sext int64_t)*(uint32_t*)(anon85 + 6301636);
																if (phi_in53 < *(uint32_t*)((anon84 << 2) + 6300992))
																{
																	uint64_t anon86 = (__zext uint64_t)*(uint32_t*)(phi51 + 120);
																	w(4197948, anon12, anon84, anon86, anon86);
																	*(uint32_t*)(phi51 + 88) = *(uint32_t*)(arg1 - 104);
																	*(uint32_t*)(phi51 + 88) = *(uint32_t*)(arg1 - 104);
																	phi_in52 = *(uint32_t*)(arg1 - 104);
																	phi_in53 = *(uint32_t*)(arg1 - 80);
																	phi_in55 = *(uint32_t*)(arg1 - 104);
																	phi_in56 = *(uint32_t*)(arg1 - 104);
																	phi_in14 = *(uint32_t*)(arg1 - 104);
																	phi_in57 = *(uint32_t*)(arg1 - 104);
																	phi_in58 = *(uint32_t*)(arg1 - 104);
																	phi_in59 = *(uint32_t*)(arg1 - 104);
																	phi_in65 = *(uint64_t*)(arg1 - 112);
																	phi_in60 = *(uint32_t*)(arg1 - 104);
																	*(uint64_t*)(phi51 + 96) = *(uint64_t*)(arg1 - 96);
																	phi_in64 = *(uint64_t*)(arg1 - 88);
																	phi51 = anon12;
																	phi_in63 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
																}
																int64_t anon87 = (__sext int64_t)*(uint32_t*)(anon85 + 6301640);
																if (phi_in53 < *(uint32_t*)((anon87 << 2) + 6300992))
																{
																	uint64_t anon88 = (__zext uint64_t)*(uint32_t*)(phi51 + 120);
																	w(4197231, anon12, anon87, anon88, anon88);
																	*(uint32_t*)(phi51 + 88) = alloca1.field8;
																	*(uint32_t*)(phi51 + 88) = alloca1.field8;
																	phi_in52 = alloca1.field8;
																	phi_in53 = alloca1.field12;
																	phi_in55 = alloca1.field8;
																	phi_in56 = alloca1.field8;
																	phi_in53 = alloca1.field12;
																	phi_in14 = alloca1.field8;
																	phi_in57 = alloca1.field8;
																	phi_in53 = alloca1.field12;
																	phi_in53 = alloca1.field12;
																	phi_in53 = alloca1.field12;
																	phi_in58 = alloca1.field8;
																	phi_in53 = alloca1.field12;
																	phi_in53 = alloca1.field12;
																	phi_in59 = alloca1.field8;
																	phi_in53 = alloca1.field12;
																	phi_in53 = alloca1.field12;
																	phi_in65 = alloca1.field7;
																	phi_in60 = alloca1.field8;
																	*(uint64_t*)(phi51 + 96) = alloca1.field10;
																	phi_in64 = alloca1.field11;
																	phi_in53 = alloca1.field12;
																	phi_in53 = alloca1.field12;
																	phi_in53 = alloca1.field12;
																	phi51 = anon12;
																	phi_in63 = (__zext uint64_t)alloca1.field8;
																}
															}
														}
														phi_in71 = phi_in71 + 4;
													}
													while (phi_in71 != 8);
												}
												phi_in68 = phi_in68 + 4;
											}
											while (phi_in68 != 8);
										}
										phi89 = phi_in65;
										if (phi89 != 8)
										{
											phi_in61 = phi89 + 4;
											phi_in62 = phi_in64;
										}
									}
									while (phi89 != 8);
								}
								else 
								{
									*(uint32_t*)(phi51 + 88) = phi_in35;
									*(uint32_t*)(phi51 + 88) = phi_in36;
									phi_in52 = phi_in37;
									phi_in55 = phi_in38;
									phi_in56 = phi_in39;
									phi_in14 = phi_in40;
									*(uint64_t*)(phi51 + 96) = phi_in47;
									phi_in57 = phi_in41;
									phi_in58 = phi_in42;
									phi_in59 = phi_in43;
									phi_in60 = phi_in44;
									phi51 = phi_in45;
									phi_in63 = phi_in48 & 0xffffffff;
								}
								if (phi_in46 != 8)
								{
									phi_in35 = *(uint32_t*)(phi51 + 88);
									phi_in36 = *(uint32_t*)(phi51 + 88);
									phi_in37 = phi_in52;
									phi_in38 = phi_in55;
									phi_in39 = phi_in56;
									phi_in40 = phi_in14;
									phi_in41 = phi_in57;
									phi_in42 = phi_in58;
									phi_in43 = phi_in59;
									phi_in44 = phi_in60;
									phi_in45 = phi51;
									phi_in46 = phi_in46 + 4;
									phi_in47 = *(uint64_t*)(phi51 + 96);
									phi_in48 = phi_in63;
								}
							}
							while (phi_in46 != 8);
							phi_in90 = *(uint64_t*)(phi51 + 72);
						}
						else 
						{
							*(uint32_t*)(phi51 + 88) = phi_in21;
							*(uint32_t*)(phi51 + 88) = phi_in22;
							phi_in52 = phi_in23;
							phi_in55 = phi_in24;
							phi_in56 = phi_in25;
							phi_in14 = phi_in26;
							phi_in90 = *(uint64_t*)(phi_in32 + 72);
							phi_in57 = phi_in27;
							phi_in58 = phi_in28;
							phi_in59 = phi_in29;
							phi_in60 = phi_in30;
							phi_in63 = phi_in31 & 0xffffffff;
							phi51 = phi_in32;
						}
						phi91 = phi_in90;
						if (phi91 != 8)
						{
							phi_in21 = *(uint32_t*)(phi51 + 88);
							phi_in22 = *(uint32_t*)(phi51 + 88);
							phi_in23 = phi_in52;
							phi_in24 = phi_in55;
							phi_in25 = phi_in56;
							phi_in26 = phi_in14;
							phi_in27 = phi_in57;
							phi_in28 = phi_in58;
							phi_in29 = phi_in59;
							phi_in30 = phi_in60;
							phi_in31 = phi_in63;
							*(uint64_t*)(phi_in32 + 72) = phi91 + 4;
							phi_in32 = phi51;
						}
					}
					while (phi91 != 8);
					phi_in13 = *(uint32_t*)(phi51 + 68);
					phi_in92 = *(uint64_t*)(phi51 + 56);
					phi_in93 = (__zext uint64_t)phi_in14;
					phi_in94 = *(uint32_t*)(phi51 + 68);
					phi_in95 = *(uint32_t*)(phi51 + 68);
				}
				else 
				{
					phi_in92 = *(uint64_t*)(phi_in16 + 56);
					phi_in93 = phi_in15 & 0xffffffff;
					phi_in94 = *(uint32_t*)(phi_in16 + 68);
					phi_in14 = phi_in17;
					phi_in95 = phi_in18;
					phi51 = phi_in16;
				}
				phi96 = phi_in92;
				if (phi96 != 8)
				{
					phi_in15 = phi_in93;
					*(uint32_t*)(phi_in16 + 68) = phi_in94;
					phi_in17 = phi_in14;
					phi_in18 = phi_in95;
					*(uint64_t*)(phi_in16 + 56) = phi96 + 4;
					phi_in16 = phi51;
				}
			}
			while (phi96 != 8);
			phi_in97 = *(uint64_t*)(phi51 + 48);
			phi_in98 = (__zext uint64_t)phi_in14;
		}
		else 
		{
			phi_in97 = *(uint64_t*)(phi_in10 + 48);
			phi_in14 = phi_in4;
			phi_in13 = phi_in5;
			phi_in98 = phi_in7 & 0xffffffff;
			phi_in13 = *anon8;
			phi_in14 = phi_in11;
			phi51 = phi_in10;
		}
		if (phi_in97 != 8)
		{
			phi_in4 = phi_in14;
			phi_in5 = phi_in13;
			phi_in7 = phi_in98;
			*anon8 = phi_in13;
			phi_in11 = phi_in14;
			*(uint64_t*)(phi_in10 + 48) = phi_in97 + 4;
			phi_in10 = phi51;
		}
	}
	while (phi_in97 != 8);
	return;
}
void t(uint64_t arg0)
{
	struct { uint8_t field0[24]; uint64_t field1; } alloca1;
	uint32_t anon11;
	uint32_t anon19;
	alloca1.field1 = arg0;
	uint64_t phi_in2 = 4;
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
				uint64_t anon6 = anon3 << 32;
				anon5 = anon3 + (((anon3 & 0xffffffff) * 2290649225 + anon6 >> 32 >> 4) - (anon6 >> 32 >> 31)) * -30 << 32 >> 30;
				anon4 = (uint32_t*)(anon5 + 6301504);
			}
			while (*anon4 != 0);
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
		anon11 = (uint32_t)phi_in2 - 1;
		if (anon11 != 0)
		{
			phi_in2 = (__zext uint64_t)anon11;
		}
	}
	while (anon11 != 0);
	uint64_t anon12 = random();
	uint64_t anon13 = anon12 << 32;
	w(4198271, (uint64_t)&alloca1, anon12 + (((anon12 & 0xffffffff) * 2290649225 + anon13 >> 32 >> 4) - (anon13 >> 32 >> 31)) * 4294967266 & 0xffffffff, 0, 0);
	uint64_t phi_in14 = 3;
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
						uint64_t anon17 = anon15 << 32;
						anon16 = anon15 + (((anon15 & 0xffffffff) * 2290649225 + anon17 >> 32 >> 4) - (anon17 >> 32 >> 31)) * -30 << 32 >> 30;
					}
					while (*(uint32_t*)(anon16 + 6301504) != 0);
				}
				while (*(uint32_t*)(anon16 + 6300864) != 0);
				anon18 = (uint32_t*)(anon16 + 6301120);
			}
			while (*anon18 != 0);
		}
		while (*(uint32_t*)(anon16 + 6300992) == 0);
		*anon18 = 1;
		anon19 = (uint32_t)phi_in14 - 1;
		if (anon19 != 0)
		{
			phi_in14 = (__zext uint64_t)anon19;
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
	uint32_t phi_in2;
	uint32_t phi6;
	uint32_t phi_in1 = 0;
	uint64_t anon4 = arg1 << 32;
	uint32_t* anon3 = (uint32_t*)((anon4 >> 30) + 6301376);
	phi_in2 = *anon3;
	do
	{
		*anon3 = phi_in2 - 1;
		uint32_t phi_in5 = 3;
		phi6 = phi_in1;
		uint64_t anon7 = random();
		if (!(phi6 > 1000))
		{
			uint32_t anon8 = phi6 + 1;
			phi_in1 = anon8;
			uint32_t anon9 = phi_in5 - (__zext uint32_t)(anon8 == (anon8 / 100 - (uint32_t)((__zext uint64_t)anon8 << 32 >> 63)) * 100);
			phi_in5 = anon9;
			uint64_t anon12 = anon7 << 32;
			uint64_t anon11 = anon7 + (((anon7 & 0xffffffff) * 2290649225 + anon12 >> 36) - (anon12 >> 32 >> 31)) * 4294967266;
			uint32_t anon10 = (uint32_t)anon11;
			uint64_t anon14 = anon4 >> 32;
			uint32_t anon13 = (uint32_t)anon14;
			if (anon10 != anon13)
			{
				phi_in1 = anon8;
				phi_in5 = anon9;
				uint64_t anon16 = anon11 << 32;
				uint32_t* anon15 = (uint32_t*)((anon16 >> 30) + 6301376);
				if (*anon15 >= 1)
				{
					phi_in1 = anon8;
					phi_in5 = anon9;
					uint64_t anon17 = anon14 * 12;
					if (!(*(uint32_t*)(anon17 + 6301640) == anon10 | anon9 > *anon15))
					{
						phi_in1 = anon8;
						phi_in5 = anon9;
						if (anon10 != *(uint32_t*)(anon17 + 6301636))
						{
							uint32_t anon18 = *anon15 - 1;
							*anon15 = anon18;
							uint64_t anon19 = anon14 * 3;
							*(uint32_t*)(((__sext int64_t)anon18 + anon19 << 2) + 6301632) = anon10;
							uint62_t anon20 = (uint62_t)(anon16 >> 32) * 3;
							*(uint32_t*)(((__zext uint64_t)((__sext int62_t)anon18 + anon20) << 2) + 6301632) = anon13;
							r(4198736, anon11 & 0xffffffff);
							uint32_t* anon21 = (uint32_t*)((anon16 >> 30) + 6301376);
							*(uint32_t*)(((__zext uint64_t)(anon20 + (__sext int62_t)*anon21) << 2) + 6301632) = 4294967295;
							*anon21 = *anon21 + 1;
							*(uint32_t*)(((__sext int64_t)*anon3 + anon19 << 2) + 6301632) = 4294967295;
							*anon3 = 0;
							phi_in1 = anon8;
							phi_in2 = 0;
						}
					}
				}
			}
		}
	}
	while (phi_in2 != 0 && !(phi6 > 1000));
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
		uint64_t phi_in5;
		uint64_t phi_in6;
		uint64_t phi_in18;
		uint32_t anon19;
		uint32_t anon27;
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
		uint64_t phi_in1 = 6301504;
		uint64_t phi_in2 = 15;
		while (phi_in2 != 0)
		{
			*(uint64_t*)phi_in1 = 0;
			phi_in1 = phi_in1 + 8;
			phi_in2 = phi_in2 - 1;
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
		uint64_t phi_in3 = 15;
		uint64_t phi_in4 = 6300864;
		do
		{
			phi_in5 = 6301248;
			phi_in6 = 15;
			if (phi_in3 != 0)
			{
				*(uint64_t*)phi_in4 = 0;
				phi_in3 = phi_in3 - 1;
				phi_in4 = phi_in4 + 8;
			}
		}
		while (phi_in3 != 0);
		while (phi_in6 != 0)
		{
			*(uint64_t*)phi_in5 = 0;
			phi_in5 = phi_in5 + 8;
			phi_in6 = phi_in6 - 1;
		}
		r(4199339, 0);
		(__asm "movdqa xmm0, xmmword ptr [rsp + 0x20]")();
		(__asm "movdqa xmm2, xmmword ptr [rsp + 0x10]")();
		(__asm "movdqa xmm1, xmmword ptr [rsp]")();
		uint32_t* phi_in7 = (uint32_t*)0x6027c4;
		uint64_t phi_in8 = 6301636;
		do
		{
			uint32_t phi_in11;
			uint32_t phi_in12;
			uint32_t phi_in13;
			uint32_t phi_in14;
			uint32_t phi_in15;
			uint32_t* anon16;
			uint64_t phi9 = phi_in8;
			uint32_t* anon10 = (uint32_t*)(phi9 + 4);
			if (*anon10 < *phi_in7)
			{
				*phi_in7 = *anon10;
				*anon10 = *phi_in7;
				phi_in11 = *phi_in7;
				phi_in12 = *phi_in7;
				phi_in13 = *anon10;
				phi_in14 = *anon10;
				anon16 = (uint32_t*)(phi9 - 4);
				phi_in15 = *anon16;
			}
			else 
			{
				phi_in13 = *anon16;
				if (*phi_in7 < *anon16)
				{
					phi_in11 = *anon10 & 0xf;
					phi_in12 = *anon10;
					phi_in13 = *phi_in7 & 0xf;
					phi_in14 = *phi_in7;
					phi_in15 = *anon16 & 0xf;
				}
			}
			if (*anon10 >= *phi_in7 && *phi_in7 < *anon16 || *anon10 < *phi_in7 && *anon10 < *anon16)
			{
				*anon10 = *anon16;
			}
			if (*anon10 < *phi_in7)
			{
				if (*anon10 >= *anon16)
				{
					phi_in13 = *anon16 & 0xf;
					phi_in11 = *phi_in7;
					*anon10 = *anon10;
					phi_in12 = *phi_in7;
				}
			}
			if (*anon10 >= *phi_in7 && *phi_in7 < *anon16 || *anon10 < *phi_in7 && *anon10 < *anon16 || *anon10 < *phi_in7 && *anon10 >= *anon16)
			{
				if (phi_in12 - *anon10 <= 4294967295)
				{
					phi_in13 = *(uint32_t*)((phi9 & 0xc) - 4);
				}
			}
			uint32_t phi17 = phi_in13;
			phi_in18 = 6301636;
			anon19 = phi17 + 1 & 0xff;
			if (anon19 != 0)
			{
				phi_in18 = 6301636;
				uint64_t anon20 = phi9 + 12;
				phi_in7 = (uint32_t*)(anon20 & 0xc);
				phi_in8 = anon20;
				if (phi9 == 6301984)
				{
					break;
				}
			}
		}
		while (anon19 != 0);
		do
		{
			uint32_t phi_in23;
			uint32_t phi_in24;
			uint32_t* anon25;
			uint32_t* anon21 = (uint32_t*)(phi_in18 + 4);
			uint32_t* anon22 = (uint32_t*)phi_in18;
			if (*anon21 < *anon22)
			{
				*anon22 = *anon21;
				*anon21 = *anon22;
				*anon22 = *anon22;
				phi_in23 = *anon22;
				phi_in24 = *anon21;
				anon25 = (uint32_t*)(phi_in18 - 4);
				*anon25 = *anon21;
				*anon22 = *anon25;
			}
			else 
			{
				phi_in24 = *anon25;
				if (*anon22 < *anon25)
				{
					*anon22 = *anon21 & 0xf;
					phi_in23 = *anon21;
					phi_in24 = *anon22 & 0xf;
					*anon25 = *anon22;
					*anon22 = *anon25 & 0xf;
				}
			}
			if (*anon21 >= *anon22 && *anon22 < *anon25 || *anon21 < *anon22 && *anon21 < *anon25)
			{
				*anon21 = *anon25;
			}
			if (*anon21 < *anon22)
			{
				if (*anon21 >= *anon25)
				{
					phi_in24 = *anon25 & 0xf;
					*anon22 = *anon22;
					*anon21 = *anon21;
					phi_in23 = *anon22;
				}
			}
			if (*anon21 >= *anon22 && *anon22 < *anon25 || *anon21 < *anon22 && *anon21 < *anon25 || *anon21 < *anon22 && *anon21 >= *anon25)
			{
				if (phi_in23 - *anon21 <= 4294967295)
				{
					phi_in24 = *(uint32_t*)((phi_in18 & 0xf) - 4);
				}
			}
			uint32_t phi26 = phi_in24;
			anon27 = phi26 + 1 & 0xff;
			if (anon27 != 0)
			{
				phi_in18 = phi_in18 + 12;
			}
		}
		while (anon27 != 0);
	}
}
void q(uint64_t arg0, uint64_t arg1)
{
	struct { uint8_t field0[56]; uint64_t field1; } alloca1;
	uint64_t phi4;
	uint32_t phi_in5;
	uint32_t* anon6;
	uint32_t dispatch11;
	uint32_t phi_in14;
	uint32_t anon16;
	alloca1.field1 = arg0;
	uint32_t dispatch2 = 0;
	uint32_t* anon3 = (uint32_t*)0x602928;
	if (*anon3 != 0)
	{
		uint16_t** anon10;
		*anon3 = *anon3 - 1;
		printf((uint8_t*)0x401ca7);
		phi4 = arg1 & 0xffffffff;
		phi_in5 = 0;
		anon6 = (uint32_t*)0x602490;
		*anon6 = *anon6 + phi_in5;
		struct _IO_FILE** anon9 = (struct _IO_FILE**)0x602480;
		uint32_t anon8 = _IO_getc(*anon9);
		uint8_t anon7 = (uint8_t)anon8;
		if (anon7 == 10)
		{
			dispatch2 = 1;
		}
		if (anon7 != 10 || *anon3 < 1)
		{
			anon10 = __ctype_b_loc();
			dispatch11 = 0;
		}
		uint64_t* anon12 = (uint64_t*)anon10;
		if ((*(uint8_t*)(*anon12 + ((__sext int64_t)anon7 << 1 | 1)) & 8) != 0)
		{
			if (anon7 != 10 || *anon3 < 1)
			{
				uint32_t anon13 = _IO_getc(*anon9);
				uint32_t anon15 = (anon8 << 24 >> 24) - 48;
				phi_in14 = anon15;
				if ((*(uint8_t*)(*anon12 + ((__zext uint64_t)anon13 << 56 >> 55 | 1)) & 8) != 0)
				{
					anon16 = anon13 >> 8;
					phi_in14 = (anon16 << 24 >> 24) + anon15 * 10 - 48;
				}
			}
		}
	}
	while (true)
	{
		uint8_t* anon17;
		dispatch2 = 4;
		if (*(uint32_t*)(((__sext int64_t)phi_in14 << 2) + 6300992) != 0)
		{
			phi4 = (__zext uint64_t)phi_in14;
		}
		if (dispatch2 == 4)
		{
			puts((uint8_t*)0x401cd5);
			*anon6 = *anon3 * 100 + *anon6 + 500;
			anon17 = (uint8_t*)0x401cf1;
			printf(anon17);
			exit(0);
		}
		uint64_t anon18 = random();
		dispatch2 = 2;
		if (dispatch2 == 2)
		{
			puts((uint8_t*)0x401dd0);
			*anon6 = *anon6 - 100;
			printf(anon17);
			exit(0);
		}
		if ((uint32_t)anon18 + ((uint32_t)((anon18 & 0xffffffff) / 3) - (uint32_t)(anon18 << 32 >> 32 >> 31)) * 4294967293 != 1)
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
			uint64_t anon19 = random();
			uint64_t anon20 = anon19 << 32;
			w(4199968, (uint64_t)&alloca1, anon19 + (((anon19 & 0xffffffff) * 2290649225 + anon20 >> 32 >> 4) - (anon20 >> 32 >> 31)) * 4294967266 & 0xffffffff, 0, 0);
			*anon6 = *anon6 - 100;
		}
		if (*(uint32_t*)(((__sext int64_t)phi_in14 << 2) + 6300992) != 0 || (uint32_t)anon18 + ((uint32_t)((anon18 & 0xffffffff) / 3) - (uint32_t)(anon18 << 32 >> 32 >> 31)) * 4294967293 != 1)
		{
			dispatch2 = 1;
		}
		if ((uint8_t)anon16 != 10)
		{
			if (*(uint32_t*)(((__sext int64_t)phi_in14 << 2) + 6300992) != 0 || (uint32_t)anon18 + ((uint32_t)((anon18 & 0xffffffff) / 3) - (uint32_t)(anon18 << 32 >> 32 >> 31)) * 4294967293 != 1)
			{
				phi_in5 = phi_in5 - 20;
				dispatch11 = 1;
				dispatch2 = 3;
				if (phi_in5 != 196)
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
		uint32_t phi_in18;
		uint32_t anon19;
		uint32_t* anon20;
		uint32_t* anon21;
		uint32_t* anon25;
		uint64_t anon26;
		uint16_t** phi_in33;
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
			phi_in18 = 4294967196;
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
			uint64_t phi_in27;
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
					phi_in27 = anon24;
				}
			}
			if (*(uint32_t*)((anon24 << 2) + 6300864) != 0 || *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon26 + 6301636) << 2) + 6300864) != 0 || *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon26 + 6301640) << 2) + 6300864) != 0 && *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon26 + 6301636) << 2) + 6300864) == 0)
			{
				puts((uint8_t*)0x401d8e);
				phi_in27 = (__sext int64_t)*anon25;
			}
			if (*(uint32_t*)((phi_in27 << 2) + 6301504) != 0 || *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon26 + 6301636) << 2) + 6301504) != 0 || *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon26 + 6301640) << 2) + 6301504) != 0 && *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon26 + 6301636) << 2) + 6301504) == 0)
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
			phi_in33 = anon32;
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
			phi_in33 = anon38;
		}
		int64_t anon40 = (__sext int64_t)anon30;
		uint8_t anon39 = *(uint8_t*)(*(uint64_t*)anon38 + (anon40 >> 7 | 1)) & 8;
		bool anon41 = !anon37;
		if (anon39 != 0 && anon35 || anon39 != 0 && anon36 || anon39 != 0 && anon41 || anon34 != 0 && anon29)
		{
			uint32_t phi_in43;
			uint32_t anon42 = _IO_getc(*anon31);
			uint32_t anon44 = (uint32_t)(anon40 + 4294967248);
			phi_in43 = anon44;
			uint32_t anon45 = anon42 << 24 >> 24;
			if ((*(uint8_t*)(*(uint64_t*)phi_in33 + ((__zext uint64_t)anon45 << 1 | 1)) & 8) != 0)
			{
				phi_in43 = anon44 * 10 + anon45 - 48;
			}
			if (*anon25 != phi_in43)
			{
				if (*(uint32_t*)(anon26 + 6301636) != phi_in43)
				{
					phi_in9 = phi11;
					phi_in10 = phi12;
				}
			}
			if (*anon25 == phi_in43 || *(uint32_t*)(anon26 + 6301636) == phi_in43 || *(uint32_t*)(anon26 + 6301636) != phi_in43 && *(uint32_t*)(anon26 + 6301640) == phi_in43)
			{
				int64_t anon46 = (__sext int64_t)phi_in43;
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
			phi_in18 = 4294967246;
		}
		if (dispatch13 == 1 || dispatch13 == 0)
		{
			*anon15 = *anon15 + phi_in18;
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
