// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KNMACMUTABLEUILAYOUT_H
#define KNMACMUTABLEUILAYOUT_H



#import "KNMacUILayout.h"

@interface KNMacMutableUILayout : KNMacUILayout

@property (nonatomic) BOOL activityStreamWasShown;
@property (nonatomic) NSInteger inspectorPaneHiddenState;
@property (nonatomic) NSInteger inspectorPaneViewMode;
@property (nonatomic, getter=isShowingActivityStream) BOOL showingActivityStream;
@property (nonatomic, getter=isShowingElementList) BOOL showingElementList;
@property (nonatomic, getter=isShowingLightTable) BOOL showingLightTable;
@property (nonatomic, getter=isShowingPresenterNotes) BOOL showingPresenterNotes;
@property (nonatomic, getter=isShowingSidebar) BOOL showingSidebar;
@property (nonatomic, getter=isShowingTemplateSlides) BOOL showingTemplateSlides;
@property (nonatomic) NSInteger sidebarViewMode;




@end


#endif