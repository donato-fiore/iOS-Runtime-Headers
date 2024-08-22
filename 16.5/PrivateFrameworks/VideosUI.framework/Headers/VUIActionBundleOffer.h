// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIACTIONBUNDLEOFFER_H
#define VUIACTIONBUNDLEOFFER_H

@class NSString, NSDictionary;


#import "VUIAction.h"

@interface VUIActionBundleOffer : VUIAction

@property (nonatomic) BOOL isMultiOfferDynamicVC; // ivar: _isMultiOfferDynamicVC
@property (retain, nonatomic) NSString *notificationBody; // ivar: _notificationBody
@property (retain, nonatomic) NSString *notificationBundleTitle; // ivar: _notificationBundleTitle
@property (retain, nonatomic) NSString *notificationTitle; // ivar: _notificationTitle
@property (retain, nonatomic) NSString *offerDomain; // ivar: _offerDomain
@property (retain, nonatomic) NSDictionary *offerMetrics; // ivar: _offerMetrics
@property (retain, nonatomic) NSString *offerURLString; // ivar: _offerURLString
@property (retain, nonatomic) NSString *secondaryOfferNotificationBody; // ivar: _secondaryOfferNotificationBody
@property (retain, nonatomic) NSString *secondaryOfferNotificationTitle; // ivar: _secondaryOfferNotificationTitle


-(BOOL)isAccountRequired;
-(id)initWithContextData:(id)arg0 ;
-(void)performWithTargetResponder:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif