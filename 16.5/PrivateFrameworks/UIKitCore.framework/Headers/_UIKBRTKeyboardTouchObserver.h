// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIKBRTKEYBOARDTOUCHOBSERVER_H
#define _UIKBRTKEYBOARDTOUCHOBSERVER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface _UIKBRTKeyboardTouchObserver : NSObject

@property (nonatomic) CGPoint fCenter; // ivar: _fCenter
@property (nonatomic) int homeRowOffsetIndex; // ivar: _homeRowOffsetIndex
@property (nonatomic) CGPoint jCenter; // ivar: _jCenter
@property (nonatomic) CGSize keySize; // ivar: _keySize
@property (retain, nonatomic) NSArray *rowOffsets; // ivar: _rowOffsets
@property (retain, nonatomic) NSArray *rowXEdges; // ivar: _rowXEdges
@property (retain, nonatomic) NSArray *rowYEdgesLeft; // ivar: _rowYEdgesLeft
@property (retain, nonatomic) NSArray *rowYEdgesRight; // ivar: _rowYEdgesRight


-(void)addTouchLocation:(struct CGPoint )arg0 withRadius:(CGFloat)arg1 withIdentifier:(id)arg2 ;
-(void)addTouchLocation:(struct CGPoint )arg0 withRadius:(CGFloat)arg1 withTouchTime:(CGFloat)arg2 withIdentifier:(id)arg3 ;
-(void)moveTouchWithIdentifier:(id)arg0 toLocation:(struct CGPoint )arg1 withRadius:(CGFloat)arg2 atTouchTime:(CGFloat)arg3 ;
-(void)removeTouchWithIdentifier:(id)arg0 ;
-(void)removeTouchWithIdentifier:(id)arg0 touchCancelled:(BOOL)arg1 ;
-(void)reset;
-(void)updateWithFCenter:(struct CGPoint )arg0 jCenter:(struct CGPoint )arg1 keySize:(struct CGSize )arg2 rowOffsets:(id)arg3 homeRowOffsetIndex:(int)arg4 ;


@end


#endif