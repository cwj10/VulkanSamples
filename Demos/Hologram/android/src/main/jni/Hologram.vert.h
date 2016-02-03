#include <stdint.h>

#if 0
/usr/local/google/home/olv/khronos/VulkanSamplesKit/demos/Hologram/Hologram.vert
Warning, version 310 is not yet complete; most version-specific features are present, but some are missing.


Linked vertex stage:


// Module Version 10000
// Generated by (magic number): 80001
// Id's are bound by 39

                              Capability Shader
               1:             ExtInstImport  "GLSL.std.450"
                              MemoryModel Logical GLSL450
                              EntryPoint Vertex 4  "main" 21 31 35 37
                              Source ESSL 310
                              Name 4  "main"
                              Name 9  "pos"
                              Name 11  "transformation"
                              MemberName 11(transformation) 0  "mvp"
                              Name 13  "matrices"
                              Name 21  "in_pos"
                              Name 29  "gl_PerVertex"
                              MemberName 29(gl_PerVertex) 0  "gl_Position"
                              MemberName 29(gl_PerVertex) 1  "gl_PointSize"
                              Name 31  ""
                              Name 35  "color"
                              Name 37  "in_color"
                              MemberDecorate 11(transformation) 0 ColMajor
                              MemberDecorate 11(transformation) 0 Offset 0
                              MemberDecorate 11(transformation) 0 MatrixStride 16
                              Decorate 11(transformation) BufferBlock
                              Decorate 13(matrices) DescriptorSet 0
                              Decorate 13(matrices) Binding 0
                              Decorate 21(in_pos) Location 0
                              MemberDecorate 29(gl_PerVertex) 0 BuiltIn Position
                              MemberDecorate 29(gl_PerVertex) 1 BuiltIn PointSize
                              Decorate 29(gl_PerVertex) Block
                              Decorate 37(in_color) Location 1
               2:             TypeVoid
               3:             TypeFunction 2
               6:             TypeFloat 32
               7:             TypeVector 6(float) 4
               8:             TypePointer Function 7(fvec4)
              10:             TypeMatrix 7(fvec4) 4
11(transformation):             TypeStruct 10
              12:             TypePointer Uniform 11(transformation)
    13(matrices):     12(ptr) Variable Uniform
              14:             TypeInt 32 1
              15:     14(int) Constant 0
              16:             TypePointer Uniform 10
              19:             TypeVector 6(float) 3
              20:             TypePointer Input 19(fvec3)
      21(in_pos):     20(ptr) Variable Input
              23:    6(float) Constant 1065353216
29(gl_PerVertex):             TypeStruct 7(fvec4) 6(float)
              30:             TypePointer Output 29(gl_PerVertex)
              31:     30(ptr) Variable Output
              33:             TypePointer Output 7(fvec4)
       35(color):     33(ptr) Variable Output
              36:             TypePointer Input 7(fvec4)
    37(in_color):     36(ptr) Variable Input
         4(main):           2 Function None 3
               5:             Label
          9(pos):      8(ptr) Variable Function
              17:     16(ptr) AccessChain 13(matrices) 15
              18:          10 Load 17
              22:   19(fvec3) Load 21(in_pos)
              24:    6(float) CompositeExtract 22 0
              25:    6(float) CompositeExtract 22 1
              26:    6(float) CompositeExtract 22 2
              27:    7(fvec4) CompositeConstruct 24 25 26 23
              28:    7(fvec4) MatrixTimesVector 18 27
                              Store 9(pos) 28
              32:    7(fvec4) Load 9(pos)
              34:     33(ptr) AccessChain 31 15
                              Store 34 32
              38:    7(fvec4) Load 37(in_color)
                              Store 35(color) 38
                              Return
                              FunctionEnd
#endif

static const uint32_t Hologram_vert[293] = {
    0x07230203, 0x00010000, 0x00080001, 0x00000027,
    0x00000000, 0x00020011, 0x00000001, 0x0006000b,
    0x00000001, 0x4c534c47, 0x6474732e, 0x3035342e,
    0x00000000, 0x0003000e, 0x00000000, 0x00000001,
    0x0009000f, 0x00000000, 0x00000004, 0x6e69616d,
    0x00000000, 0x00000015, 0x0000001f, 0x00000023,
    0x00000025, 0x00030003, 0x00000001, 0x00000136,
    0x00040005, 0x00000004, 0x6e69616d, 0x00000000,
    0x00030005, 0x00000009, 0x00736f70, 0x00060005,
    0x0000000b, 0x6e617274, 0x726f6673, 0x6974616d,
    0x00006e6f, 0x00040006, 0x0000000b, 0x00000000,
    0x0070766d, 0x00050005, 0x0000000d, 0x7274616d,
    0x73656369, 0x00000000, 0x00040005, 0x00000015,
    0x705f6e69, 0x0000736f, 0x00060005, 0x0000001d,
    0x505f6c67, 0x65567265, 0x78657472, 0x00000000,
    0x00060006, 0x0000001d, 0x00000000, 0x505f6c67,
    0x7469736f, 0x006e6f69, 0x00070006, 0x0000001d,
    0x00000001, 0x505f6c67, 0x746e696f, 0x657a6953,
    0x00000000, 0x00030005, 0x0000001f, 0x00000000,
    0x00040005, 0x00000023, 0x6f6c6f63, 0x00000072,
    0x00050005, 0x00000025, 0x635f6e69, 0x726f6c6f,
    0x00000000, 0x00040048, 0x0000000b, 0x00000000,
    0x00000005, 0x00050048, 0x0000000b, 0x00000000,
    0x00000023, 0x00000000, 0x00050048, 0x0000000b,
    0x00000000, 0x00000007, 0x00000010, 0x00030047,
    0x0000000b, 0x00000003, 0x00040047, 0x0000000d,
    0x00000022, 0x00000000, 0x00040047, 0x0000000d,
    0x00000021, 0x00000000, 0x00040047, 0x00000015,
    0x0000001e, 0x00000000, 0x00050048, 0x0000001d,
    0x00000000, 0x0000000b, 0x00000000, 0x00050048,
    0x0000001d, 0x00000001, 0x0000000b, 0x00000001,
    0x00030047, 0x0000001d, 0x00000002, 0x00040047,
    0x00000025, 0x0000001e, 0x00000001, 0x00020013,
    0x00000002, 0x00030021, 0x00000003, 0x00000002,
    0x00030016, 0x00000006, 0x00000020, 0x00040017,
    0x00000007, 0x00000006, 0x00000004, 0x00040020,
    0x00000008, 0x00000007, 0x00000007, 0x00040018,
    0x0000000a, 0x00000007, 0x00000004, 0x0003001e,
    0x0000000b, 0x0000000a, 0x00040020, 0x0000000c,
    0x00000002, 0x0000000b, 0x0004003b, 0x0000000c,
    0x0000000d, 0x00000002, 0x00040015, 0x0000000e,
    0x00000020, 0x00000001, 0x0004002b, 0x0000000e,
    0x0000000f, 0x00000000, 0x00040020, 0x00000010,
    0x00000002, 0x0000000a, 0x00040017, 0x00000013,
    0x00000006, 0x00000003, 0x00040020, 0x00000014,
    0x00000001, 0x00000013, 0x0004003b, 0x00000014,
    0x00000015, 0x00000001, 0x0004002b, 0x00000006,
    0x00000017, 0x3f800000, 0x0004001e, 0x0000001d,
    0x00000007, 0x00000006, 0x00040020, 0x0000001e,
    0x00000003, 0x0000001d, 0x0004003b, 0x0000001e,
    0x0000001f, 0x00000003, 0x00040020, 0x00000021,
    0x00000003, 0x00000007, 0x0004003b, 0x00000021,
    0x00000023, 0x00000003, 0x00040020, 0x00000024,
    0x00000001, 0x00000007, 0x0004003b, 0x00000024,
    0x00000025, 0x00000001, 0x00050036, 0x00000002,
    0x00000004, 0x00000000, 0x00000003, 0x000200f8,
    0x00000005, 0x0004003b, 0x00000008, 0x00000009,
    0x00000007, 0x00050041, 0x00000010, 0x00000011,
    0x0000000d, 0x0000000f, 0x0004003d, 0x0000000a,
    0x00000012, 0x00000011, 0x0004003d, 0x00000013,
    0x00000016, 0x00000015, 0x00050051, 0x00000006,
    0x00000018, 0x00000016, 0x00000000, 0x00050051,
    0x00000006, 0x00000019, 0x00000016, 0x00000001,
    0x00050051, 0x00000006, 0x0000001a, 0x00000016,
    0x00000002, 0x00070050, 0x00000007, 0x0000001b,
    0x00000018, 0x00000019, 0x0000001a, 0x00000017,
    0x00050091, 0x00000007, 0x0000001c, 0x00000012,
    0x0000001b, 0x0003003e, 0x00000009, 0x0000001c,
    0x0004003d, 0x00000007, 0x00000020, 0x00000009,
    0x00050041, 0x00000021, 0x00000022, 0x0000001f,
    0x0000000f, 0x0003003e, 0x00000022, 0x00000020,
    0x0004003d, 0x00000007, 0x00000026, 0x00000025,
    0x0003003e, 0x00000023, 0x00000026, 0x000100fd,
    0x00010038,
};