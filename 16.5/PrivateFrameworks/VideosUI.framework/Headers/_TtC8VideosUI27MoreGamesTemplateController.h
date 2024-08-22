// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8VIDEOSUI27MOREGAMESTEMPLATECONTROLLER_H
#define _TTC8VIDEOSUI27MOREGAMESTEMPLATECONTROLLER_H

@class TtC8VideosUI27PlayerHUDTemplateController;
@protocol VUIMultiPlayerDetailsViewController;



@interface _TtC8VideosUI27MoreGamesTemplateController : TtC8VideosUI27PlayerHUDTemplateController <VUIMultiPlayerDetailsViewController>

 {
    ? cancellables;
    ? focusedViewModelIdentifier;
    ? shouldDismissOnSelect;
}


@property (nonatomic, readonly) NSInteger itemCount;


-(id)initWithCoder:(id)arg0 ;
-(void)updateWithSelectedPlaybackIdentifiers:(id)arg0 reloadingData:(BOOL)arg1 ;
-(void)vuiCollectionView:(id)arg0 willDisplay:(id)arg1 for:(id)arg2 ;
-(void)vui_viewDidLoad;
-(void)vui_viewWillAppear:(BOOL)arg0 ;


@end


#endif