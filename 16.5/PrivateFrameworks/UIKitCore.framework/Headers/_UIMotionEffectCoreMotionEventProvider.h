// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIMOTIONEFFECTCOREMOTIONEVENTPROVIDER_H
#define _UIMOTIONEFFECTCOREMOTIONEVENTPROVIDER_H

@class UIMotionEffectEventProvider, CMMotionManager, NSOperationQueue;



@interface _UIMotionEffectCoreMotionEventProvider : UIMotionEffectEventProvider {
    CMMotionManager *_motionManager;
    NSOperationQueue *_motionEventQueue;
}




-(BOOL)shouldLogEvents;
-(CGFloat)fastUpdateIntervalForLogs;
-(CGFloat)slowUpdateIntervalForLogs;
-(id)currentEvent;
-(id)init;
-(void)dealloc;
-(void)setSlowUpdatesEnabled:(BOOL)arg0 ;
-(void)startGeneratingEvents;
-(void)stopGeneratingEvents;


@end


#endif