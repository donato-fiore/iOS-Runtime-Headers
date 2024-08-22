// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFLINKACTIONPROVIDER_H
#define WFLINKACTIONPROVIDER_H

@class NSDictionary, NSMutableDictionary, LNMetadataProvider, INSystemAppMapper;
@protocol OS_dispatch_queue;


#import "WFActionProvider.h"

@interface WFLinkActionProvider : WFActionProvider

@property (readonly, copy, nonatomic) NSDictionary *actionMetadataByAppIdentifier; // ivar: _actionMetadataByAppIdentifier
@property (readonly, nonatomic) NSMutableDictionary *actionRequestToAppIntentDescriptorMap; // ivar: _actionRequestToAppIntentDescriptorMap
@property (readonly, copy, nonatomic) NSDictionary *entityMetadataByAppIdentifier; // ivar: _entityMetadataByAppIdentifier
@property (readonly, copy, nonatomic) NSDictionary *enumMetadataByAppIdentifier; // ivar: _enumMetadataByAppIdentifier
@property (readonly, nonatomic) LNMetadataProvider *metadataProvider; // ivar: _metadataProvider
@property (nonatomic, getter=isObservingInstalledApplicationsChanges) BOOL observingInstalledApplicationsChanges; // ivar: _observingInstalledApplicationsChanges
@property (readonly, copy, nonatomic) NSDictionary *queryMetadataByAppIdentifier; // ivar: _queryMetadataByAppIdentifier
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) INSystemAppMapper *systemAppMapper; // ivar: _systemAppMapper


+(BOOL)shouldAllowActionWithIdentifier:(id)arg0 ;
+(NSUInteger)allowDenyStateForActionIdentifier:(id)arg0 ;
+(id)denyListedLinkActionIdentifiers;
+(id)sharedProvider;
-(BOOL)isDiscontinuedWithAvailability:(id)arg0 ;
-(BOOL)serializedAppIntentDescriptorIsValid:(id)arg0 ;
-(id)actionMetadataByUpdatingWithEnumAndEntityMetadata:(id)arg0 bundleIdentifier:(id)arg1 ;
-(id)availabilityWithAvailabilityAnnotations:(id)arg0 ;
-(id)availableActionIdentifiers;
-(id)createAllAvailableActions;
-(id)disabledOnPlatformsWithAvailability:(id)arg0 ;
-(id)entityMetadataByAppBundleIdentifier:(id)arg0 entityIdentifier:(id)arg1 ;
-(id)enumMetadataByAppBundleIdentifier:(id)arg0 enumIdentifier:(id)arg1 ;
-(id)initWithMetadataProvider:(id)arg0 ;
-(id)linkActionWithActionRequest:(id)arg0 fullyQualifiedActionIdentifier:(id)arg1 actionMetadataByAppIdentifier:(id)arg2 enumMetadataByAppIdentifier:(id)arg3 entityMetadataByAppIdentifier:(id)arg4 ;
-(id)linkContentItemFilterActionWithActionRequest:(id)arg0 fullyQualifiedActionIdentifier:(id)arg1 enumMetadataByAppIdentifier:(id)arg2 entityMetadataByAppIdentifier:(id)arg3 entityMetadata:(id)arg4 queryMetadata:(id)arg5 ;
-(id)linkCurrentPlatformName;
-(id)resolvedActionIdentifiersForActionRequests:(id)arg0 availableActions:(id)arg1 availableEntities:(id)arg2 allowsActionInDenyList:(BOOL)arg3 ;
-(void)createActionsForRequests:(id)arg0 ;
-(void)createActionsForRequests:(id)arg0 allowsActionInDenyList:(BOOL)arg1 ;
-(void)handleApplicationDidChangeNotification:(id)arg0 ;
-(void)installedApplicationsDidChange:(id)arg0 ;
-(void)observeInstalledApplicationsChangesIfNeeded;
-(void)registerCustomTypesForCoercion:(id)arg0 enumMetadataByAppIdentifier:(id)arg1 entityMetadataByAppIdentifier:(id)arg2 bundleIdentifier:(id)arg3 ;


@end


#endif