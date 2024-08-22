// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ISINVOCATIONRECORDER_H
#define ISINVOCATIONRECORDER_H


#import <Foundation/Foundation.h>


@interface ISInvocationRecorder : NSObject {
    id *_target;
}




-(id)adjustedTargetForSelector:(SEL)arg0 ;
-(id)init;
-(id)initWithTarget:(id)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)dealloc;
-(void)forwardInvocation:(id)arg0 ;
-(void)invokeInvocation:(id)arg0 ;


@end


#endif