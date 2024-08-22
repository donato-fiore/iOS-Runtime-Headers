// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TYPISTKEYPLANE_H
#define TYPISTKEYPLANE_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TypistKeyplane : NSObject <NSSecureCoding>



@property (nonatomic) BOOL isAlphabeticPlane; // ivar: _isAlphabeticPlane
@property (nonatomic) BOOL isLetters; // ivar: _isLetters
@property (nonatomic) BOOL isShiftKeyplane; // ivar: _isShiftKeyplane
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) BOOL usesAutoShift; // ivar: _usesAutoShift


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif