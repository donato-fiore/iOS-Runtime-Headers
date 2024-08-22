// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDROOTLAYOUT_H
#define TSDROOTLAYOUT_H

@class TSURetainedPointerKeyDictionary;
@protocol TSDAdaptiveLayout;


#import "TSDAbstractLayout.h"
#import "TSDLayoutController.h"

@interface TSDRootLayout : TSDAbstractLayout <TSDAdaptiveLayout>

 {
    BOOL _supportsAdaptiveLayout;
    TSURetainedPointerKeyDictionary *_shiftedObjects;
}


@property (readonly, weak, nonatomic) TSDLayoutController *layoutController; // ivar: _layoutController


-(BOOL)isRootLayoutForInspectorGeometry;
-(BOOL)isRootLevelForInlineGeometry;
-(BOOL)isSavedShiftForInfo:(id)arg0 equalToOffset:(struct CGPoint )arg1 ;
-(BOOL)providesGuidesForChildLayouts;
-(id)childLayoutsInRect:(struct CGRect )arg0 deep:(BOOL)arg1 ;
-(id)initWithLayoutController:(id)arg0 ;
-(id)layoutsForProvidingGuidesForChildLayouts;
-(id)p_shiftedObjects;
-(struct CGPoint )adjustMappingPointForInfo:(id)arg0 fromPoint:(struct CGPoint )arg1 ;
-(struct CGPoint )applyAdaptiveLayoutTo:(id)arg0 info:(id)arg1 offset:(struct CGPoint )arg2 ;
-(struct CGRect )clippedRectInRoot:(struct CGRect )arg0 ;
-(void)beginDynamicAdaptiveLayout;
-(void)endDynamicAdaptiveLayout;
-(void)resetLayout:(id)arg0 forInfo:(id)arg1 ;
-(void)updateRootLayoutShiftFor:(id)arg0 offset:(struct CGPoint )arg1 ;


@end


#endif