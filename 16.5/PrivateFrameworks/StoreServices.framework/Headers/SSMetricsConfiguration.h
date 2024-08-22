// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSMETRICSCONFIGURATION_H
#define SSMETRICSCONFIGURATION_H

@class NSSet, NSDictionary, NSMutableSet, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SSMetricsConfiguration.h"

@interface SSMetricsConfiguration : NSObject {
    NSSet *_blacklistedEvents;
    NSDictionary *_config;
    BOOL _disabled;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableSet *_cookieFieldsUnion;
    NSMutableDictionary *_eventFieldsUnion;
    NSDictionary *_fields;
    int _internalSettingsToken;
    id *_reportingFrequencyOverride;
    BOOL _sendDisabled;
}


@property (retain, nonatomic) SSMetricsConfiguration *childConfiguration; // ivar: _childConfiguration
@property (nonatomic) BOOL disableEventDecoration; // ivar: _disableEventDecoration
@property (readonly, nonatomic) NSDictionary *fieldsMap;


+(id)_reportingFrequencyOverride;
+(void)getReportingFrequencyOverrideWithCompletionBlock:(id)arg0 ;
+(void)setReportingFrequencyOverride:(id)arg0 ;
-(BOOL)_configBooleanForKey:(id)arg0 defaultValue:(BOOL)arg1 ;
-(BOOL)_decorateITMLEvents;
-(BOOL)isDisabled;
-(BOOL)isEventTypeBlacklisted:(id)arg0 ;
-(BOOL)isSendDisabled;
-(CGFloat)reportingFrequency;
-(id)_initSSMetricsEventConfiguration;
-(id)blacklistedEventFields;
-(id)compoundStringWithElements:(id)arg0 ;
-(id)cookieFields;
-(id)eventFields;
-(id)initWithGlobalConfiguration:(id)arg0 ;
-(id)initWithStorePlatformData:(id)arg0 ;
-(id)pingURLs;
-(id)reportingURLString;
-(id)tokenStringWithElements:(id)arg0 ;
-(id)valueForConfigurationKey:(id)arg0 ;
-(void)_setReportingFrequencyOverride:(id)arg0 ;
-(void)dealloc;


@end


#endif