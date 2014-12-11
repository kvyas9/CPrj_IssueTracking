#include <cxxtest/TestSuite.h>

extern const char* cPrj_IssueTrackingMain(int argc, char** argv);

class CPrj_IssueTrackingTest : public CxxTest::TestSuite
{

public:
	void setUp() {
	}

	void tearDown(){
	}

	void test_SimpleIOCompare(){
		char* argv[] = {};
		const char* message = cPrj_IssueTrackingMain(sizeof(argv), argv);

		TS_ASSERT_EQUALS("Hello world\n", message);
	}
	
};