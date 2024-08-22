// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIKEYBOARDUISNAPSHOT_H
#define UIKEYBOARDUISNAPSHOT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface UIKeyboardUISnapshot : NSObject <NSSecureCoding>



@property (nonatomic) CGSize size; // ivar: _size
@property (nonatomic) unsigned int slotID; // ivar: _slotID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif