// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UICONTINUOUSPATHINTRODUCTIONVIEW_H
#define UICONTINUOUSPATHINTRODUCTIONVIEW_H

@class AVPlayerLooper, AVQueuePlayer, NSArray, NSLayoutConstraint, AVPlayerLayer;


#import "UIKBTutorialModalDisplay.h"
#import "UIView.h"
#import "UIButton.h"
#import "UILabel.h"

@interface UIContinuousPathIntroductionView : UIKBTutorialModalDisplay {
    CGSize _videoSize;
    CGFloat _textMargin;
    CGFloat _paddingAdjust;
    AVPlayerLooper *_playerLooper;
    AVQueuePlayer *_player;
}


@property (retain, nonatomic) UIView *keyboardView; // ivar: _keyboardView
@property (retain, nonatomic) UIButton *landscapeButton; // ivar: _landscapeButton
@property (retain, nonatomic) NSArray *landscapeConstraints; // ivar: _landscapeConstraints
@property (retain, nonatomic) UILabel *landscapeTextBody; // ivar: _landscapeTextBody
@property (retain, nonatomic) NSArray *portraitConstraints; // ivar: _portraitConstraints
@property (retain, nonatomic) UIView *textVideoContainer; // ivar: _textVideoContainer
@property (retain, nonatomic) NSLayoutConstraint *videoHeight; // ivar: _videoHeight
@property (retain, nonatomic) AVPlayerLayer *videoLayer; // ivar: _videoLayer
@property (retain, nonatomic) NSLayoutConstraint *videoWidth; // ivar: _videoWidth


-(CGFloat)mediaLayoutWidthAdjustment;
-(NSInteger)textBodyMaxLines;
-(id)_introductionMovieAssetURL;
-(id)initWithKeyboardAppearance:(NSInteger)arg0 ;
-(id)mediaContents;
-(id)textBodyDescriptions;
-(id)textTitleDescriptions;
-(void)extraButtonTapAction;
-(void)removeFromSuperview;
-(void)setupConstraintData;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateVideoLayerWithNewVideo:(BOOL)arg0 ;


@end


#endif