// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UNSNOTIFICATIONSERVICEEXTENSION_H
#define UNSNOTIFICATIONSERVICEEXTENSION_H

@class NSExtension, LSPlugInKitProxy;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface UNSNotificationServiceExtension : NSObject {
    NSExtension *_extension;
    CGFloat _serviceTime;
    CGFloat _graceTime;
}


@property (readonly, nonatomic) LSPlugInKitProxy *proxy;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) CGFloat serviceTime;


+(BOOL)isAccessToNotificationCenterAllowedForServiceExtensionWithIdentifier:(id)arg0 ;
+(id)_extensionIdentifiersCurrentlyAllowedAccessToNotificationCenter;
+(id)_extensionIdentifiersToPerExtensionQueues;
+(void)_allowAccessToNotificationCenterForServiceExtensionWithIdentifier:(id)arg0 ;
+(void)_disallowAccessToNotificationCenterForServiceExtensionWithIdentifier:(id)arg0 ;
-(id)_initWithExtension:(id)arg0 serviceTime:(CGFloat)arg1 graceTime:(CGFloat)arg2 ;
-(id)mutateContentForNotificationRequest:(id)arg0 error:(*id)arg1 ;


@end


#endif