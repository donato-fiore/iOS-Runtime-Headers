// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC11WEATHERMAPS23INTERACTIVEREFRESHTIMER_H
#define _TTC11WEATHERMAPS23INTERACTIVEREFRESHTIMER_H

@class SwiftObject;



@interface _TtC11WeatherMaps23InteractiveRefreshTimer : SwiftObject {
    ? isPaused;
    ? interval;
    ? block;
    ? timer;
    ? pausedTimerNextFireDate;
    ? didExperienceSignificantTimeChangeWhilePaused;
}




-(void)notifiedSignificantTimeChange:(id)arg0 ;


@end


#endif