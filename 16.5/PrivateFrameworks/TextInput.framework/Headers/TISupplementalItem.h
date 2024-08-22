// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TISUPPLEMENTALITEM_H
#define TISUPPLEMENTALITEM_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TISupplementalItem : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSUInteger identifier; // ivar: _identifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSupplementalItem:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif