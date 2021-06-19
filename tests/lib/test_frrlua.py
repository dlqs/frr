import frrtest


class TestPrintfrr(frrtest.TestMultiOut):
    program = "./test_frrlua"


TestPrintfrr.exit_cleanly()
