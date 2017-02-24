#include "tests/bin/conditionals.h"

uint32_t main(uint32_t arg0, uint8_t** arg1)
{
	uint64_t anon2 = (__zext uint64_t)arg0;
	uint64_t anon3 = anon2 + 2 & 0xffffffff;
	uint64_t anon1 = testO_64(4194946, anon2, anon3);
	uint64_t anon4 = testO_32(4194960, anon2, anon3);
	uint64_t anon5 = testNO_64(4194974, anon2, (__zext uint64_t)(arg0 + 2));
	uint64_t anon6 = testNO_32(4194988, anon2, anon3);
	uint64_t anon7 = testB_64(4195002, anon2, anon3);
	uint64_t anon8 = testB_32(4195016, anon2, anon3);
	uint64_t anon9 = testAE_64(4195030, anon2, anon3);
	uint64_t anon10 = testAE_32(4195044, anon2, anon3);
	uint64_t anon11 = testE_64(4195058, anon2, anon3);
	uint64_t anon12 = testE_32(4195072, anon2, anon3);
	uint64_t anon13 = testNZ_64(4195086, anon2, anon3);
	uint64_t anon14 = testNZ_32(4195100, anon2, anon3);
	uint64_t anon15 = testNA_64(4195114, anon2, anon3);
	uint64_t anon16 = testNA_32(4195128, anon2, anon3);
	uint64_t anon17 = testNBE_64(4195142, anon2, anon3);
	testNBE_32(4195156, anon2, anon3);
	testS_64(4195170, anon2, anon3);
	testS_32(4195184, anon2, anon3);
	testNS_64(4195198, anon2, anon3);
	testNS_32(4195212, anon2, anon3);
	testPE_64(4195226, anon2, anon3);
	testPE_32(4195240, anon2, anon3);
	testPO_64(4195254, anon2, anon3);
	testPO_32(4195268, anon2, anon3);
	testNGE_64(4195282, anon2, anon3);
	testNGE_32(4195296, anon2, anon3);
	testNL_64(4195310, anon2, anon3);
	testNL_32(4195324, anon2, anon3);
	testNG_64(4195338, anon2, anon3);
	testNG_32(4195352, anon2, anon3);
	testNLE_64(4195366, anon2, anon3);
	testNLE_32(4195380, anon2, anon3);
	return (uint32_t)(anon17 | anon16 | anon15 | anon14 | anon13 | anon12 | anon11 | anon10 | anon9 | anon8 | anon7 | anon6 | anon5 | anon4 | anon1);
}
uint64_t testO_64(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	struct { uint64_t field0; bool field1; } anon1 = llvm.ssub.with.overflow.i64(arg1, arg2);
	return (__zext uint64_t)anon1.field1;
}
uint64_t testO_32(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	struct { uint32_t field0; bool field1; } anon1 = llvm.ssub.with.overflow.i32((uint32_t)arg1, (uint32_t)arg2);
	return (__zext uint64_t)anon1.field1;
}
uint64_t testNO_64(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	struct { uint64_t field0; bool field1; } anon1 = llvm.ssub.with.overflow.i64(arg1, arg2);
	return (__zext uint64_t)!anon1.field1;
}
uint64_t testNO_32(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	struct { uint32_t field0; bool field1; } anon1 = llvm.ssub.with.overflow.i32((uint32_t)arg1, (uint32_t)arg2);
	return (__zext uint64_t)!anon1.field1;
}
uint64_t testB_64(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	return (__zext uint64_t)(arg1 < arg2);
}
uint64_t testB_32(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	return (__zext uint64_t)((uint32_t)arg1 < (uint32_t)arg2);
}
uint64_t testAE_64(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	return (__zext uint64_t)(arg1 >= arg2);
}
uint64_t testAE_32(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	return (__zext uint64_t)((uint32_t)arg1 >= (uint32_t)arg2);
}
uint64_t testE_64(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	return (__zext uint64_t)(arg1 == arg2);
}
uint64_t testE_32(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	return (__zext uint64_t)((uint32_t)arg1 == (uint32_t)arg2);
}
uint64_t testNZ_64(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	return (__zext uint64_t)(arg1 != arg2);
}
uint64_t testNZ_32(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	return (__zext uint64_t)((uint32_t)arg1 != (uint32_t)arg2);
}
uint64_t testNA_64(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	return (__zext uint64_t)(arg1 <= arg2);
}
uint64_t testNA_32(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	return (__zext uint64_t)((uint32_t)arg1 <= (uint32_t)arg2);
}
uint64_t testNBE_64(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	return (__zext uint64_t)(arg1 > arg2);
}
void testNBE_32(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	return;
}
void testS_64(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	return;
}
void testS_32(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	return;
}
void testNS_64(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	return;
}
void testNS_32(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	return;
}
void testPE_64(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	return;
}
void testPE_32(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	return;
}
void testPO_64(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	return;
}
void testPO_32(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	return;
}
void testNGE_64(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	return;
}
void testNGE_32(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	return;
}
void testNL_64(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	return;
}
void testNL_32(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	return;
}
void testNG_64(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	return;
}
void testNG_32(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	return;
}
void testNLE_64(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	return;
}
void testNLE_32(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	return;
}
