// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8VIDEOSUI25SEARCHSTACKVIEWCONTROLLER_H
#define _TTC8VIDEOSUI25SEARCHSTACKVIEWCONTROLLER_H

@class TtC8VideosUI19StackViewController;



@interface _TtC8VideosUI25SearchStackViewController : TtC8VideosUI19StackViewController {
    ? delegate;
    ? validResultCategoryId;
    ? isShowingHints;
    ? $__lazy_storage_$_portraitFullScreenSizeClass;
    ? $__lazy_storage_$_prototypeCellDictionary;
}




-(id)initWithCoder:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)vuiCollectionView:(id)arg0 didSelectItemAt:(id)arg1 ;
-(void)vui_didMoveToParentViewController:(id)arg0 ;
-(void)vui_viewDidLoad;


@end


#endif