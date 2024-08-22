// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UITABLEVIEWDROPCOORDINATORIMPL_H
#define _UITABLEVIEWDROPCOORDINATORIMPL_H

@class NSIndexPath, NSArray, NSString;
@protocol _UITableViewDropCoordinator, UIDropSession, _UITableViewDropCoordinatorDelegate;

#import <Foundation/Foundation.h>

#import "UITableViewDropProposal.h"

@interface _UITableViewDropCoordinatorImpl : NSObject <_UITableViewDropCoordinator>



@property (readonly, nonatomic) NSIndexPath *_destinationIndexPath;
@property (readonly, nonatomic) UITableViewDropProposal *_dropProposal;
@property (readonly, nonatomic) NSObject<UIDropSession> *_dropSession;
@property (readonly, nonatomic) NSArray *_items;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_UITableViewDropCoordinatorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSIndexPath *destinationIndexPath; // ivar: _destinationIndexPath
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *items; // ivar: _items
@property (retain, nonatomic) UITableViewDropProposal *proposal; // ivar: _proposal
@property (retain, nonatomic) NSObject<UIDropSession> *session; // ivar: _session
@property (readonly) Class superclass;
@property (retain, nonatomic, getter=_translatedDestinationIndexPath, setter=_setTranslatedDestinationIndexPath:) NSIndexPath *translatedDestinationIndexPath; // ivar: _translatedDestinationIndexPath


-(id)_dropItem:(id)arg0 toPlaceholderInsertedAtIndexPath:(id)arg1 withReuseIdentifier:(id)arg2 rowHeight:(CGFloat)arg3 cellUpdateHandler:(id)arg4 ;
-(id)_sourceIndexPaths;
-(id)dropItem:(id)arg0 intoRowAtIndexPath:(id)arg1 rect:(struct CGRect )arg2 ;
-(id)dropItem:(id)arg0 toPlaceholder:(id)arg1 ;
-(id)dropItem:(id)arg0 toPlaceholderInsertedAtIndexPath:(id)arg1 withReuseIdentifier:(id)arg2 rowHeight:(CGFloat)arg3 cellUpdateHandler:(id)arg4 ;
-(id)dropItem:(id)arg0 toRowAtIndexPath:(id)arg1 ;
-(id)dropItem:(id)arg0 toTarget:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 destinationIndexPath:(id)arg1 dropProposal:(id)arg2 session:(id)arg3 ;
-(void)_dropItem:(id)arg0 toCell:(id)arg1 withPreviewParameters:(id)arg2 ;
-(void)_dropItem:(id)arg0 toRowAtIndexPath:(id)arg1 ;
-(void)_dropItem:(id)arg0 toTarget:(id)arg1 ;
-(void)_translateDestinationIndexPath:(id)arg0 ;
-(void)_translateSourceIndexPathsOfDropItems:(id)arg0 ;


@end


#endif