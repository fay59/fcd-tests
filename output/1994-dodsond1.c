#include "tests/bin/1994-dodsond1.h"

void _init(uint64_t arg0)
{
	if (*(uint64_t*)0x601470 != 0)
	{
		__gmon_start__();
	}
	return;
}
void main(uint64_t arg0, uint64_t arg1)
{
	uint32_t anon55;
	l(4195589);
	uint32_t phi_in1 = 60;
	do
	{
		uint32_t phi7;
		uint32_t anon13;
		uint8_t* anon27;
		uint8_t* anon31;
		uint64_t phi36;
		uint32_t phi40;
		uint32_t anon43;
		uint32_t phi2 = phi_in1;
		uint64_t phi3 = phi_in4;
		uint32_t phi_in5 = 1;
		uint32_t phi6 = 0;
		do
		{
			uint32_t anon14;
			phi7 = phi_in5;
			uint32_t phi_in8 = phi6;
			uint32_t phi_in9 = 1;
			do
			{
				uint32_t phi10 = phi_in8;
				uint32_t phi11 = phi_in9;
				uint64_t anon12 = m.constprop.0(4195644, (__zext uint64_t)phi7, (__zext uint64_t)phi11);
				anon13 = phi10 + (uint32_t)anon12;
				phi_in8 = anon13;
				anon14 = phi11 + 1;
				phi_in9 = anon14;
			}
			while (anon14 != 9);
			phi_in5 = phi7 + 1;
			phi6 = anon13;
		}
		while (phi7 != 8);
		uint64_t phi_in15 = phi3;
		uint64_t phi16 = 0;
		uint64_t phi_in17 = 1;
		uint32_t phi18 = 1;
		if (anon13 != 0)
		{
			uint64_t anon21;
			uint64_t anon28;
			uint32_t anon32;
			do
			{
				uint32_t anon19;
				uint32_t anon20;
				printf((uint8_t*)0x400f81);
				do
				{
					anon19 = getchar();
				}
				while (anon19 - 65 >= 8);
				do
				{
					anon20 = getchar();
				}
				while (anon20 - 49 >= 8);
				anon21 = m.constprop.0(4195848, (__zext uint64_t)(anon19 - 64), (__zext uint64_t)(anon20 - 48));
			}
			while ((uint32_t)anon21 == 0);
			putchar(10);
			uint64_t phi22 = 65;
			uint64_t phi_in23 = 6297448;
			do
			{
				uint64_t phi26;
				uint64_t phi24 = phi_in23;
				putchar((uint32_t)phi22);
				uint64_t phi_in25 = phi24;
				do
				{
					phi26 = phi_in25;
					anon27 = (uint8_t*)0x400f79;
					printf(anon27);
					phi_in25 = phi26 + 4;
				}
				while (phi24 + 28 != phi26);
				putchar(10);
				phi22 = phi22 + 1 & 0xffffffff;
				anon28 = phi24 + 40;
				phi_in23 = anon28;
			}
			while (anon28 != 6297768);
			putchar(32);
			uint32_t phi_in29 = 1;
			do
			{
				uint32_t phi30 = phi_in29;
				anon31 = (uint8_t*)0x400f7d;
				printf(anon31);
				anon32 = phi30 + 1;
				phi_in29 = anon32;
			}
			while (anon32 != 9);
			putchar(10);
			phi_in15 = phi3;
			phi16 = 0;
			phi_in17 = 1;
			phi18 = 1;
		}
		do
		{
			uint64_t phi33 = phi16;
			uint64_t phi34 = phi_in17;
			uint32_t phi35 = phi18;
			phi36 = phi_in15;
			uint32_t phi_in37 = 1;
			do
			{
				*(uint32_t*)(arg1 - 72) = phi_in37;
				uint64_t anon38 = m.constprop.1(4195713, (__zext uint64_t)phi35, (__zext uint64_t)*(uint32_t*)(arg1 - 72));
				uint64_t anon39 = random();
				phi16 = phi33;
				uint32_t anon41 = (uint32_t)phi33;
				phi40 = anon41;
				uint32_t anon42 = (uint32_t)anon38 + (uint32_t)anon39 + ((uint32_t)((anon39 & 0xffffffff) / 6) - (uint32_t)(anon39 << 32 >> 32 >> 31)) * 4294967290;
				if (anon42 > anon41)
				{
					phi36 = phi34;
					phi16 = (__zext uint64_t)anon42;
					phi40 = anon42;
				}
				phi36 = phi36;
				phi33 = phi16;
				phi_in37 = *(uint32_t*)(arg1 - 72) + 1;
				anon43 = (uint32_t)phi34;
				phi35 = anon43;
			}
			while (*(uint32_t*)(arg1 - 72) != 8);
			phi_in15 = phi36;
			uint32_t anon44 = anon43 + 1;
			phi_in17 = (__zext uint64_t)anon44;
			phi18 = anon44;
		}
		while (anon43 != 8);
		if (phi40 != 0)
		{
			uint64_t anon45 = m.constprop.1(4196072, phi36 & 0xffffffff, 0);
			if ((uint32_t)anon45 != 0)
			{
				uint64_t anon51;
				uint32_t anon54;
				putchar(10);
				uint64_t phi46 = 65;
				uint64_t phi_in47 = 6297448;
				do
				{
					uint64_t phi50;
					uint64_t phi48 = phi_in47;
					putchar((uint32_t)phi46);
					uint64_t phi_in49 = phi48;
					do
					{
						phi50 = phi_in49;
						printf(anon27);
						phi_in49 = phi50 + 4;
					}
					while (phi48 + 28 != phi50);
					putchar(10);
					phi46 = phi46 + 1 & 0xffffffff;
					anon51 = phi48 + 40;
					phi_in47 = anon51;
				}
				while (anon51 != 6297768);
				putchar(32);
				uint32_t phi_in52 = 1;
				do
				{
					uint32_t phi53 = phi_in52;
					printf(anon31);
					anon54 = phi53 + 1;
					phi_in52 = anon54;
				}
				while (anon54 != 9);
				putchar(10);
			}
		}
		anon55 = phi2 - 1;
		phi_in1 = anon55;
		uint64_t phi_in4 = phi36;
	}
	while (anon55 != 0);
	return;
}
void _start(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	*(uint64_t*)(arg1 - 8) = arg0;
	uint64_t anon2 = arg1 & 0xfffffffffffffff0;
	uint64_t anon1 = anon2 - 16;
	*(uint64_t*)anon1 = anon2 - 8;
	__libc_start_main((uint32_t(*)(uint32_t, uint8_t**, uint8_t**))0x4004f0, (uint32_t)arg0, (uint8_t**)arg1, (void(*)())0x400ef0, (void(*)())0x400f60, (void(*)())arg2, *(uint8_t**)anon1);
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
	uint8_t* anon1 = (uint8_t*)0x6018d0;
	if (*anon1 == 0)
	{
		deregister_tm_clones(4196434);
		*anon1 = 1;
	}
	return;
}
void frame_dummy(uint64_t arg0)
{
	return;
}
uint64_t m.constprop.0(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	uint32_t phi12;
	uint64_t phi_in13;
	uint64_t phi14;
	uint64_t phi15;
	uint64_t phi17;
	uint64_t anon18;
	uint64_t phi21;
	uint64_t anon3 = arg2 << 32 >> 32;
	uint64_t anon4 = arg1 << 32 >> 32;
	uint64_t anon2 = anon3 + (anon4 & 0x3fffffffffffffff) * 10;
	uint32_t* anon1 = (uint32_t*)((anon2 << 2) + 6297408);
	if (*anon1 == 0)
	{
		uint64_t phi9;
		uint32_t phi10;
		*anon1 = 1;
		uint32_t phi5 = 1;
		uint32_t phi6 = 1;
		uint64_t phi_in7 = 0;
		do
		{
			uint32_t phi_in8 = phi6;
			phi9 = phi_in7;
			phi10 = phi5;
			uint32_t phi11 = phi_in8;
			if (*(uint32_t*)(((__sext int64_t)((uint32_t)arg2 + *(uint32_t*)(phi9 + 6296832)) + (__sext int64_t)((uint32_t)arg1 + *(uint32_t*)(phi9 + 6296896)) * 10 << 2) + 6297408) == 4294967295)
			{
				phi12 = 1;
				phi_in13 = 1;
				phi14 = 1;
				phi15 = (((__zext uint64_t)*(uint32_t*)(phi9 + 6296832) << 33 >> 32) + anon3 + (((__zext uint64_t)*(uint32_t*)(phi9 + 6296896) << 33 >> 32) + anon4) * 10 << 2) + 6297408;
				uint32_t phi_in16 = phi12;
				phi17 = phi_in13;
				phi10 = phi5;
				phi11 = phi_in8;
				int64_t anon19 = (__sext int64_t)*(uint32_t*)(phi9 + 6296832);
				int64_t anon20 = (__sext int64_t)*(uint32_t*)(phi9 + 6296896);
				anon18 = phi15 + (anon19 + anon20 * 10 << 2);
				if (*(uint32_t*)(anon18 + (-anon19 << 2) + ((-anon20 << 2) - anon20 << 3)) == 1)
				{
					uint32_t anon27;
					int64_t anon22 = (__sext int64_t)((uint32_t)phi14 * *(uint32_t*)(phi9 + 6296832)) + anon3 + ((__sext int64_t)((uint32_t)phi17 * *(uint32_t*)(phi9 + 6296896)) + anon4) * 10 << 2;
					phi21 = anon22 + 6297408;
					uint32_t phi23 = phi_in8;
					uint64_t phi24 = anon22 + 6296960;
					do
					{
						uint32_t phi25 = phi_in16;
						*(uint32_t*)phi21 = 0;
						uint32_t anon26 = phi23 + *(uint32_t*)phi24;
						phi10 = anon26;
						phi11 = anon26;
						anon27 = phi25 - 1;
						phi_in16 = anon27;
						int64_t anon28 = (__sext int64_t)-*(uint32_t*)(phi9 + 6296832) + (__sext int64_t)-*(uint32_t*)(phi9 + 6296896) * 10 << 2;
						phi21 = phi21 + anon28;
						phi23 = anon26;
						phi24 = phi24 + anon28;
					}
					while (anon27 != 0);
				}
			}
			phi5 = phi10;
			phi6 = phi11;
			phi_in7 = phi9 + 4;
		}
		while (phi9 != 28);
		if (phi10 == 1)
		{
			*(uint32_t*)((anon2 << 2) + 6297408) = 0;
			return (__zext uint64_t)*anon1;
		}
		else 
		{
			return (__zext uint64_t)phi10;
		}
	}
	else 
	{
		return 0;
	}
	phi12 = (uint32_t)phi17 + 1;
	uint64_t anon29 = phi17 + 1;
	phi_in13 = anon29 & 0xffffffff;
	phi14 = anon29;
	phi15 = anon18;
}
uint64_t m.constprop.1(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	uint32_t phi11;
	uint64_t phi_in12;
	uint64_t phi13;
	uint64_t phi14;
	uint64_t phi16;
	uint64_t anon17;
	uint64_t phi20;
	uint64_t anon3 = arg2 << 32 >> 32;
	uint64_t anon4 = arg1 << 32 >> 32;
	uint64_t anon2 = anon3 + (anon4 & 0x3fffffffffffffff) * 10;
	uint32_t* anon1 = (uint32_t*)((anon2 << 2) + 6297408);
	if (*anon1 == 0)
	{
		uint64_t phi9;
		*anon1 = 4294967295;
		uint32_t phi5 = 4294967295;
		uint32_t phi6 = 4294967295;
		uint64_t phi_in7 = 0;
		do
		{
			uint32_t phi8 = phi6;
			phi9 = phi_in7;
			phi5 = phi5;
			uint32_t phi10 = phi8;
			if (*(uint32_t*)(((__sext int64_t)((uint32_t)arg2 + *(uint32_t*)(phi9 + 6296832)) + (__sext int64_t)((uint32_t)arg1 + *(uint32_t*)(phi9 + 6296896)) * 10 << 2) + 6297408) == 1)
			{
				phi11 = 1;
				phi_in12 = 1;
				phi13 = 1;
				phi14 = (((__zext uint64_t)*(uint32_t*)(phi9 + 6296832) << 33 >> 32) + anon3 + (((__zext uint64_t)*(uint32_t*)(phi9 + 6296896) << 33 >> 32) + anon4) * 10 << 2) + 6297408;
				uint32_t phi_in15 = phi11;
				phi16 = phi_in12;
				phi5 = phi5;
				phi10 = phi8;
				int64_t anon18 = (__sext int64_t)*(uint32_t*)(phi9 + 6296832);
				int64_t anon19 = (__sext int64_t)*(uint32_t*)(phi9 + 6296896);
				anon17 = phi14 + (anon18 + anon19 * 10 << 2);
				if (*(uint32_t*)(anon17 + (-anon18 << 2) + ((-anon19 << 2) - anon19 << 3)) == 255)
				{
					uint32_t anon25;
					int64_t anon21 = (__sext int64_t)((uint32_t)phi13 * *(uint32_t*)(phi9 + 6296832)) + anon3 + ((__sext int64_t)((uint32_t)phi16 * *(uint32_t*)(phi9 + 6296896)) + anon4) * 10 << 2;
					phi20 = anon21 + 6297408;
					uint64_t phi22 = anon21 + 6296960;
					do
					{
						uint32_t phi23 = phi_in15;
						*(uint32_t*)phi20 = 0;
						uint32_t anon24 = phi8 + *(uint32_t*)phi22;
						phi5 = anon24;
						phi10 = anon24;
						anon25 = phi23 - 1;
						phi_in15 = anon25;
						int64_t anon26 = (__sext int64_t)-*(uint32_t*)(phi9 + 6296832) + (__sext int64_t)-*(uint32_t*)(phi9 + 6296896) * 10 << 2;
						phi20 = phi20 + anon26;
						phi8 = anon24;
						phi22 = phi22 + anon26;
					}
					while (anon25 != 0);
				}
			}
			phi6 = phi10;
			phi_in7 = phi9 + 4;
		}
		while (phi9 != 28);
		if (phi5 == 4294967295)
		{
			*(uint32_t*)((anon2 << 2) + 6297408) = 0;
			return (__zext uint64_t)*anon1;
		}
		else 
		{
			return (__zext uint64_t)phi5;
		}
	}
	else 
	{
		return 0;
	}
	phi11 = (uint32_t)phi16 + 1;
	uint64_t anon27 = phi16 + 1;
	phi_in12 = anon27 & 0xffffffff;
	phi13 = anon27;
	phi14 = anon17;
}
void m(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	uint64_t phi_in1 = 0;
	uint32_t* anon2 = (uint32_t*)(((arg2 << 32 >> 32) + (arg1 << 32 >> 32 & 0x3fffffffffffffff) * 10 << 2) + 6297408);
	if (*anon2 == 0)
	{
		uint64_t phi3;
		do
		{
			phi3 = phi_in1;
			phi_in1 = phi3 + 4;
		}
		while (phi3 != 28);
		*anon2 = 0;
		return;
	}
	else 
	{
		return;
	}
}
void l(uint64_t arg0)
{
	uint64_t anon6;
	uint32_t anon9;
	putchar(10);
	uint64_t phi1 = 65;
	uint64_t phi_in2 = 6297448;
	do
	{
		uint64_t phi5;
		uint64_t phi3 = phi_in2;
		putchar((uint32_t)phi1);
		uint64_t phi_in4 = phi3;
		do
		{
			phi5 = phi_in4;
			printf((uint8_t*)0x400f79);
			phi_in4 = phi5 + 4;
		}
		while (phi5 != phi3 + 28);
		putchar(10);
		phi1 = phi1 + 1 & 0xffffffff;
		anon6 = phi3 + 40;
		phi_in2 = anon6;
	}
	while (anon6 != 6297768);
	putchar(32);
	uint32_t phi_in7 = 1;
	do
	{
		uint32_t phi8 = phi_in7;
		printf((uint8_t*)0x400f7d);
		anon9 = phi8 + 1;
		phi_in7 = anon9;
	}
	while (anon9 != 9);
	__indirect_jump(*(uint64_t*)0x601490);
}
void __libc_csu_init(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	_init(4198179);
	(*(void(**)(uint64_t, uint64_t, uint64_t))0x601288)(arg1 & 0xffffffff, arg2, arg3);
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
