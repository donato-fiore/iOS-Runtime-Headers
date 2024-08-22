// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIINTERFACEACTIONCUSTOMVIEWREPRESENTATIONVIEW_H
#define _UIINTERFACEACTIONCUSTOMVIEWREPRESENTATIONVIEW_H



#import "UIInterfaceActionRepresentationView.h"
#import "UIView.h"

@interface _UIInterfaceActionCustomViewRepresentationView : UIInterfaceActionRepresentationView {
    UIView *_actionContentView;
}




-(BOOL)hasLayoutHeightConstraintsIdenticalToRepresentationView:(id)arg0 ;
-(NSInteger)_focusItemDeferralMode;
-(id)_actionContentView;
-(id)_fittingContentSizingView;
-(id)description;
-(id)initWithAction:(id)arg0 ;
-(void)_insertLoadedContentsIntoHierarchy;
-(void)_removeLoadedContentsFromViewHierarcy;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)updateContentsInsertedIntoHierarchy;


@end


#endif