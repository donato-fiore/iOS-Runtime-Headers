// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8VIDEOSUI31PLAYERHUDDOCUMENTVIEWCONTROLLER_H
#define _TTC8VIDEOSUI31PLAYERHUDDOCUMENTVIEWCONTROLLER_H

@class TtC8VideosUI29DocumentRequestViewController;
@protocol VUIMultiPlayerDetailsViewController;



@interface _TtC8VideosUI31PlayerHUDDocumentViewController : TtC8VideosUI29DocumentRequestViewController <VUIMultiPlayerDetailsViewController>

 {
    ? templateControllerHosted;
    ? nowPlayingTabDelegate;
    ? tabContextData;
    ? refetchUpNext;
}


@property (nonatomic, readonly) NSInteger itemCount;


-(id)initWithCoder:(id)arg0 ;
-(void)updateWithSelectedPlaybackIdentifiers:(id)arg0 reloadingData:(BOOL)arg1 ;
-(void)vui_viewDidAppear:(BOOL)arg0 ;
-(void)vui_viewDidDisappear:(BOOL)arg0 ;


@end


#endif