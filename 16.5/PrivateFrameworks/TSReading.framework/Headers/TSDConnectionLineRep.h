// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDCONNECTIONLINEREP_H
#define TSDCONNECTIONLINEREP_H



#import "TSDShapeRep.h"
#import "TSDPathSource.h"

@interface TSDConnectionLineRep : TSDShapeRep {
    TSDPathSource *mLastPathSource;
}




+(BOOL)canConnectToRep:(id)arg0 ;
+(id)infosToConnectFromSelection:(id)arg0 withInteractiveCanvasController:(id)arg1 ;
-(BOOL)canBeUsedForImageMask;
-(BOOL)canConnectToRep:(id)arg0 ;
-(BOOL)canMakePathEditable;
-(BOOL)canUseSpecializedHitRegionForKnob:(id)arg0 ;
-(BOOL)containsPoint:(struct CGPoint )arg0 ;
-(BOOL)directlyManagesLayerContent;
-(BOOL)i_editMenuOverlapsEndKnobs;
-(BOOL)isDraggable;
-(BOOL)isSelectable;
-(BOOL)p_controlKnobVisible;
-(BOOL)p_isConnected;
-(BOOL)p_isConnectedToLockedObjects;
-(BOOL)shouldCreateKnobs;
-(BOOL)shouldCreateSelectionKnobs;
-(BOOL)shouldShowCommentHighlight;
-(BOOL)shouldShowSmartShapeKnobs;
-(CGFloat)shortestDistanceToPoint:(struct CGPoint )arg0 countAsHit:(*BOOL)arg1 ;
-(NSUInteger)enabledKnobMask;
-(id)additionalRepsForDragging;
-(id)connectionLineLayout;
-(struct CGPoint )i_dragOffset;
-(struct CGRect )targetRectForEditMenu;
-(void)dealloc;
-(void)updateFromLayout;


@end


#endif