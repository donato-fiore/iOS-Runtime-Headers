// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIVIEWSERVICEFENCINGCONTROLPROXY_H
#define _UIVIEWSERVICEFENCINGCONTROLPROXY_H

@class UIQueueingProxy;



@interface _UIViewServiceFencingControlProxy : UIQueueingProxy



+(id)proxyWithTarget:(id)arg0 exportedProtocol:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)__finishParticipatingInSystemAnimationFence:(id)arg0 ;
-(void)__participateInSystemAnimationFence:(id)arg0 ;
-(void)__participateInSystemAnimationFence:(id)arg0 timing:(struct _UIUpdateTiming )arg1 ;


@end


#endif