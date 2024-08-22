// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UICOMMANDMENUDELETION_H
#define _UICOMMANDMENUDELETION_H

@class UICommandChange, NSString;



@interface _UICommandMenuDeletion : UICommandChange

@property (readonly, nonatomic) NSString *anchor;


+(id)deletionWithAnchor:(id)arg0 ;
// -(BOOL)acceptBoolItemInsertionVisit:(id)arg0 itemDeletionVisit:(unk)arg1 menuInsertionVisit:(id)arg2 menuDeletionVisit:(unk)arg3  ;
-(id)initWithAnchor:(id)arg0 ;
// -(void)acceptItemInsertionVisit:(id)arg0 itemDeletionVisit:(unk)arg1 menuInsertionVisit:(id)arg2 menuDeletionVisit:(unk)arg3  ;


@end


#endif