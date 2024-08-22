// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TUMOMENTSCAPABILITIES_H
#define TUMOMENTSCAPABILITIES_H

@class NSSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TUMomentsCapabilities : NSObject <NSSecureCoding>



@property (readonly, nonatomic) int availability; // ivar: _availability
@property (readonly, copy, nonatomic) NSSet *supportedMediaTypes; // ivar: _supportedMediaTypes


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCapabilities:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithAvailability:(int)arg0 supportedMediaTypes:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif