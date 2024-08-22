// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VIQUERYCONTEXT_H
#define VIQUERYCONTEXT_H

@class NSString, NSArray, NSURL, CLLocation;
@protocol NSCopying, MTLDevice;

#import <Foundation/Foundation.h>


@interface VIQueryContext : NSObject <NSCopying>



@property (readonly, nonatomic) NSString *applicationIdentifier; // ivar: _applicationIdentifier
@property (readonly, nonatomic) NSArray *catalogIDs; // ivar: _catalogIDs
@property (readonly, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (nonatomic, readonly) NSString *description;
@property (readonly, nonatomic) NSString *featureIdentifier; // ivar: _featureIdentifier
@property (readonly, nonatomic) NSInteger imageType; // ivar: _imageType
@property (readonly, nonatomic) NSURL *imageURL; // ivar: _imageURL
@property (readonly, nonatomic) BOOL includeLowConfidenceRegions; // ivar: _includeLowConfidenceRegions
@property (readonly, nonatomic) NSString *locale; // ivar: _locale
@property (readonly, nonatomic) CLLocation *location; // ivar: _location
@property (readonly, nonatomic) NSObject<MTLDevice> *preferredMetalDevice; // ivar: _preferredMetalDevice
@property (readonly, nonatomic) NSUInteger queryID; // ivar: _queryID
@property (readonly, nonatomic) NSURL *referralURL; // ivar: _referralURL
@property (readonly, nonatomic) NSString *teamID; // ivar: _teamID
@property (readonly, nonatomic) CGFloat uiScale; // ivar: _uiScale


+(id)contextWithDictionary:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithQueryID:(NSUInteger)arg0 applicationIdentifier:(id)arg1 uiScale:(CGFloat)arg2 teamID:(id)arg3 catalogIDs:(id)arg4 location:(id)arg5 imageURL:(id)arg6 referralURL:(id)arg7 imageType:(NSInteger)arg8 featureIdentifier:(id)arg9 locale:(id)arg10 countryCode:(id)arg11 preferredMetalDevice:(id)arg12 includeLowConfidenceRegions:(BOOL)arg13 ;


@end


#endif