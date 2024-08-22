// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFTIMEZONEDESCRIPTOR_H
#define WFTIMEZONEDESCRIPTOR_H

@class NSNumber, NSString, NSDictionary, NSTimeZone;
@protocol MTLJSONSerializing, NSCopying, NSSecureCoding;


#import "MTLModel.h"

@interface WFTimeZoneDescriptor : MTLModel <MTLJSONSerializing, NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSNumber *alCityIdentifier; // ivar: _alCityIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *localizedCityName; // ivar: _localizedCityName
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSTimeZone *timeZone; // ivar: _timeZone


+(BOOL)supportsSecureCoding;
+(id)JSONKeyPathsByPropertyKey;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithALCity:(id)arg0 ;
-(id)initWithTimeZone:(id)arg0 localizedCityName:(id)arg1 alCityIdentifier:(id)arg2 ;


@end


#endif