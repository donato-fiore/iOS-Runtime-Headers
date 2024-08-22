// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSVPLAYACTIVITYEVENTITEMIDS_H
#define SSVPLAYACTIVITYEVENTITEMIDS_H

@class NSString;
@protocol NSSecureCoding, NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SSVPlayActivityEventItemIDs : NSObject <NSSecureCoding, NSCopying, NSMutableCopying, NSSecureCoding>



@property (readonly, nonatomic) NSUInteger cloudID; // ivar: _cloudID
@property (readonly, nonatomic) NSInteger equivalencySourceAdamID; // ivar: _equivalencySourceAdamID
@property (readonly, copy, nonatomic) NSString *lyricsID; // ivar: _lyricsID
@property (readonly, nonatomic) NSInteger purchasedAdamID; // ivar: _purchasedAdamID
@property (readonly, nonatomic) NSInteger radioAdamID; // ivar: _radioAdamID
@property (readonly, nonatomic) NSInteger subscriptionAdamID; // ivar: _subscriptionAdamID
@property (readonly, nonatomic) NSInteger tvShowPurchasedAdamID; // ivar: _tvShowPurchasedAdamID
@property (readonly, nonatomic) NSInteger tvShowSubscriptionAdamID; // ivar: _tvShowSubscriptionAdamID


+(BOOL)supportsSecureCoding;
-(id)_copyWithClass:(Class)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif