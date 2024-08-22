// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UNSAUTHORIZATIONALERTCONTROLLER_H
#define UNSAUTHORIZATIONALERTCONTROLLER_H

@class NSMutableSet, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface UNSAuthorizationAlertController : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_bundleIdentifersForActiveAlerts;
    NSMutableDictionary *_bundleIdentifiersToResultBlocks;
}




-(BOOL)_queue_isAlertActiveForBundleIdentifier:(id)arg0 ;
-(id)initWithQueue:(id)arg0 ;
-(void)_presentAuthorizationAlertForBundleIdentifier:(id)arg0 displayName:(id)arg1 usageDescription:(id)arg2 withResult:(id)arg3 ;
-(void)_queue_addAlertActiveForBundleIdentifier:(id)arg0 ;
// -(void)_queue_addResultBlock:(id)arg0 forBundleIdentifier:(unk)arg1  ;
-(void)_queue_removeAlertActiveForBundleIdentifier:(id)arg0 ;
-(void)_queue_sendResponse:(NSInteger)arg0 forBundleIdentifier:(id)arg1 ;
-(void)presentAuthorizationAlertForBundleIdentifier:(id)arg0 displayName:(id)arg1 usageDescription:(id)arg2 withResult:(id)arg3 ;
-(void)requestAuthorizationForBundleIdentifier:(id)arg0 displayName:(id)arg1 usageDescription:(id)arg2 withResult:(id)arg3 ;


@end


#endif