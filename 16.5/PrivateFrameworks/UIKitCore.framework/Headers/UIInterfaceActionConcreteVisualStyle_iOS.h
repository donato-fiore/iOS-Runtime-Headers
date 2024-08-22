// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIINTERFACEACTIONCONCRETEVISUALSTYLE_IOS_H
#define UIINTERFACEACTIONCONCRETEVISUALSTYLE_IOS_H

@class NSString;
@protocol UIInterfaceActionConcreteVisualStyleImpl;


#import "UIInterfaceActionConcreteVisualStyle.h"

@interface UIInterfaceActionConcreteVisualStyle_iOS : UIInterfaceActionConcreteVisualStyle <UIInterfaceActionConcreteVisualStyleImpl>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)selectByIndirectPointerTouchRequired;
-(BOOL)selectionFeedbackEnabled;
-(CGFloat)contentCornerRadius;
-(CGFloat)horizontalImageContentSpacing;
-(CGFloat)verticalImageContentSpacing;
-(id)_highlightedView;
-(id)_preferredActionFont;
-(id)_regularActionFont;
-(id)actionTitleLabelColorForViewState:(id)arg0 ;
-(id)actionTitleLabelFontForViewState:(id)arg0 ;
-(id)defaultScreen;
-(id)newActionBackgroundViewForViewState:(id)arg0 ;
-(id)newActionSeparatorViewForGroupViewState:(id)arg0 ;
-(id)newGroupBackgroundViewWithGroupViewState:(id)arg0 ;
-(id)newSectionSeparatorViewForGroupViewState:(id)arg0 ;
-(struct UIEdgeInsets )contentMargin;


@end


#endif