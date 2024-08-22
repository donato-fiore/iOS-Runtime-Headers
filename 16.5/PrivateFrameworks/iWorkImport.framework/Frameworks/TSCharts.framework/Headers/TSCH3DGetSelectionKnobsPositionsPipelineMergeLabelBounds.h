// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCH3DGETSELECTIONKNOBSPOSITIONSPIPELINEMERGELABELBOUNDS_H
#define TSCH3DGETSELECTIONKNOBSPOSITIONSPIPELINEMERGELABELBOUNDS_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface TSCH3DGetSelectionKnobsPositionsPipelineMergeLabelBounds : NSObject {
    NSMutableArray *_labelsBounds;
}


@property (readonly, nonatomic) int knobsMode; // ivar: _knobsMode
@property (readonly, nonatomic) int labelType; // ivar: _labelType


+(id)boundsWithLabelType:(int)arg0 knobsMode:(int)arg1 ;
-(BOOL)p_hasExtentPointsForBounds:(id)arg0 returningMinPoint:(struct CGPoint *)arg1 maxPoint:(struct CGPoint *)arg2 ;
-(BOOL)p_isHorizontal;
-(id)initWithLabelType:(int)arg0 knobsMode:(int)arg1 ;
-(struct CGPoint )p_maxPoint:(struct CGPoint )arg0 otherPoint:(struct CGPoint )arg1 ;
-(struct CGPoint )p_minPoint:(struct CGPoint )arg0 otherPoint:(struct CGPoint )arg1 ;
-(void)addBounds:(struct CGRect )arg0 ;
-(void)addNewBoundsArray;
-(void)mergeBoundsIntoProjectedPoints:(id)arg0 ;


@end


#endif