// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDCONTAINERREP_H
#define TSDCONTAINERREP_H

@class NSMutableArray, NSString;
@protocol TSDMutableContainerRep, TSDContainerInfo, TSDMutableContainerInfo;


#import "TSDRep.h"

@interface TSDContainerRep : TSDRep <TSDMutableContainerRep>

 {
    NSMutableArray *mChildReps;
}


@property (readonly, nonatomic) NSObject<TSDContainerInfo> *containerInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<TSDMutableContainerInfo> *mutableContainerInfo;
@property (readonly) Class superclass;


-(BOOL)canDrawInParallel;
-(BOOL)canSelectChildRep:(id)arg0 ;
-(BOOL)mustDrawOnMainThreadForInteractiveCanvas;
-(id)childReps;
-(id)childRepsForHitTesting;
-(id)hitRep:(struct CGPoint )arg0 ;
-(id)hitRep:(struct CGPoint )arg0 withGesture:(id)arg1 passingTest:(id)arg2 ;
-(id)hitRepChrome:(struct CGPoint )arg0 ;
-(id)hitRepChrome:(struct CGPoint )arg0 passingTest:(id)arg1 ;
-(id)hitReps:(struct CGPoint )arg0 withSlopBlock:(id)arg1 ;
-(id)visibleChildLayouts;
-(void)addAdditionalChildLayersToArray:(id)arg0 ;
-(void)addChildRep:(id)arg0 ;
-(void)dealloc;
-(void)drawInContext:(struct CGContext *)arg0 ;
-(void)insertChildRep:(id)arg0 above:(id)arg1 ;
-(void)insertChildRep:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)insertChildRep:(id)arg0 below:(id)arg1 ;
-(void)recursivelyPerformSelector:(SEL)arg0 withObject:(id)arg1 withObject:(id)arg2 ;
-(void)recursivelyPerformSelectorIfImplemented:(SEL)arg0 withObject:(id)arg1 withObject:(id)arg2 ;
-(void)removeChildRep:(id)arg0 ;
-(void)replaceChildRep:(id)arg0 with:(id)arg1 ;
-(void)replaceContentsFromRep:(id)arg0 ;
-(void)selectChildRep:(id)arg0 ;
-(void)setChildReps:(id)arg0 ;
-(void)updateChildrenFromLayout;
-(void)willReplaceContentsFromRep:(id)arg0 ;


@end


#endif