// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBDEFAULTICONDRAGPREVIEWWINDOW_H
#define SBDEFAULTICONDRAGPREVIEWWINDOW_H

@class UIWindow, NSHashTable;
@protocol SBIconDragPreviewContaining;



@interface SBDefaultIconDragPreviewWindow : UIWindow <SBIconDragPreviewContaining>

 {
    NSHashTable *_platterViews;
}




-(id)_iconDragPreviewContainerView;
-(void)beginTrackingPlatterView:(id)arg0 ;
-(void)stopTrackingPlatterView:(id)arg0 ;


@end


#endif