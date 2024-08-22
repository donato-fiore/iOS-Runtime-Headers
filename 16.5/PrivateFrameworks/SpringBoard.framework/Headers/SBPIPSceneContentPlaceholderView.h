// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBPIPSCENECONTENTPLACEHOLDERVIEW_H
#define SBPIPSCENECONTENTPLACEHOLDERVIEW_H

@class UIView, UIImageView, NSString;
@protocol SBScenePlaceholderContentView;



@interface SBPIPSceneContentPlaceholderView : UIView <SBScenePlaceholderContentView>

 {
    UIImageView *_imageView;
}


@property (nonatomic) NSInteger containerOrientation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger statusBarStyle;
@property (readonly) Class superclass;


-(id)initWithImage:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif