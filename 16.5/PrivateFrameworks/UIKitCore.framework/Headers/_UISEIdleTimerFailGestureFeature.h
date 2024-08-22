// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISEIDLETIMERFAILGESTUREFEATURE_H
#define _UISEIDLETIMERFAILGESTUREFEATURE_H

@class UISEGestureFeature;
@protocol _UISEGestureFeatureSettings;



@interface _UISEIdleTimerFailGestureFeature : UISEGestureFeature {
    id<_UISEGestureFeatureSettings> *_settings;
}




-(id)initWithSettings:(id)arg0 ;
-(void)_incorporateSample:(struct _UISEGestureFeatureSample *)arg0 ;


@end


#endif