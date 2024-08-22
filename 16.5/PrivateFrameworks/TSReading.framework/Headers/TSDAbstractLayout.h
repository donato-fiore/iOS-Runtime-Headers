// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDABSTRACTLAYOUT_H
#define TSDABSTRACTLAYOUT_H

@class NSMutableArray, NSArray;

#import <Foundation/Foundation.h>

#import "TSDLayoutGeometry.h"
#import "TSDAbstractLayout.h"

@interface TSDAbstractLayout : NSObject {
    NSMutableArray *mChildren;
    CGPoint mInterimPosition;
    BOOL mInterimPositionXSet;
    BOOL mInterimPositionYSet;
    CGPoint mLastInterimPosition;
    BOOL mLastInterimPositionXSet;
    BOOL mLastInterimPositionYSet;
}


@property (copy, nonatomic) NSArray *children;
@property (copy, nonatomic) TSDLayoutGeometry *geometry; // ivar: mGeometry
@property (nonatomic) CGFloat interimPositionX;
@property (nonatomic) CGFloat interimPositionY;
@property (nonatomic) TSDAbstractLayout *parent; // ivar: mParent
@property (readonly, nonatomic) TSDAbstractLayout *root;


-(BOOL)canRotateChildLayout:(id)arg0 ;
-(BOOL)isAxisAlignedUnflippedInRoot;
-(BOOL)isRootLayoutForInspectorGeometry;
-(BOOL)providesGuidesForChildLayouts;
-(BOOL)shouldSnapWhileResizing;
-(BOOL)supportsFlipping;
-(BOOL)supportsInspectorPositioning;
-(BOOL)supportsParentRotation;
-(BOOL)supportsResize;
-(BOOL)supportsRotation;
-(id)additionalDependenciesForChildLayout:(id)arg0 ;
-(id)delegateConformingToProtocol:(id)arg0 forLayout:(id)arg1 ;
-(id)geometryInRoot:(id)arg0 ;
-(id)init;
-(id)layoutsForProvidingGuidesForChildLayouts;
-(id)visibleGeometries;
-(struct CGAffineTransform )transform;
-(struct CGAffineTransform )transformInParent;
-(struct CGAffineTransform )transformInRoot;
-(struct CGPoint )alignmentFrameOriginForFixingInterimPosition;
-(struct CGPoint )positionInRootForAttachmentPositioner;
-(struct CGRect )alignmentFrame;
-(struct CGRect )alignmentFrameForProvidingGuidesInRoot;
-(struct CGRect )alignmentFrameInRoot;
-(struct CGRect )frame;
-(struct CGRect )frameForCulling;
-(struct CGRect )frameInParent;
-(struct CGRect )frameInRoot;
-(struct CGRect )rectInParent:(struct CGRect )arg0 ;
-(struct CGRect )rectInRoot:(struct CGRect )arg0 ;
-(void)addChild:(id)arg0 ;
-(void)addDescendentLayoutsToArray:(id)arg0 ;
-(void)addLayoutsInRect:(struct CGRect )arg0 toArray:(id)arg1 deep:(BOOL)arg2 ;
-(void)addLayoutsToArray:(id)arg0 ;
-(void)dealloc;
-(void)exchangeChildAtIndex:(NSUInteger)arg0 withChildAtIndex:(NSUInteger)arg1 ;
-(void)fixTransformFromInterimPosition;
-(void)fixTransformFromLastInterimPosition;
-(void)insertChild:(id)arg0 above:(id)arg1 ;
-(void)insertChild:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)insertChild:(id)arg0 below:(id)arg1 ;
-(void)p_fixTransformFromInterimPosition:(struct CGPoint )arg0 interimPositionXSet:(BOOL)arg1 interimPositionYSet:(BOOL)arg2 ;
-(void)removeFromParent;
-(void)replaceChild:(id)arg0 with:(id)arg1 ;


@end


#endif