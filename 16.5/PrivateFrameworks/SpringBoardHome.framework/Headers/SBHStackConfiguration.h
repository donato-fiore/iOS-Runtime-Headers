// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHSTACKCONFIGURATION_H
#define SBHSTACKCONFIGURATION_H

@class NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SBHStackConfiguration : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) BOOL allowsExternalSuggestions; // ivar: _allowsExternalSuggestions
@property (nonatomic) BOOL allowsSuggestions; // ivar: _allowsSuggestions
@property (copy, nonatomic) NSArray *dataSources; // ivar: _dataSources
@property (nonatomic) NSUInteger sizeClass; // ivar: _sizeClass


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif