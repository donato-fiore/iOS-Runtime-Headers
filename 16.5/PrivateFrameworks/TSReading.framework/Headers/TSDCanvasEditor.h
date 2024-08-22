// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDCANVASEDITOR_H
#define TSDCANVASEDITOR_H

@class UIView, TSKSelection<TSDCanvasSelection>, NSString, NSSet, TSKSelection<TSDTextSelection>;
@protocol TSDCanvasEditor, TSDArrangeInspectorDelegate, TSDInlineFloatingWrapInspectorDelegate;

#import <Foundation/Foundation.h>

#import "TSDInteractiveCanvasController.h"
#import "TSDCanvasEditorHelper.h"
#import "TSDCanvasSelection.h"
#import "TSPObject.h"
#import "TSKSelection.h"

@interface TSDCanvasEditor : NSObject <TSDCanvasEditor>

 {
    TSDInteractiveCanvasController *mInteractiveCanvasController;
    TSDCanvasEditorHelper *mCanvasEditorHelper;
    TSDCanvasSelection *mSelection;
    NSObject<TSDArrangeInspectorDelegate> *mZOrderArranger;
    NSObject<TSDInlineFloatingWrapInspectorDelegate> *mInlineFloatingEditor;
    BOOL mPreventImageDataReplace;
    UIView *mInputView;
}


@property (readonly, nonatomic) TSDCanvasEditorHelper *canvasEditorHelper;
@property (readonly, nonatomic) TSKSelection<TSDCanvasSelection> *canvasSelection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSSet *infosForSelectAllInRoot;
@property (readonly, retain) UIView *inputAccessoryView;
@property (readonly, retain) UIView *inputView;
@property (readonly, nonatomic) TSDInteractiveCanvasController *interactiveCanvasController;
@property (readonly, nonatomic) _NSRange markedRange;
@property (readonly, nonatomic) TSPObject *modelForSelection;
@property (readonly, nonatomic) NSSet *selectedObjectsSupportingConnectionLineAttributes;
@property (readonly, nonatomic) NSSet *selectedObjectsSupportingEndpoints;
@property (readonly, nonatomic) NSSet *selectedObjectsSupportingFill;
@property (readonly, nonatomic) NSSet *selectedObjectsSupportingOpacity;
@property (readonly, nonatomic) NSSet *selectedObjectsSupportingReflection;
@property (readonly, nonatomic) NSSet *selectedObjectsSupportingResize;
@property (readonly, nonatomic) NSSet *selectedObjectsSupportingShadow;
@property (readonly, nonatomic) NSSet *selectedObjectsSupportingShrinkTextToFit;
@property (readonly, nonatomic) NSSet *selectedObjectsSupportingSmartShapeAttributes;
@property (readonly, nonatomic) NSSet *selectedObjectsSupportingStroke;
@property (readonly, nonatomic) NSSet *selectedObjectsSupportingTextInset;
@property (retain, nonatomic) TSKSelection *selection;
@property (retain, nonatomic) TSKSelection<TSDTextSelection> *selectionForArrowKeys;
@property (readonly) Class superclass;
@property (readonly, retain, nonatomic) TSKSelection<TSDTextSelection> *textInputSelection;
@property (readonly) BOOL wantsRawArrowKeyEvents;


+(BOOL)physicalKeyboardIsSender:(id)arg0 ;
+(id)canvasSelectionWithInfos:(id)arg0 ;
+(id)canvasSelectionWithInfos:(id)arg0 andContainer:(id)arg1 ;
+(id)spatialInfoComparator:(SEL)arg0 ;
-(BOOL)allowAutomaticTextEditingToBeginWithDifferentEditor;
-(BOOL)canAddOrShowComment;
-(BOOL)canCopyStyle;
-(BOOL)canDeleteComment;
-(BOOL)canGroupDrawable:(id)arg0 ;
-(BOOL)canGroupWithSender:(id)arg0 ;
-(BOOL)canSelectAllWithSender:(id)arg0 ;
-(BOOL)canUngroupWithSender:(id)arg0 ;
-(BOOL)canvasEditorCanCopyStyleWithSender:(id)arg0 ;
-(BOOL)canvasEditorCanCopyWithSender:(id)arg0 ;
-(BOOL)canvasEditorCanCutWithSender:(id)arg0 ;
-(BOOL)canvasEditorCanDeleteWithSender:(id)arg0 ;
-(BOOL)canvasEditorCanDuplicateWithSender:(id)arg0 ;
-(BOOL)canvasEditorCanGroupWithSender:(id)arg0 ;
-(BOOL)canvasEditorCanSelectAllWithSender:(id)arg0 ;
-(BOOL)canvasEditorCanUngroupWithSender:(id)arg0 ;
-(BOOL)isCharIndex:(NSUInteger)arg0 withEolAffinity:(BOOL)arg1 atBoundary:(NSInteger)arg2 inDirection:(NSInteger)arg3 ;
-(BOOL)isCharIndex:(NSUInteger)arg0 withinTextUnit:(NSInteger)arg1 inDirection:(NSInteger)arg2 ;
-(BOOL)isRepSelectable:(id)arg0 ;
-(BOOL)isSelectedInfo:(id)arg0 ;
-(BOOL)shouldPushNewEditorForNewSelection;
-(BOOL)shouldUseAlternateSelectionHighlight;
-(BOOL)textIsVerticalAtCharIndex:(NSUInteger)arg0 ;
-(BOOL)wantsKeyboard;
-(Class)editorClassForSelection;
-(NSInteger)returnKeyType;
-(NSUInteger)charIndexByMovingPosition:(id)arg0 toBoundary:(NSInteger)arg1 inDirection:(NSInteger)arg2 preferPosition:(*CGFloat)arg3 ;
-(NSUInteger)countOfDrawables;
-(NSUInteger)textLength;
-(id)canvasSelectionWithInfos:(id)arg0 ;
-(id)canvasSelectionWithInfos:(id)arg0 andContainer:(id)arg1 ;
-(id)documentRoot;
-(id)drawables;
-(id)editorToPopToOnEndEditing;
-(id)initWithInteractiveCanvasController:(id)arg0 ;
-(id)keyCommands;
-(id)p_filterNonDisplayedInfos:(id)arg0 ;
-(id)p_nextInfoInTabSequence:(int)arg0 ;
-(id)p_spatiallySortedDrawables;
-(id)pasteboardController;
-(id)selectionRectsForRange:(struct _NSRange )arg0 ;
-(id)selectionWithRange:(struct _NSRange )arg0 ;
-(id)textColorAtCharIndex:(NSUInteger)arg0 ;
-(id)textFontAtCharIndex:(NSUInteger)arg0 ;
-(id)textInRange:(struct _NSRange )arg0 ;
-(int)canPerformEditorAction:(SEL)arg0 withSender:(id)arg1 ;
-(struct CGRect )firstRectForRange:(struct _NSRange )arg0 ;
-(struct _NSRange )editRange;
-(struct _NSRange )rangeOfWordEnclosingCharIndex:(NSUInteger)arg0 backward:(BOOL)arg1 ;
-(void)beginAutomaticTextEditingIfNeededForPoint:(struct CGPoint )arg0 ;
-(void)canvasInfosDidChange;
-(void)clearMarkedRange;
-(void)connectWithConnectionLine:(id)arg0 ;
-(void)copy:(id)arg0 ;
-(void)copyToPasteboard:(id)arg0 withSender:(id)arg1 ;
-(void)dealloc;
-(void)endEditing;
-(void)extendSelectionLeft;
-(void)extendSelectionRight;
-(void)insertBacktab:(id)arg0 ;
-(void)insertTab:(id)arg0 ;
-(void)insertText:(id)arg0 ;
-(void)p_notifyRepsForSelectionChangeFrom:(id)arg0 to:(id)arg1 ;
-(void)repWasCreated:(id)arg0 ;
-(void)replaceRange:(struct _NSRange )arg0 withText:(id)arg1 ;
-(void)scrollToBeginningOfDocument:(id)arg0 ;
-(void)scrollToEndOfDocument:(id)arg0 ;
-(void)select:(id)arg0 ;
-(void)selectAll:(id)arg0 ;
-(void)setMarkedText:(id)arg0 selectedRange:(struct _NSRange )arg1 ;
-(void)teardown;


@end


#endif