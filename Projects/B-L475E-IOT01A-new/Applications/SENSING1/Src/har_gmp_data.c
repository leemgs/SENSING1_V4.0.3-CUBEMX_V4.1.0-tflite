#include "har_gmp_data.h"

ai_handle ai_har_gmp_data_weights_get(void)
{

  AI_ALIGNED(4)
  static const ai_u8 s_har_gmp_weights[ 5908 ] = {
    0x65, 0xeb, 0xa0, 0x40, 0xf0, 0x8b, 0x94, 0xbf, 0x74, 0xb5,
    0x71, 0xbf, 0xf9, 0xa2, 0xd5, 0x3e, 0xda, 0x2a, 0x4f, 0x3f,
    0x34, 0x5b, 0x9d, 0xbf, 0x45, 0x6f, 0x37, 0xbf, 0x61, 0x3a,
    0x90, 0x3f, 0x9f, 0x2f, 0xb5, 0xbf, 0xae, 0xd3, 0x48, 0xc0,
    0xb3, 0x84, 0x24, 0xc0, 0x47, 0xf1, 0x3a, 0x40, 0x16, 0x7b,
    0x7e, 0xc0, 0x4e, 0xb1, 0x7f, 0x40, 0x75, 0x2c, 0x21, 0xc0,
    0x36, 0xce, 0xe8, 0x3e, 0xa4, 0x16, 0x22, 0x3e, 0x22, 0x53,
    0xff, 0xbe, 0x8d, 0x28, 0x06, 0x40, 0xa8, 0x25, 0x01, 0xbf,
    0xa0, 0x52, 0x1d, 0x40, 0xa7, 0x51, 0x6a, 0xbf, 0x3b, 0x0f,
    0xcf, 0x3d, 0x0b, 0xb1, 0x0f, 0xc0, 0xc5, 0x75, 0x14, 0x40,
    0xb0, 0x02, 0x21, 0x40, 0x8f, 0xb2, 0x62, 0xc0, 0xdc, 0x15,
    0x3d, 0xbe, 0x32, 0x91, 0xb4, 0x3f, 0xff, 0xcf, 0x13, 0xbf,
    0xb9, 0x98, 0x32, 0xc0, 0x36, 0xbd, 0x2e, 0xbf, 0xef, 0x53,
    0x8e, 0x3f, 0x9c, 0x2c, 0xa9, 0xbf, 0xdb, 0xcb, 0xc0, 0xbf,
    0xcc, 0x5d, 0x8f, 0x40, 0x67, 0xf5, 0x01, 0xbc, 0xf9, 0x9d,
    0x2d, 0x3f, 0x43, 0x3c, 0xcc, 0x3f, 0x2a, 0x9c, 0xbe, 0x3f,
    0x90, 0x6d, 0xb3, 0xbd, 0x84, 0x72, 0xb2, 0xbf, 0x12, 0x4d,
    0xbc, 0x3e, 0xb5, 0xa2, 0xf8, 0xbf, 0x3b, 0x7a, 0xf1, 0x3e,
    0x82, 0xe8, 0x8e, 0xc0, 0x53, 0x97, 0xfa, 0xbe, 0x92, 0xa4,
    0x07, 0x3f, 0xd0, 0x0c, 0xb6, 0xbf, 0x49, 0x38, 0x1d, 0x3f,
    0x84, 0x86, 0x27, 0xc0, 0x4a, 0x65, 0xc5, 0xbf, 0x39, 0x01,
    0xee, 0x3f, 0xbd, 0xfc, 0x96, 0x3f, 0x0d, 0xd8, 0x30, 0xc0,
    0xdc, 0xcd, 0xfc, 0xbf, 0x3c, 0xf4, 0x28, 0xbf, 0xd4, 0x8d,
    0x86, 0xbf, 0xc9, 0xf2, 0xad, 0x3f, 0x2d, 0x49, 0x19, 0x40,
    0x51, 0x70, 0x4b, 0x40, 0x39, 0x7e, 0xfb, 0x3e, 0x88, 0xed,
    0xec, 0xbf, 0x0a, 0x56, 0xf3, 0x3c, 0x42, 0x1e, 0x00, 0x40,
    0x6a, 0x48, 0x89, 0xbf, 0xd5, 0xbe, 0xd3, 0xbf, 0x2f, 0x7d,
    0xfa, 0xbf, 0x9a, 0xee, 0xe6, 0xbf, 0x24, 0xf1, 0xcf, 0xbf,
    0xaa, 0xfa, 0x20, 0x3f, 0xca, 0x85, 0xed, 0xbe, 0x36, 0x0c,
    0x09, 0x40, 0x71, 0xa1, 0x99, 0x3f, 0xf8, 0x65, 0x49, 0x40,
    0x13, 0x4e, 0xd5, 0x3f, 0x29, 0x42, 0x03, 0x3f, 0x65, 0xd4,
    0x06, 0xbe, 0x43, 0xc6, 0xe4, 0x3f, 0xa0, 0x15, 0xba, 0x3f,
    0xd8, 0xcb, 0x87, 0xbf, 0x28, 0xfb, 0xfc, 0xbe, 0xac, 0x20,
    0x6f, 0x3e, 0x80, 0xa9, 0xd1, 0xbd, 0x54, 0xda, 0x32, 0xbf,
    0x33, 0xff, 0x92, 0xbe, 0xd0, 0x50, 0x92, 0x3d, 0x30, 0xad,
    0x0e, 0xbf, 0x80, 0x0f, 0xc7, 0xbc, 0x38, 0xfd, 0xc4, 0xbf,
    0x98, 0xac, 0xb6, 0xbe, 0x73, 0x2d, 0x8a, 0xc0, 0xa0, 0x3f,
    0x5e, 0xbd, 0x38, 0x18, 0xa1, 0xbe, 0xe1, 0xb4, 0xb5, 0xbf,
    0x60, 0x84, 0x71, 0xbe, 0xd9, 0xe8, 0x59, 0x3f, 0x32, 0x7d,
    0xea, 0xbe, 0x57, 0x0b, 0x0b, 0x3e, 0x7c, 0xf3, 0x92, 0xbf,
    0x7c, 0xc4, 0x38, 0xbf, 0x46, 0x7c, 0x68, 0x3c, 0x61, 0x42,
    0x27, 0xbf, 0x75, 0xa9, 0x7b, 0xbf, 0xe6, 0x4f, 0x1d, 0xbe,
    0x28, 0x89, 0x94, 0x3f, 0xdf, 0xbc, 0xa4, 0xbe, 0x4c, 0x39,
    0x1c, 0x40, 0xa2, 0xef, 0xe3, 0xbf, 0x4b, 0x15, 0x79, 0xbe,
    0x80, 0xa2, 0x01, 0xbe, 0xab, 0x14, 0x5f, 0xbf, 0x9d, 0x17,
    0x10, 0x3f, 0x34, 0xc4, 0x20, 0xbf, 0xff, 0x14, 0x37, 0xbe,
    0x4f, 0x03, 0x8c, 0xbe, 0x4f, 0xb9, 0xd4, 0xbe, 0xe8, 0x71,
    0x39, 0xbe, 0x76, 0xab, 0xa7, 0xbe, 0x71, 0xb4, 0x74, 0xbe,
    0xb0, 0xec, 0x49, 0xbf, 0x50, 0xab, 0xbc, 0x3e, 0xa0, 0x31,
    0x25, 0x3e, 0x94, 0xe9, 0xc0, 0x3f, 0xf4, 0xc5, 0xa8, 0xbf,
    0xfd, 0xf3, 0xe6, 0xbf, 0x5c, 0x5d, 0x40, 0x3f, 0xbf, 0x03,
    0xac, 0xbe, 0x37, 0x7e, 0x91, 0xbd, 0x40, 0x9f, 0x49, 0xbe,
    0xb4, 0xd7, 0xdf, 0x3e, 0x06, 0xe4, 0x83, 0x3e, 0x6c, 0xbc,
    0xcf, 0x3e, 0x58, 0x82, 0x09, 0xc0, 0x2a, 0x41, 0xa1, 0xbe,
    0xf4, 0xde, 0xc7, 0xbc, 0x06, 0x0f, 0x28, 0xc0, 0xbd, 0xaf,
    0x3b, 0xbf, 0x96, 0x40, 0x86, 0x3e, 0xe7, 0x16, 0x09, 0x3f,
    0x75, 0x8e, 0xdb, 0xbe, 0xaf, 0x3c, 0x29, 0xbe, 0x67, 0x56,
    0x81, 0x3f, 0xc7, 0x5b, 0x18, 0xbf, 0x58, 0x1a, 0x29, 0x3e,
    0x7a, 0x4c, 0x61, 0x3e, 0xc0, 0x56, 0xf3, 0xbd, 0x20, 0x35,
    0x06, 0x3e, 0x81, 0x2a, 0xb3, 0xbe, 0x17, 0x62, 0x1c, 0xbf,
    0xe5, 0x76, 0x37, 0xbf, 0xe6, 0x34, 0xf3, 0xbe, 0xe6, 0xc6,
    0x79, 0xbe, 0x54, 0xd4, 0x67, 0xbf, 0xc7, 0x99, 0x2b, 0xbe,
    0x26, 0x35, 0x47, 0xbd, 0x60, 0xcd, 0x5f, 0xbf, 0xd7, 0xed,
    0xad, 0xbe, 0x6b, 0x54, 0xf5, 0x3f, 0x4a, 0x7d, 0x51, 0x3e,
    0xc1, 0x11, 0x25, 0x3f, 0x41, 0xdb, 0x1b, 0x3f, 0x83, 0x08,
    0x2c, 0x3c, 0x10, 0x99, 0x9b, 0xbf, 0x6c, 0xe3, 0x93, 0xbf,
    0x6c, 0x49, 0x19, 0xbe, 0x2f, 0xfa, 0x93, 0xbf, 0x34, 0x51,
    0x04, 0xbf, 0x58, 0x9a, 0x67, 0xbf, 0x91, 0xe3, 0xaa, 0xbe,
    0x33, 0x69, 0x0d, 0x3f, 0x8b, 0xd8, 0xd2, 0x3e, 0x31, 0x53,
    0xf4, 0xbe, 0xf0, 0x0a, 0xf1, 0x3e, 0xea, 0x1d, 0xee, 0xbe,
    0x12, 0x19, 0x98, 0xbf, 0x6e, 0x63, 0x22, 0x3f, 0x92, 0xe2,
    0x79, 0xbf, 0x11, 0x4a, 0xb5, 0xbe, 0x19, 0x69, 0x17, 0x3e,
    0x28, 0x32, 0x78, 0x3f, 0x7d, 0xbf, 0x86, 0x3f, 0x45, 0x9a,
    0x01, 0x3e, 0x1b, 0x2e, 0x96, 0xbf, 0xda, 0xb6, 0x38, 0x3e,
    0x00, 0x8a, 0x19, 0xc0, 0xc3, 0x27, 0xa5, 0x3f, 0xa5, 0xe5,
    0x46, 0x3e, 0x77, 0x44, 0xb6, 0x3e, 0xf9, 0x9c, 0x5e, 0xbe,
    0xa8, 0x04, 0x23, 0xc0, 0x6a, 0xd1, 0xb0, 0xbf, 0x8b, 0x2d,
    0x2c, 0x40, 0x11, 0xc3, 0x67, 0xbf, 0x7b, 0xbb, 0xdf, 0xbd,
    0x40, 0x36, 0xe6, 0xbe, 0x0b, 0xda, 0x2b, 0xbf, 0xa3, 0x6e,
    0xd0, 0xbc, 0xc7, 0xb2, 0x31, 0x3f, 0x5f, 0xfe, 0x7b, 0xc0,
    0x3b, 0xff, 0x3b, 0x3e, 0xea, 0xb8, 0xac, 0xbf, 0x35, 0x03,
    0x1b, 0x3d, 0x4e, 0xf9, 0x1d, 0x40, 0xcf, 0xb9, 0x2b, 0xc0,
    0x3c, 0xee, 0xdf, 0xbe, 0xdf, 0x6e, 0xa3, 0xbf, 0x6b, 0x91,
    0x51, 0xc0, 0x93, 0xc4, 0x87, 0x3e, 0x5b, 0x98, 0x39, 0xc0,
    0x7c, 0xff, 0x07, 0xbe, 0x57, 0xcb, 0x15, 0xbe, 0xec, 0xc0,
    0x57, 0xc0, 0xfc, 0xfc, 0x7d, 0xbf, 0xbf, 0x99, 0x31, 0x3d,
    0x40, 0x9a, 0x05, 0xc0, 0xec, 0x2d, 0x80, 0xbb, 0x67, 0x23,
    0x20, 0xbf, 0x98, 0x32, 0xbd, 0xbe, 0x83, 0xcf, 0x81, 0x40,
    0x0d, 0xb8, 0xd3, 0xbe, 0x3b, 0x36, 0x86, 0xbf, 0xbe, 0xae,
    0xb5, 0xbf, 0xd8, 0x7e, 0xe7, 0x3e, 0x2a, 0x1a, 0xba, 0xbf,
    0xde, 0x6e, 0x93, 0xbf, 0xc3, 0x77, 0xb6, 0xbf, 0x1e, 0x52,
    0x31, 0x3c, 0xaa, 0x12, 0xd0, 0xbe, 0xb3, 0x7b, 0xda, 0xbd,
    0x7c, 0x8d, 0x89, 0x3e, 0x7c, 0x8e, 0x09, 0xc0, 0x31, 0x0c,
    0x6b, 0xbf, 0x3b, 0xe2, 0xb4, 0x3f, 0xdb, 0x03, 0xc3, 0xbe,
    0x64, 0x16, 0x4d, 0x40, 0xa8, 0x5d, 0x64, 0x3d, 0xa6, 0xf6,
    0x65, 0xbf, 0x43, 0x83, 0xe7, 0x3e, 0x38, 0x0e, 0x4c, 0x3e,
    0x74, 0xb4, 0x6a, 0xbc, 0xa6, 0x54, 0x5a, 0x3f, 0x90, 0x35,
    0xc2, 0x3e, 0x77, 0x7c, 0xa7, 0xbe, 0x64, 0xc0, 0x8f, 0xbf,
    0x6d, 0xac, 0x25, 0xc0, 0xea, 0x10, 0xca, 0x3d, 0x3c, 0xde,
    0x28, 0x3e, 0xc3, 0x0f, 0x3f, 0x3f, 0x34, 0x67, 0x71, 0xbf,
    0xcf, 0x44, 0x00, 0x3f, 0x68, 0x6f, 0x05, 0x3f, 0x7e, 0x30,
    0xe8, 0x3e, 0xb2, 0xd6, 0x00, 0xbd, 0x11, 0x55, 0x2c, 0x3f,
    0x74, 0xe2, 0x2b, 0x3f, 0x82, 0xd0, 0x82, 0x3e, 0xcc, 0x89,
    0x50, 0xbf, 0xa0, 0x63, 0xea, 0x3d, 0xe2, 0x96, 0x6d, 0xbe,
    0x70, 0x95, 0x5f, 0x3f, 0xfd, 0xe2, 0x95, 0xbd, 0xc9, 0xb2,
    0xce, 0xbe, 0x49, 0x6c, 0x93, 0xbe, 0x26, 0x15, 0xeb, 0xbe,
    0x4a, 0x2d, 0xba, 0xbf, 0xdc, 0xcd, 0x14, 0x3d, 0x6b, 0x30,
    0x26, 0x40, 0x96, 0xba, 0x55, 0x3f, 0x4e, 0x45, 0xbf, 0x3e,
    0xfa, 0x22, 0x05, 0xc0, 0x6e, 0x80, 0x7c, 0xbf, 0xb3, 0xea,
    0x03, 0xbe, 0x95, 0x85, 0x4d, 0xbf, 0xac, 0x0c, 0x3f, 0xbe,
    0x2a, 0xa7, 0xdf, 0xbe, 0x6d, 0x8a, 0x77, 0xbf, 0x47, 0x74,
    0x50, 0xbf, 0xd0, 0xdd, 0x1f, 0x3f, 0xef, 0xe6, 0x06, 0x3f,
    0xcc, 0x95, 0xa5, 0x3c, 0xf7, 0x92, 0xc7, 0x3e, 0x87, 0x89,
    0x9b, 0xbe, 0xe1, 0x0d, 0x56, 0x40, 0x0a, 0x1e, 0x60, 0x3f,
    0xf7, 0x15, 0x15, 0xbf, 0x49, 0xaa, 0x5c, 0xbf, 0x15, 0xaa,
    0x36, 0xbe, 0xa7, 0x84, 0x84, 0xbe, 0x5f, 0x6b, 0x62, 0xbf,
    0x59, 0x3f, 0x8d, 0xbf, 0x3a, 0x18, 0xcc, 0xbf, 0x11, 0x75,
    0xb0, 0xbf, 0x1d, 0xef, 0x12, 0x3f, 0x94, 0xe9, 0xeb, 0xbf,
    0x54, 0xd5, 0x3d, 0xbf, 0x21, 0xdf, 0x16, 0x3f, 0x25, 0x53,
    0x63, 0x3f, 0x7f, 0xa7, 0x88, 0xbf, 0x40, 0xf4, 0x39, 0x40,
    0x2e, 0xeb, 0x1d, 0x3f, 0xfc, 0xff, 0xac, 0xbe, 0x3a, 0xb6,
    0x35, 0x3f, 0xf5, 0x99, 0x0c, 0xbf, 0xeb, 0x04, 0xda, 0xbf,
    0x5c, 0x69, 0x7b, 0xbf, 0x49, 0xa4, 0xb4, 0xbe, 0xfe, 0x8a,
    0x1e, 0x3e, 0x66, 0x81, 0xe7, 0xbf, 0xb5, 0x5a, 0x98, 0x3e,
    0xdd, 0x23, 0x8a, 0xbf, 0x9d, 0xe4, 0x94, 0xbf, 0xf1, 0xc7,
    0x6b, 0x3f, 0xc2, 0x0b, 0x03, 0xbe, 0x0a, 0x2b, 0x34, 0xbf,
    0xd8, 0x96, 0x5d, 0xbe, 0xde, 0x98, 0x62, 0x3e, 0x5b, 0x2c,
    0xf8, 0xbd, 0xf5, 0x4b, 0x05, 0xbf, 0xe0, 0xcf, 0x93, 0x3e,
    0x58, 0x6d, 0xcc, 0xbe, 0x43, 0xc2, 0xa8, 0xbf, 0xae, 0xdf,
    0x0d, 0xbf, 0xd5, 0x51, 0xa4, 0x3f, 0x25, 0xf7, 0x50, 0x3f,
    0xcc, 0xd8, 0xf6, 0x3e, 0x16, 0x22, 0x26, 0x3f, 0xf4, 0x76,
    0xaa, 0x3d, 0x5e, 0x27, 0xd9, 0x3e, 0x28, 0x9d, 0xa1, 0xbf,
    0xd2, 0x1e, 0x85, 0x3d, 0xab, 0x4c, 0x07, 0x3f, 0x36, 0x35,
    0xd0, 0xbf, 0x20, 0x57, 0x8e, 0xbf, 0xd6, 0x56, 0xcd, 0xbd,
    0x0a, 0x2b, 0x48, 0x3f, 0x2f, 0x0d, 0x07, 0xbf, 0x94, 0x01,
    0xbb, 0xbe, 0x95, 0x07, 0xe7, 0xbe, 0xc7, 0xa8, 0x51, 0xbd,
    0x12, 0xd6, 0xa3, 0xbe, 0x4b, 0xff, 0x8c, 0xbe, 0x8d, 0xf7,
    0x30, 0xbf, 0xf9, 0x68, 0x96, 0x3d, 0x0e, 0x29, 0x22, 0xbf,
    0x14, 0xdc, 0x65, 0xbd, 0xfe, 0x15, 0x9e, 0xbe, 0x5b, 0x30,
    0x89, 0xbe, 0x18, 0xd2, 0x90, 0xbe, 0x4a, 0x1f, 0xee, 0xbe,
    0x76, 0x21, 0x0d, 0xbf, 0xbc, 0x45, 0xa0, 0xbe, 0x96, 0x3f,
    0x85, 0xbe, 0xea, 0xec, 0xe4, 0xbe, 0x74, 0x1b, 0xb8, 0xbe,
    0x26, 0x1b, 0xe4, 0xbd, 0xd5, 0x84, 0x56, 0xbe, 0x8f, 0xa7,
    0xe5, 0xbe, 0x9a, 0xbe, 0xa7, 0xbe, 0x08, 0xfb, 0x1f, 0xbf,
    0xc6, 0x08, 0x28, 0xbf, 0x35, 0x84, 0x6d, 0xbe, 0x64, 0x2f,
    0x1a, 0xbe, 0xe9, 0xc3, 0x88, 0xbe, 0x58, 0x24, 0x92, 0xbe,
    0x63, 0xee, 0xaa, 0xbe, 0x95, 0x2e, 0x39, 0xbe, 0xa7, 0x25,
    0xb7, 0xbe, 0xf8, 0x00, 0x1b, 0xbf, 0xb3, 0xe6, 0x11, 0xbe,
    0x1d, 0x10, 0xfe, 0xbe, 0x05, 0x82, 0x18, 0xbe, 0xa3, 0xc1,
    0x9b, 0xbe, 0x59, 0xf3, 0x16, 0xbf, 0x2c, 0x97, 0xc2, 0xbe,
    0x39, 0x26, 0x8d, 0xbe, 0x55, 0xfc, 0xf5, 0xbe, 0xf3, 0x05,
    0x90, 0xbe, 0x76, 0xee, 0x08, 0xbf, 0xe5, 0xca, 0x80, 0xbe,
    0x90, 0x20, 0x32, 0xbe, 0xb0, 0x8d, 0x8a, 0xbe, 0xd7, 0x39,
    0xf1, 0x3d, 0x0f, 0xa7, 0x98, 0xbe, 0xf8, 0xdd, 0x12, 0xbf,
    0x08, 0x4c, 0x44, 0xbe, 0xa2, 0x30, 0x80, 0xbe, 0x0c, 0x8e,
    0x8f, 0xbd, 0x79, 0x72, 0xcc, 0xbe, 0x0f, 0x8c, 0x8c, 0xbe,
    0xc9, 0x39, 0xbf, 0xbd, 0x4d, 0xea, 0x71, 0xbe, 0xe9, 0x71,
    0xe9, 0xbe, 0x03, 0x29, 0xaa, 0xbe, 0xb5, 0xce, 0xb3, 0xbe,
    0xce, 0x56, 0x33, 0xbe, 0x79, 0x94, 0x0f, 0xbd, 0x47, 0x1e,
    0x8e, 0xbe, 0xe3, 0xea, 0x0f, 0xbe, 0xd6, 0xe3, 0x62, 0xbe,
    0x0a, 0x6c, 0xc9, 0xbe, 0x77, 0xd3, 0x5e, 0x3b, 0xb3, 0x1d,
    0xdf, 0xbe, 0xca, 0x1a, 0x70, 0xbe, 0x4d, 0xb8, 0xfe, 0xbe,
    0xfb, 0x3f, 0x76, 0xbe, 0x40, 0x71, 0x68, 0xbe, 0xd7, 0x34,
    0xe2, 0x3d, 0x20, 0x44, 0xd7, 0xbd, 0xa4, 0xd8, 0xcb, 0xbe,
    0x1a, 0x9f, 0x89, 0xbe, 0xa6, 0x0b, 0x65, 0xbe, 0x2c, 0xde,
    0xfa, 0xbe, 0xb5, 0x1c, 0xc8, 0xbd, 0xf0, 0x76, 0x57, 0xbe,
    0xc9, 0x29, 0x2c, 0xbe, 0x37, 0x55, 0x64, 0x3f, 0x5c, 0x0d,
    0x26, 0xbf, 0xd7, 0x9b, 0xb5, 0xbf, 0xbd, 0xee, 0xc2, 0x3e,
    0xd4, 0x05, 0x9c, 0xbe, 0x5f, 0xaf, 0x1e, 0x3f, 0x9d, 0x42,
    0x96, 0x3d, 0xc0, 0x29, 0xae, 0xbe, 0xb4, 0xfd, 0x3d, 0x3e,
    0xec, 0x2d, 0xad, 0xbf, 0xac, 0xaa, 0xe5, 0xbf, 0x2f, 0xb3,
    0x08, 0xbf, 0x97, 0xed, 0xdd, 0xbf, 0x7b, 0x86, 0x86, 0xc0,
    0x05, 0xa5, 0x76, 0x3f, 0xcd, 0x0f, 0x98, 0xbf, 0x76, 0x78,
    0xaa, 0xbf, 0x5c, 0xfb, 0x60, 0x3f, 0xd2, 0x01, 0x6f, 0x3f,
    0xcf, 0xac, 0x4a, 0x3e, 0x23, 0x30, 0x91, 0xbf, 0x75, 0xd6,
    0x4d, 0x3e, 0xc6, 0xe7, 0x52, 0x3f, 0xca, 0x46, 0xad, 0xbe,
    0x68, 0x49, 0xcc, 0x3d, 0x39, 0xe6, 0xbd, 0xbf, 0x2a, 0x02,
    0x16, 0xbf, 0x2d, 0xdb, 0x3b, 0xbd, 0x7f, 0xf9, 0x5f, 0xc0,
    0xc3, 0xcc, 0xef, 0xbf, 0xdb, 0x0a, 0x29, 0xbf, 0xc2, 0xda,
    0x25, 0x3f, 0xda, 0x4e, 0xb3, 0xbf, 0x8f, 0xff, 0x3e, 0xc0,
    0xaa, 0x08, 0x69, 0xbf, 0x87, 0x52, 0xd1, 0xbe, 0xab, 0x6f,
    0x62, 0xbd, 0xb0, 0x98, 0xf3, 0xbf, 0x59, 0x7b, 0x4f, 0xbf,
    0x6e, 0xca, 0xbb, 0xbf, 0xa1, 0x36, 0xe6, 0xbe, 0x8a, 0xbb,
    0x7d, 0xbf, 0x19, 0x1e, 0x7d, 0xbf, 0x10, 0x65, 0x6f, 0xbf,
    0x78, 0xd1, 0x6e, 0xbd, 0x60, 0x36, 0xd5, 0xbf, 0x77, 0x31,
    0x39, 0xbf, 0x77, 0xff, 0x0a, 0xbf, 0x02, 0x97, 0x33, 0x3f,
    0x3c, 0xde, 0x7b, 0x3f, 0x66, 0x44, 0x26, 0x3f, 0x04, 0x0a,
    0x4a, 0x3f, 0xd9, 0x9d, 0xd2, 0xbf, 0xbf, 0x4a, 0x39, 0x3f,
    0x0d, 0x56, 0x3e, 0x3e, 0xcd, 0x9f, 0xe8, 0xbe, 0xa0, 0x37,
    0x4e, 0xbf, 0xc4, 0x14, 0xb9, 0xbe, 0xf0, 0xfb, 0x08, 0xbf,
    0x44, 0x1e, 0xd5, 0xbd, 0x3f, 0xed, 0xb8, 0xbe, 0xf2, 0x32,
    0xf1, 0xbf, 0x92, 0x7a, 0x6e, 0xbf, 0x34, 0xb3, 0xba, 0x3c,
    0xb6, 0x59, 0xcc, 0x3d, 0x81, 0xa2, 0xb4, 0xbe, 0x32, 0x2e,
    0x96, 0xbf, 0x51, 0x52, 0x2f, 0xbf, 0xf2, 0xf7, 0xc6, 0x3e,
    0x0e, 0x6b, 0xc5, 0xbf, 0x54, 0xe8, 0x52, 0x3e, 0xee, 0x4f,
    0x47, 0xbf, 0x90, 0xba, 0x8f, 0x3f, 0x29, 0x4a, 0xcb, 0x3e,
    0x67, 0x74, 0x24, 0xbf, 0xac, 0x67, 0x01, 0xbf, 0x73, 0xb1,
    0x09, 0xbf, 0x79, 0x26, 0x97, 0xc0, 0xba, 0x7e, 0x22, 0xbf,
    0x78, 0x93, 0x9c, 0xbf, 0x65, 0xe4, 0xe3, 0xbe, 0xe8, 0xf3,
    0x91, 0xbf, 0x5f, 0xb8, 0xc6, 0xbe, 0xed, 0xc1, 0xdf, 0xbd,
    0x97, 0x5f, 0x9b, 0xbe, 0xec, 0xa7, 0x32, 0xbf, 0x1e, 0xcc,
    0x62, 0x3f, 0x94, 0x6f, 0x98, 0xbd, 0x37, 0xf9, 0x0b, 0xbf,
    0x32, 0x6b, 0xbc, 0xbe, 0x6c, 0xcd, 0x9e, 0x3e, 0x18, 0xf3,
    0x19, 0x40, 0xcd, 0x67, 0xab, 0xbd, 0x75, 0xc5, 0x3c, 0x3e,
    0xdc, 0x46, 0xf0, 0xbf, 0x19, 0xe6, 0xd1, 0x3b, 0xf5, 0x35,
    0xd2, 0xbf, 0x6d, 0xb5, 0xb1, 0xbf, 0xd1, 0xf0, 0x53, 0xbe,
    0xd7, 0xde, 0x69, 0xbe, 0x38, 0x08, 0x88, 0xbf, 0x59, 0x23,
    0x96, 0xbe, 0xb3, 0xc0, 0x15, 0xbf, 0x6a, 0x5e, 0xf4, 0xbe,
    0x64, 0x6b, 0x4f, 0xbf, 0xd5, 0x22, 0x2b, 0xbe, 0xc2, 0xac,
    0x24, 0x3d, 0x23, 0x5a, 0x4e, 0x40, 0xde, 0x84, 0xe6, 0x3e,
    0x1d, 0x15, 0xca, 0xbe, 0x82, 0xe2, 0xa5, 0x3f, 0x17, 0x49,
    0xcd, 0xbe, 0xf5, 0xd4, 0x65, 0xbe, 0x48, 0xe1, 0xf6, 0xbe,
    0xb7, 0x36, 0xdf, 0x3e, 0xa1, 0xbd, 0x33, 0xbe, 0x05, 0xa5,
    0x27, 0xbf, 0x81, 0x2b, 0x81, 0x3e, 0xfd, 0x90, 0x7c, 0xc0,
    0x73, 0x45, 0x14, 0xbf, 0xf0, 0x46, 0x48, 0xbd, 0xcf, 0xf3,
    0xa5, 0x3e, 0xb5, 0xb4, 0x45, 0xbf, 0x9d, 0x43, 0xa8, 0x3f,
    0xff, 0xbb, 0x09, 0x3f, 0x88, 0x07, 0xe5, 0xbe, 0x67, 0x02,
    0x02, 0x3f, 0xdf, 0x39, 0x25, 0xbe, 0xe1, 0x24, 0xc9, 0xbe,
    0xef, 0x93, 0x65, 0xbf, 0x92, 0xbe, 0x31, 0xbf, 0x2e, 0x1f,
    0x1e, 0x3e, 0x0c, 0x18, 0xc6, 0xbd, 0x7f, 0x81, 0x10, 0xbe,
    0xdf, 0xe1, 0x88, 0x3d, 0x83, 0xc6, 0xf3, 0x3c, 0x49, 0xdf,
    0x3d, 0x3f, 0xb9, 0x2f, 0x62, 0xbf, 0x98, 0xaa, 0xee, 0xbe,
    0xe0, 0x6e, 0x90, 0xbf, 0x54, 0x53, 0xba, 0x3d, 0xcb, 0x75,
    0xd1, 0xbf, 0xb7, 0xed, 0x83, 0x3d, 0x6e, 0x17, 0xe3, 0x3d,
    0xd0, 0x22, 0x92, 0xbf, 0x60, 0x8f, 0xbb, 0x3f, 0xd2, 0x0a,
    0xb7, 0xbe, 0x8e, 0x35, 0x0e, 0x3e, 0xf7, 0xbd, 0x3d, 0xbf,
    0x4f, 0x9d, 0x28, 0xbf, 0xa1, 0x2a, 0xde, 0xbe, 0xa5, 0x68,
    0x72, 0x3f, 0x1b, 0x6a, 0xc3, 0x3f, 0x96, 0x30, 0xd4, 0xbf,
    0x6c, 0x7d, 0xf6, 0xbd, 0x8d, 0x8a, 0x90, 0xbd, 0x63, 0xff,
    0x0b, 0x3e, 0xca, 0x75, 0xe7, 0xbf, 0x8a, 0x4f, 0xfd, 0xbf,
    0xdf, 0xa8, 0x50, 0x3e, 0x17, 0xee, 0x33, 0xbd, 0xcc, 0xb8,
    0x9c, 0xbd, 0xa1, 0x5c, 0xc0, 0x3c, 0x75, 0xf6, 0x25, 0x3c,
    0xdf, 0xe5, 0xca, 0xbd, 0xdd, 0x6d, 0xe1, 0xbc, 0xdb, 0x2a,
    0x12, 0xbd, 0xda, 0xa6, 0x07, 0xbe, 0x4c, 0x30, 0xd6, 0x3d,
    0xb3, 0x69, 0x8e, 0xbd, 0x41, 0x51, 0x39, 0xbe, 0xbe, 0x6a,
    0x68, 0xbe, 0xc5, 0xe9, 0x3b, 0xbe, 0x70, 0x9f, 0x32, 0xbe,
    0xc4, 0xf8, 0x54, 0xbd, 0x96, 0x7f, 0x33, 0xbe, 0xee, 0xad,
    0x07, 0xbe, 0x26, 0x07, 0xd6, 0x3c, 0xf1, 0x49, 0xc1, 0xbc,
    0x1b, 0x75, 0xea, 0x3b, 0x1e, 0x9a, 0xdc, 0xbd, 0x27, 0xa1,
    0x36, 0x3c, 0x19, 0x1f, 0x1c, 0xbd, 0xfc, 0x3e, 0x22, 0xbd,
    0x8d, 0x4d, 0x3e, 0xbd, 0x6b, 0xac, 0xbd, 0xbd, 0xad, 0x60,
    0xdd, 0xbc, 0x1b, 0x6f, 0xbe, 0xbd, 0x39, 0xaa, 0x4a, 0xbe,
    0xa1, 0x75, 0x53, 0xbd, 0xbf, 0x15, 0x8a, 0xbd, 0xe3, 0x5e,
    0x29, 0xbe, 0xdd, 0xe0, 0x31, 0xbe, 0x12, 0x2f, 0x64, 0x3d,
    0x76, 0xe8, 0x43, 0xbe, 0xb0, 0xbc, 0x35, 0xbc, 0xa0, 0xef,
    0xf4, 0xbc, 0x20, 0x20, 0x82, 0xbd, 0xd4, 0x13, 0xa1, 0xbc,
    0x62, 0xb6, 0x2a, 0xbe, 0x29, 0x46, 0x54, 0xbe, 0xb8, 0x34,
    0x8d, 0x3b, 0xaf, 0x60, 0xe5, 0xbd, 0xde, 0x61, 0x20, 0xbe,
    0xde, 0x15, 0x8e, 0xbd, 0x40, 0xef, 0x4d, 0xbd, 0x3c, 0xf9,
    0x55, 0xbe, 0x0b, 0xec, 0x05, 0x3e, 0xa9, 0x2f, 0x64, 0xbe,
    0xf4, 0xbd, 0x26, 0xbe, 0xe0, 0x4c, 0xf5, 0x3b, 0x5b, 0x97,
    0x0b, 0xbe, 0x47, 0x56, 0xea, 0xbd, 0x73, 0x73, 0x32, 0x3b,
    0x95, 0xc3, 0x5c, 0xbe, 0xf1, 0x79, 0x25, 0xbe, 0xe5, 0x1e,
    0x60, 0xbe, 0x3a, 0x1a, 0x2c, 0x3d, 0xce, 0x0f, 0x3d, 0xbe,
    0x7f, 0xa9, 0x81, 0xbe, 0xb6, 0x6b, 0x0f, 0xbe, 0x10, 0xa4,
    0x41, 0xbd, 0x6d, 0x72, 0x16, 0x3d, 0x6c, 0x28, 0x30, 0xbe,
    0x6c, 0x12, 0xce, 0xbd, 0xd8, 0x1f, 0x51, 0x3c, 0x38, 0xd1,
    0xd2, 0xbd, 0xd0, 0x34, 0x18, 0xbd, 0x43, 0x47, 0x7e, 0xbb,
    0xa9, 0x76, 0xba, 0x3d, 0xed, 0xcb, 0x27, 0xbe, 0x93, 0x7f,
    0x78, 0xbe, 0xb8, 0x0e, 0x1f, 0xbe, 0x51, 0x82, 0xda, 0x3d,
    0x73, 0x9c, 0x55, 0xbe, 0xcd, 0x06, 0xef, 0x3c, 0x00, 0xb7,
    0x19, 0xbe, 0xd1, 0x01, 0xc4, 0x3d, 0x11, 0x62, 0xa1, 0xbd,
    0xc0, 0xda, 0xd1, 0x3d, 0xf9, 0x8f, 0x75, 0xbf, 0x97, 0x8b,
    0x7e, 0xbd, 0x8b, 0xa0, 0x54, 0x3f, 0x82, 0xfe, 0xe3, 0x3e,
    0xe8, 0xad, 0x2f, 0x3e, 0x70, 0x11, 0x54, 0x3e, 0x93, 0xb0,
    0xf8, 0xbe, 0xbc, 0x95, 0x3f, 0xc0, 0x65, 0x0b, 0x4e, 0xbf,
    0x97, 0xaf, 0x7f, 0xbf, 0x1d, 0x61, 0x1c, 0xbf, 0x0a, 0x04,
    0x50, 0x3e, 0xa6, 0xe6, 0xfa, 0xbf, 0x3a, 0x2b, 0x14, 0xc0,
    0xb0, 0x18, 0xd7, 0xbd, 0xfa, 0x3e, 0x8a, 0xbd, 0x8c, 0xd6,
    0xd0, 0x3e, 0x1c, 0xed, 0x41, 0x3b, 0xab, 0x1d, 0x97, 0xbf,
    0x8e, 0xca, 0xc5, 0xbe, 0xcf, 0x00, 0x46, 0xbf, 0xd0, 0x8f,
    0x8e, 0xbf, 0xd7, 0x0e, 0x9a, 0x3e, 0x24, 0x7c, 0xa6, 0xbd,
    0x36, 0x5b, 0xeb, 0x3d, 0x46, 0x4c, 0x72, 0xbf, 0xdf, 0x75,
    0x00, 0xc0, 0x4c, 0x28, 0x94, 0x3d, 0x57, 0x96, 0x8f, 0xbe,
    0x3a, 0x22, 0x61, 0xbf, 0xcd, 0xab, 0x5e, 0xbf, 0xf4, 0x83,
    0xe5, 0xbf, 0xb7, 0xa4, 0x86, 0xbf, 0xb6, 0x33, 0xd1, 0xbe,
    0x5b, 0x51, 0x04, 0x3f, 0xd0, 0xb1, 0xa2, 0xbd, 0x04, 0x7b,
    0x28, 0xb9, 0x14, 0xb7, 0x0a, 0xbf, 0xb6, 0x30, 0xbd, 0x3e,
    0x6a, 0xc9, 0x75, 0xbf, 0x5d, 0x2f, 0x92, 0xbf, 0x3f, 0x26,
    0x35, 0xbe, 0xa7, 0xb0, 0xdd, 0xbf, 0x47, 0x02, 0x4a, 0x3e,
    0x06, 0x05, 0x4d, 0x3f, 0xb7, 0x7f, 0xb2, 0xbe, 0xcd, 0x52,
    0x69, 0xbb, 0x44, 0xa9, 0xc4, 0xbd, 0xd4, 0x3a, 0x6a, 0xbf,
    0x37, 0xff, 0xb4, 0xbe, 0x15, 0x8b, 0x66, 0xbf, 0x63, 0x0c,
    0x07, 0xbf, 0x71, 0x11, 0x8c, 0xbf, 0x70, 0x4b, 0x2e, 0x3e,
    0x25, 0x86, 0xbc, 0x3e, 0x08, 0x3d, 0x2b, 0xc0, 0x13, 0x9b,
    0x13, 0x3f, 0xee, 0x3f, 0x95, 0xbe, 0xcf, 0x4c, 0xb9, 0xbe,
    0xd0, 0x54, 0x00, 0xbf, 0xa5, 0x6c, 0x16, 0xbf, 0x2a, 0x26,
    0x0a, 0xbf, 0x51, 0x0d, 0x9e, 0xbf, 0x13, 0xe5, 0xa7, 0xbf,
    0x16, 0xef, 0x90, 0x3d, 0x1e, 0xc0, 0x00, 0xc0, 0x73, 0x1b,
    0x17, 0x3f, 0x7c, 0x44, 0x7d, 0x3d, 0x4e, 0x0f, 0xa2, 0xbe,
    0xab, 0x18, 0xb4, 0xbf, 0x81, 0x5d, 0xc1, 0x3d, 0xff, 0x82,
    0xb0, 0xbe, 0x81, 0x4f, 0x0d, 0x3e, 0x48, 0x74, 0xb3, 0xbf,
    0x91, 0x19, 0xb4, 0xbf, 0x66, 0x74, 0x7e, 0xbe, 0xf1, 0xa4,
    0xe1, 0xbf, 0x4b, 0xbe, 0x02, 0xc0, 0x6e, 0x23, 0x86, 0xbf,
    0x41, 0xd9, 0x96, 0xbf, 0xa0, 0x8b, 0x3a, 0xc0, 0xb8, 0xdd,
    0xec, 0x3e, 0x00, 0xe6, 0xc5, 0xbf, 0x8e, 0x15, 0xe2, 0x3e,
    0x7e, 0xec, 0x0d, 0xc0, 0x4a, 0xa2, 0xf1, 0xbf, 0xc8, 0xed,
    0xb4, 0xbf, 0xa2, 0xe9, 0xc3, 0x3e, 0x50, 0xb2, 0x37, 0x3e,
    0x26, 0xc4, 0x5f, 0x3f, 0xea, 0x4b, 0x07, 0xbf, 0x49, 0xe9,
    0x84, 0x40, 0x16, 0x42, 0x29, 0x3a, 0xf1, 0x97, 0x52, 0xbf,
    0xb8, 0xfd, 0x01, 0x3f, 0xe3, 0xdb, 0xf0, 0x3e, 0x83, 0x25,
    0xb9, 0xbf, 0xdd, 0x44, 0x69, 0x3f, 0xcf, 0x5f, 0x08, 0x3f,
    0xda, 0x60, 0xdd, 0xbd, 0x41, 0xb4, 0x88, 0xbf, 0xe5, 0xcc,
    0x92, 0xbf, 0xe3, 0x04, 0xb1, 0xbf, 0xc9, 0x0f, 0x3b, 0x3f,
    0x10, 0x28, 0x7d, 0x3f, 0x06, 0x8f, 0xa5, 0x3f, 0xe8, 0xaa,
    0xc4, 0xbf, 0xe2, 0x4c, 0x88, 0x40, 0xa5, 0xf7, 0x0e, 0x3e,
    0x68, 0x68, 0x10, 0xc0, 0x12, 0x43, 0x2f, 0x3f, 0x4c, 0x7e,
    0xde, 0xbe, 0x5b, 0x14, 0x32, 0xbf, 0x4c, 0x0c, 0x60, 0x3c,
    0x0b, 0xe9, 0x41, 0xbf, 0x03, 0x2c, 0x7e, 0x3f, 0x0f, 0x25,
    0x5b, 0x3f, 0xc8, 0xa1, 0xb2, 0xbf, 0xad, 0x16, 0x5b, 0xbf,
    0x7f, 0x7c, 0x23, 0xbf, 0x0b, 0x3b, 0x8d, 0xbf, 0x76, 0x92,
    0x70, 0xbe, 0xdd, 0xf5, 0xda, 0xbf, 0xf8, 0x3e, 0xda, 0x3d,
    0x5b, 0x70, 0x0c, 0xbf, 0xbc, 0x16, 0xf2, 0xbe, 0x6a, 0x8d,
    0x13, 0x3f, 0x49, 0xde, 0x20, 0x3e, 0x74, 0x2c, 0x6f, 0x3f,
    0x40, 0xab, 0x31, 0x3e, 0x7a, 0x33, 0x04, 0xbe, 0x4a, 0x9a,
    0xf2, 0xbe, 0x97, 0xb7, 0x27, 0xbf, 0x71, 0xd0, 0x58, 0x3f,
    0x06, 0x66, 0xea, 0x3d, 0x0c, 0x88, 0x48, 0xbc, 0x89, 0x92,
    0x13, 0x3e, 0x40, 0x3b, 0x82, 0xbf, 0x45, 0x0c, 0x33, 0xbe,
    0xa1, 0xf2, 0x8e, 0xbe, 0x38, 0x57, 0xcc, 0xbe, 0xc5, 0xfd,
    0x73, 0x3e, 0x35, 0xc6, 0xec, 0x3f, 0x59, 0x51, 0x17, 0xbf,
    0x9a, 0xa2, 0xed, 0xbe, 0x11, 0x27, 0xdb, 0x3e, 0x45, 0xd8,
    0x48, 0x3e, 0x4a, 0x12, 0x09, 0xbf, 0x3e, 0x03, 0x51, 0xbd,
    0xd3, 0xb9, 0x5f, 0xbe, 0x14, 0x56, 0x49, 0x3e, 0x55, 0x4a,
    0x87, 0xbf, 0xe6, 0x07, 0x2c, 0xbe, 0xe5, 0xec, 0xbe, 0x3e,
    0x5a, 0x7a, 0x9c, 0xbe, 0x6d, 0x0e, 0x6f, 0x3e, 0x54, 0x5f,
    0x12, 0xc0, 0x9d, 0xe6, 0x4b, 0x3f, 0xbc, 0xba, 0xad, 0xbf,
    0x07, 0x98, 0x41, 0xbf, 0xd8, 0x98, 0x95, 0xbf, 0xbe, 0x8d,
    0x69, 0x3f, 0xa7, 0x09, 0x85, 0x3e, 0x6d, 0x98, 0x93, 0xbf,
    0xfa, 0x2d, 0x76, 0x3e, 0x7f, 0x26, 0x68, 0xbe, 0xa9, 0x11,
    0xaf, 0x3e, 0x87, 0x17, 0x16, 0xc0, 0xe9, 0x0b, 0x1e, 0xbf,
    0x34, 0xc3, 0xf6, 0xbf, 0x1a, 0xf5, 0x08, 0xbe, 0xe0, 0xb3,
    0x3b, 0xbf, 0x2a, 0xe0, 0x9c, 0xbf, 0x85, 0x7b, 0x1a, 0xc0,
    0xc4, 0x0b, 0x08, 0xc0, 0x38, 0xdf, 0x53, 0xbf, 0x5b, 0x25,
    0xc9, 0xbf, 0x30, 0x98, 0xda, 0xbd, 0x73, 0x79, 0xa6, 0x3c,
    0xdf, 0x6f, 0xd2, 0x3e, 0x97, 0xd5, 0xed, 0x3e, 0x66, 0xcd,
    0x64, 0x3f, 0x41, 0xd6, 0x31, 0xc0, 0xc0, 0x0a, 0x4b, 0xbf,
    0x08, 0x03, 0xf8, 0xbf, 0xea, 0x6e, 0xd7, 0x3e, 0x52, 0xef,
    0x01, 0xbe, 0x58, 0x49, 0xc9, 0xbd, 0xd8, 0x96, 0x47, 0x3f,
    0x83, 0xed, 0x1b, 0xbf, 0x12, 0xfe, 0xb3, 0x3f, 0x2a, 0x35,
    0xb2, 0x3e, 0x23, 0xc4, 0x19, 0xbe, 0x5f, 0x64, 0x11, 0xbf,
    0x51, 0xf8, 0x13, 0xbf, 0x0d, 0x56, 0x2c, 0xbe, 0xa6, 0x14,
    0x16, 0xbf, 0xdc, 0x80, 0x6c, 0x3e, 0x5b, 0xa0, 0x77, 0x3f,
    0x2d, 0xe5, 0x27, 0xbf, 0xed, 0x98, 0xd8, 0x3e, 0x21, 0x86,
    0x61, 0xbf, 0x40, 0x8b, 0xcf, 0x3e, 0xa9, 0x8b, 0xd8, 0xbe,
    0x2b, 0x4a, 0xc0, 0xbe, 0xca, 0x76, 0x15, 0xc0, 0xde, 0xdb,
    0x03, 0x40, 0xeb, 0x12, 0x9d, 0xbf, 0x37, 0xb7, 0xd9, 0x3e,
    0xbd, 0xe6, 0xaf, 0xbf, 0x93, 0x0a, 0x8d, 0xbf, 0x10, 0x1f,
    0x3a, 0xc0, 0xe3, 0x9f, 0x2e, 0xbf, 0xfe, 0x08, 0x35, 0xbf,
    0x51, 0xcd, 0x08, 0x3f, 0x1f, 0x14, 0x81, 0xbd, 0x94, 0xcb,
    0x3e, 0x3f, 0x1c, 0xe5, 0xd4, 0x3e, 0xf9, 0x3b, 0x8e, 0xbf,
    0x21, 0xa4, 0x57, 0xbf, 0xc8, 0xeb, 0x3d, 0x3f, 0x29, 0xb7,
    0x13, 0xc0, 0x4e, 0x3d, 0xb8, 0xbe, 0x34, 0x82, 0x6e, 0xc0,
    0x4c, 0x48, 0x8c, 0xbe, 0x08, 0x60, 0xb2, 0xbe, 0xbe, 0x61,
    0xda, 0x3d, 0xd1, 0xa3, 0x07, 0x3f, 0x85, 0xbe, 0xdd, 0xbf,
    0x19, 0xc4, 0x4c, 0x3f, 0xba, 0x7a, 0xd5, 0xbf, 0x53, 0x66,
    0x08, 0xbf, 0x4e, 0xf7, 0x4b, 0x3f, 0xff, 0xc6, 0xb9, 0x3e,
    0x96, 0xe0, 0x2e, 0x3e, 0xdb, 0xc2, 0xaa, 0xbd, 0x11, 0x71,
    0xa7, 0xbe, 0x82, 0x43, 0x93, 0xbf, 0xfc, 0xa5, 0x12, 0xc0,
    0x49, 0xdd, 0xeb, 0xbe, 0xed, 0x78, 0x1f, 0xbf, 0x25, 0x6f,
    0xbe, 0x3e, 0xa3, 0xf9, 0xb9, 0xbd, 0xac, 0xb5, 0x42, 0xbe,
    0x9f, 0xde, 0x96, 0xbd, 0x70, 0xe2, 0x4c, 0xbe, 0xed, 0xe2,
    0x5b, 0x3f, 0x57, 0x9a, 0x05, 0x3f, 0xc3, 0x50, 0xc6, 0x3b,
    0x97, 0xfb, 0xd9, 0xbf, 0x43, 0x2b, 0x04, 0x3f, 0x59, 0xf3,
    0xea, 0xbe, 0x50, 0x24, 0xf2, 0x3e, 0x92, 0xa4, 0xe6, 0xbf,
    0xe7, 0x40, 0x17, 0xbf, 0x9a, 0x4e, 0xd9, 0xbd, 0xe1, 0x30,
    0x40, 0xbf, 0x65, 0xf2, 0xc8, 0x3e, 0xde, 0x1a, 0x13, 0x3e,
    0x2e, 0x46, 0x09, 0x3f, 0xa5, 0x51, 0x79, 0x3e, 0x9b, 0x36,
    0x9a, 0x3f, 0x70, 0xae, 0x92, 0xbe, 0x1b, 0x24, 0x18, 0x3e,
    0x68, 0xba, 0xf6, 0xbf, 0xfb, 0x86, 0xc0, 0xbf, 0x8c, 0x24,
    0x03, 0xbf, 0x2f, 0xe4, 0x02, 0xbe, 0x31, 0x64, 0x7c, 0xbe,
    0x84, 0x31, 0x80, 0xbf, 0x14, 0x6a, 0x0b, 0xbf, 0x3d, 0x28,
    0x1b, 0xbd, 0x5d, 0xf0, 0x4d, 0x3e, 0x90, 0x9f, 0x93, 0xbe,
    0x58, 0x0b, 0x42, 0xbf, 0x87, 0xb7, 0xba, 0xbe, 0x97, 0xbd,
    0xec, 0xbe, 0xbf, 0xde, 0x06, 0xbf, 0x8c, 0x64, 0xb7, 0x3e,
    0x7c, 0x77, 0x53, 0xbf, 0xe6, 0x3a, 0xa3, 0x3d, 0x6e, 0xe9,
    0x24, 0xc0, 0x7b, 0xf3, 0x01, 0xbf, 0x07, 0x21, 0xb3, 0xbe,
    0xa5, 0xb9, 0x69, 0xbf, 0xb1, 0x5b, 0xf1, 0x3e, 0xb9, 0x98,
    0x99, 0x3e, 0x8f, 0xf8, 0x5b, 0xbe, 0x4f, 0x3c, 0xa3, 0x3f,
    0x53, 0xe3, 0x01, 0xc0, 0x39, 0x1d, 0xb9, 0xbf, 0xd3, 0x91,
    0x10, 0xbf, 0x5a, 0xd8, 0xd5, 0xbe, 0x43, 0x95, 0x95, 0x3e,
    0xaf, 0xa1, 0xc3, 0xbe, 0x56, 0x45, 0xce, 0xbf, 0x82, 0x29,
    0x3f, 0x3e, 0xb1, 0x63, 0xb0, 0xbf, 0xac, 0x2c, 0x94, 0xbf,
    0x73, 0x7a, 0xa4, 0x3f, 0xa1, 0x2a, 0x42, 0xbf, 0xd3, 0x2a,
    0xcb, 0x3f, 0x05, 0x55, 0x26, 0xc0, 0x0b, 0xaf, 0x70, 0xbf,
    0x85, 0x21, 0x0d, 0xc0, 0x10, 0xf9, 0x0e, 0xc0, 0xe7, 0x85,
    0xac, 0x3d, 0xf2, 0x12, 0xea, 0xbc, 0x4f, 0x40, 0x5a, 0xbe,
    0x0e, 0x5b, 0x8b, 0x3f, 0x6d, 0x12, 0x49, 0xbf, 0x6e, 0xc5,
    0x99, 0x3e, 0xe3, 0xc4, 0x34, 0x3f, 0x73, 0x45, 0x15, 0x40,
    0x83, 0x96, 0xa1, 0x3e, 0x6b, 0xae, 0x60, 0x40, 0x4e, 0x4c,
    0x9f, 0x3e, 0x0f, 0xa4, 0x1e, 0xbf, 0xd6, 0xe0, 0x0d, 0xc0,
    0x78, 0xc4, 0x43, 0x3d, 0xcd, 0x96, 0xc0, 0xbf, 0x45, 0x1d,
    0x75, 0x3f, 0x64, 0xe3, 0xf7, 0xbd, 0xe0, 0xac, 0x6b, 0x3e,
    0xac, 0x29, 0x51, 0x3d, 0x9c, 0x38, 0xfe, 0xbe, 0x7f, 0x44,
    0x88, 0x3e, 0x82, 0x7b, 0xc7, 0x3e, 0x7c, 0x85, 0x0a, 0xbe,
    0xe8, 0x31, 0xe7, 0xbd, 0x65, 0xa2, 0x32, 0xbf, 0x52, 0x92,
    0x13, 0xbe, 0x1a, 0x69, 0xa0, 0xbf, 0xff, 0x8d, 0x0a, 0x3f,
    0x07, 0x93, 0x8b, 0xbd, 0xec, 0x68, 0xe0, 0x3d, 0xc3, 0x9f,
    0xcb, 0xbe, 0x07, 0x18, 0x4b, 0x3f, 0x29, 0xf0, 0xf3, 0x3d,
    0xef, 0xb6, 0x09, 0x3f, 0x51, 0x04, 0x2e, 0xbf, 0x42, 0xe5,
    0x86, 0x3e, 0x46, 0x4d, 0x47, 0xbe, 0x1f, 0x40, 0x1b, 0xbd,
    0x1e, 0xf4, 0x58, 0xbf, 0x8d, 0x0e, 0x67, 0xbf, 0x12, 0x3e,
    0xee, 0x3e, 0x50, 0x0d, 0x74, 0xbf, 0x57, 0xa6, 0x5d, 0x3e,
    0x4a, 0x79, 0x21, 0x3d, 0x38, 0x60, 0xc5, 0xbe, 0x20, 0xba,
    0x49, 0xbe, 0xc8, 0x58, 0xeb, 0xbf, 0x11, 0x50, 0x7e, 0xbf,
    0x73, 0x5d, 0x54, 0x3d, 0xa7, 0x72, 0xc0, 0xbe, 0x54, 0xe5,
    0xe6, 0xbd, 0x80, 0x08, 0x09, 0x3f, 0x94, 0xf8, 0x38, 0x3f,
    0x35, 0xd5, 0x8a, 0xbf, 0x3a, 0x0b, 0x2f, 0xbe, 0x20, 0xdd,
    0x9d, 0xbf, 0x13, 0x63, 0x99, 0x3e, 0x9a, 0x8a, 0x86, 0xbf,
    0x36, 0xfd, 0x24, 0xbe, 0xac, 0x7b, 0x0b, 0x3e, 0x8f, 0x31,
    0xe2, 0xbe, 0xf2, 0x45, 0x6b, 0xbe, 0xb5, 0x72, 0xd2, 0xbf,
    0x9e, 0xe4, 0x9f, 0xbe, 0x93, 0xe3, 0x18, 0xbf, 0xf2, 0xbd,
    0x1e, 0xc0, 0x0b, 0x6b, 0x3e, 0xbf, 0xda, 0xb3, 0xd5, 0x3f,
    0x22, 0x5c, 0xa6, 0xbe, 0xbf, 0x98, 0xf4, 0x3e, 0x47, 0x13,
    0x9c, 0x3e, 0x72, 0x55, 0x40, 0x3f, 0xbf, 0x05, 0xa9, 0xbf,
    0xae, 0x46, 0x2d, 0xc0, 0x08, 0x76, 0x29, 0xbf, 0xda, 0xad,
    0x2b, 0x3d, 0xad, 0x47, 0xfc, 0xbe, 0x06, 0x41, 0xbe, 0xbe,
    0x02, 0x02, 0x83, 0xbf, 0x78, 0xab, 0x86, 0xbf, 0xab, 0x72,
    0x1f, 0xc0, 0x26, 0xa9, 0xad, 0x3d, 0x3f, 0x16, 0x43, 0xbf,
    0x58, 0x36, 0x88, 0x3e, 0x16, 0x1d, 0x3d, 0xc0, 0x3e, 0x2a,
    0x41, 0xbc, 0x1e, 0x5c, 0x3d, 0x3f, 0x71, 0x05, 0x8b, 0xbe,
    0xf4, 0xc4, 0x57, 0xbf, 0x41, 0x4d, 0x78, 0xc0, 0x64, 0xd2,
    0x8c, 0x3f, 0x11, 0xf0, 0xfb, 0xbf, 0x64, 0xae, 0xc0, 0xbe,
    0x0b, 0x05, 0xf1, 0x3e, 0x51, 0x4a, 0xd7, 0x3f, 0xb3, 0xb4,
    0x81, 0xbd, 0x79, 0xe4, 0x30, 0x3e, 0x85, 0xc2, 0x3c, 0xbf,
    0x80, 0x6d, 0xb8, 0x3e, 0xb9, 0xb2, 0xf5, 0xbd, 0xcf, 0xc7,
    0xc6, 0x3e, 0xda, 0x76, 0x12, 0xc0, 0x61, 0x1f, 0xa0, 0x3e,
    0xb1, 0x28, 0xb8, 0xbe, 0x16, 0xf5, 0x32, 0xbd, 0x0e, 0x5c,
    0x5f, 0xbf, 0x2f, 0xa6, 0x2d, 0xbf, 0xca, 0xd8, 0x7c, 0x3e,
    0xfa, 0x34, 0x6e, 0xbf, 0xbe, 0x57, 0x1d, 0xc0, 0x9a, 0xd1,
    0xac, 0x3e, 0x1c, 0x93, 0x92, 0x3f, 0x58, 0x91, 0x06, 0xbf,
    0x4f, 0xc8, 0x76, 0x3e, 0xe9, 0x54, 0x44, 0x3f, 0x9d, 0x83,
    0xa2, 0x3d, 0x9e, 0x3d, 0x83, 0x3e, 0x75, 0x32, 0x22, 0xc0,
    0xcb, 0x0b, 0x0f, 0x3e, 0xec, 0xfc, 0xa7, 0xbf, 0x00, 0x03,
    0x30, 0x3f, 0x54, 0x04, 0x17, 0x40, 0xdc, 0x92, 0xc7, 0xbe,
    0x98, 0xe5, 0xde, 0xbe, 0x99, 0x04, 0xac, 0xbf, 0x29, 0x8c,
    0x50, 0xbe, 0x4e, 0xc6, 0x00, 0xbf, 0x53, 0xea, 0x81, 0xbf,
    0x31, 0xc1, 0x34, 0xbe, 0xcf, 0x08, 0xf3, 0x3e, 0x9b, 0x5c,
    0x69, 0xbf, 0x0a, 0x6b, 0x55, 0xbd, 0x0f, 0x60, 0xfe, 0x3d,
    0x78, 0xfa, 0x41, 0xbf, 0xe1, 0x64, 0xa7, 0xbe, 0xb5, 0x5b,
    0xf7, 0xbe, 0x27, 0xc1, 0x52, 0xbe, 0x23, 0xf1, 0xf7, 0x3f,
    0xc4, 0xfe, 0xda, 0xbf, 0x5a, 0xe4, 0x1f, 0x3e, 0x87, 0x30,
    0xd1, 0xbe, 0x30, 0x2b, 0xcd, 0x3e, 0xa3, 0x86, 0xe2, 0x3d,
    0xff, 0x0a, 0x12, 0xc0, 0xd9, 0x67, 0x12, 0xbf, 0xa4, 0x2b,
    0xe0, 0xbd, 0x55, 0x67, 0x97, 0xbf, 0xc0, 0x45, 0xb7, 0x3e,
    0x80, 0x64, 0x76, 0xbf, 0xa3, 0x7b, 0xbd, 0xbd, 0xa4, 0x96,
    0x66, 0xbe, 0xc0, 0x32, 0x55, 0x3f, 0xb4, 0x5a, 0xd0, 0xbf,
    0x85, 0x17, 0x7a, 0x40, 0xe5, 0xc3, 0xf8, 0xbe, 0x36, 0xae,
    0xe8, 0x3e, 0xac, 0xc6, 0x82, 0x3e, 0xbf, 0x96, 0x72, 0x3e,
    0xc9, 0x19, 0x9e, 0x3e, 0x08, 0xaa, 0xe4, 0xbf, 0x35, 0xc1,
    0x40, 0xbf, 0x73, 0xf1, 0xc1, 0xbc, 0x29, 0x9a, 0x04, 0xbf,
    0x3c, 0xea, 0xdf, 0xbe, 0x4d, 0xc5, 0xf6, 0xbf, 0x93, 0x2b,
    0x0b, 0x3f, 0xa7, 0xbd, 0xe4, 0xbf, 0x2e, 0x6a, 0x8e, 0x3e,
    0xd5, 0xe7, 0x5b, 0xbf, 0xee, 0xa9, 0x73, 0x3e, 0x26, 0xd6,
    0x8d, 0x3e, 0x53, 0x02, 0x5d, 0xbf, 0x0f, 0x1a, 0x48, 0xbf,
    0xad, 0x98, 0x2e, 0x3f, 0xa0, 0x9d, 0x89, 0xbf, 0xd8, 0xd7,
    0xf0, 0xbd, 0xf6, 0xbf, 0x0f, 0xbf, 0x57, 0x00, 0xaa, 0x3f,
    0xc8, 0x8a, 0xf6, 0x3e, 0x23, 0x4e, 0x15, 0xc0, 0xf1, 0xa1,
    0x09, 0xc0, 0x94, 0x57, 0x0a, 0x3f, 0xdf, 0x00, 0x76, 0xbf,
    0x1c, 0xf1, 0x17, 0xc0, 0x1c, 0x81, 0xf8, 0xbf, 0xcf, 0x55,
    0x05, 0xbf, 0xb6, 0x0f, 0x1a, 0x3e, 0x27, 0x61, 0x7f, 0xbd,
    0x8c, 0x92, 0xb1, 0x3f, 0xc4, 0x16, 0x01, 0x3f, 0xde, 0x50,
    0xa8, 0x3e, 0x35, 0x20, 0x03, 0xbf, 0x72, 0x9d, 0xf9, 0x3c,
    0x8b, 0x01, 0x32, 0xbf, 0x7a, 0xba, 0xdc, 0xbd, 0x49, 0xcd,
    0x57, 0xbf, 0xe5, 0xa4, 0xf2, 0xbe, 0xb6, 0xd1, 0x74, 0xbf,
    0xba, 0x79, 0xdd, 0xbe, 0x9a, 0x9b, 0x36, 0xbc, 0xa5, 0x66,
    0xee, 0xbf, 0x19, 0x51, 0xa4, 0x3f, 0xa6, 0xa1, 0x0d, 0xbe,
    0xec, 0x0f, 0xaf, 0xbe, 0xab, 0x10, 0xbb, 0xbd, 0xd6, 0x98,
    0x8f, 0xbe, 0x5e, 0xd7, 0x3f, 0x3e, 0x8a, 0x80, 0xb0, 0x3d,
    0x75, 0xd6, 0x0e, 0x3e, 0x95, 0x36, 0x79, 0xbe, 0xc5, 0x87,
    0x01, 0x3f, 0xd9, 0x44, 0x97, 0x3e, 0x04, 0x8e, 0xb5, 0x3d,
    0xa3, 0x5b, 0xab, 0xbf, 0xcf, 0xdb, 0x36, 0xbf, 0x3f, 0x8a,
    0x9b, 0x3f, 0xa0, 0x20, 0xb0, 0xbe, 0x7a, 0x1a, 0x0f, 0x40,
    0xd0, 0xdf, 0x8c, 0xbe, 0x71, 0xb8, 0x19, 0x3d, 0x0a, 0x2f,
    0x02, 0xc0, 0xb0, 0x70, 0xb0, 0xbf, 0xb3, 0xec, 0xa5, 0x3e,
    0xfb, 0xe6, 0x6a, 0x3e, 0x9f, 0x8c, 0x9b, 0x3e, 0x73, 0x69,
    0x3e, 0xbf, 0x94, 0xef, 0xe7, 0xbe, 0xc4, 0x5e, 0x97, 0xbe,
    0xf1, 0x77, 0x6d, 0x3e, 0x62, 0x43, 0x74, 0xbf, 0xbb, 0x08,
    0xcf, 0x3e, 0x9f, 0x28, 0xdd, 0x3f, 0x65, 0xe6, 0xfe, 0xbc,
    0xa9, 0x23, 0x43, 0x40, 0x8d, 0xa4, 0x76, 0xbe, 0xfb, 0x64,
    0xd9, 0x3e, 0x74, 0x2e, 0xf0, 0x3e, 0x22, 0x59, 0x99, 0xbf,
    0x9a, 0xa3, 0x31, 0x3f, 0xe3, 0x9e, 0x24, 0xbe, 0x5f, 0x0d,
    0xd2, 0xbf, 0x9d, 0x55, 0xb4, 0xbf, 0x32, 0xc3, 0x52, 0xbf,
    0x4d, 0x26, 0xb8, 0xbe, 0x27, 0xd4, 0x8a, 0x3e, 0x3b, 0xd3,
    0x29, 0xc0, 0xae, 0x6e, 0xbe, 0x3b, 0x3f, 0x47, 0x8f, 0x3c,
    0x02, 0xb1, 0x8c, 0xbf, 0xe6, 0xb0, 0x61, 0x40, 0x1e, 0x37,
    0x75, 0xbf, 0xbf, 0x7e, 0x43, 0x3f, 0x76, 0xcd, 0x2c, 0x40,
    0x81, 0xd9, 0xde, 0xbe, 0xdc, 0xec, 0x3a, 0xbf, 0xeb, 0x88,
    0x88, 0x3f, 0x59, 0x30, 0x6e, 0xbf, 0xd4, 0x2a, 0xe6, 0xbe,
    0x41, 0x09, 0x7d, 0x3f, 0xc9, 0xb3, 0x1e, 0xc0, 0xed, 0x6c,
    0x1b, 0xbe, 0x42, 0x1b, 0xbc, 0xbf, 0x0c, 0xb7, 0x64, 0xbf,
    0x1b, 0x6c, 0x81, 0xc0, 0x79, 0x2d, 0xbe, 0xbe, 0xde, 0x12,
    0x88, 0xbd, 0xa6, 0xfe, 0x43, 0x3f, 0xe8, 0xb8, 0x05, 0x3f,
    0xc3, 0xad, 0x82, 0xbe, 0x0b, 0x42, 0x58, 0xbf, 0x70, 0xc9,
    0x86, 0xbf, 0xc0, 0x0a, 0xc0, 0x3f, 0xd0, 0xa9, 0x05, 0x3f,
    0x72, 0x54, 0x6a, 0xbe, 0xe9, 0x88, 0xd7, 0xbf, 0x7d, 0xa3,
    0x54, 0x3f, 0xc1, 0xbe, 0x4f, 0x3d, 0xaa, 0x99, 0xa5, 0xbf,
    0x07, 0x77, 0x13, 0x3f, 0x09, 0x24, 0x32, 0xc0, 0x1d, 0xca,
    0x97, 0xbf, 0xaf, 0xbd, 0xff, 0xbb, 0x45, 0x88, 0xbe, 0xbf,
    0x15, 0x16, 0x56, 0x3f, 0x9c, 0x69, 0xd0, 0xbe, 0x06, 0x4f,
    0x52, 0x3e, 0x96, 0xa1, 0x5e, 0x3e, 0x8d, 0x75, 0x50, 0xbf,
    0x4d, 0xc5, 0xad, 0xbf, 0xf2, 0x8c, 0xd8, 0x3e, 0x3e, 0x9e,
    0xd5, 0xbe, 0xc5, 0xa2, 0x01, 0xbf, 0xbf, 0x05, 0x9e, 0xbe,
    0xd0, 0x50, 0x9c, 0xbf, 0xce, 0x2b, 0x63, 0x3e, 0xa8, 0x10,
    0x92, 0x3e, 0x76, 0x45, 0xbb, 0xbe, 0x4c, 0xca, 0x95, 0xbe,
    0x9f, 0xa6, 0x3d, 0xbf, 0xd2, 0x74, 0x80, 0x3f, 0x3d, 0xa3,
    0x44, 0x3f, 0xe5, 0x2c, 0x20, 0xbe, 0x59, 0xf4, 0x79, 0x3f,
    0xa0, 0x35, 0x78, 0xbf, 0x68, 0x43, 0x86, 0x3c, 0x5e, 0x2b,
    0x5a, 0xbe, 0x1d, 0x15, 0x85, 0x3f, 0xe7, 0xe2, 0xbd, 0x3e,
    0xb3, 0x97, 0x9a, 0xbe, 0x2c, 0x96, 0xfd, 0xbf, 0x12, 0x5f,
    0x2c, 0x3f, 0xa9, 0x16, 0xaa, 0xbf, 0xef, 0x3b, 0x03, 0x3e,
    0xc0, 0x54, 0x2d, 0xc0, 0xce, 0x4d, 0xf3, 0xbf, 0xc2, 0xbb,
    0xa6, 0xbe, 0x1a, 0x7c, 0x62, 0xbe, 0xb2, 0xf9, 0x38, 0xbf,
    0x68, 0x31, 0xaa, 0xbf, 0xa2, 0xf8, 0x66, 0xbf, 0xa4, 0xd3,
    0x2c, 0x3e, 0x9c, 0xe4, 0x6a, 0x3e, 0xbe, 0x11, 0x8c, 0x3e,
    0x42, 0xb8, 0x16, 0xbe, 0x3b, 0xec, 0x12, 0x3d, 0x69, 0x3b,
    0x9c, 0xbf, 0x35, 0x96, 0x2a, 0xbf, 0x08, 0x30, 0xb4, 0xbf,
    0xfe, 0x69, 0x4d, 0x3f, 0xf3, 0xf0, 0x0c, 0xc0, 0xef, 0xb5,
    0x40, 0xbf, 0xb9, 0x6c, 0xb6, 0xbf, 0xe0, 0x65, 0x1a, 0x3f,
    0xe4, 0x7c, 0x14, 0x3f, 0xf5, 0xd3, 0x0e, 0xbf, 0xbb, 0xf9,
    0xe7, 0xbe, 0xce, 0x66, 0x00, 0xbf, 0x9b, 0x46, 0x93, 0xbd,
    0xc7, 0xa3, 0xfc, 0x3d, 0x55, 0x66, 0x5a, 0x3e, 0x78, 0xd8,
    0x23, 0x3e, 0x64, 0x8b, 0xc6, 0xbf, 0xb3, 0xe6, 0xc0, 0xbe,
    0x36, 0xb1, 0x4a, 0xc0, 0x49, 0x1c, 0x19, 0xc0, 0x1c, 0xa7,
    0xe1, 0xbe, 0x34, 0x4b, 0xb4, 0xbf, 0xff, 0x3b, 0x37, 0xc0,
    0x79, 0xb9, 0x6b, 0xbf, 0x5a, 0x5c, 0xe4, 0xbf, 0x56, 0x8b,
    0x56, 0xbf, 0x98, 0x92, 0x69, 0xbe, 0x9a, 0x68, 0x5e, 0x3f,
    0xd0, 0x34, 0x28, 0x3d, 0xa3, 0xbe, 0x51, 0xbf, 0xc1, 0x2b,
    0x41, 0x3f, 0xf8, 0xa9, 0xcf, 0xbe, 0xcd, 0x25, 0x81, 0xbe,
    0xb6, 0xca, 0x15, 0xbf, 0x60, 0x95, 0x81, 0xbe, 0x43, 0xc8,
    0x00, 0xc0, 0x2b, 0xd1, 0x88, 0xbe, 0x9b, 0x35, 0xe5, 0x3e,
    0x79, 0x6c, 0x40, 0xbf, 0xab, 0x98, 0xf0, 0xbc, 0x15, 0x62,
    0x6c, 0xbd, 0xec, 0xfa, 0x6a, 0x3e, 0x59, 0xd4, 0x27, 0xbf,
    0xb4, 0x5b, 0xce, 0xbf, 0xa1, 0x88, 0x1c, 0xbf, 0x83, 0x1d,
    0x22, 0xbf, 0xde, 0x75, 0x3d, 0xbf, 0xe1, 0x98, 0x39, 0xbf,
    0xa0, 0x35, 0x81, 0xbf, 0xff, 0x2f, 0x24, 0x3f, 0x9b, 0x30,
    0x2d, 0x3c, 0xec, 0xe3, 0x93, 0xbf, 0xd7, 0xa2, 0xa3, 0xbd,
    0x1f, 0x55, 0x91, 0xbe, 0x45, 0x43, 0x0c, 0xbf, 0x99, 0xe5,
    0xb4, 0xbf, 0x57, 0xd9, 0x7d, 0xbf, 0xfb, 0xd9, 0x17, 0xbd,
    0xb6, 0xcc, 0xaa, 0xbf, 0x25, 0x2a, 0x44, 0x3f, 0xf2, 0x1b,
    0x3f, 0x3d, 0x44, 0x1a, 0xbb, 0x3c, 0x64, 0xdc, 0x35, 0xbf,
    0xf4, 0x6a, 0x23, 0x3e, 0xd4, 0xf8, 0x35, 0xbf, 0x4c, 0xb9,
    0x75, 0xbf, 0xe7, 0x80, 0xaa, 0xbe, 0xd9, 0xe4, 0x39, 0xbf,
    0xfa, 0x56, 0x6b, 0x3d, 0xd5, 0x4b, 0x0f, 0xbe, 0x7e, 0xd9,
    0xb4, 0xbe, 0xb0, 0x02, 0xa7, 0x3c, 0xb9, 0xb1, 0x2d, 0xbf,
    0x61, 0xc5, 0xde, 0xbe, 0x4c, 0xb9, 0x1e, 0xc0, 0x0d, 0xfd,
    0x79, 0xbf, 0xa3, 0x4b, 0xae, 0xbe, 0xcf, 0xf1, 0xbd, 0x3e,
    0x2b, 0x39, 0xd0, 0xbe, 0xda, 0xe5, 0x36, 0x3d, 0xbf, 0x41,
    0xae, 0xbf, 0xd1, 0x27, 0x0e, 0x3f, 0xbc, 0xa1, 0x1a, 0xbe,
    0x7c, 0xfc, 0x82, 0xbf, 0x17, 0x8a, 0x7b, 0xbe, 0x07, 0x7d,
    0x85, 0x3e, 0xc4, 0x30, 0x3a, 0xc0, 0x04, 0xe1, 0x31, 0xbf,
    0xe0, 0xfa, 0x3d, 0xbf, 0x77, 0xd3, 0x03, 0xc0, 0x79, 0xd3,
    0x3c, 0xbd, 0xa3, 0x2f, 0x45, 0xbe, 0x0d, 0x75, 0xae, 0xbe,
    0x1d, 0xdd, 0xbd, 0xbd, 0xcc, 0x53, 0x1b, 0xbe, 0x38, 0x52,
    0x66, 0xbd, 0x6a, 0x56, 0x16, 0xbe, 0x30, 0xec, 0x98, 0x3d,
    0xbf, 0x86, 0x6f, 0xbe, 0x59, 0x8c, 0x90, 0x3c, 0x0f, 0xfd,
    0x48, 0xbe, 0x94, 0x0d, 0x56, 0xbf, 0x7b, 0x77, 0xad, 0x3d,
    0x6f, 0x7a, 0x19, 0x3d, 0xf7, 0xeb, 0x96, 0x3c, 0xd8, 0x9b,
    0x83, 0x3e, 0x9e, 0xea, 0xe4, 0xbf, 0xb7, 0x3b, 0x08, 0xc0,
    0x00, 0x00, 0x00, 0x00, 0x03, 0x47, 0x57, 0x3e, 0x80, 0x12,
    0x7f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x59, 0x72, 0x37, 0xc1,
    0x98, 0x44, 0xde, 0xbf, 0x87, 0x2f, 0xf3, 0xbe, 0x76, 0xb7,
    0xda, 0xbf, 0x97, 0x78, 0xcf, 0xbf, 0x88, 0xfd, 0x72, 0xbd,
    0x87, 0x9f, 0xed, 0xbf, 0x6f, 0x9a, 0x2b, 0xc0, 0xfd, 0xdf,
    0x18, 0xc0, 0x02, 0xa2, 0x85, 0xbf, 0x07, 0xc4, 0x32, 0x3f,
    0x7e, 0x93, 0x40, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xc6,
    0xee, 0xbe, 0x0d, 0x3b, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00,
    0xbe, 0x95, 0x0f, 0x40, 0xb8, 0xb2, 0x54, 0x3f, 0x10, 0xbf,
    0x95, 0xbe, 0xb7, 0x1f, 0x4f, 0x3f, 0x11, 0x28, 0xa3, 0x3f,
    0x20, 0x9e, 0xcf, 0xbe, 0x7a, 0x2f, 0x24, 0x3f, 0x79, 0xa2,
    0x6f, 0x3f, 0x5c, 0x02, 0xb6, 0x3e, 0x60, 0x70, 0x3c, 0xbf,
    0xcf, 0x58, 0x8e, 0x3f, 0xa9, 0x3d, 0xa7, 0x3f, 0x00, 0x00,
    0x00, 0x00, 0x7a, 0x79, 0x57, 0x3e, 0x59, 0xd6, 0xea, 0x3f,
    0x00, 0x00, 0x00, 0x00, 0x34, 0x3a, 0xff, 0x3f, 0x58, 0x90,
    0x2f, 0x3f, 0x8e, 0x50, 0x1e, 0x3f, 0xef, 0xfa, 0x47, 0x3f,
    0x6c, 0xd9, 0x81, 0x3f, 0x10, 0x2c, 0x82, 0xbe, 0x24, 0x90,
    0x4c, 0x3f, 0x0c, 0x44, 0x3e, 0x3f, 0x02, 0x0e, 0xd4, 0xbe,
    0x15, 0x7f, 0x5a, 0xbf, 0x53, 0xdf, 0x41, 0x3f, 0xed, 0x88,
    0x74, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x48, 0xad, 0xb3, 0x3e,
    0xbe, 0x6b, 0xd9, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x13,
    0x55, 0x40, 0x96, 0x4e, 0x96, 0xbe, 0x16, 0x28, 0xa0, 0x3f,
    0x7e, 0xb1, 0x43, 0x3f, 0x2b, 0xb2, 0x8e, 0x3e, 0x9f, 0x83,
    0xe2, 0xbf, 0x89, 0x74, 0xdf, 0x3e, 0xd9, 0xd6, 0x0c, 0x3f,
    0x96, 0x8b, 0x97, 0x3f, 0x63, 0x19, 0x18, 0x40, 0xbb, 0x7f,
    0x47, 0xbf, 0xdf, 0xa8, 0x62, 0xbf, 0x00, 0x00, 0x00, 0x00,
    0x68, 0x47, 0x9c, 0xbe, 0x31, 0x93, 0xc6, 0xbf, 0x00, 0x00,
    0x00, 0x00, 0x0e, 0x83, 0x79, 0x40, 0x6b, 0x6d, 0x03, 0x3f,
    0xb7, 0x14, 0x8d, 0xbf, 0x38, 0x5d, 0x25, 0xbf, 0xe0, 0x6a,
    0x72, 0xbf, 0x0c, 0x47, 0x1f, 0x40, 0x8a, 0x5a, 0xa7, 0xbc,
    0xbe, 0x58, 0xe7, 0x3e, 0x4d, 0xb7, 0xa1, 0x3f, 0xdc, 0x1c,
    0x96, 0x40, 0x0f, 0x1f, 0x10, 0xc0, 0xe6, 0x7e, 0x81,
    0xc0, 0x2a, 0x7a, 0x9e, 0xbe, 0xce, 0x64, 0xf5, 0x3f
  };

  return AI_HANDLE_PTR(s_har_gmp_weights);
}

