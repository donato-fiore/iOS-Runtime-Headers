// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NCNOTIFICATIONLISTCACHE_H
#define NCNOTIFICATIONLISTCACHE_H

@class NSMutableDictionary, NSString, NSMutableSet;
@protocol PLContentSizeCategoryAdjusting, NCNotificationListCacheDelegate;

#import <Foundation/Foundation.h>


@interface NCNotificationListCache : NSObject <PLContentSizeCategoryAdjusting>



@property (readonly, nonatomic) NSUInteger activeNotificationCellCount;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory; // ivar: _adjustsFontForContentSizeCategory
@property (retain, nonatomic) NSMutableDictionary *contentHiddenCellHeightCache; // ivar: _contentHiddenCellHeightCache
@property (retain, nonatomic) NSMutableDictionary *contentRevealedCellHeightCache; // ivar: _contentRevealedCellHeightCache
@property (readonly, nonatomic) NSUInteger currentCacheSizeCount;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NCNotificationListCacheDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableSet *notificationListCellCache; // ivar: _notificationListCellCache
@property (retain, nonatomic) NSMutableDictionary *notificationListCellsForRequests; // ivar: _notificationListCellsForRequests
@property (retain, nonatomic) NSMutableSet *notificationListCoalescingControlsCache; // ivar: _notificationListCoalescingControlsCache
@property (retain, nonatomic) NSMutableSet *notificationListCoalescingHeaderCache; // ivar: _notificationListCoalescingHeaderCache
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (readonly) Class superclass;


-(BOOL)adjustForContentSizeCategoryChange;
-(BOOL)invalidateCachedHeightIfNecessaryForNotificationRequest:(id)arg0 updatedHeight:(CGFloat)arg1 isContentRevealed:(BOOL)arg2 ;
-(BOOL)recycleNotificationListCell:(id)arg0 ;
-(CGFloat)heightForNotificationRequest:(id)arg0 withFrameWidth:(CGFloat)arg1 isContentRevealed:(BOOL)arg2 shouldCalculateHeight:(BOOL)arg3 ;
-(id)_cachedHeaderCellWithTitle:(id)arg0 ;
-(id)_cachedNotificationListCellForRequest:(id)arg0 viewControllerDelegate:(id)arg1 shouldConfigure:(BOOL)arg2 ;
-(id)_cachedRequestMatchingRequest:(id)arg0 ;
-(id)_newCellForNotificationRequest:(id)arg0 viewControllerDelegate:(id)arg1 ;
-(id)coalescingControlsCellWithWidth:(CGFloat)arg0 ;
-(id)coalescingHeaderCellWithTitle:(id)arg0 clearAllText:(id)arg1 width:(CGFloat)arg2 ;
-(id)init;
-(id)listCellForNotificationRequest:(id)arg0 viewControllerDelegate:(id)arg1 createNewIfNecessary:(BOOL)arg2 shouldConfigure:(BOOL)arg3 ;
-(void)_clearAllHeightCaches;
-(void)clearCacheForNotificationRequest:(id)arg0 ;
-(void)clearCachedHeightsForNotificationRequest:(id)arg0 ;
-(void)recycleNotificationListCoalescingControlsCell:(id)arg0 ;
-(void)recycleNotificationListCoalescingHeaderCell:(id)arg0 ;
-(void)removeNotificationRequest:(id)arg0 ;
-(void)updateNotificationRequest:(id)arg0 ;


@end


#endif