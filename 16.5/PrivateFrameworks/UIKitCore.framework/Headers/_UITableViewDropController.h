// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UITABLEVIEWDROPCONTROLLER_H
#define _UITABLEVIEWDROPCONTROLLER_H

@class NSString, NSMapTable, UITableView<_UITableViewDropControllerDelegate>, NSIndexPath;
@protocol UIDropInteractionDelegate_Private, _UITableViewDropCoordinatorDelegate, UIDropSession;

#import <Foundation/Foundation.h>

#import "UIDropInteraction.h"
#import "UITableViewDropProposal.h"

@interface _UITableViewDropController : NSObject <UIDropInteractionDelegate_Private, _UITableViewDropCoordinatorDelegate>



@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (nonatomic) BOOL canOnlyHandleReordering; // ivar: _canOnlyHandleReordering
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSUInteger defaultDropOperation; // ivar: _defaultDropOperation
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMapTable *dragItemDropAnimations; // ivar: _dragItemDropAnimations
@property (retain, nonatomic) UIDropInteraction *dropInteraction; // ivar: _dropInteraction
@property (retain, nonatomic) UITableViewDropProposal *dropProposal; // ivar: _dropProposal
@property (retain, nonatomic) NSObject<UIDropSession> *dropSession; // ivar: _dropSession
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger ignoringDragsCount; // ivar: _ignoringDragsCount
@property (readonly, nonatomic) BOOL shouldIgnoreDrags;
@property (readonly) Class superclass;
@property (weak, nonatomic) UITableView<_UITableViewDropControllerDelegate> *tableView; // ivar: _tableView
@property (retain, nonatomic) NSIndexPath *targetIndexPath; // ivar: _targetIndexPath
@property (readonly, nonatomic, getter=isTrackingDrag) BOOL trackingDrag;


-(BOOL)commitPlaceholderInsertionWithContext:(id)arg0 dataSourceUpdates:(id)arg1 ;
-(BOOL)deletePlaceholder:(id)arg0 ;
-(NSInteger)_dropInteraction:(id)arg0 dataOwnerForSession:(id)arg1 ;
-(id)animateDragItem:(id)arg0 intoRowAtIndexPath:(id)arg1 rect:(struct CGRect )arg2 ;
-(id)animateDragItem:(id)arg0 toCell:(id)arg1 withPreviewParameters:(id)arg2 ;
-(id)animateDragItem:(id)arg0 toRowAtIndexPath:(id)arg1 ;
-(id)animateDragItem:(id)arg0 toTarget:(id)arg1 ;
-(id)beginIgnoringDrags;
-(id)defaultAnimatorForDragItem:(id)arg0 ;
-(id)dropInteraction:(id)arg0 previewForDroppingItem:(id)arg1 withDefault:(id)arg2 ;
-(id)dropInteraction:(id)arg0 sessionDidUpdate:(id)arg1 ;
-(id)initWithTableView:(id)arg0 ;
-(void)dropInteraction:(id)arg0 concludeDrop:(id)arg1 ;
-(void)dropInteraction:(id)arg0 item:(id)arg1 willAnimateDropWithAnimator:(id)arg2 ;
-(void)dropInteraction:(id)arg0 performDrop:(id)arg1 ;
-(void)dropInteraction:(id)arg0 sessionDidEnd:(id)arg1 ;
-(void)dropInteraction:(id)arg0 sessionDidEnter:(id)arg1 ;
-(void)dropInteraction:(id)arg0 sessionDidExit:(id)arg1 ;
-(void)endIgnoringDrags;
-(void)insertPlaceholderAtIndexPath:(id)arg0 withContext:(id)arg1 previewParametersProvider:(id)arg2 ;
-(void)resetAllDragState;
-(void)resetTrackingState;
-(void)setupDragInteraction;
-(void)uninstallFromTableView;
-(void)updateTargetIndexPathAndDropProposalForSession:(id)arg0 ;


@end


#endif