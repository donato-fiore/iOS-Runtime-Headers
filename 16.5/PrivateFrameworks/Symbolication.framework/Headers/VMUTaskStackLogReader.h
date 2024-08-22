// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VMUTASKSTACKLOGREADER_H
#define VMUTASKSTACKLOGREADER_H

@class NSString, NSSet;
@protocol VMUStackLogReader;


#import "VMUStackLogReaderBase.h"
#import "VMUVMRegionTracker.h"
#import "VMUTaskMemoryScanner.h"

@interface VMUTaskStackLogReader : VMUStackLogReaderBase <VMUStackLogReader>

 {
    NSUInteger _msl_payload_version;
}


@property (readonly) BOOL coldestFrameIsNotThreadId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSSet *excludedFrames;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL inspectingLiveProcess;
@property (readonly) BOOL is64bit;
@property (readonly) NSUInteger nodesInUniquingTable;
@property (readonly) VMUVMRegionTracker *regionTracker;
@property (weak, nonatomic) VMUTaskMemoryScanner *scanner; // ivar: _scanner
@property (readonly) Class superclass;
@property (readonly) _CSTypeRef symbolicator;
@property (readonly) unsigned int task;
@property (readonly) BOOL usesLiteMode;


-(NSInteger)getFramesForAddress:(NSUInteger)arg0 size:(NSUInteger)arg1 inLiteZone:(BOOL)arg2 stackFramesBuffer:(*NSUInteger)arg3 ;
-(NSInteger)getFramesForNode:(unsigned int)arg0 inLiteZone:(BOOL)arg1 stackFramesBuffer:(*NSUInteger)arg2 ;
-(NSInteger)getFramesForStackID:(NSUInteger)arg0 stackFramesBuffer:(*NSUInteger)arg1 ;
-(id)initWithTask:(unsigned int)arg0 ;
-(id)initWithTask:(unsigned int)arg0 symbolicator:(struct _CSTypeRef )arg1 ;
-(id)vmuVMRegionForAddress:(NSUInteger)arg0 ;
-(int)enumerateMSLRecordsAndPayloads:(id)arg0 ;
-(struct ? )liteMSLPayloadforMallocAddress:(NSUInteger)arg0 size:(NSUInteger)arg1 ;
-(struct ? )liteMSLPayloadforVMregionAddress:(NSUInteger)arg0 ;
-(void)dealloc;


@end


#endif