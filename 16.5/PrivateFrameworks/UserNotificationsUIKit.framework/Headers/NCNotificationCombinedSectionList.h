// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NCNOTIFICATIONCOMBINEDSECTIONLIST_H
#define NCNOTIFICATIONCOMBINEDSECTIONLIST_H

@class NSMutableArray;


#import "NCNotificationStructuredSectionList.h"

@interface NCNotificationCombinedSectionList : NCNotificationStructuredSectionList {
    BOOL _adjustsFontForContentSizeCategory;
}


@property (retain, nonatomic) NSMutableArray *chronologicalSectionLists; // ivar: _chronologicalSectionLists
@property (retain, nonatomic) NSMutableArray *sectionLists; // ivar: _sectionLists


-(BOOL)adjustForContentSizeCategoryChange;
-(BOOL)adjustsFontForContentSizeCategory;
-(BOOL)containsNotificationRequest:(id)arg0 ;
-(BOOL)containsSectionList:(id)arg0 ;
-(BOOL)hasVisibleContentToReveal;
-(CGFloat)notificationListView:(id)arg0 heightForItemAtIndex:(NSUInteger)arg1 withWidth:(CGFloat)arg2 ;
-(NSUInteger)count;
-(NSUInteger)indexOfSectionList:(id)arg0 ;
-(NSUInteger)notificationCount;
-(id)_allSectionLists;
-(id)allNotificationRequests;
-(id)initWithTitle:(id)arg0 sectionType:(NSUInteger)arg1 ;
-(id)notificationListView:(id)arg0 viewForItemAtIndex:(NSUInteger)arg1 ;
-(id)orderedNotificationListComponents;
-(id)sectionListAtIndex:(NSUInteger)arg0 ;
-(void)_invalidateSectionListViewForChronologicalSectionsIfNecessary;
-(void)_performOperationOnAllSectionLists:(id)arg0 ;
-(void)adjustForLegibilitySettingsChange:(id)arg0 ;
-(void)clearAll;
-(void)collapseGroupForNotificationRequest:(id)arg0 withCompletion:(id)arg1 ;
-(void)expandGroupForNotificationRequest:(id)arg0 withCompletion:(id)arg1 ;
-(void)insertNotificationSectionList:(id)arg0 atIndex:(NSUInteger)arg1 animated:(BOOL)arg2 ;
-(void)insertNotificationSectionListChronologically:(id)arg0 animated:(BOOL)arg1 ;
-(void)mergeNotificationGroups:(id)arg0 reorderGroupNotifications:(BOOL)arg1 ;
-(void)notificationListBaseComponentDidRemoveAll:(id)arg0 ;
-(void)notificationListComponent:(id)arg0 didRemoveNotificationRequest:(id)arg1 ;
-(void)notificationsLoadedForSectionIdentifier:(id)arg0 ;
-(void)reloadNotificationRequest:(id)arg0 ;
-(void)removeNotificationSectionList:(id)arg0 animated:(BOOL)arg1 ;
-(void)setAdjustsFontForContentSizeCategory:(BOOL)arg0 ;
-(void)setDeviceAuthenticated:(BOOL)arg0 ;
-(void)sortNotificationGroupListsIfNecessary;
-(void)toggleFilteringForSectionIdentifier:(id)arg0 shouldFilter:(BOOL)arg1 ;
-(void)updateNotificationSectionSettings:(id)arg0 previousSectionSettings:(id)arg1 ;


@end


#endif