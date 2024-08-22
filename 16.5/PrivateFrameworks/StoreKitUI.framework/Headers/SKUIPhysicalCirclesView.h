// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIPHYSICALCIRCLESVIEW_H
#define SKUIPHYSICALCIRCLESVIEW_H

@class UIView, NSMutableArray, CADisplayLink, PKPhysicsBody, UILongPressGestureRecognizer, UIPanGestureRecognizer, PKPhysicsWorld, UITapGestureRecognizer, NSString;
@protocol PKPhysicsContactDelegate, OS_dispatch_source, SKUIPhysicalCirclesDataSource, SKUIPhysicalCirclesDelegate;



@interface SKUIPhysicalCirclesView : UIView <PKPhysicsContactDelegate>

 {
    NSObject<OS_dispatch_source> *_circleLoadStepTimer;
    NSMutableArray *_circleBodies;
    CADisplayLink *_displayLink;
    PKPhysicsBody *_groundBody;
    NSInteger _longPressCircleIndex;
    UILongPressGestureRecognizer *_longPressRecognizer;
    CGFloat _maximumFrequencyDistance;
    CGFloat _minimumFrequencyDistance;
    UIPanGestureRecognizer *_panRecognizer;
    *void _physicsKitFramework;
    PKPhysicsWorld *_physicsWorld;
    NSMutableArray *_repellors;
    UITapGestureRecognizer *_tapRecognizer;
}


@property (nonatomic) SKUIPhysicalCircleConstants constants; // ivar: _constants
@property (weak, nonatomic) NSObject<SKUIPhysicalCirclesDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKUIPhysicalCirclesDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_addNextMissingSpringJoint;
-(NSInteger)_circleIndexForPoint:(struct CGPoint )arg0 ;
-(id)_circleBodyWithView:(id)arg0 ;
-(id)addRepellorWithCenter:(struct CGPoint )arg0 radius:(CGFloat)arg1 bufferSize:(CGFloat)arg2 ;
-(id)circleViewAtIndex:(NSInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGPoint )_initialPositionForCircleIndex:(NSInteger)arg0 view:(id)arg1 ;
-(void)_addSpringForCircleBody:(id)arg0 ;
-(void)_calculateFrequencyScaling;
-(void)_cancelStepTimers;
-(void)_displayLinkTick:(id)arg0 ;
-(void)_loadCirclesWithStartIndex:(NSInteger)arg0 totalCount:(NSInteger)arg1 ;
-(void)_longPressAction:(id)arg0 ;
-(void)_panGestureAction:(id)arg0 ;
-(void)_reloadDidFinish;
-(void)_removeCircleBodies:(id)arg0 ;
-(void)_startFluctuationForCircleView:(id)arg0 ;
-(void)_stopFluctuationForCircleView:(id)arg0 ;
-(void)_tapGestureAction:(id)arg0 ;
-(void)addCirclesWithCount:(NSInteger)arg0 ;
-(void)dealloc;
-(void)reloadData;
-(void)removeAllCirclesAnimated:(BOOL)arg0 completionBlock:(id)arg1 ;
-(void)removeAllRepellors;
-(void)removeCircleAtIndex:(NSInteger)arg0 animated:(BOOL)arg1 completionBlock:(id)arg2 ;
-(void)removeCirclesInIndexSet:(id)arg0 animated:(BOOL)arg1 completionBlock:(id)arg2 ;
-(void)removeCirclesInIndexSet:(id)arg0 byAnimatingToPoint:(struct CGPoint )arg1 delay:(CGFloat)arg2 completionBlock:(id)arg3 ;
-(void)removeRepellor:(id)arg0 ;
-(void)setSize:(struct CGSize )arg0 forCircleAtIndex:(NSInteger)arg1 ;
-(void)startPhysics;
-(void)stopPhysics;


@end


#endif