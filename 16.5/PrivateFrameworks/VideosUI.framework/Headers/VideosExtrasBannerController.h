// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VIDEOSEXTRASBANNERCONTROLLER_H
#define VIDEOSEXTRASBANNERCONTROLLER_H

@class IKDocumentBannerElement, UIImageView, NSLayoutConstraint, NSArray, UIView, UIScrollView;

#import <Foundation/Foundation.h>


@interface VideosExtrasBannerController : NSObject

@property (readonly, nonatomic) IKDocumentBannerElement *bannerElement; // ivar: _bannerElement
@property (retain, nonatomic) UIImageView *bannerImageView; // ivar: _bannerImageView
@property (retain, nonatomic) NSLayoutConstraint *bannerImageViewHeightConstraint; // ivar: _bannerImageViewHeightConstraint
@property (retain, nonatomic) NSArray *installedConstraints; // ivar: _installedConstraints
@property (weak, nonatomic) UIView *installedView; // ivar: _installedView
@property (retain, nonatomic) UIView *maskView; // ivar: _maskView
@property (weak, nonatomic) UIScrollView *trackingScrollView; // ivar: _trackingScrollView
@property (retain, nonatomic) UIImageView *vignetteImageView; // ivar: _vignetteImageView
@property (nonatomic) NSUInteger vignetteType; // ivar: _vignetteType


-(id)initWithBannerElement:(id)arg0 ;
-(void)_configureBanner;
-(void)_doAllSetup;
-(void)_updateVignetteImage;
-(void)installBannerOnView:(id)arg0 anchoredToScrollView:(id)arg1 ;


@end


#endif