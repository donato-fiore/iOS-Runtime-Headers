// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8VIDEOSUI27PLAYERHUDTEMPLATECONTROLLER_H
#define _TTC8VIDEOSUI27PLAYERHUDTEMPLATECONTROLLER_H

@class TtC8VideosUI23StackTemplateController;



@interface _TtC8VideosUI27PlayerHUDTemplateController : TtC8VideosUI23StackTemplateController {
    ? contextData;
    ? nowPlayingTabDelegate;
    ? shouldDismissOnSelect;
}




-(id)initWithCoder:(id)arg0 ;
-(void)vui_viewDidDisappear:(BOOL)arg0 ;
-(void)vui_viewDidLayoutSubviews;
-(void)vui_viewDidLoad;
-(void)vui_viewWillAppear:(BOOL)arg0 ;


@end


#endif