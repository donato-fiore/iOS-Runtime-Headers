// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TVRCKEYBOARDSTATE_H
#define TVRCKEYBOARDSTATE_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "TVRCKeyboardAttributes.h"

@interface TVRCKeyboardState : NSObject <NSSecureCoding>



@property (copy, nonatomic) TVRCKeyboardAttributes *attributes; // ivar: _attributes
@property (nonatomic) BOOL isEditing; // ivar: _isEditing
@property (copy, nonatomic) NSString *text; // ivar: _text


+(BOOL)supportsSecureCoding;
+(id)keyboardStateFromDevice:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDevice:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif