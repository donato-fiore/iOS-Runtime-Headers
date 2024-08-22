// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8VIDEOSUI36MULTIVIEWPLAYERHUDTEMPLATECONTROLLER_H
#define _TTC8VIDEOSUI36MULTIVIEWPLAYERHUDTEMPLATECONTROLLER_H

@class TtC8VideosUI27PlayerHUDTemplateController;
@protocol VUIMultiPlayerDetailsViewController;



@interface _TtC8VideosUI36MultiViewPlayerHUDTemplateController : TtC8VideosUI27PlayerHUDTemplateController <VUIMultiPlayerDetailsViewController>

 {
    ? cancellables;
    ? focusedViewModelIdentifier;
    ? shouldDismissOnSelect;
}


@property (nonatomic, readonly) NSInteger itemCount;


-(id)initWithCoder:(id)arg0 ;
-(void)updateWithSelectedPlaybackIdentifiers:(id)arg0 reloadingData:(BOOL)arg1 ;
-(void)vui_viewDidLoad;
-(void)vui_viewWillAppear:(BOOL)arg0 ;


@end


#endif