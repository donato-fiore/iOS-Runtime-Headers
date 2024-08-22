// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIGIFTAMOUNT_H
#define SKUIGIFTAMOUNT_H

@class NSString, NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SKUIGiftAmount : NSObject <NSCopying>



@property (copy, nonatomic) NSString *displayLabel; // ivar: _displayLabel
@property (copy, nonatomic) NSString *partNumber; // ivar: _partNumber
@property (copy, nonatomic) NSNumber *value; // ivar: _value


-(id)HTTPBodyDictionary;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAmountDictionary:(id)arg0 ;


@end


#endif