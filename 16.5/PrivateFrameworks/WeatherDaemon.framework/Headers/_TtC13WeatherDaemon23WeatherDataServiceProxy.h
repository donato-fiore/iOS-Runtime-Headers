// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC13WEATHERDAEMON23WEATHERDATASERVICEPROXY_H
#define _TTC13WEATHERDAEMON23WEATHERDATASERVICEPROXY_H


#import <Foundation/Foundation.h>


@interface _TtC13WeatherDaemon23WeatherDataServiceProxy : NSObject {
    ? endpoint;
    ? caching;
    ? networkMonitor;
    ? authenticator;
    ? appConfigurationSettingsProvider;
    ? $__lazy_storage_$_weatherService;
    ? $__lazy_storage_$_airQualityScaleService;
    ? $__lazy_storage_$_availabilityService;
    ? $__lazy_storage_$_weatherAlertService;
    ? $__lazy_storage_$_dataManager;
    ? weatherDataRequestDeduper;
    ? weatherHistoryRequestDeduper;
    ? weatherInstantsRequestDeduper;
    ? weatherInstantRequestDeduper;
    ? $__lazy_storage_$_session;
}




-(id)init;


@end


#endif