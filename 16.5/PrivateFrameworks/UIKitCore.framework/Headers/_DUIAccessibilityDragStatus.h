// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _DUIACCESSIBILITYDRAGSTATUS_H
#define _DUIACCESSIBILITYDRAGSTATUS_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _DUIAccessibilityDragStatus : NSObject <NSSecureCoding>



@property (nonatomic) BOOL forbidden; // ivar: _forbidden
@property (nonatomic) NSInteger itemCount; // ivar: _itemCount
@property (nonatomic) NSUInteger potentialOperation; // ivar: _potentialOperation


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif