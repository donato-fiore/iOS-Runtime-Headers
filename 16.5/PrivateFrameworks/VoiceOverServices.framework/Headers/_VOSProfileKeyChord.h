// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _VOSPROFILEKEYCHORD_H
#define _VOSPROFILEKEYCHORD_H

@class AXSSKeyChord;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_VOSProfileCommand.h"

@interface _VOSProfileKeyChord : NSObject <NSSecureCoding>



@property (weak, nonatomic) _VOSProfileCommand *command; // ivar: _command
@property (retain, nonatomic) AXSSKeyChord *keyChord; // ivar: _keyChord


+(BOOL)supportsSecureCoding;
+(id)profileKeyChordWithKeyChord:(id)arg0 ;
+(id)profileKeyChordWithStringValue:(id)arg0 ;
-(id)_initWithKeyChord:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif