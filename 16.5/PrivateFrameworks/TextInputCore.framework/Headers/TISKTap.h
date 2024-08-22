// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TISKTAP_H
#define TISKTAP_H

@class NSMutableArray, TIKeyboardTouchEvent, TIKeyboardLayout;

#import <Foundation/Foundation.h>


@interface TISKTap : NSObject

@property (readonly, nonatomic, getter=isDownUpTap) BOOL downup;
@property (retain, nonatomic) NSMutableArray *dragTouches; // ivar: _dragTouches
@property (retain, nonatomic) TIKeyboardTouchEvent *firstTouch; // ivar: _firstTouch
@property (retain, nonatomic) TIKeyboardTouchEvent *lastTouch; // ivar: _lastTouch
@property (retain, nonatomic) TIKeyboardLayout *layout; // ivar: _layout
@property (readonly, nonatomic) NSUInteger numberOfDrags;
@property (nonatomic) NSInteger pathIndex; // ivar: _pathIndex


-(CGFloat)distance:(id)arg0 withTouch:(id)arg1 ;
-(CGFloat)downErrorDistance:(struct CGRect )arg0 ;
-(CGFloat)totalTapDistance;
-(CGFloat)upErrorDistance:(struct CGRect )arg0 ;
-(NSInteger)_forcedKeyCode;
-(id)init:(id)arg0 layout:(id)arg1 ;
-(id)stringForIntendedKey;
-(struct CGRect )getFrameForKey:(id)arg0 ;
-(void)addDragTouch:(id)arg0 ;


@end


#endif