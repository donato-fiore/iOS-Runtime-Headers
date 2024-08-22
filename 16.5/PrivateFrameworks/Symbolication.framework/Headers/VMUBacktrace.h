// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VMUBACKTRACE_H
#define VMUBACKTRACE_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface VMUBacktrace : NSObject <NSCopying, NSSecureCoding>

 {
    int _flavor;
    ? _callstack;
    ? _asyncCallstack;
}


@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
-(*NSUInteger)asyncBacktrace;
-(*NSUInteger)backtrace;
-(*NSUInteger)stackFramePointers;
-(NSUInteger)dispatchQueueSerialNumber;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSamplingContext:(struct sampling_context_t *)arg0 thread:(unsigned int)arg1 recordFramePointers:(BOOL)arg2 ;
-(int)threadState;
-(struct _CSTypeRef )_symbolicator;
-(unsigned int)asyncBacktraceLength;
-(unsigned int)backtraceLength;
-(unsigned int)thread;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)fixupStackWithSamplingContext:(struct sampling_context_t *)arg0 symbolicator:(struct _CSTypeRef )arg1 ;
-(void)setThreadState:(int)arg0 ;


@end


#endif