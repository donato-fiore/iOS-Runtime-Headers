// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SYLINKABLECONTENTITEMFINDER_H
#define SYLINKABLECONTENTITEMFINDER_H

@class FBSDisplayLayoutMonitor, NSArray;
@protocol OS_dispatch_queue, SYLinkableContentItemFinderDelegate;

#import <Foundation/Foundation.h>


@interface SYLinkableContentItemFinder : NSObject

@property (readonly, nonatomic) FBSDisplayLayoutMonitor *_displayLayoutMonitor; // ivar: __displayLayoutMonitor
@property (copy, nonatomic) NSArray *_foregroundAppBundleIDs; // ivar: __foregroundAppBundleIDs
@property (nonatomic) NSInteger _foregroundAppLoadRetriesRemaining; // ivar: __foregroundAppLoadRetriesRemaining
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_itemFinderQueue; // ivar: __itemFinderQueue
@property (weak) NSObject<SYLinkableContentItemFinderDelegate> *delegate; // ivar: _delegate


-(BOOL)_shouldIncludeAsLinkableUserActivity:(id)arg0 bundleID:(id)arg1 foregroundBundleIDs:(id)arg2 excludedActivities:(id)arg3 ;
-(id)_currentForegroundAppBundleIDs;
-(id)init;
-(void)_activityFetchingFinishedWithActivities:(id)arg0 appBundleIDs:(id)arg1 foregroundBundleIDs:(id)arg2 completion:(id)arg3 ;
-(void)_fetchActiveLinkableUserActivitiesExcluding:(id)arg0 completion:(id)arg1 ;
-(void)_updateForegroundAppsFromDisplayLayout:(id)arg0 ;
-(void)dealloc;
-(void)fetchLinkableContentItemsExcludingActivities:(id)arg0 completion:(id)arg1 ;
-(void)handleRemoteCurrentActivityDidChange;


@end


#endif