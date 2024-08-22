// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _VOSPROFILEMODE_H
#define _VOSPROFILEMODE_H

@class NSMutableSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "VOSScreenreaderMode.h"

@interface _VOSProfileMode : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSMutableSet *commands; // ivar: _commands
@property (retain, nonatomic) VOSScreenreaderMode *mode; // ivar: _mode


+(BOOL)supportsSecureCoding;
+(id)profileModeWitMode:(id)arg0 ;
+(id)profileModeWithStringValue:(id)arg0 ;
-(id)_initWithMode:(id)arg0 commands:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)addCommand:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif