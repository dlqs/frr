import frrtest


class TestPrintfrr(frrtest.TestMultiOut):
    program = "./test_frrscript"


TestPrintfrr.exit_cleanly()
