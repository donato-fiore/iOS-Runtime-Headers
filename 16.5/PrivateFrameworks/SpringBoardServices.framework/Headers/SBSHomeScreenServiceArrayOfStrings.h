// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSHOMESCREENSERVICEARRAYOFSTRINGS_H
#define SBSHOMESCREENSERVICEARRAYOFSTRINGS_H

@class NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SBSHomeScreenServiceArrayOfStrings : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *array; // ivar: _array


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithArray:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif