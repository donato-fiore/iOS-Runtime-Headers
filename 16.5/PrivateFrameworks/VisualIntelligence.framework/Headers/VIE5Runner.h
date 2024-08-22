// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VIE5RUNNER_H
#define VIE5RUNNER_H

@class NSDictionary, NSURL, NSArray, NSString;

#import <Foundation/Foundation.h>


@interface VIE5Runner : NSObject {
    os_unfair_lock_s _lock;
    NSDictionary *_outputPorts;
    NSDictionary *_inputPorts;
    *e5rt_execution_stream_operation _mainESOP;
    *e5rt_execution_stream _stream;
    BOOL _allocateInputs;
    BOOL _allocateOutputs;
}


@property (readonly, nonatomic) NSDictionary *boundInputs; // ivar: _boundInputs
@property (readonly, nonatomic) NSDictionary *boundOutputs; // ivar: _boundOutputs
@property (readonly, nonatomic) NSURL *bundleURL; // ivar: _bundleURL
@property (readonly, nonatomic) NSArray *inputNames; // ivar: _inputNames
@property (readonly, nonatomic) NSDictionary *inputs; // ivar: _inputs
@property (readonly, nonatomic) NSString *mainFunctionName; // ivar: _mainFunctionName
@property (readonly, nonatomic) NSArray *outputNames; // ivar: _outputNames
@property (readonly, nonatomic) NSDictionary *outputs; // ivar: _outputs


+(int)allocatePort:(struct e5rt_io_port *)arg0 description:(id)arg1 io:(*id)arg2 ;
+(int)getPort:(struct e5rt_io_port *)arg0 description:(*id)arg1 ;
+(int)surfaceTypeE5rtType:(int)arg0 toVIType:(*NSUInteger)arg1 ;
+(int)tensorDTypeE5rtType:(int)arg0 toVIType:(*NSUInteger)arg1 ;
+(void)releasePorts:(id)arg0 descriptions:(id)arg1 boundedIOs:(id)arg2 wasBound:(BOOL)arg3 ;
-(id)executeAndGet:(id)arg0 error:(*id)arg1 ;
-(id)initWithBundleURL:(id)arg0 mainFunctionName:(id)arg1 ;
-(int)execute;
-(int)initNetworks;
-(struct __CVBuffer *)getInputImageBuffer:(id)arg0 ;
-(void)dealloc;
-(void)releaseNetworks;


@end


#endif