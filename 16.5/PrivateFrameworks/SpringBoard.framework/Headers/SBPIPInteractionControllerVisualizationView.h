// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBPIPINTERACTIONCONTROLLERVISUALIZATIONVIEW_H
#define SBPIPINTERACTIONCONTROLLERVISUALIZATIONVIEW_H

@class UIView, NSMutableArray, _UIHyperregionUnion;



@interface SBPIPInteractionControllerVisualizationView : UIView {
    UIView *_containerView;
    UIView *_unionView;
    UIView *_mainGeometryView;
    UIView *_extendedGeometryView;
    UIView *_fakePIPView;
    NSMutableArray *_regionViews;
}


@property (nonatomic) SBPIPPositionGeometryContext extendedGeometryContext; // ivar: _extendedGeometryContext
@property (nonatomic) SBPIPPositionInteractionStateContext interactionContext; // ivar: _interactionContext
@property (nonatomic) SBPIPPositionGeometryContext mainGeometryContext; // ivar: _mainGeometryContext
@property (retain, nonatomic) _UIHyperregionUnion *regionUnion; // ivar: _regionUnion


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(struct CGRect )_backgroundFrame;
-(struct CGRect )_unionFrame;
-(void)layoutSubviews;


@end


#endif