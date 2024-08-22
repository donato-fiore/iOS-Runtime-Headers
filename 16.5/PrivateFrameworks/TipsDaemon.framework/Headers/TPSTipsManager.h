// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPSTIPSMANAGER_H
#define TPSTIPSMANAGER_H

@class NSArray, NSDictionary, NSString, TPSExperiment, NSBundle, TPSMetadata, NSMutableArray, TPSTipStatusController, TPSWidgetController;
@protocol TPSWidgetControllerDelegate, TPSOfflineContentManagerDelegate, TPSTipsManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TPSNotificationController.h"
#import "TPSOfflineContentManager.h"
#import "TPSWelcomeInformation.h"

@interface TPSTipsManager : NSObject <TPSWidgetControllerDelegate, TPSOfflineContentManagerDelegate>



@property (retain, nonatomic) NSArray *collections; // ivar: _collections
@property (retain, nonatomic) NSDictionary *collectionsMap; // ivar: _collectionsMap
@property (nonatomic) BOOL contextualTipsInactive; // ivar: _contextualTipsInactive
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TPSTipsManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) TPSExperiment *experiment; // ivar: _experiment
@property (retain, nonatomic) NSBundle *frameworkBundle; // ivar: _frameworkBundle
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) TPSMetadata *metadata; // ivar: _metadata
@property (retain, nonatomic) TPSNotificationController *notificationController; // ivar: _notificationController
@property (retain, nonatomic) TPSOfflineContentManager *offlineContentManager; // ivar: _offlineContentManager
@property (copy, nonatomic) NSString *rulesVersion; // ivar: _rulesVersion
@property (retain, nonatomic) NSMutableArray *sessionItems; // ivar: _sessionItems
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // ivar: _syncQueue
@property (retain, nonatomic) TPSTipStatusController *tipStatusController; // ivar: _tipStatusController
@property (retain, nonatomic) NSArray *tips; // ivar: _tips
@property (retain, nonatomic) NSDictionary *tipsMap; // ivar: _tipsMap
@property (retain, nonatomic) TPSWelcomeInformation *welcomeInformation; // ivar: _welcomeInformation
@property (retain, nonatomic) TPSWidgetController *widgetController; // ivar: _widgetController


+(BOOL)eligibleForHardwareWelcomeNotification;
+(BOOL)needImmediateNotificationForType:(NSUInteger)arg0 ;
+(BOOL)supportsFeaturedCollection;
+(id)immediateNotificationIdentifierForType:(NSUInteger)arg0 ;
+(void)removeExperimentCache;
+(void)removeWelcomeDocumentCache;
+(void)removeWidgetUpdateDate;
-(BOOL)hasWidgetDocument;
-(BOOL)isContentIdentifierHoldoutCamp:(id)arg0 ;
-(BOOL)isPreconditionValidForIdentifier:(id)arg0 preconditionDictionary:(id)arg1 ;
-(BOOL)shouldPerformWidgetUpdate;
-(BOOL)widgetController:(id)arg0 validForDocument:(id)arg1 documentDeliveryInfoMap:(id)arg2 deliveryInfoMap:(id)arg3 ;
-(id)collectionSectionMapWithCollections:(id)arg0 availableCollectionSections:(id)arg1 collectionIdToCollectionLabelMap:(id)arg2 ;
-(id)collectionSectionsFromCollectionMap:(id)arg0 exclude:(id)arg1 ;
-(id)collectionSectionsWithEligibleCollectionSections:(id)arg0 collectionSectionMap:(id)arg1 featuredCollection:(id)arg2 ;
-(id)collectionStatusForCollection:(id)arg0 ;
-(id)featureCollectionFromCollectionMap:(id)arg0 collectionOrder:(id)arg1 ;
-(id)initWithTipStatusController:(id)arg0 ;
-(id)offlineContentForidentifier:(id)arg0 ;
-(id)processSavedTips:(id)arg0 ;
-(id)welcomeCollectionName;
-(id)welcomeDocumentFromContentPackage:(id)arg0 ;
-(void)_updateExperimentCache;
-(void)_updatePauseStatus:(BOOL)arg0 ;
-(void)contentForVariantIdentifiers:(id)arg0 completionHandler:(id)arg1 ;
// -(void)contentFromOrigin:(BOOL)arg0 contextualEligibility:(BOOL)arg1 widgetEligibility:(BOOL)arg2 notificationEligibility:(BOOL)arg3 preferredNotificationIdentifiers:(id)arg4 shouldDeferBlock:(id)arg5 completionHandler:(unk)arg6  ;
-(void)contentWithMetaDictionary:(id)arg0 documents:(id)arg1 isRemote:(BOOL)arg2 processOfflineContent:(BOOL)arg3 contextualEligibility:(BOOL)arg4 widgetEligibility:(BOOL)arg5 notificationEligibility:(BOOL)arg6 preferredNotificationIdentifiers:(id)arg7 completionHandler:(id)arg8 ;
-(void)finalEligibleContentWithCollections:(id)arg0 collectionsMap:(id)arg1 collectionDeliveryInfoMap:(id)arg2 eligibleTipIdentifiers:(id)arg3 eligibleContextualTipIdentifiers:(id)arg4 allFullTipsMap:(id)arg5 allMiniTipsMap:(id)arg6 tipDeliveryInfoMap:(id)arg7 deliveryInfoMap:(id)arg8 completionHandler:(id)arg9 ;
-(void)offlineContentManager:(id)arg0 metaDictionary:(id)arg1 documentsDictionary:(id)arg2 ;
-(void)processClientConditions:(id)arg0 targetingCache:(id)arg1 completionHandler:(id)arg2 ;
-(void)processCollection:(id)arg0 collectionsMap:(id)arg1 ignoreSection:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)processTipDocumentsDictionary:(id)arg0 completionHandler:(id)arg1 ;
-(void)processTips:(id)arg0 deliveryInfoMap:(id)arg1 targetingCache:(id)arg2 completionHandler:(id)arg3 ;
-(void)removeOfflineContentForIdentifier:(id)arg0 ;
-(void)updateContentIfOverrideImmediately:(BOOL)arg0 ;
-(void)updateDocumentContent:(id)arg0 withClientConditions:(id)arg1 usingDictionary:(id)arg2 ;
-(void)updateOfflineContent;
-(void)updateSupplementalIdentifiersForIdentifier:(id)arg0 fromDictionary:(id)arg1 ;


@end


#endif