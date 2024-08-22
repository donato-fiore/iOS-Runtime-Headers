// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPKBASECONTENTVIEW_H
#define TPKBASECONTENTVIEW_H

@class UIView, UIColor;
@protocol TPKContentViewDelegate;


#import "TPKContent.h"

@interface TPKBaseContentView : UIView {
    ? directionalEdgeInsets;
    ? contentViewBackgroundColor;
    ? viewModel;
}


@property (nonatomic, retain) TPKContent *content; // ivar: content
@property (nonatomic, retain) UIColor *contentBackgroundColor;
@property (nonatomic) NSDirectionalEdgeInsets defaultDirectionalEdgeInsets;
@property (nonatomic, retain) UIView *hostingView; // ivar: hostingView
@property (nonatomic, weak) NSObject<TPKContentViewDelegate> *viewDelegate; // ivar: viewDelegate


-(id)createHostingView;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithController:(id)arg0 content:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithReusableTipView:(id)arg0 ;
-(void)contentSizeCategoryDidChange:(id)arg0 ;
-(void)deviceOrientationDidChange:(id)arg0 ;
-(void)monitorContentSizeCategoryChanges;
-(void)setupHostingViewWithController:(id)arg0 content:(id)arg1 ;
-(void)updateContentBackgroundColor:(id)arg0 ;
-(void)updatePreferredDirectionEdgeInsets:(struct NSDirectionalEdgeInsets )arg0 ;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif