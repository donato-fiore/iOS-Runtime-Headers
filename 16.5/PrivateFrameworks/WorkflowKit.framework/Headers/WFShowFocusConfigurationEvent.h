// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSHOWFOCUSCONFIGURATIONEVENT_H
#define WFSHOWFOCUSCONFIGURATIONEVENT_H

@class NSString;


#import "WFEvent.h"

@interface WFShowFocusConfigurationEvent : WFEvent

@property (copy, nonatomic) NSString *appBundleIdentifier; // ivar: _appBundleIdentifier
@property (copy, nonatomic) NSString *intentType; // ivar: _intentType
@property (copy, nonatomic) NSString *key; // ivar: _key
@property (copy, nonatomic) NSString *systemFilterType; // ivar: _systemFilterType


+(Class)codableEventClass;
-(id)initWithAppBundleIdentifier:(id)arg0 intentType:(id)arg1 ;
-(id)initWithSystemFilterType:(id)arg0 ;


@end


#endif