// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NCNOTIFICATIONAPPSECTIONLIST_H
#define NCNOTIFICATIONAPPSECTIONLIST_H

@class MTVisualStylingProvider, NSString, NSMutableArray, NSArray, NSMutableDictionary;
@protocol NCNotificationAppSectionListHeaderViewDelegate, NCNotificationAppSectionListSummarizedContentViewDelegate, MTVisualStylingRequiring;


#import "NCNotificationStructuredSectionList.h"
#import "NCNotificationAppSectionListHeaderView.h"
#import "NCNotificationAppSectionListSummarizedContentView.h"

@interface NCNotificationAppSectionList : NCNotificationStructuredSectionList <NCNotificationAppSectionListHeaderViewDelegate, NCNotificationAppSectionListSummarizedContentViewDelegate, MTVisualStylingRequiring>

 {
    NCNotificationAppSectionListHeaderView *_headerView;
    NCNotificationAppSectionListSummarizedContentView *_footerView;
    MTVisualStylingProvider *_strokeVisualStylingProvider;
    NSString *_preferredContentSizeCategory;
}


@property (nonatomic, getter=isCombinedAppSectionList) BOOL combinedAppSectionList; // ivar: _combinedAppSectionList
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isExpanded) BOOL expanded; // ivar: _expanded
@property (retain, nonatomic) NSMutableArray *featuredGroupLists; // ivar: _featuredGroupLists
@property (retain, nonatomic) NSArray *groupListsForSmartOrdering;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isMerged) BOOL merged; // ivar: _merged
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
@property (retain, nonatomic) NSMutableDictionary *richContentProviders; // ivar: _richContentProviders
@property (copy, nonatomic) NSString *sectionIdentifier; // ivar: _sectionIdentifier
@property (readonly) Class superclass;


-(BOOL)_isViewFeaturedAtIndex:(NSUInteger)arg0 ;
-(BOOL)_shouldFeatureLeadingViews;
-(BOOL)_shouldHideNotificationGroupList:(id)arg0 ;
-(BOOL)_shouldHideNotificationRequest:(id)arg0 ;
-(BOOL)_showSummarizedFooterView;
-(BOOL)adjustForContentSizeCategoryChange;
-(BOOL)isAttachmentImageFeaturedForNotificationGroupList:(id)arg0 ;
-(BOOL)isRichNotificationContentViewForNotificationGroupList:(id)arg0 ;
-(BOOL)isShowingFeaturedLeadingViewsForNotificationListView:(id)arg0 ;
-(BOOL)shouldAllowRestackingForNotificationListPresentableGroup:(id)arg0 ;
-(CGFloat)footerViewHeightForNotificationList:(id)arg0 withWidth:(CGFloat)arg1 ;
-(CGFloat)headerViewHeightForNotificationList:(id)arg0 withWidth:(CGFloat)arg1 ;
-(NSUInteger)_insertionIndexForGroup:(id)arg0 ;
-(NSUInteger)_summarizedCount;
-(NSUInteger)notificationListViewNumberOfItems:(id)arg0 ;
-(id)_attachmentImageViewForSummaryForNotificationRequest:(id)arg0 ;
-(id)_extractFeaturedNotificationRequestsFromGroupLists:(id)arg0 ;
-(id)_newAttachmentImageViewForImage:(id)arg0 ;
-(id)_newGroupListForNotificationRequest:(id)arg0 ;
-(id)_nonFeaturedGroupLists;
-(id)_notificationGroupsForInsertion;
-(id)_summarizedAttachmentImageViews;
-(id)_summarizedContentStrings;
-(id)_summarizedStringsForNotificationRequest:(id)arg0 ;
-(id)backgroundGroupNameBaseForAppSectionListSummarizedContentView:(id)arg0 ;
-(id)footerViewForNotificationList:(id)arg0 ;
-(id)headerViewForNotificationList:(id)arg0 ;
-(id)initWithTitle:(id)arg0 sectionType:(NSUInteger)arg1 ;
-(id)notificationGroupList:(id)arg0 requestsContentProviderForNotificationRequest:(id)arg1 ;
-(id)preferredContentSizeCategory;
-(void)_clearContentProviderForRequest:(id)arg0 ;
-(void)_configureFooterViewIfNecessary;
-(void)_configureHeaderViewIfNecessary;
-(void)_configureSectionListView:(id)arg0 ;
-(void)_mergeFeaturedGroupLists;
-(void)_removeFeaturedGroupListIfNecessary:(id)arg0 ;
-(void)_updateFeaturedGroupListsForFeaturedNotificationRequests:(id)arg0 ;
-(void)_updateSummarizedFooterViewContent;
-(void)appSectionListHeaderView:(id)arg0 didRequestPresentingOptionsMenuFromView:(id)arg1 ;
-(void)appSectionListSummarizedContentViewDidRecognizeTapGesture:(id)arg0 ;
-(void)clearAll;
-(void)insertNotificationRequest:(id)arg0 ;
-(void)modifyNotificationRequest:(id)arg0 ;
-(void)notificationListBaseComponentDidRemoveAll:(id)arg0 ;
-(void)notificationListComponent:(id)arg0 didRemoveNotificationRequest:(id)arg1 ;
-(void)notificationListPresentableGroup:(id)arg0 didReceivedHorizontalTranslation:(CGFloat)arg1 ;
-(void)removeNotificationRequest:(id)arg0 ;
-(void)setDeviceAuthenticated:(BOOL)arg0 ;
-(void)setPreferredContentSizeCategory:(id)arg0 ;
-(void)setVisualStylingProvider:(id)arg0 forCategory:(NSInteger)arg1 ;
-(void)unmergeNotificationGroupListsIfNecessary;


@end


#endif