// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NCNOTIFICATIONINLINEFEATUREDSECTIONLIST_H
#define NCNOTIFICATIONINLINEFEATUREDSECTIONLIST_H

@class NSArray, NSMutableDictionary;


#import "NCNotificationStructuredSectionList.h"

@interface NCNotificationInlineFeaturedSectionList : NCNotificationStructuredSectionList {
    NSArray *_featuredNotificationContentProviders;
    NSMutableDictionary *_richContentProviders;
}


@property (retain, nonatomic) NSArray *featuredNotificationContentProviders;


-(BOOL)_shouldHideNotificationGroupList:(id)arg0 ;
-(BOOL)_shouldHideNotificationRequest:(id)arg0 ;
-(BOOL)isRichNotificationContentViewForNotificationGroupList:(id)arg0 ;
-(BOOL)shouldNotificationGroupListPanHorizontally:(id)arg0 ;
-(CGFloat)footerViewHeightForNotificationList:(id)arg0 withWidth:(CGFloat)arg1 ;
-(CGFloat)headerViewHeightForNotificationList:(id)arg0 withWidth:(CGFloat)arg1 ;
-(id)footerViewForNotificationList:(id)arg0 ;
-(id)headerViewForNotificationList:(id)arg0 ;
-(id)notificationGroupList:(id)arg0 requestsContentProviderForNotificationRequest:(id)arg1 ;
-(void)_configureSectionListView:(id)arg0 ;
-(void)notificationListComponent:(id)arg0 requestsExecuteAction:(id)arg1 forNotificationRequest:(id)arg2 requestAuthentication:(BOOL)arg3 withParameters:(id)arg4 completion:(id)arg5 ;
-(void)updateContent;


@end


#endif