// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDDEFAULTPARTITIONER_H
#define TSDDEFAULTPARTITIONER_H

@class TSUPointerKeyDictionary, NSString;
@protocol TSDPartitioner, TSDCanvasDelegate, TSDCanvasProxyDelegate;


#import "TSDLayoutChangeObserver.h"
#import "TSDDrawableInfo.h"
#import "TSDCanvas.h"
#import "TSDDefaultPartitionerPrintingSettings.h"
#import "TSDLayout.h"

@interface TSDDefaultPartitioner : TSDLayoutChangeObserver <TSDPartitioner, TSDCanvasDelegate>

 {
    TSDDrawableInfo *_info;
    TSDCanvas *_canvas;
    TSUPointerKeyDictionary *_mainRepsByCanvas;
    TSUPointerKeyDictionary *_cachedImagesByCanvas;
    TSUPointerKeyDictionary *_partialRepsByCanvas;
    TSDDefaultPartitionerPrintingSettings *_lastPrintingSettings;
}


@property (readonly, nonatomic) NSObject<TSDCanvasProxyDelegate> *canvasProxyDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) TSDLayout *i_layout;
@property (readonly, nonatomic) BOOL paginateRightToLeft; // ivar: _paginateRightToLeft
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGRect totalPartitionFrame;
@property (readonly, nonatomic) BOOL verticalTextAllowed;


-(BOOL)didHint:(id)arg0 syncWithNextHint:(id)arg1 horizontally:(BOOL)arg2 ;
-(BOOL)isCanvasDrawingIntoPDF;
-(BOOL)isPrintingCanvas;
-(BOOL)shouldSuppressBackgrounds;
-(NSUInteger)p_edgesForHintBounds:(struct CGRect )arg0 ;
-(id)documentRoot;
-(id)hintForLayout:(id)arg0 ;
-(id)i_repForCanvas:(id)arg0 ;
-(id)initWithInfo:(id)arg0 ;
-(id)layoutForHint:(id)arg0 parentLayout:(id)arg1 ;
-(id)nextHintForSize:(struct CGSize )arg0 parentLayout:(id)arg1 previousHint:(id)arg2 horizontally:(BOOL)arg3 outFinished:(*BOOL)arg4 ;
-(id)nextLayoutForSize:(struct CGSize )arg0 parentLayout:(id)arg1 previousHint:(id)arg2 horizontally:(BOOL)arg3 outFinished:(*BOOL)arg4 ;
-(id)p_childRepForRep:(id)arg0 toNotifyForInfo:(id)arg1 ;
-(id)p_firstHintForSize:(struct CGSize )arg0 ;
-(id)p_layoutsForInfo:(id)arg0 ;
-(id)p_nextHintForSize:(struct CGSize )arg0 previousHint:(id)arg1 horizontally:(BOOL)arg2 ;
-(id)p_repsForInfo:(id)arg0 ;
-(struct CGImage *)i_cachedImageForCanvas:(id)arg0 ;
-(void)dealloc;
-(void)didProcessAllChanges;
-(void)i_forceLayoutForChangedCanvasPrintingSettingsOfCanvas:(id)arg0 ;
-(void)i_layoutRegistered:(id)arg0 ;
-(void)i_layoutUnregistered:(id)arg0 ;
-(void)i_registerPartialRep:(id)arg0 ;
-(void)i_removeCachedImageForCanvas:(id)arg0 ;
-(void)i_setCachedImage:(struct CGImage *)arg0 forCanvas:(id)arg1 ;
-(void)i_unregisterPartialRep:(id)arg0 ;
-(void)p_generateLayouts;
-(void)p_generateLayoutsIfNeeded;
-(void)p_teardownLayouts;
-(void)preprocessChanges:(id)arg0 forChangeSource:(id)arg1 ;
-(void)processChanges:(id)arg0 forChangeSource:(id)arg1 ;
-(void)reset;
-(void)setLayoutPartititionsRightToLeft:(BOOL)arg0 contentPartitionsRightToLeft:(BOOL)arg1 ;


@end


#endif