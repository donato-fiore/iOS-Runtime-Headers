// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCKEYBOARDSTATE_H
#define MCKEYBOARDSTATE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MCKeyboardState : NSObject <NSCopying>



@property (readonly, nonatomic) BOOL isFloatingKeyboard; // ivar: _isFloatingKeyboard
@property (readonly, nonatomic) BOOL isHardwareKeyboard; // ivar: _isHardwareKeyboard
@property (readonly, nonatomic) BOOL isSplitKeyboard; // ivar: _isSplitKeyboard
@property (readonly, nonatomic) NSInteger userInterfaceIdiom; // ivar: _userInterfaceIdiom


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithUserInterfaceIdiom:(NSInteger)arg0 isSplitKeyboard:(BOOL)arg1 isFloatingKeyboard:(BOOL)arg2 isHardwareKeyboard:(BOOL)arg3 ;


@end


#endif