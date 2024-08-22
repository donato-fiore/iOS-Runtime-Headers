// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHICONVIEWCONTEXTMENUSTATECONTROLLER_H
#define SBHICONVIEWCONTEXTMENUSTATECONTROLLER_H

@class NSHashTable, NSMutableSet, NSMutableArray;

#import <Foundation/Foundation.h>


@interface SBHIconViewContextMenuStateController : NSObject {
    NSHashTable *_iconViews;
    NSMutableSet *_presentedWidgetsBundleIdentifiers;
    NSHashTable *_iconViewsPresentingContextMenues;
    NSHashTable *_iconViewsAnimatingContextMenues;
    NSMutableArray *_pendingIconAnimationCompletionBlocks;
}




+(id)sharedInstance;
-(BOOL)areAnyIconViewContextMenusAnimating;
-(BOOL)areAnyIconViewContextMenusShowing;
-(id)init;
-(void)_firePendingIconAnimationBlocks;
-(void)containerViewDidScrollHiddenIconViewAway:(id)arg0 ;
-(void)dismissAppIconForceTouchControllers:(id)arg0 ;
-(void)earlyTerminateAnyContextMenuAnimations;
-(void)iconViewDidAnimateContextMenu:(id)arg0 ;
-(void)iconViewWillAnimateContextMenu:(id)arg0 ;
-(void)iconViewWillDismissContextMenu:(id)arg0 ;
-(void)iconViewWillPresentContextMenu:(id)arg0 ;
-(void)noteFolderControllerWillClose:(id)arg0 ;
-(void)performAfterContextMenuAnimationsHaveCompleted:(id)arg0 ;
-(void)registerIconView:(id)arg0 ;
-(void)unregisterIconView:(id)arg0 ;


@end


#endif