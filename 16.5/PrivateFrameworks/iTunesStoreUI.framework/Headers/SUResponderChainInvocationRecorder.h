// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SURESPONDERCHAININVOCATIONRECORDER_H
#define SURESPONDERCHAININVOCATIONRECORDER_H

@class ISInvocationRecorder, Protocol;



@interface SUResponderChainInvocationRecorder : ISInvocationRecorder {
    Protocol *_protocol;
}




-(id)_targetForSelector:(SEL)arg0 sender:(id)arg1 ;
-(id)adjustedTargetForSelector:(SEL)arg0 ;
-(id)initWithTarget:(id)arg0 protocol:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)invokeInvocation:(id)arg0 ;


@end


#endif