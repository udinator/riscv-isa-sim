require_extension('D');
require_fp;
softfloat_roundingMode = RM;
WRITE_FRD(freg_t(f64_sqrt(f64(FRS1.data)).v));
set_fp_exceptions;
