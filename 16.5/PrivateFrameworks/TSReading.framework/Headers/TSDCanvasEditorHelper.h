// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDCANVASEDITORHELPER_H
#define TSDCANVASEDITORHELPER_H

@class NSString;
@protocol TSKChangeSourceObserver, TSDCanvasEditor;

#import <Foundation/Foundation.h>

#import "TSKChangeNotifier.h"

@interface TSDCanvasEditorHelper : NSObject <TSKChangeSourceObserver>

 {
    TSKChangeNotifier *mChangeNotifier;
    id<TSDCanvasEditor> *mCanvasEditor;
    BOOL mTornDown;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)physicalKeyboardIsSender:(id)arg0 ;
+(Class)selectionClass;
+(id)canvasSelectionWithInfos:(id)arg0 ;
+(id)canvasSelectionWithInfos:(id)arg0 andContainer:(id)arg1 ;
-(BOOL)canDeleteComment;
-(BOOL)canGroupDrawables:(id)arg0 ;
-(BOOL)canPerformMaskWithSender:(id)arg0 ;
-(BOOL)canPerformMaskWithShapeTypeWithSender:(id)arg0 ;
-(BOOL)canPerformMaskWithShapeWithSender:(id)arg0 ;
-(BOOL)canPerformUnmaskWithSender:(id)arg0 ;
-(BOOL)canUngroupWithSelection:(id)arg0 ;
-(BOOL)isRepSelectable:(id)arg0 ;
-(BOOL)p_canReduceFileSizeForSelectedImages;
-(BOOL)p_selectionContainsInlineObjects:(id)arg0 ;
-(Class)editorClassForSelection:(id)arg0 ;
-(Class)editorClassForSelectionIgnoringLockedState:(id)arg0 ;
-(Class)p_editorClassForSelection:(id)arg0 shouldIgnoreLockedState:(BOOL)arg1 ;
-(id)canvasEditor;
-(id)canvasSelectionFromRep:(id)arg0 ;
-(id)canvasSelectionWithInfos:(id)arg0 ;
-(id)canvasSelectionWithInfos:(id)arg0 andContainer:(id)arg1 ;
-(id)documentRoot;
-(id)editorToPopToOnEndEditingForSelection:(id)arg0 ;
-(id)infosFromCanvasSelection:(id)arg0 ;
-(id)initWithCanvasEditor:(id)arg0 ;
-(id)interactiveCanvasController;
-(id)layoutsForAlignAndDistribute;
-(id)newEditorForEditorClass:(Class)arg0 ;
-(int)canPerformEditorAction:(SEL)arg0 withSender:(id)arg1 ;
-(int)canvasEditorCanPerformAlignAction:(SEL)arg0 withSender:(id)arg1 ;
-(int)canvasEditorCanPerformConnectWithConnectionLineAction:(SEL)arg0 withSender:(id)arg1 ;
-(int)canvasEditorCanPerformCopyAction:(SEL)arg0 withSender:(id)arg1 ;
-(int)canvasEditorCanPerformCopyStyleAction:(SEL)arg0 withSender:(id)arg1 ;
-(int)canvasEditorCanPerformCutAction:(SEL)arg0 withSender:(id)arg1 ;
-(int)canvasEditorCanPerformDeleteAction:(SEL)arg0 withSender:(id)arg1 ;
-(int)canvasEditorCanPerformDistributeAction:(SEL)arg0 withSender:(id)arg1 ;
-(int)canvasEditorCanPerformDuplicateAction:(SEL)arg0 withSender:(id)arg1 ;
-(int)canvasEditorCanPerformGroupAction:(SEL)arg0 withSender:(id)arg1 ;
-(int)canvasEditorCanPerformLockAction:(SEL)arg0 withSender:(id)arg1 ;
-(int)canvasEditorCanPerformSelectAllAction:(SEL)arg0 withSender:(id)arg1 ;
-(int)canvasEditorCanPerformUngroupAction:(SEL)arg0 withSender:(id)arg1 ;
-(void)asyncProcessChanges:(id)arg0 forChangeSource:(id)arg1 ;
-(void)dealloc;
-(void)notifyRepsForSelectionChangeFrom:(id)arg0 to:(id)arg1 ;
-(void)p_copy:(id)arg0 ;
-(void)pushNewEditorForSelection:(id)arg0 ;
-(void)teardown;


@end


#endif