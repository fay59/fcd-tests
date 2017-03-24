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
	l(4195589);
	uint32_t phi1 = 60;
	while (true)
	{
		uint32_t phi6;
		uint32_t anon11;
		uint8_t* anon25;
		uint8_t* anon28;
		uint64_t phi_in42;
		uint32_t phi43;
		uint32_t phi44;
		uint64_t phi_in2 = phi_in3;
		uint32_t phi_in4 = 1;
		uint32_t phi5 = 0;
		do
		{
			uint32_t anon12;
			phi6 = phi_in4;
			uint32_t phi_in7 = phi5;
			uint32_t phi8 = phi_in7;
			uint32_t phi_in9 = 1;
			do
			{
				uint32_t phi10 = phi_in9;
				anon11 = phi8 + (uint32_t)m.constprop.0(4195644, (__zext uint64_t)phi6, (__zext uint64_t)phi10);
				phi8 = anon11;
				anon12 = phi10 + 1;
				phi_in9 = anon12;
			}
			while (anon12 != 9);
			phi_in4 = phi6 + 1;
			phi5 = anon11;
		}
		while (phi6 != 8);
		uint64_t phi_in13 = phi_in2;
		uint64_t phi14 = 0;
		uint64_t phi15 = 1;
		uint32_t phi16 = 1;
		if (anon11 != 0)
		{
			uint64_t anon21;
			uint32_t anon29;
			do
			{
				uint32_t anon17;
				uint32_t anon18;
				uint32_t anon19;
				uint32_t anon20;
				printf((uint8_t*)0x400f81);
				do
				{
					anon17 = getchar();
					anon18 = anon17 - 65;
				}
				while (anon18 >= 8);
				do
				{
					anon19 = getchar();
					anon20 = anon19 - 49;
				}
				while (anon20 >= 8);
				anon21 = m.constprop.0(4195848, (__zext uint64_t)(anon17 - 64), (__zext uint64_t)(anon19 - 48));
			}
			while ((uint32_t)anon21 == 0);
			putchar(10);
			uint64_t phi22 = 65;
			uint64_t phi23 = 6297448;
			while (true)
			{
				uint64_t phi24 = phi23;
				putchar((uint32_t)phi22);
				anon25 = (uint8_t*)0x400f79;
				printf(anon25);
				putchar(10);
				uint64_t anon26 = phi24 + 40;
				if (anon26 != 6297768)
				{
					phi22 = phi22 + 1 & 0xffffffff;
					phi23 = anon26;
				}
				phi24 = phi24 + 4;
				break;
			}
			putchar(32);
			uint32_t phi27 = 1;
			do
			{
				anon28 = (uint8_t*)0x400f7d;
				printf(anon28);
				anon29 = phi27 + 1;
				phi27 = anon29;
			}
			while (anon29 != 9);
			putchar(10);
			phi_in13 = phi_in2;
			phi14 = 0;
			phi15 = 1;
			phi16 = 1;
		}
		uint64_t phi_in30 = phi15;
		uint32_t phi_in31 = phi16;
		uint64_t phi32 = phi_in13;
		uint64_t phi33 = 1;
		uint32_t phi34 = phi_in31;
		uint32_t phi35 = 1;
		phi_in30 = phi32;
		uint64_t phi_in36 = phi14;
		uint64_t anon37 = m.constprop.1(4195713, (__zext uint64_t)phi34, (__zext uint64_t)phi35);
		uint64_t anon39 = random();
		uint32_t anon38 = (uint32_t)anon37 + (uint32_t)anon39 + ((uint32_t)((anon39 & 0xffffffff) / 6) - (uint32_t)(anon39 << 32 >> 32 >> 31)) * 4294967290;
		uint32_t anon40 = (uint32_t)phi_in36;
		if (anon38 > anon40)
		{
			uint32_t anon41 = (uint32_t)phi33;
			*(uint32_t*)(arg1 - 72) = anon41;
			phi_in13 = phi_in30;
			phi_in42 = (__zext uint64_t)anon38;
			phi43 = anon38;
			phi44 = anon41;
		}
		else 
		{
			phi_in13 = phi_in30;
			phi_in42 = phi_in36;
			phi43 = anon40;
			phi44 = (uint32_t)phi33;
		}
		if (phi43 != 0)
		{
			if ((uint32_t)m.constprop.1(4196072, phi_in13 & 0xffffffff, 0) != 0)
			{
				uint32_t anon50;
				putchar(10);
				uint64_t phi45 = 65;
				uint64_t phi_in46 = 6297448;
				while (true)
				{
					putchar((uint32_t)phi45);
					uint64_t phi47 = phi_in46;
					printf(anon25);
					putchar(10);
					uint64_t anon48 = phi_in46 + 40;
					if (anon48 != 6297768)
					{
						phi45 = phi45 + 1 & 0xffffffff;
						phi_in46 = anon48;
					}
					phi47 = phi47 + 4;
					break;
				}
				putchar(32);
				uint32_t phi49 = 1;
				do
				{
					printf(anon28);
					anon50 = phi49 + 1;
					phi49 = anon50;
				}
				while (anon50 != 9);
				putchar(10);
			}
		}
		uint32_t anon51 = phi1 - 1;
		phi1 = anon51;
		uint64_t phi_in3 = phi_in13;
		phi14 = phi_in42;
		uint32_t anon53 = (uint32_t)phi_in30;
		uint32_t anon52 = anon53 + 1;
		phi15 = (__zext uint64_t)anon52;
		phi16 = anon52;
		phi32 = phi_in13;
		phi14 = phi_in42;
		uint32_t anon54 = phi44 + 1;
		phi33 = (__zext uint64_t)anon54;
		phi34 = (uint32_t)phi_in30;
		phi35 = anon54;
		break;
	}
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
	uint64_t phi8;
	uint32_t phi9;
	uint64_t phi10;
	uint64_t phi11;
	uint64_t anon13;
	uint64_t phi17;
	uint64_t anon2 = arg2 << 32 >> 32;
	uint64_t anon3 = arg1 << 32 >> 32;
	uint32_t* anon1 = (uint32_t*)((anon2 + (anon3 & 0x3fffffffffffffff) * 10 << 2) + 6297408);
	if (*anon1 == 0)
	{
		uint64_t phi6;
		uint64_t phi7;
		*anon1 = 1;
		uint64_t phi_in4 = 0;
		uint64_t phi_in5 = 1;
		do
		{
			phi6 = phi_in4;
			phi7 = phi_in5;
			if (*(uint32_t*)(((__sext int64_t)((uint32_t)arg2 + *(uint32_t*)(phi6 + 6296832)) + (__sext int64_t)((uint32_t)arg1 + *(uint32_t*)(phi6 + 6296896)) * 10 << 2) + 6297408) == 4294967295)
			{
				phi8 = 1;
				phi9 = 1;
				phi10 = 1;
				phi11 = (((__zext uint64_t)*(uint32_t*)(phi6 + 6296832) << 33 >> 32) + anon2 + (((__zext uint64_t)*(uint32_t*)(phi6 + 6296896) << 33 >> 32) + anon3) * 10 << 2) + 6297408;
				uint64_t phi12 = phi8;
				phi7 = phi_in5;
				int62_t anon14 = (__sext int62_t)*(uint32_t*)(phi6 + 6296832);
				anon13 = phi11 + ((__zext uint64_t)(anon14 + (__sext int62_t)*(uint32_t*)(phi6 + 6296896) * 10) << 2);
				int64_t anon15 = (__sext int64_t)*(uint32_t*)(phi6 + 6296896);
				if (*(uint32_t*)(anon13 + ((__zext uint64_t)-anon14 << 2) + ((-anon15 << 2) - anon15 << 3)) == 1)
				{
					uint32_t anon21;
					uint64_t phi16 = phi_in5;
					int64_t anon18 = (__sext int64_t)(phi9 * *(uint32_t*)(phi6 + 6296832)) + anon2 + ((__sext int64_t)((uint32_t)phi12 * *(uint32_t*)(phi6 + 6296896)) + anon3) * 10 << 2;
					phi17 = anon18 + 6297408;
					uint64_t phi19 = anon18 + 6296960;
					do
					{
						*(uint32_t*)phi17 = 0;
						uint64_t anon20 = (__zext uint64_t)((uint32_t)phi16 + *(uint32_t*)phi19);
						phi7 = anon20;
						anon21 = (uint32_t)phi12 - 1;
						if (anon21 != 0)
						{
							phi16 = anon20;
							phi12 = (__zext uint64_t)anon21;
							int64_t anon22 = (__sext int64_t)-*(uint32_t*)(phi6 + 6296832) + (__sext int64_t)-*(uint32_t*)(phi6 + 6296896) * 10 << 2;
							phi17 = phi17 + anon22;
							phi19 = phi19 + anon22;
						}
					}
					while (anon21 != 0);
				}
			}
			phi_in4 = phi6 + 4;
			phi_in5 = phi7;
		}
		while (phi6 != 28);
		if ((uint32_t)phi7 == 1)
		{
			*anon1 = 0;
			return (__zext uint64_t)*anon1;
		}
		else 
		{
			return phi7 & 0xffffffff;
		}
	}
	uint32_t anon23 = (uint32_t)phi10 + 1;
	phi8 = (__zext uint64_t)anon23;
	phi9 = anon23;
	phi10 = phi10 + 1 & 0xffffffff;
	phi11 = anon13;
	if (*anon1 != 0)
	{
		return 0;
	}
}
uint64_t m.constprop.1(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	uint64_t phi8;
	uint32_t phi9;
	uint64_t phi10;
	uint64_t phi11;
	uint64_t anon13;
	uint64_t phi17;
	uint64_t anon2 = arg2 << 32 >> 32;
	uint64_t anon3 = arg1 << 32 >> 32;
	uint32_t* anon1 = (uint32_t*)((anon2 + (anon3 & 0x3fffffffffffffff) * 10 << 2) + 6297408);
	if (*anon1 == 0)
	{
		uint64_t phi6;
		uint64_t phi7;
		*anon1 = 4294967295;
		uint64_t phi_in4 = 0;
		uint64_t phi5 = 4294967295;
		do
		{
			phi6 = phi_in4;
			phi7 = phi5;
			if (*(uint32_t*)(((__sext int64_t)((uint32_t)arg2 + *(uint32_t*)(phi6 + 6296832)) + (__sext int64_t)((uint32_t)arg1 + *(uint32_t*)(phi6 + 6296896)) * 10 << 2) + 6297408) == 1)
			{
				phi8 = 1;
				phi9 = 1;
				phi10 = 1;
				phi11 = (((__zext uint64_t)*(uint32_t*)(phi6 + 6296832) << 33 >> 32) + anon2 + (((__zext uint64_t)*(uint32_t*)(phi6 + 6296896) << 33 >> 32) + anon3) * 10 << 2) + 6297408;
				uint64_t phi_in12 = phi8;
				phi7 = phi5;
				int62_t anon14 = (__sext int62_t)*(uint32_t*)(phi6 + 6296832);
				anon13 = phi11 + ((__zext uint64_t)(anon14 + (__sext int62_t)*(uint32_t*)(phi6 + 6296896) * 10) << 2);
				int64_t anon15 = (__sext int64_t)*(uint32_t*)(phi6 + 6296896);
				if (*(uint32_t*)(anon13 + ((__zext uint64_t)-anon14 << 2) + ((-anon15 << 2) - anon15 << 3)) == 255)
				{
					uint32_t anon21;
					uint64_t phi16 = phi_in12;
					int64_t anon18 = (__sext int64_t)(phi9 * *(uint32_t*)(phi6 + 6296832)) + anon2 + ((__sext int64_t)((uint32_t)phi_in12 * *(uint32_t*)(phi6 + 6296896)) + anon3) * 10 << 2;
					phi17 = anon18 + 6297408;
					uint64_t phi19 = anon18 + 6296960;
					do
					{
						*(uint32_t*)phi17 = 0;
						uint64_t anon20 = (__zext uint64_t)((uint32_t)phi5 + *(uint32_t*)phi19);
						phi7 = anon20;
						anon21 = (uint32_t)phi16 - 1;
						if (anon21 != 0)
						{
							phi5 = anon20;
							phi16 = (__zext uint64_t)anon21;
							int64_t anon22 = (__sext int64_t)-*(uint32_t*)(phi6 + 6296832) + (__sext int64_t)-*(uint32_t*)(phi6 + 6296896) * 10 << 2;
							phi17 = phi17 + anon22;
							phi19 = phi19 + anon22;
						}
					}
					while (anon21 != 0);
				}
			}
			phi_in4 = phi6 + 4;
			phi5 = phi7;
		}
		while (phi6 != 28);
		if ((uint32_t)phi7 == 4294967295)
		{
			*anon1 = 0;
			return (__zext uint64_t)*anon1;
		}
		else 
		{
			return phi7 & 0xffffffff;
		}
	}
	uint32_t anon23 = (uint32_t)phi10 + 1;
	phi8 = (__zext uint64_t)anon23;
	phi9 = anon23;
	phi10 = phi10 + 1 & 0xffffffff;
	phi11 = anon13;
	if (*anon1 != 0)
	{
		return 0;
	}
}
void m(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	uint64_t phi1 = 0;
	uint32_t* anon2 = (uint32_t*)(((arg2 << 32 >> 32) + (arg1 << 32 >> 32 & 0x3fffffffffffffff) * 10 << 2) + 6297408);
	if (*anon2 == 0)
	{
		do
		{
			phi1 = phi1 + 4;
		}
		while (phi1 != 28);
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
	putchar(10);
	uint64_t phi1 = 65;
	uint64_t phi_in2 = 6297448;
	while (true)
	{
		uint32_t anon5;
		putchar((uint32_t)phi1);
		uint64_t phi3 = phi_in2;
		printf((uint8_t*)0x400f79);
		putchar(10);
		putchar(32);
		uint32_t phi4 = 1;
		do
		{
			printf((uint8_t*)0x400f7d);
			anon5 = phi4 + 1;
			phi4 = anon5;
		}
		while (anon5 != 9);
		phi1 = phi1 + 1 & 0xffffffff;
		uint64_t anon6 = phi_in2 + 40;
		phi_in2 = anon6;
		phi3 = phi3 + 4;
		break;
	}
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
