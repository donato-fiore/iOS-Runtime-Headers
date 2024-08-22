// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIREDEEM_H
#define SKUIREDEEM_H

@class NSString, NSURL, NSArray, UIImage, NSDictionary;
@protocol NSSecureCoding, SKUIArtworkProviding;

#import <Foundation/Foundation.h>


@interface SKUIRedeem : NSObject <NSSecureCoding>



@property (nonatomic) CGFloat ITunesPassLearnMoreAlertInterval; // ivar: _ITunesPassLearnMoreAlertInterval
@property (copy, nonatomic) NSString *balance; // ivar: _balance
@property (copy, nonatomic) NSString *credit; // ivar: _credit
@property (copy, nonatomic) NSString *creditDisplay; // ivar: _creditDisplay
@property (retain, nonatomic) NSURL *customizedThankyouURL; // ivar: _customizedThankyouURL
@property (retain, nonatomic) NSArray *downloads; // ivar: _downloads
@property (retain, nonatomic) NSObject<SKUIArtworkProviding> *headerArtworkProvider; // ivar: _headerArtworkProvider
@property (retain, nonatomic) UIImage *headerImage; // ivar: _headerImage
@property (nonatomic) BOOL hideItemView; // ivar: _hideItemView
@property (retain, nonatomic) NSString *inAppPurchase; // ivar: _inAppPurchase
@property (retain, nonatomic) NSArray *items; // ivar: _items
@property (retain, nonatomic) NSArray *links; // ivar: _links
@property (copy, nonatomic) NSString *message; // ivar: _message
@property (retain, nonatomic) NSURL *redirectURL; // ivar: _redirectURL
@property (retain, nonatomic) NSDictionary *thankYouDictionary; // ivar: _thankYouDictionary
@property (copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif