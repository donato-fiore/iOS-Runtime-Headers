// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIPRESSINFO_H
#define UIPRESSINFO_H


#import <Foundation/Foundation.h>

#import "UIKey.h"

@interface UIPressInfo : NSObject

@property (nonatomic) NSUInteger clickCount; // ivar: _clickCount
@property (nonatomic) unsigned int contextID; // ivar: _contextID
@property (nonatomic) CGFloat force; // ivar: _force
@property (nonatomic) NSUInteger gameControllerComponent; // ivar: _gameControllerComponent
@property (retain, nonatomic) UIKey *key; // ivar: _key
@property (nonatomic, getter=isLongClick) BOOL longClick; // ivar: _longClick
@property (nonatomic) NSInteger modifierFlags; // ivar: _modifierFlags
@property (nonatomic) NSInteger phase; // ivar: _phase
@property (nonatomic) NSUInteger source; // ivar: _source
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (nonatomic) NSInteger type; // ivar: _type


+(id)_keyboardPressInfoForType:(NSInteger)arg0 isKeyDown:(BOOL)arg1 timestamp:(CGFloat)arg2 contextID:(unsigned int)arg3 modifierFlags:(NSInteger)arg4 ;
-(id)description;
-(id)init;


@end


#endif