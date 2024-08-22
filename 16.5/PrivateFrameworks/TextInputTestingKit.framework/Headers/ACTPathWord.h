// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACTPATHWORD_H
#define ACTPATHWORD_H

@class NSString;


#import "ACTUserAction.h"
#import "TTKKeyboardPlane.h"
#import "TIContinuousPath.h"

@interface ACTPathWord : ACTUserAction

@property (copy, nonatomic) id *callback; // ivar: _callback
@property (readonly, nonatomic) BOOL fromUserData; // ivar: _fromUserData
@property (readonly, nonatomic) NSString *intendedString; // ivar: _intendedString
@property (readonly, nonatomic) TTKKeyboardPlane *keyplane; // ivar: _keyplane
@property (readonly, nonatomic) TIContinuousPath *path; // ivar: _path


-(id)description;
-(id)initWithPath:(id)arg0 intendedString:(id)arg1 keyplane:(id)arg2 fromUserData:(BOOL)arg3 ;
-(void)applyWithTyper:(id)arg0 log:(id)arg1 ;


@end


#endif