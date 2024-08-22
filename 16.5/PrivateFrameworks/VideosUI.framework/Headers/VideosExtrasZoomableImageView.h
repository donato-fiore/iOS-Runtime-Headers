// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VIDEOSEXTRASZOOMABLEIMAGEVIEW_H
#define VIDEOSEXTRASZOOMABLEIMAGEVIEW_H

@class UIScrollView, NSString, UIImage, UIImageView;
@protocol UIScrollViewDelegate, VideosExtrasZoomingImageTransitionParticipant;



@interface VideosExtrasZoomableImageView : UIScrollView <UIScrollViewDelegate, VideosExtrasZoomingImageTransitionParticipant>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (nonatomic) CGSize imageSize; // ivar: _imageSize
@property (nonatomic) CGPoint pointToCenterAfterResize; // ivar: _pointToCenterAfterResize
@property (nonatomic) CGFloat scaleToRestoreAfterResize; // ivar: _scaleToRestoreAfterResize
@property (readonly) Class superclass;
@property (retain, nonatomic) UIImageView *zoomView; // ivar: _zoomView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)viewForZoomingInScrollView:(id)arg0 ;
-(struct CGPoint )_maximumContentOffset;
-(struct CGPoint )_minimumContentOffset;
-(void)_prepareToResize;
-(void)_recoverFromResizing;
-(void)_updateMinimumAndMaximumZoomScalesForCurrentBounds;
-(void)dealloc;
-(void)finalizeZoomingImageTransitionWithContext:(id)arg0 transitionFinished:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)performZoomingImageTransitionWithContext:(id)arg0 ;
-(void)prepareZoomingImageTransitionWithContext:(id)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)zoomToPoint:(struct CGPoint )arg0 animated:(BOOL)arg1 ;


@end


#endif