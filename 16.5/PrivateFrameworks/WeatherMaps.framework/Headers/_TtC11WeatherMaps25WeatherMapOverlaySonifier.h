// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC11WEATHERMAPS25WEATHERMAPOVERLAYSONIFIER_H
#define _TTC11WEATHERMAPS25WEATHERMAPOVERLAYSONIFIER_H

@class SwiftObject;



@interface _TtC11WeatherMaps25WeatherMapOverlaySonifier : SwiftObject {
    ? $defaultActor;
    ? gestureRecognizer;
    ? gestureRequiresOptionKey;
    ? isEnabled;
    ? selectedDate;
    ? frameIndex;
    ? delegate;
    ? valueSpace;
    ? frames;
    ? gestureStart;
    ? $__lazy_storage_$_disableMapOverlaySonification;
    ? geocodeManager;
    ? locationMetadataManager;
    ? appConfigurationManager;
    ? overlayDataState;
    ? liveModeState;
    ? hoverState;
    ? hoverJitterThreshold;
    ? hoverInterval;
    ? isTrackingGesture;
}




-(void)handleGestureWithRecognizer:(id)arg0 ;
-(void)hoverTimerFiredWithTimer:(id)arg0 ;


@end


#endif