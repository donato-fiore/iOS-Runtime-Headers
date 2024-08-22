// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TUIKEY_H
#define TUIKEY_H

@class UIKBTree, NSString;

#import <Foundation/Foundation.h>


@interface TUIKey : NSObject

@property (retain, nonatomic) UIKBTree *backingTree; // ivar: _backingTree
@property (retain, nonatomic) NSString *displayString; // ivar: _displayString
@property (nonatomic) BOOL inGridLayout; // ivar: _inGridLayout
@property (retain, nonatomic) UIKBTree *keyplane; // ivar: _keyplane
@property (nonatomic) NSInteger layoutShape; // ivar: _layoutShape
@property (nonatomic) NSInteger layoutType; // ivar: _layoutType
@property (nonatomic) CGFloat multiplier; // ivar: _multiplier
@property (nonatomic) CGRect paddedFrame;
@property (readonly, nonatomic) NSString *representedString;
@property (nonatomic) NSInteger style; // ivar: _style


+(id)keyFromKBTree:(id)arg0 ;
+(id)keyFromKBTree:(id)arg0 layoutType:(NSInteger)arg1 layoutShape:(NSInteger)arg2 multiplier:(CGFloat)arg3 ;
-(id)description;
-(id)stringFromLayoutType:(NSInteger)arg0 ;
-(id)stringFromShape:(NSInteger)arg0 ;


@end


#endif