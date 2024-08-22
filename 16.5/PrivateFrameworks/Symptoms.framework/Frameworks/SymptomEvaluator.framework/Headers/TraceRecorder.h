// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRACERECORDER_H
#define TRACERECORDER_H

@class NSString;
@protocol ApparentTimeHandlerDelegate, ConfigurableObjectProtocol;

#import <Foundation/Foundation.h>


@interface TraceRecorder : NSObject <ApparentTimeHandlerDelegate, ConfigurableObjectProtocol>

 {
    NSString *_traceFileRootName;
    int _traceFD;
    BOOL _traceFileActive;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *traceFileRootName;
@property (nonatomic) NSUInteger traceTargets;


+(id)configureClass:(id)arg0 ;
+(id)sharedInstance;
-(id)_jsonForAWDReport:(id)arg0 ;
-(id)_jsonForName:(id)arg0 objectString:(id)arg1 ;
-(id)_jsonForNumber:(NSInteger)arg0 ;
-(id)_jsonForObject:(id)arg0 ;
-(id)_parseFormat:(char *)arg0 args:(char *)arg1 ;
-(int)configureInstance:(id)arg0 ;
-(void)assessStartStop;
-(void)setTimerCallbackWithDelay:(CGFloat)arg0 queue:(id)arg1 reference:(id)arg2 ;
-(void)startRecording;
-(void)stopRecording;
-(void)vTraceTarget:(int)arg0 signature:(char *)arg1 callout:(char *)arg2 item:(char *)arg3 fmt:(char *)arg4 params:(char *)arg5 ;


@end


#endif