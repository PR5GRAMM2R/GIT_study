
#define PATCH_CRLF \
	"diff --git a/test-file b/test-file\r\n" \
	"new file mode 100644\r\n" \
	"index 0000000..af431f2 100644\r\n" \
	"--- /dev/null\r\n" \
	"+++ b/test-file\r\n" \
	"@@ -0,0 +1 @@\r\n" \
	"+a contents\r\n"