// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8VIDEOSUI33SPORTSFAVORITESTEMPLATECONTROLLER_H
#define _TTC8VIDEOSUI33SPORTSFAVORITESTEMPLATECONTROLLER_H

@class TtC8VideosUI23StackTemplateController;



@interface _TtC8VideosUI33SportsFavoritesTemplateController : TtC8VideosUI23StackTemplateController {
    ? syncTeamFavorites;
    ? templateUpdateObserver;
    ? teamsServiceRequest;
    ? favoriteTeamsBefore;
}




-(id)initWithCoder:(id)arg0 ;
-(void)vuiCollectionView:(id)arg0 didSelectItemAt:(id)arg1 ;
-(void)vuiCollectionView:(id)arg0 willDisplay:(id)arg1 for:(id)arg2 ;
-(void)vui_viewDidAppear:(BOOL)arg0 ;
-(void)vui_viewDidDisappear:(BOOL)arg0 ;
-(void)vui_viewDidLoad;


@end


#endif