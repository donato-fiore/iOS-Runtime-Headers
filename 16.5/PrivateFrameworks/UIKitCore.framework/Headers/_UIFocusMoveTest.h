// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIFOCUSMOVETEST_H
#define _UIFOCUSMOVETEST_H

@class UIFocusTest;
@protocol UIFocusEnvironment, _UIFocusMoveTestDataSource, _UIFocusMoveTestDelegate;



@interface _UIFocusMoveTest : UIFocusTest {
    NSUInteger _activeNumberOfIterations;
    NSUInteger _currentIteration;
    NSUInteger _currentMove;
    ? _flags;
}


@property (weak, nonatomic) NSObject<UIFocusEnvironment> *containerFocusEnvironment; // ivar: _containerFocusEnvironment
@property (weak, nonatomic) NSObject<_UIFocusMoveTestDataSource> *dataSource; // ivar: _dataSource
@property (weak, nonatomic) NSObject<_UIFocusMoveTestDelegate> *delegate;
@property (nonatomic) NSUInteger maximumMovesPerIteration; // ivar: _maximumMovesPerIteration
@property (nonatomic) CGFloat movementDelay; // ivar: _movementDelay
@property (nonatomic) NSUInteger movementHeading; // ivar: _movementHeading
@property (nonatomic) NSUInteger numberOfIterations; // ivar: _numberOfIterations
@property (nonatomic) BOOL resetsFocusBeforeIterations; // ivar: _resetsFocusBeforeIterations


-(BOOL)_dataSourceShouldResetFocusBeforeIteration:(NSUInteger)arg0 ;
-(CGFloat)_dataSourceDelayBeforeMove:(NSUInteger)arg0 duringIteration:(NSUInteger)arg1 ;
-(NSUInteger)_dataSourceHeadingForMove:(NSUInteger)arg0 duringIteration:(NSUInteger)arg1 ;
-(NSUInteger)_dataSourceMaximumNumberOfMovesDuringIteration:(NSUInteger)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(void)_notifyDelegateDidFinishIteration:(NSUInteger)arg0 ;
-(void)_notifyDelegateDidMoveFocusAlongHeading:(NSUInteger)arg0 forMove:(NSUInteger)arg1 duringIteration:(NSUInteger)arg2 ;
-(void)_notifyDelegateWillMoveFocusAlongHeading:(NSUInteger)arg0 forMove:(NSUInteger)arg1 duringIteration:(NSUInteger)arg2 ;
-(void)_notifyDelegateWillStartIteration:(NSUInteger)arg0 ;
-(void)_performFocusMovement;
-(void)_performFocusMovementAfterDelayForMove:(NSUInteger)arg0 iteration:(NSUInteger)arg1 ;
-(void)_resetFocusIfNecessaryBeforeIteration:(NSUInteger)arg0 ;
-(void)main;
-(void)prepareWithCompletionHandler:(id)arg0 ;
-(void)reset;


@end


#endif