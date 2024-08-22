// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8VIDEOSUI16FLOWCASEVIEWCELL_H
#define _TTC8VIDEOSUI16FLOWCASEVIEWCELL_H

@class TtC8VideosUI16CarouselViewCell;



@interface _TtC8VideosUI16FlowcaseViewCell : TtC8VideosUI16CarouselViewCell {
    ? flowcaseLayout;
    ? backgroundMediaController;
    ? scrollViewMonitor;
    ? imageViewModel;
    ? alphaImageViewModel;
    ? previousSize;
    ? imageViewContext;
    ? playbackDidStartObserver;
    ? playbackDidStopObserver;
    ? playbackDidPlayToEndObserver;
    ? userInterfaceStyleToRestore;
    ? waitingToShowImageWhilePaused;
    ? ignorePlaybackStop;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )vui_layoutSubviews:(struct CGSize )arg0 computationOnly:(BOOL)arg1 ;
-(void)onImageDidLoad:(id)arg0 ;
-(void)vui_prepareForReuse;


@end


#endif