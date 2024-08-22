// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSLOOKUPITEM_H
#define SSLOOKUPITEM_H

@class NSNumber, NSString, NSArray, NSDictionary, NSURL;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SSLookupItem : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSNumber *ITunesStoreIdentifier;
@property (readonly, nonatomic, getter=isPOIBased) BOOL POIBased;
@property (readonly, nonatomic) NSString *artistName;
@property (readonly, nonatomic) NSArray *artwork;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSArray *categoryNames;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *itemKind;
@property (readonly, nonatomic) NSDictionary *lookupDictionary; // ivar: _dictionary
@property (readonly, nonatomic) NSInteger numberOfUserRatings;
@property (readonly, nonatomic) NSInteger numberOfUserRatingsForCurrentVersion;
@property (readonly, nonatomic) NSArray *offers;
@property (readonly, nonatomic) NSURL *productPageURL;
@property (readonly, nonatomic) float userRating;
@property (readonly, nonatomic) float userRatingForCurrentVersion;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLookupDictionary:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif