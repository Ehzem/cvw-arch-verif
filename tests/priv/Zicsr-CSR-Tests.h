
// Testing CSR 0x0
	csrr x28, 0x0	// Read CSR
	li x13, -1
	csrrw x25, 0x0, x13	// Write all 1s to CSR
	csrrw x25, 0x0, x0	// Write all 0s to CSR
	csrrw x25, 0x0, x28	// Restore CSR

// Testing CSR 0x1
	csrr x29, 0x1	// Read CSR
	li x14, -1
	csrrw x2, 0x1, x14	// Write all 1s to CSR
	csrrw x2, 0x1, x0	// Write all 0s to CSR
	csrrw x2, 0x1, x29	// Restore CSR

// Testing CSR 0x2
	csrr x9, 0x2	// Read CSR
	li x31, -1
	csrrw x17, 0x2, x31	// Write all 1s to CSR
	csrrw x17, 0x2, x0	// Write all 0s to CSR
	csrrw x17, 0x2, x9	// Restore CSR

// Testing CSR 0x3
	csrr x16, 0x3	// Read CSR
	li x13, -1
	csrrw x30, 0x3, x13	// Write all 1s to CSR
	csrrw x30, 0x3, x0	// Write all 0s to CSR
	csrrw x30, 0x3, x16	// Restore CSR

// Testing CSR 0x4
	csrr x26, 0x4	// Read CSR
	li x27, -1
	csrrw x10, 0x4, x27	// Write all 1s to CSR
	csrrw x10, 0x4, x0	// Write all 0s to CSR
	csrrw x10, 0x4, x26	// Restore CSR

// Testing CSR 0x5
	csrr x31, 0x5	// Read CSR
	li x16, -1
	csrrw x12, 0x5, x16	// Write all 1s to CSR
	csrrw x12, 0x5, x0	// Write all 0s to CSR
	csrrw x12, 0x5, x31	// Restore CSR

// Testing CSR 0x6
	csrr x19, 0x6	// Read CSR
	li x29, -1
	csrrw x30, 0x6, x29	// Write all 1s to CSR
	csrrw x30, 0x6, x0	// Write all 0s to CSR
	csrrw x30, 0x6, x19	// Restore CSR

// Testing CSR 0x7
	csrr x7, 0x7	// Read CSR
	li x17, -1
	csrrw x5, 0x7, x17	// Write all 1s to CSR
	csrrw x5, 0x7, x0	// Write all 0s to CSR
	csrrw x5, 0x7, x7	// Restore CSR

// Testing CSR 0x8
	csrr x10, 0x8	// Read CSR
	li x5, -1
	csrrw x25, 0x8, x5	// Write all 1s to CSR
	csrrw x25, 0x8, x0	// Write all 0s to CSR
	csrrw x25, 0x8, x10	// Restore CSR

// Testing CSR 0x9
	csrr x4, 0x9	// Read CSR
	li x20, -1
	csrrw x26, 0x9, x20	// Write all 1s to CSR
	csrrw x26, 0x9, x0	// Write all 0s to CSR
	csrrw x26, 0x9, x4	// Restore CSR

// Testing CSR 0xa
	csrr x9, 0xa	// Read CSR
	li x30, -1
	csrrw x18, 0xa, x30	// Write all 1s to CSR
	csrrw x18, 0xa, x0	// Write all 0s to CSR
	csrrw x18, 0xa, x9	// Restore CSR

// Testing CSR 0xb
	csrr x23, 0xb	// Read CSR
	li x26, -1
	csrrw x20, 0xb, x26	// Write all 1s to CSR
	csrrw x20, 0xb, x0	// Write all 0s to CSR
	csrrw x20, 0xb, x23	// Restore CSR

// Testing CSR 0xc
	csrr x29, 0xc	// Read CSR
	li x5, -1
	csrrw x10, 0xc, x5	// Write all 1s to CSR
	csrrw x10, 0xc, x0	// Write all 0s to CSR
	csrrw x10, 0xc, x29	// Restore CSR

// Testing CSR 0xd
	csrr x4, 0xd	// Read CSR
	li x24, -1
	csrrw x3, 0xd, x24	// Write all 1s to CSR
	csrrw x3, 0xd, x0	// Write all 0s to CSR
	csrrw x3, 0xd, x4	// Restore CSR

// Testing CSR 0xe
	csrr x29, 0xe	// Read CSR
	li x28, -1
	csrrw x22, 0xe, x28	// Write all 1s to CSR
	csrrw x22, 0xe, x0	// Write all 0s to CSR
	csrrw x22, 0xe, x29	// Restore CSR

// Testing CSR 0xf
	csrr x11, 0xf	// Read CSR
	li x16, -1
	csrrw x18, 0xf, x16	// Write all 1s to CSR
	csrrw x18, 0xf, x0	// Write all 0s to CSR
	csrrw x18, 0xf, x11	// Restore CSR

// Testing CSR 0x10
	csrr x4, 0x10	// Read CSR
	li x12, -1
	csrrw x14, 0x10, x12	// Write all 1s to CSR
	csrrw x14, 0x10, x0	// Write all 0s to CSR
	csrrw x14, 0x10, x4	// Restore CSR

// Testing CSR 0x11
	csrr x11, 0x11	// Read CSR
	li x20, -1
	csrrw x21, 0x11, x20	// Write all 1s to CSR
	csrrw x21, 0x11, x0	// Write all 0s to CSR
	csrrw x21, 0x11, x11	// Restore CSR

// Testing CSR 0x12
	csrr x30, 0x12	// Read CSR
	li x7, -1
	csrrw x31, 0x12, x7	// Write all 1s to CSR
	csrrw x31, 0x12, x0	// Write all 0s to CSR
	csrrw x31, 0x12, x30	// Restore CSR

// Testing CSR 0x13
	csrr x18, 0x13	// Read CSR
	li x16, -1
	csrrw x15, 0x13, x16	// Write all 1s to CSR
	csrrw x15, 0x13, x0	// Write all 0s to CSR
	csrrw x15, 0x13, x18	// Restore CSR

// Testing CSR 0x14
	csrr x28, 0x14	// Read CSR
	li x17, -1
	csrrw x9, 0x14, x17	// Write all 1s to CSR
	csrrw x9, 0x14, x0	// Write all 0s to CSR
	csrrw x9, 0x14, x28	// Restore CSR

// Testing CSR 0x16
	csrr x2, 0x16	// Read CSR
	li x26, -1
	csrrw x30, 0x16, x26	// Write all 1s to CSR
	csrrw x30, 0x16, x0	// Write all 0s to CSR
	csrrw x30, 0x16, x2	// Restore CSR

// Testing CSR 0x16
	csrr x18, 0x16	// Read CSR
	li x30, -1
	csrrw x1, 0x16, x30	// Write all 1s to CSR
	csrrw x1, 0x16, x0	// Write all 0s to CSR
	csrrw x1, 0x16, x18	// Restore CSR

// Testing CSR 0x17
	csrr x3, 0x17	// Read CSR
	li x24, -1
	csrrw x27, 0x17, x24	// Write all 1s to CSR
	csrrw x27, 0x17, x0	// Write all 0s to CSR
	csrrw x27, 0x17, x3	// Restore CSR

// Testing CSR 0x18
	csrr x13, 0x18	// Read CSR
	li x23, -1
	csrrw x27, 0x18, x23	// Write all 1s to CSR
	csrrw x27, 0x18, x0	// Write all 0s to CSR
	csrrw x27, 0x18, x13	// Restore CSR

// Testing CSR 0x19
	csrr x26, 0x19	// Read CSR
	li x22, -1
	csrrw x21, 0x19, x22	// Write all 1s to CSR
	csrrw x21, 0x19, x0	// Write all 0s to CSR
	csrrw x21, 0x19, x26	// Restore CSR

// Testing CSR 0x1a
	csrr x1, 0x1a	// Read CSR
	li x20, -1
	csrrw x16, 0x1a, x20	// Write all 1s to CSR
	csrrw x16, 0x1a, x0	// Write all 0s to CSR
	csrrw x16, 0x1a, x1	// Restore CSR

// Testing CSR 0x1b
	csrr x27, 0x1b	// Read CSR
	li x28, -1
	csrrw x11, 0x1b, x28	// Write all 1s to CSR
	csrrw x11, 0x1b, x0	// Write all 0s to CSR
	csrrw x11, 0x1b, x27	// Restore CSR

// Testing CSR 0x1c
	csrr x8, 0x1c	// Read CSR
	li x24, -1
	csrrw x11, 0x1c, x24	// Write all 1s to CSR
	csrrw x11, 0x1c, x0	// Write all 0s to CSR
	csrrw x11, 0x1c, x8	// Restore CSR

// Testing CSR 0x1d
	csrr x23, 0x1d	// Read CSR
	li x28, -1
	csrrw x3, 0x1d, x28	// Write all 1s to CSR
	csrrw x3, 0x1d, x0	// Write all 0s to CSR
	csrrw x3, 0x1d, x23	// Restore CSR

// Testing CSR 0x1e
	csrr x7, 0x1e	// Read CSR
	li x30, -1
	csrrw x19, 0x1e, x30	// Write all 1s to CSR
	csrrw x19, 0x1e, x0	// Write all 0s to CSR
	csrrw x19, 0x1e, x7	// Restore CSR

// Testing CSR 0x1f
	csrr x8, 0x1f	// Read CSR
	li x31, -1
	csrrw x26, 0x1f, x31	// Write all 1s to CSR
	csrrw x26, 0x1f, x0	// Write all 0s to CSR
	csrrw x26, 0x1f, x8	// Restore CSR

// Testing CSR 0x20
	csrr x5, 0x20	// Read CSR
	li x26, -1
	csrrw x18, 0x20, x26	// Write all 1s to CSR
	csrrw x18, 0x20, x0	// Write all 0s to CSR
	csrrw x18, 0x20, x5	// Restore CSR

// Testing CSR 0x21
	csrr x15, 0x21	// Read CSR
	li x3, -1
	csrrw x11, 0x21, x3	// Write all 1s to CSR
	csrrw x11, 0x21, x0	// Write all 0s to CSR
	csrrw x11, 0x21, x15	// Restore CSR

// Testing CSR 0x22
	csrr x29, 0x22	// Read CSR
	li x17, -1
	csrrw x30, 0x22, x17	// Write all 1s to CSR
	csrrw x30, 0x22, x0	// Write all 0s to CSR
	csrrw x30, 0x22, x29	// Restore CSR

// Testing CSR 0x23
	csrr x16, 0x23	// Read CSR
	li x4, -1
	csrrw x10, 0x23, x4	// Write all 1s to CSR
	csrrw x10, 0x23, x0	// Write all 0s to CSR
	csrrw x10, 0x23, x16	// Restore CSR

// Testing CSR 0x24
	csrr x18, 0x24	// Read CSR
	li x10, -1
	csrrw x23, 0x24, x10	// Write all 1s to CSR
	csrrw x23, 0x24, x0	// Write all 0s to CSR
	csrrw x23, 0x24, x18	// Restore CSR

// Testing CSR 0x25
	csrr x4, 0x25	// Read CSR
	li x18, -1
	csrrw x11, 0x25, x18	// Write all 1s to CSR
	csrrw x11, 0x25, x0	// Write all 0s to CSR
	csrrw x11, 0x25, x4	// Restore CSR

// Testing CSR 0x26
	csrr x27, 0x26	// Read CSR
	li x30, -1
	csrrw x18, 0x26, x30	// Write all 1s to CSR
	csrrw x18, 0x26, x0	// Write all 0s to CSR
	csrrw x18, 0x26, x27	// Restore CSR

// Testing CSR 0x27
	csrr x7, 0x27	// Read CSR
	li x31, -1
	csrrw x26, 0x27, x31	// Write all 1s to CSR
	csrrw x26, 0x27, x0	// Write all 0s to CSR
	csrrw x26, 0x27, x7	// Restore CSR

// Testing CSR 0x28
	csrr x20, 0x28	// Read CSR
	li x18, -1
	csrrw x19, 0x28, x18	// Write all 1s to CSR
	csrrw x19, 0x28, x0	// Write all 0s to CSR
	csrrw x19, 0x28, x20	// Restore CSR

// Testing CSR 0x29
	csrr x10, 0x29	// Read CSR
	li x15, -1
	csrrw x3, 0x29, x15	// Write all 1s to CSR
	csrrw x3, 0x29, x0	// Write all 0s to CSR
	csrrw x3, 0x29, x10	// Restore CSR

// Testing CSR 0x2a
	csrr x20, 0x2a	// Read CSR
	li x26, -1
	csrrw x13, 0x2a, x26	// Write all 1s to CSR
	csrrw x13, 0x2a, x0	// Write all 0s to CSR
	csrrw x13, 0x2a, x20	// Restore CSR

// Testing CSR 0x2b
	csrr x11, 0x2b	// Read CSR
	li x19, -1
	csrrw x8, 0x2b, x19	// Write all 1s to CSR
	csrrw x8, 0x2b, x0	// Write all 0s to CSR
	csrrw x8, 0x2b, x11	// Restore CSR

// Testing CSR 0x2c
	csrr x10, 0x2c	// Read CSR
	li x6, -1
	csrrw x7, 0x2c, x6	// Write all 1s to CSR
	csrrw x7, 0x2c, x0	// Write all 0s to CSR
	csrrw x7, 0x2c, x10	// Restore CSR

// Testing CSR 0x2d
	csrr x27, 0x2d	// Read CSR
	li x6, -1
	csrrw x2, 0x2d, x6	// Write all 1s to CSR
	csrrw x2, 0x2d, x0	// Write all 0s to CSR
	csrrw x2, 0x2d, x27	// Restore CSR

// Testing CSR 0x2e
	csrr x20, 0x2e	// Read CSR
	li x22, -1
	csrrw x9, 0x2e, x22	// Write all 1s to CSR
	csrrw x9, 0x2e, x0	// Write all 0s to CSR
	csrrw x9, 0x2e, x20	// Restore CSR

// Testing CSR 0x2f
	csrr x16, 0x2f	// Read CSR
	li x3, -1
	csrrw x22, 0x2f, x3	// Write all 1s to CSR
	csrrw x22, 0x2f, x0	// Write all 0s to CSR
	csrrw x22, 0x2f, x16	// Restore CSR

// Testing CSR 0x30
	csrr x25, 0x30	// Read CSR
	li x5, -1
	csrrw x29, 0x30, x5	// Write all 1s to CSR
	csrrw x29, 0x30, x0	// Write all 0s to CSR
	csrrw x29, 0x30, x25	// Restore CSR

// Testing CSR 0x31
	csrr x5, 0x31	// Read CSR
	li x30, -1
	csrrw x2, 0x31, x30	// Write all 1s to CSR
	csrrw x2, 0x31, x0	// Write all 0s to CSR
	csrrw x2, 0x31, x5	// Restore CSR

// Testing CSR 0x32
	csrr x27, 0x32	// Read CSR
	li x3, -1
	csrrw x29, 0x32, x3	// Write all 1s to CSR
	csrrw x29, 0x32, x0	// Write all 0s to CSR
	csrrw x29, 0x32, x27	// Restore CSR

// Testing CSR 0x33
	csrr x23, 0x33	// Read CSR
	li x30, -1
	csrrw x27, 0x33, x30	// Write all 1s to CSR
	csrrw x27, 0x33, x0	// Write all 0s to CSR
	csrrw x27, 0x33, x23	// Restore CSR

// Testing CSR 0x34
	csrr x18, 0x34	// Read CSR
	li x22, -1
	csrrw x13, 0x34, x22	// Write all 1s to CSR
	csrrw x13, 0x34, x0	// Write all 0s to CSR
	csrrw x13, 0x34, x18	// Restore CSR

// Testing CSR 0x35
	csrr x27, 0x35	// Read CSR
	li x23, -1
	csrrw x17, 0x35, x23	// Write all 1s to CSR
	csrrw x17, 0x35, x0	// Write all 0s to CSR
	csrrw x17, 0x35, x27	// Restore CSR

// Testing CSR 0x36
	csrr x9, 0x36	// Read CSR
	li x17, -1
	csrrw x26, 0x36, x17	// Write all 1s to CSR
	csrrw x26, 0x36, x0	// Write all 0s to CSR
	csrrw x26, 0x36, x9	// Restore CSR

// Testing CSR 0x37
	csrr x8, 0x37	// Read CSR
	li x28, -1
	csrrw x7, 0x37, x28	// Write all 1s to CSR
	csrrw x7, 0x37, x0	// Write all 0s to CSR
	csrrw x7, 0x37, x8	// Restore CSR

// Testing CSR 0x38
	csrr x29, 0x38	// Read CSR
	li x22, -1
	csrrw x19, 0x38, x22	// Write all 1s to CSR
	csrrw x19, 0x38, x0	// Write all 0s to CSR
	csrrw x19, 0x38, x29	// Restore CSR

// Testing CSR 0x39
	csrr x27, 0x39	// Read CSR
	li x31, -1
	csrrw x14, 0x39, x31	// Write all 1s to CSR
	csrrw x14, 0x39, x0	// Write all 0s to CSR
	csrrw x14, 0x39, x27	// Restore CSR

// Testing CSR 0x3a
	csrr x19, 0x3a	// Read CSR
	li x9, -1
	csrrw x15, 0x3a, x9	// Write all 1s to CSR
	csrrw x15, 0x3a, x0	// Write all 0s to CSR
	csrrw x15, 0x3a, x19	// Restore CSR

// Testing CSR 0x3b
	csrr x16, 0x3b	// Read CSR
	li x22, -1
	csrrw x21, 0x3b, x22	// Write all 1s to CSR
	csrrw x21, 0x3b, x0	// Write all 0s to CSR
	csrrw x21, 0x3b, x16	// Restore CSR

// Testing CSR 0x3c
	csrr x23, 0x3c	// Read CSR
	li x30, -1
	csrrw x26, 0x3c, x30	// Write all 1s to CSR
	csrrw x26, 0x3c, x0	// Write all 0s to CSR
	csrrw x26, 0x3c, x23	// Restore CSR

// Testing CSR 0x3d
	csrr x12, 0x3d	// Read CSR
	li x3, -1
	csrrw x11, 0x3d, x3	// Write all 1s to CSR
	csrrw x11, 0x3d, x0	// Write all 0s to CSR
	csrrw x11, 0x3d, x12	// Restore CSR

// Testing CSR 0x3e
	csrr x20, 0x3e	// Read CSR
	li x4, -1
	csrrw x16, 0x3e, x4	// Write all 1s to CSR
	csrrw x16, 0x3e, x0	// Write all 0s to CSR
	csrrw x16, 0x3e, x20	// Restore CSR

// Testing CSR 0x3f
	csrr x19, 0x3f	// Read CSR
	li x21, -1
	csrrw x11, 0x3f, x21	// Write all 1s to CSR
	csrrw x11, 0x3f, x0	// Write all 0s to CSR
	csrrw x11, 0x3f, x19	// Restore CSR

// Testing CSR 0x40
	csrr x28, 0x40	// Read CSR
	li x7, -1
	csrrw x8, 0x40, x7	// Write all 1s to CSR
	csrrw x8, 0x40, x0	// Write all 0s to CSR
	csrrw x8, 0x40, x28	// Restore CSR

// Testing CSR 0x41
	csrr x1, 0x41	// Read CSR
	li x24, -1
	csrrw x9, 0x41, x24	// Write all 1s to CSR
	csrrw x9, 0x41, x0	// Write all 0s to CSR
	csrrw x9, 0x41, x1	// Restore CSR

// Testing CSR 0x42
	csrr x4, 0x42	// Read CSR
	li x23, -1
	csrrw x8, 0x42, x23	// Write all 1s to CSR
	csrrw x8, 0x42, x0	// Write all 0s to CSR
	csrrw x8, 0x42, x4	// Restore CSR

// Testing CSR 0x43
	csrr x12, 0x43	// Read CSR
	li x26, -1
	csrrw x6, 0x43, x26	// Write all 1s to CSR
	csrrw x6, 0x43, x0	// Write all 0s to CSR
	csrrw x6, 0x43, x12	// Restore CSR

// Testing CSR 0x44
	csrr x11, 0x44	// Read CSR
	li x14, -1
	csrrw x27, 0x44, x14	// Write all 1s to CSR
	csrrw x27, 0x44, x0	// Write all 0s to CSR
	csrrw x27, 0x44, x11	// Restore CSR

// Testing CSR 0x45
	csrr x2, 0x45	// Read CSR
	li x4, -1
	csrrw x26, 0x45, x4	// Write all 1s to CSR
	csrrw x26, 0x45, x0	// Write all 0s to CSR
	csrrw x26, 0x45, x2	// Restore CSR

// Testing CSR 0x46
	csrr x5, 0x46	// Read CSR
	li x28, -1
	csrrw x23, 0x46, x28	// Write all 1s to CSR
	csrrw x23, 0x46, x0	// Write all 0s to CSR
	csrrw x23, 0x46, x5	// Restore CSR

// Testing CSR 0x47
	csrr x8, 0x47	// Read CSR
	li x2, -1
	csrrw x27, 0x47, x2	// Write all 1s to CSR
	csrrw x27, 0x47, x0	// Write all 0s to CSR
	csrrw x27, 0x47, x8	// Restore CSR

// Testing CSR 0x48
	csrr x19, 0x48	// Read CSR
	li x21, -1
	csrrw x30, 0x48, x21	// Write all 1s to CSR
	csrrw x30, 0x48, x0	// Write all 0s to CSR
	csrrw x30, 0x48, x19	// Restore CSR

// Testing CSR 0x49
	csrr x30, 0x49	// Read CSR
	li x18, -1
	csrrw x20, 0x49, x18	// Write all 1s to CSR
	csrrw x20, 0x49, x0	// Write all 0s to CSR
	csrrw x20, 0x49, x30	// Restore CSR

// Testing CSR 0x4a
	csrr x22, 0x4a	// Read CSR
	li x3, -1
	csrrw x1, 0x4a, x3	// Write all 1s to CSR
	csrrw x1, 0x4a, x0	// Write all 0s to CSR
	csrrw x1, 0x4a, x22	// Restore CSR

// Testing CSR 0x4b
	csrr x4, 0x4b	// Read CSR
	li x21, -1
	csrrw x7, 0x4b, x21	// Write all 1s to CSR
	csrrw x7, 0x4b, x0	// Write all 0s to CSR
	csrrw x7, 0x4b, x4	// Restore CSR

// Testing CSR 0x4c
	csrr x20, 0x4c	// Read CSR
	li x27, -1
	csrrw x19, 0x4c, x27	// Write all 1s to CSR
	csrrw x19, 0x4c, x0	// Write all 0s to CSR
	csrrw x19, 0x4c, x20	// Restore CSR

// Testing CSR 0x4d
	csrr x4, 0x4d	// Read CSR
	li x13, -1
	csrrw x3, 0x4d, x13	// Write all 1s to CSR
	csrrw x3, 0x4d, x0	// Write all 0s to CSR
	csrrw x3, 0x4d, x4	// Restore CSR

// Testing CSR 0x4e
	csrr x12, 0x4e	// Read CSR
	li x27, -1
	csrrw x4, 0x4e, x27	// Write all 1s to CSR
	csrrw x4, 0x4e, x0	// Write all 0s to CSR
	csrrw x4, 0x4e, x12	// Restore CSR

// Testing CSR 0x4f
	csrr x2, 0x4f	// Read CSR
	li x20, -1
	csrrw x1, 0x4f, x20	// Write all 1s to CSR
	csrrw x1, 0x4f, x0	// Write all 0s to CSR
	csrrw x1, 0x4f, x2	// Restore CSR

// Testing CSR 0x50
	csrr x7, 0x50	// Read CSR
	li x31, -1
	csrrw x6, 0x50, x31	// Write all 1s to CSR
	csrrw x6, 0x50, x0	// Write all 0s to CSR
	csrrw x6, 0x50, x7	// Restore CSR

// Testing CSR 0x51
	csrr x23, 0x51	// Read CSR
	li x4, -1
	csrrw x16, 0x51, x4	// Write all 1s to CSR
	csrrw x16, 0x51, x0	// Write all 0s to CSR
	csrrw x16, 0x51, x23	// Restore CSR

// Testing CSR 0x52
	csrr x7, 0x52	// Read CSR
	li x24, -1
	csrrw x26, 0x52, x24	// Write all 1s to CSR
	csrrw x26, 0x52, x0	// Write all 0s to CSR
	csrrw x26, 0x52, x7	// Restore CSR

// Testing CSR 0x53
	csrr x2, 0x53	// Read CSR
	li x30, -1
	csrrw x22, 0x53, x30	// Write all 1s to CSR
	csrrw x22, 0x53, x0	// Write all 0s to CSR
	csrrw x22, 0x53, x2	// Restore CSR

// Testing CSR 0x54
	csrr x1, 0x54	// Read CSR
	li x18, -1
	csrrw x14, 0x54, x18	// Write all 1s to CSR
	csrrw x14, 0x54, x0	// Write all 0s to CSR
	csrrw x14, 0x54, x1	// Restore CSR

// Testing CSR 0x55
	csrr x20, 0x55	// Read CSR
	li x4, -1
	csrrw x27, 0x55, x4	// Write all 1s to CSR
	csrrw x27, 0x55, x0	// Write all 0s to CSR
	csrrw x27, 0x55, x20	// Restore CSR

// Testing CSR 0x56
	csrr x9, 0x56	// Read CSR
	li x3, -1
	csrrw x8, 0x56, x3	// Write all 1s to CSR
	csrrw x8, 0x56, x0	// Write all 0s to CSR
	csrrw x8, 0x56, x9	// Restore CSR

// Testing CSR 0x57
	csrr x3, 0x57	// Read CSR
	li x21, -1
	csrrw x10, 0x57, x21	// Write all 1s to CSR
	csrrw x10, 0x57, x0	// Write all 0s to CSR
	csrrw x10, 0x57, x3	// Restore CSR

// Testing CSR 0x58
	csrr x12, 0x58	// Read CSR
	li x14, -1
	csrrw x6, 0x58, x14	// Write all 1s to CSR
	csrrw x6, 0x58, x0	// Write all 0s to CSR
	csrrw x6, 0x58, x12	// Restore CSR

// Testing CSR 0x59
	csrr x2, 0x59	// Read CSR
	li x17, -1
	csrrw x15, 0x59, x17	// Write all 1s to CSR
	csrrw x15, 0x59, x0	// Write all 0s to CSR
	csrrw x15, 0x59, x2	// Restore CSR

// Testing CSR 0x5a
	csrr x2, 0x5a	// Read CSR
	li x20, -1
	csrrw x4, 0x5a, x20	// Write all 1s to CSR
	csrrw x4, 0x5a, x0	// Write all 0s to CSR
	csrrw x4, 0x5a, x2	// Restore CSR

// Testing CSR 0x5b
	csrr x23, 0x5b	// Read CSR
	li x13, -1
	csrrw x7, 0x5b, x13	// Write all 1s to CSR
	csrrw x7, 0x5b, x0	// Write all 0s to CSR
	csrrw x7, 0x5b, x23	// Restore CSR

// Testing CSR 0x5c
	csrr x9, 0x5c	// Read CSR
	li x12, -1
	csrrw x29, 0x5c, x12	// Write all 1s to CSR
	csrrw x29, 0x5c, x0	// Write all 0s to CSR
	csrrw x29, 0x5c, x9	// Restore CSR

// Testing CSR 0x5d
	csrr x24, 0x5d	// Read CSR
	li x16, -1
	csrrw x27, 0x5d, x16	// Write all 1s to CSR
	csrrw x27, 0x5d, x0	// Write all 0s to CSR
	csrrw x27, 0x5d, x24	// Restore CSR

// Testing CSR 0x5e
	csrr x29, 0x5e	// Read CSR
	li x30, -1
	csrrw x19, 0x5e, x30	// Write all 1s to CSR
	csrrw x19, 0x5e, x0	// Write all 0s to CSR
	csrrw x19, 0x5e, x29	// Restore CSR

// Testing CSR 0x5f
	csrr x6, 0x5f	// Read CSR
	li x23, -1
	csrrw x22, 0x5f, x23	// Write all 1s to CSR
	csrrw x22, 0x5f, x0	// Write all 0s to CSR
	csrrw x22, 0x5f, x6	// Restore CSR

// Testing CSR 0x60
	csrr x7, 0x60	// Read CSR
	li x31, -1
	csrrw x25, 0x60, x31	// Write all 1s to CSR
	csrrw x25, 0x60, x0	// Write all 0s to CSR
	csrrw x25, 0x60, x7	// Restore CSR

// Testing CSR 0x61
	csrr x2, 0x61	// Read CSR
	li x26, -1
	csrrw x22, 0x61, x26	// Write all 1s to CSR
	csrrw x22, 0x61, x0	// Write all 0s to CSR
	csrrw x22, 0x61, x2	// Restore CSR

// Testing CSR 0x62
	csrr x6, 0x62	// Read CSR
	li x28, -1
	csrrw x11, 0x62, x28	// Write all 1s to CSR
	csrrw x11, 0x62, x0	// Write all 0s to CSR
	csrrw x11, 0x62, x6	// Restore CSR

// Testing CSR 0x63
	csrr x17, 0x63	// Read CSR
	li x9, -1
	csrrw x4, 0x63, x9	// Write all 1s to CSR
	csrrw x4, 0x63, x0	// Write all 0s to CSR
	csrrw x4, 0x63, x17	// Restore CSR

// Testing CSR 0x64
	csrr x20, 0x64	// Read CSR
	li x30, -1
	csrrw x15, 0x64, x30	// Write all 1s to CSR
	csrrw x15, 0x64, x0	// Write all 0s to CSR
	csrrw x15, 0x64, x20	// Restore CSR

// Testing CSR 0x65
	csrr x22, 0x65	// Read CSR
	li x6, -1
	csrrw x1, 0x65, x6	// Write all 1s to CSR
	csrrw x1, 0x65, x0	// Write all 0s to CSR
	csrrw x1, 0x65, x22	// Restore CSR

// Testing CSR 0x66
	csrr x16, 0x66	// Read CSR
	li x22, -1
	csrrw x14, 0x66, x22	// Write all 1s to CSR
	csrrw x14, 0x66, x0	// Write all 0s to CSR
	csrrw x14, 0x66, x16	// Restore CSR

// Testing CSR 0x67
	csrr x29, 0x67	// Read CSR
	li x19, -1
	csrrw x28, 0x67, x19	// Write all 1s to CSR
	csrrw x28, 0x67, x0	// Write all 0s to CSR
	csrrw x28, 0x67, x29	// Restore CSR

// Testing CSR 0x68
	csrr x17, 0x68	// Read CSR
	li x30, -1
	csrrw x10, 0x68, x30	// Write all 1s to CSR
	csrrw x10, 0x68, x0	// Write all 0s to CSR
	csrrw x10, 0x68, x17	// Restore CSR

// Testing CSR 0x69
	csrr x21, 0x69	// Read CSR
	li x12, -1
	csrrw x13, 0x69, x12	// Write all 1s to CSR
	csrrw x13, 0x69, x0	// Write all 0s to CSR
	csrrw x13, 0x69, x21	// Restore CSR

// Testing CSR 0x6a
	csrr x27, 0x6a	// Read CSR
	li x22, -1
	csrrw x9, 0x6a, x22	// Write all 1s to CSR
	csrrw x9, 0x6a, x0	// Write all 0s to CSR
	csrrw x9, 0x6a, x27	// Restore CSR

// Testing CSR 0x6b
	csrr x5, 0x6b	// Read CSR
	li x18, -1
	csrrw x23, 0x6b, x18	// Write all 1s to CSR
	csrrw x23, 0x6b, x0	// Write all 0s to CSR
	csrrw x23, 0x6b, x5	// Restore CSR

// Testing CSR 0x6c
	csrr x1, 0x6c	// Read CSR
	li x15, -1
	csrrw x24, 0x6c, x15	// Write all 1s to CSR
	csrrw x24, 0x6c, x0	// Write all 0s to CSR
	csrrw x24, 0x6c, x1	// Restore CSR

// Testing CSR 0x6d
	csrr x3, 0x6d	// Read CSR
	li x11, -1
	csrrw x24, 0x6d, x11	// Write all 1s to CSR
	csrrw x24, 0x6d, x0	// Write all 0s to CSR
	csrrw x24, 0x6d, x3	// Restore CSR

// Testing CSR 0x6e
	csrr x2, 0x6e	// Read CSR
	li x18, -1
	csrrw x9, 0x6e, x18	// Write all 1s to CSR
	csrrw x9, 0x6e, x0	// Write all 0s to CSR
	csrrw x9, 0x6e, x2	// Restore CSR

// Testing CSR 0x6f
	csrr x5, 0x6f	// Read CSR
	li x8, -1
	csrrw x25, 0x6f, x8	// Write all 1s to CSR
	csrrw x25, 0x6f, x0	// Write all 0s to CSR
	csrrw x25, 0x6f, x5	// Restore CSR

// Testing CSR 0x70
	csrr x31, 0x70	// Read CSR
	li x16, -1
	csrrw x12, 0x70, x16	// Write all 1s to CSR
	csrrw x12, 0x70, x0	// Write all 0s to CSR
	csrrw x12, 0x70, x31	// Restore CSR

// Testing CSR 0x71
	csrr x20, 0x71	// Read CSR
	li x10, -1
	csrrw x22, 0x71, x10	// Write all 1s to CSR
	csrrw x22, 0x71, x0	// Write all 0s to CSR
	csrrw x22, 0x71, x20	// Restore CSR

// Testing CSR 0x72
	csrr x12, 0x72	// Read CSR
	li x19, -1
	csrrw x31, 0x72, x19	// Write all 1s to CSR
	csrrw x31, 0x72, x0	// Write all 0s to CSR
	csrrw x31, 0x72, x12	// Restore CSR

// Testing CSR 0x73
	csrr x29, 0x73	// Read CSR
	li x21, -1
	csrrw x28, 0x73, x21	// Write all 1s to CSR
	csrrw x28, 0x73, x0	// Write all 0s to CSR
	csrrw x28, 0x73, x29	// Restore CSR

// Testing CSR 0x74
	csrr x20, 0x74	// Read CSR
	li x5, -1
	csrrw x23, 0x74, x5	// Write all 1s to CSR
	csrrw x23, 0x74, x0	// Write all 0s to CSR
	csrrw x23, 0x74, x20	// Restore CSR

// Testing CSR 0x75
	csrr x10, 0x75	// Read CSR
	li x13, -1
	csrrw x24, 0x75, x13	// Write all 1s to CSR
	csrrw x24, 0x75, x0	// Write all 0s to CSR
	csrrw x24, 0x75, x10	// Restore CSR

// Testing CSR 0x76
	csrr x14, 0x76	// Read CSR
	li x27, -1
	csrrw x21, 0x76, x27	// Write all 1s to CSR
	csrrw x21, 0x76, x0	// Write all 0s to CSR
	csrrw x21, 0x76, x14	// Restore CSR

// Testing CSR 0x77
	csrr x3, 0x77	// Read CSR
	li x1, -1
	csrrw x20, 0x77, x1	// Write all 1s to CSR
	csrrw x20, 0x77, x0	// Write all 0s to CSR
	csrrw x20, 0x77, x3	// Restore CSR

// Testing CSR 0x78
	csrr x7, 0x78	// Read CSR
	li x23, -1
	csrrw x11, 0x78, x23	// Write all 1s to CSR
	csrrw x11, 0x78, x0	// Write all 0s to CSR
	csrrw x11, 0x78, x7	// Restore CSR

// Testing CSR 0x79
	csrr x6, 0x79	// Read CSR
	li x8, -1
	csrrw x21, 0x79, x8	// Write all 1s to CSR
	csrrw x21, 0x79, x0	// Write all 0s to CSR
	csrrw x21, 0x79, x6	// Restore CSR

// Testing CSR 0x7a
	csrr x15, 0x7a	// Read CSR
	li x13, -1
	csrrw x23, 0x7a, x13	// Write all 1s to CSR
	csrrw x23, 0x7a, x0	// Write all 0s to CSR
	csrrw x23, 0x7a, x15	// Restore CSR

// Testing CSR 0x7b
	csrr x29, 0x7b	// Read CSR
	li x22, -1
	csrrw x19, 0x7b, x22	// Write all 1s to CSR
	csrrw x19, 0x7b, x0	// Write all 0s to CSR
	csrrw x19, 0x7b, x29	// Restore CSR

// Testing CSR 0x7c
	csrr x28, 0x7c	// Read CSR
	li x14, -1
	csrrw x2, 0x7c, x14	// Write all 1s to CSR
	csrrw x2, 0x7c, x0	// Write all 0s to CSR
	csrrw x2, 0x7c, x28	// Restore CSR

// Testing CSR 0x7d
	csrr x13, 0x7d	// Read CSR
	li x28, -1
	csrrw x23, 0x7d, x28	// Write all 1s to CSR
	csrrw x23, 0x7d, x0	// Write all 0s to CSR
	csrrw x23, 0x7d, x13	// Restore CSR

// Testing CSR 0x7e
	csrr x19, 0x7e	// Read CSR
	li x14, -1
	csrrw x25, 0x7e, x14	// Write all 1s to CSR
	csrrw x25, 0x7e, x0	// Write all 0s to CSR
	csrrw x25, 0x7e, x19	// Restore CSR

// Testing CSR 0x7f
	csrr x22, 0x7f	// Read CSR
	li x23, -1
	csrrw x2, 0x7f, x23	// Write all 1s to CSR
	csrrw x2, 0x7f, x0	// Write all 0s to CSR
	csrrw x2, 0x7f, x22	// Restore CSR

// Testing CSR 0x80
	csrr x6, 0x80	// Read CSR
	li x15, -1
	csrrw x3, 0x80, x15	// Write all 1s to CSR
	csrrw x3, 0x80, x0	// Write all 0s to CSR
	csrrw x3, 0x80, x6	// Restore CSR

// Testing CSR 0x81
	csrr x9, 0x81	// Read CSR
	li x23, -1
	csrrw x6, 0x81, x23	// Write all 1s to CSR
	csrrw x6, 0x81, x0	// Write all 0s to CSR
	csrrw x6, 0x81, x9	// Restore CSR

// Testing CSR 0x82
	csrr x15, 0x82	// Read CSR
	li x17, -1
	csrrw x29, 0x82, x17	// Write all 1s to CSR
	csrrw x29, 0x82, x0	// Write all 0s to CSR
	csrrw x29, 0x82, x15	// Restore CSR

// Testing CSR 0x83
	csrr x16, 0x83	// Read CSR
	li x30, -1
	csrrw x18, 0x83, x30	// Write all 1s to CSR
	csrrw x18, 0x83, x0	// Write all 0s to CSR
	csrrw x18, 0x83, x16	// Restore CSR

// Testing CSR 0x84
	csrr x20, 0x84	// Read CSR
	li x25, -1
	csrrw x1, 0x84, x25	// Write all 1s to CSR
	csrrw x1, 0x84, x0	// Write all 0s to CSR
	csrrw x1, 0x84, x20	// Restore CSR

// Testing CSR 0x85
	csrr x29, 0x85	// Read CSR
	li x2, -1
	csrrw x16, 0x85, x2	// Write all 1s to CSR
	csrrw x16, 0x85, x0	// Write all 0s to CSR
	csrrw x16, 0x85, x29	// Restore CSR

// Testing CSR 0x86
	csrr x11, 0x86	// Read CSR
	li x10, -1
	csrrw x27, 0x86, x10	// Write all 1s to CSR
	csrrw x27, 0x86, x0	// Write all 0s to CSR
	csrrw x27, 0x86, x11	// Restore CSR

// Testing CSR 0x87
	csrr x15, 0x87	// Read CSR
	li x2, -1
	csrrw x26, 0x87, x2	// Write all 1s to CSR
	csrrw x26, 0x87, x0	// Write all 0s to CSR
	csrrw x26, 0x87, x15	// Restore CSR

// Testing CSR 0x88
	csrr x27, 0x88	// Read CSR
	li x29, -1
	csrrw x26, 0x88, x29	// Write all 1s to CSR
	csrrw x26, 0x88, x0	// Write all 0s to CSR
	csrrw x26, 0x88, x27	// Restore CSR

// Testing CSR 0x89
	csrr x14, 0x89	// Read CSR
	li x7, -1
	csrrw x18, 0x89, x7	// Write all 1s to CSR
	csrrw x18, 0x89, x0	// Write all 0s to CSR
	csrrw x18, 0x89, x14	// Restore CSR

// Testing CSR 0x8a
	csrr x31, 0x8a	// Read CSR
	li x21, -1
	csrrw x3, 0x8a, x21	// Write all 1s to CSR
	csrrw x3, 0x8a, x0	// Write all 0s to CSR
	csrrw x3, 0x8a, x31	// Restore CSR

// Testing CSR 0x8b
	csrr x27, 0x8b	// Read CSR
	li x24, -1
	csrrw x5, 0x8b, x24	// Write all 1s to CSR
	csrrw x5, 0x8b, x0	// Write all 0s to CSR
	csrrw x5, 0x8b, x27	// Restore CSR

// Testing CSR 0x8c
	csrr x1, 0x8c	// Read CSR
	li x13, -1
	csrrw x31, 0x8c, x13	// Write all 1s to CSR
	csrrw x31, 0x8c, x0	// Write all 0s to CSR
	csrrw x31, 0x8c, x1	// Restore CSR

// Testing CSR 0x8d
	csrr x22, 0x8d	// Read CSR
	li x14, -1
	csrrw x11, 0x8d, x14	// Write all 1s to CSR
	csrrw x11, 0x8d, x0	// Write all 0s to CSR
	csrrw x11, 0x8d, x22	// Restore CSR

// Testing CSR 0x8e
	csrr x1, 0x8e	// Read CSR
	li x7, -1
	csrrw x23, 0x8e, x7	// Write all 1s to CSR
	csrrw x23, 0x8e, x0	// Write all 0s to CSR
	csrrw x23, 0x8e, x1	// Restore CSR

// Testing CSR 0x8f
	csrr x25, 0x8f	// Read CSR
	li x1, -1
	csrrw x27, 0x8f, x1	// Write all 1s to CSR
	csrrw x27, 0x8f, x0	// Write all 0s to CSR
	csrrw x27, 0x8f, x25	// Restore CSR

// Testing CSR 0x90
	csrr x22, 0x90	// Read CSR
	li x17, -1
	csrrw x20, 0x90, x17	// Write all 1s to CSR
	csrrw x20, 0x90, x0	// Write all 0s to CSR
	csrrw x20, 0x90, x22	// Restore CSR

// Testing CSR 0x91
	csrr x4, 0x91	// Read CSR
	li x7, -1
	csrrw x20, 0x91, x7	// Write all 1s to CSR
	csrrw x20, 0x91, x0	// Write all 0s to CSR
	csrrw x20, 0x91, x4	// Restore CSR

// Testing CSR 0x92
	csrr x21, 0x92	// Read CSR
	li x7, -1
	csrrw x28, 0x92, x7	// Write all 1s to CSR
	csrrw x28, 0x92, x0	// Write all 0s to CSR
	csrrw x28, 0x92, x21	// Restore CSR

// Testing CSR 0x93
	csrr x10, 0x93	// Read CSR
	li x9, -1
	csrrw x23, 0x93, x9	// Write all 1s to CSR
	csrrw x23, 0x93, x0	// Write all 0s to CSR
	csrrw x23, 0x93, x10	// Restore CSR

// Testing CSR 0x94
	csrr x6, 0x94	// Read CSR
	li x4, -1
	csrrw x16, 0x94, x4	// Write all 1s to CSR
	csrrw x16, 0x94, x0	// Write all 0s to CSR
	csrrw x16, 0x94, x6	// Restore CSR

// Testing CSR 0x95
	csrr x28, 0x95	// Read CSR
	li x30, -1
	csrrw x13, 0x95, x30	// Write all 1s to CSR
	csrrw x13, 0x95, x0	// Write all 0s to CSR
	csrrw x13, 0x95, x28	// Restore CSR

// Testing CSR 0x96
	csrr x21, 0x96	// Read CSR
	li x3, -1
	csrrw x1, 0x96, x3	// Write all 1s to CSR
	csrrw x1, 0x96, x0	// Write all 0s to CSR
	csrrw x1, 0x96, x21	// Restore CSR

// Testing CSR 0x97
	csrr x9, 0x97	// Read CSR
	li x30, -1
	csrrw x15, 0x97, x30	// Write all 1s to CSR
	csrrw x15, 0x97, x0	// Write all 0s to CSR
	csrrw x15, 0x97, x9	// Restore CSR

// Testing CSR 0x98
	csrr x26, 0x98	// Read CSR
	li x28, -1
	csrrw x4, 0x98, x28	// Write all 1s to CSR
	csrrw x4, 0x98, x0	// Write all 0s to CSR
	csrrw x4, 0x98, x26	// Restore CSR

// Testing CSR 0x99
	csrr x9, 0x99	// Read CSR
	li x5, -1
	csrrw x21, 0x99, x5	// Write all 1s to CSR
	csrrw x21, 0x99, x0	// Write all 0s to CSR
	csrrw x21, 0x99, x9	// Restore CSR

// Testing CSR 0x9a
	csrr x17, 0x9a	// Read CSR
	li x27, -1
	csrrw x21, 0x9a, x27	// Write all 1s to CSR
	csrrw x21, 0x9a, x0	// Write all 0s to CSR
	csrrw x21, 0x9a, x17	// Restore CSR

// Testing CSR 0x9b
	csrr x21, 0x9b	// Read CSR
	li x12, -1
	csrrw x4, 0x9b, x12	// Write all 1s to CSR
	csrrw x4, 0x9b, x0	// Write all 0s to CSR
	csrrw x4, 0x9b, x21	// Restore CSR

// Testing CSR 0x9c
	csrr x28, 0x9c	// Read CSR
	li x5, -1
	csrrw x9, 0x9c, x5	// Write all 1s to CSR
	csrrw x9, 0x9c, x0	// Write all 0s to CSR
	csrrw x9, 0x9c, x28	// Restore CSR

// Testing CSR 0x9d
	csrr x28, 0x9d	// Read CSR
	li x1, -1
	csrrw x2, 0x9d, x1	// Write all 1s to CSR
	csrrw x2, 0x9d, x0	// Write all 0s to CSR
	csrrw x2, 0x9d, x28	// Restore CSR

// Testing CSR 0x9e
	csrr x2, 0x9e	// Read CSR
	li x7, -1
	csrrw x22, 0x9e, x7	// Write all 1s to CSR
	csrrw x22, 0x9e, x0	// Write all 0s to CSR
	csrrw x22, 0x9e, x2	// Restore CSR

// Testing CSR 0x9f
	csrr x9, 0x9f	// Read CSR
	li x18, -1
	csrrw x11, 0x9f, x18	// Write all 1s to CSR
	csrrw x11, 0x9f, x0	// Write all 0s to CSR
	csrrw x11, 0x9f, x9	// Restore CSR

// Testing CSR 0xa0
	csrr x31, 0xa0	// Read CSR
	li x12, -1
	csrrw x19, 0xa0, x12	// Write all 1s to CSR
	csrrw x19, 0xa0, x0	// Write all 0s to CSR
	csrrw x19, 0xa0, x31	// Restore CSR

// Testing CSR 0xa1
	csrr x30, 0xa1	// Read CSR
	li x28, -1
	csrrw x2, 0xa1, x28	// Write all 1s to CSR
	csrrw x2, 0xa1, x0	// Write all 0s to CSR
	csrrw x2, 0xa1, x30	// Restore CSR

// Testing CSR 0xa2
	csrr x28, 0xa2	// Read CSR
	li x24, -1
	csrrw x31, 0xa2, x24	// Write all 1s to CSR
	csrrw x31, 0xa2, x0	// Write all 0s to CSR
	csrrw x31, 0xa2, x28	// Restore CSR

// Testing CSR 0xa3
	csrr x23, 0xa3	// Read CSR
	li x20, -1
	csrrw x21, 0xa3, x20	// Write all 1s to CSR
	csrrw x21, 0xa3, x0	// Write all 0s to CSR
	csrrw x21, 0xa3, x23	// Restore CSR

// Testing CSR 0xa4
	csrr x16, 0xa4	// Read CSR
	li x23, -1
	csrrw x21, 0xa4, x23	// Write all 1s to CSR
	csrrw x21, 0xa4, x0	// Write all 0s to CSR
	csrrw x21, 0xa4, x16	// Restore CSR

// Testing CSR 0xa5
	csrr x29, 0xa5	// Read CSR
	li x15, -1
	csrrw x21, 0xa5, x15	// Write all 1s to CSR
	csrrw x21, 0xa5, x0	// Write all 0s to CSR
	csrrw x21, 0xa5, x29	// Restore CSR

// Testing CSR 0xa6
	csrr x14, 0xa6	// Read CSR
	li x12, -1
	csrrw x28, 0xa6, x12	// Write all 1s to CSR
	csrrw x28, 0xa6, x0	// Write all 0s to CSR
	csrrw x28, 0xa6, x14	// Restore CSR

// Testing CSR 0xa7
	csrr x18, 0xa7	// Read CSR
	li x6, -1
	csrrw x7, 0xa7, x6	// Write all 1s to CSR
	csrrw x7, 0xa7, x0	// Write all 0s to CSR
	csrrw x7, 0xa7, x18	// Restore CSR

// Testing CSR 0xa8
	csrr x13, 0xa8	// Read CSR
	li x19, -1
	csrrw x10, 0xa8, x19	// Write all 1s to CSR
	csrrw x10, 0xa8, x0	// Write all 0s to CSR
	csrrw x10, 0xa8, x13	// Restore CSR

// Testing CSR 0xa9
	csrr x1, 0xa9	// Read CSR
	li x5, -1
	csrrw x9, 0xa9, x5	// Write all 1s to CSR
	csrrw x9, 0xa9, x0	// Write all 0s to CSR
	csrrw x9, 0xa9, x1	// Restore CSR

// Testing CSR 0xaa
	csrr x11, 0xaa	// Read CSR
	li x12, -1
	csrrw x26, 0xaa, x12	// Write all 1s to CSR
	csrrw x26, 0xaa, x0	// Write all 0s to CSR
	csrrw x26, 0xaa, x11	// Restore CSR

// Testing CSR 0xab
	csrr x23, 0xab	// Read CSR
	li x3, -1
	csrrw x11, 0xab, x3	// Write all 1s to CSR
	csrrw x11, 0xab, x0	// Write all 0s to CSR
	csrrw x11, 0xab, x23	// Restore CSR

// Testing CSR 0xac
	csrr x25, 0xac	// Read CSR
	li x20, -1
	csrrw x2, 0xac, x20	// Write all 1s to CSR
	csrrw x2, 0xac, x0	// Write all 0s to CSR
	csrrw x2, 0xac, x25	// Restore CSR

// Testing CSR 0xad
	csrr x2, 0xad	// Read CSR
	li x9, -1
	csrrw x6, 0xad, x9	// Write all 1s to CSR
	csrrw x6, 0xad, x0	// Write all 0s to CSR
	csrrw x6, 0xad, x2	// Restore CSR

// Testing CSR 0xae
	csrr x5, 0xae	// Read CSR
	li x19, -1
	csrrw x10, 0xae, x19	// Write all 1s to CSR
	csrrw x10, 0xae, x0	// Write all 0s to CSR
	csrrw x10, 0xae, x5	// Restore CSR

// Testing CSR 0xaf
	csrr x12, 0xaf	// Read CSR
	li x13, -1
	csrrw x18, 0xaf, x13	// Write all 1s to CSR
	csrrw x18, 0xaf, x0	// Write all 0s to CSR
	csrrw x18, 0xaf, x12	// Restore CSR

// Testing CSR 0xb0
	csrr x5, 0xb0	// Read CSR
	li x10, -1
	csrrw x4, 0xb0, x10	// Write all 1s to CSR
	csrrw x4, 0xb0, x0	// Write all 0s to CSR
	csrrw x4, 0xb0, x5	// Restore CSR

// Testing CSR 0xb1
	csrr x16, 0xb1	// Read CSR
	li x24, -1
	csrrw x8, 0xb1, x24	// Write all 1s to CSR
	csrrw x8, 0xb1, x0	// Write all 0s to CSR
	csrrw x8, 0xb1, x16	// Restore CSR

// Testing CSR 0xb2
	csrr x30, 0xb2	// Read CSR
	li x2, -1
	csrrw x10, 0xb2, x2	// Write all 1s to CSR
	csrrw x10, 0xb2, x0	// Write all 0s to CSR
	csrrw x10, 0xb2, x30	// Restore CSR

// Testing CSR 0xb3
	csrr x6, 0xb3	// Read CSR
	li x28, -1
	csrrw x17, 0xb3, x28	// Write all 1s to CSR
	csrrw x17, 0xb3, x0	// Write all 0s to CSR
	csrrw x17, 0xb3, x6	// Restore CSR

// Testing CSR 0xb4
	csrr x24, 0xb4	// Read CSR
	li x3, -1
	csrrw x10, 0xb4, x3	// Write all 1s to CSR
	csrrw x10, 0xb4, x0	// Write all 0s to CSR
	csrrw x10, 0xb4, x24	// Restore CSR

// Testing CSR 0xb5
	csrr x13, 0xb5	// Read CSR
	li x27, -1
	csrrw x11, 0xb5, x27	// Write all 1s to CSR
	csrrw x11, 0xb5, x0	// Write all 0s to CSR
	csrrw x11, 0xb5, x13	// Restore CSR

// Testing CSR 0xb6
	csrr x10, 0xb6	// Read CSR
	li x14, -1
	csrrw x4, 0xb6, x14	// Write all 1s to CSR
	csrrw x4, 0xb6, x0	// Write all 0s to CSR
	csrrw x4, 0xb6, x10	// Restore CSR

// Testing CSR 0xb7
	csrr x4, 0xb7	// Read CSR
	li x18, -1
	csrrw x30, 0xb7, x18	// Write all 1s to CSR
	csrrw x30, 0xb7, x0	// Write all 0s to CSR
	csrrw x30, 0xb7, x4	// Restore CSR

// Testing CSR 0xb8
	csrr x16, 0xb8	// Read CSR
	li x27, -1
	csrrw x11, 0xb8, x27	// Write all 1s to CSR
	csrrw x11, 0xb8, x0	// Write all 0s to CSR
	csrrw x11, 0xb8, x16	// Restore CSR

// Testing CSR 0xb9
	csrr x26, 0xb9	// Read CSR
	li x4, -1
	csrrw x11, 0xb9, x4	// Write all 1s to CSR
	csrrw x11, 0xb9, x0	// Write all 0s to CSR
	csrrw x11, 0xb9, x26	// Restore CSR

// Testing CSR 0xba
	csrr x16, 0xba	// Read CSR
	li x4, -1
	csrrw x23, 0xba, x4	// Write all 1s to CSR
	csrrw x23, 0xba, x0	// Write all 0s to CSR
	csrrw x23, 0xba, x16	// Restore CSR

// Testing CSR 0xbb
	csrr x16, 0xbb	// Read CSR
	li x14, -1
	csrrw x2, 0xbb, x14	// Write all 1s to CSR
	csrrw x2, 0xbb, x0	// Write all 0s to CSR
	csrrw x2, 0xbb, x16	// Restore CSR

// Testing CSR 0xbc
	csrr x10, 0xbc	// Read CSR
	li x11, -1
	csrrw x24, 0xbc, x11	// Write all 1s to CSR
	csrrw x24, 0xbc, x0	// Write all 0s to CSR
	csrrw x24, 0xbc, x10	// Restore CSR

// Testing CSR 0xbd
	csrr x22, 0xbd	// Read CSR
	li x29, -1
	csrrw x5, 0xbd, x29	// Write all 1s to CSR
	csrrw x5, 0xbd, x0	// Write all 0s to CSR
	csrrw x5, 0xbd, x22	// Restore CSR

// Testing CSR 0xbe
	csrr x30, 0xbe	// Read CSR
	li x6, -1
	csrrw x21, 0xbe, x6	// Write all 1s to CSR
	csrrw x21, 0xbe, x0	// Write all 0s to CSR
	csrrw x21, 0xbe, x30	// Restore CSR

// Testing CSR 0xbf
	csrr x19, 0xbf	// Read CSR
	li x13, -1
	csrrw x26, 0xbf, x13	// Write all 1s to CSR
	csrrw x26, 0xbf, x0	// Write all 0s to CSR
	csrrw x26, 0xbf, x19	// Restore CSR

// Testing CSR 0xc0
	csrr x21, 0xc0	// Read CSR
	li x3, -1
	csrrw x26, 0xc0, x3	// Write all 1s to CSR
	csrrw x26, 0xc0, x0	// Write all 0s to CSR
	csrrw x26, 0xc0, x21	// Restore CSR

// Testing CSR 0xc1
	csrr x3, 0xc1	// Read CSR
	li x7, -1
	csrrw x24, 0xc1, x7	// Write all 1s to CSR
	csrrw x24, 0xc1, x0	// Write all 0s to CSR
	csrrw x24, 0xc1, x3	// Restore CSR

// Testing CSR 0xc2
	csrr x8, 0xc2	// Read CSR
	li x2, -1
	csrrw x13, 0xc2, x2	// Write all 1s to CSR
	csrrw x13, 0xc2, x0	// Write all 0s to CSR
	csrrw x13, 0xc2, x8	// Restore CSR

// Testing CSR 0xc3
	csrr x1, 0xc3	// Read CSR
	li x4, -1
	csrrw x13, 0xc3, x4	// Write all 1s to CSR
	csrrw x13, 0xc3, x0	// Write all 0s to CSR
	csrrw x13, 0xc3, x1	// Restore CSR

// Testing CSR 0xc4
	csrr x18, 0xc4	// Read CSR
	li x17, -1
	csrrw x10, 0xc4, x17	// Write all 1s to CSR
	csrrw x10, 0xc4, x0	// Write all 0s to CSR
	csrrw x10, 0xc4, x18	// Restore CSR

// Testing CSR 0xc5
	csrr x15, 0xc5	// Read CSR
	li x30, -1
	csrrw x16, 0xc5, x30	// Write all 1s to CSR
	csrrw x16, 0xc5, x0	// Write all 0s to CSR
	csrrw x16, 0xc5, x15	// Restore CSR

// Testing CSR 0xc6
	csrr x26, 0xc6	// Read CSR
	li x19, -1
	csrrw x23, 0xc6, x19	// Write all 1s to CSR
	csrrw x23, 0xc6, x0	// Write all 0s to CSR
	csrrw x23, 0xc6, x26	// Restore CSR

// Testing CSR 0xc7
	csrr x22, 0xc7	// Read CSR
	li x7, -1
	csrrw x14, 0xc7, x7	// Write all 1s to CSR
	csrrw x14, 0xc7, x0	// Write all 0s to CSR
	csrrw x14, 0xc7, x22	// Restore CSR

// Testing CSR 0xc8
	csrr x3, 0xc8	// Read CSR
	li x12, -1
	csrrw x8, 0xc8, x12	// Write all 1s to CSR
	csrrw x8, 0xc8, x0	// Write all 0s to CSR
	csrrw x8, 0xc8, x3	// Restore CSR

// Testing CSR 0xc9
	csrr x9, 0xc9	// Read CSR
	li x19, -1
	csrrw x25, 0xc9, x19	// Write all 1s to CSR
	csrrw x25, 0xc9, x0	// Write all 0s to CSR
	csrrw x25, 0xc9, x9	// Restore CSR

// Testing CSR 0xca
	csrr x6, 0xca	// Read CSR
	li x14, -1
	csrrw x7, 0xca, x14	// Write all 1s to CSR
	csrrw x7, 0xca, x0	// Write all 0s to CSR
	csrrw x7, 0xca, x6	// Restore CSR

// Testing CSR 0xcb
	csrr x12, 0xcb	// Read CSR
	li x4, -1
	csrrw x3, 0xcb, x4	// Write all 1s to CSR
	csrrw x3, 0xcb, x0	// Write all 0s to CSR
	csrrw x3, 0xcb, x12	// Restore CSR

// Testing CSR 0xcc
	csrr x27, 0xcc	// Read CSR
	li x28, -1
	csrrw x23, 0xcc, x28	// Write all 1s to CSR
	csrrw x23, 0xcc, x0	// Write all 0s to CSR
	csrrw x23, 0xcc, x27	// Restore CSR

// Testing CSR 0xcd
	csrr x1, 0xcd	// Read CSR
	li x29, -1
	csrrw x17, 0xcd, x29	// Write all 1s to CSR
	csrrw x17, 0xcd, x0	// Write all 0s to CSR
	csrrw x17, 0xcd, x1	// Restore CSR

// Testing CSR 0xce
	csrr x15, 0xce	// Read CSR
	li x25, -1
	csrrw x22, 0xce, x25	// Write all 1s to CSR
	csrrw x22, 0xce, x0	// Write all 0s to CSR
	csrrw x22, 0xce, x15	// Restore CSR

// Testing CSR 0xcf
	csrr x7, 0xcf	// Read CSR
	li x4, -1
	csrrw x16, 0xcf, x4	// Write all 1s to CSR
	csrrw x16, 0xcf, x0	// Write all 0s to CSR
	csrrw x16, 0xcf, x7	// Restore CSR

// Testing CSR 0xd0
	csrr x13, 0xd0	// Read CSR
	li x9, -1
	csrrw x7, 0xd0, x9	// Write all 1s to CSR
	csrrw x7, 0xd0, x0	// Write all 0s to CSR
	csrrw x7, 0xd0, x13	// Restore CSR

// Testing CSR 0xd1
	csrr x21, 0xd1	// Read CSR
	li x2, -1
	csrrw x31, 0xd1, x2	// Write all 1s to CSR
	csrrw x31, 0xd1, x0	// Write all 0s to CSR
	csrrw x31, 0xd1, x21	// Restore CSR

// Testing CSR 0xd2
	csrr x26, 0xd2	// Read CSR
	li x7, -1
	csrrw x20, 0xd2, x7	// Write all 1s to CSR
	csrrw x20, 0xd2, x0	// Write all 0s to CSR
	csrrw x20, 0xd2, x26	// Restore CSR

// Testing CSR 0xd3
	csrr x5, 0xd3	// Read CSR
	li x4, -1
	csrrw x7, 0xd3, x4	// Write all 1s to CSR
	csrrw x7, 0xd3, x0	// Write all 0s to CSR
	csrrw x7, 0xd3, x5	// Restore CSR

// Testing CSR 0xd4
	csrr x15, 0xd4	// Read CSR
	li x13, -1
	csrrw x12, 0xd4, x13	// Write all 1s to CSR
	csrrw x12, 0xd4, x0	// Write all 0s to CSR
	csrrw x12, 0xd4, x15	// Restore CSR

// Testing CSR 0xd5
	csrr x18, 0xd5	// Read CSR
	li x27, -1
	csrrw x5, 0xd5, x27	// Write all 1s to CSR
	csrrw x5, 0xd5, x0	// Write all 0s to CSR
	csrrw x5, 0xd5, x18	// Restore CSR

// Testing CSR 0xd6
	csrr x4, 0xd6	// Read CSR
	li x20, -1
	csrrw x16, 0xd6, x20	// Write all 1s to CSR
	csrrw x16, 0xd6, x0	// Write all 0s to CSR
	csrrw x16, 0xd6, x4	// Restore CSR

// Testing CSR 0xd7
	csrr x5, 0xd7	// Read CSR
	li x19, -1
	csrrw x13, 0xd7, x19	// Write all 1s to CSR
	csrrw x13, 0xd7, x0	// Write all 0s to CSR
	csrrw x13, 0xd7, x5	// Restore CSR

// Testing CSR 0xd8
	csrr x21, 0xd8	// Read CSR
	li x22, -1
	csrrw x14, 0xd8, x22	// Write all 1s to CSR
	csrrw x14, 0xd8, x0	// Write all 0s to CSR
	csrrw x14, 0xd8, x21	// Restore CSR

// Testing CSR 0xd9
	csrr x29, 0xd9	// Read CSR
	li x17, -1
	csrrw x16, 0xd9, x17	// Write all 1s to CSR
	csrrw x16, 0xd9, x0	// Write all 0s to CSR
	csrrw x16, 0xd9, x29	// Restore CSR

// Testing CSR 0xda
	csrr x22, 0xda	// Read CSR
	li x30, -1
	csrrw x29, 0xda, x30	// Write all 1s to CSR
	csrrw x29, 0xda, x0	// Write all 0s to CSR
	csrrw x29, 0xda, x22	// Restore CSR

// Testing CSR 0xdb
	csrr x11, 0xdb	// Read CSR
	li x27, -1
	csrrw x16, 0xdb, x27	// Write all 1s to CSR
	csrrw x16, 0xdb, x0	// Write all 0s to CSR
	csrrw x16, 0xdb, x11	// Restore CSR

// Testing CSR 0xdc
	csrr x16, 0xdc	// Read CSR
	li x21, -1
	csrrw x22, 0xdc, x21	// Write all 1s to CSR
	csrrw x22, 0xdc, x0	// Write all 0s to CSR
	csrrw x22, 0xdc, x16	// Restore CSR

// Testing CSR 0xdd
	csrr x28, 0xdd	// Read CSR
	li x7, -1
	csrrw x18, 0xdd, x7	// Write all 1s to CSR
	csrrw x18, 0xdd, x0	// Write all 0s to CSR
	csrrw x18, 0xdd, x28	// Restore CSR

// Testing CSR 0xde
	csrr x20, 0xde	// Read CSR
	li x30, -1
	csrrw x8, 0xde, x30	// Write all 1s to CSR
	csrrw x8, 0xde, x0	// Write all 0s to CSR
	csrrw x8, 0xde, x20	// Restore CSR

// Testing CSR 0xdf
	csrr x1, 0xdf	// Read CSR
	li x11, -1
	csrrw x23, 0xdf, x11	// Write all 1s to CSR
	csrrw x23, 0xdf, x0	// Write all 0s to CSR
	csrrw x23, 0xdf, x1	// Restore CSR

// Testing CSR 0xe0
	csrr x31, 0xe0	// Read CSR
	li x24, -1
	csrrw x29, 0xe0, x24	// Write all 1s to CSR
	csrrw x29, 0xe0, x0	// Write all 0s to CSR
	csrrw x29, 0xe0, x31	// Restore CSR

// Testing CSR 0xe1
	csrr x11, 0xe1	// Read CSR
	li x27, -1
	csrrw x2, 0xe1, x27	// Write all 1s to CSR
	csrrw x2, 0xe1, x0	// Write all 0s to CSR
	csrrw x2, 0xe1, x11	// Restore CSR

// Testing CSR 0xe2
	csrr x17, 0xe2	// Read CSR
	li x5, -1
	csrrw x28, 0xe2, x5	// Write all 1s to CSR
	csrrw x28, 0xe2, x0	// Write all 0s to CSR
	csrrw x28, 0xe2, x17	// Restore CSR

// Testing CSR 0xe3
	csrr x9, 0xe3	// Read CSR
	li x20, -1
	csrrw x26, 0xe3, x20	// Write all 1s to CSR
	csrrw x26, 0xe3, x0	// Write all 0s to CSR
	csrrw x26, 0xe3, x9	// Restore CSR

// Testing CSR 0xe4
	csrr x5, 0xe4	// Read CSR
	li x27, -1
	csrrw x13, 0xe4, x27	// Write all 1s to CSR
	csrrw x13, 0xe4, x0	// Write all 0s to CSR
	csrrw x13, 0xe4, x5	// Restore CSR

// Testing CSR 0xe5
	csrr x19, 0xe5	// Read CSR
	li x10, -1
	csrrw x23, 0xe5, x10	// Write all 1s to CSR
	csrrw x23, 0xe5, x0	// Write all 0s to CSR
	csrrw x23, 0xe5, x19	// Restore CSR

// Testing CSR 0xe6
	csrr x23, 0xe6	// Read CSR
	li x26, -1
	csrrw x16, 0xe6, x26	// Write all 1s to CSR
	csrrw x16, 0xe6, x0	// Write all 0s to CSR
	csrrw x16, 0xe6, x23	// Restore CSR

// Testing CSR 0xe7
	csrr x3, 0xe7	// Read CSR
	li x26, -1
	csrrw x17, 0xe7, x26	// Write all 1s to CSR
	csrrw x17, 0xe7, x0	// Write all 0s to CSR
	csrrw x17, 0xe7, x3	// Restore CSR

// Testing CSR 0xe8
	csrr x28, 0xe8	// Read CSR
	li x30, -1
	csrrw x2, 0xe8, x30	// Write all 1s to CSR
	csrrw x2, 0xe8, x0	// Write all 0s to CSR
	csrrw x2, 0xe8, x28	// Restore CSR

// Testing CSR 0xe9
	csrr x3, 0xe9	// Read CSR
	li x8, -1
	csrrw x5, 0xe9, x8	// Write all 1s to CSR
	csrrw x5, 0xe9, x0	// Write all 0s to CSR
	csrrw x5, 0xe9, x3	// Restore CSR

// Testing CSR 0xea
	csrr x2, 0xea	// Read CSR
	li x10, -1
	csrrw x1, 0xea, x10	// Write all 1s to CSR
	csrrw x1, 0xea, x0	// Write all 0s to CSR
	csrrw x1, 0xea, x2	// Restore CSR

// Testing CSR 0xeb
	csrr x25, 0xeb	// Read CSR
	li x28, -1
	csrrw x15, 0xeb, x28	// Write all 1s to CSR
	csrrw x15, 0xeb, x0	// Write all 0s to CSR
	csrrw x15, 0xeb, x25	// Restore CSR

// Testing CSR 0xec
	csrr x11, 0xec	// Read CSR
	li x28, -1
	csrrw x6, 0xec, x28	// Write all 1s to CSR
	csrrw x6, 0xec, x0	// Write all 0s to CSR
	csrrw x6, 0xec, x11	// Restore CSR

// Testing CSR 0xed
	csrr x26, 0xed	// Read CSR
	li x5, -1
	csrrw x28, 0xed, x5	// Write all 1s to CSR
	csrrw x28, 0xed, x0	// Write all 0s to CSR
	csrrw x28, 0xed, x26	// Restore CSR

// Testing CSR 0xee
	csrr x21, 0xee	// Read CSR
	li x15, -1
	csrrw x31, 0xee, x15	// Write all 1s to CSR
	csrrw x31, 0xee, x0	// Write all 0s to CSR
	csrrw x31, 0xee, x21	// Restore CSR

// Testing CSR 0xef
	csrr x12, 0xef	// Read CSR
	li x17, -1
	csrrw x13, 0xef, x17	// Write all 1s to CSR
	csrrw x13, 0xef, x0	// Write all 0s to CSR
	csrrw x13, 0xef, x12	// Restore CSR

// Testing CSR 0xf0
	csrr x29, 0xf0	// Read CSR
	li x17, -1
	csrrw x2, 0xf0, x17	// Write all 1s to CSR
	csrrw x2, 0xf0, x0	// Write all 0s to CSR
	csrrw x2, 0xf0, x29	// Restore CSR

// Testing CSR 0xf1
	csrr x19, 0xf1	// Read CSR
	li x3, -1
	csrrw x22, 0xf1, x3	// Write all 1s to CSR
	csrrw x22, 0xf1, x0	// Write all 0s to CSR
	csrrw x22, 0xf1, x19	// Restore CSR

// Testing CSR 0xf2
	csrr x26, 0xf2	// Read CSR
	li x25, -1
	csrrw x17, 0xf2, x25	// Write all 1s to CSR
	csrrw x17, 0xf2, x0	// Write all 0s to CSR
	csrrw x17, 0xf2, x26	// Restore CSR

// Testing CSR 0xf3
	csrr x20, 0xf3	// Read CSR
	li x3, -1
	csrrw x24, 0xf3, x3	// Write all 1s to CSR
	csrrw x24, 0xf3, x0	// Write all 0s to CSR
	csrrw x24, 0xf3, x20	// Restore CSR

// Testing CSR 0xf4
	csrr x14, 0xf4	// Read CSR
	li x29, -1
	csrrw x25, 0xf4, x29	// Write all 1s to CSR
	csrrw x25, 0xf4, x0	// Write all 0s to CSR
	csrrw x25, 0xf4, x14	// Restore CSR

// Testing CSR 0xf5
	csrr x7, 0xf5	// Read CSR
	li x10, -1
	csrrw x18, 0xf5, x10	// Write all 1s to CSR
	csrrw x18, 0xf5, x0	// Write all 0s to CSR
	csrrw x18, 0xf5, x7	// Restore CSR

// Testing CSR 0xf6
	csrr x29, 0xf6	// Read CSR
	li x20, -1
	csrrw x14, 0xf6, x20	// Write all 1s to CSR
	csrrw x14, 0xf6, x0	// Write all 0s to CSR
	csrrw x14, 0xf6, x29	// Restore CSR

// Testing CSR 0xf7
	csrr x27, 0xf7	// Read CSR
	li x16, -1
	csrrw x28, 0xf7, x16	// Write all 1s to CSR
	csrrw x28, 0xf7, x0	// Write all 0s to CSR
	csrrw x28, 0xf7, x27	// Restore CSR

// Testing CSR 0xf8
	csrr x26, 0xf8	// Read CSR
	li x13, -1
	csrrw x20, 0xf8, x13	// Write all 1s to CSR
	csrrw x20, 0xf8, x0	// Write all 0s to CSR
	csrrw x20, 0xf8, x26	// Restore CSR

// Testing CSR 0xf9
	csrr x19, 0xf9	// Read CSR
	li x8, -1
	csrrw x28, 0xf9, x8	// Write all 1s to CSR
	csrrw x28, 0xf9, x0	// Write all 0s to CSR
	csrrw x28, 0xf9, x19	// Restore CSR

// Testing CSR 0xfa
	csrr x28, 0xfa	// Read CSR
	li x26, -1
	csrrw x1, 0xfa, x26	// Write all 1s to CSR
	csrrw x1, 0xfa, x0	// Write all 0s to CSR
	csrrw x1, 0xfa, x28	// Restore CSR

// Testing CSR 0xfb
	csrr x22, 0xfb	// Read CSR
	li x29, -1
	csrrw x1, 0xfb, x29	// Write all 1s to CSR
	csrrw x1, 0xfb, x0	// Write all 0s to CSR
	csrrw x1, 0xfb, x22	// Restore CSR

// Testing CSR 0xfc
	csrr x24, 0xfc	// Read CSR
	li x6, -1
	csrrw x10, 0xfc, x6	// Write all 1s to CSR
	csrrw x10, 0xfc, x0	// Write all 0s to CSR
	csrrw x10, 0xfc, x24	// Restore CSR

// Testing CSR 0xfd
	csrr x17, 0xfd	// Read CSR
	li x19, -1
	csrrw x9, 0xfd, x19	// Write all 1s to CSR
	csrrw x9, 0xfd, x0	// Write all 0s to CSR
	csrrw x9, 0xfd, x17	// Restore CSR

// Testing CSR 0xfe
	csrr x11, 0xfe	// Read CSR
	li x3, -1
	csrrw x16, 0xfe, x3	// Write all 1s to CSR
	csrrw x16, 0xfe, x0	// Write all 0s to CSR
	csrrw x16, 0xfe, x11	// Restore CSR

// Testing CSR 0xff
	csrr x28, 0xff	// Read CSR
	li x9, -1
	csrrw x31, 0xff, x9	// Write all 1s to CSR
	csrrw x31, 0xff, x0	// Write all 0s to CSR
	csrrw x31, 0xff, x28	// Restore CSR

// Testing CSR 0x100
	csrr x27, 0x100	// Read CSR
	li x10, -1
	csrrw x25, 0x100, x10	// Write all 1s to CSR
	csrrw x25, 0x100, x0	// Write all 0s to CSR
	csrrw x25, 0x100, x27	// Restore CSR

// Testing CSR 0x101
	csrr x14, 0x101	// Read CSR
	li x13, -1
	csrrw x26, 0x101, x13	// Write all 1s to CSR
	csrrw x26, 0x101, x0	// Write all 0s to CSR
	csrrw x26, 0x101, x14	// Restore CSR

// Testing CSR 0x102
	csrr x13, 0x102	// Read CSR
	li x2, -1
	csrrw x6, 0x102, x2	// Write all 1s to CSR
	csrrw x6, 0x102, x0	// Write all 0s to CSR
	csrrw x6, 0x102, x13	// Restore CSR

// Testing CSR 0x103
	csrr x21, 0x103	// Read CSR
	li x30, -1
	csrrw x5, 0x103, x30	// Write all 1s to CSR
	csrrw x5, 0x103, x0	// Write all 0s to CSR
	csrrw x5, 0x103, x21	// Restore CSR

// Testing CSR 0x104
	csrr x8, 0x104	// Read CSR
	li x10, -1
	csrrw x24, 0x104, x10	// Write all 1s to CSR
	csrrw x24, 0x104, x0	// Write all 0s to CSR
	csrrw x24, 0x104, x8	// Restore CSR

// Testing CSR 0x105
	csrr x27, 0x105	// Read CSR
	li x11, -1
	csrrw x2, 0x105, x11	// Write all 1s to CSR
	csrrw x2, 0x105, x0	// Write all 0s to CSR
	csrrw x2, 0x105, x27	// Restore CSR

// Testing CSR 0x106
	csrr x31, 0x106	// Read CSR
	li x2, -1
	csrrw x16, 0x106, x2	// Write all 1s to CSR
	csrrw x16, 0x106, x0	// Write all 0s to CSR
	csrrw x16, 0x106, x31	// Restore CSR

// Testing CSR 0x107
	csrr x14, 0x107	// Read CSR
	li x5, -1
	csrrw x16, 0x107, x5	// Write all 1s to CSR
	csrrw x16, 0x107, x0	// Write all 0s to CSR
	csrrw x16, 0x107, x14	// Restore CSR

// Testing CSR 0x108
	csrr x29, 0x108	// Read CSR
	li x28, -1
	csrrw x20, 0x108, x28	// Write all 1s to CSR
	csrrw x20, 0x108, x0	// Write all 0s to CSR
	csrrw x20, 0x108, x29	// Restore CSR

// Testing CSR 0x109
	csrr x23, 0x109	// Read CSR
	li x3, -1
	csrrw x22, 0x109, x3	// Write all 1s to CSR
	csrrw x22, 0x109, x0	// Write all 0s to CSR
	csrrw x22, 0x109, x23	// Restore CSR

// Testing CSR 0x10a
	csrr x23, 0x10a	// Read CSR
	li x5, -1
	csrrw x26, 0x10a, x5	// Write all 1s to CSR
	csrrw x26, 0x10a, x0	// Write all 0s to CSR
	csrrw x26, 0x10a, x23	// Restore CSR

// Testing CSR 0x10b
	csrr x12, 0x10b	// Read CSR
	li x14, -1
	csrrw x2, 0x10b, x14	// Write all 1s to CSR
	csrrw x2, 0x10b, x0	// Write all 0s to CSR
	csrrw x2, 0x10b, x12	// Restore CSR

// Testing CSR 0x10c
	csrr x20, 0x10c	// Read CSR
	li x15, -1
	csrrw x13, 0x10c, x15	// Write all 1s to CSR
	csrrw x13, 0x10c, x0	// Write all 0s to CSR
	csrrw x13, 0x10c, x20	// Restore CSR

// Testing CSR 0x10d
	csrr x15, 0x10d	// Read CSR
	li x2, -1
	csrrw x4, 0x10d, x2	// Write all 1s to CSR
	csrrw x4, 0x10d, x0	// Write all 0s to CSR
	csrrw x4, 0x10d, x15	// Restore CSR

// Testing CSR 0x10e
	csrr x16, 0x10e	// Read CSR
	li x25, -1
	csrrw x5, 0x10e, x25	// Write all 1s to CSR
	csrrw x5, 0x10e, x0	// Write all 0s to CSR
	csrrw x5, 0x10e, x16	// Restore CSR

// Testing CSR 0x10f
	csrr x1, 0x10f	// Read CSR
	li x2, -1
	csrrw x20, 0x10f, x2	// Write all 1s to CSR
	csrrw x20, 0x10f, x0	// Write all 0s to CSR
	csrrw x20, 0x10f, x1	// Restore CSR

// Testing CSR 0x110
	csrr x20, 0x110	// Read CSR
	li x5, -1
	csrrw x21, 0x110, x5	// Write all 1s to CSR
	csrrw x21, 0x110, x0	// Write all 0s to CSR
	csrrw x21, 0x110, x20	// Restore CSR

// Testing CSR 0x111
	csrr x11, 0x111	// Read CSR
	li x4, -1
	csrrw x23, 0x111, x4	// Write all 1s to CSR
	csrrw x23, 0x111, x0	// Write all 0s to CSR
	csrrw x23, 0x111, x11	// Restore CSR

// Testing CSR 0x112
	csrr x18, 0x112	// Read CSR
	li x21, -1
	csrrw x12, 0x112, x21	// Write all 1s to CSR
	csrrw x12, 0x112, x0	// Write all 0s to CSR
	csrrw x12, 0x112, x18	// Restore CSR

// Testing CSR 0x113
	csrr x7, 0x113	// Read CSR
	li x13, -1
	csrrw x26, 0x113, x13	// Write all 1s to CSR
	csrrw x26, 0x113, x0	// Write all 0s to CSR
	csrrw x26, 0x113, x7	// Restore CSR

// Testing CSR 0x114
	csrr x25, 0x114	// Read CSR
	li x4, -1
	csrrw x16, 0x114, x4	// Write all 1s to CSR
	csrrw x16, 0x114, x0	// Write all 0s to CSR
	csrrw x16, 0x114, x25	// Restore CSR

// Testing CSR 0x115
	csrr x29, 0x115	// Read CSR
	li x2, -1
	csrrw x20, 0x115, x2	// Write all 1s to CSR
	csrrw x20, 0x115, x0	// Write all 0s to CSR
	csrrw x20, 0x115, x29	// Restore CSR

// Testing CSR 0x116
	csrr x23, 0x116	// Read CSR
	li x15, -1
	csrrw x20, 0x116, x15	// Write all 1s to CSR
	csrrw x20, 0x116, x0	// Write all 0s to CSR
	csrrw x20, 0x116, x23	// Restore CSR

// Testing CSR 0x117
	csrr x21, 0x117	// Read CSR
	li x30, -1
	csrrw x11, 0x117, x30	// Write all 1s to CSR
	csrrw x11, 0x117, x0	// Write all 0s to CSR
	csrrw x11, 0x117, x21	// Restore CSR

// Testing CSR 0x118
	csrr x21, 0x118	// Read CSR
	li x4, -1
	csrrw x22, 0x118, x4	// Write all 1s to CSR
	csrrw x22, 0x118, x0	// Write all 0s to CSR
	csrrw x22, 0x118, x21	// Restore CSR

// Testing CSR 0x119
	csrr x23, 0x119	// Read CSR
	li x20, -1
	csrrw x10, 0x119, x20	// Write all 1s to CSR
	csrrw x10, 0x119, x0	// Write all 0s to CSR
	csrrw x10, 0x119, x23	// Restore CSR

// Testing CSR 0x11a
	csrr x26, 0x11a	// Read CSR
	li x28, -1
	csrrw x5, 0x11a, x28	// Write all 1s to CSR
	csrrw x5, 0x11a, x0	// Write all 0s to CSR
	csrrw x5, 0x11a, x26	// Restore CSR

// Testing CSR 0x11b
	csrr x31, 0x11b	// Read CSR
	li x30, -1
	csrrw x13, 0x11b, x30	// Write all 1s to CSR
	csrrw x13, 0x11b, x0	// Write all 0s to CSR
	csrrw x13, 0x11b, x31	// Restore CSR

// Testing CSR 0x11c
	csrr x26, 0x11c	// Read CSR
	li x10, -1
	csrrw x30, 0x11c, x10	// Write all 1s to CSR
	csrrw x30, 0x11c, x0	// Write all 0s to CSR
	csrrw x30, 0x11c, x26	// Restore CSR

// Testing CSR 0x11d
	csrr x24, 0x11d	// Read CSR
	li x28, -1
	csrrw x31, 0x11d, x28	// Write all 1s to CSR
	csrrw x31, 0x11d, x0	// Write all 0s to CSR
	csrrw x31, 0x11d, x24	// Restore CSR

// Testing CSR 0x11e
	csrr x22, 0x11e	// Read CSR
	li x26, -1
	csrrw x4, 0x11e, x26	// Write all 1s to CSR
	csrrw x4, 0x11e, x0	// Write all 0s to CSR
	csrrw x4, 0x11e, x22	// Restore CSR

// Testing CSR 0x11f
	csrr x17, 0x11f	// Read CSR
	li x28, -1
	csrrw x26, 0x11f, x28	// Write all 1s to CSR
	csrrw x26, 0x11f, x0	// Write all 0s to CSR
	csrrw x26, 0x11f, x17	// Restore CSR

// Testing CSR 0x120
	csrr x7, 0x120	// Read CSR
	li x2, -1
	csrrw x26, 0x120, x2	// Write all 1s to CSR
	csrrw x26, 0x120, x0	// Write all 0s to CSR
	csrrw x26, 0x120, x7	// Restore CSR

// Testing CSR 0x121
	csrr x13, 0x121	// Read CSR
	li x15, -1
	csrrw x12, 0x121, x15	// Write all 1s to CSR
	csrrw x12, 0x121, x0	// Write all 0s to CSR
	csrrw x12, 0x121, x13	// Restore CSR

// Testing CSR 0x122
	csrr x25, 0x122	// Read CSR
	li x7, -1
	csrrw x15, 0x122, x7	// Write all 1s to CSR
	csrrw x15, 0x122, x0	// Write all 0s to CSR
	csrrw x15, 0x122, x25	// Restore CSR

// Testing CSR 0x123
	csrr x12, 0x123	// Read CSR
	li x26, -1
	csrrw x21, 0x123, x26	// Write all 1s to CSR
	csrrw x21, 0x123, x0	// Write all 0s to CSR
	csrrw x21, 0x123, x12	// Restore CSR

// Testing CSR 0x124
	csrr x3, 0x124	// Read CSR
	li x31, -1
	csrrw x2, 0x124, x31	// Write all 1s to CSR
	csrrw x2, 0x124, x0	// Write all 0s to CSR
	csrrw x2, 0x124, x3	// Restore CSR

// Testing CSR 0x125
	csrr x29, 0x125	// Read CSR
	li x30, -1
	csrrw x2, 0x125, x30	// Write all 1s to CSR
	csrrw x2, 0x125, x0	// Write all 0s to CSR
	csrrw x2, 0x125, x29	// Restore CSR

// Testing CSR 0x126
	csrr x16, 0x126	// Read CSR
	li x9, -1
	csrrw x29, 0x126, x9	// Write all 1s to CSR
	csrrw x29, 0x126, x0	// Write all 0s to CSR
	csrrw x29, 0x126, x16	// Restore CSR

// Testing CSR 0x127
	csrr x1, 0x127	// Read CSR
	li x31, -1
	csrrw x17, 0x127, x31	// Write all 1s to CSR
	csrrw x17, 0x127, x0	// Write all 0s to CSR
	csrrw x17, 0x127, x1	// Restore CSR

// Testing CSR 0x128
	csrr x22, 0x128	// Read CSR
	li x19, -1
	csrrw x29, 0x128, x19	// Write all 1s to CSR
	csrrw x29, 0x128, x0	// Write all 0s to CSR
	csrrw x29, 0x128, x22	// Restore CSR

// Testing CSR 0x129
	csrr x7, 0x129	// Read CSR
	li x8, -1
	csrrw x3, 0x129, x8	// Write all 1s to CSR
	csrrw x3, 0x129, x0	// Write all 0s to CSR
	csrrw x3, 0x129, x7	// Restore CSR

// Testing CSR 0x12a
	csrr x25, 0x12a	// Read CSR
	li x27, -1
	csrrw x29, 0x12a, x27	// Write all 1s to CSR
	csrrw x29, 0x12a, x0	// Write all 0s to CSR
	csrrw x29, 0x12a, x25	// Restore CSR

// Testing CSR 0x12b
	csrr x29, 0x12b	// Read CSR
	li x21, -1
	csrrw x25, 0x12b, x21	// Write all 1s to CSR
	csrrw x25, 0x12b, x0	// Write all 0s to CSR
	csrrw x25, 0x12b, x29	// Restore CSR

// Testing CSR 0x12c
	csrr x17, 0x12c	// Read CSR
	li x23, -1
	csrrw x14, 0x12c, x23	// Write all 1s to CSR
	csrrw x14, 0x12c, x0	// Write all 0s to CSR
	csrrw x14, 0x12c, x17	// Restore CSR

// Testing CSR 0x12d
	csrr x17, 0x12d	// Read CSR
	li x10, -1
	csrrw x31, 0x12d, x10	// Write all 1s to CSR
	csrrw x31, 0x12d, x0	// Write all 0s to CSR
	csrrw x31, 0x12d, x17	// Restore CSR

// Testing CSR 0x12e
	csrr x4, 0x12e	// Read CSR
	li x5, -1
	csrrw x14, 0x12e, x5	// Write all 1s to CSR
	csrrw x14, 0x12e, x0	// Write all 0s to CSR
	csrrw x14, 0x12e, x4	// Restore CSR

// Testing CSR 0x12f
	csrr x29, 0x12f	// Read CSR
	li x19, -1
	csrrw x14, 0x12f, x19	// Write all 1s to CSR
	csrrw x14, 0x12f, x0	// Write all 0s to CSR
	csrrw x14, 0x12f, x29	// Restore CSR

// Testing CSR 0x130
	csrr x30, 0x130	// Read CSR
	li x3, -1
	csrrw x4, 0x130, x3	// Write all 1s to CSR
	csrrw x4, 0x130, x0	// Write all 0s to CSR
	csrrw x4, 0x130, x30	// Restore CSR

// Testing CSR 0x131
	csrr x14, 0x131	// Read CSR
	li x3, -1
	csrrw x4, 0x131, x3	// Write all 1s to CSR
	csrrw x4, 0x131, x0	// Write all 0s to CSR
	csrrw x4, 0x131, x14	// Restore CSR

// Testing CSR 0x132
	csrr x14, 0x132	// Read CSR
	li x25, -1
	csrrw x5, 0x132, x25	// Write all 1s to CSR
	csrrw x5, 0x132, x0	// Write all 0s to CSR
	csrrw x5, 0x132, x14	// Restore CSR

// Testing CSR 0x133
	csrr x24, 0x133	// Read CSR
	li x31, -1
	csrrw x1, 0x133, x31	// Write all 1s to CSR
	csrrw x1, 0x133, x0	// Write all 0s to CSR
	csrrw x1, 0x133, x24	// Restore CSR

// Testing CSR 0x134
	csrr x26, 0x134	// Read CSR
	li x15, -1
	csrrw x14, 0x134, x15	// Write all 1s to CSR
	csrrw x14, 0x134, x0	// Write all 0s to CSR
	csrrw x14, 0x134, x26	// Restore CSR

// Testing CSR 0x135
	csrr x22, 0x135	// Read CSR
	li x14, -1
	csrrw x1, 0x135, x14	// Write all 1s to CSR
	csrrw x1, 0x135, x0	// Write all 0s to CSR
	csrrw x1, 0x135, x22	// Restore CSR

// Testing CSR 0x136
	csrr x16, 0x136	// Read CSR
	li x30, -1
	csrrw x28, 0x136, x30	// Write all 1s to CSR
	csrrw x28, 0x136, x0	// Write all 0s to CSR
	csrrw x28, 0x136, x16	// Restore CSR

// Testing CSR 0x137
	csrr x31, 0x137	// Read CSR
	li x11, -1
	csrrw x24, 0x137, x11	// Write all 1s to CSR
	csrrw x24, 0x137, x0	// Write all 0s to CSR
	csrrw x24, 0x137, x31	// Restore CSR

// Testing CSR 0x138
	csrr x9, 0x138	// Read CSR
	li x3, -1
	csrrw x12, 0x138, x3	// Write all 1s to CSR
	csrrw x12, 0x138, x0	// Write all 0s to CSR
	csrrw x12, 0x138, x9	// Restore CSR

// Testing CSR 0x139
	csrr x3, 0x139	// Read CSR
	li x4, -1
	csrrw x12, 0x139, x4	// Write all 1s to CSR
	csrrw x12, 0x139, x0	// Write all 0s to CSR
	csrrw x12, 0x139, x3	// Restore CSR

// Testing CSR 0x13a
	csrr x23, 0x13a	// Read CSR
	li x1, -1
	csrrw x12, 0x13a, x1	// Write all 1s to CSR
	csrrw x12, 0x13a, x0	// Write all 0s to CSR
	csrrw x12, 0x13a, x23	// Restore CSR

// Testing CSR 0x13b
	csrr x12, 0x13b	// Read CSR
	li x6, -1
	csrrw x1, 0x13b, x6	// Write all 1s to CSR
	csrrw x1, 0x13b, x0	// Write all 0s to CSR
	csrrw x1, 0x13b, x12	// Restore CSR

// Testing CSR 0x13c
	csrr x27, 0x13c	// Read CSR
	li x8, -1
	csrrw x12, 0x13c, x8	// Write all 1s to CSR
	csrrw x12, 0x13c, x0	// Write all 0s to CSR
	csrrw x12, 0x13c, x27	// Restore CSR

// Testing CSR 0x13d
	csrr x3, 0x13d	// Read CSR
	li x20, -1
	csrrw x29, 0x13d, x20	// Write all 1s to CSR
	csrrw x29, 0x13d, x0	// Write all 0s to CSR
	csrrw x29, 0x13d, x3	// Restore CSR

// Testing CSR 0x13e
	csrr x5, 0x13e	// Read CSR
	li x7, -1
	csrrw x1, 0x13e, x7	// Write all 1s to CSR
	csrrw x1, 0x13e, x0	// Write all 0s to CSR
	csrrw x1, 0x13e, x5	// Restore CSR

// Testing CSR 0x13f
	csrr x7, 0x13f	// Read CSR
	li x22, -1
	csrrw x24, 0x13f, x22	// Write all 1s to CSR
	csrrw x24, 0x13f, x0	// Write all 0s to CSR
	csrrw x24, 0x13f, x7	// Restore CSR

// Testing CSR 0x140
	csrr x31, 0x140	// Read CSR
	li x29, -1
	csrrw x4, 0x140, x29	// Write all 1s to CSR
	csrrw x4, 0x140, x0	// Write all 0s to CSR
	csrrw x4, 0x140, x31	// Restore CSR

// Testing CSR 0x141
	csrr x24, 0x141	// Read CSR
	li x1, -1
	csrrw x10, 0x141, x1	// Write all 1s to CSR
	csrrw x10, 0x141, x0	// Write all 0s to CSR
	csrrw x10, 0x141, x24	// Restore CSR

// Testing CSR 0x143
	csrr x12, 0x143	// Read CSR
	li x23, -1
	csrrw x1, 0x143, x23	// Write all 1s to CSR
	csrrw x1, 0x143, x0	// Write all 0s to CSR
	csrrw x1, 0x143, x12	// Restore CSR

// Testing CSR 0x143
	csrr x30, 0x143	// Read CSR
	li x20, -1
	csrrw x8, 0x143, x20	// Write all 1s to CSR
	csrrw x8, 0x143, x0	// Write all 0s to CSR
	csrrw x8, 0x143, x30	// Restore CSR

// Testing CSR 0x144
	csrr x28, 0x144	// Read CSR
	li x5, -1
	csrrw x6, 0x144, x5	// Write all 1s to CSR
	csrrw x6, 0x144, x0	// Write all 0s to CSR
	csrrw x6, 0x144, x28	// Restore CSR

// Testing CSR 0x145
	csrr x15, 0x145	// Read CSR
	li x4, -1
	csrrw x16, 0x145, x4	// Write all 1s to CSR
	csrrw x16, 0x145, x0	// Write all 0s to CSR
	csrrw x16, 0x145, x15	// Restore CSR

// Testing CSR 0x146
	csrr x12, 0x146	// Read CSR
	li x23, -1
	csrrw x31, 0x146, x23	// Write all 1s to CSR
	csrrw x31, 0x146, x0	// Write all 0s to CSR
	csrrw x31, 0x146, x12	// Restore CSR

// Testing CSR 0x147
	csrr x9, 0x147	// Read CSR
	li x5, -1
	csrrw x1, 0x147, x5	// Write all 1s to CSR
	csrrw x1, 0x147, x0	// Write all 0s to CSR
	csrrw x1, 0x147, x9	// Restore CSR

// Testing CSR 0x148
	csrr x31, 0x148	// Read CSR
	li x7, -1
	csrrw x12, 0x148, x7	// Write all 1s to CSR
	csrrw x12, 0x148, x0	// Write all 0s to CSR
	csrrw x12, 0x148, x31	// Restore CSR

// Testing CSR 0x149
	csrr x11, 0x149	// Read CSR
	li x16, -1
	csrrw x31, 0x149, x16	// Write all 1s to CSR
	csrrw x31, 0x149, x0	// Write all 0s to CSR
	csrrw x31, 0x149, x11	// Restore CSR

// Testing CSR 0x14a
	csrr x10, 0x14a	// Read CSR
	li x29, -1
	csrrw x30, 0x14a, x29	// Write all 1s to CSR
	csrrw x30, 0x14a, x0	// Write all 0s to CSR
	csrrw x30, 0x14a, x10	// Restore CSR

// Testing CSR 0x14b
	csrr x31, 0x14b	// Read CSR
	li x18, -1
	csrrw x21, 0x14b, x18	// Write all 1s to CSR
	csrrw x21, 0x14b, x0	// Write all 0s to CSR
	csrrw x21, 0x14b, x31	// Restore CSR

// Testing CSR 0x14c
	csrr x11, 0x14c	// Read CSR
	li x6, -1
	csrrw x19, 0x14c, x6	// Write all 1s to CSR
	csrrw x19, 0x14c, x0	// Write all 0s to CSR
	csrrw x19, 0x14c, x11	// Restore CSR

// Testing CSR 0x14d
	csrr x3, 0x14d	// Read CSR
	li x4, -1
	csrrw x18, 0x14d, x4	// Write all 1s to CSR
	csrrw x18, 0x14d, x0	// Write all 0s to CSR
	csrrw x18, 0x14d, x3	// Restore CSR

// Testing CSR 0x14e
	csrr x19, 0x14e	// Read CSR
	li x10, -1
	csrrw x6, 0x14e, x10	// Write all 1s to CSR
	csrrw x6, 0x14e, x0	// Write all 0s to CSR
	csrrw x6, 0x14e, x19	// Restore CSR

// Testing CSR 0x14f
	csrr x13, 0x14f	// Read CSR
	li x29, -1
	csrrw x5, 0x14f, x29	// Write all 1s to CSR
	csrrw x5, 0x14f, x0	// Write all 0s to CSR
	csrrw x5, 0x14f, x13	// Restore CSR

// Testing CSR 0x150
	csrr x31, 0x150	// Read CSR
	li x5, -1
	csrrw x26, 0x150, x5	// Write all 1s to CSR
	csrrw x26, 0x150, x0	// Write all 0s to CSR
	csrrw x26, 0x150, x31	// Restore CSR

// Testing CSR 0x151
	csrr x8, 0x151	// Read CSR
	li x11, -1
	csrrw x17, 0x151, x11	// Write all 1s to CSR
	csrrw x17, 0x151, x0	// Write all 0s to CSR
	csrrw x17, 0x151, x8	// Restore CSR

// Testing CSR 0x152
	csrr x8, 0x152	// Read CSR
	li x6, -1
	csrrw x25, 0x152, x6	// Write all 1s to CSR
	csrrw x25, 0x152, x0	// Write all 0s to CSR
	csrrw x25, 0x152, x8	// Restore CSR

// Testing CSR 0x153
	csrr x10, 0x153	// Read CSR
	li x12, -1
	csrrw x14, 0x153, x12	// Write all 1s to CSR
	csrrw x14, 0x153, x0	// Write all 0s to CSR
	csrrw x14, 0x153, x10	// Restore CSR

// Testing CSR 0x154
	csrr x22, 0x154	// Read CSR
	li x2, -1
	csrrw x28, 0x154, x2	// Write all 1s to CSR
	csrrw x28, 0x154, x0	// Write all 0s to CSR
	csrrw x28, 0x154, x22	// Restore CSR

// Testing CSR 0x155
	csrr x5, 0x155	// Read CSR
	li x20, -1
	csrrw x1, 0x155, x20	// Write all 1s to CSR
	csrrw x1, 0x155, x0	// Write all 0s to CSR
	csrrw x1, 0x155, x5	// Restore CSR

// Testing CSR 0x156
	csrr x13, 0x156	// Read CSR
	li x3, -1
	csrrw x23, 0x156, x3	// Write all 1s to CSR
	csrrw x23, 0x156, x0	// Write all 0s to CSR
	csrrw x23, 0x156, x13	// Restore CSR

// Testing CSR 0x157
	csrr x3, 0x157	// Read CSR
	li x5, -1
	csrrw x14, 0x157, x5	// Write all 1s to CSR
	csrrw x14, 0x157, x0	// Write all 0s to CSR
	csrrw x14, 0x157, x3	// Restore CSR

// Testing CSR 0x158
	csrr x10, 0x158	// Read CSR
	li x18, -1
	csrrw x14, 0x158, x18	// Write all 1s to CSR
	csrrw x14, 0x158, x0	// Write all 0s to CSR
	csrrw x14, 0x158, x10	// Restore CSR

// Testing CSR 0x159
	csrr x24, 0x159	// Read CSR
	li x30, -1
	csrrw x5, 0x159, x30	// Write all 1s to CSR
	csrrw x5, 0x159, x0	// Write all 0s to CSR
	csrrw x5, 0x159, x24	// Restore CSR

// Testing CSR 0x15a
	csrr x19, 0x15a	// Read CSR
	li x14, -1
	csrrw x10, 0x15a, x14	// Write all 1s to CSR
	csrrw x10, 0x15a, x0	// Write all 0s to CSR
	csrrw x10, 0x15a, x19	// Restore CSR

// Testing CSR 0x15b
	csrr x21, 0x15b	// Read CSR
	li x12, -1
	csrrw x3, 0x15b, x12	// Write all 1s to CSR
	csrrw x3, 0x15b, x0	// Write all 0s to CSR
	csrrw x3, 0x15b, x21	// Restore CSR

// Testing CSR 0x15c
	csrr x8, 0x15c	// Read CSR
	li x15, -1
	csrrw x21, 0x15c, x15	// Write all 1s to CSR
	csrrw x21, 0x15c, x0	// Write all 0s to CSR
	csrrw x21, 0x15c, x8	// Restore CSR

// Testing CSR 0x15d
	csrr x12, 0x15d	// Read CSR
	li x21, -1
	csrrw x31, 0x15d, x21	// Write all 1s to CSR
	csrrw x31, 0x15d, x0	// Write all 0s to CSR
	csrrw x31, 0x15d, x12	// Restore CSR

// Testing CSR 0x15e
	csrr x17, 0x15e	// Read CSR
	li x2, -1
	csrrw x13, 0x15e, x2	// Write all 1s to CSR
	csrrw x13, 0x15e, x0	// Write all 0s to CSR
	csrrw x13, 0x15e, x17	// Restore CSR

// Testing CSR 0x15f
	csrr x14, 0x15f	// Read CSR
	li x1, -1
	csrrw x31, 0x15f, x1	// Write all 1s to CSR
	csrrw x31, 0x15f, x0	// Write all 0s to CSR
	csrrw x31, 0x15f, x14	// Restore CSR

// Testing CSR 0x160
	csrr x24, 0x160	// Read CSR
	li x29, -1
	csrrw x11, 0x160, x29	// Write all 1s to CSR
	csrrw x11, 0x160, x0	// Write all 0s to CSR
	csrrw x11, 0x160, x24	// Restore CSR

// Testing CSR 0x161
	csrr x15, 0x161	// Read CSR
	li x7, -1
	csrrw x12, 0x161, x7	// Write all 1s to CSR
	csrrw x12, 0x161, x0	// Write all 0s to CSR
	csrrw x12, 0x161, x15	// Restore CSR

// Testing CSR 0x162
	csrr x10, 0x162	// Read CSR
	li x31, -1
	csrrw x16, 0x162, x31	// Write all 1s to CSR
	csrrw x16, 0x162, x0	// Write all 0s to CSR
	csrrw x16, 0x162, x10	// Restore CSR

// Testing CSR 0x163
	csrr x3, 0x163	// Read CSR
	li x31, -1
	csrrw x6, 0x163, x31	// Write all 1s to CSR
	csrrw x6, 0x163, x0	// Write all 0s to CSR
	csrrw x6, 0x163, x3	// Restore CSR

// Testing CSR 0x164
	csrr x26, 0x164	// Read CSR
	li x4, -1
	csrrw x9, 0x164, x4	// Write all 1s to CSR
	csrrw x9, 0x164, x0	// Write all 0s to CSR
	csrrw x9, 0x164, x26	// Restore CSR

// Testing CSR 0x165
	csrr x4, 0x165	// Read CSR
	li x18, -1
	csrrw x20, 0x165, x18	// Write all 1s to CSR
	csrrw x20, 0x165, x0	// Write all 0s to CSR
	csrrw x20, 0x165, x4	// Restore CSR

// Testing CSR 0x166
	csrr x23, 0x166	// Read CSR
	li x5, -1
	csrrw x26, 0x166, x5	// Write all 1s to CSR
	csrrw x26, 0x166, x0	// Write all 0s to CSR
	csrrw x26, 0x166, x23	// Restore CSR

// Testing CSR 0x167
	csrr x23, 0x167	// Read CSR
	li x15, -1
	csrrw x30, 0x167, x15	// Write all 1s to CSR
	csrrw x30, 0x167, x0	// Write all 0s to CSR
	csrrw x30, 0x167, x23	// Restore CSR

// Testing CSR 0x168
	csrr x13, 0x168	// Read CSR
	li x6, -1
	csrrw x25, 0x168, x6	// Write all 1s to CSR
	csrrw x25, 0x168, x0	// Write all 0s to CSR
	csrrw x25, 0x168, x13	// Restore CSR

// Testing CSR 0x169
	csrr x14, 0x169	// Read CSR
	li x8, -1
	csrrw x6, 0x169, x8	// Write all 1s to CSR
	csrrw x6, 0x169, x0	// Write all 0s to CSR
	csrrw x6, 0x169, x14	// Restore CSR

// Testing CSR 0x16a
	csrr x31, 0x16a	// Read CSR
	li x15, -1
	csrrw x11, 0x16a, x15	// Write all 1s to CSR
	csrrw x11, 0x16a, x0	// Write all 0s to CSR
	csrrw x11, 0x16a, x31	// Restore CSR

// Testing CSR 0x16b
	csrr x30, 0x16b	// Read CSR
	li x17, -1
	csrrw x5, 0x16b, x17	// Write all 1s to CSR
	csrrw x5, 0x16b, x0	// Write all 0s to CSR
	csrrw x5, 0x16b, x30	// Restore CSR

// Testing CSR 0x16c
	csrr x12, 0x16c	// Read CSR
	li x15, -1
	csrrw x21, 0x16c, x15	// Write all 1s to CSR
	csrrw x21, 0x16c, x0	// Write all 0s to CSR
	csrrw x21, 0x16c, x12	// Restore CSR

// Testing CSR 0x16d
	csrr x21, 0x16d	// Read CSR
	li x3, -1
	csrrw x16, 0x16d, x3	// Write all 1s to CSR
	csrrw x16, 0x16d, x0	// Write all 0s to CSR
	csrrw x16, 0x16d, x21	// Restore CSR

// Testing CSR 0x16e
	csrr x25, 0x16e	// Read CSR
	li x7, -1
	csrrw x10, 0x16e, x7	// Write all 1s to CSR
	csrrw x10, 0x16e, x0	// Write all 0s to CSR
	csrrw x10, 0x16e, x25	// Restore CSR

// Testing CSR 0x16f
	csrr x1, 0x16f	// Read CSR
	li x27, -1
	csrrw x23, 0x16f, x27	// Write all 1s to CSR
	csrrw x23, 0x16f, x0	// Write all 0s to CSR
	csrrw x23, 0x16f, x1	// Restore CSR

// Testing CSR 0x170
	csrr x15, 0x170	// Read CSR
	li x20, -1
	csrrw x1, 0x170, x20	// Write all 1s to CSR
	csrrw x1, 0x170, x0	// Write all 0s to CSR
	csrrw x1, 0x170, x15	// Restore CSR

// Testing CSR 0x171
	csrr x7, 0x171	// Read CSR
	li x10, -1
	csrrw x4, 0x171, x10	// Write all 1s to CSR
	csrrw x4, 0x171, x0	// Write all 0s to CSR
	csrrw x4, 0x171, x7	// Restore CSR

// Testing CSR 0x172
	csrr x25, 0x172	// Read CSR
	li x21, -1
	csrrw x10, 0x172, x21	// Write all 1s to CSR
	csrrw x10, 0x172, x0	// Write all 0s to CSR
	csrrw x10, 0x172, x25	// Restore CSR

// Testing CSR 0x173
	csrr x18, 0x173	// Read CSR
	li x20, -1
	csrrw x5, 0x173, x20	// Write all 1s to CSR
	csrrw x5, 0x173, x0	// Write all 0s to CSR
	csrrw x5, 0x173, x18	// Restore CSR

// Testing CSR 0x174
	csrr x14, 0x174	// Read CSR
	li x23, -1
	csrrw x25, 0x174, x23	// Write all 1s to CSR
	csrrw x25, 0x174, x0	// Write all 0s to CSR
	csrrw x25, 0x174, x14	// Restore CSR

// Testing CSR 0x175
	csrr x16, 0x175	// Read CSR
	li x3, -1
	csrrw x22, 0x175, x3	// Write all 1s to CSR
	csrrw x22, 0x175, x0	// Write all 0s to CSR
	csrrw x22, 0x175, x16	// Restore CSR

// Testing CSR 0x176
	csrr x16, 0x176	// Read CSR
	li x25, -1
	csrrw x31, 0x176, x25	// Write all 1s to CSR
	csrrw x31, 0x176, x0	// Write all 0s to CSR
	csrrw x31, 0x176, x16	// Restore CSR

// Testing CSR 0x177
	csrr x8, 0x177	// Read CSR
	li x18, -1
	csrrw x25, 0x177, x18	// Write all 1s to CSR
	csrrw x25, 0x177, x0	// Write all 0s to CSR
	csrrw x25, 0x177, x8	// Restore CSR

// Testing CSR 0x178
	csrr x13, 0x178	// Read CSR
	li x9, -1
	csrrw x21, 0x178, x9	// Write all 1s to CSR
	csrrw x21, 0x178, x0	// Write all 0s to CSR
	csrrw x21, 0x178, x13	// Restore CSR

// Testing CSR 0x179
	csrr x1, 0x179	// Read CSR
	li x4, -1
	csrrw x9, 0x179, x4	// Write all 1s to CSR
	csrrw x9, 0x179, x0	// Write all 0s to CSR
	csrrw x9, 0x179, x1	// Restore CSR

// Testing CSR 0x17a
	csrr x29, 0x17a	// Read CSR
	li x22, -1
	csrrw x2, 0x17a, x22	// Write all 1s to CSR
	csrrw x2, 0x17a, x0	// Write all 0s to CSR
	csrrw x2, 0x17a, x29	// Restore CSR

// Testing CSR 0x17b
	csrr x1, 0x17b	// Read CSR
	li x9, -1
	csrrw x13, 0x17b, x9	// Write all 1s to CSR
	csrrw x13, 0x17b, x0	// Write all 0s to CSR
	csrrw x13, 0x17b, x1	// Restore CSR

// Testing CSR 0x17c
	csrr x17, 0x17c	// Read CSR
	li x29, -1
	csrrw x19, 0x17c, x29	// Write all 1s to CSR
	csrrw x19, 0x17c, x0	// Write all 0s to CSR
	csrrw x19, 0x17c, x17	// Restore CSR

// Testing CSR 0x17d
	csrr x23, 0x17d	// Read CSR
	li x13, -1
	csrrw x15, 0x17d, x13	// Write all 1s to CSR
	csrrw x15, 0x17d, x0	// Write all 0s to CSR
	csrrw x15, 0x17d, x23	// Restore CSR

// Testing CSR 0x17e
	csrr x4, 0x17e	// Read CSR
	li x24, -1
	csrrw x9, 0x17e, x24	// Write all 1s to CSR
	csrrw x9, 0x17e, x0	// Write all 0s to CSR
	csrrw x9, 0x17e, x4	// Restore CSR

// Testing CSR 0x17f
	csrr x12, 0x17f	// Read CSR
	li x10, -1
	csrrw x28, 0x17f, x10	// Write all 1s to CSR
	csrrw x28, 0x17f, x0	// Write all 0s to CSR
	csrrw x28, 0x17f, x12	// Restore CSR

// Testing CSR 0x180
	csrr x25, 0x180	// Read CSR
	li x22, -1
	csrrw x30, 0x180, x22	// Write all 1s to CSR
	csrrw x30, 0x180, x0	// Write all 0s to CSR
	csrrw x30, 0x180, x25	// Restore CSR

// Testing CSR 0x181
	csrr x7, 0x181	// Read CSR
	li x20, -1
	csrrw x3, 0x181, x20	// Write all 1s to CSR
	csrrw x3, 0x181, x0	// Write all 0s to CSR
	csrrw x3, 0x181, x7	// Restore CSR

// Testing CSR 0x182
	csrr x2, 0x182	// Read CSR
	li x3, -1
	csrrw x26, 0x182, x3	// Write all 1s to CSR
	csrrw x26, 0x182, x0	// Write all 0s to CSR
	csrrw x26, 0x182, x2	// Restore CSR

// Testing CSR 0x183
	csrr x9, 0x183	// Read CSR
	li x10, -1
	csrrw x18, 0x183, x10	// Write all 1s to CSR
	csrrw x18, 0x183, x0	// Write all 0s to CSR
	csrrw x18, 0x183, x9	// Restore CSR

// Testing CSR 0x184
	csrr x11, 0x184	// Read CSR
	li x4, -1
	csrrw x17, 0x184, x4	// Write all 1s to CSR
	csrrw x17, 0x184, x0	// Write all 0s to CSR
	csrrw x17, 0x184, x11	// Restore CSR

// Testing CSR 0x185
	csrr x28, 0x185	// Read CSR
	li x8, -1
	csrrw x29, 0x185, x8	// Write all 1s to CSR
	csrrw x29, 0x185, x0	// Write all 0s to CSR
	csrrw x29, 0x185, x28	// Restore CSR

// Testing CSR 0x186
	csrr x30, 0x186	// Read CSR
	li x25, -1
	csrrw x6, 0x186, x25	// Write all 1s to CSR
	csrrw x6, 0x186, x0	// Write all 0s to CSR
	csrrw x6, 0x186, x30	// Restore CSR

// Testing CSR 0x187
	csrr x3, 0x187	// Read CSR
	li x14, -1
	csrrw x28, 0x187, x14	// Write all 1s to CSR
	csrrw x28, 0x187, x0	// Write all 0s to CSR
	csrrw x28, 0x187, x3	// Restore CSR

// Testing CSR 0x188
	csrr x10, 0x188	// Read CSR
	li x5, -1
	csrrw x17, 0x188, x5	// Write all 1s to CSR
	csrrw x17, 0x188, x0	// Write all 0s to CSR
	csrrw x17, 0x188, x10	// Restore CSR

// Testing CSR 0x189
	csrr x19, 0x189	// Read CSR
	li x17, -1
	csrrw x21, 0x189, x17	// Write all 1s to CSR
	csrrw x21, 0x189, x0	// Write all 0s to CSR
	csrrw x21, 0x189, x19	// Restore CSR

// Testing CSR 0x18a
	csrr x7, 0x18a	// Read CSR
	li x18, -1
	csrrw x4, 0x18a, x18	// Write all 1s to CSR
	csrrw x4, 0x18a, x0	// Write all 0s to CSR
	csrrw x4, 0x18a, x7	// Restore CSR

// Testing CSR 0x18b
	csrr x14, 0x18b	// Read CSR
	li x31, -1
	csrrw x21, 0x18b, x31	// Write all 1s to CSR
	csrrw x21, 0x18b, x0	// Write all 0s to CSR
	csrrw x21, 0x18b, x14	// Restore CSR

// Testing CSR 0x18c
	csrr x18, 0x18c	// Read CSR
	li x13, -1
	csrrw x24, 0x18c, x13	// Write all 1s to CSR
	csrrw x24, 0x18c, x0	// Write all 0s to CSR
	csrrw x24, 0x18c, x18	// Restore CSR

// Testing CSR 0x18d
	csrr x25, 0x18d	// Read CSR
	li x29, -1
	csrrw x26, 0x18d, x29	// Write all 1s to CSR
	csrrw x26, 0x18d, x0	// Write all 0s to CSR
	csrrw x26, 0x18d, x25	// Restore CSR

// Testing CSR 0x18e
	csrr x9, 0x18e	// Read CSR
	li x10, -1
	csrrw x15, 0x18e, x10	// Write all 1s to CSR
	csrrw x15, 0x18e, x0	// Write all 0s to CSR
	csrrw x15, 0x18e, x9	// Restore CSR

// Testing CSR 0x18f
	csrr x12, 0x18f	// Read CSR
	li x19, -1
	csrrw x21, 0x18f, x19	// Write all 1s to CSR
	csrrw x21, 0x18f, x0	// Write all 0s to CSR
	csrrw x21, 0x18f, x12	// Restore CSR

// Testing CSR 0x190
	csrr x5, 0x190	// Read CSR
	li x6, -1
	csrrw x4, 0x190, x6	// Write all 1s to CSR
	csrrw x4, 0x190, x0	// Write all 0s to CSR
	csrrw x4, 0x190, x5	// Restore CSR

// Testing CSR 0x191
	csrr x23, 0x191	// Read CSR
	li x4, -1
	csrrw x13, 0x191, x4	// Write all 1s to CSR
	csrrw x13, 0x191, x0	// Write all 0s to CSR
	csrrw x13, 0x191, x23	// Restore CSR

// Testing CSR 0x192
	csrr x13, 0x192	// Read CSR
	li x19, -1
	csrrw x15, 0x192, x19	// Write all 1s to CSR
	csrrw x15, 0x192, x0	// Write all 0s to CSR
	csrrw x15, 0x192, x13	// Restore CSR

// Testing CSR 0x193
	csrr x5, 0x193	// Read CSR
	li x18, -1
	csrrw x22, 0x193, x18	// Write all 1s to CSR
	csrrw x22, 0x193, x0	// Write all 0s to CSR
	csrrw x22, 0x193, x5	// Restore CSR

// Testing CSR 0x194
	csrr x10, 0x194	// Read CSR
	li x12, -1
	csrrw x21, 0x194, x12	// Write all 1s to CSR
	csrrw x21, 0x194, x0	// Write all 0s to CSR
	csrrw x21, 0x194, x10	// Restore CSR

// Testing CSR 0x195
	csrr x16, 0x195	// Read CSR
	li x24, -1
	csrrw x14, 0x195, x24	// Write all 1s to CSR
	csrrw x14, 0x195, x0	// Write all 0s to CSR
	csrrw x14, 0x195, x16	// Restore CSR

// Testing CSR 0x196
	csrr x7, 0x196	// Read CSR
	li x16, -1
	csrrw x23, 0x196, x16	// Write all 1s to CSR
	csrrw x23, 0x196, x0	// Write all 0s to CSR
	csrrw x23, 0x196, x7	// Restore CSR

// Testing CSR 0x197
	csrr x17, 0x197	// Read CSR
	li x11, -1
	csrrw x16, 0x197, x11	// Write all 1s to CSR
	csrrw x16, 0x197, x0	// Write all 0s to CSR
	csrrw x16, 0x197, x17	// Restore CSR

// Testing CSR 0x198
	csrr x21, 0x198	// Read CSR
	li x31, -1
	csrrw x2, 0x198, x31	// Write all 1s to CSR
	csrrw x2, 0x198, x0	// Write all 0s to CSR
	csrrw x2, 0x198, x21	// Restore CSR

// Testing CSR 0x199
	csrr x15, 0x199	// Read CSR
	li x10, -1
	csrrw x5, 0x199, x10	// Write all 1s to CSR
	csrrw x5, 0x199, x0	// Write all 0s to CSR
	csrrw x5, 0x199, x15	// Restore CSR

// Testing CSR 0x19a
	csrr x24, 0x19a	// Read CSR
	li x16, -1
	csrrw x2, 0x19a, x16	// Write all 1s to CSR
	csrrw x2, 0x19a, x0	// Write all 0s to CSR
	csrrw x2, 0x19a, x24	// Restore CSR

// Testing CSR 0x19b
	csrr x29, 0x19b	// Read CSR
	li x20, -1
	csrrw x7, 0x19b, x20	// Write all 1s to CSR
	csrrw x7, 0x19b, x0	// Write all 0s to CSR
	csrrw x7, 0x19b, x29	// Restore CSR

// Testing CSR 0x19c
	csrr x1, 0x19c	// Read CSR
	li x12, -1
	csrrw x16, 0x19c, x12	// Write all 1s to CSR
	csrrw x16, 0x19c, x0	// Write all 0s to CSR
	csrrw x16, 0x19c, x1	// Restore CSR

// Testing CSR 0x19d
	csrr x13, 0x19d	// Read CSR
	li x29, -1
	csrrw x1, 0x19d, x29	// Write all 1s to CSR
	csrrw x1, 0x19d, x0	// Write all 0s to CSR
	csrrw x1, 0x19d, x13	// Restore CSR

// Testing CSR 0x19e
	csrr x28, 0x19e	// Read CSR
	li x17, -1
	csrrw x3, 0x19e, x17	// Write all 1s to CSR
	csrrw x3, 0x19e, x0	// Write all 0s to CSR
	csrrw x3, 0x19e, x28	// Restore CSR

// Testing CSR 0x19f
	csrr x22, 0x19f	// Read CSR
	li x28, -1
	csrrw x3, 0x19f, x28	// Write all 1s to CSR
	csrrw x3, 0x19f, x0	// Write all 0s to CSR
	csrrw x3, 0x19f, x22	// Restore CSR

// Testing CSR 0x1a0
	csrr x22, 0x1a0	// Read CSR
	li x31, -1
	csrrw x24, 0x1a0, x31	// Write all 1s to CSR
	csrrw x24, 0x1a0, x0	// Write all 0s to CSR
	csrrw x24, 0x1a0, x22	// Restore CSR

// Testing CSR 0x1a1
	csrr x30, 0x1a1	// Read CSR
	li x22, -1
	csrrw x13, 0x1a1, x22	// Write all 1s to CSR
	csrrw x13, 0x1a1, x0	// Write all 0s to CSR
	csrrw x13, 0x1a1, x30	// Restore CSR

// Testing CSR 0x1a2
	csrr x1, 0x1a2	// Read CSR
	li x12, -1
	csrrw x2, 0x1a2, x12	// Write all 1s to CSR
	csrrw x2, 0x1a2, x0	// Write all 0s to CSR
	csrrw x2, 0x1a2, x1	// Restore CSR

// Testing CSR 0x1a3
	csrr x4, 0x1a3	// Read CSR
	li x20, -1
	csrrw x1, 0x1a3, x20	// Write all 1s to CSR
	csrrw x1, 0x1a3, x0	// Write all 0s to CSR
	csrrw x1, 0x1a3, x4	// Restore CSR

// Testing CSR 0x1a4
	csrr x9, 0x1a4	// Read CSR
	li x28, -1
	csrrw x21, 0x1a4, x28	// Write all 1s to CSR
	csrrw x21, 0x1a4, x0	// Write all 0s to CSR
	csrrw x21, 0x1a4, x9	// Restore CSR

// Testing CSR 0x1a5
	csrr x23, 0x1a5	// Read CSR
	li x10, -1
	csrrw x24, 0x1a5, x10	// Write all 1s to CSR
	csrrw x24, 0x1a5, x0	// Write all 0s to CSR
	csrrw x24, 0x1a5, x23	// Restore CSR

// Testing CSR 0x1a6
	csrr x29, 0x1a6	// Read CSR
	li x8, -1
	csrrw x5, 0x1a6, x8	// Write all 1s to CSR
	csrrw x5, 0x1a6, x0	// Write all 0s to CSR
	csrrw x5, 0x1a6, x29	// Restore CSR

// Testing CSR 0x1a7
	csrr x25, 0x1a7	// Read CSR
	li x19, -1
	csrrw x10, 0x1a7, x19	// Write all 1s to CSR
	csrrw x10, 0x1a7, x0	// Write all 0s to CSR
	csrrw x10, 0x1a7, x25	// Restore CSR

// Testing CSR 0x1a8
	csrr x7, 0x1a8	// Read CSR
	li x4, -1
	csrrw x14, 0x1a8, x4	// Write all 1s to CSR
	csrrw x14, 0x1a8, x0	// Write all 0s to CSR
	csrrw x14, 0x1a8, x7	// Restore CSR

// Testing CSR 0x1a9
	csrr x15, 0x1a9	// Read CSR
	li x23, -1
	csrrw x11, 0x1a9, x23	// Write all 1s to CSR
	csrrw x11, 0x1a9, x0	// Write all 0s to CSR
	csrrw x11, 0x1a9, x15	// Restore CSR

// Testing CSR 0x1aa
	csrr x13, 0x1aa	// Read CSR
	li x6, -1
	csrrw x11, 0x1aa, x6	// Write all 1s to CSR
	csrrw x11, 0x1aa, x0	// Write all 0s to CSR
	csrrw x11, 0x1aa, x13	// Restore CSR

// Testing CSR 0x1ab
	csrr x14, 0x1ab	// Read CSR
	li x21, -1
	csrrw x29, 0x1ab, x21	// Write all 1s to CSR
	csrrw x29, 0x1ab, x0	// Write all 0s to CSR
	csrrw x29, 0x1ab, x14	// Restore CSR

// Testing CSR 0x1ac
	csrr x22, 0x1ac	// Read CSR
	li x14, -1
	csrrw x5, 0x1ac, x14	// Write all 1s to CSR
	csrrw x5, 0x1ac, x0	// Write all 0s to CSR
	csrrw x5, 0x1ac, x22	// Restore CSR

// Testing CSR 0x1ad
	csrr x15, 0x1ad	// Read CSR
	li x30, -1
	csrrw x23, 0x1ad, x30	// Write all 1s to CSR
	csrrw x23, 0x1ad, x0	// Write all 0s to CSR
	csrrw x23, 0x1ad, x15	// Restore CSR

// Testing CSR 0x1ae
	csrr x5, 0x1ae	// Read CSR
	li x17, -1
	csrrw x11, 0x1ae, x17	// Write all 1s to CSR
	csrrw x11, 0x1ae, x0	// Write all 0s to CSR
	csrrw x11, 0x1ae, x5	// Restore CSR

// Testing CSR 0x1af
	csrr x5, 0x1af	// Read CSR
	li x7, -1
	csrrw x30, 0x1af, x7	// Write all 1s to CSR
	csrrw x30, 0x1af, x0	// Write all 0s to CSR
	csrrw x30, 0x1af, x5	// Restore CSR

// Testing CSR 0x1b0
	csrr x6, 0x1b0	// Read CSR
	li x15, -1
	csrrw x12, 0x1b0, x15	// Write all 1s to CSR
	csrrw x12, 0x1b0, x0	// Write all 0s to CSR
	csrrw x12, 0x1b0, x6	// Restore CSR

// Testing CSR 0x1b1
	csrr x26, 0x1b1	// Read CSR
	li x13, -1
	csrrw x14, 0x1b1, x13	// Write all 1s to CSR
	csrrw x14, 0x1b1, x0	// Write all 0s to CSR
	csrrw x14, 0x1b1, x26	// Restore CSR

// Testing CSR 0x1b2
	csrr x26, 0x1b2	// Read CSR
	li x16, -1
	csrrw x13, 0x1b2, x16	// Write all 1s to CSR
	csrrw x13, 0x1b2, x0	// Write all 0s to CSR
	csrrw x13, 0x1b2, x26	// Restore CSR

// Testing CSR 0x1b3
	csrr x24, 0x1b3	// Read CSR
	li x8, -1
	csrrw x26, 0x1b3, x8	// Write all 1s to CSR
	csrrw x26, 0x1b3, x0	// Write all 0s to CSR
	csrrw x26, 0x1b3, x24	// Restore CSR

// Testing CSR 0x1b4
	csrr x7, 0x1b4	// Read CSR
	li x15, -1
	csrrw x31, 0x1b4, x15	// Write all 1s to CSR
	csrrw x31, 0x1b4, x0	// Write all 0s to CSR
	csrrw x31, 0x1b4, x7	// Restore CSR

// Testing CSR 0x1b5
	csrr x7, 0x1b5	// Read CSR
	li x19, -1
	csrrw x23, 0x1b5, x19	// Write all 1s to CSR
	csrrw x23, 0x1b5, x0	// Write all 0s to CSR
	csrrw x23, 0x1b5, x7	// Restore CSR

// Testing CSR 0x1b6
	csrr x2, 0x1b6	// Read CSR
	li x29, -1
	csrrw x13, 0x1b6, x29	// Write all 1s to CSR
	csrrw x13, 0x1b6, x0	// Write all 0s to CSR
	csrrw x13, 0x1b6, x2	// Restore CSR

// Testing CSR 0x1b7
	csrr x2, 0x1b7	// Read CSR
	li x8, -1
	csrrw x21, 0x1b7, x8	// Write all 1s to CSR
	csrrw x21, 0x1b7, x0	// Write all 0s to CSR
	csrrw x21, 0x1b7, x2	// Restore CSR

// Testing CSR 0x1b8
	csrr x3, 0x1b8	// Read CSR
	li x28, -1
	csrrw x6, 0x1b8, x28	// Write all 1s to CSR
	csrrw x6, 0x1b8, x0	// Write all 0s to CSR
	csrrw x6, 0x1b8, x3	// Restore CSR

// Testing CSR 0x1b9
	csrr x12, 0x1b9	// Read CSR
	li x2, -1
	csrrw x24, 0x1b9, x2	// Write all 1s to CSR
	csrrw x24, 0x1b9, x0	// Write all 0s to CSR
	csrrw x24, 0x1b9, x12	// Restore CSR

// Testing CSR 0x1ba
	csrr x21, 0x1ba	// Read CSR
	li x22, -1
	csrrw x6, 0x1ba, x22	// Write all 1s to CSR
	csrrw x6, 0x1ba, x0	// Write all 0s to CSR
	csrrw x6, 0x1ba, x21	// Restore CSR

// Testing CSR 0x1bb
	csrr x8, 0x1bb	// Read CSR
	li x20, -1
	csrrw x10, 0x1bb, x20	// Write all 1s to CSR
	csrrw x10, 0x1bb, x0	// Write all 0s to CSR
	csrrw x10, 0x1bb, x8	// Restore CSR

// Testing CSR 0x1bc
	csrr x20, 0x1bc	// Read CSR
	li x3, -1
	csrrw x23, 0x1bc, x3	// Write all 1s to CSR
	csrrw x23, 0x1bc, x0	// Write all 0s to CSR
	csrrw x23, 0x1bc, x20	// Restore CSR

// Testing CSR 0x1bd
	csrr x28, 0x1bd	// Read CSR
	li x17, -1
	csrrw x25, 0x1bd, x17	// Write all 1s to CSR
	csrrw x25, 0x1bd, x0	// Write all 0s to CSR
	csrrw x25, 0x1bd, x28	// Restore CSR

// Testing CSR 0x1be
	csrr x10, 0x1be	// Read CSR
	li x25, -1
	csrrw x29, 0x1be, x25	// Write all 1s to CSR
	csrrw x29, 0x1be, x0	// Write all 0s to CSR
	csrrw x29, 0x1be, x10	// Restore CSR

// Testing CSR 0x1bf
	csrr x29, 0x1bf	// Read CSR
	li x12, -1
	csrrw x14, 0x1bf, x12	// Write all 1s to CSR
	csrrw x14, 0x1bf, x0	// Write all 0s to CSR
	csrrw x14, 0x1bf, x29	// Restore CSR

// Testing CSR 0x1c0
	csrr x15, 0x1c0	// Read CSR
	li x2, -1
	csrrw x21, 0x1c0, x2	// Write all 1s to CSR
	csrrw x21, 0x1c0, x0	// Write all 0s to CSR
	csrrw x21, 0x1c0, x15	// Restore CSR

// Testing CSR 0x1c1
	csrr x23, 0x1c1	// Read CSR
	li x17, -1
	csrrw x22, 0x1c1, x17	// Write all 1s to CSR
	csrrw x22, 0x1c1, x0	// Write all 0s to CSR
	csrrw x22, 0x1c1, x23	// Restore CSR

// Testing CSR 0x1c2
	csrr x31, 0x1c2	// Read CSR
	li x21, -1
	csrrw x18, 0x1c2, x21	// Write all 1s to CSR
	csrrw x18, 0x1c2, x0	// Write all 0s to CSR
	csrrw x18, 0x1c2, x31	// Restore CSR

// Testing CSR 0x1c3
	csrr x30, 0x1c3	// Read CSR
	li x24, -1
	csrrw x14, 0x1c3, x24	// Write all 1s to CSR
	csrrw x14, 0x1c3, x0	// Write all 0s to CSR
	csrrw x14, 0x1c3, x30	// Restore CSR

// Testing CSR 0x1c4
	csrr x19, 0x1c4	// Read CSR
	li x15, -1
	csrrw x16, 0x1c4, x15	// Write all 1s to CSR
	csrrw x16, 0x1c4, x0	// Write all 0s to CSR
	csrrw x16, 0x1c4, x19	// Restore CSR

// Testing CSR 0x1c5
	csrr x9, 0x1c5	// Read CSR
	li x23, -1
	csrrw x16, 0x1c5, x23	// Write all 1s to CSR
	csrrw x16, 0x1c5, x0	// Write all 0s to CSR
	csrrw x16, 0x1c5, x9	// Restore CSR

// Testing CSR 0x1c6
	csrr x7, 0x1c6	// Read CSR
	li x11, -1
	csrrw x9, 0x1c6, x11	// Write all 1s to CSR
	csrrw x9, 0x1c6, x0	// Write all 0s to CSR
	csrrw x9, 0x1c6, x7	// Restore CSR

// Testing CSR 0x1c7
	csrr x2, 0x1c7	// Read CSR
	li x6, -1
	csrrw x12, 0x1c7, x6	// Write all 1s to CSR
	csrrw x12, 0x1c7, x0	// Write all 0s to CSR
	csrrw x12, 0x1c7, x2	// Restore CSR

// Testing CSR 0x1c8
	csrr x1, 0x1c8	// Read CSR
	li x10, -1
	csrrw x21, 0x1c8, x10	// Write all 1s to CSR
	csrrw x21, 0x1c8, x0	// Write all 0s to CSR
	csrrw x21, 0x1c8, x1	// Restore CSR

// Testing CSR 0x1c9
	csrr x1, 0x1c9	// Read CSR
	li x5, -1
	csrrw x3, 0x1c9, x5	// Write all 1s to CSR
	csrrw x3, 0x1c9, x0	// Write all 0s to CSR
	csrrw x3, 0x1c9, x1	// Restore CSR

// Testing CSR 0x1ca
	csrr x26, 0x1ca	// Read CSR
	li x14, -1
	csrrw x22, 0x1ca, x14	// Write all 1s to CSR
	csrrw x22, 0x1ca, x0	// Write all 0s to CSR
	csrrw x22, 0x1ca, x26	// Restore CSR

// Testing CSR 0x1cb
	csrr x8, 0x1cb	// Read CSR
	li x20, -1
	csrrw x13, 0x1cb, x20	// Write all 1s to CSR
	csrrw x13, 0x1cb, x0	// Write all 0s to CSR
	csrrw x13, 0x1cb, x8	// Restore CSR

// Testing CSR 0x1cc
	csrr x18, 0x1cc	// Read CSR
	li x30, -1
	csrrw x8, 0x1cc, x30	// Write all 1s to CSR
	csrrw x8, 0x1cc, x0	// Write all 0s to CSR
	csrrw x8, 0x1cc, x18	// Restore CSR

// Testing CSR 0x1cd
	csrr x15, 0x1cd	// Read CSR
	li x7, -1
	csrrw x11, 0x1cd, x7	// Write all 1s to CSR
	csrrw x11, 0x1cd, x0	// Write all 0s to CSR
	csrrw x11, 0x1cd, x15	// Restore CSR

// Testing CSR 0x1ce
	csrr x20, 0x1ce	// Read CSR
	li x4, -1
	csrrw x29, 0x1ce, x4	// Write all 1s to CSR
	csrrw x29, 0x1ce, x0	// Write all 0s to CSR
	csrrw x29, 0x1ce, x20	// Restore CSR

// Testing CSR 0x1cf
	csrr x3, 0x1cf	// Read CSR
	li x26, -1
	csrrw x11, 0x1cf, x26	// Write all 1s to CSR
	csrrw x11, 0x1cf, x0	// Write all 0s to CSR
	csrrw x11, 0x1cf, x3	// Restore CSR

// Testing CSR 0x1d0
	csrr x11, 0x1d0	// Read CSR
	li x18, -1
	csrrw x15, 0x1d0, x18	// Write all 1s to CSR
	csrrw x15, 0x1d0, x0	// Write all 0s to CSR
	csrrw x15, 0x1d0, x11	// Restore CSR

// Testing CSR 0x1d1
	csrr x29, 0x1d1	// Read CSR
	li x11, -1
	csrrw x9, 0x1d1, x11	// Write all 1s to CSR
	csrrw x9, 0x1d1, x0	// Write all 0s to CSR
	csrrw x9, 0x1d1, x29	// Restore CSR

// Testing CSR 0x1d2
	csrr x1, 0x1d2	// Read CSR
	li x17, -1
	csrrw x2, 0x1d2, x17	// Write all 1s to CSR
	csrrw x2, 0x1d2, x0	// Write all 0s to CSR
	csrrw x2, 0x1d2, x1	// Restore CSR

// Testing CSR 0x1d3
	csrr x7, 0x1d3	// Read CSR
	li x12, -1
	csrrw x3, 0x1d3, x12	// Write all 1s to CSR
	csrrw x3, 0x1d3, x0	// Write all 0s to CSR
	csrrw x3, 0x1d3, x7	// Restore CSR

// Testing CSR 0x1d4
	csrr x7, 0x1d4	// Read CSR
	li x28, -1
	csrrw x17, 0x1d4, x28	// Write all 1s to CSR
	csrrw x17, 0x1d4, x0	// Write all 0s to CSR
	csrrw x17, 0x1d4, x7	// Restore CSR

// Testing CSR 0x1d5
	csrr x12, 0x1d5	// Read CSR
	li x7, -1
	csrrw x27, 0x1d5, x7	// Write all 1s to CSR
	csrrw x27, 0x1d5, x0	// Write all 0s to CSR
	csrrw x27, 0x1d5, x12	// Restore CSR

// Testing CSR 0x1d6
	csrr x7, 0x1d6	// Read CSR
	li x9, -1
	csrrw x22, 0x1d6, x9	// Write all 1s to CSR
	csrrw x22, 0x1d6, x0	// Write all 0s to CSR
	csrrw x22, 0x1d6, x7	// Restore CSR

// Testing CSR 0x1d7
	csrr x24, 0x1d7	// Read CSR
	li x10, -1
	csrrw x17, 0x1d7, x10	// Write all 1s to CSR
	csrrw x17, 0x1d7, x0	// Write all 0s to CSR
	csrrw x17, 0x1d7, x24	// Restore CSR

// Testing CSR 0x1d8
	csrr x28, 0x1d8	// Read CSR
	li x13, -1
	csrrw x9, 0x1d8, x13	// Write all 1s to CSR
	csrrw x9, 0x1d8, x0	// Write all 0s to CSR
	csrrw x9, 0x1d8, x28	// Restore CSR

// Testing CSR 0x1d9
	csrr x16, 0x1d9	// Read CSR
	li x12, -1
	csrrw x28, 0x1d9, x12	// Write all 1s to CSR
	csrrw x28, 0x1d9, x0	// Write all 0s to CSR
	csrrw x28, 0x1d9, x16	// Restore CSR

// Testing CSR 0x1da
	csrr x23, 0x1da	// Read CSR
	li x8, -1
	csrrw x2, 0x1da, x8	// Write all 1s to CSR
	csrrw x2, 0x1da, x0	// Write all 0s to CSR
	csrrw x2, 0x1da, x23	// Restore CSR

// Testing CSR 0x1db
	csrr x10, 0x1db	// Read CSR
	li x30, -1
	csrrw x18, 0x1db, x30	// Write all 1s to CSR
	csrrw x18, 0x1db, x0	// Write all 0s to CSR
	csrrw x18, 0x1db, x10	// Restore CSR

// Testing CSR 0x1dc
	csrr x3, 0x1dc	// Read CSR
	li x1, -1
	csrrw x15, 0x1dc, x1	// Write all 1s to CSR
	csrrw x15, 0x1dc, x0	// Write all 0s to CSR
	csrrw x15, 0x1dc, x3	// Restore CSR

// Testing CSR 0x1dd
	csrr x16, 0x1dd	// Read CSR
	li x24, -1
	csrrw x15, 0x1dd, x24	// Write all 1s to CSR
	csrrw x15, 0x1dd, x0	// Write all 0s to CSR
	csrrw x15, 0x1dd, x16	// Restore CSR

// Testing CSR 0x1de
	csrr x2, 0x1de	// Read CSR
	li x30, -1
	csrrw x26, 0x1de, x30	// Write all 1s to CSR
	csrrw x26, 0x1de, x0	// Write all 0s to CSR
	csrrw x26, 0x1de, x2	// Restore CSR

// Testing CSR 0x1df
	csrr x14, 0x1df	// Read CSR
	li x16, -1
	csrrw x15, 0x1df, x16	// Write all 1s to CSR
	csrrw x15, 0x1df, x0	// Write all 0s to CSR
	csrrw x15, 0x1df, x14	// Restore CSR

// Testing CSR 0x1e0
	csrr x15, 0x1e0	// Read CSR
	li x4, -1
	csrrw x3, 0x1e0, x4	// Write all 1s to CSR
	csrrw x3, 0x1e0, x0	// Write all 0s to CSR
	csrrw x3, 0x1e0, x15	// Restore CSR

// Testing CSR 0x1e1
	csrr x3, 0x1e1	// Read CSR
	li x8, -1
	csrrw x4, 0x1e1, x8	// Write all 1s to CSR
	csrrw x4, 0x1e1, x0	// Write all 0s to CSR
	csrrw x4, 0x1e1, x3	// Restore CSR

// Testing CSR 0x1e2
	csrr x27, 0x1e2	// Read CSR
	li x25, -1
	csrrw x5, 0x1e2, x25	// Write all 1s to CSR
	csrrw x5, 0x1e2, x0	// Write all 0s to CSR
	csrrw x5, 0x1e2, x27	// Restore CSR

// Testing CSR 0x1e3
	csrr x14, 0x1e3	// Read CSR
	li x29, -1
	csrrw x30, 0x1e3, x29	// Write all 1s to CSR
	csrrw x30, 0x1e3, x0	// Write all 0s to CSR
	csrrw x30, 0x1e3, x14	// Restore CSR

// Testing CSR 0x1e4
	csrr x7, 0x1e4	// Read CSR
	li x15, -1
	csrrw x20, 0x1e4, x15	// Write all 1s to CSR
	csrrw x20, 0x1e4, x0	// Write all 0s to CSR
	csrrw x20, 0x1e4, x7	// Restore CSR

// Testing CSR 0x1e5
	csrr x3, 0x1e5	// Read CSR
	li x27, -1
	csrrw x14, 0x1e5, x27	// Write all 1s to CSR
	csrrw x14, 0x1e5, x0	// Write all 0s to CSR
	csrrw x14, 0x1e5, x3	// Restore CSR

// Testing CSR 0x1e6
	csrr x18, 0x1e6	// Read CSR
	li x25, -1
	csrrw x29, 0x1e6, x25	// Write all 1s to CSR
	csrrw x29, 0x1e6, x0	// Write all 0s to CSR
	csrrw x29, 0x1e6, x18	// Restore CSR

// Testing CSR 0x1e7
	csrr x27, 0x1e7	// Read CSR
	li x13, -1
	csrrw x2, 0x1e7, x13	// Write all 1s to CSR
	csrrw x2, 0x1e7, x0	// Write all 0s to CSR
	csrrw x2, 0x1e7, x27	// Restore CSR

// Testing CSR 0x1e8
	csrr x31, 0x1e8	// Read CSR
	li x6, -1
	csrrw x8, 0x1e8, x6	// Write all 1s to CSR
	csrrw x8, 0x1e8, x0	// Write all 0s to CSR
	csrrw x8, 0x1e8, x31	// Restore CSR

// Testing CSR 0x1e9
	csrr x16, 0x1e9	// Read CSR
	li x8, -1
	csrrw x5, 0x1e9, x8	// Write all 1s to CSR
	csrrw x5, 0x1e9, x0	// Write all 0s to CSR
	csrrw x5, 0x1e9, x16	// Restore CSR

// Testing CSR 0x1ea
	csrr x27, 0x1ea	// Read CSR
	li x28, -1
	csrrw x9, 0x1ea, x28	// Write all 1s to CSR
	csrrw x9, 0x1ea, x0	// Write all 0s to CSR
	csrrw x9, 0x1ea, x27	// Restore CSR

// Testing CSR 0x1eb
	csrr x30, 0x1eb	// Read CSR
	li x12, -1
	csrrw x11, 0x1eb, x12	// Write all 1s to CSR
	csrrw x11, 0x1eb, x0	// Write all 0s to CSR
	csrrw x11, 0x1eb, x30	// Restore CSR

// Testing CSR 0x1ec
	csrr x14, 0x1ec	// Read CSR
	li x4, -1
	csrrw x18, 0x1ec, x4	// Write all 1s to CSR
	csrrw x18, 0x1ec, x0	// Write all 0s to CSR
	csrrw x18, 0x1ec, x14	// Restore CSR

// Testing CSR 0x1ed
	csrr x29, 0x1ed	// Read CSR
	li x10, -1
	csrrw x20, 0x1ed, x10	// Write all 1s to CSR
	csrrw x20, 0x1ed, x0	// Write all 0s to CSR
	csrrw x20, 0x1ed, x29	// Restore CSR

// Testing CSR 0x1ee
	csrr x18, 0x1ee	// Read CSR
	li x26, -1
	csrrw x7, 0x1ee, x26	// Write all 1s to CSR
	csrrw x7, 0x1ee, x0	// Write all 0s to CSR
	csrrw x7, 0x1ee, x18	// Restore CSR

// Testing CSR 0x1ef
	csrr x23, 0x1ef	// Read CSR
	li x10, -1
	csrrw x25, 0x1ef, x10	// Write all 1s to CSR
	csrrw x25, 0x1ef, x0	// Write all 0s to CSR
	csrrw x25, 0x1ef, x23	// Restore CSR

// Testing CSR 0x1f0
	csrr x15, 0x1f0	// Read CSR
	li x17, -1
	csrrw x20, 0x1f0, x17	// Write all 1s to CSR
	csrrw x20, 0x1f0, x0	// Write all 0s to CSR
	csrrw x20, 0x1f0, x15	// Restore CSR

// Testing CSR 0x1f1
	csrr x15, 0x1f1	// Read CSR
	li x18, -1
	csrrw x21, 0x1f1, x18	// Write all 1s to CSR
	csrrw x21, 0x1f1, x0	// Write all 0s to CSR
	csrrw x21, 0x1f1, x15	// Restore CSR

// Testing CSR 0x1f2
	csrr x9, 0x1f2	// Read CSR
	li x1, -1
	csrrw x8, 0x1f2, x1	// Write all 1s to CSR
	csrrw x8, 0x1f2, x0	// Write all 0s to CSR
	csrrw x8, 0x1f2, x9	// Restore CSR

// Testing CSR 0x1f3
	csrr x4, 0x1f3	// Read CSR
	li x20, -1
	csrrw x26, 0x1f3, x20	// Write all 1s to CSR
	csrrw x26, 0x1f3, x0	// Write all 0s to CSR
	csrrw x26, 0x1f3, x4	// Restore CSR

// Testing CSR 0x1f4
	csrr x23, 0x1f4	// Read CSR
	li x4, -1
	csrrw x6, 0x1f4, x4	// Write all 1s to CSR
	csrrw x6, 0x1f4, x0	// Write all 0s to CSR
	csrrw x6, 0x1f4, x23	// Restore CSR

// Testing CSR 0x1f5
	csrr x24, 0x1f5	// Read CSR
	li x14, -1
	csrrw x8, 0x1f5, x14	// Write all 1s to CSR
	csrrw x8, 0x1f5, x0	// Write all 0s to CSR
	csrrw x8, 0x1f5, x24	// Restore CSR

// Testing CSR 0x1f6
	csrr x7, 0x1f6	// Read CSR
	li x10, -1
	csrrw x29, 0x1f6, x10	// Write all 1s to CSR
	csrrw x29, 0x1f6, x0	// Write all 0s to CSR
	csrrw x29, 0x1f6, x7	// Restore CSR

// Testing CSR 0x1f7
	csrr x24, 0x1f7	// Read CSR
	li x22, -1
	csrrw x1, 0x1f7, x22	// Write all 1s to CSR
	csrrw x1, 0x1f7, x0	// Write all 0s to CSR
	csrrw x1, 0x1f7, x24	// Restore CSR

// Testing CSR 0x1f8
	csrr x24, 0x1f8	// Read CSR
	li x18, -1
	csrrw x17, 0x1f8, x18	// Write all 1s to CSR
	csrrw x17, 0x1f8, x0	// Write all 0s to CSR
	csrrw x17, 0x1f8, x24	// Restore CSR

// Testing CSR 0x1f9
	csrr x14, 0x1f9	// Read CSR
	li x28, -1
	csrrw x2, 0x1f9, x28	// Write all 1s to CSR
	csrrw x2, 0x1f9, x0	// Write all 0s to CSR
	csrrw x2, 0x1f9, x14	// Restore CSR

// Testing CSR 0x1fa
	csrr x4, 0x1fa	// Read CSR
	li x13, -1
	csrrw x21, 0x1fa, x13	// Write all 1s to CSR
	csrrw x21, 0x1fa, x0	// Write all 0s to CSR
	csrrw x21, 0x1fa, x4	// Restore CSR

// Testing CSR 0x1fb
	csrr x9, 0x1fb	// Read CSR
	li x4, -1
	csrrw x24, 0x1fb, x4	// Write all 1s to CSR
	csrrw x24, 0x1fb, x0	// Write all 0s to CSR
	csrrw x24, 0x1fb, x9	// Restore CSR

// Testing CSR 0x1fc
	csrr x19, 0x1fc	// Read CSR
	li x12, -1
	csrrw x8, 0x1fc, x12	// Write all 1s to CSR
	csrrw x8, 0x1fc, x0	// Write all 0s to CSR
	csrrw x8, 0x1fc, x19	// Restore CSR

// Testing CSR 0x1fd
	csrr x22, 0x1fd	// Read CSR
	li x23, -1
	csrrw x18, 0x1fd, x23	// Write all 1s to CSR
	csrrw x18, 0x1fd, x0	// Write all 0s to CSR
	csrrw x18, 0x1fd, x22	// Restore CSR

// Testing CSR 0x1fe
	csrr x22, 0x1fe	// Read CSR
	li x10, -1
	csrrw x8, 0x1fe, x10	// Write all 1s to CSR
	csrrw x8, 0x1fe, x0	// Write all 0s to CSR
	csrrw x8, 0x1fe, x22	// Restore CSR

// Testing CSR 0x1ff
	csrr x24, 0x1ff	// Read CSR
	li x27, -1
	csrrw x29, 0x1ff, x27	// Write all 1s to CSR
	csrrw x29, 0x1ff, x0	// Write all 0s to CSR
	csrrw x29, 0x1ff, x24	// Restore CSR

// Testing CSR 0x200
	csrr x8, 0x200	// Read CSR
	li x3, -1
	csrrw x17, 0x200, x3	// Write all 1s to CSR
	csrrw x17, 0x200, x0	// Write all 0s to CSR
	csrrw x17, 0x200, x8	// Restore CSR

// Testing CSR 0x201
	csrr x10, 0x201	// Read CSR
	li x22, -1
	csrrw x11, 0x201, x22	// Write all 1s to CSR
	csrrw x11, 0x201, x0	// Write all 0s to CSR
	csrrw x11, 0x201, x10	// Restore CSR

// Testing CSR 0x202
	csrr x8, 0x202	// Read CSR
	li x12, -1
	csrrw x21, 0x202, x12	// Write all 1s to CSR
	csrrw x21, 0x202, x0	// Write all 0s to CSR
	csrrw x21, 0x202, x8	// Restore CSR

// Testing CSR 0x203
	csrr x16, 0x203	// Read CSR
	li x10, -1
	csrrw x19, 0x203, x10	// Write all 1s to CSR
	csrrw x19, 0x203, x0	// Write all 0s to CSR
	csrrw x19, 0x203, x16	// Restore CSR

// Testing CSR 0x204
	csrr x6, 0x204	// Read CSR
	li x5, -1
	csrrw x26, 0x204, x5	// Write all 1s to CSR
	csrrw x26, 0x204, x0	// Write all 0s to CSR
	csrrw x26, 0x204, x6	// Restore CSR

// Testing CSR 0x205
	csrr x1, 0x205	// Read CSR
	li x18, -1
	csrrw x17, 0x205, x18	// Write all 1s to CSR
	csrrw x17, 0x205, x0	// Write all 0s to CSR
	csrrw x17, 0x205, x1	// Restore CSR

// Testing CSR 0x206
	csrr x11, 0x206	// Read CSR
	li x12, -1
	csrrw x19, 0x206, x12	// Write all 1s to CSR
	csrrw x19, 0x206, x0	// Write all 0s to CSR
	csrrw x19, 0x206, x11	// Restore CSR

// Testing CSR 0x207
	csrr x21, 0x207	// Read CSR
	li x1, -1
	csrrw x26, 0x207, x1	// Write all 1s to CSR
	csrrw x26, 0x207, x0	// Write all 0s to CSR
	csrrw x26, 0x207, x21	// Restore CSR

// Testing CSR 0x208
	csrr x5, 0x208	// Read CSR
	li x29, -1
	csrrw x13, 0x208, x29	// Write all 1s to CSR
	csrrw x13, 0x208, x0	// Write all 0s to CSR
	csrrw x13, 0x208, x5	// Restore CSR

// Testing CSR 0x209
	csrr x5, 0x209	// Read CSR
	li x6, -1
	csrrw x17, 0x209, x6	// Write all 1s to CSR
	csrrw x17, 0x209, x0	// Write all 0s to CSR
	csrrw x17, 0x209, x5	// Restore CSR

// Testing CSR 0x20a
	csrr x3, 0x20a	// Read CSR
	li x5, -1
	csrrw x25, 0x20a, x5	// Write all 1s to CSR
	csrrw x25, 0x20a, x0	// Write all 0s to CSR
	csrrw x25, 0x20a, x3	// Restore CSR

// Testing CSR 0x20b
	csrr x7, 0x20b	// Read CSR
	li x26, -1
	csrrw x30, 0x20b, x26	// Write all 1s to CSR
	csrrw x30, 0x20b, x0	// Write all 0s to CSR
	csrrw x30, 0x20b, x7	// Restore CSR

// Testing CSR 0x20c
	csrr x25, 0x20c	// Read CSR
	li x16, -1
	csrrw x19, 0x20c, x16	// Write all 1s to CSR
	csrrw x19, 0x20c, x0	// Write all 0s to CSR
	csrrw x19, 0x20c, x25	// Restore CSR

// Testing CSR 0x20d
	csrr x25, 0x20d	// Read CSR
	li x23, -1
	csrrw x7, 0x20d, x23	// Write all 1s to CSR
	csrrw x7, 0x20d, x0	// Write all 0s to CSR
	csrrw x7, 0x20d, x25	// Restore CSR

// Testing CSR 0x20e
	csrr x8, 0x20e	// Read CSR
	li x24, -1
	csrrw x5, 0x20e, x24	// Write all 1s to CSR
	csrrw x5, 0x20e, x0	// Write all 0s to CSR
	csrrw x5, 0x20e, x8	// Restore CSR

// Testing CSR 0x20f
	csrr x27, 0x20f	// Read CSR
	li x8, -1
	csrrw x25, 0x20f, x8	// Write all 1s to CSR
	csrrw x25, 0x20f, x0	// Write all 0s to CSR
	csrrw x25, 0x20f, x27	// Restore CSR

// Testing CSR 0x210
	csrr x13, 0x210	// Read CSR
	li x12, -1
	csrrw x20, 0x210, x12	// Write all 1s to CSR
	csrrw x20, 0x210, x0	// Write all 0s to CSR
	csrrw x20, 0x210, x13	// Restore CSR

// Testing CSR 0x211
	csrr x19, 0x211	// Read CSR
	li x5, -1
	csrrw x21, 0x211, x5	// Write all 1s to CSR
	csrrw x21, 0x211, x0	// Write all 0s to CSR
	csrrw x21, 0x211, x19	// Restore CSR

// Testing CSR 0x212
	csrr x16, 0x212	// Read CSR
	li x29, -1
	csrrw x30, 0x212, x29	// Write all 1s to CSR
	csrrw x30, 0x212, x0	// Write all 0s to CSR
	csrrw x30, 0x212, x16	// Restore CSR

// Testing CSR 0x213
	csrr x4, 0x213	// Read CSR
	li x20, -1
	csrrw x27, 0x213, x20	// Write all 1s to CSR
	csrrw x27, 0x213, x0	// Write all 0s to CSR
	csrrw x27, 0x213, x4	// Restore CSR

// Testing CSR 0x214
	csrr x1, 0x214	// Read CSR
	li x17, -1
	csrrw x20, 0x214, x17	// Write all 1s to CSR
	csrrw x20, 0x214, x0	// Write all 0s to CSR
	csrrw x20, 0x214, x1	// Restore CSR

// Testing CSR 0x215
	csrr x12, 0x215	// Read CSR
	li x16, -1
	csrrw x15, 0x215, x16	// Write all 1s to CSR
	csrrw x15, 0x215, x0	// Write all 0s to CSR
	csrrw x15, 0x215, x12	// Restore CSR

// Testing CSR 0x216
	csrr x10, 0x216	// Read CSR
	li x1, -1
	csrrw x31, 0x216, x1	// Write all 1s to CSR
	csrrw x31, 0x216, x0	// Write all 0s to CSR
	csrrw x31, 0x216, x10	// Restore CSR

// Testing CSR 0x217
	csrr x8, 0x217	// Read CSR
	li x18, -1
	csrrw x21, 0x217, x18	// Write all 1s to CSR
	csrrw x21, 0x217, x0	// Write all 0s to CSR
	csrrw x21, 0x217, x8	// Restore CSR

// Testing CSR 0x218
	csrr x6, 0x218	// Read CSR
	li x22, -1
	csrrw x29, 0x218, x22	// Write all 1s to CSR
	csrrw x29, 0x218, x0	// Write all 0s to CSR
	csrrw x29, 0x218, x6	// Restore CSR

// Testing CSR 0x219
	csrr x16, 0x219	// Read CSR
	li x26, -1
	csrrw x31, 0x219, x26	// Write all 1s to CSR
	csrrw x31, 0x219, x0	// Write all 0s to CSR
	csrrw x31, 0x219, x16	// Restore CSR

// Testing CSR 0x21a
	csrr x24, 0x21a	// Read CSR
	li x16, -1
	csrrw x18, 0x21a, x16	// Write all 1s to CSR
	csrrw x18, 0x21a, x0	// Write all 0s to CSR
	csrrw x18, 0x21a, x24	// Restore CSR

// Testing CSR 0x21b
	csrr x11, 0x21b	// Read CSR
	li x23, -1
	csrrw x28, 0x21b, x23	// Write all 1s to CSR
	csrrw x28, 0x21b, x0	// Write all 0s to CSR
	csrrw x28, 0x21b, x11	// Restore CSR

// Testing CSR 0x21c
	csrr x3, 0x21c	// Read CSR
	li x9, -1
	csrrw x5, 0x21c, x9	// Write all 1s to CSR
	csrrw x5, 0x21c, x0	// Write all 0s to CSR
	csrrw x5, 0x21c, x3	// Restore CSR

// Testing CSR 0x21d
	csrr x20, 0x21d	// Read CSR
	li x13, -1
	csrrw x23, 0x21d, x13	// Write all 1s to CSR
	csrrw x23, 0x21d, x0	// Write all 0s to CSR
	csrrw x23, 0x21d, x20	// Restore CSR

// Testing CSR 0x21e
	csrr x7, 0x21e	// Read CSR
	li x27, -1
	csrrw x11, 0x21e, x27	// Write all 1s to CSR
	csrrw x11, 0x21e, x0	// Write all 0s to CSR
	csrrw x11, 0x21e, x7	// Restore CSR

// Testing CSR 0x21f
	csrr x26, 0x21f	// Read CSR
	li x10, -1
	csrrw x13, 0x21f, x10	// Write all 1s to CSR
	csrrw x13, 0x21f, x0	// Write all 0s to CSR
	csrrw x13, 0x21f, x26	// Restore CSR

// Testing CSR 0x220
	csrr x31, 0x220	// Read CSR
	li x2, -1
	csrrw x7, 0x220, x2	// Write all 1s to CSR
	csrrw x7, 0x220, x0	// Write all 0s to CSR
	csrrw x7, 0x220, x31	// Restore CSR

// Testing CSR 0x221
	csrr x2, 0x221	// Read CSR
	li x11, -1
	csrrw x24, 0x221, x11	// Write all 1s to CSR
	csrrw x24, 0x221, x0	// Write all 0s to CSR
	csrrw x24, 0x221, x2	// Restore CSR

// Testing CSR 0x222
	csrr x24, 0x222	// Read CSR
	li x31, -1
	csrrw x8, 0x222, x31	// Write all 1s to CSR
	csrrw x8, 0x222, x0	// Write all 0s to CSR
	csrrw x8, 0x222, x24	// Restore CSR

// Testing CSR 0x223
	csrr x11, 0x223	// Read CSR
	li x28, -1
	csrrw x15, 0x223, x28	// Write all 1s to CSR
	csrrw x15, 0x223, x0	// Write all 0s to CSR
	csrrw x15, 0x223, x11	// Restore CSR

// Testing CSR 0x224
	csrr x22, 0x224	// Read CSR
	li x24, -1
	csrrw x8, 0x224, x24	// Write all 1s to CSR
	csrrw x8, 0x224, x0	// Write all 0s to CSR
	csrrw x8, 0x224, x22	// Restore CSR

// Testing CSR 0x225
	csrr x9, 0x225	// Read CSR
	li x12, -1
	csrrw x22, 0x225, x12	// Write all 1s to CSR
	csrrw x22, 0x225, x0	// Write all 0s to CSR
	csrrw x22, 0x225, x9	// Restore CSR

// Testing CSR 0x226
	csrr x6, 0x226	// Read CSR
	li x10, -1
	csrrw x1, 0x226, x10	// Write all 1s to CSR
	csrrw x1, 0x226, x0	// Write all 0s to CSR
	csrrw x1, 0x226, x6	// Restore CSR

// Testing CSR 0x227
	csrr x12, 0x227	// Read CSR
	li x19, -1
	csrrw x18, 0x227, x19	// Write all 1s to CSR
	csrrw x18, 0x227, x0	// Write all 0s to CSR
	csrrw x18, 0x227, x12	// Restore CSR

// Testing CSR 0x228
	csrr x2, 0x228	// Read CSR
	li x24, -1
	csrrw x21, 0x228, x24	// Write all 1s to CSR
	csrrw x21, 0x228, x0	// Write all 0s to CSR
	csrrw x21, 0x228, x2	// Restore CSR

// Testing CSR 0x229
	csrr x5, 0x229	// Read CSR
	li x12, -1
	csrrw x1, 0x229, x12	// Write all 1s to CSR
	csrrw x1, 0x229, x0	// Write all 0s to CSR
	csrrw x1, 0x229, x5	// Restore CSR

// Testing CSR 0x22a
	csrr x16, 0x22a	// Read CSR
	li x21, -1
	csrrw x2, 0x22a, x21	// Write all 1s to CSR
	csrrw x2, 0x22a, x0	// Write all 0s to CSR
	csrrw x2, 0x22a, x16	// Restore CSR

// Testing CSR 0x22b
	csrr x1, 0x22b	// Read CSR
	li x8, -1
	csrrw x2, 0x22b, x8	// Write all 1s to CSR
	csrrw x2, 0x22b, x0	// Write all 0s to CSR
	csrrw x2, 0x22b, x1	// Restore CSR

// Testing CSR 0x22c
	csrr x1, 0x22c	// Read CSR
	li x8, -1
	csrrw x31, 0x22c, x8	// Write all 1s to CSR
	csrrw x31, 0x22c, x0	// Write all 0s to CSR
	csrrw x31, 0x22c, x1	// Restore CSR

// Testing CSR 0x22d
	csrr x21, 0x22d	// Read CSR
	li x11, -1
	csrrw x3, 0x22d, x11	// Write all 1s to CSR
	csrrw x3, 0x22d, x0	// Write all 0s to CSR
	csrrw x3, 0x22d, x21	// Restore CSR

// Testing CSR 0x22e
	csrr x27, 0x22e	// Read CSR
	li x2, -1
	csrrw x12, 0x22e, x2	// Write all 1s to CSR
	csrrw x12, 0x22e, x0	// Write all 0s to CSR
	csrrw x12, 0x22e, x27	// Restore CSR

// Testing CSR 0x22f
	csrr x22, 0x22f	// Read CSR
	li x14, -1
	csrrw x5, 0x22f, x14	// Write all 1s to CSR
	csrrw x5, 0x22f, x0	// Write all 0s to CSR
	csrrw x5, 0x22f, x22	// Restore CSR

// Testing CSR 0x230
	csrr x29, 0x230	// Read CSR
	li x30, -1
	csrrw x7, 0x230, x30	// Write all 1s to CSR
	csrrw x7, 0x230, x0	// Write all 0s to CSR
	csrrw x7, 0x230, x29	// Restore CSR

// Testing CSR 0x231
	csrr x15, 0x231	// Read CSR
	li x14, -1
	csrrw x5, 0x231, x14	// Write all 1s to CSR
	csrrw x5, 0x231, x0	// Write all 0s to CSR
	csrrw x5, 0x231, x15	// Restore CSR

// Testing CSR 0x232
	csrr x12, 0x232	// Read CSR
	li x10, -1
	csrrw x6, 0x232, x10	// Write all 1s to CSR
	csrrw x6, 0x232, x0	// Write all 0s to CSR
	csrrw x6, 0x232, x12	// Restore CSR

// Testing CSR 0x233
	csrr x21, 0x233	// Read CSR
	li x11, -1
	csrrw x24, 0x233, x11	// Write all 1s to CSR
	csrrw x24, 0x233, x0	// Write all 0s to CSR
	csrrw x24, 0x233, x21	// Restore CSR

// Testing CSR 0x234
	csrr x26, 0x234	// Read CSR
	li x24, -1
	csrrw x14, 0x234, x24	// Write all 1s to CSR
	csrrw x14, 0x234, x0	// Write all 0s to CSR
	csrrw x14, 0x234, x26	// Restore CSR

// Testing CSR 0x235
	csrr x13, 0x235	// Read CSR
	li x1, -1
	csrrw x14, 0x235, x1	// Write all 1s to CSR
	csrrw x14, 0x235, x0	// Write all 0s to CSR
	csrrw x14, 0x235, x13	// Restore CSR

// Testing CSR 0x236
	csrr x29, 0x236	// Read CSR
	li x9, -1
	csrrw x18, 0x236, x9	// Write all 1s to CSR
	csrrw x18, 0x236, x0	// Write all 0s to CSR
	csrrw x18, 0x236, x29	// Restore CSR

// Testing CSR 0x237
	csrr x18, 0x237	// Read CSR
	li x26, -1
	csrrw x24, 0x237, x26	// Write all 1s to CSR
	csrrw x24, 0x237, x0	// Write all 0s to CSR
	csrrw x24, 0x237, x18	// Restore CSR

// Testing CSR 0x238
	csrr x22, 0x238	// Read CSR
	li x23, -1
	csrrw x15, 0x238, x23	// Write all 1s to CSR
	csrrw x15, 0x238, x0	// Write all 0s to CSR
	csrrw x15, 0x238, x22	// Restore CSR

// Testing CSR 0x239
	csrr x25, 0x239	// Read CSR
	li x2, -1
	csrrw x19, 0x239, x2	// Write all 1s to CSR
	csrrw x19, 0x239, x0	// Write all 0s to CSR
	csrrw x19, 0x239, x25	// Restore CSR

// Testing CSR 0x23a
	csrr x30, 0x23a	// Read CSR
	li x4, -1
	csrrw x14, 0x23a, x4	// Write all 1s to CSR
	csrrw x14, 0x23a, x0	// Write all 0s to CSR
	csrrw x14, 0x23a, x30	// Restore CSR

// Testing CSR 0x23b
	csrr x31, 0x23b	// Read CSR
	li x13, -1
	csrrw x6, 0x23b, x13	// Write all 1s to CSR
	csrrw x6, 0x23b, x0	// Write all 0s to CSR
	csrrw x6, 0x23b, x31	// Restore CSR

// Testing CSR 0x23c
	csrr x1, 0x23c	// Read CSR
	li x17, -1
	csrrw x5, 0x23c, x17	// Write all 1s to CSR
	csrrw x5, 0x23c, x0	// Write all 0s to CSR
	csrrw x5, 0x23c, x1	// Restore CSR

// Testing CSR 0x23d
	csrr x20, 0x23d	// Read CSR
	li x28, -1
	csrrw x22, 0x23d, x28	// Write all 1s to CSR
	csrrw x22, 0x23d, x0	// Write all 0s to CSR
	csrrw x22, 0x23d, x20	// Restore CSR

// Testing CSR 0x23e
	csrr x17, 0x23e	// Read CSR
	li x27, -1
	csrrw x24, 0x23e, x27	// Write all 1s to CSR
	csrrw x24, 0x23e, x0	// Write all 0s to CSR
	csrrw x24, 0x23e, x17	// Restore CSR

// Testing CSR 0x23f
	csrr x23, 0x23f	// Read CSR
	li x5, -1
	csrrw x3, 0x23f, x5	// Write all 1s to CSR
	csrrw x3, 0x23f, x0	// Write all 0s to CSR
	csrrw x3, 0x23f, x23	// Restore CSR

// Testing CSR 0x240
	csrr x11, 0x240	// Read CSR
	li x8, -1
	csrrw x27, 0x240, x8	// Write all 1s to CSR
	csrrw x27, 0x240, x0	// Write all 0s to CSR
	csrrw x27, 0x240, x11	// Restore CSR

// Testing CSR 0x241
	csrr x27, 0x241	// Read CSR
	li x8, -1
	csrrw x6, 0x241, x8	// Write all 1s to CSR
	csrrw x6, 0x241, x0	// Write all 0s to CSR
	csrrw x6, 0x241, x27	// Restore CSR

// Testing CSR 0x242
	csrr x31, 0x242	// Read CSR
	li x1, -1
	csrrw x26, 0x242, x1	// Write all 1s to CSR
	csrrw x26, 0x242, x0	// Write all 0s to CSR
	csrrw x26, 0x242, x31	// Restore CSR

// Testing CSR 0x243
	csrr x29, 0x243	// Read CSR
	li x6, -1
	csrrw x24, 0x243, x6	// Write all 1s to CSR
	csrrw x24, 0x243, x0	// Write all 0s to CSR
	csrrw x24, 0x243, x29	// Restore CSR

// Testing CSR 0x244
	csrr x26, 0x244	// Read CSR
	li x27, -1
	csrrw x22, 0x244, x27	// Write all 1s to CSR
	csrrw x22, 0x244, x0	// Write all 0s to CSR
	csrrw x22, 0x244, x26	// Restore CSR

// Testing CSR 0x245
	csrr x18, 0x245	// Read CSR
	li x6, -1
	csrrw x23, 0x245, x6	// Write all 1s to CSR
	csrrw x23, 0x245, x0	// Write all 0s to CSR
	csrrw x23, 0x245, x18	// Restore CSR

// Testing CSR 0x246
	csrr x3, 0x246	// Read CSR
	li x14, -1
	csrrw x30, 0x246, x14	// Write all 1s to CSR
	csrrw x30, 0x246, x0	// Write all 0s to CSR
	csrrw x30, 0x246, x3	// Restore CSR

// Testing CSR 0x247
	csrr x28, 0x247	// Read CSR
	li x20, -1
	csrrw x4, 0x247, x20	// Write all 1s to CSR
	csrrw x4, 0x247, x0	// Write all 0s to CSR
	csrrw x4, 0x247, x28	// Restore CSR

// Testing CSR 0x248
	csrr x20, 0x248	// Read CSR
	li x21, -1
	csrrw x15, 0x248, x21	// Write all 1s to CSR
	csrrw x15, 0x248, x0	// Write all 0s to CSR
	csrrw x15, 0x248, x20	// Restore CSR

// Testing CSR 0x249
	csrr x23, 0x249	// Read CSR
	li x5, -1
	csrrw x20, 0x249, x5	// Write all 1s to CSR
	csrrw x20, 0x249, x0	// Write all 0s to CSR
	csrrw x20, 0x249, x23	// Restore CSR

// Testing CSR 0x24a
	csrr x20, 0x24a	// Read CSR
	li x2, -1
	csrrw x9, 0x24a, x2	// Write all 1s to CSR
	csrrw x9, 0x24a, x0	// Write all 0s to CSR
	csrrw x9, 0x24a, x20	// Restore CSR

// Testing CSR 0x24b
	csrr x11, 0x24b	// Read CSR
	li x26, -1
	csrrw x24, 0x24b, x26	// Write all 1s to CSR
	csrrw x24, 0x24b, x0	// Write all 0s to CSR
	csrrw x24, 0x24b, x11	// Restore CSR

// Testing CSR 0x24c
	csrr x24, 0x24c	// Read CSR
	li x13, -1
	csrrw x1, 0x24c, x13	// Write all 1s to CSR
	csrrw x1, 0x24c, x0	// Write all 0s to CSR
	csrrw x1, 0x24c, x24	// Restore CSR

// Testing CSR 0x24d
	csrr x21, 0x24d	// Read CSR
	li x30, -1
	csrrw x29, 0x24d, x30	// Write all 1s to CSR
	csrrw x29, 0x24d, x0	// Write all 0s to CSR
	csrrw x29, 0x24d, x21	// Restore CSR

// Testing CSR 0x24e
	csrr x2, 0x24e	// Read CSR
	li x16, -1
	csrrw x3, 0x24e, x16	// Write all 1s to CSR
	csrrw x3, 0x24e, x0	// Write all 0s to CSR
	csrrw x3, 0x24e, x2	// Restore CSR

// Testing CSR 0x24f
	csrr x12, 0x24f	// Read CSR
	li x10, -1
	csrrw x22, 0x24f, x10	// Write all 1s to CSR
	csrrw x22, 0x24f, x0	// Write all 0s to CSR
	csrrw x22, 0x24f, x12	// Restore CSR

// Testing CSR 0x250
	csrr x5, 0x250	// Read CSR
	li x15, -1
	csrrw x8, 0x250, x15	// Write all 1s to CSR
	csrrw x8, 0x250, x0	// Write all 0s to CSR
	csrrw x8, 0x250, x5	// Restore CSR

// Testing CSR 0x251
	csrr x17, 0x251	// Read CSR
	li x12, -1
	csrrw x6, 0x251, x12	// Write all 1s to CSR
	csrrw x6, 0x251, x0	// Write all 0s to CSR
	csrrw x6, 0x251, x17	// Restore CSR

// Testing CSR 0x252
	csrr x24, 0x252	// Read CSR
	li x25, -1
	csrrw x13, 0x252, x25	// Write all 1s to CSR
	csrrw x13, 0x252, x0	// Write all 0s to CSR
	csrrw x13, 0x252, x24	// Restore CSR

// Testing CSR 0x253
	csrr x11, 0x253	// Read CSR
	li x9, -1
	csrrw x26, 0x253, x9	// Write all 1s to CSR
	csrrw x26, 0x253, x0	// Write all 0s to CSR
	csrrw x26, 0x253, x11	// Restore CSR

// Testing CSR 0x254
	csrr x16, 0x254	// Read CSR
	li x31, -1
	csrrw x13, 0x254, x31	// Write all 1s to CSR
	csrrw x13, 0x254, x0	// Write all 0s to CSR
	csrrw x13, 0x254, x16	// Restore CSR

// Testing CSR 0x255
	csrr x1, 0x255	// Read CSR
	li x10, -1
	csrrw x17, 0x255, x10	// Write all 1s to CSR
	csrrw x17, 0x255, x0	// Write all 0s to CSR
	csrrw x17, 0x255, x1	// Restore CSR

// Testing CSR 0x256
	csrr x29, 0x256	// Read CSR
	li x10, -1
	csrrw x18, 0x256, x10	// Write all 1s to CSR
	csrrw x18, 0x256, x0	// Write all 0s to CSR
	csrrw x18, 0x256, x29	// Restore CSR

// Testing CSR 0x257
	csrr x16, 0x257	// Read CSR
	li x2, -1
	csrrw x25, 0x257, x2	// Write all 1s to CSR
	csrrw x25, 0x257, x0	// Write all 0s to CSR
	csrrw x25, 0x257, x16	// Restore CSR

// Testing CSR 0x258
	csrr x18, 0x258	// Read CSR
	li x19, -1
	csrrw x9, 0x258, x19	// Write all 1s to CSR
	csrrw x9, 0x258, x0	// Write all 0s to CSR
	csrrw x9, 0x258, x18	// Restore CSR

// Testing CSR 0x259
	csrr x30, 0x259	// Read CSR
	li x22, -1
	csrrw x2, 0x259, x22	// Write all 1s to CSR
	csrrw x2, 0x259, x0	// Write all 0s to CSR
	csrrw x2, 0x259, x30	// Restore CSR

// Testing CSR 0x25a
	csrr x15, 0x25a	// Read CSR
	li x13, -1
	csrrw x24, 0x25a, x13	// Write all 1s to CSR
	csrrw x24, 0x25a, x0	// Write all 0s to CSR
	csrrw x24, 0x25a, x15	// Restore CSR

// Testing CSR 0x25b
	csrr x4, 0x25b	// Read CSR
	li x13, -1
	csrrw x12, 0x25b, x13	// Write all 1s to CSR
	csrrw x12, 0x25b, x0	// Write all 0s to CSR
	csrrw x12, 0x25b, x4	// Restore CSR

// Testing CSR 0x25c
	csrr x16, 0x25c	// Read CSR
	li x2, -1
	csrrw x1, 0x25c, x2	// Write all 1s to CSR
	csrrw x1, 0x25c, x0	// Write all 0s to CSR
	csrrw x1, 0x25c, x16	// Restore CSR

// Testing CSR 0x25d
	csrr x9, 0x25d	// Read CSR
	li x24, -1
	csrrw x2, 0x25d, x24	// Write all 1s to CSR
	csrrw x2, 0x25d, x0	// Write all 0s to CSR
	csrrw x2, 0x25d, x9	// Restore CSR

// Testing CSR 0x25e
	csrr x9, 0x25e	// Read CSR
	li x22, -1
	csrrw x19, 0x25e, x22	// Write all 1s to CSR
	csrrw x19, 0x25e, x0	// Write all 0s to CSR
	csrrw x19, 0x25e, x9	// Restore CSR

// Testing CSR 0x25f
	csrr x23, 0x25f	// Read CSR
	li x25, -1
	csrrw x30, 0x25f, x25	// Write all 1s to CSR
	csrrw x30, 0x25f, x0	// Write all 0s to CSR
	csrrw x30, 0x25f, x23	// Restore CSR

// Testing CSR 0x260
	csrr x10, 0x260	// Read CSR
	li x22, -1
	csrrw x25, 0x260, x22	// Write all 1s to CSR
	csrrw x25, 0x260, x0	// Write all 0s to CSR
	csrrw x25, 0x260, x10	// Restore CSR

// Testing CSR 0x261
	csrr x7, 0x261	// Read CSR
	li x25, -1
	csrrw x17, 0x261, x25	// Write all 1s to CSR
	csrrw x17, 0x261, x0	// Write all 0s to CSR
	csrrw x17, 0x261, x7	// Restore CSR

// Testing CSR 0x262
	csrr x17, 0x262	// Read CSR
	li x11, -1
	csrrw x13, 0x262, x11	// Write all 1s to CSR
	csrrw x13, 0x262, x0	// Write all 0s to CSR
	csrrw x13, 0x262, x17	// Restore CSR

// Testing CSR 0x263
	csrr x27, 0x263	// Read CSR
	li x9, -1
	csrrw x7, 0x263, x9	// Write all 1s to CSR
	csrrw x7, 0x263, x0	// Write all 0s to CSR
	csrrw x7, 0x263, x27	// Restore CSR

// Testing CSR 0x264
	csrr x4, 0x264	// Read CSR
	li x19, -1
	csrrw x11, 0x264, x19	// Write all 1s to CSR
	csrrw x11, 0x264, x0	// Write all 0s to CSR
	csrrw x11, 0x264, x4	// Restore CSR

// Testing CSR 0x265
	csrr x26, 0x265	// Read CSR
	li x31, -1
	csrrw x30, 0x265, x31	// Write all 1s to CSR
	csrrw x30, 0x265, x0	// Write all 0s to CSR
	csrrw x30, 0x265, x26	// Restore CSR

// Testing CSR 0x266
	csrr x8, 0x266	// Read CSR
	li x19, -1
	csrrw x22, 0x266, x19	// Write all 1s to CSR
	csrrw x22, 0x266, x0	// Write all 0s to CSR
	csrrw x22, 0x266, x8	// Restore CSR

// Testing CSR 0x267
	csrr x24, 0x267	// Read CSR
	li x18, -1
	csrrw x22, 0x267, x18	// Write all 1s to CSR
	csrrw x22, 0x267, x0	// Write all 0s to CSR
	csrrw x22, 0x267, x24	// Restore CSR

// Testing CSR 0x268
	csrr x29, 0x268	// Read CSR
	li x12, -1
	csrrw x6, 0x268, x12	// Write all 1s to CSR
	csrrw x6, 0x268, x0	// Write all 0s to CSR
	csrrw x6, 0x268, x29	// Restore CSR

// Testing CSR 0x269
	csrr x30, 0x269	// Read CSR
	li x28, -1
	csrrw x29, 0x269, x28	// Write all 1s to CSR
	csrrw x29, 0x269, x0	// Write all 0s to CSR
	csrrw x29, 0x269, x30	// Restore CSR

// Testing CSR 0x26a
	csrr x5, 0x26a	// Read CSR
	li x11, -1
	csrrw x28, 0x26a, x11	// Write all 1s to CSR
	csrrw x28, 0x26a, x0	// Write all 0s to CSR
	csrrw x28, 0x26a, x5	// Restore CSR

// Testing CSR 0x26b
	csrr x24, 0x26b	// Read CSR
	li x27, -1
	csrrw x1, 0x26b, x27	// Write all 1s to CSR
	csrrw x1, 0x26b, x0	// Write all 0s to CSR
	csrrw x1, 0x26b, x24	// Restore CSR

// Testing CSR 0x26c
	csrr x19, 0x26c	// Read CSR
	li x27, -1
	csrrw x2, 0x26c, x27	// Write all 1s to CSR
	csrrw x2, 0x26c, x0	// Write all 0s to CSR
	csrrw x2, 0x26c, x19	// Restore CSR

// Testing CSR 0x26d
	csrr x19, 0x26d	// Read CSR
	li x5, -1
	csrrw x31, 0x26d, x5	// Write all 1s to CSR
	csrrw x31, 0x26d, x0	// Write all 0s to CSR
	csrrw x31, 0x26d, x19	// Restore CSR

// Testing CSR 0x26e
	csrr x12, 0x26e	// Read CSR
	li x21, -1
	csrrw x10, 0x26e, x21	// Write all 1s to CSR
	csrrw x10, 0x26e, x0	// Write all 0s to CSR
	csrrw x10, 0x26e, x12	// Restore CSR

// Testing CSR 0x26f
	csrr x10, 0x26f	// Read CSR
	li x11, -1
	csrrw x16, 0x26f, x11	// Write all 1s to CSR
	csrrw x16, 0x26f, x0	// Write all 0s to CSR
	csrrw x16, 0x26f, x10	// Restore CSR

// Testing CSR 0x270
	csrr x26, 0x270	// Read CSR
	li x13, -1
	csrrw x20, 0x270, x13	// Write all 1s to CSR
	csrrw x20, 0x270, x0	// Write all 0s to CSR
	csrrw x20, 0x270, x26	// Restore CSR

// Testing CSR 0x271
	csrr x14, 0x271	// Read CSR
	li x6, -1
	csrrw x1, 0x271, x6	// Write all 1s to CSR
	csrrw x1, 0x271, x0	// Write all 0s to CSR
	csrrw x1, 0x271, x14	// Restore CSR

// Testing CSR 0x272
	csrr x26, 0x272	// Read CSR
	li x5, -1
	csrrw x19, 0x272, x5	// Write all 1s to CSR
	csrrw x19, 0x272, x0	// Write all 0s to CSR
	csrrw x19, 0x272, x26	// Restore CSR

// Testing CSR 0x273
	csrr x2, 0x273	// Read CSR
	li x15, -1
	csrrw x5, 0x273, x15	// Write all 1s to CSR
	csrrw x5, 0x273, x0	// Write all 0s to CSR
	csrrw x5, 0x273, x2	// Restore CSR

// Testing CSR 0x274
	csrr x11, 0x274	// Read CSR
	li x30, -1
	csrrw x1, 0x274, x30	// Write all 1s to CSR
	csrrw x1, 0x274, x0	// Write all 0s to CSR
	csrrw x1, 0x274, x11	// Restore CSR

// Testing CSR 0x275
	csrr x31, 0x275	// Read CSR
	li x24, -1
	csrrw x16, 0x275, x24	// Write all 1s to CSR
	csrrw x16, 0x275, x0	// Write all 0s to CSR
	csrrw x16, 0x275, x31	// Restore CSR

// Testing CSR 0x276
	csrr x30, 0x276	// Read CSR
	li x31, -1
	csrrw x22, 0x276, x31	// Write all 1s to CSR
	csrrw x22, 0x276, x0	// Write all 0s to CSR
	csrrw x22, 0x276, x30	// Restore CSR

// Testing CSR 0x277
	csrr x27, 0x277	// Read CSR
	li x22, -1
	csrrw x25, 0x277, x22	// Write all 1s to CSR
	csrrw x25, 0x277, x0	// Write all 0s to CSR
	csrrw x25, 0x277, x27	// Restore CSR

// Testing CSR 0x278
	csrr x9, 0x278	// Read CSR
	li x24, -1
	csrrw x20, 0x278, x24	// Write all 1s to CSR
	csrrw x20, 0x278, x0	// Write all 0s to CSR
	csrrw x20, 0x278, x9	// Restore CSR

// Testing CSR 0x279
	csrr x7, 0x279	// Read CSR
	li x3, -1
	csrrw x18, 0x279, x3	// Write all 1s to CSR
	csrrw x18, 0x279, x0	// Write all 0s to CSR
	csrrw x18, 0x279, x7	// Restore CSR

// Testing CSR 0x27a
	csrr x30, 0x27a	// Read CSR
	li x14, -1
	csrrw x9, 0x27a, x14	// Write all 1s to CSR
	csrrw x9, 0x27a, x0	// Write all 0s to CSR
	csrrw x9, 0x27a, x30	// Restore CSR

// Testing CSR 0x27b
	csrr x31, 0x27b	// Read CSR
	li x27, -1
	csrrw x6, 0x27b, x27	// Write all 1s to CSR
	csrrw x6, 0x27b, x0	// Write all 0s to CSR
	csrrw x6, 0x27b, x31	// Restore CSR

// Testing CSR 0x27c
	csrr x17, 0x27c	// Read CSR
	li x6, -1
	csrrw x3, 0x27c, x6	// Write all 1s to CSR
	csrrw x3, 0x27c, x0	// Write all 0s to CSR
	csrrw x3, 0x27c, x17	// Restore CSR

// Testing CSR 0x27d
	csrr x22, 0x27d	// Read CSR
	li x21, -1
	csrrw x6, 0x27d, x21	// Write all 1s to CSR
	csrrw x6, 0x27d, x0	// Write all 0s to CSR
	csrrw x6, 0x27d, x22	// Restore CSR

// Testing CSR 0x27e
	csrr x19, 0x27e	// Read CSR
	li x4, -1
	csrrw x31, 0x27e, x4	// Write all 1s to CSR
	csrrw x31, 0x27e, x0	// Write all 0s to CSR
	csrrw x31, 0x27e, x19	// Restore CSR

// Testing CSR 0x27f
	csrr x17, 0x27f	// Read CSR
	li x21, -1
	csrrw x26, 0x27f, x21	// Write all 1s to CSR
	csrrw x26, 0x27f, x0	// Write all 0s to CSR
	csrrw x26, 0x27f, x17	// Restore CSR

// Testing CSR 0x280
	csrr x18, 0x280	// Read CSR
	li x20, -1
	csrrw x13, 0x280, x20	// Write all 1s to CSR
	csrrw x13, 0x280, x0	// Write all 0s to CSR
	csrrw x13, 0x280, x18	// Restore CSR

// Testing CSR 0x281
	csrr x25, 0x281	// Read CSR
	li x14, -1
	csrrw x9, 0x281, x14	// Write all 1s to CSR
	csrrw x9, 0x281, x0	// Write all 0s to CSR
	csrrw x9, 0x281, x25	// Restore CSR

// Testing CSR 0x282
	csrr x10, 0x282	// Read CSR
	li x14, -1
	csrrw x1, 0x282, x14	// Write all 1s to CSR
	csrrw x1, 0x282, x0	// Write all 0s to CSR
	csrrw x1, 0x282, x10	// Restore CSR

// Testing CSR 0x283
	csrr x25, 0x283	// Read CSR
	li x27, -1
	csrrw x23, 0x283, x27	// Write all 1s to CSR
	csrrw x23, 0x283, x0	// Write all 0s to CSR
	csrrw x23, 0x283, x25	// Restore CSR

// Testing CSR 0x284
	csrr x9, 0x284	// Read CSR
	li x31, -1
	csrrw x18, 0x284, x31	// Write all 1s to CSR
	csrrw x18, 0x284, x0	// Write all 0s to CSR
	csrrw x18, 0x284, x9	// Restore CSR

// Testing CSR 0x285
	csrr x17, 0x285	// Read CSR
	li x18, -1
	csrrw x11, 0x285, x18	// Write all 1s to CSR
	csrrw x11, 0x285, x0	// Write all 0s to CSR
	csrrw x11, 0x285, x17	// Restore CSR

// Testing CSR 0x286
	csrr x11, 0x286	// Read CSR
	li x7, -1
	csrrw x23, 0x286, x7	// Write all 1s to CSR
	csrrw x23, 0x286, x0	// Write all 0s to CSR
	csrrw x23, 0x286, x11	// Restore CSR

// Testing CSR 0x287
	csrr x26, 0x287	// Read CSR
	li x14, -1
	csrrw x5, 0x287, x14	// Write all 1s to CSR
	csrrw x5, 0x287, x0	// Write all 0s to CSR
	csrrw x5, 0x287, x26	// Restore CSR

// Testing CSR 0x288
	csrr x28, 0x288	// Read CSR
	li x1, -1
	csrrw x25, 0x288, x1	// Write all 1s to CSR
	csrrw x25, 0x288, x0	// Write all 0s to CSR
	csrrw x25, 0x288, x28	// Restore CSR

// Testing CSR 0x289
	csrr x17, 0x289	// Read CSR
	li x5, -1
	csrrw x26, 0x289, x5	// Write all 1s to CSR
	csrrw x26, 0x289, x0	// Write all 0s to CSR
	csrrw x26, 0x289, x17	// Restore CSR

// Testing CSR 0x28a
	csrr x22, 0x28a	// Read CSR
	li x23, -1
	csrrw x30, 0x28a, x23	// Write all 1s to CSR
	csrrw x30, 0x28a, x0	// Write all 0s to CSR
	csrrw x30, 0x28a, x22	// Restore CSR

// Testing CSR 0x28b
	csrr x26, 0x28b	// Read CSR
	li x19, -1
	csrrw x13, 0x28b, x19	// Write all 1s to CSR
	csrrw x13, 0x28b, x0	// Write all 0s to CSR
	csrrw x13, 0x28b, x26	// Restore CSR

// Testing CSR 0x28c
	csrr x12, 0x28c	// Read CSR
	li x15, -1
	csrrw x31, 0x28c, x15	// Write all 1s to CSR
	csrrw x31, 0x28c, x0	// Write all 0s to CSR
	csrrw x31, 0x28c, x12	// Restore CSR

// Testing CSR 0x28d
	csrr x2, 0x28d	// Read CSR
	li x18, -1
	csrrw x30, 0x28d, x18	// Write all 1s to CSR
	csrrw x30, 0x28d, x0	// Write all 0s to CSR
	csrrw x30, 0x28d, x2	// Restore CSR

// Testing CSR 0x28e
	csrr x14, 0x28e	// Read CSR
	li x21, -1
	csrrw x20, 0x28e, x21	// Write all 1s to CSR
	csrrw x20, 0x28e, x0	// Write all 0s to CSR
	csrrw x20, 0x28e, x14	// Restore CSR

// Testing CSR 0x28f
	csrr x26, 0x28f	// Read CSR
	li x8, -1
	csrrw x25, 0x28f, x8	// Write all 1s to CSR
	csrrw x25, 0x28f, x0	// Write all 0s to CSR
	csrrw x25, 0x28f, x26	// Restore CSR

// Testing CSR 0x290
	csrr x29, 0x290	// Read CSR
	li x1, -1
	csrrw x12, 0x290, x1	// Write all 1s to CSR
	csrrw x12, 0x290, x0	// Write all 0s to CSR
	csrrw x12, 0x290, x29	// Restore CSR

// Testing CSR 0x291
	csrr x17, 0x291	// Read CSR
	li x31, -1
	csrrw x6, 0x291, x31	// Write all 1s to CSR
	csrrw x6, 0x291, x0	// Write all 0s to CSR
	csrrw x6, 0x291, x17	// Restore CSR

// Testing CSR 0x292
	csrr x22, 0x292	// Read CSR
	li x7, -1
	csrrw x21, 0x292, x7	// Write all 1s to CSR
	csrrw x21, 0x292, x0	// Write all 0s to CSR
	csrrw x21, 0x292, x22	// Restore CSR

// Testing CSR 0x293
	csrr x12, 0x293	// Read CSR
	li x21, -1
	csrrw x23, 0x293, x21	// Write all 1s to CSR
	csrrw x23, 0x293, x0	// Write all 0s to CSR
	csrrw x23, 0x293, x12	// Restore CSR

// Testing CSR 0x294
	csrr x16, 0x294	// Read CSR
	li x1, -1
	csrrw x24, 0x294, x1	// Write all 1s to CSR
	csrrw x24, 0x294, x0	// Write all 0s to CSR
	csrrw x24, 0x294, x16	// Restore CSR

// Testing CSR 0x295
	csrr x24, 0x295	// Read CSR
	li x8, -1
	csrrw x19, 0x295, x8	// Write all 1s to CSR
	csrrw x19, 0x295, x0	// Write all 0s to CSR
	csrrw x19, 0x295, x24	// Restore CSR

// Testing CSR 0x296
	csrr x29, 0x296	// Read CSR
	li x8, -1
	csrrw x9, 0x296, x8	// Write all 1s to CSR
	csrrw x9, 0x296, x0	// Write all 0s to CSR
	csrrw x9, 0x296, x29	// Restore CSR

// Testing CSR 0x297
	csrr x6, 0x297	// Read CSR
	li x31, -1
	csrrw x25, 0x297, x31	// Write all 1s to CSR
	csrrw x25, 0x297, x0	// Write all 0s to CSR
	csrrw x25, 0x297, x6	// Restore CSR

// Testing CSR 0x298
	csrr x30, 0x298	// Read CSR
	li x14, -1
	csrrw x3, 0x298, x14	// Write all 1s to CSR
	csrrw x3, 0x298, x0	// Write all 0s to CSR
	csrrw x3, 0x298, x30	// Restore CSR

// Testing CSR 0x299
	csrr x19, 0x299	// Read CSR
	li x15, -1
	csrrw x8, 0x299, x15	// Write all 1s to CSR
	csrrw x8, 0x299, x0	// Write all 0s to CSR
	csrrw x8, 0x299, x19	// Restore CSR

// Testing CSR 0x29a
	csrr x24, 0x29a	// Read CSR
	li x23, -1
	csrrw x15, 0x29a, x23	// Write all 1s to CSR
	csrrw x15, 0x29a, x0	// Write all 0s to CSR
	csrrw x15, 0x29a, x24	// Restore CSR

// Testing CSR 0x29b
	csrr x28, 0x29b	// Read CSR
	li x17, -1
	csrrw x29, 0x29b, x17	// Write all 1s to CSR
	csrrw x29, 0x29b, x0	// Write all 0s to CSR
	csrrw x29, 0x29b, x28	// Restore CSR

// Testing CSR 0x29c
	csrr x26, 0x29c	// Read CSR
	li x4, -1
	csrrw x23, 0x29c, x4	// Write all 1s to CSR
	csrrw x23, 0x29c, x0	// Write all 0s to CSR
	csrrw x23, 0x29c, x26	// Restore CSR

// Testing CSR 0x29d
	csrr x31, 0x29d	// Read CSR
	li x7, -1
	csrrw x6, 0x29d, x7	// Write all 1s to CSR
	csrrw x6, 0x29d, x0	// Write all 0s to CSR
	csrrw x6, 0x29d, x31	// Restore CSR

// Testing CSR 0x29e
	csrr x15, 0x29e	// Read CSR
	li x30, -1
	csrrw x3, 0x29e, x30	// Write all 1s to CSR
	csrrw x3, 0x29e, x0	// Write all 0s to CSR
	csrrw x3, 0x29e, x15	// Restore CSR

// Testing CSR 0x29f
	csrr x30, 0x29f	// Read CSR
	li x14, -1
	csrrw x21, 0x29f, x14	// Write all 1s to CSR
	csrrw x21, 0x29f, x0	// Write all 0s to CSR
	csrrw x21, 0x29f, x30	// Restore CSR

// Testing CSR 0x2a0
	csrr x13, 0x2a0	// Read CSR
	li x31, -1
	csrrw x9, 0x2a0, x31	// Write all 1s to CSR
	csrrw x9, 0x2a0, x0	// Write all 0s to CSR
	csrrw x9, 0x2a0, x13	// Restore CSR

// Testing CSR 0x2a1
	csrr x9, 0x2a1	// Read CSR
	li x14, -1
	csrrw x29, 0x2a1, x14	// Write all 1s to CSR
	csrrw x29, 0x2a1, x0	// Write all 0s to CSR
	csrrw x29, 0x2a1, x9	// Restore CSR

// Testing CSR 0x2a2
	csrr x25, 0x2a2	// Read CSR
	li x20, -1
	csrrw x12, 0x2a2, x20	// Write all 1s to CSR
	csrrw x12, 0x2a2, x0	// Write all 0s to CSR
	csrrw x12, 0x2a2, x25	// Restore CSR

// Testing CSR 0x2a3
	csrr x11, 0x2a3	// Read CSR
	li x3, -1
	csrrw x10, 0x2a3, x3	// Write all 1s to CSR
	csrrw x10, 0x2a3, x0	// Write all 0s to CSR
	csrrw x10, 0x2a3, x11	// Restore CSR

// Testing CSR 0x2a4
	csrr x1, 0x2a4	// Read CSR
	li x16, -1
	csrrw x25, 0x2a4, x16	// Write all 1s to CSR
	csrrw x25, 0x2a4, x0	// Write all 0s to CSR
	csrrw x25, 0x2a4, x1	// Restore CSR

// Testing CSR 0x2a5
	csrr x9, 0x2a5	// Read CSR
	li x7, -1
	csrrw x25, 0x2a5, x7	// Write all 1s to CSR
	csrrw x25, 0x2a5, x0	// Write all 0s to CSR
	csrrw x25, 0x2a5, x9	// Restore CSR

// Testing CSR 0x2a6
	csrr x13, 0x2a6	// Read CSR
	li x25, -1
	csrrw x14, 0x2a6, x25	// Write all 1s to CSR
	csrrw x14, 0x2a6, x0	// Write all 0s to CSR
	csrrw x14, 0x2a6, x13	// Restore CSR

// Testing CSR 0x2a7
	csrr x21, 0x2a7	// Read CSR
	li x13, -1
	csrrw x22, 0x2a7, x13	// Write all 1s to CSR
	csrrw x22, 0x2a7, x0	// Write all 0s to CSR
	csrrw x22, 0x2a7, x21	// Restore CSR

// Testing CSR 0x2a8
	csrr x23, 0x2a8	// Read CSR
	li x29, -1
	csrrw x27, 0x2a8, x29	// Write all 1s to CSR
	csrrw x27, 0x2a8, x0	// Write all 0s to CSR
	csrrw x27, 0x2a8, x23	// Restore CSR

// Testing CSR 0x2a9
	csrr x2, 0x2a9	// Read CSR
	li x19, -1
	csrrw x15, 0x2a9, x19	// Write all 1s to CSR
	csrrw x15, 0x2a9, x0	// Write all 0s to CSR
	csrrw x15, 0x2a9, x2	// Restore CSR

// Testing CSR 0x2aa
	csrr x12, 0x2aa	// Read CSR
	li x27, -1
	csrrw x19, 0x2aa, x27	// Write all 1s to CSR
	csrrw x19, 0x2aa, x0	// Write all 0s to CSR
	csrrw x19, 0x2aa, x12	// Restore CSR

// Testing CSR 0x2ab
	csrr x5, 0x2ab	// Read CSR
	li x19, -1
	csrrw x23, 0x2ab, x19	// Write all 1s to CSR
	csrrw x23, 0x2ab, x0	// Write all 0s to CSR
	csrrw x23, 0x2ab, x5	// Restore CSR

// Testing CSR 0x2ac
	csrr x9, 0x2ac	// Read CSR
	li x11, -1
	csrrw x27, 0x2ac, x11	// Write all 1s to CSR
	csrrw x27, 0x2ac, x0	// Write all 0s to CSR
	csrrw x27, 0x2ac, x9	// Restore CSR

// Testing CSR 0x2ad
	csrr x1, 0x2ad	// Read CSR
	li x13, -1
	csrrw x16, 0x2ad, x13	// Write all 1s to CSR
	csrrw x16, 0x2ad, x0	// Write all 0s to CSR
	csrrw x16, 0x2ad, x1	// Restore CSR

// Testing CSR 0x2ae
	csrr x30, 0x2ae	// Read CSR
	li x17, -1
	csrrw x5, 0x2ae, x17	// Write all 1s to CSR
	csrrw x5, 0x2ae, x0	// Write all 0s to CSR
	csrrw x5, 0x2ae, x30	// Restore CSR

// Testing CSR 0x2af
	csrr x2, 0x2af	// Read CSR
	li x3, -1
	csrrw x19, 0x2af, x3	// Write all 1s to CSR
	csrrw x19, 0x2af, x0	// Write all 0s to CSR
	csrrw x19, 0x2af, x2	// Restore CSR

// Testing CSR 0x2b0
	csrr x28, 0x2b0	// Read CSR
	li x12, -1
	csrrw x1, 0x2b0, x12	// Write all 1s to CSR
	csrrw x1, 0x2b0, x0	// Write all 0s to CSR
	csrrw x1, 0x2b0, x28	// Restore CSR

// Testing CSR 0x2b1
	csrr x3, 0x2b1	// Read CSR
	li x7, -1
	csrrw x23, 0x2b1, x7	// Write all 1s to CSR
	csrrw x23, 0x2b1, x0	// Write all 0s to CSR
	csrrw x23, 0x2b1, x3	// Restore CSR

// Testing CSR 0x2b2
	csrr x4, 0x2b2	// Read CSR
	li x22, -1
	csrrw x18, 0x2b2, x22	// Write all 1s to CSR
	csrrw x18, 0x2b2, x0	// Write all 0s to CSR
	csrrw x18, 0x2b2, x4	// Restore CSR

// Testing CSR 0x2b3
	csrr x16, 0x2b3	// Read CSR
	li x2, -1
	csrrw x11, 0x2b3, x2	// Write all 1s to CSR
	csrrw x11, 0x2b3, x0	// Write all 0s to CSR
	csrrw x11, 0x2b3, x16	// Restore CSR

// Testing CSR 0x2b4
	csrr x30, 0x2b4	// Read CSR
	li x27, -1
	csrrw x28, 0x2b4, x27	// Write all 1s to CSR
	csrrw x28, 0x2b4, x0	// Write all 0s to CSR
	csrrw x28, 0x2b4, x30	// Restore CSR

// Testing CSR 0x2b5
	csrr x31, 0x2b5	// Read CSR
	li x11, -1
	csrrw x1, 0x2b5, x11	// Write all 1s to CSR
	csrrw x1, 0x2b5, x0	// Write all 0s to CSR
	csrrw x1, 0x2b5, x31	// Restore CSR

// Testing CSR 0x2b6
	csrr x13, 0x2b6	// Read CSR
	li x29, -1
	csrrw x5, 0x2b6, x29	// Write all 1s to CSR
	csrrw x5, 0x2b6, x0	// Write all 0s to CSR
	csrrw x5, 0x2b6, x13	// Restore CSR

// Testing CSR 0x2b7
	csrr x25, 0x2b7	// Read CSR
	li x21, -1
	csrrw x9, 0x2b7, x21	// Write all 1s to CSR
	csrrw x9, 0x2b7, x0	// Write all 0s to CSR
	csrrw x9, 0x2b7, x25	// Restore CSR

// Testing CSR 0x2b8
	csrr x14, 0x2b8	// Read CSR
	li x22, -1
	csrrw x5, 0x2b8, x22	// Write all 1s to CSR
	csrrw x5, 0x2b8, x0	// Write all 0s to CSR
	csrrw x5, 0x2b8, x14	// Restore CSR

// Testing CSR 0x2b9
	csrr x20, 0x2b9	// Read CSR
	li x5, -1
	csrrw x13, 0x2b9, x5	// Write all 1s to CSR
	csrrw x13, 0x2b9, x0	// Write all 0s to CSR
	csrrw x13, 0x2b9, x20	// Restore CSR

// Testing CSR 0x2ba
	csrr x28, 0x2ba	// Read CSR
	li x10, -1
	csrrw x17, 0x2ba, x10	// Write all 1s to CSR
	csrrw x17, 0x2ba, x0	// Write all 0s to CSR
	csrrw x17, 0x2ba, x28	// Restore CSR

// Testing CSR 0x2bb
	csrr x2, 0x2bb	// Read CSR
	li x6, -1
	csrrw x5, 0x2bb, x6	// Write all 1s to CSR
	csrrw x5, 0x2bb, x0	// Write all 0s to CSR
	csrrw x5, 0x2bb, x2	// Restore CSR

// Testing CSR 0x2bc
	csrr x29, 0x2bc	// Read CSR
	li x5, -1
	csrrw x30, 0x2bc, x5	// Write all 1s to CSR
	csrrw x30, 0x2bc, x0	// Write all 0s to CSR
	csrrw x30, 0x2bc, x29	// Restore CSR

// Testing CSR 0x2bd
	csrr x16, 0x2bd	// Read CSR
	li x23, -1
	csrrw x21, 0x2bd, x23	// Write all 1s to CSR
	csrrw x21, 0x2bd, x0	// Write all 0s to CSR
	csrrw x21, 0x2bd, x16	// Restore CSR

// Testing CSR 0x2be
	csrr x23, 0x2be	// Read CSR
	li x25, -1
	csrrw x24, 0x2be, x25	// Write all 1s to CSR
	csrrw x24, 0x2be, x0	// Write all 0s to CSR
	csrrw x24, 0x2be, x23	// Restore CSR

// Testing CSR 0x2bf
	csrr x2, 0x2bf	// Read CSR
	li x24, -1
	csrrw x27, 0x2bf, x24	// Write all 1s to CSR
	csrrw x27, 0x2bf, x0	// Write all 0s to CSR
	csrrw x27, 0x2bf, x2	// Restore CSR

// Testing CSR 0x2c0
	csrr x17, 0x2c0	// Read CSR
	li x2, -1
	csrrw x27, 0x2c0, x2	// Write all 1s to CSR
	csrrw x27, 0x2c0, x0	// Write all 0s to CSR
	csrrw x27, 0x2c0, x17	// Restore CSR

// Testing CSR 0x2c1
	csrr x18, 0x2c1	// Read CSR
	li x23, -1
	csrrw x24, 0x2c1, x23	// Write all 1s to CSR
	csrrw x24, 0x2c1, x0	// Write all 0s to CSR
	csrrw x24, 0x2c1, x18	// Restore CSR

// Testing CSR 0x2c2
	csrr x23, 0x2c2	// Read CSR
	li x21, -1
	csrrw x13, 0x2c2, x21	// Write all 1s to CSR
	csrrw x13, 0x2c2, x0	// Write all 0s to CSR
	csrrw x13, 0x2c2, x23	// Restore CSR

// Testing CSR 0x2c3
	csrr x31, 0x2c3	// Read CSR
	li x6, -1
	csrrw x12, 0x2c3, x6	// Write all 1s to CSR
	csrrw x12, 0x2c3, x0	// Write all 0s to CSR
	csrrw x12, 0x2c3, x31	// Restore CSR

// Testing CSR 0x2c4
	csrr x26, 0x2c4	// Read CSR
	li x19, -1
	csrrw x27, 0x2c4, x19	// Write all 1s to CSR
	csrrw x27, 0x2c4, x0	// Write all 0s to CSR
	csrrw x27, 0x2c4, x26	// Restore CSR

// Testing CSR 0x2c5
	csrr x3, 0x2c5	// Read CSR
	li x6, -1
	csrrw x18, 0x2c5, x6	// Write all 1s to CSR
	csrrw x18, 0x2c5, x0	// Write all 0s to CSR
	csrrw x18, 0x2c5, x3	// Restore CSR

// Testing CSR 0x2c6
	csrr x27, 0x2c6	// Read CSR
	li x9, -1
	csrrw x7, 0x2c6, x9	// Write all 1s to CSR
	csrrw x7, 0x2c6, x0	// Write all 0s to CSR
	csrrw x7, 0x2c6, x27	// Restore CSR

// Testing CSR 0x2c7
	csrr x26, 0x2c7	// Read CSR
	li x9, -1
	csrrw x11, 0x2c7, x9	// Write all 1s to CSR
	csrrw x11, 0x2c7, x0	// Write all 0s to CSR
	csrrw x11, 0x2c7, x26	// Restore CSR

// Testing CSR 0x2c8
	csrr x23, 0x2c8	// Read CSR
	li x26, -1
	csrrw x9, 0x2c8, x26	// Write all 1s to CSR
	csrrw x9, 0x2c8, x0	// Write all 0s to CSR
	csrrw x9, 0x2c8, x23	// Restore CSR

// Testing CSR 0x2c9
	csrr x9, 0x2c9	// Read CSR
	li x17, -1
	csrrw x30, 0x2c9, x17	// Write all 1s to CSR
	csrrw x30, 0x2c9, x0	// Write all 0s to CSR
	csrrw x30, 0x2c9, x9	// Restore CSR

// Testing CSR 0x2ca
	csrr x15, 0x2ca	// Read CSR
	li x30, -1
	csrrw x5, 0x2ca, x30	// Write all 1s to CSR
	csrrw x5, 0x2ca, x0	// Write all 0s to CSR
	csrrw x5, 0x2ca, x15	// Restore CSR

// Testing CSR 0x2cb
	csrr x25, 0x2cb	// Read CSR
	li x29, -1
	csrrw x15, 0x2cb, x29	// Write all 1s to CSR
	csrrw x15, 0x2cb, x0	// Write all 0s to CSR
	csrrw x15, 0x2cb, x25	// Restore CSR

// Testing CSR 0x2cc
	csrr x18, 0x2cc	// Read CSR
	li x5, -1
	csrrw x2, 0x2cc, x5	// Write all 1s to CSR
	csrrw x2, 0x2cc, x0	// Write all 0s to CSR
	csrrw x2, 0x2cc, x18	// Restore CSR

// Testing CSR 0x2cd
	csrr x21, 0x2cd	// Read CSR
	li x19, -1
	csrrw x6, 0x2cd, x19	// Write all 1s to CSR
	csrrw x6, 0x2cd, x0	// Write all 0s to CSR
	csrrw x6, 0x2cd, x21	// Restore CSR

// Testing CSR 0x2ce
	csrr x21, 0x2ce	// Read CSR
	li x17, -1
	csrrw x2, 0x2ce, x17	// Write all 1s to CSR
	csrrw x2, 0x2ce, x0	// Write all 0s to CSR
	csrrw x2, 0x2ce, x21	// Restore CSR

// Testing CSR 0x2cf
	csrr x29, 0x2cf	// Read CSR
	li x25, -1
	csrrw x11, 0x2cf, x25	// Write all 1s to CSR
	csrrw x11, 0x2cf, x0	// Write all 0s to CSR
	csrrw x11, 0x2cf, x29	// Restore CSR

// Testing CSR 0x2d0
	csrr x27, 0x2d0	// Read CSR
	li x31, -1
	csrrw x3, 0x2d0, x31	// Write all 1s to CSR
	csrrw x3, 0x2d0, x0	// Write all 0s to CSR
	csrrw x3, 0x2d0, x27	// Restore CSR

// Testing CSR 0x2d1
	csrr x7, 0x2d1	// Read CSR
	li x21, -1
	csrrw x26, 0x2d1, x21	// Write all 1s to CSR
	csrrw x26, 0x2d1, x0	// Write all 0s to CSR
	csrrw x26, 0x2d1, x7	// Restore CSR

// Testing CSR 0x2d2
	csrr x15, 0x2d2	// Read CSR
	li x20, -1
	csrrw x8, 0x2d2, x20	// Write all 1s to CSR
	csrrw x8, 0x2d2, x0	// Write all 0s to CSR
	csrrw x8, 0x2d2, x15	// Restore CSR

// Testing CSR 0x2d3
	csrr x26, 0x2d3	// Read CSR
	li x15, -1
	csrrw x17, 0x2d3, x15	// Write all 1s to CSR
	csrrw x17, 0x2d3, x0	// Write all 0s to CSR
	csrrw x17, 0x2d3, x26	// Restore CSR

// Testing CSR 0x2d4
	csrr x6, 0x2d4	// Read CSR
	li x23, -1
	csrrw x11, 0x2d4, x23	// Write all 1s to CSR
	csrrw x11, 0x2d4, x0	// Write all 0s to CSR
	csrrw x11, 0x2d4, x6	// Restore CSR

// Testing CSR 0x2d5
	csrr x30, 0x2d5	// Read CSR
	li x21, -1
	csrrw x5, 0x2d5, x21	// Write all 1s to CSR
	csrrw x5, 0x2d5, x0	// Write all 0s to CSR
	csrrw x5, 0x2d5, x30	// Restore CSR

// Testing CSR 0x2d6
	csrr x16, 0x2d6	// Read CSR
	li x25, -1
	csrrw x18, 0x2d6, x25	// Write all 1s to CSR
	csrrw x18, 0x2d6, x0	// Write all 0s to CSR
	csrrw x18, 0x2d6, x16	// Restore CSR

// Testing CSR 0x2d7
	csrr x2, 0x2d7	// Read CSR
	li x18, -1
	csrrw x3, 0x2d7, x18	// Write all 1s to CSR
	csrrw x3, 0x2d7, x0	// Write all 0s to CSR
	csrrw x3, 0x2d7, x2	// Restore CSR

// Testing CSR 0x2d8
	csrr x27, 0x2d8	// Read CSR
	li x17, -1
	csrrw x11, 0x2d8, x17	// Write all 1s to CSR
	csrrw x11, 0x2d8, x0	// Write all 0s to CSR
	csrrw x11, 0x2d8, x27	// Restore CSR

// Testing CSR 0x2d9
	csrr x1, 0x2d9	// Read CSR
	li x27, -1
	csrrw x25, 0x2d9, x27	// Write all 1s to CSR
	csrrw x25, 0x2d9, x0	// Write all 0s to CSR
	csrrw x25, 0x2d9, x1	// Restore CSR

// Testing CSR 0x2da
	csrr x3, 0x2da	// Read CSR
	li x4, -1
	csrrw x14, 0x2da, x4	// Write all 1s to CSR
	csrrw x14, 0x2da, x0	// Write all 0s to CSR
	csrrw x14, 0x2da, x3	// Restore CSR

// Testing CSR 0x2db
	csrr x20, 0x2db	// Read CSR
	li x12, -1
	csrrw x19, 0x2db, x12	// Write all 1s to CSR
	csrrw x19, 0x2db, x0	// Write all 0s to CSR
	csrrw x19, 0x2db, x20	// Restore CSR

// Testing CSR 0x2dc
	csrr x15, 0x2dc	// Read CSR
	li x11, -1
	csrrw x27, 0x2dc, x11	// Write all 1s to CSR
	csrrw x27, 0x2dc, x0	// Write all 0s to CSR
	csrrw x27, 0x2dc, x15	// Restore CSR

// Testing CSR 0x2dd
	csrr x13, 0x2dd	// Read CSR
	li x17, -1
	csrrw x12, 0x2dd, x17	// Write all 1s to CSR
	csrrw x12, 0x2dd, x0	// Write all 0s to CSR
	csrrw x12, 0x2dd, x13	// Restore CSR

// Testing CSR 0x2de
	csrr x27, 0x2de	// Read CSR
	li x28, -1
	csrrw x21, 0x2de, x28	// Write all 1s to CSR
	csrrw x21, 0x2de, x0	// Write all 0s to CSR
	csrrw x21, 0x2de, x27	// Restore CSR

// Testing CSR 0x2df
	csrr x4, 0x2df	// Read CSR
	li x5, -1
	csrrw x11, 0x2df, x5	// Write all 1s to CSR
	csrrw x11, 0x2df, x0	// Write all 0s to CSR
	csrrw x11, 0x2df, x4	// Restore CSR

// Testing CSR 0x2e0
	csrr x30, 0x2e0	// Read CSR
	li x1, -1
	csrrw x6, 0x2e0, x1	// Write all 1s to CSR
	csrrw x6, 0x2e0, x0	// Write all 0s to CSR
	csrrw x6, 0x2e0, x30	// Restore CSR

// Testing CSR 0x2e1
	csrr x24, 0x2e1	// Read CSR
	li x5, -1
	csrrw x1, 0x2e1, x5	// Write all 1s to CSR
	csrrw x1, 0x2e1, x0	// Write all 0s to CSR
	csrrw x1, 0x2e1, x24	// Restore CSR

// Testing CSR 0x2e2
	csrr x11, 0x2e2	// Read CSR
	li x29, -1
	csrrw x20, 0x2e2, x29	// Write all 1s to CSR
	csrrw x20, 0x2e2, x0	// Write all 0s to CSR
	csrrw x20, 0x2e2, x11	// Restore CSR

// Testing CSR 0x2e3
	csrr x7, 0x2e3	// Read CSR
	li x2, -1
	csrrw x14, 0x2e3, x2	// Write all 1s to CSR
	csrrw x14, 0x2e3, x0	// Write all 0s to CSR
	csrrw x14, 0x2e3, x7	// Restore CSR

// Testing CSR 0x2e4
	csrr x21, 0x2e4	// Read CSR
	li x2, -1
	csrrw x23, 0x2e4, x2	// Write all 1s to CSR
	csrrw x23, 0x2e4, x0	// Write all 0s to CSR
	csrrw x23, 0x2e4, x21	// Restore CSR

// Testing CSR 0x2e5
	csrr x10, 0x2e5	// Read CSR
	li x26, -1
	csrrw x13, 0x2e5, x26	// Write all 1s to CSR
	csrrw x13, 0x2e5, x0	// Write all 0s to CSR
	csrrw x13, 0x2e5, x10	// Restore CSR

// Testing CSR 0x2e6
	csrr x30, 0x2e6	// Read CSR
	li x2, -1
	csrrw x20, 0x2e6, x2	// Write all 1s to CSR
	csrrw x20, 0x2e6, x0	// Write all 0s to CSR
	csrrw x20, 0x2e6, x30	// Restore CSR

// Testing CSR 0x2e7
	csrr x25, 0x2e7	// Read CSR
	li x26, -1
	csrrw x23, 0x2e7, x26	// Write all 1s to CSR
	csrrw x23, 0x2e7, x0	// Write all 0s to CSR
	csrrw x23, 0x2e7, x25	// Restore CSR

// Testing CSR 0x2e8
	csrr x6, 0x2e8	// Read CSR
	li x12, -1
	csrrw x30, 0x2e8, x12	// Write all 1s to CSR
	csrrw x30, 0x2e8, x0	// Write all 0s to CSR
	csrrw x30, 0x2e8, x6	// Restore CSR

// Testing CSR 0x2e9
	csrr x27, 0x2e9	// Read CSR
	li x30, -1
	csrrw x3, 0x2e9, x30	// Write all 1s to CSR
	csrrw x3, 0x2e9, x0	// Write all 0s to CSR
	csrrw x3, 0x2e9, x27	// Restore CSR

// Testing CSR 0x2ea
	csrr x14, 0x2ea	// Read CSR
	li x2, -1
	csrrw x15, 0x2ea, x2	// Write all 1s to CSR
	csrrw x15, 0x2ea, x0	// Write all 0s to CSR
	csrrw x15, 0x2ea, x14	// Restore CSR

// Testing CSR 0x2eb
	csrr x12, 0x2eb	// Read CSR
	li x20, -1
	csrrw x29, 0x2eb, x20	// Write all 1s to CSR
	csrrw x29, 0x2eb, x0	// Write all 0s to CSR
	csrrw x29, 0x2eb, x12	// Restore CSR

// Testing CSR 0x2ec
	csrr x20, 0x2ec	// Read CSR
	li x25, -1
	csrrw x9, 0x2ec, x25	// Write all 1s to CSR
	csrrw x9, 0x2ec, x0	// Write all 0s to CSR
	csrrw x9, 0x2ec, x20	// Restore CSR

// Testing CSR 0x2ed
	csrr x22, 0x2ed	// Read CSR
	li x10, -1
	csrrw x19, 0x2ed, x10	// Write all 1s to CSR
	csrrw x19, 0x2ed, x0	// Write all 0s to CSR
	csrrw x19, 0x2ed, x22	// Restore CSR

// Testing CSR 0x2ee
	csrr x28, 0x2ee	// Read CSR
	li x26, -1
	csrrw x15, 0x2ee, x26	// Write all 1s to CSR
	csrrw x15, 0x2ee, x0	// Write all 0s to CSR
	csrrw x15, 0x2ee, x28	// Restore CSR

// Testing CSR 0x2ef
	csrr x14, 0x2ef	// Read CSR
	li x6, -1
	csrrw x1, 0x2ef, x6	// Write all 1s to CSR
	csrrw x1, 0x2ef, x0	// Write all 0s to CSR
	csrrw x1, 0x2ef, x14	// Restore CSR

// Testing CSR 0x2f0
	csrr x15, 0x2f0	// Read CSR
	li x26, -1
	csrrw x9, 0x2f0, x26	// Write all 1s to CSR
	csrrw x9, 0x2f0, x0	// Write all 0s to CSR
	csrrw x9, 0x2f0, x15	// Restore CSR

// Testing CSR 0x2f1
	csrr x7, 0x2f1	// Read CSR
	li x31, -1
	csrrw x13, 0x2f1, x31	// Write all 1s to CSR
	csrrw x13, 0x2f1, x0	// Write all 0s to CSR
	csrrw x13, 0x2f1, x7	// Restore CSR

// Testing CSR 0x2f2
	csrr x3, 0x2f2	// Read CSR
	li x12, -1
	csrrw x4, 0x2f2, x12	// Write all 1s to CSR
	csrrw x4, 0x2f2, x0	// Write all 0s to CSR
	csrrw x4, 0x2f2, x3	// Restore CSR

// Testing CSR 0x2f3
	csrr x4, 0x2f3	// Read CSR
	li x1, -1
	csrrw x12, 0x2f3, x1	// Write all 1s to CSR
	csrrw x12, 0x2f3, x0	// Write all 0s to CSR
	csrrw x12, 0x2f3, x4	// Restore CSR

// Testing CSR 0x2f4
	csrr x1, 0x2f4	// Read CSR
	li x6, -1
	csrrw x13, 0x2f4, x6	// Write all 1s to CSR
	csrrw x13, 0x2f4, x0	// Write all 0s to CSR
	csrrw x13, 0x2f4, x1	// Restore CSR

// Testing CSR 0x2f5
	csrr x20, 0x2f5	// Read CSR
	li x23, -1
	csrrw x21, 0x2f5, x23	// Write all 1s to CSR
	csrrw x21, 0x2f5, x0	// Write all 0s to CSR
	csrrw x21, 0x2f5, x20	// Restore CSR

// Testing CSR 0x2f6
	csrr x29, 0x2f6	// Read CSR
	li x1, -1
	csrrw x11, 0x2f6, x1	// Write all 1s to CSR
	csrrw x11, 0x2f6, x0	// Write all 0s to CSR
	csrrw x11, 0x2f6, x29	// Restore CSR

// Testing CSR 0x2f7
	csrr x15, 0x2f7	// Read CSR
	li x26, -1
	csrrw x18, 0x2f7, x26	// Write all 1s to CSR
	csrrw x18, 0x2f7, x0	// Write all 0s to CSR
	csrrw x18, 0x2f7, x15	// Restore CSR

// Testing CSR 0x2f8
	csrr x24, 0x2f8	// Read CSR
	li x28, -1
	csrrw x23, 0x2f8, x28	// Write all 1s to CSR
	csrrw x23, 0x2f8, x0	// Write all 0s to CSR
	csrrw x23, 0x2f8, x24	// Restore CSR

// Testing CSR 0x2f9
	csrr x16, 0x2f9	// Read CSR
	li x28, -1
	csrrw x3, 0x2f9, x28	// Write all 1s to CSR
	csrrw x3, 0x2f9, x0	// Write all 0s to CSR
	csrrw x3, 0x2f9, x16	// Restore CSR

// Testing CSR 0x2fa
	csrr x2, 0x2fa	// Read CSR
	li x18, -1
	csrrw x28, 0x2fa, x18	// Write all 1s to CSR
	csrrw x28, 0x2fa, x0	// Write all 0s to CSR
	csrrw x28, 0x2fa, x2	// Restore CSR

// Testing CSR 0x2fb
	csrr x13, 0x2fb	// Read CSR
	li x26, -1
	csrrw x28, 0x2fb, x26	// Write all 1s to CSR
	csrrw x28, 0x2fb, x0	// Write all 0s to CSR
	csrrw x28, 0x2fb, x13	// Restore CSR

// Testing CSR 0x2fc
	csrr x30, 0x2fc	// Read CSR
	li x9, -1
	csrrw x1, 0x2fc, x9	// Write all 1s to CSR
	csrrw x1, 0x2fc, x0	// Write all 0s to CSR
	csrrw x1, 0x2fc, x30	// Restore CSR

// Testing CSR 0x2fd
	csrr x21, 0x2fd	// Read CSR
	li x17, -1
	csrrw x4, 0x2fd, x17	// Write all 1s to CSR
	csrrw x4, 0x2fd, x0	// Write all 0s to CSR
	csrrw x4, 0x2fd, x21	// Restore CSR

// Testing CSR 0x2fe
	csrr x27, 0x2fe	// Read CSR
	li x11, -1
	csrrw x3, 0x2fe, x11	// Write all 1s to CSR
	csrrw x3, 0x2fe, x0	// Write all 0s to CSR
	csrrw x3, 0x2fe, x27	// Restore CSR

// Testing CSR 0x2ff
	csrr x12, 0x2ff	// Read CSR
	li x31, -1
	csrrw x4, 0x2ff, x31	// Write all 1s to CSR
	csrrw x4, 0x2ff, x0	// Write all 0s to CSR
	csrrw x4, 0x2ff, x12	// Restore CSR

// Testing CSR 0x300
	csrr x16, 0x300	// Read CSR
	li x31, -1
	csrrw x2, 0x300, x31	// Write all 1s to CSR
	csrrw x2, 0x300, x0	// Write all 0s to CSR
	csrrw x2, 0x300, x16	// Restore CSR

// Testing CSR 0x301
	csrr x5, 0x301	// Read CSR
	li x30, -1
	csrrw x17, 0x301, x30	// Write all 1s to CSR
	csrrw x17, 0x301, x0	// Write all 0s to CSR
	csrrw x17, 0x301, x5	// Restore CSR

// Testing CSR 0x302
	csrr x21, 0x302	// Read CSR
	li x26, -1
	csrrw x10, 0x302, x26	// Write all 1s to CSR
	csrrw x10, 0x302, x0	// Write all 0s to CSR
	csrrw x10, 0x302, x21	// Restore CSR

// Testing CSR 0x303
	csrr x31, 0x303	// Read CSR
	li x2, -1
	csrrw x1, 0x303, x2	// Write all 1s to CSR
	csrrw x1, 0x303, x0	// Write all 0s to CSR
	csrrw x1, 0x303, x31	// Restore CSR

// Testing CSR 0x304
	csrr x13, 0x304	// Read CSR
	li x11, -1
	csrrw x6, 0x304, x11	// Write all 1s to CSR
	csrrw x6, 0x304, x0	// Write all 0s to CSR
	csrrw x6, 0x304, x13	// Restore CSR

// Testing CSR 0x305
	csrr x31, 0x305	// Read CSR
	li x18, -1
	csrrw x23, 0x305, x18	// Write all 1s to CSR
	csrrw x23, 0x305, x0	// Write all 0s to CSR
	csrrw x23, 0x305, x31	// Restore CSR

// Testing CSR 0x306
	csrr x5, 0x306	// Read CSR
	li x6, -1
	csrrw x25, 0x306, x6	// Write all 1s to CSR
	csrrw x25, 0x306, x0	// Write all 0s to CSR
	csrrw x25, 0x306, x5	// Restore CSR

// Testing CSR 0x307
	csrr x30, 0x307	// Read CSR
	li x6, -1
	csrrw x21, 0x307, x6	// Write all 1s to CSR
	csrrw x21, 0x307, x0	// Write all 0s to CSR
	csrrw x21, 0x307, x30	// Restore CSR

// Testing CSR 0x308
	csrr x22, 0x308	// Read CSR
	li x8, -1
	csrrw x31, 0x308, x8	// Write all 1s to CSR
	csrrw x31, 0x308, x0	// Write all 0s to CSR
	csrrw x31, 0x308, x22	// Restore CSR

// Testing CSR 0x309
	csrr x29, 0x309	// Read CSR
	li x30, -1
	csrrw x20, 0x309, x30	// Write all 1s to CSR
	csrrw x20, 0x309, x0	// Write all 0s to CSR
	csrrw x20, 0x309, x29	// Restore CSR

// Testing CSR 0x30a
	csrr x11, 0x30a	// Read CSR
	li x31, -1
	csrrw x1, 0x30a, x31	// Write all 1s to CSR
	csrrw x1, 0x30a, x0	// Write all 0s to CSR
	csrrw x1, 0x30a, x11	// Restore CSR

// Testing CSR 0x30b
	csrr x16, 0x30b	// Read CSR
	li x31, -1
	csrrw x29, 0x30b, x31	// Write all 1s to CSR
	csrrw x29, 0x30b, x0	// Write all 0s to CSR
	csrrw x29, 0x30b, x16	// Restore CSR

// Testing CSR 0x30c
	csrr x21, 0x30c	// Read CSR
	li x22, -1
	csrrw x13, 0x30c, x22	// Write all 1s to CSR
	csrrw x13, 0x30c, x0	// Write all 0s to CSR
	csrrw x13, 0x30c, x21	// Restore CSR

// Testing CSR 0x30d
	csrr x2, 0x30d	// Read CSR
	li x8, -1
	csrrw x21, 0x30d, x8	// Write all 1s to CSR
	csrrw x21, 0x30d, x0	// Write all 0s to CSR
	csrrw x21, 0x30d, x2	// Restore CSR

// Testing CSR 0x30e
	csrr x10, 0x30e	// Read CSR
	li x11, -1
	csrrw x6, 0x30e, x11	// Write all 1s to CSR
	csrrw x6, 0x30e, x0	// Write all 0s to CSR
	csrrw x6, 0x30e, x10	// Restore CSR

// Testing CSR 0x30f
	csrr x31, 0x30f	// Read CSR
	li x8, -1
	csrrw x12, 0x30f, x8	// Write all 1s to CSR
	csrrw x12, 0x30f, x0	// Write all 0s to CSR
	csrrw x12, 0x30f, x31	// Restore CSR

// Testing CSR 0x310
	csrr x8, 0x310	// Read CSR
	li x6, -1
	csrrw x29, 0x310, x6	// Write all 1s to CSR
	csrrw x29, 0x310, x0	// Write all 0s to CSR
	csrrw x29, 0x310, x8	// Restore CSR

// Testing CSR 0x311
	csrr x14, 0x311	// Read CSR
	li x15, -1
	csrrw x12, 0x311, x15	// Write all 1s to CSR
	csrrw x12, 0x311, x0	// Write all 0s to CSR
	csrrw x12, 0x311, x14	// Restore CSR

// Testing CSR 0x312
	csrr x29, 0x312	// Read CSR
	li x19, -1
	csrrw x5, 0x312, x19	// Write all 1s to CSR
	csrrw x5, 0x312, x0	// Write all 0s to CSR
	csrrw x5, 0x312, x29	// Restore CSR

// Testing CSR 0x313
	csrr x13, 0x313	// Read CSR
	li x19, -1
	csrrw x25, 0x313, x19	// Write all 1s to CSR
	csrrw x25, 0x313, x0	// Write all 0s to CSR
	csrrw x25, 0x313, x13	// Restore CSR

// Testing CSR 0x314
	csrr x1, 0x314	// Read CSR
	li x6, -1
	csrrw x30, 0x314, x6	// Write all 1s to CSR
	csrrw x30, 0x314, x0	// Write all 0s to CSR
	csrrw x30, 0x314, x1	// Restore CSR

// Testing CSR 0x315
	csrr x19, 0x315	// Read CSR
	li x1, -1
	csrrw x22, 0x315, x1	// Write all 1s to CSR
	csrrw x22, 0x315, x0	// Write all 0s to CSR
	csrrw x22, 0x315, x19	// Restore CSR

// Testing CSR 0x316
	csrr x13, 0x316	// Read CSR
	li x23, -1
	csrrw x26, 0x316, x23	// Write all 1s to CSR
	csrrw x26, 0x316, x0	// Write all 0s to CSR
	csrrw x26, 0x316, x13	// Restore CSR

// Testing CSR 0x317
	csrr x6, 0x317	// Read CSR
	li x5, -1
	csrrw x1, 0x317, x5	// Write all 1s to CSR
	csrrw x1, 0x317, x0	// Write all 0s to CSR
	csrrw x1, 0x317, x6	// Restore CSR

// Testing CSR 0x318
	csrr x1, 0x318	// Read CSR
	li x27, -1
	csrrw x11, 0x318, x27	// Write all 1s to CSR
	csrrw x11, 0x318, x0	// Write all 0s to CSR
	csrrw x11, 0x318, x1	// Restore CSR

// Testing CSR 0x319
	csrr x17, 0x319	// Read CSR
	li x1, -1
	csrrw x2, 0x319, x1	// Write all 1s to CSR
	csrrw x2, 0x319, x0	// Write all 0s to CSR
	csrrw x2, 0x319, x17	// Restore CSR

// Testing CSR 0x31a
	csrr x2, 0x31a	// Read CSR
	li x25, -1
	csrrw x30, 0x31a, x25	// Write all 1s to CSR
	csrrw x30, 0x31a, x0	// Write all 0s to CSR
	csrrw x30, 0x31a, x2	// Restore CSR

// Testing CSR 0x31b
	csrr x4, 0x31b	// Read CSR
	li x19, -1
	csrrw x20, 0x31b, x19	// Write all 1s to CSR
	csrrw x20, 0x31b, x0	// Write all 0s to CSR
	csrrw x20, 0x31b, x4	// Restore CSR

// Testing CSR 0x31c
	csrr x5, 0x31c	// Read CSR
	li x25, -1
	csrrw x22, 0x31c, x25	// Write all 1s to CSR
	csrrw x22, 0x31c, x0	// Write all 0s to CSR
	csrrw x22, 0x31c, x5	// Restore CSR

// Testing CSR 0x31d
	csrr x26, 0x31d	// Read CSR
	li x13, -1
	csrrw x1, 0x31d, x13	// Write all 1s to CSR
	csrrw x1, 0x31d, x0	// Write all 0s to CSR
	csrrw x1, 0x31d, x26	// Restore CSR

// Testing CSR 0x31e
	csrr x14, 0x31e	// Read CSR
	li x30, -1
	csrrw x19, 0x31e, x30	// Write all 1s to CSR
	csrrw x19, 0x31e, x0	// Write all 0s to CSR
	csrrw x19, 0x31e, x14	// Restore CSR

// Testing CSR 0x31f
	csrr x22, 0x31f	// Read CSR
	li x11, -1
	csrrw x23, 0x31f, x11	// Write all 1s to CSR
	csrrw x23, 0x31f, x0	// Write all 0s to CSR
	csrrw x23, 0x31f, x22	// Restore CSR

// Testing CSR 0x320
	csrr x8, 0x320	// Read CSR
	li x30, -1
	csrrw x5, 0x320, x30	// Write all 1s to CSR
	csrrw x5, 0x320, x0	// Write all 0s to CSR
	csrrw x5, 0x320, x8	// Restore CSR

// Testing CSR 0x321
	csrr x12, 0x321	// Read CSR
	li x17, -1
	csrrw x7, 0x321, x17	// Write all 1s to CSR
	csrrw x7, 0x321, x0	// Write all 0s to CSR
	csrrw x7, 0x321, x12	// Restore CSR

// Testing CSR 0x322
	csrr x18, 0x322	// Read CSR
	li x13, -1
	csrrw x3, 0x322, x13	// Write all 1s to CSR
	csrrw x3, 0x322, x0	// Write all 0s to CSR
	csrrw x3, 0x322, x18	// Restore CSR

// Testing CSR 0x340
	csrr x5, 0x340	// Read CSR
	li x14, -1
	csrrw x19, 0x340, x14	// Write all 1s to CSR
	csrrw x19, 0x340, x0	// Write all 0s to CSR
	csrrw x19, 0x340, x5	// Restore CSR

// Testing CSR 0x340
	csrr x22, 0x340	// Read CSR
	li x12, -1
	csrrw x31, 0x340, x12	// Write all 1s to CSR
	csrrw x31, 0x340, x0	// Write all 0s to CSR
	csrrw x31, 0x340, x22	// Restore CSR

// Testing CSR 0x340
	csrr x4, 0x340	// Read CSR
	li x14, -1
	csrrw x29, 0x340, x14	// Write all 1s to CSR
	csrrw x29, 0x340, x0	// Write all 0s to CSR
	csrrw x29, 0x340, x4	// Restore CSR

// Testing CSR 0x340
	csrr x14, 0x340	// Read CSR
	li x8, -1
	csrrw x16, 0x340, x8	// Write all 1s to CSR
	csrrw x16, 0x340, x0	// Write all 0s to CSR
	csrrw x16, 0x340, x14	// Restore CSR

// Testing CSR 0x340
	csrr x13, 0x340	// Read CSR
	li x8, -1
	csrrw x30, 0x340, x8	// Write all 1s to CSR
	csrrw x30, 0x340, x0	// Write all 0s to CSR
	csrrw x30, 0x340, x13	// Restore CSR

// Testing CSR 0x340
	csrr x13, 0x340	// Read CSR
	li x8, -1
	csrrw x21, 0x340, x8	// Write all 1s to CSR
	csrrw x21, 0x340, x0	// Write all 0s to CSR
	csrrw x21, 0x340, x13	// Restore CSR

// Testing CSR 0x340
	csrr x16, 0x340	// Read CSR
	li x13, -1
	csrrw x30, 0x340, x13	// Write all 1s to CSR
	csrrw x30, 0x340, x0	// Write all 0s to CSR
	csrrw x30, 0x340, x16	// Restore CSR

// Testing CSR 0x340
	csrr x19, 0x340	// Read CSR
	li x3, -1
	csrrw x27, 0x340, x3	// Write all 1s to CSR
	csrrw x27, 0x340, x0	// Write all 0s to CSR
	csrrw x27, 0x340, x19	// Restore CSR

// Testing CSR 0x340
	csrr x9, 0x340	// Read CSR
	li x17, -1
	csrrw x29, 0x340, x17	// Write all 1s to CSR
	csrrw x29, 0x340, x0	// Write all 0s to CSR
	csrrw x29, 0x340, x9	// Restore CSR

// Testing CSR 0x340
	csrr x12, 0x340	// Read CSR
	li x18, -1
	csrrw x1, 0x340, x18	// Write all 1s to CSR
	csrrw x1, 0x340, x0	// Write all 0s to CSR
	csrrw x1, 0x340, x12	// Restore CSR

// Testing CSR 0x340
	csrr x20, 0x340	// Read CSR
	li x16, -1
	csrrw x25, 0x340, x16	// Write all 1s to CSR
	csrrw x25, 0x340, x0	// Write all 0s to CSR
	csrrw x25, 0x340, x20	// Restore CSR

// Testing CSR 0x340
	csrr x29, 0x340	// Read CSR
	li x8, -1
	csrrw x9, 0x340, x8	// Write all 1s to CSR
	csrrw x9, 0x340, x0	// Write all 0s to CSR
	csrrw x9, 0x340, x29	// Restore CSR

// Testing CSR 0x340
	csrr x2, 0x340	// Read CSR
	li x20, -1
	csrrw x11, 0x340, x20	// Write all 1s to CSR
	csrrw x11, 0x340, x0	// Write all 0s to CSR
	csrrw x11, 0x340, x2	// Restore CSR

// Testing CSR 0x340
	csrr x28, 0x340	// Read CSR
	li x26, -1
	csrrw x13, 0x340, x26	// Write all 1s to CSR
	csrrw x13, 0x340, x0	// Write all 0s to CSR
	csrrw x13, 0x340, x28	// Restore CSR

// Testing CSR 0x340
	csrr x31, 0x340	// Read CSR
	li x21, -1
	csrrw x4, 0x340, x21	// Write all 1s to CSR
	csrrw x4, 0x340, x0	// Write all 0s to CSR
	csrrw x4, 0x340, x31	// Restore CSR

// Testing CSR 0x340
	csrr x18, 0x340	// Read CSR
	li x29, -1
	csrrw x28, 0x340, x29	// Write all 1s to CSR
	csrrw x28, 0x340, x0	// Write all 0s to CSR
	csrrw x28, 0x340, x18	// Restore CSR

// Testing CSR 0x340
	csrr x2, 0x340	// Read CSR
	li x5, -1
	csrrw x23, 0x340, x5	// Write all 1s to CSR
	csrrw x23, 0x340, x0	// Write all 0s to CSR
	csrrw x23, 0x340, x2	// Restore CSR

// Testing CSR 0x340
	csrr x13, 0x340	// Read CSR
	li x1, -1
	csrrw x25, 0x340, x1	// Write all 1s to CSR
	csrrw x25, 0x340, x0	// Write all 0s to CSR
	csrrw x25, 0x340, x13	// Restore CSR

// Testing CSR 0x340
	csrr x14, 0x340	// Read CSR
	li x24, -1
	csrrw x28, 0x340, x24	// Write all 1s to CSR
	csrrw x28, 0x340, x0	// Write all 0s to CSR
	csrrw x28, 0x340, x14	// Restore CSR

// Testing CSR 0x340
	csrr x13, 0x340	// Read CSR
	li x14, -1
	csrrw x30, 0x340, x14	// Write all 1s to CSR
	csrrw x30, 0x340, x0	// Write all 0s to CSR
	csrrw x30, 0x340, x13	// Restore CSR

// Testing CSR 0x340
	csrr x4, 0x340	// Read CSR
	li x23, -1
	csrrw x15, 0x340, x23	// Write all 1s to CSR
	csrrw x15, 0x340, x0	// Write all 0s to CSR
	csrrw x15, 0x340, x4	// Restore CSR

// Testing CSR 0x340
	csrr x20, 0x340	// Read CSR
	li x15, -1
	csrrw x6, 0x340, x15	// Write all 1s to CSR
	csrrw x6, 0x340, x0	// Write all 0s to CSR
	csrrw x6, 0x340, x20	// Restore CSR

// Testing CSR 0x340
	csrr x6, 0x340	// Read CSR
	li x11, -1
	csrrw x16, 0x340, x11	// Write all 1s to CSR
	csrrw x16, 0x340, x0	// Write all 0s to CSR
	csrrw x16, 0x340, x6	// Restore CSR

// Testing CSR 0x340
	csrr x14, 0x340	// Read CSR
	li x6, -1
	csrrw x19, 0x340, x6	// Write all 1s to CSR
	csrrw x19, 0x340, x0	// Write all 0s to CSR
	csrrw x19, 0x340, x14	// Restore CSR

// Testing CSR 0x340
	csrr x30, 0x340	// Read CSR
	li x28, -1
	csrrw x10, 0x340, x28	// Write all 1s to CSR
	csrrw x10, 0x340, x0	// Write all 0s to CSR
	csrrw x10, 0x340, x30	// Restore CSR

// Testing CSR 0x340
	csrr x25, 0x340	// Read CSR
	li x17, -1
	csrrw x4, 0x340, x17	// Write all 1s to CSR
	csrrw x4, 0x340, x0	// Write all 0s to CSR
	csrrw x4, 0x340, x25	// Restore CSR

// Testing CSR 0x340
	csrr x30, 0x340	// Read CSR
	li x12, -1
	csrrw x5, 0x340, x12	// Write all 1s to CSR
	csrrw x5, 0x340, x0	// Write all 0s to CSR
	csrrw x5, 0x340, x30	// Restore CSR

// Testing CSR 0x340
	csrr x21, 0x340	// Read CSR
	li x12, -1
	csrrw x25, 0x340, x12	// Write all 1s to CSR
	csrrw x25, 0x340, x0	// Write all 0s to CSR
	csrrw x25, 0x340, x21	// Restore CSR

// Testing CSR 0x340
	csrr x16, 0x340	// Read CSR
	li x21, -1
	csrrw x17, 0x340, x21	// Write all 1s to CSR
	csrrw x17, 0x340, x0	// Write all 0s to CSR
	csrrw x17, 0x340, x16	// Restore CSR

// Testing CSR 0x340
	csrr x25, 0x340	// Read CSR
	li x2, -1
	csrrw x7, 0x340, x2	// Write all 1s to CSR
	csrrw x7, 0x340, x0	// Write all 0s to CSR
	csrrw x7, 0x340, x25	// Restore CSR

// Testing CSR 0x341
	csrr x29, 0x341	// Read CSR
	li x31, -1
	csrrw x9, 0x341, x31	// Write all 1s to CSR
	csrrw x9, 0x341, x0	// Write all 0s to CSR
	csrrw x9, 0x341, x29	// Restore CSR

// Testing CSR 0x343
	csrr x6, 0x343	// Read CSR
	li x24, -1
	csrrw x19, 0x343, x24	// Write all 1s to CSR
	csrrw x19, 0x343, x0	// Write all 0s to CSR
	csrrw x19, 0x343, x6	// Restore CSR

// Testing CSR 0x343
	csrr x11, 0x343	// Read CSR
	li x10, -1
	csrrw x13, 0x343, x10	// Write all 1s to CSR
	csrrw x13, 0x343, x0	// Write all 0s to CSR
	csrrw x13, 0x343, x11	// Restore CSR

// Testing CSR 0x344
	csrr x21, 0x344	// Read CSR
	li x2, -1
	csrrw x10, 0x344, x2	// Write all 1s to CSR
	csrrw x10, 0x344, x0	// Write all 0s to CSR
	csrrw x10, 0x344, x21	// Restore CSR

// Testing CSR 0x345
	csrr x18, 0x345	// Read CSR
	li x14, -1
	csrrw x2, 0x345, x14	// Write all 1s to CSR
	csrrw x2, 0x345, x0	// Write all 0s to CSR
	csrrw x2, 0x345, x18	// Restore CSR

// Testing CSR 0x346
	csrr x22, 0x346	// Read CSR
	li x14, -1
	csrrw x9, 0x346, x14	// Write all 1s to CSR
	csrrw x9, 0x346, x0	// Write all 0s to CSR
	csrrw x9, 0x346, x22	// Restore CSR

// Testing CSR 0x347
	csrr x13, 0x347	// Read CSR
	li x24, -1
	csrrw x7, 0x347, x24	// Write all 1s to CSR
	csrrw x7, 0x347, x0	// Write all 0s to CSR
	csrrw x7, 0x347, x13	// Restore CSR

// Testing CSR 0x348
	csrr x12, 0x348	// Read CSR
	li x5, -1
	csrrw x4, 0x348, x5	// Write all 1s to CSR
	csrrw x4, 0x348, x0	// Write all 0s to CSR
	csrrw x4, 0x348, x12	// Restore CSR

// Testing CSR 0x349
	csrr x20, 0x349	// Read CSR
	li x12, -1
	csrrw x6, 0x349, x12	// Write all 1s to CSR
	csrrw x6, 0x349, x0	// Write all 0s to CSR
	csrrw x6, 0x349, x20	// Restore CSR

// Testing CSR 0x34a
	csrr x1, 0x34a	// Read CSR
	li x14, -1
	csrrw x19, 0x34a, x14	// Write all 1s to CSR
	csrrw x19, 0x34a, x0	// Write all 0s to CSR
	csrrw x19, 0x34a, x1	// Restore CSR

// Testing CSR 0x34b
	csrr x13, 0x34b	// Read CSR
	li x15, -1
	csrrw x3, 0x34b, x15	// Write all 1s to CSR
	csrrw x3, 0x34b, x0	// Write all 0s to CSR
	csrrw x3, 0x34b, x13	// Restore CSR

// Testing CSR 0x34c
	csrr x21, 0x34c	// Read CSR
	li x23, -1
	csrrw x22, 0x34c, x23	// Write all 1s to CSR
	csrrw x22, 0x34c, x0	// Write all 0s to CSR
	csrrw x22, 0x34c, x21	// Restore CSR

// Testing CSR 0x34d
	csrr x3, 0x34d	// Read CSR
	li x25, -1
	csrrw x14, 0x34d, x25	// Write all 1s to CSR
	csrrw x14, 0x34d, x0	// Write all 0s to CSR
	csrrw x14, 0x34d, x3	// Restore CSR

// Testing CSR 0x34e
	csrr x18, 0x34e	// Read CSR
	li x24, -1
	csrrw x5, 0x34e, x24	// Write all 1s to CSR
	csrrw x5, 0x34e, x0	// Write all 0s to CSR
	csrrw x5, 0x34e, x18	// Restore CSR

// Testing CSR 0x34f
	csrr x6, 0x34f	// Read CSR
	li x5, -1
	csrrw x7, 0x34f, x5	// Write all 1s to CSR
	csrrw x7, 0x34f, x0	// Write all 0s to CSR
	csrrw x7, 0x34f, x6	// Restore CSR

// Testing CSR 0x350
	csrr x6, 0x350	// Read CSR
	li x8, -1
	csrrw x1, 0x350, x8	// Write all 1s to CSR
	csrrw x1, 0x350, x0	// Write all 0s to CSR
	csrrw x1, 0x350, x6	// Restore CSR

// Testing CSR 0x351
	csrr x17, 0x351	// Read CSR
	li x5, -1
	csrrw x27, 0x351, x5	// Write all 1s to CSR
	csrrw x27, 0x351, x0	// Write all 0s to CSR
	csrrw x27, 0x351, x17	// Restore CSR

// Testing CSR 0x352
	csrr x16, 0x352	// Read CSR
	li x12, -1
	csrrw x29, 0x352, x12	// Write all 1s to CSR
	csrrw x29, 0x352, x0	// Write all 0s to CSR
	csrrw x29, 0x352, x16	// Restore CSR

// Testing CSR 0x353
	csrr x29, 0x353	// Read CSR
	li x20, -1
	csrrw x24, 0x353, x20	// Write all 1s to CSR
	csrrw x24, 0x353, x0	// Write all 0s to CSR
	csrrw x24, 0x353, x29	// Restore CSR

// Testing CSR 0x354
	csrr x10, 0x354	// Read CSR
	li x23, -1
	csrrw x26, 0x354, x23	// Write all 1s to CSR
	csrrw x26, 0x354, x0	// Write all 0s to CSR
	csrrw x26, 0x354, x10	// Restore CSR

// Testing CSR 0x355
	csrr x11, 0x355	// Read CSR
	li x22, -1
	csrrw x4, 0x355, x22	// Write all 1s to CSR
	csrrw x4, 0x355, x0	// Write all 0s to CSR
	csrrw x4, 0x355, x11	// Restore CSR

// Testing CSR 0x356
	csrr x26, 0x356	// Read CSR
	li x31, -1
	csrrw x30, 0x356, x31	// Write all 1s to CSR
	csrrw x30, 0x356, x0	// Write all 0s to CSR
	csrrw x30, 0x356, x26	// Restore CSR

// Testing CSR 0x357
	csrr x28, 0x357	// Read CSR
	li x27, -1
	csrrw x14, 0x357, x27	// Write all 1s to CSR
	csrrw x14, 0x357, x0	// Write all 0s to CSR
	csrrw x14, 0x357, x28	// Restore CSR

// Testing CSR 0x358
	csrr x25, 0x358	// Read CSR
	li x28, -1
	csrrw x9, 0x358, x28	// Write all 1s to CSR
	csrrw x9, 0x358, x0	// Write all 0s to CSR
	csrrw x9, 0x358, x25	// Restore CSR

// Testing CSR 0x359
	csrr x29, 0x359	// Read CSR
	li x6, -1
	csrrw x11, 0x359, x6	// Write all 1s to CSR
	csrrw x11, 0x359, x0	// Write all 0s to CSR
	csrrw x11, 0x359, x29	// Restore CSR

// Testing CSR 0x35a
	csrr x21, 0x35a	// Read CSR
	li x17, -1
	csrrw x31, 0x35a, x17	// Write all 1s to CSR
	csrrw x31, 0x35a, x0	// Write all 0s to CSR
	csrrw x31, 0x35a, x21	// Restore CSR

// Testing CSR 0x35b
	csrr x11, 0x35b	// Read CSR
	li x18, -1
	csrrw x23, 0x35b, x18	// Write all 1s to CSR
	csrrw x23, 0x35b, x0	// Write all 0s to CSR
	csrrw x23, 0x35b, x11	// Restore CSR

// Testing CSR 0x35c
	csrr x5, 0x35c	// Read CSR
	li x30, -1
	csrrw x13, 0x35c, x30	// Write all 1s to CSR
	csrrw x13, 0x35c, x0	// Write all 0s to CSR
	csrrw x13, 0x35c, x5	// Restore CSR

// Testing CSR 0x35d
	csrr x24, 0x35d	// Read CSR
	li x10, -1
	csrrw x18, 0x35d, x10	// Write all 1s to CSR
	csrrw x18, 0x35d, x0	// Write all 0s to CSR
	csrrw x18, 0x35d, x24	// Restore CSR

// Testing CSR 0x35e
	csrr x8, 0x35e	// Read CSR
	li x29, -1
	csrrw x30, 0x35e, x29	// Write all 1s to CSR
	csrrw x30, 0x35e, x0	// Write all 0s to CSR
	csrrw x30, 0x35e, x8	// Restore CSR

// Testing CSR 0x35f
	csrr x13, 0x35f	// Read CSR
	li x12, -1
	csrrw x31, 0x35f, x12	// Write all 1s to CSR
	csrrw x31, 0x35f, x0	// Write all 0s to CSR
	csrrw x31, 0x35f, x13	// Restore CSR

// Testing CSR 0x360
	csrr x16, 0x360	// Read CSR
	li x17, -1
	csrrw x10, 0x360, x17	// Write all 1s to CSR
	csrrw x10, 0x360, x0	// Write all 0s to CSR
	csrrw x10, 0x360, x16	// Restore CSR

// Testing CSR 0x361
	csrr x31, 0x361	// Read CSR
	li x14, -1
	csrrw x27, 0x361, x14	// Write all 1s to CSR
	csrrw x27, 0x361, x0	// Write all 0s to CSR
	csrrw x27, 0x361, x31	// Restore CSR

// Testing CSR 0x362
	csrr x4, 0x362	// Read CSR
	li x22, -1
	csrrw x5, 0x362, x22	// Write all 1s to CSR
	csrrw x5, 0x362, x0	// Write all 0s to CSR
	csrrw x5, 0x362, x4	// Restore CSR

// Testing CSR 0x363
	csrr x5, 0x363	// Read CSR
	li x1, -1
	csrrw x19, 0x363, x1	// Write all 1s to CSR
	csrrw x19, 0x363, x0	// Write all 0s to CSR
	csrrw x19, 0x363, x5	// Restore CSR

// Testing CSR 0x364
	csrr x20, 0x364	// Read CSR
	li x21, -1
	csrrw x23, 0x364, x21	// Write all 1s to CSR
	csrrw x23, 0x364, x0	// Write all 0s to CSR
	csrrw x23, 0x364, x20	// Restore CSR

// Testing CSR 0x365
	csrr x30, 0x365	// Read CSR
	li x29, -1
	csrrw x17, 0x365, x29	// Write all 1s to CSR
	csrrw x17, 0x365, x0	// Write all 0s to CSR
	csrrw x17, 0x365, x30	// Restore CSR

// Testing CSR 0x366
	csrr x4, 0x366	// Read CSR
	li x23, -1
	csrrw x25, 0x366, x23	// Write all 1s to CSR
	csrrw x25, 0x366, x0	// Write all 0s to CSR
	csrrw x25, 0x366, x4	// Restore CSR

// Testing CSR 0x367
	csrr x21, 0x367	// Read CSR
	li x23, -1
	csrrw x7, 0x367, x23	// Write all 1s to CSR
	csrrw x7, 0x367, x0	// Write all 0s to CSR
	csrrw x7, 0x367, x21	// Restore CSR

// Testing CSR 0x368
	csrr x20, 0x368	// Read CSR
	li x21, -1
	csrrw x17, 0x368, x21	// Write all 1s to CSR
	csrrw x17, 0x368, x0	// Write all 0s to CSR
	csrrw x17, 0x368, x20	// Restore CSR

// Testing CSR 0x369
	csrr x4, 0x369	// Read CSR
	li x9, -1
	csrrw x23, 0x369, x9	// Write all 1s to CSR
	csrrw x23, 0x369, x0	// Write all 0s to CSR
	csrrw x23, 0x369, x4	// Restore CSR

// Testing CSR 0x36a
	csrr x24, 0x36a	// Read CSR
	li x20, -1
	csrrw x6, 0x36a, x20	// Write all 1s to CSR
	csrrw x6, 0x36a, x0	// Write all 0s to CSR
	csrrw x6, 0x36a, x24	// Restore CSR

// Testing CSR 0x36b
	csrr x13, 0x36b	// Read CSR
	li x3, -1
	csrrw x26, 0x36b, x3	// Write all 1s to CSR
	csrrw x26, 0x36b, x0	// Write all 0s to CSR
	csrrw x26, 0x36b, x13	// Restore CSR

// Testing CSR 0x36c
	csrr x2, 0x36c	// Read CSR
	li x1, -1
	csrrw x4, 0x36c, x1	// Write all 1s to CSR
	csrrw x4, 0x36c, x0	// Write all 0s to CSR
	csrrw x4, 0x36c, x2	// Restore CSR

// Testing CSR 0x36d
	csrr x29, 0x36d	// Read CSR
	li x12, -1
	csrrw x27, 0x36d, x12	// Write all 1s to CSR
	csrrw x27, 0x36d, x0	// Write all 0s to CSR
	csrrw x27, 0x36d, x29	// Restore CSR

// Testing CSR 0x36e
	csrr x24, 0x36e	// Read CSR
	li x16, -1
	csrrw x11, 0x36e, x16	// Write all 1s to CSR
	csrrw x11, 0x36e, x0	// Write all 0s to CSR
	csrrw x11, 0x36e, x24	// Restore CSR

// Testing CSR 0x36f
	csrr x4, 0x36f	// Read CSR
	li x22, -1
	csrrw x15, 0x36f, x22	// Write all 1s to CSR
	csrrw x15, 0x36f, x0	// Write all 0s to CSR
	csrrw x15, 0x36f, x4	// Restore CSR

// Testing CSR 0x370
	csrr x12, 0x370	// Read CSR
	li x19, -1
	csrrw x23, 0x370, x19	// Write all 1s to CSR
	csrrw x23, 0x370, x0	// Write all 0s to CSR
	csrrw x23, 0x370, x12	// Restore CSR

// Testing CSR 0x371
	csrr x9, 0x371	// Read CSR
	li x22, -1
	csrrw x16, 0x371, x22	// Write all 1s to CSR
	csrrw x16, 0x371, x0	// Write all 0s to CSR
	csrrw x16, 0x371, x9	// Restore CSR

// Testing CSR 0x372
	csrr x26, 0x372	// Read CSR
	li x25, -1
	csrrw x8, 0x372, x25	// Write all 1s to CSR
	csrrw x8, 0x372, x0	// Write all 0s to CSR
	csrrw x8, 0x372, x26	// Restore CSR

// Testing CSR 0x373
	csrr x30, 0x373	// Read CSR
	li x6, -1
	csrrw x18, 0x373, x6	// Write all 1s to CSR
	csrrw x18, 0x373, x0	// Write all 0s to CSR
	csrrw x18, 0x373, x30	// Restore CSR

// Testing CSR 0x374
	csrr x18, 0x374	// Read CSR
	li x27, -1
	csrrw x29, 0x374, x27	// Write all 1s to CSR
	csrrw x29, 0x374, x0	// Write all 0s to CSR
	csrrw x29, 0x374, x18	// Restore CSR

// Testing CSR 0x375
	csrr x3, 0x375	// Read CSR
	li x25, -1
	csrrw x28, 0x375, x25	// Write all 1s to CSR
	csrrw x28, 0x375, x0	// Write all 0s to CSR
	csrrw x28, 0x375, x3	// Restore CSR

// Testing CSR 0x376
	csrr x17, 0x376	// Read CSR
	li x30, -1
	csrrw x29, 0x376, x30	// Write all 1s to CSR
	csrrw x29, 0x376, x0	// Write all 0s to CSR
	csrrw x29, 0x376, x17	// Restore CSR

// Testing CSR 0x377
	csrr x6, 0x377	// Read CSR
	li x1, -1
	csrrw x27, 0x377, x1	// Write all 1s to CSR
	csrrw x27, 0x377, x0	// Write all 0s to CSR
	csrrw x27, 0x377, x6	// Restore CSR

// Testing CSR 0x378
	csrr x21, 0x378	// Read CSR
	li x28, -1
	csrrw x6, 0x378, x28	// Write all 1s to CSR
	csrrw x6, 0x378, x0	// Write all 0s to CSR
	csrrw x6, 0x378, x21	// Restore CSR

// Testing CSR 0x379
	csrr x29, 0x379	// Read CSR
	li x17, -1
	csrrw x14, 0x379, x17	// Write all 1s to CSR
	csrrw x14, 0x379, x0	// Write all 0s to CSR
	csrrw x14, 0x379, x29	// Restore CSR

// Testing CSR 0x37a
	csrr x20, 0x37a	// Read CSR
	li x22, -1
	csrrw x7, 0x37a, x22	// Write all 1s to CSR
	csrrw x7, 0x37a, x0	// Write all 0s to CSR
	csrrw x7, 0x37a, x20	// Restore CSR

// Testing CSR 0x37b
	csrr x15, 0x37b	// Read CSR
	li x23, -1
	csrrw x22, 0x37b, x23	// Write all 1s to CSR
	csrrw x22, 0x37b, x0	// Write all 0s to CSR
	csrrw x22, 0x37b, x15	// Restore CSR

// Testing CSR 0x37c
	csrr x13, 0x37c	// Read CSR
	li x9, -1
	csrrw x1, 0x37c, x9	// Write all 1s to CSR
	csrrw x1, 0x37c, x0	// Write all 0s to CSR
	csrrw x1, 0x37c, x13	// Restore CSR

// Testing CSR 0x37d
	csrr x19, 0x37d	// Read CSR
	li x5, -1
	csrrw x30, 0x37d, x5	// Write all 1s to CSR
	csrrw x30, 0x37d, x0	// Write all 0s to CSR
	csrrw x30, 0x37d, x19	// Restore CSR

// Testing CSR 0x37e
	csrr x13, 0x37e	// Read CSR
	li x6, -1
	csrrw x29, 0x37e, x6	// Write all 1s to CSR
	csrrw x29, 0x37e, x0	// Write all 0s to CSR
	csrrw x29, 0x37e, x13	// Restore CSR

// Testing CSR 0x37f
	csrr x15, 0x37f	// Read CSR
	li x19, -1
	csrrw x2, 0x37f, x19	// Write all 1s to CSR
	csrrw x2, 0x37f, x0	// Write all 0s to CSR
	csrrw x2, 0x37f, x15	// Restore CSR

// Testing CSR 0x380
	csrr x30, 0x380	// Read CSR
	li x13, -1
	csrrw x26, 0x380, x13	// Write all 1s to CSR
	csrrw x26, 0x380, x0	// Write all 0s to CSR
	csrrw x26, 0x380, x30	// Restore CSR

// Testing CSR 0x381
	csrr x3, 0x381	// Read CSR
	li x21, -1
	csrrw x19, 0x381, x21	// Write all 1s to CSR
	csrrw x19, 0x381, x0	// Write all 0s to CSR
	csrrw x19, 0x381, x3	// Restore CSR

// Testing CSR 0x382
	csrr x13, 0x382	// Read CSR
	li x11, -1
	csrrw x8, 0x382, x11	// Write all 1s to CSR
	csrrw x8, 0x382, x0	// Write all 0s to CSR
	csrrw x8, 0x382, x13	// Restore CSR

// Testing CSR 0x383
	csrr x17, 0x383	// Read CSR
	li x28, -1
	csrrw x15, 0x383, x28	// Write all 1s to CSR
	csrrw x15, 0x383, x0	// Write all 0s to CSR
	csrrw x15, 0x383, x17	// Restore CSR

// Testing CSR 0x384
	csrr x2, 0x384	// Read CSR
	li x16, -1
	csrrw x20, 0x384, x16	// Write all 1s to CSR
	csrrw x20, 0x384, x0	// Write all 0s to CSR
	csrrw x20, 0x384, x2	// Restore CSR

// Testing CSR 0x385
	csrr x4, 0x385	// Read CSR
	li x9, -1
	csrrw x27, 0x385, x9	// Write all 1s to CSR
	csrrw x27, 0x385, x0	// Write all 0s to CSR
	csrrw x27, 0x385, x4	// Restore CSR

// Testing CSR 0x386
	csrr x17, 0x386	// Read CSR
	li x16, -1
	csrrw x18, 0x386, x16	// Write all 1s to CSR
	csrrw x18, 0x386, x0	// Write all 0s to CSR
	csrrw x18, 0x386, x17	// Restore CSR

// Testing CSR 0x387
	csrr x21, 0x387	// Read CSR
	li x13, -1
	csrrw x16, 0x387, x13	// Write all 1s to CSR
	csrrw x16, 0x387, x0	// Write all 0s to CSR
	csrrw x16, 0x387, x21	// Restore CSR

// Testing CSR 0x388
	csrr x9, 0x388	// Read CSR
	li x6, -1
	csrrw x8, 0x388, x6	// Write all 1s to CSR
	csrrw x8, 0x388, x0	// Write all 0s to CSR
	csrrw x8, 0x388, x9	// Restore CSR

// Testing CSR 0x389
	csrr x18, 0x389	// Read CSR
	li x12, -1
	csrrw x6, 0x389, x12	// Write all 1s to CSR
	csrrw x6, 0x389, x0	// Write all 0s to CSR
	csrrw x6, 0x389, x18	// Restore CSR

// Testing CSR 0x38a
	csrr x10, 0x38a	// Read CSR
	li x28, -1
	csrrw x20, 0x38a, x28	// Write all 1s to CSR
	csrrw x20, 0x38a, x0	// Write all 0s to CSR
	csrrw x20, 0x38a, x10	// Restore CSR

// Testing CSR 0x38b
	csrr x27, 0x38b	// Read CSR
	li x30, -1
	csrrw x5, 0x38b, x30	// Write all 1s to CSR
	csrrw x5, 0x38b, x0	// Write all 0s to CSR
	csrrw x5, 0x38b, x27	// Restore CSR

// Testing CSR 0x38c
	csrr x15, 0x38c	// Read CSR
	li x3, -1
	csrrw x31, 0x38c, x3	// Write all 1s to CSR
	csrrw x31, 0x38c, x0	// Write all 0s to CSR
	csrrw x31, 0x38c, x15	// Restore CSR

// Testing CSR 0x38d
	csrr x3, 0x38d	// Read CSR
	li x16, -1
	csrrw x13, 0x38d, x16	// Write all 1s to CSR
	csrrw x13, 0x38d, x0	// Write all 0s to CSR
	csrrw x13, 0x38d, x3	// Restore CSR

// Testing CSR 0x38e
	csrr x19, 0x38e	// Read CSR
	li x31, -1
	csrrw x14, 0x38e, x31	// Write all 1s to CSR
	csrrw x14, 0x38e, x0	// Write all 0s to CSR
	csrrw x14, 0x38e, x19	// Restore CSR

// Testing CSR 0x38f
	csrr x18, 0x38f	// Read CSR
	li x3, -1
	csrrw x9, 0x38f, x3	// Write all 1s to CSR
	csrrw x9, 0x38f, x0	// Write all 0s to CSR
	csrrw x9, 0x38f, x18	// Restore CSR

// Testing CSR 0x390
	csrr x16, 0x390	// Read CSR
	li x8, -1
	csrrw x27, 0x390, x8	// Write all 1s to CSR
	csrrw x27, 0x390, x0	// Write all 0s to CSR
	csrrw x27, 0x390, x16	// Restore CSR

// Testing CSR 0x391
	csrr x4, 0x391	// Read CSR
	li x10, -1
	csrrw x5, 0x391, x10	// Write all 1s to CSR
	csrrw x5, 0x391, x0	// Write all 0s to CSR
	csrrw x5, 0x391, x4	// Restore CSR

// Testing CSR 0x392
	csrr x12, 0x392	// Read CSR
	li x26, -1
	csrrw x4, 0x392, x26	// Write all 1s to CSR
	csrrw x4, 0x392, x0	// Write all 0s to CSR
	csrrw x4, 0x392, x12	// Restore CSR

// Testing CSR 0x393
	csrr x5, 0x393	// Read CSR
	li x22, -1
	csrrw x28, 0x393, x22	// Write all 1s to CSR
	csrrw x28, 0x393, x0	// Write all 0s to CSR
	csrrw x28, 0x393, x5	// Restore CSR

// Testing CSR 0x394
	csrr x2, 0x394	// Read CSR
	li x27, -1
	csrrw x22, 0x394, x27	// Write all 1s to CSR
	csrrw x22, 0x394, x0	// Write all 0s to CSR
	csrrw x22, 0x394, x2	// Restore CSR

// Testing CSR 0x395
	csrr x5, 0x395	// Read CSR
	li x19, -1
	csrrw x18, 0x395, x19	// Write all 1s to CSR
	csrrw x18, 0x395, x0	// Write all 0s to CSR
	csrrw x18, 0x395, x5	// Restore CSR

// Testing CSR 0x396
	csrr x7, 0x396	// Read CSR
	li x1, -1
	csrrw x2, 0x396, x1	// Write all 1s to CSR
	csrrw x2, 0x396, x0	// Write all 0s to CSR
	csrrw x2, 0x396, x7	// Restore CSR

// Testing CSR 0x397
	csrr x28, 0x397	// Read CSR
	li x13, -1
	csrrw x18, 0x397, x13	// Write all 1s to CSR
	csrrw x18, 0x397, x0	// Write all 0s to CSR
	csrrw x18, 0x397, x28	// Restore CSR

// Testing CSR 0x398
	csrr x23, 0x398	// Read CSR
	li x25, -1
	csrrw x20, 0x398, x25	// Write all 1s to CSR
	csrrw x20, 0x398, x0	// Write all 0s to CSR
	csrrw x20, 0x398, x23	// Restore CSR

// Testing CSR 0x399
	csrr x16, 0x399	// Read CSR
	li x23, -1
	csrrw x4, 0x399, x23	// Write all 1s to CSR
	csrrw x4, 0x399, x0	// Write all 0s to CSR
	csrrw x4, 0x399, x16	// Restore CSR

// Testing CSR 0x39a
	csrr x30, 0x39a	// Read CSR
	li x16, -1
	csrrw x18, 0x39a, x16	// Write all 1s to CSR
	csrrw x18, 0x39a, x0	// Write all 0s to CSR
	csrrw x18, 0x39a, x30	// Restore CSR

// Testing CSR 0x39b
	csrr x12, 0x39b	// Read CSR
	li x28, -1
	csrrw x25, 0x39b, x28	// Write all 1s to CSR
	csrrw x25, 0x39b, x0	// Write all 0s to CSR
	csrrw x25, 0x39b, x12	// Restore CSR

// Testing CSR 0x39c
	csrr x11, 0x39c	// Read CSR
	li x28, -1
	csrrw x4, 0x39c, x28	// Write all 1s to CSR
	csrrw x4, 0x39c, x0	// Write all 0s to CSR
	csrrw x4, 0x39c, x11	// Restore CSR

// Testing CSR 0x39d
	csrr x22, 0x39d	// Read CSR
	li x1, -1
	csrrw x8, 0x39d, x1	// Write all 1s to CSR
	csrrw x8, 0x39d, x0	// Write all 0s to CSR
	csrrw x8, 0x39d, x22	// Restore CSR

// Testing CSR 0x39e
	csrr x8, 0x39e	// Read CSR
	li x16, -1
	csrrw x27, 0x39e, x16	// Write all 1s to CSR
	csrrw x27, 0x39e, x0	// Write all 0s to CSR
	csrrw x27, 0x39e, x8	// Restore CSR

// Testing CSR 0x39f
	csrr x10, 0x39f	// Read CSR
	li x9, -1
	csrrw x8, 0x39f, x9	// Write all 1s to CSR
	csrrw x8, 0x39f, x0	// Write all 0s to CSR
	csrrw x8, 0x39f, x10	// Restore CSR

// Testing CSR 0x3f0
	csrr x1, 0x3f0	// Read CSR
	li x16, -1
	csrrw x12, 0x3f0, x16	// Write all 1s to CSR
	csrrw x12, 0x3f0, x0	// Write all 0s to CSR
	csrrw x12, 0x3f0, x1	// Restore CSR

// Testing CSR 0x3f0
	csrr x31, 0x3f0	// Read CSR
	li x30, -1
	csrrw x17, 0x3f0, x30	// Write all 1s to CSR
	csrrw x17, 0x3f0, x0	// Write all 0s to CSR
	csrrw x17, 0x3f0, x31	// Restore CSR

// Testing CSR 0x3f0
	csrr x11, 0x3f0	// Read CSR
	li x3, -1
	csrrw x10, 0x3f0, x3	// Write all 1s to CSR
	csrrw x10, 0x3f0, x0	// Write all 0s to CSR
	csrrw x10, 0x3f0, x11	// Restore CSR

// Testing CSR 0x3f0
	csrr x19, 0x3f0	// Read CSR
	li x14, -1
	csrrw x8, 0x3f0, x14	// Write all 1s to CSR
	csrrw x8, 0x3f0, x0	// Write all 0s to CSR
	csrrw x8, 0x3f0, x19	// Restore CSR

// Testing CSR 0x3f0
	csrr x24, 0x3f0	// Read CSR
	li x12, -1
	csrrw x31, 0x3f0, x12	// Write all 1s to CSR
	csrrw x31, 0x3f0, x0	// Write all 0s to CSR
	csrrw x31, 0x3f0, x24	// Restore CSR

// Testing CSR 0x3f0
	csrr x13, 0x3f0	// Read CSR
	li x28, -1
	csrrw x25, 0x3f0, x28	// Write all 1s to CSR
	csrrw x25, 0x3f0, x0	// Write all 0s to CSR
	csrrw x25, 0x3f0, x13	// Restore CSR

// Testing CSR 0x3f0
	csrr x5, 0x3f0	// Read CSR
	li x8, -1
	csrrw x10, 0x3f0, x8	// Write all 1s to CSR
	csrrw x10, 0x3f0, x0	// Write all 0s to CSR
	csrrw x10, 0x3f0, x5	// Restore CSR

// Testing CSR 0x3f0
	csrr x30, 0x3f0	// Read CSR
	li x7, -1
	csrrw x24, 0x3f0, x7	// Write all 1s to CSR
	csrrw x24, 0x3f0, x0	// Write all 0s to CSR
	csrrw x24, 0x3f0, x30	// Restore CSR

// Testing CSR 0x3f0
	csrr x25, 0x3f0	// Read CSR
	li x16, -1
	csrrw x22, 0x3f0, x16	// Write all 1s to CSR
	csrrw x22, 0x3f0, x0	// Write all 0s to CSR
	csrrw x22, 0x3f0, x25	// Restore CSR

// Testing CSR 0x3f0
	csrr x29, 0x3f0	// Read CSR
	li x26, -1
	csrrw x12, 0x3f0, x26	// Write all 1s to CSR
	csrrw x12, 0x3f0, x0	// Write all 0s to CSR
	csrrw x12, 0x3f0, x29	// Restore CSR

// Testing CSR 0x3f0
	csrr x10, 0x3f0	// Read CSR
	li x13, -1
	csrrw x20, 0x3f0, x13	// Write all 1s to CSR
	csrrw x20, 0x3f0, x0	// Write all 0s to CSR
	csrrw x20, 0x3f0, x10	// Restore CSR

// Testing CSR 0x3f0
	csrr x5, 0x3f0	// Read CSR
	li x27, -1
	csrrw x25, 0x3f0, x27	// Write all 1s to CSR
	csrrw x25, 0x3f0, x0	// Write all 0s to CSR
	csrrw x25, 0x3f0, x5	// Restore CSR

// Testing CSR 0x3f0
	csrr x4, 0x3f0	// Read CSR
	li x13, -1
	csrrw x12, 0x3f0, x13	// Write all 1s to CSR
	csrrw x12, 0x3f0, x0	// Write all 0s to CSR
	csrrw x12, 0x3f0, x4	// Restore CSR

// Testing CSR 0x3f0
	csrr x17, 0x3f0	// Read CSR
	li x28, -1
	csrrw x16, 0x3f0, x28	// Write all 1s to CSR
	csrrw x16, 0x3f0, x0	// Write all 0s to CSR
	csrrw x16, 0x3f0, x17	// Restore CSR

// Testing CSR 0x3f0
	csrr x8, 0x3f0	// Read CSR
	li x21, -1
	csrrw x23, 0x3f0, x21	// Write all 1s to CSR
	csrrw x23, 0x3f0, x0	// Write all 0s to CSR
	csrrw x23, 0x3f0, x8	// Restore CSR

// Testing CSR 0x3f0
	csrr x12, 0x3f0	// Read CSR
	li x21, -1
	csrrw x30, 0x3f0, x21	// Write all 1s to CSR
	csrrw x30, 0x3f0, x0	// Write all 0s to CSR
	csrrw x30, 0x3f0, x12	// Restore CSR

// Testing CSR 0x3f0
	csrr x12, 0x3f0	// Read CSR
	li x14, -1
	csrrw x9, 0x3f0, x14	// Write all 1s to CSR
	csrrw x9, 0x3f0, x0	// Write all 0s to CSR
	csrrw x9, 0x3f0, x12	// Restore CSR

// Testing CSR 0x3f0
	csrr x12, 0x3f0	// Read CSR
	li x13, -1
	csrrw x25, 0x3f0, x13	// Write all 1s to CSR
	csrrw x25, 0x3f0, x0	// Write all 0s to CSR
	csrrw x25, 0x3f0, x12	// Restore CSR

// Testing CSR 0x3f0
	csrr x25, 0x3f0	// Read CSR
	li x23, -1
	csrrw x10, 0x3f0, x23	// Write all 1s to CSR
	csrrw x10, 0x3f0, x0	// Write all 0s to CSR
	csrrw x10, 0x3f0, x25	// Restore CSR

// Testing CSR 0x3f0
	csrr x28, 0x3f0	// Read CSR
	li x4, -1
	csrrw x16, 0x3f0, x4	// Write all 1s to CSR
	csrrw x16, 0x3f0, x0	// Write all 0s to CSR
	csrrw x16, 0x3f0, x28	// Restore CSR

// Testing CSR 0x3f0
	csrr x29, 0x3f0	// Read CSR
	li x10, -1
	csrrw x4, 0x3f0, x10	// Write all 1s to CSR
	csrrw x4, 0x3f0, x0	// Write all 0s to CSR
	csrrw x4, 0x3f0, x29	// Restore CSR

// Testing CSR 0x3f0
	csrr x15, 0x3f0	// Read CSR
	li x5, -1
	csrrw x12, 0x3f0, x5	// Write all 1s to CSR
	csrrw x12, 0x3f0, x0	// Write all 0s to CSR
	csrrw x12, 0x3f0, x15	// Restore CSR

// Testing CSR 0x3f0
	csrr x30, 0x3f0	// Read CSR
	li x8, -1
	csrrw x24, 0x3f0, x8	// Write all 1s to CSR
	csrrw x24, 0x3f0, x0	// Write all 0s to CSR
	csrrw x24, 0x3f0, x30	// Restore CSR

// Testing CSR 0x3f0
	csrr x6, 0x3f0	// Read CSR
	li x30, -1
	csrrw x31, 0x3f0, x30	// Write all 1s to CSR
	csrrw x31, 0x3f0, x0	// Write all 0s to CSR
	csrrw x31, 0x3f0, x6	// Restore CSR

// Testing CSR 0x3f0
	csrr x11, 0x3f0	// Read CSR
	li x16, -1
	csrrw x8, 0x3f0, x16	// Write all 1s to CSR
	csrrw x8, 0x3f0, x0	// Write all 0s to CSR
	csrrw x8, 0x3f0, x11	// Restore CSR

// Testing CSR 0x3f0
	csrr x4, 0x3f0	// Read CSR
	li x22, -1
	csrrw x13, 0x3f0, x22	// Write all 1s to CSR
	csrrw x13, 0x3f0, x0	// Write all 0s to CSR
	csrrw x13, 0x3f0, x4	// Restore CSR

// Testing CSR 0x3f0
	csrr x13, 0x3f0	// Read CSR
	li x15, -1
	csrrw x17, 0x3f0, x15	// Write all 1s to CSR
	csrrw x17, 0x3f0, x0	// Write all 0s to CSR
	csrrw x17, 0x3f0, x13	// Restore CSR

// Testing CSR 0x3f0
	csrr x15, 0x3f0	// Read CSR
	li x30, -1
	csrrw x19, 0x3f0, x30	// Write all 1s to CSR
	csrrw x19, 0x3f0, x0	// Write all 0s to CSR
	csrrw x19, 0x3f0, x15	// Restore CSR

// Testing CSR 0x3f0
	csrr x27, 0x3f0	// Read CSR
	li x20, -1
	csrrw x8, 0x3f0, x20	// Write all 1s to CSR
	csrrw x8, 0x3f0, x0	// Write all 0s to CSR
	csrrw x8, 0x3f0, x27	// Restore CSR

// Testing CSR 0x3f0
	csrr x22, 0x3f0	// Read CSR
	li x13, -1
	csrrw x17, 0x3f0, x13	// Write all 1s to CSR
	csrrw x17, 0x3f0, x0	// Write all 0s to CSR
	csrrw x17, 0x3f0, x22	// Restore CSR

// Testing CSR 0x3f0
	csrr x10, 0x3f0	// Read CSR
	li x16, -1
	csrrw x8, 0x3f0, x16	// Write all 1s to CSR
	csrrw x8, 0x3f0, x0	// Write all 0s to CSR
	csrrw x8, 0x3f0, x10	// Restore CSR

// Testing CSR 0x3f0
	csrr x11, 0x3f0	// Read CSR
	li x17, -1
	csrrw x22, 0x3f0, x17	// Write all 1s to CSR
	csrrw x22, 0x3f0, x0	// Write all 0s to CSR
	csrrw x22, 0x3f0, x11	// Restore CSR

// Testing CSR 0x3f0
	csrr x1, 0x3f0	// Read CSR
	li x3, -1
	csrrw x16, 0x3f0, x3	// Write all 1s to CSR
	csrrw x16, 0x3f0, x0	// Write all 0s to CSR
	csrrw x16, 0x3f0, x1	// Restore CSR

// Testing CSR 0x3f0
	csrr x11, 0x3f0	// Read CSR
	li x13, -1
	csrrw x29, 0x3f0, x13	// Write all 1s to CSR
	csrrw x29, 0x3f0, x0	// Write all 0s to CSR
	csrrw x29, 0x3f0, x11	// Restore CSR

// Testing CSR 0x3f0
	csrr x31, 0x3f0	// Read CSR
	li x8, -1
	csrrw x27, 0x3f0, x8	// Write all 1s to CSR
	csrrw x27, 0x3f0, x0	// Write all 0s to CSR
	csrrw x27, 0x3f0, x31	// Restore CSR

// Testing CSR 0x3f0
	csrr x31, 0x3f0	// Read CSR
	li x14, -1
	csrrw x2, 0x3f0, x14	// Write all 1s to CSR
	csrrw x2, 0x3f0, x0	// Write all 0s to CSR
	csrrw x2, 0x3f0, x31	// Restore CSR

// Testing CSR 0x3f0
	csrr x19, 0x3f0	// Read CSR
	li x25, -1
	csrrw x2, 0x3f0, x25	// Write all 1s to CSR
	csrrw x2, 0x3f0, x0	// Write all 0s to CSR
	csrrw x2, 0x3f0, x19	// Restore CSR

// Testing CSR 0x3f0
	csrr x14, 0x3f0	// Read CSR
	li x3, -1
	csrrw x9, 0x3f0, x3	// Write all 1s to CSR
	csrrw x9, 0x3f0, x0	// Write all 0s to CSR
	csrrw x9, 0x3f0, x14	// Restore CSR

// Testing CSR 0x3f0
	csrr x7, 0x3f0	// Read CSR
	li x24, -1
	csrrw x11, 0x3f0, x24	// Write all 1s to CSR
	csrrw x11, 0x3f0, x0	// Write all 0s to CSR
	csrrw x11, 0x3f0, x7	// Restore CSR

// Testing CSR 0x3f0
	csrr x6, 0x3f0	// Read CSR
	li x4, -1
	csrrw x26, 0x3f0, x4	// Write all 1s to CSR
	csrrw x26, 0x3f0, x0	// Write all 0s to CSR
	csrrw x26, 0x3f0, x6	// Restore CSR

// Testing CSR 0x3f0
	csrr x23, 0x3f0	// Read CSR
	li x12, -1
	csrrw x1, 0x3f0, x12	// Write all 1s to CSR
	csrrw x1, 0x3f0, x0	// Write all 0s to CSR
	csrrw x1, 0x3f0, x23	// Restore CSR

// Testing CSR 0x3f0
	csrr x8, 0x3f0	// Read CSR
	li x31, -1
	csrrw x2, 0x3f0, x31	// Write all 1s to CSR
	csrrw x2, 0x3f0, x0	// Write all 0s to CSR
	csrrw x2, 0x3f0, x8	// Restore CSR

// Testing CSR 0x3f0
	csrr x1, 0x3f0	// Read CSR
	li x13, -1
	csrrw x18, 0x3f0, x13	// Write all 1s to CSR
	csrrw x18, 0x3f0, x0	// Write all 0s to CSR
	csrrw x18, 0x3f0, x1	// Restore CSR

// Testing CSR 0x3f0
	csrr x1, 0x3f0	// Read CSR
	li x5, -1
	csrrw x4, 0x3f0, x5	// Write all 1s to CSR
	csrrw x4, 0x3f0, x0	// Write all 0s to CSR
	csrrw x4, 0x3f0, x1	// Restore CSR

// Testing CSR 0x3f0
	csrr x27, 0x3f0	// Read CSR
	li x20, -1
	csrrw x30, 0x3f0, x20	// Write all 1s to CSR
	csrrw x30, 0x3f0, x0	// Write all 0s to CSR
	csrrw x30, 0x3f0, x27	// Restore CSR

// Testing CSR 0x3f0
	csrr x30, 0x3f0	// Read CSR
	li x7, -1
	csrrw x3, 0x3f0, x7	// Write all 1s to CSR
	csrrw x3, 0x3f0, x0	// Write all 0s to CSR
	csrrw x3, 0x3f0, x30	// Restore CSR

// Testing CSR 0x3f0
	csrr x24, 0x3f0	// Read CSR
	li x15, -1
	csrrw x7, 0x3f0, x15	// Write all 1s to CSR
	csrrw x7, 0x3f0, x0	// Write all 0s to CSR
	csrrw x7, 0x3f0, x24	// Restore CSR

// Testing CSR 0x3f0
	csrr x28, 0x3f0	// Read CSR
	li x1, -1
	csrrw x17, 0x3f0, x1	// Write all 1s to CSR
	csrrw x17, 0x3f0, x0	// Write all 0s to CSR
	csrrw x17, 0x3f0, x28	// Restore CSR

// Testing CSR 0x3f0
	csrr x29, 0x3f0	// Read CSR
	li x20, -1
	csrrw x28, 0x3f0, x20	// Write all 1s to CSR
	csrrw x28, 0x3f0, x0	// Write all 0s to CSR
	csrrw x28, 0x3f0, x29	// Restore CSR

// Testing CSR 0x3f0
	csrr x14, 0x3f0	// Read CSR
	li x3, -1
	csrrw x18, 0x3f0, x3	// Write all 1s to CSR
	csrrw x18, 0x3f0, x0	// Write all 0s to CSR
	csrrw x18, 0x3f0, x14	// Restore CSR

// Testing CSR 0x3f0
	csrr x6, 0x3f0	// Read CSR
	li x30, -1
	csrrw x8, 0x3f0, x30	// Write all 1s to CSR
	csrrw x8, 0x3f0, x0	// Write all 0s to CSR
	csrrw x8, 0x3f0, x6	// Restore CSR

// Testing CSR 0x3f0
	csrr x8, 0x3f0	// Read CSR
	li x30, -1
	csrrw x14, 0x3f0, x30	// Write all 1s to CSR
	csrrw x14, 0x3f0, x0	// Write all 0s to CSR
	csrrw x14, 0x3f0, x8	// Restore CSR

// Testing CSR 0x3f0
	csrr x13, 0x3f0	// Read CSR
	li x16, -1
	csrrw x26, 0x3f0, x16	// Write all 1s to CSR
	csrrw x26, 0x3f0, x0	// Write all 0s to CSR
	csrrw x26, 0x3f0, x13	// Restore CSR

// Testing CSR 0x3f0
	csrr x1, 0x3f0	// Read CSR
	li x14, -1
	csrrw x7, 0x3f0, x14	// Write all 1s to CSR
	csrrw x7, 0x3f0, x0	// Write all 0s to CSR
	csrrw x7, 0x3f0, x1	// Restore CSR

// Testing CSR 0x3f0
	csrr x13, 0x3f0	// Read CSR
	li x25, -1
	csrrw x2, 0x3f0, x25	// Write all 1s to CSR
	csrrw x2, 0x3f0, x0	// Write all 0s to CSR
	csrrw x2, 0x3f0, x13	// Restore CSR

// Testing CSR 0x3f0
	csrr x20, 0x3f0	// Read CSR
	li x31, -1
	csrrw x9, 0x3f0, x31	// Write all 1s to CSR
	csrrw x9, 0x3f0, x0	// Write all 0s to CSR
	csrrw x9, 0x3f0, x20	// Restore CSR

// Testing CSR 0x3f0
	csrr x1, 0x3f0	// Read CSR
	li x19, -1
	csrrw x12, 0x3f0, x19	// Write all 1s to CSR
	csrrw x12, 0x3f0, x0	// Write all 0s to CSR
	csrrw x12, 0x3f0, x1	// Restore CSR

// Testing CSR 0x3f0
	csrr x23, 0x3f0	// Read CSR
	li x12, -1
	csrrw x27, 0x3f0, x12	// Write all 1s to CSR
	csrrw x27, 0x3f0, x0	// Write all 0s to CSR
	csrrw x27, 0x3f0, x23	// Restore CSR

// Testing CSR 0x3f0
	csrr x11, 0x3f0	// Read CSR
	li x22, -1
	csrrw x15, 0x3f0, x22	// Write all 1s to CSR
	csrrw x15, 0x3f0, x0	// Write all 0s to CSR
	csrrw x15, 0x3f0, x11	// Restore CSR

// Testing CSR 0x3f0
	csrr x21, 0x3f0	// Read CSR
	li x5, -1
	csrrw x20, 0x3f0, x5	// Write all 1s to CSR
	csrrw x20, 0x3f0, x0	// Write all 0s to CSR
	csrrw x20, 0x3f0, x21	// Restore CSR

// Testing CSR 0x3f0
	csrr x17, 0x3f0	// Read CSR
	li x3, -1
	csrrw x9, 0x3f0, x3	// Write all 1s to CSR
	csrrw x9, 0x3f0, x0	// Write all 0s to CSR
	csrrw x9, 0x3f0, x17	// Restore CSR

// Testing CSR 0x3f0
	csrr x31, 0x3f0	// Read CSR
	li x4, -1
	csrrw x23, 0x3f0, x4	// Write all 1s to CSR
	csrrw x23, 0x3f0, x0	// Write all 0s to CSR
	csrrw x23, 0x3f0, x31	// Restore CSR

// Testing CSR 0x3f0
	csrr x4, 0x3f0	// Read CSR
	li x9, -1
	csrrw x1, 0x3f0, x9	// Write all 1s to CSR
	csrrw x1, 0x3f0, x0	// Write all 0s to CSR
	csrrw x1, 0x3f0, x4	// Restore CSR

// Testing CSR 0x3f0
	csrr x23, 0x3f0	// Read CSR
	li x5, -1
	csrrw x20, 0x3f0, x5	// Write all 1s to CSR
	csrrw x20, 0x3f0, x0	// Write all 0s to CSR
	csrrw x20, 0x3f0, x23	// Restore CSR

// Testing CSR 0x3f0
	csrr x25, 0x3f0	// Read CSR
	li x22, -1
	csrrw x5, 0x3f0, x22	// Write all 1s to CSR
	csrrw x5, 0x3f0, x0	// Write all 0s to CSR
	csrrw x5, 0x3f0, x25	// Restore CSR

// Testing CSR 0x3f0
	csrr x13, 0x3f0	// Read CSR
	li x7, -1
	csrrw x19, 0x3f0, x7	// Write all 1s to CSR
	csrrw x19, 0x3f0, x0	// Write all 0s to CSR
	csrrw x19, 0x3f0, x13	// Restore CSR

// Testing CSR 0x3f0
	csrr x22, 0x3f0	// Read CSR
	li x11, -1
	csrrw x7, 0x3f0, x11	// Write all 1s to CSR
	csrrw x7, 0x3f0, x0	// Write all 0s to CSR
	csrrw x7, 0x3f0, x22	// Restore CSR

// Testing CSR 0x3f0
	csrr x14, 0x3f0	// Read CSR
	li x17, -1
	csrrw x4, 0x3f0, x17	// Write all 1s to CSR
	csrrw x4, 0x3f0, x0	// Write all 0s to CSR
	csrrw x4, 0x3f0, x14	// Restore CSR

// Testing CSR 0x3f0
	csrr x18, 0x3f0	// Read CSR
	li x4, -1
	csrrw x23, 0x3f0, x4	// Write all 1s to CSR
	csrrw x23, 0x3f0, x0	// Write all 0s to CSR
	csrrw x23, 0x3f0, x18	// Restore CSR

// Testing CSR 0x3f0
	csrr x30, 0x3f0	// Read CSR
	li x16, -1
	csrrw x4, 0x3f0, x16	// Write all 1s to CSR
	csrrw x4, 0x3f0, x0	// Write all 0s to CSR
	csrrw x4, 0x3f0, x30	// Restore CSR

// Testing CSR 0x3f0
	csrr x17, 0x3f0	// Read CSR
	li x29, -1
	csrrw x15, 0x3f0, x29	// Write all 1s to CSR
	csrrw x15, 0x3f0, x0	// Write all 0s to CSR
	csrrw x15, 0x3f0, x17	// Restore CSR

// Testing CSR 0x3f0
	csrr x16, 0x3f0	// Read CSR
	li x6, -1
	csrrw x15, 0x3f0, x6	// Write all 1s to CSR
	csrrw x15, 0x3f0, x0	// Write all 0s to CSR
	csrrw x15, 0x3f0, x16	// Restore CSR

// Testing CSR 0x3f0
	csrr x18, 0x3f0	// Read CSR
	li x11, -1
	csrrw x5, 0x3f0, x11	// Write all 1s to CSR
	csrrw x5, 0x3f0, x0	// Write all 0s to CSR
	csrrw x5, 0x3f0, x18	// Restore CSR

// Testing CSR 0x3f0
	csrr x14, 0x3f0	// Read CSR
	li x9, -1
	csrrw x13, 0x3f0, x9	// Write all 1s to CSR
	csrrw x13, 0x3f0, x0	// Write all 0s to CSR
	csrrw x13, 0x3f0, x14	// Restore CSR

// Testing CSR 0x3f0
	csrr x3, 0x3f0	// Read CSR
	li x19, -1
	csrrw x17, 0x3f0, x19	// Write all 1s to CSR
	csrrw x17, 0x3f0, x0	// Write all 0s to CSR
	csrrw x17, 0x3f0, x3	// Restore CSR

// Testing CSR 0x3f0
	csrr x11, 0x3f0	// Read CSR
	li x27, -1
	csrrw x28, 0x3f0, x27	// Write all 1s to CSR
	csrrw x28, 0x3f0, x0	// Write all 0s to CSR
	csrrw x28, 0x3f0, x11	// Restore CSR

// Testing CSR 0x3f0
	csrr x8, 0x3f0	// Read CSR
	li x15, -1
	csrrw x12, 0x3f0, x15	// Write all 1s to CSR
	csrrw x12, 0x3f0, x0	// Write all 0s to CSR
	csrrw x12, 0x3f0, x8	// Restore CSR

// Testing CSR 0x3f0
	csrr x16, 0x3f0	// Read CSR
	li x25, -1
	csrrw x30, 0x3f0, x25	// Write all 1s to CSR
	csrrw x30, 0x3f0, x0	// Write all 0s to CSR
	csrrw x30, 0x3f0, x16	// Restore CSR

// Testing CSR 0x3f0
	csrr x14, 0x3f0	// Read CSR
	li x1, -1
	csrrw x15, 0x3f0, x1	// Write all 1s to CSR
	csrrw x15, 0x3f0, x0	// Write all 0s to CSR
	csrrw x15, 0x3f0, x14	// Restore CSR

// Testing CSR 0x3f0
	csrr x24, 0x3f0	// Read CSR
	li x29, -1
	csrrw x1, 0x3f0, x29	// Write all 1s to CSR
	csrrw x1, 0x3f0, x0	// Write all 0s to CSR
	csrrw x1, 0x3f0, x24	// Restore CSR

// Testing CSR 0x3f0
	csrr x18, 0x3f0	// Read CSR
	li x13, -1
	csrrw x31, 0x3f0, x13	// Write all 1s to CSR
	csrrw x31, 0x3f0, x0	// Write all 0s to CSR
	csrrw x31, 0x3f0, x18	// Restore CSR

// Testing CSR 0x3f1
	csrr x25, 0x3f1	// Read CSR
	li x8, -1
	csrrw x15, 0x3f1, x8	// Write all 1s to CSR
	csrrw x15, 0x3f1, x0	// Write all 0s to CSR
	csrrw x15, 0x3f1, x25	// Restore CSR

// Testing CSR 0x3f2
	csrr x14, 0x3f2	// Read CSR
	li x8, -1
	csrrw x9, 0x3f2, x8	// Write all 1s to CSR
	csrrw x9, 0x3f2, x0	// Write all 0s to CSR
	csrrw x9, 0x3f2, x14	// Restore CSR

// Testing CSR 0x3f3
	csrr x16, 0x3f3	// Read CSR
	li x8, -1
	csrrw x5, 0x3f3, x8	// Write all 1s to CSR
	csrrw x5, 0x3f3, x0	// Write all 0s to CSR
	csrrw x5, 0x3f3, x16	// Restore CSR

// Testing CSR 0x3f4
	csrr x15, 0x3f4	// Read CSR
	li x10, -1
	csrrw x12, 0x3f4, x10	// Write all 1s to CSR
	csrrw x12, 0x3f4, x0	// Write all 0s to CSR
	csrrw x12, 0x3f4, x15	// Restore CSR

// Testing CSR 0x3f5
	csrr x21, 0x3f5	// Read CSR
	li x16, -1
	csrrw x20, 0x3f5, x16	// Write all 1s to CSR
	csrrw x20, 0x3f5, x0	// Write all 0s to CSR
	csrrw x20, 0x3f5, x21	// Restore CSR

// Testing CSR 0x3f6
	csrr x30, 0x3f6	// Read CSR
	li x27, -1
	csrrw x5, 0x3f6, x27	// Write all 1s to CSR
	csrrw x5, 0x3f6, x0	// Write all 0s to CSR
	csrrw x5, 0x3f6, x30	// Restore CSR

// Testing CSR 0x3f7
	csrr x17, 0x3f7	// Read CSR
	li x22, -1
	csrrw x3, 0x3f7, x22	// Write all 1s to CSR
	csrrw x3, 0x3f7, x0	// Write all 0s to CSR
	csrrw x3, 0x3f7, x17	// Restore CSR

// Testing CSR 0x3f8
	csrr x7, 0x3f8	// Read CSR
	li x10, -1
	csrrw x30, 0x3f8, x10	// Write all 1s to CSR
	csrrw x30, 0x3f8, x0	// Write all 0s to CSR
	csrrw x30, 0x3f8, x7	// Restore CSR

// Testing CSR 0x3f9
	csrr x17, 0x3f9	// Read CSR
	li x21, -1
	csrrw x22, 0x3f9, x21	// Write all 1s to CSR
	csrrw x22, 0x3f9, x0	// Write all 0s to CSR
	csrrw x22, 0x3f9, x17	// Restore CSR

// Testing CSR 0x3fa
	csrr x4, 0x3fa	// Read CSR
	li x31, -1
	csrrw x2, 0x3fa, x31	// Write all 1s to CSR
	csrrw x2, 0x3fa, x0	// Write all 0s to CSR
	csrrw x2, 0x3fa, x4	// Restore CSR

// Testing CSR 0x3fb
	csrr x5, 0x3fb	// Read CSR
	li x11, -1
	csrrw x2, 0x3fb, x11	// Write all 1s to CSR
	csrrw x2, 0x3fb, x0	// Write all 0s to CSR
	csrrw x2, 0x3fb, x5	// Restore CSR

// Testing CSR 0x3fc
	csrr x11, 0x3fc	// Read CSR
	li x28, -1
	csrrw x20, 0x3fc, x28	// Write all 1s to CSR
	csrrw x20, 0x3fc, x0	// Write all 0s to CSR
	csrrw x20, 0x3fc, x11	// Restore CSR

// Testing CSR 0x3fd
	csrr x26, 0x3fd	// Read CSR
	li x6, -1
	csrrw x25, 0x3fd, x6	// Write all 1s to CSR
	csrrw x25, 0x3fd, x0	// Write all 0s to CSR
	csrrw x25, 0x3fd, x26	// Restore CSR

// Testing CSR 0x3fe
	csrr x29, 0x3fe	// Read CSR
	li x15, -1
	csrrw x13, 0x3fe, x15	// Write all 1s to CSR
	csrrw x13, 0x3fe, x0	// Write all 0s to CSR
	csrrw x13, 0x3fe, x29	// Restore CSR

// Testing CSR 0x3ff
	csrr x22, 0x3ff	// Read CSR
	li x7, -1
	csrrw x14, 0x3ff, x7	// Write all 1s to CSR
	csrrw x14, 0x3ff, x0	// Write all 0s to CSR
	csrrw x14, 0x3ff, x22	// Restore CSR

// Testing CSR 0x400
	csrr x16, 0x400	// Read CSR
	li x7, -1
	csrrw x6, 0x400, x7	// Write all 1s to CSR
	csrrw x6, 0x400, x0	// Write all 0s to CSR
	csrrw x6, 0x400, x16	// Restore CSR

// Testing CSR 0x401
	csrr x13, 0x401	// Read CSR
	li x2, -1
	csrrw x26, 0x401, x2	// Write all 1s to CSR
	csrrw x26, 0x401, x0	// Write all 0s to CSR
	csrrw x26, 0x401, x13	// Restore CSR

// Testing CSR 0x402
	csrr x31, 0x402	// Read CSR
	li x26, -1
	csrrw x25, 0x402, x26	// Write all 1s to CSR
	csrrw x25, 0x402, x0	// Write all 0s to CSR
	csrrw x25, 0x402, x31	// Restore CSR

// Testing CSR 0x403
	csrr x31, 0x403	// Read CSR
	li x11, -1
	csrrw x29, 0x403, x11	// Write all 1s to CSR
	csrrw x29, 0x403, x0	// Write all 0s to CSR
	csrrw x29, 0x403, x31	// Restore CSR

// Testing CSR 0x404
	csrr x25, 0x404	// Read CSR
	li x22, -1
	csrrw x27, 0x404, x22	// Write all 1s to CSR
	csrrw x27, 0x404, x0	// Write all 0s to CSR
	csrrw x27, 0x404, x25	// Restore CSR

// Testing CSR 0x405
	csrr x17, 0x405	// Read CSR
	li x7, -1
	csrrw x24, 0x405, x7	// Write all 1s to CSR
	csrrw x24, 0x405, x0	// Write all 0s to CSR
	csrrw x24, 0x405, x17	// Restore CSR

// Testing CSR 0x406
	csrr x11, 0x406	// Read CSR
	li x6, -1
	csrrw x17, 0x406, x6	// Write all 1s to CSR
	csrrw x17, 0x406, x0	// Write all 0s to CSR
	csrrw x17, 0x406, x11	// Restore CSR

// Testing CSR 0x407
	csrr x30, 0x407	// Read CSR
	li x18, -1
	csrrw x23, 0x407, x18	// Write all 1s to CSR
	csrrw x23, 0x407, x0	// Write all 0s to CSR
	csrrw x23, 0x407, x30	// Restore CSR

// Testing CSR 0x408
	csrr x28, 0x408	// Read CSR
	li x20, -1
	csrrw x19, 0x408, x20	// Write all 1s to CSR
	csrrw x19, 0x408, x0	// Write all 0s to CSR
	csrrw x19, 0x408, x28	// Restore CSR

// Testing CSR 0x409
	csrr x14, 0x409	// Read CSR
	li x5, -1
	csrrw x21, 0x409, x5	// Write all 1s to CSR
	csrrw x21, 0x409, x0	// Write all 0s to CSR
	csrrw x21, 0x409, x14	// Restore CSR

// Testing CSR 0x40a
	csrr x23, 0x40a	// Read CSR
	li x20, -1
	csrrw x16, 0x40a, x20	// Write all 1s to CSR
	csrrw x16, 0x40a, x0	// Write all 0s to CSR
	csrrw x16, 0x40a, x23	// Restore CSR

// Testing CSR 0x40b
	csrr x29, 0x40b	// Read CSR
	li x22, -1
	csrrw x19, 0x40b, x22	// Write all 1s to CSR
	csrrw x19, 0x40b, x0	// Write all 0s to CSR
	csrrw x19, 0x40b, x29	// Restore CSR

// Testing CSR 0x40c
	csrr x30, 0x40c	// Read CSR
	li x7, -1
	csrrw x20, 0x40c, x7	// Write all 1s to CSR
	csrrw x20, 0x40c, x0	// Write all 0s to CSR
	csrrw x20, 0x40c, x30	// Restore CSR

// Testing CSR 0x40d
	csrr x15, 0x40d	// Read CSR
	li x2, -1
	csrrw x8, 0x40d, x2	// Write all 1s to CSR
	csrrw x8, 0x40d, x0	// Write all 0s to CSR
	csrrw x8, 0x40d, x15	// Restore CSR

// Testing CSR 0x40e
	csrr x16, 0x40e	// Read CSR
	li x29, -1
	csrrw x20, 0x40e, x29	// Write all 1s to CSR
	csrrw x20, 0x40e, x0	// Write all 0s to CSR
	csrrw x20, 0x40e, x16	// Restore CSR

// Testing CSR 0x40f
	csrr x27, 0x40f	// Read CSR
	li x11, -1
	csrrw x18, 0x40f, x11	// Write all 1s to CSR
	csrrw x18, 0x40f, x0	// Write all 0s to CSR
	csrrw x18, 0x40f, x27	// Restore CSR

// Testing CSR 0x410
	csrr x24, 0x410	// Read CSR
	li x7, -1
	csrrw x1, 0x410, x7	// Write all 1s to CSR
	csrrw x1, 0x410, x0	// Write all 0s to CSR
	csrrw x1, 0x410, x24	// Restore CSR

// Testing CSR 0x411
	csrr x2, 0x411	// Read CSR
	li x8, -1
	csrrw x5, 0x411, x8	// Write all 1s to CSR
	csrrw x5, 0x411, x0	// Write all 0s to CSR
	csrrw x5, 0x411, x2	// Restore CSR

// Testing CSR 0x412
	csrr x15, 0x412	// Read CSR
	li x28, -1
	csrrw x22, 0x412, x28	// Write all 1s to CSR
	csrrw x22, 0x412, x0	// Write all 0s to CSR
	csrrw x22, 0x412, x15	// Restore CSR

// Testing CSR 0x413
	csrr x20, 0x413	// Read CSR
	li x8, -1
	csrrw x22, 0x413, x8	// Write all 1s to CSR
	csrrw x22, 0x413, x0	// Write all 0s to CSR
	csrrw x22, 0x413, x20	// Restore CSR

// Testing CSR 0x414
	csrr x22, 0x414	// Read CSR
	li x4, -1
	csrrw x28, 0x414, x4	// Write all 1s to CSR
	csrrw x28, 0x414, x0	// Write all 0s to CSR
	csrrw x28, 0x414, x22	// Restore CSR

// Testing CSR 0x415
	csrr x31, 0x415	// Read CSR
	li x25, -1
	csrrw x17, 0x415, x25	// Write all 1s to CSR
	csrrw x17, 0x415, x0	// Write all 0s to CSR
	csrrw x17, 0x415, x31	// Restore CSR

// Testing CSR 0x416
	csrr x14, 0x416	// Read CSR
	li x30, -1
	csrrw x21, 0x416, x30	// Write all 1s to CSR
	csrrw x21, 0x416, x0	// Write all 0s to CSR
	csrrw x21, 0x416, x14	// Restore CSR

// Testing CSR 0x417
	csrr x21, 0x417	// Read CSR
	li x10, -1
	csrrw x29, 0x417, x10	// Write all 1s to CSR
	csrrw x29, 0x417, x0	// Write all 0s to CSR
	csrrw x29, 0x417, x21	// Restore CSR

// Testing CSR 0x418
	csrr x22, 0x418	// Read CSR
	li x11, -1
	csrrw x16, 0x418, x11	// Write all 1s to CSR
	csrrw x16, 0x418, x0	// Write all 0s to CSR
	csrrw x16, 0x418, x22	// Restore CSR

// Testing CSR 0x419
	csrr x22, 0x419	// Read CSR
	li x7, -1
	csrrw x6, 0x419, x7	// Write all 1s to CSR
	csrrw x6, 0x419, x0	// Write all 0s to CSR
	csrrw x6, 0x419, x22	// Restore CSR

// Testing CSR 0x41a
	csrr x12, 0x41a	// Read CSR
	li x18, -1
	csrrw x27, 0x41a, x18	// Write all 1s to CSR
	csrrw x27, 0x41a, x0	// Write all 0s to CSR
	csrrw x27, 0x41a, x12	// Restore CSR

// Testing CSR 0x41b
	csrr x12, 0x41b	// Read CSR
	li x23, -1
	csrrw x15, 0x41b, x23	// Write all 1s to CSR
	csrrw x15, 0x41b, x0	// Write all 0s to CSR
	csrrw x15, 0x41b, x12	// Restore CSR

// Testing CSR 0x41c
	csrr x13, 0x41c	// Read CSR
	li x15, -1
	csrrw x22, 0x41c, x15	// Write all 1s to CSR
	csrrw x22, 0x41c, x0	// Write all 0s to CSR
	csrrw x22, 0x41c, x13	// Restore CSR

// Testing CSR 0x41d
	csrr x11, 0x41d	// Read CSR
	li x28, -1
	csrrw x15, 0x41d, x28	// Write all 1s to CSR
	csrrw x15, 0x41d, x0	// Write all 0s to CSR
	csrrw x15, 0x41d, x11	// Restore CSR

// Testing CSR 0x41e
	csrr x3, 0x41e	// Read CSR
	li x5, -1
	csrrw x8, 0x41e, x5	// Write all 1s to CSR
	csrrw x8, 0x41e, x0	// Write all 0s to CSR
	csrrw x8, 0x41e, x3	// Restore CSR

// Testing CSR 0x41f
	csrr x25, 0x41f	// Read CSR
	li x4, -1
	csrrw x5, 0x41f, x4	// Write all 1s to CSR
	csrrw x5, 0x41f, x0	// Write all 0s to CSR
	csrrw x5, 0x41f, x25	// Restore CSR

// Testing CSR 0x420
	csrr x31, 0x420	// Read CSR
	li x30, -1
	csrrw x13, 0x420, x30	// Write all 1s to CSR
	csrrw x13, 0x420, x0	// Write all 0s to CSR
	csrrw x13, 0x420, x31	// Restore CSR

// Testing CSR 0x421
	csrr x31, 0x421	// Read CSR
	li x15, -1
	csrrw x23, 0x421, x15	// Write all 1s to CSR
	csrrw x23, 0x421, x0	// Write all 0s to CSR
	csrrw x23, 0x421, x31	// Restore CSR

// Testing CSR 0x422
	csrr x18, 0x422	// Read CSR
	li x7, -1
	csrrw x29, 0x422, x7	// Write all 1s to CSR
	csrrw x29, 0x422, x0	// Write all 0s to CSR
	csrrw x29, 0x422, x18	// Restore CSR

// Testing CSR 0x423
	csrr x12, 0x423	// Read CSR
	li x23, -1
	csrrw x2, 0x423, x23	// Write all 1s to CSR
	csrrw x2, 0x423, x0	// Write all 0s to CSR
	csrrw x2, 0x423, x12	// Restore CSR

// Testing CSR 0x424
	csrr x1, 0x424	// Read CSR
	li x13, -1
	csrrw x7, 0x424, x13	// Write all 1s to CSR
	csrrw x7, 0x424, x0	// Write all 0s to CSR
	csrrw x7, 0x424, x1	// Restore CSR

// Testing CSR 0x425
	csrr x3, 0x425	// Read CSR
	li x28, -1
	csrrw x14, 0x425, x28	// Write all 1s to CSR
	csrrw x14, 0x425, x0	// Write all 0s to CSR
	csrrw x14, 0x425, x3	// Restore CSR

// Testing CSR 0x426
	csrr x19, 0x426	// Read CSR
	li x26, -1
	csrrw x28, 0x426, x26	// Write all 1s to CSR
	csrrw x28, 0x426, x0	// Write all 0s to CSR
	csrrw x28, 0x426, x19	// Restore CSR

// Testing CSR 0x427
	csrr x14, 0x427	// Read CSR
	li x18, -1
	csrrw x7, 0x427, x18	// Write all 1s to CSR
	csrrw x7, 0x427, x0	// Write all 0s to CSR
	csrrw x7, 0x427, x14	// Restore CSR

// Testing CSR 0x428
	csrr x21, 0x428	// Read CSR
	li x1, -1
	csrrw x31, 0x428, x1	// Write all 1s to CSR
	csrrw x31, 0x428, x0	// Write all 0s to CSR
	csrrw x31, 0x428, x21	// Restore CSR

// Testing CSR 0x429
	csrr x22, 0x429	// Read CSR
	li x5, -1
	csrrw x17, 0x429, x5	// Write all 1s to CSR
	csrrw x17, 0x429, x0	// Write all 0s to CSR
	csrrw x17, 0x429, x22	// Restore CSR

// Testing CSR 0x42a
	csrr x21, 0x42a	// Read CSR
	li x30, -1
	csrrw x16, 0x42a, x30	// Write all 1s to CSR
	csrrw x16, 0x42a, x0	// Write all 0s to CSR
	csrrw x16, 0x42a, x21	// Restore CSR

// Testing CSR 0x42b
	csrr x10, 0x42b	// Read CSR
	li x13, -1
	csrrw x18, 0x42b, x13	// Write all 1s to CSR
	csrrw x18, 0x42b, x0	// Write all 0s to CSR
	csrrw x18, 0x42b, x10	// Restore CSR

// Testing CSR 0x42c
	csrr x18, 0x42c	// Read CSR
	li x3, -1
	csrrw x20, 0x42c, x3	// Write all 1s to CSR
	csrrw x20, 0x42c, x0	// Write all 0s to CSR
	csrrw x20, 0x42c, x18	// Restore CSR

// Testing CSR 0x42d
	csrr x24, 0x42d	// Read CSR
	li x16, -1
	csrrw x25, 0x42d, x16	// Write all 1s to CSR
	csrrw x25, 0x42d, x0	// Write all 0s to CSR
	csrrw x25, 0x42d, x24	// Restore CSR

// Testing CSR 0x42e
	csrr x1, 0x42e	// Read CSR
	li x7, -1
	csrrw x14, 0x42e, x7	// Write all 1s to CSR
	csrrw x14, 0x42e, x0	// Write all 0s to CSR
	csrrw x14, 0x42e, x1	// Restore CSR

// Testing CSR 0x42f
	csrr x20, 0x42f	// Read CSR
	li x25, -1
	csrrw x12, 0x42f, x25	// Write all 1s to CSR
	csrrw x12, 0x42f, x0	// Write all 0s to CSR
	csrrw x12, 0x42f, x20	// Restore CSR

// Testing CSR 0x430
	csrr x10, 0x430	// Read CSR
	li x3, -1
	csrrw x24, 0x430, x3	// Write all 1s to CSR
	csrrw x24, 0x430, x0	// Write all 0s to CSR
	csrrw x24, 0x430, x10	// Restore CSR

// Testing CSR 0x431
	csrr x1, 0x431	// Read CSR
	li x25, -1
	csrrw x26, 0x431, x25	// Write all 1s to CSR
	csrrw x26, 0x431, x0	// Write all 0s to CSR
	csrrw x26, 0x431, x1	// Restore CSR

// Testing CSR 0x432
	csrr x8, 0x432	// Read CSR
	li x20, -1
	csrrw x31, 0x432, x20	// Write all 1s to CSR
	csrrw x31, 0x432, x0	// Write all 0s to CSR
	csrrw x31, 0x432, x8	// Restore CSR

// Testing CSR 0x433
	csrr x28, 0x433	// Read CSR
	li x1, -1
	csrrw x19, 0x433, x1	// Write all 1s to CSR
	csrrw x19, 0x433, x0	// Write all 0s to CSR
	csrrw x19, 0x433, x28	// Restore CSR

// Testing CSR 0x434
	csrr x28, 0x434	// Read CSR
	li x31, -1
	csrrw x17, 0x434, x31	// Write all 1s to CSR
	csrrw x17, 0x434, x0	// Write all 0s to CSR
	csrrw x17, 0x434, x28	// Restore CSR

// Testing CSR 0x435
	csrr x12, 0x435	// Read CSR
	li x5, -1
	csrrw x15, 0x435, x5	// Write all 1s to CSR
	csrrw x15, 0x435, x0	// Write all 0s to CSR
	csrrw x15, 0x435, x12	// Restore CSR

// Testing CSR 0x436
	csrr x9, 0x436	// Read CSR
	li x4, -1
	csrrw x19, 0x436, x4	// Write all 1s to CSR
	csrrw x19, 0x436, x0	// Write all 0s to CSR
	csrrw x19, 0x436, x9	// Restore CSR

// Testing CSR 0x437
	csrr x15, 0x437	// Read CSR
	li x9, -1
	csrrw x29, 0x437, x9	// Write all 1s to CSR
	csrrw x29, 0x437, x0	// Write all 0s to CSR
	csrrw x29, 0x437, x15	// Restore CSR

// Testing CSR 0x438
	csrr x27, 0x438	// Read CSR
	li x8, -1
	csrrw x13, 0x438, x8	// Write all 1s to CSR
	csrrw x13, 0x438, x0	// Write all 0s to CSR
	csrrw x13, 0x438, x27	// Restore CSR

// Testing CSR 0x439
	csrr x13, 0x439	// Read CSR
	li x24, -1
	csrrw x17, 0x439, x24	// Write all 1s to CSR
	csrrw x17, 0x439, x0	// Write all 0s to CSR
	csrrw x17, 0x439, x13	// Restore CSR

// Testing CSR 0x43a
	csrr x30, 0x43a	// Read CSR
	li x11, -1
	csrrw x8, 0x43a, x11	// Write all 1s to CSR
	csrrw x8, 0x43a, x0	// Write all 0s to CSR
	csrrw x8, 0x43a, x30	// Restore CSR

// Testing CSR 0x43b
	csrr x27, 0x43b	// Read CSR
	li x19, -1
	csrrw x9, 0x43b, x19	// Write all 1s to CSR
	csrrw x9, 0x43b, x0	// Write all 0s to CSR
	csrrw x9, 0x43b, x27	// Restore CSR

// Testing CSR 0x43c
	csrr x30, 0x43c	// Read CSR
	li x3, -1
	csrrw x2, 0x43c, x3	// Write all 1s to CSR
	csrrw x2, 0x43c, x0	// Write all 0s to CSR
	csrrw x2, 0x43c, x30	// Restore CSR

// Testing CSR 0x43d
	csrr x5, 0x43d	// Read CSR
	li x11, -1
	csrrw x21, 0x43d, x11	// Write all 1s to CSR
	csrrw x21, 0x43d, x0	// Write all 0s to CSR
	csrrw x21, 0x43d, x5	// Restore CSR

// Testing CSR 0x43e
	csrr x19, 0x43e	// Read CSR
	li x3, -1
	csrrw x16, 0x43e, x3	// Write all 1s to CSR
	csrrw x16, 0x43e, x0	// Write all 0s to CSR
	csrrw x16, 0x43e, x19	// Restore CSR

// Testing CSR 0x43f
	csrr x31, 0x43f	// Read CSR
	li x17, -1
	csrrw x16, 0x43f, x17	// Write all 1s to CSR
	csrrw x16, 0x43f, x0	// Write all 0s to CSR
	csrrw x16, 0x43f, x31	// Restore CSR

// Testing CSR 0x440
	csrr x14, 0x440	// Read CSR
	li x11, -1
	csrrw x13, 0x440, x11	// Write all 1s to CSR
	csrrw x13, 0x440, x0	// Write all 0s to CSR
	csrrw x13, 0x440, x14	// Restore CSR

// Testing CSR 0x441
	csrr x24, 0x441	// Read CSR
	li x28, -1
	csrrw x1, 0x441, x28	// Write all 1s to CSR
	csrrw x1, 0x441, x0	// Write all 0s to CSR
	csrrw x1, 0x441, x24	// Restore CSR

// Testing CSR 0x442
	csrr x4, 0x442	// Read CSR
	li x14, -1
	csrrw x20, 0x442, x14	// Write all 1s to CSR
	csrrw x20, 0x442, x0	// Write all 0s to CSR
	csrrw x20, 0x442, x4	// Restore CSR

// Testing CSR 0x443
	csrr x22, 0x443	// Read CSR
	li x30, -1
	csrrw x31, 0x443, x30	// Write all 1s to CSR
	csrrw x31, 0x443, x0	// Write all 0s to CSR
	csrrw x31, 0x443, x22	// Restore CSR

// Testing CSR 0x444
	csrr x5, 0x444	// Read CSR
	li x25, -1
	csrrw x29, 0x444, x25	// Write all 1s to CSR
	csrrw x29, 0x444, x0	// Write all 0s to CSR
	csrrw x29, 0x444, x5	// Restore CSR

// Testing CSR 0x445
	csrr x1, 0x445	// Read CSR
	li x4, -1
	csrrw x23, 0x445, x4	// Write all 1s to CSR
	csrrw x23, 0x445, x0	// Write all 0s to CSR
	csrrw x23, 0x445, x1	// Restore CSR

// Testing CSR 0x446
	csrr x14, 0x446	// Read CSR
	li x8, -1
	csrrw x2, 0x446, x8	// Write all 1s to CSR
	csrrw x2, 0x446, x0	// Write all 0s to CSR
	csrrw x2, 0x446, x14	// Restore CSR

// Testing CSR 0x447
	csrr x21, 0x447	// Read CSR
	li x9, -1
	csrrw x13, 0x447, x9	// Write all 1s to CSR
	csrrw x13, 0x447, x0	// Write all 0s to CSR
	csrrw x13, 0x447, x21	// Restore CSR

// Testing CSR 0x448
	csrr x4, 0x448	// Read CSR
	li x12, -1
	csrrw x10, 0x448, x12	// Write all 1s to CSR
	csrrw x10, 0x448, x0	// Write all 0s to CSR
	csrrw x10, 0x448, x4	// Restore CSR

// Testing CSR 0x449
	csrr x12, 0x449	// Read CSR
	li x20, -1
	csrrw x26, 0x449, x20	// Write all 1s to CSR
	csrrw x26, 0x449, x0	// Write all 0s to CSR
	csrrw x26, 0x449, x12	// Restore CSR

// Testing CSR 0x44a
	csrr x21, 0x44a	// Read CSR
	li x7, -1
	csrrw x24, 0x44a, x7	// Write all 1s to CSR
	csrrw x24, 0x44a, x0	// Write all 0s to CSR
	csrrw x24, 0x44a, x21	// Restore CSR

// Testing CSR 0x44b
	csrr x27, 0x44b	// Read CSR
	li x18, -1
	csrrw x2, 0x44b, x18	// Write all 1s to CSR
	csrrw x2, 0x44b, x0	// Write all 0s to CSR
	csrrw x2, 0x44b, x27	// Restore CSR

// Testing CSR 0x44c
	csrr x11, 0x44c	// Read CSR
	li x17, -1
	csrrw x18, 0x44c, x17	// Write all 1s to CSR
	csrrw x18, 0x44c, x0	// Write all 0s to CSR
	csrrw x18, 0x44c, x11	// Restore CSR

// Testing CSR 0x44d
	csrr x1, 0x44d	// Read CSR
	li x6, -1
	csrrw x30, 0x44d, x6	// Write all 1s to CSR
	csrrw x30, 0x44d, x0	// Write all 0s to CSR
	csrrw x30, 0x44d, x1	// Restore CSR

// Testing CSR 0x44e
	csrr x16, 0x44e	// Read CSR
	li x27, -1
	csrrw x1, 0x44e, x27	// Write all 1s to CSR
	csrrw x1, 0x44e, x0	// Write all 0s to CSR
	csrrw x1, 0x44e, x16	// Restore CSR

// Testing CSR 0x44f
	csrr x21, 0x44f	// Read CSR
	li x28, -1
	csrrw x9, 0x44f, x28	// Write all 1s to CSR
	csrrw x9, 0x44f, x0	// Write all 0s to CSR
	csrrw x9, 0x44f, x21	// Restore CSR

// Testing CSR 0x450
	csrr x11, 0x450	// Read CSR
	li x5, -1
	csrrw x12, 0x450, x5	// Write all 1s to CSR
	csrrw x12, 0x450, x0	// Write all 0s to CSR
	csrrw x12, 0x450, x11	// Restore CSR

// Testing CSR 0x451
	csrr x4, 0x451	// Read CSR
	li x20, -1
	csrrw x18, 0x451, x20	// Write all 1s to CSR
	csrrw x18, 0x451, x0	// Write all 0s to CSR
	csrrw x18, 0x451, x4	// Restore CSR

// Testing CSR 0x452
	csrr x14, 0x452	// Read CSR
	li x31, -1
	csrrw x26, 0x452, x31	// Write all 1s to CSR
	csrrw x26, 0x452, x0	// Write all 0s to CSR
	csrrw x26, 0x452, x14	// Restore CSR

// Testing CSR 0x453
	csrr x25, 0x453	// Read CSR
	li x3, -1
	csrrw x9, 0x453, x3	// Write all 1s to CSR
	csrrw x9, 0x453, x0	// Write all 0s to CSR
	csrrw x9, 0x453, x25	// Restore CSR

// Testing CSR 0x454
	csrr x19, 0x454	// Read CSR
	li x4, -1
	csrrw x17, 0x454, x4	// Write all 1s to CSR
	csrrw x17, 0x454, x0	// Write all 0s to CSR
	csrrw x17, 0x454, x19	// Restore CSR

// Testing CSR 0x455
	csrr x3, 0x455	// Read CSR
	li x28, -1
	csrrw x19, 0x455, x28	// Write all 1s to CSR
	csrrw x19, 0x455, x0	// Write all 0s to CSR
	csrrw x19, 0x455, x3	// Restore CSR

// Testing CSR 0x456
	csrr x5, 0x456	// Read CSR
	li x16, -1
	csrrw x2, 0x456, x16	// Write all 1s to CSR
	csrrw x2, 0x456, x0	// Write all 0s to CSR
	csrrw x2, 0x456, x5	// Restore CSR

// Testing CSR 0x457
	csrr x17, 0x457	// Read CSR
	li x27, -1
	csrrw x26, 0x457, x27	// Write all 1s to CSR
	csrrw x26, 0x457, x0	// Write all 0s to CSR
	csrrw x26, 0x457, x17	// Restore CSR

// Testing CSR 0x458
	csrr x8, 0x458	// Read CSR
	li x12, -1
	csrrw x4, 0x458, x12	// Write all 1s to CSR
	csrrw x4, 0x458, x0	// Write all 0s to CSR
	csrrw x4, 0x458, x8	// Restore CSR

// Testing CSR 0x459
	csrr x18, 0x459	// Read CSR
	li x27, -1
	csrrw x23, 0x459, x27	// Write all 1s to CSR
	csrrw x23, 0x459, x0	// Write all 0s to CSR
	csrrw x23, 0x459, x18	// Restore CSR

// Testing CSR 0x45a
	csrr x7, 0x45a	// Read CSR
	li x6, -1
	csrrw x23, 0x45a, x6	// Write all 1s to CSR
	csrrw x23, 0x45a, x0	// Write all 0s to CSR
	csrrw x23, 0x45a, x7	// Restore CSR

// Testing CSR 0x45b
	csrr x22, 0x45b	// Read CSR
	li x31, -1
	csrrw x8, 0x45b, x31	// Write all 1s to CSR
	csrrw x8, 0x45b, x0	// Write all 0s to CSR
	csrrw x8, 0x45b, x22	// Restore CSR

// Testing CSR 0x45c
	csrr x13, 0x45c	// Read CSR
	li x7, -1
	csrrw x20, 0x45c, x7	// Write all 1s to CSR
	csrrw x20, 0x45c, x0	// Write all 0s to CSR
	csrrw x20, 0x45c, x13	// Restore CSR

// Testing CSR 0x45d
	csrr x23, 0x45d	// Read CSR
	li x24, -1
	csrrw x15, 0x45d, x24	// Write all 1s to CSR
	csrrw x15, 0x45d, x0	// Write all 0s to CSR
	csrrw x15, 0x45d, x23	// Restore CSR

// Testing CSR 0x45e
	csrr x12, 0x45e	// Read CSR
	li x6, -1
	csrrw x9, 0x45e, x6	// Write all 1s to CSR
	csrrw x9, 0x45e, x0	// Write all 0s to CSR
	csrrw x9, 0x45e, x12	// Restore CSR

// Testing CSR 0x45f
	csrr x24, 0x45f	// Read CSR
	li x29, -1
	csrrw x12, 0x45f, x29	// Write all 1s to CSR
	csrrw x12, 0x45f, x0	// Write all 0s to CSR
	csrrw x12, 0x45f, x24	// Restore CSR

// Testing CSR 0x460
	csrr x18, 0x460	// Read CSR
	li x28, -1
	csrrw x7, 0x460, x28	// Write all 1s to CSR
	csrrw x7, 0x460, x0	// Write all 0s to CSR
	csrrw x7, 0x460, x18	// Restore CSR

// Testing CSR 0x461
	csrr x7, 0x461	// Read CSR
	li x15, -1
	csrrw x27, 0x461, x15	// Write all 1s to CSR
	csrrw x27, 0x461, x0	// Write all 0s to CSR
	csrrw x27, 0x461, x7	// Restore CSR

// Testing CSR 0x462
	csrr x11, 0x462	// Read CSR
	li x5, -1
	csrrw x9, 0x462, x5	// Write all 1s to CSR
	csrrw x9, 0x462, x0	// Write all 0s to CSR
	csrrw x9, 0x462, x11	// Restore CSR

// Testing CSR 0x463
	csrr x18, 0x463	// Read CSR
	li x22, -1
	csrrw x25, 0x463, x22	// Write all 1s to CSR
	csrrw x25, 0x463, x0	// Write all 0s to CSR
	csrrw x25, 0x463, x18	// Restore CSR

// Testing CSR 0x464
	csrr x25, 0x464	// Read CSR
	li x1, -1
	csrrw x3, 0x464, x1	// Write all 1s to CSR
	csrrw x3, 0x464, x0	// Write all 0s to CSR
	csrrw x3, 0x464, x25	// Restore CSR

// Testing CSR 0x465
	csrr x22, 0x465	// Read CSR
	li x27, -1
	csrrw x11, 0x465, x27	// Write all 1s to CSR
	csrrw x11, 0x465, x0	// Write all 0s to CSR
	csrrw x11, 0x465, x22	// Restore CSR

// Testing CSR 0x466
	csrr x10, 0x466	// Read CSR
	li x28, -1
	csrrw x23, 0x466, x28	// Write all 1s to CSR
	csrrw x23, 0x466, x0	// Write all 0s to CSR
	csrrw x23, 0x466, x10	// Restore CSR

// Testing CSR 0x467
	csrr x26, 0x467	// Read CSR
	li x31, -1
	csrrw x11, 0x467, x31	// Write all 1s to CSR
	csrrw x11, 0x467, x0	// Write all 0s to CSR
	csrrw x11, 0x467, x26	// Restore CSR

// Testing CSR 0x468
	csrr x2, 0x468	// Read CSR
	li x3, -1
	csrrw x20, 0x468, x3	// Write all 1s to CSR
	csrrw x20, 0x468, x0	// Write all 0s to CSR
	csrrw x20, 0x468, x2	// Restore CSR

// Testing CSR 0x469
	csrr x1, 0x469	// Read CSR
	li x10, -1
	csrrw x26, 0x469, x10	// Write all 1s to CSR
	csrrw x26, 0x469, x0	// Write all 0s to CSR
	csrrw x26, 0x469, x1	// Restore CSR

// Testing CSR 0x46a
	csrr x4, 0x46a	// Read CSR
	li x6, -1
	csrrw x23, 0x46a, x6	// Write all 1s to CSR
	csrrw x23, 0x46a, x0	// Write all 0s to CSR
	csrrw x23, 0x46a, x4	// Restore CSR

// Testing CSR 0x46b
	csrr x9, 0x46b	// Read CSR
	li x7, -1
	csrrw x17, 0x46b, x7	// Write all 1s to CSR
	csrrw x17, 0x46b, x0	// Write all 0s to CSR
	csrrw x17, 0x46b, x9	// Restore CSR

// Testing CSR 0x46c
	csrr x18, 0x46c	// Read CSR
	li x12, -1
	csrrw x28, 0x46c, x12	// Write all 1s to CSR
	csrrw x28, 0x46c, x0	// Write all 0s to CSR
	csrrw x28, 0x46c, x18	// Restore CSR

// Testing CSR 0x46d
	csrr x15, 0x46d	// Read CSR
	li x3, -1
	csrrw x14, 0x46d, x3	// Write all 1s to CSR
	csrrw x14, 0x46d, x0	// Write all 0s to CSR
	csrrw x14, 0x46d, x15	// Restore CSR

// Testing CSR 0x46e
	csrr x17, 0x46e	// Read CSR
	li x18, -1
	csrrw x27, 0x46e, x18	// Write all 1s to CSR
	csrrw x27, 0x46e, x0	// Write all 0s to CSR
	csrrw x27, 0x46e, x17	// Restore CSR

// Testing CSR 0x46f
	csrr x14, 0x46f	// Read CSR
	li x4, -1
	csrrw x3, 0x46f, x4	// Write all 1s to CSR
	csrrw x3, 0x46f, x0	// Write all 0s to CSR
	csrrw x3, 0x46f, x14	// Restore CSR

// Testing CSR 0x470
	csrr x19, 0x470	// Read CSR
	li x15, -1
	csrrw x11, 0x470, x15	// Write all 1s to CSR
	csrrw x11, 0x470, x0	// Write all 0s to CSR
	csrrw x11, 0x470, x19	// Restore CSR

// Testing CSR 0x471
	csrr x6, 0x471	// Read CSR
	li x10, -1
	csrrw x8, 0x471, x10	// Write all 1s to CSR
	csrrw x8, 0x471, x0	// Write all 0s to CSR
	csrrw x8, 0x471, x6	// Restore CSR

// Testing CSR 0x472
	csrr x21, 0x472	// Read CSR
	li x14, -1
	csrrw x22, 0x472, x14	// Write all 1s to CSR
	csrrw x22, 0x472, x0	// Write all 0s to CSR
	csrrw x22, 0x472, x21	// Restore CSR

// Testing CSR 0x473
	csrr x23, 0x473	// Read CSR
	li x10, -1
	csrrw x2, 0x473, x10	// Write all 1s to CSR
	csrrw x2, 0x473, x0	// Write all 0s to CSR
	csrrw x2, 0x473, x23	// Restore CSR

// Testing CSR 0x474
	csrr x1, 0x474	// Read CSR
	li x27, -1
	csrrw x21, 0x474, x27	// Write all 1s to CSR
	csrrw x21, 0x474, x0	// Write all 0s to CSR
	csrrw x21, 0x474, x1	// Restore CSR

// Testing CSR 0x475
	csrr x28, 0x475	// Read CSR
	li x9, -1
	csrrw x3, 0x475, x9	// Write all 1s to CSR
	csrrw x3, 0x475, x0	// Write all 0s to CSR
	csrrw x3, 0x475, x28	// Restore CSR

// Testing CSR 0x476
	csrr x28, 0x476	// Read CSR
	li x22, -1
	csrrw x11, 0x476, x22	// Write all 1s to CSR
	csrrw x11, 0x476, x0	// Write all 0s to CSR
	csrrw x11, 0x476, x28	// Restore CSR

// Testing CSR 0x477
	csrr x11, 0x477	// Read CSR
	li x18, -1
	csrrw x21, 0x477, x18	// Write all 1s to CSR
	csrrw x21, 0x477, x0	// Write all 0s to CSR
	csrrw x21, 0x477, x11	// Restore CSR

// Testing CSR 0x478
	csrr x10, 0x478	// Read CSR
	li x2, -1
	csrrw x26, 0x478, x2	// Write all 1s to CSR
	csrrw x26, 0x478, x0	// Write all 0s to CSR
	csrrw x26, 0x478, x10	// Restore CSR

// Testing CSR 0x479
	csrr x23, 0x479	// Read CSR
	li x8, -1
	csrrw x28, 0x479, x8	// Write all 1s to CSR
	csrrw x28, 0x479, x0	// Write all 0s to CSR
	csrrw x28, 0x479, x23	// Restore CSR

// Testing CSR 0x47a
	csrr x29, 0x47a	// Read CSR
	li x23, -1
	csrrw x17, 0x47a, x23	// Write all 1s to CSR
	csrrw x17, 0x47a, x0	// Write all 0s to CSR
	csrrw x17, 0x47a, x29	// Restore CSR

// Testing CSR 0x47b
	csrr x5, 0x47b	// Read CSR
	li x9, -1
	csrrw x20, 0x47b, x9	// Write all 1s to CSR
	csrrw x20, 0x47b, x0	// Write all 0s to CSR
	csrrw x20, 0x47b, x5	// Restore CSR

// Testing CSR 0x47c
	csrr x2, 0x47c	// Read CSR
	li x26, -1
	csrrw x13, 0x47c, x26	// Write all 1s to CSR
	csrrw x13, 0x47c, x0	// Write all 0s to CSR
	csrrw x13, 0x47c, x2	// Restore CSR

// Testing CSR 0x47d
	csrr x14, 0x47d	// Read CSR
	li x9, -1
	csrrw x19, 0x47d, x9	// Write all 1s to CSR
	csrrw x19, 0x47d, x0	// Write all 0s to CSR
	csrrw x19, 0x47d, x14	// Restore CSR

// Testing CSR 0x47e
	csrr x8, 0x47e	// Read CSR
	li x9, -1
	csrrw x31, 0x47e, x9	// Write all 1s to CSR
	csrrw x31, 0x47e, x0	// Write all 0s to CSR
	csrrw x31, 0x47e, x8	// Restore CSR

// Testing CSR 0x47f
	csrr x11, 0x47f	// Read CSR
	li x30, -1
	csrrw x26, 0x47f, x30	// Write all 1s to CSR
	csrrw x26, 0x47f, x0	// Write all 0s to CSR
	csrrw x26, 0x47f, x11	// Restore CSR

// Testing CSR 0x480
	csrr x18, 0x480	// Read CSR
	li x16, -1
	csrrw x29, 0x480, x16	// Write all 1s to CSR
	csrrw x29, 0x480, x0	// Write all 0s to CSR
	csrrw x29, 0x480, x18	// Restore CSR

// Testing CSR 0x481
	csrr x15, 0x481	// Read CSR
	li x23, -1
	csrrw x4, 0x481, x23	// Write all 1s to CSR
	csrrw x4, 0x481, x0	// Write all 0s to CSR
	csrrw x4, 0x481, x15	// Restore CSR

// Testing CSR 0x482
	csrr x14, 0x482	// Read CSR
	li x12, -1
	csrrw x6, 0x482, x12	// Write all 1s to CSR
	csrrw x6, 0x482, x0	// Write all 0s to CSR
	csrrw x6, 0x482, x14	// Restore CSR

// Testing CSR 0x483
	csrr x17, 0x483	// Read CSR
	li x2, -1
	csrrw x8, 0x483, x2	// Write all 1s to CSR
	csrrw x8, 0x483, x0	// Write all 0s to CSR
	csrrw x8, 0x483, x17	// Restore CSR

// Testing CSR 0x484
	csrr x23, 0x484	// Read CSR
	li x26, -1
	csrrw x16, 0x484, x26	// Write all 1s to CSR
	csrrw x16, 0x484, x0	// Write all 0s to CSR
	csrrw x16, 0x484, x23	// Restore CSR

// Testing CSR 0x485
	csrr x13, 0x485	// Read CSR
	li x1, -1
	csrrw x8, 0x485, x1	// Write all 1s to CSR
	csrrw x8, 0x485, x0	// Write all 0s to CSR
	csrrw x8, 0x485, x13	// Restore CSR

// Testing CSR 0x486
	csrr x3, 0x486	// Read CSR
	li x10, -1
	csrrw x4, 0x486, x10	// Write all 1s to CSR
	csrrw x4, 0x486, x0	// Write all 0s to CSR
	csrrw x4, 0x486, x3	// Restore CSR

// Testing CSR 0x487
	csrr x27, 0x487	// Read CSR
	li x6, -1
	csrrw x29, 0x487, x6	// Write all 1s to CSR
	csrrw x29, 0x487, x0	// Write all 0s to CSR
	csrrw x29, 0x487, x27	// Restore CSR

// Testing CSR 0x488
	csrr x5, 0x488	// Read CSR
	li x31, -1
	csrrw x15, 0x488, x31	// Write all 1s to CSR
	csrrw x15, 0x488, x0	// Write all 0s to CSR
	csrrw x15, 0x488, x5	// Restore CSR

// Testing CSR 0x489
	csrr x1, 0x489	// Read CSR
	li x29, -1
	csrrw x25, 0x489, x29	// Write all 1s to CSR
	csrrw x25, 0x489, x0	// Write all 0s to CSR
	csrrw x25, 0x489, x1	// Restore CSR

// Testing CSR 0x48a
	csrr x12, 0x48a	// Read CSR
	li x17, -1
	csrrw x14, 0x48a, x17	// Write all 1s to CSR
	csrrw x14, 0x48a, x0	// Write all 0s to CSR
	csrrw x14, 0x48a, x12	// Restore CSR

// Testing CSR 0x48b
	csrr x4, 0x48b	// Read CSR
	li x17, -1
	csrrw x8, 0x48b, x17	// Write all 1s to CSR
	csrrw x8, 0x48b, x0	// Write all 0s to CSR
	csrrw x8, 0x48b, x4	// Restore CSR

// Testing CSR 0x48c
	csrr x16, 0x48c	// Read CSR
	li x10, -1
	csrrw x9, 0x48c, x10	// Write all 1s to CSR
	csrrw x9, 0x48c, x0	// Write all 0s to CSR
	csrrw x9, 0x48c, x16	// Restore CSR

// Testing CSR 0x48d
	csrr x13, 0x48d	// Read CSR
	li x14, -1
	csrrw x16, 0x48d, x14	// Write all 1s to CSR
	csrrw x16, 0x48d, x0	// Write all 0s to CSR
	csrrw x16, 0x48d, x13	// Restore CSR

// Testing CSR 0x48e
	csrr x23, 0x48e	// Read CSR
	li x30, -1
	csrrw x2, 0x48e, x30	// Write all 1s to CSR
	csrrw x2, 0x48e, x0	// Write all 0s to CSR
	csrrw x2, 0x48e, x23	// Restore CSR

// Testing CSR 0x48f
	csrr x6, 0x48f	// Read CSR
	li x23, -1
	csrrw x29, 0x48f, x23	// Write all 1s to CSR
	csrrw x29, 0x48f, x0	// Write all 0s to CSR
	csrrw x29, 0x48f, x6	// Restore CSR

// Testing CSR 0x490
	csrr x28, 0x490	// Read CSR
	li x17, -1
	csrrw x12, 0x490, x17	// Write all 1s to CSR
	csrrw x12, 0x490, x0	// Write all 0s to CSR
	csrrw x12, 0x490, x28	// Restore CSR

// Testing CSR 0x491
	csrr x7, 0x491	// Read CSR
	li x8, -1
	csrrw x5, 0x491, x8	// Write all 1s to CSR
	csrrw x5, 0x491, x0	// Write all 0s to CSR
	csrrw x5, 0x491, x7	// Restore CSR

// Testing CSR 0x492
	csrr x8, 0x492	// Read CSR
	li x26, -1
	csrrw x10, 0x492, x26	// Write all 1s to CSR
	csrrw x10, 0x492, x0	// Write all 0s to CSR
	csrrw x10, 0x492, x8	// Restore CSR

// Testing CSR 0x493
	csrr x26, 0x493	// Read CSR
	li x5, -1
	csrrw x6, 0x493, x5	// Write all 1s to CSR
	csrrw x6, 0x493, x0	// Write all 0s to CSR
	csrrw x6, 0x493, x26	// Restore CSR

// Testing CSR 0x494
	csrr x18, 0x494	// Read CSR
	li x9, -1
	csrrw x1, 0x494, x9	// Write all 1s to CSR
	csrrw x1, 0x494, x0	// Write all 0s to CSR
	csrrw x1, 0x494, x18	// Restore CSR

// Testing CSR 0x495
	csrr x6, 0x495	// Read CSR
	li x8, -1
	csrrw x28, 0x495, x8	// Write all 1s to CSR
	csrrw x28, 0x495, x0	// Write all 0s to CSR
	csrrw x28, 0x495, x6	// Restore CSR

// Testing CSR 0x496
	csrr x27, 0x496	// Read CSR
	li x24, -1
	csrrw x14, 0x496, x24	// Write all 1s to CSR
	csrrw x14, 0x496, x0	// Write all 0s to CSR
	csrrw x14, 0x496, x27	// Restore CSR

// Testing CSR 0x497
	csrr x30, 0x497	// Read CSR
	li x29, -1
	csrrw x23, 0x497, x29	// Write all 1s to CSR
	csrrw x23, 0x497, x0	// Write all 0s to CSR
	csrrw x23, 0x497, x30	// Restore CSR

// Testing CSR 0x498
	csrr x31, 0x498	// Read CSR
	li x6, -1
	csrrw x8, 0x498, x6	// Write all 1s to CSR
	csrrw x8, 0x498, x0	// Write all 0s to CSR
	csrrw x8, 0x498, x31	// Restore CSR

// Testing CSR 0x499
	csrr x25, 0x499	// Read CSR
	li x18, -1
	csrrw x5, 0x499, x18	// Write all 1s to CSR
	csrrw x5, 0x499, x0	// Write all 0s to CSR
	csrrw x5, 0x499, x25	// Restore CSR

// Testing CSR 0x49a
	csrr x29, 0x49a	// Read CSR
	li x27, -1
	csrrw x19, 0x49a, x27	// Write all 1s to CSR
	csrrw x19, 0x49a, x0	// Write all 0s to CSR
	csrrw x19, 0x49a, x29	// Restore CSR

// Testing CSR 0x49b
	csrr x22, 0x49b	// Read CSR
	li x6, -1
	csrrw x24, 0x49b, x6	// Write all 1s to CSR
	csrrw x24, 0x49b, x0	// Write all 0s to CSR
	csrrw x24, 0x49b, x22	// Restore CSR

// Testing CSR 0x49c
	csrr x8, 0x49c	// Read CSR
	li x17, -1
	csrrw x25, 0x49c, x17	// Write all 1s to CSR
	csrrw x25, 0x49c, x0	// Write all 0s to CSR
	csrrw x25, 0x49c, x8	// Restore CSR

// Testing CSR 0x49d
	csrr x10, 0x49d	// Read CSR
	li x26, -1
	csrrw x28, 0x49d, x26	// Write all 1s to CSR
	csrrw x28, 0x49d, x0	// Write all 0s to CSR
	csrrw x28, 0x49d, x10	// Restore CSR

// Testing CSR 0x49e
	csrr x28, 0x49e	// Read CSR
	li x26, -1
	csrrw x23, 0x49e, x26	// Write all 1s to CSR
	csrrw x23, 0x49e, x0	// Write all 0s to CSR
	csrrw x23, 0x49e, x28	// Restore CSR

// Testing CSR 0x49f
	csrr x24, 0x49f	// Read CSR
	li x1, -1
	csrrw x15, 0x49f, x1	// Write all 1s to CSR
	csrrw x15, 0x49f, x0	// Write all 0s to CSR
	csrrw x15, 0x49f, x24	// Restore CSR

// Testing CSR 0x4a0
	csrr x26, 0x4a0	// Read CSR
	li x29, -1
	csrrw x28, 0x4a0, x29	// Write all 1s to CSR
	csrrw x28, 0x4a0, x0	// Write all 0s to CSR
	csrrw x28, 0x4a0, x26	// Restore CSR

// Testing CSR 0x4a1
	csrr x7, 0x4a1	// Read CSR
	li x2, -1
	csrrw x14, 0x4a1, x2	// Write all 1s to CSR
	csrrw x14, 0x4a1, x0	// Write all 0s to CSR
	csrrw x14, 0x4a1, x7	// Restore CSR

// Testing CSR 0x4a2
	csrr x6, 0x4a2	// Read CSR
	li x13, -1
	csrrw x17, 0x4a2, x13	// Write all 1s to CSR
	csrrw x17, 0x4a2, x0	// Write all 0s to CSR
	csrrw x17, 0x4a2, x6	// Restore CSR

// Testing CSR 0x4a3
	csrr x13, 0x4a3	// Read CSR
	li x7, -1
	csrrw x18, 0x4a3, x7	// Write all 1s to CSR
	csrrw x18, 0x4a3, x0	// Write all 0s to CSR
	csrrw x18, 0x4a3, x13	// Restore CSR

// Testing CSR 0x4a4
	csrr x17, 0x4a4	// Read CSR
	li x16, -1
	csrrw x4, 0x4a4, x16	// Write all 1s to CSR
	csrrw x4, 0x4a4, x0	// Write all 0s to CSR
	csrrw x4, 0x4a4, x17	// Restore CSR

// Testing CSR 0x4a5
	csrr x5, 0x4a5	// Read CSR
	li x28, -1
	csrrw x3, 0x4a5, x28	// Write all 1s to CSR
	csrrw x3, 0x4a5, x0	// Write all 0s to CSR
	csrrw x3, 0x4a5, x5	// Restore CSR

// Testing CSR 0x4a6
	csrr x18, 0x4a6	// Read CSR
	li x1, -1
	csrrw x29, 0x4a6, x1	// Write all 1s to CSR
	csrrw x29, 0x4a6, x0	// Write all 0s to CSR
	csrrw x29, 0x4a6, x18	// Restore CSR

// Testing CSR 0x4a7
	csrr x27, 0x4a7	// Read CSR
	li x29, -1
	csrrw x3, 0x4a7, x29	// Write all 1s to CSR
	csrrw x3, 0x4a7, x0	// Write all 0s to CSR
	csrrw x3, 0x4a7, x27	// Restore CSR

// Testing CSR 0x4a8
	csrr x1, 0x4a8	// Read CSR
	li x31, -1
	csrrw x24, 0x4a8, x31	// Write all 1s to CSR
	csrrw x24, 0x4a8, x0	// Write all 0s to CSR
	csrrw x24, 0x4a8, x1	// Restore CSR

// Testing CSR 0x4a9
	csrr x8, 0x4a9	// Read CSR
	li x24, -1
	csrrw x13, 0x4a9, x24	// Write all 1s to CSR
	csrrw x13, 0x4a9, x0	// Write all 0s to CSR
	csrrw x13, 0x4a9, x8	// Restore CSR

// Testing CSR 0x4aa
	csrr x15, 0x4aa	// Read CSR
	li x22, -1
	csrrw x9, 0x4aa, x22	// Write all 1s to CSR
	csrrw x9, 0x4aa, x0	// Write all 0s to CSR
	csrrw x9, 0x4aa, x15	// Restore CSR

// Testing CSR 0x4ab
	csrr x14, 0x4ab	// Read CSR
	li x12, -1
	csrrw x22, 0x4ab, x12	// Write all 1s to CSR
	csrrw x22, 0x4ab, x0	// Write all 0s to CSR
	csrrw x22, 0x4ab, x14	// Restore CSR

// Testing CSR 0x4ac
	csrr x13, 0x4ac	// Read CSR
	li x9, -1
	csrrw x24, 0x4ac, x9	// Write all 1s to CSR
	csrrw x24, 0x4ac, x0	// Write all 0s to CSR
	csrrw x24, 0x4ac, x13	// Restore CSR

// Testing CSR 0x4ad
	csrr x3, 0x4ad	// Read CSR
	li x29, -1
	csrrw x25, 0x4ad, x29	// Write all 1s to CSR
	csrrw x25, 0x4ad, x0	// Write all 0s to CSR
	csrrw x25, 0x4ad, x3	// Restore CSR

// Testing CSR 0x4ae
	csrr x6, 0x4ae	// Read CSR
	li x19, -1
	csrrw x8, 0x4ae, x19	// Write all 1s to CSR
	csrrw x8, 0x4ae, x0	// Write all 0s to CSR
	csrrw x8, 0x4ae, x6	// Restore CSR

// Testing CSR 0x4af
	csrr x24, 0x4af	// Read CSR
	li x7, -1
	csrrw x28, 0x4af, x7	// Write all 1s to CSR
	csrrw x28, 0x4af, x0	// Write all 0s to CSR
	csrrw x28, 0x4af, x24	// Restore CSR

// Testing CSR 0x4b0
	csrr x2, 0x4b0	// Read CSR
	li x25, -1
	csrrw x28, 0x4b0, x25	// Write all 1s to CSR
	csrrw x28, 0x4b0, x0	// Write all 0s to CSR
	csrrw x28, 0x4b0, x2	// Restore CSR

// Testing CSR 0x4b1
	csrr x2, 0x4b1	// Read CSR
	li x17, -1
	csrrw x26, 0x4b1, x17	// Write all 1s to CSR
	csrrw x26, 0x4b1, x0	// Write all 0s to CSR
	csrrw x26, 0x4b1, x2	// Restore CSR

// Testing CSR 0x4b2
	csrr x3, 0x4b2	// Read CSR
	li x23, -1
	csrrw x15, 0x4b2, x23	// Write all 1s to CSR
	csrrw x15, 0x4b2, x0	// Write all 0s to CSR
	csrrw x15, 0x4b2, x3	// Restore CSR

// Testing CSR 0x4b3
	csrr x8, 0x4b3	// Read CSR
	li x15, -1
	csrrw x23, 0x4b3, x15	// Write all 1s to CSR
	csrrw x23, 0x4b3, x0	// Write all 0s to CSR
	csrrw x23, 0x4b3, x8	// Restore CSR

// Testing CSR 0x4b4
	csrr x25, 0x4b4	// Read CSR
	li x29, -1
	csrrw x22, 0x4b4, x29	// Write all 1s to CSR
	csrrw x22, 0x4b4, x0	// Write all 0s to CSR
	csrrw x22, 0x4b4, x25	// Restore CSR

// Testing CSR 0x4b5
	csrr x5, 0x4b5	// Read CSR
	li x20, -1
	csrrw x21, 0x4b5, x20	// Write all 1s to CSR
	csrrw x21, 0x4b5, x0	// Write all 0s to CSR
	csrrw x21, 0x4b5, x5	// Restore CSR

// Testing CSR 0x4b6
	csrr x29, 0x4b6	// Read CSR
	li x17, -1
	csrrw x10, 0x4b6, x17	// Write all 1s to CSR
	csrrw x10, 0x4b6, x0	// Write all 0s to CSR
	csrrw x10, 0x4b6, x29	// Restore CSR

// Testing CSR 0x4b7
	csrr x1, 0x4b7	// Read CSR
	li x20, -1
	csrrw x5, 0x4b7, x20	// Write all 1s to CSR
	csrrw x5, 0x4b7, x0	// Write all 0s to CSR
	csrrw x5, 0x4b7, x1	// Restore CSR

// Testing CSR 0x4b8
	csrr x12, 0x4b8	// Read CSR
	li x22, -1
	csrrw x27, 0x4b8, x22	// Write all 1s to CSR
	csrrw x27, 0x4b8, x0	// Write all 0s to CSR
	csrrw x27, 0x4b8, x12	// Restore CSR

// Testing CSR 0x4b9
	csrr x31, 0x4b9	// Read CSR
	li x10, -1
	csrrw x17, 0x4b9, x10	// Write all 1s to CSR
	csrrw x17, 0x4b9, x0	// Write all 0s to CSR
	csrrw x17, 0x4b9, x31	// Restore CSR

// Testing CSR 0x4ba
	csrr x21, 0x4ba	// Read CSR
	li x23, -1
	csrrw x9, 0x4ba, x23	// Write all 1s to CSR
	csrrw x9, 0x4ba, x0	// Write all 0s to CSR
	csrrw x9, 0x4ba, x21	// Restore CSR

// Testing CSR 0x4bb
	csrr x5, 0x4bb	// Read CSR
	li x1, -1
	csrrw x16, 0x4bb, x1	// Write all 1s to CSR
	csrrw x16, 0x4bb, x0	// Write all 0s to CSR
	csrrw x16, 0x4bb, x5	// Restore CSR

// Testing CSR 0x4bc
	csrr x26, 0x4bc	// Read CSR
	li x24, -1
	csrrw x30, 0x4bc, x24	// Write all 1s to CSR
	csrrw x30, 0x4bc, x0	// Write all 0s to CSR
	csrrw x30, 0x4bc, x26	// Restore CSR

// Testing CSR 0x4bd
	csrr x27, 0x4bd	// Read CSR
	li x28, -1
	csrrw x7, 0x4bd, x28	// Write all 1s to CSR
	csrrw x7, 0x4bd, x0	// Write all 0s to CSR
	csrrw x7, 0x4bd, x27	// Restore CSR

// Testing CSR 0x4be
	csrr x20, 0x4be	// Read CSR
	li x13, -1
	csrrw x11, 0x4be, x13	// Write all 1s to CSR
	csrrw x11, 0x4be, x0	// Write all 0s to CSR
	csrrw x11, 0x4be, x20	// Restore CSR

// Testing CSR 0x4bf
	csrr x16, 0x4bf	// Read CSR
	li x10, -1
	csrrw x15, 0x4bf, x10	// Write all 1s to CSR
	csrrw x15, 0x4bf, x0	// Write all 0s to CSR
	csrrw x15, 0x4bf, x16	// Restore CSR

// Testing CSR 0x4c0
	csrr x5, 0x4c0	// Read CSR
	li x16, -1
	csrrw x27, 0x4c0, x16	// Write all 1s to CSR
	csrrw x27, 0x4c0, x0	// Write all 0s to CSR
	csrrw x27, 0x4c0, x5	// Restore CSR

// Testing CSR 0x4c1
	csrr x10, 0x4c1	// Read CSR
	li x31, -1
	csrrw x26, 0x4c1, x31	// Write all 1s to CSR
	csrrw x26, 0x4c1, x0	// Write all 0s to CSR
	csrrw x26, 0x4c1, x10	// Restore CSR

// Testing CSR 0x4c2
	csrr x23, 0x4c2	// Read CSR
	li x30, -1
	csrrw x11, 0x4c2, x30	// Write all 1s to CSR
	csrrw x11, 0x4c2, x0	// Write all 0s to CSR
	csrrw x11, 0x4c2, x23	// Restore CSR

// Testing CSR 0x4c3
	csrr x12, 0x4c3	// Read CSR
	li x28, -1
	csrrw x21, 0x4c3, x28	// Write all 1s to CSR
	csrrw x21, 0x4c3, x0	// Write all 0s to CSR
	csrrw x21, 0x4c3, x12	// Restore CSR

// Testing CSR 0x4c4
	csrr x20, 0x4c4	// Read CSR
	li x13, -1
	csrrw x19, 0x4c4, x13	// Write all 1s to CSR
	csrrw x19, 0x4c4, x0	// Write all 0s to CSR
	csrrw x19, 0x4c4, x20	// Restore CSR

// Testing CSR 0x4c5
	csrr x13, 0x4c5	// Read CSR
	li x23, -1
	csrrw x29, 0x4c5, x23	// Write all 1s to CSR
	csrrw x29, 0x4c5, x0	// Write all 0s to CSR
	csrrw x29, 0x4c5, x13	// Restore CSR

// Testing CSR 0x4c6
	csrr x17, 0x4c6	// Read CSR
	li x10, -1
	csrrw x22, 0x4c6, x10	// Write all 1s to CSR
	csrrw x22, 0x4c6, x0	// Write all 0s to CSR
	csrrw x22, 0x4c6, x17	// Restore CSR

// Testing CSR 0x4c7
	csrr x27, 0x4c7	// Read CSR
	li x25, -1
	csrrw x19, 0x4c7, x25	// Write all 1s to CSR
	csrrw x19, 0x4c7, x0	// Write all 0s to CSR
	csrrw x19, 0x4c7, x27	// Restore CSR

// Testing CSR 0x4c8
	csrr x27, 0x4c8	// Read CSR
	li x8, -1
	csrrw x7, 0x4c8, x8	// Write all 1s to CSR
	csrrw x7, 0x4c8, x0	// Write all 0s to CSR
	csrrw x7, 0x4c8, x27	// Restore CSR

// Testing CSR 0x4c9
	csrr x14, 0x4c9	// Read CSR
	li x7, -1
	csrrw x9, 0x4c9, x7	// Write all 1s to CSR
	csrrw x9, 0x4c9, x0	// Write all 0s to CSR
	csrrw x9, 0x4c9, x14	// Restore CSR

// Testing CSR 0x4ca
	csrr x17, 0x4ca	// Read CSR
	li x6, -1
	csrrw x5, 0x4ca, x6	// Write all 1s to CSR
	csrrw x5, 0x4ca, x0	// Write all 0s to CSR
	csrrw x5, 0x4ca, x17	// Restore CSR

// Testing CSR 0x4cb
	csrr x26, 0x4cb	// Read CSR
	li x20, -1
	csrrw x17, 0x4cb, x20	// Write all 1s to CSR
	csrrw x17, 0x4cb, x0	// Write all 0s to CSR
	csrrw x17, 0x4cb, x26	// Restore CSR

// Testing CSR 0x4cc
	csrr x25, 0x4cc	// Read CSR
	li x29, -1
	csrrw x18, 0x4cc, x29	// Write all 1s to CSR
	csrrw x18, 0x4cc, x0	// Write all 0s to CSR
	csrrw x18, 0x4cc, x25	// Restore CSR

// Testing CSR 0x4cd
	csrr x25, 0x4cd	// Read CSR
	li x30, -1
	csrrw x17, 0x4cd, x30	// Write all 1s to CSR
	csrrw x17, 0x4cd, x0	// Write all 0s to CSR
	csrrw x17, 0x4cd, x25	// Restore CSR

// Testing CSR 0x4ce
	csrr x27, 0x4ce	// Read CSR
	li x16, -1
	csrrw x21, 0x4ce, x16	// Write all 1s to CSR
	csrrw x21, 0x4ce, x0	// Write all 0s to CSR
	csrrw x21, 0x4ce, x27	// Restore CSR

// Testing CSR 0x4cf
	csrr x30, 0x4cf	// Read CSR
	li x11, -1
	csrrw x9, 0x4cf, x11	// Write all 1s to CSR
	csrrw x9, 0x4cf, x0	// Write all 0s to CSR
	csrrw x9, 0x4cf, x30	// Restore CSR

// Testing CSR 0x4d0
	csrr x14, 0x4d0	// Read CSR
	li x10, -1
	csrrw x15, 0x4d0, x10	// Write all 1s to CSR
	csrrw x15, 0x4d0, x0	// Write all 0s to CSR
	csrrw x15, 0x4d0, x14	// Restore CSR

// Testing CSR 0x4d1
	csrr x30, 0x4d1	// Read CSR
	li x21, -1
	csrrw x17, 0x4d1, x21	// Write all 1s to CSR
	csrrw x17, 0x4d1, x0	// Write all 0s to CSR
	csrrw x17, 0x4d1, x30	// Restore CSR

// Testing CSR 0x4d2
	csrr x2, 0x4d2	// Read CSR
	li x26, -1
	csrrw x24, 0x4d2, x26	// Write all 1s to CSR
	csrrw x24, 0x4d2, x0	// Write all 0s to CSR
	csrrw x24, 0x4d2, x2	// Restore CSR

// Testing CSR 0x4d3
	csrr x7, 0x4d3	// Read CSR
	li x31, -1
	csrrw x9, 0x4d3, x31	// Write all 1s to CSR
	csrrw x9, 0x4d3, x0	// Write all 0s to CSR
	csrrw x9, 0x4d3, x7	// Restore CSR

// Testing CSR 0x4d4
	csrr x15, 0x4d4	// Read CSR
	li x23, -1
	csrrw x3, 0x4d4, x23	// Write all 1s to CSR
	csrrw x3, 0x4d4, x0	// Write all 0s to CSR
	csrrw x3, 0x4d4, x15	// Restore CSR

// Testing CSR 0x4d5
	csrr x1, 0x4d5	// Read CSR
	li x7, -1
	csrrw x20, 0x4d5, x7	// Write all 1s to CSR
	csrrw x20, 0x4d5, x0	// Write all 0s to CSR
	csrrw x20, 0x4d5, x1	// Restore CSR

// Testing CSR 0x4d6
	csrr x4, 0x4d6	// Read CSR
	li x28, -1
	csrrw x9, 0x4d6, x28	// Write all 1s to CSR
	csrrw x9, 0x4d6, x0	// Write all 0s to CSR
	csrrw x9, 0x4d6, x4	// Restore CSR

// Testing CSR 0x4d7
	csrr x26, 0x4d7	// Read CSR
	li x31, -1
	csrrw x1, 0x4d7, x31	// Write all 1s to CSR
	csrrw x1, 0x4d7, x0	// Write all 0s to CSR
	csrrw x1, 0x4d7, x26	// Restore CSR

// Testing CSR 0x4d8
	csrr x27, 0x4d8	// Read CSR
	li x28, -1
	csrrw x7, 0x4d8, x28	// Write all 1s to CSR
	csrrw x7, 0x4d8, x0	// Write all 0s to CSR
	csrrw x7, 0x4d8, x27	// Restore CSR

// Testing CSR 0x4d9
	csrr x31, 0x4d9	// Read CSR
	li x29, -1
	csrrw x6, 0x4d9, x29	// Write all 1s to CSR
	csrrw x6, 0x4d9, x0	// Write all 0s to CSR
	csrrw x6, 0x4d9, x31	// Restore CSR

// Testing CSR 0x4da
	csrr x20, 0x4da	// Read CSR
	li x6, -1
	csrrw x30, 0x4da, x6	// Write all 1s to CSR
	csrrw x30, 0x4da, x0	// Write all 0s to CSR
	csrrw x30, 0x4da, x20	// Restore CSR

// Testing CSR 0x4db
	csrr x31, 0x4db	// Read CSR
	li x22, -1
	csrrw x12, 0x4db, x22	// Write all 1s to CSR
	csrrw x12, 0x4db, x0	// Write all 0s to CSR
	csrrw x12, 0x4db, x31	// Restore CSR

// Testing CSR 0x4dc
	csrr x20, 0x4dc	// Read CSR
	li x26, -1
	csrrw x9, 0x4dc, x26	// Write all 1s to CSR
	csrrw x9, 0x4dc, x0	// Write all 0s to CSR
	csrrw x9, 0x4dc, x20	// Restore CSR

// Testing CSR 0x4dd
	csrr x1, 0x4dd	// Read CSR
	li x22, -1
	csrrw x20, 0x4dd, x22	// Write all 1s to CSR
	csrrw x20, 0x4dd, x0	// Write all 0s to CSR
	csrrw x20, 0x4dd, x1	// Restore CSR

// Testing CSR 0x4de
	csrr x30, 0x4de	// Read CSR
	li x27, -1
	csrrw x6, 0x4de, x27	// Write all 1s to CSR
	csrrw x6, 0x4de, x0	// Write all 0s to CSR
	csrrw x6, 0x4de, x30	// Restore CSR

// Testing CSR 0x4df
	csrr x28, 0x4df	// Read CSR
	li x10, -1
	csrrw x31, 0x4df, x10	// Write all 1s to CSR
	csrrw x31, 0x4df, x0	// Write all 0s to CSR
	csrrw x31, 0x4df, x28	// Restore CSR

// Testing CSR 0x4e0
	csrr x27, 0x4e0	// Read CSR
	li x8, -1
	csrrw x13, 0x4e0, x8	// Write all 1s to CSR
	csrrw x13, 0x4e0, x0	// Write all 0s to CSR
	csrrw x13, 0x4e0, x27	// Restore CSR

// Testing CSR 0x4e1
	csrr x27, 0x4e1	// Read CSR
	li x16, -1
	csrrw x24, 0x4e1, x16	// Write all 1s to CSR
	csrrw x24, 0x4e1, x0	// Write all 0s to CSR
	csrrw x24, 0x4e1, x27	// Restore CSR

// Testing CSR 0x4e2
	csrr x12, 0x4e2	// Read CSR
	li x28, -1
	csrrw x3, 0x4e2, x28	// Write all 1s to CSR
	csrrw x3, 0x4e2, x0	// Write all 0s to CSR
	csrrw x3, 0x4e2, x12	// Restore CSR

// Testing CSR 0x4e3
	csrr x19, 0x4e3	// Read CSR
	li x14, -1
	csrrw x26, 0x4e3, x14	// Write all 1s to CSR
	csrrw x26, 0x4e3, x0	// Write all 0s to CSR
	csrrw x26, 0x4e3, x19	// Restore CSR

// Testing CSR 0x4e4
	csrr x4, 0x4e4	// Read CSR
	li x23, -1
	csrrw x1, 0x4e4, x23	// Write all 1s to CSR
	csrrw x1, 0x4e4, x0	// Write all 0s to CSR
	csrrw x1, 0x4e4, x4	// Restore CSR

// Testing CSR 0x4e5
	csrr x25, 0x4e5	// Read CSR
	li x6, -1
	csrrw x1, 0x4e5, x6	// Write all 1s to CSR
	csrrw x1, 0x4e5, x0	// Write all 0s to CSR
	csrrw x1, 0x4e5, x25	// Restore CSR

// Testing CSR 0x4e6
	csrr x20, 0x4e6	// Read CSR
	li x18, -1
	csrrw x9, 0x4e6, x18	// Write all 1s to CSR
	csrrw x9, 0x4e6, x0	// Write all 0s to CSR
	csrrw x9, 0x4e6, x20	// Restore CSR

// Testing CSR 0x4e7
	csrr x12, 0x4e7	// Read CSR
	li x24, -1
	csrrw x7, 0x4e7, x24	// Write all 1s to CSR
	csrrw x7, 0x4e7, x0	// Write all 0s to CSR
	csrrw x7, 0x4e7, x12	// Restore CSR

// Testing CSR 0x4e8
	csrr x28, 0x4e8	// Read CSR
	li x30, -1
	csrrw x13, 0x4e8, x30	// Write all 1s to CSR
	csrrw x13, 0x4e8, x0	// Write all 0s to CSR
	csrrw x13, 0x4e8, x28	// Restore CSR

// Testing CSR 0x4e9
	csrr x7, 0x4e9	// Read CSR
	li x11, -1
	csrrw x6, 0x4e9, x11	// Write all 1s to CSR
	csrrw x6, 0x4e9, x0	// Write all 0s to CSR
	csrrw x6, 0x4e9, x7	// Restore CSR

// Testing CSR 0x4ea
	csrr x26, 0x4ea	// Read CSR
	li x6, -1
	csrrw x16, 0x4ea, x6	// Write all 1s to CSR
	csrrw x16, 0x4ea, x0	// Write all 0s to CSR
	csrrw x16, 0x4ea, x26	// Restore CSR

// Testing CSR 0x4eb
	csrr x22, 0x4eb	// Read CSR
	li x5, -1
	csrrw x20, 0x4eb, x5	// Write all 1s to CSR
	csrrw x20, 0x4eb, x0	// Write all 0s to CSR
	csrrw x20, 0x4eb, x22	// Restore CSR

// Testing CSR 0x4ec
	csrr x19, 0x4ec	// Read CSR
	li x17, -1
	csrrw x14, 0x4ec, x17	// Write all 1s to CSR
	csrrw x14, 0x4ec, x0	// Write all 0s to CSR
	csrrw x14, 0x4ec, x19	// Restore CSR

// Testing CSR 0x4ed
	csrr x19, 0x4ed	// Read CSR
	li x21, -1
	csrrw x31, 0x4ed, x21	// Write all 1s to CSR
	csrrw x31, 0x4ed, x0	// Write all 0s to CSR
	csrrw x31, 0x4ed, x19	// Restore CSR

// Testing CSR 0x4ee
	csrr x30, 0x4ee	// Read CSR
	li x28, -1
	csrrw x8, 0x4ee, x28	// Write all 1s to CSR
	csrrw x8, 0x4ee, x0	// Write all 0s to CSR
	csrrw x8, 0x4ee, x30	// Restore CSR

// Testing CSR 0x4ef
	csrr x29, 0x4ef	// Read CSR
	li x1, -1
	csrrw x2, 0x4ef, x1	// Write all 1s to CSR
	csrrw x2, 0x4ef, x0	// Write all 0s to CSR
	csrrw x2, 0x4ef, x29	// Restore CSR

// Testing CSR 0x4f0
	csrr x14, 0x4f0	// Read CSR
	li x29, -1
	csrrw x20, 0x4f0, x29	// Write all 1s to CSR
	csrrw x20, 0x4f0, x0	// Write all 0s to CSR
	csrrw x20, 0x4f0, x14	// Restore CSR

// Testing CSR 0x4f1
	csrr x2, 0x4f1	// Read CSR
	li x21, -1
	csrrw x30, 0x4f1, x21	// Write all 1s to CSR
	csrrw x30, 0x4f1, x0	// Write all 0s to CSR
	csrrw x30, 0x4f1, x2	// Restore CSR

// Testing CSR 0x4f2
	csrr x5, 0x4f2	// Read CSR
	li x17, -1
	csrrw x3, 0x4f2, x17	// Write all 1s to CSR
	csrrw x3, 0x4f2, x0	// Write all 0s to CSR
	csrrw x3, 0x4f2, x5	// Restore CSR

// Testing CSR 0x4f3
	csrr x14, 0x4f3	// Read CSR
	li x10, -1
	csrrw x11, 0x4f3, x10	// Write all 1s to CSR
	csrrw x11, 0x4f3, x0	// Write all 0s to CSR
	csrrw x11, 0x4f3, x14	// Restore CSR

// Testing CSR 0x4f4
	csrr x21, 0x4f4	// Read CSR
	li x30, -1
	csrrw x27, 0x4f4, x30	// Write all 1s to CSR
	csrrw x27, 0x4f4, x0	// Write all 0s to CSR
	csrrw x27, 0x4f4, x21	// Restore CSR

// Testing CSR 0x4f5
	csrr x20, 0x4f5	// Read CSR
	li x7, -1
	csrrw x23, 0x4f5, x7	// Write all 1s to CSR
	csrrw x23, 0x4f5, x0	// Write all 0s to CSR
	csrrw x23, 0x4f5, x20	// Restore CSR

// Testing CSR 0x4f6
	csrr x2, 0x4f6	// Read CSR
	li x11, -1
	csrrw x5, 0x4f6, x11	// Write all 1s to CSR
	csrrw x5, 0x4f6, x0	// Write all 0s to CSR
	csrrw x5, 0x4f6, x2	// Restore CSR

// Testing CSR 0x4f7
	csrr x11, 0x4f7	// Read CSR
	li x22, -1
	csrrw x24, 0x4f7, x22	// Write all 1s to CSR
	csrrw x24, 0x4f7, x0	// Write all 0s to CSR
	csrrw x24, 0x4f7, x11	// Restore CSR

// Testing CSR 0x4f8
	csrr x9, 0x4f8	// Read CSR
	li x16, -1
	csrrw x20, 0x4f8, x16	// Write all 1s to CSR
	csrrw x20, 0x4f8, x0	// Write all 0s to CSR
	csrrw x20, 0x4f8, x9	// Restore CSR

// Testing CSR 0x4f9
	csrr x30, 0x4f9	// Read CSR
	li x11, -1
	csrrw x9, 0x4f9, x11	// Write all 1s to CSR
	csrrw x9, 0x4f9, x0	// Write all 0s to CSR
	csrrw x9, 0x4f9, x30	// Restore CSR

// Testing CSR 0x4fa
	csrr x29, 0x4fa	// Read CSR
	li x21, -1
	csrrw x3, 0x4fa, x21	// Write all 1s to CSR
	csrrw x3, 0x4fa, x0	// Write all 0s to CSR
	csrrw x3, 0x4fa, x29	// Restore CSR

// Testing CSR 0x4fb
	csrr x15, 0x4fb	// Read CSR
	li x26, -1
	csrrw x25, 0x4fb, x26	// Write all 1s to CSR
	csrrw x25, 0x4fb, x0	// Write all 0s to CSR
	csrrw x25, 0x4fb, x15	// Restore CSR

// Testing CSR 0x4fc
	csrr x6, 0x4fc	// Read CSR
	li x29, -1
	csrrw x4, 0x4fc, x29	// Write all 1s to CSR
	csrrw x4, 0x4fc, x0	// Write all 0s to CSR
	csrrw x4, 0x4fc, x6	// Restore CSR

// Testing CSR 0x4fd
	csrr x17, 0x4fd	// Read CSR
	li x9, -1
	csrrw x18, 0x4fd, x9	// Write all 1s to CSR
	csrrw x18, 0x4fd, x0	// Write all 0s to CSR
	csrrw x18, 0x4fd, x17	// Restore CSR

// Testing CSR 0x4fe
	csrr x23, 0x4fe	// Read CSR
	li x13, -1
	csrrw x20, 0x4fe, x13	// Write all 1s to CSR
	csrrw x20, 0x4fe, x0	// Write all 0s to CSR
	csrrw x20, 0x4fe, x23	// Restore CSR

// Testing CSR 0x4ff
	csrr x15, 0x4ff	// Read CSR
	li x14, -1
	csrrw x22, 0x4ff, x14	// Write all 1s to CSR
	csrrw x22, 0x4ff, x0	// Write all 0s to CSR
	csrrw x22, 0x4ff, x15	// Restore CSR

// Testing CSR 0x500
	csrr x6, 0x500	// Read CSR
	li x20, -1
	csrrw x30, 0x500, x20	// Write all 1s to CSR
	csrrw x30, 0x500, x0	// Write all 0s to CSR
	csrrw x30, 0x500, x6	// Restore CSR

// Testing CSR 0x501
	csrr x14, 0x501	// Read CSR
	li x25, -1
	csrrw x5, 0x501, x25	// Write all 1s to CSR
	csrrw x5, 0x501, x0	// Write all 0s to CSR
	csrrw x5, 0x501, x14	// Restore CSR

// Testing CSR 0x502
	csrr x22, 0x502	// Read CSR
	li x31, -1
	csrrw x27, 0x502, x31	// Write all 1s to CSR
	csrrw x27, 0x502, x0	// Write all 0s to CSR
	csrrw x27, 0x502, x22	// Restore CSR

// Testing CSR 0x503
	csrr x25, 0x503	// Read CSR
	li x26, -1
	csrrw x4, 0x503, x26	// Write all 1s to CSR
	csrrw x4, 0x503, x0	// Write all 0s to CSR
	csrrw x4, 0x503, x25	// Restore CSR

// Testing CSR 0x504
	csrr x19, 0x504	// Read CSR
	li x25, -1
	csrrw x4, 0x504, x25	// Write all 1s to CSR
	csrrw x4, 0x504, x0	// Write all 0s to CSR
	csrrw x4, 0x504, x19	// Restore CSR

// Testing CSR 0x505
	csrr x27, 0x505	// Read CSR
	li x6, -1
	csrrw x24, 0x505, x6	// Write all 1s to CSR
	csrrw x24, 0x505, x0	// Write all 0s to CSR
	csrrw x24, 0x505, x27	// Restore CSR

// Testing CSR 0x506
	csrr x31, 0x506	// Read CSR
	li x16, -1
	csrrw x10, 0x506, x16	// Write all 1s to CSR
	csrrw x10, 0x506, x0	// Write all 0s to CSR
	csrrw x10, 0x506, x31	// Restore CSR

// Testing CSR 0x507
	csrr x22, 0x507	// Read CSR
	li x24, -1
	csrrw x4, 0x507, x24	// Write all 1s to CSR
	csrrw x4, 0x507, x0	// Write all 0s to CSR
	csrrw x4, 0x507, x22	// Restore CSR

// Testing CSR 0x508
	csrr x22, 0x508	// Read CSR
	li x25, -1
	csrrw x14, 0x508, x25	// Write all 1s to CSR
	csrrw x14, 0x508, x0	// Write all 0s to CSR
	csrrw x14, 0x508, x22	// Restore CSR

// Testing CSR 0x509
	csrr x9, 0x509	// Read CSR
	li x4, -1
	csrrw x26, 0x509, x4	// Write all 1s to CSR
	csrrw x26, 0x509, x0	// Write all 0s to CSR
	csrrw x26, 0x509, x9	// Restore CSR

// Testing CSR 0x50a
	csrr x21, 0x50a	// Read CSR
	li x12, -1
	csrrw x17, 0x50a, x12	// Write all 1s to CSR
	csrrw x17, 0x50a, x0	// Write all 0s to CSR
	csrrw x17, 0x50a, x21	// Restore CSR

// Testing CSR 0x50b
	csrr x27, 0x50b	// Read CSR
	li x18, -1
	csrrw x26, 0x50b, x18	// Write all 1s to CSR
	csrrw x26, 0x50b, x0	// Write all 0s to CSR
	csrrw x26, 0x50b, x27	// Restore CSR

// Testing CSR 0x50c
	csrr x3, 0x50c	// Read CSR
	li x1, -1
	csrrw x2, 0x50c, x1	// Write all 1s to CSR
	csrrw x2, 0x50c, x0	// Write all 0s to CSR
	csrrw x2, 0x50c, x3	// Restore CSR

// Testing CSR 0x50d
	csrr x20, 0x50d	// Read CSR
	li x1, -1
	csrrw x25, 0x50d, x1	// Write all 1s to CSR
	csrrw x25, 0x50d, x0	// Write all 0s to CSR
	csrrw x25, 0x50d, x20	// Restore CSR

// Testing CSR 0x50e
	csrr x31, 0x50e	// Read CSR
	li x5, -1
	csrrw x29, 0x50e, x5	// Write all 1s to CSR
	csrrw x29, 0x50e, x0	// Write all 0s to CSR
	csrrw x29, 0x50e, x31	// Restore CSR

// Testing CSR 0x50f
	csrr x4, 0x50f	// Read CSR
	li x14, -1
	csrrw x13, 0x50f, x14	// Write all 1s to CSR
	csrrw x13, 0x50f, x0	// Write all 0s to CSR
	csrrw x13, 0x50f, x4	// Restore CSR

// Testing CSR 0x510
	csrr x26, 0x510	// Read CSR
	li x16, -1
	csrrw x29, 0x510, x16	// Write all 1s to CSR
	csrrw x29, 0x510, x0	// Write all 0s to CSR
	csrrw x29, 0x510, x26	// Restore CSR

// Testing CSR 0x511
	csrr x1, 0x511	// Read CSR
	li x11, -1
	csrrw x21, 0x511, x11	// Write all 1s to CSR
	csrrw x21, 0x511, x0	// Write all 0s to CSR
	csrrw x21, 0x511, x1	// Restore CSR

// Testing CSR 0x512
	csrr x27, 0x512	// Read CSR
	li x5, -1
	csrrw x3, 0x512, x5	// Write all 1s to CSR
	csrrw x3, 0x512, x0	// Write all 0s to CSR
	csrrw x3, 0x512, x27	// Restore CSR

// Testing CSR 0x513
	csrr x23, 0x513	// Read CSR
	li x13, -1
	csrrw x21, 0x513, x13	// Write all 1s to CSR
	csrrw x21, 0x513, x0	// Write all 0s to CSR
	csrrw x21, 0x513, x23	// Restore CSR

// Testing CSR 0x514
	csrr x19, 0x514	// Read CSR
	li x24, -1
	csrrw x8, 0x514, x24	// Write all 1s to CSR
	csrrw x8, 0x514, x0	// Write all 0s to CSR
	csrrw x8, 0x514, x19	// Restore CSR

// Testing CSR 0x515
	csrr x2, 0x515	// Read CSR
	li x7, -1
	csrrw x14, 0x515, x7	// Write all 1s to CSR
	csrrw x14, 0x515, x0	// Write all 0s to CSR
	csrrw x14, 0x515, x2	// Restore CSR

// Testing CSR 0x516
	csrr x30, 0x516	// Read CSR
	li x1, -1
	csrrw x29, 0x516, x1	// Write all 1s to CSR
	csrrw x29, 0x516, x0	// Write all 0s to CSR
	csrrw x29, 0x516, x30	// Restore CSR

// Testing CSR 0x517
	csrr x2, 0x517	// Read CSR
	li x20, -1
	csrrw x26, 0x517, x20	// Write all 1s to CSR
	csrrw x26, 0x517, x0	// Write all 0s to CSR
	csrrw x26, 0x517, x2	// Restore CSR

// Testing CSR 0x518
	csrr x13, 0x518	// Read CSR
	li x5, -1
	csrrw x18, 0x518, x5	// Write all 1s to CSR
	csrrw x18, 0x518, x0	// Write all 0s to CSR
	csrrw x18, 0x518, x13	// Restore CSR

// Testing CSR 0x519
	csrr x24, 0x519	// Read CSR
	li x23, -1
	csrrw x10, 0x519, x23	// Write all 1s to CSR
	csrrw x10, 0x519, x0	// Write all 0s to CSR
	csrrw x10, 0x519, x24	// Restore CSR

// Testing CSR 0x51a
	csrr x14, 0x51a	// Read CSR
	li x13, -1
	csrrw x29, 0x51a, x13	// Write all 1s to CSR
	csrrw x29, 0x51a, x0	// Write all 0s to CSR
	csrrw x29, 0x51a, x14	// Restore CSR

// Testing CSR 0x51b
	csrr x31, 0x51b	// Read CSR
	li x27, -1
	csrrw x18, 0x51b, x27	// Write all 1s to CSR
	csrrw x18, 0x51b, x0	// Write all 0s to CSR
	csrrw x18, 0x51b, x31	// Restore CSR

// Testing CSR 0x51c
	csrr x2, 0x51c	// Read CSR
	li x24, -1
	csrrw x27, 0x51c, x24	// Write all 1s to CSR
	csrrw x27, 0x51c, x0	// Write all 0s to CSR
	csrrw x27, 0x51c, x2	// Restore CSR

// Testing CSR 0x51d
	csrr x15, 0x51d	// Read CSR
	li x29, -1
	csrrw x18, 0x51d, x29	// Write all 1s to CSR
	csrrw x18, 0x51d, x0	// Write all 0s to CSR
	csrrw x18, 0x51d, x15	// Restore CSR

// Testing CSR 0x51e
	csrr x5, 0x51e	// Read CSR
	li x18, -1
	csrrw x31, 0x51e, x18	// Write all 1s to CSR
	csrrw x31, 0x51e, x0	// Write all 0s to CSR
	csrrw x31, 0x51e, x5	// Restore CSR

// Testing CSR 0x51f
	csrr x29, 0x51f	// Read CSR
	li x5, -1
	csrrw x21, 0x51f, x5	// Write all 1s to CSR
	csrrw x21, 0x51f, x0	// Write all 0s to CSR
	csrrw x21, 0x51f, x29	// Restore CSR

// Testing CSR 0x520
	csrr x7, 0x520	// Read CSR
	li x19, -1
	csrrw x31, 0x520, x19	// Write all 1s to CSR
	csrrw x31, 0x520, x0	// Write all 0s to CSR
	csrrw x31, 0x520, x7	// Restore CSR

// Testing CSR 0x521
	csrr x6, 0x521	// Read CSR
	li x27, -1
	csrrw x3, 0x521, x27	// Write all 1s to CSR
	csrrw x3, 0x521, x0	// Write all 0s to CSR
	csrrw x3, 0x521, x6	// Restore CSR

// Testing CSR 0x522
	csrr x19, 0x522	// Read CSR
	li x16, -1
	csrrw x10, 0x522, x16	// Write all 1s to CSR
	csrrw x10, 0x522, x0	// Write all 0s to CSR
	csrrw x10, 0x522, x19	// Restore CSR

// Testing CSR 0x523
	csrr x9, 0x523	// Read CSR
	li x13, -1
	csrrw x7, 0x523, x13	// Write all 1s to CSR
	csrrw x7, 0x523, x0	// Write all 0s to CSR
	csrrw x7, 0x523, x9	// Restore CSR

// Testing CSR 0x524
	csrr x22, 0x524	// Read CSR
	li x1, -1
	csrrw x28, 0x524, x1	// Write all 1s to CSR
	csrrw x28, 0x524, x0	// Write all 0s to CSR
	csrrw x28, 0x524, x22	// Restore CSR

// Testing CSR 0x525
	csrr x21, 0x525	// Read CSR
	li x28, -1
	csrrw x2, 0x525, x28	// Write all 1s to CSR
	csrrw x2, 0x525, x0	// Write all 0s to CSR
	csrrw x2, 0x525, x21	// Restore CSR

// Testing CSR 0x526
	csrr x17, 0x526	// Read CSR
	li x25, -1
	csrrw x3, 0x526, x25	// Write all 1s to CSR
	csrrw x3, 0x526, x0	// Write all 0s to CSR
	csrrw x3, 0x526, x17	// Restore CSR

// Testing CSR 0x527
	csrr x29, 0x527	// Read CSR
	li x1, -1
	csrrw x21, 0x527, x1	// Write all 1s to CSR
	csrrw x21, 0x527, x0	// Write all 0s to CSR
	csrrw x21, 0x527, x29	// Restore CSR

// Testing CSR 0x528
	csrr x10, 0x528	// Read CSR
	li x5, -1
	csrrw x25, 0x528, x5	// Write all 1s to CSR
	csrrw x25, 0x528, x0	// Write all 0s to CSR
	csrrw x25, 0x528, x10	// Restore CSR

// Testing CSR 0x529
	csrr x5, 0x529	// Read CSR
	li x27, -1
	csrrw x25, 0x529, x27	// Write all 1s to CSR
	csrrw x25, 0x529, x0	// Write all 0s to CSR
	csrrw x25, 0x529, x5	// Restore CSR

// Testing CSR 0x52a
	csrr x17, 0x52a	// Read CSR
	li x5, -1
	csrrw x31, 0x52a, x5	// Write all 1s to CSR
	csrrw x31, 0x52a, x0	// Write all 0s to CSR
	csrrw x31, 0x52a, x17	// Restore CSR

// Testing CSR 0x52b
	csrr x4, 0x52b	// Read CSR
	li x31, -1
	csrrw x11, 0x52b, x31	// Write all 1s to CSR
	csrrw x11, 0x52b, x0	// Write all 0s to CSR
	csrrw x11, 0x52b, x4	// Restore CSR

// Testing CSR 0x52c
	csrr x1, 0x52c	// Read CSR
	li x24, -1
	csrrw x27, 0x52c, x24	// Write all 1s to CSR
	csrrw x27, 0x52c, x0	// Write all 0s to CSR
	csrrw x27, 0x52c, x1	// Restore CSR

// Testing CSR 0x52d
	csrr x11, 0x52d	// Read CSR
	li x27, -1
	csrrw x5, 0x52d, x27	// Write all 1s to CSR
	csrrw x5, 0x52d, x0	// Write all 0s to CSR
	csrrw x5, 0x52d, x11	// Restore CSR

// Testing CSR 0x52e
	csrr x11, 0x52e	// Read CSR
	li x19, -1
	csrrw x25, 0x52e, x19	// Write all 1s to CSR
	csrrw x25, 0x52e, x0	// Write all 0s to CSR
	csrrw x25, 0x52e, x11	// Restore CSR

// Testing CSR 0x52f
	csrr x3, 0x52f	// Read CSR
	li x7, -1
	csrrw x12, 0x52f, x7	// Write all 1s to CSR
	csrrw x12, 0x52f, x0	// Write all 0s to CSR
	csrrw x12, 0x52f, x3	// Restore CSR

// Testing CSR 0x530
	csrr x9, 0x530	// Read CSR
	li x15, -1
	csrrw x11, 0x530, x15	// Write all 1s to CSR
	csrrw x11, 0x530, x0	// Write all 0s to CSR
	csrrw x11, 0x530, x9	// Restore CSR

// Testing CSR 0x531
	csrr x22, 0x531	// Read CSR
	li x16, -1
	csrrw x18, 0x531, x16	// Write all 1s to CSR
	csrrw x18, 0x531, x0	// Write all 0s to CSR
	csrrw x18, 0x531, x22	// Restore CSR

// Testing CSR 0x532
	csrr x17, 0x532	// Read CSR
	li x3, -1
	csrrw x11, 0x532, x3	// Write all 1s to CSR
	csrrw x11, 0x532, x0	// Write all 0s to CSR
	csrrw x11, 0x532, x17	// Restore CSR

// Testing CSR 0x533
	csrr x15, 0x533	// Read CSR
	li x13, -1
	csrrw x25, 0x533, x13	// Write all 1s to CSR
	csrrw x25, 0x533, x0	// Write all 0s to CSR
	csrrw x25, 0x533, x15	// Restore CSR

// Testing CSR 0x534
	csrr x13, 0x534	// Read CSR
	li x18, -1
	csrrw x16, 0x534, x18	// Write all 1s to CSR
	csrrw x16, 0x534, x0	// Write all 0s to CSR
	csrrw x16, 0x534, x13	// Restore CSR

// Testing CSR 0x535
	csrr x18, 0x535	// Read CSR
	li x14, -1
	csrrw x17, 0x535, x14	// Write all 1s to CSR
	csrrw x17, 0x535, x0	// Write all 0s to CSR
	csrrw x17, 0x535, x18	// Restore CSR

// Testing CSR 0x536
	csrr x3, 0x536	// Read CSR
	li x30, -1
	csrrw x8, 0x536, x30	// Write all 1s to CSR
	csrrw x8, 0x536, x0	// Write all 0s to CSR
	csrrw x8, 0x536, x3	// Restore CSR

// Testing CSR 0x537
	csrr x5, 0x537	// Read CSR
	li x21, -1
	csrrw x13, 0x537, x21	// Write all 1s to CSR
	csrrw x13, 0x537, x0	// Write all 0s to CSR
	csrrw x13, 0x537, x5	// Restore CSR

// Testing CSR 0x538
	csrr x27, 0x538	// Read CSR
	li x28, -1
	csrrw x17, 0x538, x28	// Write all 1s to CSR
	csrrw x17, 0x538, x0	// Write all 0s to CSR
	csrrw x17, 0x538, x27	// Restore CSR

// Testing CSR 0x539
	csrr x11, 0x539	// Read CSR
	li x5, -1
	csrrw x29, 0x539, x5	// Write all 1s to CSR
	csrrw x29, 0x539, x0	// Write all 0s to CSR
	csrrw x29, 0x539, x11	// Restore CSR

// Testing CSR 0x53a
	csrr x3, 0x53a	// Read CSR
	li x5, -1
	csrrw x2, 0x53a, x5	// Write all 1s to CSR
	csrrw x2, 0x53a, x0	// Write all 0s to CSR
	csrrw x2, 0x53a, x3	// Restore CSR

// Testing CSR 0x53b
	csrr x13, 0x53b	// Read CSR
	li x21, -1
	csrrw x19, 0x53b, x21	// Write all 1s to CSR
	csrrw x19, 0x53b, x0	// Write all 0s to CSR
	csrrw x19, 0x53b, x13	// Restore CSR

// Testing CSR 0x53c
	csrr x4, 0x53c	// Read CSR
	li x22, -1
	csrrw x3, 0x53c, x22	// Write all 1s to CSR
	csrrw x3, 0x53c, x0	// Write all 0s to CSR
	csrrw x3, 0x53c, x4	// Restore CSR

// Testing CSR 0x53d
	csrr x17, 0x53d	// Read CSR
	li x9, -1
	csrrw x19, 0x53d, x9	// Write all 1s to CSR
	csrrw x19, 0x53d, x0	// Write all 0s to CSR
	csrrw x19, 0x53d, x17	// Restore CSR

// Testing CSR 0x53e
	csrr x10, 0x53e	// Read CSR
	li x12, -1
	csrrw x31, 0x53e, x12	// Write all 1s to CSR
	csrrw x31, 0x53e, x0	// Write all 0s to CSR
	csrrw x31, 0x53e, x10	// Restore CSR

// Testing CSR 0x53f
	csrr x22, 0x53f	// Read CSR
	li x28, -1
	csrrw x24, 0x53f, x28	// Write all 1s to CSR
	csrrw x24, 0x53f, x0	// Write all 0s to CSR
	csrrw x24, 0x53f, x22	// Restore CSR

// Testing CSR 0x540
	csrr x16, 0x540	// Read CSR
	li x13, -1
	csrrw x19, 0x540, x13	// Write all 1s to CSR
	csrrw x19, 0x540, x0	// Write all 0s to CSR
	csrrw x19, 0x540, x16	// Restore CSR

// Testing CSR 0x541
	csrr x27, 0x541	// Read CSR
	li x11, -1
	csrrw x24, 0x541, x11	// Write all 1s to CSR
	csrrw x24, 0x541, x0	// Write all 0s to CSR
	csrrw x24, 0x541, x27	// Restore CSR

// Testing CSR 0x542
	csrr x22, 0x542	// Read CSR
	li x29, -1
	csrrw x20, 0x542, x29	// Write all 1s to CSR
	csrrw x20, 0x542, x0	// Write all 0s to CSR
	csrrw x20, 0x542, x22	// Restore CSR

// Testing CSR 0x543
	csrr x15, 0x543	// Read CSR
	li x17, -1
	csrrw x12, 0x543, x17	// Write all 1s to CSR
	csrrw x12, 0x543, x0	// Write all 0s to CSR
	csrrw x12, 0x543, x15	// Restore CSR

// Testing CSR 0x544
	csrr x8, 0x544	// Read CSR
	li x25, -1
	csrrw x17, 0x544, x25	// Write all 1s to CSR
	csrrw x17, 0x544, x0	// Write all 0s to CSR
	csrrw x17, 0x544, x8	// Restore CSR

// Testing CSR 0x545
	csrr x2, 0x545	// Read CSR
	li x24, -1
	csrrw x13, 0x545, x24	// Write all 1s to CSR
	csrrw x13, 0x545, x0	// Write all 0s to CSR
	csrrw x13, 0x545, x2	// Restore CSR

// Testing CSR 0x546
	csrr x26, 0x546	// Read CSR
	li x12, -1
	csrrw x11, 0x546, x12	// Write all 1s to CSR
	csrrw x11, 0x546, x0	// Write all 0s to CSR
	csrrw x11, 0x546, x26	// Restore CSR

// Testing CSR 0x547
	csrr x26, 0x547	// Read CSR
	li x17, -1
	csrrw x1, 0x547, x17	// Write all 1s to CSR
	csrrw x1, 0x547, x0	// Write all 0s to CSR
	csrrw x1, 0x547, x26	// Restore CSR

// Testing CSR 0x548
	csrr x8, 0x548	// Read CSR
	li x19, -1
	csrrw x3, 0x548, x19	// Write all 1s to CSR
	csrrw x3, 0x548, x0	// Write all 0s to CSR
	csrrw x3, 0x548, x8	// Restore CSR

// Testing CSR 0x549
	csrr x16, 0x549	// Read CSR
	li x4, -1
	csrrw x12, 0x549, x4	// Write all 1s to CSR
	csrrw x12, 0x549, x0	// Write all 0s to CSR
	csrrw x12, 0x549, x16	// Restore CSR

// Testing CSR 0x54a
	csrr x14, 0x54a	// Read CSR
	li x25, -1
	csrrw x20, 0x54a, x25	// Write all 1s to CSR
	csrrw x20, 0x54a, x0	// Write all 0s to CSR
	csrrw x20, 0x54a, x14	// Restore CSR

// Testing CSR 0x54b
	csrr x8, 0x54b	// Read CSR
	li x18, -1
	csrrw x1, 0x54b, x18	// Write all 1s to CSR
	csrrw x1, 0x54b, x0	// Write all 0s to CSR
	csrrw x1, 0x54b, x8	// Restore CSR

// Testing CSR 0x54c
	csrr x17, 0x54c	// Read CSR
	li x2, -1
	csrrw x4, 0x54c, x2	// Write all 1s to CSR
	csrrw x4, 0x54c, x0	// Write all 0s to CSR
	csrrw x4, 0x54c, x17	// Restore CSR

// Testing CSR 0x54d
	csrr x19, 0x54d	// Read CSR
	li x12, -1
	csrrw x2, 0x54d, x12	// Write all 1s to CSR
	csrrw x2, 0x54d, x0	// Write all 0s to CSR
	csrrw x2, 0x54d, x19	// Restore CSR

// Testing CSR 0x54e
	csrr x31, 0x54e	// Read CSR
	li x12, -1
	csrrw x6, 0x54e, x12	// Write all 1s to CSR
	csrrw x6, 0x54e, x0	// Write all 0s to CSR
	csrrw x6, 0x54e, x31	// Restore CSR

// Testing CSR 0x54f
	csrr x11, 0x54f	// Read CSR
	li x9, -1
	csrrw x16, 0x54f, x9	// Write all 1s to CSR
	csrrw x16, 0x54f, x0	// Write all 0s to CSR
	csrrw x16, 0x54f, x11	// Restore CSR

// Testing CSR 0x550
	csrr x16, 0x550	// Read CSR
	li x25, -1
	csrrw x30, 0x550, x25	// Write all 1s to CSR
	csrrw x30, 0x550, x0	// Write all 0s to CSR
	csrrw x30, 0x550, x16	// Restore CSR

// Testing CSR 0x551
	csrr x29, 0x551	// Read CSR
	li x31, -1
	csrrw x14, 0x551, x31	// Write all 1s to CSR
	csrrw x14, 0x551, x0	// Write all 0s to CSR
	csrrw x14, 0x551, x29	// Restore CSR

// Testing CSR 0x552
	csrr x1, 0x552	// Read CSR
	li x26, -1
	csrrw x21, 0x552, x26	// Write all 1s to CSR
	csrrw x21, 0x552, x0	// Write all 0s to CSR
	csrrw x21, 0x552, x1	// Restore CSR

// Testing CSR 0x553
	csrr x25, 0x553	// Read CSR
	li x8, -1
	csrrw x21, 0x553, x8	// Write all 1s to CSR
	csrrw x21, 0x553, x0	// Write all 0s to CSR
	csrrw x21, 0x553, x25	// Restore CSR

// Testing CSR 0x554
	csrr x21, 0x554	// Read CSR
	li x16, -1
	csrrw x24, 0x554, x16	// Write all 1s to CSR
	csrrw x24, 0x554, x0	// Write all 0s to CSR
	csrrw x24, 0x554, x21	// Restore CSR

// Testing CSR 0x555
	csrr x24, 0x555	// Read CSR
	li x29, -1
	csrrw x12, 0x555, x29	// Write all 1s to CSR
	csrrw x12, 0x555, x0	// Write all 0s to CSR
	csrrw x12, 0x555, x24	// Restore CSR

// Testing CSR 0x556
	csrr x22, 0x556	// Read CSR
	li x26, -1
	csrrw x28, 0x556, x26	// Write all 1s to CSR
	csrrw x28, 0x556, x0	// Write all 0s to CSR
	csrrw x28, 0x556, x22	// Restore CSR

// Testing CSR 0x557
	csrr x27, 0x557	// Read CSR
	li x26, -1
	csrrw x24, 0x557, x26	// Write all 1s to CSR
	csrrw x24, 0x557, x0	// Write all 0s to CSR
	csrrw x24, 0x557, x27	// Restore CSR

// Testing CSR 0x558
	csrr x6, 0x558	// Read CSR
	li x30, -1
	csrrw x2, 0x558, x30	// Write all 1s to CSR
	csrrw x2, 0x558, x0	// Write all 0s to CSR
	csrrw x2, 0x558, x6	// Restore CSR

// Testing CSR 0x559
	csrr x25, 0x559	// Read CSR
	li x24, -1
	csrrw x16, 0x559, x24	// Write all 1s to CSR
	csrrw x16, 0x559, x0	// Write all 0s to CSR
	csrrw x16, 0x559, x25	// Restore CSR

// Testing CSR 0x55a
	csrr x17, 0x55a	// Read CSR
	li x22, -1
	csrrw x30, 0x55a, x22	// Write all 1s to CSR
	csrrw x30, 0x55a, x0	// Write all 0s to CSR
	csrrw x30, 0x55a, x17	// Restore CSR

// Testing CSR 0x55b
	csrr x6, 0x55b	// Read CSR
	li x27, -1
	csrrw x13, 0x55b, x27	// Write all 1s to CSR
	csrrw x13, 0x55b, x0	// Write all 0s to CSR
	csrrw x13, 0x55b, x6	// Restore CSR

// Testing CSR 0x55c
	csrr x23, 0x55c	// Read CSR
	li x10, -1
	csrrw x22, 0x55c, x10	// Write all 1s to CSR
	csrrw x22, 0x55c, x0	// Write all 0s to CSR
	csrrw x22, 0x55c, x23	// Restore CSR

// Testing CSR 0x55d
	csrr x29, 0x55d	// Read CSR
	li x19, -1
	csrrw x16, 0x55d, x19	// Write all 1s to CSR
	csrrw x16, 0x55d, x0	// Write all 0s to CSR
	csrrw x16, 0x55d, x29	// Restore CSR

// Testing CSR 0x55e
	csrr x7, 0x55e	// Read CSR
	li x30, -1
	csrrw x1, 0x55e, x30	// Write all 1s to CSR
	csrrw x1, 0x55e, x0	// Write all 0s to CSR
	csrrw x1, 0x55e, x7	// Restore CSR

// Testing CSR 0x55f
	csrr x23, 0x55f	// Read CSR
	li x15, -1
	csrrw x20, 0x55f, x15	// Write all 1s to CSR
	csrrw x20, 0x55f, x0	// Write all 0s to CSR
	csrrw x20, 0x55f, x23	// Restore CSR

// Testing CSR 0x560
	csrr x20, 0x560	// Read CSR
	li x27, -1
	csrrw x22, 0x560, x27	// Write all 1s to CSR
	csrrw x22, 0x560, x0	// Write all 0s to CSR
	csrrw x22, 0x560, x20	// Restore CSR

// Testing CSR 0x561
	csrr x6, 0x561	// Read CSR
	li x20, -1
	csrrw x15, 0x561, x20	// Write all 1s to CSR
	csrrw x15, 0x561, x0	// Write all 0s to CSR
	csrrw x15, 0x561, x6	// Restore CSR

// Testing CSR 0x562
	csrr x11, 0x562	// Read CSR
	li x19, -1
	csrrw x14, 0x562, x19	// Write all 1s to CSR
	csrrw x14, 0x562, x0	// Write all 0s to CSR
	csrrw x14, 0x562, x11	// Restore CSR

// Testing CSR 0x563
	csrr x19, 0x563	// Read CSR
	li x25, -1
	csrrw x28, 0x563, x25	// Write all 1s to CSR
	csrrw x28, 0x563, x0	// Write all 0s to CSR
	csrrw x28, 0x563, x19	// Restore CSR

// Testing CSR 0x564
	csrr x28, 0x564	// Read CSR
	li x21, -1
	csrrw x5, 0x564, x21	// Write all 1s to CSR
	csrrw x5, 0x564, x0	// Write all 0s to CSR
	csrrw x5, 0x564, x28	// Restore CSR

// Testing CSR 0x565
	csrr x17, 0x565	// Read CSR
	li x14, -1
	csrrw x13, 0x565, x14	// Write all 1s to CSR
	csrrw x13, 0x565, x0	// Write all 0s to CSR
	csrrw x13, 0x565, x17	// Restore CSR

// Testing CSR 0x566
	csrr x8, 0x566	// Read CSR
	li x12, -1
	csrrw x13, 0x566, x12	// Write all 1s to CSR
	csrrw x13, 0x566, x0	// Write all 0s to CSR
	csrrw x13, 0x566, x8	// Restore CSR

// Testing CSR 0x567
	csrr x10, 0x567	// Read CSR
	li x8, -1
	csrrw x7, 0x567, x8	// Write all 1s to CSR
	csrrw x7, 0x567, x0	// Write all 0s to CSR
	csrrw x7, 0x567, x10	// Restore CSR

// Testing CSR 0x568
	csrr x9, 0x568	// Read CSR
	li x31, -1
	csrrw x8, 0x568, x31	// Write all 1s to CSR
	csrrw x8, 0x568, x0	// Write all 0s to CSR
	csrrw x8, 0x568, x9	// Restore CSR

// Testing CSR 0x569
	csrr x18, 0x569	// Read CSR
	li x19, -1
	csrrw x28, 0x569, x19	// Write all 1s to CSR
	csrrw x28, 0x569, x0	// Write all 0s to CSR
	csrrw x28, 0x569, x18	// Restore CSR

// Testing CSR 0x56a
	csrr x30, 0x56a	// Read CSR
	li x29, -1
	csrrw x12, 0x56a, x29	// Write all 1s to CSR
	csrrw x12, 0x56a, x0	// Write all 0s to CSR
	csrrw x12, 0x56a, x30	// Restore CSR

// Testing CSR 0x56b
	csrr x31, 0x56b	// Read CSR
	li x15, -1
	csrrw x8, 0x56b, x15	// Write all 1s to CSR
	csrrw x8, 0x56b, x0	// Write all 0s to CSR
	csrrw x8, 0x56b, x31	// Restore CSR

// Testing CSR 0x56c
	csrr x20, 0x56c	// Read CSR
	li x11, -1
	csrrw x21, 0x56c, x11	// Write all 1s to CSR
	csrrw x21, 0x56c, x0	// Write all 0s to CSR
	csrrw x21, 0x56c, x20	// Restore CSR

// Testing CSR 0x56d
	csrr x5, 0x56d	// Read CSR
	li x11, -1
	csrrw x8, 0x56d, x11	// Write all 1s to CSR
	csrrw x8, 0x56d, x0	// Write all 0s to CSR
	csrrw x8, 0x56d, x5	// Restore CSR

// Testing CSR 0x56e
	csrr x5, 0x56e	// Read CSR
	li x28, -1
	csrrw x25, 0x56e, x28	// Write all 1s to CSR
	csrrw x25, 0x56e, x0	// Write all 0s to CSR
	csrrw x25, 0x56e, x5	// Restore CSR

// Testing CSR 0x56f
	csrr x9, 0x56f	// Read CSR
	li x18, -1
	csrrw x6, 0x56f, x18	// Write all 1s to CSR
	csrrw x6, 0x56f, x0	// Write all 0s to CSR
	csrrw x6, 0x56f, x9	// Restore CSR

// Testing CSR 0x570
	csrr x18, 0x570	// Read CSR
	li x23, -1
	csrrw x20, 0x570, x23	// Write all 1s to CSR
	csrrw x20, 0x570, x0	// Write all 0s to CSR
	csrrw x20, 0x570, x18	// Restore CSR

// Testing CSR 0x571
	csrr x4, 0x571	// Read CSR
	li x29, -1
	csrrw x30, 0x571, x29	// Write all 1s to CSR
	csrrw x30, 0x571, x0	// Write all 0s to CSR
	csrrw x30, 0x571, x4	// Restore CSR

// Testing CSR 0x572
	csrr x15, 0x572	// Read CSR
	li x16, -1
	csrrw x7, 0x572, x16	// Write all 1s to CSR
	csrrw x7, 0x572, x0	// Write all 0s to CSR
	csrrw x7, 0x572, x15	// Restore CSR

// Testing CSR 0x573
	csrr x23, 0x573	// Read CSR
	li x6, -1
	csrrw x20, 0x573, x6	// Write all 1s to CSR
	csrrw x20, 0x573, x0	// Write all 0s to CSR
	csrrw x20, 0x573, x23	// Restore CSR

// Testing CSR 0x574
	csrr x12, 0x574	// Read CSR
	li x20, -1
	csrrw x8, 0x574, x20	// Write all 1s to CSR
	csrrw x8, 0x574, x0	// Write all 0s to CSR
	csrrw x8, 0x574, x12	// Restore CSR

// Testing CSR 0x575
	csrr x23, 0x575	// Read CSR
	li x26, -1
	csrrw x3, 0x575, x26	// Write all 1s to CSR
	csrrw x3, 0x575, x0	// Write all 0s to CSR
	csrrw x3, 0x575, x23	// Restore CSR

// Testing CSR 0x576
	csrr x18, 0x576	// Read CSR
	li x16, -1
	csrrw x29, 0x576, x16	// Write all 1s to CSR
	csrrw x29, 0x576, x0	// Write all 0s to CSR
	csrrw x29, 0x576, x18	// Restore CSR

// Testing CSR 0x577
	csrr x7, 0x577	// Read CSR
	li x10, -1
	csrrw x13, 0x577, x10	// Write all 1s to CSR
	csrrw x13, 0x577, x0	// Write all 0s to CSR
	csrrw x13, 0x577, x7	// Restore CSR

// Testing CSR 0x578
	csrr x9, 0x578	// Read CSR
	li x17, -1
	csrrw x7, 0x578, x17	// Write all 1s to CSR
	csrrw x7, 0x578, x0	// Write all 0s to CSR
	csrrw x7, 0x578, x9	// Restore CSR

// Testing CSR 0x579
	csrr x12, 0x579	// Read CSR
	li x28, -1
	csrrw x14, 0x579, x28	// Write all 1s to CSR
	csrrw x14, 0x579, x0	// Write all 0s to CSR
	csrrw x14, 0x579, x12	// Restore CSR

// Testing CSR 0x57a
	csrr x11, 0x57a	// Read CSR
	li x24, -1
	csrrw x1, 0x57a, x24	// Write all 1s to CSR
	csrrw x1, 0x57a, x0	// Write all 0s to CSR
	csrrw x1, 0x57a, x11	// Restore CSR

// Testing CSR 0x57b
	csrr x2, 0x57b	// Read CSR
	li x7, -1
	csrrw x31, 0x57b, x7	// Write all 1s to CSR
	csrrw x31, 0x57b, x0	// Write all 0s to CSR
	csrrw x31, 0x57b, x2	// Restore CSR

// Testing CSR 0x57c
	csrr x7, 0x57c	// Read CSR
	li x20, -1
	csrrw x27, 0x57c, x20	// Write all 1s to CSR
	csrrw x27, 0x57c, x0	// Write all 0s to CSR
	csrrw x27, 0x57c, x7	// Restore CSR

// Testing CSR 0x57d
	csrr x6, 0x57d	// Read CSR
	li x28, -1
	csrrw x18, 0x57d, x28	// Write all 1s to CSR
	csrrw x18, 0x57d, x0	// Write all 0s to CSR
	csrrw x18, 0x57d, x6	// Restore CSR

// Testing CSR 0x57e
	csrr x15, 0x57e	// Read CSR
	li x3, -1
	csrrw x9, 0x57e, x3	// Write all 1s to CSR
	csrrw x9, 0x57e, x0	// Write all 0s to CSR
	csrrw x9, 0x57e, x15	// Restore CSR

// Testing CSR 0x57f
	csrr x17, 0x57f	// Read CSR
	li x10, -1
	csrrw x23, 0x57f, x10	// Write all 1s to CSR
	csrrw x23, 0x57f, x0	// Write all 0s to CSR
	csrrw x23, 0x57f, x17	// Restore CSR

// Testing CSR 0x580
	csrr x16, 0x580	// Read CSR
	li x14, -1
	csrrw x27, 0x580, x14	// Write all 1s to CSR
	csrrw x27, 0x580, x0	// Write all 0s to CSR
	csrrw x27, 0x580, x16	// Restore CSR

// Testing CSR 0x581
	csrr x11, 0x581	// Read CSR
	li x28, -1
	csrrw x22, 0x581, x28	// Write all 1s to CSR
	csrrw x22, 0x581, x0	// Write all 0s to CSR
	csrrw x22, 0x581, x11	// Restore CSR

// Testing CSR 0x582
	csrr x24, 0x582	// Read CSR
	li x30, -1
	csrrw x23, 0x582, x30	// Write all 1s to CSR
	csrrw x23, 0x582, x0	// Write all 0s to CSR
	csrrw x23, 0x582, x24	// Restore CSR

// Testing CSR 0x583
	csrr x28, 0x583	// Read CSR
	li x23, -1
	csrrw x13, 0x583, x23	// Write all 1s to CSR
	csrrw x13, 0x583, x0	// Write all 0s to CSR
	csrrw x13, 0x583, x28	// Restore CSR

// Testing CSR 0x584
	csrr x2, 0x584	// Read CSR
	li x28, -1
	csrrw x30, 0x584, x28	// Write all 1s to CSR
	csrrw x30, 0x584, x0	// Write all 0s to CSR
	csrrw x30, 0x584, x2	// Restore CSR

// Testing CSR 0x585
	csrr x4, 0x585	// Read CSR
	li x29, -1
	csrrw x2, 0x585, x29	// Write all 1s to CSR
	csrrw x2, 0x585, x0	// Write all 0s to CSR
	csrrw x2, 0x585, x4	// Restore CSR

// Testing CSR 0x586
	csrr x11, 0x586	// Read CSR
	li x6, -1
	csrrw x25, 0x586, x6	// Write all 1s to CSR
	csrrw x25, 0x586, x0	// Write all 0s to CSR
	csrrw x25, 0x586, x11	// Restore CSR

// Testing CSR 0x587
	csrr x9, 0x587	// Read CSR
	li x20, -1
	csrrw x24, 0x587, x20	// Write all 1s to CSR
	csrrw x24, 0x587, x0	// Write all 0s to CSR
	csrrw x24, 0x587, x9	// Restore CSR

// Testing CSR 0x588
	csrr x18, 0x588	// Read CSR
	li x15, -1
	csrrw x10, 0x588, x15	// Write all 1s to CSR
	csrrw x10, 0x588, x0	// Write all 0s to CSR
	csrrw x10, 0x588, x18	// Restore CSR

// Testing CSR 0x589
	csrr x18, 0x589	// Read CSR
	li x29, -1
	csrrw x14, 0x589, x29	// Write all 1s to CSR
	csrrw x14, 0x589, x0	// Write all 0s to CSR
	csrrw x14, 0x589, x18	// Restore CSR

// Testing CSR 0x58a
	csrr x28, 0x58a	// Read CSR
	li x30, -1
	csrrw x16, 0x58a, x30	// Write all 1s to CSR
	csrrw x16, 0x58a, x0	// Write all 0s to CSR
	csrrw x16, 0x58a, x28	// Restore CSR

// Testing CSR 0x58b
	csrr x12, 0x58b	// Read CSR
	li x8, -1
	csrrw x31, 0x58b, x8	// Write all 1s to CSR
	csrrw x31, 0x58b, x0	// Write all 0s to CSR
	csrrw x31, 0x58b, x12	// Restore CSR

// Testing CSR 0x58c
	csrr x22, 0x58c	// Read CSR
	li x3, -1
	csrrw x24, 0x58c, x3	// Write all 1s to CSR
	csrrw x24, 0x58c, x0	// Write all 0s to CSR
	csrrw x24, 0x58c, x22	// Restore CSR

// Testing CSR 0x58d
	csrr x3, 0x58d	// Read CSR
	li x26, -1
	csrrw x21, 0x58d, x26	// Write all 1s to CSR
	csrrw x21, 0x58d, x0	// Write all 0s to CSR
	csrrw x21, 0x58d, x3	// Restore CSR

// Testing CSR 0x58e
	csrr x3, 0x58e	// Read CSR
	li x17, -1
	csrrw x1, 0x58e, x17	// Write all 1s to CSR
	csrrw x1, 0x58e, x0	// Write all 0s to CSR
	csrrw x1, 0x58e, x3	// Restore CSR

// Testing CSR 0x58f
	csrr x28, 0x58f	// Read CSR
	li x22, -1
	csrrw x19, 0x58f, x22	// Write all 1s to CSR
	csrrw x19, 0x58f, x0	// Write all 0s to CSR
	csrrw x19, 0x58f, x28	// Restore CSR

// Testing CSR 0x590
	csrr x17, 0x590	// Read CSR
	li x11, -1
	csrrw x31, 0x590, x11	// Write all 1s to CSR
	csrrw x31, 0x590, x0	// Write all 0s to CSR
	csrrw x31, 0x590, x17	// Restore CSR

// Testing CSR 0x591
	csrr x24, 0x591	// Read CSR
	li x27, -1
	csrrw x20, 0x591, x27	// Write all 1s to CSR
	csrrw x20, 0x591, x0	// Write all 0s to CSR
	csrrw x20, 0x591, x24	// Restore CSR

// Testing CSR 0x592
	csrr x4, 0x592	// Read CSR
	li x29, -1
	csrrw x19, 0x592, x29	// Write all 1s to CSR
	csrrw x19, 0x592, x0	// Write all 0s to CSR
	csrrw x19, 0x592, x4	// Restore CSR

// Testing CSR 0x593
	csrr x8, 0x593	// Read CSR
	li x1, -1
	csrrw x2, 0x593, x1	// Write all 1s to CSR
	csrrw x2, 0x593, x0	// Write all 0s to CSR
	csrrw x2, 0x593, x8	// Restore CSR

// Testing CSR 0x594
	csrr x26, 0x594	// Read CSR
	li x4, -1
	csrrw x27, 0x594, x4	// Write all 1s to CSR
	csrrw x27, 0x594, x0	// Write all 0s to CSR
	csrrw x27, 0x594, x26	// Restore CSR

// Testing CSR 0x595
	csrr x30, 0x595	// Read CSR
	li x24, -1
	csrrw x10, 0x595, x24	// Write all 1s to CSR
	csrrw x10, 0x595, x0	// Write all 0s to CSR
	csrrw x10, 0x595, x30	// Restore CSR

// Testing CSR 0x596
	csrr x3, 0x596	// Read CSR
	li x27, -1
	csrrw x19, 0x596, x27	// Write all 1s to CSR
	csrrw x19, 0x596, x0	// Write all 0s to CSR
	csrrw x19, 0x596, x3	// Restore CSR

// Testing CSR 0x597
	csrr x28, 0x597	// Read CSR
	li x13, -1
	csrrw x23, 0x597, x13	// Write all 1s to CSR
	csrrw x23, 0x597, x0	// Write all 0s to CSR
	csrrw x23, 0x597, x28	// Restore CSR

// Testing CSR 0x598
	csrr x5, 0x598	// Read CSR
	li x25, -1
	csrrw x29, 0x598, x25	// Write all 1s to CSR
	csrrw x29, 0x598, x0	// Write all 0s to CSR
	csrrw x29, 0x598, x5	// Restore CSR

// Testing CSR 0x599
	csrr x19, 0x599	// Read CSR
	li x31, -1
	csrrw x30, 0x599, x31	// Write all 1s to CSR
	csrrw x30, 0x599, x0	// Write all 0s to CSR
	csrrw x30, 0x599, x19	// Restore CSR

// Testing CSR 0x59a
	csrr x30, 0x59a	// Read CSR
	li x20, -1
	csrrw x17, 0x59a, x20	// Write all 1s to CSR
	csrrw x17, 0x59a, x0	// Write all 0s to CSR
	csrrw x17, 0x59a, x30	// Restore CSR

// Testing CSR 0x59b
	csrr x31, 0x59b	// Read CSR
	li x28, -1
	csrrw x29, 0x59b, x28	// Write all 1s to CSR
	csrrw x29, 0x59b, x0	// Write all 0s to CSR
	csrrw x29, 0x59b, x31	// Restore CSR

// Testing CSR 0x59c
	csrr x7, 0x59c	// Read CSR
	li x9, -1
	csrrw x10, 0x59c, x9	// Write all 1s to CSR
	csrrw x10, 0x59c, x0	// Write all 0s to CSR
	csrrw x10, 0x59c, x7	// Restore CSR

// Testing CSR 0x59d
	csrr x6, 0x59d	// Read CSR
	li x30, -1
	csrrw x19, 0x59d, x30	// Write all 1s to CSR
	csrrw x19, 0x59d, x0	// Write all 0s to CSR
	csrrw x19, 0x59d, x6	// Restore CSR

// Testing CSR 0x59e
	csrr x31, 0x59e	// Read CSR
	li x8, -1
	csrrw x5, 0x59e, x8	// Write all 1s to CSR
	csrrw x5, 0x59e, x0	// Write all 0s to CSR
	csrrw x5, 0x59e, x31	// Restore CSR

// Testing CSR 0x59f
	csrr x5, 0x59f	// Read CSR
	li x29, -1
	csrrw x8, 0x59f, x29	// Write all 1s to CSR
	csrrw x8, 0x59f, x0	// Write all 0s to CSR
	csrrw x8, 0x59f, x5	// Restore CSR

// Testing CSR 0x5a0
	csrr x9, 0x5a0	// Read CSR
	li x16, -1
	csrrw x26, 0x5a0, x16	// Write all 1s to CSR
	csrrw x26, 0x5a0, x0	// Write all 0s to CSR
	csrrw x26, 0x5a0, x9	// Restore CSR

// Testing CSR 0x5a1
	csrr x10, 0x5a1	// Read CSR
	li x5, -1
	csrrw x24, 0x5a1, x5	// Write all 1s to CSR
	csrrw x24, 0x5a1, x0	// Write all 0s to CSR
	csrrw x24, 0x5a1, x10	// Restore CSR

// Testing CSR 0x5a2
	csrr x20, 0x5a2	// Read CSR
	li x9, -1
	csrrw x7, 0x5a2, x9	// Write all 1s to CSR
	csrrw x7, 0x5a2, x0	// Write all 0s to CSR
	csrrw x7, 0x5a2, x20	// Restore CSR

// Testing CSR 0x5a3
	csrr x3, 0x5a3	// Read CSR
	li x5, -1
	csrrw x29, 0x5a3, x5	// Write all 1s to CSR
	csrrw x29, 0x5a3, x0	// Write all 0s to CSR
	csrrw x29, 0x5a3, x3	// Restore CSR

// Testing CSR 0x5a4
	csrr x27, 0x5a4	// Read CSR
	li x22, -1
	csrrw x14, 0x5a4, x22	// Write all 1s to CSR
	csrrw x14, 0x5a4, x0	// Write all 0s to CSR
	csrrw x14, 0x5a4, x27	// Restore CSR

// Testing CSR 0x5a5
	csrr x31, 0x5a5	// Read CSR
	li x6, -1
	csrrw x7, 0x5a5, x6	// Write all 1s to CSR
	csrrw x7, 0x5a5, x0	// Write all 0s to CSR
	csrrw x7, 0x5a5, x31	// Restore CSR

// Testing CSR 0x5a6
	csrr x28, 0x5a6	// Read CSR
	li x19, -1
	csrrw x1, 0x5a6, x19	// Write all 1s to CSR
	csrrw x1, 0x5a6, x0	// Write all 0s to CSR
	csrrw x1, 0x5a6, x28	// Restore CSR

// Testing CSR 0x5a7
	csrr x12, 0x5a7	// Read CSR
	li x18, -1
	csrrw x22, 0x5a7, x18	// Write all 1s to CSR
	csrrw x22, 0x5a7, x0	// Write all 0s to CSR
	csrrw x22, 0x5a7, x12	// Restore CSR

// Testing CSR 0x5a8
	csrr x16, 0x5a8	// Read CSR
	li x22, -1
	csrrw x5, 0x5a8, x22	// Write all 1s to CSR
	csrrw x5, 0x5a8, x0	// Write all 0s to CSR
	csrrw x5, 0x5a8, x16	// Restore CSR

// Testing CSR 0x5a9
	csrr x25, 0x5a9	// Read CSR
	li x27, -1
	csrrw x24, 0x5a9, x27	// Write all 1s to CSR
	csrrw x24, 0x5a9, x0	// Write all 0s to CSR
	csrrw x24, 0x5a9, x25	// Restore CSR

// Testing CSR 0x5aa
	csrr x9, 0x5aa	// Read CSR
	li x3, -1
	csrrw x29, 0x5aa, x3	// Write all 1s to CSR
	csrrw x29, 0x5aa, x0	// Write all 0s to CSR
	csrrw x29, 0x5aa, x9	// Restore CSR

// Testing CSR 0x5ab
	csrr x24, 0x5ab	// Read CSR
	li x23, -1
	csrrw x20, 0x5ab, x23	// Write all 1s to CSR
	csrrw x20, 0x5ab, x0	// Write all 0s to CSR
	csrrw x20, 0x5ab, x24	// Restore CSR

// Testing CSR 0x5ac
	csrr x28, 0x5ac	// Read CSR
	li x23, -1
	csrrw x9, 0x5ac, x23	// Write all 1s to CSR
	csrrw x9, 0x5ac, x0	// Write all 0s to CSR
	csrrw x9, 0x5ac, x28	// Restore CSR

// Testing CSR 0x5ad
	csrr x26, 0x5ad	// Read CSR
	li x20, -1
	csrrw x24, 0x5ad, x20	// Write all 1s to CSR
	csrrw x24, 0x5ad, x0	// Write all 0s to CSR
	csrrw x24, 0x5ad, x26	// Restore CSR

// Testing CSR 0x5ae
	csrr x8, 0x5ae	// Read CSR
	li x1, -1
	csrrw x29, 0x5ae, x1	// Write all 1s to CSR
	csrrw x29, 0x5ae, x0	// Write all 0s to CSR
	csrrw x29, 0x5ae, x8	// Restore CSR

// Testing CSR 0x5af
	csrr x5, 0x5af	// Read CSR
	li x27, -1
	csrrw x7, 0x5af, x27	// Write all 1s to CSR
	csrrw x7, 0x5af, x0	// Write all 0s to CSR
	csrrw x7, 0x5af, x5	// Restore CSR

// Testing CSR 0x5b0
	csrr x24, 0x5b0	// Read CSR
	li x19, -1
	csrrw x22, 0x5b0, x19	// Write all 1s to CSR
	csrrw x22, 0x5b0, x0	// Write all 0s to CSR
	csrrw x22, 0x5b0, x24	// Restore CSR

// Testing CSR 0x5b1
	csrr x1, 0x5b1	// Read CSR
	li x14, -1
	csrrw x5, 0x5b1, x14	// Write all 1s to CSR
	csrrw x5, 0x5b1, x0	// Write all 0s to CSR
	csrrw x5, 0x5b1, x1	// Restore CSR

// Testing CSR 0x5b2
	csrr x5, 0x5b2	// Read CSR
	li x16, -1
	csrrw x18, 0x5b2, x16	// Write all 1s to CSR
	csrrw x18, 0x5b2, x0	// Write all 0s to CSR
	csrrw x18, 0x5b2, x5	// Restore CSR

// Testing CSR 0x5b3
	csrr x2, 0x5b3	// Read CSR
	li x17, -1
	csrrw x11, 0x5b3, x17	// Write all 1s to CSR
	csrrw x11, 0x5b3, x0	// Write all 0s to CSR
	csrrw x11, 0x5b3, x2	// Restore CSR

// Testing CSR 0x5b4
	csrr x31, 0x5b4	// Read CSR
	li x8, -1
	csrrw x22, 0x5b4, x8	// Write all 1s to CSR
	csrrw x22, 0x5b4, x0	// Write all 0s to CSR
	csrrw x22, 0x5b4, x31	// Restore CSR

// Testing CSR 0x5b5
	csrr x6, 0x5b5	// Read CSR
	li x15, -1
	csrrw x11, 0x5b5, x15	// Write all 1s to CSR
	csrrw x11, 0x5b5, x0	// Write all 0s to CSR
	csrrw x11, 0x5b5, x6	// Restore CSR

// Testing CSR 0x5b6
	csrr x22, 0x5b6	// Read CSR
	li x29, -1
	csrrw x15, 0x5b6, x29	// Write all 1s to CSR
	csrrw x15, 0x5b6, x0	// Write all 0s to CSR
	csrrw x15, 0x5b6, x22	// Restore CSR

// Testing CSR 0x5b7
	csrr x8, 0x5b7	// Read CSR
	li x31, -1
	csrrw x21, 0x5b7, x31	// Write all 1s to CSR
	csrrw x21, 0x5b7, x0	// Write all 0s to CSR
	csrrw x21, 0x5b7, x8	// Restore CSR

// Testing CSR 0x5b8
	csrr x21, 0x5b8	// Read CSR
	li x24, -1
	csrrw x9, 0x5b8, x24	// Write all 1s to CSR
	csrrw x9, 0x5b8, x0	// Write all 0s to CSR
	csrrw x9, 0x5b8, x21	// Restore CSR

// Testing CSR 0x5b9
	csrr x22, 0x5b9	// Read CSR
	li x23, -1
	csrrw x7, 0x5b9, x23	// Write all 1s to CSR
	csrrw x7, 0x5b9, x0	// Write all 0s to CSR
	csrrw x7, 0x5b9, x22	// Restore CSR

// Testing CSR 0x5ba
	csrr x4, 0x5ba	// Read CSR
	li x12, -1
	csrrw x16, 0x5ba, x12	// Write all 1s to CSR
	csrrw x16, 0x5ba, x0	// Write all 0s to CSR
	csrrw x16, 0x5ba, x4	// Restore CSR

// Testing CSR 0x5bb
	csrr x9, 0x5bb	// Read CSR
	li x12, -1
	csrrw x18, 0x5bb, x12	// Write all 1s to CSR
	csrrw x18, 0x5bb, x0	// Write all 0s to CSR
	csrrw x18, 0x5bb, x9	// Restore CSR

// Testing CSR 0x5bc
	csrr x19, 0x5bc	// Read CSR
	li x10, -1
	csrrw x7, 0x5bc, x10	// Write all 1s to CSR
	csrrw x7, 0x5bc, x0	// Write all 0s to CSR
	csrrw x7, 0x5bc, x19	// Restore CSR

// Testing CSR 0x5bd
	csrr x10, 0x5bd	// Read CSR
	li x18, -1
	csrrw x13, 0x5bd, x18	// Write all 1s to CSR
	csrrw x13, 0x5bd, x0	// Write all 0s to CSR
	csrrw x13, 0x5bd, x10	// Restore CSR

// Testing CSR 0x5be
	csrr x3, 0x5be	// Read CSR
	li x6, -1
	csrrw x13, 0x5be, x6	// Write all 1s to CSR
	csrrw x13, 0x5be, x0	// Write all 0s to CSR
	csrrw x13, 0x5be, x3	// Restore CSR

// Testing CSR 0x5bf
	csrr x4, 0x5bf	// Read CSR
	li x31, -1
	csrrw x19, 0x5bf, x31	// Write all 1s to CSR
	csrrw x19, 0x5bf, x0	// Write all 0s to CSR
	csrrw x19, 0x5bf, x4	// Restore CSR

// Testing CSR 0x5c0
	csrr x30, 0x5c0	// Read CSR
	li x21, -1
	csrrw x4, 0x5c0, x21	// Write all 1s to CSR
	csrrw x4, 0x5c0, x0	// Write all 0s to CSR
	csrrw x4, 0x5c0, x30	// Restore CSR

// Testing CSR 0x5c1
	csrr x17, 0x5c1	// Read CSR
	li x28, -1
	csrrw x5, 0x5c1, x28	// Write all 1s to CSR
	csrrw x5, 0x5c1, x0	// Write all 0s to CSR
	csrrw x5, 0x5c1, x17	// Restore CSR

// Testing CSR 0x5c2
	csrr x23, 0x5c2	// Read CSR
	li x28, -1
	csrrw x30, 0x5c2, x28	// Write all 1s to CSR
	csrrw x30, 0x5c2, x0	// Write all 0s to CSR
	csrrw x30, 0x5c2, x23	// Restore CSR

// Testing CSR 0x5c3
	csrr x30, 0x5c3	// Read CSR
	li x15, -1
	csrrw x5, 0x5c3, x15	// Write all 1s to CSR
	csrrw x5, 0x5c3, x0	// Write all 0s to CSR
	csrrw x5, 0x5c3, x30	// Restore CSR

// Testing CSR 0x5c4
	csrr x14, 0x5c4	// Read CSR
	li x9, -1
	csrrw x29, 0x5c4, x9	// Write all 1s to CSR
	csrrw x29, 0x5c4, x0	// Write all 0s to CSR
	csrrw x29, 0x5c4, x14	// Restore CSR

// Testing CSR 0x5c5
	csrr x24, 0x5c5	// Read CSR
	li x18, -1
	csrrw x7, 0x5c5, x18	// Write all 1s to CSR
	csrrw x7, 0x5c5, x0	// Write all 0s to CSR
	csrrw x7, 0x5c5, x24	// Restore CSR

// Testing CSR 0x5c6
	csrr x25, 0x5c6	// Read CSR
	li x26, -1
	csrrw x6, 0x5c6, x26	// Write all 1s to CSR
	csrrw x6, 0x5c6, x0	// Write all 0s to CSR
	csrrw x6, 0x5c6, x25	// Restore CSR

// Testing CSR 0x5c7
	csrr x24, 0x5c7	// Read CSR
	li x3, -1
	csrrw x9, 0x5c7, x3	// Write all 1s to CSR
	csrrw x9, 0x5c7, x0	// Write all 0s to CSR
	csrrw x9, 0x5c7, x24	// Restore CSR

// Testing CSR 0x5c8
	csrr x15, 0x5c8	// Read CSR
	li x11, -1
	csrrw x13, 0x5c8, x11	// Write all 1s to CSR
	csrrw x13, 0x5c8, x0	// Write all 0s to CSR
	csrrw x13, 0x5c8, x15	// Restore CSR

// Testing CSR 0x5c9
	csrr x17, 0x5c9	// Read CSR
	li x2, -1
	csrrw x12, 0x5c9, x2	// Write all 1s to CSR
	csrrw x12, 0x5c9, x0	// Write all 0s to CSR
	csrrw x12, 0x5c9, x17	// Restore CSR

// Testing CSR 0x5ca
	csrr x27, 0x5ca	// Read CSR
	li x28, -1
	csrrw x13, 0x5ca, x28	// Write all 1s to CSR
	csrrw x13, 0x5ca, x0	// Write all 0s to CSR
	csrrw x13, 0x5ca, x27	// Restore CSR

// Testing CSR 0x5cb
	csrr x24, 0x5cb	// Read CSR
	li x18, -1
	csrrw x13, 0x5cb, x18	// Write all 1s to CSR
	csrrw x13, 0x5cb, x0	// Write all 0s to CSR
	csrrw x13, 0x5cb, x24	// Restore CSR

// Testing CSR 0x5cc
	csrr x5, 0x5cc	// Read CSR
	li x25, -1
	csrrw x23, 0x5cc, x25	// Write all 1s to CSR
	csrrw x23, 0x5cc, x0	// Write all 0s to CSR
	csrrw x23, 0x5cc, x5	// Restore CSR

// Testing CSR 0x5cd
	csrr x23, 0x5cd	// Read CSR
	li x18, -1
	csrrw x19, 0x5cd, x18	// Write all 1s to CSR
	csrrw x19, 0x5cd, x0	// Write all 0s to CSR
	csrrw x19, 0x5cd, x23	// Restore CSR

// Testing CSR 0x5ce
	csrr x5, 0x5ce	// Read CSR
	li x21, -1
	csrrw x2, 0x5ce, x21	// Write all 1s to CSR
	csrrw x2, 0x5ce, x0	// Write all 0s to CSR
	csrrw x2, 0x5ce, x5	// Restore CSR

// Testing CSR 0x5cf
	csrr x10, 0x5cf	// Read CSR
	li x20, -1
	csrrw x15, 0x5cf, x20	// Write all 1s to CSR
	csrrw x15, 0x5cf, x0	// Write all 0s to CSR
	csrrw x15, 0x5cf, x10	// Restore CSR

// Testing CSR 0x5d0
	csrr x17, 0x5d0	// Read CSR
	li x25, -1
	csrrw x19, 0x5d0, x25	// Write all 1s to CSR
	csrrw x19, 0x5d0, x0	// Write all 0s to CSR
	csrrw x19, 0x5d0, x17	// Restore CSR

// Testing CSR 0x5d1
	csrr x14, 0x5d1	// Read CSR
	li x7, -1
	csrrw x15, 0x5d1, x7	// Write all 1s to CSR
	csrrw x15, 0x5d1, x0	// Write all 0s to CSR
	csrrw x15, 0x5d1, x14	// Restore CSR

// Testing CSR 0x5d2
	csrr x7, 0x5d2	// Read CSR
	li x13, -1
	csrrw x3, 0x5d2, x13	// Write all 1s to CSR
	csrrw x3, 0x5d2, x0	// Write all 0s to CSR
	csrrw x3, 0x5d2, x7	// Restore CSR

// Testing CSR 0x5d3
	csrr x4, 0x5d3	// Read CSR
	li x18, -1
	csrrw x13, 0x5d3, x18	// Write all 1s to CSR
	csrrw x13, 0x5d3, x0	// Write all 0s to CSR
	csrrw x13, 0x5d3, x4	// Restore CSR

// Testing CSR 0x5d4
	csrr x4, 0x5d4	// Read CSR
	li x17, -1
	csrrw x22, 0x5d4, x17	// Write all 1s to CSR
	csrrw x22, 0x5d4, x0	// Write all 0s to CSR
	csrrw x22, 0x5d4, x4	// Restore CSR

// Testing CSR 0x5d5
	csrr x15, 0x5d5	// Read CSR
	li x24, -1
	csrrw x21, 0x5d5, x24	// Write all 1s to CSR
	csrrw x21, 0x5d5, x0	// Write all 0s to CSR
	csrrw x21, 0x5d5, x15	// Restore CSR

// Testing CSR 0x5d6
	csrr x6, 0x5d6	// Read CSR
	li x2, -1
	csrrw x7, 0x5d6, x2	// Write all 1s to CSR
	csrrw x7, 0x5d6, x0	// Write all 0s to CSR
	csrrw x7, 0x5d6, x6	// Restore CSR

// Testing CSR 0x5d7
	csrr x8, 0x5d7	// Read CSR
	li x20, -1
	csrrw x4, 0x5d7, x20	// Write all 1s to CSR
	csrrw x4, 0x5d7, x0	// Write all 0s to CSR
	csrrw x4, 0x5d7, x8	// Restore CSR

// Testing CSR 0x5d8
	csrr x13, 0x5d8	// Read CSR
	li x14, -1
	csrrw x3, 0x5d8, x14	// Write all 1s to CSR
	csrrw x3, 0x5d8, x0	// Write all 0s to CSR
	csrrw x3, 0x5d8, x13	// Restore CSR

// Testing CSR 0x5d9
	csrr x29, 0x5d9	// Read CSR
	li x27, -1
	csrrw x18, 0x5d9, x27	// Write all 1s to CSR
	csrrw x18, 0x5d9, x0	// Write all 0s to CSR
	csrrw x18, 0x5d9, x29	// Restore CSR

// Testing CSR 0x5da
	csrr x7, 0x5da	// Read CSR
	li x17, -1
	csrrw x16, 0x5da, x17	// Write all 1s to CSR
	csrrw x16, 0x5da, x0	// Write all 0s to CSR
	csrrw x16, 0x5da, x7	// Restore CSR

// Testing CSR 0x5db
	csrr x3, 0x5db	// Read CSR
	li x7, -1
	csrrw x30, 0x5db, x7	// Write all 1s to CSR
	csrrw x30, 0x5db, x0	// Write all 0s to CSR
	csrrw x30, 0x5db, x3	// Restore CSR

// Testing CSR 0x5dc
	csrr x28, 0x5dc	// Read CSR
	li x4, -1
	csrrw x17, 0x5dc, x4	// Write all 1s to CSR
	csrrw x17, 0x5dc, x0	// Write all 0s to CSR
	csrrw x17, 0x5dc, x28	// Restore CSR

// Testing CSR 0x5dd
	csrr x5, 0x5dd	// Read CSR
	li x20, -1
	csrrw x7, 0x5dd, x20	// Write all 1s to CSR
	csrrw x7, 0x5dd, x0	// Write all 0s to CSR
	csrrw x7, 0x5dd, x5	// Restore CSR

// Testing CSR 0x5de
	csrr x18, 0x5de	// Read CSR
	li x19, -1
	csrrw x17, 0x5de, x19	// Write all 1s to CSR
	csrrw x17, 0x5de, x0	// Write all 0s to CSR
	csrrw x17, 0x5de, x18	// Restore CSR

// Testing CSR 0x5df
	csrr x21, 0x5df	// Read CSR
	li x20, -1
	csrrw x14, 0x5df, x20	// Write all 1s to CSR
	csrrw x14, 0x5df, x0	// Write all 0s to CSR
	csrrw x14, 0x5df, x21	// Restore CSR

// Testing CSR 0x5e0
	csrr x20, 0x5e0	// Read CSR
	li x13, -1
	csrrw x28, 0x5e0, x13	// Write all 1s to CSR
	csrrw x28, 0x5e0, x0	// Write all 0s to CSR
	csrrw x28, 0x5e0, x20	// Restore CSR

// Testing CSR 0x5e1
	csrr x21, 0x5e1	// Read CSR
	li x30, -1
	csrrw x9, 0x5e1, x30	// Write all 1s to CSR
	csrrw x9, 0x5e1, x0	// Write all 0s to CSR
	csrrw x9, 0x5e1, x21	// Restore CSR

// Testing CSR 0x5e2
	csrr x22, 0x5e2	// Read CSR
	li x26, -1
	csrrw x16, 0x5e2, x26	// Write all 1s to CSR
	csrrw x16, 0x5e2, x0	// Write all 0s to CSR
	csrrw x16, 0x5e2, x22	// Restore CSR

// Testing CSR 0x5e3
	csrr x21, 0x5e3	// Read CSR
	li x26, -1
	csrrw x20, 0x5e3, x26	// Write all 1s to CSR
	csrrw x20, 0x5e3, x0	// Write all 0s to CSR
	csrrw x20, 0x5e3, x21	// Restore CSR

// Testing CSR 0x5e4
	csrr x1, 0x5e4	// Read CSR
	li x12, -1
	csrrw x25, 0x5e4, x12	// Write all 1s to CSR
	csrrw x25, 0x5e4, x0	// Write all 0s to CSR
	csrrw x25, 0x5e4, x1	// Restore CSR

// Testing CSR 0x5e5
	csrr x26, 0x5e5	// Read CSR
	li x7, -1
	csrrw x23, 0x5e5, x7	// Write all 1s to CSR
	csrrw x23, 0x5e5, x0	// Write all 0s to CSR
	csrrw x23, 0x5e5, x26	// Restore CSR

// Testing CSR 0x5e6
	csrr x21, 0x5e6	// Read CSR
	li x2, -1
	csrrw x7, 0x5e6, x2	// Write all 1s to CSR
	csrrw x7, 0x5e6, x0	// Write all 0s to CSR
	csrrw x7, 0x5e6, x21	// Restore CSR

// Testing CSR 0x5e7
	csrr x15, 0x5e7	// Read CSR
	li x7, -1
	csrrw x17, 0x5e7, x7	// Write all 1s to CSR
	csrrw x17, 0x5e7, x0	// Write all 0s to CSR
	csrrw x17, 0x5e7, x15	// Restore CSR

// Testing CSR 0x5e8
	csrr x22, 0x5e8	// Read CSR
	li x7, -1
	csrrw x27, 0x5e8, x7	// Write all 1s to CSR
	csrrw x27, 0x5e8, x0	// Write all 0s to CSR
	csrrw x27, 0x5e8, x22	// Restore CSR

// Testing CSR 0x5e9
	csrr x1, 0x5e9	// Read CSR
	li x5, -1
	csrrw x8, 0x5e9, x5	// Write all 1s to CSR
	csrrw x8, 0x5e9, x0	// Write all 0s to CSR
	csrrw x8, 0x5e9, x1	// Restore CSR

// Testing CSR 0x5ea
	csrr x15, 0x5ea	// Read CSR
	li x16, -1
	csrrw x3, 0x5ea, x16	// Write all 1s to CSR
	csrrw x3, 0x5ea, x0	// Write all 0s to CSR
	csrrw x3, 0x5ea, x15	// Restore CSR

// Testing CSR 0x5eb
	csrr x20, 0x5eb	// Read CSR
	li x9, -1
	csrrw x27, 0x5eb, x9	// Write all 1s to CSR
	csrrw x27, 0x5eb, x0	// Write all 0s to CSR
	csrrw x27, 0x5eb, x20	// Restore CSR

// Testing CSR 0x5ec
	csrr x21, 0x5ec	// Read CSR
	li x10, -1
	csrrw x13, 0x5ec, x10	// Write all 1s to CSR
	csrrw x13, 0x5ec, x0	// Write all 0s to CSR
	csrrw x13, 0x5ec, x21	// Restore CSR

// Testing CSR 0x5ed
	csrr x11, 0x5ed	// Read CSR
	li x24, -1
	csrrw x30, 0x5ed, x24	// Write all 1s to CSR
	csrrw x30, 0x5ed, x0	// Write all 0s to CSR
	csrrw x30, 0x5ed, x11	// Restore CSR

// Testing CSR 0x5ee
	csrr x22, 0x5ee	// Read CSR
	li x29, -1
	csrrw x23, 0x5ee, x29	// Write all 1s to CSR
	csrrw x23, 0x5ee, x0	// Write all 0s to CSR
	csrrw x23, 0x5ee, x22	// Restore CSR

// Testing CSR 0x5ef
	csrr x10, 0x5ef	// Read CSR
	li x29, -1
	csrrw x22, 0x5ef, x29	// Write all 1s to CSR
	csrrw x22, 0x5ef, x0	// Write all 0s to CSR
	csrrw x22, 0x5ef, x10	// Restore CSR

// Testing CSR 0x5f0
	csrr x3, 0x5f0	// Read CSR
	li x20, -1
	csrrw x4, 0x5f0, x20	// Write all 1s to CSR
	csrrw x4, 0x5f0, x0	// Write all 0s to CSR
	csrrw x4, 0x5f0, x3	// Restore CSR

// Testing CSR 0x5f1
	csrr x27, 0x5f1	// Read CSR
	li x16, -1
	csrrw x12, 0x5f1, x16	// Write all 1s to CSR
	csrrw x12, 0x5f1, x0	// Write all 0s to CSR
	csrrw x12, 0x5f1, x27	// Restore CSR

// Testing CSR 0x5f2
	csrr x20, 0x5f2	// Read CSR
	li x3, -1
	csrrw x21, 0x5f2, x3	// Write all 1s to CSR
	csrrw x21, 0x5f2, x0	// Write all 0s to CSR
	csrrw x21, 0x5f2, x20	// Restore CSR

// Testing CSR 0x5f3
	csrr x8, 0x5f3	// Read CSR
	li x28, -1
	csrrw x5, 0x5f3, x28	// Write all 1s to CSR
	csrrw x5, 0x5f3, x0	// Write all 0s to CSR
	csrrw x5, 0x5f3, x8	// Restore CSR

// Testing CSR 0x5f4
	csrr x14, 0x5f4	// Read CSR
	li x30, -1
	csrrw x29, 0x5f4, x30	// Write all 1s to CSR
	csrrw x29, 0x5f4, x0	// Write all 0s to CSR
	csrrw x29, 0x5f4, x14	// Restore CSR

// Testing CSR 0x5f5
	csrr x8, 0x5f5	// Read CSR
	li x28, -1
	csrrw x1, 0x5f5, x28	// Write all 1s to CSR
	csrrw x1, 0x5f5, x0	// Write all 0s to CSR
	csrrw x1, 0x5f5, x8	// Restore CSR

// Testing CSR 0x5f6
	csrr x16, 0x5f6	// Read CSR
	li x10, -1
	csrrw x5, 0x5f6, x10	// Write all 1s to CSR
	csrrw x5, 0x5f6, x0	// Write all 0s to CSR
	csrrw x5, 0x5f6, x16	// Restore CSR

// Testing CSR 0x5f7
	csrr x17, 0x5f7	// Read CSR
	li x28, -1
	csrrw x21, 0x5f7, x28	// Write all 1s to CSR
	csrrw x21, 0x5f7, x0	// Write all 0s to CSR
	csrrw x21, 0x5f7, x17	// Restore CSR

// Testing CSR 0x5f8
	csrr x12, 0x5f8	// Read CSR
	li x24, -1
	csrrw x22, 0x5f8, x24	// Write all 1s to CSR
	csrrw x22, 0x5f8, x0	// Write all 0s to CSR
	csrrw x22, 0x5f8, x12	// Restore CSR

// Testing CSR 0x5f9
	csrr x5, 0x5f9	// Read CSR
	li x4, -1
	csrrw x17, 0x5f9, x4	// Write all 1s to CSR
	csrrw x17, 0x5f9, x0	// Write all 0s to CSR
	csrrw x17, 0x5f9, x5	// Restore CSR

// Testing CSR 0x5fa
	csrr x11, 0x5fa	// Read CSR
	li x24, -1
	csrrw x22, 0x5fa, x24	// Write all 1s to CSR
	csrrw x22, 0x5fa, x0	// Write all 0s to CSR
	csrrw x22, 0x5fa, x11	// Restore CSR

// Testing CSR 0x5fb
	csrr x3, 0x5fb	// Read CSR
	li x12, -1
	csrrw x29, 0x5fb, x12	// Write all 1s to CSR
	csrrw x29, 0x5fb, x0	// Write all 0s to CSR
	csrrw x29, 0x5fb, x3	// Restore CSR

// Testing CSR 0x5fc
	csrr x26, 0x5fc	// Read CSR
	li x27, -1
	csrrw x7, 0x5fc, x27	// Write all 1s to CSR
	csrrw x7, 0x5fc, x0	// Write all 0s to CSR
	csrrw x7, 0x5fc, x26	// Restore CSR

// Testing CSR 0x5fd
	csrr x7, 0x5fd	// Read CSR
	li x10, -1
	csrrw x17, 0x5fd, x10	// Write all 1s to CSR
	csrrw x17, 0x5fd, x0	// Write all 0s to CSR
	csrrw x17, 0x5fd, x7	// Restore CSR

// Testing CSR 0x5fe
	csrr x23, 0x5fe	// Read CSR
	li x14, -1
	csrrw x21, 0x5fe, x14	// Write all 1s to CSR
	csrrw x21, 0x5fe, x0	// Write all 0s to CSR
	csrrw x21, 0x5fe, x23	// Restore CSR

// Testing CSR 0x5ff
	csrr x24, 0x5ff	// Read CSR
	li x13, -1
	csrrw x2, 0x5ff, x13	// Write all 1s to CSR
	csrrw x2, 0x5ff, x0	// Write all 0s to CSR
	csrrw x2, 0x5ff, x24	// Restore CSR

// Testing CSR 0x600
	csrr x5, 0x600	// Read CSR
	li x15, -1
	csrrw x3, 0x600, x15	// Write all 1s to CSR
	csrrw x3, 0x600, x0	// Write all 0s to CSR
	csrrw x3, 0x600, x5	// Restore CSR

// Testing CSR 0x601
	csrr x10, 0x601	// Read CSR
	li x21, -1
	csrrw x22, 0x601, x21	// Write all 1s to CSR
	csrrw x22, 0x601, x0	// Write all 0s to CSR
	csrrw x22, 0x601, x10	// Restore CSR

// Testing CSR 0x602
	csrr x5, 0x602	// Read CSR
	li x17, -1
	csrrw x7, 0x602, x17	// Write all 1s to CSR
	csrrw x7, 0x602, x0	// Write all 0s to CSR
	csrrw x7, 0x602, x5	// Restore CSR

// Testing CSR 0x603
	csrr x27, 0x603	// Read CSR
	li x20, -1
	csrrw x16, 0x603, x20	// Write all 1s to CSR
	csrrw x16, 0x603, x0	// Write all 0s to CSR
	csrrw x16, 0x603, x27	// Restore CSR

// Testing CSR 0x604
	csrr x12, 0x604	// Read CSR
	li x5, -1
	csrrw x19, 0x604, x5	// Write all 1s to CSR
	csrrw x19, 0x604, x0	// Write all 0s to CSR
	csrrw x19, 0x604, x12	// Restore CSR

// Testing CSR 0x605
	csrr x5, 0x605	// Read CSR
	li x29, -1
	csrrw x19, 0x605, x29	// Write all 1s to CSR
	csrrw x19, 0x605, x0	// Write all 0s to CSR
	csrrw x19, 0x605, x5	// Restore CSR

// Testing CSR 0x606
	csrr x14, 0x606	// Read CSR
	li x9, -1
	csrrw x24, 0x606, x9	// Write all 1s to CSR
	csrrw x24, 0x606, x0	// Write all 0s to CSR
	csrrw x24, 0x606, x14	// Restore CSR

// Testing CSR 0x607
	csrr x7, 0x607	// Read CSR
	li x4, -1
	csrrw x31, 0x607, x4	// Write all 1s to CSR
	csrrw x31, 0x607, x0	// Write all 0s to CSR
	csrrw x31, 0x607, x7	// Restore CSR

// Testing CSR 0x608
	csrr x6, 0x608	// Read CSR
	li x5, -1
	csrrw x15, 0x608, x5	// Write all 1s to CSR
	csrrw x15, 0x608, x0	// Write all 0s to CSR
	csrrw x15, 0x608, x6	// Restore CSR

// Testing CSR 0x609
	csrr x30, 0x609	// Read CSR
	li x28, -1
	csrrw x18, 0x609, x28	// Write all 1s to CSR
	csrrw x18, 0x609, x0	// Write all 0s to CSR
	csrrw x18, 0x609, x30	// Restore CSR

// Testing CSR 0x60a
	csrr x14, 0x60a	// Read CSR
	li x30, -1
	csrrw x6, 0x60a, x30	// Write all 1s to CSR
	csrrw x6, 0x60a, x0	// Write all 0s to CSR
	csrrw x6, 0x60a, x14	// Restore CSR

// Testing CSR 0x60b
	csrr x27, 0x60b	// Read CSR
	li x2, -1
	csrrw x10, 0x60b, x2	// Write all 1s to CSR
	csrrw x10, 0x60b, x0	// Write all 0s to CSR
	csrrw x10, 0x60b, x27	// Restore CSR

// Testing CSR 0x60c
	csrr x25, 0x60c	// Read CSR
	li x16, -1
	csrrw x19, 0x60c, x16	// Write all 1s to CSR
	csrrw x19, 0x60c, x0	// Write all 0s to CSR
	csrrw x19, 0x60c, x25	// Restore CSR

// Testing CSR 0x60d
	csrr x3, 0x60d	// Read CSR
	li x22, -1
	csrrw x12, 0x60d, x22	// Write all 1s to CSR
	csrrw x12, 0x60d, x0	// Write all 0s to CSR
	csrrw x12, 0x60d, x3	// Restore CSR

// Testing CSR 0x60e
	csrr x21, 0x60e	// Read CSR
	li x30, -1
	csrrw x4, 0x60e, x30	// Write all 1s to CSR
	csrrw x4, 0x60e, x0	// Write all 0s to CSR
	csrrw x4, 0x60e, x21	// Restore CSR

// Testing CSR 0x60f
	csrr x4, 0x60f	// Read CSR
	li x16, -1
	csrrw x8, 0x60f, x16	// Write all 1s to CSR
	csrrw x8, 0x60f, x0	// Write all 0s to CSR
	csrrw x8, 0x60f, x4	// Restore CSR

// Testing CSR 0x610
	csrr x17, 0x610	// Read CSR
	li x2, -1
	csrrw x1, 0x610, x2	// Write all 1s to CSR
	csrrw x1, 0x610, x0	// Write all 0s to CSR
	csrrw x1, 0x610, x17	// Restore CSR

// Testing CSR 0x611
	csrr x28, 0x611	// Read CSR
	li x23, -1
	csrrw x22, 0x611, x23	// Write all 1s to CSR
	csrrw x22, 0x611, x0	// Write all 0s to CSR
	csrrw x22, 0x611, x28	// Restore CSR

// Testing CSR 0x612
	csrr x26, 0x612	// Read CSR
	li x19, -1
	csrrw x3, 0x612, x19	// Write all 1s to CSR
	csrrw x3, 0x612, x0	// Write all 0s to CSR
	csrrw x3, 0x612, x26	// Restore CSR

// Testing CSR 0x613
	csrr x15, 0x613	// Read CSR
	li x27, -1
	csrrw x9, 0x613, x27	// Write all 1s to CSR
	csrrw x9, 0x613, x0	// Write all 0s to CSR
	csrrw x9, 0x613, x15	// Restore CSR

// Testing CSR 0x614
	csrr x24, 0x614	// Read CSR
	li x19, -1
	csrrw x9, 0x614, x19	// Write all 1s to CSR
	csrrw x9, 0x614, x0	// Write all 0s to CSR
	csrrw x9, 0x614, x24	// Restore CSR

// Testing CSR 0x615
	csrr x23, 0x615	// Read CSR
	li x18, -1
	csrrw x26, 0x615, x18	// Write all 1s to CSR
	csrrw x26, 0x615, x0	// Write all 0s to CSR
	csrrw x26, 0x615, x23	// Restore CSR

// Testing CSR 0x616
	csrr x13, 0x616	// Read CSR
	li x6, -1
	csrrw x8, 0x616, x6	// Write all 1s to CSR
	csrrw x8, 0x616, x0	// Write all 0s to CSR
	csrrw x8, 0x616, x13	// Restore CSR

// Testing CSR 0x617
	csrr x21, 0x617	// Read CSR
	li x4, -1
	csrrw x22, 0x617, x4	// Write all 1s to CSR
	csrrw x22, 0x617, x0	// Write all 0s to CSR
	csrrw x22, 0x617, x21	// Restore CSR

// Testing CSR 0x618
	csrr x27, 0x618	// Read CSR
	li x19, -1
	csrrw x31, 0x618, x19	// Write all 1s to CSR
	csrrw x31, 0x618, x0	// Write all 0s to CSR
	csrrw x31, 0x618, x27	// Restore CSR

// Testing CSR 0x619
	csrr x24, 0x619	// Read CSR
	li x25, -1
	csrrw x17, 0x619, x25	// Write all 1s to CSR
	csrrw x17, 0x619, x0	// Write all 0s to CSR
	csrrw x17, 0x619, x24	// Restore CSR

// Testing CSR 0x61a
	csrr x6, 0x61a	// Read CSR
	li x31, -1
	csrrw x16, 0x61a, x31	// Write all 1s to CSR
	csrrw x16, 0x61a, x0	// Write all 0s to CSR
	csrrw x16, 0x61a, x6	// Restore CSR

// Testing CSR 0x61b
	csrr x21, 0x61b	// Read CSR
	li x30, -1
	csrrw x8, 0x61b, x30	// Write all 1s to CSR
	csrrw x8, 0x61b, x0	// Write all 0s to CSR
	csrrw x8, 0x61b, x21	// Restore CSR

// Testing CSR 0x61c
	csrr x1, 0x61c	// Read CSR
	li x8, -1
	csrrw x5, 0x61c, x8	// Write all 1s to CSR
	csrrw x5, 0x61c, x0	// Write all 0s to CSR
	csrrw x5, 0x61c, x1	// Restore CSR

// Testing CSR 0x61d
	csrr x23, 0x61d	// Read CSR
	li x20, -1
	csrrw x22, 0x61d, x20	// Write all 1s to CSR
	csrrw x22, 0x61d, x0	// Write all 0s to CSR
	csrrw x22, 0x61d, x23	// Restore CSR

// Testing CSR 0x61e
	csrr x25, 0x61e	// Read CSR
	li x28, -1
	csrrw x5, 0x61e, x28	// Write all 1s to CSR
	csrrw x5, 0x61e, x0	// Write all 0s to CSR
	csrrw x5, 0x61e, x25	// Restore CSR

// Testing CSR 0x61f
	csrr x28, 0x61f	// Read CSR
	li x21, -1
	csrrw x5, 0x61f, x21	// Write all 1s to CSR
	csrrw x5, 0x61f, x0	// Write all 0s to CSR
	csrrw x5, 0x61f, x28	// Restore CSR

// Testing CSR 0x620
	csrr x28, 0x620	// Read CSR
	li x25, -1
	csrrw x26, 0x620, x25	// Write all 1s to CSR
	csrrw x26, 0x620, x0	// Write all 0s to CSR
	csrrw x26, 0x620, x28	// Restore CSR

// Testing CSR 0x621
	csrr x27, 0x621	// Read CSR
	li x19, -1
	csrrw x20, 0x621, x19	// Write all 1s to CSR
	csrrw x20, 0x621, x0	// Write all 0s to CSR
	csrrw x20, 0x621, x27	// Restore CSR

// Testing CSR 0x622
	csrr x6, 0x622	// Read CSR
	li x3, -1
	csrrw x4, 0x622, x3	// Write all 1s to CSR
	csrrw x4, 0x622, x0	// Write all 0s to CSR
	csrrw x4, 0x622, x6	// Restore CSR

// Testing CSR 0x623
	csrr x9, 0x623	// Read CSR
	li x4, -1
	csrrw x20, 0x623, x4	// Write all 1s to CSR
	csrrw x20, 0x623, x0	// Write all 0s to CSR
	csrrw x20, 0x623, x9	// Restore CSR

// Testing CSR 0x624
	csrr x15, 0x624	// Read CSR
	li x19, -1
	csrrw x25, 0x624, x19	// Write all 1s to CSR
	csrrw x25, 0x624, x0	// Write all 0s to CSR
	csrrw x25, 0x624, x15	// Restore CSR

// Testing CSR 0x625
	csrr x9, 0x625	// Read CSR
	li x19, -1
	csrrw x14, 0x625, x19	// Write all 1s to CSR
	csrrw x14, 0x625, x0	// Write all 0s to CSR
	csrrw x14, 0x625, x9	// Restore CSR

// Testing CSR 0x626
	csrr x2, 0x626	// Read CSR
	li x23, -1
	csrrw x3, 0x626, x23	// Write all 1s to CSR
	csrrw x3, 0x626, x0	// Write all 0s to CSR
	csrrw x3, 0x626, x2	// Restore CSR

// Testing CSR 0x627
	csrr x5, 0x627	// Read CSR
	li x27, -1
	csrrw x15, 0x627, x27	// Write all 1s to CSR
	csrrw x15, 0x627, x0	// Write all 0s to CSR
	csrrw x15, 0x627, x5	// Restore CSR

// Testing CSR 0x628
	csrr x2, 0x628	// Read CSR
	li x12, -1
	csrrw x11, 0x628, x12	// Write all 1s to CSR
	csrrw x11, 0x628, x0	// Write all 0s to CSR
	csrrw x11, 0x628, x2	// Restore CSR

// Testing CSR 0x629
	csrr x9, 0x629	// Read CSR
	li x21, -1
	csrrw x14, 0x629, x21	// Write all 1s to CSR
	csrrw x14, 0x629, x0	// Write all 0s to CSR
	csrrw x14, 0x629, x9	// Restore CSR

// Testing CSR 0x62a
	csrr x13, 0x62a	// Read CSR
	li x29, -1
	csrrw x1, 0x62a, x29	// Write all 1s to CSR
	csrrw x1, 0x62a, x0	// Write all 0s to CSR
	csrrw x1, 0x62a, x13	// Restore CSR

// Testing CSR 0x62b
	csrr x10, 0x62b	// Read CSR
	li x21, -1
	csrrw x8, 0x62b, x21	// Write all 1s to CSR
	csrrw x8, 0x62b, x0	// Write all 0s to CSR
	csrrw x8, 0x62b, x10	// Restore CSR

// Testing CSR 0x62c
	csrr x7, 0x62c	// Read CSR
	li x25, -1
	csrrw x3, 0x62c, x25	// Write all 1s to CSR
	csrrw x3, 0x62c, x0	// Write all 0s to CSR
	csrrw x3, 0x62c, x7	// Restore CSR

// Testing CSR 0x62d
	csrr x19, 0x62d	// Read CSR
	li x24, -1
	csrrw x5, 0x62d, x24	// Write all 1s to CSR
	csrrw x5, 0x62d, x0	// Write all 0s to CSR
	csrrw x5, 0x62d, x19	// Restore CSR

// Testing CSR 0x62e
	csrr x8, 0x62e	// Read CSR
	li x28, -1
	csrrw x17, 0x62e, x28	// Write all 1s to CSR
	csrrw x17, 0x62e, x0	// Write all 0s to CSR
	csrrw x17, 0x62e, x8	// Restore CSR

// Testing CSR 0x62f
	csrr x7, 0x62f	// Read CSR
	li x15, -1
	csrrw x11, 0x62f, x15	// Write all 1s to CSR
	csrrw x11, 0x62f, x0	// Write all 0s to CSR
	csrrw x11, 0x62f, x7	// Restore CSR

// Testing CSR 0x630
	csrr x28, 0x630	// Read CSR
	li x1, -1
	csrrw x25, 0x630, x1	// Write all 1s to CSR
	csrrw x25, 0x630, x0	// Write all 0s to CSR
	csrrw x25, 0x630, x28	// Restore CSR

// Testing CSR 0x631
	csrr x9, 0x631	// Read CSR
	li x14, -1
	csrrw x19, 0x631, x14	// Write all 1s to CSR
	csrrw x19, 0x631, x0	// Write all 0s to CSR
	csrrw x19, 0x631, x9	// Restore CSR

// Testing CSR 0x632
	csrr x17, 0x632	// Read CSR
	li x18, -1
	csrrw x5, 0x632, x18	// Write all 1s to CSR
	csrrw x5, 0x632, x0	// Write all 0s to CSR
	csrrw x5, 0x632, x17	// Restore CSR

// Testing CSR 0x633
	csrr x23, 0x633	// Read CSR
	li x11, -1
	csrrw x19, 0x633, x11	// Write all 1s to CSR
	csrrw x19, 0x633, x0	// Write all 0s to CSR
	csrrw x19, 0x633, x23	// Restore CSR

// Testing CSR 0x634
	csrr x21, 0x634	// Read CSR
	li x18, -1
	csrrw x13, 0x634, x18	// Write all 1s to CSR
	csrrw x13, 0x634, x0	// Write all 0s to CSR
	csrrw x13, 0x634, x21	// Restore CSR

// Testing CSR 0x635
	csrr x30, 0x635	// Read CSR
	li x7, -1
	csrrw x10, 0x635, x7	// Write all 1s to CSR
	csrrw x10, 0x635, x0	// Write all 0s to CSR
	csrrw x10, 0x635, x30	// Restore CSR

// Testing CSR 0x636
	csrr x4, 0x636	// Read CSR
	li x15, -1
	csrrw x21, 0x636, x15	// Write all 1s to CSR
	csrrw x21, 0x636, x0	// Write all 0s to CSR
	csrrw x21, 0x636, x4	// Restore CSR

// Testing CSR 0x637
	csrr x21, 0x637	// Read CSR
	li x9, -1
	csrrw x8, 0x637, x9	// Write all 1s to CSR
	csrrw x8, 0x637, x0	// Write all 0s to CSR
	csrrw x8, 0x637, x21	// Restore CSR

// Testing CSR 0x638
	csrr x26, 0x638	// Read CSR
	li x21, -1
	csrrw x9, 0x638, x21	// Write all 1s to CSR
	csrrw x9, 0x638, x0	// Write all 0s to CSR
	csrrw x9, 0x638, x26	// Restore CSR

// Testing CSR 0x639
	csrr x29, 0x639	// Read CSR
	li x25, -1
	csrrw x10, 0x639, x25	// Write all 1s to CSR
	csrrw x10, 0x639, x0	// Write all 0s to CSR
	csrrw x10, 0x639, x29	// Restore CSR

// Testing CSR 0x63a
	csrr x3, 0x63a	// Read CSR
	li x12, -1
	csrrw x5, 0x63a, x12	// Write all 1s to CSR
	csrrw x5, 0x63a, x0	// Write all 0s to CSR
	csrrw x5, 0x63a, x3	// Restore CSR

// Testing CSR 0x63b
	csrr x15, 0x63b	// Read CSR
	li x1, -1
	csrrw x13, 0x63b, x1	// Write all 1s to CSR
	csrrw x13, 0x63b, x0	// Write all 0s to CSR
	csrrw x13, 0x63b, x15	// Restore CSR

// Testing CSR 0x63c
	csrr x31, 0x63c	// Read CSR
	li x21, -1
	csrrw x15, 0x63c, x21	// Write all 1s to CSR
	csrrw x15, 0x63c, x0	// Write all 0s to CSR
	csrrw x15, 0x63c, x31	// Restore CSR

// Testing CSR 0x63d
	csrr x2, 0x63d	// Read CSR
	li x21, -1
	csrrw x25, 0x63d, x21	// Write all 1s to CSR
	csrrw x25, 0x63d, x0	// Write all 0s to CSR
	csrrw x25, 0x63d, x2	// Restore CSR

// Testing CSR 0x63e
	csrr x25, 0x63e	// Read CSR
	li x10, -1
	csrrw x17, 0x63e, x10	// Write all 1s to CSR
	csrrw x17, 0x63e, x0	// Write all 0s to CSR
	csrrw x17, 0x63e, x25	// Restore CSR

// Testing CSR 0x63f
	csrr x20, 0x63f	// Read CSR
	li x25, -1
	csrrw x14, 0x63f, x25	// Write all 1s to CSR
	csrrw x14, 0x63f, x0	// Write all 0s to CSR
	csrrw x14, 0x63f, x20	// Restore CSR

// Testing CSR 0x640
	csrr x15, 0x640	// Read CSR
	li x20, -1
	csrrw x27, 0x640, x20	// Write all 1s to CSR
	csrrw x27, 0x640, x0	// Write all 0s to CSR
	csrrw x27, 0x640, x15	// Restore CSR

// Testing CSR 0x641
	csrr x19, 0x641	// Read CSR
	li x24, -1
	csrrw x17, 0x641, x24	// Write all 1s to CSR
	csrrw x17, 0x641, x0	// Write all 0s to CSR
	csrrw x17, 0x641, x19	// Restore CSR

// Testing CSR 0x642
	csrr x7, 0x642	// Read CSR
	li x6, -1
	csrrw x27, 0x642, x6	// Write all 1s to CSR
	csrrw x27, 0x642, x0	// Write all 0s to CSR
	csrrw x27, 0x642, x7	// Restore CSR

// Testing CSR 0x643
	csrr x1, 0x643	// Read CSR
	li x9, -1
	csrrw x4, 0x643, x9	// Write all 1s to CSR
	csrrw x4, 0x643, x0	// Write all 0s to CSR
	csrrw x4, 0x643, x1	// Restore CSR

// Testing CSR 0x644
	csrr x27, 0x644	// Read CSR
	li x13, -1
	csrrw x23, 0x644, x13	// Write all 1s to CSR
	csrrw x23, 0x644, x0	// Write all 0s to CSR
	csrrw x23, 0x644, x27	// Restore CSR

// Testing CSR 0x645
	csrr x9, 0x645	// Read CSR
	li x7, -1
	csrrw x16, 0x645, x7	// Write all 1s to CSR
	csrrw x16, 0x645, x0	// Write all 0s to CSR
	csrrw x16, 0x645, x9	// Restore CSR

// Testing CSR 0x646
	csrr x29, 0x646	// Read CSR
	li x16, -1
	csrrw x9, 0x646, x16	// Write all 1s to CSR
	csrrw x9, 0x646, x0	// Write all 0s to CSR
	csrrw x9, 0x646, x29	// Restore CSR

// Testing CSR 0x647
	csrr x17, 0x647	// Read CSR
	li x13, -1
	csrrw x5, 0x647, x13	// Write all 1s to CSR
	csrrw x5, 0x647, x0	// Write all 0s to CSR
	csrrw x5, 0x647, x17	// Restore CSR

// Testing CSR 0x648
	csrr x20, 0x648	// Read CSR
	li x16, -1
	csrrw x9, 0x648, x16	// Write all 1s to CSR
	csrrw x9, 0x648, x0	// Write all 0s to CSR
	csrrw x9, 0x648, x20	// Restore CSR

// Testing CSR 0x649
	csrr x31, 0x649	// Read CSR
	li x28, -1
	csrrw x6, 0x649, x28	// Write all 1s to CSR
	csrrw x6, 0x649, x0	// Write all 0s to CSR
	csrrw x6, 0x649, x31	// Restore CSR

// Testing CSR 0x64a
	csrr x23, 0x64a	// Read CSR
	li x1, -1
	csrrw x7, 0x64a, x1	// Write all 1s to CSR
	csrrw x7, 0x64a, x0	// Write all 0s to CSR
	csrrw x7, 0x64a, x23	// Restore CSR

// Testing CSR 0x64b
	csrr x11, 0x64b	// Read CSR
	li x9, -1
	csrrw x23, 0x64b, x9	// Write all 1s to CSR
	csrrw x23, 0x64b, x0	// Write all 0s to CSR
	csrrw x23, 0x64b, x11	// Restore CSR

// Testing CSR 0x64c
	csrr x23, 0x64c	// Read CSR
	li x28, -1
	csrrw x27, 0x64c, x28	// Write all 1s to CSR
	csrrw x27, 0x64c, x0	// Write all 0s to CSR
	csrrw x27, 0x64c, x23	// Restore CSR

// Testing CSR 0x64d
	csrr x4, 0x64d	// Read CSR
	li x22, -1
	csrrw x1, 0x64d, x22	// Write all 1s to CSR
	csrrw x1, 0x64d, x0	// Write all 0s to CSR
	csrrw x1, 0x64d, x4	// Restore CSR

// Testing CSR 0x64e
	csrr x14, 0x64e	// Read CSR
	li x10, -1
	csrrw x11, 0x64e, x10	// Write all 1s to CSR
	csrrw x11, 0x64e, x0	// Write all 0s to CSR
	csrrw x11, 0x64e, x14	// Restore CSR

// Testing CSR 0x64f
	csrr x20, 0x64f	// Read CSR
	li x24, -1
	csrrw x30, 0x64f, x24	// Write all 1s to CSR
	csrrw x30, 0x64f, x0	// Write all 0s to CSR
	csrrw x30, 0x64f, x20	// Restore CSR

// Testing CSR 0x650
	csrr x7, 0x650	// Read CSR
	li x11, -1
	csrrw x14, 0x650, x11	// Write all 1s to CSR
	csrrw x14, 0x650, x0	// Write all 0s to CSR
	csrrw x14, 0x650, x7	// Restore CSR

// Testing CSR 0x651
	csrr x25, 0x651	// Read CSR
	li x30, -1
	csrrw x5, 0x651, x30	// Write all 1s to CSR
	csrrw x5, 0x651, x0	// Write all 0s to CSR
	csrrw x5, 0x651, x25	// Restore CSR

// Testing CSR 0x652
	csrr x31, 0x652	// Read CSR
	li x21, -1
	csrrw x4, 0x652, x21	// Write all 1s to CSR
	csrrw x4, 0x652, x0	// Write all 0s to CSR
	csrrw x4, 0x652, x31	// Restore CSR

// Testing CSR 0x653
	csrr x8, 0x653	// Read CSR
	li x12, -1
	csrrw x25, 0x653, x12	// Write all 1s to CSR
	csrrw x25, 0x653, x0	// Write all 0s to CSR
	csrrw x25, 0x653, x8	// Restore CSR

// Testing CSR 0x654
	csrr x24, 0x654	// Read CSR
	li x30, -1
	csrrw x16, 0x654, x30	// Write all 1s to CSR
	csrrw x16, 0x654, x0	// Write all 0s to CSR
	csrrw x16, 0x654, x24	// Restore CSR

// Testing CSR 0x655
	csrr x15, 0x655	// Read CSR
	li x6, -1
	csrrw x22, 0x655, x6	// Write all 1s to CSR
	csrrw x22, 0x655, x0	// Write all 0s to CSR
	csrrw x22, 0x655, x15	// Restore CSR

// Testing CSR 0x656
	csrr x27, 0x656	// Read CSR
	li x12, -1
	csrrw x14, 0x656, x12	// Write all 1s to CSR
	csrrw x14, 0x656, x0	// Write all 0s to CSR
	csrrw x14, 0x656, x27	// Restore CSR

// Testing CSR 0x657
	csrr x28, 0x657	// Read CSR
	li x14, -1
	csrrw x12, 0x657, x14	// Write all 1s to CSR
	csrrw x12, 0x657, x0	// Write all 0s to CSR
	csrrw x12, 0x657, x28	// Restore CSR

// Testing CSR 0x658
	csrr x19, 0x658	// Read CSR
	li x4, -1
	csrrw x3, 0x658, x4	// Write all 1s to CSR
	csrrw x3, 0x658, x0	// Write all 0s to CSR
	csrrw x3, 0x658, x19	// Restore CSR

// Testing CSR 0x659
	csrr x18, 0x659	// Read CSR
	li x26, -1
	csrrw x15, 0x659, x26	// Write all 1s to CSR
	csrrw x15, 0x659, x0	// Write all 0s to CSR
	csrrw x15, 0x659, x18	// Restore CSR

// Testing CSR 0x65a
	csrr x5, 0x65a	// Read CSR
	li x4, -1
	csrrw x1, 0x65a, x4	// Write all 1s to CSR
	csrrw x1, 0x65a, x0	// Write all 0s to CSR
	csrrw x1, 0x65a, x5	// Restore CSR

// Testing CSR 0x65b
	csrr x31, 0x65b	// Read CSR
	li x26, -1
	csrrw x17, 0x65b, x26	// Write all 1s to CSR
	csrrw x17, 0x65b, x0	// Write all 0s to CSR
	csrrw x17, 0x65b, x31	// Restore CSR

// Testing CSR 0x65c
	csrr x28, 0x65c	// Read CSR
	li x23, -1
	csrrw x13, 0x65c, x23	// Write all 1s to CSR
	csrrw x13, 0x65c, x0	// Write all 0s to CSR
	csrrw x13, 0x65c, x28	// Restore CSR

// Testing CSR 0x65d
	csrr x21, 0x65d	// Read CSR
	li x16, -1
	csrrw x8, 0x65d, x16	// Write all 1s to CSR
	csrrw x8, 0x65d, x0	// Write all 0s to CSR
	csrrw x8, 0x65d, x21	// Restore CSR

// Testing CSR 0x65e
	csrr x13, 0x65e	// Read CSR
	li x21, -1
	csrrw x24, 0x65e, x21	// Write all 1s to CSR
	csrrw x24, 0x65e, x0	// Write all 0s to CSR
	csrrw x24, 0x65e, x13	// Restore CSR

// Testing CSR 0x65f
	csrr x4, 0x65f	// Read CSR
	li x14, -1
	csrrw x2, 0x65f, x14	// Write all 1s to CSR
	csrrw x2, 0x65f, x0	// Write all 0s to CSR
	csrrw x2, 0x65f, x4	// Restore CSR

// Testing CSR 0x660
	csrr x22, 0x660	// Read CSR
	li x27, -1
	csrrw x10, 0x660, x27	// Write all 1s to CSR
	csrrw x10, 0x660, x0	// Write all 0s to CSR
	csrrw x10, 0x660, x22	// Restore CSR

// Testing CSR 0x661
	csrr x20, 0x661	// Read CSR
	li x6, -1
	csrrw x10, 0x661, x6	// Write all 1s to CSR
	csrrw x10, 0x661, x0	// Write all 0s to CSR
	csrrw x10, 0x661, x20	// Restore CSR

// Testing CSR 0x662
	csrr x9, 0x662	// Read CSR
	li x17, -1
	csrrw x4, 0x662, x17	// Write all 1s to CSR
	csrrw x4, 0x662, x0	// Write all 0s to CSR
	csrrw x4, 0x662, x9	// Restore CSR

// Testing CSR 0x663
	csrr x18, 0x663	// Read CSR
	li x22, -1
	csrrw x11, 0x663, x22	// Write all 1s to CSR
	csrrw x11, 0x663, x0	// Write all 0s to CSR
	csrrw x11, 0x663, x18	// Restore CSR

// Testing CSR 0x664
	csrr x1, 0x664	// Read CSR
	li x5, -1
	csrrw x3, 0x664, x5	// Write all 1s to CSR
	csrrw x3, 0x664, x0	// Write all 0s to CSR
	csrrw x3, 0x664, x1	// Restore CSR

// Testing CSR 0x665
	csrr x11, 0x665	// Read CSR
	li x25, -1
	csrrw x15, 0x665, x25	// Write all 1s to CSR
	csrrw x15, 0x665, x0	// Write all 0s to CSR
	csrrw x15, 0x665, x11	// Restore CSR

// Testing CSR 0x666
	csrr x28, 0x666	// Read CSR
	li x7, -1
	csrrw x8, 0x666, x7	// Write all 1s to CSR
	csrrw x8, 0x666, x0	// Write all 0s to CSR
	csrrw x8, 0x666, x28	// Restore CSR

// Testing CSR 0x667
	csrr x12, 0x667	// Read CSR
	li x29, -1
	csrrw x22, 0x667, x29	// Write all 1s to CSR
	csrrw x22, 0x667, x0	// Write all 0s to CSR
	csrrw x22, 0x667, x12	// Restore CSR

// Testing CSR 0x668
	csrr x19, 0x668	// Read CSR
	li x15, -1
	csrrw x9, 0x668, x15	// Write all 1s to CSR
	csrrw x9, 0x668, x0	// Write all 0s to CSR
	csrrw x9, 0x668, x19	// Restore CSR

// Testing CSR 0x669
	csrr x18, 0x669	// Read CSR
	li x6, -1
	csrrw x31, 0x669, x6	// Write all 1s to CSR
	csrrw x31, 0x669, x0	// Write all 0s to CSR
	csrrw x31, 0x669, x18	// Restore CSR

// Testing CSR 0x66a
	csrr x15, 0x66a	// Read CSR
	li x13, -1
	csrrw x1, 0x66a, x13	// Write all 1s to CSR
	csrrw x1, 0x66a, x0	// Write all 0s to CSR
	csrrw x1, 0x66a, x15	// Restore CSR

// Testing CSR 0x66b
	csrr x4, 0x66b	// Read CSR
	li x1, -1
	csrrw x11, 0x66b, x1	// Write all 1s to CSR
	csrrw x11, 0x66b, x0	// Write all 0s to CSR
	csrrw x11, 0x66b, x4	// Restore CSR

// Testing CSR 0x66c
	csrr x24, 0x66c	// Read CSR
	li x7, -1
	csrrw x10, 0x66c, x7	// Write all 1s to CSR
	csrrw x10, 0x66c, x0	// Write all 0s to CSR
	csrrw x10, 0x66c, x24	// Restore CSR

// Testing CSR 0x66d
	csrr x18, 0x66d	// Read CSR
	li x4, -1
	csrrw x17, 0x66d, x4	// Write all 1s to CSR
	csrrw x17, 0x66d, x0	// Write all 0s to CSR
	csrrw x17, 0x66d, x18	// Restore CSR

// Testing CSR 0x66e
	csrr x25, 0x66e	// Read CSR
	li x10, -1
	csrrw x29, 0x66e, x10	// Write all 1s to CSR
	csrrw x29, 0x66e, x0	// Write all 0s to CSR
	csrrw x29, 0x66e, x25	// Restore CSR

// Testing CSR 0x66f
	csrr x3, 0x66f	// Read CSR
	li x4, -1
	csrrw x18, 0x66f, x4	// Write all 1s to CSR
	csrrw x18, 0x66f, x0	// Write all 0s to CSR
	csrrw x18, 0x66f, x3	// Restore CSR

// Testing CSR 0x670
	csrr x20, 0x670	// Read CSR
	li x10, -1
	csrrw x24, 0x670, x10	// Write all 1s to CSR
	csrrw x24, 0x670, x0	// Write all 0s to CSR
	csrrw x24, 0x670, x20	// Restore CSR

// Testing CSR 0x671
	csrr x2, 0x671	// Read CSR
	li x8, -1
	csrrw x30, 0x671, x8	// Write all 1s to CSR
	csrrw x30, 0x671, x0	// Write all 0s to CSR
	csrrw x30, 0x671, x2	// Restore CSR

// Testing CSR 0x672
	csrr x27, 0x672	// Read CSR
	li x4, -1
	csrrw x22, 0x672, x4	// Write all 1s to CSR
	csrrw x22, 0x672, x0	// Write all 0s to CSR
	csrrw x22, 0x672, x27	// Restore CSR

// Testing CSR 0x673
	csrr x6, 0x673	// Read CSR
	li x15, -1
	csrrw x9, 0x673, x15	// Write all 1s to CSR
	csrrw x9, 0x673, x0	// Write all 0s to CSR
	csrrw x9, 0x673, x6	// Restore CSR

// Testing CSR 0x674
	csrr x29, 0x674	// Read CSR
	li x27, -1
	csrrw x23, 0x674, x27	// Write all 1s to CSR
	csrrw x23, 0x674, x0	// Write all 0s to CSR
	csrrw x23, 0x674, x29	// Restore CSR

// Testing CSR 0x675
	csrr x6, 0x675	// Read CSR
	li x15, -1
	csrrw x23, 0x675, x15	// Write all 1s to CSR
	csrrw x23, 0x675, x0	// Write all 0s to CSR
	csrrw x23, 0x675, x6	// Restore CSR

// Testing CSR 0x676
	csrr x27, 0x676	// Read CSR
	li x19, -1
	csrrw x1, 0x676, x19	// Write all 1s to CSR
	csrrw x1, 0x676, x0	// Write all 0s to CSR
	csrrw x1, 0x676, x27	// Restore CSR

// Testing CSR 0x677
	csrr x18, 0x677	// Read CSR
	li x13, -1
	csrrw x1, 0x677, x13	// Write all 1s to CSR
	csrrw x1, 0x677, x0	// Write all 0s to CSR
	csrrw x1, 0x677, x18	// Restore CSR

// Testing CSR 0x678
	csrr x31, 0x678	// Read CSR
	li x4, -1
	csrrw x10, 0x678, x4	// Write all 1s to CSR
	csrrw x10, 0x678, x0	// Write all 0s to CSR
	csrrw x10, 0x678, x31	// Restore CSR

// Testing CSR 0x679
	csrr x3, 0x679	// Read CSR
	li x21, -1
	csrrw x25, 0x679, x21	// Write all 1s to CSR
	csrrw x25, 0x679, x0	// Write all 0s to CSR
	csrrw x25, 0x679, x3	// Restore CSR

// Testing CSR 0x67a
	csrr x13, 0x67a	// Read CSR
	li x7, -1
	csrrw x9, 0x67a, x7	// Write all 1s to CSR
	csrrw x9, 0x67a, x0	// Write all 0s to CSR
	csrrw x9, 0x67a, x13	// Restore CSR

// Testing CSR 0x67b
	csrr x24, 0x67b	// Read CSR
	li x13, -1
	csrrw x8, 0x67b, x13	// Write all 1s to CSR
	csrrw x8, 0x67b, x0	// Write all 0s to CSR
	csrrw x8, 0x67b, x24	// Restore CSR

// Testing CSR 0x67c
	csrr x15, 0x67c	// Read CSR
	li x21, -1
	csrrw x20, 0x67c, x21	// Write all 1s to CSR
	csrrw x20, 0x67c, x0	// Write all 0s to CSR
	csrrw x20, 0x67c, x15	// Restore CSR

// Testing CSR 0x67d
	csrr x17, 0x67d	// Read CSR
	li x18, -1
	csrrw x27, 0x67d, x18	// Write all 1s to CSR
	csrrw x27, 0x67d, x0	// Write all 0s to CSR
	csrrw x27, 0x67d, x17	// Restore CSR

// Testing CSR 0x67e
	csrr x12, 0x67e	// Read CSR
	li x6, -1
	csrrw x14, 0x67e, x6	// Write all 1s to CSR
	csrrw x14, 0x67e, x0	// Write all 0s to CSR
	csrrw x14, 0x67e, x12	// Restore CSR

// Testing CSR 0x67f
	csrr x21, 0x67f	// Read CSR
	li x26, -1
	csrrw x1, 0x67f, x26	// Write all 1s to CSR
	csrrw x1, 0x67f, x0	// Write all 0s to CSR
	csrrw x1, 0x67f, x21	// Restore CSR

// Testing CSR 0x680
	csrr x19, 0x680	// Read CSR
	li x14, -1
	csrrw x31, 0x680, x14	// Write all 1s to CSR
	csrrw x31, 0x680, x0	// Write all 0s to CSR
	csrrw x31, 0x680, x19	// Restore CSR

// Testing CSR 0x681
	csrr x20, 0x681	// Read CSR
	li x8, -1
	csrrw x10, 0x681, x8	// Write all 1s to CSR
	csrrw x10, 0x681, x0	// Write all 0s to CSR
	csrrw x10, 0x681, x20	// Restore CSR

// Testing CSR 0x682
	csrr x12, 0x682	// Read CSR
	li x17, -1
	csrrw x11, 0x682, x17	// Write all 1s to CSR
	csrrw x11, 0x682, x0	// Write all 0s to CSR
	csrrw x11, 0x682, x12	// Restore CSR

// Testing CSR 0x683
	csrr x16, 0x683	// Read CSR
	li x21, -1
	csrrw x28, 0x683, x21	// Write all 1s to CSR
	csrrw x28, 0x683, x0	// Write all 0s to CSR
	csrrw x28, 0x683, x16	// Restore CSR

// Testing CSR 0x684
	csrr x25, 0x684	// Read CSR
	li x24, -1
	csrrw x15, 0x684, x24	// Write all 1s to CSR
	csrrw x15, 0x684, x0	// Write all 0s to CSR
	csrrw x15, 0x684, x25	// Restore CSR

// Testing CSR 0x685
	csrr x29, 0x685	// Read CSR
	li x24, -1
	csrrw x23, 0x685, x24	// Write all 1s to CSR
	csrrw x23, 0x685, x0	// Write all 0s to CSR
	csrrw x23, 0x685, x29	// Restore CSR

// Testing CSR 0x686
	csrr x29, 0x686	// Read CSR
	li x9, -1
	csrrw x12, 0x686, x9	// Write all 1s to CSR
	csrrw x12, 0x686, x0	// Write all 0s to CSR
	csrrw x12, 0x686, x29	// Restore CSR

// Testing CSR 0x687
	csrr x9, 0x687	// Read CSR
	li x25, -1
	csrrw x6, 0x687, x25	// Write all 1s to CSR
	csrrw x6, 0x687, x0	// Write all 0s to CSR
	csrrw x6, 0x687, x9	// Restore CSR

// Testing CSR 0x688
	csrr x6, 0x688	// Read CSR
	li x29, -1
	csrrw x8, 0x688, x29	// Write all 1s to CSR
	csrrw x8, 0x688, x0	// Write all 0s to CSR
	csrrw x8, 0x688, x6	// Restore CSR

// Testing CSR 0x689
	csrr x29, 0x689	// Read CSR
	li x15, -1
	csrrw x11, 0x689, x15	// Write all 1s to CSR
	csrrw x11, 0x689, x0	// Write all 0s to CSR
	csrrw x11, 0x689, x29	// Restore CSR

// Testing CSR 0x68a
	csrr x21, 0x68a	// Read CSR
	li x1, -1
	csrrw x12, 0x68a, x1	// Write all 1s to CSR
	csrrw x12, 0x68a, x0	// Write all 0s to CSR
	csrrw x12, 0x68a, x21	// Restore CSR

// Testing CSR 0x68b
	csrr x16, 0x68b	// Read CSR
	li x20, -1
	csrrw x26, 0x68b, x20	// Write all 1s to CSR
	csrrw x26, 0x68b, x0	// Write all 0s to CSR
	csrrw x26, 0x68b, x16	// Restore CSR

// Testing CSR 0x68c
	csrr x31, 0x68c	// Read CSR
	li x23, -1
	csrrw x10, 0x68c, x23	// Write all 1s to CSR
	csrrw x10, 0x68c, x0	// Write all 0s to CSR
	csrrw x10, 0x68c, x31	// Restore CSR

// Testing CSR 0x68d
	csrr x22, 0x68d	// Read CSR
	li x8, -1
	csrrw x1, 0x68d, x8	// Write all 1s to CSR
	csrrw x1, 0x68d, x0	// Write all 0s to CSR
	csrrw x1, 0x68d, x22	// Restore CSR

// Testing CSR 0x68e
	csrr x4, 0x68e	// Read CSR
	li x15, -1
	csrrw x24, 0x68e, x15	// Write all 1s to CSR
	csrrw x24, 0x68e, x0	// Write all 0s to CSR
	csrrw x24, 0x68e, x4	// Restore CSR

// Testing CSR 0x68f
	csrr x17, 0x68f	// Read CSR
	li x27, -1
	csrrw x29, 0x68f, x27	// Write all 1s to CSR
	csrrw x29, 0x68f, x0	// Write all 0s to CSR
	csrrw x29, 0x68f, x17	// Restore CSR

// Testing CSR 0x690
	csrr x6, 0x690	// Read CSR
	li x7, -1
	csrrw x27, 0x690, x7	// Write all 1s to CSR
	csrrw x27, 0x690, x0	// Write all 0s to CSR
	csrrw x27, 0x690, x6	// Restore CSR

// Testing CSR 0x691
	csrr x13, 0x691	// Read CSR
	li x31, -1
	csrrw x23, 0x691, x31	// Write all 1s to CSR
	csrrw x23, 0x691, x0	// Write all 0s to CSR
	csrrw x23, 0x691, x13	// Restore CSR

// Testing CSR 0x692
	csrr x20, 0x692	// Read CSR
	li x11, -1
	csrrw x18, 0x692, x11	// Write all 1s to CSR
	csrrw x18, 0x692, x0	// Write all 0s to CSR
	csrrw x18, 0x692, x20	// Restore CSR

// Testing CSR 0x693
	csrr x5, 0x693	// Read CSR
	li x2, -1
	csrrw x16, 0x693, x2	// Write all 1s to CSR
	csrrw x16, 0x693, x0	// Write all 0s to CSR
	csrrw x16, 0x693, x5	// Restore CSR

// Testing CSR 0x694
	csrr x14, 0x694	// Read CSR
	li x29, -1
	csrrw x15, 0x694, x29	// Write all 1s to CSR
	csrrw x15, 0x694, x0	// Write all 0s to CSR
	csrrw x15, 0x694, x14	// Restore CSR

// Testing CSR 0x695
	csrr x26, 0x695	// Read CSR
	li x31, -1
	csrrw x29, 0x695, x31	// Write all 1s to CSR
	csrrw x29, 0x695, x0	// Write all 0s to CSR
	csrrw x29, 0x695, x26	// Restore CSR

// Testing CSR 0x696
	csrr x15, 0x696	// Read CSR
	li x12, -1
	csrrw x1, 0x696, x12	// Write all 1s to CSR
	csrrw x1, 0x696, x0	// Write all 0s to CSR
	csrrw x1, 0x696, x15	// Restore CSR

// Testing CSR 0x697
	csrr x7, 0x697	// Read CSR
	li x19, -1
	csrrw x3, 0x697, x19	// Write all 1s to CSR
	csrrw x3, 0x697, x0	// Write all 0s to CSR
	csrrw x3, 0x697, x7	// Restore CSR

// Testing CSR 0x698
	csrr x16, 0x698	// Read CSR
	li x5, -1
	csrrw x22, 0x698, x5	// Write all 1s to CSR
	csrrw x22, 0x698, x0	// Write all 0s to CSR
	csrrw x22, 0x698, x16	// Restore CSR

// Testing CSR 0x699
	csrr x3, 0x699	// Read CSR
	li x24, -1
	csrrw x17, 0x699, x24	// Write all 1s to CSR
	csrrw x17, 0x699, x0	// Write all 0s to CSR
	csrrw x17, 0x699, x3	// Restore CSR

// Testing CSR 0x69a
	csrr x23, 0x69a	// Read CSR
	li x22, -1
	csrrw x31, 0x69a, x22	// Write all 1s to CSR
	csrrw x31, 0x69a, x0	// Write all 0s to CSR
	csrrw x31, 0x69a, x23	// Restore CSR

// Testing CSR 0x69b
	csrr x18, 0x69b	// Read CSR
	li x13, -1
	csrrw x20, 0x69b, x13	// Write all 1s to CSR
	csrrw x20, 0x69b, x0	// Write all 0s to CSR
	csrrw x20, 0x69b, x18	// Restore CSR

// Testing CSR 0x69c
	csrr x9, 0x69c	// Read CSR
	li x7, -1
	csrrw x3, 0x69c, x7	// Write all 1s to CSR
	csrrw x3, 0x69c, x0	// Write all 0s to CSR
	csrrw x3, 0x69c, x9	// Restore CSR

// Testing CSR 0x69d
	csrr x14, 0x69d	// Read CSR
	li x1, -1
	csrrw x18, 0x69d, x1	// Write all 1s to CSR
	csrrw x18, 0x69d, x0	// Write all 0s to CSR
	csrrw x18, 0x69d, x14	// Restore CSR

// Testing CSR 0x69e
	csrr x16, 0x69e	// Read CSR
	li x23, -1
	csrrw x24, 0x69e, x23	// Write all 1s to CSR
	csrrw x24, 0x69e, x0	// Write all 0s to CSR
	csrrw x24, 0x69e, x16	// Restore CSR

// Testing CSR 0x69f
	csrr x11, 0x69f	// Read CSR
	li x24, -1
	csrrw x30, 0x69f, x24	// Write all 1s to CSR
	csrrw x30, 0x69f, x0	// Write all 0s to CSR
	csrrw x30, 0x69f, x11	// Restore CSR

// Testing CSR 0x6a0
	csrr x1, 0x6a0	// Read CSR
	li x7, -1
	csrrw x20, 0x6a0, x7	// Write all 1s to CSR
	csrrw x20, 0x6a0, x0	// Write all 0s to CSR
	csrrw x20, 0x6a0, x1	// Restore CSR

// Testing CSR 0x6a1
	csrr x10, 0x6a1	// Read CSR
	li x27, -1
	csrrw x25, 0x6a1, x27	// Write all 1s to CSR
	csrrw x25, 0x6a1, x0	// Write all 0s to CSR
	csrrw x25, 0x6a1, x10	// Restore CSR

// Testing CSR 0x6a2
	csrr x28, 0x6a2	// Read CSR
	li x29, -1
	csrrw x25, 0x6a2, x29	// Write all 1s to CSR
	csrrw x25, 0x6a2, x0	// Write all 0s to CSR
	csrrw x25, 0x6a2, x28	// Restore CSR

// Testing CSR 0x6a3
	csrr x26, 0x6a3	// Read CSR
	li x14, -1
	csrrw x15, 0x6a3, x14	// Write all 1s to CSR
	csrrw x15, 0x6a3, x0	// Write all 0s to CSR
	csrrw x15, 0x6a3, x26	// Restore CSR

// Testing CSR 0x6a4
	csrr x23, 0x6a4	// Read CSR
	li x17, -1
	csrrw x10, 0x6a4, x17	// Write all 1s to CSR
	csrrw x10, 0x6a4, x0	// Write all 0s to CSR
	csrrw x10, 0x6a4, x23	// Restore CSR

// Testing CSR 0x6a5
	csrr x3, 0x6a5	// Read CSR
	li x2, -1
	csrrw x12, 0x6a5, x2	// Write all 1s to CSR
	csrrw x12, 0x6a5, x0	// Write all 0s to CSR
	csrrw x12, 0x6a5, x3	// Restore CSR

// Testing CSR 0x6a6
	csrr x13, 0x6a6	// Read CSR
	li x21, -1
	csrrw x14, 0x6a6, x21	// Write all 1s to CSR
	csrrw x14, 0x6a6, x0	// Write all 0s to CSR
	csrrw x14, 0x6a6, x13	// Restore CSR

// Testing CSR 0x6a7
	csrr x13, 0x6a7	// Read CSR
	li x26, -1
	csrrw x21, 0x6a7, x26	// Write all 1s to CSR
	csrrw x21, 0x6a7, x0	// Write all 0s to CSR
	csrrw x21, 0x6a7, x13	// Restore CSR

// Testing CSR 0x6a8
	csrr x23, 0x6a8	// Read CSR
	li x25, -1
	csrrw x21, 0x6a8, x25	// Write all 1s to CSR
	csrrw x21, 0x6a8, x0	// Write all 0s to CSR
	csrrw x21, 0x6a8, x23	// Restore CSR

// Testing CSR 0x6a9
	csrr x25, 0x6a9	// Read CSR
	li x8, -1
	csrrw x10, 0x6a9, x8	// Write all 1s to CSR
	csrrw x10, 0x6a9, x0	// Write all 0s to CSR
	csrrw x10, 0x6a9, x25	// Restore CSR

// Testing CSR 0x6aa
	csrr x16, 0x6aa	// Read CSR
	li x13, -1
	csrrw x18, 0x6aa, x13	// Write all 1s to CSR
	csrrw x18, 0x6aa, x0	// Write all 0s to CSR
	csrrw x18, 0x6aa, x16	// Restore CSR

// Testing CSR 0x6ab
	csrr x1, 0x6ab	// Read CSR
	li x21, -1
	csrrw x14, 0x6ab, x21	// Write all 1s to CSR
	csrrw x14, 0x6ab, x0	// Write all 0s to CSR
	csrrw x14, 0x6ab, x1	// Restore CSR

// Testing CSR 0x6ac
	csrr x21, 0x6ac	// Read CSR
	li x10, -1
	csrrw x22, 0x6ac, x10	// Write all 1s to CSR
	csrrw x22, 0x6ac, x0	// Write all 0s to CSR
	csrrw x22, 0x6ac, x21	// Restore CSR

// Testing CSR 0x6ad
	csrr x16, 0x6ad	// Read CSR
	li x5, -1
	csrrw x13, 0x6ad, x5	// Write all 1s to CSR
	csrrw x13, 0x6ad, x0	// Write all 0s to CSR
	csrrw x13, 0x6ad, x16	// Restore CSR

// Testing CSR 0x6ae
	csrr x22, 0x6ae	// Read CSR
	li x27, -1
	csrrw x14, 0x6ae, x27	// Write all 1s to CSR
	csrrw x14, 0x6ae, x0	// Write all 0s to CSR
	csrrw x14, 0x6ae, x22	// Restore CSR

// Testing CSR 0x6af
	csrr x30, 0x6af	// Read CSR
	li x31, -1
	csrrw x13, 0x6af, x31	// Write all 1s to CSR
	csrrw x13, 0x6af, x0	// Write all 0s to CSR
	csrrw x13, 0x6af, x30	// Restore CSR

// Testing CSR 0x6b0
	csrr x23, 0x6b0	// Read CSR
	li x30, -1
	csrrw x29, 0x6b0, x30	// Write all 1s to CSR
	csrrw x29, 0x6b0, x0	// Write all 0s to CSR
	csrrw x29, 0x6b0, x23	// Restore CSR

// Testing CSR 0x6b1
	csrr x25, 0x6b1	// Read CSR
	li x27, -1
	csrrw x19, 0x6b1, x27	// Write all 1s to CSR
	csrrw x19, 0x6b1, x0	// Write all 0s to CSR
	csrrw x19, 0x6b1, x25	// Restore CSR

// Testing CSR 0x6b2
	csrr x24, 0x6b2	// Read CSR
	li x20, -1
	csrrw x10, 0x6b2, x20	// Write all 1s to CSR
	csrrw x10, 0x6b2, x0	// Write all 0s to CSR
	csrrw x10, 0x6b2, x24	// Restore CSR

// Testing CSR 0x6b3
	csrr x16, 0x6b3	// Read CSR
	li x18, -1
	csrrw x12, 0x6b3, x18	// Write all 1s to CSR
	csrrw x12, 0x6b3, x0	// Write all 0s to CSR
	csrrw x12, 0x6b3, x16	// Restore CSR

// Testing CSR 0x6b4
	csrr x10, 0x6b4	// Read CSR
	li x14, -1
	csrrw x27, 0x6b4, x14	// Write all 1s to CSR
	csrrw x27, 0x6b4, x0	// Write all 0s to CSR
	csrrw x27, 0x6b4, x10	// Restore CSR

// Testing CSR 0x6b5
	csrr x30, 0x6b5	// Read CSR
	li x19, -1
	csrrw x21, 0x6b5, x19	// Write all 1s to CSR
	csrrw x21, 0x6b5, x0	// Write all 0s to CSR
	csrrw x21, 0x6b5, x30	// Restore CSR

// Testing CSR 0x6b6
	csrr x25, 0x6b6	// Read CSR
	li x6, -1
	csrrw x12, 0x6b6, x6	// Write all 1s to CSR
	csrrw x12, 0x6b6, x0	// Write all 0s to CSR
	csrrw x12, 0x6b6, x25	// Restore CSR

// Testing CSR 0x6b7
	csrr x2, 0x6b7	// Read CSR
	li x14, -1
	csrrw x15, 0x6b7, x14	// Write all 1s to CSR
	csrrw x15, 0x6b7, x0	// Write all 0s to CSR
	csrrw x15, 0x6b7, x2	// Restore CSR

// Testing CSR 0x6b8
	csrr x31, 0x6b8	// Read CSR
	li x15, -1
	csrrw x10, 0x6b8, x15	// Write all 1s to CSR
	csrrw x10, 0x6b8, x0	// Write all 0s to CSR
	csrrw x10, 0x6b8, x31	// Restore CSR

// Testing CSR 0x6b9
	csrr x3, 0x6b9	// Read CSR
	li x22, -1
	csrrw x8, 0x6b9, x22	// Write all 1s to CSR
	csrrw x8, 0x6b9, x0	// Write all 0s to CSR
	csrrw x8, 0x6b9, x3	// Restore CSR

// Testing CSR 0x6ba
	csrr x11, 0x6ba	// Read CSR
	li x8, -1
	csrrw x13, 0x6ba, x8	// Write all 1s to CSR
	csrrw x13, 0x6ba, x0	// Write all 0s to CSR
	csrrw x13, 0x6ba, x11	// Restore CSR

// Testing CSR 0x6bb
	csrr x1, 0x6bb	// Read CSR
	li x20, -1
	csrrw x11, 0x6bb, x20	// Write all 1s to CSR
	csrrw x11, 0x6bb, x0	// Write all 0s to CSR
	csrrw x11, 0x6bb, x1	// Restore CSR

// Testing CSR 0x6bc
	csrr x5, 0x6bc	// Read CSR
	li x6, -1
	csrrw x27, 0x6bc, x6	// Write all 1s to CSR
	csrrw x27, 0x6bc, x0	// Write all 0s to CSR
	csrrw x27, 0x6bc, x5	// Restore CSR

// Testing CSR 0x6bd
	csrr x29, 0x6bd	// Read CSR
	li x16, -1
	csrrw x3, 0x6bd, x16	// Write all 1s to CSR
	csrrw x3, 0x6bd, x0	// Write all 0s to CSR
	csrrw x3, 0x6bd, x29	// Restore CSR

// Testing CSR 0x6be
	csrr x25, 0x6be	// Read CSR
	li x4, -1
	csrrw x6, 0x6be, x4	// Write all 1s to CSR
	csrrw x6, 0x6be, x0	// Write all 0s to CSR
	csrrw x6, 0x6be, x25	// Restore CSR

// Testing CSR 0x6bf
	csrr x31, 0x6bf	// Read CSR
	li x20, -1
	csrrw x2, 0x6bf, x20	// Write all 1s to CSR
	csrrw x2, 0x6bf, x0	// Write all 0s to CSR
	csrrw x2, 0x6bf, x31	// Restore CSR

// Testing CSR 0x6c0
	csrr x8, 0x6c0	// Read CSR
	li x21, -1
	csrrw x6, 0x6c0, x21	// Write all 1s to CSR
	csrrw x6, 0x6c0, x0	// Write all 0s to CSR
	csrrw x6, 0x6c0, x8	// Restore CSR

// Testing CSR 0x6c1
	csrr x1, 0x6c1	// Read CSR
	li x21, -1
	csrrw x17, 0x6c1, x21	// Write all 1s to CSR
	csrrw x17, 0x6c1, x0	// Write all 0s to CSR
	csrrw x17, 0x6c1, x1	// Restore CSR

// Testing CSR 0x6c2
	csrr x30, 0x6c2	// Read CSR
	li x14, -1
	csrrw x22, 0x6c2, x14	// Write all 1s to CSR
	csrrw x22, 0x6c2, x0	// Write all 0s to CSR
	csrrw x22, 0x6c2, x30	// Restore CSR

// Testing CSR 0x6c3
	csrr x22, 0x6c3	// Read CSR
	li x14, -1
	csrrw x6, 0x6c3, x14	// Write all 1s to CSR
	csrrw x6, 0x6c3, x0	// Write all 0s to CSR
	csrrw x6, 0x6c3, x22	// Restore CSR

// Testing CSR 0x6c4
	csrr x10, 0x6c4	// Read CSR
	li x13, -1
	csrrw x15, 0x6c4, x13	// Write all 1s to CSR
	csrrw x15, 0x6c4, x0	// Write all 0s to CSR
	csrrw x15, 0x6c4, x10	// Restore CSR

// Testing CSR 0x6c5
	csrr x10, 0x6c5	// Read CSR
	li x31, -1
	csrrw x18, 0x6c5, x31	// Write all 1s to CSR
	csrrw x18, 0x6c5, x0	// Write all 0s to CSR
	csrrw x18, 0x6c5, x10	// Restore CSR

// Testing CSR 0x6c6
	csrr x2, 0x6c6	// Read CSR
	li x6, -1
	csrrw x16, 0x6c6, x6	// Write all 1s to CSR
	csrrw x16, 0x6c6, x0	// Write all 0s to CSR
	csrrw x16, 0x6c6, x2	// Restore CSR

// Testing CSR 0x6c7
	csrr x6, 0x6c7	// Read CSR
	li x29, -1
	csrrw x4, 0x6c7, x29	// Write all 1s to CSR
	csrrw x4, 0x6c7, x0	// Write all 0s to CSR
	csrrw x4, 0x6c7, x6	// Restore CSR

// Testing CSR 0x6c8
	csrr x22, 0x6c8	// Read CSR
	li x4, -1
	csrrw x16, 0x6c8, x4	// Write all 1s to CSR
	csrrw x16, 0x6c8, x0	// Write all 0s to CSR
	csrrw x16, 0x6c8, x22	// Restore CSR

// Testing CSR 0x6c9
	csrr x27, 0x6c9	// Read CSR
	li x24, -1
	csrrw x10, 0x6c9, x24	// Write all 1s to CSR
	csrrw x10, 0x6c9, x0	// Write all 0s to CSR
	csrrw x10, 0x6c9, x27	// Restore CSR

// Testing CSR 0x6ca
	csrr x24, 0x6ca	// Read CSR
	li x26, -1
	csrrw x10, 0x6ca, x26	// Write all 1s to CSR
	csrrw x10, 0x6ca, x0	// Write all 0s to CSR
	csrrw x10, 0x6ca, x24	// Restore CSR

// Testing CSR 0x6cb
	csrr x10, 0x6cb	// Read CSR
	li x13, -1
	csrrw x2, 0x6cb, x13	// Write all 1s to CSR
	csrrw x2, 0x6cb, x0	// Write all 0s to CSR
	csrrw x2, 0x6cb, x10	// Restore CSR

// Testing CSR 0x6cc
	csrr x19, 0x6cc	// Read CSR
	li x27, -1
	csrrw x9, 0x6cc, x27	// Write all 1s to CSR
	csrrw x9, 0x6cc, x0	// Write all 0s to CSR
	csrrw x9, 0x6cc, x19	// Restore CSR

// Testing CSR 0x6cd
	csrr x11, 0x6cd	// Read CSR
	li x25, -1
	csrrw x15, 0x6cd, x25	// Write all 1s to CSR
	csrrw x15, 0x6cd, x0	// Write all 0s to CSR
	csrrw x15, 0x6cd, x11	// Restore CSR

// Testing CSR 0x6ce
	csrr x3, 0x6ce	// Read CSR
	li x2, -1
	csrrw x25, 0x6ce, x2	// Write all 1s to CSR
	csrrw x25, 0x6ce, x0	// Write all 0s to CSR
	csrrw x25, 0x6ce, x3	// Restore CSR

// Testing CSR 0x6cf
	csrr x21, 0x6cf	// Read CSR
	li x23, -1
	csrrw x27, 0x6cf, x23	// Write all 1s to CSR
	csrrw x27, 0x6cf, x0	// Write all 0s to CSR
	csrrw x27, 0x6cf, x21	// Restore CSR

// Testing CSR 0x6d0
	csrr x10, 0x6d0	// Read CSR
	li x8, -1
	csrrw x30, 0x6d0, x8	// Write all 1s to CSR
	csrrw x30, 0x6d0, x0	// Write all 0s to CSR
	csrrw x30, 0x6d0, x10	// Restore CSR

// Testing CSR 0x6d1
	csrr x30, 0x6d1	// Read CSR
	li x15, -1
	csrrw x21, 0x6d1, x15	// Write all 1s to CSR
	csrrw x21, 0x6d1, x0	// Write all 0s to CSR
	csrrw x21, 0x6d1, x30	// Restore CSR

// Testing CSR 0x6d2
	csrr x10, 0x6d2	// Read CSR
	li x18, -1
	csrrw x30, 0x6d2, x18	// Write all 1s to CSR
	csrrw x30, 0x6d2, x0	// Write all 0s to CSR
	csrrw x30, 0x6d2, x10	// Restore CSR

// Testing CSR 0x6d3
	csrr x7, 0x6d3	// Read CSR
	li x13, -1
	csrrw x29, 0x6d3, x13	// Write all 1s to CSR
	csrrw x29, 0x6d3, x0	// Write all 0s to CSR
	csrrw x29, 0x6d3, x7	// Restore CSR

// Testing CSR 0x6d4
	csrr x3, 0x6d4	// Read CSR
	li x14, -1
	csrrw x2, 0x6d4, x14	// Write all 1s to CSR
	csrrw x2, 0x6d4, x0	// Write all 0s to CSR
	csrrw x2, 0x6d4, x3	// Restore CSR

// Testing CSR 0x6d5
	csrr x2, 0x6d5	// Read CSR
	li x26, -1
	csrrw x30, 0x6d5, x26	// Write all 1s to CSR
	csrrw x30, 0x6d5, x0	// Write all 0s to CSR
	csrrw x30, 0x6d5, x2	// Restore CSR

// Testing CSR 0x6d6
	csrr x3, 0x6d6	// Read CSR
	li x12, -1
	csrrw x1, 0x6d6, x12	// Write all 1s to CSR
	csrrw x1, 0x6d6, x0	// Write all 0s to CSR
	csrrw x1, 0x6d6, x3	// Restore CSR

// Testing CSR 0x6d7
	csrr x10, 0x6d7	// Read CSR
	li x1, -1
	csrrw x2, 0x6d7, x1	// Write all 1s to CSR
	csrrw x2, 0x6d7, x0	// Write all 0s to CSR
	csrrw x2, 0x6d7, x10	// Restore CSR

// Testing CSR 0x6d8
	csrr x2, 0x6d8	// Read CSR
	li x20, -1
	csrrw x5, 0x6d8, x20	// Write all 1s to CSR
	csrrw x5, 0x6d8, x0	// Write all 0s to CSR
	csrrw x5, 0x6d8, x2	// Restore CSR

// Testing CSR 0x6d9
	csrr x28, 0x6d9	// Read CSR
	li x20, -1
	csrrw x6, 0x6d9, x20	// Write all 1s to CSR
	csrrw x6, 0x6d9, x0	// Write all 0s to CSR
	csrrw x6, 0x6d9, x28	// Restore CSR

// Testing CSR 0x6da
	csrr x16, 0x6da	// Read CSR
	li x21, -1
	csrrw x3, 0x6da, x21	// Write all 1s to CSR
	csrrw x3, 0x6da, x0	// Write all 0s to CSR
	csrrw x3, 0x6da, x16	// Restore CSR

// Testing CSR 0x6db
	csrr x19, 0x6db	// Read CSR
	li x5, -1
	csrrw x1, 0x6db, x5	// Write all 1s to CSR
	csrrw x1, 0x6db, x0	// Write all 0s to CSR
	csrrw x1, 0x6db, x19	// Restore CSR

// Testing CSR 0x6dc
	csrr x31, 0x6dc	// Read CSR
	li x24, -1
	csrrw x18, 0x6dc, x24	// Write all 1s to CSR
	csrrw x18, 0x6dc, x0	// Write all 0s to CSR
	csrrw x18, 0x6dc, x31	// Restore CSR

// Testing CSR 0x6dd
	csrr x5, 0x6dd	// Read CSR
	li x26, -1
	csrrw x4, 0x6dd, x26	// Write all 1s to CSR
	csrrw x4, 0x6dd, x0	// Write all 0s to CSR
	csrrw x4, 0x6dd, x5	// Restore CSR

// Testing CSR 0x6de
	csrr x3, 0x6de	// Read CSR
	li x23, -1
	csrrw x20, 0x6de, x23	// Write all 1s to CSR
	csrrw x20, 0x6de, x0	// Write all 0s to CSR
	csrrw x20, 0x6de, x3	// Restore CSR

// Testing CSR 0x6df
	csrr x25, 0x6df	// Read CSR
	li x22, -1
	csrrw x4, 0x6df, x22	// Write all 1s to CSR
	csrrw x4, 0x6df, x0	// Write all 0s to CSR
	csrrw x4, 0x6df, x25	// Restore CSR

// Testing CSR 0x6e0
	csrr x7, 0x6e0	// Read CSR
	li x27, -1
	csrrw x4, 0x6e0, x27	// Write all 1s to CSR
	csrrw x4, 0x6e0, x0	// Write all 0s to CSR
	csrrw x4, 0x6e0, x7	// Restore CSR

// Testing CSR 0x6e1
	csrr x30, 0x6e1	// Read CSR
	li x16, -1
	csrrw x14, 0x6e1, x16	// Write all 1s to CSR
	csrrw x14, 0x6e1, x0	// Write all 0s to CSR
	csrrw x14, 0x6e1, x30	// Restore CSR

// Testing CSR 0x6e2
	csrr x3, 0x6e2	// Read CSR
	li x4, -1
	csrrw x16, 0x6e2, x4	// Write all 1s to CSR
	csrrw x16, 0x6e2, x0	// Write all 0s to CSR
	csrrw x16, 0x6e2, x3	// Restore CSR

// Testing CSR 0x6e3
	csrr x23, 0x6e3	// Read CSR
	li x28, -1
	csrrw x15, 0x6e3, x28	// Write all 1s to CSR
	csrrw x15, 0x6e3, x0	// Write all 0s to CSR
	csrrw x15, 0x6e3, x23	// Restore CSR

// Testing CSR 0x6e4
	csrr x17, 0x6e4	// Read CSR
	li x24, -1
	csrrw x29, 0x6e4, x24	// Write all 1s to CSR
	csrrw x29, 0x6e4, x0	// Write all 0s to CSR
	csrrw x29, 0x6e4, x17	// Restore CSR

// Testing CSR 0x6e5
	csrr x6, 0x6e5	// Read CSR
	li x18, -1
	csrrw x4, 0x6e5, x18	// Write all 1s to CSR
	csrrw x4, 0x6e5, x0	// Write all 0s to CSR
	csrrw x4, 0x6e5, x6	// Restore CSR

// Testing CSR 0x6e6
	csrr x5, 0x6e6	// Read CSR
	li x28, -1
	csrrw x12, 0x6e6, x28	// Write all 1s to CSR
	csrrw x12, 0x6e6, x0	// Write all 0s to CSR
	csrrw x12, 0x6e6, x5	// Restore CSR

// Testing CSR 0x6e7
	csrr x24, 0x6e7	// Read CSR
	li x28, -1
	csrrw x14, 0x6e7, x28	// Write all 1s to CSR
	csrrw x14, 0x6e7, x0	// Write all 0s to CSR
	csrrw x14, 0x6e7, x24	// Restore CSR

// Testing CSR 0x6e8
	csrr x17, 0x6e8	// Read CSR
	li x5, -1
	csrrw x3, 0x6e8, x5	// Write all 1s to CSR
	csrrw x3, 0x6e8, x0	// Write all 0s to CSR
	csrrw x3, 0x6e8, x17	// Restore CSR

// Testing CSR 0x6e9
	csrr x21, 0x6e9	// Read CSR
	li x17, -1
	csrrw x31, 0x6e9, x17	// Write all 1s to CSR
	csrrw x31, 0x6e9, x0	// Write all 0s to CSR
	csrrw x31, 0x6e9, x21	// Restore CSR

// Testing CSR 0x6ea
	csrr x2, 0x6ea	// Read CSR
	li x24, -1
	csrrw x29, 0x6ea, x24	// Write all 1s to CSR
	csrrw x29, 0x6ea, x0	// Write all 0s to CSR
	csrrw x29, 0x6ea, x2	// Restore CSR

// Testing CSR 0x6eb
	csrr x18, 0x6eb	// Read CSR
	li x8, -1
	csrrw x4, 0x6eb, x8	// Write all 1s to CSR
	csrrw x4, 0x6eb, x0	// Write all 0s to CSR
	csrrw x4, 0x6eb, x18	// Restore CSR

// Testing CSR 0x6ec
	csrr x24, 0x6ec	// Read CSR
	li x26, -1
	csrrw x13, 0x6ec, x26	// Write all 1s to CSR
	csrrw x13, 0x6ec, x0	// Write all 0s to CSR
	csrrw x13, 0x6ec, x24	// Restore CSR

// Testing CSR 0x6ed
	csrr x29, 0x6ed	// Read CSR
	li x12, -1
	csrrw x17, 0x6ed, x12	// Write all 1s to CSR
	csrrw x17, 0x6ed, x0	// Write all 0s to CSR
	csrrw x17, 0x6ed, x29	// Restore CSR

// Testing CSR 0x6ee
	csrr x30, 0x6ee	// Read CSR
	li x11, -1
	csrrw x18, 0x6ee, x11	// Write all 1s to CSR
	csrrw x18, 0x6ee, x0	// Write all 0s to CSR
	csrrw x18, 0x6ee, x30	// Restore CSR

// Testing CSR 0x6ef
	csrr x23, 0x6ef	// Read CSR
	li x19, -1
	csrrw x18, 0x6ef, x19	// Write all 1s to CSR
	csrrw x18, 0x6ef, x0	// Write all 0s to CSR
	csrrw x18, 0x6ef, x23	// Restore CSR

// Testing CSR 0x6f0
	csrr x13, 0x6f0	// Read CSR
	li x30, -1
	csrrw x10, 0x6f0, x30	// Write all 1s to CSR
	csrrw x10, 0x6f0, x0	// Write all 0s to CSR
	csrrw x10, 0x6f0, x13	// Restore CSR

// Testing CSR 0x6f1
	csrr x8, 0x6f1	// Read CSR
	li x19, -1
	csrrw x23, 0x6f1, x19	// Write all 1s to CSR
	csrrw x23, 0x6f1, x0	// Write all 0s to CSR
	csrrw x23, 0x6f1, x8	// Restore CSR

// Testing CSR 0x6f2
	csrr x3, 0x6f2	// Read CSR
	li x5, -1
	csrrw x20, 0x6f2, x5	// Write all 1s to CSR
	csrrw x20, 0x6f2, x0	// Write all 0s to CSR
	csrrw x20, 0x6f2, x3	// Restore CSR

// Testing CSR 0x6f3
	csrr x13, 0x6f3	// Read CSR
	li x28, -1
	csrrw x25, 0x6f3, x28	// Write all 1s to CSR
	csrrw x25, 0x6f3, x0	// Write all 0s to CSR
	csrrw x25, 0x6f3, x13	// Restore CSR

// Testing CSR 0x6f4
	csrr x31, 0x6f4	// Read CSR
	li x12, -1
	csrrw x24, 0x6f4, x12	// Write all 1s to CSR
	csrrw x24, 0x6f4, x0	// Write all 0s to CSR
	csrrw x24, 0x6f4, x31	// Restore CSR

// Testing CSR 0x6f5
	csrr x10, 0x6f5	// Read CSR
	li x31, -1
	csrrw x12, 0x6f5, x31	// Write all 1s to CSR
	csrrw x12, 0x6f5, x0	// Write all 0s to CSR
	csrrw x12, 0x6f5, x10	// Restore CSR

// Testing CSR 0x6f6
	csrr x17, 0x6f6	// Read CSR
	li x12, -1
	csrrw x1, 0x6f6, x12	// Write all 1s to CSR
	csrrw x1, 0x6f6, x0	// Write all 0s to CSR
	csrrw x1, 0x6f6, x17	// Restore CSR

// Testing CSR 0x6f7
	csrr x1, 0x6f7	// Read CSR
	li x9, -1
	csrrw x5, 0x6f7, x9	// Write all 1s to CSR
	csrrw x5, 0x6f7, x0	// Write all 0s to CSR
	csrrw x5, 0x6f7, x1	// Restore CSR

// Testing CSR 0x6f8
	csrr x24, 0x6f8	// Read CSR
	li x22, -1
	csrrw x23, 0x6f8, x22	// Write all 1s to CSR
	csrrw x23, 0x6f8, x0	// Write all 0s to CSR
	csrrw x23, 0x6f8, x24	// Restore CSR

// Testing CSR 0x6f9
	csrr x7, 0x6f9	// Read CSR
	li x21, -1
	csrrw x29, 0x6f9, x21	// Write all 1s to CSR
	csrrw x29, 0x6f9, x0	// Write all 0s to CSR
	csrrw x29, 0x6f9, x7	// Restore CSR

// Testing CSR 0x6fa
	csrr x5, 0x6fa	// Read CSR
	li x6, -1
	csrrw x4, 0x6fa, x6	// Write all 1s to CSR
	csrrw x4, 0x6fa, x0	// Write all 0s to CSR
	csrrw x4, 0x6fa, x5	// Restore CSR

// Testing CSR 0x6fb
	csrr x27, 0x6fb	// Read CSR
	li x16, -1
	csrrw x24, 0x6fb, x16	// Write all 1s to CSR
	csrrw x24, 0x6fb, x0	// Write all 0s to CSR
	csrrw x24, 0x6fb, x27	// Restore CSR

// Testing CSR 0x6fc
	csrr x16, 0x6fc	// Read CSR
	li x22, -1
	csrrw x5, 0x6fc, x22	// Write all 1s to CSR
	csrrw x5, 0x6fc, x0	// Write all 0s to CSR
	csrrw x5, 0x6fc, x16	// Restore CSR

// Testing CSR 0x6fd
	csrr x9, 0x6fd	// Read CSR
	li x31, -1
	csrrw x27, 0x6fd, x31	// Write all 1s to CSR
	csrrw x27, 0x6fd, x0	// Write all 0s to CSR
	csrrw x27, 0x6fd, x9	// Restore CSR

// Testing CSR 0x6fe
	csrr x5, 0x6fe	// Read CSR
	li x28, -1
	csrrw x2, 0x6fe, x28	// Write all 1s to CSR
	csrrw x2, 0x6fe, x0	// Write all 0s to CSR
	csrrw x2, 0x6fe, x5	// Restore CSR

// Testing CSR 0x6ff
	csrr x6, 0x6ff	// Read CSR
	li x30, -1
	csrrw x22, 0x6ff, x30	// Write all 1s to CSR
	csrrw x22, 0x6ff, x0	// Write all 0s to CSR
	csrrw x22, 0x6ff, x6	// Restore CSR

// Testing CSR 0x700
	csrr x12, 0x700	// Read CSR
	li x27, -1
	csrrw x24, 0x700, x27	// Write all 1s to CSR
	csrrw x24, 0x700, x0	// Write all 0s to CSR
	csrrw x24, 0x700, x12	// Restore CSR

// Testing CSR 0x701
	csrr x11, 0x701	// Read CSR
	li x7, -1
	csrrw x21, 0x701, x7	// Write all 1s to CSR
	csrrw x21, 0x701, x0	// Write all 0s to CSR
	csrrw x21, 0x701, x11	// Restore CSR

// Testing CSR 0x702
	csrr x4, 0x702	// Read CSR
	li x17, -1
	csrrw x26, 0x702, x17	// Write all 1s to CSR
	csrrw x26, 0x702, x0	// Write all 0s to CSR
	csrrw x26, 0x702, x4	// Restore CSR

// Testing CSR 0x703
	csrr x16, 0x703	// Read CSR
	li x5, -1
	csrrw x21, 0x703, x5	// Write all 1s to CSR
	csrrw x21, 0x703, x0	// Write all 0s to CSR
	csrrw x21, 0x703, x16	// Restore CSR

// Testing CSR 0x704
	csrr x9, 0x704	// Read CSR
	li x11, -1
	csrrw x7, 0x704, x11	// Write all 1s to CSR
	csrrw x7, 0x704, x0	// Write all 0s to CSR
	csrrw x7, 0x704, x9	// Restore CSR

// Testing CSR 0x705
	csrr x21, 0x705	// Read CSR
	li x4, -1
	csrrw x20, 0x705, x4	// Write all 1s to CSR
	csrrw x20, 0x705, x0	// Write all 0s to CSR
	csrrw x20, 0x705, x21	// Restore CSR

// Testing CSR 0x706
	csrr x22, 0x706	// Read CSR
	li x23, -1
	csrrw x8, 0x706, x23	// Write all 1s to CSR
	csrrw x8, 0x706, x0	// Write all 0s to CSR
	csrrw x8, 0x706, x22	// Restore CSR

// Testing CSR 0x707
	csrr x12, 0x707	// Read CSR
	li x26, -1
	csrrw x13, 0x707, x26	// Write all 1s to CSR
	csrrw x13, 0x707, x0	// Write all 0s to CSR
	csrrw x13, 0x707, x12	// Restore CSR

// Testing CSR 0x708
	csrr x25, 0x708	// Read CSR
	li x4, -1
	csrrw x31, 0x708, x4	// Write all 1s to CSR
	csrrw x31, 0x708, x0	// Write all 0s to CSR
	csrrw x31, 0x708, x25	// Restore CSR

// Testing CSR 0x709
	csrr x9, 0x709	// Read CSR
	li x25, -1
	csrrw x30, 0x709, x25	// Write all 1s to CSR
	csrrw x30, 0x709, x0	// Write all 0s to CSR
	csrrw x30, 0x709, x9	// Restore CSR

// Testing CSR 0x70a
	csrr x13, 0x70a	// Read CSR
	li x18, -1
	csrrw x12, 0x70a, x18	// Write all 1s to CSR
	csrrw x12, 0x70a, x0	// Write all 0s to CSR
	csrrw x12, 0x70a, x13	// Restore CSR

// Testing CSR 0x70b
	csrr x2, 0x70b	// Read CSR
	li x21, -1
	csrrw x11, 0x70b, x21	// Write all 1s to CSR
	csrrw x11, 0x70b, x0	// Write all 0s to CSR
	csrrw x11, 0x70b, x2	// Restore CSR

// Testing CSR 0x70c
	csrr x8, 0x70c	// Read CSR
	li x13, -1
	csrrw x2, 0x70c, x13	// Write all 1s to CSR
	csrrw x2, 0x70c, x0	// Write all 0s to CSR
	csrrw x2, 0x70c, x8	// Restore CSR

// Testing CSR 0x70d
	csrr x31, 0x70d	// Read CSR
	li x25, -1
	csrrw x14, 0x70d, x25	// Write all 1s to CSR
	csrrw x14, 0x70d, x0	// Write all 0s to CSR
	csrrw x14, 0x70d, x31	// Restore CSR

// Testing CSR 0x70e
	csrr x18, 0x70e	// Read CSR
	li x9, -1
	csrrw x25, 0x70e, x9	// Write all 1s to CSR
	csrrw x25, 0x70e, x0	// Write all 0s to CSR
	csrrw x25, 0x70e, x18	// Restore CSR

// Testing CSR 0x70f
	csrr x26, 0x70f	// Read CSR
	li x6, -1
	csrrw x30, 0x70f, x6	// Write all 1s to CSR
	csrrw x30, 0x70f, x0	// Write all 0s to CSR
	csrrw x30, 0x70f, x26	// Restore CSR

// Testing CSR 0x710
	csrr x9, 0x710	// Read CSR
	li x2, -1
	csrrw x24, 0x710, x2	// Write all 1s to CSR
	csrrw x24, 0x710, x0	// Write all 0s to CSR
	csrrw x24, 0x710, x9	// Restore CSR

// Testing CSR 0x711
	csrr x9, 0x711	// Read CSR
	li x24, -1
	csrrw x3, 0x711, x24	// Write all 1s to CSR
	csrrw x3, 0x711, x0	// Write all 0s to CSR
	csrrw x3, 0x711, x9	// Restore CSR

// Testing CSR 0x712
	csrr x11, 0x712	// Read CSR
	li x21, -1
	csrrw x14, 0x712, x21	// Write all 1s to CSR
	csrrw x14, 0x712, x0	// Write all 0s to CSR
	csrrw x14, 0x712, x11	// Restore CSR

// Testing CSR 0x713
	csrr x1, 0x713	// Read CSR
	li x25, -1
	csrrw x22, 0x713, x25	// Write all 1s to CSR
	csrrw x22, 0x713, x0	// Write all 0s to CSR
	csrrw x22, 0x713, x1	// Restore CSR

// Testing CSR 0x714
	csrr x9, 0x714	// Read CSR
	li x8, -1
	csrrw x21, 0x714, x8	// Write all 1s to CSR
	csrrw x21, 0x714, x0	// Write all 0s to CSR
	csrrw x21, 0x714, x9	// Restore CSR

// Testing CSR 0x715
	csrr x30, 0x715	// Read CSR
	li x27, -1
	csrrw x28, 0x715, x27	// Write all 1s to CSR
	csrrw x28, 0x715, x0	// Write all 0s to CSR
	csrrw x28, 0x715, x30	// Restore CSR

// Testing CSR 0x716
	csrr x25, 0x716	// Read CSR
	li x23, -1
	csrrw x6, 0x716, x23	// Write all 1s to CSR
	csrrw x6, 0x716, x0	// Write all 0s to CSR
	csrrw x6, 0x716, x25	// Restore CSR

// Testing CSR 0x717
	csrr x9, 0x717	// Read CSR
	li x12, -1
	csrrw x30, 0x717, x12	// Write all 1s to CSR
	csrrw x30, 0x717, x0	// Write all 0s to CSR
	csrrw x30, 0x717, x9	// Restore CSR

// Testing CSR 0x718
	csrr x31, 0x718	// Read CSR
	li x27, -1
	csrrw x17, 0x718, x27	// Write all 1s to CSR
	csrrw x17, 0x718, x0	// Write all 0s to CSR
	csrrw x17, 0x718, x31	// Restore CSR

// Testing CSR 0x719
	csrr x21, 0x719	// Read CSR
	li x4, -1
	csrrw x6, 0x719, x4	// Write all 1s to CSR
	csrrw x6, 0x719, x0	// Write all 0s to CSR
	csrrw x6, 0x719, x21	// Restore CSR

// Testing CSR 0x71a
	csrr x16, 0x71a	// Read CSR
	li x7, -1
	csrrw x28, 0x71a, x7	// Write all 1s to CSR
	csrrw x28, 0x71a, x0	// Write all 0s to CSR
	csrrw x28, 0x71a, x16	// Restore CSR

// Testing CSR 0x71b
	csrr x19, 0x71b	// Read CSR
	li x20, -1
	csrrw x3, 0x71b, x20	// Write all 1s to CSR
	csrrw x3, 0x71b, x0	// Write all 0s to CSR
	csrrw x3, 0x71b, x19	// Restore CSR

// Testing CSR 0x71c
	csrr x14, 0x71c	// Read CSR
	li x10, -1
	csrrw x27, 0x71c, x10	// Write all 1s to CSR
	csrrw x27, 0x71c, x0	// Write all 0s to CSR
	csrrw x27, 0x71c, x14	// Restore CSR

// Testing CSR 0x71d
	csrr x23, 0x71d	// Read CSR
	li x22, -1
	csrrw x2, 0x71d, x22	// Write all 1s to CSR
	csrrw x2, 0x71d, x0	// Write all 0s to CSR
	csrrw x2, 0x71d, x23	// Restore CSR

// Testing CSR 0x71e
	csrr x9, 0x71e	// Read CSR
	li x1, -1
	csrrw x26, 0x71e, x1	// Write all 1s to CSR
	csrrw x26, 0x71e, x0	// Write all 0s to CSR
	csrrw x26, 0x71e, x9	// Restore CSR

// Testing CSR 0x71f
	csrr x20, 0x71f	// Read CSR
	li x6, -1
	csrrw x11, 0x71f, x6	// Write all 1s to CSR
	csrrw x11, 0x71f, x0	// Write all 0s to CSR
	csrrw x11, 0x71f, x20	// Restore CSR

// Testing CSR 0x720
	csrr x6, 0x720	// Read CSR
	li x29, -1
	csrrw x13, 0x720, x29	// Write all 1s to CSR
	csrrw x13, 0x720, x0	// Write all 0s to CSR
	csrrw x13, 0x720, x6	// Restore CSR

// Testing CSR 0x721
	csrr x8, 0x721	// Read CSR
	li x19, -1
	csrrw x18, 0x721, x19	// Write all 1s to CSR
	csrrw x18, 0x721, x0	// Write all 0s to CSR
	csrrw x18, 0x721, x8	// Restore CSR

// Testing CSR 0x722
	csrr x27, 0x722	// Read CSR
	li x7, -1
	csrrw x30, 0x722, x7	// Write all 1s to CSR
	csrrw x30, 0x722, x0	// Write all 0s to CSR
	csrrw x30, 0x722, x27	// Restore CSR

// Testing CSR 0x723
	csrr x31, 0x723	// Read CSR
	li x2, -1
	csrrw x21, 0x723, x2	// Write all 1s to CSR
	csrrw x21, 0x723, x0	// Write all 0s to CSR
	csrrw x21, 0x723, x31	// Restore CSR

// Testing CSR 0x724
	csrr x18, 0x724	// Read CSR
	li x25, -1
	csrrw x28, 0x724, x25	// Write all 1s to CSR
	csrrw x28, 0x724, x0	// Write all 0s to CSR
	csrrw x28, 0x724, x18	// Restore CSR

// Testing CSR 0x725
	csrr x29, 0x725	// Read CSR
	li x7, -1
	csrrw x15, 0x725, x7	// Write all 1s to CSR
	csrrw x15, 0x725, x0	// Write all 0s to CSR
	csrrw x15, 0x725, x29	// Restore CSR

// Testing CSR 0x726
	csrr x29, 0x726	// Read CSR
	li x18, -1
	csrrw x22, 0x726, x18	// Write all 1s to CSR
	csrrw x22, 0x726, x0	// Write all 0s to CSR
	csrrw x22, 0x726, x29	// Restore CSR

// Testing CSR 0x727
	csrr x15, 0x727	// Read CSR
	li x19, -1
	csrrw x20, 0x727, x19	// Write all 1s to CSR
	csrrw x20, 0x727, x0	// Write all 0s to CSR
	csrrw x20, 0x727, x15	// Restore CSR

// Testing CSR 0x728
	csrr x31, 0x728	// Read CSR
	li x11, -1
	csrrw x27, 0x728, x11	// Write all 1s to CSR
	csrrw x27, 0x728, x0	// Write all 0s to CSR
	csrrw x27, 0x728, x31	// Restore CSR

// Testing CSR 0x729
	csrr x12, 0x729	// Read CSR
	li x25, -1
	csrrw x4, 0x729, x25	// Write all 1s to CSR
	csrrw x4, 0x729, x0	// Write all 0s to CSR
	csrrw x4, 0x729, x12	// Restore CSR

// Testing CSR 0x72a
	csrr x26, 0x72a	// Read CSR
	li x1, -1
	csrrw x14, 0x72a, x1	// Write all 1s to CSR
	csrrw x14, 0x72a, x0	// Write all 0s to CSR
	csrrw x14, 0x72a, x26	// Restore CSR

// Testing CSR 0x72b
	csrr x12, 0x72b	// Read CSR
	li x6, -1
	csrrw x16, 0x72b, x6	// Write all 1s to CSR
	csrrw x16, 0x72b, x0	// Write all 0s to CSR
	csrrw x16, 0x72b, x12	// Restore CSR

// Testing CSR 0x72c
	csrr x28, 0x72c	// Read CSR
	li x29, -1
	csrrw x8, 0x72c, x29	// Write all 1s to CSR
	csrrw x8, 0x72c, x0	// Write all 0s to CSR
	csrrw x8, 0x72c, x28	// Restore CSR

// Testing CSR 0x72d
	csrr x24, 0x72d	// Read CSR
	li x22, -1
	csrrw x28, 0x72d, x22	// Write all 1s to CSR
	csrrw x28, 0x72d, x0	// Write all 0s to CSR
	csrrw x28, 0x72d, x24	// Restore CSR

// Testing CSR 0x72e
	csrr x21, 0x72e	// Read CSR
	li x26, -1
	csrrw x29, 0x72e, x26	// Write all 1s to CSR
	csrrw x29, 0x72e, x0	// Write all 0s to CSR
	csrrw x29, 0x72e, x21	// Restore CSR

// Testing CSR 0x72f
	csrr x24, 0x72f	// Read CSR
	li x21, -1
	csrrw x29, 0x72f, x21	// Write all 1s to CSR
	csrrw x29, 0x72f, x0	// Write all 0s to CSR
	csrrw x29, 0x72f, x24	// Restore CSR

// Testing CSR 0x730
	csrr x29, 0x730	// Read CSR
	li x30, -1
	csrrw x13, 0x730, x30	// Write all 1s to CSR
	csrrw x13, 0x730, x0	// Write all 0s to CSR
	csrrw x13, 0x730, x29	// Restore CSR

// Testing CSR 0x731
	csrr x25, 0x731	// Read CSR
	li x20, -1
	csrrw x1, 0x731, x20	// Write all 1s to CSR
	csrrw x1, 0x731, x0	// Write all 0s to CSR
	csrrw x1, 0x731, x25	// Restore CSR

// Testing CSR 0x732
	csrr x22, 0x732	// Read CSR
	li x28, -1
	csrrw x30, 0x732, x28	// Write all 1s to CSR
	csrrw x30, 0x732, x0	// Write all 0s to CSR
	csrrw x30, 0x732, x22	// Restore CSR

// Testing CSR 0x733
	csrr x7, 0x733	// Read CSR
	li x20, -1
	csrrw x24, 0x733, x20	// Write all 1s to CSR
	csrrw x24, 0x733, x0	// Write all 0s to CSR
	csrrw x24, 0x733, x7	// Restore CSR

// Testing CSR 0x734
	csrr x16, 0x734	// Read CSR
	li x14, -1
	csrrw x25, 0x734, x14	// Write all 1s to CSR
	csrrw x25, 0x734, x0	// Write all 0s to CSR
	csrrw x25, 0x734, x16	// Restore CSR

// Testing CSR 0x735
	csrr x13, 0x735	// Read CSR
	li x6, -1
	csrrw x5, 0x735, x6	// Write all 1s to CSR
	csrrw x5, 0x735, x0	// Write all 0s to CSR
	csrrw x5, 0x735, x13	// Restore CSR

// Testing CSR 0x736
	csrr x22, 0x736	// Read CSR
	li x14, -1
	csrrw x13, 0x736, x14	// Write all 1s to CSR
	csrrw x13, 0x736, x0	// Write all 0s to CSR
	csrrw x13, 0x736, x22	// Restore CSR

// Testing CSR 0x737
	csrr x15, 0x737	// Read CSR
	li x27, -1
	csrrw x31, 0x737, x27	// Write all 1s to CSR
	csrrw x31, 0x737, x0	// Write all 0s to CSR
	csrrw x31, 0x737, x15	// Restore CSR

// Testing CSR 0x738
	csrr x24, 0x738	// Read CSR
	li x7, -1
	csrrw x21, 0x738, x7	// Write all 1s to CSR
	csrrw x21, 0x738, x0	// Write all 0s to CSR
	csrrw x21, 0x738, x24	// Restore CSR

// Testing CSR 0x739
	csrr x9, 0x739	// Read CSR
	li x3, -1
	csrrw x23, 0x739, x3	// Write all 1s to CSR
	csrrw x23, 0x739, x0	// Write all 0s to CSR
	csrrw x23, 0x739, x9	// Restore CSR

// Testing CSR 0x73a
	csrr x30, 0x73a	// Read CSR
	li x6, -1
	csrrw x19, 0x73a, x6	// Write all 1s to CSR
	csrrw x19, 0x73a, x0	// Write all 0s to CSR
	csrrw x19, 0x73a, x30	// Restore CSR

// Testing CSR 0x73b
	csrr x1, 0x73b	// Read CSR
	li x10, -1
	csrrw x30, 0x73b, x10	// Write all 1s to CSR
	csrrw x30, 0x73b, x0	// Write all 0s to CSR
	csrrw x30, 0x73b, x1	// Restore CSR

// Testing CSR 0x73c
	csrr x24, 0x73c	// Read CSR
	li x6, -1
	csrrw x4, 0x73c, x6	// Write all 1s to CSR
	csrrw x4, 0x73c, x0	// Write all 0s to CSR
	csrrw x4, 0x73c, x24	// Restore CSR

// Testing CSR 0x73d
	csrr x5, 0x73d	// Read CSR
	li x9, -1
	csrrw x6, 0x73d, x9	// Write all 1s to CSR
	csrrw x6, 0x73d, x0	// Write all 0s to CSR
	csrrw x6, 0x73d, x5	// Restore CSR

// Testing CSR 0x73e
	csrr x13, 0x73e	// Read CSR
	li x9, -1
	csrrw x17, 0x73e, x9	// Write all 1s to CSR
	csrrw x17, 0x73e, x0	// Write all 0s to CSR
	csrrw x17, 0x73e, x13	// Restore CSR

// Testing CSR 0x73f
	csrr x29, 0x73f	// Read CSR
	li x21, -1
	csrrw x14, 0x73f, x21	// Write all 1s to CSR
	csrrw x14, 0x73f, x0	// Write all 0s to CSR
	csrrw x14, 0x73f, x29	// Restore CSR

// Testing CSR 0x740
	csrr x11, 0x740	// Read CSR
	li x18, -1
	csrrw x24, 0x740, x18	// Write all 1s to CSR
	csrrw x24, 0x740, x0	// Write all 0s to CSR
	csrrw x24, 0x740, x11	// Restore CSR

// Testing CSR 0x741
	csrr x14, 0x741	// Read CSR
	li x16, -1
	csrrw x15, 0x741, x16	// Write all 1s to CSR
	csrrw x15, 0x741, x0	// Write all 0s to CSR
	csrrw x15, 0x741, x14	// Restore CSR

// Testing CSR 0x742
	csrr x4, 0x742	// Read CSR
	li x9, -1
	csrrw x20, 0x742, x9	// Write all 1s to CSR
	csrrw x20, 0x742, x0	// Write all 0s to CSR
	csrrw x20, 0x742, x4	// Restore CSR

// Testing CSR 0x743
	csrr x11, 0x743	// Read CSR
	li x9, -1
	csrrw x24, 0x743, x9	// Write all 1s to CSR
	csrrw x24, 0x743, x0	// Write all 0s to CSR
	csrrw x24, 0x743, x11	// Restore CSR

// Testing CSR 0x744
	csrr x10, 0x744	// Read CSR
	li x13, -1
	csrrw x20, 0x744, x13	// Write all 1s to CSR
	csrrw x20, 0x744, x0	// Write all 0s to CSR
	csrrw x20, 0x744, x10	// Restore CSR

// Testing CSR 0x745
	csrr x17, 0x745	// Read CSR
	li x1, -1
	csrrw x16, 0x745, x1	// Write all 1s to CSR
	csrrw x16, 0x745, x0	// Write all 0s to CSR
	csrrw x16, 0x745, x17	// Restore CSR

// Testing CSR 0x746
	csrr x30, 0x746	// Read CSR
	li x21, -1
	csrrw x17, 0x746, x21	// Write all 1s to CSR
	csrrw x17, 0x746, x0	// Write all 0s to CSR
	csrrw x17, 0x746, x30	// Restore CSR

// Testing CSR 0x748
	csrr x31, 0x748	// Read CSR
	li x17, -1
	csrrw x7, 0x748, x17	// Write all 1s to CSR
	csrrw x7, 0x748, x0	// Write all 0s to CSR
	csrrw x7, 0x748, x31	// Restore CSR

// Testing CSR 0x748
	csrr x14, 0x748	// Read CSR
	li x9, -1
	csrrw x24, 0x748, x9	// Write all 1s to CSR
	csrrw x24, 0x748, x0	// Write all 0s to CSR
	csrrw x24, 0x748, x14	// Restore CSR

// Testing CSR 0x749
	csrr x21, 0x749	// Read CSR
	li x25, -1
	csrrw x14, 0x749, x25	// Write all 1s to CSR
	csrrw x14, 0x749, x0	// Write all 0s to CSR
	csrrw x14, 0x749, x21	// Restore CSR

// Testing CSR 0x74a
	csrr x24, 0x74a	// Read CSR
	li x2, -1
	csrrw x31, 0x74a, x2	// Write all 1s to CSR
	csrrw x31, 0x74a, x0	// Write all 0s to CSR
	csrrw x31, 0x74a, x24	// Restore CSR

// Testing CSR 0x74b
	csrr x1, 0x74b	// Read CSR
	li x14, -1
	csrrw x18, 0x74b, x14	// Write all 1s to CSR
	csrrw x18, 0x74b, x0	// Write all 0s to CSR
	csrrw x18, 0x74b, x1	// Restore CSR

// Testing CSR 0x74c
	csrr x3, 0x74c	// Read CSR
	li x31, -1
	csrrw x26, 0x74c, x31	// Write all 1s to CSR
	csrrw x26, 0x74c, x0	// Write all 0s to CSR
	csrrw x26, 0x74c, x3	// Restore CSR

// Testing CSR 0x74d
	csrr x9, 0x74d	// Read CSR
	li x23, -1
	csrrw x26, 0x74d, x23	// Write all 1s to CSR
	csrrw x26, 0x74d, x0	// Write all 0s to CSR
	csrrw x26, 0x74d, x9	// Restore CSR

// Testing CSR 0x74e
	csrr x1, 0x74e	// Read CSR
	li x22, -1
	csrrw x16, 0x74e, x22	// Write all 1s to CSR
	csrrw x16, 0x74e, x0	// Write all 0s to CSR
	csrrw x16, 0x74e, x1	// Restore CSR

// Testing CSR 0x74f
	csrr x26, 0x74f	// Read CSR
	li x13, -1
	csrrw x31, 0x74f, x13	// Write all 1s to CSR
	csrrw x31, 0x74f, x0	// Write all 0s to CSR
	csrrw x31, 0x74f, x26	// Restore CSR

// Testing CSR 0x750
	csrr x18, 0x750	// Read CSR
	li x12, -1
	csrrw x16, 0x750, x12	// Write all 1s to CSR
	csrrw x16, 0x750, x0	// Write all 0s to CSR
	csrrw x16, 0x750, x18	// Restore CSR

// Testing CSR 0x751
	csrr x17, 0x751	// Read CSR
	li x15, -1
	csrrw x18, 0x751, x15	// Write all 1s to CSR
	csrrw x18, 0x751, x0	// Write all 0s to CSR
	csrrw x18, 0x751, x17	// Restore CSR

// Testing CSR 0x752
	csrr x24, 0x752	// Read CSR
	li x29, -1
	csrrw x23, 0x752, x29	// Write all 1s to CSR
	csrrw x23, 0x752, x0	// Write all 0s to CSR
	csrrw x23, 0x752, x24	// Restore CSR

// Testing CSR 0x753
	csrr x16, 0x753	// Read CSR
	li x19, -1
	csrrw x6, 0x753, x19	// Write all 1s to CSR
	csrrw x6, 0x753, x0	// Write all 0s to CSR
	csrrw x6, 0x753, x16	// Restore CSR

// Testing CSR 0x754
	csrr x26, 0x754	// Read CSR
	li x19, -1
	csrrw x25, 0x754, x19	// Write all 1s to CSR
	csrrw x25, 0x754, x0	// Write all 0s to CSR
	csrrw x25, 0x754, x26	// Restore CSR

// Testing CSR 0x755
	csrr x1, 0x755	// Read CSR
	li x20, -1
	csrrw x12, 0x755, x20	// Write all 1s to CSR
	csrrw x12, 0x755, x0	// Write all 0s to CSR
	csrrw x12, 0x755, x1	// Restore CSR

// Testing CSR 0x756
	csrr x7, 0x756	// Read CSR
	li x10, -1
	csrrw x14, 0x756, x10	// Write all 1s to CSR
	csrrw x14, 0x756, x0	// Write all 0s to CSR
	csrrw x14, 0x756, x7	// Restore CSR

// Testing CSR 0x757
	csrr x3, 0x757	// Read CSR
	li x8, -1
	csrrw x4, 0x757, x8	// Write all 1s to CSR
	csrrw x4, 0x757, x0	// Write all 0s to CSR
	csrrw x4, 0x757, x3	// Restore CSR

// Testing CSR 0x758
	csrr x6, 0x758	// Read CSR
	li x26, -1
	csrrw x20, 0x758, x26	// Write all 1s to CSR
	csrrw x20, 0x758, x0	// Write all 0s to CSR
	csrrw x20, 0x758, x6	// Restore CSR

// Testing CSR 0x759
	csrr x15, 0x759	// Read CSR
	li x21, -1
	csrrw x5, 0x759, x21	// Write all 1s to CSR
	csrrw x5, 0x759, x0	// Write all 0s to CSR
	csrrw x5, 0x759, x15	// Restore CSR

// Testing CSR 0x75a
	csrr x30, 0x75a	// Read CSR
	li x16, -1
	csrrw x11, 0x75a, x16	// Write all 1s to CSR
	csrrw x11, 0x75a, x0	// Write all 0s to CSR
	csrrw x11, 0x75a, x30	// Restore CSR

// Testing CSR 0x75b
	csrr x28, 0x75b	// Read CSR
	li x15, -1
	csrrw x23, 0x75b, x15	// Write all 1s to CSR
	csrrw x23, 0x75b, x0	// Write all 0s to CSR
	csrrw x23, 0x75b, x28	// Restore CSR

// Testing CSR 0x75c
	csrr x5, 0x75c	// Read CSR
	li x16, -1
	csrrw x26, 0x75c, x16	// Write all 1s to CSR
	csrrw x26, 0x75c, x0	// Write all 0s to CSR
	csrrw x26, 0x75c, x5	// Restore CSR

// Testing CSR 0x75d
	csrr x31, 0x75d	// Read CSR
	li x28, -1
	csrrw x9, 0x75d, x28	// Write all 1s to CSR
	csrrw x9, 0x75d, x0	// Write all 0s to CSR
	csrrw x9, 0x75d, x31	// Restore CSR

// Testing CSR 0x75e
	csrr x16, 0x75e	// Read CSR
	li x11, -1
	csrrw x23, 0x75e, x11	// Write all 1s to CSR
	csrrw x23, 0x75e, x0	// Write all 0s to CSR
	csrrw x23, 0x75e, x16	// Restore CSR

// Testing CSR 0x75f
	csrr x17, 0x75f	// Read CSR
	li x24, -1
	csrrw x26, 0x75f, x24	// Write all 1s to CSR
	csrrw x26, 0x75f, x0	// Write all 0s to CSR
	csrrw x26, 0x75f, x17	// Restore CSR

// Testing CSR 0x760
	csrr x8, 0x760	// Read CSR
	li x25, -1
	csrrw x2, 0x760, x25	// Write all 1s to CSR
	csrrw x2, 0x760, x0	// Write all 0s to CSR
	csrrw x2, 0x760, x8	// Restore CSR

// Testing CSR 0x761
	csrr x12, 0x761	// Read CSR
	li x30, -1
	csrrw x17, 0x761, x30	// Write all 1s to CSR
	csrrw x17, 0x761, x0	// Write all 0s to CSR
	csrrw x17, 0x761, x12	// Restore CSR

// Testing CSR 0x762
	csrr x9, 0x762	// Read CSR
	li x13, -1
	csrrw x27, 0x762, x13	// Write all 1s to CSR
	csrrw x27, 0x762, x0	// Write all 0s to CSR
	csrrw x27, 0x762, x9	// Restore CSR

// Testing CSR 0x763
	csrr x18, 0x763	// Read CSR
	li x21, -1
	csrrw x29, 0x763, x21	// Write all 1s to CSR
	csrrw x29, 0x763, x0	// Write all 0s to CSR
	csrrw x29, 0x763, x18	// Restore CSR

// Testing CSR 0x764
	csrr x20, 0x764	// Read CSR
	li x4, -1
	csrrw x10, 0x764, x4	// Write all 1s to CSR
	csrrw x10, 0x764, x0	// Write all 0s to CSR
	csrrw x10, 0x764, x20	// Restore CSR

// Testing CSR 0x765
	csrr x29, 0x765	// Read CSR
	li x5, -1
	csrrw x17, 0x765, x5	// Write all 1s to CSR
	csrrw x17, 0x765, x0	// Write all 0s to CSR
	csrrw x17, 0x765, x29	// Restore CSR

// Testing CSR 0x766
	csrr x5, 0x766	// Read CSR
	li x30, -1
	csrrw x3, 0x766, x30	// Write all 1s to CSR
	csrrw x3, 0x766, x0	// Write all 0s to CSR
	csrrw x3, 0x766, x5	// Restore CSR

// Testing CSR 0x767
	csrr x11, 0x767	// Read CSR
	li x7, -1
	csrrw x2, 0x767, x7	// Write all 1s to CSR
	csrrw x2, 0x767, x0	// Write all 0s to CSR
	csrrw x2, 0x767, x11	// Restore CSR

// Testing CSR 0x768
	csrr x1, 0x768	// Read CSR
	li x16, -1
	csrrw x3, 0x768, x16	// Write all 1s to CSR
	csrrw x3, 0x768, x0	// Write all 0s to CSR
	csrrw x3, 0x768, x1	// Restore CSR

// Testing CSR 0x769
	csrr x19, 0x769	// Read CSR
	li x17, -1
	csrrw x2, 0x769, x17	// Write all 1s to CSR
	csrrw x2, 0x769, x0	// Write all 0s to CSR
	csrrw x2, 0x769, x19	// Restore CSR

// Testing CSR 0x76a
	csrr x5, 0x76a	// Read CSR
	li x21, -1
	csrrw x15, 0x76a, x21	// Write all 1s to CSR
	csrrw x15, 0x76a, x0	// Write all 0s to CSR
	csrrw x15, 0x76a, x5	// Restore CSR

// Testing CSR 0x76b
	csrr x19, 0x76b	// Read CSR
	li x5, -1
	csrrw x9, 0x76b, x5	// Write all 1s to CSR
	csrrw x9, 0x76b, x0	// Write all 0s to CSR
	csrrw x9, 0x76b, x19	// Restore CSR

// Testing CSR 0x76c
	csrr x3, 0x76c	// Read CSR
	li x10, -1
	csrrw x12, 0x76c, x10	// Write all 1s to CSR
	csrrw x12, 0x76c, x0	// Write all 0s to CSR
	csrrw x12, 0x76c, x3	// Restore CSR

// Testing CSR 0x76d
	csrr x30, 0x76d	// Read CSR
	li x5, -1
	csrrw x29, 0x76d, x5	// Write all 1s to CSR
	csrrw x29, 0x76d, x0	// Write all 0s to CSR
	csrrw x29, 0x76d, x30	// Restore CSR

// Testing CSR 0x76e
	csrr x15, 0x76e	// Read CSR
	li x30, -1
	csrrw x12, 0x76e, x30	// Write all 1s to CSR
	csrrw x12, 0x76e, x0	// Write all 0s to CSR
	csrrw x12, 0x76e, x15	// Restore CSR

// Testing CSR 0x76f
	csrr x2, 0x76f	// Read CSR
	li x11, -1
	csrrw x4, 0x76f, x11	// Write all 1s to CSR
	csrrw x4, 0x76f, x0	// Write all 0s to CSR
	csrrw x4, 0x76f, x2	// Restore CSR

// Testing CSR 0x770
	csrr x29, 0x770	// Read CSR
	li x4, -1
	csrrw x20, 0x770, x4	// Write all 1s to CSR
	csrrw x20, 0x770, x0	// Write all 0s to CSR
	csrrw x20, 0x770, x29	// Restore CSR

// Testing CSR 0x771
	csrr x22, 0x771	// Read CSR
	li x4, -1
	csrrw x10, 0x771, x4	// Write all 1s to CSR
	csrrw x10, 0x771, x0	// Write all 0s to CSR
	csrrw x10, 0x771, x22	// Restore CSR

// Testing CSR 0x772
	csrr x22, 0x772	// Read CSR
	li x10, -1
	csrrw x19, 0x772, x10	// Write all 1s to CSR
	csrrw x19, 0x772, x0	// Write all 0s to CSR
	csrrw x19, 0x772, x22	// Restore CSR

// Testing CSR 0x773
	csrr x12, 0x773	// Read CSR
	li x6, -1
	csrrw x25, 0x773, x6	// Write all 1s to CSR
	csrrw x25, 0x773, x0	// Write all 0s to CSR
	csrrw x25, 0x773, x12	// Restore CSR

// Testing CSR 0x774
	csrr x1, 0x774	// Read CSR
	li x22, -1
	csrrw x25, 0x774, x22	// Write all 1s to CSR
	csrrw x25, 0x774, x0	// Write all 0s to CSR
	csrrw x25, 0x774, x1	// Restore CSR

// Testing CSR 0x775
	csrr x16, 0x775	// Read CSR
	li x13, -1
	csrrw x21, 0x775, x13	// Write all 1s to CSR
	csrrw x21, 0x775, x0	// Write all 0s to CSR
	csrrw x21, 0x775, x16	// Restore CSR

// Testing CSR 0x776
	csrr x7, 0x776	// Read CSR
	li x3, -1
	csrrw x14, 0x776, x3	// Write all 1s to CSR
	csrrw x14, 0x776, x0	// Write all 0s to CSR
	csrrw x14, 0x776, x7	// Restore CSR

// Testing CSR 0x777
	csrr x28, 0x777	// Read CSR
	li x9, -1
	csrrw x31, 0x777, x9	// Write all 1s to CSR
	csrrw x31, 0x777, x0	// Write all 0s to CSR
	csrrw x31, 0x777, x28	// Restore CSR

// Testing CSR 0x778
	csrr x16, 0x778	// Read CSR
	li x14, -1
	csrrw x22, 0x778, x14	// Write all 1s to CSR
	csrrw x22, 0x778, x0	// Write all 0s to CSR
	csrrw x22, 0x778, x16	// Restore CSR

// Testing CSR 0x779
	csrr x16, 0x779	// Read CSR
	li x29, -1
	csrrw x13, 0x779, x29	// Write all 1s to CSR
	csrrw x13, 0x779, x0	// Write all 0s to CSR
	csrrw x13, 0x779, x16	// Restore CSR

// Testing CSR 0x77a
	csrr x5, 0x77a	// Read CSR
	li x14, -1
	csrrw x26, 0x77a, x14	// Write all 1s to CSR
	csrrw x26, 0x77a, x0	// Write all 0s to CSR
	csrrw x26, 0x77a, x5	// Restore CSR

// Testing CSR 0x77b
	csrr x7, 0x77b	// Read CSR
	li x25, -1
	csrrw x14, 0x77b, x25	// Write all 1s to CSR
	csrrw x14, 0x77b, x0	// Write all 0s to CSR
	csrrw x14, 0x77b, x7	// Restore CSR

// Testing CSR 0x77c
	csrr x21, 0x77c	// Read CSR
	li x25, -1
	csrrw x7, 0x77c, x25	// Write all 1s to CSR
	csrrw x7, 0x77c, x0	// Write all 0s to CSR
	csrrw x7, 0x77c, x21	// Restore CSR

// Testing CSR 0x77d
	csrr x9, 0x77d	// Read CSR
	li x3, -1
	csrrw x26, 0x77d, x3	// Write all 1s to CSR
	csrrw x26, 0x77d, x0	// Write all 0s to CSR
	csrrw x26, 0x77d, x9	// Restore CSR

// Testing CSR 0x77e
	csrr x5, 0x77e	// Read CSR
	li x15, -1
	csrrw x11, 0x77e, x15	// Write all 1s to CSR
	csrrw x11, 0x77e, x0	// Write all 0s to CSR
	csrrw x11, 0x77e, x5	// Restore CSR

// Testing CSR 0x77f
	csrr x12, 0x77f	// Read CSR
	li x10, -1
	csrrw x26, 0x77f, x10	// Write all 1s to CSR
	csrrw x26, 0x77f, x0	// Write all 0s to CSR
	csrrw x26, 0x77f, x12	// Restore CSR

// Testing CSR 0x780
	csrr x26, 0x780	// Read CSR
	li x15, -1
	csrrw x11, 0x780, x15	// Write all 1s to CSR
	csrrw x11, 0x780, x0	// Write all 0s to CSR
	csrrw x11, 0x780, x26	// Restore CSR

// Testing CSR 0x781
	csrr x8, 0x781	// Read CSR
	li x6, -1
	csrrw x15, 0x781, x6	// Write all 1s to CSR
	csrrw x15, 0x781, x0	// Write all 0s to CSR
	csrrw x15, 0x781, x8	// Restore CSR

// Testing CSR 0x782
	csrr x5, 0x782	// Read CSR
	li x23, -1
	csrrw x11, 0x782, x23	// Write all 1s to CSR
	csrrw x11, 0x782, x0	// Write all 0s to CSR
	csrrw x11, 0x782, x5	// Restore CSR

// Testing CSR 0x783
	csrr x26, 0x783	// Read CSR
	li x8, -1
	csrrw x16, 0x783, x8	// Write all 1s to CSR
	csrrw x16, 0x783, x0	// Write all 0s to CSR
	csrrw x16, 0x783, x26	// Restore CSR

// Testing CSR 0x784
	csrr x5, 0x784	// Read CSR
	li x4, -1
	csrrw x18, 0x784, x4	// Write all 1s to CSR
	csrrw x18, 0x784, x0	// Write all 0s to CSR
	csrrw x18, 0x784, x5	// Restore CSR

// Testing CSR 0x785
	csrr x19, 0x785	// Read CSR
	li x20, -1
	csrrw x15, 0x785, x20	// Write all 1s to CSR
	csrrw x15, 0x785, x0	// Write all 0s to CSR
	csrrw x15, 0x785, x19	// Restore CSR

// Testing CSR 0x786
	csrr x24, 0x786	// Read CSR
	li x11, -1
	csrrw x6, 0x786, x11	// Write all 1s to CSR
	csrrw x6, 0x786, x0	// Write all 0s to CSR
	csrrw x6, 0x786, x24	// Restore CSR

// Testing CSR 0x787
	csrr x3, 0x787	// Read CSR
	li x22, -1
	csrrw x11, 0x787, x22	// Write all 1s to CSR
	csrrw x11, 0x787, x0	// Write all 0s to CSR
	csrrw x11, 0x787, x3	// Restore CSR

// Testing CSR 0x788
	csrr x6, 0x788	// Read CSR
	li x9, -1
	csrrw x30, 0x788, x9	// Write all 1s to CSR
	csrrw x30, 0x788, x0	// Write all 0s to CSR
	csrrw x30, 0x788, x6	// Restore CSR

// Testing CSR 0x789
	csrr x12, 0x789	// Read CSR
	li x22, -1
	csrrw x23, 0x789, x22	// Write all 1s to CSR
	csrrw x23, 0x789, x0	// Write all 0s to CSR
	csrrw x23, 0x789, x12	// Restore CSR

// Testing CSR 0x78a
	csrr x4, 0x78a	// Read CSR
	li x11, -1
	csrrw x13, 0x78a, x11	// Write all 1s to CSR
	csrrw x13, 0x78a, x0	// Write all 0s to CSR
	csrrw x13, 0x78a, x4	// Restore CSR

// Testing CSR 0x78b
	csrr x25, 0x78b	// Read CSR
	li x11, -1
	csrrw x10, 0x78b, x11	// Write all 1s to CSR
	csrrw x10, 0x78b, x0	// Write all 0s to CSR
	csrrw x10, 0x78b, x25	// Restore CSR

// Testing CSR 0x78c
	csrr x11, 0x78c	// Read CSR
	li x28, -1
	csrrw x25, 0x78c, x28	// Write all 1s to CSR
	csrrw x25, 0x78c, x0	// Write all 0s to CSR
	csrrw x25, 0x78c, x11	// Restore CSR

// Testing CSR 0x78d
	csrr x28, 0x78d	// Read CSR
	li x1, -1
	csrrw x7, 0x78d, x1	// Write all 1s to CSR
	csrrw x7, 0x78d, x0	// Write all 0s to CSR
	csrrw x7, 0x78d, x28	// Restore CSR

// Testing CSR 0x78e
	csrr x22, 0x78e	// Read CSR
	li x21, -1
	csrrw x10, 0x78e, x21	// Write all 1s to CSR
	csrrw x10, 0x78e, x0	// Write all 0s to CSR
	csrrw x10, 0x78e, x22	// Restore CSR

// Testing CSR 0x78f
	csrr x21, 0x78f	// Read CSR
	li x6, -1
	csrrw x28, 0x78f, x6	// Write all 1s to CSR
	csrrw x28, 0x78f, x0	// Write all 0s to CSR
	csrrw x28, 0x78f, x21	// Restore CSR

// Testing CSR 0x790
	csrr x18, 0x790	// Read CSR
	li x6, -1
	csrrw x16, 0x790, x6	// Write all 1s to CSR
	csrrw x16, 0x790, x0	// Write all 0s to CSR
	csrrw x16, 0x790, x18	// Restore CSR

// Testing CSR 0x791
	csrr x31, 0x791	// Read CSR
	li x8, -1
	csrrw x3, 0x791, x8	// Write all 1s to CSR
	csrrw x3, 0x791, x0	// Write all 0s to CSR
	csrrw x3, 0x791, x31	// Restore CSR

// Testing CSR 0x792
	csrr x23, 0x792	// Read CSR
	li x17, -1
	csrrw x29, 0x792, x17	// Write all 1s to CSR
	csrrw x29, 0x792, x0	// Write all 0s to CSR
	csrrw x29, 0x792, x23	// Restore CSR

// Testing CSR 0x793
	csrr x9, 0x793	// Read CSR
	li x29, -1
	csrrw x23, 0x793, x29	// Write all 1s to CSR
	csrrw x23, 0x793, x0	// Write all 0s to CSR
	csrrw x23, 0x793, x9	// Restore CSR

// Testing CSR 0x794
	csrr x4, 0x794	// Read CSR
	li x2, -1
	csrrw x13, 0x794, x2	// Write all 1s to CSR
	csrrw x13, 0x794, x0	// Write all 0s to CSR
	csrrw x13, 0x794, x4	// Restore CSR

// Testing CSR 0x795
	csrr x24, 0x795	// Read CSR
	li x3, -1
	csrrw x13, 0x795, x3	// Write all 1s to CSR
	csrrw x13, 0x795, x0	// Write all 0s to CSR
	csrrw x13, 0x795, x24	// Restore CSR

// Testing CSR 0x796
	csrr x15, 0x796	// Read CSR
	li x16, -1
	csrrw x22, 0x796, x16	// Write all 1s to CSR
	csrrw x22, 0x796, x0	// Write all 0s to CSR
	csrrw x22, 0x796, x15	// Restore CSR

// Testing CSR 0x797
	csrr x5, 0x797	// Read CSR
	li x23, -1
	csrrw x2, 0x797, x23	// Write all 1s to CSR
	csrrw x2, 0x797, x0	// Write all 0s to CSR
	csrrw x2, 0x797, x5	// Restore CSR

// Testing CSR 0x798
	csrr x30, 0x798	// Read CSR
	li x4, -1
	csrrw x5, 0x798, x4	// Write all 1s to CSR
	csrrw x5, 0x798, x0	// Write all 0s to CSR
	csrrw x5, 0x798, x30	// Restore CSR

// Testing CSR 0x799
	csrr x21, 0x799	// Read CSR
	li x4, -1
	csrrw x27, 0x799, x4	// Write all 1s to CSR
	csrrw x27, 0x799, x0	// Write all 0s to CSR
	csrrw x27, 0x799, x21	// Restore CSR

// Testing CSR 0x79a
	csrr x13, 0x79a	// Read CSR
	li x20, -1
	csrrw x29, 0x79a, x20	// Write all 1s to CSR
	csrrw x29, 0x79a, x0	// Write all 0s to CSR
	csrrw x29, 0x79a, x13	// Restore CSR

// Testing CSR 0x79b
	csrr x4, 0x79b	// Read CSR
	li x10, -1
	csrrw x3, 0x79b, x10	// Write all 1s to CSR
	csrrw x3, 0x79b, x0	// Write all 0s to CSR
	csrrw x3, 0x79b, x4	// Restore CSR

// Testing CSR 0x79c
	csrr x19, 0x79c	// Read CSR
	li x7, -1
	csrrw x4, 0x79c, x7	// Write all 1s to CSR
	csrrw x4, 0x79c, x0	// Write all 0s to CSR
	csrrw x4, 0x79c, x19	// Restore CSR

// Testing CSR 0x79d
	csrr x28, 0x79d	// Read CSR
	li x24, -1
	csrrw x29, 0x79d, x24	// Write all 1s to CSR
	csrrw x29, 0x79d, x0	// Write all 0s to CSR
	csrrw x29, 0x79d, x28	// Restore CSR

// Testing CSR 0x79e
	csrr x10, 0x79e	// Read CSR
	li x28, -1
	csrrw x27, 0x79e, x28	// Write all 1s to CSR
	csrrw x27, 0x79e, x0	// Write all 0s to CSR
	csrrw x27, 0x79e, x10	// Restore CSR

// Testing CSR 0x79f
	csrr x13, 0x79f	// Read CSR
	li x29, -1
	csrrw x6, 0x79f, x29	// Write all 1s to CSR
	csrrw x6, 0x79f, x0	// Write all 0s to CSR
	csrrw x6, 0x79f, x13	// Restore CSR

// Testing CSR 0x7a6
	csrr x17, 0x7a6	// Read CSR
	li x15, -1
	csrrw x23, 0x7a6, x15	// Write all 1s to CSR
	csrrw x23, 0x7a6, x0	// Write all 0s to CSR
	csrrw x23, 0x7a6, x17	// Restore CSR

// Testing CSR 0x7a6
	csrr x9, 0x7a6	// Read CSR
	li x25, -1
	csrrw x11, 0x7a6, x25	// Write all 1s to CSR
	csrrw x11, 0x7a6, x0	// Write all 0s to CSR
	csrrw x11, 0x7a6, x9	// Restore CSR

// Testing CSR 0x7a6
	csrr x21, 0x7a6	// Read CSR
	li x6, -1
	csrrw x26, 0x7a6, x6	// Write all 1s to CSR
	csrrw x26, 0x7a6, x0	// Write all 0s to CSR
	csrrw x26, 0x7a6, x21	// Restore CSR

// Testing CSR 0x7a6
	csrr x13, 0x7a6	// Read CSR
	li x9, -1
	csrrw x29, 0x7a6, x9	// Write all 1s to CSR
	csrrw x29, 0x7a6, x0	// Write all 0s to CSR
	csrrw x29, 0x7a6, x13	// Restore CSR

// Testing CSR 0x7a6
	csrr x29, 0x7a6	// Read CSR
	li x6, -1
	csrrw x30, 0x7a6, x6	// Write all 1s to CSR
	csrrw x30, 0x7a6, x0	// Write all 0s to CSR
	csrrw x30, 0x7a6, x29	// Restore CSR

// Testing CSR 0x7a6
	csrr x6, 0x7a6	// Read CSR
	li x27, -1
	csrrw x24, 0x7a6, x27	// Write all 1s to CSR
	csrrw x24, 0x7a6, x0	// Write all 0s to CSR
	csrrw x24, 0x7a6, x6	// Restore CSR

// Testing CSR 0x7a6
	csrr x3, 0x7a6	// Read CSR
	li x7, -1
	csrrw x21, 0x7a6, x7	// Write all 1s to CSR
	csrrw x21, 0x7a6, x0	// Write all 0s to CSR
	csrrw x21, 0x7a6, x3	// Restore CSR

// Testing CSR 0x7a7
	csrr x17, 0x7a7	// Read CSR
	li x27, -1
	csrrw x29, 0x7a7, x27	// Write all 1s to CSR
	csrrw x29, 0x7a7, x0	// Write all 0s to CSR
	csrrw x29, 0x7a7, x17	// Restore CSR

// Testing CSR 0x7a8
	csrr x25, 0x7a8	// Read CSR
	li x12, -1
	csrrw x22, 0x7a8, x12	// Write all 1s to CSR
	csrrw x22, 0x7a8, x0	// Write all 0s to CSR
	csrrw x22, 0x7a8, x25	// Restore CSR

// Testing CSR 0x7a9
	csrr x24, 0x7a9	// Read CSR
	li x15, -1
	csrrw x28, 0x7a9, x15	// Write all 1s to CSR
	csrrw x28, 0x7a9, x0	// Write all 0s to CSR
	csrrw x28, 0x7a9, x24	// Restore CSR

// Testing CSR 0x7aa
	csrr x29, 0x7aa	// Read CSR
	li x22, -1
	csrrw x27, 0x7aa, x22	// Write all 1s to CSR
	csrrw x27, 0x7aa, x0	// Write all 0s to CSR
	csrrw x27, 0x7aa, x29	// Restore CSR

// Testing CSR 0x7ab
	csrr x3, 0x7ab	// Read CSR
	li x11, -1
	csrrw x17, 0x7ab, x11	// Write all 1s to CSR
	csrrw x17, 0x7ab, x0	// Write all 0s to CSR
	csrrw x17, 0x7ab, x3	// Restore CSR

// Testing CSR 0x7ac
	csrr x14, 0x7ac	// Read CSR
	li x26, -1
	csrrw x10, 0x7ac, x26	// Write all 1s to CSR
	csrrw x10, 0x7ac, x0	// Write all 0s to CSR
	csrrw x10, 0x7ac, x14	// Restore CSR

// Testing CSR 0x7ad
	csrr x15, 0x7ad	// Read CSR
	li x26, -1
	csrrw x2, 0x7ad, x26	// Write all 1s to CSR
	csrrw x2, 0x7ad, x0	// Write all 0s to CSR
	csrrw x2, 0x7ad, x15	// Restore CSR

// Testing CSR 0x7ae
	csrr x5, 0x7ae	// Read CSR
	li x12, -1
	csrrw x6, 0x7ae, x12	// Write all 1s to CSR
	csrrw x6, 0x7ae, x0	// Write all 0s to CSR
	csrrw x6, 0x7ae, x5	// Restore CSR

// Testing CSR 0x7af
	csrr x16, 0x7af	// Read CSR
	li x8, -1
	csrrw x30, 0x7af, x8	// Write all 1s to CSR
	csrrw x30, 0x7af, x0	// Write all 0s to CSR
	csrrw x30, 0x7af, x16	// Restore CSR

// Testing CSR 0x7b4
	csrr x8, 0x7b4	// Read CSR
	li x3, -1
	csrrw x5, 0x7b4, x3	// Write all 1s to CSR
	csrrw x5, 0x7b4, x0	// Write all 0s to CSR
	csrrw x5, 0x7b4, x8	// Restore CSR

// Testing CSR 0x7b4
	csrr x30, 0x7b4	// Read CSR
	li x25, -1
	csrrw x15, 0x7b4, x25	// Write all 1s to CSR
	csrrw x15, 0x7b4, x0	// Write all 0s to CSR
	csrrw x15, 0x7b4, x30	// Restore CSR

// Testing CSR 0x7b4
	csrr x14, 0x7b4	// Read CSR
	li x4, -1
	csrrw x12, 0x7b4, x4	// Write all 1s to CSR
	csrrw x12, 0x7b4, x0	// Write all 0s to CSR
	csrrw x12, 0x7b4, x14	// Restore CSR

// Testing CSR 0x7b4
	csrr x25, 0x7b4	// Read CSR
	li x8, -1
	csrrw x4, 0x7b4, x8	// Write all 1s to CSR
	csrrw x4, 0x7b4, x0	// Write all 0s to CSR
	csrrw x4, 0x7b4, x25	// Restore CSR

// Testing CSR 0x7b4
	csrr x11, 0x7b4	// Read CSR
	li x5, -1
	csrrw x7, 0x7b4, x5	// Write all 1s to CSR
	csrrw x7, 0x7b4, x0	// Write all 0s to CSR
	csrrw x7, 0x7b4, x11	// Restore CSR

// Testing CSR 0x7b5
	csrr x8, 0x7b5	// Read CSR
	li x20, -1
	csrrw x18, 0x7b5, x20	// Write all 1s to CSR
	csrrw x18, 0x7b5, x0	// Write all 0s to CSR
	csrrw x18, 0x7b5, x8	// Restore CSR

// Testing CSR 0x7b6
	csrr x11, 0x7b6	// Read CSR
	li x22, -1
	csrrw x16, 0x7b6, x22	// Write all 1s to CSR
	csrrw x16, 0x7b6, x0	// Write all 0s to CSR
	csrrw x16, 0x7b6, x11	// Restore CSR

// Testing CSR 0x7b7
	csrr x28, 0x7b7	// Read CSR
	li x11, -1
	csrrw x19, 0x7b7, x11	// Write all 1s to CSR
	csrrw x19, 0x7b7, x0	// Write all 0s to CSR
	csrrw x19, 0x7b7, x28	// Restore CSR

// Testing CSR 0x7b8
	csrr x21, 0x7b8	// Read CSR
	li x28, -1
	csrrw x16, 0x7b8, x28	// Write all 1s to CSR
	csrrw x16, 0x7b8, x0	// Write all 0s to CSR
	csrrw x16, 0x7b8, x21	// Restore CSR

// Testing CSR 0x7b9
	csrr x29, 0x7b9	// Read CSR
	li x17, -1
	csrrw x22, 0x7b9, x17	// Write all 1s to CSR
	csrrw x22, 0x7b9, x0	// Write all 0s to CSR
	csrrw x22, 0x7b9, x29	// Restore CSR

// Testing CSR 0x7ba
	csrr x29, 0x7ba	// Read CSR
	li x9, -1
	csrrw x25, 0x7ba, x9	// Write all 1s to CSR
	csrrw x25, 0x7ba, x0	// Write all 0s to CSR
	csrrw x25, 0x7ba, x29	// Restore CSR

// Testing CSR 0x7bb
	csrr x10, 0x7bb	// Read CSR
	li x1, -1
	csrrw x20, 0x7bb, x1	// Write all 1s to CSR
	csrrw x20, 0x7bb, x0	// Write all 0s to CSR
	csrrw x20, 0x7bb, x10	// Restore CSR

// Testing CSR 0x7bc
	csrr x22, 0x7bc	// Read CSR
	li x20, -1
	csrrw x30, 0x7bc, x20	// Write all 1s to CSR
	csrrw x30, 0x7bc, x0	// Write all 0s to CSR
	csrrw x30, 0x7bc, x22	// Restore CSR

// Testing CSR 0x7bd
	csrr x6, 0x7bd	// Read CSR
	li x9, -1
	csrrw x7, 0x7bd, x9	// Write all 1s to CSR
	csrrw x7, 0x7bd, x0	// Write all 0s to CSR
	csrrw x7, 0x7bd, x6	// Restore CSR

// Testing CSR 0x7be
	csrr x17, 0x7be	// Read CSR
	li x18, -1
	csrrw x23, 0x7be, x18	// Write all 1s to CSR
	csrrw x23, 0x7be, x0	// Write all 0s to CSR
	csrrw x23, 0x7be, x17	// Restore CSR

// Testing CSR 0x7bf
	csrr x27, 0x7bf	// Read CSR
	li x4, -1
	csrrw x10, 0x7bf, x4	// Write all 1s to CSR
	csrrw x10, 0x7bf, x0	// Write all 0s to CSR
	csrrw x10, 0x7bf, x27	// Restore CSR

// Testing CSR 0x7c0
	csrr x15, 0x7c0	// Read CSR
	li x6, -1
	csrrw x4, 0x7c0, x6	// Write all 1s to CSR
	csrrw x4, 0x7c0, x0	// Write all 0s to CSR
	csrrw x4, 0x7c0, x15	// Restore CSR

// Testing CSR 0x7c1
	csrr x2, 0x7c1	// Read CSR
	li x15, -1
	csrrw x17, 0x7c1, x15	// Write all 1s to CSR
	csrrw x17, 0x7c1, x0	// Write all 0s to CSR
	csrrw x17, 0x7c1, x2	// Restore CSR

// Testing CSR 0x7c2
	csrr x17, 0x7c2	// Read CSR
	li x18, -1
	csrrw x20, 0x7c2, x18	// Write all 1s to CSR
	csrrw x20, 0x7c2, x0	// Write all 0s to CSR
	csrrw x20, 0x7c2, x17	// Restore CSR

// Testing CSR 0x7c3
	csrr x19, 0x7c3	// Read CSR
	li x18, -1
	csrrw x24, 0x7c3, x18	// Write all 1s to CSR
	csrrw x24, 0x7c3, x0	// Write all 0s to CSR
	csrrw x24, 0x7c3, x19	// Restore CSR

// Testing CSR 0x7c4
	csrr x22, 0x7c4	// Read CSR
	li x13, -1
	csrrw x28, 0x7c4, x13	// Write all 1s to CSR
	csrrw x28, 0x7c4, x0	// Write all 0s to CSR
	csrrw x28, 0x7c4, x22	// Restore CSR

// Testing CSR 0x7c5
	csrr x14, 0x7c5	// Read CSR
	li x11, -1
	csrrw x20, 0x7c5, x11	// Write all 1s to CSR
	csrrw x20, 0x7c5, x0	// Write all 0s to CSR
	csrrw x20, 0x7c5, x14	// Restore CSR

// Testing CSR 0x7c6
	csrr x26, 0x7c6	// Read CSR
	li x11, -1
	csrrw x8, 0x7c6, x11	// Write all 1s to CSR
	csrrw x8, 0x7c6, x0	// Write all 0s to CSR
	csrrw x8, 0x7c6, x26	// Restore CSR

// Testing CSR 0x7c7
	csrr x11, 0x7c7	// Read CSR
	li x16, -1
	csrrw x5, 0x7c7, x16	// Write all 1s to CSR
	csrrw x5, 0x7c7, x0	// Write all 0s to CSR
	csrrw x5, 0x7c7, x11	// Restore CSR

// Testing CSR 0x7c8
	csrr x17, 0x7c8	// Read CSR
	li x24, -1
	csrrw x28, 0x7c8, x24	// Write all 1s to CSR
	csrrw x28, 0x7c8, x0	// Write all 0s to CSR
	csrrw x28, 0x7c8, x17	// Restore CSR

// Testing CSR 0x7c9
	csrr x1, 0x7c9	// Read CSR
	li x24, -1
	csrrw x16, 0x7c9, x24	// Write all 1s to CSR
	csrrw x16, 0x7c9, x0	// Write all 0s to CSR
	csrrw x16, 0x7c9, x1	// Restore CSR

// Testing CSR 0x7ca
	csrr x26, 0x7ca	// Read CSR
	li x5, -1
	csrrw x1, 0x7ca, x5	// Write all 1s to CSR
	csrrw x1, 0x7ca, x0	// Write all 0s to CSR
	csrrw x1, 0x7ca, x26	// Restore CSR

// Testing CSR 0x7cb
	csrr x3, 0x7cb	// Read CSR
	li x18, -1
	csrrw x28, 0x7cb, x18	// Write all 1s to CSR
	csrrw x28, 0x7cb, x0	// Write all 0s to CSR
	csrrw x28, 0x7cb, x3	// Restore CSR

// Testing CSR 0x7cc
	csrr x1, 0x7cc	// Read CSR
	li x28, -1
	csrrw x5, 0x7cc, x28	// Write all 1s to CSR
	csrrw x5, 0x7cc, x0	// Write all 0s to CSR
	csrrw x5, 0x7cc, x1	// Restore CSR

// Testing CSR 0x7cd
	csrr x25, 0x7cd	// Read CSR
	li x28, -1
	csrrw x4, 0x7cd, x28	// Write all 1s to CSR
	csrrw x4, 0x7cd, x0	// Write all 0s to CSR
	csrrw x4, 0x7cd, x25	// Restore CSR

// Testing CSR 0x7ce
	csrr x2, 0x7ce	// Read CSR
	li x11, -1
	csrrw x30, 0x7ce, x11	// Write all 1s to CSR
	csrrw x30, 0x7ce, x0	// Write all 0s to CSR
	csrrw x30, 0x7ce, x2	// Restore CSR

// Testing CSR 0x7cf
	csrr x10, 0x7cf	// Read CSR
	li x22, -1
	csrrw x7, 0x7cf, x22	// Write all 1s to CSR
	csrrw x7, 0x7cf, x0	// Write all 0s to CSR
	csrrw x7, 0x7cf, x10	// Restore CSR

// Testing CSR 0x7d0
	csrr x25, 0x7d0	// Read CSR
	li x3, -1
	csrrw x22, 0x7d0, x3	// Write all 1s to CSR
	csrrw x22, 0x7d0, x0	// Write all 0s to CSR
	csrrw x22, 0x7d0, x25	// Restore CSR

// Testing CSR 0x7d1
	csrr x2, 0x7d1	// Read CSR
	li x25, -1
	csrrw x8, 0x7d1, x25	// Write all 1s to CSR
	csrrw x8, 0x7d1, x0	// Write all 0s to CSR
	csrrw x8, 0x7d1, x2	// Restore CSR

// Testing CSR 0x7d2
	csrr x24, 0x7d2	// Read CSR
	li x6, -1
	csrrw x29, 0x7d2, x6	// Write all 1s to CSR
	csrrw x29, 0x7d2, x0	// Write all 0s to CSR
	csrrw x29, 0x7d2, x24	// Restore CSR

// Testing CSR 0x7d3
	csrr x26, 0x7d3	// Read CSR
	li x12, -1
	csrrw x31, 0x7d3, x12	// Write all 1s to CSR
	csrrw x31, 0x7d3, x0	// Write all 0s to CSR
	csrrw x31, 0x7d3, x26	// Restore CSR

// Testing CSR 0x7d4
	csrr x13, 0x7d4	// Read CSR
	li x21, -1
	csrrw x31, 0x7d4, x21	// Write all 1s to CSR
	csrrw x31, 0x7d4, x0	// Write all 0s to CSR
	csrrw x31, 0x7d4, x13	// Restore CSR

// Testing CSR 0x7d5
	csrr x17, 0x7d5	// Read CSR
	li x20, -1
	csrrw x22, 0x7d5, x20	// Write all 1s to CSR
	csrrw x22, 0x7d5, x0	// Write all 0s to CSR
	csrrw x22, 0x7d5, x17	// Restore CSR

// Testing CSR 0x7d6
	csrr x12, 0x7d6	// Read CSR
	li x29, -1
	csrrw x14, 0x7d6, x29	// Write all 1s to CSR
	csrrw x14, 0x7d6, x0	// Write all 0s to CSR
	csrrw x14, 0x7d6, x12	// Restore CSR

// Testing CSR 0x7d7
	csrr x7, 0x7d7	// Read CSR
	li x13, -1
	csrrw x24, 0x7d7, x13	// Write all 1s to CSR
	csrrw x24, 0x7d7, x0	// Write all 0s to CSR
	csrrw x24, 0x7d7, x7	// Restore CSR

// Testing CSR 0x7d8
	csrr x2, 0x7d8	// Read CSR
	li x20, -1
	csrrw x24, 0x7d8, x20	// Write all 1s to CSR
	csrrw x24, 0x7d8, x0	// Write all 0s to CSR
	csrrw x24, 0x7d8, x2	// Restore CSR

// Testing CSR 0x7d9
	csrr x8, 0x7d9	// Read CSR
	li x19, -1
	csrrw x1, 0x7d9, x19	// Write all 1s to CSR
	csrrw x1, 0x7d9, x0	// Write all 0s to CSR
	csrrw x1, 0x7d9, x8	// Restore CSR

// Testing CSR 0x7da
	csrr x29, 0x7da	// Read CSR
	li x15, -1
	csrrw x24, 0x7da, x15	// Write all 1s to CSR
	csrrw x24, 0x7da, x0	// Write all 0s to CSR
	csrrw x24, 0x7da, x29	// Restore CSR

// Testing CSR 0x7db
	csrr x1, 0x7db	// Read CSR
	li x14, -1
	csrrw x5, 0x7db, x14	// Write all 1s to CSR
	csrrw x5, 0x7db, x0	// Write all 0s to CSR
	csrrw x5, 0x7db, x1	// Restore CSR

// Testing CSR 0x7dc
	csrr x25, 0x7dc	// Read CSR
	li x7, -1
	csrrw x3, 0x7dc, x7	// Write all 1s to CSR
	csrrw x3, 0x7dc, x0	// Write all 0s to CSR
	csrrw x3, 0x7dc, x25	// Restore CSR

// Testing CSR 0x7dd
	csrr x19, 0x7dd	// Read CSR
	li x21, -1
	csrrw x5, 0x7dd, x21	// Write all 1s to CSR
	csrrw x5, 0x7dd, x0	// Write all 0s to CSR
	csrrw x5, 0x7dd, x19	// Restore CSR

// Testing CSR 0x7de
	csrr x30, 0x7de	// Read CSR
	li x26, -1
	csrrw x29, 0x7de, x26	// Write all 1s to CSR
	csrrw x29, 0x7de, x0	// Write all 0s to CSR
	csrrw x29, 0x7de, x30	// Restore CSR

// Testing CSR 0x7df
	csrr x11, 0x7df	// Read CSR
	li x25, -1
	csrrw x9, 0x7df, x25	// Write all 1s to CSR
	csrrw x9, 0x7df, x0	// Write all 0s to CSR
	csrrw x9, 0x7df, x11	// Restore CSR

// Testing CSR 0x7e0
	csrr x29, 0x7e0	// Read CSR
	li x10, -1
	csrrw x25, 0x7e0, x10	// Write all 1s to CSR
	csrrw x25, 0x7e0, x0	// Write all 0s to CSR
	csrrw x25, 0x7e0, x29	// Restore CSR

// Testing CSR 0x7e1
	csrr x29, 0x7e1	// Read CSR
	li x15, -1
	csrrw x11, 0x7e1, x15	// Write all 1s to CSR
	csrrw x11, 0x7e1, x0	// Write all 0s to CSR
	csrrw x11, 0x7e1, x29	// Restore CSR

// Testing CSR 0x7e2
	csrr x17, 0x7e2	// Read CSR
	li x14, -1
	csrrw x16, 0x7e2, x14	// Write all 1s to CSR
	csrrw x16, 0x7e2, x0	// Write all 0s to CSR
	csrrw x16, 0x7e2, x17	// Restore CSR

// Testing CSR 0x7e3
	csrr x11, 0x7e3	// Read CSR
	li x26, -1
	csrrw x9, 0x7e3, x26	// Write all 1s to CSR
	csrrw x9, 0x7e3, x0	// Write all 0s to CSR
	csrrw x9, 0x7e3, x11	// Restore CSR

// Testing CSR 0x7e4
	csrr x17, 0x7e4	// Read CSR
	li x28, -1
	csrrw x10, 0x7e4, x28	// Write all 1s to CSR
	csrrw x10, 0x7e4, x0	// Write all 0s to CSR
	csrrw x10, 0x7e4, x17	// Restore CSR

// Testing CSR 0x7e5
	csrr x15, 0x7e5	// Read CSR
	li x26, -1
	csrrw x18, 0x7e5, x26	// Write all 1s to CSR
	csrrw x18, 0x7e5, x0	// Write all 0s to CSR
	csrrw x18, 0x7e5, x15	// Restore CSR

// Testing CSR 0x7e6
	csrr x11, 0x7e6	// Read CSR
	li x13, -1
	csrrw x22, 0x7e6, x13	// Write all 1s to CSR
	csrrw x22, 0x7e6, x0	// Write all 0s to CSR
	csrrw x22, 0x7e6, x11	// Restore CSR

// Testing CSR 0x7e7
	csrr x11, 0x7e7	// Read CSR
	li x30, -1
	csrrw x13, 0x7e7, x30	// Write all 1s to CSR
	csrrw x13, 0x7e7, x0	// Write all 0s to CSR
	csrrw x13, 0x7e7, x11	// Restore CSR

// Testing CSR 0x7e8
	csrr x29, 0x7e8	// Read CSR
	li x25, -1
	csrrw x9, 0x7e8, x25	// Write all 1s to CSR
	csrrw x9, 0x7e8, x0	// Write all 0s to CSR
	csrrw x9, 0x7e8, x29	// Restore CSR

// Testing CSR 0x7e9
	csrr x30, 0x7e9	// Read CSR
	li x23, -1
	csrrw x1, 0x7e9, x23	// Write all 1s to CSR
	csrrw x1, 0x7e9, x0	// Write all 0s to CSR
	csrrw x1, 0x7e9, x30	// Restore CSR

// Testing CSR 0x7ea
	csrr x7, 0x7ea	// Read CSR
	li x27, -1
	csrrw x30, 0x7ea, x27	// Write all 1s to CSR
	csrrw x30, 0x7ea, x0	// Write all 0s to CSR
	csrrw x30, 0x7ea, x7	// Restore CSR

// Testing CSR 0x7eb
	csrr x23, 0x7eb	// Read CSR
	li x15, -1
	csrrw x25, 0x7eb, x15	// Write all 1s to CSR
	csrrw x25, 0x7eb, x0	// Write all 0s to CSR
	csrrw x25, 0x7eb, x23	// Restore CSR

// Testing CSR 0x7ec
	csrr x10, 0x7ec	// Read CSR
	li x13, -1
	csrrw x14, 0x7ec, x13	// Write all 1s to CSR
	csrrw x14, 0x7ec, x0	// Write all 0s to CSR
	csrrw x14, 0x7ec, x10	// Restore CSR

// Testing CSR 0x7ed
	csrr x24, 0x7ed	// Read CSR
	li x28, -1
	csrrw x27, 0x7ed, x28	// Write all 1s to CSR
	csrrw x27, 0x7ed, x0	// Write all 0s to CSR
	csrrw x27, 0x7ed, x24	// Restore CSR

// Testing CSR 0x7ee
	csrr x30, 0x7ee	// Read CSR
	li x27, -1
	csrrw x22, 0x7ee, x27	// Write all 1s to CSR
	csrrw x22, 0x7ee, x0	// Write all 0s to CSR
	csrrw x22, 0x7ee, x30	// Restore CSR

// Testing CSR 0x7ef
	csrr x5, 0x7ef	// Read CSR
	li x30, -1
	csrrw x31, 0x7ef, x30	// Write all 1s to CSR
	csrrw x31, 0x7ef, x0	// Write all 0s to CSR
	csrrw x31, 0x7ef, x5	// Restore CSR

// Testing CSR 0x7f0
	csrr x6, 0x7f0	// Read CSR
	li x16, -1
	csrrw x7, 0x7f0, x16	// Write all 1s to CSR
	csrrw x7, 0x7f0, x0	// Write all 0s to CSR
	csrrw x7, 0x7f0, x6	// Restore CSR

// Testing CSR 0x7f1
	csrr x31, 0x7f1	// Read CSR
	li x6, -1
	csrrw x20, 0x7f1, x6	// Write all 1s to CSR
	csrrw x20, 0x7f1, x0	// Write all 0s to CSR
	csrrw x20, 0x7f1, x31	// Restore CSR

// Testing CSR 0x7f2
	csrr x31, 0x7f2	// Read CSR
	li x30, -1
	csrrw x7, 0x7f2, x30	// Write all 1s to CSR
	csrrw x7, 0x7f2, x0	// Write all 0s to CSR
	csrrw x7, 0x7f2, x31	// Restore CSR

// Testing CSR 0x7f3
	csrr x3, 0x7f3	// Read CSR
	li x28, -1
	csrrw x30, 0x7f3, x28	// Write all 1s to CSR
	csrrw x30, 0x7f3, x0	// Write all 0s to CSR
	csrrw x30, 0x7f3, x3	// Restore CSR

// Testing CSR 0x7f4
	csrr x9, 0x7f4	// Read CSR
	li x17, -1
	csrrw x27, 0x7f4, x17	// Write all 1s to CSR
	csrrw x27, 0x7f4, x0	// Write all 0s to CSR
	csrrw x27, 0x7f4, x9	// Restore CSR

// Testing CSR 0x7f5
	csrr x17, 0x7f5	// Read CSR
	li x6, -1
	csrrw x19, 0x7f5, x6	// Write all 1s to CSR
	csrrw x19, 0x7f5, x0	// Write all 0s to CSR
	csrrw x19, 0x7f5, x17	// Restore CSR

// Testing CSR 0x7f6
	csrr x28, 0x7f6	// Read CSR
	li x6, -1
	csrrw x22, 0x7f6, x6	// Write all 1s to CSR
	csrrw x22, 0x7f6, x0	// Write all 0s to CSR
	csrrw x22, 0x7f6, x28	// Restore CSR

// Testing CSR 0x7f7
	csrr x16, 0x7f7	// Read CSR
	li x4, -1
	csrrw x30, 0x7f7, x4	// Write all 1s to CSR
	csrrw x30, 0x7f7, x0	// Write all 0s to CSR
	csrrw x30, 0x7f7, x16	// Restore CSR

// Testing CSR 0x7f8
	csrr x8, 0x7f8	// Read CSR
	li x14, -1
	csrrw x31, 0x7f8, x14	// Write all 1s to CSR
	csrrw x31, 0x7f8, x0	// Write all 0s to CSR
	csrrw x31, 0x7f8, x8	// Restore CSR

// Testing CSR 0x7f9
	csrr x6, 0x7f9	// Read CSR
	li x4, -1
	csrrw x27, 0x7f9, x4	// Write all 1s to CSR
	csrrw x27, 0x7f9, x0	// Write all 0s to CSR
	csrrw x27, 0x7f9, x6	// Restore CSR

// Testing CSR 0x7fa
	csrr x31, 0x7fa	// Read CSR
	li x2, -1
	csrrw x17, 0x7fa, x2	// Write all 1s to CSR
	csrrw x17, 0x7fa, x0	// Write all 0s to CSR
	csrrw x17, 0x7fa, x31	// Restore CSR

// Testing CSR 0x7fb
	csrr x2, 0x7fb	// Read CSR
	li x23, -1
	csrrw x24, 0x7fb, x23	// Write all 1s to CSR
	csrrw x24, 0x7fb, x0	// Write all 0s to CSR
	csrrw x24, 0x7fb, x2	// Restore CSR

// Testing CSR 0x7fc
	csrr x3, 0x7fc	// Read CSR
	li x26, -1
	csrrw x24, 0x7fc, x26	// Write all 1s to CSR
	csrrw x24, 0x7fc, x0	// Write all 0s to CSR
	csrrw x24, 0x7fc, x3	// Restore CSR

// Testing CSR 0x7fd
	csrr x24, 0x7fd	// Read CSR
	li x4, -1
	csrrw x29, 0x7fd, x4	// Write all 1s to CSR
	csrrw x29, 0x7fd, x0	// Write all 0s to CSR
	csrrw x29, 0x7fd, x24	// Restore CSR

// Testing CSR 0x7fe
	csrr x31, 0x7fe	// Read CSR
	li x19, -1
	csrrw x5, 0x7fe, x19	// Write all 1s to CSR
	csrrw x5, 0x7fe, x0	// Write all 0s to CSR
	csrrw x5, 0x7fe, x31	// Restore CSR

// Testing CSR 0x7ff
	csrr x5, 0x7ff	// Read CSR
	li x19, -1
	csrrw x7, 0x7ff, x19	// Write all 1s to CSR
	csrrw x7, 0x7ff, x0	// Write all 0s to CSR
	csrrw x7, 0x7ff, x5	// Restore CSR

// Testing CSR 0x800
	csrr x21, 0x800	// Read CSR
	li x12, -1
	csrrw x4, 0x800, x12	// Write all 1s to CSR
	csrrw x4, 0x800, x0	// Write all 0s to CSR
	csrrw x4, 0x800, x21	// Restore CSR

// Testing CSR 0x801
	csrr x4, 0x801	// Read CSR
	li x13, -1
	csrrw x16, 0x801, x13	// Write all 1s to CSR
	csrrw x16, 0x801, x0	// Write all 0s to CSR
	csrrw x16, 0x801, x4	// Restore CSR

// Testing CSR 0x802
	csrr x5, 0x802	// Read CSR
	li x11, -1
	csrrw x19, 0x802, x11	// Write all 1s to CSR
	csrrw x19, 0x802, x0	// Write all 0s to CSR
	csrrw x19, 0x802, x5	// Restore CSR

// Testing CSR 0x803
	csrr x29, 0x803	// Read CSR
	li x17, -1
	csrrw x7, 0x803, x17	// Write all 1s to CSR
	csrrw x7, 0x803, x0	// Write all 0s to CSR
	csrrw x7, 0x803, x29	// Restore CSR

// Testing CSR 0x804
	csrr x20, 0x804	// Read CSR
	li x8, -1
	csrrw x25, 0x804, x8	// Write all 1s to CSR
	csrrw x25, 0x804, x0	// Write all 0s to CSR
	csrrw x25, 0x804, x20	// Restore CSR

// Testing CSR 0x805
	csrr x20, 0x805	// Read CSR
	li x19, -1
	csrrw x15, 0x805, x19	// Write all 1s to CSR
	csrrw x15, 0x805, x0	// Write all 0s to CSR
	csrrw x15, 0x805, x20	// Restore CSR

// Testing CSR 0x806
	csrr x20, 0x806	// Read CSR
	li x10, -1
	csrrw x4, 0x806, x10	// Write all 1s to CSR
	csrrw x4, 0x806, x0	// Write all 0s to CSR
	csrrw x4, 0x806, x20	// Restore CSR

// Testing CSR 0x807
	csrr x5, 0x807	// Read CSR
	li x14, -1
	csrrw x27, 0x807, x14	// Write all 1s to CSR
	csrrw x27, 0x807, x0	// Write all 0s to CSR
	csrrw x27, 0x807, x5	// Restore CSR

// Testing CSR 0x808
	csrr x4, 0x808	// Read CSR
	li x24, -1
	csrrw x29, 0x808, x24	// Write all 1s to CSR
	csrrw x29, 0x808, x0	// Write all 0s to CSR
	csrrw x29, 0x808, x4	// Restore CSR

// Testing CSR 0x809
	csrr x7, 0x809	// Read CSR
	li x31, -1
	csrrw x23, 0x809, x31	// Write all 1s to CSR
	csrrw x23, 0x809, x0	// Write all 0s to CSR
	csrrw x23, 0x809, x7	// Restore CSR

// Testing CSR 0x80a
	csrr x5, 0x80a	// Read CSR
	li x6, -1
	csrrw x30, 0x80a, x6	// Write all 1s to CSR
	csrrw x30, 0x80a, x0	// Write all 0s to CSR
	csrrw x30, 0x80a, x5	// Restore CSR

// Testing CSR 0x80b
	csrr x23, 0x80b	// Read CSR
	li x9, -1
	csrrw x26, 0x80b, x9	// Write all 1s to CSR
	csrrw x26, 0x80b, x0	// Write all 0s to CSR
	csrrw x26, 0x80b, x23	// Restore CSR

// Testing CSR 0x80c
	csrr x22, 0x80c	// Read CSR
	li x11, -1
	csrrw x6, 0x80c, x11	// Write all 1s to CSR
	csrrw x6, 0x80c, x0	// Write all 0s to CSR
	csrrw x6, 0x80c, x22	// Restore CSR

// Testing CSR 0x80d
	csrr x15, 0x80d	// Read CSR
	li x23, -1
	csrrw x11, 0x80d, x23	// Write all 1s to CSR
	csrrw x11, 0x80d, x0	// Write all 0s to CSR
	csrrw x11, 0x80d, x15	// Restore CSR

// Testing CSR 0x80e
	csrr x18, 0x80e	// Read CSR
	li x4, -1
	csrrw x25, 0x80e, x4	// Write all 1s to CSR
	csrrw x25, 0x80e, x0	// Write all 0s to CSR
	csrrw x25, 0x80e, x18	// Restore CSR

// Testing CSR 0x80f
	csrr x3, 0x80f	// Read CSR
	li x13, -1
	csrrw x1, 0x80f, x13	// Write all 1s to CSR
	csrrw x1, 0x80f, x0	// Write all 0s to CSR
	csrrw x1, 0x80f, x3	// Restore CSR

// Testing CSR 0x810
	csrr x2, 0x810	// Read CSR
	li x7, -1
	csrrw x11, 0x810, x7	// Write all 1s to CSR
	csrrw x11, 0x810, x0	// Write all 0s to CSR
	csrrw x11, 0x810, x2	// Restore CSR

// Testing CSR 0x811
	csrr x14, 0x811	// Read CSR
	li x29, -1
	csrrw x8, 0x811, x29	// Write all 1s to CSR
	csrrw x8, 0x811, x0	// Write all 0s to CSR
	csrrw x8, 0x811, x14	// Restore CSR

// Testing CSR 0x812
	csrr x26, 0x812	// Read CSR
	li x11, -1
	csrrw x30, 0x812, x11	// Write all 1s to CSR
	csrrw x30, 0x812, x0	// Write all 0s to CSR
	csrrw x30, 0x812, x26	// Restore CSR

// Testing CSR 0x813
	csrr x14, 0x813	// Read CSR
	li x19, -1
	csrrw x4, 0x813, x19	// Write all 1s to CSR
	csrrw x4, 0x813, x0	// Write all 0s to CSR
	csrrw x4, 0x813, x14	// Restore CSR

// Testing CSR 0x814
	csrr x11, 0x814	// Read CSR
	li x3, -1
	csrrw x16, 0x814, x3	// Write all 1s to CSR
	csrrw x16, 0x814, x0	// Write all 0s to CSR
	csrrw x16, 0x814, x11	// Restore CSR

// Testing CSR 0x815
	csrr x20, 0x815	// Read CSR
	li x16, -1
	csrrw x10, 0x815, x16	// Write all 1s to CSR
	csrrw x10, 0x815, x0	// Write all 0s to CSR
	csrrw x10, 0x815, x20	// Restore CSR

// Testing CSR 0x816
	csrr x8, 0x816	// Read CSR
	li x13, -1
	csrrw x28, 0x816, x13	// Write all 1s to CSR
	csrrw x28, 0x816, x0	// Write all 0s to CSR
	csrrw x28, 0x816, x8	// Restore CSR

// Testing CSR 0x817
	csrr x23, 0x817	// Read CSR
	li x2, -1
	csrrw x12, 0x817, x2	// Write all 1s to CSR
	csrrw x12, 0x817, x0	// Write all 0s to CSR
	csrrw x12, 0x817, x23	// Restore CSR

// Testing CSR 0x818
	csrr x11, 0x818	// Read CSR
	li x6, -1
	csrrw x3, 0x818, x6	// Write all 1s to CSR
	csrrw x3, 0x818, x0	// Write all 0s to CSR
	csrrw x3, 0x818, x11	// Restore CSR

// Testing CSR 0x819
	csrr x18, 0x819	// Read CSR
	li x9, -1
	csrrw x31, 0x819, x9	// Write all 1s to CSR
	csrrw x31, 0x819, x0	// Write all 0s to CSR
	csrrw x31, 0x819, x18	// Restore CSR

// Testing CSR 0x81a
	csrr x15, 0x81a	// Read CSR
	li x1, -1
	csrrw x26, 0x81a, x1	// Write all 1s to CSR
	csrrw x26, 0x81a, x0	// Write all 0s to CSR
	csrrw x26, 0x81a, x15	// Restore CSR

// Testing CSR 0x81b
	csrr x26, 0x81b	// Read CSR
	li x20, -1
	csrrw x21, 0x81b, x20	// Write all 1s to CSR
	csrrw x21, 0x81b, x0	// Write all 0s to CSR
	csrrw x21, 0x81b, x26	// Restore CSR

// Testing CSR 0x81c
	csrr x6, 0x81c	// Read CSR
	li x28, -1
	csrrw x5, 0x81c, x28	// Write all 1s to CSR
	csrrw x5, 0x81c, x0	// Write all 0s to CSR
	csrrw x5, 0x81c, x6	// Restore CSR

// Testing CSR 0x81d
	csrr x24, 0x81d	// Read CSR
	li x18, -1
	csrrw x19, 0x81d, x18	// Write all 1s to CSR
	csrrw x19, 0x81d, x0	// Write all 0s to CSR
	csrrw x19, 0x81d, x24	// Restore CSR

// Testing CSR 0x81e
	csrr x11, 0x81e	// Read CSR
	li x22, -1
	csrrw x24, 0x81e, x22	// Write all 1s to CSR
	csrrw x24, 0x81e, x0	// Write all 0s to CSR
	csrrw x24, 0x81e, x11	// Restore CSR

// Testing CSR 0x81f
	csrr x15, 0x81f	// Read CSR
	li x28, -1
	csrrw x23, 0x81f, x28	// Write all 1s to CSR
	csrrw x23, 0x81f, x0	// Write all 0s to CSR
	csrrw x23, 0x81f, x15	// Restore CSR

// Testing CSR 0x820
	csrr x3, 0x820	// Read CSR
	li x26, -1
	csrrw x13, 0x820, x26	// Write all 1s to CSR
	csrrw x13, 0x820, x0	// Write all 0s to CSR
	csrrw x13, 0x820, x3	// Restore CSR

// Testing CSR 0x821
	csrr x27, 0x821	// Read CSR
	li x9, -1
	csrrw x15, 0x821, x9	// Write all 1s to CSR
	csrrw x15, 0x821, x0	// Write all 0s to CSR
	csrrw x15, 0x821, x27	// Restore CSR

// Testing CSR 0x822
	csrr x10, 0x822	// Read CSR
	li x1, -1
	csrrw x13, 0x822, x1	// Write all 1s to CSR
	csrrw x13, 0x822, x0	// Write all 0s to CSR
	csrrw x13, 0x822, x10	// Restore CSR

// Testing CSR 0x823
	csrr x28, 0x823	// Read CSR
	li x1, -1
	csrrw x26, 0x823, x1	// Write all 1s to CSR
	csrrw x26, 0x823, x0	// Write all 0s to CSR
	csrrw x26, 0x823, x28	// Restore CSR

// Testing CSR 0x824
	csrr x29, 0x824	// Read CSR
	li x15, -1
	csrrw x26, 0x824, x15	// Write all 1s to CSR
	csrrw x26, 0x824, x0	// Write all 0s to CSR
	csrrw x26, 0x824, x29	// Restore CSR

// Testing CSR 0x825
	csrr x4, 0x825	// Read CSR
	li x5, -1
	csrrw x26, 0x825, x5	// Write all 1s to CSR
	csrrw x26, 0x825, x0	// Write all 0s to CSR
	csrrw x26, 0x825, x4	// Restore CSR

// Testing CSR 0x826
	csrr x27, 0x826	// Read CSR
	li x10, -1
	csrrw x11, 0x826, x10	// Write all 1s to CSR
	csrrw x11, 0x826, x0	// Write all 0s to CSR
	csrrw x11, 0x826, x27	// Restore CSR

// Testing CSR 0x827
	csrr x10, 0x827	// Read CSR
	li x20, -1
	csrrw x5, 0x827, x20	// Write all 1s to CSR
	csrrw x5, 0x827, x0	// Write all 0s to CSR
	csrrw x5, 0x827, x10	// Restore CSR

// Testing CSR 0x828
	csrr x16, 0x828	// Read CSR
	li x26, -1
	csrrw x15, 0x828, x26	// Write all 1s to CSR
	csrrw x15, 0x828, x0	// Write all 0s to CSR
	csrrw x15, 0x828, x16	// Restore CSR

// Testing CSR 0x829
	csrr x1, 0x829	// Read CSR
	li x20, -1
	csrrw x11, 0x829, x20	// Write all 1s to CSR
	csrrw x11, 0x829, x0	// Write all 0s to CSR
	csrrw x11, 0x829, x1	// Restore CSR

// Testing CSR 0x82a
	csrr x30, 0x82a	// Read CSR
	li x5, -1
	csrrw x14, 0x82a, x5	// Write all 1s to CSR
	csrrw x14, 0x82a, x0	// Write all 0s to CSR
	csrrw x14, 0x82a, x30	// Restore CSR

// Testing CSR 0x82b
	csrr x26, 0x82b	// Read CSR
	li x1, -1
	csrrw x10, 0x82b, x1	// Write all 1s to CSR
	csrrw x10, 0x82b, x0	// Write all 0s to CSR
	csrrw x10, 0x82b, x26	// Restore CSR

// Testing CSR 0x82c
	csrr x28, 0x82c	// Read CSR
	li x6, -1
	csrrw x31, 0x82c, x6	// Write all 1s to CSR
	csrrw x31, 0x82c, x0	// Write all 0s to CSR
	csrrw x31, 0x82c, x28	// Restore CSR

// Testing CSR 0x82d
	csrr x19, 0x82d	// Read CSR
	li x26, -1
	csrrw x6, 0x82d, x26	// Write all 1s to CSR
	csrrw x6, 0x82d, x0	// Write all 0s to CSR
	csrrw x6, 0x82d, x19	// Restore CSR

// Testing CSR 0x82e
	csrr x3, 0x82e	// Read CSR
	li x14, -1
	csrrw x28, 0x82e, x14	// Write all 1s to CSR
	csrrw x28, 0x82e, x0	// Write all 0s to CSR
	csrrw x28, 0x82e, x3	// Restore CSR

// Testing CSR 0x82f
	csrr x25, 0x82f	// Read CSR
	li x17, -1
	csrrw x28, 0x82f, x17	// Write all 1s to CSR
	csrrw x28, 0x82f, x0	// Write all 0s to CSR
	csrrw x28, 0x82f, x25	// Restore CSR

// Testing CSR 0x830
	csrr x15, 0x830	// Read CSR
	li x28, -1
	csrrw x27, 0x830, x28	// Write all 1s to CSR
	csrrw x27, 0x830, x0	// Write all 0s to CSR
	csrrw x27, 0x830, x15	// Restore CSR

// Testing CSR 0x831
	csrr x30, 0x831	// Read CSR
	li x18, -1
	csrrw x21, 0x831, x18	// Write all 1s to CSR
	csrrw x21, 0x831, x0	// Write all 0s to CSR
	csrrw x21, 0x831, x30	// Restore CSR

// Testing CSR 0x832
	csrr x25, 0x832	// Read CSR
	li x5, -1
	csrrw x30, 0x832, x5	// Write all 1s to CSR
	csrrw x30, 0x832, x0	// Write all 0s to CSR
	csrrw x30, 0x832, x25	// Restore CSR

// Testing CSR 0x833
	csrr x14, 0x833	// Read CSR
	li x27, -1
	csrrw x31, 0x833, x27	// Write all 1s to CSR
	csrrw x31, 0x833, x0	// Write all 0s to CSR
	csrrw x31, 0x833, x14	// Restore CSR

// Testing CSR 0x834
	csrr x11, 0x834	// Read CSR
	li x5, -1
	csrrw x23, 0x834, x5	// Write all 1s to CSR
	csrrw x23, 0x834, x0	// Write all 0s to CSR
	csrrw x23, 0x834, x11	// Restore CSR

// Testing CSR 0x835
	csrr x30, 0x835	// Read CSR
	li x18, -1
	csrrw x12, 0x835, x18	// Write all 1s to CSR
	csrrw x12, 0x835, x0	// Write all 0s to CSR
	csrrw x12, 0x835, x30	// Restore CSR

// Testing CSR 0x836
	csrr x19, 0x836	// Read CSR
	li x6, -1
	csrrw x27, 0x836, x6	// Write all 1s to CSR
	csrrw x27, 0x836, x0	// Write all 0s to CSR
	csrrw x27, 0x836, x19	// Restore CSR

// Testing CSR 0x837
	csrr x3, 0x837	// Read CSR
	li x4, -1
	csrrw x8, 0x837, x4	// Write all 1s to CSR
	csrrw x8, 0x837, x0	// Write all 0s to CSR
	csrrw x8, 0x837, x3	// Restore CSR

// Testing CSR 0x838
	csrr x7, 0x838	// Read CSR
	li x16, -1
	csrrw x29, 0x838, x16	// Write all 1s to CSR
	csrrw x29, 0x838, x0	// Write all 0s to CSR
	csrrw x29, 0x838, x7	// Restore CSR

// Testing CSR 0x839
	csrr x23, 0x839	// Read CSR
	li x28, -1
	csrrw x21, 0x839, x28	// Write all 1s to CSR
	csrrw x21, 0x839, x0	// Write all 0s to CSR
	csrrw x21, 0x839, x23	// Restore CSR

// Testing CSR 0x83a
	csrr x31, 0x83a	// Read CSR
	li x7, -1
	csrrw x1, 0x83a, x7	// Write all 1s to CSR
	csrrw x1, 0x83a, x0	// Write all 0s to CSR
	csrrw x1, 0x83a, x31	// Restore CSR

// Testing CSR 0x83b
	csrr x26, 0x83b	// Read CSR
	li x28, -1
	csrrw x13, 0x83b, x28	// Write all 1s to CSR
	csrrw x13, 0x83b, x0	// Write all 0s to CSR
	csrrw x13, 0x83b, x26	// Restore CSR

// Testing CSR 0x83c
	csrr x11, 0x83c	// Read CSR
	li x9, -1
	csrrw x12, 0x83c, x9	// Write all 1s to CSR
	csrrw x12, 0x83c, x0	// Write all 0s to CSR
	csrrw x12, 0x83c, x11	// Restore CSR

// Testing CSR 0x83d
	csrr x19, 0x83d	// Read CSR
	li x9, -1
	csrrw x15, 0x83d, x9	// Write all 1s to CSR
	csrrw x15, 0x83d, x0	// Write all 0s to CSR
	csrrw x15, 0x83d, x19	// Restore CSR

// Testing CSR 0x83e
	csrr x30, 0x83e	// Read CSR
	li x17, -1
	csrrw x24, 0x83e, x17	// Write all 1s to CSR
	csrrw x24, 0x83e, x0	// Write all 0s to CSR
	csrrw x24, 0x83e, x30	// Restore CSR

// Testing CSR 0x83f
	csrr x31, 0x83f	// Read CSR
	li x2, -1
	csrrw x10, 0x83f, x2	// Write all 1s to CSR
	csrrw x10, 0x83f, x0	// Write all 0s to CSR
	csrrw x10, 0x83f, x31	// Restore CSR

// Testing CSR 0x840
	csrr x28, 0x840	// Read CSR
	li x15, -1
	csrrw x14, 0x840, x15	// Write all 1s to CSR
	csrrw x14, 0x840, x0	// Write all 0s to CSR
	csrrw x14, 0x840, x28	// Restore CSR

// Testing CSR 0x841
	csrr x30, 0x841	// Read CSR
	li x28, -1
	csrrw x8, 0x841, x28	// Write all 1s to CSR
	csrrw x8, 0x841, x0	// Write all 0s to CSR
	csrrw x8, 0x841, x30	// Restore CSR

// Testing CSR 0x842
	csrr x29, 0x842	// Read CSR
	li x25, -1
	csrrw x24, 0x842, x25	// Write all 1s to CSR
	csrrw x24, 0x842, x0	// Write all 0s to CSR
	csrrw x24, 0x842, x29	// Restore CSR

// Testing CSR 0x843
	csrr x24, 0x843	// Read CSR
	li x16, -1
	csrrw x1, 0x843, x16	// Write all 1s to CSR
	csrrw x1, 0x843, x0	// Write all 0s to CSR
	csrrw x1, 0x843, x24	// Restore CSR

// Testing CSR 0x844
	csrr x17, 0x844	// Read CSR
	li x27, -1
	csrrw x20, 0x844, x27	// Write all 1s to CSR
	csrrw x20, 0x844, x0	// Write all 0s to CSR
	csrrw x20, 0x844, x17	// Restore CSR

// Testing CSR 0x845
	csrr x24, 0x845	// Read CSR
	li x13, -1
	csrrw x23, 0x845, x13	// Write all 1s to CSR
	csrrw x23, 0x845, x0	// Write all 0s to CSR
	csrrw x23, 0x845, x24	// Restore CSR

// Testing CSR 0x846
	csrr x26, 0x846	// Read CSR
	li x28, -1
	csrrw x11, 0x846, x28	// Write all 1s to CSR
	csrrw x11, 0x846, x0	// Write all 0s to CSR
	csrrw x11, 0x846, x26	// Restore CSR

// Testing CSR 0x847
	csrr x7, 0x847	// Read CSR
	li x31, -1
	csrrw x19, 0x847, x31	// Write all 1s to CSR
	csrrw x19, 0x847, x0	// Write all 0s to CSR
	csrrw x19, 0x847, x7	// Restore CSR

// Testing CSR 0x848
	csrr x12, 0x848	// Read CSR
	li x10, -1
	csrrw x26, 0x848, x10	// Write all 1s to CSR
	csrrw x26, 0x848, x0	// Write all 0s to CSR
	csrrw x26, 0x848, x12	// Restore CSR

// Testing CSR 0x849
	csrr x6, 0x849	// Read CSR
	li x23, -1
	csrrw x24, 0x849, x23	// Write all 1s to CSR
	csrrw x24, 0x849, x0	// Write all 0s to CSR
	csrrw x24, 0x849, x6	// Restore CSR

// Testing CSR 0x84a
	csrr x9, 0x84a	// Read CSR
	li x7, -1
	csrrw x26, 0x84a, x7	// Write all 1s to CSR
	csrrw x26, 0x84a, x0	// Write all 0s to CSR
	csrrw x26, 0x84a, x9	// Restore CSR

// Testing CSR 0x84b
	csrr x31, 0x84b	// Read CSR
	li x4, -1
	csrrw x12, 0x84b, x4	// Write all 1s to CSR
	csrrw x12, 0x84b, x0	// Write all 0s to CSR
	csrrw x12, 0x84b, x31	// Restore CSR

// Testing CSR 0x84c
	csrr x24, 0x84c	// Read CSR
	li x13, -1
	csrrw x5, 0x84c, x13	// Write all 1s to CSR
	csrrw x5, 0x84c, x0	// Write all 0s to CSR
	csrrw x5, 0x84c, x24	// Restore CSR

// Testing CSR 0x84d
	csrr x10, 0x84d	// Read CSR
	li x26, -1
	csrrw x9, 0x84d, x26	// Write all 1s to CSR
	csrrw x9, 0x84d, x0	// Write all 0s to CSR
	csrrw x9, 0x84d, x10	// Restore CSR

// Testing CSR 0x84e
	csrr x23, 0x84e	// Read CSR
	li x20, -1
	csrrw x27, 0x84e, x20	// Write all 1s to CSR
	csrrw x27, 0x84e, x0	// Write all 0s to CSR
	csrrw x27, 0x84e, x23	// Restore CSR

// Testing CSR 0x84f
	csrr x6, 0x84f	// Read CSR
	li x28, -1
	csrrw x13, 0x84f, x28	// Write all 1s to CSR
	csrrw x13, 0x84f, x0	// Write all 0s to CSR
	csrrw x13, 0x84f, x6	// Restore CSR

// Testing CSR 0x850
	csrr x1, 0x850	// Read CSR
	li x22, -1
	csrrw x31, 0x850, x22	// Write all 1s to CSR
	csrrw x31, 0x850, x0	// Write all 0s to CSR
	csrrw x31, 0x850, x1	// Restore CSR

// Testing CSR 0x851
	csrr x30, 0x851	// Read CSR
	li x27, -1
	csrrw x3, 0x851, x27	// Write all 1s to CSR
	csrrw x3, 0x851, x0	// Write all 0s to CSR
	csrrw x3, 0x851, x30	// Restore CSR

// Testing CSR 0x852
	csrr x27, 0x852	// Read CSR
	li x6, -1
	csrrw x30, 0x852, x6	// Write all 1s to CSR
	csrrw x30, 0x852, x0	// Write all 0s to CSR
	csrrw x30, 0x852, x27	// Restore CSR

// Testing CSR 0x853
	csrr x13, 0x853	// Read CSR
	li x14, -1
	csrrw x3, 0x853, x14	// Write all 1s to CSR
	csrrw x3, 0x853, x0	// Write all 0s to CSR
	csrrw x3, 0x853, x13	// Restore CSR

// Testing CSR 0x854
	csrr x3, 0x854	// Read CSR
	li x22, -1
	csrrw x19, 0x854, x22	// Write all 1s to CSR
	csrrw x19, 0x854, x0	// Write all 0s to CSR
	csrrw x19, 0x854, x3	// Restore CSR

// Testing CSR 0x855
	csrr x8, 0x855	// Read CSR
	li x18, -1
	csrrw x3, 0x855, x18	// Write all 1s to CSR
	csrrw x3, 0x855, x0	// Write all 0s to CSR
	csrrw x3, 0x855, x8	// Restore CSR

// Testing CSR 0x856
	csrr x7, 0x856	// Read CSR
	li x11, -1
	csrrw x24, 0x856, x11	// Write all 1s to CSR
	csrrw x24, 0x856, x0	// Write all 0s to CSR
	csrrw x24, 0x856, x7	// Restore CSR

// Testing CSR 0x857
	csrr x15, 0x857	// Read CSR
	li x18, -1
	csrrw x23, 0x857, x18	// Write all 1s to CSR
	csrrw x23, 0x857, x0	// Write all 0s to CSR
	csrrw x23, 0x857, x15	// Restore CSR

// Testing CSR 0x858
	csrr x20, 0x858	// Read CSR
	li x26, -1
	csrrw x4, 0x858, x26	// Write all 1s to CSR
	csrrw x4, 0x858, x0	// Write all 0s to CSR
	csrrw x4, 0x858, x20	// Restore CSR

// Testing CSR 0x859
	csrr x25, 0x859	// Read CSR
	li x6, -1
	csrrw x26, 0x859, x6	// Write all 1s to CSR
	csrrw x26, 0x859, x0	// Write all 0s to CSR
	csrrw x26, 0x859, x25	// Restore CSR

// Testing CSR 0x85a
	csrr x29, 0x85a	// Read CSR
	li x6, -1
	csrrw x25, 0x85a, x6	// Write all 1s to CSR
	csrrw x25, 0x85a, x0	// Write all 0s to CSR
	csrrw x25, 0x85a, x29	// Restore CSR

// Testing CSR 0x85b
	csrr x20, 0x85b	// Read CSR
	li x19, -1
	csrrw x2, 0x85b, x19	// Write all 1s to CSR
	csrrw x2, 0x85b, x0	// Write all 0s to CSR
	csrrw x2, 0x85b, x20	// Restore CSR

// Testing CSR 0x85c
	csrr x28, 0x85c	// Read CSR
	li x31, -1
	csrrw x15, 0x85c, x31	// Write all 1s to CSR
	csrrw x15, 0x85c, x0	// Write all 0s to CSR
	csrrw x15, 0x85c, x28	// Restore CSR

// Testing CSR 0x85d
	csrr x25, 0x85d	// Read CSR
	li x9, -1
	csrrw x7, 0x85d, x9	// Write all 1s to CSR
	csrrw x7, 0x85d, x0	// Write all 0s to CSR
	csrrw x7, 0x85d, x25	// Restore CSR

// Testing CSR 0x85e
	csrr x18, 0x85e	// Read CSR
	li x2, -1
	csrrw x16, 0x85e, x2	// Write all 1s to CSR
	csrrw x16, 0x85e, x0	// Write all 0s to CSR
	csrrw x16, 0x85e, x18	// Restore CSR

// Testing CSR 0x85f
	csrr x3, 0x85f	// Read CSR
	li x1, -1
	csrrw x21, 0x85f, x1	// Write all 1s to CSR
	csrrw x21, 0x85f, x0	// Write all 0s to CSR
	csrrw x21, 0x85f, x3	// Restore CSR

// Testing CSR 0x860
	csrr x2, 0x860	// Read CSR
	li x20, -1
	csrrw x7, 0x860, x20	// Write all 1s to CSR
	csrrw x7, 0x860, x0	// Write all 0s to CSR
	csrrw x7, 0x860, x2	// Restore CSR

// Testing CSR 0x861
	csrr x6, 0x861	// Read CSR
	li x16, -1
	csrrw x25, 0x861, x16	// Write all 1s to CSR
	csrrw x25, 0x861, x0	// Write all 0s to CSR
	csrrw x25, 0x861, x6	// Restore CSR

// Testing CSR 0x862
	csrr x22, 0x862	// Read CSR
	li x7, -1
	csrrw x17, 0x862, x7	// Write all 1s to CSR
	csrrw x17, 0x862, x0	// Write all 0s to CSR
	csrrw x17, 0x862, x22	// Restore CSR

// Testing CSR 0x863
	csrr x10, 0x863	// Read CSR
	li x19, -1
	csrrw x24, 0x863, x19	// Write all 1s to CSR
	csrrw x24, 0x863, x0	// Write all 0s to CSR
	csrrw x24, 0x863, x10	// Restore CSR

// Testing CSR 0x864
	csrr x19, 0x864	// Read CSR
	li x3, -1
	csrrw x5, 0x864, x3	// Write all 1s to CSR
	csrrw x5, 0x864, x0	// Write all 0s to CSR
	csrrw x5, 0x864, x19	// Restore CSR

// Testing CSR 0x865
	csrr x12, 0x865	// Read CSR
	li x28, -1
	csrrw x18, 0x865, x28	// Write all 1s to CSR
	csrrw x18, 0x865, x0	// Write all 0s to CSR
	csrrw x18, 0x865, x12	// Restore CSR

// Testing CSR 0x866
	csrr x26, 0x866	// Read CSR
	li x29, -1
	csrrw x1, 0x866, x29	// Write all 1s to CSR
	csrrw x1, 0x866, x0	// Write all 0s to CSR
	csrrw x1, 0x866, x26	// Restore CSR

// Testing CSR 0x867
	csrr x20, 0x867	// Read CSR
	li x11, -1
	csrrw x21, 0x867, x11	// Write all 1s to CSR
	csrrw x21, 0x867, x0	// Write all 0s to CSR
	csrrw x21, 0x867, x20	// Restore CSR

// Testing CSR 0x868
	csrr x10, 0x868	// Read CSR
	li x29, -1
	csrrw x18, 0x868, x29	// Write all 1s to CSR
	csrrw x18, 0x868, x0	// Write all 0s to CSR
	csrrw x18, 0x868, x10	// Restore CSR

// Testing CSR 0x869
	csrr x26, 0x869	// Read CSR
	li x8, -1
	csrrw x19, 0x869, x8	// Write all 1s to CSR
	csrrw x19, 0x869, x0	// Write all 0s to CSR
	csrrw x19, 0x869, x26	// Restore CSR

// Testing CSR 0x86a
	csrr x10, 0x86a	// Read CSR
	li x1, -1
	csrrw x19, 0x86a, x1	// Write all 1s to CSR
	csrrw x19, 0x86a, x0	// Write all 0s to CSR
	csrrw x19, 0x86a, x10	// Restore CSR

// Testing CSR 0x86b
	csrr x14, 0x86b	// Read CSR
	li x12, -1
	csrrw x3, 0x86b, x12	// Write all 1s to CSR
	csrrw x3, 0x86b, x0	// Write all 0s to CSR
	csrrw x3, 0x86b, x14	// Restore CSR

// Testing CSR 0x86c
	csrr x11, 0x86c	// Read CSR
	li x31, -1
	csrrw x9, 0x86c, x31	// Write all 1s to CSR
	csrrw x9, 0x86c, x0	// Write all 0s to CSR
	csrrw x9, 0x86c, x11	// Restore CSR

// Testing CSR 0x86d
	csrr x27, 0x86d	// Read CSR
	li x25, -1
	csrrw x12, 0x86d, x25	// Write all 1s to CSR
	csrrw x12, 0x86d, x0	// Write all 0s to CSR
	csrrw x12, 0x86d, x27	// Restore CSR

// Testing CSR 0x86e
	csrr x27, 0x86e	// Read CSR
	li x4, -1
	csrrw x10, 0x86e, x4	// Write all 1s to CSR
	csrrw x10, 0x86e, x0	// Write all 0s to CSR
	csrrw x10, 0x86e, x27	// Restore CSR

// Testing CSR 0x86f
	csrr x19, 0x86f	// Read CSR
	li x5, -1
	csrrw x12, 0x86f, x5	// Write all 1s to CSR
	csrrw x12, 0x86f, x0	// Write all 0s to CSR
	csrrw x12, 0x86f, x19	// Restore CSR

// Testing CSR 0x870
	csrr x2, 0x870	// Read CSR
	li x24, -1
	csrrw x1, 0x870, x24	// Write all 1s to CSR
	csrrw x1, 0x870, x0	// Write all 0s to CSR
	csrrw x1, 0x870, x2	// Restore CSR

// Testing CSR 0x871
	csrr x27, 0x871	// Read CSR
	li x21, -1
	csrrw x20, 0x871, x21	// Write all 1s to CSR
	csrrw x20, 0x871, x0	// Write all 0s to CSR
	csrrw x20, 0x871, x27	// Restore CSR

// Testing CSR 0x872
	csrr x30, 0x872	// Read CSR
	li x27, -1
	csrrw x13, 0x872, x27	// Write all 1s to CSR
	csrrw x13, 0x872, x0	// Write all 0s to CSR
	csrrw x13, 0x872, x30	// Restore CSR

// Testing CSR 0x873
	csrr x1, 0x873	// Read CSR
	li x14, -1
	csrrw x8, 0x873, x14	// Write all 1s to CSR
	csrrw x8, 0x873, x0	// Write all 0s to CSR
	csrrw x8, 0x873, x1	// Restore CSR

// Testing CSR 0x874
	csrr x27, 0x874	// Read CSR
	li x14, -1
	csrrw x19, 0x874, x14	// Write all 1s to CSR
	csrrw x19, 0x874, x0	// Write all 0s to CSR
	csrrw x19, 0x874, x27	// Restore CSR

// Testing CSR 0x875
	csrr x15, 0x875	// Read CSR
	li x10, -1
	csrrw x27, 0x875, x10	// Write all 1s to CSR
	csrrw x27, 0x875, x0	// Write all 0s to CSR
	csrrw x27, 0x875, x15	// Restore CSR

// Testing CSR 0x876
	csrr x1, 0x876	// Read CSR
	li x6, -1
	csrrw x23, 0x876, x6	// Write all 1s to CSR
	csrrw x23, 0x876, x0	// Write all 0s to CSR
	csrrw x23, 0x876, x1	// Restore CSR

// Testing CSR 0x877
	csrr x19, 0x877	// Read CSR
	li x15, -1
	csrrw x18, 0x877, x15	// Write all 1s to CSR
	csrrw x18, 0x877, x0	// Write all 0s to CSR
	csrrw x18, 0x877, x19	// Restore CSR

// Testing CSR 0x878
	csrr x3, 0x878	// Read CSR
	li x21, -1
	csrrw x25, 0x878, x21	// Write all 1s to CSR
	csrrw x25, 0x878, x0	// Write all 0s to CSR
	csrrw x25, 0x878, x3	// Restore CSR

// Testing CSR 0x879
	csrr x1, 0x879	// Read CSR
	li x22, -1
	csrrw x2, 0x879, x22	// Write all 1s to CSR
	csrrw x2, 0x879, x0	// Write all 0s to CSR
	csrrw x2, 0x879, x1	// Restore CSR

// Testing CSR 0x87a
	csrr x26, 0x87a	// Read CSR
	li x3, -1
	csrrw x5, 0x87a, x3	// Write all 1s to CSR
	csrrw x5, 0x87a, x0	// Write all 0s to CSR
	csrrw x5, 0x87a, x26	// Restore CSR

// Testing CSR 0x87b
	csrr x13, 0x87b	// Read CSR
	li x6, -1
	csrrw x20, 0x87b, x6	// Write all 1s to CSR
	csrrw x20, 0x87b, x0	// Write all 0s to CSR
	csrrw x20, 0x87b, x13	// Restore CSR

// Testing CSR 0x87c
	csrr x24, 0x87c	// Read CSR
	li x8, -1
	csrrw x21, 0x87c, x8	// Write all 1s to CSR
	csrrw x21, 0x87c, x0	// Write all 0s to CSR
	csrrw x21, 0x87c, x24	// Restore CSR

// Testing CSR 0x87d
	csrr x18, 0x87d	// Read CSR
	li x4, -1
	csrrw x1, 0x87d, x4	// Write all 1s to CSR
	csrrw x1, 0x87d, x0	// Write all 0s to CSR
	csrrw x1, 0x87d, x18	// Restore CSR

// Testing CSR 0x87e
	csrr x28, 0x87e	// Read CSR
	li x2, -1
	csrrw x13, 0x87e, x2	// Write all 1s to CSR
	csrrw x13, 0x87e, x0	// Write all 0s to CSR
	csrrw x13, 0x87e, x28	// Restore CSR

// Testing CSR 0x87f
	csrr x13, 0x87f	// Read CSR
	li x27, -1
	csrrw x10, 0x87f, x27	// Write all 1s to CSR
	csrrw x10, 0x87f, x0	// Write all 0s to CSR
	csrrw x10, 0x87f, x13	// Restore CSR

// Testing CSR 0x880
	csrr x6, 0x880	// Read CSR
	li x27, -1
	csrrw x13, 0x880, x27	// Write all 1s to CSR
	csrrw x13, 0x880, x0	// Write all 0s to CSR
	csrrw x13, 0x880, x6	// Restore CSR

// Testing CSR 0x881
	csrr x1, 0x881	// Read CSR
	li x22, -1
	csrrw x11, 0x881, x22	// Write all 1s to CSR
	csrrw x11, 0x881, x0	// Write all 0s to CSR
	csrrw x11, 0x881, x1	// Restore CSR

// Testing CSR 0x882
	csrr x21, 0x882	// Read CSR
	li x14, -1
	csrrw x17, 0x882, x14	// Write all 1s to CSR
	csrrw x17, 0x882, x0	// Write all 0s to CSR
	csrrw x17, 0x882, x21	// Restore CSR

// Testing CSR 0x883
	csrr x7, 0x883	// Read CSR
	li x30, -1
	csrrw x17, 0x883, x30	// Write all 1s to CSR
	csrrw x17, 0x883, x0	// Write all 0s to CSR
	csrrw x17, 0x883, x7	// Restore CSR

// Testing CSR 0x884
	csrr x26, 0x884	// Read CSR
	li x12, -1
	csrrw x20, 0x884, x12	// Write all 1s to CSR
	csrrw x20, 0x884, x0	// Write all 0s to CSR
	csrrw x20, 0x884, x26	// Restore CSR

// Testing CSR 0x885
	csrr x8, 0x885	// Read CSR
	li x22, -1
	csrrw x2, 0x885, x22	// Write all 1s to CSR
	csrrw x2, 0x885, x0	// Write all 0s to CSR
	csrrw x2, 0x885, x8	// Restore CSR

// Testing CSR 0x886
	csrr x14, 0x886	// Read CSR
	li x16, -1
	csrrw x17, 0x886, x16	// Write all 1s to CSR
	csrrw x17, 0x886, x0	// Write all 0s to CSR
	csrrw x17, 0x886, x14	// Restore CSR

// Testing CSR 0x887
	csrr x21, 0x887	// Read CSR
	li x2, -1
	csrrw x27, 0x887, x2	// Write all 1s to CSR
	csrrw x27, 0x887, x0	// Write all 0s to CSR
	csrrw x27, 0x887, x21	// Restore CSR

// Testing CSR 0x888
	csrr x27, 0x888	// Read CSR
	li x7, -1
	csrrw x11, 0x888, x7	// Write all 1s to CSR
	csrrw x11, 0x888, x0	// Write all 0s to CSR
	csrrw x11, 0x888, x27	// Restore CSR

// Testing CSR 0x889
	csrr x15, 0x889	// Read CSR
	li x24, -1
	csrrw x6, 0x889, x24	// Write all 1s to CSR
	csrrw x6, 0x889, x0	// Write all 0s to CSR
	csrrw x6, 0x889, x15	// Restore CSR

// Testing CSR 0x88a
	csrr x19, 0x88a	// Read CSR
	li x7, -1
	csrrw x2, 0x88a, x7	// Write all 1s to CSR
	csrrw x2, 0x88a, x0	// Write all 0s to CSR
	csrrw x2, 0x88a, x19	// Restore CSR

// Testing CSR 0x88b
	csrr x7, 0x88b	// Read CSR
	li x4, -1
	csrrw x10, 0x88b, x4	// Write all 1s to CSR
	csrrw x10, 0x88b, x0	// Write all 0s to CSR
	csrrw x10, 0x88b, x7	// Restore CSR

// Testing CSR 0x88c
	csrr x25, 0x88c	// Read CSR
	li x11, -1
	csrrw x24, 0x88c, x11	// Write all 1s to CSR
	csrrw x24, 0x88c, x0	// Write all 0s to CSR
	csrrw x24, 0x88c, x25	// Restore CSR

// Testing CSR 0x88d
	csrr x10, 0x88d	// Read CSR
	li x26, -1
	csrrw x5, 0x88d, x26	// Write all 1s to CSR
	csrrw x5, 0x88d, x0	// Write all 0s to CSR
	csrrw x5, 0x88d, x10	// Restore CSR

// Testing CSR 0x88e
	csrr x6, 0x88e	// Read CSR
	li x19, -1
	csrrw x24, 0x88e, x19	// Write all 1s to CSR
	csrrw x24, 0x88e, x0	// Write all 0s to CSR
	csrrw x24, 0x88e, x6	// Restore CSR

// Testing CSR 0x88f
	csrr x14, 0x88f	// Read CSR
	li x9, -1
	csrrw x2, 0x88f, x9	// Write all 1s to CSR
	csrrw x2, 0x88f, x0	// Write all 0s to CSR
	csrrw x2, 0x88f, x14	// Restore CSR

// Testing CSR 0x890
	csrr x31, 0x890	// Read CSR
	li x13, -1
	csrrw x26, 0x890, x13	// Write all 1s to CSR
	csrrw x26, 0x890, x0	// Write all 0s to CSR
	csrrw x26, 0x890, x31	// Restore CSR

// Testing CSR 0x891
	csrr x26, 0x891	// Read CSR
	li x4, -1
	csrrw x25, 0x891, x4	// Write all 1s to CSR
	csrrw x25, 0x891, x0	// Write all 0s to CSR
	csrrw x25, 0x891, x26	// Restore CSR

// Testing CSR 0x892
	csrr x19, 0x892	// Read CSR
	li x26, -1
	csrrw x28, 0x892, x26	// Write all 1s to CSR
	csrrw x28, 0x892, x0	// Write all 0s to CSR
	csrrw x28, 0x892, x19	// Restore CSR

// Testing CSR 0x893
	csrr x30, 0x893	// Read CSR
	li x16, -1
	csrrw x6, 0x893, x16	// Write all 1s to CSR
	csrrw x6, 0x893, x0	// Write all 0s to CSR
	csrrw x6, 0x893, x30	// Restore CSR

// Testing CSR 0x894
	csrr x26, 0x894	// Read CSR
	li x13, -1
	csrrw x8, 0x894, x13	// Write all 1s to CSR
	csrrw x8, 0x894, x0	// Write all 0s to CSR
	csrrw x8, 0x894, x26	// Restore CSR

// Testing CSR 0x895
	csrr x14, 0x895	// Read CSR
	li x25, -1
	csrrw x13, 0x895, x25	// Write all 1s to CSR
	csrrw x13, 0x895, x0	// Write all 0s to CSR
	csrrw x13, 0x895, x14	// Restore CSR

// Testing CSR 0x896
	csrr x5, 0x896	// Read CSR
	li x18, -1
	csrrw x21, 0x896, x18	// Write all 1s to CSR
	csrrw x21, 0x896, x0	// Write all 0s to CSR
	csrrw x21, 0x896, x5	// Restore CSR

// Testing CSR 0x897
	csrr x15, 0x897	// Read CSR
	li x29, -1
	csrrw x20, 0x897, x29	// Write all 1s to CSR
	csrrw x20, 0x897, x0	// Write all 0s to CSR
	csrrw x20, 0x897, x15	// Restore CSR

// Testing CSR 0x898
	csrr x23, 0x898	// Read CSR
	li x27, -1
	csrrw x12, 0x898, x27	// Write all 1s to CSR
	csrrw x12, 0x898, x0	// Write all 0s to CSR
	csrrw x12, 0x898, x23	// Restore CSR

// Testing CSR 0x899
	csrr x30, 0x899	// Read CSR
	li x2, -1
	csrrw x21, 0x899, x2	// Write all 1s to CSR
	csrrw x21, 0x899, x0	// Write all 0s to CSR
	csrrw x21, 0x899, x30	// Restore CSR

// Testing CSR 0x89a
	csrr x20, 0x89a	// Read CSR
	li x17, -1
	csrrw x8, 0x89a, x17	// Write all 1s to CSR
	csrrw x8, 0x89a, x0	// Write all 0s to CSR
	csrrw x8, 0x89a, x20	// Restore CSR

// Testing CSR 0x89b
	csrr x7, 0x89b	// Read CSR
	li x17, -1
	csrrw x13, 0x89b, x17	// Write all 1s to CSR
	csrrw x13, 0x89b, x0	// Write all 0s to CSR
	csrrw x13, 0x89b, x7	// Restore CSR

// Testing CSR 0x89c
	csrr x16, 0x89c	// Read CSR
	li x8, -1
	csrrw x19, 0x89c, x8	// Write all 1s to CSR
	csrrw x19, 0x89c, x0	// Write all 0s to CSR
	csrrw x19, 0x89c, x16	// Restore CSR

// Testing CSR 0x89d
	csrr x24, 0x89d	// Read CSR
	li x3, -1
	csrrw x18, 0x89d, x3	// Write all 1s to CSR
	csrrw x18, 0x89d, x0	// Write all 0s to CSR
	csrrw x18, 0x89d, x24	// Restore CSR

// Testing CSR 0x89e
	csrr x4, 0x89e	// Read CSR
	li x5, -1
	csrrw x29, 0x89e, x5	// Write all 1s to CSR
	csrrw x29, 0x89e, x0	// Write all 0s to CSR
	csrrw x29, 0x89e, x4	// Restore CSR

// Testing CSR 0x89f
	csrr x6, 0x89f	// Read CSR
	li x10, -1
	csrrw x1, 0x89f, x10	// Write all 1s to CSR
	csrrw x1, 0x89f, x0	// Write all 0s to CSR
	csrrw x1, 0x89f, x6	// Restore CSR

// Testing CSR 0x8a0
	csrr x11, 0x8a0	// Read CSR
	li x4, -1
	csrrw x5, 0x8a0, x4	// Write all 1s to CSR
	csrrw x5, 0x8a0, x0	// Write all 0s to CSR
	csrrw x5, 0x8a0, x11	// Restore CSR

// Testing CSR 0x8a1
	csrr x20, 0x8a1	// Read CSR
	li x31, -1
	csrrw x21, 0x8a1, x31	// Write all 1s to CSR
	csrrw x21, 0x8a1, x0	// Write all 0s to CSR
	csrrw x21, 0x8a1, x20	// Restore CSR

// Testing CSR 0x8a2
	csrr x17, 0x8a2	// Read CSR
	li x20, -1
	csrrw x26, 0x8a2, x20	// Write all 1s to CSR
	csrrw x26, 0x8a2, x0	// Write all 0s to CSR
	csrrw x26, 0x8a2, x17	// Restore CSR

// Testing CSR 0x8a3
	csrr x6, 0x8a3	// Read CSR
	li x18, -1
	csrrw x14, 0x8a3, x18	// Write all 1s to CSR
	csrrw x14, 0x8a3, x0	// Write all 0s to CSR
	csrrw x14, 0x8a3, x6	// Restore CSR

// Testing CSR 0x8a4
	csrr x9, 0x8a4	// Read CSR
	li x1, -1
	csrrw x25, 0x8a4, x1	// Write all 1s to CSR
	csrrw x25, 0x8a4, x0	// Write all 0s to CSR
	csrrw x25, 0x8a4, x9	// Restore CSR

// Testing CSR 0x8a5
	csrr x26, 0x8a5	// Read CSR
	li x12, -1
	csrrw x5, 0x8a5, x12	// Write all 1s to CSR
	csrrw x5, 0x8a5, x0	// Write all 0s to CSR
	csrrw x5, 0x8a5, x26	// Restore CSR

// Testing CSR 0x8a6
	csrr x2, 0x8a6	// Read CSR
	li x17, -1
	csrrw x7, 0x8a6, x17	// Write all 1s to CSR
	csrrw x7, 0x8a6, x0	// Write all 0s to CSR
	csrrw x7, 0x8a6, x2	// Restore CSR

// Testing CSR 0x8a7
	csrr x23, 0x8a7	// Read CSR
	li x15, -1
	csrrw x22, 0x8a7, x15	// Write all 1s to CSR
	csrrw x22, 0x8a7, x0	// Write all 0s to CSR
	csrrw x22, 0x8a7, x23	// Restore CSR

// Testing CSR 0x8a8
	csrr x20, 0x8a8	// Read CSR
	li x9, -1
	csrrw x25, 0x8a8, x9	// Write all 1s to CSR
	csrrw x25, 0x8a8, x0	// Write all 0s to CSR
	csrrw x25, 0x8a8, x20	// Restore CSR

// Testing CSR 0x8a9
	csrr x14, 0x8a9	// Read CSR
	li x28, -1
	csrrw x30, 0x8a9, x28	// Write all 1s to CSR
	csrrw x30, 0x8a9, x0	// Write all 0s to CSR
	csrrw x30, 0x8a9, x14	// Restore CSR

// Testing CSR 0x8aa
	csrr x25, 0x8aa	// Read CSR
	li x2, -1
	csrrw x8, 0x8aa, x2	// Write all 1s to CSR
	csrrw x8, 0x8aa, x0	// Write all 0s to CSR
	csrrw x8, 0x8aa, x25	// Restore CSR

// Testing CSR 0x8ab
	csrr x19, 0x8ab	// Read CSR
	li x9, -1
	csrrw x7, 0x8ab, x9	// Write all 1s to CSR
	csrrw x7, 0x8ab, x0	// Write all 0s to CSR
	csrrw x7, 0x8ab, x19	// Restore CSR

// Testing CSR 0x8ac
	csrr x11, 0x8ac	// Read CSR
	li x22, -1
	csrrw x4, 0x8ac, x22	// Write all 1s to CSR
	csrrw x4, 0x8ac, x0	// Write all 0s to CSR
	csrrw x4, 0x8ac, x11	// Restore CSR

// Testing CSR 0x8ad
	csrr x23, 0x8ad	// Read CSR
	li x27, -1
	csrrw x9, 0x8ad, x27	// Write all 1s to CSR
	csrrw x9, 0x8ad, x0	// Write all 0s to CSR
	csrrw x9, 0x8ad, x23	// Restore CSR

// Testing CSR 0x8ae
	csrr x16, 0x8ae	// Read CSR
	li x12, -1
	csrrw x27, 0x8ae, x12	// Write all 1s to CSR
	csrrw x27, 0x8ae, x0	// Write all 0s to CSR
	csrrw x27, 0x8ae, x16	// Restore CSR

// Testing CSR 0x8af
	csrr x10, 0x8af	// Read CSR
	li x2, -1
	csrrw x9, 0x8af, x2	// Write all 1s to CSR
	csrrw x9, 0x8af, x0	// Write all 0s to CSR
	csrrw x9, 0x8af, x10	// Restore CSR

// Testing CSR 0x8b0
	csrr x23, 0x8b0	// Read CSR
	li x4, -1
	csrrw x12, 0x8b0, x4	// Write all 1s to CSR
	csrrw x12, 0x8b0, x0	// Write all 0s to CSR
	csrrw x12, 0x8b0, x23	// Restore CSR

// Testing CSR 0x8b1
	csrr x10, 0x8b1	// Read CSR
	li x7, -1
	csrrw x30, 0x8b1, x7	// Write all 1s to CSR
	csrrw x30, 0x8b1, x0	// Write all 0s to CSR
	csrrw x30, 0x8b1, x10	// Restore CSR

// Testing CSR 0x8b2
	csrr x11, 0x8b2	// Read CSR
	li x8, -1
	csrrw x27, 0x8b2, x8	// Write all 1s to CSR
	csrrw x27, 0x8b2, x0	// Write all 0s to CSR
	csrrw x27, 0x8b2, x11	// Restore CSR

// Testing CSR 0x8b3
	csrr x7, 0x8b3	// Read CSR
	li x13, -1
	csrrw x22, 0x8b3, x13	// Write all 1s to CSR
	csrrw x22, 0x8b3, x0	// Write all 0s to CSR
	csrrw x22, 0x8b3, x7	// Restore CSR

// Testing CSR 0x8b4
	csrr x4, 0x8b4	// Read CSR
	li x18, -1
	csrrw x9, 0x8b4, x18	// Write all 1s to CSR
	csrrw x9, 0x8b4, x0	// Write all 0s to CSR
	csrrw x9, 0x8b4, x4	// Restore CSR

// Testing CSR 0x8b5
	csrr x22, 0x8b5	// Read CSR
	li x6, -1
	csrrw x31, 0x8b5, x6	// Write all 1s to CSR
	csrrw x31, 0x8b5, x0	// Write all 0s to CSR
	csrrw x31, 0x8b5, x22	// Restore CSR

// Testing CSR 0x8b6
	csrr x12, 0x8b6	// Read CSR
	li x29, -1
	csrrw x13, 0x8b6, x29	// Write all 1s to CSR
	csrrw x13, 0x8b6, x0	// Write all 0s to CSR
	csrrw x13, 0x8b6, x12	// Restore CSR

// Testing CSR 0x8b7
	csrr x1, 0x8b7	// Read CSR
	li x29, -1
	csrrw x18, 0x8b7, x29	// Write all 1s to CSR
	csrrw x18, 0x8b7, x0	// Write all 0s to CSR
	csrrw x18, 0x8b7, x1	// Restore CSR

// Testing CSR 0x8b8
	csrr x22, 0x8b8	// Read CSR
	li x2, -1
	csrrw x18, 0x8b8, x2	// Write all 1s to CSR
	csrrw x18, 0x8b8, x0	// Write all 0s to CSR
	csrrw x18, 0x8b8, x22	// Restore CSR

// Testing CSR 0x8b9
	csrr x14, 0x8b9	// Read CSR
	li x22, -1
	csrrw x4, 0x8b9, x22	// Write all 1s to CSR
	csrrw x4, 0x8b9, x0	// Write all 0s to CSR
	csrrw x4, 0x8b9, x14	// Restore CSR

// Testing CSR 0x8ba
	csrr x9, 0x8ba	// Read CSR
	li x26, -1
	csrrw x23, 0x8ba, x26	// Write all 1s to CSR
	csrrw x23, 0x8ba, x0	// Write all 0s to CSR
	csrrw x23, 0x8ba, x9	// Restore CSR

// Testing CSR 0x8bb
	csrr x7, 0x8bb	// Read CSR
	li x17, -1
	csrrw x10, 0x8bb, x17	// Write all 1s to CSR
	csrrw x10, 0x8bb, x0	// Write all 0s to CSR
	csrrw x10, 0x8bb, x7	// Restore CSR

// Testing CSR 0x8bc
	csrr x24, 0x8bc	// Read CSR
	li x3, -1
	csrrw x29, 0x8bc, x3	// Write all 1s to CSR
	csrrw x29, 0x8bc, x0	// Write all 0s to CSR
	csrrw x29, 0x8bc, x24	// Restore CSR

// Testing CSR 0x8bd
	csrr x31, 0x8bd	// Read CSR
	li x4, -1
	csrrw x17, 0x8bd, x4	// Write all 1s to CSR
	csrrw x17, 0x8bd, x0	// Write all 0s to CSR
	csrrw x17, 0x8bd, x31	// Restore CSR

// Testing CSR 0x8be
	csrr x14, 0x8be	// Read CSR
	li x22, -1
	csrrw x18, 0x8be, x22	// Write all 1s to CSR
	csrrw x18, 0x8be, x0	// Write all 0s to CSR
	csrrw x18, 0x8be, x14	// Restore CSR

// Testing CSR 0x8bf
	csrr x12, 0x8bf	// Read CSR
	li x6, -1
	csrrw x5, 0x8bf, x6	// Write all 1s to CSR
	csrrw x5, 0x8bf, x0	// Write all 0s to CSR
	csrrw x5, 0x8bf, x12	// Restore CSR

// Testing CSR 0x8c0
	csrr x26, 0x8c0	// Read CSR
	li x4, -1
	csrrw x10, 0x8c0, x4	// Write all 1s to CSR
	csrrw x10, 0x8c0, x0	// Write all 0s to CSR
	csrrw x10, 0x8c0, x26	// Restore CSR

// Testing CSR 0x8c1
	csrr x24, 0x8c1	// Read CSR
	li x28, -1
	csrrw x26, 0x8c1, x28	// Write all 1s to CSR
	csrrw x26, 0x8c1, x0	// Write all 0s to CSR
	csrrw x26, 0x8c1, x24	// Restore CSR

// Testing CSR 0x8c2
	csrr x24, 0x8c2	// Read CSR
	li x25, -1
	csrrw x10, 0x8c2, x25	// Write all 1s to CSR
	csrrw x10, 0x8c2, x0	// Write all 0s to CSR
	csrrw x10, 0x8c2, x24	// Restore CSR

// Testing CSR 0x8c3
	csrr x6, 0x8c3	// Read CSR
	li x16, -1
	csrrw x29, 0x8c3, x16	// Write all 1s to CSR
	csrrw x29, 0x8c3, x0	// Write all 0s to CSR
	csrrw x29, 0x8c3, x6	// Restore CSR

// Testing CSR 0x8c4
	csrr x10, 0x8c4	// Read CSR
	li x8, -1
	csrrw x31, 0x8c4, x8	// Write all 1s to CSR
	csrrw x31, 0x8c4, x0	// Write all 0s to CSR
	csrrw x31, 0x8c4, x10	// Restore CSR

// Testing CSR 0x8c5
	csrr x30, 0x8c5	// Read CSR
	li x28, -1
	csrrw x18, 0x8c5, x28	// Write all 1s to CSR
	csrrw x18, 0x8c5, x0	// Write all 0s to CSR
	csrrw x18, 0x8c5, x30	// Restore CSR

// Testing CSR 0x8c6
	csrr x19, 0x8c6	// Read CSR
	li x23, -1
	csrrw x8, 0x8c6, x23	// Write all 1s to CSR
	csrrw x8, 0x8c6, x0	// Write all 0s to CSR
	csrrw x8, 0x8c6, x19	// Restore CSR

// Testing CSR 0x8c7
	csrr x3, 0x8c7	// Read CSR
	li x16, -1
	csrrw x26, 0x8c7, x16	// Write all 1s to CSR
	csrrw x26, 0x8c7, x0	// Write all 0s to CSR
	csrrw x26, 0x8c7, x3	// Restore CSR

// Testing CSR 0x8c8
	csrr x7, 0x8c8	// Read CSR
	li x12, -1
	csrrw x14, 0x8c8, x12	// Write all 1s to CSR
	csrrw x14, 0x8c8, x0	// Write all 0s to CSR
	csrrw x14, 0x8c8, x7	// Restore CSR

// Testing CSR 0x8c9
	csrr x9, 0x8c9	// Read CSR
	li x30, -1
	csrrw x11, 0x8c9, x30	// Write all 1s to CSR
	csrrw x11, 0x8c9, x0	// Write all 0s to CSR
	csrrw x11, 0x8c9, x9	// Restore CSR

// Testing CSR 0x8ca
	csrr x30, 0x8ca	// Read CSR
	li x29, -1
	csrrw x4, 0x8ca, x29	// Write all 1s to CSR
	csrrw x4, 0x8ca, x0	// Write all 0s to CSR
	csrrw x4, 0x8ca, x30	// Restore CSR

// Testing CSR 0x8cb
	csrr x26, 0x8cb	// Read CSR
	li x5, -1
	csrrw x15, 0x8cb, x5	// Write all 1s to CSR
	csrrw x15, 0x8cb, x0	// Write all 0s to CSR
	csrrw x15, 0x8cb, x26	// Restore CSR

// Testing CSR 0x8cc
	csrr x27, 0x8cc	// Read CSR
	li x21, -1
	csrrw x12, 0x8cc, x21	// Write all 1s to CSR
	csrrw x12, 0x8cc, x0	// Write all 0s to CSR
	csrrw x12, 0x8cc, x27	// Restore CSR

// Testing CSR 0x8cd
	csrr x17, 0x8cd	// Read CSR
	li x5, -1
	csrrw x3, 0x8cd, x5	// Write all 1s to CSR
	csrrw x3, 0x8cd, x0	// Write all 0s to CSR
	csrrw x3, 0x8cd, x17	// Restore CSR

// Testing CSR 0x8ce
	csrr x30, 0x8ce	// Read CSR
	li x25, -1
	csrrw x15, 0x8ce, x25	// Write all 1s to CSR
	csrrw x15, 0x8ce, x0	// Write all 0s to CSR
	csrrw x15, 0x8ce, x30	// Restore CSR

// Testing CSR 0x8cf
	csrr x13, 0x8cf	// Read CSR
	li x25, -1
	csrrw x16, 0x8cf, x25	// Write all 1s to CSR
	csrrw x16, 0x8cf, x0	// Write all 0s to CSR
	csrrw x16, 0x8cf, x13	// Restore CSR

// Testing CSR 0x8d0
	csrr x11, 0x8d0	// Read CSR
	li x27, -1
	csrrw x20, 0x8d0, x27	// Write all 1s to CSR
	csrrw x20, 0x8d0, x0	// Write all 0s to CSR
	csrrw x20, 0x8d0, x11	// Restore CSR

// Testing CSR 0x8d1
	csrr x10, 0x8d1	// Read CSR
	li x16, -1
	csrrw x5, 0x8d1, x16	// Write all 1s to CSR
	csrrw x5, 0x8d1, x0	// Write all 0s to CSR
	csrrw x5, 0x8d1, x10	// Restore CSR

// Testing CSR 0x8d2
	csrr x10, 0x8d2	// Read CSR
	li x2, -1
	csrrw x14, 0x8d2, x2	// Write all 1s to CSR
	csrrw x14, 0x8d2, x0	// Write all 0s to CSR
	csrrw x14, 0x8d2, x10	// Restore CSR

// Testing CSR 0x8d3
	csrr x23, 0x8d3	// Read CSR
	li x26, -1
	csrrw x3, 0x8d3, x26	// Write all 1s to CSR
	csrrw x3, 0x8d3, x0	// Write all 0s to CSR
	csrrw x3, 0x8d3, x23	// Restore CSR

// Testing CSR 0x8d4
	csrr x15, 0x8d4	// Read CSR
	li x19, -1
	csrrw x6, 0x8d4, x19	// Write all 1s to CSR
	csrrw x6, 0x8d4, x0	// Write all 0s to CSR
	csrrw x6, 0x8d4, x15	// Restore CSR

// Testing CSR 0x8d5
	csrr x3, 0x8d5	// Read CSR
	li x25, -1
	csrrw x4, 0x8d5, x25	// Write all 1s to CSR
	csrrw x4, 0x8d5, x0	// Write all 0s to CSR
	csrrw x4, 0x8d5, x3	// Restore CSR

// Testing CSR 0x8d6
	csrr x28, 0x8d6	// Read CSR
	li x13, -1
	csrrw x8, 0x8d6, x13	// Write all 1s to CSR
	csrrw x8, 0x8d6, x0	// Write all 0s to CSR
	csrrw x8, 0x8d6, x28	// Restore CSR

// Testing CSR 0x8d7
	csrr x10, 0x8d7	// Read CSR
	li x21, -1
	csrrw x4, 0x8d7, x21	// Write all 1s to CSR
	csrrw x4, 0x8d7, x0	// Write all 0s to CSR
	csrrw x4, 0x8d7, x10	// Restore CSR

// Testing CSR 0x8d8
	csrr x14, 0x8d8	// Read CSR
	li x31, -1
	csrrw x21, 0x8d8, x31	// Write all 1s to CSR
	csrrw x21, 0x8d8, x0	// Write all 0s to CSR
	csrrw x21, 0x8d8, x14	// Restore CSR

// Testing CSR 0x8d9
	csrr x31, 0x8d9	// Read CSR
	li x19, -1
	csrrw x10, 0x8d9, x19	// Write all 1s to CSR
	csrrw x10, 0x8d9, x0	// Write all 0s to CSR
	csrrw x10, 0x8d9, x31	// Restore CSR

// Testing CSR 0x8da
	csrr x18, 0x8da	// Read CSR
	li x30, -1
	csrrw x1, 0x8da, x30	// Write all 1s to CSR
	csrrw x1, 0x8da, x0	// Write all 0s to CSR
	csrrw x1, 0x8da, x18	// Restore CSR

// Testing CSR 0x8db
	csrr x19, 0x8db	// Read CSR
	li x2, -1
	csrrw x13, 0x8db, x2	// Write all 1s to CSR
	csrrw x13, 0x8db, x0	// Write all 0s to CSR
	csrrw x13, 0x8db, x19	// Restore CSR

// Testing CSR 0x8dc
	csrr x24, 0x8dc	// Read CSR
	li x14, -1
	csrrw x17, 0x8dc, x14	// Write all 1s to CSR
	csrrw x17, 0x8dc, x0	// Write all 0s to CSR
	csrrw x17, 0x8dc, x24	// Restore CSR

// Testing CSR 0x8dd
	csrr x12, 0x8dd	// Read CSR
	li x8, -1
	csrrw x29, 0x8dd, x8	// Write all 1s to CSR
	csrrw x29, 0x8dd, x0	// Write all 0s to CSR
	csrrw x29, 0x8dd, x12	// Restore CSR

// Testing CSR 0x8de
	csrr x25, 0x8de	// Read CSR
	li x8, -1
	csrrw x6, 0x8de, x8	// Write all 1s to CSR
	csrrw x6, 0x8de, x0	// Write all 0s to CSR
	csrrw x6, 0x8de, x25	// Restore CSR

// Testing CSR 0x8df
	csrr x21, 0x8df	// Read CSR
	li x31, -1
	csrrw x4, 0x8df, x31	// Write all 1s to CSR
	csrrw x4, 0x8df, x0	// Write all 0s to CSR
	csrrw x4, 0x8df, x21	// Restore CSR

// Testing CSR 0x8e0
	csrr x4, 0x8e0	// Read CSR
	li x18, -1
	csrrw x20, 0x8e0, x18	// Write all 1s to CSR
	csrrw x20, 0x8e0, x0	// Write all 0s to CSR
	csrrw x20, 0x8e0, x4	// Restore CSR

// Testing CSR 0x8e1
	csrr x5, 0x8e1	// Read CSR
	li x10, -1
	csrrw x12, 0x8e1, x10	// Write all 1s to CSR
	csrrw x12, 0x8e1, x0	// Write all 0s to CSR
	csrrw x12, 0x8e1, x5	// Restore CSR

// Testing CSR 0x8e2
	csrr x16, 0x8e2	// Read CSR
	li x17, -1
	csrrw x8, 0x8e2, x17	// Write all 1s to CSR
	csrrw x8, 0x8e2, x0	// Write all 0s to CSR
	csrrw x8, 0x8e2, x16	// Restore CSR

// Testing CSR 0x8e3
	csrr x14, 0x8e3	// Read CSR
	li x25, -1
	csrrw x5, 0x8e3, x25	// Write all 1s to CSR
	csrrw x5, 0x8e3, x0	// Write all 0s to CSR
	csrrw x5, 0x8e3, x14	// Restore CSR

// Testing CSR 0x8e4
	csrr x30, 0x8e4	// Read CSR
	li x20, -1
	csrrw x29, 0x8e4, x20	// Write all 1s to CSR
	csrrw x29, 0x8e4, x0	// Write all 0s to CSR
	csrrw x29, 0x8e4, x30	// Restore CSR

// Testing CSR 0x8e5
	csrr x6, 0x8e5	// Read CSR
	li x11, -1
	csrrw x25, 0x8e5, x11	// Write all 1s to CSR
	csrrw x25, 0x8e5, x0	// Write all 0s to CSR
	csrrw x25, 0x8e5, x6	// Restore CSR

// Testing CSR 0x8e6
	csrr x22, 0x8e6	// Read CSR
	li x28, -1
	csrrw x1, 0x8e6, x28	// Write all 1s to CSR
	csrrw x1, 0x8e6, x0	// Write all 0s to CSR
	csrrw x1, 0x8e6, x22	// Restore CSR

// Testing CSR 0x8e7
	csrr x11, 0x8e7	// Read CSR
	li x5, -1
	csrrw x4, 0x8e7, x5	// Write all 1s to CSR
	csrrw x4, 0x8e7, x0	// Write all 0s to CSR
	csrrw x4, 0x8e7, x11	// Restore CSR

// Testing CSR 0x8e8
	csrr x17, 0x8e8	// Read CSR
	li x11, -1
	csrrw x20, 0x8e8, x11	// Write all 1s to CSR
	csrrw x20, 0x8e8, x0	// Write all 0s to CSR
	csrrw x20, 0x8e8, x17	// Restore CSR

// Testing CSR 0x8e9
	csrr x29, 0x8e9	// Read CSR
	li x8, -1
	csrrw x4, 0x8e9, x8	// Write all 1s to CSR
	csrrw x4, 0x8e9, x0	// Write all 0s to CSR
	csrrw x4, 0x8e9, x29	// Restore CSR

// Testing CSR 0x8ea
	csrr x24, 0x8ea	// Read CSR
	li x18, -1
	csrrw x29, 0x8ea, x18	// Write all 1s to CSR
	csrrw x29, 0x8ea, x0	// Write all 0s to CSR
	csrrw x29, 0x8ea, x24	// Restore CSR

// Testing CSR 0x8eb
	csrr x30, 0x8eb	// Read CSR
	li x4, -1
	csrrw x24, 0x8eb, x4	// Write all 1s to CSR
	csrrw x24, 0x8eb, x0	// Write all 0s to CSR
	csrrw x24, 0x8eb, x30	// Restore CSR

// Testing CSR 0x8ec
	csrr x22, 0x8ec	// Read CSR
	li x16, -1
	csrrw x17, 0x8ec, x16	// Write all 1s to CSR
	csrrw x17, 0x8ec, x0	// Write all 0s to CSR
	csrrw x17, 0x8ec, x22	// Restore CSR

// Testing CSR 0x8ed
	csrr x20, 0x8ed	// Read CSR
	li x23, -1
	csrrw x30, 0x8ed, x23	// Write all 1s to CSR
	csrrw x30, 0x8ed, x0	// Write all 0s to CSR
	csrrw x30, 0x8ed, x20	// Restore CSR

// Testing CSR 0x8ee
	csrr x30, 0x8ee	// Read CSR
	li x16, -1
	csrrw x10, 0x8ee, x16	// Write all 1s to CSR
	csrrw x10, 0x8ee, x0	// Write all 0s to CSR
	csrrw x10, 0x8ee, x30	// Restore CSR

// Testing CSR 0x8ef
	csrr x11, 0x8ef	// Read CSR
	li x29, -1
	csrrw x20, 0x8ef, x29	// Write all 1s to CSR
	csrrw x20, 0x8ef, x0	// Write all 0s to CSR
	csrrw x20, 0x8ef, x11	// Restore CSR

// Testing CSR 0x8f0
	csrr x3, 0x8f0	// Read CSR
	li x7, -1
	csrrw x2, 0x8f0, x7	// Write all 1s to CSR
	csrrw x2, 0x8f0, x0	// Write all 0s to CSR
	csrrw x2, 0x8f0, x3	// Restore CSR

// Testing CSR 0x8f1
	csrr x21, 0x8f1	// Read CSR
	li x30, -1
	csrrw x13, 0x8f1, x30	// Write all 1s to CSR
	csrrw x13, 0x8f1, x0	// Write all 0s to CSR
	csrrw x13, 0x8f1, x21	// Restore CSR

// Testing CSR 0x8f2
	csrr x9, 0x8f2	// Read CSR
	li x17, -1
	csrrw x23, 0x8f2, x17	// Write all 1s to CSR
	csrrw x23, 0x8f2, x0	// Write all 0s to CSR
	csrrw x23, 0x8f2, x9	// Restore CSR

// Testing CSR 0x8f3
	csrr x11, 0x8f3	// Read CSR
	li x8, -1
	csrrw x19, 0x8f3, x8	// Write all 1s to CSR
	csrrw x19, 0x8f3, x0	// Write all 0s to CSR
	csrrw x19, 0x8f3, x11	// Restore CSR

// Testing CSR 0x8f4
	csrr x29, 0x8f4	// Read CSR
	li x11, -1
	csrrw x9, 0x8f4, x11	// Write all 1s to CSR
	csrrw x9, 0x8f4, x0	// Write all 0s to CSR
	csrrw x9, 0x8f4, x29	// Restore CSR

// Testing CSR 0x8f5
	csrr x24, 0x8f5	// Read CSR
	li x26, -1
	csrrw x23, 0x8f5, x26	// Write all 1s to CSR
	csrrw x23, 0x8f5, x0	// Write all 0s to CSR
	csrrw x23, 0x8f5, x24	// Restore CSR

// Testing CSR 0x8f6
	csrr x29, 0x8f6	// Read CSR
	li x3, -1
	csrrw x26, 0x8f6, x3	// Write all 1s to CSR
	csrrw x26, 0x8f6, x0	// Write all 0s to CSR
	csrrw x26, 0x8f6, x29	// Restore CSR

// Testing CSR 0x8f7
	csrr x27, 0x8f7	// Read CSR
	li x15, -1
	csrrw x26, 0x8f7, x15	// Write all 1s to CSR
	csrrw x26, 0x8f7, x0	// Write all 0s to CSR
	csrrw x26, 0x8f7, x27	// Restore CSR

// Testing CSR 0x8f8
	csrr x5, 0x8f8	// Read CSR
	li x2, -1
	csrrw x22, 0x8f8, x2	// Write all 1s to CSR
	csrrw x22, 0x8f8, x0	// Write all 0s to CSR
	csrrw x22, 0x8f8, x5	// Restore CSR

// Testing CSR 0x8f9
	csrr x4, 0x8f9	// Read CSR
	li x15, -1
	csrrw x30, 0x8f9, x15	// Write all 1s to CSR
	csrrw x30, 0x8f9, x0	// Write all 0s to CSR
	csrrw x30, 0x8f9, x4	// Restore CSR

// Testing CSR 0x8fa
	csrr x23, 0x8fa	// Read CSR
	li x9, -1
	csrrw x25, 0x8fa, x9	// Write all 1s to CSR
	csrrw x25, 0x8fa, x0	// Write all 0s to CSR
	csrrw x25, 0x8fa, x23	// Restore CSR

// Testing CSR 0x8fb
	csrr x11, 0x8fb	// Read CSR
	li x9, -1
	csrrw x15, 0x8fb, x9	// Write all 1s to CSR
	csrrw x15, 0x8fb, x0	// Write all 0s to CSR
	csrrw x15, 0x8fb, x11	// Restore CSR

// Testing CSR 0x8fc
	csrr x1, 0x8fc	// Read CSR
	li x11, -1
	csrrw x24, 0x8fc, x11	// Write all 1s to CSR
	csrrw x24, 0x8fc, x0	// Write all 0s to CSR
	csrrw x24, 0x8fc, x1	// Restore CSR

// Testing CSR 0x8fd
	csrr x11, 0x8fd	// Read CSR
	li x21, -1
	csrrw x8, 0x8fd, x21	// Write all 1s to CSR
	csrrw x8, 0x8fd, x0	// Write all 0s to CSR
	csrrw x8, 0x8fd, x11	// Restore CSR

// Testing CSR 0x8fe
	csrr x27, 0x8fe	// Read CSR
	li x12, -1
	csrrw x24, 0x8fe, x12	// Write all 1s to CSR
	csrrw x24, 0x8fe, x0	// Write all 0s to CSR
	csrrw x24, 0x8fe, x27	// Restore CSR

// Testing CSR 0x8ff
	csrr x12, 0x8ff	// Read CSR
	li x31, -1
	csrrw x30, 0x8ff, x31	// Write all 1s to CSR
	csrrw x30, 0x8ff, x0	// Write all 0s to CSR
	csrrw x30, 0x8ff, x12	// Restore CSR

// Testing CSR 0x900
	csrr x23, 0x900	// Read CSR
	li x13, -1
	csrrw x7, 0x900, x13	// Write all 1s to CSR
	csrrw x7, 0x900, x0	// Write all 0s to CSR
	csrrw x7, 0x900, x23	// Restore CSR

// Testing CSR 0x901
	csrr x1, 0x901	// Read CSR
	li x13, -1
	csrrw x31, 0x901, x13	// Write all 1s to CSR
	csrrw x31, 0x901, x0	// Write all 0s to CSR
	csrrw x31, 0x901, x1	// Restore CSR

// Testing CSR 0x902
	csrr x21, 0x902	// Read CSR
	li x19, -1
	csrrw x18, 0x902, x19	// Write all 1s to CSR
	csrrw x18, 0x902, x0	// Write all 0s to CSR
	csrrw x18, 0x902, x21	// Restore CSR

// Testing CSR 0x903
	csrr x10, 0x903	// Read CSR
	li x13, -1
	csrrw x26, 0x903, x13	// Write all 1s to CSR
	csrrw x26, 0x903, x0	// Write all 0s to CSR
	csrrw x26, 0x903, x10	// Restore CSR

// Testing CSR 0x904
	csrr x20, 0x904	// Read CSR
	li x1, -1
	csrrw x18, 0x904, x1	// Write all 1s to CSR
	csrrw x18, 0x904, x0	// Write all 0s to CSR
	csrrw x18, 0x904, x20	// Restore CSR

// Testing CSR 0x905
	csrr x28, 0x905	// Read CSR
	li x29, -1
	csrrw x4, 0x905, x29	// Write all 1s to CSR
	csrrw x4, 0x905, x0	// Write all 0s to CSR
	csrrw x4, 0x905, x28	// Restore CSR

// Testing CSR 0x906
	csrr x11, 0x906	// Read CSR
	li x1, -1
	csrrw x14, 0x906, x1	// Write all 1s to CSR
	csrrw x14, 0x906, x0	// Write all 0s to CSR
	csrrw x14, 0x906, x11	// Restore CSR

// Testing CSR 0x907
	csrr x5, 0x907	// Read CSR
	li x3, -1
	csrrw x27, 0x907, x3	// Write all 1s to CSR
	csrrw x27, 0x907, x0	// Write all 0s to CSR
	csrrw x27, 0x907, x5	// Restore CSR

// Testing CSR 0x908
	csrr x5, 0x908	// Read CSR
	li x2, -1
	csrrw x22, 0x908, x2	// Write all 1s to CSR
	csrrw x22, 0x908, x0	// Write all 0s to CSR
	csrrw x22, 0x908, x5	// Restore CSR

// Testing CSR 0x909
	csrr x30, 0x909	// Read CSR
	li x18, -1
	csrrw x10, 0x909, x18	// Write all 1s to CSR
	csrrw x10, 0x909, x0	// Write all 0s to CSR
	csrrw x10, 0x909, x30	// Restore CSR

// Testing CSR 0x90a
	csrr x31, 0x90a	// Read CSR
	li x7, -1
	csrrw x25, 0x90a, x7	// Write all 1s to CSR
	csrrw x25, 0x90a, x0	// Write all 0s to CSR
	csrrw x25, 0x90a, x31	// Restore CSR

// Testing CSR 0x90b
	csrr x21, 0x90b	// Read CSR
	li x12, -1
	csrrw x8, 0x90b, x12	// Write all 1s to CSR
	csrrw x8, 0x90b, x0	// Write all 0s to CSR
	csrrw x8, 0x90b, x21	// Restore CSR

// Testing CSR 0x90c
	csrr x19, 0x90c	// Read CSR
	li x3, -1
	csrrw x25, 0x90c, x3	// Write all 1s to CSR
	csrrw x25, 0x90c, x0	// Write all 0s to CSR
	csrrw x25, 0x90c, x19	// Restore CSR

// Testing CSR 0x90d
	csrr x8, 0x90d	// Read CSR
	li x22, -1
	csrrw x14, 0x90d, x22	// Write all 1s to CSR
	csrrw x14, 0x90d, x0	// Write all 0s to CSR
	csrrw x14, 0x90d, x8	// Restore CSR

// Testing CSR 0x90e
	csrr x11, 0x90e	// Read CSR
	li x21, -1
	csrrw x23, 0x90e, x21	// Write all 1s to CSR
	csrrw x23, 0x90e, x0	// Write all 0s to CSR
	csrrw x23, 0x90e, x11	// Restore CSR

// Testing CSR 0x90f
	csrr x21, 0x90f	// Read CSR
	li x10, -1
	csrrw x1, 0x90f, x10	// Write all 1s to CSR
	csrrw x1, 0x90f, x0	// Write all 0s to CSR
	csrrw x1, 0x90f, x21	// Restore CSR

// Testing CSR 0x910
	csrr x3, 0x910	// Read CSR
	li x15, -1
	csrrw x9, 0x910, x15	// Write all 1s to CSR
	csrrw x9, 0x910, x0	// Write all 0s to CSR
	csrrw x9, 0x910, x3	// Restore CSR

// Testing CSR 0x911
	csrr x21, 0x911	// Read CSR
	li x31, -1
	csrrw x13, 0x911, x31	// Write all 1s to CSR
	csrrw x13, 0x911, x0	// Write all 0s to CSR
	csrrw x13, 0x911, x21	// Restore CSR

// Testing CSR 0x912
	csrr x7, 0x912	// Read CSR
	li x6, -1
	csrrw x24, 0x912, x6	// Write all 1s to CSR
	csrrw x24, 0x912, x0	// Write all 0s to CSR
	csrrw x24, 0x912, x7	// Restore CSR

// Testing CSR 0x913
	csrr x30, 0x913	// Read CSR
	li x15, -1
	csrrw x1, 0x913, x15	// Write all 1s to CSR
	csrrw x1, 0x913, x0	// Write all 0s to CSR
	csrrw x1, 0x913, x30	// Restore CSR

// Testing CSR 0x914
	csrr x6, 0x914	// Read CSR
	li x28, -1
	csrrw x1, 0x914, x28	// Write all 1s to CSR
	csrrw x1, 0x914, x0	// Write all 0s to CSR
	csrrw x1, 0x914, x6	// Restore CSR

// Testing CSR 0x915
	csrr x6, 0x915	// Read CSR
	li x19, -1
	csrrw x22, 0x915, x19	// Write all 1s to CSR
	csrrw x22, 0x915, x0	// Write all 0s to CSR
	csrrw x22, 0x915, x6	// Restore CSR

// Testing CSR 0x916
	csrr x30, 0x916	// Read CSR
	li x2, -1
	csrrw x3, 0x916, x2	// Write all 1s to CSR
	csrrw x3, 0x916, x0	// Write all 0s to CSR
	csrrw x3, 0x916, x30	// Restore CSR

// Testing CSR 0x917
	csrr x12, 0x917	// Read CSR
	li x25, -1
	csrrw x2, 0x917, x25	// Write all 1s to CSR
	csrrw x2, 0x917, x0	// Write all 0s to CSR
	csrrw x2, 0x917, x12	// Restore CSR

// Testing CSR 0x918
	csrr x22, 0x918	// Read CSR
	li x8, -1
	csrrw x28, 0x918, x8	// Write all 1s to CSR
	csrrw x28, 0x918, x0	// Write all 0s to CSR
	csrrw x28, 0x918, x22	// Restore CSR

// Testing CSR 0x919
	csrr x8, 0x919	// Read CSR
	li x16, -1
	csrrw x9, 0x919, x16	// Write all 1s to CSR
	csrrw x9, 0x919, x0	// Write all 0s to CSR
	csrrw x9, 0x919, x8	// Restore CSR

// Testing CSR 0x91a
	csrr x10, 0x91a	// Read CSR
	li x19, -1
	csrrw x26, 0x91a, x19	// Write all 1s to CSR
	csrrw x26, 0x91a, x0	// Write all 0s to CSR
	csrrw x26, 0x91a, x10	// Restore CSR

// Testing CSR 0x91b
	csrr x12, 0x91b	// Read CSR
	li x24, -1
	csrrw x21, 0x91b, x24	// Write all 1s to CSR
	csrrw x21, 0x91b, x0	// Write all 0s to CSR
	csrrw x21, 0x91b, x12	// Restore CSR

// Testing CSR 0x91c
	csrr x18, 0x91c	// Read CSR
	li x11, -1
	csrrw x21, 0x91c, x11	// Write all 1s to CSR
	csrrw x21, 0x91c, x0	// Write all 0s to CSR
	csrrw x21, 0x91c, x18	// Restore CSR

// Testing CSR 0x91d
	csrr x25, 0x91d	// Read CSR
	li x23, -1
	csrrw x16, 0x91d, x23	// Write all 1s to CSR
	csrrw x16, 0x91d, x0	// Write all 0s to CSR
	csrrw x16, 0x91d, x25	// Restore CSR

// Testing CSR 0x91e
	csrr x30, 0x91e	// Read CSR
	li x20, -1
	csrrw x17, 0x91e, x20	// Write all 1s to CSR
	csrrw x17, 0x91e, x0	// Write all 0s to CSR
	csrrw x17, 0x91e, x30	// Restore CSR

// Testing CSR 0x91f
	csrr x27, 0x91f	// Read CSR
	li x2, -1
	csrrw x25, 0x91f, x2	// Write all 1s to CSR
	csrrw x25, 0x91f, x0	// Write all 0s to CSR
	csrrw x25, 0x91f, x27	// Restore CSR

// Testing CSR 0x920
	csrr x8, 0x920	// Read CSR
	li x5, -1
	csrrw x24, 0x920, x5	// Write all 1s to CSR
	csrrw x24, 0x920, x0	// Write all 0s to CSR
	csrrw x24, 0x920, x8	// Restore CSR

// Testing CSR 0x921
	csrr x7, 0x921	// Read CSR
	li x31, -1
	csrrw x8, 0x921, x31	// Write all 1s to CSR
	csrrw x8, 0x921, x0	// Write all 0s to CSR
	csrrw x8, 0x921, x7	// Restore CSR

// Testing CSR 0x922
	csrr x4, 0x922	// Read CSR
	li x5, -1
	csrrw x2, 0x922, x5	// Write all 1s to CSR
	csrrw x2, 0x922, x0	// Write all 0s to CSR
	csrrw x2, 0x922, x4	// Restore CSR

// Testing CSR 0x923
	csrr x20, 0x923	// Read CSR
	li x18, -1
	csrrw x3, 0x923, x18	// Write all 1s to CSR
	csrrw x3, 0x923, x0	// Write all 0s to CSR
	csrrw x3, 0x923, x20	// Restore CSR

// Testing CSR 0x924
	csrr x19, 0x924	// Read CSR
	li x27, -1
	csrrw x24, 0x924, x27	// Write all 1s to CSR
	csrrw x24, 0x924, x0	// Write all 0s to CSR
	csrrw x24, 0x924, x19	// Restore CSR

// Testing CSR 0x925
	csrr x26, 0x925	// Read CSR
	li x20, -1
	csrrw x14, 0x925, x20	// Write all 1s to CSR
	csrrw x14, 0x925, x0	// Write all 0s to CSR
	csrrw x14, 0x925, x26	// Restore CSR

// Testing CSR 0x926
	csrr x15, 0x926	// Read CSR
	li x21, -1
	csrrw x13, 0x926, x21	// Write all 1s to CSR
	csrrw x13, 0x926, x0	// Write all 0s to CSR
	csrrw x13, 0x926, x15	// Restore CSR

// Testing CSR 0x927
	csrr x1, 0x927	// Read CSR
	li x24, -1
	csrrw x20, 0x927, x24	// Write all 1s to CSR
	csrrw x20, 0x927, x0	// Write all 0s to CSR
	csrrw x20, 0x927, x1	// Restore CSR

// Testing CSR 0x928
	csrr x25, 0x928	// Read CSR
	li x21, -1
	csrrw x17, 0x928, x21	// Write all 1s to CSR
	csrrw x17, 0x928, x0	// Write all 0s to CSR
	csrrw x17, 0x928, x25	// Restore CSR

// Testing CSR 0x929
	csrr x21, 0x929	// Read CSR
	li x29, -1
	csrrw x31, 0x929, x29	// Write all 1s to CSR
	csrrw x31, 0x929, x0	// Write all 0s to CSR
	csrrw x31, 0x929, x21	// Restore CSR

// Testing CSR 0x92a
	csrr x11, 0x92a	// Read CSR
	li x23, -1
	csrrw x17, 0x92a, x23	// Write all 1s to CSR
	csrrw x17, 0x92a, x0	// Write all 0s to CSR
	csrrw x17, 0x92a, x11	// Restore CSR

// Testing CSR 0x92b
	csrr x7, 0x92b	// Read CSR
	li x5, -1
	csrrw x20, 0x92b, x5	// Write all 1s to CSR
	csrrw x20, 0x92b, x0	// Write all 0s to CSR
	csrrw x20, 0x92b, x7	// Restore CSR

// Testing CSR 0x92c
	csrr x10, 0x92c	// Read CSR
	li x18, -1
	csrrw x22, 0x92c, x18	// Write all 1s to CSR
	csrrw x22, 0x92c, x0	// Write all 0s to CSR
	csrrw x22, 0x92c, x10	// Restore CSR

// Testing CSR 0x92d
	csrr x13, 0x92d	// Read CSR
	li x20, -1
	csrrw x17, 0x92d, x20	// Write all 1s to CSR
	csrrw x17, 0x92d, x0	// Write all 0s to CSR
	csrrw x17, 0x92d, x13	// Restore CSR

// Testing CSR 0x92e
	csrr x25, 0x92e	// Read CSR
	li x2, -1
	csrrw x15, 0x92e, x2	// Write all 1s to CSR
	csrrw x15, 0x92e, x0	// Write all 0s to CSR
	csrrw x15, 0x92e, x25	// Restore CSR

// Testing CSR 0x92f
	csrr x19, 0x92f	// Read CSR
	li x30, -1
	csrrw x8, 0x92f, x30	// Write all 1s to CSR
	csrrw x8, 0x92f, x0	// Write all 0s to CSR
	csrrw x8, 0x92f, x19	// Restore CSR

// Testing CSR 0x930
	csrr x13, 0x930	// Read CSR
	li x9, -1
	csrrw x18, 0x930, x9	// Write all 1s to CSR
	csrrw x18, 0x930, x0	// Write all 0s to CSR
	csrrw x18, 0x930, x13	// Restore CSR

// Testing CSR 0x931
	csrr x22, 0x931	// Read CSR
	li x10, -1
	csrrw x24, 0x931, x10	// Write all 1s to CSR
	csrrw x24, 0x931, x0	// Write all 0s to CSR
	csrrw x24, 0x931, x22	// Restore CSR

// Testing CSR 0x932
	csrr x4, 0x932	// Read CSR
	li x27, -1
	csrrw x11, 0x932, x27	// Write all 1s to CSR
	csrrw x11, 0x932, x0	// Write all 0s to CSR
	csrrw x11, 0x932, x4	// Restore CSR

// Testing CSR 0x933
	csrr x19, 0x933	// Read CSR
	li x23, -1
	csrrw x9, 0x933, x23	// Write all 1s to CSR
	csrrw x9, 0x933, x0	// Write all 0s to CSR
	csrrw x9, 0x933, x19	// Restore CSR

// Testing CSR 0x934
	csrr x31, 0x934	// Read CSR
	li x23, -1
	csrrw x17, 0x934, x23	// Write all 1s to CSR
	csrrw x17, 0x934, x0	// Write all 0s to CSR
	csrrw x17, 0x934, x31	// Restore CSR

// Testing CSR 0x935
	csrr x9, 0x935	// Read CSR
	li x15, -1
	csrrw x4, 0x935, x15	// Write all 1s to CSR
	csrrw x4, 0x935, x0	// Write all 0s to CSR
	csrrw x4, 0x935, x9	// Restore CSR

// Testing CSR 0x936
	csrr x30, 0x936	// Read CSR
	li x19, -1
	csrrw x27, 0x936, x19	// Write all 1s to CSR
	csrrw x27, 0x936, x0	// Write all 0s to CSR
	csrrw x27, 0x936, x30	// Restore CSR

// Testing CSR 0x937
	csrr x10, 0x937	// Read CSR
	li x11, -1
	csrrw x23, 0x937, x11	// Write all 1s to CSR
	csrrw x23, 0x937, x0	// Write all 0s to CSR
	csrrw x23, 0x937, x10	// Restore CSR

// Testing CSR 0x938
	csrr x3, 0x938	// Read CSR
	li x23, -1
	csrrw x14, 0x938, x23	// Write all 1s to CSR
	csrrw x14, 0x938, x0	// Write all 0s to CSR
	csrrw x14, 0x938, x3	// Restore CSR

// Testing CSR 0x939
	csrr x28, 0x939	// Read CSR
	li x11, -1
	csrrw x24, 0x939, x11	// Write all 1s to CSR
	csrrw x24, 0x939, x0	// Write all 0s to CSR
	csrrw x24, 0x939, x28	// Restore CSR

// Testing CSR 0x93a
	csrr x1, 0x93a	// Read CSR
	li x26, -1
	csrrw x4, 0x93a, x26	// Write all 1s to CSR
	csrrw x4, 0x93a, x0	// Write all 0s to CSR
	csrrw x4, 0x93a, x1	// Restore CSR

// Testing CSR 0x93b
	csrr x27, 0x93b	// Read CSR
	li x31, -1
	csrrw x23, 0x93b, x31	// Write all 1s to CSR
	csrrw x23, 0x93b, x0	// Write all 0s to CSR
	csrrw x23, 0x93b, x27	// Restore CSR

// Testing CSR 0x93c
	csrr x11, 0x93c	// Read CSR
	li x27, -1
	csrrw x19, 0x93c, x27	// Write all 1s to CSR
	csrrw x19, 0x93c, x0	// Write all 0s to CSR
	csrrw x19, 0x93c, x11	// Restore CSR

// Testing CSR 0x93d
	csrr x4, 0x93d	// Read CSR
	li x18, -1
	csrrw x7, 0x93d, x18	// Write all 1s to CSR
	csrrw x7, 0x93d, x0	// Write all 0s to CSR
	csrrw x7, 0x93d, x4	// Restore CSR

// Testing CSR 0x93e
	csrr x19, 0x93e	// Read CSR
	li x22, -1
	csrrw x1, 0x93e, x22	// Write all 1s to CSR
	csrrw x1, 0x93e, x0	// Write all 0s to CSR
	csrrw x1, 0x93e, x19	// Restore CSR

// Testing CSR 0x93f
	csrr x30, 0x93f	// Read CSR
	li x1, -1
	csrrw x10, 0x93f, x1	// Write all 1s to CSR
	csrrw x10, 0x93f, x0	// Write all 0s to CSR
	csrrw x10, 0x93f, x30	// Restore CSR

// Testing CSR 0x940
	csrr x24, 0x940	// Read CSR
	li x15, -1
	csrrw x4, 0x940, x15	// Write all 1s to CSR
	csrrw x4, 0x940, x0	// Write all 0s to CSR
	csrrw x4, 0x940, x24	// Restore CSR

// Testing CSR 0x941
	csrr x17, 0x941	// Read CSR
	li x22, -1
	csrrw x30, 0x941, x22	// Write all 1s to CSR
	csrrw x30, 0x941, x0	// Write all 0s to CSR
	csrrw x30, 0x941, x17	// Restore CSR

// Testing CSR 0x942
	csrr x1, 0x942	// Read CSR
	li x16, -1
	csrrw x24, 0x942, x16	// Write all 1s to CSR
	csrrw x24, 0x942, x0	// Write all 0s to CSR
	csrrw x24, 0x942, x1	// Restore CSR

// Testing CSR 0x943
	csrr x8, 0x943	// Read CSR
	li x9, -1
	csrrw x28, 0x943, x9	// Write all 1s to CSR
	csrrw x28, 0x943, x0	// Write all 0s to CSR
	csrrw x28, 0x943, x8	// Restore CSR

// Testing CSR 0x944
	csrr x30, 0x944	// Read CSR
	li x17, -1
	csrrw x10, 0x944, x17	// Write all 1s to CSR
	csrrw x10, 0x944, x0	// Write all 0s to CSR
	csrrw x10, 0x944, x30	// Restore CSR

// Testing CSR 0x945
	csrr x26, 0x945	// Read CSR
	li x30, -1
	csrrw x9, 0x945, x30	// Write all 1s to CSR
	csrrw x9, 0x945, x0	// Write all 0s to CSR
	csrrw x9, 0x945, x26	// Restore CSR

// Testing CSR 0x946
	csrr x7, 0x946	// Read CSR
	li x31, -1
	csrrw x24, 0x946, x31	// Write all 1s to CSR
	csrrw x24, 0x946, x0	// Write all 0s to CSR
	csrrw x24, 0x946, x7	// Restore CSR

// Testing CSR 0x947
	csrr x13, 0x947	// Read CSR
	li x20, -1
	csrrw x15, 0x947, x20	// Write all 1s to CSR
	csrrw x15, 0x947, x0	// Write all 0s to CSR
	csrrw x15, 0x947, x13	// Restore CSR

// Testing CSR 0x948
	csrr x30, 0x948	// Read CSR
	li x16, -1
	csrrw x10, 0x948, x16	// Write all 1s to CSR
	csrrw x10, 0x948, x0	// Write all 0s to CSR
	csrrw x10, 0x948, x30	// Restore CSR

// Testing CSR 0x949
	csrr x11, 0x949	// Read CSR
	li x1, -1
	csrrw x25, 0x949, x1	// Write all 1s to CSR
	csrrw x25, 0x949, x0	// Write all 0s to CSR
	csrrw x25, 0x949, x11	// Restore CSR

// Testing CSR 0x94a
	csrr x28, 0x94a	// Read CSR
	li x19, -1
	csrrw x25, 0x94a, x19	// Write all 1s to CSR
	csrrw x25, 0x94a, x0	// Write all 0s to CSR
	csrrw x25, 0x94a, x28	// Restore CSR

// Testing CSR 0x94b
	csrr x20, 0x94b	// Read CSR
	li x31, -1
	csrrw x25, 0x94b, x31	// Write all 1s to CSR
	csrrw x25, 0x94b, x0	// Write all 0s to CSR
	csrrw x25, 0x94b, x20	// Restore CSR

// Testing CSR 0x94c
	csrr x10, 0x94c	// Read CSR
	li x4, -1
	csrrw x11, 0x94c, x4	// Write all 1s to CSR
	csrrw x11, 0x94c, x0	// Write all 0s to CSR
	csrrw x11, 0x94c, x10	// Restore CSR

// Testing CSR 0x94d
	csrr x23, 0x94d	// Read CSR
	li x3, -1
	csrrw x5, 0x94d, x3	// Write all 1s to CSR
	csrrw x5, 0x94d, x0	// Write all 0s to CSR
	csrrw x5, 0x94d, x23	// Restore CSR

// Testing CSR 0x94e
	csrr x13, 0x94e	// Read CSR
	li x15, -1
	csrrw x9, 0x94e, x15	// Write all 1s to CSR
	csrrw x9, 0x94e, x0	// Write all 0s to CSR
	csrrw x9, 0x94e, x13	// Restore CSR

// Testing CSR 0x94f
	csrr x27, 0x94f	// Read CSR
	li x12, -1
	csrrw x9, 0x94f, x12	// Write all 1s to CSR
	csrrw x9, 0x94f, x0	// Write all 0s to CSR
	csrrw x9, 0x94f, x27	// Restore CSR

// Testing CSR 0x950
	csrr x20, 0x950	// Read CSR
	li x30, -1
	csrrw x22, 0x950, x30	// Write all 1s to CSR
	csrrw x22, 0x950, x0	// Write all 0s to CSR
	csrrw x22, 0x950, x20	// Restore CSR

// Testing CSR 0x951
	csrr x31, 0x951	// Read CSR
	li x24, -1
	csrrw x25, 0x951, x24	// Write all 1s to CSR
	csrrw x25, 0x951, x0	// Write all 0s to CSR
	csrrw x25, 0x951, x31	// Restore CSR

// Testing CSR 0x952
	csrr x8, 0x952	// Read CSR
	li x23, -1
	csrrw x6, 0x952, x23	// Write all 1s to CSR
	csrrw x6, 0x952, x0	// Write all 0s to CSR
	csrrw x6, 0x952, x8	// Restore CSR

// Testing CSR 0x953
	csrr x18, 0x953	// Read CSR
	li x31, -1
	csrrw x15, 0x953, x31	// Write all 1s to CSR
	csrrw x15, 0x953, x0	// Write all 0s to CSR
	csrrw x15, 0x953, x18	// Restore CSR

// Testing CSR 0x954
	csrr x15, 0x954	// Read CSR
	li x9, -1
	csrrw x16, 0x954, x9	// Write all 1s to CSR
	csrrw x16, 0x954, x0	// Write all 0s to CSR
	csrrw x16, 0x954, x15	// Restore CSR

// Testing CSR 0x955
	csrr x4, 0x955	// Read CSR
	li x3, -1
	csrrw x30, 0x955, x3	// Write all 1s to CSR
	csrrw x30, 0x955, x0	// Write all 0s to CSR
	csrrw x30, 0x955, x4	// Restore CSR

// Testing CSR 0x956
	csrr x22, 0x956	// Read CSR
	li x6, -1
	csrrw x18, 0x956, x6	// Write all 1s to CSR
	csrrw x18, 0x956, x0	// Write all 0s to CSR
	csrrw x18, 0x956, x22	// Restore CSR

// Testing CSR 0x957
	csrr x2, 0x957	// Read CSR
	li x25, -1
	csrrw x9, 0x957, x25	// Write all 1s to CSR
	csrrw x9, 0x957, x0	// Write all 0s to CSR
	csrrw x9, 0x957, x2	// Restore CSR

// Testing CSR 0x958
	csrr x12, 0x958	// Read CSR
	li x31, -1
	csrrw x28, 0x958, x31	// Write all 1s to CSR
	csrrw x28, 0x958, x0	// Write all 0s to CSR
	csrrw x28, 0x958, x12	// Restore CSR

// Testing CSR 0x959
	csrr x11, 0x959	// Read CSR
	li x12, -1
	csrrw x2, 0x959, x12	// Write all 1s to CSR
	csrrw x2, 0x959, x0	// Write all 0s to CSR
	csrrw x2, 0x959, x11	// Restore CSR

// Testing CSR 0x95a
	csrr x13, 0x95a	// Read CSR
	li x22, -1
	csrrw x11, 0x95a, x22	// Write all 1s to CSR
	csrrw x11, 0x95a, x0	// Write all 0s to CSR
	csrrw x11, 0x95a, x13	// Restore CSR

// Testing CSR 0x95b
	csrr x6, 0x95b	// Read CSR
	li x10, -1
	csrrw x29, 0x95b, x10	// Write all 1s to CSR
	csrrw x29, 0x95b, x0	// Write all 0s to CSR
	csrrw x29, 0x95b, x6	// Restore CSR

// Testing CSR 0x95c
	csrr x16, 0x95c	// Read CSR
	li x2, -1
	csrrw x18, 0x95c, x2	// Write all 1s to CSR
	csrrw x18, 0x95c, x0	// Write all 0s to CSR
	csrrw x18, 0x95c, x16	// Restore CSR

// Testing CSR 0x95d
	csrr x17, 0x95d	// Read CSR
	li x10, -1
	csrrw x11, 0x95d, x10	// Write all 1s to CSR
	csrrw x11, 0x95d, x0	// Write all 0s to CSR
	csrrw x11, 0x95d, x17	// Restore CSR

// Testing CSR 0x95e
	csrr x30, 0x95e	// Read CSR
	li x9, -1
	csrrw x25, 0x95e, x9	// Write all 1s to CSR
	csrrw x25, 0x95e, x0	// Write all 0s to CSR
	csrrw x25, 0x95e, x30	// Restore CSR

// Testing CSR 0x95f
	csrr x20, 0x95f	// Read CSR
	li x21, -1
	csrrw x11, 0x95f, x21	// Write all 1s to CSR
	csrrw x11, 0x95f, x0	// Write all 0s to CSR
	csrrw x11, 0x95f, x20	// Restore CSR

// Testing CSR 0x960
	csrr x3, 0x960	// Read CSR
	li x27, -1
	csrrw x12, 0x960, x27	// Write all 1s to CSR
	csrrw x12, 0x960, x0	// Write all 0s to CSR
	csrrw x12, 0x960, x3	// Restore CSR

// Testing CSR 0x961
	csrr x27, 0x961	// Read CSR
	li x1, -1
	csrrw x26, 0x961, x1	// Write all 1s to CSR
	csrrw x26, 0x961, x0	// Write all 0s to CSR
	csrrw x26, 0x961, x27	// Restore CSR

// Testing CSR 0x962
	csrr x15, 0x962	// Read CSR
	li x27, -1
	csrrw x20, 0x962, x27	// Write all 1s to CSR
	csrrw x20, 0x962, x0	// Write all 0s to CSR
	csrrw x20, 0x962, x15	// Restore CSR

// Testing CSR 0x963
	csrr x6, 0x963	// Read CSR
	li x12, -1
	csrrw x29, 0x963, x12	// Write all 1s to CSR
	csrrw x29, 0x963, x0	// Write all 0s to CSR
	csrrw x29, 0x963, x6	// Restore CSR

// Testing CSR 0x964
	csrr x20, 0x964	// Read CSR
	li x10, -1
	csrrw x23, 0x964, x10	// Write all 1s to CSR
	csrrw x23, 0x964, x0	// Write all 0s to CSR
	csrrw x23, 0x964, x20	// Restore CSR

// Testing CSR 0x965
	csrr x9, 0x965	// Read CSR
	li x16, -1
	csrrw x1, 0x965, x16	// Write all 1s to CSR
	csrrw x1, 0x965, x0	// Write all 0s to CSR
	csrrw x1, 0x965, x9	// Restore CSR

// Testing CSR 0x966
	csrr x15, 0x966	// Read CSR
	li x6, -1
	csrrw x8, 0x966, x6	// Write all 1s to CSR
	csrrw x8, 0x966, x0	// Write all 0s to CSR
	csrrw x8, 0x966, x15	// Restore CSR

// Testing CSR 0x967
	csrr x12, 0x967	// Read CSR
	li x31, -1
	csrrw x8, 0x967, x31	// Write all 1s to CSR
	csrrw x8, 0x967, x0	// Write all 0s to CSR
	csrrw x8, 0x967, x12	// Restore CSR

// Testing CSR 0x968
	csrr x4, 0x968	// Read CSR
	li x28, -1
	csrrw x21, 0x968, x28	// Write all 1s to CSR
	csrrw x21, 0x968, x0	// Write all 0s to CSR
	csrrw x21, 0x968, x4	// Restore CSR

// Testing CSR 0x969
	csrr x2, 0x969	// Read CSR
	li x13, -1
	csrrw x15, 0x969, x13	// Write all 1s to CSR
	csrrw x15, 0x969, x0	// Write all 0s to CSR
	csrrw x15, 0x969, x2	// Restore CSR

// Testing CSR 0x96a
	csrr x26, 0x96a	// Read CSR
	li x13, -1
	csrrw x21, 0x96a, x13	// Write all 1s to CSR
	csrrw x21, 0x96a, x0	// Write all 0s to CSR
	csrrw x21, 0x96a, x26	// Restore CSR

// Testing CSR 0x96b
	csrr x28, 0x96b	// Read CSR
	li x20, -1
	csrrw x27, 0x96b, x20	// Write all 1s to CSR
	csrrw x27, 0x96b, x0	// Write all 0s to CSR
	csrrw x27, 0x96b, x28	// Restore CSR

// Testing CSR 0x96c
	csrr x2, 0x96c	// Read CSR
	li x11, -1
	csrrw x1, 0x96c, x11	// Write all 1s to CSR
	csrrw x1, 0x96c, x0	// Write all 0s to CSR
	csrrw x1, 0x96c, x2	// Restore CSR

// Testing CSR 0x96d
	csrr x22, 0x96d	// Read CSR
	li x1, -1
	csrrw x15, 0x96d, x1	// Write all 1s to CSR
	csrrw x15, 0x96d, x0	// Write all 0s to CSR
	csrrw x15, 0x96d, x22	// Restore CSR

// Testing CSR 0x96e
	csrr x31, 0x96e	// Read CSR
	li x9, -1
	csrrw x7, 0x96e, x9	// Write all 1s to CSR
	csrrw x7, 0x96e, x0	// Write all 0s to CSR
	csrrw x7, 0x96e, x31	// Restore CSR

// Testing CSR 0x96f
	csrr x23, 0x96f	// Read CSR
	li x6, -1
	csrrw x15, 0x96f, x6	// Write all 1s to CSR
	csrrw x15, 0x96f, x0	// Write all 0s to CSR
	csrrw x15, 0x96f, x23	// Restore CSR

// Testing CSR 0x970
	csrr x4, 0x970	// Read CSR
	li x23, -1
	csrrw x25, 0x970, x23	// Write all 1s to CSR
	csrrw x25, 0x970, x0	// Write all 0s to CSR
	csrrw x25, 0x970, x4	// Restore CSR

// Testing CSR 0x971
	csrr x24, 0x971	// Read CSR
	li x13, -1
	csrrw x18, 0x971, x13	// Write all 1s to CSR
	csrrw x18, 0x971, x0	// Write all 0s to CSR
	csrrw x18, 0x971, x24	// Restore CSR

// Testing CSR 0x972
	csrr x2, 0x972	// Read CSR
	li x9, -1
	csrrw x4, 0x972, x9	// Write all 1s to CSR
	csrrw x4, 0x972, x0	// Write all 0s to CSR
	csrrw x4, 0x972, x2	// Restore CSR

// Testing CSR 0x973
	csrr x5, 0x973	// Read CSR
	li x2, -1
	csrrw x1, 0x973, x2	// Write all 1s to CSR
	csrrw x1, 0x973, x0	// Write all 0s to CSR
	csrrw x1, 0x973, x5	// Restore CSR

// Testing CSR 0x974
	csrr x9, 0x974	// Read CSR
	li x14, -1
	csrrw x17, 0x974, x14	// Write all 1s to CSR
	csrrw x17, 0x974, x0	// Write all 0s to CSR
	csrrw x17, 0x974, x9	// Restore CSR

// Testing CSR 0x975
	csrr x22, 0x975	// Read CSR
	li x25, -1
	csrrw x27, 0x975, x25	// Write all 1s to CSR
	csrrw x27, 0x975, x0	// Write all 0s to CSR
	csrrw x27, 0x975, x22	// Restore CSR

// Testing CSR 0x976
	csrr x19, 0x976	// Read CSR
	li x10, -1
	csrrw x26, 0x976, x10	// Write all 1s to CSR
	csrrw x26, 0x976, x0	// Write all 0s to CSR
	csrrw x26, 0x976, x19	// Restore CSR

// Testing CSR 0x977
	csrr x3, 0x977	// Read CSR
	li x11, -1
	csrrw x16, 0x977, x11	// Write all 1s to CSR
	csrrw x16, 0x977, x0	// Write all 0s to CSR
	csrrw x16, 0x977, x3	// Restore CSR

// Testing CSR 0x978
	csrr x19, 0x978	// Read CSR
	li x11, -1
	csrrw x9, 0x978, x11	// Write all 1s to CSR
	csrrw x9, 0x978, x0	// Write all 0s to CSR
	csrrw x9, 0x978, x19	// Restore CSR

// Testing CSR 0x979
	csrr x11, 0x979	// Read CSR
	li x8, -1
	csrrw x2, 0x979, x8	// Write all 1s to CSR
	csrrw x2, 0x979, x0	// Write all 0s to CSR
	csrrw x2, 0x979, x11	// Restore CSR

// Testing CSR 0x97a
	csrr x24, 0x97a	// Read CSR
	li x17, -1
	csrrw x8, 0x97a, x17	// Write all 1s to CSR
	csrrw x8, 0x97a, x0	// Write all 0s to CSR
	csrrw x8, 0x97a, x24	// Restore CSR

// Testing CSR 0x97b
	csrr x15, 0x97b	// Read CSR
	li x17, -1
	csrrw x23, 0x97b, x17	// Write all 1s to CSR
	csrrw x23, 0x97b, x0	// Write all 0s to CSR
	csrrw x23, 0x97b, x15	// Restore CSR

// Testing CSR 0x97c
	csrr x1, 0x97c	// Read CSR
	li x22, -1
	csrrw x27, 0x97c, x22	// Write all 1s to CSR
	csrrw x27, 0x97c, x0	// Write all 0s to CSR
	csrrw x27, 0x97c, x1	// Restore CSR

// Testing CSR 0x97d
	csrr x13, 0x97d	// Read CSR
	li x11, -1
	csrrw x2, 0x97d, x11	// Write all 1s to CSR
	csrrw x2, 0x97d, x0	// Write all 0s to CSR
	csrrw x2, 0x97d, x13	// Restore CSR

// Testing CSR 0x97e
	csrr x17, 0x97e	// Read CSR
	li x29, -1
	csrrw x7, 0x97e, x29	// Write all 1s to CSR
	csrrw x7, 0x97e, x0	// Write all 0s to CSR
	csrrw x7, 0x97e, x17	// Restore CSR

// Testing CSR 0x97f
	csrr x23, 0x97f	// Read CSR
	li x24, -1
	csrrw x4, 0x97f, x24	// Write all 1s to CSR
	csrrw x4, 0x97f, x0	// Write all 0s to CSR
	csrrw x4, 0x97f, x23	// Restore CSR

// Testing CSR 0x980
	csrr x18, 0x980	// Read CSR
	li x8, -1
	csrrw x1, 0x980, x8	// Write all 1s to CSR
	csrrw x1, 0x980, x0	// Write all 0s to CSR
	csrrw x1, 0x980, x18	// Restore CSR

// Testing CSR 0x981
	csrr x27, 0x981	// Read CSR
	li x24, -1
	csrrw x18, 0x981, x24	// Write all 1s to CSR
	csrrw x18, 0x981, x0	// Write all 0s to CSR
	csrrw x18, 0x981, x27	// Restore CSR

// Testing CSR 0x982
	csrr x11, 0x982	// Read CSR
	li x5, -1
	csrrw x26, 0x982, x5	// Write all 1s to CSR
	csrrw x26, 0x982, x0	// Write all 0s to CSR
	csrrw x26, 0x982, x11	// Restore CSR

// Testing CSR 0x983
	csrr x23, 0x983	// Read CSR
	li x8, -1
	csrrw x19, 0x983, x8	// Write all 1s to CSR
	csrrw x19, 0x983, x0	// Write all 0s to CSR
	csrrw x19, 0x983, x23	// Restore CSR

// Testing CSR 0x984
	csrr x16, 0x984	// Read CSR
	li x18, -1
	csrrw x14, 0x984, x18	// Write all 1s to CSR
	csrrw x14, 0x984, x0	// Write all 0s to CSR
	csrrw x14, 0x984, x16	// Restore CSR

// Testing CSR 0x985
	csrr x6, 0x985	// Read CSR
	li x15, -1
	csrrw x9, 0x985, x15	// Write all 1s to CSR
	csrrw x9, 0x985, x0	// Write all 0s to CSR
	csrrw x9, 0x985, x6	// Restore CSR

// Testing CSR 0x986
	csrr x6, 0x986	// Read CSR
	li x2, -1
	csrrw x12, 0x986, x2	// Write all 1s to CSR
	csrrw x12, 0x986, x0	// Write all 0s to CSR
	csrrw x12, 0x986, x6	// Restore CSR

// Testing CSR 0x987
	csrr x31, 0x987	// Read CSR
	li x22, -1
	csrrw x10, 0x987, x22	// Write all 1s to CSR
	csrrw x10, 0x987, x0	// Write all 0s to CSR
	csrrw x10, 0x987, x31	// Restore CSR

// Testing CSR 0x988
	csrr x28, 0x988	// Read CSR
	li x11, -1
	csrrw x24, 0x988, x11	// Write all 1s to CSR
	csrrw x24, 0x988, x0	// Write all 0s to CSR
	csrrw x24, 0x988, x28	// Restore CSR

// Testing CSR 0x989
	csrr x21, 0x989	// Read CSR
	li x9, -1
	csrrw x8, 0x989, x9	// Write all 1s to CSR
	csrrw x8, 0x989, x0	// Write all 0s to CSR
	csrrw x8, 0x989, x21	// Restore CSR

// Testing CSR 0x98a
	csrr x13, 0x98a	// Read CSR
	li x1, -1
	csrrw x2, 0x98a, x1	// Write all 1s to CSR
	csrrw x2, 0x98a, x0	// Write all 0s to CSR
	csrrw x2, 0x98a, x13	// Restore CSR

// Testing CSR 0x98b
	csrr x28, 0x98b	// Read CSR
	li x29, -1
	csrrw x25, 0x98b, x29	// Write all 1s to CSR
	csrrw x25, 0x98b, x0	// Write all 0s to CSR
	csrrw x25, 0x98b, x28	// Restore CSR

// Testing CSR 0x98c
	csrr x22, 0x98c	// Read CSR
	li x31, -1
	csrrw x4, 0x98c, x31	// Write all 1s to CSR
	csrrw x4, 0x98c, x0	// Write all 0s to CSR
	csrrw x4, 0x98c, x22	// Restore CSR

// Testing CSR 0x98d
	csrr x5, 0x98d	// Read CSR
	li x20, -1
	csrrw x11, 0x98d, x20	// Write all 1s to CSR
	csrrw x11, 0x98d, x0	// Write all 0s to CSR
	csrrw x11, 0x98d, x5	// Restore CSR

// Testing CSR 0x98e
	csrr x29, 0x98e	// Read CSR
	li x19, -1
	csrrw x6, 0x98e, x19	// Write all 1s to CSR
	csrrw x6, 0x98e, x0	// Write all 0s to CSR
	csrrw x6, 0x98e, x29	// Restore CSR

// Testing CSR 0x98f
	csrr x1, 0x98f	// Read CSR
	li x2, -1
	csrrw x26, 0x98f, x2	// Write all 1s to CSR
	csrrw x26, 0x98f, x0	// Write all 0s to CSR
	csrrw x26, 0x98f, x1	// Restore CSR

// Testing CSR 0x990
	csrr x18, 0x990	// Read CSR
	li x30, -1
	csrrw x6, 0x990, x30	// Write all 1s to CSR
	csrrw x6, 0x990, x0	// Write all 0s to CSR
	csrrw x6, 0x990, x18	// Restore CSR

// Testing CSR 0x991
	csrr x31, 0x991	// Read CSR
	li x19, -1
	csrrw x5, 0x991, x19	// Write all 1s to CSR
	csrrw x5, 0x991, x0	// Write all 0s to CSR
	csrrw x5, 0x991, x31	// Restore CSR

// Testing CSR 0x992
	csrr x3, 0x992	// Read CSR
	li x5, -1
	csrrw x18, 0x992, x5	// Write all 1s to CSR
	csrrw x18, 0x992, x0	// Write all 0s to CSR
	csrrw x18, 0x992, x3	// Restore CSR

// Testing CSR 0x993
	csrr x6, 0x993	// Read CSR
	li x14, -1
	csrrw x13, 0x993, x14	// Write all 1s to CSR
	csrrw x13, 0x993, x0	// Write all 0s to CSR
	csrrw x13, 0x993, x6	// Restore CSR

// Testing CSR 0x994
	csrr x1, 0x994	// Read CSR
	li x12, -1
	csrrw x10, 0x994, x12	// Write all 1s to CSR
	csrrw x10, 0x994, x0	// Write all 0s to CSR
	csrrw x10, 0x994, x1	// Restore CSR

// Testing CSR 0x995
	csrr x12, 0x995	// Read CSR
	li x25, -1
	csrrw x19, 0x995, x25	// Write all 1s to CSR
	csrrw x19, 0x995, x0	// Write all 0s to CSR
	csrrw x19, 0x995, x12	// Restore CSR

// Testing CSR 0x996
	csrr x25, 0x996	// Read CSR
	li x1, -1
	csrrw x8, 0x996, x1	// Write all 1s to CSR
	csrrw x8, 0x996, x0	// Write all 0s to CSR
	csrrw x8, 0x996, x25	// Restore CSR

// Testing CSR 0x997
	csrr x19, 0x997	// Read CSR
	li x30, -1
	csrrw x1, 0x997, x30	// Write all 1s to CSR
	csrrw x1, 0x997, x0	// Write all 0s to CSR
	csrrw x1, 0x997, x19	// Restore CSR

// Testing CSR 0x998
	csrr x12, 0x998	// Read CSR
	li x25, -1
	csrrw x11, 0x998, x25	// Write all 1s to CSR
	csrrw x11, 0x998, x0	// Write all 0s to CSR
	csrrw x11, 0x998, x12	// Restore CSR

// Testing CSR 0x999
	csrr x3, 0x999	// Read CSR
	li x19, -1
	csrrw x22, 0x999, x19	// Write all 1s to CSR
	csrrw x22, 0x999, x0	// Write all 0s to CSR
	csrrw x22, 0x999, x3	// Restore CSR

// Testing CSR 0x99a
	csrr x22, 0x99a	// Read CSR
	li x12, -1
	csrrw x3, 0x99a, x12	// Write all 1s to CSR
	csrrw x3, 0x99a, x0	// Write all 0s to CSR
	csrrw x3, 0x99a, x22	// Restore CSR

// Testing CSR 0x99b
	csrr x14, 0x99b	// Read CSR
	li x7, -1
	csrrw x12, 0x99b, x7	// Write all 1s to CSR
	csrrw x12, 0x99b, x0	// Write all 0s to CSR
	csrrw x12, 0x99b, x14	// Restore CSR

// Testing CSR 0x99c
	csrr x31, 0x99c	// Read CSR
	li x9, -1
	csrrw x19, 0x99c, x9	// Write all 1s to CSR
	csrrw x19, 0x99c, x0	// Write all 0s to CSR
	csrrw x19, 0x99c, x31	// Restore CSR

// Testing CSR 0x99d
	csrr x26, 0x99d	// Read CSR
	li x5, -1
	csrrw x7, 0x99d, x5	// Write all 1s to CSR
	csrrw x7, 0x99d, x0	// Write all 0s to CSR
	csrrw x7, 0x99d, x26	// Restore CSR

// Testing CSR 0x99e
	csrr x27, 0x99e	// Read CSR
	li x17, -1
	csrrw x6, 0x99e, x17	// Write all 1s to CSR
	csrrw x6, 0x99e, x0	// Write all 0s to CSR
	csrrw x6, 0x99e, x27	// Restore CSR

// Testing CSR 0x99f
	csrr x20, 0x99f	// Read CSR
	li x5, -1
	csrrw x31, 0x99f, x5	// Write all 1s to CSR
	csrrw x31, 0x99f, x0	// Write all 0s to CSR
	csrrw x31, 0x99f, x20	// Restore CSR

// Testing CSR 0x9a0
	csrr x27, 0x9a0	// Read CSR
	li x17, -1
	csrrw x26, 0x9a0, x17	// Write all 1s to CSR
	csrrw x26, 0x9a0, x0	// Write all 0s to CSR
	csrrw x26, 0x9a0, x27	// Restore CSR

// Testing CSR 0x9a1
	csrr x30, 0x9a1	// Read CSR
	li x4, -1
	csrrw x11, 0x9a1, x4	// Write all 1s to CSR
	csrrw x11, 0x9a1, x0	// Write all 0s to CSR
	csrrw x11, 0x9a1, x30	// Restore CSR

// Testing CSR 0x9a2
	csrr x19, 0x9a2	// Read CSR
	li x21, -1
	csrrw x18, 0x9a2, x21	// Write all 1s to CSR
	csrrw x18, 0x9a2, x0	// Write all 0s to CSR
	csrrw x18, 0x9a2, x19	// Restore CSR

// Testing CSR 0x9a3
	csrr x20, 0x9a3	// Read CSR
	li x4, -1
	csrrw x6, 0x9a3, x4	// Write all 1s to CSR
	csrrw x6, 0x9a3, x0	// Write all 0s to CSR
	csrrw x6, 0x9a3, x20	// Restore CSR

// Testing CSR 0x9a4
	csrr x12, 0x9a4	// Read CSR
	li x9, -1
	csrrw x15, 0x9a4, x9	// Write all 1s to CSR
	csrrw x15, 0x9a4, x0	// Write all 0s to CSR
	csrrw x15, 0x9a4, x12	// Restore CSR

// Testing CSR 0x9a5
	csrr x9, 0x9a5	// Read CSR
	li x15, -1
	csrrw x6, 0x9a5, x15	// Write all 1s to CSR
	csrrw x6, 0x9a5, x0	// Write all 0s to CSR
	csrrw x6, 0x9a5, x9	// Restore CSR

// Testing CSR 0x9a6
	csrr x13, 0x9a6	// Read CSR
	li x14, -1
	csrrw x12, 0x9a6, x14	// Write all 1s to CSR
	csrrw x12, 0x9a6, x0	// Write all 0s to CSR
	csrrw x12, 0x9a6, x13	// Restore CSR

// Testing CSR 0x9a7
	csrr x4, 0x9a7	// Read CSR
	li x11, -1
	csrrw x5, 0x9a7, x11	// Write all 1s to CSR
	csrrw x5, 0x9a7, x0	// Write all 0s to CSR
	csrrw x5, 0x9a7, x4	// Restore CSR

// Testing CSR 0x9a8
	csrr x9, 0x9a8	// Read CSR
	li x28, -1
	csrrw x26, 0x9a8, x28	// Write all 1s to CSR
	csrrw x26, 0x9a8, x0	// Write all 0s to CSR
	csrrw x26, 0x9a8, x9	// Restore CSR

// Testing CSR 0x9a9
	csrr x6, 0x9a9	// Read CSR
	li x11, -1
	csrrw x15, 0x9a9, x11	// Write all 1s to CSR
	csrrw x15, 0x9a9, x0	// Write all 0s to CSR
	csrrw x15, 0x9a9, x6	// Restore CSR

// Testing CSR 0x9aa
	csrr x25, 0x9aa	// Read CSR
	li x3, -1
	csrrw x12, 0x9aa, x3	// Write all 1s to CSR
	csrrw x12, 0x9aa, x0	// Write all 0s to CSR
	csrrw x12, 0x9aa, x25	// Restore CSR

// Testing CSR 0x9ab
	csrr x26, 0x9ab	// Read CSR
	li x12, -1
	csrrw x9, 0x9ab, x12	// Write all 1s to CSR
	csrrw x9, 0x9ab, x0	// Write all 0s to CSR
	csrrw x9, 0x9ab, x26	// Restore CSR

// Testing CSR 0x9ac
	csrr x28, 0x9ac	// Read CSR
	li x22, -1
	csrrw x12, 0x9ac, x22	// Write all 1s to CSR
	csrrw x12, 0x9ac, x0	// Write all 0s to CSR
	csrrw x12, 0x9ac, x28	// Restore CSR

// Testing CSR 0x9ad
	csrr x27, 0x9ad	// Read CSR
	li x5, -1
	csrrw x14, 0x9ad, x5	// Write all 1s to CSR
	csrrw x14, 0x9ad, x0	// Write all 0s to CSR
	csrrw x14, 0x9ad, x27	// Restore CSR

// Testing CSR 0x9ae
	csrr x31, 0x9ae	// Read CSR
	li x7, -1
	csrrw x6, 0x9ae, x7	// Write all 1s to CSR
	csrrw x6, 0x9ae, x0	// Write all 0s to CSR
	csrrw x6, 0x9ae, x31	// Restore CSR

// Testing CSR 0x9af
	csrr x19, 0x9af	// Read CSR
	li x15, -1
	csrrw x20, 0x9af, x15	// Write all 1s to CSR
	csrrw x20, 0x9af, x0	// Write all 0s to CSR
	csrrw x20, 0x9af, x19	// Restore CSR

// Testing CSR 0x9b0
	csrr x14, 0x9b0	// Read CSR
	li x22, -1
	csrrw x26, 0x9b0, x22	// Write all 1s to CSR
	csrrw x26, 0x9b0, x0	// Write all 0s to CSR
	csrrw x26, 0x9b0, x14	// Restore CSR

// Testing CSR 0x9b1
	csrr x19, 0x9b1	// Read CSR
	li x23, -1
	csrrw x8, 0x9b1, x23	// Write all 1s to CSR
	csrrw x8, 0x9b1, x0	// Write all 0s to CSR
	csrrw x8, 0x9b1, x19	// Restore CSR

// Testing CSR 0x9b2
	csrr x25, 0x9b2	// Read CSR
	li x1, -1
	csrrw x12, 0x9b2, x1	// Write all 1s to CSR
	csrrw x12, 0x9b2, x0	// Write all 0s to CSR
	csrrw x12, 0x9b2, x25	// Restore CSR

// Testing CSR 0x9b3
	csrr x5, 0x9b3	// Read CSR
	li x1, -1
	csrrw x15, 0x9b3, x1	// Write all 1s to CSR
	csrrw x15, 0x9b3, x0	// Write all 0s to CSR
	csrrw x15, 0x9b3, x5	// Restore CSR

// Testing CSR 0x9b4
	csrr x14, 0x9b4	// Read CSR
	li x30, -1
	csrrw x19, 0x9b4, x30	// Write all 1s to CSR
	csrrw x19, 0x9b4, x0	// Write all 0s to CSR
	csrrw x19, 0x9b4, x14	// Restore CSR

// Testing CSR 0x9b5
	csrr x26, 0x9b5	// Read CSR
	li x4, -1
	csrrw x27, 0x9b5, x4	// Write all 1s to CSR
	csrrw x27, 0x9b5, x0	// Write all 0s to CSR
	csrrw x27, 0x9b5, x26	// Restore CSR

// Testing CSR 0x9b6
	csrr x2, 0x9b6	// Read CSR
	li x13, -1
	csrrw x10, 0x9b6, x13	// Write all 1s to CSR
	csrrw x10, 0x9b6, x0	// Write all 0s to CSR
	csrrw x10, 0x9b6, x2	// Restore CSR

// Testing CSR 0x9b7
	csrr x20, 0x9b7	// Read CSR
	li x23, -1
	csrrw x7, 0x9b7, x23	// Write all 1s to CSR
	csrrw x7, 0x9b7, x0	// Write all 0s to CSR
	csrrw x7, 0x9b7, x20	// Restore CSR

// Testing CSR 0x9b8
	csrr x14, 0x9b8	// Read CSR
	li x1, -1
	csrrw x28, 0x9b8, x1	// Write all 1s to CSR
	csrrw x28, 0x9b8, x0	// Write all 0s to CSR
	csrrw x28, 0x9b8, x14	// Restore CSR

// Testing CSR 0x9b9
	csrr x23, 0x9b9	// Read CSR
	li x20, -1
	csrrw x8, 0x9b9, x20	// Write all 1s to CSR
	csrrw x8, 0x9b9, x0	// Write all 0s to CSR
	csrrw x8, 0x9b9, x23	// Restore CSR

// Testing CSR 0x9ba
	csrr x13, 0x9ba	// Read CSR
	li x20, -1
	csrrw x31, 0x9ba, x20	// Write all 1s to CSR
	csrrw x31, 0x9ba, x0	// Write all 0s to CSR
	csrrw x31, 0x9ba, x13	// Restore CSR

// Testing CSR 0x9bb
	csrr x16, 0x9bb	// Read CSR
	li x27, -1
	csrrw x31, 0x9bb, x27	// Write all 1s to CSR
	csrrw x31, 0x9bb, x0	// Write all 0s to CSR
	csrrw x31, 0x9bb, x16	// Restore CSR

// Testing CSR 0x9bc
	csrr x16, 0x9bc	// Read CSR
	li x20, -1
	csrrw x14, 0x9bc, x20	// Write all 1s to CSR
	csrrw x14, 0x9bc, x0	// Write all 0s to CSR
	csrrw x14, 0x9bc, x16	// Restore CSR

// Testing CSR 0x9bd
	csrr x13, 0x9bd	// Read CSR
	li x30, -1
	csrrw x2, 0x9bd, x30	// Write all 1s to CSR
	csrrw x2, 0x9bd, x0	// Write all 0s to CSR
	csrrw x2, 0x9bd, x13	// Restore CSR

// Testing CSR 0x9be
	csrr x10, 0x9be	// Read CSR
	li x6, -1
	csrrw x28, 0x9be, x6	// Write all 1s to CSR
	csrrw x28, 0x9be, x0	// Write all 0s to CSR
	csrrw x28, 0x9be, x10	// Restore CSR

// Testing CSR 0x9bf
	csrr x27, 0x9bf	// Read CSR
	li x11, -1
	csrrw x4, 0x9bf, x11	// Write all 1s to CSR
	csrrw x4, 0x9bf, x0	// Write all 0s to CSR
	csrrw x4, 0x9bf, x27	// Restore CSR

// Testing CSR 0x9c0
	csrr x17, 0x9c0	// Read CSR
	li x20, -1
	csrrw x15, 0x9c0, x20	// Write all 1s to CSR
	csrrw x15, 0x9c0, x0	// Write all 0s to CSR
	csrrw x15, 0x9c0, x17	// Restore CSR

// Testing CSR 0x9c1
	csrr x6, 0x9c1	// Read CSR
	li x19, -1
	csrrw x28, 0x9c1, x19	// Write all 1s to CSR
	csrrw x28, 0x9c1, x0	// Write all 0s to CSR
	csrrw x28, 0x9c1, x6	// Restore CSR

// Testing CSR 0x9c2
	csrr x13, 0x9c2	// Read CSR
	li x8, -1
	csrrw x23, 0x9c2, x8	// Write all 1s to CSR
	csrrw x23, 0x9c2, x0	// Write all 0s to CSR
	csrrw x23, 0x9c2, x13	// Restore CSR

// Testing CSR 0x9c3
	csrr x5, 0x9c3	// Read CSR
	li x9, -1
	csrrw x1, 0x9c3, x9	// Write all 1s to CSR
	csrrw x1, 0x9c3, x0	// Write all 0s to CSR
	csrrw x1, 0x9c3, x5	// Restore CSR

// Testing CSR 0x9c4
	csrr x31, 0x9c4	// Read CSR
	li x29, -1
	csrrw x15, 0x9c4, x29	// Write all 1s to CSR
	csrrw x15, 0x9c4, x0	// Write all 0s to CSR
	csrrw x15, 0x9c4, x31	// Restore CSR

// Testing CSR 0x9c5
	csrr x26, 0x9c5	// Read CSR
	li x25, -1
	csrrw x11, 0x9c5, x25	// Write all 1s to CSR
	csrrw x11, 0x9c5, x0	// Write all 0s to CSR
	csrrw x11, 0x9c5, x26	// Restore CSR

// Testing CSR 0x9c6
	csrr x16, 0x9c6	// Read CSR
	li x28, -1
	csrrw x12, 0x9c6, x28	// Write all 1s to CSR
	csrrw x12, 0x9c6, x0	// Write all 0s to CSR
	csrrw x12, 0x9c6, x16	// Restore CSR

// Testing CSR 0x9c7
	csrr x17, 0x9c7	// Read CSR
	li x25, -1
	csrrw x8, 0x9c7, x25	// Write all 1s to CSR
	csrrw x8, 0x9c7, x0	// Write all 0s to CSR
	csrrw x8, 0x9c7, x17	// Restore CSR

// Testing CSR 0x9c8
	csrr x10, 0x9c8	// Read CSR
	li x19, -1
	csrrw x27, 0x9c8, x19	// Write all 1s to CSR
	csrrw x27, 0x9c8, x0	// Write all 0s to CSR
	csrrw x27, 0x9c8, x10	// Restore CSR

// Testing CSR 0x9c9
	csrr x1, 0x9c9	// Read CSR
	li x16, -1
	csrrw x23, 0x9c9, x16	// Write all 1s to CSR
	csrrw x23, 0x9c9, x0	// Write all 0s to CSR
	csrrw x23, 0x9c9, x1	// Restore CSR

// Testing CSR 0x9ca
	csrr x5, 0x9ca	// Read CSR
	li x9, -1
	csrrw x7, 0x9ca, x9	// Write all 1s to CSR
	csrrw x7, 0x9ca, x0	// Write all 0s to CSR
	csrrw x7, 0x9ca, x5	// Restore CSR

// Testing CSR 0x9cb
	csrr x12, 0x9cb	// Read CSR
	li x1, -1
	csrrw x28, 0x9cb, x1	// Write all 1s to CSR
	csrrw x28, 0x9cb, x0	// Write all 0s to CSR
	csrrw x28, 0x9cb, x12	// Restore CSR

// Testing CSR 0x9cc
	csrr x10, 0x9cc	// Read CSR
	li x20, -1
	csrrw x14, 0x9cc, x20	// Write all 1s to CSR
	csrrw x14, 0x9cc, x0	// Write all 0s to CSR
	csrrw x14, 0x9cc, x10	// Restore CSR

// Testing CSR 0x9cd
	csrr x31, 0x9cd	// Read CSR
	li x24, -1
	csrrw x8, 0x9cd, x24	// Write all 1s to CSR
	csrrw x8, 0x9cd, x0	// Write all 0s to CSR
	csrrw x8, 0x9cd, x31	// Restore CSR

// Testing CSR 0x9ce
	csrr x30, 0x9ce	// Read CSR
	li x1, -1
	csrrw x8, 0x9ce, x1	// Write all 1s to CSR
	csrrw x8, 0x9ce, x0	// Write all 0s to CSR
	csrrw x8, 0x9ce, x30	// Restore CSR

// Testing CSR 0x9cf
	csrr x28, 0x9cf	// Read CSR
	li x26, -1
	csrrw x20, 0x9cf, x26	// Write all 1s to CSR
	csrrw x20, 0x9cf, x0	// Write all 0s to CSR
	csrrw x20, 0x9cf, x28	// Restore CSR

// Testing CSR 0x9d0
	csrr x13, 0x9d0	// Read CSR
	li x5, -1
	csrrw x28, 0x9d0, x5	// Write all 1s to CSR
	csrrw x28, 0x9d0, x0	// Write all 0s to CSR
	csrrw x28, 0x9d0, x13	// Restore CSR

// Testing CSR 0x9d1
	csrr x9, 0x9d1	// Read CSR
	li x24, -1
	csrrw x31, 0x9d1, x24	// Write all 1s to CSR
	csrrw x31, 0x9d1, x0	// Write all 0s to CSR
	csrrw x31, 0x9d1, x9	// Restore CSR

// Testing CSR 0x9d2
	csrr x21, 0x9d2	// Read CSR
	li x19, -1
	csrrw x26, 0x9d2, x19	// Write all 1s to CSR
	csrrw x26, 0x9d2, x0	// Write all 0s to CSR
	csrrw x26, 0x9d2, x21	// Restore CSR

// Testing CSR 0x9d3
	csrr x18, 0x9d3	// Read CSR
	li x7, -1
	csrrw x25, 0x9d3, x7	// Write all 1s to CSR
	csrrw x25, 0x9d3, x0	// Write all 0s to CSR
	csrrw x25, 0x9d3, x18	// Restore CSR

// Testing CSR 0x9d4
	csrr x5, 0x9d4	// Read CSR
	li x29, -1
	csrrw x13, 0x9d4, x29	// Write all 1s to CSR
	csrrw x13, 0x9d4, x0	// Write all 0s to CSR
	csrrw x13, 0x9d4, x5	// Restore CSR

// Testing CSR 0x9d5
	csrr x19, 0x9d5	// Read CSR
	li x27, -1
	csrrw x22, 0x9d5, x27	// Write all 1s to CSR
	csrrw x22, 0x9d5, x0	// Write all 0s to CSR
	csrrw x22, 0x9d5, x19	// Restore CSR

// Testing CSR 0x9d6
	csrr x28, 0x9d6	// Read CSR
	li x31, -1
	csrrw x24, 0x9d6, x31	// Write all 1s to CSR
	csrrw x24, 0x9d6, x0	// Write all 0s to CSR
	csrrw x24, 0x9d6, x28	// Restore CSR

// Testing CSR 0x9d7
	csrr x16, 0x9d7	// Read CSR
	li x12, -1
	csrrw x29, 0x9d7, x12	// Write all 1s to CSR
	csrrw x29, 0x9d7, x0	// Write all 0s to CSR
	csrrw x29, 0x9d7, x16	// Restore CSR

// Testing CSR 0x9d8
	csrr x28, 0x9d8	// Read CSR
	li x27, -1
	csrrw x22, 0x9d8, x27	// Write all 1s to CSR
	csrrw x22, 0x9d8, x0	// Write all 0s to CSR
	csrrw x22, 0x9d8, x28	// Restore CSR

// Testing CSR 0x9d9
	csrr x16, 0x9d9	// Read CSR
	li x20, -1
	csrrw x23, 0x9d9, x20	// Write all 1s to CSR
	csrrw x23, 0x9d9, x0	// Write all 0s to CSR
	csrrw x23, 0x9d9, x16	// Restore CSR

// Testing CSR 0x9da
	csrr x26, 0x9da	// Read CSR
	li x5, -1
	csrrw x1, 0x9da, x5	// Write all 1s to CSR
	csrrw x1, 0x9da, x0	// Write all 0s to CSR
	csrrw x1, 0x9da, x26	// Restore CSR

// Testing CSR 0x9db
	csrr x24, 0x9db	// Read CSR
	li x20, -1
	csrrw x13, 0x9db, x20	// Write all 1s to CSR
	csrrw x13, 0x9db, x0	// Write all 0s to CSR
	csrrw x13, 0x9db, x24	// Restore CSR

// Testing CSR 0x9dc
	csrr x22, 0x9dc	// Read CSR
	li x27, -1
	csrrw x14, 0x9dc, x27	// Write all 1s to CSR
	csrrw x14, 0x9dc, x0	// Write all 0s to CSR
	csrrw x14, 0x9dc, x22	// Restore CSR

// Testing CSR 0x9dd
	csrr x12, 0x9dd	// Read CSR
	li x10, -1
	csrrw x26, 0x9dd, x10	// Write all 1s to CSR
	csrrw x26, 0x9dd, x0	// Write all 0s to CSR
	csrrw x26, 0x9dd, x12	// Restore CSR

// Testing CSR 0x9de
	csrr x5, 0x9de	// Read CSR
	li x10, -1
	csrrw x31, 0x9de, x10	// Write all 1s to CSR
	csrrw x31, 0x9de, x0	// Write all 0s to CSR
	csrrw x31, 0x9de, x5	// Restore CSR

// Testing CSR 0x9df
	csrr x16, 0x9df	// Read CSR
	li x9, -1
	csrrw x13, 0x9df, x9	// Write all 1s to CSR
	csrrw x13, 0x9df, x0	// Write all 0s to CSR
	csrrw x13, 0x9df, x16	// Restore CSR

// Testing CSR 0x9e0
	csrr x23, 0x9e0	// Read CSR
	li x20, -1
	csrrw x8, 0x9e0, x20	// Write all 1s to CSR
	csrrw x8, 0x9e0, x0	// Write all 0s to CSR
	csrrw x8, 0x9e0, x23	// Restore CSR

// Testing CSR 0x9e1
	csrr x26, 0x9e1	// Read CSR
	li x27, -1
	csrrw x15, 0x9e1, x27	// Write all 1s to CSR
	csrrw x15, 0x9e1, x0	// Write all 0s to CSR
	csrrw x15, 0x9e1, x26	// Restore CSR

// Testing CSR 0x9e2
	csrr x26, 0x9e2	// Read CSR
	li x30, -1
	csrrw x31, 0x9e2, x30	// Write all 1s to CSR
	csrrw x31, 0x9e2, x0	// Write all 0s to CSR
	csrrw x31, 0x9e2, x26	// Restore CSR

// Testing CSR 0x9e3
	csrr x7, 0x9e3	// Read CSR
	li x23, -1
	csrrw x6, 0x9e3, x23	// Write all 1s to CSR
	csrrw x6, 0x9e3, x0	// Write all 0s to CSR
	csrrw x6, 0x9e3, x7	// Restore CSR

// Testing CSR 0x9e4
	csrr x16, 0x9e4	// Read CSR
	li x25, -1
	csrrw x31, 0x9e4, x25	// Write all 1s to CSR
	csrrw x31, 0x9e4, x0	// Write all 0s to CSR
	csrrw x31, 0x9e4, x16	// Restore CSR

// Testing CSR 0x9e5
	csrr x15, 0x9e5	// Read CSR
	li x2, -1
	csrrw x24, 0x9e5, x2	// Write all 1s to CSR
	csrrw x24, 0x9e5, x0	// Write all 0s to CSR
	csrrw x24, 0x9e5, x15	// Restore CSR

// Testing CSR 0x9e6
	csrr x30, 0x9e6	// Read CSR
	li x27, -1
	csrrw x24, 0x9e6, x27	// Write all 1s to CSR
	csrrw x24, 0x9e6, x0	// Write all 0s to CSR
	csrrw x24, 0x9e6, x30	// Restore CSR

// Testing CSR 0x9e7
	csrr x14, 0x9e7	// Read CSR
	li x7, -1
	csrrw x17, 0x9e7, x7	// Write all 1s to CSR
	csrrw x17, 0x9e7, x0	// Write all 0s to CSR
	csrrw x17, 0x9e7, x14	// Restore CSR

// Testing CSR 0x9e8
	csrr x10, 0x9e8	// Read CSR
	li x23, -1
	csrrw x28, 0x9e8, x23	// Write all 1s to CSR
	csrrw x28, 0x9e8, x0	// Write all 0s to CSR
	csrrw x28, 0x9e8, x10	// Restore CSR

// Testing CSR 0x9e9
	csrr x14, 0x9e9	// Read CSR
	li x4, -1
	csrrw x10, 0x9e9, x4	// Write all 1s to CSR
	csrrw x10, 0x9e9, x0	// Write all 0s to CSR
	csrrw x10, 0x9e9, x14	// Restore CSR

// Testing CSR 0x9ea
	csrr x9, 0x9ea	// Read CSR
	li x6, -1
	csrrw x5, 0x9ea, x6	// Write all 1s to CSR
	csrrw x5, 0x9ea, x0	// Write all 0s to CSR
	csrrw x5, 0x9ea, x9	// Restore CSR

// Testing CSR 0x9eb
	csrr x25, 0x9eb	// Read CSR
	li x7, -1
	csrrw x10, 0x9eb, x7	// Write all 1s to CSR
	csrrw x10, 0x9eb, x0	// Write all 0s to CSR
	csrrw x10, 0x9eb, x25	// Restore CSR

// Testing CSR 0x9ec
	csrr x5, 0x9ec	// Read CSR
	li x6, -1
	csrrw x12, 0x9ec, x6	// Write all 1s to CSR
	csrrw x12, 0x9ec, x0	// Write all 0s to CSR
	csrrw x12, 0x9ec, x5	// Restore CSR

// Testing CSR 0x9ed
	csrr x7, 0x9ed	// Read CSR
	li x28, -1
	csrrw x19, 0x9ed, x28	// Write all 1s to CSR
	csrrw x19, 0x9ed, x0	// Write all 0s to CSR
	csrrw x19, 0x9ed, x7	// Restore CSR

// Testing CSR 0x9ee
	csrr x19, 0x9ee	// Read CSR
	li x26, -1
	csrrw x6, 0x9ee, x26	// Write all 1s to CSR
	csrrw x6, 0x9ee, x0	// Write all 0s to CSR
	csrrw x6, 0x9ee, x19	// Restore CSR

// Testing CSR 0x9ef
	csrr x2, 0x9ef	// Read CSR
	li x4, -1
	csrrw x5, 0x9ef, x4	// Write all 1s to CSR
	csrrw x5, 0x9ef, x0	// Write all 0s to CSR
	csrrw x5, 0x9ef, x2	// Restore CSR

// Testing CSR 0x9f0
	csrr x30, 0x9f0	// Read CSR
	li x9, -1
	csrrw x19, 0x9f0, x9	// Write all 1s to CSR
	csrrw x19, 0x9f0, x0	// Write all 0s to CSR
	csrrw x19, 0x9f0, x30	// Restore CSR

// Testing CSR 0x9f1
	csrr x10, 0x9f1	// Read CSR
	li x2, -1
	csrrw x6, 0x9f1, x2	// Write all 1s to CSR
	csrrw x6, 0x9f1, x0	// Write all 0s to CSR
	csrrw x6, 0x9f1, x10	// Restore CSR

// Testing CSR 0x9f2
	csrr x9, 0x9f2	// Read CSR
	li x19, -1
	csrrw x31, 0x9f2, x19	// Write all 1s to CSR
	csrrw x31, 0x9f2, x0	// Write all 0s to CSR
	csrrw x31, 0x9f2, x9	// Restore CSR

// Testing CSR 0x9f3
	csrr x27, 0x9f3	// Read CSR
	li x12, -1
	csrrw x4, 0x9f3, x12	// Write all 1s to CSR
	csrrw x4, 0x9f3, x0	// Write all 0s to CSR
	csrrw x4, 0x9f3, x27	// Restore CSR

// Testing CSR 0x9f4
	csrr x14, 0x9f4	// Read CSR
	li x9, -1
	csrrw x11, 0x9f4, x9	// Write all 1s to CSR
	csrrw x11, 0x9f4, x0	// Write all 0s to CSR
	csrrw x11, 0x9f4, x14	// Restore CSR

// Testing CSR 0x9f5
	csrr x23, 0x9f5	// Read CSR
	li x20, -1
	csrrw x18, 0x9f5, x20	// Write all 1s to CSR
	csrrw x18, 0x9f5, x0	// Write all 0s to CSR
	csrrw x18, 0x9f5, x23	// Restore CSR

// Testing CSR 0x9f6
	csrr x17, 0x9f6	// Read CSR
	li x21, -1
	csrrw x9, 0x9f6, x21	// Write all 1s to CSR
	csrrw x9, 0x9f6, x0	// Write all 0s to CSR
	csrrw x9, 0x9f6, x17	// Restore CSR

// Testing CSR 0x9f7
	csrr x28, 0x9f7	// Read CSR
	li x4, -1
	csrrw x31, 0x9f7, x4	// Write all 1s to CSR
	csrrw x31, 0x9f7, x0	// Write all 0s to CSR
	csrrw x31, 0x9f7, x28	// Restore CSR

// Testing CSR 0x9f8
	csrr x18, 0x9f8	// Read CSR
	li x31, -1
	csrrw x26, 0x9f8, x31	// Write all 1s to CSR
	csrrw x26, 0x9f8, x0	// Write all 0s to CSR
	csrrw x26, 0x9f8, x18	// Restore CSR

// Testing CSR 0x9f9
	csrr x2, 0x9f9	// Read CSR
	li x1, -1
	csrrw x11, 0x9f9, x1	// Write all 1s to CSR
	csrrw x11, 0x9f9, x0	// Write all 0s to CSR
	csrrw x11, 0x9f9, x2	// Restore CSR

// Testing CSR 0x9fa
	csrr x24, 0x9fa	// Read CSR
	li x14, -1
	csrrw x20, 0x9fa, x14	// Write all 1s to CSR
	csrrw x20, 0x9fa, x0	// Write all 0s to CSR
	csrrw x20, 0x9fa, x24	// Restore CSR

// Testing CSR 0x9fb
	csrr x16, 0x9fb	// Read CSR
	li x26, -1
	csrrw x11, 0x9fb, x26	// Write all 1s to CSR
	csrrw x11, 0x9fb, x0	// Write all 0s to CSR
	csrrw x11, 0x9fb, x16	// Restore CSR

// Testing CSR 0x9fc
	csrr x29, 0x9fc	// Read CSR
	li x22, -1
	csrrw x19, 0x9fc, x22	// Write all 1s to CSR
	csrrw x19, 0x9fc, x0	// Write all 0s to CSR
	csrrw x19, 0x9fc, x29	// Restore CSR

// Testing CSR 0x9fd
	csrr x26, 0x9fd	// Read CSR
	li x8, -1
	csrrw x4, 0x9fd, x8	// Write all 1s to CSR
	csrrw x4, 0x9fd, x0	// Write all 0s to CSR
	csrrw x4, 0x9fd, x26	// Restore CSR

// Testing CSR 0x9fe
	csrr x14, 0x9fe	// Read CSR
	li x22, -1
	csrrw x31, 0x9fe, x22	// Write all 1s to CSR
	csrrw x31, 0x9fe, x0	// Write all 0s to CSR
	csrrw x31, 0x9fe, x14	// Restore CSR

// Testing CSR 0x9ff
	csrr x3, 0x9ff	// Read CSR
	li x19, -1
	csrrw x28, 0x9ff, x19	// Write all 1s to CSR
	csrrw x28, 0x9ff, x0	// Write all 0s to CSR
	csrrw x28, 0x9ff, x3	// Restore CSR

// Testing CSR 0xa00
	csrr x9, 0xa00	// Read CSR
	li x28, -1
	csrrw x25, 0xa00, x28	// Write all 1s to CSR
	csrrw x25, 0xa00, x0	// Write all 0s to CSR
	csrrw x25, 0xa00, x9	// Restore CSR

// Testing CSR 0xa01
	csrr x18, 0xa01	// Read CSR
	li x12, -1
	csrrw x29, 0xa01, x12	// Write all 1s to CSR
	csrrw x29, 0xa01, x0	// Write all 0s to CSR
	csrrw x29, 0xa01, x18	// Restore CSR

// Testing CSR 0xa02
	csrr x24, 0xa02	// Read CSR
	li x26, -1
	csrrw x5, 0xa02, x26	// Write all 1s to CSR
	csrrw x5, 0xa02, x0	// Write all 0s to CSR
	csrrw x5, 0xa02, x24	// Restore CSR

// Testing CSR 0xa03
	csrr x2, 0xa03	// Read CSR
	li x1, -1
	csrrw x5, 0xa03, x1	// Write all 1s to CSR
	csrrw x5, 0xa03, x0	// Write all 0s to CSR
	csrrw x5, 0xa03, x2	// Restore CSR

// Testing CSR 0xa04
	csrr x13, 0xa04	// Read CSR
	li x27, -1
	csrrw x12, 0xa04, x27	// Write all 1s to CSR
	csrrw x12, 0xa04, x0	// Write all 0s to CSR
	csrrw x12, 0xa04, x13	// Restore CSR

// Testing CSR 0xa05
	csrr x26, 0xa05	// Read CSR
	li x1, -1
	csrrw x12, 0xa05, x1	// Write all 1s to CSR
	csrrw x12, 0xa05, x0	// Write all 0s to CSR
	csrrw x12, 0xa05, x26	// Restore CSR

// Testing CSR 0xa06
	csrr x26, 0xa06	// Read CSR
	li x11, -1
	csrrw x17, 0xa06, x11	// Write all 1s to CSR
	csrrw x17, 0xa06, x0	// Write all 0s to CSR
	csrrw x17, 0xa06, x26	// Restore CSR

// Testing CSR 0xa07
	csrr x19, 0xa07	// Read CSR
	li x30, -1
	csrrw x27, 0xa07, x30	// Write all 1s to CSR
	csrrw x27, 0xa07, x0	// Write all 0s to CSR
	csrrw x27, 0xa07, x19	// Restore CSR

// Testing CSR 0xa08
	csrr x27, 0xa08	// Read CSR
	li x26, -1
	csrrw x19, 0xa08, x26	// Write all 1s to CSR
	csrrw x19, 0xa08, x0	// Write all 0s to CSR
	csrrw x19, 0xa08, x27	// Restore CSR

// Testing CSR 0xa09
	csrr x13, 0xa09	// Read CSR
	li x18, -1
	csrrw x31, 0xa09, x18	// Write all 1s to CSR
	csrrw x31, 0xa09, x0	// Write all 0s to CSR
	csrrw x31, 0xa09, x13	// Restore CSR

// Testing CSR 0xa0a
	csrr x30, 0xa0a	// Read CSR
	li x23, -1
	csrrw x4, 0xa0a, x23	// Write all 1s to CSR
	csrrw x4, 0xa0a, x0	// Write all 0s to CSR
	csrrw x4, 0xa0a, x30	// Restore CSR

// Testing CSR 0xa0b
	csrr x4, 0xa0b	// Read CSR
	li x20, -1
	csrrw x18, 0xa0b, x20	// Write all 1s to CSR
	csrrw x18, 0xa0b, x0	// Write all 0s to CSR
	csrrw x18, 0xa0b, x4	// Restore CSR

// Testing CSR 0xa0c
	csrr x7, 0xa0c	// Read CSR
	li x21, -1
	csrrw x11, 0xa0c, x21	// Write all 1s to CSR
	csrrw x11, 0xa0c, x0	// Write all 0s to CSR
	csrrw x11, 0xa0c, x7	// Restore CSR

// Testing CSR 0xa0d
	csrr x18, 0xa0d	// Read CSR
	li x13, -1
	csrrw x5, 0xa0d, x13	// Write all 1s to CSR
	csrrw x5, 0xa0d, x0	// Write all 0s to CSR
	csrrw x5, 0xa0d, x18	// Restore CSR

// Testing CSR 0xa0e
	csrr x2, 0xa0e	// Read CSR
	li x29, -1
	csrrw x3, 0xa0e, x29	// Write all 1s to CSR
	csrrw x3, 0xa0e, x0	// Write all 0s to CSR
	csrrw x3, 0xa0e, x2	// Restore CSR

// Testing CSR 0xa0f
	csrr x30, 0xa0f	// Read CSR
	li x2, -1
	csrrw x21, 0xa0f, x2	// Write all 1s to CSR
	csrrw x21, 0xa0f, x0	// Write all 0s to CSR
	csrrw x21, 0xa0f, x30	// Restore CSR

// Testing CSR 0xa10
	csrr x12, 0xa10	// Read CSR
	li x7, -1
	csrrw x29, 0xa10, x7	// Write all 1s to CSR
	csrrw x29, 0xa10, x0	// Write all 0s to CSR
	csrrw x29, 0xa10, x12	// Restore CSR

// Testing CSR 0xa11
	csrr x14, 0xa11	// Read CSR
	li x19, -1
	csrrw x23, 0xa11, x19	// Write all 1s to CSR
	csrrw x23, 0xa11, x0	// Write all 0s to CSR
	csrrw x23, 0xa11, x14	// Restore CSR

// Testing CSR 0xa12
	csrr x21, 0xa12	// Read CSR
	li x4, -1
	csrrw x14, 0xa12, x4	// Write all 1s to CSR
	csrrw x14, 0xa12, x0	// Write all 0s to CSR
	csrrw x14, 0xa12, x21	// Restore CSR

// Testing CSR 0xa13
	csrr x7, 0xa13	// Read CSR
	li x11, -1
	csrrw x3, 0xa13, x11	// Write all 1s to CSR
	csrrw x3, 0xa13, x0	// Write all 0s to CSR
	csrrw x3, 0xa13, x7	// Restore CSR

// Testing CSR 0xa14
	csrr x4, 0xa14	// Read CSR
	li x30, -1
	csrrw x24, 0xa14, x30	// Write all 1s to CSR
	csrrw x24, 0xa14, x0	// Write all 0s to CSR
	csrrw x24, 0xa14, x4	// Restore CSR

// Testing CSR 0xa15
	csrr x25, 0xa15	// Read CSR
	li x26, -1
	csrrw x5, 0xa15, x26	// Write all 1s to CSR
	csrrw x5, 0xa15, x0	// Write all 0s to CSR
	csrrw x5, 0xa15, x25	// Restore CSR

// Testing CSR 0xa16
	csrr x9, 0xa16	// Read CSR
	li x8, -1
	csrrw x30, 0xa16, x8	// Write all 1s to CSR
	csrrw x30, 0xa16, x0	// Write all 0s to CSR
	csrrw x30, 0xa16, x9	// Restore CSR

// Testing CSR 0xa17
	csrr x22, 0xa17	// Read CSR
	li x24, -1
	csrrw x6, 0xa17, x24	// Write all 1s to CSR
	csrrw x6, 0xa17, x0	// Write all 0s to CSR
	csrrw x6, 0xa17, x22	// Restore CSR

// Testing CSR 0xa18
	csrr x7, 0xa18	// Read CSR
	li x30, -1
	csrrw x28, 0xa18, x30	// Write all 1s to CSR
	csrrw x28, 0xa18, x0	// Write all 0s to CSR
	csrrw x28, 0xa18, x7	// Restore CSR

// Testing CSR 0xa19
	csrr x13, 0xa19	// Read CSR
	li x14, -1
	csrrw x7, 0xa19, x14	// Write all 1s to CSR
	csrrw x7, 0xa19, x0	// Write all 0s to CSR
	csrrw x7, 0xa19, x13	// Restore CSR

// Testing CSR 0xa1a
	csrr x28, 0xa1a	// Read CSR
	li x7, -1
	csrrw x1, 0xa1a, x7	// Write all 1s to CSR
	csrrw x1, 0xa1a, x0	// Write all 0s to CSR
	csrrw x1, 0xa1a, x28	// Restore CSR

// Testing CSR 0xa1b
	csrr x31, 0xa1b	// Read CSR
	li x17, -1
	csrrw x9, 0xa1b, x17	// Write all 1s to CSR
	csrrw x9, 0xa1b, x0	// Write all 0s to CSR
	csrrw x9, 0xa1b, x31	// Restore CSR

// Testing CSR 0xa1c
	csrr x14, 0xa1c	// Read CSR
	li x23, -1
	csrrw x26, 0xa1c, x23	// Write all 1s to CSR
	csrrw x26, 0xa1c, x0	// Write all 0s to CSR
	csrrw x26, 0xa1c, x14	// Restore CSR

// Testing CSR 0xa1d
	csrr x7, 0xa1d	// Read CSR
	li x31, -1
	csrrw x17, 0xa1d, x31	// Write all 1s to CSR
	csrrw x17, 0xa1d, x0	// Write all 0s to CSR
	csrrw x17, 0xa1d, x7	// Restore CSR

// Testing CSR 0xa1e
	csrr x4, 0xa1e	// Read CSR
	li x26, -1
	csrrw x25, 0xa1e, x26	// Write all 1s to CSR
	csrrw x25, 0xa1e, x0	// Write all 0s to CSR
	csrrw x25, 0xa1e, x4	// Restore CSR

// Testing CSR 0xa1f
	csrr x20, 0xa1f	// Read CSR
	li x12, -1
	csrrw x28, 0xa1f, x12	// Write all 1s to CSR
	csrrw x28, 0xa1f, x0	// Write all 0s to CSR
	csrrw x28, 0xa1f, x20	// Restore CSR

// Testing CSR 0xa20
	csrr x29, 0xa20	// Read CSR
	li x21, -1
	csrrw x28, 0xa20, x21	// Write all 1s to CSR
	csrrw x28, 0xa20, x0	// Write all 0s to CSR
	csrrw x28, 0xa20, x29	// Restore CSR

// Testing CSR 0xa21
	csrr x11, 0xa21	// Read CSR
	li x9, -1
	csrrw x17, 0xa21, x9	// Write all 1s to CSR
	csrrw x17, 0xa21, x0	// Write all 0s to CSR
	csrrw x17, 0xa21, x11	// Restore CSR

// Testing CSR 0xa22
	csrr x8, 0xa22	// Read CSR
	li x16, -1
	csrrw x19, 0xa22, x16	// Write all 1s to CSR
	csrrw x19, 0xa22, x0	// Write all 0s to CSR
	csrrw x19, 0xa22, x8	// Restore CSR

// Testing CSR 0xa23
	csrr x7, 0xa23	// Read CSR
	li x19, -1
	csrrw x2, 0xa23, x19	// Write all 1s to CSR
	csrrw x2, 0xa23, x0	// Write all 0s to CSR
	csrrw x2, 0xa23, x7	// Restore CSR

// Testing CSR 0xa24
	csrr x19, 0xa24	// Read CSR
	li x29, -1
	csrrw x22, 0xa24, x29	// Write all 1s to CSR
	csrrw x22, 0xa24, x0	// Write all 0s to CSR
	csrrw x22, 0xa24, x19	// Restore CSR

// Testing CSR 0xa25
	csrr x4, 0xa25	// Read CSR
	li x9, -1
	csrrw x14, 0xa25, x9	// Write all 1s to CSR
	csrrw x14, 0xa25, x0	// Write all 0s to CSR
	csrrw x14, 0xa25, x4	// Restore CSR

// Testing CSR 0xa26
	csrr x21, 0xa26	// Read CSR
	li x4, -1
	csrrw x26, 0xa26, x4	// Write all 1s to CSR
	csrrw x26, 0xa26, x0	// Write all 0s to CSR
	csrrw x26, 0xa26, x21	// Restore CSR

// Testing CSR 0xa27
	csrr x2, 0xa27	// Read CSR
	li x4, -1
	csrrw x11, 0xa27, x4	// Write all 1s to CSR
	csrrw x11, 0xa27, x0	// Write all 0s to CSR
	csrrw x11, 0xa27, x2	// Restore CSR

// Testing CSR 0xa28
	csrr x11, 0xa28	// Read CSR
	li x4, -1
	csrrw x20, 0xa28, x4	// Write all 1s to CSR
	csrrw x20, 0xa28, x0	// Write all 0s to CSR
	csrrw x20, 0xa28, x11	// Restore CSR

// Testing CSR 0xa29
	csrr x10, 0xa29	// Read CSR
	li x31, -1
	csrrw x4, 0xa29, x31	// Write all 1s to CSR
	csrrw x4, 0xa29, x0	// Write all 0s to CSR
	csrrw x4, 0xa29, x10	// Restore CSR

// Testing CSR 0xa2a
	csrr x8, 0xa2a	// Read CSR
	li x28, -1
	csrrw x26, 0xa2a, x28	// Write all 1s to CSR
	csrrw x26, 0xa2a, x0	// Write all 0s to CSR
	csrrw x26, 0xa2a, x8	// Restore CSR

// Testing CSR 0xa2b
	csrr x10, 0xa2b	// Read CSR
	li x26, -1
	csrrw x19, 0xa2b, x26	// Write all 1s to CSR
	csrrw x19, 0xa2b, x0	// Write all 0s to CSR
	csrrw x19, 0xa2b, x10	// Restore CSR

// Testing CSR 0xa2c
	csrr x3, 0xa2c	// Read CSR
	li x4, -1
	csrrw x13, 0xa2c, x4	// Write all 1s to CSR
	csrrw x13, 0xa2c, x0	// Write all 0s to CSR
	csrrw x13, 0xa2c, x3	// Restore CSR

// Testing CSR 0xa2d
	csrr x16, 0xa2d	// Read CSR
	li x5, -1
	csrrw x30, 0xa2d, x5	// Write all 1s to CSR
	csrrw x30, 0xa2d, x0	// Write all 0s to CSR
	csrrw x30, 0xa2d, x16	// Restore CSR

// Testing CSR 0xa2e
	csrr x11, 0xa2e	// Read CSR
	li x8, -1
	csrrw x5, 0xa2e, x8	// Write all 1s to CSR
	csrrw x5, 0xa2e, x0	// Write all 0s to CSR
	csrrw x5, 0xa2e, x11	// Restore CSR

// Testing CSR 0xa2f
	csrr x8, 0xa2f	// Read CSR
	li x5, -1
	csrrw x2, 0xa2f, x5	// Write all 1s to CSR
	csrrw x2, 0xa2f, x0	// Write all 0s to CSR
	csrrw x2, 0xa2f, x8	// Restore CSR

// Testing CSR 0xa30
	csrr x23, 0xa30	// Read CSR
	li x19, -1
	csrrw x2, 0xa30, x19	// Write all 1s to CSR
	csrrw x2, 0xa30, x0	// Write all 0s to CSR
	csrrw x2, 0xa30, x23	// Restore CSR

// Testing CSR 0xa31
	csrr x15, 0xa31	// Read CSR
	li x16, -1
	csrrw x18, 0xa31, x16	// Write all 1s to CSR
	csrrw x18, 0xa31, x0	// Write all 0s to CSR
	csrrw x18, 0xa31, x15	// Restore CSR

// Testing CSR 0xa32
	csrr x18, 0xa32	// Read CSR
	li x8, -1
	csrrw x14, 0xa32, x8	// Write all 1s to CSR
	csrrw x14, 0xa32, x0	// Write all 0s to CSR
	csrrw x14, 0xa32, x18	// Restore CSR

// Testing CSR 0xa33
	csrr x28, 0xa33	// Read CSR
	li x8, -1
	csrrw x7, 0xa33, x8	// Write all 1s to CSR
	csrrw x7, 0xa33, x0	// Write all 0s to CSR
	csrrw x7, 0xa33, x28	// Restore CSR

// Testing CSR 0xa34
	csrr x20, 0xa34	// Read CSR
	li x27, -1
	csrrw x4, 0xa34, x27	// Write all 1s to CSR
	csrrw x4, 0xa34, x0	// Write all 0s to CSR
	csrrw x4, 0xa34, x20	// Restore CSR

// Testing CSR 0xa35
	csrr x11, 0xa35	// Read CSR
	li x6, -1
	csrrw x23, 0xa35, x6	// Write all 1s to CSR
	csrrw x23, 0xa35, x0	// Write all 0s to CSR
	csrrw x23, 0xa35, x11	// Restore CSR

// Testing CSR 0xa36
	csrr x10, 0xa36	// Read CSR
	li x4, -1
	csrrw x15, 0xa36, x4	// Write all 1s to CSR
	csrrw x15, 0xa36, x0	// Write all 0s to CSR
	csrrw x15, 0xa36, x10	// Restore CSR

// Testing CSR 0xa37
	csrr x15, 0xa37	// Read CSR
	li x7, -1
	csrrw x31, 0xa37, x7	// Write all 1s to CSR
	csrrw x31, 0xa37, x0	// Write all 0s to CSR
	csrrw x31, 0xa37, x15	// Restore CSR

// Testing CSR 0xa38
	csrr x21, 0xa38	// Read CSR
	li x16, -1
	csrrw x9, 0xa38, x16	// Write all 1s to CSR
	csrrw x9, 0xa38, x0	// Write all 0s to CSR
	csrrw x9, 0xa38, x21	// Restore CSR

// Testing CSR 0xa39
	csrr x26, 0xa39	// Read CSR
	li x16, -1
	csrrw x7, 0xa39, x16	// Write all 1s to CSR
	csrrw x7, 0xa39, x0	// Write all 0s to CSR
	csrrw x7, 0xa39, x26	// Restore CSR

// Testing CSR 0xa3a
	csrr x26, 0xa3a	// Read CSR
	li x15, -1
	csrrw x22, 0xa3a, x15	// Write all 1s to CSR
	csrrw x22, 0xa3a, x0	// Write all 0s to CSR
	csrrw x22, 0xa3a, x26	// Restore CSR

// Testing CSR 0xa3b
	csrr x6, 0xa3b	// Read CSR
	li x20, -1
	csrrw x7, 0xa3b, x20	// Write all 1s to CSR
	csrrw x7, 0xa3b, x0	// Write all 0s to CSR
	csrrw x7, 0xa3b, x6	// Restore CSR

// Testing CSR 0xa3c
	csrr x27, 0xa3c	// Read CSR
	li x19, -1
	csrrw x13, 0xa3c, x19	// Write all 1s to CSR
	csrrw x13, 0xa3c, x0	// Write all 0s to CSR
	csrrw x13, 0xa3c, x27	// Restore CSR

// Testing CSR 0xa3d
	csrr x12, 0xa3d	// Read CSR
	li x14, -1
	csrrw x9, 0xa3d, x14	// Write all 1s to CSR
	csrrw x9, 0xa3d, x0	// Write all 0s to CSR
	csrrw x9, 0xa3d, x12	// Restore CSR

// Testing CSR 0xa3e
	csrr x13, 0xa3e	// Read CSR
	li x6, -1
	csrrw x5, 0xa3e, x6	// Write all 1s to CSR
	csrrw x5, 0xa3e, x0	// Write all 0s to CSR
	csrrw x5, 0xa3e, x13	// Restore CSR

// Testing CSR 0xa3f
	csrr x24, 0xa3f	// Read CSR
	li x20, -1
	csrrw x18, 0xa3f, x20	// Write all 1s to CSR
	csrrw x18, 0xa3f, x0	// Write all 0s to CSR
	csrrw x18, 0xa3f, x24	// Restore CSR

// Testing CSR 0xa40
	csrr x16, 0xa40	// Read CSR
	li x4, -1
	csrrw x26, 0xa40, x4	// Write all 1s to CSR
	csrrw x26, 0xa40, x0	// Write all 0s to CSR
	csrrw x26, 0xa40, x16	// Restore CSR

// Testing CSR 0xa41
	csrr x8, 0xa41	// Read CSR
	li x20, -1
	csrrw x29, 0xa41, x20	// Write all 1s to CSR
	csrrw x29, 0xa41, x0	// Write all 0s to CSR
	csrrw x29, 0xa41, x8	// Restore CSR

// Testing CSR 0xa42
	csrr x12, 0xa42	// Read CSR
	li x22, -1
	csrrw x28, 0xa42, x22	// Write all 1s to CSR
	csrrw x28, 0xa42, x0	// Write all 0s to CSR
	csrrw x28, 0xa42, x12	// Restore CSR

// Testing CSR 0xa43
	csrr x19, 0xa43	// Read CSR
	li x9, -1
	csrrw x1, 0xa43, x9	// Write all 1s to CSR
	csrrw x1, 0xa43, x0	// Write all 0s to CSR
	csrrw x1, 0xa43, x19	// Restore CSR

// Testing CSR 0xa44
	csrr x10, 0xa44	// Read CSR
	li x15, -1
	csrrw x28, 0xa44, x15	// Write all 1s to CSR
	csrrw x28, 0xa44, x0	// Write all 0s to CSR
	csrrw x28, 0xa44, x10	// Restore CSR

// Testing CSR 0xa45
	csrr x29, 0xa45	// Read CSR
	li x7, -1
	csrrw x13, 0xa45, x7	// Write all 1s to CSR
	csrrw x13, 0xa45, x0	// Write all 0s to CSR
	csrrw x13, 0xa45, x29	// Restore CSR

// Testing CSR 0xa46
	csrr x8, 0xa46	// Read CSR
	li x10, -1
	csrrw x19, 0xa46, x10	// Write all 1s to CSR
	csrrw x19, 0xa46, x0	// Write all 0s to CSR
	csrrw x19, 0xa46, x8	// Restore CSR

// Testing CSR 0xa47
	csrr x11, 0xa47	// Read CSR
	li x1, -1
	csrrw x12, 0xa47, x1	// Write all 1s to CSR
	csrrw x12, 0xa47, x0	// Write all 0s to CSR
	csrrw x12, 0xa47, x11	// Restore CSR

// Testing CSR 0xa48
	csrr x27, 0xa48	// Read CSR
	li x2, -1
	csrrw x14, 0xa48, x2	// Write all 1s to CSR
	csrrw x14, 0xa48, x0	// Write all 0s to CSR
	csrrw x14, 0xa48, x27	// Restore CSR

// Testing CSR 0xa49
	csrr x30, 0xa49	// Read CSR
	li x24, -1
	csrrw x25, 0xa49, x24	// Write all 1s to CSR
	csrrw x25, 0xa49, x0	// Write all 0s to CSR
	csrrw x25, 0xa49, x30	// Restore CSR

// Testing CSR 0xa4a
	csrr x1, 0xa4a	// Read CSR
	li x19, -1
	csrrw x26, 0xa4a, x19	// Write all 1s to CSR
	csrrw x26, 0xa4a, x0	// Write all 0s to CSR
	csrrw x26, 0xa4a, x1	// Restore CSR

// Testing CSR 0xa4b
	csrr x21, 0xa4b	// Read CSR
	li x18, -1
	csrrw x26, 0xa4b, x18	// Write all 1s to CSR
	csrrw x26, 0xa4b, x0	// Write all 0s to CSR
	csrrw x26, 0xa4b, x21	// Restore CSR

// Testing CSR 0xa4c
	csrr x1, 0xa4c	// Read CSR
	li x24, -1
	csrrw x2, 0xa4c, x24	// Write all 1s to CSR
	csrrw x2, 0xa4c, x0	// Write all 0s to CSR
	csrrw x2, 0xa4c, x1	// Restore CSR

// Testing CSR 0xa4d
	csrr x2, 0xa4d	// Read CSR
	li x14, -1
	csrrw x31, 0xa4d, x14	// Write all 1s to CSR
	csrrw x31, 0xa4d, x0	// Write all 0s to CSR
	csrrw x31, 0xa4d, x2	// Restore CSR

// Testing CSR 0xa4e
	csrr x20, 0xa4e	// Read CSR
	li x10, -1
	csrrw x15, 0xa4e, x10	// Write all 1s to CSR
	csrrw x15, 0xa4e, x0	// Write all 0s to CSR
	csrrw x15, 0xa4e, x20	// Restore CSR

// Testing CSR 0xa4f
	csrr x11, 0xa4f	// Read CSR
	li x21, -1
	csrrw x1, 0xa4f, x21	// Write all 1s to CSR
	csrrw x1, 0xa4f, x0	// Write all 0s to CSR
	csrrw x1, 0xa4f, x11	// Restore CSR

// Testing CSR 0xa50
	csrr x29, 0xa50	// Read CSR
	li x18, -1
	csrrw x13, 0xa50, x18	// Write all 1s to CSR
	csrrw x13, 0xa50, x0	// Write all 0s to CSR
	csrrw x13, 0xa50, x29	// Restore CSR

// Testing CSR 0xa51
	csrr x4, 0xa51	// Read CSR
	li x14, -1
	csrrw x9, 0xa51, x14	// Write all 1s to CSR
	csrrw x9, 0xa51, x0	// Write all 0s to CSR
	csrrw x9, 0xa51, x4	// Restore CSR

// Testing CSR 0xa52
	csrr x26, 0xa52	// Read CSR
	li x24, -1
	csrrw x2, 0xa52, x24	// Write all 1s to CSR
	csrrw x2, 0xa52, x0	// Write all 0s to CSR
	csrrw x2, 0xa52, x26	// Restore CSR

// Testing CSR 0xa53
	csrr x26, 0xa53	// Read CSR
	li x11, -1
	csrrw x2, 0xa53, x11	// Write all 1s to CSR
	csrrw x2, 0xa53, x0	// Write all 0s to CSR
	csrrw x2, 0xa53, x26	// Restore CSR

// Testing CSR 0xa54
	csrr x2, 0xa54	// Read CSR
	li x12, -1
	csrrw x21, 0xa54, x12	// Write all 1s to CSR
	csrrw x21, 0xa54, x0	// Write all 0s to CSR
	csrrw x21, 0xa54, x2	// Restore CSR

// Testing CSR 0xa55
	csrr x26, 0xa55	// Read CSR
	li x22, -1
	csrrw x25, 0xa55, x22	// Write all 1s to CSR
	csrrw x25, 0xa55, x0	// Write all 0s to CSR
	csrrw x25, 0xa55, x26	// Restore CSR

// Testing CSR 0xa56
	csrr x22, 0xa56	// Read CSR
	li x4, -1
	csrrw x20, 0xa56, x4	// Write all 1s to CSR
	csrrw x20, 0xa56, x0	// Write all 0s to CSR
	csrrw x20, 0xa56, x22	// Restore CSR

// Testing CSR 0xa57
	csrr x23, 0xa57	// Read CSR
	li x24, -1
	csrrw x28, 0xa57, x24	// Write all 1s to CSR
	csrrw x28, 0xa57, x0	// Write all 0s to CSR
	csrrw x28, 0xa57, x23	// Restore CSR

// Testing CSR 0xa58
	csrr x1, 0xa58	// Read CSR
	li x29, -1
	csrrw x21, 0xa58, x29	// Write all 1s to CSR
	csrrw x21, 0xa58, x0	// Write all 0s to CSR
	csrrw x21, 0xa58, x1	// Restore CSR

// Testing CSR 0xa59
	csrr x17, 0xa59	// Read CSR
	li x21, -1
	csrrw x4, 0xa59, x21	// Write all 1s to CSR
	csrrw x4, 0xa59, x0	// Write all 0s to CSR
	csrrw x4, 0xa59, x17	// Restore CSR

// Testing CSR 0xa5a
	csrr x27, 0xa5a	// Read CSR
	li x19, -1
	csrrw x25, 0xa5a, x19	// Write all 1s to CSR
	csrrw x25, 0xa5a, x0	// Write all 0s to CSR
	csrrw x25, 0xa5a, x27	// Restore CSR

// Testing CSR 0xa5b
	csrr x18, 0xa5b	// Read CSR
	li x2, -1
	csrrw x7, 0xa5b, x2	// Write all 1s to CSR
	csrrw x7, 0xa5b, x0	// Write all 0s to CSR
	csrrw x7, 0xa5b, x18	// Restore CSR

// Testing CSR 0xa5c
	csrr x19, 0xa5c	// Read CSR
	li x27, -1
	csrrw x14, 0xa5c, x27	// Write all 1s to CSR
	csrrw x14, 0xa5c, x0	// Write all 0s to CSR
	csrrw x14, 0xa5c, x19	// Restore CSR

// Testing CSR 0xa5d
	csrr x9, 0xa5d	// Read CSR
	li x4, -1
	csrrw x6, 0xa5d, x4	// Write all 1s to CSR
	csrrw x6, 0xa5d, x0	// Write all 0s to CSR
	csrrw x6, 0xa5d, x9	// Restore CSR

// Testing CSR 0xa5e
	csrr x4, 0xa5e	// Read CSR
	li x28, -1
	csrrw x5, 0xa5e, x28	// Write all 1s to CSR
	csrrw x5, 0xa5e, x0	// Write all 0s to CSR
	csrrw x5, 0xa5e, x4	// Restore CSR

// Testing CSR 0xa5f
	csrr x18, 0xa5f	// Read CSR
	li x8, -1
	csrrw x16, 0xa5f, x8	// Write all 1s to CSR
	csrrw x16, 0xa5f, x0	// Write all 0s to CSR
	csrrw x16, 0xa5f, x18	// Restore CSR

// Testing CSR 0xa60
	csrr x30, 0xa60	// Read CSR
	li x20, -1
	csrrw x9, 0xa60, x20	// Write all 1s to CSR
	csrrw x9, 0xa60, x0	// Write all 0s to CSR
	csrrw x9, 0xa60, x30	// Restore CSR

// Testing CSR 0xa61
	csrr x13, 0xa61	// Read CSR
	li x7, -1
	csrrw x2, 0xa61, x7	// Write all 1s to CSR
	csrrw x2, 0xa61, x0	// Write all 0s to CSR
	csrrw x2, 0xa61, x13	// Restore CSR

// Testing CSR 0xa62
	csrr x17, 0xa62	// Read CSR
	li x28, -1
	csrrw x16, 0xa62, x28	// Write all 1s to CSR
	csrrw x16, 0xa62, x0	// Write all 0s to CSR
	csrrw x16, 0xa62, x17	// Restore CSR

// Testing CSR 0xa63
	csrr x3, 0xa63	// Read CSR
	li x28, -1
	csrrw x8, 0xa63, x28	// Write all 1s to CSR
	csrrw x8, 0xa63, x0	// Write all 0s to CSR
	csrrw x8, 0xa63, x3	// Restore CSR

// Testing CSR 0xa64
	csrr x5, 0xa64	// Read CSR
	li x13, -1
	csrrw x23, 0xa64, x13	// Write all 1s to CSR
	csrrw x23, 0xa64, x0	// Write all 0s to CSR
	csrrw x23, 0xa64, x5	// Restore CSR

// Testing CSR 0xa65
	csrr x30, 0xa65	// Read CSR
	li x22, -1
	csrrw x15, 0xa65, x22	// Write all 1s to CSR
	csrrw x15, 0xa65, x0	// Write all 0s to CSR
	csrrw x15, 0xa65, x30	// Restore CSR

// Testing CSR 0xa66
	csrr x3, 0xa66	// Read CSR
	li x8, -1
	csrrw x28, 0xa66, x8	// Write all 1s to CSR
	csrrw x28, 0xa66, x0	// Write all 0s to CSR
	csrrw x28, 0xa66, x3	// Restore CSR

// Testing CSR 0xa67
	csrr x25, 0xa67	// Read CSR
	li x4, -1
	csrrw x5, 0xa67, x4	// Write all 1s to CSR
	csrrw x5, 0xa67, x0	// Write all 0s to CSR
	csrrw x5, 0xa67, x25	// Restore CSR

// Testing CSR 0xa68
	csrr x14, 0xa68	// Read CSR
	li x28, -1
	csrrw x22, 0xa68, x28	// Write all 1s to CSR
	csrrw x22, 0xa68, x0	// Write all 0s to CSR
	csrrw x22, 0xa68, x14	// Restore CSR

// Testing CSR 0xa69
	csrr x16, 0xa69	// Read CSR
	li x14, -1
	csrrw x9, 0xa69, x14	// Write all 1s to CSR
	csrrw x9, 0xa69, x0	// Write all 0s to CSR
	csrrw x9, 0xa69, x16	// Restore CSR

// Testing CSR 0xa6a
	csrr x20, 0xa6a	// Read CSR
	li x26, -1
	csrrw x7, 0xa6a, x26	// Write all 1s to CSR
	csrrw x7, 0xa6a, x0	// Write all 0s to CSR
	csrrw x7, 0xa6a, x20	// Restore CSR

// Testing CSR 0xa6b
	csrr x18, 0xa6b	// Read CSR
	li x2, -1
	csrrw x23, 0xa6b, x2	// Write all 1s to CSR
	csrrw x23, 0xa6b, x0	// Write all 0s to CSR
	csrrw x23, 0xa6b, x18	// Restore CSR

// Testing CSR 0xa6c
	csrr x22, 0xa6c	// Read CSR
	li x13, -1
	csrrw x5, 0xa6c, x13	// Write all 1s to CSR
	csrrw x5, 0xa6c, x0	// Write all 0s to CSR
	csrrw x5, 0xa6c, x22	// Restore CSR

// Testing CSR 0xa6d
	csrr x23, 0xa6d	// Read CSR
	li x16, -1
	csrrw x24, 0xa6d, x16	// Write all 1s to CSR
	csrrw x24, 0xa6d, x0	// Write all 0s to CSR
	csrrw x24, 0xa6d, x23	// Restore CSR

// Testing CSR 0xa6e
	csrr x19, 0xa6e	// Read CSR
	li x26, -1
	csrrw x5, 0xa6e, x26	// Write all 1s to CSR
	csrrw x5, 0xa6e, x0	// Write all 0s to CSR
	csrrw x5, 0xa6e, x19	// Restore CSR

// Testing CSR 0xa6f
	csrr x2, 0xa6f	// Read CSR
	li x29, -1
	csrrw x10, 0xa6f, x29	// Write all 1s to CSR
	csrrw x10, 0xa6f, x0	// Write all 0s to CSR
	csrrw x10, 0xa6f, x2	// Restore CSR

// Testing CSR 0xa70
	csrr x13, 0xa70	// Read CSR
	li x19, -1
	csrrw x16, 0xa70, x19	// Write all 1s to CSR
	csrrw x16, 0xa70, x0	// Write all 0s to CSR
	csrrw x16, 0xa70, x13	// Restore CSR

// Testing CSR 0xa71
	csrr x22, 0xa71	// Read CSR
	li x15, -1
	csrrw x20, 0xa71, x15	// Write all 1s to CSR
	csrrw x20, 0xa71, x0	// Write all 0s to CSR
	csrrw x20, 0xa71, x22	// Restore CSR

// Testing CSR 0xa72
	csrr x24, 0xa72	// Read CSR
	li x26, -1
	csrrw x14, 0xa72, x26	// Write all 1s to CSR
	csrrw x14, 0xa72, x0	// Write all 0s to CSR
	csrrw x14, 0xa72, x24	// Restore CSR

// Testing CSR 0xa73
	csrr x11, 0xa73	// Read CSR
	li x25, -1
	csrrw x21, 0xa73, x25	// Write all 1s to CSR
	csrrw x21, 0xa73, x0	// Write all 0s to CSR
	csrrw x21, 0xa73, x11	// Restore CSR

// Testing CSR 0xa74
	csrr x28, 0xa74	// Read CSR
	li x18, -1
	csrrw x8, 0xa74, x18	// Write all 1s to CSR
	csrrw x8, 0xa74, x0	// Write all 0s to CSR
	csrrw x8, 0xa74, x28	// Restore CSR

// Testing CSR 0xa75
	csrr x27, 0xa75	// Read CSR
	li x3, -1
	csrrw x10, 0xa75, x3	// Write all 1s to CSR
	csrrw x10, 0xa75, x0	// Write all 0s to CSR
	csrrw x10, 0xa75, x27	// Restore CSR

// Testing CSR 0xa76
	csrr x28, 0xa76	// Read CSR
	li x18, -1
	csrrw x17, 0xa76, x18	// Write all 1s to CSR
	csrrw x17, 0xa76, x0	// Write all 0s to CSR
	csrrw x17, 0xa76, x28	// Restore CSR

// Testing CSR 0xa77
	csrr x8, 0xa77	// Read CSR
	li x11, -1
	csrrw x30, 0xa77, x11	// Write all 1s to CSR
	csrrw x30, 0xa77, x0	// Write all 0s to CSR
	csrrw x30, 0xa77, x8	// Restore CSR

// Testing CSR 0xa78
	csrr x27, 0xa78	// Read CSR
	li x31, -1
	csrrw x24, 0xa78, x31	// Write all 1s to CSR
	csrrw x24, 0xa78, x0	// Write all 0s to CSR
	csrrw x24, 0xa78, x27	// Restore CSR

// Testing CSR 0xa79
	csrr x10, 0xa79	// Read CSR
	li x8, -1
	csrrw x28, 0xa79, x8	// Write all 1s to CSR
	csrrw x28, 0xa79, x0	// Write all 0s to CSR
	csrrw x28, 0xa79, x10	// Restore CSR

// Testing CSR 0xa7a
	csrr x17, 0xa7a	// Read CSR
	li x14, -1
	csrrw x9, 0xa7a, x14	// Write all 1s to CSR
	csrrw x9, 0xa7a, x0	// Write all 0s to CSR
	csrrw x9, 0xa7a, x17	// Restore CSR

// Testing CSR 0xa7b
	csrr x10, 0xa7b	// Read CSR
	li x26, -1
	csrrw x13, 0xa7b, x26	// Write all 1s to CSR
	csrrw x13, 0xa7b, x0	// Write all 0s to CSR
	csrrw x13, 0xa7b, x10	// Restore CSR

// Testing CSR 0xa7c
	csrr x11, 0xa7c	// Read CSR
	li x24, -1
	csrrw x27, 0xa7c, x24	// Write all 1s to CSR
	csrrw x27, 0xa7c, x0	// Write all 0s to CSR
	csrrw x27, 0xa7c, x11	// Restore CSR

// Testing CSR 0xa7d
	csrr x27, 0xa7d	// Read CSR
	li x7, -1
	csrrw x4, 0xa7d, x7	// Write all 1s to CSR
	csrrw x4, 0xa7d, x0	// Write all 0s to CSR
	csrrw x4, 0xa7d, x27	// Restore CSR

// Testing CSR 0xa7e
	csrr x10, 0xa7e	// Read CSR
	li x4, -1
	csrrw x7, 0xa7e, x4	// Write all 1s to CSR
	csrrw x7, 0xa7e, x0	// Write all 0s to CSR
	csrrw x7, 0xa7e, x10	// Restore CSR

// Testing CSR 0xa7f
	csrr x8, 0xa7f	// Read CSR
	li x14, -1
	csrrw x31, 0xa7f, x14	// Write all 1s to CSR
	csrrw x31, 0xa7f, x0	// Write all 0s to CSR
	csrrw x31, 0xa7f, x8	// Restore CSR

// Testing CSR 0xa80
	csrr x18, 0xa80	// Read CSR
	li x6, -1
	csrrw x11, 0xa80, x6	// Write all 1s to CSR
	csrrw x11, 0xa80, x0	// Write all 0s to CSR
	csrrw x11, 0xa80, x18	// Restore CSR

// Testing CSR 0xa81
	csrr x7, 0xa81	// Read CSR
	li x14, -1
	csrrw x26, 0xa81, x14	// Write all 1s to CSR
	csrrw x26, 0xa81, x0	// Write all 0s to CSR
	csrrw x26, 0xa81, x7	// Restore CSR

// Testing CSR 0xa82
	csrr x15, 0xa82	// Read CSR
	li x28, -1
	csrrw x8, 0xa82, x28	// Write all 1s to CSR
	csrrw x8, 0xa82, x0	// Write all 0s to CSR
	csrrw x8, 0xa82, x15	// Restore CSR

// Testing CSR 0xa83
	csrr x9, 0xa83	// Read CSR
	li x17, -1
	csrrw x31, 0xa83, x17	// Write all 1s to CSR
	csrrw x31, 0xa83, x0	// Write all 0s to CSR
	csrrw x31, 0xa83, x9	// Restore CSR

// Testing CSR 0xa84
	csrr x12, 0xa84	// Read CSR
	li x13, -1
	csrrw x28, 0xa84, x13	// Write all 1s to CSR
	csrrw x28, 0xa84, x0	// Write all 0s to CSR
	csrrw x28, 0xa84, x12	// Restore CSR

// Testing CSR 0xa85
	csrr x3, 0xa85	// Read CSR
	li x19, -1
	csrrw x31, 0xa85, x19	// Write all 1s to CSR
	csrrw x31, 0xa85, x0	// Write all 0s to CSR
	csrrw x31, 0xa85, x3	// Restore CSR

// Testing CSR 0xa86
	csrr x16, 0xa86	// Read CSR
	li x15, -1
	csrrw x22, 0xa86, x15	// Write all 1s to CSR
	csrrw x22, 0xa86, x0	// Write all 0s to CSR
	csrrw x22, 0xa86, x16	// Restore CSR

// Testing CSR 0xa87
	csrr x4, 0xa87	// Read CSR
	li x6, -1
	csrrw x21, 0xa87, x6	// Write all 1s to CSR
	csrrw x21, 0xa87, x0	// Write all 0s to CSR
	csrrw x21, 0xa87, x4	// Restore CSR

// Testing CSR 0xa88
	csrr x4, 0xa88	// Read CSR
	li x26, -1
	csrrw x17, 0xa88, x26	// Write all 1s to CSR
	csrrw x17, 0xa88, x0	// Write all 0s to CSR
	csrrw x17, 0xa88, x4	// Restore CSR

// Testing CSR 0xa89
	csrr x26, 0xa89	// Read CSR
	li x9, -1
	csrrw x1, 0xa89, x9	// Write all 1s to CSR
	csrrw x1, 0xa89, x0	// Write all 0s to CSR
	csrrw x1, 0xa89, x26	// Restore CSR

// Testing CSR 0xa8a
	csrr x13, 0xa8a	// Read CSR
	li x1, -1
	csrrw x7, 0xa8a, x1	// Write all 1s to CSR
	csrrw x7, 0xa8a, x0	// Write all 0s to CSR
	csrrw x7, 0xa8a, x13	// Restore CSR

// Testing CSR 0xa8b
	csrr x20, 0xa8b	// Read CSR
	li x6, -1
	csrrw x26, 0xa8b, x6	// Write all 1s to CSR
	csrrw x26, 0xa8b, x0	// Write all 0s to CSR
	csrrw x26, 0xa8b, x20	// Restore CSR

// Testing CSR 0xa8c
	csrr x2, 0xa8c	// Read CSR
	li x14, -1
	csrrw x11, 0xa8c, x14	// Write all 1s to CSR
	csrrw x11, 0xa8c, x0	// Write all 0s to CSR
	csrrw x11, 0xa8c, x2	// Restore CSR

// Testing CSR 0xa8d
	csrr x29, 0xa8d	// Read CSR
	li x14, -1
	csrrw x26, 0xa8d, x14	// Write all 1s to CSR
	csrrw x26, 0xa8d, x0	// Write all 0s to CSR
	csrrw x26, 0xa8d, x29	// Restore CSR

// Testing CSR 0xa8e
	csrr x24, 0xa8e	// Read CSR
	li x13, -1
	csrrw x2, 0xa8e, x13	// Write all 1s to CSR
	csrrw x2, 0xa8e, x0	// Write all 0s to CSR
	csrrw x2, 0xa8e, x24	// Restore CSR

// Testing CSR 0xa8f
	csrr x9, 0xa8f	// Read CSR
	li x30, -1
	csrrw x16, 0xa8f, x30	// Write all 1s to CSR
	csrrw x16, 0xa8f, x0	// Write all 0s to CSR
	csrrw x16, 0xa8f, x9	// Restore CSR

// Testing CSR 0xa90
	csrr x22, 0xa90	// Read CSR
	li x31, -1
	csrrw x19, 0xa90, x31	// Write all 1s to CSR
	csrrw x19, 0xa90, x0	// Write all 0s to CSR
	csrrw x19, 0xa90, x22	// Restore CSR

// Testing CSR 0xa91
	csrr x19, 0xa91	// Read CSR
	li x1, -1
	csrrw x30, 0xa91, x1	// Write all 1s to CSR
	csrrw x30, 0xa91, x0	// Write all 0s to CSR
	csrrw x30, 0xa91, x19	// Restore CSR

// Testing CSR 0xa92
	csrr x3, 0xa92	// Read CSR
	li x2, -1
	csrrw x5, 0xa92, x2	// Write all 1s to CSR
	csrrw x5, 0xa92, x0	// Write all 0s to CSR
	csrrw x5, 0xa92, x3	// Restore CSR

// Testing CSR 0xa93
	csrr x31, 0xa93	// Read CSR
	li x20, -1
	csrrw x18, 0xa93, x20	// Write all 1s to CSR
	csrrw x18, 0xa93, x0	// Write all 0s to CSR
	csrrw x18, 0xa93, x31	// Restore CSR

// Testing CSR 0xa94
	csrr x8, 0xa94	// Read CSR
	li x6, -1
	csrrw x29, 0xa94, x6	// Write all 1s to CSR
	csrrw x29, 0xa94, x0	// Write all 0s to CSR
	csrrw x29, 0xa94, x8	// Restore CSR

// Testing CSR 0xa95
	csrr x28, 0xa95	// Read CSR
	li x24, -1
	csrrw x11, 0xa95, x24	// Write all 1s to CSR
	csrrw x11, 0xa95, x0	// Write all 0s to CSR
	csrrw x11, 0xa95, x28	// Restore CSR

// Testing CSR 0xa96
	csrr x14, 0xa96	// Read CSR
	li x5, -1
	csrrw x17, 0xa96, x5	// Write all 1s to CSR
	csrrw x17, 0xa96, x0	// Write all 0s to CSR
	csrrw x17, 0xa96, x14	// Restore CSR

// Testing CSR 0xa97
	csrr x10, 0xa97	// Read CSR
	li x30, -1
	csrrw x25, 0xa97, x30	// Write all 1s to CSR
	csrrw x25, 0xa97, x0	// Write all 0s to CSR
	csrrw x25, 0xa97, x10	// Restore CSR

// Testing CSR 0xa98
	csrr x30, 0xa98	// Read CSR
	li x16, -1
	csrrw x8, 0xa98, x16	// Write all 1s to CSR
	csrrw x8, 0xa98, x0	// Write all 0s to CSR
	csrrw x8, 0xa98, x30	// Restore CSR

// Testing CSR 0xa99
	csrr x21, 0xa99	// Read CSR
	li x3, -1
	csrrw x9, 0xa99, x3	// Write all 1s to CSR
	csrrw x9, 0xa99, x0	// Write all 0s to CSR
	csrrw x9, 0xa99, x21	// Restore CSR

// Testing CSR 0xa9a
	csrr x5, 0xa9a	// Read CSR
	li x20, -1
	csrrw x7, 0xa9a, x20	// Write all 1s to CSR
	csrrw x7, 0xa9a, x0	// Write all 0s to CSR
	csrrw x7, 0xa9a, x5	// Restore CSR

// Testing CSR 0xa9b
	csrr x8, 0xa9b	// Read CSR
	li x5, -1
	csrrw x1, 0xa9b, x5	// Write all 1s to CSR
	csrrw x1, 0xa9b, x0	// Write all 0s to CSR
	csrrw x1, 0xa9b, x8	// Restore CSR

// Testing CSR 0xa9c
	csrr x29, 0xa9c	// Read CSR
	li x23, -1
	csrrw x1, 0xa9c, x23	// Write all 1s to CSR
	csrrw x1, 0xa9c, x0	// Write all 0s to CSR
	csrrw x1, 0xa9c, x29	// Restore CSR

// Testing CSR 0xa9d
	csrr x15, 0xa9d	// Read CSR
	li x9, -1
	csrrw x10, 0xa9d, x9	// Write all 1s to CSR
	csrrw x10, 0xa9d, x0	// Write all 0s to CSR
	csrrw x10, 0xa9d, x15	// Restore CSR

// Testing CSR 0xa9e
	csrr x24, 0xa9e	// Read CSR
	li x17, -1
	csrrw x1, 0xa9e, x17	// Write all 1s to CSR
	csrrw x1, 0xa9e, x0	// Write all 0s to CSR
	csrrw x1, 0xa9e, x24	// Restore CSR

// Testing CSR 0xa9f
	csrr x13, 0xa9f	// Read CSR
	li x15, -1
	csrrw x26, 0xa9f, x15	// Write all 1s to CSR
	csrrw x26, 0xa9f, x0	// Write all 0s to CSR
	csrrw x26, 0xa9f, x13	// Restore CSR

// Testing CSR 0xaa0
	csrr x20, 0xaa0	// Read CSR
	li x25, -1
	csrrw x21, 0xaa0, x25	// Write all 1s to CSR
	csrrw x21, 0xaa0, x0	// Write all 0s to CSR
	csrrw x21, 0xaa0, x20	// Restore CSR

// Testing CSR 0xaa1
	csrr x6, 0xaa1	// Read CSR
	li x2, -1
	csrrw x21, 0xaa1, x2	// Write all 1s to CSR
	csrrw x21, 0xaa1, x0	// Write all 0s to CSR
	csrrw x21, 0xaa1, x6	// Restore CSR

// Testing CSR 0xaa2
	csrr x28, 0xaa2	// Read CSR
	li x1, -1
	csrrw x17, 0xaa2, x1	// Write all 1s to CSR
	csrrw x17, 0xaa2, x0	// Write all 0s to CSR
	csrrw x17, 0xaa2, x28	// Restore CSR

// Testing CSR 0xaa3
	csrr x13, 0xaa3	// Read CSR
	li x12, -1
	csrrw x3, 0xaa3, x12	// Write all 1s to CSR
	csrrw x3, 0xaa3, x0	// Write all 0s to CSR
	csrrw x3, 0xaa3, x13	// Restore CSR

// Testing CSR 0xaa4
	csrr x28, 0xaa4	// Read CSR
	li x11, -1
	csrrw x1, 0xaa4, x11	// Write all 1s to CSR
	csrrw x1, 0xaa4, x0	// Write all 0s to CSR
	csrrw x1, 0xaa4, x28	// Restore CSR

// Testing CSR 0xaa5
	csrr x31, 0xaa5	// Read CSR
	li x22, -1
	csrrw x29, 0xaa5, x22	// Write all 1s to CSR
	csrrw x29, 0xaa5, x0	// Write all 0s to CSR
	csrrw x29, 0xaa5, x31	// Restore CSR

// Testing CSR 0xaa6
	csrr x15, 0xaa6	// Read CSR
	li x24, -1
	csrrw x17, 0xaa6, x24	// Write all 1s to CSR
	csrrw x17, 0xaa6, x0	// Write all 0s to CSR
	csrrw x17, 0xaa6, x15	// Restore CSR

// Testing CSR 0xaa7
	csrr x8, 0xaa7	// Read CSR
	li x9, -1
	csrrw x13, 0xaa7, x9	// Write all 1s to CSR
	csrrw x13, 0xaa7, x0	// Write all 0s to CSR
	csrrw x13, 0xaa7, x8	// Restore CSR

// Testing CSR 0xaa8
	csrr x2, 0xaa8	// Read CSR
	li x14, -1
	csrrw x28, 0xaa8, x14	// Write all 1s to CSR
	csrrw x28, 0xaa8, x0	// Write all 0s to CSR
	csrrw x28, 0xaa8, x2	// Restore CSR

// Testing CSR 0xaa9
	csrr x15, 0xaa9	// Read CSR
	li x31, -1
	csrrw x16, 0xaa9, x31	// Write all 1s to CSR
	csrrw x16, 0xaa9, x0	// Write all 0s to CSR
	csrrw x16, 0xaa9, x15	// Restore CSR

// Testing CSR 0xaaa
	csrr x6, 0xaaa	// Read CSR
	li x27, -1
	csrrw x7, 0xaaa, x27	// Write all 1s to CSR
	csrrw x7, 0xaaa, x0	// Write all 0s to CSR
	csrrw x7, 0xaaa, x6	// Restore CSR

// Testing CSR 0xaab
	csrr x21, 0xaab	// Read CSR
	li x4, -1
	csrrw x28, 0xaab, x4	// Write all 1s to CSR
	csrrw x28, 0xaab, x0	// Write all 0s to CSR
	csrrw x28, 0xaab, x21	// Restore CSR

// Testing CSR 0xaac
	csrr x18, 0xaac	// Read CSR
	li x17, -1
	csrrw x4, 0xaac, x17	// Write all 1s to CSR
	csrrw x4, 0xaac, x0	// Write all 0s to CSR
	csrrw x4, 0xaac, x18	// Restore CSR

// Testing CSR 0xaad
	csrr x17, 0xaad	// Read CSR
	li x7, -1
	csrrw x21, 0xaad, x7	// Write all 1s to CSR
	csrrw x21, 0xaad, x0	// Write all 0s to CSR
	csrrw x21, 0xaad, x17	// Restore CSR

// Testing CSR 0xaae
	csrr x25, 0xaae	// Read CSR
	li x23, -1
	csrrw x28, 0xaae, x23	// Write all 1s to CSR
	csrrw x28, 0xaae, x0	// Write all 0s to CSR
	csrrw x28, 0xaae, x25	// Restore CSR

// Testing CSR 0xaaf
	csrr x24, 0xaaf	// Read CSR
	li x28, -1
	csrrw x18, 0xaaf, x28	// Write all 1s to CSR
	csrrw x18, 0xaaf, x0	// Write all 0s to CSR
	csrrw x18, 0xaaf, x24	// Restore CSR

// Testing CSR 0xab0
	csrr x30, 0xab0	// Read CSR
	li x13, -1
	csrrw x11, 0xab0, x13	// Write all 1s to CSR
	csrrw x11, 0xab0, x0	// Write all 0s to CSR
	csrrw x11, 0xab0, x30	// Restore CSR

// Testing CSR 0xab1
	csrr x9, 0xab1	// Read CSR
	li x8, -1
	csrrw x24, 0xab1, x8	// Write all 1s to CSR
	csrrw x24, 0xab1, x0	// Write all 0s to CSR
	csrrw x24, 0xab1, x9	// Restore CSR

// Testing CSR 0xab2
	csrr x20, 0xab2	// Read CSR
	li x2, -1
	csrrw x11, 0xab2, x2	// Write all 1s to CSR
	csrrw x11, 0xab2, x0	// Write all 0s to CSR
	csrrw x11, 0xab2, x20	// Restore CSR

// Testing CSR 0xab3
	csrr x31, 0xab3	// Read CSR
	li x22, -1
	csrrw x9, 0xab3, x22	// Write all 1s to CSR
	csrrw x9, 0xab3, x0	// Write all 0s to CSR
	csrrw x9, 0xab3, x31	// Restore CSR

// Testing CSR 0xab4
	csrr x29, 0xab4	// Read CSR
	li x3, -1
	csrrw x23, 0xab4, x3	// Write all 1s to CSR
	csrrw x23, 0xab4, x0	// Write all 0s to CSR
	csrrw x23, 0xab4, x29	// Restore CSR

// Testing CSR 0xab5
	csrr x31, 0xab5	// Read CSR
	li x26, -1
	csrrw x20, 0xab5, x26	// Write all 1s to CSR
	csrrw x20, 0xab5, x0	// Write all 0s to CSR
	csrrw x20, 0xab5, x31	// Restore CSR

// Testing CSR 0xab6
	csrr x19, 0xab6	// Read CSR
	li x27, -1
	csrrw x26, 0xab6, x27	// Write all 1s to CSR
	csrrw x26, 0xab6, x0	// Write all 0s to CSR
	csrrw x26, 0xab6, x19	// Restore CSR

// Testing CSR 0xab7
	csrr x6, 0xab7	// Read CSR
	li x4, -1
	csrrw x15, 0xab7, x4	// Write all 1s to CSR
	csrrw x15, 0xab7, x0	// Write all 0s to CSR
	csrrw x15, 0xab7, x6	// Restore CSR

// Testing CSR 0xab8
	csrr x25, 0xab8	// Read CSR
	li x1, -1
	csrrw x16, 0xab8, x1	// Write all 1s to CSR
	csrrw x16, 0xab8, x0	// Write all 0s to CSR
	csrrw x16, 0xab8, x25	// Restore CSR

// Testing CSR 0xab9
	csrr x12, 0xab9	// Read CSR
	li x9, -1
	csrrw x14, 0xab9, x9	// Write all 1s to CSR
	csrrw x14, 0xab9, x0	// Write all 0s to CSR
	csrrw x14, 0xab9, x12	// Restore CSR

// Testing CSR 0xaba
	csrr x29, 0xaba	// Read CSR
	li x6, -1
	csrrw x2, 0xaba, x6	// Write all 1s to CSR
	csrrw x2, 0xaba, x0	// Write all 0s to CSR
	csrrw x2, 0xaba, x29	// Restore CSR

// Testing CSR 0xabb
	csrr x23, 0xabb	// Read CSR
	li x17, -1
	csrrw x6, 0xabb, x17	// Write all 1s to CSR
	csrrw x6, 0xabb, x0	// Write all 0s to CSR
	csrrw x6, 0xabb, x23	// Restore CSR

// Testing CSR 0xabc
	csrr x28, 0xabc	// Read CSR
	li x6, -1
	csrrw x14, 0xabc, x6	// Write all 1s to CSR
	csrrw x14, 0xabc, x0	// Write all 0s to CSR
	csrrw x14, 0xabc, x28	// Restore CSR

// Testing CSR 0xabd
	csrr x24, 0xabd	// Read CSR
	li x23, -1
	csrrw x30, 0xabd, x23	// Write all 1s to CSR
	csrrw x30, 0xabd, x0	// Write all 0s to CSR
	csrrw x30, 0xabd, x24	// Restore CSR

// Testing CSR 0xabe
	csrr x23, 0xabe	// Read CSR
	li x30, -1
	csrrw x25, 0xabe, x30	// Write all 1s to CSR
	csrrw x25, 0xabe, x0	// Write all 0s to CSR
	csrrw x25, 0xabe, x23	// Restore CSR

// Testing CSR 0xabf
	csrr x28, 0xabf	// Read CSR
	li x24, -1
	csrrw x7, 0xabf, x24	// Write all 1s to CSR
	csrrw x7, 0xabf, x0	// Write all 0s to CSR
	csrrw x7, 0xabf, x28	// Restore CSR

// Testing CSR 0xac0
	csrr x10, 0xac0	// Read CSR
	li x20, -1
	csrrw x31, 0xac0, x20	// Write all 1s to CSR
	csrrw x31, 0xac0, x0	// Write all 0s to CSR
	csrrw x31, 0xac0, x10	// Restore CSR

// Testing CSR 0xac1
	csrr x18, 0xac1	// Read CSR
	li x19, -1
	csrrw x2, 0xac1, x19	// Write all 1s to CSR
	csrrw x2, 0xac1, x0	// Write all 0s to CSR
	csrrw x2, 0xac1, x18	// Restore CSR

// Testing CSR 0xac2
	csrr x2, 0xac2	// Read CSR
	li x8, -1
	csrrw x1, 0xac2, x8	// Write all 1s to CSR
	csrrw x1, 0xac2, x0	// Write all 0s to CSR
	csrrw x1, 0xac2, x2	// Restore CSR

// Testing CSR 0xac3
	csrr x19, 0xac3	// Read CSR
	li x25, -1
	csrrw x28, 0xac3, x25	// Write all 1s to CSR
	csrrw x28, 0xac3, x0	// Write all 0s to CSR
	csrrw x28, 0xac3, x19	// Restore CSR

// Testing CSR 0xac4
	csrr x22, 0xac4	// Read CSR
	li x25, -1
	csrrw x12, 0xac4, x25	// Write all 1s to CSR
	csrrw x12, 0xac4, x0	// Write all 0s to CSR
	csrrw x12, 0xac4, x22	// Restore CSR

// Testing CSR 0xac5
	csrr x26, 0xac5	// Read CSR
	li x9, -1
	csrrw x15, 0xac5, x9	// Write all 1s to CSR
	csrrw x15, 0xac5, x0	// Write all 0s to CSR
	csrrw x15, 0xac5, x26	// Restore CSR

// Testing CSR 0xac6
	csrr x26, 0xac6	// Read CSR
	li x31, -1
	csrrw x24, 0xac6, x31	// Write all 1s to CSR
	csrrw x24, 0xac6, x0	// Write all 0s to CSR
	csrrw x24, 0xac6, x26	// Restore CSR

// Testing CSR 0xac7
	csrr x20, 0xac7	// Read CSR
	li x10, -1
	csrrw x9, 0xac7, x10	// Write all 1s to CSR
	csrrw x9, 0xac7, x0	// Write all 0s to CSR
	csrrw x9, 0xac7, x20	// Restore CSR

// Testing CSR 0xac8
	csrr x17, 0xac8	// Read CSR
	li x11, -1
	csrrw x12, 0xac8, x11	// Write all 1s to CSR
	csrrw x12, 0xac8, x0	// Write all 0s to CSR
	csrrw x12, 0xac8, x17	// Restore CSR

// Testing CSR 0xac9
	csrr x5, 0xac9	// Read CSR
	li x3, -1
	csrrw x21, 0xac9, x3	// Write all 1s to CSR
	csrrw x21, 0xac9, x0	// Write all 0s to CSR
	csrrw x21, 0xac9, x5	// Restore CSR

// Testing CSR 0xaca
	csrr x15, 0xaca	// Read CSR
	li x18, -1
	csrrw x4, 0xaca, x18	// Write all 1s to CSR
	csrrw x4, 0xaca, x0	// Write all 0s to CSR
	csrrw x4, 0xaca, x15	// Restore CSR

// Testing CSR 0xacb
	csrr x27, 0xacb	// Read CSR
	li x24, -1
	csrrw x4, 0xacb, x24	// Write all 1s to CSR
	csrrw x4, 0xacb, x0	// Write all 0s to CSR
	csrrw x4, 0xacb, x27	// Restore CSR

// Testing CSR 0xacc
	csrr x5, 0xacc	// Read CSR
	li x6, -1
	csrrw x11, 0xacc, x6	// Write all 1s to CSR
	csrrw x11, 0xacc, x0	// Write all 0s to CSR
	csrrw x11, 0xacc, x5	// Restore CSR

// Testing CSR 0xacd
	csrr x14, 0xacd	// Read CSR
	li x7, -1
	csrrw x18, 0xacd, x7	// Write all 1s to CSR
	csrrw x18, 0xacd, x0	// Write all 0s to CSR
	csrrw x18, 0xacd, x14	// Restore CSR

// Testing CSR 0xace
	csrr x9, 0xace	// Read CSR
	li x24, -1
	csrrw x12, 0xace, x24	// Write all 1s to CSR
	csrrw x12, 0xace, x0	// Write all 0s to CSR
	csrrw x12, 0xace, x9	// Restore CSR

// Testing CSR 0xacf
	csrr x21, 0xacf	// Read CSR
	li x12, -1
	csrrw x9, 0xacf, x12	// Write all 1s to CSR
	csrrw x9, 0xacf, x0	// Write all 0s to CSR
	csrrw x9, 0xacf, x21	// Restore CSR

// Testing CSR 0xad0
	csrr x17, 0xad0	// Read CSR
	li x28, -1
	csrrw x24, 0xad0, x28	// Write all 1s to CSR
	csrrw x24, 0xad0, x0	// Write all 0s to CSR
	csrrw x24, 0xad0, x17	// Restore CSR

// Testing CSR 0xad1
	csrr x1, 0xad1	// Read CSR
	li x17, -1
	csrrw x26, 0xad1, x17	// Write all 1s to CSR
	csrrw x26, 0xad1, x0	// Write all 0s to CSR
	csrrw x26, 0xad1, x1	// Restore CSR

// Testing CSR 0xad2
	csrr x29, 0xad2	// Read CSR
	li x30, -1
	csrrw x3, 0xad2, x30	// Write all 1s to CSR
	csrrw x3, 0xad2, x0	// Write all 0s to CSR
	csrrw x3, 0xad2, x29	// Restore CSR

// Testing CSR 0xad3
	csrr x31, 0xad3	// Read CSR
	li x22, -1
	csrrw x14, 0xad3, x22	// Write all 1s to CSR
	csrrw x14, 0xad3, x0	// Write all 0s to CSR
	csrrw x14, 0xad3, x31	// Restore CSR

// Testing CSR 0xad4
	csrr x22, 0xad4	// Read CSR
	li x30, -1
	csrrw x4, 0xad4, x30	// Write all 1s to CSR
	csrrw x4, 0xad4, x0	// Write all 0s to CSR
	csrrw x4, 0xad4, x22	// Restore CSR

// Testing CSR 0xad5
	csrr x19, 0xad5	// Read CSR
	li x27, -1
	csrrw x23, 0xad5, x27	// Write all 1s to CSR
	csrrw x23, 0xad5, x0	// Write all 0s to CSR
	csrrw x23, 0xad5, x19	// Restore CSR

// Testing CSR 0xad6
	csrr x14, 0xad6	// Read CSR
	li x15, -1
	csrrw x26, 0xad6, x15	// Write all 1s to CSR
	csrrw x26, 0xad6, x0	// Write all 0s to CSR
	csrrw x26, 0xad6, x14	// Restore CSR

// Testing CSR 0xad7
	csrr x3, 0xad7	// Read CSR
	li x24, -1
	csrrw x4, 0xad7, x24	// Write all 1s to CSR
	csrrw x4, 0xad7, x0	// Write all 0s to CSR
	csrrw x4, 0xad7, x3	// Restore CSR

// Testing CSR 0xad8
	csrr x24, 0xad8	// Read CSR
	li x15, -1
	csrrw x27, 0xad8, x15	// Write all 1s to CSR
	csrrw x27, 0xad8, x0	// Write all 0s to CSR
	csrrw x27, 0xad8, x24	// Restore CSR

// Testing CSR 0xad9
	csrr x21, 0xad9	// Read CSR
	li x5, -1
	csrrw x13, 0xad9, x5	// Write all 1s to CSR
	csrrw x13, 0xad9, x0	// Write all 0s to CSR
	csrrw x13, 0xad9, x21	// Restore CSR

// Testing CSR 0xada
	csrr x24, 0xada	// Read CSR
	li x6, -1
	csrrw x14, 0xada, x6	// Write all 1s to CSR
	csrrw x14, 0xada, x0	// Write all 0s to CSR
	csrrw x14, 0xada, x24	// Restore CSR

// Testing CSR 0xadb
	csrr x28, 0xadb	// Read CSR
	li x18, -1
	csrrw x31, 0xadb, x18	// Write all 1s to CSR
	csrrw x31, 0xadb, x0	// Write all 0s to CSR
	csrrw x31, 0xadb, x28	// Restore CSR

// Testing CSR 0xadc
	csrr x2, 0xadc	// Read CSR
	li x12, -1
	csrrw x14, 0xadc, x12	// Write all 1s to CSR
	csrrw x14, 0xadc, x0	// Write all 0s to CSR
	csrrw x14, 0xadc, x2	// Restore CSR

// Testing CSR 0xadd
	csrr x9, 0xadd	// Read CSR
	li x10, -1
	csrrw x5, 0xadd, x10	// Write all 1s to CSR
	csrrw x5, 0xadd, x0	// Write all 0s to CSR
	csrrw x5, 0xadd, x9	// Restore CSR

// Testing CSR 0xade
	csrr x3, 0xade	// Read CSR
	li x21, -1
	csrrw x19, 0xade, x21	// Write all 1s to CSR
	csrrw x19, 0xade, x0	// Write all 0s to CSR
	csrrw x19, 0xade, x3	// Restore CSR

// Testing CSR 0xadf
	csrr x15, 0xadf	// Read CSR
	li x18, -1
	csrrw x30, 0xadf, x18	// Write all 1s to CSR
	csrrw x30, 0xadf, x0	// Write all 0s to CSR
	csrrw x30, 0xadf, x15	// Restore CSR

// Testing CSR 0xae0
	csrr x11, 0xae0	// Read CSR
	li x30, -1
	csrrw x26, 0xae0, x30	// Write all 1s to CSR
	csrrw x26, 0xae0, x0	// Write all 0s to CSR
	csrrw x26, 0xae0, x11	// Restore CSR

// Testing CSR 0xae1
	csrr x20, 0xae1	// Read CSR
	li x7, -1
	csrrw x18, 0xae1, x7	// Write all 1s to CSR
	csrrw x18, 0xae1, x0	// Write all 0s to CSR
	csrrw x18, 0xae1, x20	// Restore CSR

// Testing CSR 0xae2
	csrr x22, 0xae2	// Read CSR
	li x26, -1
	csrrw x30, 0xae2, x26	// Write all 1s to CSR
	csrrw x30, 0xae2, x0	// Write all 0s to CSR
	csrrw x30, 0xae2, x22	// Restore CSR

// Testing CSR 0xae3
	csrr x2, 0xae3	// Read CSR
	li x27, -1
	csrrw x8, 0xae3, x27	// Write all 1s to CSR
	csrrw x8, 0xae3, x0	// Write all 0s to CSR
	csrrw x8, 0xae3, x2	// Restore CSR

// Testing CSR 0xae4
	csrr x15, 0xae4	// Read CSR
	li x24, -1
	csrrw x21, 0xae4, x24	// Write all 1s to CSR
	csrrw x21, 0xae4, x0	// Write all 0s to CSR
	csrrw x21, 0xae4, x15	// Restore CSR

// Testing CSR 0xae5
	csrr x17, 0xae5	// Read CSR
	li x14, -1
	csrrw x5, 0xae5, x14	// Write all 1s to CSR
	csrrw x5, 0xae5, x0	// Write all 0s to CSR
	csrrw x5, 0xae5, x17	// Restore CSR

// Testing CSR 0xae6
	csrr x18, 0xae6	// Read CSR
	li x24, -1
	csrrw x2, 0xae6, x24	// Write all 1s to CSR
	csrrw x2, 0xae6, x0	// Write all 0s to CSR
	csrrw x2, 0xae6, x18	// Restore CSR

// Testing CSR 0xae7
	csrr x7, 0xae7	// Read CSR
	li x30, -1
	csrrw x10, 0xae7, x30	// Write all 1s to CSR
	csrrw x10, 0xae7, x0	// Write all 0s to CSR
	csrrw x10, 0xae7, x7	// Restore CSR

// Testing CSR 0xae8
	csrr x18, 0xae8	// Read CSR
	li x7, -1
	csrrw x9, 0xae8, x7	// Write all 1s to CSR
	csrrw x9, 0xae8, x0	// Write all 0s to CSR
	csrrw x9, 0xae8, x18	// Restore CSR

// Testing CSR 0xae9
	csrr x2, 0xae9	// Read CSR
	li x17, -1
	csrrw x12, 0xae9, x17	// Write all 1s to CSR
	csrrw x12, 0xae9, x0	// Write all 0s to CSR
	csrrw x12, 0xae9, x2	// Restore CSR

// Testing CSR 0xaea
	csrr x23, 0xaea	// Read CSR
	li x24, -1
	csrrw x10, 0xaea, x24	// Write all 1s to CSR
	csrrw x10, 0xaea, x0	// Write all 0s to CSR
	csrrw x10, 0xaea, x23	// Restore CSR

// Testing CSR 0xaeb
	csrr x13, 0xaeb	// Read CSR
	li x5, -1
	csrrw x2, 0xaeb, x5	// Write all 1s to CSR
	csrrw x2, 0xaeb, x0	// Write all 0s to CSR
	csrrw x2, 0xaeb, x13	// Restore CSR

// Testing CSR 0xaec
	csrr x7, 0xaec	// Read CSR
	li x20, -1
	csrrw x10, 0xaec, x20	// Write all 1s to CSR
	csrrw x10, 0xaec, x0	// Write all 0s to CSR
	csrrw x10, 0xaec, x7	// Restore CSR

// Testing CSR 0xaed
	csrr x27, 0xaed	// Read CSR
	li x7, -1
	csrrw x15, 0xaed, x7	// Write all 1s to CSR
	csrrw x15, 0xaed, x0	// Write all 0s to CSR
	csrrw x15, 0xaed, x27	// Restore CSR

// Testing CSR 0xaee
	csrr x10, 0xaee	// Read CSR
	li x1, -1
	csrrw x2, 0xaee, x1	// Write all 1s to CSR
	csrrw x2, 0xaee, x0	// Write all 0s to CSR
	csrrw x2, 0xaee, x10	// Restore CSR

// Testing CSR 0xaef
	csrr x14, 0xaef	// Read CSR
	li x23, -1
	csrrw x18, 0xaef, x23	// Write all 1s to CSR
	csrrw x18, 0xaef, x0	// Write all 0s to CSR
	csrrw x18, 0xaef, x14	// Restore CSR

// Testing CSR 0xaf0
	csrr x31, 0xaf0	// Read CSR
	li x1, -1
	csrrw x23, 0xaf0, x1	// Write all 1s to CSR
	csrrw x23, 0xaf0, x0	// Write all 0s to CSR
	csrrw x23, 0xaf0, x31	// Restore CSR

// Testing CSR 0xaf1
	csrr x6, 0xaf1	// Read CSR
	li x22, -1
	csrrw x4, 0xaf1, x22	// Write all 1s to CSR
	csrrw x4, 0xaf1, x0	// Write all 0s to CSR
	csrrw x4, 0xaf1, x6	// Restore CSR

// Testing CSR 0xaf2
	csrr x12, 0xaf2	// Read CSR
	li x14, -1
	csrrw x8, 0xaf2, x14	// Write all 1s to CSR
	csrrw x8, 0xaf2, x0	// Write all 0s to CSR
	csrrw x8, 0xaf2, x12	// Restore CSR

// Testing CSR 0xaf3
	csrr x28, 0xaf3	// Read CSR
	li x25, -1
	csrrw x9, 0xaf3, x25	// Write all 1s to CSR
	csrrw x9, 0xaf3, x0	// Write all 0s to CSR
	csrrw x9, 0xaf3, x28	// Restore CSR

// Testing CSR 0xaf4
	csrr x25, 0xaf4	// Read CSR
	li x13, -1
	csrrw x17, 0xaf4, x13	// Write all 1s to CSR
	csrrw x17, 0xaf4, x0	// Write all 0s to CSR
	csrrw x17, 0xaf4, x25	// Restore CSR

// Testing CSR 0xaf5
	csrr x12, 0xaf5	// Read CSR
	li x19, -1
	csrrw x5, 0xaf5, x19	// Write all 1s to CSR
	csrrw x5, 0xaf5, x0	// Write all 0s to CSR
	csrrw x5, 0xaf5, x12	// Restore CSR

// Testing CSR 0xaf6
	csrr x24, 0xaf6	// Read CSR
	li x3, -1
	csrrw x11, 0xaf6, x3	// Write all 1s to CSR
	csrrw x11, 0xaf6, x0	// Write all 0s to CSR
	csrrw x11, 0xaf6, x24	// Restore CSR

// Testing CSR 0xaf7
	csrr x7, 0xaf7	// Read CSR
	li x22, -1
	csrrw x2, 0xaf7, x22	// Write all 1s to CSR
	csrrw x2, 0xaf7, x0	// Write all 0s to CSR
	csrrw x2, 0xaf7, x7	// Restore CSR

// Testing CSR 0xaf8
	csrr x13, 0xaf8	// Read CSR
	li x28, -1
	csrrw x25, 0xaf8, x28	// Write all 1s to CSR
	csrrw x25, 0xaf8, x0	// Write all 0s to CSR
	csrrw x25, 0xaf8, x13	// Restore CSR

// Testing CSR 0xaf9
	csrr x13, 0xaf9	// Read CSR
	li x9, -1
	csrrw x11, 0xaf9, x9	// Write all 1s to CSR
	csrrw x11, 0xaf9, x0	// Write all 0s to CSR
	csrrw x11, 0xaf9, x13	// Restore CSR

// Testing CSR 0xafa
	csrr x7, 0xafa	// Read CSR
	li x17, -1
	csrrw x23, 0xafa, x17	// Write all 1s to CSR
	csrrw x23, 0xafa, x0	// Write all 0s to CSR
	csrrw x23, 0xafa, x7	// Restore CSR

// Testing CSR 0xafb
	csrr x25, 0xafb	// Read CSR
	li x8, -1
	csrrw x19, 0xafb, x8	// Write all 1s to CSR
	csrrw x19, 0xafb, x0	// Write all 0s to CSR
	csrrw x19, 0xafb, x25	// Restore CSR

// Testing CSR 0xafc
	csrr x19, 0xafc	// Read CSR
	li x26, -1
	csrrw x2, 0xafc, x26	// Write all 1s to CSR
	csrrw x2, 0xafc, x0	// Write all 0s to CSR
	csrrw x2, 0xafc, x19	// Restore CSR

// Testing CSR 0xafd
	csrr x16, 0xafd	// Read CSR
	li x26, -1
	csrrw x8, 0xafd, x26	// Write all 1s to CSR
	csrrw x8, 0xafd, x0	// Write all 0s to CSR
	csrrw x8, 0xafd, x16	// Restore CSR

// Testing CSR 0xafe
	csrr x7, 0xafe	// Read CSR
	li x9, -1
	csrrw x6, 0xafe, x9	// Write all 1s to CSR
	csrrw x6, 0xafe, x0	// Write all 0s to CSR
	csrrw x6, 0xafe, x7	// Restore CSR

// Testing CSR 0xaff
	csrr x28, 0xaff	// Read CSR
	li x6, -1
	csrrw x15, 0xaff, x6	// Write all 1s to CSR
	csrrw x15, 0xaff, x0	// Write all 0s to CSR
	csrrw x15, 0xaff, x28	// Restore CSR

// Testing CSR 0xb00
	csrr x8, 0xb00	// Read CSR
	li x2, -1
	csrrw x3, 0xb00, x2	// Write all 1s to CSR
	csrrw x3, 0xb00, x0	// Write all 0s to CSR
	csrrw x3, 0xb00, x8	// Restore CSR

// Testing CSR 0xb01
	csrr x8, 0xb01	// Read CSR
	li x13, -1
	csrrw x14, 0xb01, x13	// Write all 1s to CSR
	csrrw x14, 0xb01, x0	// Write all 0s to CSR
	csrrw x14, 0xb01, x8	// Restore CSR

// Testing CSR 0xb02
	csrr x21, 0xb02	// Read CSR
	li x25, -1
	csrrw x1, 0xb02, x25	// Write all 1s to CSR
	csrrw x1, 0xb02, x0	// Write all 0s to CSR
	csrrw x1, 0xb02, x21	// Restore CSR

// Testing CSR 0xb03
	csrr x5, 0xb03	// Read CSR
	li x20, -1
	csrrw x10, 0xb03, x20	// Write all 1s to CSR
	csrrw x10, 0xb03, x0	// Write all 0s to CSR
	csrrw x10, 0xb03, x5	// Restore CSR

// Testing CSR 0xb04
	csrr x23, 0xb04	// Read CSR
	li x26, -1
	csrrw x29, 0xb04, x26	// Write all 1s to CSR
	csrrw x29, 0xb04, x0	// Write all 0s to CSR
	csrrw x29, 0xb04, x23	// Restore CSR

// Testing CSR 0xb05
	csrr x10, 0xb05	// Read CSR
	li x21, -1
	csrrw x2, 0xb05, x21	// Write all 1s to CSR
	csrrw x2, 0xb05, x0	// Write all 0s to CSR
	csrrw x2, 0xb05, x10	// Restore CSR

// Testing CSR 0xb06
	csrr x19, 0xb06	// Read CSR
	li x7, -1
	csrrw x10, 0xb06, x7	// Write all 1s to CSR
	csrrw x10, 0xb06, x0	// Write all 0s to CSR
	csrrw x10, 0xb06, x19	// Restore CSR

// Testing CSR 0xb07
	csrr x16, 0xb07	// Read CSR
	li x13, -1
	csrrw x4, 0xb07, x13	// Write all 1s to CSR
	csrrw x4, 0xb07, x0	// Write all 0s to CSR
	csrrw x4, 0xb07, x16	// Restore CSR

// Testing CSR 0xb08
	csrr x20, 0xb08	// Read CSR
	li x22, -1
	csrrw x26, 0xb08, x22	// Write all 1s to CSR
	csrrw x26, 0xb08, x0	// Write all 0s to CSR
	csrrw x26, 0xb08, x20	// Restore CSR

// Testing CSR 0xb09
	csrr x23, 0xb09	// Read CSR
	li x12, -1
	csrrw x3, 0xb09, x12	// Write all 1s to CSR
	csrrw x3, 0xb09, x0	// Write all 0s to CSR
	csrrw x3, 0xb09, x23	// Restore CSR

// Testing CSR 0xb0a
	csrr x22, 0xb0a	// Read CSR
	li x15, -1
	csrrw x12, 0xb0a, x15	// Write all 1s to CSR
	csrrw x12, 0xb0a, x0	// Write all 0s to CSR
	csrrw x12, 0xb0a, x22	// Restore CSR

// Testing CSR 0xb0b
	csrr x8, 0xb0b	// Read CSR
	li x20, -1
	csrrw x19, 0xb0b, x20	// Write all 1s to CSR
	csrrw x19, 0xb0b, x0	// Write all 0s to CSR
	csrrw x19, 0xb0b, x8	// Restore CSR

// Testing CSR 0xb0c
	csrr x2, 0xb0c	// Read CSR
	li x26, -1
	csrrw x4, 0xb0c, x26	// Write all 1s to CSR
	csrrw x4, 0xb0c, x0	// Write all 0s to CSR
	csrrw x4, 0xb0c, x2	// Restore CSR

// Testing CSR 0xb0d
	csrr x12, 0xb0d	// Read CSR
	li x22, -1
	csrrw x15, 0xb0d, x22	// Write all 1s to CSR
	csrrw x15, 0xb0d, x0	// Write all 0s to CSR
	csrrw x15, 0xb0d, x12	// Restore CSR

// Testing CSR 0xb0e
	csrr x28, 0xb0e	// Read CSR
	li x7, -1
	csrrw x10, 0xb0e, x7	// Write all 1s to CSR
	csrrw x10, 0xb0e, x0	// Write all 0s to CSR
	csrrw x10, 0xb0e, x28	// Restore CSR

// Testing CSR 0xb0f
	csrr x10, 0xb0f	// Read CSR
	li x24, -1
	csrrw x4, 0xb0f, x24	// Write all 1s to CSR
	csrrw x4, 0xb0f, x0	// Write all 0s to CSR
	csrrw x4, 0xb0f, x10	// Restore CSR

// Testing CSR 0xb10
	csrr x25, 0xb10	// Read CSR
	li x1, -1
	csrrw x3, 0xb10, x1	// Write all 1s to CSR
	csrrw x3, 0xb10, x0	// Write all 0s to CSR
	csrrw x3, 0xb10, x25	// Restore CSR

// Testing CSR 0xb11
	csrr x28, 0xb11	// Read CSR
	li x22, -1
	csrrw x20, 0xb11, x22	// Write all 1s to CSR
	csrrw x20, 0xb11, x0	// Write all 0s to CSR
	csrrw x20, 0xb11, x28	// Restore CSR

// Testing CSR 0xb12
	csrr x14, 0xb12	// Read CSR
	li x28, -1
	csrrw x7, 0xb12, x28	// Write all 1s to CSR
	csrrw x7, 0xb12, x0	// Write all 0s to CSR
	csrrw x7, 0xb12, x14	// Restore CSR

// Testing CSR 0xb13
	csrr x16, 0xb13	// Read CSR
	li x7, -1
	csrrw x27, 0xb13, x7	// Write all 1s to CSR
	csrrw x27, 0xb13, x0	// Write all 0s to CSR
	csrrw x27, 0xb13, x16	// Restore CSR

// Testing CSR 0xb14
	csrr x18, 0xb14	// Read CSR
	li x22, -1
	csrrw x24, 0xb14, x22	// Write all 1s to CSR
	csrrw x24, 0xb14, x0	// Write all 0s to CSR
	csrrw x24, 0xb14, x18	// Restore CSR

// Testing CSR 0xb15
	csrr x13, 0xb15	// Read CSR
	li x17, -1
	csrrw x16, 0xb15, x17	// Write all 1s to CSR
	csrrw x16, 0xb15, x0	// Write all 0s to CSR
	csrrw x16, 0xb15, x13	// Restore CSR

// Testing CSR 0xb16
	csrr x31, 0xb16	// Read CSR
	li x6, -1
	csrrw x5, 0xb16, x6	// Write all 1s to CSR
	csrrw x5, 0xb16, x0	// Write all 0s to CSR
	csrrw x5, 0xb16, x31	// Restore CSR

// Testing CSR 0xb17
	csrr x1, 0xb17	// Read CSR
	li x17, -1
	csrrw x15, 0xb17, x17	// Write all 1s to CSR
	csrrw x15, 0xb17, x0	// Write all 0s to CSR
	csrrw x15, 0xb17, x1	// Restore CSR

// Testing CSR 0xb18
	csrr x3, 0xb18	// Read CSR
	li x28, -1
	csrrw x14, 0xb18, x28	// Write all 1s to CSR
	csrrw x14, 0xb18, x0	// Write all 0s to CSR
	csrrw x14, 0xb18, x3	// Restore CSR

// Testing CSR 0xb19
	csrr x21, 0xb19	// Read CSR
	li x29, -1
	csrrw x23, 0xb19, x29	// Write all 1s to CSR
	csrrw x23, 0xb19, x0	// Write all 0s to CSR
	csrrw x23, 0xb19, x21	// Restore CSR

// Testing CSR 0xb1a
	csrr x11, 0xb1a	// Read CSR
	li x31, -1
	csrrw x24, 0xb1a, x31	// Write all 1s to CSR
	csrrw x24, 0xb1a, x0	// Write all 0s to CSR
	csrrw x24, 0xb1a, x11	// Restore CSR

// Testing CSR 0xb1b
	csrr x6, 0xb1b	// Read CSR
	li x3, -1
	csrrw x19, 0xb1b, x3	// Write all 1s to CSR
	csrrw x19, 0xb1b, x0	// Write all 0s to CSR
	csrrw x19, 0xb1b, x6	// Restore CSR

// Testing CSR 0xb1c
	csrr x25, 0xb1c	// Read CSR
	li x31, -1
	csrrw x20, 0xb1c, x31	// Write all 1s to CSR
	csrrw x20, 0xb1c, x0	// Write all 0s to CSR
	csrrw x20, 0xb1c, x25	// Restore CSR

// Testing CSR 0xb1d
	csrr x11, 0xb1d	// Read CSR
	li x15, -1
	csrrw x20, 0xb1d, x15	// Write all 1s to CSR
	csrrw x20, 0xb1d, x0	// Write all 0s to CSR
	csrrw x20, 0xb1d, x11	// Restore CSR

// Testing CSR 0xb1e
	csrr x7, 0xb1e	// Read CSR
	li x23, -1
	csrrw x16, 0xb1e, x23	// Write all 1s to CSR
	csrrw x16, 0xb1e, x0	// Write all 0s to CSR
	csrrw x16, 0xb1e, x7	// Restore CSR

// Testing CSR 0xb1f
	csrr x22, 0xb1f	// Read CSR
	li x26, -1
	csrrw x14, 0xb1f, x26	// Write all 1s to CSR
	csrrw x14, 0xb1f, x0	// Write all 0s to CSR
	csrrw x14, 0xb1f, x22	// Restore CSR

// Testing CSR 0xb20
	csrr x2, 0xb20	// Read CSR
	li x6, -1
	csrrw x9, 0xb20, x6	// Write all 1s to CSR
	csrrw x9, 0xb20, x0	// Write all 0s to CSR
	csrrw x9, 0xb20, x2	// Restore CSR

// Testing CSR 0xb21
	csrr x10, 0xb21	// Read CSR
	li x18, -1
	csrrw x28, 0xb21, x18	// Write all 1s to CSR
	csrrw x28, 0xb21, x0	// Write all 0s to CSR
	csrrw x28, 0xb21, x10	// Restore CSR

// Testing CSR 0xb22
	csrr x22, 0xb22	// Read CSR
	li x14, -1
	csrrw x30, 0xb22, x14	// Write all 1s to CSR
	csrrw x30, 0xb22, x0	// Write all 0s to CSR
	csrrw x30, 0xb22, x22	// Restore CSR

// Testing CSR 0xb23
	csrr x25, 0xb23	// Read CSR
	li x19, -1
	csrrw x1, 0xb23, x19	// Write all 1s to CSR
	csrrw x1, 0xb23, x0	// Write all 0s to CSR
	csrrw x1, 0xb23, x25	// Restore CSR

// Testing CSR 0xb24
	csrr x21, 0xb24	// Read CSR
	li x16, -1
	csrrw x3, 0xb24, x16	// Write all 1s to CSR
	csrrw x3, 0xb24, x0	// Write all 0s to CSR
	csrrw x3, 0xb24, x21	// Restore CSR

// Testing CSR 0xb25
	csrr x16, 0xb25	// Read CSR
	li x10, -1
	csrrw x24, 0xb25, x10	// Write all 1s to CSR
	csrrw x24, 0xb25, x0	// Write all 0s to CSR
	csrrw x24, 0xb25, x16	// Restore CSR

// Testing CSR 0xb26
	csrr x15, 0xb26	// Read CSR
	li x22, -1
	csrrw x18, 0xb26, x22	// Write all 1s to CSR
	csrrw x18, 0xb26, x0	// Write all 0s to CSR
	csrrw x18, 0xb26, x15	// Restore CSR

// Testing CSR 0xb27
	csrr x12, 0xb27	// Read CSR
	li x30, -1
	csrrw x16, 0xb27, x30	// Write all 1s to CSR
	csrrw x16, 0xb27, x0	// Write all 0s to CSR
	csrrw x16, 0xb27, x12	// Restore CSR

// Testing CSR 0xb28
	csrr x20, 0xb28	// Read CSR
	li x3, -1
	csrrw x21, 0xb28, x3	// Write all 1s to CSR
	csrrw x21, 0xb28, x0	// Write all 0s to CSR
	csrrw x21, 0xb28, x20	// Restore CSR

// Testing CSR 0xb29
	csrr x10, 0xb29	// Read CSR
	li x7, -1
	csrrw x25, 0xb29, x7	// Write all 1s to CSR
	csrrw x25, 0xb29, x0	// Write all 0s to CSR
	csrrw x25, 0xb29, x10	// Restore CSR

// Testing CSR 0xb2a
	csrr x30, 0xb2a	// Read CSR
	li x14, -1
	csrrw x15, 0xb2a, x14	// Write all 1s to CSR
	csrrw x15, 0xb2a, x0	// Write all 0s to CSR
	csrrw x15, 0xb2a, x30	// Restore CSR

// Testing CSR 0xb2b
	csrr x12, 0xb2b	// Read CSR
	li x15, -1
	csrrw x21, 0xb2b, x15	// Write all 1s to CSR
	csrrw x21, 0xb2b, x0	// Write all 0s to CSR
	csrrw x21, 0xb2b, x12	// Restore CSR

// Testing CSR 0xb2c
	csrr x5, 0xb2c	// Read CSR
	li x25, -1
	csrrw x23, 0xb2c, x25	// Write all 1s to CSR
	csrrw x23, 0xb2c, x0	// Write all 0s to CSR
	csrrw x23, 0xb2c, x5	// Restore CSR

// Testing CSR 0xb2d
	csrr x16, 0xb2d	// Read CSR
	li x29, -1
	csrrw x12, 0xb2d, x29	// Write all 1s to CSR
	csrrw x12, 0xb2d, x0	// Write all 0s to CSR
	csrrw x12, 0xb2d, x16	// Restore CSR

// Testing CSR 0xb2e
	csrr x3, 0xb2e	// Read CSR
	li x9, -1
	csrrw x21, 0xb2e, x9	// Write all 1s to CSR
	csrrw x21, 0xb2e, x0	// Write all 0s to CSR
	csrrw x21, 0xb2e, x3	// Restore CSR

// Testing CSR 0xb2f
	csrr x19, 0xb2f	// Read CSR
	li x7, -1
	csrrw x5, 0xb2f, x7	// Write all 1s to CSR
	csrrw x5, 0xb2f, x0	// Write all 0s to CSR
	csrrw x5, 0xb2f, x19	// Restore CSR

// Testing CSR 0xb30
	csrr x22, 0xb30	// Read CSR
	li x17, -1
	csrrw x10, 0xb30, x17	// Write all 1s to CSR
	csrrw x10, 0xb30, x0	// Write all 0s to CSR
	csrrw x10, 0xb30, x22	// Restore CSR

// Testing CSR 0xb31
	csrr x21, 0xb31	// Read CSR
	li x3, -1
	csrrw x6, 0xb31, x3	// Write all 1s to CSR
	csrrw x6, 0xb31, x0	// Write all 0s to CSR
	csrrw x6, 0xb31, x21	// Restore CSR

// Testing CSR 0xb32
	csrr x24, 0xb32	// Read CSR
	li x1, -1
	csrrw x28, 0xb32, x1	// Write all 1s to CSR
	csrrw x28, 0xb32, x0	// Write all 0s to CSR
	csrrw x28, 0xb32, x24	// Restore CSR

// Testing CSR 0xb33
	csrr x18, 0xb33	// Read CSR
	li x19, -1
	csrrw x24, 0xb33, x19	// Write all 1s to CSR
	csrrw x24, 0xb33, x0	// Write all 0s to CSR
	csrrw x24, 0xb33, x18	// Restore CSR

// Testing CSR 0xb34
	csrr x25, 0xb34	// Read CSR
	li x22, -1
	csrrw x23, 0xb34, x22	// Write all 1s to CSR
	csrrw x23, 0xb34, x0	// Write all 0s to CSR
	csrrw x23, 0xb34, x25	// Restore CSR

// Testing CSR 0xb35
	csrr x29, 0xb35	// Read CSR
	li x18, -1
	csrrw x31, 0xb35, x18	// Write all 1s to CSR
	csrrw x31, 0xb35, x0	// Write all 0s to CSR
	csrrw x31, 0xb35, x29	// Restore CSR

// Testing CSR 0xb36
	csrr x15, 0xb36	// Read CSR
	li x26, -1
	csrrw x18, 0xb36, x26	// Write all 1s to CSR
	csrrw x18, 0xb36, x0	// Write all 0s to CSR
	csrrw x18, 0xb36, x15	// Restore CSR

// Testing CSR 0xb37
	csrr x16, 0xb37	// Read CSR
	li x9, -1
	csrrw x6, 0xb37, x9	// Write all 1s to CSR
	csrrw x6, 0xb37, x0	// Write all 0s to CSR
	csrrw x6, 0xb37, x16	// Restore CSR

// Testing CSR 0xb38
	csrr x1, 0xb38	// Read CSR
	li x27, -1
	csrrw x21, 0xb38, x27	// Write all 1s to CSR
	csrrw x21, 0xb38, x0	// Write all 0s to CSR
	csrrw x21, 0xb38, x1	// Restore CSR

// Testing CSR 0xb39
	csrr x29, 0xb39	// Read CSR
	li x12, -1
	csrrw x14, 0xb39, x12	// Write all 1s to CSR
	csrrw x14, 0xb39, x0	// Write all 0s to CSR
	csrrw x14, 0xb39, x29	// Restore CSR

// Testing CSR 0xb3a
	csrr x10, 0xb3a	// Read CSR
	li x14, -1
	csrrw x2, 0xb3a, x14	// Write all 1s to CSR
	csrrw x2, 0xb3a, x0	// Write all 0s to CSR
	csrrw x2, 0xb3a, x10	// Restore CSR

// Testing CSR 0xb3b
	csrr x23, 0xb3b	// Read CSR
	li x30, -1
	csrrw x2, 0xb3b, x30	// Write all 1s to CSR
	csrrw x2, 0xb3b, x0	// Write all 0s to CSR
	csrrw x2, 0xb3b, x23	// Restore CSR

// Testing CSR 0xb3c
	csrr x2, 0xb3c	// Read CSR
	li x8, -1
	csrrw x14, 0xb3c, x8	// Write all 1s to CSR
	csrrw x14, 0xb3c, x0	// Write all 0s to CSR
	csrrw x14, 0xb3c, x2	// Restore CSR

// Testing CSR 0xb3d
	csrr x25, 0xb3d	// Read CSR
	li x31, -1
	csrrw x21, 0xb3d, x31	// Write all 1s to CSR
	csrrw x21, 0xb3d, x0	// Write all 0s to CSR
	csrrw x21, 0xb3d, x25	// Restore CSR

// Testing CSR 0xb3e
	csrr x3, 0xb3e	// Read CSR
	li x2, -1
	csrrw x31, 0xb3e, x2	// Write all 1s to CSR
	csrrw x31, 0xb3e, x0	// Write all 0s to CSR
	csrrw x31, 0xb3e, x3	// Restore CSR

// Testing CSR 0xb3f
	csrr x13, 0xb3f	// Read CSR
	li x16, -1
	csrrw x20, 0xb3f, x16	// Write all 1s to CSR
	csrrw x20, 0xb3f, x0	// Write all 0s to CSR
	csrrw x20, 0xb3f, x13	// Restore CSR

// Testing CSR 0xb40
	csrr x7, 0xb40	// Read CSR
	li x4, -1
	csrrw x9, 0xb40, x4	// Write all 1s to CSR
	csrrw x9, 0xb40, x0	// Write all 0s to CSR
	csrrw x9, 0xb40, x7	// Restore CSR

// Testing CSR 0xb41
	csrr x31, 0xb41	// Read CSR
	li x1, -1
	csrrw x6, 0xb41, x1	// Write all 1s to CSR
	csrrw x6, 0xb41, x0	// Write all 0s to CSR
	csrrw x6, 0xb41, x31	// Restore CSR

// Testing CSR 0xb42
	csrr x16, 0xb42	// Read CSR
	li x20, -1
	csrrw x2, 0xb42, x20	// Write all 1s to CSR
	csrrw x2, 0xb42, x0	// Write all 0s to CSR
	csrrw x2, 0xb42, x16	// Restore CSR

// Testing CSR 0xb43
	csrr x3, 0xb43	// Read CSR
	li x1, -1
	csrrw x9, 0xb43, x1	// Write all 1s to CSR
	csrrw x9, 0xb43, x0	// Write all 0s to CSR
	csrrw x9, 0xb43, x3	// Restore CSR

// Testing CSR 0xb44
	csrr x31, 0xb44	// Read CSR
	li x5, -1
	csrrw x15, 0xb44, x5	// Write all 1s to CSR
	csrrw x15, 0xb44, x0	// Write all 0s to CSR
	csrrw x15, 0xb44, x31	// Restore CSR

// Testing CSR 0xb45
	csrr x25, 0xb45	// Read CSR
	li x6, -1
	csrrw x29, 0xb45, x6	// Write all 1s to CSR
	csrrw x29, 0xb45, x0	// Write all 0s to CSR
	csrrw x29, 0xb45, x25	// Restore CSR

// Testing CSR 0xb46
	csrr x27, 0xb46	// Read CSR
	li x7, -1
	csrrw x8, 0xb46, x7	// Write all 1s to CSR
	csrrw x8, 0xb46, x0	// Write all 0s to CSR
	csrrw x8, 0xb46, x27	// Restore CSR

// Testing CSR 0xb47
	csrr x21, 0xb47	// Read CSR
	li x8, -1
	csrrw x30, 0xb47, x8	// Write all 1s to CSR
	csrrw x30, 0xb47, x0	// Write all 0s to CSR
	csrrw x30, 0xb47, x21	// Restore CSR

// Testing CSR 0xb48
	csrr x18, 0xb48	// Read CSR
	li x22, -1
	csrrw x1, 0xb48, x22	// Write all 1s to CSR
	csrrw x1, 0xb48, x0	// Write all 0s to CSR
	csrrw x1, 0xb48, x18	// Restore CSR

// Testing CSR 0xb49
	csrr x2, 0xb49	// Read CSR
	li x26, -1
	csrrw x15, 0xb49, x26	// Write all 1s to CSR
	csrrw x15, 0xb49, x0	// Write all 0s to CSR
	csrrw x15, 0xb49, x2	// Restore CSR

// Testing CSR 0xb4a
	csrr x16, 0xb4a	// Read CSR
	li x11, -1
	csrrw x5, 0xb4a, x11	// Write all 1s to CSR
	csrrw x5, 0xb4a, x0	// Write all 0s to CSR
	csrrw x5, 0xb4a, x16	// Restore CSR

// Testing CSR 0xb4b
	csrr x21, 0xb4b	// Read CSR
	li x3, -1
	csrrw x2, 0xb4b, x3	// Write all 1s to CSR
	csrrw x2, 0xb4b, x0	// Write all 0s to CSR
	csrrw x2, 0xb4b, x21	// Restore CSR

// Testing CSR 0xb4c
	csrr x28, 0xb4c	// Read CSR
	li x22, -1
	csrrw x20, 0xb4c, x22	// Write all 1s to CSR
	csrrw x20, 0xb4c, x0	// Write all 0s to CSR
	csrrw x20, 0xb4c, x28	// Restore CSR

// Testing CSR 0xb4d
	csrr x2, 0xb4d	// Read CSR
	li x29, -1
	csrrw x21, 0xb4d, x29	// Write all 1s to CSR
	csrrw x21, 0xb4d, x0	// Write all 0s to CSR
	csrrw x21, 0xb4d, x2	// Restore CSR

// Testing CSR 0xb4e
	csrr x8, 0xb4e	// Read CSR
	li x31, -1
	csrrw x28, 0xb4e, x31	// Write all 1s to CSR
	csrrw x28, 0xb4e, x0	// Write all 0s to CSR
	csrrw x28, 0xb4e, x8	// Restore CSR

// Testing CSR 0xb4f
	csrr x13, 0xb4f	// Read CSR
	li x25, -1
	csrrw x9, 0xb4f, x25	// Write all 1s to CSR
	csrrw x9, 0xb4f, x0	// Write all 0s to CSR
	csrrw x9, 0xb4f, x13	// Restore CSR

// Testing CSR 0xb50
	csrr x26, 0xb50	// Read CSR
	li x1, -1
	csrrw x16, 0xb50, x1	// Write all 1s to CSR
	csrrw x16, 0xb50, x0	// Write all 0s to CSR
	csrrw x16, 0xb50, x26	// Restore CSR

// Testing CSR 0xb51
	csrr x9, 0xb51	// Read CSR
	li x26, -1
	csrrw x30, 0xb51, x26	// Write all 1s to CSR
	csrrw x30, 0xb51, x0	// Write all 0s to CSR
	csrrw x30, 0xb51, x9	// Restore CSR

// Testing CSR 0xb52
	csrr x4, 0xb52	// Read CSR
	li x18, -1
	csrrw x5, 0xb52, x18	// Write all 1s to CSR
	csrrw x5, 0xb52, x0	// Write all 0s to CSR
	csrrw x5, 0xb52, x4	// Restore CSR

// Testing CSR 0xb53
	csrr x3, 0xb53	// Read CSR
	li x12, -1
	csrrw x24, 0xb53, x12	// Write all 1s to CSR
	csrrw x24, 0xb53, x0	// Write all 0s to CSR
	csrrw x24, 0xb53, x3	// Restore CSR

// Testing CSR 0xb54
	csrr x11, 0xb54	// Read CSR
	li x21, -1
	csrrw x17, 0xb54, x21	// Write all 1s to CSR
	csrrw x17, 0xb54, x0	// Write all 0s to CSR
	csrrw x17, 0xb54, x11	// Restore CSR

// Testing CSR 0xb55
	csrr x28, 0xb55	// Read CSR
	li x21, -1
	csrrw x7, 0xb55, x21	// Write all 1s to CSR
	csrrw x7, 0xb55, x0	// Write all 0s to CSR
	csrrw x7, 0xb55, x28	// Restore CSR

// Testing CSR 0xb56
	csrr x28, 0xb56	// Read CSR
	li x18, -1
	csrrw x22, 0xb56, x18	// Write all 1s to CSR
	csrrw x22, 0xb56, x0	// Write all 0s to CSR
	csrrw x22, 0xb56, x28	// Restore CSR

// Testing CSR 0xb57
	csrr x20, 0xb57	// Read CSR
	li x29, -1
	csrrw x26, 0xb57, x29	// Write all 1s to CSR
	csrrw x26, 0xb57, x0	// Write all 0s to CSR
	csrrw x26, 0xb57, x20	// Restore CSR

// Testing CSR 0xb58
	csrr x20, 0xb58	// Read CSR
	li x26, -1
	csrrw x7, 0xb58, x26	// Write all 1s to CSR
	csrrw x7, 0xb58, x0	// Write all 0s to CSR
	csrrw x7, 0xb58, x20	// Restore CSR

// Testing CSR 0xb59
	csrr x18, 0xb59	// Read CSR
	li x17, -1
	csrrw x31, 0xb59, x17	// Write all 1s to CSR
	csrrw x31, 0xb59, x0	// Write all 0s to CSR
	csrrw x31, 0xb59, x18	// Restore CSR

// Testing CSR 0xb5a
	csrr x10, 0xb5a	// Read CSR
	li x17, -1
	csrrw x8, 0xb5a, x17	// Write all 1s to CSR
	csrrw x8, 0xb5a, x0	// Write all 0s to CSR
	csrrw x8, 0xb5a, x10	// Restore CSR

// Testing CSR 0xb5b
	csrr x6, 0xb5b	// Read CSR
	li x3, -1
	csrrw x12, 0xb5b, x3	// Write all 1s to CSR
	csrrw x12, 0xb5b, x0	// Write all 0s to CSR
	csrrw x12, 0xb5b, x6	// Restore CSR

// Testing CSR 0xb5c
	csrr x4, 0xb5c	// Read CSR
	li x10, -1
	csrrw x14, 0xb5c, x10	// Write all 1s to CSR
	csrrw x14, 0xb5c, x0	// Write all 0s to CSR
	csrrw x14, 0xb5c, x4	// Restore CSR

// Testing CSR 0xb5d
	csrr x29, 0xb5d	// Read CSR
	li x14, -1
	csrrw x17, 0xb5d, x14	// Write all 1s to CSR
	csrrw x17, 0xb5d, x0	// Write all 0s to CSR
	csrrw x17, 0xb5d, x29	// Restore CSR

// Testing CSR 0xb5e
	csrr x9, 0xb5e	// Read CSR
	li x17, -1
	csrrw x5, 0xb5e, x17	// Write all 1s to CSR
	csrrw x5, 0xb5e, x0	// Write all 0s to CSR
	csrrw x5, 0xb5e, x9	// Restore CSR

// Testing CSR 0xb5f
	csrr x4, 0xb5f	// Read CSR
	li x12, -1
	csrrw x31, 0xb5f, x12	// Write all 1s to CSR
	csrrw x31, 0xb5f, x0	// Write all 0s to CSR
	csrrw x31, 0xb5f, x4	// Restore CSR

// Testing CSR 0xb60
	csrr x13, 0xb60	// Read CSR
	li x4, -1
	csrrw x27, 0xb60, x4	// Write all 1s to CSR
	csrrw x27, 0xb60, x0	// Write all 0s to CSR
	csrrw x27, 0xb60, x13	// Restore CSR

// Testing CSR 0xb61
	csrr x31, 0xb61	// Read CSR
	li x30, -1
	csrrw x6, 0xb61, x30	// Write all 1s to CSR
	csrrw x6, 0xb61, x0	// Write all 0s to CSR
	csrrw x6, 0xb61, x31	// Restore CSR

// Testing CSR 0xb62
	csrr x27, 0xb62	// Read CSR
	li x2, -1
	csrrw x14, 0xb62, x2	// Write all 1s to CSR
	csrrw x14, 0xb62, x0	// Write all 0s to CSR
	csrrw x14, 0xb62, x27	// Restore CSR

// Testing CSR 0xb63
	csrr x31, 0xb63	// Read CSR
	li x18, -1
	csrrw x1, 0xb63, x18	// Write all 1s to CSR
	csrrw x1, 0xb63, x0	// Write all 0s to CSR
	csrrw x1, 0xb63, x31	// Restore CSR

// Testing CSR 0xb64
	csrr x19, 0xb64	// Read CSR
	li x9, -1
	csrrw x30, 0xb64, x9	// Write all 1s to CSR
	csrrw x30, 0xb64, x0	// Write all 0s to CSR
	csrrw x30, 0xb64, x19	// Restore CSR

// Testing CSR 0xb65
	csrr x22, 0xb65	// Read CSR
	li x24, -1
	csrrw x19, 0xb65, x24	// Write all 1s to CSR
	csrrw x19, 0xb65, x0	// Write all 0s to CSR
	csrrw x19, 0xb65, x22	// Restore CSR

// Testing CSR 0xb66
	csrr x24, 0xb66	// Read CSR
	li x31, -1
	csrrw x11, 0xb66, x31	// Write all 1s to CSR
	csrrw x11, 0xb66, x0	// Write all 0s to CSR
	csrrw x11, 0xb66, x24	// Restore CSR

// Testing CSR 0xb67
	csrr x8, 0xb67	// Read CSR
	li x25, -1
	csrrw x1, 0xb67, x25	// Write all 1s to CSR
	csrrw x1, 0xb67, x0	// Write all 0s to CSR
	csrrw x1, 0xb67, x8	// Restore CSR

// Testing CSR 0xb68
	csrr x2, 0xb68	// Read CSR
	li x30, -1
	csrrw x1, 0xb68, x30	// Write all 1s to CSR
	csrrw x1, 0xb68, x0	// Write all 0s to CSR
	csrrw x1, 0xb68, x2	// Restore CSR

// Testing CSR 0xb69
	csrr x8, 0xb69	// Read CSR
	li x26, -1
	csrrw x27, 0xb69, x26	// Write all 1s to CSR
	csrrw x27, 0xb69, x0	// Write all 0s to CSR
	csrrw x27, 0xb69, x8	// Restore CSR

// Testing CSR 0xb6a
	csrr x11, 0xb6a	// Read CSR
	li x4, -1
	csrrw x21, 0xb6a, x4	// Write all 1s to CSR
	csrrw x21, 0xb6a, x0	// Write all 0s to CSR
	csrrw x21, 0xb6a, x11	// Restore CSR

// Testing CSR 0xb6b
	csrr x24, 0xb6b	// Read CSR
	li x27, -1
	csrrw x31, 0xb6b, x27	// Write all 1s to CSR
	csrrw x31, 0xb6b, x0	// Write all 0s to CSR
	csrrw x31, 0xb6b, x24	// Restore CSR

// Testing CSR 0xb6c
	csrr x21, 0xb6c	// Read CSR
	li x23, -1
	csrrw x3, 0xb6c, x23	// Write all 1s to CSR
	csrrw x3, 0xb6c, x0	// Write all 0s to CSR
	csrrw x3, 0xb6c, x21	// Restore CSR

// Testing CSR 0xb6d
	csrr x10, 0xb6d	// Read CSR
	li x9, -1
	csrrw x15, 0xb6d, x9	// Write all 1s to CSR
	csrrw x15, 0xb6d, x0	// Write all 0s to CSR
	csrrw x15, 0xb6d, x10	// Restore CSR

// Testing CSR 0xb6e
	csrr x2, 0xb6e	// Read CSR
	li x25, -1
	csrrw x4, 0xb6e, x25	// Write all 1s to CSR
	csrrw x4, 0xb6e, x0	// Write all 0s to CSR
	csrrw x4, 0xb6e, x2	// Restore CSR

// Testing CSR 0xb6f
	csrr x14, 0xb6f	// Read CSR
	li x8, -1
	csrrw x9, 0xb6f, x8	// Write all 1s to CSR
	csrrw x9, 0xb6f, x0	// Write all 0s to CSR
	csrrw x9, 0xb6f, x14	// Restore CSR

// Testing CSR 0xb70
	csrr x9, 0xb70	// Read CSR
	li x29, -1
	csrrw x25, 0xb70, x29	// Write all 1s to CSR
	csrrw x25, 0xb70, x0	// Write all 0s to CSR
	csrrw x25, 0xb70, x9	// Restore CSR

// Testing CSR 0xb71
	csrr x19, 0xb71	// Read CSR
	li x20, -1
	csrrw x24, 0xb71, x20	// Write all 1s to CSR
	csrrw x24, 0xb71, x0	// Write all 0s to CSR
	csrrw x24, 0xb71, x19	// Restore CSR

// Testing CSR 0xb72
	csrr x22, 0xb72	// Read CSR
	li x24, -1
	csrrw x4, 0xb72, x24	// Write all 1s to CSR
	csrrw x4, 0xb72, x0	// Write all 0s to CSR
	csrrw x4, 0xb72, x22	// Restore CSR

// Testing CSR 0xb73
	csrr x29, 0xb73	// Read CSR
	li x5, -1
	csrrw x18, 0xb73, x5	// Write all 1s to CSR
	csrrw x18, 0xb73, x0	// Write all 0s to CSR
	csrrw x18, 0xb73, x29	// Restore CSR

// Testing CSR 0xb74
	csrr x4, 0xb74	// Read CSR
	li x12, -1
	csrrw x30, 0xb74, x12	// Write all 1s to CSR
	csrrw x30, 0xb74, x0	// Write all 0s to CSR
	csrrw x30, 0xb74, x4	// Restore CSR

// Testing CSR 0xb75
	csrr x26, 0xb75	// Read CSR
	li x9, -1
	csrrw x30, 0xb75, x9	// Write all 1s to CSR
	csrrw x30, 0xb75, x0	// Write all 0s to CSR
	csrrw x30, 0xb75, x26	// Restore CSR

// Testing CSR 0xb76
	csrr x12, 0xb76	// Read CSR
	li x2, -1
	csrrw x3, 0xb76, x2	// Write all 1s to CSR
	csrrw x3, 0xb76, x0	// Write all 0s to CSR
	csrrw x3, 0xb76, x12	// Restore CSR

// Testing CSR 0xb77
	csrr x14, 0xb77	// Read CSR
	li x10, -1
	csrrw x31, 0xb77, x10	// Write all 1s to CSR
	csrrw x31, 0xb77, x0	// Write all 0s to CSR
	csrrw x31, 0xb77, x14	// Restore CSR

// Testing CSR 0xb78
	csrr x26, 0xb78	// Read CSR
	li x12, -1
	csrrw x9, 0xb78, x12	// Write all 1s to CSR
	csrrw x9, 0xb78, x0	// Write all 0s to CSR
	csrrw x9, 0xb78, x26	// Restore CSR

// Testing CSR 0xb79
	csrr x28, 0xb79	// Read CSR
	li x29, -1
	csrrw x1, 0xb79, x29	// Write all 1s to CSR
	csrrw x1, 0xb79, x0	// Write all 0s to CSR
	csrrw x1, 0xb79, x28	// Restore CSR

// Testing CSR 0xb7a
	csrr x5, 0xb7a	// Read CSR
	li x16, -1
	csrrw x11, 0xb7a, x16	// Write all 1s to CSR
	csrrw x11, 0xb7a, x0	// Write all 0s to CSR
	csrrw x11, 0xb7a, x5	// Restore CSR

// Testing CSR 0xb7b
	csrr x8, 0xb7b	// Read CSR
	li x7, -1
	csrrw x3, 0xb7b, x7	// Write all 1s to CSR
	csrrw x3, 0xb7b, x0	// Write all 0s to CSR
	csrrw x3, 0xb7b, x8	// Restore CSR

// Testing CSR 0xb7c
	csrr x14, 0xb7c	// Read CSR
	li x12, -1
	csrrw x18, 0xb7c, x12	// Write all 1s to CSR
	csrrw x18, 0xb7c, x0	// Write all 0s to CSR
	csrrw x18, 0xb7c, x14	// Restore CSR

// Testing CSR 0xb7d
	csrr x22, 0xb7d	// Read CSR
	li x3, -1
	csrrw x6, 0xb7d, x3	// Write all 1s to CSR
	csrrw x6, 0xb7d, x0	// Write all 0s to CSR
	csrrw x6, 0xb7d, x22	// Restore CSR

// Testing CSR 0xb7e
	csrr x6, 0xb7e	// Read CSR
	li x21, -1
	csrrw x20, 0xb7e, x21	// Write all 1s to CSR
	csrrw x20, 0xb7e, x0	// Write all 0s to CSR
	csrrw x20, 0xb7e, x6	// Restore CSR

// Testing CSR 0xb7f
	csrr x8, 0xb7f	// Read CSR
	li x27, -1
	csrrw x18, 0xb7f, x27	// Write all 1s to CSR
	csrrw x18, 0xb7f, x0	// Write all 0s to CSR
	csrrw x18, 0xb7f, x8	// Restore CSR

// Testing CSR 0xb80
	csrr x3, 0xb80	// Read CSR
	li x10, -1
	csrrw x31, 0xb80, x10	// Write all 1s to CSR
	csrrw x31, 0xb80, x0	// Write all 0s to CSR
	csrrw x31, 0xb80, x3	// Restore CSR

// Testing CSR 0xb81
	csrr x23, 0xb81	// Read CSR
	li x17, -1
	csrrw x25, 0xb81, x17	// Write all 1s to CSR
	csrrw x25, 0xb81, x0	// Write all 0s to CSR
	csrrw x25, 0xb81, x23	// Restore CSR

// Testing CSR 0xb82
	csrr x25, 0xb82	// Read CSR
	li x13, -1
	csrrw x2, 0xb82, x13	// Write all 1s to CSR
	csrrw x2, 0xb82, x0	// Write all 0s to CSR
	csrrw x2, 0xb82, x25	// Restore CSR

// Testing CSR 0xb83
	csrr x21, 0xb83	// Read CSR
	li x12, -1
	csrrw x7, 0xb83, x12	// Write all 1s to CSR
	csrrw x7, 0xb83, x0	// Write all 0s to CSR
	csrrw x7, 0xb83, x21	// Restore CSR

// Testing CSR 0xb84
	csrr x15, 0xb84	// Read CSR
	li x19, -1
	csrrw x7, 0xb84, x19	// Write all 1s to CSR
	csrrw x7, 0xb84, x0	// Write all 0s to CSR
	csrrw x7, 0xb84, x15	// Restore CSR

// Testing CSR 0xb85
	csrr x31, 0xb85	// Read CSR
	li x15, -1
	csrrw x17, 0xb85, x15	// Write all 1s to CSR
	csrrw x17, 0xb85, x0	// Write all 0s to CSR
	csrrw x17, 0xb85, x31	// Restore CSR

// Testing CSR 0xb86
	csrr x4, 0xb86	// Read CSR
	li x30, -1
	csrrw x15, 0xb86, x30	// Write all 1s to CSR
	csrrw x15, 0xb86, x0	// Write all 0s to CSR
	csrrw x15, 0xb86, x4	// Restore CSR

// Testing CSR 0xb87
	csrr x31, 0xb87	// Read CSR
	li x7, -1
	csrrw x29, 0xb87, x7	// Write all 1s to CSR
	csrrw x29, 0xb87, x0	// Write all 0s to CSR
	csrrw x29, 0xb87, x31	// Restore CSR

// Testing CSR 0xb88
	csrr x12, 0xb88	// Read CSR
	li x28, -1
	csrrw x20, 0xb88, x28	// Write all 1s to CSR
	csrrw x20, 0xb88, x0	// Write all 0s to CSR
	csrrw x20, 0xb88, x12	// Restore CSR

// Testing CSR 0xb89
	csrr x11, 0xb89	// Read CSR
	li x31, -1
	csrrw x23, 0xb89, x31	// Write all 1s to CSR
	csrrw x23, 0xb89, x0	// Write all 0s to CSR
	csrrw x23, 0xb89, x11	// Restore CSR

// Testing CSR 0xb8a
	csrr x23, 0xb8a	// Read CSR
	li x27, -1
	csrrw x20, 0xb8a, x27	// Write all 1s to CSR
	csrrw x20, 0xb8a, x0	// Write all 0s to CSR
	csrrw x20, 0xb8a, x23	// Restore CSR

// Testing CSR 0xb8b
	csrr x20, 0xb8b	// Read CSR
	li x29, -1
	csrrw x28, 0xb8b, x29	// Write all 1s to CSR
	csrrw x28, 0xb8b, x0	// Write all 0s to CSR
	csrrw x28, 0xb8b, x20	// Restore CSR

// Testing CSR 0xb8c
	csrr x26, 0xb8c	// Read CSR
	li x1, -1
	csrrw x27, 0xb8c, x1	// Write all 1s to CSR
	csrrw x27, 0xb8c, x0	// Write all 0s to CSR
	csrrw x27, 0xb8c, x26	// Restore CSR

// Testing CSR 0xb8d
	csrr x29, 0xb8d	// Read CSR
	li x14, -1
	csrrw x25, 0xb8d, x14	// Write all 1s to CSR
	csrrw x25, 0xb8d, x0	// Write all 0s to CSR
	csrrw x25, 0xb8d, x29	// Restore CSR

// Testing CSR 0xb8e
	csrr x29, 0xb8e	// Read CSR
	li x21, -1
	csrrw x24, 0xb8e, x21	// Write all 1s to CSR
	csrrw x24, 0xb8e, x0	// Write all 0s to CSR
	csrrw x24, 0xb8e, x29	// Restore CSR

// Testing CSR 0xb8f
	csrr x4, 0xb8f	// Read CSR
	li x11, -1
	csrrw x13, 0xb8f, x11	// Write all 1s to CSR
	csrrw x13, 0xb8f, x0	// Write all 0s to CSR
	csrrw x13, 0xb8f, x4	// Restore CSR

// Testing CSR 0xb90
	csrr x14, 0xb90	// Read CSR
	li x12, -1
	csrrw x8, 0xb90, x12	// Write all 1s to CSR
	csrrw x8, 0xb90, x0	// Write all 0s to CSR
	csrrw x8, 0xb90, x14	// Restore CSR

// Testing CSR 0xb91
	csrr x5, 0xb91	// Read CSR
	li x28, -1
	csrrw x29, 0xb91, x28	// Write all 1s to CSR
	csrrw x29, 0xb91, x0	// Write all 0s to CSR
	csrrw x29, 0xb91, x5	// Restore CSR

// Testing CSR 0xb92
	csrr x12, 0xb92	// Read CSR
	li x30, -1
	csrrw x13, 0xb92, x30	// Write all 1s to CSR
	csrrw x13, 0xb92, x0	// Write all 0s to CSR
	csrrw x13, 0xb92, x12	// Restore CSR

// Testing CSR 0xb93
	csrr x31, 0xb93	// Read CSR
	li x13, -1
	csrrw x23, 0xb93, x13	// Write all 1s to CSR
	csrrw x23, 0xb93, x0	// Write all 0s to CSR
	csrrw x23, 0xb93, x31	// Restore CSR

// Testing CSR 0xb94
	csrr x18, 0xb94	// Read CSR
	li x29, -1
	csrrw x10, 0xb94, x29	// Write all 1s to CSR
	csrrw x10, 0xb94, x0	// Write all 0s to CSR
	csrrw x10, 0xb94, x18	// Restore CSR

// Testing CSR 0xb95
	csrr x23, 0xb95	// Read CSR
	li x27, -1
	csrrw x22, 0xb95, x27	// Write all 1s to CSR
	csrrw x22, 0xb95, x0	// Write all 0s to CSR
	csrrw x22, 0xb95, x23	// Restore CSR

// Testing CSR 0xb96
	csrr x7, 0xb96	// Read CSR
	li x26, -1
	csrrw x3, 0xb96, x26	// Write all 1s to CSR
	csrrw x3, 0xb96, x0	// Write all 0s to CSR
	csrrw x3, 0xb96, x7	// Restore CSR

// Testing CSR 0xb97
	csrr x26, 0xb97	// Read CSR
	li x13, -1
	csrrw x27, 0xb97, x13	// Write all 1s to CSR
	csrrw x27, 0xb97, x0	// Write all 0s to CSR
	csrrw x27, 0xb97, x26	// Restore CSR

// Testing CSR 0xb98
	csrr x7, 0xb98	// Read CSR
	li x6, -1
	csrrw x2, 0xb98, x6	// Write all 1s to CSR
	csrrw x2, 0xb98, x0	// Write all 0s to CSR
	csrrw x2, 0xb98, x7	// Restore CSR

// Testing CSR 0xb99
	csrr x11, 0xb99	// Read CSR
	li x26, -1
	csrrw x28, 0xb99, x26	// Write all 1s to CSR
	csrrw x28, 0xb99, x0	// Write all 0s to CSR
	csrrw x28, 0xb99, x11	// Restore CSR

// Testing CSR 0xb9a
	csrr x31, 0xb9a	// Read CSR
	li x13, -1
	csrrw x21, 0xb9a, x13	// Write all 1s to CSR
	csrrw x21, 0xb9a, x0	// Write all 0s to CSR
	csrrw x21, 0xb9a, x31	// Restore CSR

// Testing CSR 0xb9b
	csrr x3, 0xb9b	// Read CSR
	li x29, -1
	csrrw x28, 0xb9b, x29	// Write all 1s to CSR
	csrrw x28, 0xb9b, x0	// Write all 0s to CSR
	csrrw x28, 0xb9b, x3	// Restore CSR

// Testing CSR 0xb9c
	csrr x4, 0xb9c	// Read CSR
	li x26, -1
	csrrw x20, 0xb9c, x26	// Write all 1s to CSR
	csrrw x20, 0xb9c, x0	// Write all 0s to CSR
	csrrw x20, 0xb9c, x4	// Restore CSR

// Testing CSR 0xb9d
	csrr x18, 0xb9d	// Read CSR
	li x20, -1
	csrrw x2, 0xb9d, x20	// Write all 1s to CSR
	csrrw x2, 0xb9d, x0	// Write all 0s to CSR
	csrrw x2, 0xb9d, x18	// Restore CSR

// Testing CSR 0xb9e
	csrr x12, 0xb9e	// Read CSR
	li x5, -1
	csrrw x6, 0xb9e, x5	// Write all 1s to CSR
	csrrw x6, 0xb9e, x0	// Write all 0s to CSR
	csrrw x6, 0xb9e, x12	// Restore CSR

// Testing CSR 0xb9f
	csrr x12, 0xb9f	// Read CSR
	li x15, -1
	csrrw x14, 0xb9f, x15	// Write all 1s to CSR
	csrrw x14, 0xb9f, x0	// Write all 0s to CSR
	csrrw x14, 0xb9f, x12	// Restore CSR

// Testing CSR 0xba0
	csrr x11, 0xba0	// Read CSR
	li x10, -1
	csrrw x30, 0xba0, x10	// Write all 1s to CSR
	csrrw x30, 0xba0, x0	// Write all 0s to CSR
	csrrw x30, 0xba0, x11	// Restore CSR

// Testing CSR 0xba1
	csrr x25, 0xba1	// Read CSR
	li x10, -1
	csrrw x31, 0xba1, x10	// Write all 1s to CSR
	csrrw x31, 0xba1, x0	// Write all 0s to CSR
	csrrw x31, 0xba1, x25	// Restore CSR

// Testing CSR 0xba2
	csrr x11, 0xba2	// Read CSR
	li x14, -1
	csrrw x24, 0xba2, x14	// Write all 1s to CSR
	csrrw x24, 0xba2, x0	// Write all 0s to CSR
	csrrw x24, 0xba2, x11	// Restore CSR

// Testing CSR 0xba3
	csrr x6, 0xba3	// Read CSR
	li x15, -1
	csrrw x22, 0xba3, x15	// Write all 1s to CSR
	csrrw x22, 0xba3, x0	// Write all 0s to CSR
	csrrw x22, 0xba3, x6	// Restore CSR

// Testing CSR 0xba4
	csrr x5, 0xba4	// Read CSR
	li x22, -1
	csrrw x15, 0xba4, x22	// Write all 1s to CSR
	csrrw x15, 0xba4, x0	// Write all 0s to CSR
	csrrw x15, 0xba4, x5	// Restore CSR

// Testing CSR 0xba5
	csrr x5, 0xba5	// Read CSR
	li x14, -1
	csrrw x18, 0xba5, x14	// Write all 1s to CSR
	csrrw x18, 0xba5, x0	// Write all 0s to CSR
	csrrw x18, 0xba5, x5	// Restore CSR

// Testing CSR 0xba6
	csrr x21, 0xba6	// Read CSR
	li x12, -1
	csrrw x11, 0xba6, x12	// Write all 1s to CSR
	csrrw x11, 0xba6, x0	// Write all 0s to CSR
	csrrw x11, 0xba6, x21	// Restore CSR

// Testing CSR 0xba7
	csrr x4, 0xba7	// Read CSR
	li x1, -1
	csrrw x30, 0xba7, x1	// Write all 1s to CSR
	csrrw x30, 0xba7, x0	// Write all 0s to CSR
	csrrw x30, 0xba7, x4	// Restore CSR

// Testing CSR 0xba8
	csrr x29, 0xba8	// Read CSR
	li x23, -1
	csrrw x5, 0xba8, x23	// Write all 1s to CSR
	csrrw x5, 0xba8, x0	// Write all 0s to CSR
	csrrw x5, 0xba8, x29	// Restore CSR

// Testing CSR 0xba9
	csrr x23, 0xba9	// Read CSR
	li x12, -1
	csrrw x11, 0xba9, x12	// Write all 1s to CSR
	csrrw x11, 0xba9, x0	// Write all 0s to CSR
	csrrw x11, 0xba9, x23	// Restore CSR

// Testing CSR 0xbaa
	csrr x22, 0xbaa	// Read CSR
	li x7, -1
	csrrw x4, 0xbaa, x7	// Write all 1s to CSR
	csrrw x4, 0xbaa, x0	// Write all 0s to CSR
	csrrw x4, 0xbaa, x22	// Restore CSR

// Testing CSR 0xbab
	csrr x23, 0xbab	// Read CSR
	li x30, -1
	csrrw x10, 0xbab, x30	// Write all 1s to CSR
	csrrw x10, 0xbab, x0	// Write all 0s to CSR
	csrrw x10, 0xbab, x23	// Restore CSR

// Testing CSR 0xbac
	csrr x12, 0xbac	// Read CSR
	li x20, -1
	csrrw x2, 0xbac, x20	// Write all 1s to CSR
	csrrw x2, 0xbac, x0	// Write all 0s to CSR
	csrrw x2, 0xbac, x12	// Restore CSR

// Testing CSR 0xbad
	csrr x4, 0xbad	// Read CSR
	li x23, -1
	csrrw x15, 0xbad, x23	// Write all 1s to CSR
	csrrw x15, 0xbad, x0	// Write all 0s to CSR
	csrrw x15, 0xbad, x4	// Restore CSR

// Testing CSR 0xbae
	csrr x28, 0xbae	// Read CSR
	li x21, -1
	csrrw x18, 0xbae, x21	// Write all 1s to CSR
	csrrw x18, 0xbae, x0	// Write all 0s to CSR
	csrrw x18, 0xbae, x28	// Restore CSR

// Testing CSR 0xbaf
	csrr x28, 0xbaf	// Read CSR
	li x21, -1
	csrrw x20, 0xbaf, x21	// Write all 1s to CSR
	csrrw x20, 0xbaf, x0	// Write all 0s to CSR
	csrrw x20, 0xbaf, x28	// Restore CSR

// Testing CSR 0xbb0
	csrr x8, 0xbb0	// Read CSR
	li x1, -1
	csrrw x15, 0xbb0, x1	// Write all 1s to CSR
	csrrw x15, 0xbb0, x0	// Write all 0s to CSR
	csrrw x15, 0xbb0, x8	// Restore CSR

// Testing CSR 0xbb1
	csrr x16, 0xbb1	// Read CSR
	li x3, -1
	csrrw x8, 0xbb1, x3	// Write all 1s to CSR
	csrrw x8, 0xbb1, x0	// Write all 0s to CSR
	csrrw x8, 0xbb1, x16	// Restore CSR

// Testing CSR 0xbb2
	csrr x3, 0xbb2	// Read CSR
	li x7, -1
	csrrw x30, 0xbb2, x7	// Write all 1s to CSR
	csrrw x30, 0xbb2, x0	// Write all 0s to CSR
	csrrw x30, 0xbb2, x3	// Restore CSR

// Testing CSR 0xbb3
	csrr x21, 0xbb3	// Read CSR
	li x31, -1
	csrrw x26, 0xbb3, x31	// Write all 1s to CSR
	csrrw x26, 0xbb3, x0	// Write all 0s to CSR
	csrrw x26, 0xbb3, x21	// Restore CSR

// Testing CSR 0xbb4
	csrr x30, 0xbb4	// Read CSR
	li x20, -1
	csrrw x7, 0xbb4, x20	// Write all 1s to CSR
	csrrw x7, 0xbb4, x0	// Write all 0s to CSR
	csrrw x7, 0xbb4, x30	// Restore CSR

// Testing CSR 0xbb5
	csrr x12, 0xbb5	// Read CSR
	li x10, -1
	csrrw x1, 0xbb5, x10	// Write all 1s to CSR
	csrrw x1, 0xbb5, x0	// Write all 0s to CSR
	csrrw x1, 0xbb5, x12	// Restore CSR

// Testing CSR 0xbb6
	csrr x23, 0xbb6	// Read CSR
	li x9, -1
	csrrw x28, 0xbb6, x9	// Write all 1s to CSR
	csrrw x28, 0xbb6, x0	// Write all 0s to CSR
	csrrw x28, 0xbb6, x23	// Restore CSR

// Testing CSR 0xbb7
	csrr x22, 0xbb7	// Read CSR
	li x1, -1
	csrrw x11, 0xbb7, x1	// Write all 1s to CSR
	csrrw x11, 0xbb7, x0	// Write all 0s to CSR
	csrrw x11, 0xbb7, x22	// Restore CSR

// Testing CSR 0xbb8
	csrr x20, 0xbb8	// Read CSR
	li x2, -1
	csrrw x12, 0xbb8, x2	// Write all 1s to CSR
	csrrw x12, 0xbb8, x0	// Write all 0s to CSR
	csrrw x12, 0xbb8, x20	// Restore CSR

// Testing CSR 0xbb9
	csrr x6, 0xbb9	// Read CSR
	li x14, -1
	csrrw x3, 0xbb9, x14	// Write all 1s to CSR
	csrrw x3, 0xbb9, x0	// Write all 0s to CSR
	csrrw x3, 0xbb9, x6	// Restore CSR

// Testing CSR 0xbba
	csrr x24, 0xbba	// Read CSR
	li x22, -1
	csrrw x14, 0xbba, x22	// Write all 1s to CSR
	csrrw x14, 0xbba, x0	// Write all 0s to CSR
	csrrw x14, 0xbba, x24	// Restore CSR

// Testing CSR 0xbbb
	csrr x30, 0xbbb	// Read CSR
	li x18, -1
	csrrw x29, 0xbbb, x18	// Write all 1s to CSR
	csrrw x29, 0xbbb, x0	// Write all 0s to CSR
	csrrw x29, 0xbbb, x30	// Restore CSR

// Testing CSR 0xbbc
	csrr x23, 0xbbc	// Read CSR
	li x5, -1
	csrrw x22, 0xbbc, x5	// Write all 1s to CSR
	csrrw x22, 0xbbc, x0	// Write all 0s to CSR
	csrrw x22, 0xbbc, x23	// Restore CSR

// Testing CSR 0xbbd
	csrr x15, 0xbbd	// Read CSR
	li x16, -1
	csrrw x18, 0xbbd, x16	// Write all 1s to CSR
	csrrw x18, 0xbbd, x0	// Write all 0s to CSR
	csrrw x18, 0xbbd, x15	// Restore CSR

// Testing CSR 0xbbe
	csrr x22, 0xbbe	// Read CSR
	li x21, -1
	csrrw x11, 0xbbe, x21	// Write all 1s to CSR
	csrrw x11, 0xbbe, x0	// Write all 0s to CSR
	csrrw x11, 0xbbe, x22	// Restore CSR

// Testing CSR 0xbbf
	csrr x1, 0xbbf	// Read CSR
	li x12, -1
	csrrw x3, 0xbbf, x12	// Write all 1s to CSR
	csrrw x3, 0xbbf, x0	// Write all 0s to CSR
	csrrw x3, 0xbbf, x1	// Restore CSR

// Testing CSR 0xbc0
	csrr x15, 0xbc0	// Read CSR
	li x16, -1
	csrrw x23, 0xbc0, x16	// Write all 1s to CSR
	csrrw x23, 0xbc0, x0	// Write all 0s to CSR
	csrrw x23, 0xbc0, x15	// Restore CSR

// Testing CSR 0xbc1
	csrr x1, 0xbc1	// Read CSR
	li x31, -1
	csrrw x8, 0xbc1, x31	// Write all 1s to CSR
	csrrw x8, 0xbc1, x0	// Write all 0s to CSR
	csrrw x8, 0xbc1, x1	// Restore CSR

// Testing CSR 0xbc2
	csrr x17, 0xbc2	// Read CSR
	li x2, -1
	csrrw x22, 0xbc2, x2	// Write all 1s to CSR
	csrrw x22, 0xbc2, x0	// Write all 0s to CSR
	csrrw x22, 0xbc2, x17	// Restore CSR

// Testing CSR 0xbc3
	csrr x4, 0xbc3	// Read CSR
	li x30, -1
	csrrw x13, 0xbc3, x30	// Write all 1s to CSR
	csrrw x13, 0xbc3, x0	// Write all 0s to CSR
	csrrw x13, 0xbc3, x4	// Restore CSR

// Testing CSR 0xbc4
	csrr x4, 0xbc4	// Read CSR
	li x14, -1
	csrrw x5, 0xbc4, x14	// Write all 1s to CSR
	csrrw x5, 0xbc4, x0	// Write all 0s to CSR
	csrrw x5, 0xbc4, x4	// Restore CSR

// Testing CSR 0xbc5
	csrr x28, 0xbc5	// Read CSR
	li x16, -1
	csrrw x19, 0xbc5, x16	// Write all 1s to CSR
	csrrw x19, 0xbc5, x0	// Write all 0s to CSR
	csrrw x19, 0xbc5, x28	// Restore CSR

// Testing CSR 0xbc6
	csrr x19, 0xbc6	// Read CSR
	li x30, -1
	csrrw x10, 0xbc6, x30	// Write all 1s to CSR
	csrrw x10, 0xbc6, x0	// Write all 0s to CSR
	csrrw x10, 0xbc6, x19	// Restore CSR

// Testing CSR 0xbc7
	csrr x19, 0xbc7	// Read CSR
	li x13, -1
	csrrw x1, 0xbc7, x13	// Write all 1s to CSR
	csrrw x1, 0xbc7, x0	// Write all 0s to CSR
	csrrw x1, 0xbc7, x19	// Restore CSR

// Testing CSR 0xbc8
	csrr x28, 0xbc8	// Read CSR
	li x2, -1
	csrrw x18, 0xbc8, x2	// Write all 1s to CSR
	csrrw x18, 0xbc8, x0	// Write all 0s to CSR
	csrrw x18, 0xbc8, x28	// Restore CSR

// Testing CSR 0xbc9
	csrr x19, 0xbc9	// Read CSR
	li x7, -1
	csrrw x30, 0xbc9, x7	// Write all 1s to CSR
	csrrw x30, 0xbc9, x0	// Write all 0s to CSR
	csrrw x30, 0xbc9, x19	// Restore CSR

// Testing CSR 0xbca
	csrr x6, 0xbca	// Read CSR
	li x20, -1
	csrrw x15, 0xbca, x20	// Write all 1s to CSR
	csrrw x15, 0xbca, x0	// Write all 0s to CSR
	csrrw x15, 0xbca, x6	// Restore CSR

// Testing CSR 0xbcb
	csrr x6, 0xbcb	// Read CSR
	li x15, -1
	csrrw x7, 0xbcb, x15	// Write all 1s to CSR
	csrrw x7, 0xbcb, x0	// Write all 0s to CSR
	csrrw x7, 0xbcb, x6	// Restore CSR

// Testing CSR 0xbcc
	csrr x1, 0xbcc	// Read CSR
	li x17, -1
	csrrw x25, 0xbcc, x17	// Write all 1s to CSR
	csrrw x25, 0xbcc, x0	// Write all 0s to CSR
	csrrw x25, 0xbcc, x1	// Restore CSR

// Testing CSR 0xbcd
	csrr x2, 0xbcd	// Read CSR
	li x30, -1
	csrrw x17, 0xbcd, x30	// Write all 1s to CSR
	csrrw x17, 0xbcd, x0	// Write all 0s to CSR
	csrrw x17, 0xbcd, x2	// Restore CSR

// Testing CSR 0xbce
	csrr x16, 0xbce	// Read CSR
	li x29, -1
	csrrw x13, 0xbce, x29	// Write all 1s to CSR
	csrrw x13, 0xbce, x0	// Write all 0s to CSR
	csrrw x13, 0xbce, x16	// Restore CSR

// Testing CSR 0xbcf
	csrr x9, 0xbcf	// Read CSR
	li x27, -1
	csrrw x21, 0xbcf, x27	// Write all 1s to CSR
	csrrw x21, 0xbcf, x0	// Write all 0s to CSR
	csrrw x21, 0xbcf, x9	// Restore CSR

// Testing CSR 0xbd0
	csrr x25, 0xbd0	// Read CSR
	li x30, -1
	csrrw x27, 0xbd0, x30	// Write all 1s to CSR
	csrrw x27, 0xbd0, x0	// Write all 0s to CSR
	csrrw x27, 0xbd0, x25	// Restore CSR

// Testing CSR 0xbd1
	csrr x15, 0xbd1	// Read CSR
	li x11, -1
	csrrw x20, 0xbd1, x11	// Write all 1s to CSR
	csrrw x20, 0xbd1, x0	// Write all 0s to CSR
	csrrw x20, 0xbd1, x15	// Restore CSR

// Testing CSR 0xbd2
	csrr x20, 0xbd2	// Read CSR
	li x18, -1
	csrrw x21, 0xbd2, x18	// Write all 1s to CSR
	csrrw x21, 0xbd2, x0	// Write all 0s to CSR
	csrrw x21, 0xbd2, x20	// Restore CSR

// Testing CSR 0xbd3
	csrr x21, 0xbd3	// Read CSR
	li x4, -1
	csrrw x25, 0xbd3, x4	// Write all 1s to CSR
	csrrw x25, 0xbd3, x0	// Write all 0s to CSR
	csrrw x25, 0xbd3, x21	// Restore CSR

// Testing CSR 0xbd4
	csrr x6, 0xbd4	// Read CSR
	li x19, -1
	csrrw x22, 0xbd4, x19	// Write all 1s to CSR
	csrrw x22, 0xbd4, x0	// Write all 0s to CSR
	csrrw x22, 0xbd4, x6	// Restore CSR

// Testing CSR 0xbd5
	csrr x21, 0xbd5	// Read CSR
	li x24, -1
	csrrw x2, 0xbd5, x24	// Write all 1s to CSR
	csrrw x2, 0xbd5, x0	// Write all 0s to CSR
	csrrw x2, 0xbd5, x21	// Restore CSR

// Testing CSR 0xbd6
	csrr x15, 0xbd6	// Read CSR
	li x16, -1
	csrrw x29, 0xbd6, x16	// Write all 1s to CSR
	csrrw x29, 0xbd6, x0	// Write all 0s to CSR
	csrrw x29, 0xbd6, x15	// Restore CSR

// Testing CSR 0xbd7
	csrr x16, 0xbd7	// Read CSR
	li x9, -1
	csrrw x14, 0xbd7, x9	// Write all 1s to CSR
	csrrw x14, 0xbd7, x0	// Write all 0s to CSR
	csrrw x14, 0xbd7, x16	// Restore CSR

// Testing CSR 0xbd8
	csrr x8, 0xbd8	// Read CSR
	li x25, -1
	csrrw x26, 0xbd8, x25	// Write all 1s to CSR
	csrrw x26, 0xbd8, x0	// Write all 0s to CSR
	csrrw x26, 0xbd8, x8	// Restore CSR

// Testing CSR 0xbd9
	csrr x2, 0xbd9	// Read CSR
	li x30, -1
	csrrw x24, 0xbd9, x30	// Write all 1s to CSR
	csrrw x24, 0xbd9, x0	// Write all 0s to CSR
	csrrw x24, 0xbd9, x2	// Restore CSR

// Testing CSR 0xbda
	csrr x31, 0xbda	// Read CSR
	li x24, -1
	csrrw x11, 0xbda, x24	// Write all 1s to CSR
	csrrw x11, 0xbda, x0	// Write all 0s to CSR
	csrrw x11, 0xbda, x31	// Restore CSR

// Testing CSR 0xbdb
	csrr x13, 0xbdb	// Read CSR
	li x16, -1
	csrrw x8, 0xbdb, x16	// Write all 1s to CSR
	csrrw x8, 0xbdb, x0	// Write all 0s to CSR
	csrrw x8, 0xbdb, x13	// Restore CSR

// Testing CSR 0xbdc
	csrr x20, 0xbdc	// Read CSR
	li x19, -1
	csrrw x1, 0xbdc, x19	// Write all 1s to CSR
	csrrw x1, 0xbdc, x0	// Write all 0s to CSR
	csrrw x1, 0xbdc, x20	// Restore CSR

// Testing CSR 0xbdd
	csrr x18, 0xbdd	// Read CSR
	li x21, -1
	csrrw x31, 0xbdd, x21	// Write all 1s to CSR
	csrrw x31, 0xbdd, x0	// Write all 0s to CSR
	csrrw x31, 0xbdd, x18	// Restore CSR

// Testing CSR 0xbde
	csrr x7, 0xbde	// Read CSR
	li x19, -1
	csrrw x25, 0xbde, x19	// Write all 1s to CSR
	csrrw x25, 0xbde, x0	// Write all 0s to CSR
	csrrw x25, 0xbde, x7	// Restore CSR

// Testing CSR 0xbdf
	csrr x11, 0xbdf	// Read CSR
	li x29, -1
	csrrw x7, 0xbdf, x29	// Write all 1s to CSR
	csrrw x7, 0xbdf, x0	// Write all 0s to CSR
	csrrw x7, 0xbdf, x11	// Restore CSR

// Testing CSR 0xbe0
	csrr x23, 0xbe0	// Read CSR
	li x5, -1
	csrrw x26, 0xbe0, x5	// Write all 1s to CSR
	csrrw x26, 0xbe0, x0	// Write all 0s to CSR
	csrrw x26, 0xbe0, x23	// Restore CSR

// Testing CSR 0xbe1
	csrr x10, 0xbe1	// Read CSR
	li x18, -1
	csrrw x23, 0xbe1, x18	// Write all 1s to CSR
	csrrw x23, 0xbe1, x0	// Write all 0s to CSR
	csrrw x23, 0xbe1, x10	// Restore CSR

// Testing CSR 0xbe2
	csrr x6, 0xbe2	// Read CSR
	li x14, -1
	csrrw x28, 0xbe2, x14	// Write all 1s to CSR
	csrrw x28, 0xbe2, x0	// Write all 0s to CSR
	csrrw x28, 0xbe2, x6	// Restore CSR

// Testing CSR 0xbe3
	csrr x30, 0xbe3	// Read CSR
	li x20, -1
	csrrw x4, 0xbe3, x20	// Write all 1s to CSR
	csrrw x4, 0xbe3, x0	// Write all 0s to CSR
	csrrw x4, 0xbe3, x30	// Restore CSR

// Testing CSR 0xbe4
	csrr x23, 0xbe4	// Read CSR
	li x9, -1
	csrrw x13, 0xbe4, x9	// Write all 1s to CSR
	csrrw x13, 0xbe4, x0	// Write all 0s to CSR
	csrrw x13, 0xbe4, x23	// Restore CSR

// Testing CSR 0xbe5
	csrr x7, 0xbe5	// Read CSR
	li x3, -1
	csrrw x20, 0xbe5, x3	// Write all 1s to CSR
	csrrw x20, 0xbe5, x0	// Write all 0s to CSR
	csrrw x20, 0xbe5, x7	// Restore CSR

// Testing CSR 0xbe6
	csrr x30, 0xbe6	// Read CSR
	li x12, -1
	csrrw x27, 0xbe6, x12	// Write all 1s to CSR
	csrrw x27, 0xbe6, x0	// Write all 0s to CSR
	csrrw x27, 0xbe6, x30	// Restore CSR

// Testing CSR 0xbe7
	csrr x13, 0xbe7	// Read CSR
	li x5, -1
	csrrw x25, 0xbe7, x5	// Write all 1s to CSR
	csrrw x25, 0xbe7, x0	// Write all 0s to CSR
	csrrw x25, 0xbe7, x13	// Restore CSR

// Testing CSR 0xbe8
	csrr x26, 0xbe8	// Read CSR
	li x22, -1
	csrrw x31, 0xbe8, x22	// Write all 1s to CSR
	csrrw x31, 0xbe8, x0	// Write all 0s to CSR
	csrrw x31, 0xbe8, x26	// Restore CSR

// Testing CSR 0xbe9
	csrr x28, 0xbe9	// Read CSR
	li x14, -1
	csrrw x26, 0xbe9, x14	// Write all 1s to CSR
	csrrw x26, 0xbe9, x0	// Write all 0s to CSR
	csrrw x26, 0xbe9, x28	// Restore CSR

// Testing CSR 0xbea
	csrr x18, 0xbea	// Read CSR
	li x16, -1
	csrrw x29, 0xbea, x16	// Write all 1s to CSR
	csrrw x29, 0xbea, x0	// Write all 0s to CSR
	csrrw x29, 0xbea, x18	// Restore CSR

// Testing CSR 0xbeb
	csrr x4, 0xbeb	// Read CSR
	li x9, -1
	csrrw x14, 0xbeb, x9	// Write all 1s to CSR
	csrrw x14, 0xbeb, x0	// Write all 0s to CSR
	csrrw x14, 0xbeb, x4	// Restore CSR

// Testing CSR 0xbec
	csrr x12, 0xbec	// Read CSR
	li x26, -1
	csrrw x28, 0xbec, x26	// Write all 1s to CSR
	csrrw x28, 0xbec, x0	// Write all 0s to CSR
	csrrw x28, 0xbec, x12	// Restore CSR

// Testing CSR 0xbed
	csrr x12, 0xbed	// Read CSR
	li x29, -1
	csrrw x27, 0xbed, x29	// Write all 1s to CSR
	csrrw x27, 0xbed, x0	// Write all 0s to CSR
	csrrw x27, 0xbed, x12	// Restore CSR

// Testing CSR 0xbee
	csrr x25, 0xbee	// Read CSR
	li x13, -1
	csrrw x12, 0xbee, x13	// Write all 1s to CSR
	csrrw x12, 0xbee, x0	// Write all 0s to CSR
	csrrw x12, 0xbee, x25	// Restore CSR

// Testing CSR 0xbef
	csrr x27, 0xbef	// Read CSR
	li x25, -1
	csrrw x14, 0xbef, x25	// Write all 1s to CSR
	csrrw x14, 0xbef, x0	// Write all 0s to CSR
	csrrw x14, 0xbef, x27	// Restore CSR

// Testing CSR 0xbf0
	csrr x22, 0xbf0	// Read CSR
	li x9, -1
	csrrw x1, 0xbf0, x9	// Write all 1s to CSR
	csrrw x1, 0xbf0, x0	// Write all 0s to CSR
	csrrw x1, 0xbf0, x22	// Restore CSR

// Testing CSR 0xbf1
	csrr x7, 0xbf1	// Read CSR
	li x30, -1
	csrrw x15, 0xbf1, x30	// Write all 1s to CSR
	csrrw x15, 0xbf1, x0	// Write all 0s to CSR
	csrrw x15, 0xbf1, x7	// Restore CSR

// Testing CSR 0xbf2
	csrr x12, 0xbf2	// Read CSR
	li x7, -1
	csrrw x3, 0xbf2, x7	// Write all 1s to CSR
	csrrw x3, 0xbf2, x0	// Write all 0s to CSR
	csrrw x3, 0xbf2, x12	// Restore CSR

// Testing CSR 0xbf3
	csrr x11, 0xbf3	// Read CSR
	li x1, -1
	csrrw x13, 0xbf3, x1	// Write all 1s to CSR
	csrrw x13, 0xbf3, x0	// Write all 0s to CSR
	csrrw x13, 0xbf3, x11	// Restore CSR

// Testing CSR 0xbf4
	csrr x28, 0xbf4	// Read CSR
	li x30, -1
	csrrw x14, 0xbf4, x30	// Write all 1s to CSR
	csrrw x14, 0xbf4, x0	// Write all 0s to CSR
	csrrw x14, 0xbf4, x28	// Restore CSR

// Testing CSR 0xbf5
	csrr x7, 0xbf5	// Read CSR
	li x19, -1
	csrrw x14, 0xbf5, x19	// Write all 1s to CSR
	csrrw x14, 0xbf5, x0	// Write all 0s to CSR
	csrrw x14, 0xbf5, x7	// Restore CSR

// Testing CSR 0xbf6
	csrr x8, 0xbf6	// Read CSR
	li x30, -1
	csrrw x21, 0xbf6, x30	// Write all 1s to CSR
	csrrw x21, 0xbf6, x0	// Write all 0s to CSR
	csrrw x21, 0xbf6, x8	// Restore CSR

// Testing CSR 0xbf7
	csrr x21, 0xbf7	// Read CSR
	li x29, -1
	csrrw x24, 0xbf7, x29	// Write all 1s to CSR
	csrrw x24, 0xbf7, x0	// Write all 0s to CSR
	csrrw x24, 0xbf7, x21	// Restore CSR

// Testing CSR 0xbf8
	csrr x23, 0xbf8	// Read CSR
	li x21, -1
	csrrw x22, 0xbf8, x21	// Write all 1s to CSR
	csrrw x22, 0xbf8, x0	// Write all 0s to CSR
	csrrw x22, 0xbf8, x23	// Restore CSR

// Testing CSR 0xbf9
	csrr x14, 0xbf9	// Read CSR
	li x11, -1
	csrrw x4, 0xbf9, x11	// Write all 1s to CSR
	csrrw x4, 0xbf9, x0	// Write all 0s to CSR
	csrrw x4, 0xbf9, x14	// Restore CSR

// Testing CSR 0xbfa
	csrr x1, 0xbfa	// Read CSR
	li x7, -1
	csrrw x21, 0xbfa, x7	// Write all 1s to CSR
	csrrw x21, 0xbfa, x0	// Write all 0s to CSR
	csrrw x21, 0xbfa, x1	// Restore CSR

// Testing CSR 0xbfb
	csrr x10, 0xbfb	// Read CSR
	li x3, -1
	csrrw x7, 0xbfb, x3	// Write all 1s to CSR
	csrrw x7, 0xbfb, x0	// Write all 0s to CSR
	csrrw x7, 0xbfb, x10	// Restore CSR

// Testing CSR 0xbfc
	csrr x10, 0xbfc	// Read CSR
	li x30, -1
	csrrw x3, 0xbfc, x30	// Write all 1s to CSR
	csrrw x3, 0xbfc, x0	// Write all 0s to CSR
	csrrw x3, 0xbfc, x10	// Restore CSR

// Testing CSR 0xbfd
	csrr x7, 0xbfd	// Read CSR
	li x6, -1
	csrrw x8, 0xbfd, x6	// Write all 1s to CSR
	csrrw x8, 0xbfd, x0	// Write all 0s to CSR
	csrrw x8, 0xbfd, x7	// Restore CSR

// Testing CSR 0xbfe
	csrr x19, 0xbfe	// Read CSR
	li x23, -1
	csrrw x25, 0xbfe, x23	// Write all 1s to CSR
	csrrw x25, 0xbfe, x0	// Write all 0s to CSR
	csrrw x25, 0xbfe, x19	// Restore CSR

// Testing CSR 0xbff
	csrr x14, 0xbff	// Read CSR
	li x21, -1
	csrrw x11, 0xbff, x21	// Write all 1s to CSR
	csrrw x11, 0xbff, x0	// Write all 0s to CSR
	csrrw x11, 0xbff, x14	// Restore CSR

// Testing CSR 0xc00
	csrr x10, 0xc00	// Read CSR
	li x29, -1
	csrrw x27, 0xc00, x29	// Write all 1s to CSR
	csrrw x27, 0xc00, x0	// Write all 0s to CSR
	csrrw x27, 0xc00, x10	// Restore CSR

// Testing CSR 0xc01
	csrr x6, 0xc01	// Read CSR
	li x8, -1
	csrrw x21, 0xc01, x8	// Write all 1s to CSR
	csrrw x21, 0xc01, x0	// Write all 0s to CSR
	csrrw x21, 0xc01, x6	// Restore CSR

// Testing CSR 0xc02
	csrr x17, 0xc02	// Read CSR
	li x16, -1
	csrrw x1, 0xc02, x16	// Write all 1s to CSR
	csrrw x1, 0xc02, x0	// Write all 0s to CSR
	csrrw x1, 0xc02, x17	// Restore CSR

// Testing CSR 0xc03
	csrr x25, 0xc03	// Read CSR
	li x5, -1
	csrrw x16, 0xc03, x5	// Write all 1s to CSR
	csrrw x16, 0xc03, x0	// Write all 0s to CSR
	csrrw x16, 0xc03, x25	// Restore CSR

// Testing CSR 0xc04
	csrr x21, 0xc04	// Read CSR
	li x20, -1
	csrrw x3, 0xc04, x20	// Write all 1s to CSR
	csrrw x3, 0xc04, x0	// Write all 0s to CSR
	csrrw x3, 0xc04, x21	// Restore CSR

// Testing CSR 0xc05
	csrr x1, 0xc05	// Read CSR
	li x10, -1
	csrrw x27, 0xc05, x10	// Write all 1s to CSR
	csrrw x27, 0xc05, x0	// Write all 0s to CSR
	csrrw x27, 0xc05, x1	// Restore CSR

// Testing CSR 0xc06
	csrr x15, 0xc06	// Read CSR
	li x24, -1
	csrrw x9, 0xc06, x24	// Write all 1s to CSR
	csrrw x9, 0xc06, x0	// Write all 0s to CSR
	csrrw x9, 0xc06, x15	// Restore CSR

// Testing CSR 0xc07
	csrr x7, 0xc07	// Read CSR
	li x17, -1
	csrrw x31, 0xc07, x17	// Write all 1s to CSR
	csrrw x31, 0xc07, x0	// Write all 0s to CSR
	csrrw x31, 0xc07, x7	// Restore CSR

// Testing CSR 0xc08
	csrr x18, 0xc08	// Read CSR
	li x5, -1
	csrrw x21, 0xc08, x5	// Write all 1s to CSR
	csrrw x21, 0xc08, x0	// Write all 0s to CSR
	csrrw x21, 0xc08, x18	// Restore CSR

// Testing CSR 0xc09
	csrr x28, 0xc09	// Read CSR
	li x27, -1
	csrrw x22, 0xc09, x27	// Write all 1s to CSR
	csrrw x22, 0xc09, x0	// Write all 0s to CSR
	csrrw x22, 0xc09, x28	// Restore CSR

// Testing CSR 0xc0a
	csrr x11, 0xc0a	// Read CSR
	li x10, -1
	csrrw x5, 0xc0a, x10	// Write all 1s to CSR
	csrrw x5, 0xc0a, x0	// Write all 0s to CSR
	csrrw x5, 0xc0a, x11	// Restore CSR

// Testing CSR 0xc0b
	csrr x6, 0xc0b	// Read CSR
	li x25, -1
	csrrw x11, 0xc0b, x25	// Write all 1s to CSR
	csrrw x11, 0xc0b, x0	// Write all 0s to CSR
	csrrw x11, 0xc0b, x6	// Restore CSR

// Testing CSR 0xc0c
	csrr x13, 0xc0c	// Read CSR
	li x31, -1
	csrrw x23, 0xc0c, x31	// Write all 1s to CSR
	csrrw x23, 0xc0c, x0	// Write all 0s to CSR
	csrrw x23, 0xc0c, x13	// Restore CSR

// Testing CSR 0xc0d
	csrr x10, 0xc0d	// Read CSR
	li x12, -1
	csrrw x15, 0xc0d, x12	// Write all 1s to CSR
	csrrw x15, 0xc0d, x0	// Write all 0s to CSR
	csrrw x15, 0xc0d, x10	// Restore CSR

// Testing CSR 0xc0e
	csrr x16, 0xc0e	// Read CSR
	li x28, -1
	csrrw x14, 0xc0e, x28	// Write all 1s to CSR
	csrrw x14, 0xc0e, x0	// Write all 0s to CSR
	csrrw x14, 0xc0e, x16	// Restore CSR

// Testing CSR 0xc0f
	csrr x6, 0xc0f	// Read CSR
	li x20, -1
	csrrw x15, 0xc0f, x20	// Write all 1s to CSR
	csrrw x15, 0xc0f, x0	// Write all 0s to CSR
	csrrw x15, 0xc0f, x6	// Restore CSR

// Testing CSR 0xc10
	csrr x7, 0xc10	// Read CSR
	li x9, -1
	csrrw x25, 0xc10, x9	// Write all 1s to CSR
	csrrw x25, 0xc10, x0	// Write all 0s to CSR
	csrrw x25, 0xc10, x7	// Restore CSR

// Testing CSR 0xc11
	csrr x14, 0xc11	// Read CSR
	li x21, -1
	csrrw x31, 0xc11, x21	// Write all 1s to CSR
	csrrw x31, 0xc11, x0	// Write all 0s to CSR
	csrrw x31, 0xc11, x14	// Restore CSR

// Testing CSR 0xc12
	csrr x27, 0xc12	// Read CSR
	li x14, -1
	csrrw x16, 0xc12, x14	// Write all 1s to CSR
	csrrw x16, 0xc12, x0	// Write all 0s to CSR
	csrrw x16, 0xc12, x27	// Restore CSR

// Testing CSR 0xc13
	csrr x2, 0xc13	// Read CSR
	li x11, -1
	csrrw x29, 0xc13, x11	// Write all 1s to CSR
	csrrw x29, 0xc13, x0	// Write all 0s to CSR
	csrrw x29, 0xc13, x2	// Restore CSR

// Testing CSR 0xc14
	csrr x26, 0xc14	// Read CSR
	li x28, -1
	csrrw x16, 0xc14, x28	// Write all 1s to CSR
	csrrw x16, 0xc14, x0	// Write all 0s to CSR
	csrrw x16, 0xc14, x26	// Restore CSR

// Testing CSR 0xc15
	csrr x11, 0xc15	// Read CSR
	li x21, -1
	csrrw x2, 0xc15, x21	// Write all 1s to CSR
	csrrw x2, 0xc15, x0	// Write all 0s to CSR
	csrrw x2, 0xc15, x11	// Restore CSR

// Testing CSR 0xc16
	csrr x11, 0xc16	// Read CSR
	li x16, -1
	csrrw x12, 0xc16, x16	// Write all 1s to CSR
	csrrw x12, 0xc16, x0	// Write all 0s to CSR
	csrrw x12, 0xc16, x11	// Restore CSR

// Testing CSR 0xc17
	csrr x21, 0xc17	// Read CSR
	li x29, -1
	csrrw x15, 0xc17, x29	// Write all 1s to CSR
	csrrw x15, 0xc17, x0	// Write all 0s to CSR
	csrrw x15, 0xc17, x21	// Restore CSR

// Testing CSR 0xc18
	csrr x3, 0xc18	// Read CSR
	li x24, -1
	csrrw x27, 0xc18, x24	// Write all 1s to CSR
	csrrw x27, 0xc18, x0	// Write all 0s to CSR
	csrrw x27, 0xc18, x3	// Restore CSR

// Testing CSR 0xc19
	csrr x28, 0xc19	// Read CSR
	li x18, -1
	csrrw x10, 0xc19, x18	// Write all 1s to CSR
	csrrw x10, 0xc19, x0	// Write all 0s to CSR
	csrrw x10, 0xc19, x28	// Restore CSR

// Testing CSR 0xc1a
	csrr x21, 0xc1a	// Read CSR
	li x29, -1
	csrrw x10, 0xc1a, x29	// Write all 1s to CSR
	csrrw x10, 0xc1a, x0	// Write all 0s to CSR
	csrrw x10, 0xc1a, x21	// Restore CSR

// Testing CSR 0xc1b
	csrr x20, 0xc1b	// Read CSR
	li x14, -1
	csrrw x28, 0xc1b, x14	// Write all 1s to CSR
	csrrw x28, 0xc1b, x0	// Write all 0s to CSR
	csrrw x28, 0xc1b, x20	// Restore CSR

// Testing CSR 0xc1c
	csrr x11, 0xc1c	// Read CSR
	li x29, -1
	csrrw x21, 0xc1c, x29	// Write all 1s to CSR
	csrrw x21, 0xc1c, x0	// Write all 0s to CSR
	csrrw x21, 0xc1c, x11	// Restore CSR

// Testing CSR 0xc1d
	csrr x21, 0xc1d	// Read CSR
	li x15, -1
	csrrw x4, 0xc1d, x15	// Write all 1s to CSR
	csrrw x4, 0xc1d, x0	// Write all 0s to CSR
	csrrw x4, 0xc1d, x21	// Restore CSR

// Testing CSR 0xc1e
	csrr x12, 0xc1e	// Read CSR
	li x22, -1
	csrrw x15, 0xc1e, x22	// Write all 1s to CSR
	csrrw x15, 0xc1e, x0	// Write all 0s to CSR
	csrrw x15, 0xc1e, x12	// Restore CSR

// Testing CSR 0xc1f
	csrr x21, 0xc1f	// Read CSR
	li x14, -1
	csrrw x18, 0xc1f, x14	// Write all 1s to CSR
	csrrw x18, 0xc1f, x0	// Write all 0s to CSR
	csrrw x18, 0xc1f, x21	// Restore CSR

// Testing CSR 0xc20
	csrr x2, 0xc20	// Read CSR
	li x13, -1
	csrrw x18, 0xc20, x13	// Write all 1s to CSR
	csrrw x18, 0xc20, x0	// Write all 0s to CSR
	csrrw x18, 0xc20, x2	// Restore CSR

// Testing CSR 0xc21
	csrr x12, 0xc21	// Read CSR
	li x21, -1
	csrrw x1, 0xc21, x21	// Write all 1s to CSR
	csrrw x1, 0xc21, x0	// Write all 0s to CSR
	csrrw x1, 0xc21, x12	// Restore CSR

// Testing CSR 0xc22
	csrr x12, 0xc22	// Read CSR
	li x25, -1
	csrrw x29, 0xc22, x25	// Write all 1s to CSR
	csrrw x29, 0xc22, x0	// Write all 0s to CSR
	csrrw x29, 0xc22, x12	// Restore CSR

// Testing CSR 0xc23
	csrr x1, 0xc23	// Read CSR
	li x31, -1
	csrrw x19, 0xc23, x31	// Write all 1s to CSR
	csrrw x19, 0xc23, x0	// Write all 0s to CSR
	csrrw x19, 0xc23, x1	// Restore CSR

// Testing CSR 0xc24
	csrr x16, 0xc24	// Read CSR
	li x31, -1
	csrrw x17, 0xc24, x31	// Write all 1s to CSR
	csrrw x17, 0xc24, x0	// Write all 0s to CSR
	csrrw x17, 0xc24, x16	// Restore CSR

// Testing CSR 0xc25
	csrr x20, 0xc25	// Read CSR
	li x14, -1
	csrrw x8, 0xc25, x14	// Write all 1s to CSR
	csrrw x8, 0xc25, x0	// Write all 0s to CSR
	csrrw x8, 0xc25, x20	// Restore CSR

// Testing CSR 0xc26
	csrr x22, 0xc26	// Read CSR
	li x23, -1
	csrrw x2, 0xc26, x23	// Write all 1s to CSR
	csrrw x2, 0xc26, x0	// Write all 0s to CSR
	csrrw x2, 0xc26, x22	// Restore CSR

// Testing CSR 0xc27
	csrr x10, 0xc27	// Read CSR
	li x17, -1
	csrrw x26, 0xc27, x17	// Write all 1s to CSR
	csrrw x26, 0xc27, x0	// Write all 0s to CSR
	csrrw x26, 0xc27, x10	// Restore CSR

// Testing CSR 0xc28
	csrr x18, 0xc28	// Read CSR
	li x7, -1
	csrrw x20, 0xc28, x7	// Write all 1s to CSR
	csrrw x20, 0xc28, x0	// Write all 0s to CSR
	csrrw x20, 0xc28, x18	// Restore CSR

// Testing CSR 0xc29
	csrr x18, 0xc29	// Read CSR
	li x29, -1
	csrrw x7, 0xc29, x29	// Write all 1s to CSR
	csrrw x7, 0xc29, x0	// Write all 0s to CSR
	csrrw x7, 0xc29, x18	// Restore CSR

// Testing CSR 0xc2a
	csrr x22, 0xc2a	// Read CSR
	li x4, -1
	csrrw x17, 0xc2a, x4	// Write all 1s to CSR
	csrrw x17, 0xc2a, x0	// Write all 0s to CSR
	csrrw x17, 0xc2a, x22	// Restore CSR

// Testing CSR 0xc2b
	csrr x13, 0xc2b	// Read CSR
	li x4, -1
	csrrw x18, 0xc2b, x4	// Write all 1s to CSR
	csrrw x18, 0xc2b, x0	// Write all 0s to CSR
	csrrw x18, 0xc2b, x13	// Restore CSR

// Testing CSR 0xc2c
	csrr x2, 0xc2c	// Read CSR
	li x9, -1
	csrrw x11, 0xc2c, x9	// Write all 1s to CSR
	csrrw x11, 0xc2c, x0	// Write all 0s to CSR
	csrrw x11, 0xc2c, x2	// Restore CSR

// Testing CSR 0xc2d
	csrr x11, 0xc2d	// Read CSR
	li x2, -1
	csrrw x15, 0xc2d, x2	// Write all 1s to CSR
	csrrw x15, 0xc2d, x0	// Write all 0s to CSR
	csrrw x15, 0xc2d, x11	// Restore CSR

// Testing CSR 0xc2e
	csrr x22, 0xc2e	// Read CSR
	li x24, -1
	csrrw x25, 0xc2e, x24	// Write all 1s to CSR
	csrrw x25, 0xc2e, x0	// Write all 0s to CSR
	csrrw x25, 0xc2e, x22	// Restore CSR

// Testing CSR 0xc2f
	csrr x5, 0xc2f	// Read CSR
	li x17, -1
	csrrw x19, 0xc2f, x17	// Write all 1s to CSR
	csrrw x19, 0xc2f, x0	// Write all 0s to CSR
	csrrw x19, 0xc2f, x5	// Restore CSR

// Testing CSR 0xc30
	csrr x1, 0xc30	// Read CSR
	li x20, -1
	csrrw x21, 0xc30, x20	// Write all 1s to CSR
	csrrw x21, 0xc30, x0	// Write all 0s to CSR
	csrrw x21, 0xc30, x1	// Restore CSR

// Testing CSR 0xc31
	csrr x26, 0xc31	// Read CSR
	li x20, -1
	csrrw x14, 0xc31, x20	// Write all 1s to CSR
	csrrw x14, 0xc31, x0	// Write all 0s to CSR
	csrrw x14, 0xc31, x26	// Restore CSR

// Testing CSR 0xc32
	csrr x9, 0xc32	// Read CSR
	li x16, -1
	csrrw x20, 0xc32, x16	// Write all 1s to CSR
	csrrw x20, 0xc32, x0	// Write all 0s to CSR
	csrrw x20, 0xc32, x9	// Restore CSR

// Testing CSR 0xc33
	csrr x24, 0xc33	// Read CSR
	li x18, -1
	csrrw x30, 0xc33, x18	// Write all 1s to CSR
	csrrw x30, 0xc33, x0	// Write all 0s to CSR
	csrrw x30, 0xc33, x24	// Restore CSR

// Testing CSR 0xc34
	csrr x22, 0xc34	// Read CSR
	li x8, -1
	csrrw x10, 0xc34, x8	// Write all 1s to CSR
	csrrw x10, 0xc34, x0	// Write all 0s to CSR
	csrrw x10, 0xc34, x22	// Restore CSR

// Testing CSR 0xc35
	csrr x6, 0xc35	// Read CSR
	li x8, -1
	csrrw x30, 0xc35, x8	// Write all 1s to CSR
	csrrw x30, 0xc35, x0	// Write all 0s to CSR
	csrrw x30, 0xc35, x6	// Restore CSR

// Testing CSR 0xc36
	csrr x7, 0xc36	// Read CSR
	li x31, -1
	csrrw x16, 0xc36, x31	// Write all 1s to CSR
	csrrw x16, 0xc36, x0	// Write all 0s to CSR
	csrrw x16, 0xc36, x7	// Restore CSR

// Testing CSR 0xc37
	csrr x24, 0xc37	// Read CSR
	li x8, -1
	csrrw x25, 0xc37, x8	// Write all 1s to CSR
	csrrw x25, 0xc37, x0	// Write all 0s to CSR
	csrrw x25, 0xc37, x24	// Restore CSR

// Testing CSR 0xc38
	csrr x9, 0xc38	// Read CSR
	li x27, -1
	csrrw x12, 0xc38, x27	// Write all 1s to CSR
	csrrw x12, 0xc38, x0	// Write all 0s to CSR
	csrrw x12, 0xc38, x9	// Restore CSR

// Testing CSR 0xc39
	csrr x7, 0xc39	// Read CSR
	li x30, -1
	csrrw x19, 0xc39, x30	// Write all 1s to CSR
	csrrw x19, 0xc39, x0	// Write all 0s to CSR
	csrrw x19, 0xc39, x7	// Restore CSR

// Testing CSR 0xc3a
	csrr x23, 0xc3a	// Read CSR
	li x11, -1
	csrrw x5, 0xc3a, x11	// Write all 1s to CSR
	csrrw x5, 0xc3a, x0	// Write all 0s to CSR
	csrrw x5, 0xc3a, x23	// Restore CSR

// Testing CSR 0xc3b
	csrr x3, 0xc3b	// Read CSR
	li x26, -1
	csrrw x13, 0xc3b, x26	// Write all 1s to CSR
	csrrw x13, 0xc3b, x0	// Write all 0s to CSR
	csrrw x13, 0xc3b, x3	// Restore CSR

// Testing CSR 0xc3c
	csrr x7, 0xc3c	// Read CSR
	li x25, -1
	csrrw x27, 0xc3c, x25	// Write all 1s to CSR
	csrrw x27, 0xc3c, x0	// Write all 0s to CSR
	csrrw x27, 0xc3c, x7	// Restore CSR

// Testing CSR 0xc3d
	csrr x20, 0xc3d	// Read CSR
	li x27, -1
	csrrw x7, 0xc3d, x27	// Write all 1s to CSR
	csrrw x7, 0xc3d, x0	// Write all 0s to CSR
	csrrw x7, 0xc3d, x20	// Restore CSR

// Testing CSR 0xc3e
	csrr x13, 0xc3e	// Read CSR
	li x28, -1
	csrrw x6, 0xc3e, x28	// Write all 1s to CSR
	csrrw x6, 0xc3e, x0	// Write all 0s to CSR
	csrrw x6, 0xc3e, x13	// Restore CSR

// Testing CSR 0xc3f
	csrr x16, 0xc3f	// Read CSR
	li x23, -1
	csrrw x10, 0xc3f, x23	// Write all 1s to CSR
	csrrw x10, 0xc3f, x0	// Write all 0s to CSR
	csrrw x10, 0xc3f, x16	// Restore CSR

// Testing CSR 0xc40
	csrr x20, 0xc40	// Read CSR
	li x3, -1
	csrrw x30, 0xc40, x3	// Write all 1s to CSR
	csrrw x30, 0xc40, x0	// Write all 0s to CSR
	csrrw x30, 0xc40, x20	// Restore CSR

// Testing CSR 0xc41
	csrr x24, 0xc41	// Read CSR
	li x4, -1
	csrrw x25, 0xc41, x4	// Write all 1s to CSR
	csrrw x25, 0xc41, x0	// Write all 0s to CSR
	csrrw x25, 0xc41, x24	// Restore CSR

// Testing CSR 0xc42
	csrr x23, 0xc42	// Read CSR
	li x10, -1
	csrrw x7, 0xc42, x10	// Write all 1s to CSR
	csrrw x7, 0xc42, x0	// Write all 0s to CSR
	csrrw x7, 0xc42, x23	// Restore CSR

// Testing CSR 0xc43
	csrr x1, 0xc43	// Read CSR
	li x2, -1
	csrrw x12, 0xc43, x2	// Write all 1s to CSR
	csrrw x12, 0xc43, x0	// Write all 0s to CSR
	csrrw x12, 0xc43, x1	// Restore CSR

// Testing CSR 0xc44
	csrr x3, 0xc44	// Read CSR
	li x31, -1
	csrrw x15, 0xc44, x31	// Write all 1s to CSR
	csrrw x15, 0xc44, x0	// Write all 0s to CSR
	csrrw x15, 0xc44, x3	// Restore CSR

// Testing CSR 0xc45
	csrr x10, 0xc45	// Read CSR
	li x13, -1
	csrrw x16, 0xc45, x13	// Write all 1s to CSR
	csrrw x16, 0xc45, x0	// Write all 0s to CSR
	csrrw x16, 0xc45, x10	// Restore CSR

// Testing CSR 0xc46
	csrr x9, 0xc46	// Read CSR
	li x8, -1
	csrrw x22, 0xc46, x8	// Write all 1s to CSR
	csrrw x22, 0xc46, x0	// Write all 0s to CSR
	csrrw x22, 0xc46, x9	// Restore CSR

// Testing CSR 0xc47
	csrr x18, 0xc47	// Read CSR
	li x12, -1
	csrrw x17, 0xc47, x12	// Write all 1s to CSR
	csrrw x17, 0xc47, x0	// Write all 0s to CSR
	csrrw x17, 0xc47, x18	// Restore CSR

// Testing CSR 0xc48
	csrr x30, 0xc48	// Read CSR
	li x20, -1
	csrrw x4, 0xc48, x20	// Write all 1s to CSR
	csrrw x4, 0xc48, x0	// Write all 0s to CSR
	csrrw x4, 0xc48, x30	// Restore CSR

// Testing CSR 0xc49
	csrr x29, 0xc49	// Read CSR
	li x21, -1
	csrrw x11, 0xc49, x21	// Write all 1s to CSR
	csrrw x11, 0xc49, x0	// Write all 0s to CSR
	csrrw x11, 0xc49, x29	// Restore CSR

// Testing CSR 0xc4a
	csrr x13, 0xc4a	// Read CSR
	li x12, -1
	csrrw x4, 0xc4a, x12	// Write all 1s to CSR
	csrrw x4, 0xc4a, x0	// Write all 0s to CSR
	csrrw x4, 0xc4a, x13	// Restore CSR

// Testing CSR 0xc4b
	csrr x18, 0xc4b	// Read CSR
	li x25, -1
	csrrw x29, 0xc4b, x25	// Write all 1s to CSR
	csrrw x29, 0xc4b, x0	// Write all 0s to CSR
	csrrw x29, 0xc4b, x18	// Restore CSR

// Testing CSR 0xc4c
	csrr x5, 0xc4c	// Read CSR
	li x20, -1
	csrrw x16, 0xc4c, x20	// Write all 1s to CSR
	csrrw x16, 0xc4c, x0	// Write all 0s to CSR
	csrrw x16, 0xc4c, x5	// Restore CSR

// Testing CSR 0xc4d
	csrr x20, 0xc4d	// Read CSR
	li x28, -1
	csrrw x19, 0xc4d, x28	// Write all 1s to CSR
	csrrw x19, 0xc4d, x0	// Write all 0s to CSR
	csrrw x19, 0xc4d, x20	// Restore CSR

// Testing CSR 0xc4e
	csrr x29, 0xc4e	// Read CSR
	li x13, -1
	csrrw x17, 0xc4e, x13	// Write all 1s to CSR
	csrrw x17, 0xc4e, x0	// Write all 0s to CSR
	csrrw x17, 0xc4e, x29	// Restore CSR

// Testing CSR 0xc4f
	csrr x12, 0xc4f	// Read CSR
	li x26, -1
	csrrw x9, 0xc4f, x26	// Write all 1s to CSR
	csrrw x9, 0xc4f, x0	// Write all 0s to CSR
	csrrw x9, 0xc4f, x12	// Restore CSR

// Testing CSR 0xc50
	csrr x18, 0xc50	// Read CSR
	li x5, -1
	csrrw x22, 0xc50, x5	// Write all 1s to CSR
	csrrw x22, 0xc50, x0	// Write all 0s to CSR
	csrrw x22, 0xc50, x18	// Restore CSR

// Testing CSR 0xc51
	csrr x5, 0xc51	// Read CSR
	li x26, -1
	csrrw x31, 0xc51, x26	// Write all 1s to CSR
	csrrw x31, 0xc51, x0	// Write all 0s to CSR
	csrrw x31, 0xc51, x5	// Restore CSR

// Testing CSR 0xc52
	csrr x3, 0xc52	// Read CSR
	li x5, -1
	csrrw x9, 0xc52, x5	// Write all 1s to CSR
	csrrw x9, 0xc52, x0	// Write all 0s to CSR
	csrrw x9, 0xc52, x3	// Restore CSR

// Testing CSR 0xc53
	csrr x2, 0xc53	// Read CSR
	li x23, -1
	csrrw x29, 0xc53, x23	// Write all 1s to CSR
	csrrw x29, 0xc53, x0	// Write all 0s to CSR
	csrrw x29, 0xc53, x2	// Restore CSR

// Testing CSR 0xc54
	csrr x21, 0xc54	// Read CSR
	li x8, -1
	csrrw x17, 0xc54, x8	// Write all 1s to CSR
	csrrw x17, 0xc54, x0	// Write all 0s to CSR
	csrrw x17, 0xc54, x21	// Restore CSR

// Testing CSR 0xc55
	csrr x30, 0xc55	// Read CSR
	li x12, -1
	csrrw x24, 0xc55, x12	// Write all 1s to CSR
	csrrw x24, 0xc55, x0	// Write all 0s to CSR
	csrrw x24, 0xc55, x30	// Restore CSR

// Testing CSR 0xc56
	csrr x13, 0xc56	// Read CSR
	li x18, -1
	csrrw x12, 0xc56, x18	// Write all 1s to CSR
	csrrw x12, 0xc56, x0	// Write all 0s to CSR
	csrrw x12, 0xc56, x13	// Restore CSR

// Testing CSR 0xc57
	csrr x31, 0xc57	// Read CSR
	li x28, -1
	csrrw x24, 0xc57, x28	// Write all 1s to CSR
	csrrw x24, 0xc57, x0	// Write all 0s to CSR
	csrrw x24, 0xc57, x31	// Restore CSR

// Testing CSR 0xc58
	csrr x4, 0xc58	// Read CSR
	li x23, -1
	csrrw x24, 0xc58, x23	// Write all 1s to CSR
	csrrw x24, 0xc58, x0	// Write all 0s to CSR
	csrrw x24, 0xc58, x4	// Restore CSR

// Testing CSR 0xc59
	csrr x26, 0xc59	// Read CSR
	li x17, -1
	csrrw x23, 0xc59, x17	// Write all 1s to CSR
	csrrw x23, 0xc59, x0	// Write all 0s to CSR
	csrrw x23, 0xc59, x26	// Restore CSR

// Testing CSR 0xc5a
	csrr x19, 0xc5a	// Read CSR
	li x24, -1
	csrrw x16, 0xc5a, x24	// Write all 1s to CSR
	csrrw x16, 0xc5a, x0	// Write all 0s to CSR
	csrrw x16, 0xc5a, x19	// Restore CSR

// Testing CSR 0xc5b
	csrr x1, 0xc5b	// Read CSR
	li x25, -1
	csrrw x7, 0xc5b, x25	// Write all 1s to CSR
	csrrw x7, 0xc5b, x0	// Write all 0s to CSR
	csrrw x7, 0xc5b, x1	// Restore CSR

// Testing CSR 0xc5c
	csrr x18, 0xc5c	// Read CSR
	li x26, -1
	csrrw x14, 0xc5c, x26	// Write all 1s to CSR
	csrrw x14, 0xc5c, x0	// Write all 0s to CSR
	csrrw x14, 0xc5c, x18	// Restore CSR

// Testing CSR 0xc5d
	csrr x1, 0xc5d	// Read CSR
	li x14, -1
	csrrw x22, 0xc5d, x14	// Write all 1s to CSR
	csrrw x22, 0xc5d, x0	// Write all 0s to CSR
	csrrw x22, 0xc5d, x1	// Restore CSR

// Testing CSR 0xc5e
	csrr x14, 0xc5e	// Read CSR
	li x19, -1
	csrrw x18, 0xc5e, x19	// Write all 1s to CSR
	csrrw x18, 0xc5e, x0	// Write all 0s to CSR
	csrrw x18, 0xc5e, x14	// Restore CSR

// Testing CSR 0xc5f
	csrr x18, 0xc5f	// Read CSR
	li x8, -1
	csrrw x4, 0xc5f, x8	// Write all 1s to CSR
	csrrw x4, 0xc5f, x0	// Write all 0s to CSR
	csrrw x4, 0xc5f, x18	// Restore CSR

// Testing CSR 0xc60
	csrr x3, 0xc60	// Read CSR
	li x28, -1
	csrrw x11, 0xc60, x28	// Write all 1s to CSR
	csrrw x11, 0xc60, x0	// Write all 0s to CSR
	csrrw x11, 0xc60, x3	// Restore CSR

// Testing CSR 0xc61
	csrr x14, 0xc61	// Read CSR
	li x18, -1
	csrrw x10, 0xc61, x18	// Write all 1s to CSR
	csrrw x10, 0xc61, x0	// Write all 0s to CSR
	csrrw x10, 0xc61, x14	// Restore CSR

// Testing CSR 0xc62
	csrr x21, 0xc62	// Read CSR
	li x7, -1
	csrrw x16, 0xc62, x7	// Write all 1s to CSR
	csrrw x16, 0xc62, x0	// Write all 0s to CSR
	csrrw x16, 0xc62, x21	// Restore CSR

// Testing CSR 0xc63
	csrr x15, 0xc63	// Read CSR
	li x6, -1
	csrrw x21, 0xc63, x6	// Write all 1s to CSR
	csrrw x21, 0xc63, x0	// Write all 0s to CSR
	csrrw x21, 0xc63, x15	// Restore CSR

// Testing CSR 0xc64
	csrr x21, 0xc64	// Read CSR
	li x29, -1
	csrrw x22, 0xc64, x29	// Write all 1s to CSR
	csrrw x22, 0xc64, x0	// Write all 0s to CSR
	csrrw x22, 0xc64, x21	// Restore CSR

// Testing CSR 0xc65
	csrr x19, 0xc65	// Read CSR
	li x17, -1
	csrrw x10, 0xc65, x17	// Write all 1s to CSR
	csrrw x10, 0xc65, x0	// Write all 0s to CSR
	csrrw x10, 0xc65, x19	// Restore CSR

// Testing CSR 0xc66
	csrr x18, 0xc66	// Read CSR
	li x16, -1
	csrrw x26, 0xc66, x16	// Write all 1s to CSR
	csrrw x26, 0xc66, x0	// Write all 0s to CSR
	csrrw x26, 0xc66, x18	// Restore CSR

// Testing CSR 0xc67
	csrr x12, 0xc67	// Read CSR
	li x4, -1
	csrrw x27, 0xc67, x4	// Write all 1s to CSR
	csrrw x27, 0xc67, x0	// Write all 0s to CSR
	csrrw x27, 0xc67, x12	// Restore CSR

// Testing CSR 0xc68
	csrr x29, 0xc68	// Read CSR
	li x24, -1
	csrrw x1, 0xc68, x24	// Write all 1s to CSR
	csrrw x1, 0xc68, x0	// Write all 0s to CSR
	csrrw x1, 0xc68, x29	// Restore CSR

// Testing CSR 0xc69
	csrr x11, 0xc69	// Read CSR
	li x25, -1
	csrrw x12, 0xc69, x25	// Write all 1s to CSR
	csrrw x12, 0xc69, x0	// Write all 0s to CSR
	csrrw x12, 0xc69, x11	// Restore CSR

// Testing CSR 0xc6a
	csrr x15, 0xc6a	// Read CSR
	li x5, -1
	csrrw x18, 0xc6a, x5	// Write all 1s to CSR
	csrrw x18, 0xc6a, x0	// Write all 0s to CSR
	csrrw x18, 0xc6a, x15	// Restore CSR

// Testing CSR 0xc6b
	csrr x9, 0xc6b	// Read CSR
	li x2, -1
	csrrw x3, 0xc6b, x2	// Write all 1s to CSR
	csrrw x3, 0xc6b, x0	// Write all 0s to CSR
	csrrw x3, 0xc6b, x9	// Restore CSR

// Testing CSR 0xc6c
	csrr x31, 0xc6c	// Read CSR
	li x15, -1
	csrrw x6, 0xc6c, x15	// Write all 1s to CSR
	csrrw x6, 0xc6c, x0	// Write all 0s to CSR
	csrrw x6, 0xc6c, x31	// Restore CSR

// Testing CSR 0xc6d
	csrr x26, 0xc6d	// Read CSR
	li x27, -1
	csrrw x16, 0xc6d, x27	// Write all 1s to CSR
	csrrw x16, 0xc6d, x0	// Write all 0s to CSR
	csrrw x16, 0xc6d, x26	// Restore CSR

// Testing CSR 0xc6e
	csrr x21, 0xc6e	// Read CSR
	li x29, -1
	csrrw x10, 0xc6e, x29	// Write all 1s to CSR
	csrrw x10, 0xc6e, x0	// Write all 0s to CSR
	csrrw x10, 0xc6e, x21	// Restore CSR

// Testing CSR 0xc6f
	csrr x21, 0xc6f	// Read CSR
	li x17, -1
	csrrw x5, 0xc6f, x17	// Write all 1s to CSR
	csrrw x5, 0xc6f, x0	// Write all 0s to CSR
	csrrw x5, 0xc6f, x21	// Restore CSR

// Testing CSR 0xc70
	csrr x6, 0xc70	// Read CSR
	li x19, -1
	csrrw x3, 0xc70, x19	// Write all 1s to CSR
	csrrw x3, 0xc70, x0	// Write all 0s to CSR
	csrrw x3, 0xc70, x6	// Restore CSR

// Testing CSR 0xc71
	csrr x22, 0xc71	// Read CSR
	li x8, -1
	csrrw x30, 0xc71, x8	// Write all 1s to CSR
	csrrw x30, 0xc71, x0	// Write all 0s to CSR
	csrrw x30, 0xc71, x22	// Restore CSR

// Testing CSR 0xc72
	csrr x17, 0xc72	// Read CSR
	li x22, -1
	csrrw x23, 0xc72, x22	// Write all 1s to CSR
	csrrw x23, 0xc72, x0	// Write all 0s to CSR
	csrrw x23, 0xc72, x17	// Restore CSR

// Testing CSR 0xc73
	csrr x6, 0xc73	// Read CSR
	li x15, -1
	csrrw x2, 0xc73, x15	// Write all 1s to CSR
	csrrw x2, 0xc73, x0	// Write all 0s to CSR
	csrrw x2, 0xc73, x6	// Restore CSR

// Testing CSR 0xc74
	csrr x4, 0xc74	// Read CSR
	li x26, -1
	csrrw x17, 0xc74, x26	// Write all 1s to CSR
	csrrw x17, 0xc74, x0	// Write all 0s to CSR
	csrrw x17, 0xc74, x4	// Restore CSR

// Testing CSR 0xc75
	csrr x12, 0xc75	// Read CSR
	li x25, -1
	csrrw x11, 0xc75, x25	// Write all 1s to CSR
	csrrw x11, 0xc75, x0	// Write all 0s to CSR
	csrrw x11, 0xc75, x12	// Restore CSR

// Testing CSR 0xc76
	csrr x14, 0xc76	// Read CSR
	li x12, -1
	csrrw x8, 0xc76, x12	// Write all 1s to CSR
	csrrw x8, 0xc76, x0	// Write all 0s to CSR
	csrrw x8, 0xc76, x14	// Restore CSR

// Testing CSR 0xc77
	csrr x30, 0xc77	// Read CSR
	li x4, -1
	csrrw x27, 0xc77, x4	// Write all 1s to CSR
	csrrw x27, 0xc77, x0	// Write all 0s to CSR
	csrrw x27, 0xc77, x30	// Restore CSR

// Testing CSR 0xc78
	csrr x14, 0xc78	// Read CSR
	li x26, -1
	csrrw x24, 0xc78, x26	// Write all 1s to CSR
	csrrw x24, 0xc78, x0	// Write all 0s to CSR
	csrrw x24, 0xc78, x14	// Restore CSR

// Testing CSR 0xc79
	csrr x16, 0xc79	// Read CSR
	li x24, -1
	csrrw x20, 0xc79, x24	// Write all 1s to CSR
	csrrw x20, 0xc79, x0	// Write all 0s to CSR
	csrrw x20, 0xc79, x16	// Restore CSR

// Testing CSR 0xc7a
	csrr x19, 0xc7a	// Read CSR
	li x17, -1
	csrrw x29, 0xc7a, x17	// Write all 1s to CSR
	csrrw x29, 0xc7a, x0	// Write all 0s to CSR
	csrrw x29, 0xc7a, x19	// Restore CSR

// Testing CSR 0xc7b
	csrr x3, 0xc7b	// Read CSR
	li x31, -1
	csrrw x19, 0xc7b, x31	// Write all 1s to CSR
	csrrw x19, 0xc7b, x0	// Write all 0s to CSR
	csrrw x19, 0xc7b, x3	// Restore CSR

// Testing CSR 0xc7c
	csrr x20, 0xc7c	// Read CSR
	li x23, -1
	csrrw x19, 0xc7c, x23	// Write all 1s to CSR
	csrrw x19, 0xc7c, x0	// Write all 0s to CSR
	csrrw x19, 0xc7c, x20	// Restore CSR

// Testing CSR 0xc7d
	csrr x15, 0xc7d	// Read CSR
	li x31, -1
	csrrw x10, 0xc7d, x31	// Write all 1s to CSR
	csrrw x10, 0xc7d, x0	// Write all 0s to CSR
	csrrw x10, 0xc7d, x15	// Restore CSR

// Testing CSR 0xc7e
	csrr x1, 0xc7e	// Read CSR
	li x11, -1
	csrrw x18, 0xc7e, x11	// Write all 1s to CSR
	csrrw x18, 0xc7e, x0	// Write all 0s to CSR
	csrrw x18, 0xc7e, x1	// Restore CSR

// Testing CSR 0xc7f
	csrr x16, 0xc7f	// Read CSR
	li x4, -1
	csrrw x22, 0xc7f, x4	// Write all 1s to CSR
	csrrw x22, 0xc7f, x0	// Write all 0s to CSR
	csrrw x22, 0xc7f, x16	// Restore CSR

// Testing CSR 0xc80
	csrr x27, 0xc80	// Read CSR
	li x22, -1
	csrrw x30, 0xc80, x22	// Write all 1s to CSR
	csrrw x30, 0xc80, x0	// Write all 0s to CSR
	csrrw x30, 0xc80, x27	// Restore CSR

// Testing CSR 0xc81
	csrr x26, 0xc81	// Read CSR
	li x18, -1
	csrrw x24, 0xc81, x18	// Write all 1s to CSR
	csrrw x24, 0xc81, x0	// Write all 0s to CSR
	csrrw x24, 0xc81, x26	// Restore CSR

// Testing CSR 0xc82
	csrr x10, 0xc82	// Read CSR
	li x28, -1
	csrrw x29, 0xc82, x28	// Write all 1s to CSR
	csrrw x29, 0xc82, x0	// Write all 0s to CSR
	csrrw x29, 0xc82, x10	// Restore CSR

// Testing CSR 0xc83
	csrr x30, 0xc83	// Read CSR
	li x4, -1
	csrrw x20, 0xc83, x4	// Write all 1s to CSR
	csrrw x20, 0xc83, x0	// Write all 0s to CSR
	csrrw x20, 0xc83, x30	// Restore CSR

// Testing CSR 0xc84
	csrr x26, 0xc84	// Read CSR
	li x12, -1
	csrrw x2, 0xc84, x12	// Write all 1s to CSR
	csrrw x2, 0xc84, x0	// Write all 0s to CSR
	csrrw x2, 0xc84, x26	// Restore CSR

// Testing CSR 0xc85
	csrr x30, 0xc85	// Read CSR
	li x25, -1
	csrrw x19, 0xc85, x25	// Write all 1s to CSR
	csrrw x19, 0xc85, x0	// Write all 0s to CSR
	csrrw x19, 0xc85, x30	// Restore CSR

// Testing CSR 0xc86
	csrr x25, 0xc86	// Read CSR
	li x6, -1
	csrrw x26, 0xc86, x6	// Write all 1s to CSR
	csrrw x26, 0xc86, x0	// Write all 0s to CSR
	csrrw x26, 0xc86, x25	// Restore CSR

// Testing CSR 0xc87
	csrr x10, 0xc87	// Read CSR
	li x22, -1
	csrrw x28, 0xc87, x22	// Write all 1s to CSR
	csrrw x28, 0xc87, x0	// Write all 0s to CSR
	csrrw x28, 0xc87, x10	// Restore CSR

// Testing CSR 0xc88
	csrr x6, 0xc88	// Read CSR
	li x11, -1
	csrrw x27, 0xc88, x11	// Write all 1s to CSR
	csrrw x27, 0xc88, x0	// Write all 0s to CSR
	csrrw x27, 0xc88, x6	// Restore CSR

// Testing CSR 0xc89
	csrr x16, 0xc89	// Read CSR
	li x8, -1
	csrrw x13, 0xc89, x8	// Write all 1s to CSR
	csrrw x13, 0xc89, x0	// Write all 0s to CSR
	csrrw x13, 0xc89, x16	// Restore CSR

// Testing CSR 0xc8a
	csrr x27, 0xc8a	// Read CSR
	li x11, -1
	csrrw x21, 0xc8a, x11	// Write all 1s to CSR
	csrrw x21, 0xc8a, x0	// Write all 0s to CSR
	csrrw x21, 0xc8a, x27	// Restore CSR

// Testing CSR 0xc8b
	csrr x31, 0xc8b	// Read CSR
	li x27, -1
	csrrw x23, 0xc8b, x27	// Write all 1s to CSR
	csrrw x23, 0xc8b, x0	// Write all 0s to CSR
	csrrw x23, 0xc8b, x31	// Restore CSR

// Testing CSR 0xc8c
	csrr x18, 0xc8c	// Read CSR
	li x27, -1
	csrrw x1, 0xc8c, x27	// Write all 1s to CSR
	csrrw x1, 0xc8c, x0	// Write all 0s to CSR
	csrrw x1, 0xc8c, x18	// Restore CSR

// Testing CSR 0xc8d
	csrr x12, 0xc8d	// Read CSR
	li x30, -1
	csrrw x11, 0xc8d, x30	// Write all 1s to CSR
	csrrw x11, 0xc8d, x0	// Write all 0s to CSR
	csrrw x11, 0xc8d, x12	// Restore CSR

// Testing CSR 0xc8e
	csrr x19, 0xc8e	// Read CSR
	li x29, -1
	csrrw x15, 0xc8e, x29	// Write all 1s to CSR
	csrrw x15, 0xc8e, x0	// Write all 0s to CSR
	csrrw x15, 0xc8e, x19	// Restore CSR

// Testing CSR 0xc8f
	csrr x7, 0xc8f	// Read CSR
	li x15, -1
	csrrw x14, 0xc8f, x15	// Write all 1s to CSR
	csrrw x14, 0xc8f, x0	// Write all 0s to CSR
	csrrw x14, 0xc8f, x7	// Restore CSR

// Testing CSR 0xc90
	csrr x19, 0xc90	// Read CSR
	li x24, -1
	csrrw x26, 0xc90, x24	// Write all 1s to CSR
	csrrw x26, 0xc90, x0	// Write all 0s to CSR
	csrrw x26, 0xc90, x19	// Restore CSR

// Testing CSR 0xc91
	csrr x19, 0xc91	// Read CSR
	li x11, -1
	csrrw x14, 0xc91, x11	// Write all 1s to CSR
	csrrw x14, 0xc91, x0	// Write all 0s to CSR
	csrrw x14, 0xc91, x19	// Restore CSR

// Testing CSR 0xc92
	csrr x14, 0xc92	// Read CSR
	li x16, -1
	csrrw x7, 0xc92, x16	// Write all 1s to CSR
	csrrw x7, 0xc92, x0	// Write all 0s to CSR
	csrrw x7, 0xc92, x14	// Restore CSR

// Testing CSR 0xc93
	csrr x6, 0xc93	// Read CSR
	li x16, -1
	csrrw x2, 0xc93, x16	// Write all 1s to CSR
	csrrw x2, 0xc93, x0	// Write all 0s to CSR
	csrrw x2, 0xc93, x6	// Restore CSR

// Testing CSR 0xc94
	csrr x25, 0xc94	// Read CSR
	li x7, -1
	csrrw x2, 0xc94, x7	// Write all 1s to CSR
	csrrw x2, 0xc94, x0	// Write all 0s to CSR
	csrrw x2, 0xc94, x25	// Restore CSR

// Testing CSR 0xc95
	csrr x16, 0xc95	// Read CSR
	li x28, -1
	csrrw x1, 0xc95, x28	// Write all 1s to CSR
	csrrw x1, 0xc95, x0	// Write all 0s to CSR
	csrrw x1, 0xc95, x16	// Restore CSR

// Testing CSR 0xc96
	csrr x6, 0xc96	// Read CSR
	li x4, -1
	csrrw x17, 0xc96, x4	// Write all 1s to CSR
	csrrw x17, 0xc96, x0	// Write all 0s to CSR
	csrrw x17, 0xc96, x6	// Restore CSR

// Testing CSR 0xc97
	csrr x7, 0xc97	// Read CSR
	li x22, -1
	csrrw x24, 0xc97, x22	// Write all 1s to CSR
	csrrw x24, 0xc97, x0	// Write all 0s to CSR
	csrrw x24, 0xc97, x7	// Restore CSR

// Testing CSR 0xc98
	csrr x4, 0xc98	// Read CSR
	li x22, -1
	csrrw x28, 0xc98, x22	// Write all 1s to CSR
	csrrw x28, 0xc98, x0	// Write all 0s to CSR
	csrrw x28, 0xc98, x4	// Restore CSR

// Testing CSR 0xc99
	csrr x14, 0xc99	// Read CSR
	li x7, -1
	csrrw x17, 0xc99, x7	// Write all 1s to CSR
	csrrw x17, 0xc99, x0	// Write all 0s to CSR
	csrrw x17, 0xc99, x14	// Restore CSR

// Testing CSR 0xc9a
	csrr x29, 0xc9a	// Read CSR
	li x1, -1
	csrrw x6, 0xc9a, x1	// Write all 1s to CSR
	csrrw x6, 0xc9a, x0	// Write all 0s to CSR
	csrrw x6, 0xc9a, x29	// Restore CSR

// Testing CSR 0xc9b
	csrr x13, 0xc9b	// Read CSR
	li x6, -1
	csrrw x4, 0xc9b, x6	// Write all 1s to CSR
	csrrw x4, 0xc9b, x0	// Write all 0s to CSR
	csrrw x4, 0xc9b, x13	// Restore CSR

// Testing CSR 0xc9c
	csrr x14, 0xc9c	// Read CSR
	li x28, -1
	csrrw x11, 0xc9c, x28	// Write all 1s to CSR
	csrrw x11, 0xc9c, x0	// Write all 0s to CSR
	csrrw x11, 0xc9c, x14	// Restore CSR

// Testing CSR 0xc9d
	csrr x17, 0xc9d	// Read CSR
	li x25, -1
	csrrw x8, 0xc9d, x25	// Write all 1s to CSR
	csrrw x8, 0xc9d, x0	// Write all 0s to CSR
	csrrw x8, 0xc9d, x17	// Restore CSR

// Testing CSR 0xc9e
	csrr x22, 0xc9e	// Read CSR
	li x15, -1
	csrrw x2, 0xc9e, x15	// Write all 1s to CSR
	csrrw x2, 0xc9e, x0	// Write all 0s to CSR
	csrrw x2, 0xc9e, x22	// Restore CSR

// Testing CSR 0xc9f
	csrr x4, 0xc9f	// Read CSR
	li x17, -1
	csrrw x7, 0xc9f, x17	// Write all 1s to CSR
	csrrw x7, 0xc9f, x0	// Write all 0s to CSR
	csrrw x7, 0xc9f, x4	// Restore CSR

// Testing CSR 0xca0
	csrr x4, 0xca0	// Read CSR
	li x31, -1
	csrrw x18, 0xca0, x31	// Write all 1s to CSR
	csrrw x18, 0xca0, x0	// Write all 0s to CSR
	csrrw x18, 0xca0, x4	// Restore CSR

// Testing CSR 0xca1
	csrr x23, 0xca1	// Read CSR
	li x3, -1
	csrrw x20, 0xca1, x3	// Write all 1s to CSR
	csrrw x20, 0xca1, x0	// Write all 0s to CSR
	csrrw x20, 0xca1, x23	// Restore CSR

// Testing CSR 0xca2
	csrr x3, 0xca2	// Read CSR
	li x1, -1
	csrrw x31, 0xca2, x1	// Write all 1s to CSR
	csrrw x31, 0xca2, x0	// Write all 0s to CSR
	csrrw x31, 0xca2, x3	// Restore CSR

// Testing CSR 0xca3
	csrr x30, 0xca3	// Read CSR
	li x6, -1
	csrrw x9, 0xca3, x6	// Write all 1s to CSR
	csrrw x9, 0xca3, x0	// Write all 0s to CSR
	csrrw x9, 0xca3, x30	// Restore CSR

// Testing CSR 0xca4
	csrr x30, 0xca4	// Read CSR
	li x15, -1
	csrrw x19, 0xca4, x15	// Write all 1s to CSR
	csrrw x19, 0xca4, x0	// Write all 0s to CSR
	csrrw x19, 0xca4, x30	// Restore CSR

// Testing CSR 0xca5
	csrr x17, 0xca5	// Read CSR
	li x30, -1
	csrrw x5, 0xca5, x30	// Write all 1s to CSR
	csrrw x5, 0xca5, x0	// Write all 0s to CSR
	csrrw x5, 0xca5, x17	// Restore CSR

// Testing CSR 0xca6
	csrr x10, 0xca6	// Read CSR
	li x22, -1
	csrrw x27, 0xca6, x22	// Write all 1s to CSR
	csrrw x27, 0xca6, x0	// Write all 0s to CSR
	csrrw x27, 0xca6, x10	// Restore CSR

// Testing CSR 0xca7
	csrr x19, 0xca7	// Read CSR
	li x8, -1
	csrrw x20, 0xca7, x8	// Write all 1s to CSR
	csrrw x20, 0xca7, x0	// Write all 0s to CSR
	csrrw x20, 0xca7, x19	// Restore CSR

// Testing CSR 0xca8
	csrr x11, 0xca8	// Read CSR
	li x9, -1
	csrrw x25, 0xca8, x9	// Write all 1s to CSR
	csrrw x25, 0xca8, x0	// Write all 0s to CSR
	csrrw x25, 0xca8, x11	// Restore CSR

// Testing CSR 0xca9
	csrr x5, 0xca9	// Read CSR
	li x30, -1
	csrrw x24, 0xca9, x30	// Write all 1s to CSR
	csrrw x24, 0xca9, x0	// Write all 0s to CSR
	csrrw x24, 0xca9, x5	// Restore CSR

// Testing CSR 0xcaa
	csrr x21, 0xcaa	// Read CSR
	li x16, -1
	csrrw x6, 0xcaa, x16	// Write all 1s to CSR
	csrrw x6, 0xcaa, x0	// Write all 0s to CSR
	csrrw x6, 0xcaa, x21	// Restore CSR

// Testing CSR 0xcab
	csrr x11, 0xcab	// Read CSR
	li x30, -1
	csrrw x22, 0xcab, x30	// Write all 1s to CSR
	csrrw x22, 0xcab, x0	// Write all 0s to CSR
	csrrw x22, 0xcab, x11	// Restore CSR

// Testing CSR 0xcac
	csrr x7, 0xcac	// Read CSR
	li x8, -1
	csrrw x5, 0xcac, x8	// Write all 1s to CSR
	csrrw x5, 0xcac, x0	// Write all 0s to CSR
	csrrw x5, 0xcac, x7	// Restore CSR

// Testing CSR 0xcad
	csrr x24, 0xcad	// Read CSR
	li x20, -1
	csrrw x30, 0xcad, x20	// Write all 1s to CSR
	csrrw x30, 0xcad, x0	// Write all 0s to CSR
	csrrw x30, 0xcad, x24	// Restore CSR

// Testing CSR 0xcae
	csrr x13, 0xcae	// Read CSR
	li x16, -1
	csrrw x2, 0xcae, x16	// Write all 1s to CSR
	csrrw x2, 0xcae, x0	// Write all 0s to CSR
	csrrw x2, 0xcae, x13	// Restore CSR

// Testing CSR 0xcaf
	csrr x19, 0xcaf	// Read CSR
	li x6, -1
	csrrw x20, 0xcaf, x6	// Write all 1s to CSR
	csrrw x20, 0xcaf, x0	// Write all 0s to CSR
	csrrw x20, 0xcaf, x19	// Restore CSR

// Testing CSR 0xcb0
	csrr x26, 0xcb0	// Read CSR
	li x1, -1
	csrrw x10, 0xcb0, x1	// Write all 1s to CSR
	csrrw x10, 0xcb0, x0	// Write all 0s to CSR
	csrrw x10, 0xcb0, x26	// Restore CSR

// Testing CSR 0xcb1
	csrr x4, 0xcb1	// Read CSR
	li x27, -1
	csrrw x2, 0xcb1, x27	// Write all 1s to CSR
	csrrw x2, 0xcb1, x0	// Write all 0s to CSR
	csrrw x2, 0xcb1, x4	// Restore CSR

// Testing CSR 0xcb2
	csrr x14, 0xcb2	// Read CSR
	li x2, -1
	csrrw x5, 0xcb2, x2	// Write all 1s to CSR
	csrrw x5, 0xcb2, x0	// Write all 0s to CSR
	csrrw x5, 0xcb2, x14	// Restore CSR

// Testing CSR 0xcb3
	csrr x7, 0xcb3	// Read CSR
	li x30, -1
	csrrw x10, 0xcb3, x30	// Write all 1s to CSR
	csrrw x10, 0xcb3, x0	// Write all 0s to CSR
	csrrw x10, 0xcb3, x7	// Restore CSR

// Testing CSR 0xcb4
	csrr x3, 0xcb4	// Read CSR
	li x22, -1
	csrrw x7, 0xcb4, x22	// Write all 1s to CSR
	csrrw x7, 0xcb4, x0	// Write all 0s to CSR
	csrrw x7, 0xcb4, x3	// Restore CSR

// Testing CSR 0xcb5
	csrr x1, 0xcb5	// Read CSR
	li x19, -1
	csrrw x15, 0xcb5, x19	// Write all 1s to CSR
	csrrw x15, 0xcb5, x0	// Write all 0s to CSR
	csrrw x15, 0xcb5, x1	// Restore CSR

// Testing CSR 0xcb6
	csrr x13, 0xcb6	// Read CSR
	li x14, -1
	csrrw x22, 0xcb6, x14	// Write all 1s to CSR
	csrrw x22, 0xcb6, x0	// Write all 0s to CSR
	csrrw x22, 0xcb6, x13	// Restore CSR

// Testing CSR 0xcb7
	csrr x16, 0xcb7	// Read CSR
	li x7, -1
	csrrw x9, 0xcb7, x7	// Write all 1s to CSR
	csrrw x9, 0xcb7, x0	// Write all 0s to CSR
	csrrw x9, 0xcb7, x16	// Restore CSR

// Testing CSR 0xcb8
	csrr x23, 0xcb8	// Read CSR
	li x22, -1
	csrrw x3, 0xcb8, x22	// Write all 1s to CSR
	csrrw x3, 0xcb8, x0	// Write all 0s to CSR
	csrrw x3, 0xcb8, x23	// Restore CSR

// Testing CSR 0xcb9
	csrr x23, 0xcb9	// Read CSR
	li x12, -1
	csrrw x16, 0xcb9, x12	// Write all 1s to CSR
	csrrw x16, 0xcb9, x0	// Write all 0s to CSR
	csrrw x16, 0xcb9, x23	// Restore CSR

// Testing CSR 0xcba
	csrr x14, 0xcba	// Read CSR
	li x11, -1
	csrrw x20, 0xcba, x11	// Write all 1s to CSR
	csrrw x20, 0xcba, x0	// Write all 0s to CSR
	csrrw x20, 0xcba, x14	// Restore CSR

// Testing CSR 0xcbb
	csrr x28, 0xcbb	// Read CSR
	li x1, -1
	csrrw x22, 0xcbb, x1	// Write all 1s to CSR
	csrrw x22, 0xcbb, x0	// Write all 0s to CSR
	csrrw x22, 0xcbb, x28	// Restore CSR

// Testing CSR 0xcbc
	csrr x2, 0xcbc	// Read CSR
	li x28, -1
	csrrw x4, 0xcbc, x28	// Write all 1s to CSR
	csrrw x4, 0xcbc, x0	// Write all 0s to CSR
	csrrw x4, 0xcbc, x2	// Restore CSR

// Testing CSR 0xcbd
	csrr x19, 0xcbd	// Read CSR
	li x20, -1
	csrrw x16, 0xcbd, x20	// Write all 1s to CSR
	csrrw x16, 0xcbd, x0	// Write all 0s to CSR
	csrrw x16, 0xcbd, x19	// Restore CSR

// Testing CSR 0xcbe
	csrr x15, 0xcbe	// Read CSR
	li x7, -1
	csrrw x23, 0xcbe, x7	// Write all 1s to CSR
	csrrw x23, 0xcbe, x0	// Write all 0s to CSR
	csrrw x23, 0xcbe, x15	// Restore CSR

// Testing CSR 0xcbf
	csrr x28, 0xcbf	// Read CSR
	li x15, -1
	csrrw x17, 0xcbf, x15	// Write all 1s to CSR
	csrrw x17, 0xcbf, x0	// Write all 0s to CSR
	csrrw x17, 0xcbf, x28	// Restore CSR

// Testing CSR 0xcc0
	csrr x1, 0xcc0	// Read CSR
	li x9, -1
	csrrw x8, 0xcc0, x9	// Write all 1s to CSR
	csrrw x8, 0xcc0, x0	// Write all 0s to CSR
	csrrw x8, 0xcc0, x1	// Restore CSR

// Testing CSR 0xcc1
	csrr x2, 0xcc1	// Read CSR
	li x30, -1
	csrrw x8, 0xcc1, x30	// Write all 1s to CSR
	csrrw x8, 0xcc1, x0	// Write all 0s to CSR
	csrrw x8, 0xcc1, x2	// Restore CSR

// Testing CSR 0xcc2
	csrr x27, 0xcc2	// Read CSR
	li x25, -1
	csrrw x30, 0xcc2, x25	// Write all 1s to CSR
	csrrw x30, 0xcc2, x0	// Write all 0s to CSR
	csrrw x30, 0xcc2, x27	// Restore CSR

// Testing CSR 0xcc3
	csrr x11, 0xcc3	// Read CSR
	li x26, -1
	csrrw x24, 0xcc3, x26	// Write all 1s to CSR
	csrrw x24, 0xcc3, x0	// Write all 0s to CSR
	csrrw x24, 0xcc3, x11	// Restore CSR

// Testing CSR 0xcc4
	csrr x17, 0xcc4	// Read CSR
	li x9, -1
	csrrw x25, 0xcc4, x9	// Write all 1s to CSR
	csrrw x25, 0xcc4, x0	// Write all 0s to CSR
	csrrw x25, 0xcc4, x17	// Restore CSR

// Testing CSR 0xcc5
	csrr x2, 0xcc5	// Read CSR
	li x31, -1
	csrrw x13, 0xcc5, x31	// Write all 1s to CSR
	csrrw x13, 0xcc5, x0	// Write all 0s to CSR
	csrrw x13, 0xcc5, x2	// Restore CSR

// Testing CSR 0xcc6
	csrr x12, 0xcc6	// Read CSR
	li x23, -1
	csrrw x7, 0xcc6, x23	// Write all 1s to CSR
	csrrw x7, 0xcc6, x0	// Write all 0s to CSR
	csrrw x7, 0xcc6, x12	// Restore CSR

// Testing CSR 0xcc7
	csrr x8, 0xcc7	// Read CSR
	li x30, -1
	csrrw x7, 0xcc7, x30	// Write all 1s to CSR
	csrrw x7, 0xcc7, x0	// Write all 0s to CSR
	csrrw x7, 0xcc7, x8	// Restore CSR

// Testing CSR 0xcc8
	csrr x11, 0xcc8	// Read CSR
	li x1, -1
	csrrw x20, 0xcc8, x1	// Write all 1s to CSR
	csrrw x20, 0xcc8, x0	// Write all 0s to CSR
	csrrw x20, 0xcc8, x11	// Restore CSR

// Testing CSR 0xcc9
	csrr x23, 0xcc9	// Read CSR
	li x4, -1
	csrrw x2, 0xcc9, x4	// Write all 1s to CSR
	csrrw x2, 0xcc9, x0	// Write all 0s to CSR
	csrrw x2, 0xcc9, x23	// Restore CSR

// Testing CSR 0xcca
	csrr x3, 0xcca	// Read CSR
	li x8, -1
	csrrw x26, 0xcca, x8	// Write all 1s to CSR
	csrrw x26, 0xcca, x0	// Write all 0s to CSR
	csrrw x26, 0xcca, x3	// Restore CSR

// Testing CSR 0xccb
	csrr x12, 0xccb	// Read CSR
	li x20, -1
	csrrw x24, 0xccb, x20	// Write all 1s to CSR
	csrrw x24, 0xccb, x0	// Write all 0s to CSR
	csrrw x24, 0xccb, x12	// Restore CSR

// Testing CSR 0xccc
	csrr x4, 0xccc	// Read CSR
	li x18, -1
	csrrw x13, 0xccc, x18	// Write all 1s to CSR
	csrrw x13, 0xccc, x0	// Write all 0s to CSR
	csrrw x13, 0xccc, x4	// Restore CSR

// Testing CSR 0xccd
	csrr x9, 0xccd	// Read CSR
	li x21, -1
	csrrw x7, 0xccd, x21	// Write all 1s to CSR
	csrrw x7, 0xccd, x0	// Write all 0s to CSR
	csrrw x7, 0xccd, x9	// Restore CSR

// Testing CSR 0xcce
	csrr x26, 0xcce	// Read CSR
	li x6, -1
	csrrw x15, 0xcce, x6	// Write all 1s to CSR
	csrrw x15, 0xcce, x0	// Write all 0s to CSR
	csrrw x15, 0xcce, x26	// Restore CSR

// Testing CSR 0xccf
	csrr x15, 0xccf	// Read CSR
	li x29, -1
	csrrw x8, 0xccf, x29	// Write all 1s to CSR
	csrrw x8, 0xccf, x0	// Write all 0s to CSR
	csrrw x8, 0xccf, x15	// Restore CSR

// Testing CSR 0xcd0
	csrr x30, 0xcd0	// Read CSR
	li x19, -1
	csrrw x3, 0xcd0, x19	// Write all 1s to CSR
	csrrw x3, 0xcd0, x0	// Write all 0s to CSR
	csrrw x3, 0xcd0, x30	// Restore CSR

// Testing CSR 0xcd1
	csrr x25, 0xcd1	// Read CSR
	li x17, -1
	csrrw x18, 0xcd1, x17	// Write all 1s to CSR
	csrrw x18, 0xcd1, x0	// Write all 0s to CSR
	csrrw x18, 0xcd1, x25	// Restore CSR

// Testing CSR 0xcd2
	csrr x6, 0xcd2	// Read CSR
	li x23, -1
	csrrw x4, 0xcd2, x23	// Write all 1s to CSR
	csrrw x4, 0xcd2, x0	// Write all 0s to CSR
	csrrw x4, 0xcd2, x6	// Restore CSR

// Testing CSR 0xcd3
	csrr x26, 0xcd3	// Read CSR
	li x11, -1
	csrrw x27, 0xcd3, x11	// Write all 1s to CSR
	csrrw x27, 0xcd3, x0	// Write all 0s to CSR
	csrrw x27, 0xcd3, x26	// Restore CSR

// Testing CSR 0xcd4
	csrr x19, 0xcd4	// Read CSR
	li x6, -1
	csrrw x3, 0xcd4, x6	// Write all 1s to CSR
	csrrw x3, 0xcd4, x0	// Write all 0s to CSR
	csrrw x3, 0xcd4, x19	// Restore CSR

// Testing CSR 0xcd5
	csrr x23, 0xcd5	// Read CSR
	li x9, -1
	csrrw x25, 0xcd5, x9	// Write all 1s to CSR
	csrrw x25, 0xcd5, x0	// Write all 0s to CSR
	csrrw x25, 0xcd5, x23	// Restore CSR

// Testing CSR 0xcd6
	csrr x14, 0xcd6	// Read CSR
	li x29, -1
	csrrw x10, 0xcd6, x29	// Write all 1s to CSR
	csrrw x10, 0xcd6, x0	// Write all 0s to CSR
	csrrw x10, 0xcd6, x14	// Restore CSR

// Testing CSR 0xcd7
	csrr x7, 0xcd7	// Read CSR
	li x5, -1
	csrrw x31, 0xcd7, x5	// Write all 1s to CSR
	csrrw x31, 0xcd7, x0	// Write all 0s to CSR
	csrrw x31, 0xcd7, x7	// Restore CSR

// Testing CSR 0xcd8
	csrr x4, 0xcd8	// Read CSR
	li x22, -1
	csrrw x8, 0xcd8, x22	// Write all 1s to CSR
	csrrw x8, 0xcd8, x0	// Write all 0s to CSR
	csrrw x8, 0xcd8, x4	// Restore CSR

// Testing CSR 0xcd9
	csrr x30, 0xcd9	// Read CSR
	li x7, -1
	csrrw x21, 0xcd9, x7	// Write all 1s to CSR
	csrrw x21, 0xcd9, x0	// Write all 0s to CSR
	csrrw x21, 0xcd9, x30	// Restore CSR

// Testing CSR 0xcda
	csrr x10, 0xcda	// Read CSR
	li x9, -1
	csrrw x26, 0xcda, x9	// Write all 1s to CSR
	csrrw x26, 0xcda, x0	// Write all 0s to CSR
	csrrw x26, 0xcda, x10	// Restore CSR

// Testing CSR 0xcdb
	csrr x2, 0xcdb	// Read CSR
	li x28, -1
	csrrw x4, 0xcdb, x28	// Write all 1s to CSR
	csrrw x4, 0xcdb, x0	// Write all 0s to CSR
	csrrw x4, 0xcdb, x2	// Restore CSR

// Testing CSR 0xcdc
	csrr x27, 0xcdc	// Read CSR
	li x5, -1
	csrrw x18, 0xcdc, x5	// Write all 1s to CSR
	csrrw x18, 0xcdc, x0	// Write all 0s to CSR
	csrrw x18, 0xcdc, x27	// Restore CSR

// Testing CSR 0xcdd
	csrr x16, 0xcdd	// Read CSR
	li x29, -1
	csrrw x27, 0xcdd, x29	// Write all 1s to CSR
	csrrw x27, 0xcdd, x0	// Write all 0s to CSR
	csrrw x27, 0xcdd, x16	// Restore CSR

// Testing CSR 0xcde
	csrr x9, 0xcde	// Read CSR
	li x23, -1
	csrrw x5, 0xcde, x23	// Write all 1s to CSR
	csrrw x5, 0xcde, x0	// Write all 0s to CSR
	csrrw x5, 0xcde, x9	// Restore CSR

// Testing CSR 0xcdf
	csrr x3, 0xcdf	// Read CSR
	li x4, -1
	csrrw x25, 0xcdf, x4	// Write all 1s to CSR
	csrrw x25, 0xcdf, x0	// Write all 0s to CSR
	csrrw x25, 0xcdf, x3	// Restore CSR

// Testing CSR 0xce0
	csrr x7, 0xce0	// Read CSR
	li x27, -1
	csrrw x20, 0xce0, x27	// Write all 1s to CSR
	csrrw x20, 0xce0, x0	// Write all 0s to CSR
	csrrw x20, 0xce0, x7	// Restore CSR

// Testing CSR 0xce1
	csrr x17, 0xce1	// Read CSR
	li x8, -1
	csrrw x5, 0xce1, x8	// Write all 1s to CSR
	csrrw x5, 0xce1, x0	// Write all 0s to CSR
	csrrw x5, 0xce1, x17	// Restore CSR

// Testing CSR 0xce2
	csrr x15, 0xce2	// Read CSR
	li x7, -1
	csrrw x16, 0xce2, x7	// Write all 1s to CSR
	csrrw x16, 0xce2, x0	// Write all 0s to CSR
	csrrw x16, 0xce2, x15	// Restore CSR

// Testing CSR 0xce3
	csrr x28, 0xce3	// Read CSR
	li x27, -1
	csrrw x20, 0xce3, x27	// Write all 1s to CSR
	csrrw x20, 0xce3, x0	// Write all 0s to CSR
	csrrw x20, 0xce3, x28	// Restore CSR

// Testing CSR 0xce4
	csrr x16, 0xce4	// Read CSR
	li x4, -1
	csrrw x28, 0xce4, x4	// Write all 1s to CSR
	csrrw x28, 0xce4, x0	// Write all 0s to CSR
	csrrw x28, 0xce4, x16	// Restore CSR

// Testing CSR 0xce5
	csrr x12, 0xce5	// Read CSR
	li x14, -1
	csrrw x18, 0xce5, x14	// Write all 1s to CSR
	csrrw x18, 0xce5, x0	// Write all 0s to CSR
	csrrw x18, 0xce5, x12	// Restore CSR

// Testing CSR 0xce6
	csrr x6, 0xce6	// Read CSR
	li x1, -1
	csrrw x14, 0xce6, x1	// Write all 1s to CSR
	csrrw x14, 0xce6, x0	// Write all 0s to CSR
	csrrw x14, 0xce6, x6	// Restore CSR

// Testing CSR 0xce7
	csrr x21, 0xce7	// Read CSR
	li x26, -1
	csrrw x19, 0xce7, x26	// Write all 1s to CSR
	csrrw x19, 0xce7, x0	// Write all 0s to CSR
	csrrw x19, 0xce7, x21	// Restore CSR

// Testing CSR 0xce8
	csrr x20, 0xce8	// Read CSR
	li x5, -1
	csrrw x30, 0xce8, x5	// Write all 1s to CSR
	csrrw x30, 0xce8, x0	// Write all 0s to CSR
	csrrw x30, 0xce8, x20	// Restore CSR

// Testing CSR 0xce9
	csrr x19, 0xce9	// Read CSR
	li x23, -1
	csrrw x5, 0xce9, x23	// Write all 1s to CSR
	csrrw x5, 0xce9, x0	// Write all 0s to CSR
	csrrw x5, 0xce9, x19	// Restore CSR

// Testing CSR 0xcea
	csrr x23, 0xcea	// Read CSR
	li x13, -1
	csrrw x30, 0xcea, x13	// Write all 1s to CSR
	csrrw x30, 0xcea, x0	// Write all 0s to CSR
	csrrw x30, 0xcea, x23	// Restore CSR

// Testing CSR 0xceb
	csrr x12, 0xceb	// Read CSR
	li x24, -1
	csrrw x17, 0xceb, x24	// Write all 1s to CSR
	csrrw x17, 0xceb, x0	// Write all 0s to CSR
	csrrw x17, 0xceb, x12	// Restore CSR

// Testing CSR 0xcec
	csrr x18, 0xcec	// Read CSR
	li x7, -1
	csrrw x28, 0xcec, x7	// Write all 1s to CSR
	csrrw x28, 0xcec, x0	// Write all 0s to CSR
	csrrw x28, 0xcec, x18	// Restore CSR

// Testing CSR 0xced
	csrr x23, 0xced	// Read CSR
	li x30, -1
	csrrw x7, 0xced, x30	// Write all 1s to CSR
	csrrw x7, 0xced, x0	// Write all 0s to CSR
	csrrw x7, 0xced, x23	// Restore CSR

// Testing CSR 0xcee
	csrr x30, 0xcee	// Read CSR
	li x12, -1
	csrrw x8, 0xcee, x12	// Write all 1s to CSR
	csrrw x8, 0xcee, x0	// Write all 0s to CSR
	csrrw x8, 0xcee, x30	// Restore CSR

// Testing CSR 0xcef
	csrr x20, 0xcef	// Read CSR
	li x16, -1
	csrrw x27, 0xcef, x16	// Write all 1s to CSR
	csrrw x27, 0xcef, x0	// Write all 0s to CSR
	csrrw x27, 0xcef, x20	// Restore CSR

// Testing CSR 0xcf0
	csrr x21, 0xcf0	// Read CSR
	li x30, -1
	csrrw x2, 0xcf0, x30	// Write all 1s to CSR
	csrrw x2, 0xcf0, x0	// Write all 0s to CSR
	csrrw x2, 0xcf0, x21	// Restore CSR

// Testing CSR 0xcf1
	csrr x25, 0xcf1	// Read CSR
	li x14, -1
	csrrw x20, 0xcf1, x14	// Write all 1s to CSR
	csrrw x20, 0xcf1, x0	// Write all 0s to CSR
	csrrw x20, 0xcf1, x25	// Restore CSR

// Testing CSR 0xcf2
	csrr x22, 0xcf2	// Read CSR
	li x27, -1
	csrrw x15, 0xcf2, x27	// Write all 1s to CSR
	csrrw x15, 0xcf2, x0	// Write all 0s to CSR
	csrrw x15, 0xcf2, x22	// Restore CSR

// Testing CSR 0xcf3
	csrr x2, 0xcf3	// Read CSR
	li x18, -1
	csrrw x11, 0xcf3, x18	// Write all 1s to CSR
	csrrw x11, 0xcf3, x0	// Write all 0s to CSR
	csrrw x11, 0xcf3, x2	// Restore CSR

// Testing CSR 0xcf4
	csrr x7, 0xcf4	// Read CSR
	li x11, -1
	csrrw x27, 0xcf4, x11	// Write all 1s to CSR
	csrrw x27, 0xcf4, x0	// Write all 0s to CSR
	csrrw x27, 0xcf4, x7	// Restore CSR

// Testing CSR 0xcf5
	csrr x6, 0xcf5	// Read CSR
	li x1, -1
	csrrw x11, 0xcf5, x1	// Write all 1s to CSR
	csrrw x11, 0xcf5, x0	// Write all 0s to CSR
	csrrw x11, 0xcf5, x6	// Restore CSR

// Testing CSR 0xcf6
	csrr x27, 0xcf6	// Read CSR
	li x28, -1
	csrrw x16, 0xcf6, x28	// Write all 1s to CSR
	csrrw x16, 0xcf6, x0	// Write all 0s to CSR
	csrrw x16, 0xcf6, x27	// Restore CSR

// Testing CSR 0xcf7
	csrr x25, 0xcf7	// Read CSR
	li x3, -1
	csrrw x18, 0xcf7, x3	// Write all 1s to CSR
	csrrw x18, 0xcf7, x0	// Write all 0s to CSR
	csrrw x18, 0xcf7, x25	// Restore CSR

// Testing CSR 0xcf8
	csrr x26, 0xcf8	// Read CSR
	li x29, -1
	csrrw x31, 0xcf8, x29	// Write all 1s to CSR
	csrrw x31, 0xcf8, x0	// Write all 0s to CSR
	csrrw x31, 0xcf8, x26	// Restore CSR

// Testing CSR 0xcf9
	csrr x30, 0xcf9	// Read CSR
	li x29, -1
	csrrw x20, 0xcf9, x29	// Write all 1s to CSR
	csrrw x20, 0xcf9, x0	// Write all 0s to CSR
	csrrw x20, 0xcf9, x30	// Restore CSR

// Testing CSR 0xcfa
	csrr x25, 0xcfa	// Read CSR
	li x13, -1
	csrrw x31, 0xcfa, x13	// Write all 1s to CSR
	csrrw x31, 0xcfa, x0	// Write all 0s to CSR
	csrrw x31, 0xcfa, x25	// Restore CSR

// Testing CSR 0xcfb
	csrr x27, 0xcfb	// Read CSR
	li x10, -1
	csrrw x19, 0xcfb, x10	// Write all 1s to CSR
	csrrw x19, 0xcfb, x0	// Write all 0s to CSR
	csrrw x19, 0xcfb, x27	// Restore CSR

// Testing CSR 0xcfc
	csrr x18, 0xcfc	// Read CSR
	li x6, -1
	csrrw x8, 0xcfc, x6	// Write all 1s to CSR
	csrrw x8, 0xcfc, x0	// Write all 0s to CSR
	csrrw x8, 0xcfc, x18	// Restore CSR

// Testing CSR 0xcfd
	csrr x22, 0xcfd	// Read CSR
	li x1, -1
	csrrw x16, 0xcfd, x1	// Write all 1s to CSR
	csrrw x16, 0xcfd, x0	// Write all 0s to CSR
	csrrw x16, 0xcfd, x22	// Restore CSR

// Testing CSR 0xcfe
	csrr x4, 0xcfe	// Read CSR
	li x23, -1
	csrrw x7, 0xcfe, x23	// Write all 1s to CSR
	csrrw x7, 0xcfe, x0	// Write all 0s to CSR
	csrrw x7, 0xcfe, x4	// Restore CSR

// Testing CSR 0xcff
	csrr x15, 0xcff	// Read CSR
	li x10, -1
	csrrw x19, 0xcff, x10	// Write all 1s to CSR
	csrrw x19, 0xcff, x0	// Write all 0s to CSR
	csrrw x19, 0xcff, x15	// Restore CSR

// Testing CSR 0xd00
	csrr x10, 0xd00	// Read CSR
	li x31, -1
	csrrw x1, 0xd00, x31	// Write all 1s to CSR
	csrrw x1, 0xd00, x0	// Write all 0s to CSR
	csrrw x1, 0xd00, x10	// Restore CSR

// Testing CSR 0xd01
	csrr x23, 0xd01	// Read CSR
	li x20, -1
	csrrw x12, 0xd01, x20	// Write all 1s to CSR
	csrrw x12, 0xd01, x0	// Write all 0s to CSR
	csrrw x12, 0xd01, x23	// Restore CSR

// Testing CSR 0xd02
	csrr x9, 0xd02	// Read CSR
	li x22, -1
	csrrw x3, 0xd02, x22	// Write all 1s to CSR
	csrrw x3, 0xd02, x0	// Write all 0s to CSR
	csrrw x3, 0xd02, x9	// Restore CSR

// Testing CSR 0xd03
	csrr x1, 0xd03	// Read CSR
	li x20, -1
	csrrw x29, 0xd03, x20	// Write all 1s to CSR
	csrrw x29, 0xd03, x0	// Write all 0s to CSR
	csrrw x29, 0xd03, x1	// Restore CSR

// Testing CSR 0xd04
	csrr x15, 0xd04	// Read CSR
	li x29, -1
	csrrw x30, 0xd04, x29	// Write all 1s to CSR
	csrrw x30, 0xd04, x0	// Write all 0s to CSR
	csrrw x30, 0xd04, x15	// Restore CSR

// Testing CSR 0xd05
	csrr x31, 0xd05	// Read CSR
	li x2, -1
	csrrw x5, 0xd05, x2	// Write all 1s to CSR
	csrrw x5, 0xd05, x0	// Write all 0s to CSR
	csrrw x5, 0xd05, x31	// Restore CSR

// Testing CSR 0xd06
	csrr x3, 0xd06	// Read CSR
	li x2, -1
	csrrw x9, 0xd06, x2	// Write all 1s to CSR
	csrrw x9, 0xd06, x0	// Write all 0s to CSR
	csrrw x9, 0xd06, x3	// Restore CSR

// Testing CSR 0xd07
	csrr x10, 0xd07	// Read CSR
	li x24, -1
	csrrw x3, 0xd07, x24	// Write all 1s to CSR
	csrrw x3, 0xd07, x0	// Write all 0s to CSR
	csrrw x3, 0xd07, x10	// Restore CSR

// Testing CSR 0xd08
	csrr x30, 0xd08	// Read CSR
	li x3, -1
	csrrw x27, 0xd08, x3	// Write all 1s to CSR
	csrrw x27, 0xd08, x0	// Write all 0s to CSR
	csrrw x27, 0xd08, x30	// Restore CSR

// Testing CSR 0xd09
	csrr x3, 0xd09	// Read CSR
	li x8, -1
	csrrw x26, 0xd09, x8	// Write all 1s to CSR
	csrrw x26, 0xd09, x0	// Write all 0s to CSR
	csrrw x26, 0xd09, x3	// Restore CSR

// Testing CSR 0xd0a
	csrr x19, 0xd0a	// Read CSR
	li x20, -1
	csrrw x2, 0xd0a, x20	// Write all 1s to CSR
	csrrw x2, 0xd0a, x0	// Write all 0s to CSR
	csrrw x2, 0xd0a, x19	// Restore CSR

// Testing CSR 0xd0b
	csrr x26, 0xd0b	// Read CSR
	li x27, -1
	csrrw x21, 0xd0b, x27	// Write all 1s to CSR
	csrrw x21, 0xd0b, x0	// Write all 0s to CSR
	csrrw x21, 0xd0b, x26	// Restore CSR

// Testing CSR 0xd0c
	csrr x31, 0xd0c	// Read CSR
	li x11, -1
	csrrw x20, 0xd0c, x11	// Write all 1s to CSR
	csrrw x20, 0xd0c, x0	// Write all 0s to CSR
	csrrw x20, 0xd0c, x31	// Restore CSR

// Testing CSR 0xd0d
	csrr x27, 0xd0d	// Read CSR
	li x26, -1
	csrrw x20, 0xd0d, x26	// Write all 1s to CSR
	csrrw x20, 0xd0d, x0	// Write all 0s to CSR
	csrrw x20, 0xd0d, x27	// Restore CSR

// Testing CSR 0xd0e
	csrr x15, 0xd0e	// Read CSR
	li x1, -1
	csrrw x18, 0xd0e, x1	// Write all 1s to CSR
	csrrw x18, 0xd0e, x0	// Write all 0s to CSR
	csrrw x18, 0xd0e, x15	// Restore CSR

// Testing CSR 0xd0f
	csrr x27, 0xd0f	// Read CSR
	li x22, -1
	csrrw x20, 0xd0f, x22	// Write all 1s to CSR
	csrrw x20, 0xd0f, x0	// Write all 0s to CSR
	csrrw x20, 0xd0f, x27	// Restore CSR

// Testing CSR 0xd10
	csrr x24, 0xd10	// Read CSR
	li x16, -1
	csrrw x27, 0xd10, x16	// Write all 1s to CSR
	csrrw x27, 0xd10, x0	// Write all 0s to CSR
	csrrw x27, 0xd10, x24	// Restore CSR

// Testing CSR 0xd11
	csrr x13, 0xd11	// Read CSR
	li x10, -1
	csrrw x28, 0xd11, x10	// Write all 1s to CSR
	csrrw x28, 0xd11, x0	// Write all 0s to CSR
	csrrw x28, 0xd11, x13	// Restore CSR

// Testing CSR 0xd12
	csrr x20, 0xd12	// Read CSR
	li x1, -1
	csrrw x8, 0xd12, x1	// Write all 1s to CSR
	csrrw x8, 0xd12, x0	// Write all 0s to CSR
	csrrw x8, 0xd12, x20	// Restore CSR

// Testing CSR 0xd13
	csrr x12, 0xd13	// Read CSR
	li x11, -1
	csrrw x27, 0xd13, x11	// Write all 1s to CSR
	csrrw x27, 0xd13, x0	// Write all 0s to CSR
	csrrw x27, 0xd13, x12	// Restore CSR

// Testing CSR 0xd14
	csrr x6, 0xd14	// Read CSR
	li x14, -1
	csrrw x7, 0xd14, x14	// Write all 1s to CSR
	csrrw x7, 0xd14, x0	// Write all 0s to CSR
	csrrw x7, 0xd14, x6	// Restore CSR

// Testing CSR 0xd15
	csrr x13, 0xd15	// Read CSR
	li x2, -1
	csrrw x26, 0xd15, x2	// Write all 1s to CSR
	csrrw x26, 0xd15, x0	// Write all 0s to CSR
	csrrw x26, 0xd15, x13	// Restore CSR

// Testing CSR 0xd16
	csrr x1, 0xd16	// Read CSR
	li x9, -1
	csrrw x29, 0xd16, x9	// Write all 1s to CSR
	csrrw x29, 0xd16, x0	// Write all 0s to CSR
	csrrw x29, 0xd16, x1	// Restore CSR

// Testing CSR 0xd17
	csrr x31, 0xd17	// Read CSR
	li x25, -1
	csrrw x20, 0xd17, x25	// Write all 1s to CSR
	csrrw x20, 0xd17, x0	// Write all 0s to CSR
	csrrw x20, 0xd17, x31	// Restore CSR

// Testing CSR 0xd18
	csrr x18, 0xd18	// Read CSR
	li x7, -1
	csrrw x28, 0xd18, x7	// Write all 1s to CSR
	csrrw x28, 0xd18, x0	// Write all 0s to CSR
	csrrw x28, 0xd18, x18	// Restore CSR

// Testing CSR 0xd19
	csrr x10, 0xd19	// Read CSR
	li x5, -1
	csrrw x20, 0xd19, x5	// Write all 1s to CSR
	csrrw x20, 0xd19, x0	// Write all 0s to CSR
	csrrw x20, 0xd19, x10	// Restore CSR

// Testing CSR 0xd1a
	csrr x1, 0xd1a	// Read CSR
	li x24, -1
	csrrw x13, 0xd1a, x24	// Write all 1s to CSR
	csrrw x13, 0xd1a, x0	// Write all 0s to CSR
	csrrw x13, 0xd1a, x1	// Restore CSR

// Testing CSR 0xd1b
	csrr x27, 0xd1b	// Read CSR
	li x9, -1
	csrrw x8, 0xd1b, x9	// Write all 1s to CSR
	csrrw x8, 0xd1b, x0	// Write all 0s to CSR
	csrrw x8, 0xd1b, x27	// Restore CSR

// Testing CSR 0xd1c
	csrr x1, 0xd1c	// Read CSR
	li x2, -1
	csrrw x20, 0xd1c, x2	// Write all 1s to CSR
	csrrw x20, 0xd1c, x0	// Write all 0s to CSR
	csrrw x20, 0xd1c, x1	// Restore CSR

// Testing CSR 0xd1d
	csrr x6, 0xd1d	// Read CSR
	li x24, -1
	csrrw x15, 0xd1d, x24	// Write all 1s to CSR
	csrrw x15, 0xd1d, x0	// Write all 0s to CSR
	csrrw x15, 0xd1d, x6	// Restore CSR

// Testing CSR 0xd1e
	csrr x30, 0xd1e	// Read CSR
	li x20, -1
	csrrw x5, 0xd1e, x20	// Write all 1s to CSR
	csrrw x5, 0xd1e, x0	// Write all 0s to CSR
	csrrw x5, 0xd1e, x30	// Restore CSR

// Testing CSR 0xd1f
	csrr x27, 0xd1f	// Read CSR
	li x8, -1
	csrrw x20, 0xd1f, x8	// Write all 1s to CSR
	csrrw x20, 0xd1f, x0	// Write all 0s to CSR
	csrrw x20, 0xd1f, x27	// Restore CSR

// Testing CSR 0xd20
	csrr x24, 0xd20	// Read CSR
	li x27, -1
	csrrw x11, 0xd20, x27	// Write all 1s to CSR
	csrrw x11, 0xd20, x0	// Write all 0s to CSR
	csrrw x11, 0xd20, x24	// Restore CSR

// Testing CSR 0xd21
	csrr x10, 0xd21	// Read CSR
	li x21, -1
	csrrw x13, 0xd21, x21	// Write all 1s to CSR
	csrrw x13, 0xd21, x0	// Write all 0s to CSR
	csrrw x13, 0xd21, x10	// Restore CSR

// Testing CSR 0xd22
	csrr x17, 0xd22	// Read CSR
	li x23, -1
	csrrw x25, 0xd22, x23	// Write all 1s to CSR
	csrrw x25, 0xd22, x0	// Write all 0s to CSR
	csrrw x25, 0xd22, x17	// Restore CSR

// Testing CSR 0xd23
	csrr x3, 0xd23	// Read CSR
	li x17, -1
	csrrw x16, 0xd23, x17	// Write all 1s to CSR
	csrrw x16, 0xd23, x0	// Write all 0s to CSR
	csrrw x16, 0xd23, x3	// Restore CSR

// Testing CSR 0xd24
	csrr x8, 0xd24	// Read CSR
	li x9, -1
	csrrw x2, 0xd24, x9	// Write all 1s to CSR
	csrrw x2, 0xd24, x0	// Write all 0s to CSR
	csrrw x2, 0xd24, x8	// Restore CSR

// Testing CSR 0xd25
	csrr x28, 0xd25	// Read CSR
	li x12, -1
	csrrw x19, 0xd25, x12	// Write all 1s to CSR
	csrrw x19, 0xd25, x0	// Write all 0s to CSR
	csrrw x19, 0xd25, x28	// Restore CSR

// Testing CSR 0xd26
	csrr x10, 0xd26	// Read CSR
	li x29, -1
	csrrw x26, 0xd26, x29	// Write all 1s to CSR
	csrrw x26, 0xd26, x0	// Write all 0s to CSR
	csrrw x26, 0xd26, x10	// Restore CSR

// Testing CSR 0xd27
	csrr x19, 0xd27	// Read CSR
	li x9, -1
	csrrw x8, 0xd27, x9	// Write all 1s to CSR
	csrrw x8, 0xd27, x0	// Write all 0s to CSR
	csrrw x8, 0xd27, x19	// Restore CSR

// Testing CSR 0xd28
	csrr x23, 0xd28	// Read CSR
	li x10, -1
	csrrw x11, 0xd28, x10	// Write all 1s to CSR
	csrrw x11, 0xd28, x0	// Write all 0s to CSR
	csrrw x11, 0xd28, x23	// Restore CSR

// Testing CSR 0xd29
	csrr x17, 0xd29	// Read CSR
	li x27, -1
	csrrw x10, 0xd29, x27	// Write all 1s to CSR
	csrrw x10, 0xd29, x0	// Write all 0s to CSR
	csrrw x10, 0xd29, x17	// Restore CSR

// Testing CSR 0xd2a
	csrr x9, 0xd2a	// Read CSR
	li x29, -1
	csrrw x13, 0xd2a, x29	// Write all 1s to CSR
	csrrw x13, 0xd2a, x0	// Write all 0s to CSR
	csrrw x13, 0xd2a, x9	// Restore CSR

// Testing CSR 0xd2b
	csrr x16, 0xd2b	// Read CSR
	li x4, -1
	csrrw x23, 0xd2b, x4	// Write all 1s to CSR
	csrrw x23, 0xd2b, x0	// Write all 0s to CSR
	csrrw x23, 0xd2b, x16	// Restore CSR

// Testing CSR 0xd2c
	csrr x3, 0xd2c	// Read CSR
	li x14, -1
	csrrw x7, 0xd2c, x14	// Write all 1s to CSR
	csrrw x7, 0xd2c, x0	// Write all 0s to CSR
	csrrw x7, 0xd2c, x3	// Restore CSR

// Testing CSR 0xd2d
	csrr x21, 0xd2d	// Read CSR
	li x6, -1
	csrrw x22, 0xd2d, x6	// Write all 1s to CSR
	csrrw x22, 0xd2d, x0	// Write all 0s to CSR
	csrrw x22, 0xd2d, x21	// Restore CSR

// Testing CSR 0xd2e
	csrr x27, 0xd2e	// Read CSR
	li x22, -1
	csrrw x7, 0xd2e, x22	// Write all 1s to CSR
	csrrw x7, 0xd2e, x0	// Write all 0s to CSR
	csrrw x7, 0xd2e, x27	// Restore CSR

// Testing CSR 0xd2f
	csrr x9, 0xd2f	// Read CSR
	li x28, -1
	csrrw x12, 0xd2f, x28	// Write all 1s to CSR
	csrrw x12, 0xd2f, x0	// Write all 0s to CSR
	csrrw x12, 0xd2f, x9	// Restore CSR

// Testing CSR 0xd30
	csrr x21, 0xd30	// Read CSR
	li x31, -1
	csrrw x17, 0xd30, x31	// Write all 1s to CSR
	csrrw x17, 0xd30, x0	// Write all 0s to CSR
	csrrw x17, 0xd30, x21	// Restore CSR

// Testing CSR 0xd31
	csrr x15, 0xd31	// Read CSR
	li x21, -1
	csrrw x23, 0xd31, x21	// Write all 1s to CSR
	csrrw x23, 0xd31, x0	// Write all 0s to CSR
	csrrw x23, 0xd31, x15	// Restore CSR

// Testing CSR 0xd32
	csrr x20, 0xd32	// Read CSR
	li x30, -1
	csrrw x25, 0xd32, x30	// Write all 1s to CSR
	csrrw x25, 0xd32, x0	// Write all 0s to CSR
	csrrw x25, 0xd32, x20	// Restore CSR

// Testing CSR 0xd33
	csrr x14, 0xd33	// Read CSR
	li x7, -1
	csrrw x25, 0xd33, x7	// Write all 1s to CSR
	csrrw x25, 0xd33, x0	// Write all 0s to CSR
	csrrw x25, 0xd33, x14	// Restore CSR

// Testing CSR 0xd34
	csrr x18, 0xd34	// Read CSR
	li x15, -1
	csrrw x28, 0xd34, x15	// Write all 1s to CSR
	csrrw x28, 0xd34, x0	// Write all 0s to CSR
	csrrw x28, 0xd34, x18	// Restore CSR

// Testing CSR 0xd35
	csrr x11, 0xd35	// Read CSR
	li x4, -1
	csrrw x24, 0xd35, x4	// Write all 1s to CSR
	csrrw x24, 0xd35, x0	// Write all 0s to CSR
	csrrw x24, 0xd35, x11	// Restore CSR

// Testing CSR 0xd36
	csrr x7, 0xd36	// Read CSR
	li x20, -1
	csrrw x16, 0xd36, x20	// Write all 1s to CSR
	csrrw x16, 0xd36, x0	// Write all 0s to CSR
	csrrw x16, 0xd36, x7	// Restore CSR

// Testing CSR 0xd37
	csrr x10, 0xd37	// Read CSR
	li x30, -1
	csrrw x19, 0xd37, x30	// Write all 1s to CSR
	csrrw x19, 0xd37, x0	// Write all 0s to CSR
	csrrw x19, 0xd37, x10	// Restore CSR

// Testing CSR 0xd38
	csrr x25, 0xd38	// Read CSR
	li x4, -1
	csrrw x27, 0xd38, x4	// Write all 1s to CSR
	csrrw x27, 0xd38, x0	// Write all 0s to CSR
	csrrw x27, 0xd38, x25	// Restore CSR

// Testing CSR 0xd39
	csrr x30, 0xd39	// Read CSR
	li x1, -1
	csrrw x2, 0xd39, x1	// Write all 1s to CSR
	csrrw x2, 0xd39, x0	// Write all 0s to CSR
	csrrw x2, 0xd39, x30	// Restore CSR

// Testing CSR 0xd3a
	csrr x30, 0xd3a	// Read CSR
	li x3, -1
	csrrw x22, 0xd3a, x3	// Write all 1s to CSR
	csrrw x22, 0xd3a, x0	// Write all 0s to CSR
	csrrw x22, 0xd3a, x30	// Restore CSR

// Testing CSR 0xd3b
	csrr x23, 0xd3b	// Read CSR
	li x8, -1
	csrrw x26, 0xd3b, x8	// Write all 1s to CSR
	csrrw x26, 0xd3b, x0	// Write all 0s to CSR
	csrrw x26, 0xd3b, x23	// Restore CSR

// Testing CSR 0xd3c
	csrr x30, 0xd3c	// Read CSR
	li x18, -1
	csrrw x14, 0xd3c, x18	// Write all 1s to CSR
	csrrw x14, 0xd3c, x0	// Write all 0s to CSR
	csrrw x14, 0xd3c, x30	// Restore CSR

// Testing CSR 0xd3d
	csrr x21, 0xd3d	// Read CSR
	li x31, -1
	csrrw x11, 0xd3d, x31	// Write all 1s to CSR
	csrrw x11, 0xd3d, x0	// Write all 0s to CSR
	csrrw x11, 0xd3d, x21	// Restore CSR

// Testing CSR 0xd3e
	csrr x17, 0xd3e	// Read CSR
	li x4, -1
	csrrw x3, 0xd3e, x4	// Write all 1s to CSR
	csrrw x3, 0xd3e, x0	// Write all 0s to CSR
	csrrw x3, 0xd3e, x17	// Restore CSR

// Testing CSR 0xd3f
	csrr x16, 0xd3f	// Read CSR
	li x10, -1
	csrrw x24, 0xd3f, x10	// Write all 1s to CSR
	csrrw x24, 0xd3f, x0	// Write all 0s to CSR
	csrrw x24, 0xd3f, x16	// Restore CSR

// Testing CSR 0xd40
	csrr x16, 0xd40	// Read CSR
	li x15, -1
	csrrw x29, 0xd40, x15	// Write all 1s to CSR
	csrrw x29, 0xd40, x0	// Write all 0s to CSR
	csrrw x29, 0xd40, x16	// Restore CSR

// Testing CSR 0xd41
	csrr x2, 0xd41	// Read CSR
	li x10, -1
	csrrw x18, 0xd41, x10	// Write all 1s to CSR
	csrrw x18, 0xd41, x0	// Write all 0s to CSR
	csrrw x18, 0xd41, x2	// Restore CSR

// Testing CSR 0xd42
	csrr x21, 0xd42	// Read CSR
	li x18, -1
	csrrw x31, 0xd42, x18	// Write all 1s to CSR
	csrrw x31, 0xd42, x0	// Write all 0s to CSR
	csrrw x31, 0xd42, x21	// Restore CSR

// Testing CSR 0xd43
	csrr x28, 0xd43	// Read CSR
	li x16, -1
	csrrw x12, 0xd43, x16	// Write all 1s to CSR
	csrrw x12, 0xd43, x0	// Write all 0s to CSR
	csrrw x12, 0xd43, x28	// Restore CSR

// Testing CSR 0xd44
	csrr x20, 0xd44	// Read CSR
	li x16, -1
	csrrw x5, 0xd44, x16	// Write all 1s to CSR
	csrrw x5, 0xd44, x0	// Write all 0s to CSR
	csrrw x5, 0xd44, x20	// Restore CSR

// Testing CSR 0xd45
	csrr x22, 0xd45	// Read CSR
	li x18, -1
	csrrw x8, 0xd45, x18	// Write all 1s to CSR
	csrrw x8, 0xd45, x0	// Write all 0s to CSR
	csrrw x8, 0xd45, x22	// Restore CSR

// Testing CSR 0xd46
	csrr x21, 0xd46	// Read CSR
	li x2, -1
	csrrw x15, 0xd46, x2	// Write all 1s to CSR
	csrrw x15, 0xd46, x0	// Write all 0s to CSR
	csrrw x15, 0xd46, x21	// Restore CSR

// Testing CSR 0xd47
	csrr x19, 0xd47	// Read CSR
	li x8, -1
	csrrw x31, 0xd47, x8	// Write all 1s to CSR
	csrrw x31, 0xd47, x0	// Write all 0s to CSR
	csrrw x31, 0xd47, x19	// Restore CSR

// Testing CSR 0xd48
	csrr x8, 0xd48	// Read CSR
	li x31, -1
	csrrw x19, 0xd48, x31	// Write all 1s to CSR
	csrrw x19, 0xd48, x0	// Write all 0s to CSR
	csrrw x19, 0xd48, x8	// Restore CSR

// Testing CSR 0xd49
	csrr x8, 0xd49	// Read CSR
	li x22, -1
	csrrw x2, 0xd49, x22	// Write all 1s to CSR
	csrrw x2, 0xd49, x0	// Write all 0s to CSR
	csrrw x2, 0xd49, x8	// Restore CSR

// Testing CSR 0xd4a
	csrr x10, 0xd4a	// Read CSR
	li x4, -1
	csrrw x13, 0xd4a, x4	// Write all 1s to CSR
	csrrw x13, 0xd4a, x0	// Write all 0s to CSR
	csrrw x13, 0xd4a, x10	// Restore CSR

// Testing CSR 0xd4b
	csrr x11, 0xd4b	// Read CSR
	li x31, -1
	csrrw x14, 0xd4b, x31	// Write all 1s to CSR
	csrrw x14, 0xd4b, x0	// Write all 0s to CSR
	csrrw x14, 0xd4b, x11	// Restore CSR

// Testing CSR 0xd4c
	csrr x12, 0xd4c	// Read CSR
	li x5, -1
	csrrw x19, 0xd4c, x5	// Write all 1s to CSR
	csrrw x19, 0xd4c, x0	// Write all 0s to CSR
	csrrw x19, 0xd4c, x12	// Restore CSR

// Testing CSR 0xd4d
	csrr x13, 0xd4d	// Read CSR
	li x15, -1
	csrrw x5, 0xd4d, x15	// Write all 1s to CSR
	csrrw x5, 0xd4d, x0	// Write all 0s to CSR
	csrrw x5, 0xd4d, x13	// Restore CSR

// Testing CSR 0xd4e
	csrr x14, 0xd4e	// Read CSR
	li x6, -1
	csrrw x8, 0xd4e, x6	// Write all 1s to CSR
	csrrw x8, 0xd4e, x0	// Write all 0s to CSR
	csrrw x8, 0xd4e, x14	// Restore CSR

// Testing CSR 0xd4f
	csrr x2, 0xd4f	// Read CSR
	li x12, -1
	csrrw x15, 0xd4f, x12	// Write all 1s to CSR
	csrrw x15, 0xd4f, x0	// Write all 0s to CSR
	csrrw x15, 0xd4f, x2	// Restore CSR

// Testing CSR 0xd50
	csrr x27, 0xd50	// Read CSR
	li x22, -1
	csrrw x15, 0xd50, x22	// Write all 1s to CSR
	csrrw x15, 0xd50, x0	// Write all 0s to CSR
	csrrw x15, 0xd50, x27	// Restore CSR

// Testing CSR 0xd51
	csrr x4, 0xd51	// Read CSR
	li x22, -1
	csrrw x31, 0xd51, x22	// Write all 1s to CSR
	csrrw x31, 0xd51, x0	// Write all 0s to CSR
	csrrw x31, 0xd51, x4	// Restore CSR

// Testing CSR 0xd52
	csrr x11, 0xd52	// Read CSR
	li x9, -1
	csrrw x20, 0xd52, x9	// Write all 1s to CSR
	csrrw x20, 0xd52, x0	// Write all 0s to CSR
	csrrw x20, 0xd52, x11	// Restore CSR

// Testing CSR 0xd53
	csrr x5, 0xd53	// Read CSR
	li x24, -1
	csrrw x23, 0xd53, x24	// Write all 1s to CSR
	csrrw x23, 0xd53, x0	// Write all 0s to CSR
	csrrw x23, 0xd53, x5	// Restore CSR

// Testing CSR 0xd54
	csrr x10, 0xd54	// Read CSR
	li x2, -1
	csrrw x31, 0xd54, x2	// Write all 1s to CSR
	csrrw x31, 0xd54, x0	// Write all 0s to CSR
	csrrw x31, 0xd54, x10	// Restore CSR

// Testing CSR 0xd55
	csrr x7, 0xd55	// Read CSR
	li x17, -1
	csrrw x10, 0xd55, x17	// Write all 1s to CSR
	csrrw x10, 0xd55, x0	// Write all 0s to CSR
	csrrw x10, 0xd55, x7	// Restore CSR

// Testing CSR 0xd56
	csrr x9, 0xd56	// Read CSR
	li x8, -1
	csrrw x3, 0xd56, x8	// Write all 1s to CSR
	csrrw x3, 0xd56, x0	// Write all 0s to CSR
	csrrw x3, 0xd56, x9	// Restore CSR

// Testing CSR 0xd57
	csrr x15, 0xd57	// Read CSR
	li x4, -1
	csrrw x31, 0xd57, x4	// Write all 1s to CSR
	csrrw x31, 0xd57, x0	// Write all 0s to CSR
	csrrw x31, 0xd57, x15	// Restore CSR

// Testing CSR 0xd58
	csrr x18, 0xd58	// Read CSR
	li x16, -1
	csrrw x24, 0xd58, x16	// Write all 1s to CSR
	csrrw x24, 0xd58, x0	// Write all 0s to CSR
	csrrw x24, 0xd58, x18	// Restore CSR

// Testing CSR 0xd59
	csrr x11, 0xd59	// Read CSR
	li x28, -1
	csrrw x6, 0xd59, x28	// Write all 1s to CSR
	csrrw x6, 0xd59, x0	// Write all 0s to CSR
	csrrw x6, 0xd59, x11	// Restore CSR

// Testing CSR 0xd5a
	csrr x10, 0xd5a	// Read CSR
	li x17, -1
	csrrw x4, 0xd5a, x17	// Write all 1s to CSR
	csrrw x4, 0xd5a, x0	// Write all 0s to CSR
	csrrw x4, 0xd5a, x10	// Restore CSR

// Testing CSR 0xd5b
	csrr x1, 0xd5b	// Read CSR
	li x7, -1
	csrrw x8, 0xd5b, x7	// Write all 1s to CSR
	csrrw x8, 0xd5b, x0	// Write all 0s to CSR
	csrrw x8, 0xd5b, x1	// Restore CSR

// Testing CSR 0xd5c
	csrr x12, 0xd5c	// Read CSR
	li x18, -1
	csrrw x29, 0xd5c, x18	// Write all 1s to CSR
	csrrw x29, 0xd5c, x0	// Write all 0s to CSR
	csrrw x29, 0xd5c, x12	// Restore CSR

// Testing CSR 0xd5d
	csrr x28, 0xd5d	// Read CSR
	li x6, -1
	csrrw x12, 0xd5d, x6	// Write all 1s to CSR
	csrrw x12, 0xd5d, x0	// Write all 0s to CSR
	csrrw x12, 0xd5d, x28	// Restore CSR

// Testing CSR 0xd5e
	csrr x26, 0xd5e	// Read CSR
	li x11, -1
	csrrw x8, 0xd5e, x11	// Write all 1s to CSR
	csrrw x8, 0xd5e, x0	// Write all 0s to CSR
	csrrw x8, 0xd5e, x26	// Restore CSR

// Testing CSR 0xd5f
	csrr x10, 0xd5f	// Read CSR
	li x7, -1
	csrrw x28, 0xd5f, x7	// Write all 1s to CSR
	csrrw x28, 0xd5f, x0	// Write all 0s to CSR
	csrrw x28, 0xd5f, x10	// Restore CSR

// Testing CSR 0xd60
	csrr x21, 0xd60	// Read CSR
	li x17, -1
	csrrw x25, 0xd60, x17	// Write all 1s to CSR
	csrrw x25, 0xd60, x0	// Write all 0s to CSR
	csrrw x25, 0xd60, x21	// Restore CSR

// Testing CSR 0xd61
	csrr x29, 0xd61	// Read CSR
	li x2, -1
	csrrw x22, 0xd61, x2	// Write all 1s to CSR
	csrrw x22, 0xd61, x0	// Write all 0s to CSR
	csrrw x22, 0xd61, x29	// Restore CSR

// Testing CSR 0xd62
	csrr x13, 0xd62	// Read CSR
	li x9, -1
	csrrw x10, 0xd62, x9	// Write all 1s to CSR
	csrrw x10, 0xd62, x0	// Write all 0s to CSR
	csrrw x10, 0xd62, x13	// Restore CSR

// Testing CSR 0xd63
	csrr x13, 0xd63	// Read CSR
	li x9, -1
	csrrw x3, 0xd63, x9	// Write all 1s to CSR
	csrrw x3, 0xd63, x0	// Write all 0s to CSR
	csrrw x3, 0xd63, x13	// Restore CSR

// Testing CSR 0xd64
	csrr x21, 0xd64	// Read CSR
	li x2, -1
	csrrw x1, 0xd64, x2	// Write all 1s to CSR
	csrrw x1, 0xd64, x0	// Write all 0s to CSR
	csrrw x1, 0xd64, x21	// Restore CSR

// Testing CSR 0xd65
	csrr x30, 0xd65	// Read CSR
	li x31, -1
	csrrw x19, 0xd65, x31	// Write all 1s to CSR
	csrrw x19, 0xd65, x0	// Write all 0s to CSR
	csrrw x19, 0xd65, x30	// Restore CSR

// Testing CSR 0xd66
	csrr x27, 0xd66	// Read CSR
	li x5, -1
	csrrw x8, 0xd66, x5	// Write all 1s to CSR
	csrrw x8, 0xd66, x0	// Write all 0s to CSR
	csrrw x8, 0xd66, x27	// Restore CSR

// Testing CSR 0xd67
	csrr x29, 0xd67	// Read CSR
	li x18, -1
	csrrw x1, 0xd67, x18	// Write all 1s to CSR
	csrrw x1, 0xd67, x0	// Write all 0s to CSR
	csrrw x1, 0xd67, x29	// Restore CSR

// Testing CSR 0xd68
	csrr x18, 0xd68	// Read CSR
	li x24, -1
	csrrw x5, 0xd68, x24	// Write all 1s to CSR
	csrrw x5, 0xd68, x0	// Write all 0s to CSR
	csrrw x5, 0xd68, x18	// Restore CSR

// Testing CSR 0xd69
	csrr x19, 0xd69	// Read CSR
	li x27, -1
	csrrw x20, 0xd69, x27	// Write all 1s to CSR
	csrrw x20, 0xd69, x0	// Write all 0s to CSR
	csrrw x20, 0xd69, x19	// Restore CSR

// Testing CSR 0xd6a
	csrr x31, 0xd6a	// Read CSR
	li x10, -1
	csrrw x30, 0xd6a, x10	// Write all 1s to CSR
	csrrw x30, 0xd6a, x0	// Write all 0s to CSR
	csrrw x30, 0xd6a, x31	// Restore CSR

// Testing CSR 0xd6b
	csrr x22, 0xd6b	// Read CSR
	li x6, -1
	csrrw x19, 0xd6b, x6	// Write all 1s to CSR
	csrrw x19, 0xd6b, x0	// Write all 0s to CSR
	csrrw x19, 0xd6b, x22	// Restore CSR

// Testing CSR 0xd6c
	csrr x16, 0xd6c	// Read CSR
	li x31, -1
	csrrw x2, 0xd6c, x31	// Write all 1s to CSR
	csrrw x2, 0xd6c, x0	// Write all 0s to CSR
	csrrw x2, 0xd6c, x16	// Restore CSR

// Testing CSR 0xd6d
	csrr x21, 0xd6d	// Read CSR
	li x16, -1
	csrrw x20, 0xd6d, x16	// Write all 1s to CSR
	csrrw x20, 0xd6d, x0	// Write all 0s to CSR
	csrrw x20, 0xd6d, x21	// Restore CSR

// Testing CSR 0xd6e
	csrr x29, 0xd6e	// Read CSR
	li x10, -1
	csrrw x28, 0xd6e, x10	// Write all 1s to CSR
	csrrw x28, 0xd6e, x0	// Write all 0s to CSR
	csrrw x28, 0xd6e, x29	// Restore CSR

// Testing CSR 0xd6f
	csrr x18, 0xd6f	// Read CSR
	li x29, -1
	csrrw x8, 0xd6f, x29	// Write all 1s to CSR
	csrrw x8, 0xd6f, x0	// Write all 0s to CSR
	csrrw x8, 0xd6f, x18	// Restore CSR

// Testing CSR 0xd70
	csrr x22, 0xd70	// Read CSR
	li x23, -1
	csrrw x30, 0xd70, x23	// Write all 1s to CSR
	csrrw x30, 0xd70, x0	// Write all 0s to CSR
	csrrw x30, 0xd70, x22	// Restore CSR

// Testing CSR 0xd71
	csrr x29, 0xd71	// Read CSR
	li x22, -1
	csrrw x12, 0xd71, x22	// Write all 1s to CSR
	csrrw x12, 0xd71, x0	// Write all 0s to CSR
	csrrw x12, 0xd71, x29	// Restore CSR

// Testing CSR 0xd72
	csrr x4, 0xd72	// Read CSR
	li x26, -1
	csrrw x7, 0xd72, x26	// Write all 1s to CSR
	csrrw x7, 0xd72, x0	// Write all 0s to CSR
	csrrw x7, 0xd72, x4	// Restore CSR

// Testing CSR 0xd73
	csrr x27, 0xd73	// Read CSR
	li x8, -1
	csrrw x5, 0xd73, x8	// Write all 1s to CSR
	csrrw x5, 0xd73, x0	// Write all 0s to CSR
	csrrw x5, 0xd73, x27	// Restore CSR

// Testing CSR 0xd74
	csrr x5, 0xd74	// Read CSR
	li x9, -1
	csrrw x17, 0xd74, x9	// Write all 1s to CSR
	csrrw x17, 0xd74, x0	// Write all 0s to CSR
	csrrw x17, 0xd74, x5	// Restore CSR

// Testing CSR 0xd75
	csrr x16, 0xd75	// Read CSR
	li x10, -1
	csrrw x15, 0xd75, x10	// Write all 1s to CSR
	csrrw x15, 0xd75, x0	// Write all 0s to CSR
	csrrw x15, 0xd75, x16	// Restore CSR

// Testing CSR 0xd76
	csrr x10, 0xd76	// Read CSR
	li x7, -1
	csrrw x11, 0xd76, x7	// Write all 1s to CSR
	csrrw x11, 0xd76, x0	// Write all 0s to CSR
	csrrw x11, 0xd76, x10	// Restore CSR

// Testing CSR 0xd77
	csrr x7, 0xd77	// Read CSR
	li x5, -1
	csrrw x15, 0xd77, x5	// Write all 1s to CSR
	csrrw x15, 0xd77, x0	// Write all 0s to CSR
	csrrw x15, 0xd77, x7	// Restore CSR

// Testing CSR 0xd78
	csrr x16, 0xd78	// Read CSR
	li x26, -1
	csrrw x29, 0xd78, x26	// Write all 1s to CSR
	csrrw x29, 0xd78, x0	// Write all 0s to CSR
	csrrw x29, 0xd78, x16	// Restore CSR

// Testing CSR 0xd79
	csrr x6, 0xd79	// Read CSR
	li x17, -1
	csrrw x8, 0xd79, x17	// Write all 1s to CSR
	csrrw x8, 0xd79, x0	// Write all 0s to CSR
	csrrw x8, 0xd79, x6	// Restore CSR

// Testing CSR 0xd7a
	csrr x25, 0xd7a	// Read CSR
	li x14, -1
	csrrw x13, 0xd7a, x14	// Write all 1s to CSR
	csrrw x13, 0xd7a, x0	// Write all 0s to CSR
	csrrw x13, 0xd7a, x25	// Restore CSR

// Testing CSR 0xd7b
	csrr x9, 0xd7b	// Read CSR
	li x7, -1
	csrrw x12, 0xd7b, x7	// Write all 1s to CSR
	csrrw x12, 0xd7b, x0	// Write all 0s to CSR
	csrrw x12, 0xd7b, x9	// Restore CSR

// Testing CSR 0xd7c
	csrr x21, 0xd7c	// Read CSR
	li x10, -1
	csrrw x15, 0xd7c, x10	// Write all 1s to CSR
	csrrw x15, 0xd7c, x0	// Write all 0s to CSR
	csrrw x15, 0xd7c, x21	// Restore CSR

// Testing CSR 0xd7d
	csrr x22, 0xd7d	// Read CSR
	li x5, -1
	csrrw x23, 0xd7d, x5	// Write all 1s to CSR
	csrrw x23, 0xd7d, x0	// Write all 0s to CSR
	csrrw x23, 0xd7d, x22	// Restore CSR

// Testing CSR 0xd7e
	csrr x14, 0xd7e	// Read CSR
	li x13, -1
	csrrw x15, 0xd7e, x13	// Write all 1s to CSR
	csrrw x15, 0xd7e, x0	// Write all 0s to CSR
	csrrw x15, 0xd7e, x14	// Restore CSR

// Testing CSR 0xd7f
	csrr x14, 0xd7f	// Read CSR
	li x24, -1
	csrrw x7, 0xd7f, x24	// Write all 1s to CSR
	csrrw x7, 0xd7f, x0	// Write all 0s to CSR
	csrrw x7, 0xd7f, x14	// Restore CSR

// Testing CSR 0xd80
	csrr x29, 0xd80	// Read CSR
	li x20, -1
	csrrw x2, 0xd80, x20	// Write all 1s to CSR
	csrrw x2, 0xd80, x0	// Write all 0s to CSR
	csrrw x2, 0xd80, x29	// Restore CSR

// Testing CSR 0xd81
	csrr x9, 0xd81	// Read CSR
	li x19, -1
	csrrw x17, 0xd81, x19	// Write all 1s to CSR
	csrrw x17, 0xd81, x0	// Write all 0s to CSR
	csrrw x17, 0xd81, x9	// Restore CSR

// Testing CSR 0xd82
	csrr x24, 0xd82	// Read CSR
	li x2, -1
	csrrw x22, 0xd82, x2	// Write all 1s to CSR
	csrrw x22, 0xd82, x0	// Write all 0s to CSR
	csrrw x22, 0xd82, x24	// Restore CSR

// Testing CSR 0xd83
	csrr x16, 0xd83	// Read CSR
	li x19, -1
	csrrw x28, 0xd83, x19	// Write all 1s to CSR
	csrrw x28, 0xd83, x0	// Write all 0s to CSR
	csrrw x28, 0xd83, x16	// Restore CSR

// Testing CSR 0xd84
	csrr x2, 0xd84	// Read CSR
	li x14, -1
	csrrw x20, 0xd84, x14	// Write all 1s to CSR
	csrrw x20, 0xd84, x0	// Write all 0s to CSR
	csrrw x20, 0xd84, x2	// Restore CSR

// Testing CSR 0xd85
	csrr x20, 0xd85	// Read CSR
	li x30, -1
	csrrw x6, 0xd85, x30	// Write all 1s to CSR
	csrrw x6, 0xd85, x0	// Write all 0s to CSR
	csrrw x6, 0xd85, x20	// Restore CSR

// Testing CSR 0xd86
	csrr x1, 0xd86	// Read CSR
	li x9, -1
	csrrw x20, 0xd86, x9	// Write all 1s to CSR
	csrrw x20, 0xd86, x0	// Write all 0s to CSR
	csrrw x20, 0xd86, x1	// Restore CSR

// Testing CSR 0xd87
	csrr x29, 0xd87	// Read CSR
	li x6, -1
	csrrw x3, 0xd87, x6	// Write all 1s to CSR
	csrrw x3, 0xd87, x0	// Write all 0s to CSR
	csrrw x3, 0xd87, x29	// Restore CSR

// Testing CSR 0xd88
	csrr x27, 0xd88	// Read CSR
	li x2, -1
	csrrw x9, 0xd88, x2	// Write all 1s to CSR
	csrrw x9, 0xd88, x0	// Write all 0s to CSR
	csrrw x9, 0xd88, x27	// Restore CSR

// Testing CSR 0xd89
	csrr x11, 0xd89	// Read CSR
	li x31, -1
	csrrw x1, 0xd89, x31	// Write all 1s to CSR
	csrrw x1, 0xd89, x0	// Write all 0s to CSR
	csrrw x1, 0xd89, x11	// Restore CSR

// Testing CSR 0xd8a
	csrr x23, 0xd8a	// Read CSR
	li x10, -1
	csrrw x28, 0xd8a, x10	// Write all 1s to CSR
	csrrw x28, 0xd8a, x0	// Write all 0s to CSR
	csrrw x28, 0xd8a, x23	// Restore CSR

// Testing CSR 0xd8b
	csrr x13, 0xd8b	// Read CSR
	li x4, -1
	csrrw x14, 0xd8b, x4	// Write all 1s to CSR
	csrrw x14, 0xd8b, x0	// Write all 0s to CSR
	csrrw x14, 0xd8b, x13	// Restore CSR

// Testing CSR 0xd8c
	csrr x24, 0xd8c	// Read CSR
	li x11, -1
	csrrw x25, 0xd8c, x11	// Write all 1s to CSR
	csrrw x25, 0xd8c, x0	// Write all 0s to CSR
	csrrw x25, 0xd8c, x24	// Restore CSR

// Testing CSR 0xd8d
	csrr x7, 0xd8d	// Read CSR
	li x23, -1
	csrrw x30, 0xd8d, x23	// Write all 1s to CSR
	csrrw x30, 0xd8d, x0	// Write all 0s to CSR
	csrrw x30, 0xd8d, x7	// Restore CSR

// Testing CSR 0xd8e
	csrr x27, 0xd8e	// Read CSR
	li x26, -1
	csrrw x8, 0xd8e, x26	// Write all 1s to CSR
	csrrw x8, 0xd8e, x0	// Write all 0s to CSR
	csrrw x8, 0xd8e, x27	// Restore CSR

// Testing CSR 0xd8f
	csrr x6, 0xd8f	// Read CSR
	li x28, -1
	csrrw x20, 0xd8f, x28	// Write all 1s to CSR
	csrrw x20, 0xd8f, x0	// Write all 0s to CSR
	csrrw x20, 0xd8f, x6	// Restore CSR

// Testing CSR 0xd90
	csrr x15, 0xd90	// Read CSR
	li x27, -1
	csrrw x29, 0xd90, x27	// Write all 1s to CSR
	csrrw x29, 0xd90, x0	// Write all 0s to CSR
	csrrw x29, 0xd90, x15	// Restore CSR

// Testing CSR 0xd91
	csrr x13, 0xd91	// Read CSR
	li x11, -1
	csrrw x27, 0xd91, x11	// Write all 1s to CSR
	csrrw x27, 0xd91, x0	// Write all 0s to CSR
	csrrw x27, 0xd91, x13	// Restore CSR

// Testing CSR 0xd92
	csrr x15, 0xd92	// Read CSR
	li x18, -1
	csrrw x24, 0xd92, x18	// Write all 1s to CSR
	csrrw x24, 0xd92, x0	// Write all 0s to CSR
	csrrw x24, 0xd92, x15	// Restore CSR

// Testing CSR 0xd93
	csrr x5, 0xd93	// Read CSR
	li x27, -1
	csrrw x19, 0xd93, x27	// Write all 1s to CSR
	csrrw x19, 0xd93, x0	// Write all 0s to CSR
	csrrw x19, 0xd93, x5	// Restore CSR

// Testing CSR 0xd94
	csrr x4, 0xd94	// Read CSR
	li x24, -1
	csrrw x25, 0xd94, x24	// Write all 1s to CSR
	csrrw x25, 0xd94, x0	// Write all 0s to CSR
	csrrw x25, 0xd94, x4	// Restore CSR

// Testing CSR 0xd95
	csrr x10, 0xd95	// Read CSR
	li x15, -1
	csrrw x20, 0xd95, x15	// Write all 1s to CSR
	csrrw x20, 0xd95, x0	// Write all 0s to CSR
	csrrw x20, 0xd95, x10	// Restore CSR

// Testing CSR 0xd96
	csrr x28, 0xd96	// Read CSR
	li x4, -1
	csrrw x5, 0xd96, x4	// Write all 1s to CSR
	csrrw x5, 0xd96, x0	// Write all 0s to CSR
	csrrw x5, 0xd96, x28	// Restore CSR

// Testing CSR 0xd97
	csrr x26, 0xd97	// Read CSR
	li x10, -1
	csrrw x18, 0xd97, x10	// Write all 1s to CSR
	csrrw x18, 0xd97, x0	// Write all 0s to CSR
	csrrw x18, 0xd97, x26	// Restore CSR

// Testing CSR 0xd98
	csrr x8, 0xd98	// Read CSR
	li x21, -1
	csrrw x17, 0xd98, x21	// Write all 1s to CSR
	csrrw x17, 0xd98, x0	// Write all 0s to CSR
	csrrw x17, 0xd98, x8	// Restore CSR

// Testing CSR 0xd99
	csrr x11, 0xd99	// Read CSR
	li x25, -1
	csrrw x22, 0xd99, x25	// Write all 1s to CSR
	csrrw x22, 0xd99, x0	// Write all 0s to CSR
	csrrw x22, 0xd99, x11	// Restore CSR

// Testing CSR 0xd9a
	csrr x14, 0xd9a	// Read CSR
	li x30, -1
	csrrw x19, 0xd9a, x30	// Write all 1s to CSR
	csrrw x19, 0xd9a, x0	// Write all 0s to CSR
	csrrw x19, 0xd9a, x14	// Restore CSR

// Testing CSR 0xd9b
	csrr x11, 0xd9b	// Read CSR
	li x25, -1
	csrrw x3, 0xd9b, x25	// Write all 1s to CSR
	csrrw x3, 0xd9b, x0	// Write all 0s to CSR
	csrrw x3, 0xd9b, x11	// Restore CSR

// Testing CSR 0xd9c
	csrr x29, 0xd9c	// Read CSR
	li x12, -1
	csrrw x16, 0xd9c, x12	// Write all 1s to CSR
	csrrw x16, 0xd9c, x0	// Write all 0s to CSR
	csrrw x16, 0xd9c, x29	// Restore CSR

// Testing CSR 0xd9d
	csrr x1, 0xd9d	// Read CSR
	li x4, -1
	csrrw x5, 0xd9d, x4	// Write all 1s to CSR
	csrrw x5, 0xd9d, x0	// Write all 0s to CSR
	csrrw x5, 0xd9d, x1	// Restore CSR

// Testing CSR 0xd9e
	csrr x5, 0xd9e	// Read CSR
	li x22, -1
	csrrw x9, 0xd9e, x22	// Write all 1s to CSR
	csrrw x9, 0xd9e, x0	// Write all 0s to CSR
	csrrw x9, 0xd9e, x5	// Restore CSR

// Testing CSR 0xd9f
	csrr x9, 0xd9f	// Read CSR
	li x29, -1
	csrrw x5, 0xd9f, x29	// Write all 1s to CSR
	csrrw x5, 0xd9f, x0	// Write all 0s to CSR
	csrrw x5, 0xd9f, x9	// Restore CSR

// Testing CSR 0xda0
	csrr x26, 0xda0	// Read CSR
	li x30, -1
	csrrw x8, 0xda0, x30	// Write all 1s to CSR
	csrrw x8, 0xda0, x0	// Write all 0s to CSR
	csrrw x8, 0xda0, x26	// Restore CSR

// Testing CSR 0xda1
	csrr x6, 0xda1	// Read CSR
	li x12, -1
	csrrw x11, 0xda1, x12	// Write all 1s to CSR
	csrrw x11, 0xda1, x0	// Write all 0s to CSR
	csrrw x11, 0xda1, x6	// Restore CSR

// Testing CSR 0xda2
	csrr x22, 0xda2	// Read CSR
	li x17, -1
	csrrw x8, 0xda2, x17	// Write all 1s to CSR
	csrrw x8, 0xda2, x0	// Write all 0s to CSR
	csrrw x8, 0xda2, x22	// Restore CSR

// Testing CSR 0xda3
	csrr x28, 0xda3	// Read CSR
	li x31, -1
	csrrw x25, 0xda3, x31	// Write all 1s to CSR
	csrrw x25, 0xda3, x0	// Write all 0s to CSR
	csrrw x25, 0xda3, x28	// Restore CSR

// Testing CSR 0xda4
	csrr x8, 0xda4	// Read CSR
	li x19, -1
	csrrw x2, 0xda4, x19	// Write all 1s to CSR
	csrrw x2, 0xda4, x0	// Write all 0s to CSR
	csrrw x2, 0xda4, x8	// Restore CSR

// Testing CSR 0xda5
	csrr x28, 0xda5	// Read CSR
	li x17, -1
	csrrw x22, 0xda5, x17	// Write all 1s to CSR
	csrrw x22, 0xda5, x0	// Write all 0s to CSR
	csrrw x22, 0xda5, x28	// Restore CSR

// Testing CSR 0xda6
	csrr x7, 0xda6	// Read CSR
	li x18, -1
	csrrw x16, 0xda6, x18	// Write all 1s to CSR
	csrrw x16, 0xda6, x0	// Write all 0s to CSR
	csrrw x16, 0xda6, x7	// Restore CSR

// Testing CSR 0xda7
	csrr x27, 0xda7	// Read CSR
	li x12, -1
	csrrw x6, 0xda7, x12	// Write all 1s to CSR
	csrrw x6, 0xda7, x0	// Write all 0s to CSR
	csrrw x6, 0xda7, x27	// Restore CSR

// Testing CSR 0xda8
	csrr x13, 0xda8	// Read CSR
	li x16, -1
	csrrw x7, 0xda8, x16	// Write all 1s to CSR
	csrrw x7, 0xda8, x0	// Write all 0s to CSR
	csrrw x7, 0xda8, x13	// Restore CSR

// Testing CSR 0xda9
	csrr x27, 0xda9	// Read CSR
	li x15, -1
	csrrw x18, 0xda9, x15	// Write all 1s to CSR
	csrrw x18, 0xda9, x0	// Write all 0s to CSR
	csrrw x18, 0xda9, x27	// Restore CSR

// Testing CSR 0xdaa
	csrr x13, 0xdaa	// Read CSR
	li x23, -1
	csrrw x10, 0xdaa, x23	// Write all 1s to CSR
	csrrw x10, 0xdaa, x0	// Write all 0s to CSR
	csrrw x10, 0xdaa, x13	// Restore CSR

// Testing CSR 0xdab
	csrr x31, 0xdab	// Read CSR
	li x8, -1
	csrrw x4, 0xdab, x8	// Write all 1s to CSR
	csrrw x4, 0xdab, x0	// Write all 0s to CSR
	csrrw x4, 0xdab, x31	// Restore CSR

// Testing CSR 0xdac
	csrr x17, 0xdac	// Read CSR
	li x24, -1
	csrrw x15, 0xdac, x24	// Write all 1s to CSR
	csrrw x15, 0xdac, x0	// Write all 0s to CSR
	csrrw x15, 0xdac, x17	// Restore CSR

// Testing CSR 0xdad
	csrr x26, 0xdad	// Read CSR
	li x14, -1
	csrrw x20, 0xdad, x14	// Write all 1s to CSR
	csrrw x20, 0xdad, x0	// Write all 0s to CSR
	csrrw x20, 0xdad, x26	// Restore CSR

// Testing CSR 0xdae
	csrr x28, 0xdae	// Read CSR
	li x24, -1
	csrrw x9, 0xdae, x24	// Write all 1s to CSR
	csrrw x9, 0xdae, x0	// Write all 0s to CSR
	csrrw x9, 0xdae, x28	// Restore CSR

// Testing CSR 0xdaf
	csrr x11, 0xdaf	// Read CSR
	li x3, -1
	csrrw x4, 0xdaf, x3	// Write all 1s to CSR
	csrrw x4, 0xdaf, x0	// Write all 0s to CSR
	csrrw x4, 0xdaf, x11	// Restore CSR

// Testing CSR 0xdb0
	csrr x25, 0xdb0	// Read CSR
	li x5, -1
	csrrw x21, 0xdb0, x5	// Write all 1s to CSR
	csrrw x21, 0xdb0, x0	// Write all 0s to CSR
	csrrw x21, 0xdb0, x25	// Restore CSR

// Testing CSR 0xdb1
	csrr x27, 0xdb1	// Read CSR
	li x8, -1
	csrrw x16, 0xdb1, x8	// Write all 1s to CSR
	csrrw x16, 0xdb1, x0	// Write all 0s to CSR
	csrrw x16, 0xdb1, x27	// Restore CSR

// Testing CSR 0xdb2
	csrr x18, 0xdb2	// Read CSR
	li x6, -1
	csrrw x2, 0xdb2, x6	// Write all 1s to CSR
	csrrw x2, 0xdb2, x0	// Write all 0s to CSR
	csrrw x2, 0xdb2, x18	// Restore CSR

// Testing CSR 0xdb3
	csrr x15, 0xdb3	// Read CSR
	li x6, -1
	csrrw x17, 0xdb3, x6	// Write all 1s to CSR
	csrrw x17, 0xdb3, x0	// Write all 0s to CSR
	csrrw x17, 0xdb3, x15	// Restore CSR

// Testing CSR 0xdb4
	csrr x24, 0xdb4	// Read CSR
	li x16, -1
	csrrw x5, 0xdb4, x16	// Write all 1s to CSR
	csrrw x5, 0xdb4, x0	// Write all 0s to CSR
	csrrw x5, 0xdb4, x24	// Restore CSR

// Testing CSR 0xdb5
	csrr x1, 0xdb5	// Read CSR
	li x8, -1
	csrrw x6, 0xdb5, x8	// Write all 1s to CSR
	csrrw x6, 0xdb5, x0	// Write all 0s to CSR
	csrrw x6, 0xdb5, x1	// Restore CSR

// Testing CSR 0xdb6
	csrr x7, 0xdb6	// Read CSR
	li x20, -1
	csrrw x2, 0xdb6, x20	// Write all 1s to CSR
	csrrw x2, 0xdb6, x0	// Write all 0s to CSR
	csrrw x2, 0xdb6, x7	// Restore CSR

// Testing CSR 0xdb7
	csrr x11, 0xdb7	// Read CSR
	li x12, -1
	csrrw x25, 0xdb7, x12	// Write all 1s to CSR
	csrrw x25, 0xdb7, x0	// Write all 0s to CSR
	csrrw x25, 0xdb7, x11	// Restore CSR

// Testing CSR 0xdb8
	csrr x16, 0xdb8	// Read CSR
	li x10, -1
	csrrw x31, 0xdb8, x10	// Write all 1s to CSR
	csrrw x31, 0xdb8, x0	// Write all 0s to CSR
	csrrw x31, 0xdb8, x16	// Restore CSR

// Testing CSR 0xdb9
	csrr x26, 0xdb9	// Read CSR
	li x11, -1
	csrrw x19, 0xdb9, x11	// Write all 1s to CSR
	csrrw x19, 0xdb9, x0	// Write all 0s to CSR
	csrrw x19, 0xdb9, x26	// Restore CSR

// Testing CSR 0xdba
	csrr x11, 0xdba	// Read CSR
	li x10, -1
	csrrw x3, 0xdba, x10	// Write all 1s to CSR
	csrrw x3, 0xdba, x0	// Write all 0s to CSR
	csrrw x3, 0xdba, x11	// Restore CSR

// Testing CSR 0xdbb
	csrr x21, 0xdbb	// Read CSR
	li x13, -1
	csrrw x29, 0xdbb, x13	// Write all 1s to CSR
	csrrw x29, 0xdbb, x0	// Write all 0s to CSR
	csrrw x29, 0xdbb, x21	// Restore CSR

// Testing CSR 0xdbc
	csrr x3, 0xdbc	// Read CSR
	li x23, -1
	csrrw x25, 0xdbc, x23	// Write all 1s to CSR
	csrrw x25, 0xdbc, x0	// Write all 0s to CSR
	csrrw x25, 0xdbc, x3	// Restore CSR

// Testing CSR 0xdbd
	csrr x16, 0xdbd	// Read CSR
	li x30, -1
	csrrw x20, 0xdbd, x30	// Write all 1s to CSR
	csrrw x20, 0xdbd, x0	// Write all 0s to CSR
	csrrw x20, 0xdbd, x16	// Restore CSR

// Testing CSR 0xdbe
	csrr x21, 0xdbe	// Read CSR
	li x11, -1
	csrrw x19, 0xdbe, x11	// Write all 1s to CSR
	csrrw x19, 0xdbe, x0	// Write all 0s to CSR
	csrrw x19, 0xdbe, x21	// Restore CSR

// Testing CSR 0xdbf
	csrr x12, 0xdbf	// Read CSR
	li x26, -1
	csrrw x14, 0xdbf, x26	// Write all 1s to CSR
	csrrw x14, 0xdbf, x0	// Write all 0s to CSR
	csrrw x14, 0xdbf, x12	// Restore CSR

// Testing CSR 0xdc0
	csrr x4, 0xdc0	// Read CSR
	li x24, -1
	csrrw x22, 0xdc0, x24	// Write all 1s to CSR
	csrrw x22, 0xdc0, x0	// Write all 0s to CSR
	csrrw x22, 0xdc0, x4	// Restore CSR

// Testing CSR 0xdc1
	csrr x1, 0xdc1	// Read CSR
	li x5, -1
	csrrw x18, 0xdc1, x5	// Write all 1s to CSR
	csrrw x18, 0xdc1, x0	// Write all 0s to CSR
	csrrw x18, 0xdc1, x1	// Restore CSR

// Testing CSR 0xdc2
	csrr x19, 0xdc2	// Read CSR
	li x12, -1
	csrrw x26, 0xdc2, x12	// Write all 1s to CSR
	csrrw x26, 0xdc2, x0	// Write all 0s to CSR
	csrrw x26, 0xdc2, x19	// Restore CSR

// Testing CSR 0xdc3
	csrr x29, 0xdc3	// Read CSR
	li x8, -1
	csrrw x1, 0xdc3, x8	// Write all 1s to CSR
	csrrw x1, 0xdc3, x0	// Write all 0s to CSR
	csrrw x1, 0xdc3, x29	// Restore CSR

// Testing CSR 0xdc4
	csrr x3, 0xdc4	// Read CSR
	li x18, -1
	csrrw x4, 0xdc4, x18	// Write all 1s to CSR
	csrrw x4, 0xdc4, x0	// Write all 0s to CSR
	csrrw x4, 0xdc4, x3	// Restore CSR

// Testing CSR 0xdc5
	csrr x22, 0xdc5	// Read CSR
	li x10, -1
	csrrw x14, 0xdc5, x10	// Write all 1s to CSR
	csrrw x14, 0xdc5, x0	// Write all 0s to CSR
	csrrw x14, 0xdc5, x22	// Restore CSR

// Testing CSR 0xdc6
	csrr x13, 0xdc6	// Read CSR
	li x10, -1
	csrrw x27, 0xdc6, x10	// Write all 1s to CSR
	csrrw x27, 0xdc6, x0	// Write all 0s to CSR
	csrrw x27, 0xdc6, x13	// Restore CSR

// Testing CSR 0xdc7
	csrr x11, 0xdc7	// Read CSR
	li x16, -1
	csrrw x2, 0xdc7, x16	// Write all 1s to CSR
	csrrw x2, 0xdc7, x0	// Write all 0s to CSR
	csrrw x2, 0xdc7, x11	// Restore CSR

// Testing CSR 0xdc8
	csrr x25, 0xdc8	// Read CSR
	li x8, -1
	csrrw x9, 0xdc8, x8	// Write all 1s to CSR
	csrrw x9, 0xdc8, x0	// Write all 0s to CSR
	csrrw x9, 0xdc8, x25	// Restore CSR

// Testing CSR 0xdc9
	csrr x23, 0xdc9	// Read CSR
	li x11, -1
	csrrw x14, 0xdc9, x11	// Write all 1s to CSR
	csrrw x14, 0xdc9, x0	// Write all 0s to CSR
	csrrw x14, 0xdc9, x23	// Restore CSR

// Testing CSR 0xdca
	csrr x26, 0xdca	// Read CSR
	li x28, -1
	csrrw x11, 0xdca, x28	// Write all 1s to CSR
	csrrw x11, 0xdca, x0	// Write all 0s to CSR
	csrrw x11, 0xdca, x26	// Restore CSR

// Testing CSR 0xdcb
	csrr x2, 0xdcb	// Read CSR
	li x3, -1
	csrrw x11, 0xdcb, x3	// Write all 1s to CSR
	csrrw x11, 0xdcb, x0	// Write all 0s to CSR
	csrrw x11, 0xdcb, x2	// Restore CSR

// Testing CSR 0xdcc
	csrr x28, 0xdcc	// Read CSR
	li x19, -1
	csrrw x27, 0xdcc, x19	// Write all 1s to CSR
	csrrw x27, 0xdcc, x0	// Write all 0s to CSR
	csrrw x27, 0xdcc, x28	// Restore CSR

// Testing CSR 0xdcd
	csrr x5, 0xdcd	// Read CSR
	li x24, -1
	csrrw x2, 0xdcd, x24	// Write all 1s to CSR
	csrrw x2, 0xdcd, x0	// Write all 0s to CSR
	csrrw x2, 0xdcd, x5	// Restore CSR

// Testing CSR 0xdce
	csrr x29, 0xdce	// Read CSR
	li x30, -1
	csrrw x10, 0xdce, x30	// Write all 1s to CSR
	csrrw x10, 0xdce, x0	// Write all 0s to CSR
	csrrw x10, 0xdce, x29	// Restore CSR

// Testing CSR 0xdcf
	csrr x19, 0xdcf	// Read CSR
	li x25, -1
	csrrw x9, 0xdcf, x25	// Write all 1s to CSR
	csrrw x9, 0xdcf, x0	// Write all 0s to CSR
	csrrw x9, 0xdcf, x19	// Restore CSR

// Testing CSR 0xdd0
	csrr x29, 0xdd0	// Read CSR
	li x26, -1
	csrrw x20, 0xdd0, x26	// Write all 1s to CSR
	csrrw x20, 0xdd0, x0	// Write all 0s to CSR
	csrrw x20, 0xdd0, x29	// Restore CSR

// Testing CSR 0xdd1
	csrr x28, 0xdd1	// Read CSR
	li x26, -1
	csrrw x24, 0xdd1, x26	// Write all 1s to CSR
	csrrw x24, 0xdd1, x0	// Write all 0s to CSR
	csrrw x24, 0xdd1, x28	// Restore CSR

// Testing CSR 0xdd2
	csrr x27, 0xdd2	// Read CSR
	li x8, -1
	csrrw x21, 0xdd2, x8	// Write all 1s to CSR
	csrrw x21, 0xdd2, x0	// Write all 0s to CSR
	csrrw x21, 0xdd2, x27	// Restore CSR

// Testing CSR 0xdd3
	csrr x17, 0xdd3	// Read CSR
	li x26, -1
	csrrw x11, 0xdd3, x26	// Write all 1s to CSR
	csrrw x11, 0xdd3, x0	// Write all 0s to CSR
	csrrw x11, 0xdd3, x17	// Restore CSR

// Testing CSR 0xdd4
	csrr x29, 0xdd4	// Read CSR
	li x18, -1
	csrrw x7, 0xdd4, x18	// Write all 1s to CSR
	csrrw x7, 0xdd4, x0	// Write all 0s to CSR
	csrrw x7, 0xdd4, x29	// Restore CSR

// Testing CSR 0xdd5
	csrr x27, 0xdd5	// Read CSR
	li x7, -1
	csrrw x5, 0xdd5, x7	// Write all 1s to CSR
	csrrw x5, 0xdd5, x0	// Write all 0s to CSR
	csrrw x5, 0xdd5, x27	// Restore CSR

// Testing CSR 0xdd6
	csrr x20, 0xdd6	// Read CSR
	li x15, -1
	csrrw x29, 0xdd6, x15	// Write all 1s to CSR
	csrrw x29, 0xdd6, x0	// Write all 0s to CSR
	csrrw x29, 0xdd6, x20	// Restore CSR

// Testing CSR 0xdd7
	csrr x13, 0xdd7	// Read CSR
	li x27, -1
	csrrw x23, 0xdd7, x27	// Write all 1s to CSR
	csrrw x23, 0xdd7, x0	// Write all 0s to CSR
	csrrw x23, 0xdd7, x13	// Restore CSR

// Testing CSR 0xdd8
	csrr x5, 0xdd8	// Read CSR
	li x3, -1
	csrrw x9, 0xdd8, x3	// Write all 1s to CSR
	csrrw x9, 0xdd8, x0	// Write all 0s to CSR
	csrrw x9, 0xdd8, x5	// Restore CSR

// Testing CSR 0xdd9
	csrr x24, 0xdd9	// Read CSR
	li x30, -1
	csrrw x31, 0xdd9, x30	// Write all 1s to CSR
	csrrw x31, 0xdd9, x0	// Write all 0s to CSR
	csrrw x31, 0xdd9, x24	// Restore CSR

// Testing CSR 0xdda
	csrr x24, 0xdda	// Read CSR
	li x28, -1
	csrrw x13, 0xdda, x28	// Write all 1s to CSR
	csrrw x13, 0xdda, x0	// Write all 0s to CSR
	csrrw x13, 0xdda, x24	// Restore CSR

// Testing CSR 0xddb
	csrr x11, 0xddb	// Read CSR
	li x22, -1
	csrrw x10, 0xddb, x22	// Write all 1s to CSR
	csrrw x10, 0xddb, x0	// Write all 0s to CSR
	csrrw x10, 0xddb, x11	// Restore CSR

// Testing CSR 0xddc
	csrr x21, 0xddc	// Read CSR
	li x29, -1
	csrrw x14, 0xddc, x29	// Write all 1s to CSR
	csrrw x14, 0xddc, x0	// Write all 0s to CSR
	csrrw x14, 0xddc, x21	// Restore CSR

// Testing CSR 0xddd
	csrr x11, 0xddd	// Read CSR
	li x29, -1
	csrrw x31, 0xddd, x29	// Write all 1s to CSR
	csrrw x31, 0xddd, x0	// Write all 0s to CSR
	csrrw x31, 0xddd, x11	// Restore CSR

// Testing CSR 0xdde
	csrr x26, 0xdde	// Read CSR
	li x21, -1
	csrrw x31, 0xdde, x21	// Write all 1s to CSR
	csrrw x31, 0xdde, x0	// Write all 0s to CSR
	csrrw x31, 0xdde, x26	// Restore CSR

// Testing CSR 0xddf
	csrr x7, 0xddf	// Read CSR
	li x21, -1
	csrrw x28, 0xddf, x21	// Write all 1s to CSR
	csrrw x28, 0xddf, x0	// Write all 0s to CSR
	csrrw x28, 0xddf, x7	// Restore CSR

// Testing CSR 0xde0
	csrr x1, 0xde0	// Read CSR
	li x26, -1
	csrrw x25, 0xde0, x26	// Write all 1s to CSR
	csrrw x25, 0xde0, x0	// Write all 0s to CSR
	csrrw x25, 0xde0, x1	// Restore CSR

// Testing CSR 0xde1
	csrr x29, 0xde1	// Read CSR
	li x26, -1
	csrrw x21, 0xde1, x26	// Write all 1s to CSR
	csrrw x21, 0xde1, x0	// Write all 0s to CSR
	csrrw x21, 0xde1, x29	// Restore CSR

// Testing CSR 0xde2
	csrr x14, 0xde2	// Read CSR
	li x5, -1
	csrrw x11, 0xde2, x5	// Write all 1s to CSR
	csrrw x11, 0xde2, x0	// Write all 0s to CSR
	csrrw x11, 0xde2, x14	// Restore CSR

// Testing CSR 0xde3
	csrr x3, 0xde3	// Read CSR
	li x31, -1
	csrrw x5, 0xde3, x31	// Write all 1s to CSR
	csrrw x5, 0xde3, x0	// Write all 0s to CSR
	csrrw x5, 0xde3, x3	// Restore CSR

// Testing CSR 0xde4
	csrr x8, 0xde4	// Read CSR
	li x17, -1
	csrrw x5, 0xde4, x17	// Write all 1s to CSR
	csrrw x5, 0xde4, x0	// Write all 0s to CSR
	csrrw x5, 0xde4, x8	// Restore CSR

// Testing CSR 0xde5
	csrr x16, 0xde5	// Read CSR
	li x10, -1
	csrrw x19, 0xde5, x10	// Write all 1s to CSR
	csrrw x19, 0xde5, x0	// Write all 0s to CSR
	csrrw x19, 0xde5, x16	// Restore CSR

// Testing CSR 0xde6
	csrr x2, 0xde6	// Read CSR
	li x15, -1
	csrrw x31, 0xde6, x15	// Write all 1s to CSR
	csrrw x31, 0xde6, x0	// Write all 0s to CSR
	csrrw x31, 0xde6, x2	// Restore CSR

// Testing CSR 0xde7
	csrr x23, 0xde7	// Read CSR
	li x15, -1
	csrrw x18, 0xde7, x15	// Write all 1s to CSR
	csrrw x18, 0xde7, x0	// Write all 0s to CSR
	csrrw x18, 0xde7, x23	// Restore CSR

// Testing CSR 0xde8
	csrr x5, 0xde8	// Read CSR
	li x21, -1
	csrrw x17, 0xde8, x21	// Write all 1s to CSR
	csrrw x17, 0xde8, x0	// Write all 0s to CSR
	csrrw x17, 0xde8, x5	// Restore CSR

// Testing CSR 0xde9
	csrr x28, 0xde9	// Read CSR
	li x13, -1
	csrrw x3, 0xde9, x13	// Write all 1s to CSR
	csrrw x3, 0xde9, x0	// Write all 0s to CSR
	csrrw x3, 0xde9, x28	// Restore CSR

// Testing CSR 0xdea
	csrr x20, 0xdea	// Read CSR
	li x28, -1
	csrrw x8, 0xdea, x28	// Write all 1s to CSR
	csrrw x8, 0xdea, x0	// Write all 0s to CSR
	csrrw x8, 0xdea, x20	// Restore CSR

// Testing CSR 0xdeb
	csrr x27, 0xdeb	// Read CSR
	li x29, -1
	csrrw x15, 0xdeb, x29	// Write all 1s to CSR
	csrrw x15, 0xdeb, x0	// Write all 0s to CSR
	csrrw x15, 0xdeb, x27	// Restore CSR

// Testing CSR 0xdec
	csrr x21, 0xdec	// Read CSR
	li x14, -1
	csrrw x18, 0xdec, x14	// Write all 1s to CSR
	csrrw x18, 0xdec, x0	// Write all 0s to CSR
	csrrw x18, 0xdec, x21	// Restore CSR

// Testing CSR 0xded
	csrr x11, 0xded	// Read CSR
	li x18, -1
	csrrw x8, 0xded, x18	// Write all 1s to CSR
	csrrw x8, 0xded, x0	// Write all 0s to CSR
	csrrw x8, 0xded, x11	// Restore CSR

// Testing CSR 0xdee
	csrr x2, 0xdee	// Read CSR
	li x27, -1
	csrrw x29, 0xdee, x27	// Write all 1s to CSR
	csrrw x29, 0xdee, x0	// Write all 0s to CSR
	csrrw x29, 0xdee, x2	// Restore CSR

// Testing CSR 0xdef
	csrr x1, 0xdef	// Read CSR
	li x9, -1
	csrrw x20, 0xdef, x9	// Write all 1s to CSR
	csrrw x20, 0xdef, x0	// Write all 0s to CSR
	csrrw x20, 0xdef, x1	// Restore CSR

// Testing CSR 0xdf0
	csrr x13, 0xdf0	// Read CSR
	li x23, -1
	csrrw x5, 0xdf0, x23	// Write all 1s to CSR
	csrrw x5, 0xdf0, x0	// Write all 0s to CSR
	csrrw x5, 0xdf0, x13	// Restore CSR

// Testing CSR 0xdf1
	csrr x8, 0xdf1	// Read CSR
	li x26, -1
	csrrw x21, 0xdf1, x26	// Write all 1s to CSR
	csrrw x21, 0xdf1, x0	// Write all 0s to CSR
	csrrw x21, 0xdf1, x8	// Restore CSR

// Testing CSR 0xdf2
	csrr x29, 0xdf2	// Read CSR
	li x28, -1
	csrrw x20, 0xdf2, x28	// Write all 1s to CSR
	csrrw x20, 0xdf2, x0	// Write all 0s to CSR
	csrrw x20, 0xdf2, x29	// Restore CSR

// Testing CSR 0xdf3
	csrr x14, 0xdf3	// Read CSR
	li x28, -1
	csrrw x20, 0xdf3, x28	// Write all 1s to CSR
	csrrw x20, 0xdf3, x0	// Write all 0s to CSR
	csrrw x20, 0xdf3, x14	// Restore CSR

// Testing CSR 0xdf4
	csrr x28, 0xdf4	// Read CSR
	li x17, -1
	csrrw x31, 0xdf4, x17	// Write all 1s to CSR
	csrrw x31, 0xdf4, x0	// Write all 0s to CSR
	csrrw x31, 0xdf4, x28	// Restore CSR

// Testing CSR 0xdf5
	csrr x28, 0xdf5	// Read CSR
	li x25, -1
	csrrw x6, 0xdf5, x25	// Write all 1s to CSR
	csrrw x6, 0xdf5, x0	// Write all 0s to CSR
	csrrw x6, 0xdf5, x28	// Restore CSR

// Testing CSR 0xdf6
	csrr x31, 0xdf6	// Read CSR
	li x5, -1
	csrrw x22, 0xdf6, x5	// Write all 1s to CSR
	csrrw x22, 0xdf6, x0	// Write all 0s to CSR
	csrrw x22, 0xdf6, x31	// Restore CSR

// Testing CSR 0xdf7
	csrr x2, 0xdf7	// Read CSR
	li x24, -1
	csrrw x8, 0xdf7, x24	// Write all 1s to CSR
	csrrw x8, 0xdf7, x0	// Write all 0s to CSR
	csrrw x8, 0xdf7, x2	// Restore CSR

// Testing CSR 0xdf8
	csrr x30, 0xdf8	// Read CSR
	li x31, -1
	csrrw x4, 0xdf8, x31	// Write all 1s to CSR
	csrrw x4, 0xdf8, x0	// Write all 0s to CSR
	csrrw x4, 0xdf8, x30	// Restore CSR

// Testing CSR 0xdf9
	csrr x19, 0xdf9	// Read CSR
	li x1, -1
	csrrw x8, 0xdf9, x1	// Write all 1s to CSR
	csrrw x8, 0xdf9, x0	// Write all 0s to CSR
	csrrw x8, 0xdf9, x19	// Restore CSR

// Testing CSR 0xdfa
	csrr x19, 0xdfa	// Read CSR
	li x4, -1
	csrrw x31, 0xdfa, x4	// Write all 1s to CSR
	csrrw x31, 0xdfa, x0	// Write all 0s to CSR
	csrrw x31, 0xdfa, x19	// Restore CSR

// Testing CSR 0xdfb
	csrr x3, 0xdfb	// Read CSR
	li x21, -1
	csrrw x2, 0xdfb, x21	// Write all 1s to CSR
	csrrw x2, 0xdfb, x0	// Write all 0s to CSR
	csrrw x2, 0xdfb, x3	// Restore CSR

// Testing CSR 0xdfc
	csrr x7, 0xdfc	// Read CSR
	li x8, -1
	csrrw x5, 0xdfc, x8	// Write all 1s to CSR
	csrrw x5, 0xdfc, x0	// Write all 0s to CSR
	csrrw x5, 0xdfc, x7	// Restore CSR

// Testing CSR 0xdfd
	csrr x7, 0xdfd	// Read CSR
	li x11, -1
	csrrw x14, 0xdfd, x11	// Write all 1s to CSR
	csrrw x14, 0xdfd, x0	// Write all 0s to CSR
	csrrw x14, 0xdfd, x7	// Restore CSR

// Testing CSR 0xdfe
	csrr x17, 0xdfe	// Read CSR
	li x30, -1
	csrrw x14, 0xdfe, x30	// Write all 1s to CSR
	csrrw x14, 0xdfe, x0	// Write all 0s to CSR
	csrrw x14, 0xdfe, x17	// Restore CSR

// Testing CSR 0xdff
	csrr x3, 0xdff	// Read CSR
	li x12, -1
	csrrw x19, 0xdff, x12	// Write all 1s to CSR
	csrrw x19, 0xdff, x0	// Write all 0s to CSR
	csrrw x19, 0xdff, x3	// Restore CSR

// Testing CSR 0xe00
	csrr x3, 0xe00	// Read CSR
	li x11, -1
	csrrw x21, 0xe00, x11	// Write all 1s to CSR
	csrrw x21, 0xe00, x0	// Write all 0s to CSR
	csrrw x21, 0xe00, x3	// Restore CSR

// Testing CSR 0xe01
	csrr x26, 0xe01	// Read CSR
	li x13, -1
	csrrw x4, 0xe01, x13	// Write all 1s to CSR
	csrrw x4, 0xe01, x0	// Write all 0s to CSR
	csrrw x4, 0xe01, x26	// Restore CSR

// Testing CSR 0xe02
	csrr x17, 0xe02	// Read CSR
	li x11, -1
	csrrw x2, 0xe02, x11	// Write all 1s to CSR
	csrrw x2, 0xe02, x0	// Write all 0s to CSR
	csrrw x2, 0xe02, x17	// Restore CSR

// Testing CSR 0xe03
	csrr x3, 0xe03	// Read CSR
	li x2, -1
	csrrw x10, 0xe03, x2	// Write all 1s to CSR
	csrrw x10, 0xe03, x0	// Write all 0s to CSR
	csrrw x10, 0xe03, x3	// Restore CSR

// Testing CSR 0xe04
	csrr x10, 0xe04	// Read CSR
	li x23, -1
	csrrw x2, 0xe04, x23	// Write all 1s to CSR
	csrrw x2, 0xe04, x0	// Write all 0s to CSR
	csrrw x2, 0xe04, x10	// Restore CSR

// Testing CSR 0xe05
	csrr x26, 0xe05	// Read CSR
	li x29, -1
	csrrw x6, 0xe05, x29	// Write all 1s to CSR
	csrrw x6, 0xe05, x0	// Write all 0s to CSR
	csrrw x6, 0xe05, x26	// Restore CSR

// Testing CSR 0xe06
	csrr x4, 0xe06	// Read CSR
	li x12, -1
	csrrw x31, 0xe06, x12	// Write all 1s to CSR
	csrrw x31, 0xe06, x0	// Write all 0s to CSR
	csrrw x31, 0xe06, x4	// Restore CSR

// Testing CSR 0xe07
	csrr x12, 0xe07	// Read CSR
	li x10, -1
	csrrw x6, 0xe07, x10	// Write all 1s to CSR
	csrrw x6, 0xe07, x0	// Write all 0s to CSR
	csrrw x6, 0xe07, x12	// Restore CSR

// Testing CSR 0xe08
	csrr x15, 0xe08	// Read CSR
	li x22, -1
	csrrw x14, 0xe08, x22	// Write all 1s to CSR
	csrrw x14, 0xe08, x0	// Write all 0s to CSR
	csrrw x14, 0xe08, x15	// Restore CSR

// Testing CSR 0xe09
	csrr x25, 0xe09	// Read CSR
	li x7, -1
	csrrw x21, 0xe09, x7	// Write all 1s to CSR
	csrrw x21, 0xe09, x0	// Write all 0s to CSR
	csrrw x21, 0xe09, x25	// Restore CSR

// Testing CSR 0xe0a
	csrr x24, 0xe0a	// Read CSR
	li x8, -1
	csrrw x3, 0xe0a, x8	// Write all 1s to CSR
	csrrw x3, 0xe0a, x0	// Write all 0s to CSR
	csrrw x3, 0xe0a, x24	// Restore CSR

// Testing CSR 0xe0b
	csrr x4, 0xe0b	// Read CSR
	li x14, -1
	csrrw x6, 0xe0b, x14	// Write all 1s to CSR
	csrrw x6, 0xe0b, x0	// Write all 0s to CSR
	csrrw x6, 0xe0b, x4	// Restore CSR

// Testing CSR 0xe0c
	csrr x16, 0xe0c	// Read CSR
	li x19, -1
	csrrw x31, 0xe0c, x19	// Write all 1s to CSR
	csrrw x31, 0xe0c, x0	// Write all 0s to CSR
	csrrw x31, 0xe0c, x16	// Restore CSR

// Testing CSR 0xe0d
	csrr x17, 0xe0d	// Read CSR
	li x15, -1
	csrrw x29, 0xe0d, x15	// Write all 1s to CSR
	csrrw x29, 0xe0d, x0	// Write all 0s to CSR
	csrrw x29, 0xe0d, x17	// Restore CSR

// Testing CSR 0xe0e
	csrr x18, 0xe0e	// Read CSR
	li x23, -1
	csrrw x17, 0xe0e, x23	// Write all 1s to CSR
	csrrw x17, 0xe0e, x0	// Write all 0s to CSR
	csrrw x17, 0xe0e, x18	// Restore CSR

// Testing CSR 0xe0f
	csrr x30, 0xe0f	// Read CSR
	li x6, -1
	csrrw x25, 0xe0f, x6	// Write all 1s to CSR
	csrrw x25, 0xe0f, x0	// Write all 0s to CSR
	csrrw x25, 0xe0f, x30	// Restore CSR

// Testing CSR 0xe10
	csrr x1, 0xe10	// Read CSR
	li x23, -1
	csrrw x29, 0xe10, x23	// Write all 1s to CSR
	csrrw x29, 0xe10, x0	// Write all 0s to CSR
	csrrw x29, 0xe10, x1	// Restore CSR

// Testing CSR 0xe11
	csrr x31, 0xe11	// Read CSR
	li x30, -1
	csrrw x4, 0xe11, x30	// Write all 1s to CSR
	csrrw x4, 0xe11, x0	// Write all 0s to CSR
	csrrw x4, 0xe11, x31	// Restore CSR

// Testing CSR 0xe12
	csrr x1, 0xe12	// Read CSR
	li x16, -1
	csrrw x5, 0xe12, x16	// Write all 1s to CSR
	csrrw x5, 0xe12, x0	// Write all 0s to CSR
	csrrw x5, 0xe12, x1	// Restore CSR

// Testing CSR 0xe13
	csrr x7, 0xe13	// Read CSR
	li x29, -1
	csrrw x11, 0xe13, x29	// Write all 1s to CSR
	csrrw x11, 0xe13, x0	// Write all 0s to CSR
	csrrw x11, 0xe13, x7	// Restore CSR

// Testing CSR 0xe14
	csrr x19, 0xe14	// Read CSR
	li x2, -1
	csrrw x3, 0xe14, x2	// Write all 1s to CSR
	csrrw x3, 0xe14, x0	// Write all 0s to CSR
	csrrw x3, 0xe14, x19	// Restore CSR

// Testing CSR 0xe15
	csrr x17, 0xe15	// Read CSR
	li x26, -1
	csrrw x9, 0xe15, x26	// Write all 1s to CSR
	csrrw x9, 0xe15, x0	// Write all 0s to CSR
	csrrw x9, 0xe15, x17	// Restore CSR

// Testing CSR 0xe16
	csrr x5, 0xe16	// Read CSR
	li x9, -1
	csrrw x11, 0xe16, x9	// Write all 1s to CSR
	csrrw x11, 0xe16, x0	// Write all 0s to CSR
	csrrw x11, 0xe16, x5	// Restore CSR

// Testing CSR 0xe17
	csrr x14, 0xe17	// Read CSR
	li x4, -1
	csrrw x24, 0xe17, x4	// Write all 1s to CSR
	csrrw x24, 0xe17, x0	// Write all 0s to CSR
	csrrw x24, 0xe17, x14	// Restore CSR

// Testing CSR 0xe18
	csrr x28, 0xe18	// Read CSR
	li x13, -1
	csrrw x23, 0xe18, x13	// Write all 1s to CSR
	csrrw x23, 0xe18, x0	// Write all 0s to CSR
	csrrw x23, 0xe18, x28	// Restore CSR

// Testing CSR 0xe19
	csrr x1, 0xe19	// Read CSR
	li x24, -1
	csrrw x10, 0xe19, x24	// Write all 1s to CSR
	csrrw x10, 0xe19, x0	// Write all 0s to CSR
	csrrw x10, 0xe19, x1	// Restore CSR

// Testing CSR 0xe1a
	csrr x18, 0xe1a	// Read CSR
	li x30, -1
	csrrw x23, 0xe1a, x30	// Write all 1s to CSR
	csrrw x23, 0xe1a, x0	// Write all 0s to CSR
	csrrw x23, 0xe1a, x18	// Restore CSR

// Testing CSR 0xe1b
	csrr x10, 0xe1b	// Read CSR
	li x14, -1
	csrrw x20, 0xe1b, x14	// Write all 1s to CSR
	csrrw x20, 0xe1b, x0	// Write all 0s to CSR
	csrrw x20, 0xe1b, x10	// Restore CSR

// Testing CSR 0xe1c
	csrr x11, 0xe1c	// Read CSR
	li x16, -1
	csrrw x23, 0xe1c, x16	// Write all 1s to CSR
	csrrw x23, 0xe1c, x0	// Write all 0s to CSR
	csrrw x23, 0xe1c, x11	// Restore CSR

// Testing CSR 0xe1d
	csrr x10, 0xe1d	// Read CSR
	li x2, -1
	csrrw x28, 0xe1d, x2	// Write all 1s to CSR
	csrrw x28, 0xe1d, x0	// Write all 0s to CSR
	csrrw x28, 0xe1d, x10	// Restore CSR

// Testing CSR 0xe1e
	csrr x1, 0xe1e	// Read CSR
	li x16, -1
	csrrw x24, 0xe1e, x16	// Write all 1s to CSR
	csrrw x24, 0xe1e, x0	// Write all 0s to CSR
	csrrw x24, 0xe1e, x1	// Restore CSR

// Testing CSR 0xe1f
	csrr x5, 0xe1f	// Read CSR
	li x4, -1
	csrrw x22, 0xe1f, x4	// Write all 1s to CSR
	csrrw x22, 0xe1f, x0	// Write all 0s to CSR
	csrrw x22, 0xe1f, x5	// Restore CSR

// Testing CSR 0xe20
	csrr x2, 0xe20	// Read CSR
	li x7, -1
	csrrw x9, 0xe20, x7	// Write all 1s to CSR
	csrrw x9, 0xe20, x0	// Write all 0s to CSR
	csrrw x9, 0xe20, x2	// Restore CSR

// Testing CSR 0xe21
	csrr x8, 0xe21	// Read CSR
	li x4, -1
	csrrw x21, 0xe21, x4	// Write all 1s to CSR
	csrrw x21, 0xe21, x0	// Write all 0s to CSR
	csrrw x21, 0xe21, x8	// Restore CSR

// Testing CSR 0xe22
	csrr x17, 0xe22	// Read CSR
	li x8, -1
	csrrw x30, 0xe22, x8	// Write all 1s to CSR
	csrrw x30, 0xe22, x0	// Write all 0s to CSR
	csrrw x30, 0xe22, x17	// Restore CSR

// Testing CSR 0xe23
	csrr x23, 0xe23	// Read CSR
	li x7, -1
	csrrw x17, 0xe23, x7	// Write all 1s to CSR
	csrrw x17, 0xe23, x0	// Write all 0s to CSR
	csrrw x17, 0xe23, x23	// Restore CSR

// Testing CSR 0xe24
	csrr x10, 0xe24	// Read CSR
	li x14, -1
	csrrw x26, 0xe24, x14	// Write all 1s to CSR
	csrrw x26, 0xe24, x0	// Write all 0s to CSR
	csrrw x26, 0xe24, x10	// Restore CSR

// Testing CSR 0xe25
	csrr x27, 0xe25	// Read CSR
	li x15, -1
	csrrw x29, 0xe25, x15	// Write all 1s to CSR
	csrrw x29, 0xe25, x0	// Write all 0s to CSR
	csrrw x29, 0xe25, x27	// Restore CSR

// Testing CSR 0xe26
	csrr x24, 0xe26	// Read CSR
	li x16, -1
	csrrw x20, 0xe26, x16	// Write all 1s to CSR
	csrrw x20, 0xe26, x0	// Write all 0s to CSR
	csrrw x20, 0xe26, x24	// Restore CSR

// Testing CSR 0xe27
	csrr x31, 0xe27	// Read CSR
	li x24, -1
	csrrw x19, 0xe27, x24	// Write all 1s to CSR
	csrrw x19, 0xe27, x0	// Write all 0s to CSR
	csrrw x19, 0xe27, x31	// Restore CSR

// Testing CSR 0xe28
	csrr x29, 0xe28	// Read CSR
	li x14, -1
	csrrw x7, 0xe28, x14	// Write all 1s to CSR
	csrrw x7, 0xe28, x0	// Write all 0s to CSR
	csrrw x7, 0xe28, x29	// Restore CSR

// Testing CSR 0xe29
	csrr x7, 0xe29	// Read CSR
	li x22, -1
	csrrw x27, 0xe29, x22	// Write all 1s to CSR
	csrrw x27, 0xe29, x0	// Write all 0s to CSR
	csrrw x27, 0xe29, x7	// Restore CSR

// Testing CSR 0xe2a
	csrr x1, 0xe2a	// Read CSR
	li x23, -1
	csrrw x7, 0xe2a, x23	// Write all 1s to CSR
	csrrw x7, 0xe2a, x0	// Write all 0s to CSR
	csrrw x7, 0xe2a, x1	// Restore CSR

// Testing CSR 0xe2b
	csrr x12, 0xe2b	// Read CSR
	li x24, -1
	csrrw x6, 0xe2b, x24	// Write all 1s to CSR
	csrrw x6, 0xe2b, x0	// Write all 0s to CSR
	csrrw x6, 0xe2b, x12	// Restore CSR

// Testing CSR 0xe2c
	csrr x10, 0xe2c	// Read CSR
	li x26, -1
	csrrw x7, 0xe2c, x26	// Write all 1s to CSR
	csrrw x7, 0xe2c, x0	// Write all 0s to CSR
	csrrw x7, 0xe2c, x10	// Restore CSR

// Testing CSR 0xe2d
	csrr x2, 0xe2d	// Read CSR
	li x18, -1
	csrrw x14, 0xe2d, x18	// Write all 1s to CSR
	csrrw x14, 0xe2d, x0	// Write all 0s to CSR
	csrrw x14, 0xe2d, x2	// Restore CSR

// Testing CSR 0xe2e
	csrr x29, 0xe2e	// Read CSR
	li x14, -1
	csrrw x18, 0xe2e, x14	// Write all 1s to CSR
	csrrw x18, 0xe2e, x0	// Write all 0s to CSR
	csrrw x18, 0xe2e, x29	// Restore CSR

// Testing CSR 0xe2f
	csrr x11, 0xe2f	// Read CSR
	li x7, -1
	csrrw x5, 0xe2f, x7	// Write all 1s to CSR
	csrrw x5, 0xe2f, x0	// Write all 0s to CSR
	csrrw x5, 0xe2f, x11	// Restore CSR

// Testing CSR 0xe30
	csrr x10, 0xe30	// Read CSR
	li x3, -1
	csrrw x5, 0xe30, x3	// Write all 1s to CSR
	csrrw x5, 0xe30, x0	// Write all 0s to CSR
	csrrw x5, 0xe30, x10	// Restore CSR

// Testing CSR 0xe31
	csrr x2, 0xe31	// Read CSR
	li x11, -1
	csrrw x30, 0xe31, x11	// Write all 1s to CSR
	csrrw x30, 0xe31, x0	// Write all 0s to CSR
	csrrw x30, 0xe31, x2	// Restore CSR

// Testing CSR 0xe32
	csrr x2, 0xe32	// Read CSR
	li x5, -1
	csrrw x21, 0xe32, x5	// Write all 1s to CSR
	csrrw x21, 0xe32, x0	// Write all 0s to CSR
	csrrw x21, 0xe32, x2	// Restore CSR

// Testing CSR 0xe33
	csrr x3, 0xe33	// Read CSR
	li x17, -1
	csrrw x4, 0xe33, x17	// Write all 1s to CSR
	csrrw x4, 0xe33, x0	// Write all 0s to CSR
	csrrw x4, 0xe33, x3	// Restore CSR

// Testing CSR 0xe34
	csrr x4, 0xe34	// Read CSR
	li x24, -1
	csrrw x2, 0xe34, x24	// Write all 1s to CSR
	csrrw x2, 0xe34, x0	// Write all 0s to CSR
	csrrw x2, 0xe34, x4	// Restore CSR

// Testing CSR 0xe35
	csrr x4, 0xe35	// Read CSR
	li x5, -1
	csrrw x13, 0xe35, x5	// Write all 1s to CSR
	csrrw x13, 0xe35, x0	// Write all 0s to CSR
	csrrw x13, 0xe35, x4	// Restore CSR

// Testing CSR 0xe36
	csrr x28, 0xe36	// Read CSR
	li x31, -1
	csrrw x20, 0xe36, x31	// Write all 1s to CSR
	csrrw x20, 0xe36, x0	// Write all 0s to CSR
	csrrw x20, 0xe36, x28	// Restore CSR

// Testing CSR 0xe37
	csrr x10, 0xe37	// Read CSR
	li x1, -1
	csrrw x15, 0xe37, x1	// Write all 1s to CSR
	csrrw x15, 0xe37, x0	// Write all 0s to CSR
	csrrw x15, 0xe37, x10	// Restore CSR

// Testing CSR 0xe38
	csrr x4, 0xe38	// Read CSR
	li x7, -1
	csrrw x20, 0xe38, x7	// Write all 1s to CSR
	csrrw x20, 0xe38, x0	// Write all 0s to CSR
	csrrw x20, 0xe38, x4	// Restore CSR

// Testing CSR 0xe39
	csrr x24, 0xe39	// Read CSR
	li x20, -1
	csrrw x17, 0xe39, x20	// Write all 1s to CSR
	csrrw x17, 0xe39, x0	// Write all 0s to CSR
	csrrw x17, 0xe39, x24	// Restore CSR

// Testing CSR 0xe3a
	csrr x18, 0xe3a	// Read CSR
	li x1, -1
	csrrw x26, 0xe3a, x1	// Write all 1s to CSR
	csrrw x26, 0xe3a, x0	// Write all 0s to CSR
	csrrw x26, 0xe3a, x18	// Restore CSR

// Testing CSR 0xe3b
	csrr x8, 0xe3b	// Read CSR
	li x6, -1
	csrrw x1, 0xe3b, x6	// Write all 1s to CSR
	csrrw x1, 0xe3b, x0	// Write all 0s to CSR
	csrrw x1, 0xe3b, x8	// Restore CSR

// Testing CSR 0xe3c
	csrr x19, 0xe3c	// Read CSR
	li x15, -1
	csrrw x9, 0xe3c, x15	// Write all 1s to CSR
	csrrw x9, 0xe3c, x0	// Write all 0s to CSR
	csrrw x9, 0xe3c, x19	// Restore CSR

// Testing CSR 0xe3d
	csrr x28, 0xe3d	// Read CSR
	li x10, -1
	csrrw x29, 0xe3d, x10	// Write all 1s to CSR
	csrrw x29, 0xe3d, x0	// Write all 0s to CSR
	csrrw x29, 0xe3d, x28	// Restore CSR

// Testing CSR 0xe3e
	csrr x20, 0xe3e	// Read CSR
	li x31, -1
	csrrw x27, 0xe3e, x31	// Write all 1s to CSR
	csrrw x27, 0xe3e, x0	// Write all 0s to CSR
	csrrw x27, 0xe3e, x20	// Restore CSR

// Testing CSR 0xe3f
	csrr x6, 0xe3f	// Read CSR
	li x30, -1
	csrrw x28, 0xe3f, x30	// Write all 1s to CSR
	csrrw x28, 0xe3f, x0	// Write all 0s to CSR
	csrrw x28, 0xe3f, x6	// Restore CSR

// Testing CSR 0xe40
	csrr x17, 0xe40	// Read CSR
	li x20, -1
	csrrw x13, 0xe40, x20	// Write all 1s to CSR
	csrrw x13, 0xe40, x0	// Write all 0s to CSR
	csrrw x13, 0xe40, x17	// Restore CSR

// Testing CSR 0xe41
	csrr x29, 0xe41	// Read CSR
	li x11, -1
	csrrw x4, 0xe41, x11	// Write all 1s to CSR
	csrrw x4, 0xe41, x0	// Write all 0s to CSR
	csrrw x4, 0xe41, x29	// Restore CSR

// Testing CSR 0xe42
	csrr x6, 0xe42	// Read CSR
	li x4, -1
	csrrw x18, 0xe42, x4	// Write all 1s to CSR
	csrrw x18, 0xe42, x0	// Write all 0s to CSR
	csrrw x18, 0xe42, x6	// Restore CSR

// Testing CSR 0xe43
	csrr x5, 0xe43	// Read CSR
	li x16, -1
	csrrw x1, 0xe43, x16	// Write all 1s to CSR
	csrrw x1, 0xe43, x0	// Write all 0s to CSR
	csrrw x1, 0xe43, x5	// Restore CSR

// Testing CSR 0xe44
	csrr x20, 0xe44	// Read CSR
	li x2, -1
	csrrw x10, 0xe44, x2	// Write all 1s to CSR
	csrrw x10, 0xe44, x0	// Write all 0s to CSR
	csrrw x10, 0xe44, x20	// Restore CSR

// Testing CSR 0xe45
	csrr x7, 0xe45	// Read CSR
	li x4, -1
	csrrw x9, 0xe45, x4	// Write all 1s to CSR
	csrrw x9, 0xe45, x0	// Write all 0s to CSR
	csrrw x9, 0xe45, x7	// Restore CSR

// Testing CSR 0xe46
	csrr x9, 0xe46	// Read CSR
	li x15, -1
	csrrw x16, 0xe46, x15	// Write all 1s to CSR
	csrrw x16, 0xe46, x0	// Write all 0s to CSR
	csrrw x16, 0xe46, x9	// Restore CSR

// Testing CSR 0xe47
	csrr x29, 0xe47	// Read CSR
	li x26, -1
	csrrw x30, 0xe47, x26	// Write all 1s to CSR
	csrrw x30, 0xe47, x0	// Write all 0s to CSR
	csrrw x30, 0xe47, x29	// Restore CSR

// Testing CSR 0xe48
	csrr x8, 0xe48	// Read CSR
	li x9, -1
	csrrw x29, 0xe48, x9	// Write all 1s to CSR
	csrrw x29, 0xe48, x0	// Write all 0s to CSR
	csrrw x29, 0xe48, x8	// Restore CSR

// Testing CSR 0xe49
	csrr x22, 0xe49	// Read CSR
	li x20, -1
	csrrw x18, 0xe49, x20	// Write all 1s to CSR
	csrrw x18, 0xe49, x0	// Write all 0s to CSR
	csrrw x18, 0xe49, x22	// Restore CSR

// Testing CSR 0xe4a
	csrr x14, 0xe4a	// Read CSR
	li x29, -1
	csrrw x15, 0xe4a, x29	// Write all 1s to CSR
	csrrw x15, 0xe4a, x0	// Write all 0s to CSR
	csrrw x15, 0xe4a, x14	// Restore CSR

// Testing CSR 0xe4b
	csrr x10, 0xe4b	// Read CSR
	li x31, -1
	csrrw x15, 0xe4b, x31	// Write all 1s to CSR
	csrrw x15, 0xe4b, x0	// Write all 0s to CSR
	csrrw x15, 0xe4b, x10	// Restore CSR

// Testing CSR 0xe4c
	csrr x8, 0xe4c	// Read CSR
	li x20, -1
	csrrw x18, 0xe4c, x20	// Write all 1s to CSR
	csrrw x18, 0xe4c, x0	// Write all 0s to CSR
	csrrw x18, 0xe4c, x8	// Restore CSR

// Testing CSR 0xe4d
	csrr x14, 0xe4d	// Read CSR
	li x4, -1
	csrrw x13, 0xe4d, x4	// Write all 1s to CSR
	csrrw x13, 0xe4d, x0	// Write all 0s to CSR
	csrrw x13, 0xe4d, x14	// Restore CSR

// Testing CSR 0xe4e
	csrr x7, 0xe4e	// Read CSR
	li x4, -1
	csrrw x24, 0xe4e, x4	// Write all 1s to CSR
	csrrw x24, 0xe4e, x0	// Write all 0s to CSR
	csrrw x24, 0xe4e, x7	// Restore CSR

// Testing CSR 0xe4f
	csrr x12, 0xe4f	// Read CSR
	li x27, -1
	csrrw x21, 0xe4f, x27	// Write all 1s to CSR
	csrrw x21, 0xe4f, x0	// Write all 0s to CSR
	csrrw x21, 0xe4f, x12	// Restore CSR

// Testing CSR 0xe50
	csrr x21, 0xe50	// Read CSR
	li x8, -1
	csrrw x19, 0xe50, x8	// Write all 1s to CSR
	csrrw x19, 0xe50, x0	// Write all 0s to CSR
	csrrw x19, 0xe50, x21	// Restore CSR

// Testing CSR 0xe51
	csrr x29, 0xe51	// Read CSR
	li x22, -1
	csrrw x28, 0xe51, x22	// Write all 1s to CSR
	csrrw x28, 0xe51, x0	// Write all 0s to CSR
	csrrw x28, 0xe51, x29	// Restore CSR

// Testing CSR 0xe52
	csrr x24, 0xe52	// Read CSR
	li x1, -1
	csrrw x17, 0xe52, x1	// Write all 1s to CSR
	csrrw x17, 0xe52, x0	// Write all 0s to CSR
	csrrw x17, 0xe52, x24	// Restore CSR

// Testing CSR 0xe53
	csrr x22, 0xe53	// Read CSR
	li x3, -1
	csrrw x1, 0xe53, x3	// Write all 1s to CSR
	csrrw x1, 0xe53, x0	// Write all 0s to CSR
	csrrw x1, 0xe53, x22	// Restore CSR

// Testing CSR 0xe54
	csrr x23, 0xe54	// Read CSR
	li x14, -1
	csrrw x12, 0xe54, x14	// Write all 1s to CSR
	csrrw x12, 0xe54, x0	// Write all 0s to CSR
	csrrw x12, 0xe54, x23	// Restore CSR

// Testing CSR 0xe55
	csrr x7, 0xe55	// Read CSR
	li x23, -1
	csrrw x11, 0xe55, x23	// Write all 1s to CSR
	csrrw x11, 0xe55, x0	// Write all 0s to CSR
	csrrw x11, 0xe55, x7	// Restore CSR

// Testing CSR 0xe56
	csrr x14, 0xe56	// Read CSR
	li x4, -1
	csrrw x2, 0xe56, x4	// Write all 1s to CSR
	csrrw x2, 0xe56, x0	// Write all 0s to CSR
	csrrw x2, 0xe56, x14	// Restore CSR

// Testing CSR 0xe57
	csrr x28, 0xe57	// Read CSR
	li x24, -1
	csrrw x29, 0xe57, x24	// Write all 1s to CSR
	csrrw x29, 0xe57, x0	// Write all 0s to CSR
	csrrw x29, 0xe57, x28	// Restore CSR

// Testing CSR 0xe58
	csrr x16, 0xe58	// Read CSR
	li x14, -1
	csrrw x28, 0xe58, x14	// Write all 1s to CSR
	csrrw x28, 0xe58, x0	// Write all 0s to CSR
	csrrw x28, 0xe58, x16	// Restore CSR

// Testing CSR 0xe59
	csrr x10, 0xe59	// Read CSR
	li x9, -1
	csrrw x13, 0xe59, x9	// Write all 1s to CSR
	csrrw x13, 0xe59, x0	// Write all 0s to CSR
	csrrw x13, 0xe59, x10	// Restore CSR

// Testing CSR 0xe5a
	csrr x31, 0xe5a	// Read CSR
	li x20, -1
	csrrw x9, 0xe5a, x20	// Write all 1s to CSR
	csrrw x9, 0xe5a, x0	// Write all 0s to CSR
	csrrw x9, 0xe5a, x31	// Restore CSR

// Testing CSR 0xe5b
	csrr x13, 0xe5b	// Read CSR
	li x19, -1
	csrrw x5, 0xe5b, x19	// Write all 1s to CSR
	csrrw x5, 0xe5b, x0	// Write all 0s to CSR
	csrrw x5, 0xe5b, x13	// Restore CSR

// Testing CSR 0xe5c
	csrr x21, 0xe5c	// Read CSR
	li x5, -1
	csrrw x1, 0xe5c, x5	// Write all 1s to CSR
	csrrw x1, 0xe5c, x0	// Write all 0s to CSR
	csrrw x1, 0xe5c, x21	// Restore CSR

// Testing CSR 0xe5d
	csrr x3, 0xe5d	// Read CSR
	li x6, -1
	csrrw x2, 0xe5d, x6	// Write all 1s to CSR
	csrrw x2, 0xe5d, x0	// Write all 0s to CSR
	csrrw x2, 0xe5d, x3	// Restore CSR

// Testing CSR 0xe5e
	csrr x11, 0xe5e	// Read CSR
	li x28, -1
	csrrw x20, 0xe5e, x28	// Write all 1s to CSR
	csrrw x20, 0xe5e, x0	// Write all 0s to CSR
	csrrw x20, 0xe5e, x11	// Restore CSR

// Testing CSR 0xe5f
	csrr x12, 0xe5f	// Read CSR
	li x17, -1
	csrrw x15, 0xe5f, x17	// Write all 1s to CSR
	csrrw x15, 0xe5f, x0	// Write all 0s to CSR
	csrrw x15, 0xe5f, x12	// Restore CSR

// Testing CSR 0xe60
	csrr x27, 0xe60	// Read CSR
	li x14, -1
	csrrw x26, 0xe60, x14	// Write all 1s to CSR
	csrrw x26, 0xe60, x0	// Write all 0s to CSR
	csrrw x26, 0xe60, x27	// Restore CSR

// Testing CSR 0xe61
	csrr x7, 0xe61	// Read CSR
	li x13, -1
	csrrw x2, 0xe61, x13	// Write all 1s to CSR
	csrrw x2, 0xe61, x0	// Write all 0s to CSR
	csrrw x2, 0xe61, x7	// Restore CSR

// Testing CSR 0xe62
	csrr x12, 0xe62	// Read CSR
	li x25, -1
	csrrw x22, 0xe62, x25	// Write all 1s to CSR
	csrrw x22, 0xe62, x0	// Write all 0s to CSR
	csrrw x22, 0xe62, x12	// Restore CSR

// Testing CSR 0xe63
	csrr x17, 0xe63	// Read CSR
	li x13, -1
	csrrw x22, 0xe63, x13	// Write all 1s to CSR
	csrrw x22, 0xe63, x0	// Write all 0s to CSR
	csrrw x22, 0xe63, x17	// Restore CSR

// Testing CSR 0xe64
	csrr x22, 0xe64	// Read CSR
	li x15, -1
	csrrw x19, 0xe64, x15	// Write all 1s to CSR
	csrrw x19, 0xe64, x0	// Write all 0s to CSR
	csrrw x19, 0xe64, x22	// Restore CSR

// Testing CSR 0xe65
	csrr x20, 0xe65	// Read CSR
	li x13, -1
	csrrw x19, 0xe65, x13	// Write all 1s to CSR
	csrrw x19, 0xe65, x0	// Write all 0s to CSR
	csrrw x19, 0xe65, x20	// Restore CSR

// Testing CSR 0xe66
	csrr x9, 0xe66	// Read CSR
	li x27, -1
	csrrw x31, 0xe66, x27	// Write all 1s to CSR
	csrrw x31, 0xe66, x0	// Write all 0s to CSR
	csrrw x31, 0xe66, x9	// Restore CSR

// Testing CSR 0xe67
	csrr x20, 0xe67	// Read CSR
	li x19, -1
	csrrw x4, 0xe67, x19	// Write all 1s to CSR
	csrrw x4, 0xe67, x0	// Write all 0s to CSR
	csrrw x4, 0xe67, x20	// Restore CSR

// Testing CSR 0xe68
	csrr x21, 0xe68	// Read CSR
	li x6, -1
	csrrw x10, 0xe68, x6	// Write all 1s to CSR
	csrrw x10, 0xe68, x0	// Write all 0s to CSR
	csrrw x10, 0xe68, x21	// Restore CSR

// Testing CSR 0xe69
	csrr x6, 0xe69	// Read CSR
	li x21, -1
	csrrw x22, 0xe69, x21	// Write all 1s to CSR
	csrrw x22, 0xe69, x0	// Write all 0s to CSR
	csrrw x22, 0xe69, x6	// Restore CSR

// Testing CSR 0xe6a
	csrr x18, 0xe6a	// Read CSR
	li x25, -1
	csrrw x19, 0xe6a, x25	// Write all 1s to CSR
	csrrw x19, 0xe6a, x0	// Write all 0s to CSR
	csrrw x19, 0xe6a, x18	// Restore CSR

// Testing CSR 0xe6b
	csrr x24, 0xe6b	// Read CSR
	li x18, -1
	csrrw x13, 0xe6b, x18	// Write all 1s to CSR
	csrrw x13, 0xe6b, x0	// Write all 0s to CSR
	csrrw x13, 0xe6b, x24	// Restore CSR

// Testing CSR 0xe6c
	csrr x9, 0xe6c	// Read CSR
	li x5, -1
	csrrw x21, 0xe6c, x5	// Write all 1s to CSR
	csrrw x21, 0xe6c, x0	// Write all 0s to CSR
	csrrw x21, 0xe6c, x9	// Restore CSR

// Testing CSR 0xe6d
	csrr x19, 0xe6d	// Read CSR
	li x3, -1
	csrrw x29, 0xe6d, x3	// Write all 1s to CSR
	csrrw x29, 0xe6d, x0	// Write all 0s to CSR
	csrrw x29, 0xe6d, x19	// Restore CSR

// Testing CSR 0xe6e
	csrr x10, 0xe6e	// Read CSR
	li x14, -1
	csrrw x25, 0xe6e, x14	// Write all 1s to CSR
	csrrw x25, 0xe6e, x0	// Write all 0s to CSR
	csrrw x25, 0xe6e, x10	// Restore CSR

// Testing CSR 0xe6f
	csrr x14, 0xe6f	// Read CSR
	li x20, -1
	csrrw x1, 0xe6f, x20	// Write all 1s to CSR
	csrrw x1, 0xe6f, x0	// Write all 0s to CSR
	csrrw x1, 0xe6f, x14	// Restore CSR

// Testing CSR 0xe70
	csrr x16, 0xe70	// Read CSR
	li x7, -1
	csrrw x17, 0xe70, x7	// Write all 1s to CSR
	csrrw x17, 0xe70, x0	// Write all 0s to CSR
	csrrw x17, 0xe70, x16	// Restore CSR

// Testing CSR 0xe71
	csrr x28, 0xe71	// Read CSR
	li x10, -1
	csrrw x26, 0xe71, x10	// Write all 1s to CSR
	csrrw x26, 0xe71, x0	// Write all 0s to CSR
	csrrw x26, 0xe71, x28	// Restore CSR

// Testing CSR 0xe72
	csrr x7, 0xe72	// Read CSR
	li x1, -1
	csrrw x25, 0xe72, x1	// Write all 1s to CSR
	csrrw x25, 0xe72, x0	// Write all 0s to CSR
	csrrw x25, 0xe72, x7	// Restore CSR

// Testing CSR 0xe73
	csrr x20, 0xe73	// Read CSR
	li x22, -1
	csrrw x17, 0xe73, x22	// Write all 1s to CSR
	csrrw x17, 0xe73, x0	// Write all 0s to CSR
	csrrw x17, 0xe73, x20	// Restore CSR

// Testing CSR 0xe74
	csrr x10, 0xe74	// Read CSR
	li x4, -1
	csrrw x14, 0xe74, x4	// Write all 1s to CSR
	csrrw x14, 0xe74, x0	// Write all 0s to CSR
	csrrw x14, 0xe74, x10	// Restore CSR

// Testing CSR 0xe75
	csrr x24, 0xe75	// Read CSR
	li x25, -1
	csrrw x12, 0xe75, x25	// Write all 1s to CSR
	csrrw x12, 0xe75, x0	// Write all 0s to CSR
	csrrw x12, 0xe75, x24	// Restore CSR

// Testing CSR 0xe76
	csrr x24, 0xe76	// Read CSR
	li x13, -1
	csrrw x30, 0xe76, x13	// Write all 1s to CSR
	csrrw x30, 0xe76, x0	// Write all 0s to CSR
	csrrw x30, 0xe76, x24	// Restore CSR

// Testing CSR 0xe77
	csrr x12, 0xe77	// Read CSR
	li x24, -1
	csrrw x20, 0xe77, x24	// Write all 1s to CSR
	csrrw x20, 0xe77, x0	// Write all 0s to CSR
	csrrw x20, 0xe77, x12	// Restore CSR

// Testing CSR 0xe78
	csrr x24, 0xe78	// Read CSR
	li x27, -1
	csrrw x13, 0xe78, x27	// Write all 1s to CSR
	csrrw x13, 0xe78, x0	// Write all 0s to CSR
	csrrw x13, 0xe78, x24	// Restore CSR

// Testing CSR 0xe79
	csrr x27, 0xe79	// Read CSR
	li x7, -1
	csrrw x11, 0xe79, x7	// Write all 1s to CSR
	csrrw x11, 0xe79, x0	// Write all 0s to CSR
	csrrw x11, 0xe79, x27	// Restore CSR

// Testing CSR 0xe7a
	csrr x31, 0xe7a	// Read CSR
	li x29, -1
	csrrw x1, 0xe7a, x29	// Write all 1s to CSR
	csrrw x1, 0xe7a, x0	// Write all 0s to CSR
	csrrw x1, 0xe7a, x31	// Restore CSR

// Testing CSR 0xe7b
	csrr x2, 0xe7b	// Read CSR
	li x4, -1
	csrrw x20, 0xe7b, x4	// Write all 1s to CSR
	csrrw x20, 0xe7b, x0	// Write all 0s to CSR
	csrrw x20, 0xe7b, x2	// Restore CSR

// Testing CSR 0xe7c
	csrr x17, 0xe7c	// Read CSR
	li x23, -1
	csrrw x21, 0xe7c, x23	// Write all 1s to CSR
	csrrw x21, 0xe7c, x0	// Write all 0s to CSR
	csrrw x21, 0xe7c, x17	// Restore CSR

// Testing CSR 0xe7d
	csrr x31, 0xe7d	// Read CSR
	li x21, -1
	csrrw x14, 0xe7d, x21	// Write all 1s to CSR
	csrrw x14, 0xe7d, x0	// Write all 0s to CSR
	csrrw x14, 0xe7d, x31	// Restore CSR

// Testing CSR 0xe7e
	csrr x4, 0xe7e	// Read CSR
	li x14, -1
	csrrw x11, 0xe7e, x14	// Write all 1s to CSR
	csrrw x11, 0xe7e, x0	// Write all 0s to CSR
	csrrw x11, 0xe7e, x4	// Restore CSR

// Testing CSR 0xe7f
	csrr x21, 0xe7f	// Read CSR
	li x8, -1
	csrrw x11, 0xe7f, x8	// Write all 1s to CSR
	csrrw x11, 0xe7f, x0	// Write all 0s to CSR
	csrrw x11, 0xe7f, x21	// Restore CSR

// Testing CSR 0xe80
	csrr x11, 0xe80	// Read CSR
	li x31, -1
	csrrw x23, 0xe80, x31	// Write all 1s to CSR
	csrrw x23, 0xe80, x0	// Write all 0s to CSR
	csrrw x23, 0xe80, x11	// Restore CSR

// Testing CSR 0xe81
	csrr x12, 0xe81	// Read CSR
	li x11, -1
	csrrw x5, 0xe81, x11	// Write all 1s to CSR
	csrrw x5, 0xe81, x0	// Write all 0s to CSR
	csrrw x5, 0xe81, x12	// Restore CSR

// Testing CSR 0xe82
	csrr x11, 0xe82	// Read CSR
	li x3, -1
	csrrw x9, 0xe82, x3	// Write all 1s to CSR
	csrrw x9, 0xe82, x0	// Write all 0s to CSR
	csrrw x9, 0xe82, x11	// Restore CSR

// Testing CSR 0xe83
	csrr x11, 0xe83	// Read CSR
	li x26, -1
	csrrw x29, 0xe83, x26	// Write all 1s to CSR
	csrrw x29, 0xe83, x0	// Write all 0s to CSR
	csrrw x29, 0xe83, x11	// Restore CSR

// Testing CSR 0xe84
	csrr x27, 0xe84	// Read CSR
	li x24, -1
	csrrw x21, 0xe84, x24	// Write all 1s to CSR
	csrrw x21, 0xe84, x0	// Write all 0s to CSR
	csrrw x21, 0xe84, x27	// Restore CSR

// Testing CSR 0xe85
	csrr x9, 0xe85	// Read CSR
	li x21, -1
	csrrw x10, 0xe85, x21	// Write all 1s to CSR
	csrrw x10, 0xe85, x0	// Write all 0s to CSR
	csrrw x10, 0xe85, x9	// Restore CSR

// Testing CSR 0xe86
	csrr x29, 0xe86	// Read CSR
	li x5, -1
	csrrw x14, 0xe86, x5	// Write all 1s to CSR
	csrrw x14, 0xe86, x0	// Write all 0s to CSR
	csrrw x14, 0xe86, x29	// Restore CSR

// Testing CSR 0xe87
	csrr x19, 0xe87	// Read CSR
	li x13, -1
	csrrw x8, 0xe87, x13	// Write all 1s to CSR
	csrrw x8, 0xe87, x0	// Write all 0s to CSR
	csrrw x8, 0xe87, x19	// Restore CSR

// Testing CSR 0xe88
	csrr x20, 0xe88	// Read CSR
	li x4, -1
	csrrw x8, 0xe88, x4	// Write all 1s to CSR
	csrrw x8, 0xe88, x0	// Write all 0s to CSR
	csrrw x8, 0xe88, x20	// Restore CSR

// Testing CSR 0xe89
	csrr x29, 0xe89	// Read CSR
	li x31, -1
	csrrw x9, 0xe89, x31	// Write all 1s to CSR
	csrrw x9, 0xe89, x0	// Write all 0s to CSR
	csrrw x9, 0xe89, x29	// Restore CSR

// Testing CSR 0xe8a
	csrr x15, 0xe8a	// Read CSR
	li x21, -1
	csrrw x29, 0xe8a, x21	// Write all 1s to CSR
	csrrw x29, 0xe8a, x0	// Write all 0s to CSR
	csrrw x29, 0xe8a, x15	// Restore CSR

// Testing CSR 0xe8b
	csrr x5, 0xe8b	// Read CSR
	li x26, -1
	csrrw x10, 0xe8b, x26	// Write all 1s to CSR
	csrrw x10, 0xe8b, x0	// Write all 0s to CSR
	csrrw x10, 0xe8b, x5	// Restore CSR

// Testing CSR 0xe8c
	csrr x30, 0xe8c	// Read CSR
	li x5, -1
	csrrw x31, 0xe8c, x5	// Write all 1s to CSR
	csrrw x31, 0xe8c, x0	// Write all 0s to CSR
	csrrw x31, 0xe8c, x30	// Restore CSR

// Testing CSR 0xe8d
	csrr x9, 0xe8d	// Read CSR
	li x2, -1
	csrrw x1, 0xe8d, x2	// Write all 1s to CSR
	csrrw x1, 0xe8d, x0	// Write all 0s to CSR
	csrrw x1, 0xe8d, x9	// Restore CSR

// Testing CSR 0xe8e
	csrr x8, 0xe8e	// Read CSR
	li x12, -1
	csrrw x11, 0xe8e, x12	// Write all 1s to CSR
	csrrw x11, 0xe8e, x0	// Write all 0s to CSR
	csrrw x11, 0xe8e, x8	// Restore CSR

// Testing CSR 0xe8f
	csrr x31, 0xe8f	// Read CSR
	li x22, -1
	csrrw x21, 0xe8f, x22	// Write all 1s to CSR
	csrrw x21, 0xe8f, x0	// Write all 0s to CSR
	csrrw x21, 0xe8f, x31	// Restore CSR

// Testing CSR 0xe90
	csrr x4, 0xe90	// Read CSR
	li x31, -1
	csrrw x23, 0xe90, x31	// Write all 1s to CSR
	csrrw x23, 0xe90, x0	// Write all 0s to CSR
	csrrw x23, 0xe90, x4	// Restore CSR

// Testing CSR 0xe91
	csrr x15, 0xe91	// Read CSR
	li x21, -1
	csrrw x2, 0xe91, x21	// Write all 1s to CSR
	csrrw x2, 0xe91, x0	// Write all 0s to CSR
	csrrw x2, 0xe91, x15	// Restore CSR

// Testing CSR 0xe92
	csrr x9, 0xe92	// Read CSR
	li x5, -1
	csrrw x31, 0xe92, x5	// Write all 1s to CSR
	csrrw x31, 0xe92, x0	// Write all 0s to CSR
	csrrw x31, 0xe92, x9	// Restore CSR

// Testing CSR 0xe93
	csrr x16, 0xe93	// Read CSR
	li x7, -1
	csrrw x8, 0xe93, x7	// Write all 1s to CSR
	csrrw x8, 0xe93, x0	// Write all 0s to CSR
	csrrw x8, 0xe93, x16	// Restore CSR

// Testing CSR 0xe94
	csrr x11, 0xe94	// Read CSR
	li x3, -1
	csrrw x4, 0xe94, x3	// Write all 1s to CSR
	csrrw x4, 0xe94, x0	// Write all 0s to CSR
	csrrw x4, 0xe94, x11	// Restore CSR

// Testing CSR 0xe95
	csrr x9, 0xe95	// Read CSR
	li x16, -1
	csrrw x15, 0xe95, x16	// Write all 1s to CSR
	csrrw x15, 0xe95, x0	// Write all 0s to CSR
	csrrw x15, 0xe95, x9	// Restore CSR

// Testing CSR 0xe96
	csrr x10, 0xe96	// Read CSR
	li x14, -1
	csrrw x26, 0xe96, x14	// Write all 1s to CSR
	csrrw x26, 0xe96, x0	// Write all 0s to CSR
	csrrw x26, 0xe96, x10	// Restore CSR

// Testing CSR 0xe97
	csrr x24, 0xe97	// Read CSR
	li x12, -1
	csrrw x31, 0xe97, x12	// Write all 1s to CSR
	csrrw x31, 0xe97, x0	// Write all 0s to CSR
	csrrw x31, 0xe97, x24	// Restore CSR

// Testing CSR 0xe98
	csrr x19, 0xe98	// Read CSR
	li x18, -1
	csrrw x6, 0xe98, x18	// Write all 1s to CSR
	csrrw x6, 0xe98, x0	// Write all 0s to CSR
	csrrw x6, 0xe98, x19	// Restore CSR

// Testing CSR 0xe99
	csrr x3, 0xe99	// Read CSR
	li x25, -1
	csrrw x4, 0xe99, x25	// Write all 1s to CSR
	csrrw x4, 0xe99, x0	// Write all 0s to CSR
	csrrw x4, 0xe99, x3	// Restore CSR

// Testing CSR 0xe9a
	csrr x5, 0xe9a	// Read CSR
	li x13, -1
	csrrw x9, 0xe9a, x13	// Write all 1s to CSR
	csrrw x9, 0xe9a, x0	// Write all 0s to CSR
	csrrw x9, 0xe9a, x5	// Restore CSR

// Testing CSR 0xe9b
	csrr x3, 0xe9b	// Read CSR
	li x28, -1
	csrrw x18, 0xe9b, x28	// Write all 1s to CSR
	csrrw x18, 0xe9b, x0	// Write all 0s to CSR
	csrrw x18, 0xe9b, x3	// Restore CSR

// Testing CSR 0xe9c
	csrr x19, 0xe9c	// Read CSR
	li x23, -1
	csrrw x28, 0xe9c, x23	// Write all 1s to CSR
	csrrw x28, 0xe9c, x0	// Write all 0s to CSR
	csrrw x28, 0xe9c, x19	// Restore CSR

// Testing CSR 0xe9d
	csrr x10, 0xe9d	// Read CSR
	li x28, -1
	csrrw x17, 0xe9d, x28	// Write all 1s to CSR
	csrrw x17, 0xe9d, x0	// Write all 0s to CSR
	csrrw x17, 0xe9d, x10	// Restore CSR

// Testing CSR 0xe9e
	csrr x6, 0xe9e	// Read CSR
	li x23, -1
	csrrw x30, 0xe9e, x23	// Write all 1s to CSR
	csrrw x30, 0xe9e, x0	// Write all 0s to CSR
	csrrw x30, 0xe9e, x6	// Restore CSR

// Testing CSR 0xe9f
	csrr x16, 0xe9f	// Read CSR
	li x14, -1
	csrrw x29, 0xe9f, x14	// Write all 1s to CSR
	csrrw x29, 0xe9f, x0	// Write all 0s to CSR
	csrrw x29, 0xe9f, x16	// Restore CSR

// Testing CSR 0xea0
	csrr x8, 0xea0	// Read CSR
	li x12, -1
	csrrw x9, 0xea0, x12	// Write all 1s to CSR
	csrrw x9, 0xea0, x0	// Write all 0s to CSR
	csrrw x9, 0xea0, x8	// Restore CSR

// Testing CSR 0xea1
	csrr x30, 0xea1	// Read CSR
	li x9, -1
	csrrw x29, 0xea1, x9	// Write all 1s to CSR
	csrrw x29, 0xea1, x0	// Write all 0s to CSR
	csrrw x29, 0xea1, x30	// Restore CSR

// Testing CSR 0xea2
	csrr x27, 0xea2	// Read CSR
	li x11, -1
	csrrw x25, 0xea2, x11	// Write all 1s to CSR
	csrrw x25, 0xea2, x0	// Write all 0s to CSR
	csrrw x25, 0xea2, x27	// Restore CSR

// Testing CSR 0xea3
	csrr x6, 0xea3	// Read CSR
	li x9, -1
	csrrw x7, 0xea3, x9	// Write all 1s to CSR
	csrrw x7, 0xea3, x0	// Write all 0s to CSR
	csrrw x7, 0xea3, x6	// Restore CSR

// Testing CSR 0xea4
	csrr x4, 0xea4	// Read CSR
	li x10, -1
	csrrw x25, 0xea4, x10	// Write all 1s to CSR
	csrrw x25, 0xea4, x0	// Write all 0s to CSR
	csrrw x25, 0xea4, x4	// Restore CSR

// Testing CSR 0xea5
	csrr x13, 0xea5	// Read CSR
	li x15, -1
	csrrw x11, 0xea5, x15	// Write all 1s to CSR
	csrrw x11, 0xea5, x0	// Write all 0s to CSR
	csrrw x11, 0xea5, x13	// Restore CSR

// Testing CSR 0xea6
	csrr x24, 0xea6	// Read CSR
	li x4, -1
	csrrw x22, 0xea6, x4	// Write all 1s to CSR
	csrrw x22, 0xea6, x0	// Write all 0s to CSR
	csrrw x22, 0xea6, x24	// Restore CSR

// Testing CSR 0xea7
	csrr x3, 0xea7	// Read CSR
	li x30, -1
	csrrw x27, 0xea7, x30	// Write all 1s to CSR
	csrrw x27, 0xea7, x0	// Write all 0s to CSR
	csrrw x27, 0xea7, x3	// Restore CSR

// Testing CSR 0xea8
	csrr x28, 0xea8	// Read CSR
	li x18, -1
	csrrw x8, 0xea8, x18	// Write all 1s to CSR
	csrrw x8, 0xea8, x0	// Write all 0s to CSR
	csrrw x8, 0xea8, x28	// Restore CSR

// Testing CSR 0xea9
	csrr x6, 0xea9	// Read CSR
	li x15, -1
	csrrw x7, 0xea9, x15	// Write all 1s to CSR
	csrrw x7, 0xea9, x0	// Write all 0s to CSR
	csrrw x7, 0xea9, x6	// Restore CSR

// Testing CSR 0xeaa
	csrr x19, 0xeaa	// Read CSR
	li x12, -1
	csrrw x25, 0xeaa, x12	// Write all 1s to CSR
	csrrw x25, 0xeaa, x0	// Write all 0s to CSR
	csrrw x25, 0xeaa, x19	// Restore CSR

// Testing CSR 0xeab
	csrr x9, 0xeab	// Read CSR
	li x2, -1
	csrrw x5, 0xeab, x2	// Write all 1s to CSR
	csrrw x5, 0xeab, x0	// Write all 0s to CSR
	csrrw x5, 0xeab, x9	// Restore CSR

// Testing CSR 0xeac
	csrr x26, 0xeac	// Read CSR
	li x1, -1
	csrrw x23, 0xeac, x1	// Write all 1s to CSR
	csrrw x23, 0xeac, x0	// Write all 0s to CSR
	csrrw x23, 0xeac, x26	// Restore CSR

// Testing CSR 0xead
	csrr x31, 0xead	// Read CSR
	li x12, -1
	csrrw x15, 0xead, x12	// Write all 1s to CSR
	csrrw x15, 0xead, x0	// Write all 0s to CSR
	csrrw x15, 0xead, x31	// Restore CSR

// Testing CSR 0xeae
	csrr x10, 0xeae	// Read CSR
	li x22, -1
	csrrw x25, 0xeae, x22	// Write all 1s to CSR
	csrrw x25, 0xeae, x0	// Write all 0s to CSR
	csrrw x25, 0xeae, x10	// Restore CSR

// Testing CSR 0xeaf
	csrr x19, 0xeaf	// Read CSR
	li x10, -1
	csrrw x23, 0xeaf, x10	// Write all 1s to CSR
	csrrw x23, 0xeaf, x0	// Write all 0s to CSR
	csrrw x23, 0xeaf, x19	// Restore CSR

// Testing CSR 0xeb0
	csrr x21, 0xeb0	// Read CSR
	li x29, -1
	csrrw x27, 0xeb0, x29	// Write all 1s to CSR
	csrrw x27, 0xeb0, x0	// Write all 0s to CSR
	csrrw x27, 0xeb0, x21	// Restore CSR

// Testing CSR 0xeb1
	csrr x11, 0xeb1	// Read CSR
	li x6, -1
	csrrw x22, 0xeb1, x6	// Write all 1s to CSR
	csrrw x22, 0xeb1, x0	// Write all 0s to CSR
	csrrw x22, 0xeb1, x11	// Restore CSR

// Testing CSR 0xeb2
	csrr x31, 0xeb2	// Read CSR
	li x1, -1
	csrrw x19, 0xeb2, x1	// Write all 1s to CSR
	csrrw x19, 0xeb2, x0	// Write all 0s to CSR
	csrrw x19, 0xeb2, x31	// Restore CSR

// Testing CSR 0xeb3
	csrr x10, 0xeb3	// Read CSR
	li x6, -1
	csrrw x1, 0xeb3, x6	// Write all 1s to CSR
	csrrw x1, 0xeb3, x0	// Write all 0s to CSR
	csrrw x1, 0xeb3, x10	// Restore CSR

// Testing CSR 0xeb4
	csrr x15, 0xeb4	// Read CSR
	li x28, -1
	csrrw x29, 0xeb4, x28	// Write all 1s to CSR
	csrrw x29, 0xeb4, x0	// Write all 0s to CSR
	csrrw x29, 0xeb4, x15	// Restore CSR

// Testing CSR 0xeb5
	csrr x4, 0xeb5	// Read CSR
	li x29, -1
	csrrw x14, 0xeb5, x29	// Write all 1s to CSR
	csrrw x14, 0xeb5, x0	// Write all 0s to CSR
	csrrw x14, 0xeb5, x4	// Restore CSR

// Testing CSR 0xeb6
	csrr x22, 0xeb6	// Read CSR
	li x23, -1
	csrrw x28, 0xeb6, x23	// Write all 1s to CSR
	csrrw x28, 0xeb6, x0	// Write all 0s to CSR
	csrrw x28, 0xeb6, x22	// Restore CSR

// Testing CSR 0xeb7
	csrr x21, 0xeb7	// Read CSR
	li x16, -1
	csrrw x25, 0xeb7, x16	// Write all 1s to CSR
	csrrw x25, 0xeb7, x0	// Write all 0s to CSR
	csrrw x25, 0xeb7, x21	// Restore CSR

// Testing CSR 0xeb8
	csrr x3, 0xeb8	// Read CSR
	li x2, -1
	csrrw x15, 0xeb8, x2	// Write all 1s to CSR
	csrrw x15, 0xeb8, x0	// Write all 0s to CSR
	csrrw x15, 0xeb8, x3	// Restore CSR

// Testing CSR 0xeb9
	csrr x22, 0xeb9	// Read CSR
	li x23, -1
	csrrw x14, 0xeb9, x23	// Write all 1s to CSR
	csrrw x14, 0xeb9, x0	// Write all 0s to CSR
	csrrw x14, 0xeb9, x22	// Restore CSR

// Testing CSR 0xeba
	csrr x8, 0xeba	// Read CSR
	li x9, -1
	csrrw x5, 0xeba, x9	// Write all 1s to CSR
	csrrw x5, 0xeba, x0	// Write all 0s to CSR
	csrrw x5, 0xeba, x8	// Restore CSR

// Testing CSR 0xebb
	csrr x19, 0xebb	// Read CSR
	li x16, -1
	csrrw x15, 0xebb, x16	// Write all 1s to CSR
	csrrw x15, 0xebb, x0	// Write all 0s to CSR
	csrrw x15, 0xebb, x19	// Restore CSR

// Testing CSR 0xebc
	csrr x3, 0xebc	// Read CSR
	li x21, -1
	csrrw x28, 0xebc, x21	// Write all 1s to CSR
	csrrw x28, 0xebc, x0	// Write all 0s to CSR
	csrrw x28, 0xebc, x3	// Restore CSR

// Testing CSR 0xebd
	csrr x12, 0xebd	// Read CSR
	li x23, -1
	csrrw x31, 0xebd, x23	// Write all 1s to CSR
	csrrw x31, 0xebd, x0	// Write all 0s to CSR
	csrrw x31, 0xebd, x12	// Restore CSR

// Testing CSR 0xebe
	csrr x14, 0xebe	// Read CSR
	li x27, -1
	csrrw x18, 0xebe, x27	// Write all 1s to CSR
	csrrw x18, 0xebe, x0	// Write all 0s to CSR
	csrrw x18, 0xebe, x14	// Restore CSR

// Testing CSR 0xebf
	csrr x10, 0xebf	// Read CSR
	li x16, -1
	csrrw x15, 0xebf, x16	// Write all 1s to CSR
	csrrw x15, 0xebf, x0	// Write all 0s to CSR
	csrrw x15, 0xebf, x10	// Restore CSR

// Testing CSR 0xec0
	csrr x11, 0xec0	// Read CSR
	li x19, -1
	csrrw x30, 0xec0, x19	// Write all 1s to CSR
	csrrw x30, 0xec0, x0	// Write all 0s to CSR
	csrrw x30, 0xec0, x11	// Restore CSR

// Testing CSR 0xec1
	csrr x10, 0xec1	// Read CSR
	li x3, -1
	csrrw x4, 0xec1, x3	// Write all 1s to CSR
	csrrw x4, 0xec1, x0	// Write all 0s to CSR
	csrrw x4, 0xec1, x10	// Restore CSR

// Testing CSR 0xec2
	csrr x4, 0xec2	// Read CSR
	li x31, -1
	csrrw x3, 0xec2, x31	// Write all 1s to CSR
	csrrw x3, 0xec2, x0	// Write all 0s to CSR
	csrrw x3, 0xec2, x4	// Restore CSR

// Testing CSR 0xec3
	csrr x29, 0xec3	// Read CSR
	li x8, -1
	csrrw x23, 0xec3, x8	// Write all 1s to CSR
	csrrw x23, 0xec3, x0	// Write all 0s to CSR
	csrrw x23, 0xec3, x29	// Restore CSR

// Testing CSR 0xec4
	csrr x14, 0xec4	// Read CSR
	li x15, -1
	csrrw x3, 0xec4, x15	// Write all 1s to CSR
	csrrw x3, 0xec4, x0	// Write all 0s to CSR
	csrrw x3, 0xec4, x14	// Restore CSR

// Testing CSR 0xec5
	csrr x29, 0xec5	// Read CSR
	li x19, -1
	csrrw x15, 0xec5, x19	// Write all 1s to CSR
	csrrw x15, 0xec5, x0	// Write all 0s to CSR
	csrrw x15, 0xec5, x29	// Restore CSR

// Testing CSR 0xec6
	csrr x27, 0xec6	// Read CSR
	li x21, -1
	csrrw x1, 0xec6, x21	// Write all 1s to CSR
	csrrw x1, 0xec6, x0	// Write all 0s to CSR
	csrrw x1, 0xec6, x27	// Restore CSR

// Testing CSR 0xec7
	csrr x30, 0xec7	// Read CSR
	li x18, -1
	csrrw x6, 0xec7, x18	// Write all 1s to CSR
	csrrw x6, 0xec7, x0	// Write all 0s to CSR
	csrrw x6, 0xec7, x30	// Restore CSR

// Testing CSR 0xec8
	csrr x5, 0xec8	// Read CSR
	li x25, -1
	csrrw x26, 0xec8, x25	// Write all 1s to CSR
	csrrw x26, 0xec8, x0	// Write all 0s to CSR
	csrrw x26, 0xec8, x5	// Restore CSR

// Testing CSR 0xec9
	csrr x30, 0xec9	// Read CSR
	li x22, -1
	csrrw x14, 0xec9, x22	// Write all 1s to CSR
	csrrw x14, 0xec9, x0	// Write all 0s to CSR
	csrrw x14, 0xec9, x30	// Restore CSR

// Testing CSR 0xeca
	csrr x27, 0xeca	// Read CSR
	li x18, -1
	csrrw x22, 0xeca, x18	// Write all 1s to CSR
	csrrw x22, 0xeca, x0	// Write all 0s to CSR
	csrrw x22, 0xeca, x27	// Restore CSR

// Testing CSR 0xecb
	csrr x11, 0xecb	// Read CSR
	li x6, -1
	csrrw x30, 0xecb, x6	// Write all 1s to CSR
	csrrw x30, 0xecb, x0	// Write all 0s to CSR
	csrrw x30, 0xecb, x11	// Restore CSR

// Testing CSR 0xecc
	csrr x23, 0xecc	// Read CSR
	li x11, -1
	csrrw x6, 0xecc, x11	// Write all 1s to CSR
	csrrw x6, 0xecc, x0	// Write all 0s to CSR
	csrrw x6, 0xecc, x23	// Restore CSR

// Testing CSR 0xecd
	csrr x8, 0xecd	// Read CSR
	li x16, -1
	csrrw x13, 0xecd, x16	// Write all 1s to CSR
	csrrw x13, 0xecd, x0	// Write all 0s to CSR
	csrrw x13, 0xecd, x8	// Restore CSR

// Testing CSR 0xece
	csrr x6, 0xece	// Read CSR
	li x4, -1
	csrrw x12, 0xece, x4	// Write all 1s to CSR
	csrrw x12, 0xece, x0	// Write all 0s to CSR
	csrrw x12, 0xece, x6	// Restore CSR

// Testing CSR 0xecf
	csrr x6, 0xecf	// Read CSR
	li x15, -1
	csrrw x4, 0xecf, x15	// Write all 1s to CSR
	csrrw x4, 0xecf, x0	// Write all 0s to CSR
	csrrw x4, 0xecf, x6	// Restore CSR

// Testing CSR 0xed0
	csrr x31, 0xed0	// Read CSR
	li x23, -1
	csrrw x5, 0xed0, x23	// Write all 1s to CSR
	csrrw x5, 0xed0, x0	// Write all 0s to CSR
	csrrw x5, 0xed0, x31	// Restore CSR

// Testing CSR 0xed1
	csrr x11, 0xed1	// Read CSR
	li x25, -1
	csrrw x2, 0xed1, x25	// Write all 1s to CSR
	csrrw x2, 0xed1, x0	// Write all 0s to CSR
	csrrw x2, 0xed1, x11	// Restore CSR

// Testing CSR 0xed2
	csrr x28, 0xed2	// Read CSR
	li x23, -1
	csrrw x4, 0xed2, x23	// Write all 1s to CSR
	csrrw x4, 0xed2, x0	// Write all 0s to CSR
	csrrw x4, 0xed2, x28	// Restore CSR

// Testing CSR 0xed3
	csrr x10, 0xed3	// Read CSR
	li x9, -1
	csrrw x26, 0xed3, x9	// Write all 1s to CSR
	csrrw x26, 0xed3, x0	// Write all 0s to CSR
	csrrw x26, 0xed3, x10	// Restore CSR

// Testing CSR 0xed4
	csrr x30, 0xed4	// Read CSR
	li x6, -1
	csrrw x19, 0xed4, x6	// Write all 1s to CSR
	csrrw x19, 0xed4, x0	// Write all 0s to CSR
	csrrw x19, 0xed4, x30	// Restore CSR

// Testing CSR 0xed5
	csrr x22, 0xed5	// Read CSR
	li x30, -1
	csrrw x7, 0xed5, x30	// Write all 1s to CSR
	csrrw x7, 0xed5, x0	// Write all 0s to CSR
	csrrw x7, 0xed5, x22	// Restore CSR

// Testing CSR 0xed6
	csrr x13, 0xed6	// Read CSR
	li x16, -1
	csrrw x23, 0xed6, x16	// Write all 1s to CSR
	csrrw x23, 0xed6, x0	// Write all 0s to CSR
	csrrw x23, 0xed6, x13	// Restore CSR

// Testing CSR 0xed7
	csrr x18, 0xed7	// Read CSR
	li x1, -1
	csrrw x9, 0xed7, x1	// Write all 1s to CSR
	csrrw x9, 0xed7, x0	// Write all 0s to CSR
	csrrw x9, 0xed7, x18	// Restore CSR

// Testing CSR 0xed8
	csrr x21, 0xed8	// Read CSR
	li x25, -1
	csrrw x31, 0xed8, x25	// Write all 1s to CSR
	csrrw x31, 0xed8, x0	// Write all 0s to CSR
	csrrw x31, 0xed8, x21	// Restore CSR

// Testing CSR 0xed9
	csrr x13, 0xed9	// Read CSR
	li x19, -1
	csrrw x4, 0xed9, x19	// Write all 1s to CSR
	csrrw x4, 0xed9, x0	// Write all 0s to CSR
	csrrw x4, 0xed9, x13	// Restore CSR

// Testing CSR 0xeda
	csrr x10, 0xeda	// Read CSR
	li x12, -1
	csrrw x18, 0xeda, x12	// Write all 1s to CSR
	csrrw x18, 0xeda, x0	// Write all 0s to CSR
	csrrw x18, 0xeda, x10	// Restore CSR

// Testing CSR 0xedb
	csrr x18, 0xedb	// Read CSR
	li x13, -1
	csrrw x10, 0xedb, x13	// Write all 1s to CSR
	csrrw x10, 0xedb, x0	// Write all 0s to CSR
	csrrw x10, 0xedb, x18	// Restore CSR

// Testing CSR 0xedc
	csrr x10, 0xedc	// Read CSR
	li x3, -1
	csrrw x15, 0xedc, x3	// Write all 1s to CSR
	csrrw x15, 0xedc, x0	// Write all 0s to CSR
	csrrw x15, 0xedc, x10	// Restore CSR

// Testing CSR 0xedd
	csrr x23, 0xedd	// Read CSR
	li x8, -1
	csrrw x10, 0xedd, x8	// Write all 1s to CSR
	csrrw x10, 0xedd, x0	// Write all 0s to CSR
	csrrw x10, 0xedd, x23	// Restore CSR

// Testing CSR 0xede
	csrr x16, 0xede	// Read CSR
	li x1, -1
	csrrw x8, 0xede, x1	// Write all 1s to CSR
	csrrw x8, 0xede, x0	// Write all 0s to CSR
	csrrw x8, 0xede, x16	// Restore CSR

// Testing CSR 0xedf
	csrr x26, 0xedf	// Read CSR
	li x1, -1
	csrrw x4, 0xedf, x1	// Write all 1s to CSR
	csrrw x4, 0xedf, x0	// Write all 0s to CSR
	csrrw x4, 0xedf, x26	// Restore CSR

// Testing CSR 0xee0
	csrr x1, 0xee0	// Read CSR
	li x11, -1
	csrrw x14, 0xee0, x11	// Write all 1s to CSR
	csrrw x14, 0xee0, x0	// Write all 0s to CSR
	csrrw x14, 0xee0, x1	// Restore CSR

// Testing CSR 0xee1
	csrr x5, 0xee1	// Read CSR
	li x10, -1
	csrrw x2, 0xee1, x10	// Write all 1s to CSR
	csrrw x2, 0xee1, x0	// Write all 0s to CSR
	csrrw x2, 0xee1, x5	// Restore CSR

// Testing CSR 0xee2
	csrr x4, 0xee2	// Read CSR
	li x27, -1
	csrrw x26, 0xee2, x27	// Write all 1s to CSR
	csrrw x26, 0xee2, x0	// Write all 0s to CSR
	csrrw x26, 0xee2, x4	// Restore CSR

// Testing CSR 0xee3
	csrr x4, 0xee3	// Read CSR
	li x28, -1
	csrrw x10, 0xee3, x28	// Write all 1s to CSR
	csrrw x10, 0xee3, x0	// Write all 0s to CSR
	csrrw x10, 0xee3, x4	// Restore CSR

// Testing CSR 0xee4
	csrr x15, 0xee4	// Read CSR
	li x27, -1
	csrrw x10, 0xee4, x27	// Write all 1s to CSR
	csrrw x10, 0xee4, x0	// Write all 0s to CSR
	csrrw x10, 0xee4, x15	// Restore CSR

// Testing CSR 0xee5
	csrr x24, 0xee5	// Read CSR
	li x5, -1
	csrrw x14, 0xee5, x5	// Write all 1s to CSR
	csrrw x14, 0xee5, x0	// Write all 0s to CSR
	csrrw x14, 0xee5, x24	// Restore CSR

// Testing CSR 0xee6
	csrr x9, 0xee6	// Read CSR
	li x25, -1
	csrrw x12, 0xee6, x25	// Write all 1s to CSR
	csrrw x12, 0xee6, x0	// Write all 0s to CSR
	csrrw x12, 0xee6, x9	// Restore CSR

// Testing CSR 0xee7
	csrr x9, 0xee7	// Read CSR
	li x14, -1
	csrrw x19, 0xee7, x14	// Write all 1s to CSR
	csrrw x19, 0xee7, x0	// Write all 0s to CSR
	csrrw x19, 0xee7, x9	// Restore CSR

// Testing CSR 0xee8
	csrr x26, 0xee8	// Read CSR
	li x17, -1
	csrrw x10, 0xee8, x17	// Write all 1s to CSR
	csrrw x10, 0xee8, x0	// Write all 0s to CSR
	csrrw x10, 0xee8, x26	// Restore CSR

// Testing CSR 0xee9
	csrr x19, 0xee9	// Read CSR
	li x26, -1
	csrrw x16, 0xee9, x26	// Write all 1s to CSR
	csrrw x16, 0xee9, x0	// Write all 0s to CSR
	csrrw x16, 0xee9, x19	// Restore CSR

// Testing CSR 0xeea
	csrr x14, 0xeea	// Read CSR
	li x8, -1
	csrrw x23, 0xeea, x8	// Write all 1s to CSR
	csrrw x23, 0xeea, x0	// Write all 0s to CSR
	csrrw x23, 0xeea, x14	// Restore CSR

// Testing CSR 0xeeb
	csrr x21, 0xeeb	// Read CSR
	li x6, -1
	csrrw x22, 0xeeb, x6	// Write all 1s to CSR
	csrrw x22, 0xeeb, x0	// Write all 0s to CSR
	csrrw x22, 0xeeb, x21	// Restore CSR

// Testing CSR 0xeec
	csrr x15, 0xeec	// Read CSR
	li x10, -1
	csrrw x5, 0xeec, x10	// Write all 1s to CSR
	csrrw x5, 0xeec, x0	// Write all 0s to CSR
	csrrw x5, 0xeec, x15	// Restore CSR

// Testing CSR 0xeed
	csrr x4, 0xeed	// Read CSR
	li x19, -1
	csrrw x6, 0xeed, x19	// Write all 1s to CSR
	csrrw x6, 0xeed, x0	// Write all 0s to CSR
	csrrw x6, 0xeed, x4	// Restore CSR

// Testing CSR 0xeee
	csrr x5, 0xeee	// Read CSR
	li x9, -1
	csrrw x31, 0xeee, x9	// Write all 1s to CSR
	csrrw x31, 0xeee, x0	// Write all 0s to CSR
	csrrw x31, 0xeee, x5	// Restore CSR

// Testing CSR 0xeef
	csrr x25, 0xeef	// Read CSR
	li x30, -1
	csrrw x10, 0xeef, x30	// Write all 1s to CSR
	csrrw x10, 0xeef, x0	// Write all 0s to CSR
	csrrw x10, 0xeef, x25	// Restore CSR

// Testing CSR 0xef0
	csrr x9, 0xef0	// Read CSR
	li x4, -1
	csrrw x11, 0xef0, x4	// Write all 1s to CSR
	csrrw x11, 0xef0, x0	// Write all 0s to CSR
	csrrw x11, 0xef0, x9	// Restore CSR

// Testing CSR 0xef1
	csrr x4, 0xef1	// Read CSR
	li x1, -1
	csrrw x7, 0xef1, x1	// Write all 1s to CSR
	csrrw x7, 0xef1, x0	// Write all 0s to CSR
	csrrw x7, 0xef1, x4	// Restore CSR

// Testing CSR 0xef2
	csrr x3, 0xef2	// Read CSR
	li x19, -1
	csrrw x23, 0xef2, x19	// Write all 1s to CSR
	csrrw x23, 0xef2, x0	// Write all 0s to CSR
	csrrw x23, 0xef2, x3	// Restore CSR

// Testing CSR 0xef3
	csrr x11, 0xef3	// Read CSR
	li x17, -1
	csrrw x2, 0xef3, x17	// Write all 1s to CSR
	csrrw x2, 0xef3, x0	// Write all 0s to CSR
	csrrw x2, 0xef3, x11	// Restore CSR

// Testing CSR 0xef4
	csrr x9, 0xef4	// Read CSR
	li x20, -1
	csrrw x21, 0xef4, x20	// Write all 1s to CSR
	csrrw x21, 0xef4, x0	// Write all 0s to CSR
	csrrw x21, 0xef4, x9	// Restore CSR

// Testing CSR 0xef5
	csrr x16, 0xef5	// Read CSR
	li x14, -1
	csrrw x29, 0xef5, x14	// Write all 1s to CSR
	csrrw x29, 0xef5, x0	// Write all 0s to CSR
	csrrw x29, 0xef5, x16	// Restore CSR

// Testing CSR 0xef6
	csrr x4, 0xef6	// Read CSR
	li x6, -1
	csrrw x9, 0xef6, x6	// Write all 1s to CSR
	csrrw x9, 0xef6, x0	// Write all 0s to CSR
	csrrw x9, 0xef6, x4	// Restore CSR

// Testing CSR 0xef7
	csrr x22, 0xef7	// Read CSR
	li x23, -1
	csrrw x7, 0xef7, x23	// Write all 1s to CSR
	csrrw x7, 0xef7, x0	// Write all 0s to CSR
	csrrw x7, 0xef7, x22	// Restore CSR

// Testing CSR 0xef8
	csrr x8, 0xef8	// Read CSR
	li x20, -1
	csrrw x11, 0xef8, x20	// Write all 1s to CSR
	csrrw x11, 0xef8, x0	// Write all 0s to CSR
	csrrw x11, 0xef8, x8	// Restore CSR

// Testing CSR 0xef9
	csrr x31, 0xef9	// Read CSR
	li x6, -1
	csrrw x27, 0xef9, x6	// Write all 1s to CSR
	csrrw x27, 0xef9, x0	// Write all 0s to CSR
	csrrw x27, 0xef9, x31	// Restore CSR

// Testing CSR 0xefa
	csrr x2, 0xefa	// Read CSR
	li x30, -1
	csrrw x1, 0xefa, x30	// Write all 1s to CSR
	csrrw x1, 0xefa, x0	// Write all 0s to CSR
	csrrw x1, 0xefa, x2	// Restore CSR

// Testing CSR 0xefb
	csrr x7, 0xefb	// Read CSR
	li x29, -1
	csrrw x4, 0xefb, x29	// Write all 1s to CSR
	csrrw x4, 0xefb, x0	// Write all 0s to CSR
	csrrw x4, 0xefb, x7	// Restore CSR

// Testing CSR 0xefc
	csrr x24, 0xefc	// Read CSR
	li x22, -1
	csrrw x2, 0xefc, x22	// Write all 1s to CSR
	csrrw x2, 0xefc, x0	// Write all 0s to CSR
	csrrw x2, 0xefc, x24	// Restore CSR

// Testing CSR 0xefd
	csrr x29, 0xefd	// Read CSR
	li x30, -1
	csrrw x16, 0xefd, x30	// Write all 1s to CSR
	csrrw x16, 0xefd, x0	// Write all 0s to CSR
	csrrw x16, 0xefd, x29	// Restore CSR

// Testing CSR 0xefe
	csrr x3, 0xefe	// Read CSR
	li x10, -1
	csrrw x7, 0xefe, x10	// Write all 1s to CSR
	csrrw x7, 0xefe, x0	// Write all 0s to CSR
	csrrw x7, 0xefe, x3	// Restore CSR

// Testing CSR 0xeff
	csrr x17, 0xeff	// Read CSR
	li x12, -1
	csrrw x23, 0xeff, x12	// Write all 1s to CSR
	csrrw x23, 0xeff, x0	// Write all 0s to CSR
	csrrw x23, 0xeff, x17	// Restore CSR

// Testing CSR 0xf00
	csrr x29, 0xf00	// Read CSR
	li x21, -1
	csrrw x14, 0xf00, x21	// Write all 1s to CSR
	csrrw x14, 0xf00, x0	// Write all 0s to CSR
	csrrw x14, 0xf00, x29	// Restore CSR

// Testing CSR 0xf01
	csrr x6, 0xf01	// Read CSR
	li x28, -1
	csrrw x25, 0xf01, x28	// Write all 1s to CSR
	csrrw x25, 0xf01, x0	// Write all 0s to CSR
	csrrw x25, 0xf01, x6	// Restore CSR

// Testing CSR 0xf02
	csrr x8, 0xf02	// Read CSR
	li x29, -1
	csrrw x23, 0xf02, x29	// Write all 1s to CSR
	csrrw x23, 0xf02, x0	// Write all 0s to CSR
	csrrw x23, 0xf02, x8	// Restore CSR

// Testing CSR 0xf03
	csrr x17, 0xf03	// Read CSR
	li x30, -1
	csrrw x23, 0xf03, x30	// Write all 1s to CSR
	csrrw x23, 0xf03, x0	// Write all 0s to CSR
	csrrw x23, 0xf03, x17	// Restore CSR

// Testing CSR 0xf04
	csrr x18, 0xf04	// Read CSR
	li x19, -1
	csrrw x30, 0xf04, x19	// Write all 1s to CSR
	csrrw x30, 0xf04, x0	// Write all 0s to CSR
	csrrw x30, 0xf04, x18	// Restore CSR

// Testing CSR 0xf05
	csrr x6, 0xf05	// Read CSR
	li x15, -1
	csrrw x13, 0xf05, x15	// Write all 1s to CSR
	csrrw x13, 0xf05, x0	// Write all 0s to CSR
	csrrw x13, 0xf05, x6	// Restore CSR

// Testing CSR 0xf06
	csrr x7, 0xf06	// Read CSR
	li x31, -1
	csrrw x27, 0xf06, x31	// Write all 1s to CSR
	csrrw x27, 0xf06, x0	// Write all 0s to CSR
	csrrw x27, 0xf06, x7	// Restore CSR

// Testing CSR 0xf07
	csrr x2, 0xf07	// Read CSR
	li x17, -1
	csrrw x25, 0xf07, x17	// Write all 1s to CSR
	csrrw x25, 0xf07, x0	// Write all 0s to CSR
	csrrw x25, 0xf07, x2	// Restore CSR

// Testing CSR 0xf08
	csrr x20, 0xf08	// Read CSR
	li x19, -1
	csrrw x14, 0xf08, x19	// Write all 1s to CSR
	csrrw x14, 0xf08, x0	// Write all 0s to CSR
	csrrw x14, 0xf08, x20	// Restore CSR

// Testing CSR 0xf09
	csrr x23, 0xf09	// Read CSR
	li x16, -1
	csrrw x31, 0xf09, x16	// Write all 1s to CSR
	csrrw x31, 0xf09, x0	// Write all 0s to CSR
	csrrw x31, 0xf09, x23	// Restore CSR

// Testing CSR 0xf0a
	csrr x5, 0xf0a	// Read CSR
	li x14, -1
	csrrw x20, 0xf0a, x14	// Write all 1s to CSR
	csrrw x20, 0xf0a, x0	// Write all 0s to CSR
	csrrw x20, 0xf0a, x5	// Restore CSR

// Testing CSR 0xf0b
	csrr x27, 0xf0b	// Read CSR
	li x31, -1
	csrrw x17, 0xf0b, x31	// Write all 1s to CSR
	csrrw x17, 0xf0b, x0	// Write all 0s to CSR
	csrrw x17, 0xf0b, x27	// Restore CSR

// Testing CSR 0xf0c
	csrr x17, 0xf0c	// Read CSR
	li x31, -1
	csrrw x28, 0xf0c, x31	// Write all 1s to CSR
	csrrw x28, 0xf0c, x0	// Write all 0s to CSR
	csrrw x28, 0xf0c, x17	// Restore CSR

// Testing CSR 0xf0d
	csrr x29, 0xf0d	// Read CSR
	li x22, -1
	csrrw x3, 0xf0d, x22	// Write all 1s to CSR
	csrrw x3, 0xf0d, x0	// Write all 0s to CSR
	csrrw x3, 0xf0d, x29	// Restore CSR

// Testing CSR 0xf0e
	csrr x6, 0xf0e	// Read CSR
	li x19, -1
	csrrw x27, 0xf0e, x19	// Write all 1s to CSR
	csrrw x27, 0xf0e, x0	// Write all 0s to CSR
	csrrw x27, 0xf0e, x6	// Restore CSR

// Testing CSR 0xf0f
	csrr x27, 0xf0f	// Read CSR
	li x6, -1
	csrrw x11, 0xf0f, x6	// Write all 1s to CSR
	csrrw x11, 0xf0f, x0	// Write all 0s to CSR
	csrrw x11, 0xf0f, x27	// Restore CSR

// Testing CSR 0xf10
	csrr x31, 0xf10	// Read CSR
	li x20, -1
	csrrw x6, 0xf10, x20	// Write all 1s to CSR
	csrrw x6, 0xf10, x0	// Write all 0s to CSR
	csrrw x6, 0xf10, x31	// Restore CSR

// Testing CSR 0xf11
	csrr x20, 0xf11	// Read CSR
	li x14, -1
	csrrw x29, 0xf11, x14	// Write all 1s to CSR
	csrrw x29, 0xf11, x0	// Write all 0s to CSR
	csrrw x29, 0xf11, x20	// Restore CSR

// Testing CSR 0xf12
	csrr x27, 0xf12	// Read CSR
	li x21, -1
	csrrw x12, 0xf12, x21	// Write all 1s to CSR
	csrrw x12, 0xf12, x0	// Write all 0s to CSR
	csrrw x12, 0xf12, x27	// Restore CSR

// Testing CSR 0xf13
	csrr x20, 0xf13	// Read CSR
	li x14, -1
	csrrw x22, 0xf13, x14	// Write all 1s to CSR
	csrrw x22, 0xf13, x0	// Write all 0s to CSR
	csrrw x22, 0xf13, x20	// Restore CSR

// Testing CSR 0xf14
	csrr x14, 0xf14	// Read CSR
	li x10, -1
	csrrw x7, 0xf14, x10	// Write all 1s to CSR
	csrrw x7, 0xf14, x0	// Write all 0s to CSR
	csrrw x7, 0xf14, x14	// Restore CSR

// Testing CSR 0xf15
	csrr x13, 0xf15	// Read CSR
	li x14, -1
	csrrw x19, 0xf15, x14	// Write all 1s to CSR
	csrrw x19, 0xf15, x0	// Write all 0s to CSR
	csrrw x19, 0xf15, x13	// Restore CSR

// Testing CSR 0xf16
	csrr x14, 0xf16	// Read CSR
	li x17, -1
	csrrw x23, 0xf16, x17	// Write all 1s to CSR
	csrrw x23, 0xf16, x0	// Write all 0s to CSR
	csrrw x23, 0xf16, x14	// Restore CSR

// Testing CSR 0xf17
	csrr x31, 0xf17	// Read CSR
	li x8, -1
	csrrw x24, 0xf17, x8	// Write all 1s to CSR
	csrrw x24, 0xf17, x0	// Write all 0s to CSR
	csrrw x24, 0xf17, x31	// Restore CSR

// Testing CSR 0xf18
	csrr x15, 0xf18	// Read CSR
	li x3, -1
	csrrw x1, 0xf18, x3	// Write all 1s to CSR
	csrrw x1, 0xf18, x0	// Write all 0s to CSR
	csrrw x1, 0xf18, x15	// Restore CSR

// Testing CSR 0xf19
	csrr x22, 0xf19	// Read CSR
	li x16, -1
	csrrw x19, 0xf19, x16	// Write all 1s to CSR
	csrrw x19, 0xf19, x0	// Write all 0s to CSR
	csrrw x19, 0xf19, x22	// Restore CSR

// Testing CSR 0xf1a
	csrr x17, 0xf1a	// Read CSR
	li x2, -1
	csrrw x11, 0xf1a, x2	// Write all 1s to CSR
	csrrw x11, 0xf1a, x0	// Write all 0s to CSR
	csrrw x11, 0xf1a, x17	// Restore CSR

// Testing CSR 0xf1b
	csrr x11, 0xf1b	// Read CSR
	li x25, -1
	csrrw x30, 0xf1b, x25	// Write all 1s to CSR
	csrrw x30, 0xf1b, x0	// Write all 0s to CSR
	csrrw x30, 0xf1b, x11	// Restore CSR

// Testing CSR 0xf1c
	csrr x11, 0xf1c	// Read CSR
	li x16, -1
	csrrw x21, 0xf1c, x16	// Write all 1s to CSR
	csrrw x21, 0xf1c, x0	// Write all 0s to CSR
	csrrw x21, 0xf1c, x11	// Restore CSR

// Testing CSR 0xf1d
	csrr x23, 0xf1d	// Read CSR
	li x19, -1
	csrrw x25, 0xf1d, x19	// Write all 1s to CSR
	csrrw x25, 0xf1d, x0	// Write all 0s to CSR
	csrrw x25, 0xf1d, x23	// Restore CSR

// Testing CSR 0xf1e
	csrr x29, 0xf1e	// Read CSR
	li x10, -1
	csrrw x25, 0xf1e, x10	// Write all 1s to CSR
	csrrw x25, 0xf1e, x0	// Write all 0s to CSR
	csrrw x25, 0xf1e, x29	// Restore CSR

// Testing CSR 0xf1f
	csrr x19, 0xf1f	// Read CSR
	li x28, -1
	csrrw x29, 0xf1f, x28	// Write all 1s to CSR
	csrrw x29, 0xf1f, x0	// Write all 0s to CSR
	csrrw x29, 0xf1f, x19	// Restore CSR

// Testing CSR 0xf20
	csrr x17, 0xf20	// Read CSR
	li x3, -1
	csrrw x2, 0xf20, x3	// Write all 1s to CSR
	csrrw x2, 0xf20, x0	// Write all 0s to CSR
	csrrw x2, 0xf20, x17	// Restore CSR

// Testing CSR 0xf21
	csrr x27, 0xf21	// Read CSR
	li x3, -1
	csrrw x23, 0xf21, x3	// Write all 1s to CSR
	csrrw x23, 0xf21, x0	// Write all 0s to CSR
	csrrw x23, 0xf21, x27	// Restore CSR

// Testing CSR 0xf22
	csrr x10, 0xf22	// Read CSR
	li x27, -1
	csrrw x6, 0xf22, x27	// Write all 1s to CSR
	csrrw x6, 0xf22, x0	// Write all 0s to CSR
	csrrw x6, 0xf22, x10	// Restore CSR

// Testing CSR 0xf23
	csrr x29, 0xf23	// Read CSR
	li x9, -1
	csrrw x24, 0xf23, x9	// Write all 1s to CSR
	csrrw x24, 0xf23, x0	// Write all 0s to CSR
	csrrw x24, 0xf23, x29	// Restore CSR

// Testing CSR 0xf24
	csrr x8, 0xf24	// Read CSR
	li x22, -1
	csrrw x3, 0xf24, x22	// Write all 1s to CSR
	csrrw x3, 0xf24, x0	// Write all 0s to CSR
	csrrw x3, 0xf24, x8	// Restore CSR

// Testing CSR 0xf25
	csrr x4, 0xf25	// Read CSR
	li x31, -1
	csrrw x19, 0xf25, x31	// Write all 1s to CSR
	csrrw x19, 0xf25, x0	// Write all 0s to CSR
	csrrw x19, 0xf25, x4	// Restore CSR

// Testing CSR 0xf26
	csrr x7, 0xf26	// Read CSR
	li x2, -1
	csrrw x10, 0xf26, x2	// Write all 1s to CSR
	csrrw x10, 0xf26, x0	// Write all 0s to CSR
	csrrw x10, 0xf26, x7	// Restore CSR

// Testing CSR 0xf27
	csrr x14, 0xf27	// Read CSR
	li x9, -1
	csrrw x3, 0xf27, x9	// Write all 1s to CSR
	csrrw x3, 0xf27, x0	// Write all 0s to CSR
	csrrw x3, 0xf27, x14	// Restore CSR

// Testing CSR 0xf28
	csrr x17, 0xf28	// Read CSR
	li x20, -1
	csrrw x31, 0xf28, x20	// Write all 1s to CSR
	csrrw x31, 0xf28, x0	// Write all 0s to CSR
	csrrw x31, 0xf28, x17	// Restore CSR

// Testing CSR 0xf29
	csrr x2, 0xf29	// Read CSR
	li x1, -1
	csrrw x24, 0xf29, x1	// Write all 1s to CSR
	csrrw x24, 0xf29, x0	// Write all 0s to CSR
	csrrw x24, 0xf29, x2	// Restore CSR

// Testing CSR 0xf2a
	csrr x5, 0xf2a	// Read CSR
	li x22, -1
	csrrw x8, 0xf2a, x22	// Write all 1s to CSR
	csrrw x8, 0xf2a, x0	// Write all 0s to CSR
	csrrw x8, 0xf2a, x5	// Restore CSR

// Testing CSR 0xf2b
	csrr x3, 0xf2b	// Read CSR
	li x14, -1
	csrrw x5, 0xf2b, x14	// Write all 1s to CSR
	csrrw x5, 0xf2b, x0	// Write all 0s to CSR
	csrrw x5, 0xf2b, x3	// Restore CSR

// Testing CSR 0xf2c
	csrr x23, 0xf2c	// Read CSR
	li x25, -1
	csrrw x19, 0xf2c, x25	// Write all 1s to CSR
	csrrw x19, 0xf2c, x0	// Write all 0s to CSR
	csrrw x19, 0xf2c, x23	// Restore CSR

// Testing CSR 0xf2d
	csrr x24, 0xf2d	// Read CSR
	li x20, -1
	csrrw x30, 0xf2d, x20	// Write all 1s to CSR
	csrrw x30, 0xf2d, x0	// Write all 0s to CSR
	csrrw x30, 0xf2d, x24	// Restore CSR

// Testing CSR 0xf2e
	csrr x28, 0xf2e	// Read CSR
	li x12, -1
	csrrw x3, 0xf2e, x12	// Write all 1s to CSR
	csrrw x3, 0xf2e, x0	// Write all 0s to CSR
	csrrw x3, 0xf2e, x28	// Restore CSR

// Testing CSR 0xf2f
	csrr x7, 0xf2f	// Read CSR
	li x26, -1
	csrrw x31, 0xf2f, x26	// Write all 1s to CSR
	csrrw x31, 0xf2f, x0	// Write all 0s to CSR
	csrrw x31, 0xf2f, x7	// Restore CSR

// Testing CSR 0xf30
	csrr x8, 0xf30	// Read CSR
	li x16, -1
	csrrw x25, 0xf30, x16	// Write all 1s to CSR
	csrrw x25, 0xf30, x0	// Write all 0s to CSR
	csrrw x25, 0xf30, x8	// Restore CSR

// Testing CSR 0xf31
	csrr x19, 0xf31	// Read CSR
	li x30, -1
	csrrw x3, 0xf31, x30	// Write all 1s to CSR
	csrrw x3, 0xf31, x0	// Write all 0s to CSR
	csrrw x3, 0xf31, x19	// Restore CSR

// Testing CSR 0xf32
	csrr x28, 0xf32	// Read CSR
	li x26, -1
	csrrw x17, 0xf32, x26	// Write all 1s to CSR
	csrrw x17, 0xf32, x0	// Write all 0s to CSR
	csrrw x17, 0xf32, x28	// Restore CSR

// Testing CSR 0xf33
	csrr x8, 0xf33	// Read CSR
	li x28, -1
	csrrw x31, 0xf33, x28	// Write all 1s to CSR
	csrrw x31, 0xf33, x0	// Write all 0s to CSR
	csrrw x31, 0xf33, x8	// Restore CSR

// Testing CSR 0xf34
	csrr x17, 0xf34	// Read CSR
	li x15, -1
	csrrw x29, 0xf34, x15	// Write all 1s to CSR
	csrrw x29, 0xf34, x0	// Write all 0s to CSR
	csrrw x29, 0xf34, x17	// Restore CSR

// Testing CSR 0xf35
	csrr x6, 0xf35	// Read CSR
	li x15, -1
	csrrw x20, 0xf35, x15	// Write all 1s to CSR
	csrrw x20, 0xf35, x0	// Write all 0s to CSR
	csrrw x20, 0xf35, x6	// Restore CSR

// Testing CSR 0xf36
	csrr x12, 0xf36	// Read CSR
	li x8, -1
	csrrw x5, 0xf36, x8	// Write all 1s to CSR
	csrrw x5, 0xf36, x0	// Write all 0s to CSR
	csrrw x5, 0xf36, x12	// Restore CSR

// Testing CSR 0xf37
	csrr x4, 0xf37	// Read CSR
	li x10, -1
	csrrw x16, 0xf37, x10	// Write all 1s to CSR
	csrrw x16, 0xf37, x0	// Write all 0s to CSR
	csrrw x16, 0xf37, x4	// Restore CSR

// Testing CSR 0xf38
	csrr x29, 0xf38	// Read CSR
	li x17, -1
	csrrw x22, 0xf38, x17	// Write all 1s to CSR
	csrrw x22, 0xf38, x0	// Write all 0s to CSR
	csrrw x22, 0xf38, x29	// Restore CSR

// Testing CSR 0xf39
	csrr x23, 0xf39	// Read CSR
	li x2, -1
	csrrw x29, 0xf39, x2	// Write all 1s to CSR
	csrrw x29, 0xf39, x0	// Write all 0s to CSR
	csrrw x29, 0xf39, x23	// Restore CSR

// Testing CSR 0xf3a
	csrr x13, 0xf3a	// Read CSR
	li x7, -1
	csrrw x14, 0xf3a, x7	// Write all 1s to CSR
	csrrw x14, 0xf3a, x0	// Write all 0s to CSR
	csrrw x14, 0xf3a, x13	// Restore CSR

// Testing CSR 0xf3b
	csrr x27, 0xf3b	// Read CSR
	li x30, -1
	csrrw x15, 0xf3b, x30	// Write all 1s to CSR
	csrrw x15, 0xf3b, x0	// Write all 0s to CSR
	csrrw x15, 0xf3b, x27	// Restore CSR

// Testing CSR 0xf3c
	csrr x19, 0xf3c	// Read CSR
	li x5, -1
	csrrw x26, 0xf3c, x5	// Write all 1s to CSR
	csrrw x26, 0xf3c, x0	// Write all 0s to CSR
	csrrw x26, 0xf3c, x19	// Restore CSR

// Testing CSR 0xf3d
	csrr x25, 0xf3d	// Read CSR
	li x27, -1
	csrrw x13, 0xf3d, x27	// Write all 1s to CSR
	csrrw x13, 0xf3d, x0	// Write all 0s to CSR
	csrrw x13, 0xf3d, x25	// Restore CSR

// Testing CSR 0xf3e
	csrr x2, 0xf3e	// Read CSR
	li x18, -1
	csrrw x26, 0xf3e, x18	// Write all 1s to CSR
	csrrw x26, 0xf3e, x0	// Write all 0s to CSR
	csrrw x26, 0xf3e, x2	// Restore CSR

// Testing CSR 0xf3f
	csrr x1, 0xf3f	// Read CSR
	li x17, -1
	csrrw x8, 0xf3f, x17	// Write all 1s to CSR
	csrrw x8, 0xf3f, x0	// Write all 0s to CSR
	csrrw x8, 0xf3f, x1	// Restore CSR

// Testing CSR 0xf40
	csrr x18, 0xf40	// Read CSR
	li x19, -1
	csrrw x12, 0xf40, x19	// Write all 1s to CSR
	csrrw x12, 0xf40, x0	// Write all 0s to CSR
	csrrw x12, 0xf40, x18	// Restore CSR

// Testing CSR 0xf41
	csrr x1, 0xf41	// Read CSR
	li x25, -1
	csrrw x5, 0xf41, x25	// Write all 1s to CSR
	csrrw x5, 0xf41, x0	// Write all 0s to CSR
	csrrw x5, 0xf41, x1	// Restore CSR

// Testing CSR 0xf42
	csrr x3, 0xf42	// Read CSR
	li x17, -1
	csrrw x4, 0xf42, x17	// Write all 1s to CSR
	csrrw x4, 0xf42, x0	// Write all 0s to CSR
	csrrw x4, 0xf42, x3	// Restore CSR

// Testing CSR 0xf43
	csrr x8, 0xf43	// Read CSR
	li x23, -1
	csrrw x29, 0xf43, x23	// Write all 1s to CSR
	csrrw x29, 0xf43, x0	// Write all 0s to CSR
	csrrw x29, 0xf43, x8	// Restore CSR

// Testing CSR 0xf44
	csrr x31, 0xf44	// Read CSR
	li x6, -1
	csrrw x13, 0xf44, x6	// Write all 1s to CSR
	csrrw x13, 0xf44, x0	// Write all 0s to CSR
	csrrw x13, 0xf44, x31	// Restore CSR

// Testing CSR 0xf45
	csrr x12, 0xf45	// Read CSR
	li x7, -1
	csrrw x3, 0xf45, x7	// Write all 1s to CSR
	csrrw x3, 0xf45, x0	// Write all 0s to CSR
	csrrw x3, 0xf45, x12	// Restore CSR

// Testing CSR 0xf46
	csrr x14, 0xf46	// Read CSR
	li x31, -1
	csrrw x7, 0xf46, x31	// Write all 1s to CSR
	csrrw x7, 0xf46, x0	// Write all 0s to CSR
	csrrw x7, 0xf46, x14	// Restore CSR

// Testing CSR 0xf47
	csrr x23, 0xf47	// Read CSR
	li x25, -1
	csrrw x5, 0xf47, x25	// Write all 1s to CSR
	csrrw x5, 0xf47, x0	// Write all 0s to CSR
	csrrw x5, 0xf47, x23	// Restore CSR

// Testing CSR 0xf48
	csrr x23, 0xf48	// Read CSR
	li x8, -1
	csrrw x16, 0xf48, x8	// Write all 1s to CSR
	csrrw x16, 0xf48, x0	// Write all 0s to CSR
	csrrw x16, 0xf48, x23	// Restore CSR

// Testing CSR 0xf49
	csrr x20, 0xf49	// Read CSR
	li x14, -1
	csrrw x10, 0xf49, x14	// Write all 1s to CSR
	csrrw x10, 0xf49, x0	// Write all 0s to CSR
	csrrw x10, 0xf49, x20	// Restore CSR

// Testing CSR 0xf4a
	csrr x12, 0xf4a	// Read CSR
	li x6, -1
	csrrw x24, 0xf4a, x6	// Write all 1s to CSR
	csrrw x24, 0xf4a, x0	// Write all 0s to CSR
	csrrw x24, 0xf4a, x12	// Restore CSR

// Testing CSR 0xf4b
	csrr x27, 0xf4b	// Read CSR
	li x24, -1
	csrrw x9, 0xf4b, x24	// Write all 1s to CSR
	csrrw x9, 0xf4b, x0	// Write all 0s to CSR
	csrrw x9, 0xf4b, x27	// Restore CSR

// Testing CSR 0xf4c
	csrr x10, 0xf4c	// Read CSR
	li x23, -1
	csrrw x29, 0xf4c, x23	// Write all 1s to CSR
	csrrw x29, 0xf4c, x0	// Write all 0s to CSR
	csrrw x29, 0xf4c, x10	// Restore CSR

// Testing CSR 0xf4d
	csrr x13, 0xf4d	// Read CSR
	li x12, -1
	csrrw x8, 0xf4d, x12	// Write all 1s to CSR
	csrrw x8, 0xf4d, x0	// Write all 0s to CSR
	csrrw x8, 0xf4d, x13	// Restore CSR

// Testing CSR 0xf4e
	csrr x30, 0xf4e	// Read CSR
	li x28, -1
	csrrw x8, 0xf4e, x28	// Write all 1s to CSR
	csrrw x8, 0xf4e, x0	// Write all 0s to CSR
	csrrw x8, 0xf4e, x30	// Restore CSR

// Testing CSR 0xf4f
	csrr x23, 0xf4f	// Read CSR
	li x7, -1
	csrrw x14, 0xf4f, x7	// Write all 1s to CSR
	csrrw x14, 0xf4f, x0	// Write all 0s to CSR
	csrrw x14, 0xf4f, x23	// Restore CSR

// Testing CSR 0xf50
	csrr x22, 0xf50	// Read CSR
	li x21, -1
	csrrw x30, 0xf50, x21	// Write all 1s to CSR
	csrrw x30, 0xf50, x0	// Write all 0s to CSR
	csrrw x30, 0xf50, x22	// Restore CSR

// Testing CSR 0xf51
	csrr x5, 0xf51	// Read CSR
	li x13, -1
	csrrw x10, 0xf51, x13	// Write all 1s to CSR
	csrrw x10, 0xf51, x0	// Write all 0s to CSR
	csrrw x10, 0xf51, x5	// Restore CSR

// Testing CSR 0xf52
	csrr x25, 0xf52	// Read CSR
	li x30, -1
	csrrw x27, 0xf52, x30	// Write all 1s to CSR
	csrrw x27, 0xf52, x0	// Write all 0s to CSR
	csrrw x27, 0xf52, x25	// Restore CSR

// Testing CSR 0xf53
	csrr x29, 0xf53	// Read CSR
	li x7, -1
	csrrw x6, 0xf53, x7	// Write all 1s to CSR
	csrrw x6, 0xf53, x0	// Write all 0s to CSR
	csrrw x6, 0xf53, x29	// Restore CSR

// Testing CSR 0xf54
	csrr x27, 0xf54	// Read CSR
	li x2, -1
	csrrw x11, 0xf54, x2	// Write all 1s to CSR
	csrrw x11, 0xf54, x0	// Write all 0s to CSR
	csrrw x11, 0xf54, x27	// Restore CSR

// Testing CSR 0xf55
	csrr x22, 0xf55	// Read CSR
	li x11, -1
	csrrw x29, 0xf55, x11	// Write all 1s to CSR
	csrrw x29, 0xf55, x0	// Write all 0s to CSR
	csrrw x29, 0xf55, x22	// Restore CSR

// Testing CSR 0xf56
	csrr x22, 0xf56	// Read CSR
	li x20, -1
	csrrw x28, 0xf56, x20	// Write all 1s to CSR
	csrrw x28, 0xf56, x0	// Write all 0s to CSR
	csrrw x28, 0xf56, x22	// Restore CSR

// Testing CSR 0xf57
	csrr x30, 0xf57	// Read CSR
	li x22, -1
	csrrw x2, 0xf57, x22	// Write all 1s to CSR
	csrrw x2, 0xf57, x0	// Write all 0s to CSR
	csrrw x2, 0xf57, x30	// Restore CSR

// Testing CSR 0xf58
	csrr x10, 0xf58	// Read CSR
	li x7, -1
	csrrw x27, 0xf58, x7	// Write all 1s to CSR
	csrrw x27, 0xf58, x0	// Write all 0s to CSR
	csrrw x27, 0xf58, x10	// Restore CSR

// Testing CSR 0xf59
	csrr x16, 0xf59	// Read CSR
	li x5, -1
	csrrw x21, 0xf59, x5	// Write all 1s to CSR
	csrrw x21, 0xf59, x0	// Write all 0s to CSR
	csrrw x21, 0xf59, x16	// Restore CSR

// Testing CSR 0xf5a
	csrr x31, 0xf5a	// Read CSR
	li x2, -1
	csrrw x23, 0xf5a, x2	// Write all 1s to CSR
	csrrw x23, 0xf5a, x0	// Write all 0s to CSR
	csrrw x23, 0xf5a, x31	// Restore CSR

// Testing CSR 0xf5b
	csrr x6, 0xf5b	// Read CSR
	li x18, -1
	csrrw x27, 0xf5b, x18	// Write all 1s to CSR
	csrrw x27, 0xf5b, x0	// Write all 0s to CSR
	csrrw x27, 0xf5b, x6	// Restore CSR

// Testing CSR 0xf5c
	csrr x7, 0xf5c	// Read CSR
	li x12, -1
	csrrw x15, 0xf5c, x12	// Write all 1s to CSR
	csrrw x15, 0xf5c, x0	// Write all 0s to CSR
	csrrw x15, 0xf5c, x7	// Restore CSR

// Testing CSR 0xf5d
	csrr x30, 0xf5d	// Read CSR
	li x14, -1
	csrrw x8, 0xf5d, x14	// Write all 1s to CSR
	csrrw x8, 0xf5d, x0	// Write all 0s to CSR
	csrrw x8, 0xf5d, x30	// Restore CSR

// Testing CSR 0xf5e
	csrr x17, 0xf5e	// Read CSR
	li x5, -1
	csrrw x25, 0xf5e, x5	// Write all 1s to CSR
	csrrw x25, 0xf5e, x0	// Write all 0s to CSR
	csrrw x25, 0xf5e, x17	// Restore CSR

// Testing CSR 0xf5f
	csrr x6, 0xf5f	// Read CSR
	li x27, -1
	csrrw x22, 0xf5f, x27	// Write all 1s to CSR
	csrrw x22, 0xf5f, x0	// Write all 0s to CSR
	csrrw x22, 0xf5f, x6	// Restore CSR

// Testing CSR 0xf60
	csrr x16, 0xf60	// Read CSR
	li x17, -1
	csrrw x20, 0xf60, x17	// Write all 1s to CSR
	csrrw x20, 0xf60, x0	// Write all 0s to CSR
	csrrw x20, 0xf60, x16	// Restore CSR

// Testing CSR 0xf61
	csrr x27, 0xf61	// Read CSR
	li x5, -1
	csrrw x23, 0xf61, x5	// Write all 1s to CSR
	csrrw x23, 0xf61, x0	// Write all 0s to CSR
	csrrw x23, 0xf61, x27	// Restore CSR

// Testing CSR 0xf62
	csrr x1, 0xf62	// Read CSR
	li x20, -1
	csrrw x2, 0xf62, x20	// Write all 1s to CSR
	csrrw x2, 0xf62, x0	// Write all 0s to CSR
	csrrw x2, 0xf62, x1	// Restore CSR

// Testing CSR 0xf63
	csrr x13, 0xf63	// Read CSR
	li x5, -1
	csrrw x2, 0xf63, x5	// Write all 1s to CSR
	csrrw x2, 0xf63, x0	// Write all 0s to CSR
	csrrw x2, 0xf63, x13	// Restore CSR

// Testing CSR 0xf64
	csrr x27, 0xf64	// Read CSR
	li x7, -1
	csrrw x28, 0xf64, x7	// Write all 1s to CSR
	csrrw x28, 0xf64, x0	// Write all 0s to CSR
	csrrw x28, 0xf64, x27	// Restore CSR

// Testing CSR 0xf65
	csrr x22, 0xf65	// Read CSR
	li x19, -1
	csrrw x13, 0xf65, x19	// Write all 1s to CSR
	csrrw x13, 0xf65, x0	// Write all 0s to CSR
	csrrw x13, 0xf65, x22	// Restore CSR

// Testing CSR 0xf66
	csrr x7, 0xf66	// Read CSR
	li x16, -1
	csrrw x1, 0xf66, x16	// Write all 1s to CSR
	csrrw x1, 0xf66, x0	// Write all 0s to CSR
	csrrw x1, 0xf66, x7	// Restore CSR

// Testing CSR 0xf67
	csrr x25, 0xf67	// Read CSR
	li x13, -1
	csrrw x17, 0xf67, x13	// Write all 1s to CSR
	csrrw x17, 0xf67, x0	// Write all 0s to CSR
	csrrw x17, 0xf67, x25	// Restore CSR

// Testing CSR 0xf68
	csrr x18, 0xf68	// Read CSR
	li x4, -1
	csrrw x9, 0xf68, x4	// Write all 1s to CSR
	csrrw x9, 0xf68, x0	// Write all 0s to CSR
	csrrw x9, 0xf68, x18	// Restore CSR

// Testing CSR 0xf69
	csrr x15, 0xf69	// Read CSR
	li x2, -1
	csrrw x27, 0xf69, x2	// Write all 1s to CSR
	csrrw x27, 0xf69, x0	// Write all 0s to CSR
	csrrw x27, 0xf69, x15	// Restore CSR

// Testing CSR 0xf6a
	csrr x25, 0xf6a	// Read CSR
	li x11, -1
	csrrw x16, 0xf6a, x11	// Write all 1s to CSR
	csrrw x16, 0xf6a, x0	// Write all 0s to CSR
	csrrw x16, 0xf6a, x25	// Restore CSR

// Testing CSR 0xf6b
	csrr x28, 0xf6b	// Read CSR
	li x2, -1
	csrrw x16, 0xf6b, x2	// Write all 1s to CSR
	csrrw x16, 0xf6b, x0	// Write all 0s to CSR
	csrrw x16, 0xf6b, x28	// Restore CSR

// Testing CSR 0xf6c
	csrr x5, 0xf6c	// Read CSR
	li x28, -1
	csrrw x23, 0xf6c, x28	// Write all 1s to CSR
	csrrw x23, 0xf6c, x0	// Write all 0s to CSR
	csrrw x23, 0xf6c, x5	// Restore CSR

// Testing CSR 0xf6d
	csrr x5, 0xf6d	// Read CSR
	li x23, -1
	csrrw x31, 0xf6d, x23	// Write all 1s to CSR
	csrrw x31, 0xf6d, x0	// Write all 0s to CSR
	csrrw x31, 0xf6d, x5	// Restore CSR

// Testing CSR 0xf6e
	csrr x20, 0xf6e	// Read CSR
	li x31, -1
	csrrw x12, 0xf6e, x31	// Write all 1s to CSR
	csrrw x12, 0xf6e, x0	// Write all 0s to CSR
	csrrw x12, 0xf6e, x20	// Restore CSR

// Testing CSR 0xf6f
	csrr x15, 0xf6f	// Read CSR
	li x11, -1
	csrrw x22, 0xf6f, x11	// Write all 1s to CSR
	csrrw x22, 0xf6f, x0	// Write all 0s to CSR
	csrrw x22, 0xf6f, x15	// Restore CSR

// Testing CSR 0xf70
	csrr x2, 0xf70	// Read CSR
	li x3, -1
	csrrw x7, 0xf70, x3	// Write all 1s to CSR
	csrrw x7, 0xf70, x0	// Write all 0s to CSR
	csrrw x7, 0xf70, x2	// Restore CSR

// Testing CSR 0xf71
	csrr x19, 0xf71	// Read CSR
	li x22, -1
	csrrw x24, 0xf71, x22	// Write all 1s to CSR
	csrrw x24, 0xf71, x0	// Write all 0s to CSR
	csrrw x24, 0xf71, x19	// Restore CSR

// Testing CSR 0xf72
	csrr x24, 0xf72	// Read CSR
	li x29, -1
	csrrw x1, 0xf72, x29	// Write all 1s to CSR
	csrrw x1, 0xf72, x0	// Write all 0s to CSR
	csrrw x1, 0xf72, x24	// Restore CSR

// Testing CSR 0xf73
	csrr x3, 0xf73	// Read CSR
	li x31, -1
	csrrw x14, 0xf73, x31	// Write all 1s to CSR
	csrrw x14, 0xf73, x0	// Write all 0s to CSR
	csrrw x14, 0xf73, x3	// Restore CSR

// Testing CSR 0xf74
	csrr x25, 0xf74	// Read CSR
	li x9, -1
	csrrw x7, 0xf74, x9	// Write all 1s to CSR
	csrrw x7, 0xf74, x0	// Write all 0s to CSR
	csrrw x7, 0xf74, x25	// Restore CSR

// Testing CSR 0xf75
	csrr x4, 0xf75	// Read CSR
	li x11, -1
	csrrw x8, 0xf75, x11	// Write all 1s to CSR
	csrrw x8, 0xf75, x0	// Write all 0s to CSR
	csrrw x8, 0xf75, x4	// Restore CSR

// Testing CSR 0xf76
	csrr x11, 0xf76	// Read CSR
	li x26, -1
	csrrw x16, 0xf76, x26	// Write all 1s to CSR
	csrrw x16, 0xf76, x0	// Write all 0s to CSR
	csrrw x16, 0xf76, x11	// Restore CSR

// Testing CSR 0xf77
	csrr x18, 0xf77	// Read CSR
	li x13, -1
	csrrw x7, 0xf77, x13	// Write all 1s to CSR
	csrrw x7, 0xf77, x0	// Write all 0s to CSR
	csrrw x7, 0xf77, x18	// Restore CSR

// Testing CSR 0xf78
	csrr x8, 0xf78	// Read CSR
	li x13, -1
	csrrw x27, 0xf78, x13	// Write all 1s to CSR
	csrrw x27, 0xf78, x0	// Write all 0s to CSR
	csrrw x27, 0xf78, x8	// Restore CSR

// Testing CSR 0xf79
	csrr x3, 0xf79	// Read CSR
	li x16, -1
	csrrw x27, 0xf79, x16	// Write all 1s to CSR
	csrrw x27, 0xf79, x0	// Write all 0s to CSR
	csrrw x27, 0xf79, x3	// Restore CSR

// Testing CSR 0xf7a
	csrr x1, 0xf7a	// Read CSR
	li x15, -1
	csrrw x7, 0xf7a, x15	// Write all 1s to CSR
	csrrw x7, 0xf7a, x0	// Write all 0s to CSR
	csrrw x7, 0xf7a, x1	// Restore CSR

// Testing CSR 0xf7b
	csrr x1, 0xf7b	// Read CSR
	li x7, -1
	csrrw x8, 0xf7b, x7	// Write all 1s to CSR
	csrrw x8, 0xf7b, x0	// Write all 0s to CSR
	csrrw x8, 0xf7b, x1	// Restore CSR

// Testing CSR 0xf7c
	csrr x10, 0xf7c	// Read CSR
	li x20, -1
	csrrw x17, 0xf7c, x20	// Write all 1s to CSR
	csrrw x17, 0xf7c, x0	// Write all 0s to CSR
	csrrw x17, 0xf7c, x10	// Restore CSR

// Testing CSR 0xf7d
	csrr x6, 0xf7d	// Read CSR
	li x3, -1
	csrrw x16, 0xf7d, x3	// Write all 1s to CSR
	csrrw x16, 0xf7d, x0	// Write all 0s to CSR
	csrrw x16, 0xf7d, x6	// Restore CSR

// Testing CSR 0xf7e
	csrr x25, 0xf7e	// Read CSR
	li x20, -1
	csrrw x13, 0xf7e, x20	// Write all 1s to CSR
	csrrw x13, 0xf7e, x0	// Write all 0s to CSR
	csrrw x13, 0xf7e, x25	// Restore CSR

// Testing CSR 0xf7f
	csrr x13, 0xf7f	// Read CSR
	li x6, -1
	csrrw x1, 0xf7f, x6	// Write all 1s to CSR
	csrrw x1, 0xf7f, x0	// Write all 0s to CSR
	csrrw x1, 0xf7f, x13	// Restore CSR

// Testing CSR 0xf80
	csrr x30, 0xf80	// Read CSR
	li x2, -1
	csrrw x3, 0xf80, x2	// Write all 1s to CSR
	csrrw x3, 0xf80, x0	// Write all 0s to CSR
	csrrw x3, 0xf80, x30	// Restore CSR

// Testing CSR 0xf81
	csrr x26, 0xf81	// Read CSR
	li x4, -1
	csrrw x16, 0xf81, x4	// Write all 1s to CSR
	csrrw x16, 0xf81, x0	// Write all 0s to CSR
	csrrw x16, 0xf81, x26	// Restore CSR

// Testing CSR 0xf82
	csrr x20, 0xf82	// Read CSR
	li x4, -1
	csrrw x3, 0xf82, x4	// Write all 1s to CSR
	csrrw x3, 0xf82, x0	// Write all 0s to CSR
	csrrw x3, 0xf82, x20	// Restore CSR

// Testing CSR 0xf83
	csrr x7, 0xf83	// Read CSR
	li x13, -1
	csrrw x11, 0xf83, x13	// Write all 1s to CSR
	csrrw x11, 0xf83, x0	// Write all 0s to CSR
	csrrw x11, 0xf83, x7	// Restore CSR

// Testing CSR 0xf84
	csrr x9, 0xf84	// Read CSR
	li x2, -1
	csrrw x25, 0xf84, x2	// Write all 1s to CSR
	csrrw x25, 0xf84, x0	// Write all 0s to CSR
	csrrw x25, 0xf84, x9	// Restore CSR

// Testing CSR 0xf85
	csrr x20, 0xf85	// Read CSR
	li x21, -1
	csrrw x17, 0xf85, x21	// Write all 1s to CSR
	csrrw x17, 0xf85, x0	// Write all 0s to CSR
	csrrw x17, 0xf85, x20	// Restore CSR

// Testing CSR 0xf86
	csrr x19, 0xf86	// Read CSR
	li x25, -1
	csrrw x22, 0xf86, x25	// Write all 1s to CSR
	csrrw x22, 0xf86, x0	// Write all 0s to CSR
	csrrw x22, 0xf86, x19	// Restore CSR

// Testing CSR 0xf87
	csrr x16, 0xf87	// Read CSR
	li x17, -1
	csrrw x18, 0xf87, x17	// Write all 1s to CSR
	csrrw x18, 0xf87, x0	// Write all 0s to CSR
	csrrw x18, 0xf87, x16	// Restore CSR

// Testing CSR 0xf88
	csrr x24, 0xf88	// Read CSR
	li x26, -1
	csrrw x27, 0xf88, x26	// Write all 1s to CSR
	csrrw x27, 0xf88, x0	// Write all 0s to CSR
	csrrw x27, 0xf88, x24	// Restore CSR

// Testing CSR 0xf89
	csrr x27, 0xf89	// Read CSR
	li x22, -1
	csrrw x11, 0xf89, x22	// Write all 1s to CSR
	csrrw x11, 0xf89, x0	// Write all 0s to CSR
	csrrw x11, 0xf89, x27	// Restore CSR

// Testing CSR 0xf8a
	csrr x21, 0xf8a	// Read CSR
	li x4, -1
	csrrw x22, 0xf8a, x4	// Write all 1s to CSR
	csrrw x22, 0xf8a, x0	// Write all 0s to CSR
	csrrw x22, 0xf8a, x21	// Restore CSR

// Testing CSR 0xf8b
	csrr x29, 0xf8b	// Read CSR
	li x11, -1
	csrrw x25, 0xf8b, x11	// Write all 1s to CSR
	csrrw x25, 0xf8b, x0	// Write all 0s to CSR
	csrrw x25, 0xf8b, x29	// Restore CSR

// Testing CSR 0xf8c
	csrr x9, 0xf8c	// Read CSR
	li x1, -1
	csrrw x2, 0xf8c, x1	// Write all 1s to CSR
	csrrw x2, 0xf8c, x0	// Write all 0s to CSR
	csrrw x2, 0xf8c, x9	// Restore CSR

// Testing CSR 0xf8d
	csrr x22, 0xf8d	// Read CSR
	li x28, -1
	csrrw x2, 0xf8d, x28	// Write all 1s to CSR
	csrrw x2, 0xf8d, x0	// Write all 0s to CSR
	csrrw x2, 0xf8d, x22	// Restore CSR

// Testing CSR 0xf8e
	csrr x13, 0xf8e	// Read CSR
	li x12, -1
	csrrw x1, 0xf8e, x12	// Write all 1s to CSR
	csrrw x1, 0xf8e, x0	// Write all 0s to CSR
	csrrw x1, 0xf8e, x13	// Restore CSR

// Testing CSR 0xf8f
	csrr x16, 0xf8f	// Read CSR
	li x19, -1
	csrrw x12, 0xf8f, x19	// Write all 1s to CSR
	csrrw x12, 0xf8f, x0	// Write all 0s to CSR
	csrrw x12, 0xf8f, x16	// Restore CSR

// Testing CSR 0xf90
	csrr x30, 0xf90	// Read CSR
	li x6, -1
	csrrw x8, 0xf90, x6	// Write all 1s to CSR
	csrrw x8, 0xf90, x0	// Write all 0s to CSR
	csrrw x8, 0xf90, x30	// Restore CSR

// Testing CSR 0xf91
	csrr x25, 0xf91	// Read CSR
	li x24, -1
	csrrw x30, 0xf91, x24	// Write all 1s to CSR
	csrrw x30, 0xf91, x0	// Write all 0s to CSR
	csrrw x30, 0xf91, x25	// Restore CSR

// Testing CSR 0xf92
	csrr x6, 0xf92	// Read CSR
	li x17, -1
	csrrw x27, 0xf92, x17	// Write all 1s to CSR
	csrrw x27, 0xf92, x0	// Write all 0s to CSR
	csrrw x27, 0xf92, x6	// Restore CSR

// Testing CSR 0xf93
	csrr x20, 0xf93	// Read CSR
	li x27, -1
	csrrw x6, 0xf93, x27	// Write all 1s to CSR
	csrrw x6, 0xf93, x0	// Write all 0s to CSR
	csrrw x6, 0xf93, x20	// Restore CSR

// Testing CSR 0xf94
	csrr x9, 0xf94	// Read CSR
	li x22, -1
	csrrw x15, 0xf94, x22	// Write all 1s to CSR
	csrrw x15, 0xf94, x0	// Write all 0s to CSR
	csrrw x15, 0xf94, x9	// Restore CSR

// Testing CSR 0xf95
	csrr x27, 0xf95	// Read CSR
	li x15, -1
	csrrw x5, 0xf95, x15	// Write all 1s to CSR
	csrrw x5, 0xf95, x0	// Write all 0s to CSR
	csrrw x5, 0xf95, x27	// Restore CSR

// Testing CSR 0xf96
	csrr x7, 0xf96	// Read CSR
	li x9, -1
	csrrw x27, 0xf96, x9	// Write all 1s to CSR
	csrrw x27, 0xf96, x0	// Write all 0s to CSR
	csrrw x27, 0xf96, x7	// Restore CSR

// Testing CSR 0xf97
	csrr x6, 0xf97	// Read CSR
	li x23, -1
	csrrw x4, 0xf97, x23	// Write all 1s to CSR
	csrrw x4, 0xf97, x0	// Write all 0s to CSR
	csrrw x4, 0xf97, x6	// Restore CSR

// Testing CSR 0xf98
	csrr x22, 0xf98	// Read CSR
	li x8, -1
	csrrw x5, 0xf98, x8	// Write all 1s to CSR
	csrrw x5, 0xf98, x0	// Write all 0s to CSR
	csrrw x5, 0xf98, x22	// Restore CSR

// Testing CSR 0xf99
	csrr x3, 0xf99	// Read CSR
	li x9, -1
	csrrw x15, 0xf99, x9	// Write all 1s to CSR
	csrrw x15, 0xf99, x0	// Write all 0s to CSR
	csrrw x15, 0xf99, x3	// Restore CSR

// Testing CSR 0xf9a
	csrr x16, 0xf9a	// Read CSR
	li x12, -1
	csrrw x21, 0xf9a, x12	// Write all 1s to CSR
	csrrw x21, 0xf9a, x0	// Write all 0s to CSR
	csrrw x21, 0xf9a, x16	// Restore CSR

// Testing CSR 0xf9b
	csrr x1, 0xf9b	// Read CSR
	li x5, -1
	csrrw x7, 0xf9b, x5	// Write all 1s to CSR
	csrrw x7, 0xf9b, x0	// Write all 0s to CSR
	csrrw x7, 0xf9b, x1	// Restore CSR

// Testing CSR 0xf9c
	csrr x12, 0xf9c	// Read CSR
	li x23, -1
	csrrw x8, 0xf9c, x23	// Write all 1s to CSR
	csrrw x8, 0xf9c, x0	// Write all 0s to CSR
	csrrw x8, 0xf9c, x12	// Restore CSR

// Testing CSR 0xf9d
	csrr x2, 0xf9d	// Read CSR
	li x30, -1
	csrrw x1, 0xf9d, x30	// Write all 1s to CSR
	csrrw x1, 0xf9d, x0	// Write all 0s to CSR
	csrrw x1, 0xf9d, x2	// Restore CSR

// Testing CSR 0xf9e
	csrr x9, 0xf9e	// Read CSR
	li x28, -1
	csrrw x6, 0xf9e, x28	// Write all 1s to CSR
	csrrw x6, 0xf9e, x0	// Write all 0s to CSR
	csrrw x6, 0xf9e, x9	// Restore CSR

// Testing CSR 0xf9f
	csrr x30, 0xf9f	// Read CSR
	li x19, -1
	csrrw x2, 0xf9f, x19	// Write all 1s to CSR
	csrrw x2, 0xf9f, x0	// Write all 0s to CSR
	csrrw x2, 0xf9f, x30	// Restore CSR

// Testing CSR 0xfa0
	csrr x15, 0xfa0	// Read CSR
	li x9, -1
	csrrw x12, 0xfa0, x9	// Write all 1s to CSR
	csrrw x12, 0xfa0, x0	// Write all 0s to CSR
	csrrw x12, 0xfa0, x15	// Restore CSR

// Testing CSR 0xfa1
	csrr x29, 0xfa1	// Read CSR
	li x19, -1
	csrrw x4, 0xfa1, x19	// Write all 1s to CSR
	csrrw x4, 0xfa1, x0	// Write all 0s to CSR
	csrrw x4, 0xfa1, x29	// Restore CSR

// Testing CSR 0xfa2
	csrr x21, 0xfa2	// Read CSR
	li x13, -1
	csrrw x31, 0xfa2, x13	// Write all 1s to CSR
	csrrw x31, 0xfa2, x0	// Write all 0s to CSR
	csrrw x31, 0xfa2, x21	// Restore CSR

// Testing CSR 0xfa3
	csrr x9, 0xfa3	// Read CSR
	li x11, -1
	csrrw x13, 0xfa3, x11	// Write all 1s to CSR
	csrrw x13, 0xfa3, x0	// Write all 0s to CSR
	csrrw x13, 0xfa3, x9	// Restore CSR

// Testing CSR 0xfa4
	csrr x11, 0xfa4	// Read CSR
	li x13, -1
	csrrw x12, 0xfa4, x13	// Write all 1s to CSR
	csrrw x12, 0xfa4, x0	// Write all 0s to CSR
	csrrw x12, 0xfa4, x11	// Restore CSR

// Testing CSR 0xfa5
	csrr x27, 0xfa5	// Read CSR
	li x11, -1
	csrrw x7, 0xfa5, x11	// Write all 1s to CSR
	csrrw x7, 0xfa5, x0	// Write all 0s to CSR
	csrrw x7, 0xfa5, x27	// Restore CSR

// Testing CSR 0xfa6
	csrr x17, 0xfa6	// Read CSR
	li x30, -1
	csrrw x10, 0xfa6, x30	// Write all 1s to CSR
	csrrw x10, 0xfa6, x0	// Write all 0s to CSR
	csrrw x10, 0xfa6, x17	// Restore CSR

// Testing CSR 0xfa7
	csrr x22, 0xfa7	// Read CSR
	li x23, -1
	csrrw x16, 0xfa7, x23	// Write all 1s to CSR
	csrrw x16, 0xfa7, x0	// Write all 0s to CSR
	csrrw x16, 0xfa7, x22	// Restore CSR

// Testing CSR 0xfa8
	csrr x28, 0xfa8	// Read CSR
	li x24, -1
	csrrw x7, 0xfa8, x24	// Write all 1s to CSR
	csrrw x7, 0xfa8, x0	// Write all 0s to CSR
	csrrw x7, 0xfa8, x28	// Restore CSR

// Testing CSR 0xfa9
	csrr x2, 0xfa9	// Read CSR
	li x28, -1
	csrrw x9, 0xfa9, x28	// Write all 1s to CSR
	csrrw x9, 0xfa9, x0	// Write all 0s to CSR
	csrrw x9, 0xfa9, x2	// Restore CSR

// Testing CSR 0xfaa
	csrr x29, 0xfaa	// Read CSR
	li x12, -1
	csrrw x31, 0xfaa, x12	// Write all 1s to CSR
	csrrw x31, 0xfaa, x0	// Write all 0s to CSR
	csrrw x31, 0xfaa, x29	// Restore CSR

// Testing CSR 0xfab
	csrr x28, 0xfab	// Read CSR
	li x6, -1
	csrrw x20, 0xfab, x6	// Write all 1s to CSR
	csrrw x20, 0xfab, x0	// Write all 0s to CSR
	csrrw x20, 0xfab, x28	// Restore CSR

// Testing CSR 0xfac
	csrr x24, 0xfac	// Read CSR
	li x19, -1
	csrrw x16, 0xfac, x19	// Write all 1s to CSR
	csrrw x16, 0xfac, x0	// Write all 0s to CSR
	csrrw x16, 0xfac, x24	// Restore CSR

// Testing CSR 0xfad
	csrr x29, 0xfad	// Read CSR
	li x31, -1
	csrrw x10, 0xfad, x31	// Write all 1s to CSR
	csrrw x10, 0xfad, x0	// Write all 0s to CSR
	csrrw x10, 0xfad, x29	// Restore CSR

// Testing CSR 0xfae
	csrr x30, 0xfae	// Read CSR
	li x13, -1
	csrrw x8, 0xfae, x13	// Write all 1s to CSR
	csrrw x8, 0xfae, x0	// Write all 0s to CSR
	csrrw x8, 0xfae, x30	// Restore CSR

// Testing CSR 0xfaf
	csrr x28, 0xfaf	// Read CSR
	li x31, -1
	csrrw x30, 0xfaf, x31	// Write all 1s to CSR
	csrrw x30, 0xfaf, x0	// Write all 0s to CSR
	csrrw x30, 0xfaf, x28	// Restore CSR

// Testing CSR 0xfb0
	csrr x1, 0xfb0	// Read CSR
	li x26, -1
	csrrw x5, 0xfb0, x26	// Write all 1s to CSR
	csrrw x5, 0xfb0, x0	// Write all 0s to CSR
	csrrw x5, 0xfb0, x1	// Restore CSR

// Testing CSR 0xfb1
	csrr x30, 0xfb1	// Read CSR
	li x25, -1
	csrrw x18, 0xfb1, x25	// Write all 1s to CSR
	csrrw x18, 0xfb1, x0	// Write all 0s to CSR
	csrrw x18, 0xfb1, x30	// Restore CSR

// Testing CSR 0xfb2
	csrr x9, 0xfb2	// Read CSR
	li x6, -1
	csrrw x30, 0xfb2, x6	// Write all 1s to CSR
	csrrw x30, 0xfb2, x0	// Write all 0s to CSR
	csrrw x30, 0xfb2, x9	// Restore CSR

// Testing CSR 0xfb3
	csrr x28, 0xfb3	// Read CSR
	li x13, -1
	csrrw x29, 0xfb3, x13	// Write all 1s to CSR
	csrrw x29, 0xfb3, x0	// Write all 0s to CSR
	csrrw x29, 0xfb3, x28	// Restore CSR

// Testing CSR 0xfb4
	csrr x10, 0xfb4	// Read CSR
	li x20, -1
	csrrw x22, 0xfb4, x20	// Write all 1s to CSR
	csrrw x22, 0xfb4, x0	// Write all 0s to CSR
	csrrw x22, 0xfb4, x10	// Restore CSR

// Testing CSR 0xfb5
	csrr x9, 0xfb5	// Read CSR
	li x1, -1
	csrrw x24, 0xfb5, x1	// Write all 1s to CSR
	csrrw x24, 0xfb5, x0	// Write all 0s to CSR
	csrrw x24, 0xfb5, x9	// Restore CSR

// Testing CSR 0xfb6
	csrr x30, 0xfb6	// Read CSR
	li x31, -1
	csrrw x12, 0xfb6, x31	// Write all 1s to CSR
	csrrw x12, 0xfb6, x0	// Write all 0s to CSR
	csrrw x12, 0xfb6, x30	// Restore CSR

// Testing CSR 0xfb7
	csrr x4, 0xfb7	// Read CSR
	li x19, -1
	csrrw x12, 0xfb7, x19	// Write all 1s to CSR
	csrrw x12, 0xfb7, x0	// Write all 0s to CSR
	csrrw x12, 0xfb7, x4	// Restore CSR

// Testing CSR 0xfb8
	csrr x22, 0xfb8	// Read CSR
	li x11, -1
	csrrw x27, 0xfb8, x11	// Write all 1s to CSR
	csrrw x27, 0xfb8, x0	// Write all 0s to CSR
	csrrw x27, 0xfb8, x22	// Restore CSR

// Testing CSR 0xfb9
	csrr x17, 0xfb9	// Read CSR
	li x23, -1
	csrrw x28, 0xfb9, x23	// Write all 1s to CSR
	csrrw x28, 0xfb9, x0	// Write all 0s to CSR
	csrrw x28, 0xfb9, x17	// Restore CSR

// Testing CSR 0xfba
	csrr x11, 0xfba	// Read CSR
	li x23, -1
	csrrw x30, 0xfba, x23	// Write all 1s to CSR
	csrrw x30, 0xfba, x0	// Write all 0s to CSR
	csrrw x30, 0xfba, x11	// Restore CSR

// Testing CSR 0xfbb
	csrr x20, 0xfbb	// Read CSR
	li x8, -1
	csrrw x24, 0xfbb, x8	// Write all 1s to CSR
	csrrw x24, 0xfbb, x0	// Write all 0s to CSR
	csrrw x24, 0xfbb, x20	// Restore CSR

// Testing CSR 0xfbc
	csrr x24, 0xfbc	// Read CSR
	li x28, -1
	csrrw x17, 0xfbc, x28	// Write all 1s to CSR
	csrrw x17, 0xfbc, x0	// Write all 0s to CSR
	csrrw x17, 0xfbc, x24	// Restore CSR

// Testing CSR 0xfbd
	csrr x8, 0xfbd	// Read CSR
	li x9, -1
	csrrw x1, 0xfbd, x9	// Write all 1s to CSR
	csrrw x1, 0xfbd, x0	// Write all 0s to CSR
	csrrw x1, 0xfbd, x8	// Restore CSR

// Testing CSR 0xfbe
	csrr x17, 0xfbe	// Read CSR
	li x6, -1
	csrrw x11, 0xfbe, x6	// Write all 1s to CSR
	csrrw x11, 0xfbe, x0	// Write all 0s to CSR
	csrrw x11, 0xfbe, x17	// Restore CSR

// Testing CSR 0xfbf
	csrr x23, 0xfbf	// Read CSR
	li x17, -1
	csrrw x24, 0xfbf, x17	// Write all 1s to CSR
	csrrw x24, 0xfbf, x0	// Write all 0s to CSR
	csrrw x24, 0xfbf, x23	// Restore CSR

// Testing CSR 0xfc0
	csrr x7, 0xfc0	// Read CSR
	li x20, -1
	csrrw x9, 0xfc0, x20	// Write all 1s to CSR
	csrrw x9, 0xfc0, x0	// Write all 0s to CSR
	csrrw x9, 0xfc0, x7	// Restore CSR

// Testing CSR 0xfc1
	csrr x12, 0xfc1	// Read CSR
	li x8, -1
	csrrw x28, 0xfc1, x8	// Write all 1s to CSR
	csrrw x28, 0xfc1, x0	// Write all 0s to CSR
	csrrw x28, 0xfc1, x12	// Restore CSR

// Testing CSR 0xfc2
	csrr x26, 0xfc2	// Read CSR
	li x13, -1
	csrrw x12, 0xfc2, x13	// Write all 1s to CSR
	csrrw x12, 0xfc2, x0	// Write all 0s to CSR
	csrrw x12, 0xfc2, x26	// Restore CSR

// Testing CSR 0xfc3
	csrr x28, 0xfc3	// Read CSR
	li x18, -1
	csrrw x13, 0xfc3, x18	// Write all 1s to CSR
	csrrw x13, 0xfc3, x0	// Write all 0s to CSR
	csrrw x13, 0xfc3, x28	// Restore CSR

// Testing CSR 0xfc4
	csrr x28, 0xfc4	// Read CSR
	li x11, -1
	csrrw x22, 0xfc4, x11	// Write all 1s to CSR
	csrrw x22, 0xfc4, x0	// Write all 0s to CSR
	csrrw x22, 0xfc4, x28	// Restore CSR

// Testing CSR 0xfc5
	csrr x14, 0xfc5	// Read CSR
	li x13, -1
	csrrw x10, 0xfc5, x13	// Write all 1s to CSR
	csrrw x10, 0xfc5, x0	// Write all 0s to CSR
	csrrw x10, 0xfc5, x14	// Restore CSR

// Testing CSR 0xfc6
	csrr x27, 0xfc6	// Read CSR
	li x8, -1
	csrrw x21, 0xfc6, x8	// Write all 1s to CSR
	csrrw x21, 0xfc6, x0	// Write all 0s to CSR
	csrrw x21, 0xfc6, x27	// Restore CSR

// Testing CSR 0xfc7
	csrr x18, 0xfc7	// Read CSR
	li x23, -1
	csrrw x4, 0xfc7, x23	// Write all 1s to CSR
	csrrw x4, 0xfc7, x0	// Write all 0s to CSR
	csrrw x4, 0xfc7, x18	// Restore CSR

// Testing CSR 0xfc8
	csrr x9, 0xfc8	// Read CSR
	li x28, -1
	csrrw x3, 0xfc8, x28	// Write all 1s to CSR
	csrrw x3, 0xfc8, x0	// Write all 0s to CSR
	csrrw x3, 0xfc8, x9	// Restore CSR

// Testing CSR 0xfc9
	csrr x11, 0xfc9	// Read CSR
	li x27, -1
	csrrw x15, 0xfc9, x27	// Write all 1s to CSR
	csrrw x15, 0xfc9, x0	// Write all 0s to CSR
	csrrw x15, 0xfc9, x11	// Restore CSR

// Testing CSR 0xfca
	csrr x30, 0xfca	// Read CSR
	li x28, -1
	csrrw x5, 0xfca, x28	// Write all 1s to CSR
	csrrw x5, 0xfca, x0	// Write all 0s to CSR
	csrrw x5, 0xfca, x30	// Restore CSR

// Testing CSR 0xfcb
	csrr x29, 0xfcb	// Read CSR
	li x31, -1
	csrrw x18, 0xfcb, x31	// Write all 1s to CSR
	csrrw x18, 0xfcb, x0	// Write all 0s to CSR
	csrrw x18, 0xfcb, x29	// Restore CSR

// Testing CSR 0xfcc
	csrr x16, 0xfcc	// Read CSR
	li x18, -1
	csrrw x28, 0xfcc, x18	// Write all 1s to CSR
	csrrw x28, 0xfcc, x0	// Write all 0s to CSR
	csrrw x28, 0xfcc, x16	// Restore CSR

// Testing CSR 0xfcd
	csrr x3, 0xfcd	// Read CSR
	li x9, -1
	csrrw x7, 0xfcd, x9	// Write all 1s to CSR
	csrrw x7, 0xfcd, x0	// Write all 0s to CSR
	csrrw x7, 0xfcd, x3	// Restore CSR

// Testing CSR 0xfce
	csrr x6, 0xfce	// Read CSR
	li x4, -1
	csrrw x9, 0xfce, x4	// Write all 1s to CSR
	csrrw x9, 0xfce, x0	// Write all 0s to CSR
	csrrw x9, 0xfce, x6	// Restore CSR

// Testing CSR 0xfcf
	csrr x11, 0xfcf	// Read CSR
	li x18, -1
	csrrw x1, 0xfcf, x18	// Write all 1s to CSR
	csrrw x1, 0xfcf, x0	// Write all 0s to CSR
	csrrw x1, 0xfcf, x11	// Restore CSR

// Testing CSR 0xfd0
	csrr x11, 0xfd0	// Read CSR
	li x17, -1
	csrrw x31, 0xfd0, x17	// Write all 1s to CSR
	csrrw x31, 0xfd0, x0	// Write all 0s to CSR
	csrrw x31, 0xfd0, x11	// Restore CSR

// Testing CSR 0xfd1
	csrr x1, 0xfd1	// Read CSR
	li x5, -1
	csrrw x12, 0xfd1, x5	// Write all 1s to CSR
	csrrw x12, 0xfd1, x0	// Write all 0s to CSR
	csrrw x12, 0xfd1, x1	// Restore CSR

// Testing CSR 0xfd2
	csrr x16, 0xfd2	// Read CSR
	li x4, -1
	csrrw x20, 0xfd2, x4	// Write all 1s to CSR
	csrrw x20, 0xfd2, x0	// Write all 0s to CSR
	csrrw x20, 0xfd2, x16	// Restore CSR

// Testing CSR 0xfd3
	csrr x8, 0xfd3	// Read CSR
	li x13, -1
	csrrw x22, 0xfd3, x13	// Write all 1s to CSR
	csrrw x22, 0xfd3, x0	// Write all 0s to CSR
	csrrw x22, 0xfd3, x8	// Restore CSR

// Testing CSR 0xfd4
	csrr x8, 0xfd4	// Read CSR
	li x9, -1
	csrrw x2, 0xfd4, x9	// Write all 1s to CSR
	csrrw x2, 0xfd4, x0	// Write all 0s to CSR
	csrrw x2, 0xfd4, x8	// Restore CSR

// Testing CSR 0xfd5
	csrr x1, 0xfd5	// Read CSR
	li x20, -1
	csrrw x27, 0xfd5, x20	// Write all 1s to CSR
	csrrw x27, 0xfd5, x0	// Write all 0s to CSR
	csrrw x27, 0xfd5, x1	// Restore CSR

// Testing CSR 0xfd6
	csrr x12, 0xfd6	// Read CSR
	li x18, -1
	csrrw x19, 0xfd6, x18	// Write all 1s to CSR
	csrrw x19, 0xfd6, x0	// Write all 0s to CSR
	csrrw x19, 0xfd6, x12	// Restore CSR

// Testing CSR 0xfd7
	csrr x29, 0xfd7	// Read CSR
	li x22, -1
	csrrw x9, 0xfd7, x22	// Write all 1s to CSR
	csrrw x9, 0xfd7, x0	// Write all 0s to CSR
	csrrw x9, 0xfd7, x29	// Restore CSR

// Testing CSR 0xfd8
	csrr x28, 0xfd8	// Read CSR
	li x11, -1
	csrrw x30, 0xfd8, x11	// Write all 1s to CSR
	csrrw x30, 0xfd8, x0	// Write all 0s to CSR
	csrrw x30, 0xfd8, x28	// Restore CSR

// Testing CSR 0xfd9
	csrr x1, 0xfd9	// Read CSR
	li x31, -1
	csrrw x17, 0xfd9, x31	// Write all 1s to CSR
	csrrw x17, 0xfd9, x0	// Write all 0s to CSR
	csrrw x17, 0xfd9, x1	// Restore CSR

// Testing CSR 0xfda
	csrr x25, 0xfda	// Read CSR
	li x29, -1
	csrrw x20, 0xfda, x29	// Write all 1s to CSR
	csrrw x20, 0xfda, x0	// Write all 0s to CSR
	csrrw x20, 0xfda, x25	// Restore CSR

// Testing CSR 0xfdb
	csrr x1, 0xfdb	// Read CSR
	li x31, -1
	csrrw x19, 0xfdb, x31	// Write all 1s to CSR
	csrrw x19, 0xfdb, x0	// Write all 0s to CSR
	csrrw x19, 0xfdb, x1	// Restore CSR

// Testing CSR 0xfdc
	csrr x13, 0xfdc	// Read CSR
	li x8, -1
	csrrw x15, 0xfdc, x8	// Write all 1s to CSR
	csrrw x15, 0xfdc, x0	// Write all 0s to CSR
	csrrw x15, 0xfdc, x13	// Restore CSR

// Testing CSR 0xfdd
	csrr x22, 0xfdd	// Read CSR
	li x27, -1
	csrrw x30, 0xfdd, x27	// Write all 1s to CSR
	csrrw x30, 0xfdd, x0	// Write all 0s to CSR
	csrrw x30, 0xfdd, x22	// Restore CSR

// Testing CSR 0xfde
	csrr x16, 0xfde	// Read CSR
	li x10, -1
	csrrw x29, 0xfde, x10	// Write all 1s to CSR
	csrrw x29, 0xfde, x0	// Write all 0s to CSR
	csrrw x29, 0xfde, x16	// Restore CSR

// Testing CSR 0xfdf
	csrr x5, 0xfdf	// Read CSR
	li x13, -1
	csrrw x1, 0xfdf, x13	// Write all 1s to CSR
	csrrw x1, 0xfdf, x0	// Write all 0s to CSR
	csrrw x1, 0xfdf, x5	// Restore CSR

// Testing CSR 0xfe0
	csrr x7, 0xfe0	// Read CSR
	li x8, -1
	csrrw x14, 0xfe0, x8	// Write all 1s to CSR
	csrrw x14, 0xfe0, x0	// Write all 0s to CSR
	csrrw x14, 0xfe0, x7	// Restore CSR

// Testing CSR 0xfe1
	csrr x25, 0xfe1	// Read CSR
	li x22, -1
	csrrw x3, 0xfe1, x22	// Write all 1s to CSR
	csrrw x3, 0xfe1, x0	// Write all 0s to CSR
	csrrw x3, 0xfe1, x25	// Restore CSR

// Testing CSR 0xfe2
	csrr x26, 0xfe2	// Read CSR
	li x3, -1
	csrrw x22, 0xfe2, x3	// Write all 1s to CSR
	csrrw x22, 0xfe2, x0	// Write all 0s to CSR
	csrrw x22, 0xfe2, x26	// Restore CSR

// Testing CSR 0xfe3
	csrr x10, 0xfe3	// Read CSR
	li x3, -1
	csrrw x11, 0xfe3, x3	// Write all 1s to CSR
	csrrw x11, 0xfe3, x0	// Write all 0s to CSR
	csrrw x11, 0xfe3, x10	// Restore CSR

// Testing CSR 0xfe4
	csrr x26, 0xfe4	// Read CSR
	li x23, -1
	csrrw x5, 0xfe4, x23	// Write all 1s to CSR
	csrrw x5, 0xfe4, x0	// Write all 0s to CSR
	csrrw x5, 0xfe4, x26	// Restore CSR

// Testing CSR 0xfe5
	csrr x14, 0xfe5	// Read CSR
	li x4, -1
	csrrw x7, 0xfe5, x4	// Write all 1s to CSR
	csrrw x7, 0xfe5, x0	// Write all 0s to CSR
	csrrw x7, 0xfe5, x14	// Restore CSR

// Testing CSR 0xfe6
	csrr x4, 0xfe6	// Read CSR
	li x6, -1
	csrrw x26, 0xfe6, x6	// Write all 1s to CSR
	csrrw x26, 0xfe6, x0	// Write all 0s to CSR
	csrrw x26, 0xfe6, x4	// Restore CSR

// Testing CSR 0xfe7
	csrr x7, 0xfe7	// Read CSR
	li x31, -1
	csrrw x18, 0xfe7, x31	// Write all 1s to CSR
	csrrw x18, 0xfe7, x0	// Write all 0s to CSR
	csrrw x18, 0xfe7, x7	// Restore CSR

// Testing CSR 0xfe8
	csrr x12, 0xfe8	// Read CSR
	li x28, -1
	csrrw x3, 0xfe8, x28	// Write all 1s to CSR
	csrrw x3, 0xfe8, x0	// Write all 0s to CSR
	csrrw x3, 0xfe8, x12	// Restore CSR

// Testing CSR 0xfe9
	csrr x17, 0xfe9	// Read CSR
	li x8, -1
	csrrw x22, 0xfe9, x8	// Write all 1s to CSR
	csrrw x22, 0xfe9, x0	// Write all 0s to CSR
	csrrw x22, 0xfe9, x17	// Restore CSR

// Testing CSR 0xfea
	csrr x31, 0xfea	// Read CSR
	li x26, -1
	csrrw x30, 0xfea, x26	// Write all 1s to CSR
	csrrw x30, 0xfea, x0	// Write all 0s to CSR
	csrrw x30, 0xfea, x31	// Restore CSR

// Testing CSR 0xfeb
	csrr x22, 0xfeb	// Read CSR
	li x9, -1
	csrrw x25, 0xfeb, x9	// Write all 1s to CSR
	csrrw x25, 0xfeb, x0	// Write all 0s to CSR
	csrrw x25, 0xfeb, x22	// Restore CSR

// Testing CSR 0xfec
	csrr x31, 0xfec	// Read CSR
	li x23, -1
	csrrw x7, 0xfec, x23	// Write all 1s to CSR
	csrrw x7, 0xfec, x0	// Write all 0s to CSR
	csrrw x7, 0xfec, x31	// Restore CSR

// Testing CSR 0xfed
	csrr x17, 0xfed	// Read CSR
	li x7, -1
	csrrw x9, 0xfed, x7	// Write all 1s to CSR
	csrrw x9, 0xfed, x0	// Write all 0s to CSR
	csrrw x9, 0xfed, x17	// Restore CSR

// Testing CSR 0xfee
	csrr x26, 0xfee	// Read CSR
	li x27, -1
	csrrw x3, 0xfee, x27	// Write all 1s to CSR
	csrrw x3, 0xfee, x0	// Write all 0s to CSR
	csrrw x3, 0xfee, x26	// Restore CSR

// Testing CSR 0xfef
	csrr x7, 0xfef	// Read CSR
	li x29, -1
	csrrw x27, 0xfef, x29	// Write all 1s to CSR
	csrrw x27, 0xfef, x0	// Write all 0s to CSR
	csrrw x27, 0xfef, x7	// Restore CSR

// Testing CSR 0xff0
	csrr x29, 0xff0	// Read CSR
	li x20, -1
	csrrw x23, 0xff0, x20	// Write all 1s to CSR
	csrrw x23, 0xff0, x0	// Write all 0s to CSR
	csrrw x23, 0xff0, x29	// Restore CSR

// Testing CSR 0xff1
	csrr x26, 0xff1	// Read CSR
	li x23, -1
	csrrw x28, 0xff1, x23	// Write all 1s to CSR
	csrrw x28, 0xff1, x0	// Write all 0s to CSR
	csrrw x28, 0xff1, x26	// Restore CSR

// Testing CSR 0xff2
	csrr x16, 0xff2	// Read CSR
	li x8, -1
	csrrw x3, 0xff2, x8	// Write all 1s to CSR
	csrrw x3, 0xff2, x0	// Write all 0s to CSR
	csrrw x3, 0xff2, x16	// Restore CSR

// Testing CSR 0xff3
	csrr x19, 0xff3	// Read CSR
	li x12, -1
	csrrw x27, 0xff3, x12	// Write all 1s to CSR
	csrrw x27, 0xff3, x0	// Write all 0s to CSR
	csrrw x27, 0xff3, x19	// Restore CSR

// Testing CSR 0xff4
	csrr x25, 0xff4	// Read CSR
	li x1, -1
	csrrw x19, 0xff4, x1	// Write all 1s to CSR
	csrrw x19, 0xff4, x0	// Write all 0s to CSR
	csrrw x19, 0xff4, x25	// Restore CSR

// Testing CSR 0xff5
	csrr x28, 0xff5	// Read CSR
	li x10, -1
	csrrw x22, 0xff5, x10	// Write all 1s to CSR
	csrrw x22, 0xff5, x0	// Write all 0s to CSR
	csrrw x22, 0xff5, x28	// Restore CSR

// Testing CSR 0xff6
	csrr x6, 0xff6	// Read CSR
	li x29, -1
	csrrw x7, 0xff6, x29	// Write all 1s to CSR
	csrrw x7, 0xff6, x0	// Write all 0s to CSR
	csrrw x7, 0xff6, x6	// Restore CSR

// Testing CSR 0xff7
	csrr x1, 0xff7	// Read CSR
	li x18, -1
	csrrw x21, 0xff7, x18	// Write all 1s to CSR
	csrrw x21, 0xff7, x0	// Write all 0s to CSR
	csrrw x21, 0xff7, x1	// Restore CSR

// Testing CSR 0xff8
	csrr x23, 0xff8	// Read CSR
	li x26, -1
	csrrw x31, 0xff8, x26	// Write all 1s to CSR
	csrrw x31, 0xff8, x0	// Write all 0s to CSR
	csrrw x31, 0xff8, x23	// Restore CSR

// Testing CSR 0xff9
	csrr x15, 0xff9	// Read CSR
	li x25, -1
	csrrw x24, 0xff9, x25	// Write all 1s to CSR
	csrrw x24, 0xff9, x0	// Write all 0s to CSR
	csrrw x24, 0xff9, x15	// Restore CSR

// Testing CSR 0xffa
	csrr x23, 0xffa	// Read CSR
	li x20, -1
	csrrw x21, 0xffa, x20	// Write all 1s to CSR
	csrrw x21, 0xffa, x0	// Write all 0s to CSR
	csrrw x21, 0xffa, x23	// Restore CSR

// Testing CSR 0xffb
	csrr x17, 0xffb	// Read CSR
	li x12, -1
	csrrw x20, 0xffb, x12	// Write all 1s to CSR
	csrrw x20, 0xffb, x0	// Write all 0s to CSR
	csrrw x20, 0xffb, x17	// Restore CSR

// Testing CSR 0xffc
	csrr x27, 0xffc	// Read CSR
	li x26, -1
	csrrw x8, 0xffc, x26	// Write all 1s to CSR
	csrrw x8, 0xffc, x0	// Write all 0s to CSR
	csrrw x8, 0xffc, x27	// Restore CSR

// Testing CSR 0xffd
	csrr x13, 0xffd	// Read CSR
	li x24, -1
	csrrw x5, 0xffd, x24	// Write all 1s to CSR
	csrrw x5, 0xffd, x0	// Write all 0s to CSR
	csrrw x5, 0xffd, x13	// Restore CSR

// Testing CSR 0xffe
	csrr x20, 0xffe	// Read CSR
	li x12, -1
	csrrw x25, 0xffe, x12	// Write all 1s to CSR
	csrrw x25, 0xffe, x0	// Write all 0s to CSR
	csrrw x25, 0xffe, x20	// Restore CSR

// Testing CSR 0xfff
	csrr x26, 0xfff	// Read CSR
	li x17, -1
	csrrw x6, 0xfff, x17	// Write all 1s to CSR
	csrrw x6, 0xfff, x0	// Write all 0s to CSR
	csrrw x6, 0xfff, x26	// Restore CSR
