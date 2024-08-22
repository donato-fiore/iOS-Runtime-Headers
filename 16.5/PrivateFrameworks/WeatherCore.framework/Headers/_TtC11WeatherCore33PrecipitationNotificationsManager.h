// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC11WEATHERCORE33PRECIPITATIONNOTIFICATIONSMANAGER_H
#define _TTC11WEATHERCORE33PRECIPITATIONNOTIFICATIONSMANAGER_H


#import <Foundation/Foundation.h>


@interface _TtC11WeatherCore33PrecipitationNotificationsManager : NSObject {
    ? weatherDataService;
    ? policyHandler;
    ? notificationContentFactory;
    ? notificationDeliveryScheduler;
    ? notificationFetchScheduler;
    ? notificationSubscriptionManager;
    ? notificationConfigurationProvider;
    ? notificationAuthorizationStatusProvider;
    ? locationManager;
    ? notificationsEnablementTracker;
    ? notificationAccuracyTracker;
    ? operationQueue;
    ? observingCurrentLocation;
}




-(id)init;


@end


#endif