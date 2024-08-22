// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NCNOTIFICATIONREQUESTCONTENTPROVIDER_H
#define NCNOTIFICATIONREQUESTCONTENTPROVIDER_H

@class UIView, NSArray, NSDate, NSString, MTVisualStylingProvider, NCNotificationAction, NCNotificationRequest, UIImage, NSTimeZone;
@protocol NCNotificationStaticContentProviding, NSCopying, NCNotificationStaticContentProvidingDelegate;

#import <Foundation/Foundation.h>


@interface NCNotificationRequestContentProvider : NSObject <NCNotificationStaticContentProviding, NSCopying>



@property (readonly, copy, nonatomic) id *cancelAction;
@property (readonly, copy, nonatomic) id *clearAction;
@property (readonly, copy, nonatomic) id *closeAction;
@property (readonly, nonatomic) NSUInteger coalesceCount;
@property (readonly, nonatomic) UIView *communicationAvatar; // ivar: _communicationAvatar
@property (readonly, nonatomic, getter=isContentHidingDisabled) BOOL contentHidingDisabled; // ivar: _contentHidingDisabled
@property (readonly, copy, nonatomic) NSArray *currentActions;
@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, nonatomic, getter=isDateAllDay) BOOL dateAllDay;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) id *defaultAction;
@property (weak, nonatomic) NSObject<NCNotificationStaticContentProvidingDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *footerText;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isHidingContent) BOOL hidingContent;
@property (readonly, nonatomic) NSArray *icons;
@property (readonly, copy, nonatomic) NSString *importantText;
@property (readonly, nonatomic) MTVisualStylingProvider *importantTextVisualStylingProvider;
@property (readonly, copy, nonatomic) NCNotificationAction *inlineAction;
@property (readonly, nonatomic) NSArray *interfaceActions;
@property (readonly, copy, nonatomic) NSArray *menuActions;
@property (readonly, copy, nonatomic) id *nilAction;
@property (retain, nonatomic) NCNotificationRequest *notificationRequest; // ivar: _notificationRequest
@property (readonly, nonatomic, getter=isNumberOfLinesInfinite) BOOL numberOfLinesInfinite;
@property (copy, nonatomic) NSArray *overriddenActions; // ivar: _overriddenActions
@property (readonly, copy, nonatomic) NSString *primarySubtitleText;
@property (nonatomic, getter=isPrimarySubtitleTextDisplayingRecipientsSummary) BOOL primarySubtitleTextDisplayingRecipientsSummary; // ivar: _primarySubtitleTextDisplayingRecipientsSummary
@property (nonatomic, getter=isPrimarySubtitleTextDisplayingRequestTitle) BOOL primarySubtitleTextDisplayingRequestTitle; // ivar: _primarySubtitleTextDisplayingRequestTitle
@property (readonly, copy, nonatomic) NSString *primaryText;
@property (readonly, copy, nonatomic) NSString *secondaryText;
@property (readonly, nonatomic) BOOL showsTextInputOnAppearance;
@property (readonly, copy, nonatomic) NSString *summaryText;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIImage *thumbnail;
@property (readonly, copy, nonatomic) NSTimeZone *timeZone;
@property (readonly, copy, nonatomic) NSString *title;


-(id)_actionForNotificationAction:(SEL)arg0 ;
-(id)_appBundleIdentifer;
-(id)_criticalAlertIconAttributedStringWithImageConfiguration:(id)arg0 ;
-(id)_iconImageForNotificationAction:(id)arg0 ;
-(id)copyWithContentHidingDisabled:(BOOL)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)importantAttributedTextWithImageConfiguration:(id)arg0 ;
-(id)init;
-(id)initWithNotificationRequest:(id)arg0 ;


@end


#endif