// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIDRAGITEM_H
#define UIDRAGITEM_H

@class NSItemProvider;
@protocol _UIDragSetDownAnimationTarget, _UIDragDropSessionInternal;

#import <Foundation/Foundation.h>

#import "UITextRange.h"
#import "_UIDragPreviewBlockProvider.h"
#import "UITargetedDragPreview.h"

@interface UIDragItem : NSObject

@property (retain, nonatomic, setter=_setDraggedTextRange:) UITextRange *_draggedTextRange;
@property (nonatomic) NSUInteger _managementState; // ivar: __managementState
@property (nonatomic, getter=_deferPreviewUpdates, setter=_setDeferPreviewUpdates:) BOOL deferPreviewUpdates; // ivar: _deferPreviewUpdates
@property (weak, nonatomic, getter=_destinationVisualTarget, setter=_setDestinationVisualTarget:) NSObject<_UIDragSetDownAnimationTarget> *destinationVisualTarget; // ivar: _destinationVisualTarget
@property (nonatomic, getter=_isDirty, setter=_setDirty:) BOOL dirty; // ivar: _dirty
@property (weak, nonatomic, getter=_dragDropSession, setter=_setDragDropSession:) NSObject<_UIDragDropSessionInternal> *dragDropSession; // ivar: _dragDropSession
@property (retain, nonatomic) _UIDragPreviewBlockProvider *dragPreviewBlockProvider; // ivar: _dragPreviewBlockProvider
@property (retain, nonatomic) NSItemProvider *itemProvider; // ivar: _itemProvider
@property (retain, nonatomic) id *localObject; // ivar: _localObject
@property (nonatomic) NSUInteger preferredPreviewType; // ivar: _preferredPreviewType
@property (copy, nonatomic) id *previewProvider; // ivar: _previewProvider
@property (retain, nonatomic, getter=_privateLocalContext, setter=_setPrivateLocalContext:) id *privateLocalContext; // ivar: _privateLocalContext
@property (weak, nonatomic, getter=_sourceVisualTarget, setter=_setSourceVisualTarget:) NSObject<_UIDragSetDownAnimationTarget> *sourceVisualTarget; // ivar: _sourceVisualTarget
@property (retain, nonatomic, getter=_targetedLiftPreview) UITargetedDragPreview *targetedLiftPreview; // ivar: _targetedLiftPreview
@property (nonatomic) NSUInteger updatedPreviewType; // ivar: _updatedPreviewType
@property (nonatomic, getter=_visibleDropItemSize, setter=_setVisibleDropItemSize:) CGSize visibleDropItemSize; // ivar: _visibleDropItemSize


-(id)_chiclet;
-(id)_currentPreviewProvider;
-(id)_previewProviderForType:(NSUInteger)arg0 ;
-(id)_uicmi_getAssociatedMenuIdentifier;
-(id)initWithItemProvider:(id)arg0 ;
-(void)_loadOriginalImageComponentProvider;
-(void)_previewNeedsUpdateForType:(NSUInteger)arg0 ;
-(void)_uicmi_setAssociatedMenuIdentifier:(id)arg0 ;
-(void)_updatePreferredPreview;


@end


#endif