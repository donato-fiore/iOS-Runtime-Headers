// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCTYPEINPUT_H
#define MCTYPEINPUT_H

@class NSString, NSArray;


#import "MCKeyboardInput.h"

@interface MCTypeInput : MCKeyboardInput

@property (readonly, copy, nonatomic) NSString *characters; // ivar: _characters
@property (readonly, copy, nonatomic) NSArray *nearbyKeys; // ivar: _nearbyKeys
@property (readonly, nonatomic) CGPoint point; // ivar: _point


-(BOOL)canComposeNew:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCharacters:(id)arg0 nearbyKeys:(id)arg1 ;
-(id)initWithCharacters:(id)arg0 point:(struct CGPoint )arg1 nearbyKeys:(id)arg2 sourceKeyboardState:(id)arg3 ;
-(id)shortDescriptionWithLeadingString:(id)arg0 ;


@end


#endif