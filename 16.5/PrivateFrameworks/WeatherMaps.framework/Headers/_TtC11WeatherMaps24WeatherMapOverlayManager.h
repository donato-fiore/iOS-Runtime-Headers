// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC11WEATHERMAPS24WEATHERMAPOVERLAYMANAGER_H
#define _TTC11WEATHERMAPS24WEATHERMAPOVERLAYMANAGER_H

@class SwiftObject;



@interface _TtC11WeatherMaps24WeatherMapOverlayManager : SwiftObject {
    ? appConfigurationManager;
    ? colorMapFactory;
    ? dataManager;
    ? metadataManager;
    ? overlayAnimationProvider;
    ? overlayProgressReporter;
    ? renderSettingsProvider;
    ? activeAnimation;
    ? activeOverlayContainer;
    ? overlayRendererFactory;
    ? dataSource;
    ? delegate;
    ? gestureInteractionState;
    ? userInterfaceStyle;
}




-(void)handleInvertColorsStatusDidChangeWithNotification:(id)arg0 ;


@end


#endif