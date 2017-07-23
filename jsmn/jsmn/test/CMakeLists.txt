set(TEST_FILES tests.c test.h testutil.h)

add_definitions(
	#-DJSMN_STRICT=1
	#-DJSMN_PARENT_LINKS=1
	)

add_executable(test ${TEST_FILES})
