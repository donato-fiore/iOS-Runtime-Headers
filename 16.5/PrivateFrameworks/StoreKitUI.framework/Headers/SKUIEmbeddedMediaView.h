// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIEMBEDDEDMEDIAVIEW_H
#define SKUIEMBEDDEDMEDIAVIEW_H

@class UIControl, MPMoviePlayerController, UIImageView, NSString, UIImage;
@protocol SKUIEmbeddedMediaViewDelegate;



@interface SKUIEmbeddedMediaView : UIControl {
    MPMoviePlayerController *_moviePlayer;
    UIImageView *_playerDecorationView;
    UIImageView *_thumbnailReflectionView;
    UIImageView *_thumbnailView;
    BOOL _usingInlinePlayback;
}


@property (weak, nonatomic) NSObject<SKUIEmbeddedMediaViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSInteger mediaType; // ivar: _mediaType
@property (copy, nonatomic) NSString *mediaURLString; // ivar: _mediaURLString
@property (readonly, nonatomic) NSInteger playbackState;
@property (nonatomic) BOOL showsThumbnailReflection;
@property (nonatomic) NSInteger thumbnailContentMode;
@property (retain, nonatomic) UIImage *thumbnailImage;


-(id)_newMoviePlayerControllerWithURL:(id)arg0 ;
-(id)_thumbnailView;
-(struct CGSize )_sizeToFitImageSize:(struct CGSize )arg0 bounds:(struct CGRect )arg1 ;
-(void)_didExitFullscreen:(id)arg0 ;
-(void)_didFinishPlayback:(id)arg0 ;
-(void)_playbackStateChanged:(id)arg0 ;
-(void)_sendPlaybackStateChanged;
-(void)_tearDownMoviePlayer;
-(void)beginInlinePlaybackWithURL:(id)arg0 ;
-(void)beginPlaybackAnimated:(BOOL)arg0 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)endPlaybackAnimated:(BOOL)arg0 ;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg0 ;


@end


#endif