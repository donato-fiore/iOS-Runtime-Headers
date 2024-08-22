// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIMUTABLEINTEGERVALUE_H
#define SKUIMUTABLEINTEGERVALUE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SKUIMutableIntegerValue : NSObject <NSCopying>



@property (nonatomic) NSInteger integerValue; // ivar: _integerValue


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif