// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WCDEFAULTCITY_H
#define WCDEFAULTCITY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WCDefaultCity : NSObject

@property (copy, nonatomic) NSString *countryName; // ivar: _countryName
@property (copy, nonatomic) NSString *countryOverride; // ivar: _countryOverride
@property (nonatomic) float latitude; // ivar: _latitude
@property (copy, nonatomic) NSString *localeCode; // ivar: _localeCode
@property (nonatomic) float longitude; // ivar: _longitude
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSString *timeZone; // ivar: _timeZone
@property (copy, nonatomic) NSString *unlocalizedCountryName; // ivar: _unlocalizedCountryName
@property (copy, nonatomic) NSString *unlocalizedCountryOverride; // ivar: _unlocalizedCountryOverride
@property (copy, nonatomic) NSString *unlocalizedName; // ivar: _unlocalizedName


+(id)cityFromAlCity:(id)arg0 ;
-(id)description;


@end


#endif