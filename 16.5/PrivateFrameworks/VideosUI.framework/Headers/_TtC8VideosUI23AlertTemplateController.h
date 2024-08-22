// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8VIDEOSUI23ALERTTEMPLATECONTROLLER_H
#define _TTC8VIDEOSUI23ALERTTEMPLATECONTROLLER_H

@class TtC8VideosUI17VUIViewController, NSArray;



@interface _TtC8VideosUI23AlertTemplateController : TtC8VideosUI17VUIViewController {
    ? delegate;
    ? dynamicButtons;
    ? templateViewModel;
    ? collectionViewModels;
    ? lastFocusedIndexPath;
    ? updateAutoHighlight;
    ? collectionTableItems;
}


@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)vui_loadView;
-(void)vui_viewDidDisappear:(BOOL)arg0 ;
-(void)vui_viewDidLayoutSubviews;


@end


#endif