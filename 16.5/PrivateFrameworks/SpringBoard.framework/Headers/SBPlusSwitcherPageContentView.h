// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBPLUSSWITCHERPAGECONTENTVIEW_H
#define SBPLUSSWITCHERPAGECONTENTVIEW_H

@class UIView, MTMaterialView, UIImageView, NSString;
@protocol SBAppSwitcherPageContentView;



@interface SBPlusSwitcherPageContentView : UIView <SBAppSwitcherPageContentView>

 {
    MTMaterialView *_materialView;
    UIImageView *_plusImageView;
}


@property (nonatomic, getter=isActive) BOOL active; // ivar: active
@property (readonly, nonatomic) BOOL contentRequiresGroupOpacity; // ivar: contentRequiresGroupOpacity
@property (nonatomic) CGFloat cornerRadius; // ivar: cornerRadius
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger maskedCorners;
@property (nonatomic) NSInteger orientation; // ivar: orientation
@property (readonly) Class superclass;
@property (nonatomic, getter=isVisible) BOOL visible; // ivar: visible


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)invalidate;
-(void)layoutSubviews;


@end


#endif