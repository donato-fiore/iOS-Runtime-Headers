// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ICVALUEHISTORYITEM_H
#define _ICVALUEHISTORYITEM_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _ICValueHistoryItem : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (readonly, nonatomic) id *value; // ivar: _value


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithValue:(id)arg0 timestamp:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif