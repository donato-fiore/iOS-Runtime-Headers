// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIDOCUMENTPROPERTIESHEADERVIEW_H
#define _UIDOCUMENTPROPERTIESHEADERVIEW_H

@class NSString, LPLinkView;
@protocol UIDragInteractionDelegate, UIGestureRecognizerDelegate, LPLinkViewDelegate, UIPointerInteractionDelegate;


#import "UIView.h"
#import "UIDocumentProperties.h"
#import "UIContextMenuInteraction.h"
#import "UIButton.h"

@interface _UIDocumentPropertiesHeaderView : UIView <UIDragInteractionDelegate, UIGestureRecognizerDelegate, LPLinkViewDelegate, UIPointerInteractionDelegate>

 {
    UIDocumentProperties *_properties;
    UIContextMenuInteraction *_menuInteraction;
    id *_sourceViewProvider;
    UIButton *_shareButton;
    ? _flags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) LPLinkView *linkView; // ivar: _linkView
@property (readonly) Class superclass;


-(id)_defaultDragPreview;
-(id)_defaultSharePreview;
-(id)dragInteraction:(id)arg0 itemsForBeginningSession:(id)arg1 ;
-(id)dragInteraction:(id)arg0 previewForCancellingItem:(id)arg1 withDefault:(id)arg2 ;
-(id)dragInteraction:(id)arg0 previewForLiftingItem:(id)arg1 session:(id)arg2 ;
-(id)initWithProperties:(id)arg0 metadata:(id)arg1 menuInteraction:(id)arg2 sourceViewProvider:(id)arg3 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(struct CGRect )_rectForDragInteraction;
-(struct CGRect )_rectForShareButton;
-(void)_share:(id)arg0 ;
-(void)dragInteraction:(id)arg0 sessionWillBegin:(id)arg1 ;
-(void)linkViewNeedsResize:(id)arg0 ;
-(void)update;


@end


#endif