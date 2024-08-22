// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFINTENTACTIONPROVIDER_H
#define WFINTENTACTIONPROVIDER_H

@class NSDictionary;
@protocol OS_dispatch_queue;


#import "WFActionProvider.h"

@interface WFIntentActionProvider : WFActionProvider

@property (copy) NSDictionary *cachedSchemasByBundleIdentifier; // ivar: _cachedSchemasByBundleIdentifier
@property (nonatomic, getter=isObservingInstalledApplicationsChanges) BOOL observingInstalledApplicationsChanges; // ivar: _observingInstalledApplicationsChanges
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(id)disabledPlatformsForIntentWithTypeName:(id)arg0 ;
+(void)initialize;
-(BOOL)shouldCreateActionForIntentClassName:(id)arg0 actionIdentifier:(id)arg1 bundleIdentifier:(id)arg2 inSchema:(id)arg3 ;
-(id)actionIdentifiersForBundleIdentifier:(id)arg0 schema:(id)arg1 ;
-(id)availableActionIdentifiers;
-(id)createAllAvailableActions;
-(id)init;
-(id)schemaForBundleIdentifier:(id)arg0 ignoreCache:(BOOL)arg1 ;
-(id)schemasByBundleIdentifier;
-(void)createActionsForRequests:(id)arg0 ;
-(void)handleApplicationDidChangeNotification:(id)arg0 ;
-(void)installedApplicationsDidChange:(id)arg0 ;
-(void)observeInstalledApplicationsChangesIfNeeded;


@end


#endif