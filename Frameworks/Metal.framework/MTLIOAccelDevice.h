/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLIOAccelDevice : _MTLDevice {
    unsigned int _accelID;
    unsigned int _acceleratorPort;
    MTLResourceListPool *_akPrivateResourceListPool;
    MTLResourceListPool *_akResourceListPool;
    struct MTLIOAccelHeap { 
        MTLIOAccelBuffer *buffers[64]; 
        struct MTLRangeAllocator { 
            struct MTLRangeAllocatorElement {} *elements; 
            unsigned int numElements; 
            unsigned int capacity; 
            unsigned int capacityIncrement; 
            unsigned int defaultAlignmentMask; 
        } allocators[64]; 
        unsigned int count; 
    } _bufferHeaps;
    struct MTLIOAccelCommandBufferStoragePool { struct storageQueue { struct MTLIOAccelCommandBufferStorage {} *x_1_1_1; struct MTLIOAccelCommandBufferStorage {} **x_1_1_2; } x1; int x2; int x3; int x4; id x5; /* Warning: Unrecognized filer type: '' using 'void*' */ void*x6; void*x7; void*x8; void*x9; void*x10; void*x11; void*x12; void*x13; void*x14; void*x15; void*x16; void*x17; void*x18; void*x19; void*x20; void*x21; void*x22; void*x23; void*x24; void*x25; void*x26; void*x27; void*x28; void*x29; void*x30; void*x31; void*x32; void*x33; void*x34; void*x35; void*x36; void*x37; void*x38; void*x39; void*x40; void*x41; void*x42; void*x43; void*x44; void*x45; void*x46; void*x47; void*x48; void*x49; void*x50; void*x51; void*x52; void*x53; void*x54; void*x55; void*x56; void*x57; unsigned short x58; bool x59; void*x60; unsigned int x61; const int x62; short x63; void*x64; void*x65; long x66; long x67; void*x68; void*x69; void*x70; void*x71; const oneway int x72; void*x73; void*x74; void*x75; void*x76; void*x77; void x78; void*x79; short x80; void*x81; void*x82; void*x83; double x84; void*x85; void*x86; void*x87; void*x88; void*x89; void*x90; void*x91; unsigned char x92; void*x93; void*x94; void*x95; void*x96; void*x97; out void*x98; int x99; void*x100; in void*x101; void*x102; void*x103; void*x104; void*x105; struct x106; void*x107; void*x108; void*x109; float x110; void*x111; long x112; void*x113; out void*x114; void*x115; void*x116; void*x117; void*x118; void*x119; void*x120; void*x121; void*x122; void*x123; void*x124; void*x125; void*x126; void*x127; void*x128; void*x129; void*x130; void*x131; void*x132; void*x133; void*x134; void*x135; void*x136; void*x137; void*x138; float x139; void*x140; long x141; void*x142; out void*x143; void*x144; void*x145; void*x146; void*x147; void*x148; void*x149; void*x150; void*x151; void*x152; void*x153; void*x154; void*x155; void*x156; void*x157; void*x158; void*x159; void*x160; void*x161; void*x162; void*x163; void*x164; void*x165; void*x166; void*x167; } *_commandBufferStoragePool;
    unsigned int _configBits;
    unsigned int _deviceBits;
    struct __IOAccelDevice { } *_deviceRef;
    NSObject<OS_dispatch_queue> *_device_dispatch_queue;
    unsigned int _hwResourcePoolCount;
    id *_hwResourcePools;
    MTLIOAccelDeviceShmemPool *_kernelCommandShmemPool;
    int _numCommandBuffers;
    unsigned long long _segmentByteThreshold;
    MTLIOAccelDeviceShmemPool *_segmentListShmemPool;
    struct __IOAccelShared { } *_sharedRef;
    unsigned long long _textureRam;
    unsigned long long _videoRam;
}

@property (readonly) unsigned int acceleratorPort;
@property (readonly) unsigned int hwResourcePoolCount;
@property (readonly) id*hwResourcePools;
@property (readonly) int numCommandBuffers;

+ (void)registerDevices;

- (void)_purgeDevice;
- (unsigned int)acceleratorPort;
- (id)akPrivateResourceListPool;
- (id)akResourceListPool;
- (id)allocBufferSubDataWithLength:(unsigned int)arg1 options:(unsigned int)arg2 alignment:(int)arg3 heapIndex:(short*)arg4 bufferIndex:(short*)arg5 bufferOffset:(int*)arg6;
- (void)dealloc;
- (void)deallocBufferSubData:(id)arg1 heapIndex:(short)arg2 bufferIndex:(short)arg3 bufferOffset:(int)arg4 length:(int)arg5;
- (struct __IOAccelDevice { }*)deviceRef;
- (short)heapIndexWithOptions:(unsigned int)arg1;
- (unsigned int)hwResourcePoolCount;
- (id*)hwResourcePools;
- (id)initWithAcceleratorPort:(unsigned int)arg1;
- (unsigned int)initialKernelCommandShmemSize;
- (unsigned int)initialSegmentListShmemSize;
- (int)numCommandBuffers;
- (void)setComputePipelineStateCommandShmemSize:(unsigned int)arg1;
- (void)setHwResourcePool:(id*)arg1 count:(int)arg2;
- (void)setSegmentListShmemSize:(unsigned int)arg1;
- (struct __IOAccelShared { }*)sharedRef;

@end